#include "common.h"

struct sCurrentNode {
    int sline;
    string sname;
};

sCurrentNode*% sCurrentNode*::initialize(sCurrentNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCurrentNode*::sline(sCurrentNode* self, sInfo* info)
{
    return self.sline;
}

string sCurrentNode*::sname(sCurrentNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCurrentNode*::compile(sCurrentNode* self, sInfo* info)
{
    info->current_stack_num++;
    string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
    sClass*% current_stack = new sClass(name: class_name, struct_:true);
    
    sVarTable* vtable = info->lv_table;
    
    while(vtable) {
        foreach(it, vtable.mVars) {
            char* key = it;
            sVar* value = vtable.mVars[key];
            
            sType*% type2 = clone value.mType;
            
            type2.mPointerNum++;
            
            tuple2<string, sType*%>*% item = (value.mCValueName, type2);
            
            current_stack.mFields.push_back(item);
        }
        
        vtable = vtable->mParent;
    }
    
    output_struct(current_stack, info);
    
    info.classes.insert(class_name, current_stack);
    
    static int num_current_stack = 0;
    num_current_stack++;
    add_come_code_at_function_head(info, "struct %s __current_stack%d__;\n", class_name, num_current_stack);
    
    vtable = info->lv_table;
    
    while(vtable) {
        foreach(it, vtable.mVars) {
            char* key = it;
            sVar* value = vtable.mVars[key];
            
            sType*% type2 = clone value.mType;
            
            tuple2<string, sType*%>*% item = (value.mCValueName, type2);
            
            if(type2->mClass->mName === "lambda") {
                add_come_code(info, "__current_stack%d__.%s = %s;\n", num_current_stack, value.mCValueName, value.mCValueName);
            }
            else {
                add_come_code(info, "__current_stack%d__.%s = &%s;\n", num_current_stack, value.mCValueName, value.mCValueName);
            }
        }
        
        vtable = vtable->mParent;
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("&__current_stack%d__", num_current_stack);
    come_value.type = new sType(class_name, info);
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sMethodCallNode {
    sNode*% obj;
    string fun_name;
    list<sNode*%>*% params;
    buffer*% method_block;
    int sline;
    string sname;
    int method_block_sline;
};

sMethodCallNode*% sMethodCallNode*::initialize(sMethodCallNode*% self, char* fun_name,sNode*% obj, list<sNode*%>* params, buffer* method_block, int method_block_sline, sInfo* info)
{
    self.obj = clone obj;
    self.fun_name = string(fun_name);
    self.params = clone params;
    self.method_block = clone method_block;
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.method_block_sline = method_block_sline;
    
    return self;
}

int sMethodCallNode*::sline(sMethodCallNode* self, sInfo* info)
{
    return self.sline;
}

string sMethodCallNode*::sname(sMethodCallNode* self, sInfo* info)
{
    return string(self.sname);
}

string make_generics_function(sType* type, string fun_name, sInfo* info)
{
    string none_generics_name = get_none_generics_name(type.mClass.mName);
    
    sType*% obj_type = solve_generics(type, info.generics_type, info).catch {
        err_msg(info, "solve generics error");
        return string("");
    }
    
    string fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
    string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
    
    sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null!);
    
    if(generics_fun) {
        if(!create_generics_fun(string(fun_name2), generics_fun, obj_type, info)) {
            err_msg(info, "%s not found", fun_name3);
            return string("");
        }
    }
    
    return fun_name2;
}

bool sMethodCallNode*::compile(sMethodCallNode* self, sInfo* info)
{
    char* fun_name = self.fun_name;
    list<sNode*%>* params = self.params;
    sNode* obj = self.obj;
    buffer* method_block = self.method_block;
    int method_block_sline = self.method_block_sline;
    
    if(!obj.compile->(info)) {
        return false;
    }
    
    CVALUE*% obj_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* obj_type = obj_value.type;
    
    sClass* klass = obj_type.mClass;
    
    bool calling_dynamic_method = false;
    sType* lambda_type = null;
    foreach(it, klass.mFields) {
        var field_name, field_type = it;
        
        if(field_name === fun_name && field_type.mClass.mName === "lambda") {
            calling_dynamic_method = true;
            lambda_type = field_type;
            break;
        }
    }
    
    if(calling_dynamic_method) {
        sType*% result_type = clone lambda_type->mResultType.v1;
        result_type->mStatic = false;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        int i = 0;
        foreach(it, params) {
            if(i == 0) {
                come_params.push_back(obj_value);
                i++;
            }
            else {
                if(!it.compile->(info)) {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                if(lambda_type.mParamTypes[i-1].mHeap 
                    && come_value.type.mHeap) 
                {
                    come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                }
                come_params.push_back(come_value);
                dec_stack_ptr(1, info);
                
                i++;
            }
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(xsprintf("%s->%s", obj_value.c_value, fun_name));
        buf.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            if(j == 0) {
                it.c_value = xsprintf("%s->_protocol_obj", it.c_value);
            }
            buf.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                buf.append_str(",");
            }
            
            j++;
        }
        buf.append_str(")");
        
        CVALUE*% come_value2 = new CVALUE;
        
        come_value2.c_value = buf.to_string();
        
        if(result_type->mHeap) {
            come_value2.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
        }
        
        come_value2.type = clone result_type;
        come_value2.type->mStatic = false;
        come_value2.var = null;
        
        add_come_last_code(info, "%s;\n", buf.to_string());
        
        info.stack.push_back(come_value2);
    }
    else {
        string generics_fun_name = make_generics_function(obj_value.type, string(fun_name), info).to_string();
        
        sFun* fun = info.funcs.at(generics_fun_name, null!);
        
        if(fun == null) {
            err_msg(info, "function not found(%s) at method\n", generics_fun_name);
            return false;
        }
        
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        int i = 0;
        foreach(it, params) {
            if(i == 0) {
                if(fun.mParamTypes[i].mHeap && obj_value.type.mHeap) {
                    obj_value.c_value = increment_ref_count_object(obj_value.type, obj_value.c_value, info);
                }
                come_params.push_back(obj_value);
                
                i++;
            }
            else {
                if(!it.compile->(info)) {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                if(fun.mParamTypes[i].mHeap && come_value.type.mHeap) {
                    come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                }
                come_params.push_back(come_value);
                dec_stack_ptr(1, info);
                
                i++;
            }
        }
        
        if(method_block) {
            sNode*% current_stack_frame_node = new sNode(new sCurrentNode(info));
            
            if(!current_stack_frame_node.compile->(info)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            come_params.push_back(come_value);
            dec_stack_ptr(1, info);
            
            buffer*% method_block2 = new buffer();
            sType*% method_block_type = clone fun.mParamTypes[-1];
            
            string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
            
            method_block_type.mParamTypes[0].mClass = info.classes[class_name];
            sClass* current_stack_frame_struct = info.current_stack_frame_struct;
            info->current_stack_frame_struct = info.classes[class_name];
            
            info->num_method_block++;
            
            if(method_block_type.mName !== "lambda") {
                err_msg(info, "This function does not have method block(%s)", fun_name);
                return false;
            }
            
            sType*% result_type = clone method_block_type->mResultType.0;
            result_type->mStatic = false;
            list<sType*%>* param_types = method_block_type->mParamTypes;
            list<string>* param_names = method_block_type->mParamNames;
            
            method_block2.append_str(xsprintf("%s method_block%d(", make_type_name_string(result_type, false@in_header, false@array_cast_pointer, info), info->num_method_block));
            
            int i = 0;
            foreach(it, param_types) {
                sType* param_type = it;
                if(i == 0) {
                    string param_name = xsprintf("parent");
                    
                    method_block2.append_str(xsprintf("%s", make_define_var(param_type, param_name, info)));
                }
                else if(i == 1) {
                    string param_name = xsprintf("it");
                    
                    method_block2.append_str(xsprintf("%s", make_define_var(param_type, param_name, info)));
                }
                else {
                    string param_name = xsprintf("it%d", i);
                    
                    method_block2.append_str(xsprintf("%s", make_define_var(param_type, param_name, info)));
                }
                
                if(i != param_types.length() - 1) {
                    method_block2.append_str(",");
                }
                
                i++;
            }
            method_block2.append_str(")\n");
            
            method_block2.append_str(method_block.to_string());
            
            buffer*% source3 = info.source;
            char* p = info.p;
            char* head = info.head;
            int sline = info.sline;
            
            info.source = method_block2;
            info.p = info.source.buf;
            info.head = info.source.buf;
            info.sline = method_block_sline;
            
            sNode*% node = parse_function(info).catch {
                return false;
            }
            
            if(!node.compile->(info)) {
                return false;
            }
            
            char*% method_block_name = xsprintf("method_block%d", info->num_method_block);
            
            CVALUE*% come_value2 = new CVALUE;
            
            sFun* fun2 = info.funcs.at(method_block_name, null);
            
            if(fun2 == null) {
                err_msg(info, "method block function not found(%s)", method_block_name);
                return false;
            }
            
            sType* method_block_type2 = fun2.mLambdaType;
            
            come_value2.c_value = xsprintf("%s", method_block_name);
            come_value2.type = clone method_block_type2;
            come_value2.var = null;
            
            come_params.push_back(come_value2);
            
            info.source = source3;
            info.p = p;
            info.head = head;
            info.sline = sline;
            
            info->current_stack_frame_struct = current_stack_frame_struct;
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(generics_fun_name);
        buf.append_str("(");
        
        int j = 0;
        foreach(it, come_params) {
            buf.append_str(it.c_value);
            
            if(j != come_params.length()-1) {
                buf.append_str(",");
            }
            
            j++;
        }
        buf.append_str(")");
        
        CVALUE*% come_value2 = new CVALUE;
        
        come_value2.c_value = buf.to_string();
        
        if(result_type->mHeap) {
            come_value2.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
        }
        
        come_value2.type = clone result_type;
        come_value2.type->mStatic = false;
        come_value2.var = null;
        
        add_come_last_code(info, "%s;\n", buf.to_string());
        
        info.stack.push_back(come_value2);
    }
    
    return true;
}

exception sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 20
{
    list<sNode*%>*% params = new list<sNode*%>();
    params.push_back(obj);
    
    if(*info->p != '{') {
        expected_next_character('(', info) throws;
        
        while(true) {
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            
            sNode*% node = expression(info) throws;
            
            node = post_position_operator3(node, info) throws;
            
            info.no_comma = no_comma;
            
            params.push_back(node);
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
    }
    
    buffer*% method_block = null;
    int method_block_sline = 0;
    if(*info->p == '{') {
        char* head = info.p;
        method_block_sline = info.sline;
        
        skip_block(info) throws;
        
        char* tail = info.p;
        
        method_block = new buffer();
        
        int len = tail - head;
        char*% mem = new char[len+1];
        memcpy(mem, head, len);
        mem[len] = '\0';
        
        method_block.append_str(mem);
        method_block.append_str("\n");
    }
    
    return new sNode(new sMethodCallNode(fun_name, obj, params, method_block!, method_block_sline, info));
}

exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 20
{
    if(buf === "__current__") {
        return new sNode(new sCurrentNode(info));
    }
    
    return inherit(buf, head, head_sline, info) throws;
}


