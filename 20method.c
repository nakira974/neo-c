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

bool sCurrentNode*::terminated()
{
    return false;
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
            
            if(value.mCValueName != null) {
                current_stack.mFields.push_back(item);
            }
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
            
            if(value.mCValueName != null) {
                if(type2->mClass->mName === "lambda") {
                    add_come_code(info, "__current_stack%d__.%s = %s;\n", num_current_stack, value.mCValueName, value.mCValueName);
                }
                else {
                    add_come_code(info, "__current_stack%d__.%s = &%s;\n", num_current_stack, value.mCValueName, value.mCValueName);
                }
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
    list<tuple2<string,sNode*%>*%>*% params;
    buffer*% method_block;
    int sline;
    string sname;
    int method_block_sline;
};

sMethodCallNode*% sMethodCallNode*::initialize(sMethodCallNode*% self, char* fun_name,sNode*% obj, list<tuple2<string,sNode*%>*%>* params, buffer* method_block, int method_block_sline, sInfo* info)
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
/*
    sType*% obj_type = solve_generics(type, info.generics_type, info).catch {
        err_msg(info, "solve generics error");
        return string("");
    }
*/
    
    string none_generics_name = get_none_generics_name(type.mClass.mName);
    string fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
    string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
    
    sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null!);
    
    if(generics_fun) {
        if(!create_generics_fun(string(fun_name2), generics_fun, type, info)) {
            err_msg(info, "%s not found", fun_name3);
            return string("");
        }
    }
    
    return fun_name2;
}

bool sMethodCallNode*::terminated()
{
    return false;
}

