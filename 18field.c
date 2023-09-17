#include "common.h"

bool operator_overload_fun2(sType* type, char* fun_name, CVALUE* left_value, CVALUE* middle_value, CVALUE* right_value, sInfo* info)
{
    sClass* klass = type->mClass;
    char* class_name = klass->mName;
    
    sType*% type2 = clone type;
    type2->mHeap = false;
    
    string fun_name2;
    sFun* operator_fun = null;
    
    if(type->mNoSolvedGenericsType.v1) {
        type = type->mNoSolvedGenericsType.v1;
    }
    
    if(type->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type.mClass.mName);
        
        sType*% obj_type = solve_generics(type, info.generics_type, info).catch {
            err_msg(info, "solve generics error");
            return false;
        }
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null!);
        
        if(generics_fun) {
            if(!create_generics_fun(string(fun_name2), generics_fun, obj_type, info)) {
                return false;
            }
        }
        
        operator_fun = info->funcs[fun_name2];
    }
    else {
        fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
            operator_fun = info->funcs[new_fun_name];
            
            if(operator_fun) {
                fun_name2 = string(new_fun_name);
                break;
            }
        }
        
        if(operator_fun == NULL) {
            operator_fun = info->funcs[fun_name2];
        }
    }
    
    bool result = false;
    
    if(operator_fun && (type->mGenericsTypes.length() > 0 || (left_value.type.mClass.mName === right_value.type.mClass.mName && left_value.type.mPointerNum == right_value.type.mPointerNum))) {
        CVALUE*% come_value = new CVALUE;
        string left_value2;
        if(operator_fun.mParamTypes[0].mHeap && left_value.type.mHeap) {
            left_value.c_value = increment_ref_count_object(left_value.type, left_value.c_value, info);
            left_value2 = xsprintf("%s", left_value.c_value);
        }
        else {
            left_value2 = clone left_value.c_value;
        }
        string middle_value2;
        if(operator_fun.mParamTypes[1].mHeap && middle_value.type.mHeap) {
            middle_value.c_value = increment_ref_count_object(middle_value.type, middle_value.c_value, info);
            middle_value2 = xsprintf("%s", middle_value.c_value);
        }
        else {
            middle_value2 = clone middle_value.c_value;
        }
        string right_value2;
        if(operator_fun.mParamTypes[2].mHeap && right_value.type.mHeap) {
            right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
            right_value2 = xsprintf("%s", right_value.c_value);
        }
        else {
            right_value2 = clone right_value.c_value;
        }
        
        come_value.c_value = xsprintf("%s(%s,%s,%s)", fun_name2, left_value2, middle_value2, right_value2);
        
        sType*% type = clone operator_fun->mResultType;
        
        if(operator_fun->mResultType->mHeap) {
            come_value.c_value = append_object_to_right_values(come_value.c_value, type, info);
        }
        
        come_value.type = clone type;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        result = true;
    }
    
    return result;
}

struct sStoreFieldNode
{
    sNode*% mLeft;
    sNode*% mRight;
    string mName;
  
    int sline;
    string sname;
};

sStoreFieldNode*% sStoreFieldNode*::initialize(sStoreFieldNode*% self, sNode* left, sNode*% right, string name, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;
    self.mName = string(name);

    return self;
}

bool sStoreFieldNode*::terminated()
{
    return false;
}

bool sStoreFieldNode*::compile(sStoreFieldNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    sNode* right = self.mRight;
    string name = string(self.mName);
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* right_type = right_value.type;
    
    sType* left_type = left_value.type;
    
    sType*% left_type2 = solve_generics(left_type, left_type, info).catch {
        fprintf(stderr, "solve generics is failed\n");
        exit(1);
    }
    
    sClass* klass = left_type2->mClass;
    klass = info.classes[klass->mName];
    
    sType*% field_type = null;
    int index = 0;
    foreach(field, klass->mFields) {
        var field_name, field_type2 = field;
        
        if(field_name === name) {
            field_type = clone field_type2;
            break;
        }
        
        index++;
    }
    
    if(index == klass->mFields.length()) {
        err_msg(info, "field not found(%s) in %s(1)", name, klass->mName);
        return false;
    }
    
    CVALUE*% come_value = new CVALUE;
    
/*
    if(!field_type->mHeap && right_type->mHeap) {
        err_msg(info, "require field type to append %% (%s)", klass->mName);
        return false;
    }
*/
    
    if(field_type->mHeap && right_type->mHeap && field_type->mPointerNum > 0 && right_type->mPointerNum > 0) 
    {
        if(left_value.type->mPointerNum == 1) {
            string c_value = xsprintf("%s->%s", left_value.c_value, name);
            decrement_ref_count_object(field_type, c_value, info);
            right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
            come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
        }
        else if(left_value.type->mPointerNum == 0) {
            string c_value = xsprintf("%s.%s", left_value.c_value, name);
            decrement_ref_count_object(field_type, c_value, info);
            right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
            come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
        }
        else {
            err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.", name, left_value.type->mPointerNum);
            return false;
        }
        int right_value_id = get_right_value_id_from_obj(right_value.c_value);
        
        if(right_value_id != -1) {
            remove_object_from_right_values(right_value_id, info);
        }
    }
    else {
        if(left_value.type->mPointerNum == 1) {
            come_value.c_value = xsprintf("%s->%s=%s", left_value.c_value, name, right_value.c_value);
        }
        else if(left_value.type->mPointerNum == 0) {
            come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
        }
        else {
            err_msg(info, "Invalid left_type. The field name is %s. The pointer num is %d.", name, left_value.type->mPointerNum);
            return false;
        }
    }
    come_value.type = clone field_type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sStoreFieldNode*::sline(sStoreFieldNode* self, sInfo* info)
{
    return self.sline;
}

string sStoreFieldNode*::sname(sStoreFieldNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% store_field(sNode* left, sNode*% right, string name, sInfo* info)
{
    return new sNode(new sStoreFieldNode(left, right, name, info));
}

struct sLoadFieldNode
{
    sNode*% mLeft;
    string mName;
  
    int sline;
    string sname;
};

sLoadFieldNode*% sLoadFieldNode*::initialize(sLoadFieldNode*% self, sNode* left, string name, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mName = string(name);

    return self;
}

bool sLoadFieldNode*::terminated()
{
    return false;
}

bool sLoadFieldNode*::compile(sLoadFieldNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    string name = string(self.mName);
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* left_type = left_value.type;
    
    sType*% left_type2 = solve_generics(left_type, left_type, info).catch {
        fprintf(stderr, "solve generics is failed\n");
        exit(1);
    }
    
    sClass* klass = left_type2->mClass;
    klass = info.classes[klass->mName];

    sType*% field_type = null;
    int index = 0;
    foreach(field, klass->mFields) {
        var field_name, field_type2 = field;
        
        if(field_name === name) {
            field_type = clone field_type2;
            break;
        }
        
        index++;
    }
    
    if(index == klass->mFields.length()) {
        err_msg(info, "field not found(%s) in %s(2)", name, klass->mName);
int* a = (int*)0;
*a = 0;
        return false;
    }
    
    CVALUE*% come_value = new CVALUE;
    
    if(left_value.type->mPointerNum > 0) {
        come_value.c_value = xsprintf("%s->%s", left_value.c_value, name);
    }
    else {
        come_value.c_value = xsprintf("%s.%s", left_value.c_value, name);
    }
    come_value.type = clone field_type;
    come_value.var = null;
    
    info.stack.push_back(come_value);

    return true;
}

int sLoadFieldNode*::sline(sLoadFieldNode* self, sInfo* info)
{
    return self.sline;
}

string sLoadFieldNode*::sname(sLoadFieldNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sStoreArrayNode
{
    sNode*% mLeft;
    sNode*% mRight;
    list<sNode*%>*% mArrayNum;
  
    int sline;
    string sname;
};

sStoreArrayNode*% sStoreArrayNode*::initialize(sStoreArrayNode*% self, sNode* left, sNode*% right, list<sNode*%>*% array_num, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;
    self.mArrayNum = clone array_num;

    return self;
}

bool sStoreArrayNode*::terminated()
{
    return false;
}

bool sStoreArrayNode*::compile(sStoreArrayNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    sNode* right = self.mRight;
    list<sNode*%>* array_num_nodes = self.mArrayNum;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* left_type = left_value.type;
    
    list<CVALUE*%>*% array_num = new list<CVALUE*%>();
    
    foreach(it, array_num_nodes) {
        if(!it.compile->(info)) {
            return false;
        }
        
        CVALUE*% c_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        array_num.push_back(c_value);
    }
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* right_type = right_value.type;
    
    sClass* klass = left_value.type->mClass;
    
    sType*% type = clone left_value.type;
    
    char* fun_name = "operator_store_element";
    bool calling_fun = operator_overload_fun2(type, fun_name, left_value, array_num[0], right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
/*
        if(!left_type->mHeap && right_type->mHeap) {
            err_msg(info, "require field type to append %% (%s)", klass->mName);
            return false;
        }
*/
        
        buffer*% buf = new buffer();
        
        buf.append_str(left_value.c_value);
        
        foreach(it, array_num) {
            buf.append_str(xsprintf("[%s]", it.c_value));
        }
        
        string left_value_code = buf.to_string();
        
        if(left_type->mHeap && right_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0) 
        {
            if(left_value.type->mPointerNum >= 1) {
                decrement_ref_count_object(left_type,left_value_code, info);
                right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
            }
            else if(left_value.type->mPointerNum == 0) {
                decrement_ref_count_object(left_type,left_value_code, info);
                right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
            }
            else {
                err_msg(info, "Invalid left_type. The name is %s. The pointer num is %d.(1)", left_value_code, left_value.type->mPointerNum);
                return false;
            }
            int right_value_id = get_right_value_id_from_obj(right_value.c_value);
            
            if(right_value_id != -1) {
                remove_object_from_right_values(right_value_id, info);
            }
        }
        else {
            if(left_value.type->mPointerNum >= 1) {
                come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
            }
            else if(left_value.type->mPointerNum == 0) {
                come_value.c_value = xsprintf("%s=%s", left_value_code, right_value.c_value);
            }
            else {
                err_msg(info, "Invalid left_type. The name is %s. The pointer num is %d.(2)", left_value_code, left_value.type->mPointerNum);
                return false;
            }
        }
        sType*% result_type = clone left_type;
        result_type.mArrayNum = new list<sNode*%>();
        come_value.type = result_type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }

    return true;
}

int sStoreArrayNode*::sline(sStoreArrayNode* self, sInfo* info)
{
    return self.sline;
}

string sStoreArrayNode*::sname(sStoreArrayNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLoadArrayNode
{
    sNode*% mLeft;
    list<sNode*%>*% mArrayNum;
  
    int sline;
    string sname;
};

sLoadArrayNode*% sLoadArrayNode*::initialize(sLoadArrayNode*% self, sNode* left, list<sNode*%>*% array_num, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    self.mArrayNum = clone array_num;

    self.mLeft = clone left;

    return self;
}

bool sLoadArrayNode*::terminated()
{
    return false;
}

bool sLoadArrayNode*::compile(sLoadArrayNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    list<sNode*%>* array_num_nodes = self.mArrayNum;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* left_type = left_value.type;
    
    list<CVALUE*%>*% array_num = new list<CVALUE*%>();
    
    foreach(it, array_num_nodes) {
        if(!it.compile->(info)) {
            return false;
        }
        
        CVALUE*% c_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        array_num.push_back(c_value);
    }
    
    sType*% type = clone left_value.type;
    
    char* fun_name = "operator_load_element";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, array_num[0], info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        buffer*% buf = new buffer();
        
        buf.append_str(left_value.c_value);
        
        foreach(it, array_num) {
            buf.append_str(xsprintf("[%s]", it.c_value));
        }
        
        string left_value_code = buf.to_string();
        
        come_value.c_value = xsprintf("%s", left_value_code);
        
        sType*% result_type = clone left_type;
        
        result_type.mArrayNum = new list<sNode*%>();
        
        if(result_type.mArrayNum.length() > 0) {
            for(int i=0; i<array_num.length(); i++) {
                result_type.mArrayNum.delete(-1, -1);
            }
        }
        else if(result_type->mPointerNum > 0) {
            result_type->mPointerNum -= array_num.length();
        }
        
        come_value.type = result_type;
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }

    return true;
}

int sLoadArrayNode*::sline(sLoadArrayNode* self, sInfo* info)
{
    return self.sline;
}

string sLoadArrayNode*::sname(sLoadArrayNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% post_position_operator2(sNode*% node, sInfo* info) version 18
{
    return (sNode*)null;
}

exception sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 18
{
    err_msg(info, "parse_method_call is failed");
    throw;
    
    return (sNode*)null;
}

exception sNode*% post_position_operator(sNode*% node, sInfo* info) version 18
{
    while(true){
        if(*info->p == '[') {
            list<sNode*%>*% array_num = new list<sNode*%>();
            while(1) {
                if(*info->p == '[') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    sNode*% node = expression(info) throws;
                    
                    array_num.push_back(node);
                    
                    if(*info->p == ']') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info, "require ] character");
                        throw;
                    }
                }
                else {
                    break;
                }
            }
            
            if(*info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf(info);
                
                sNode*% right_node = expression(info) throws;
                
                node = new sNode(new sStoreArrayNode(node, right_node, array_num, info));
            }
            else {
                node = new sNode(new sLoadArrayNode(node, array_num, info));
            }
        }
        else if(*info->p == '!' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == '.' || (*info->p == '-' && *(info->p+1) == '>')) 
        {
            if(*info->p == '.') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            
            string field_name = parse_word(info) throws;
            
            if(*info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf(info);
                
                sNode*% right_node = expression(info) throws;
                
                node = new sNode(new sStoreFieldNode(node, right_node, field_name, info));
            }
            else if(*info->p == '(' || *info->p == '{' || (*info->p == '-' && *(info->p+1) == '>' && *(info->p+2) == '(')) {
                node = parse_method_call(node, field_name, info) throws;
            }
            else {
                node = new sNode(new sLoadFieldNode(node, field_name, info));
            }
        }
        else {
            sNode*% node2 = post_position_operator2(node, info) throws;
            
            if(node2 == null) {
                break;
            }
            
            node = node2;
        }
    }
    
    return node;
}