bool sMethodCallNode*::compile(sMethodCallNode* self, sInfo* info)
{
    char* fun_name = self.fun_name;
    list<tuple2<string,sNode*%>*%>* params = self.params;
    sNode* obj = self.obj;
    buffer* method_block = self.method_block;
    int method_block_sline = self.method_block_sline;
    
    if(!obj.compile->(info)) {
        return false;
    }
    
    CVALUE*% obj_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
/*
    sType*% obj_type = solve_generics(obj_value.type, info.generics_type, info).catch 
    {
        return false;
    }
*/
    sType*% obj_type = clone obj_value.type;
    
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
            var label, node = it;
            
            if(i == 0) {
                come_params.push_back(obj_value);
                i++;
            }
            else {
                if(!node.compile->(info)) {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                if(lambda_type.mParamTypes[i-1].mHeap 
                    && come_value.type.mHeap) 
                {
                    come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                }
                
                come_params.push_back(come_value);
                
                i++;
                dec_stack_ptr(1, info);
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
        string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();
        
        sFun* fun = info.funcs.at(generics_fun_name, null!);
        
        if(fun == null) {
            err_msg(info, "function not found(%s) at method(%s)\n", generics_fun_name, info.come_fun.mName);
            return false;
        }
        
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();

        map<string,CVALUE*%>*% label_params = new map<string,CVALUE*%>();
        
        int i = 0;
        foreach(it, params) {
            var label, node = it;
            
            if(i == 0) {
                if(fun.mParamTypes[i].mHeap && obj_value.type.mHeap) {
                    obj_value.c_value = increment_ref_count_object(obj_value.type, obj_value.c_value, info);
                }
                come_params.push_back(obj_value);
                
                i++;
            }
            else {
                if(!node.compile->(info)) {
                    return false;
                }
                
                CVALUE*% come_value = get_value_from_stack(-1, info);
                
                if(fun.mParamTypes[i] && fun.mParamTypes[i].mHeap && come_value.type.mHeap) {
                    come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                }
                if(label == null) {
                    come_params.push_back(come_value);
                    
                    i++;
                }
                else {
                    label_params.insert(string(label), come_value);
                }
                dec_stack_ptr(1, info);
            }
        }
        
        if(params.length() < fun.mParamTypes.length()+(method_block?-2:0))
        {
            for(; i<fun.mParamTypes.length()+(method_block?-2:0); i++) {
                string default_param = clone fun.mParamDefaultParametors[i];
                char* param_name = fun.mParamNames[i];
                
                CVALUE* come_value = label_params[param_name];
                
                if(default_param && default_param !== "") {
                    buffer*% source = info.source;
                    char* p = info.p;
                    char* head = info.head;
                    int sline = info.sline;
                    
                    info.source = default_param.to_buffer();
                    info.p = info.source.buf;
                    info.head = info.source.buf;
                    
                    sNode*% node = expression(info).catch {
                        return false;
                    }
                    
                    if(!node.compile->(info)) {
                        return false;
                    }
                    
                    info.source = source;
                    info.p = p;
                    info.head = head;
                    info.sline = sline;
            
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    if(fun.mParamTypes[i].mHeap && come_value.type.mHeap) {
                        come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                    }
                    come_params.push_back(come_value);
                    dec_stack_ptr(1, info);
                }
                else {
                    if(come_value) {
                        come_params.push_back(null);
                    }
                    else {
                        err_msg(info, "require parametor(%s)", fun.mName);
                        return false;
                    }
                }
            }
        }
        if(label_params.length() > 0) {
            for(i=0; i<fun.mParamNames.length()+(method_block?-2:0); i++) {
                char* param_name = fun.mParamNames[i];
                
                CVALUE* come_value = label_params[param_name];
                
                if(come_value) {
                    come_params.replace(i, clone come_value);
                }
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
            
            if(method_block_type.mClass.mName !== "lambda") {
                err_msg(info, "This function does not have method block(%s)", fun_name);
                return false;
            }
            
            sType*% result_type = clone method_block_type->mResultType.v1;
            result_type->mStatic = false;
            list<sType*%>* param_types = method_block_type->mParamTypes;
            list<string>* param_names = method_block_type->mParamNames;
            
            char all_alhabet_sname[PATH_MAX];
            {
                char* p = info->sname;
                char* p2 = all_alhabet_sname;
                while(*p) {
                    if(xisalnum(*p)) {
                        *p2++ = *p++;
                    }
                    else {
                        p++;
                    }
                }
                *p2 = '\0';
            }
            
            method_block2.append_str(xsprintf("%s method_block%d_%s(", make_type_name_string(result_type, false@in_header, false@array_cast_pointer, info), info->num_method_block, all_alhabet_sname));
            
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
            
            /*
            char all_alhabet_sname[PATH_MAX];
            {
                char* p = info->sname;
                char* p2 = all_alhabet_sname;
                while(*p) {
                    if(xisalnum(*p)) {
                        *p2++ = *p++;
                    }
                    else {
                        p++;
                    }
                }
                *p2 = '\0';
            }
            */
            
            char*% method_block_name = xsprintf("method_block%d_%s", info->num_method_block, all_alhabet_sname);
            
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
    list<tuple2<string,sNode*%>*%>*% params = new list<tuple2<string,sNode*%>*%>();
    params.push_back(new tuple2<string,sNode*%>(null,obj));
    
    if(*info->p == '-' && *(info->p+1) == '>') {
        info->p +=2;
        skip_spaces_and_lf(info);
    }
    
    if(*info->p != '{') {
        expected_next_character('(', info) throws;
        
        while(true) {
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            
            char* p = info.p;
            int sline = info.sline;
            
            bool err_flag = false;
            string label = parse_word(info, true@no_check_err).catch { err_flag = true };
            
            if(err_flag == false && *info->p == ':') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                label = null;
                
                info->p = p;
                info->sline = sline;
            }
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            
            sNode*% node = expression(info) throws;
            
            bool throwing = false;
            node = post_position_operator3(node, info).catch {
                throwing = true;
            }
            
            if(throwing) {
                throw;
            }
            
            info.no_comma = no_comma;
            
            params.push_back(new tuple2<string,sNode*%>(label, node));
            
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


exception sNode*% post_position_operator3(sNode*% node, sInfo* info) version 20
{
    if(memcmp(info->p, "throws", strlen("throws")) == 0) {
        info->p += strlen("throws");
        skip_spaces_and_lf(info);
        
        string fun_name = string("catch");
        list<tuple2<string,sNode*%>*%>*% params = new list<tuple2<string,sNode*%>*%>();
        /*
        sNode*% current_stack_frame_node = new sNode(new sCurrentNode(info));
        
        params.push_back(new tuple2<string, sNode*%>(null, current_stack_frame_node));
        */
        params.push_back(new tuple2<string,sNode*%>(null,node));
        
        buffer*% method_block = new buffer();
        
        method_block.append_str(xsprintf("{ exit(2); }"));
        int method_block_sline = info.sline;
        
        return new sNode(new sMethodCallNode(fun_name, node, params, method_block, method_block_sline, info));
    }
    
    return inherit(node, info) throws;
}
