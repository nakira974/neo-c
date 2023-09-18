#include "common.h"

struct sStrNode
{
    string value;
    int sline;
    string sname;
};

sStrNode*% sStrNode*::initialize(sStrNode*% self, string value, int sline, sInfo* info)
{
    self.value = string(value);
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sStrNode*::terminated()
{
    return false;
}

bool sStrNode*::compile(sStrNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("\"%s\"", self.value);
    come_value.type = new sType("char*", info);
    //come_value.type.mConstant = true;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sStrNode*::sline(sStrNode* self, sInfo* info)
{
    return self.sline;
}

string sStrNode*::sname(sStrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sCharNode
{
    int value;
    int sline;
    string sname;
};

sCharNode*% sCharNode*::initialize(sCharNode*% self, int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sCharNode*::terminated()
{
    return false;
}

bool sCharNode*::compile(sCharNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", self.value);
    come_value.type = new sType("char", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sCharNode*::sline(sCharNode* self, sInfo* info)
{
    return self.sline;
}

string sCharNode*::sname(sCharNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sWCharNode
{
    wchar_t value;
    int sline;
    string sname;
};

sWCharNode*% sWCharNode*::initialize(sWCharNode*% self, wchar_t value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sWCharNode*::terminated()
{
    return false;
}

bool sWCharNode*::compile(sWCharNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("L'%lc'", self.value);
    come_value.type = new sType("wchar_t", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sWCharNode*::sline(sWCharNode* self, sInfo* info)
{
    return self.sline;
}

string sWCharNode*::sname(sWCharNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sWStringNode
{
    wchar_t*% value;
    int sline;
    string sname;
};

sWStringNode*% sWStringNode*::initialize(sWStringNode*% self, wchar_t*% value, int sline, sInfo* info)
{
    self.value = value;
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sWStringNode*::terminated()
{
    return false;
}

bool sWStringNode*::compile(sWStringNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("L'%ls'", self.value);
    come_value.type = new sType("wchar_t*", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sWStringNode*::sline(sWStringNode* self, sInfo* info)
{
    return self.sline;
}

string sWStringNode*::sname(sWStringNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sListNode
{
    list<sNode*%>*% list_elements;
    int sline;
    string sname;
};

sListNode*% sListNode*::initialize(sListNode*% self, list<sNode*%>*% list_elements, sInfo* info)
{
    self.list_elements = list_elements;
    
    self.sline = info.sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sListNode*::terminated()
{
    return false;
}

bool sListNode*::compile(sListNode* self, sInfo* info)
{
    list<sNode*%>* list_elements = self.list_elements;
    
    list<CVALUE*%>*% params = new list<CVALUE*%>();
    sType*% list_element_type;
    
    foreach(it, list_elements) {
        if(!it.compile->(info)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        params.push_back(come_value);
        
        list_element_type = clone come_value.type;
    }
    
    sType*% type_values = clone list_element_type;
    type_values.mArrayNum.push_back(create_int_node(params.length(), info));
    type_values->mHeap = false;
    
    static int list_value_num = 0;
    string var_name = xsprintf("__list_values%d__", ++list_value_num);
    
    add_variable_to_table(var_name, type_values, info);
    
    sVar* var_ = get_variable_from_table(info.lv_table, var_name);
    
    add_come_code_at_function_head(info, "%s;\n", make_define_var(type_values, var_->mCValueName, info));
    
    buffer*% source = new buffer();
    
    source.append_str("{");
    
    int i = 0;
    foreach(it, params) {
        if(list_element_type->mHeap) {
            source.append_str(xsprintf("%s[%d]=come_increment_ref_count(%s);\n", var_->mCValueName, i, params[i].c_value));
        }
        else {
            source.append_str(xsprintf("%s[%d]=%s;\n", var_->mCValueName, i, params[i].c_value));
        }
        i++;
    }
    
    source.append_str("}");
    
    add_come_code(info, "%s", source.to_string());
    
    sType*% list_type = new sType("list", info);
    list_type->mGenericsTypes.push_back(clone list_element_type);
    
    sType*% obj_type = clone list_type;
    char* fun_name = "initialize_with_values";
    
    string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();
    
    sFun* fun = info.funcs.at(generics_fun_name, null!);
    
    if(fun == null) {
        err_msg(info, "function not found(%s) at method(%s)\n", generics_fun_name, info.come_fun.mName);
        return false;
    }
        
    sType*% result_type = clone fun->mResultType;
    result_type->mStatic = false;
    
    sType* type = list_type;
    
    CVALUE*% obj_value = new CVALUE;
    
    buffer*% num_string = new buffer();
    
    num_string.append_str("1");
    
    sType*% type2 = solve_generics(type, type, info).catch {
        return false;
    }
    
    string type_name = make_type_name_string(type2, false@in_header, true@array_cast_pointer, info);
    
    obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s))", type_name, type_name, num_string.to_string());
    
    sType*% type3 = clone type2;
    type3->mPointerNum++;
    type3->mHeap = true;
    type2->mHeap = true;
    obj_value.type = clone type2;
    obj_value.c_value = append_object_to_right_values(obj_value.c_value, type3 ,info);
    obj_value.type->mPointerNum ++;
    obj_value.var = null;
        
    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
    
    if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
        obj_value.c_value = increment_ref_count_object(obj_value.type, obj_value.c_value, info);
    }
    come_params.push_back(obj_value);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("%d", params.length());
    come_value2.type = null; // no required
    come_value2.var = null;
    
    come_params.push_back(come_value2);
    
    CVALUE*% come_value3 = new CVALUE;
    
    come_value3.c_value = xsprintf("%s", var_->mCValueName);
    come_value3.type = null; // no required
    come_value3.var = null;
    
    come_params.push_back(come_value3);
    
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
    
    CVALUE*% come_value4 = new CVALUE;
    
    come_value4.c_value = buf.to_string();
    
    if(result_type->mHeap) {
        come_value4.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
    }
    
    come_value4.type = clone result_type;
    come_value4.type->mStatic = false;
    come_value4.var = null;
    
    add_come_last_code(info, "%s;\n", buf.to_string());
    
    info.stack.push_back(come_value4);
    
    return true;
}

int sListNode*::sline(sListNode* self, sInfo* info)
{
    return self.sline;
}

string sListNode*::sname(sListNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sTupleNode
{
    list<sNode*%>*% tuple_elements;
    int sline;
    string sname;
};

sTupleNode*% sTupleNode*::initialize(sTupleNode*% self, list<sNode*%>*% tuple_elements, sInfo* info)
{
    self.tuple_elements = tuple_elements;
    
    self.sline = info.sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sTupleNode*::terminated()
{
    return false;
}

bool sTupleNode*::compile(sTupleNode* self, sInfo* info)
{
    list<sNode*%>* tuple_elements = self.tuple_elements;
    list<sType*%>*% tuple_types = new list<sType*%>();
    list<CVALUE*%>*% tuple_values = new list<CVALUE*%>();
    
    foreach(it, tuple_elements) {
        if(!it.compile->(info)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        tuple_values.push_back(clone come_value);
        tuple_types.push_back(clone come_value.type);
    }
    
    sType*% type = new sType(xsprintf("tuple%d", tuple_types.length()), info);
    
    foreach(it, tuple_types) {
        type->mGenericsTypes.push_back(clone it);
    }
    
    CVALUE*% obj_value = new CVALUE;
    
    buffer*% num_string = new buffer();
    
    num_string.append_str("1");
    
    sType*% type2 = solve_generics(type, type, info).catch {
        return false;
    }
    
    string type_name = make_type_name_string(type2, false@in_header, true@array_cast_pointer, info);
    
    obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s))", type_name, type_name, num_string.to_string());
    
    sType*% type3 = clone type2;
    type3->mPointerNum++;
    type3->mHeap = true;
    type2->mHeap = true;
    obj_value.type = clone type2;
    obj_value.c_value = append_object_to_right_values(obj_value.c_value, type3 ,info);
    obj_value.type->mPointerNum ++;
    obj_value.var = null;
    
    sType*% obj_type = clone type2;
    char* fun_name = "initialize";
    
    string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();
    
    sFun* fun = info.funcs.at(generics_fun_name, null!);
    
    if(fun == null) {
        err_msg(info, "function not found(%s) at method(%s)\n", generics_fun_name, info.come_fun.mName);
        return false;
    }
        
    sType*% result_type = clone fun->mResultType;
    result_type->mStatic = false;
        
    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
    
    if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
        obj_value.c_value = increment_ref_count_object(obj_value.type, obj_value.c_value, info);
    }
    come_params.push_back(obj_value);

    int i = 1;
    foreach(it, tuple_values) {
        CVALUE*% come_value = clone it;
        
        if(fun.mParamTypes[i] && fun.mParamTypes[i].mHeap && come_value.type.mHeap) {
            come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
        }
        come_params.push_back(come_value);
        
        i++;
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
    
    return true;
}

int sTupleNode*::sline(sTupleNode* self, sInfo* info)
{
    return self.sline;
}

string sTupleNode*::sname(sTupleNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sMapNode
{
    list<sNode*%>*% map_key_elements;
    list<sNode*%>*% map_elements;
    int sline;
    string sname;
};

sMapNode*% sMapNode*::initialize(sMapNode*% self, list<sNode*%>*% map_key_elements, list<sNode*%>*% map_elements, sInfo* info)
{
    self.map_key_elements = map_key_elements;
    self.map_elements = map_elements;
    
    self.sline = info.sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sMapNode*::terminated()
{
    return false;
}

bool sMapNode*::compile(sMapNode* self, sInfo* info)
{
    list<sNode*%>* map_key_elements = self.map_key_elements;
    list<sNode*%>* map_elements = self.map_elements;

    list<CVALUE*%>*% key_params = new list<CVALUE*%>();
    list<CVALUE*%>*% element_params = new list<CVALUE*%>();
    sType*% map_key_type;
    sType*% map_element_type;
    
    for(int i=0; i<map_key_elements.length(); i++) {
        sNode* key_elements = map_key_elements[i];
        sNode* elements = map_elements[i];
        
        if(!key_elements.compile->(info)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        key_params.push_back(come_value);
        
        if(!elements.compile->(info)) {
            return false;
        }
        
        CVALUE*% come_value2 = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        element_params.push_back(come_value2);
        
        map_key_type = clone come_value.type;
        map_element_type = clone come_value2.type;
    }
    
    static int map_value_num = 0;
    
    sType*% key_type_values = clone map_key_type;
    key_type_values.mArrayNum.push_back(create_int_node(key_params.length(), info));
    key_type_values->mHeap = false;
    
    string var_name = xsprintf("__map_keys%d__", ++map_value_num);
    
    add_variable_to_table(var_name, key_type_values, info);
    
    sVar* var_ = get_variable_from_table(info.lv_table, var_name);
    
    add_come_code_at_function_head(info, "%s;\n", make_define_var(key_type_values, var_->mCValueName, info));
    
    sType*% element_type_values = clone map_element_type;
    element_type_values.mArrayNum.push_back(create_int_node(element_params.length(), info));
    element_type_values->mHeap = false;
    
    string var_name2 = xsprintf("__map_element%d__", map_value_num);
    
    add_variable_to_table(var_name2, element_type_values, info);
    
    sVar* var2_ = get_variable_from_table(info.lv_table, var_name2);
    
    add_come_code_at_function_head(info, "%s;\n", make_define_var(element_type_values, var2_->mCValueName, info));
    
    buffer*% source = new buffer();
    
    source.append_str("{");
    
    for(int i = 0; i<key_params.length(); i++) {
        CVALUE* key_param = key_params[i];
        CVALUE* element_param = element_params[i];
        
        if(map_key_type->mHeap) {
            source.append_str(xsprintf("%s[%d]=come_increment_ref_count(%s);\n", var_->mCValueName, i, key_param.c_value));
        }
        else {
            source.append_str(xsprintf("%s[%d]=%s;\n", var_->mCValueName, i, key_param.c_value));
        }
        
        if(map_element_type->mHeap) {
            source.append_str(xsprintf("%s[%d]=come_increment_ref_count(%s);\n", var2_->mCValueName, i, element_param.c_value));
        }
        else {
            source.append_str(xsprintf("%s[%d]=%s;\n", var2_->mCValueName, i, element_param.c_value));
        }
    }
    
    source.append_str("}");
    
    add_come_code(info, "%s", source.to_string());
    
    sType*% map_type = new sType("map", info);
    map_type->mGenericsTypes.push_back(clone map_key_type);
    map_type->mGenericsTypes.push_back(clone map_element_type);
    
    sType*% obj_type = clone map_type;
    char* fun_name = "initialize_with_values";
    
    string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();
    
    sFun* fun = info.funcs.at(generics_fun_name, null!);
    
    if(fun == null) {
        err_msg(info, "function not found(%s) at method(%s)\n", generics_fun_name, info.come_fun.mName);
        return false;
    }
        
    sType*% result_type = clone fun->mResultType;
    result_type->mStatic = false;
    
    sType* type = map_type;
    
    CVALUE*% obj_value = new CVALUE;
    
    buffer*% num_string = new buffer();
    
    num_string.append_str("1");
    
    sType*% type2 = solve_generics(type, type, info).catch {
        return false;
    }
    
    string type_name = make_type_name_string(type2, false@in_header, true@array_cast_pointer, info);
    
    obj_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s))", type_name, type_name, num_string.to_string());
    
    sType*% type3 = clone type2;
    type3->mPointerNum++;
    type3->mHeap = true;
    type2->mHeap = true;
    obj_value.type = clone type2;
    obj_value.c_value = append_object_to_right_values(obj_value.c_value, type3 ,info);
    obj_value.type->mPointerNum ++;
    obj_value.var = null;
        
    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
    
    if(fun.mParamTypes[0].mHeap && obj_value.type.mHeap) {
        obj_value.c_value = increment_ref_count_object(obj_value.type, obj_value.c_value, info);
    }
    come_params.push_back(obj_value);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("%d", key_params.length());
    come_value2.type = null; // no required
    come_value2.var = null;
    
    come_params.push_back(come_value2);
    
    CVALUE*% come_value3 = new CVALUE;
    
    come_value3.c_value = xsprintf("%s", var_->mCValueName);
    come_value3.type = null; // no required
    come_value3.var = null;
    
    come_params.push_back(come_value3);
    
    CVALUE*% come_value4 = new CVALUE;
    
    come_value4.c_value = xsprintf("%s", var2_->mCValueName);
    come_value4.type = null; // no required
    come_value4.var = null;
    
    come_params.push_back(come_value4);
    
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
    
    CVALUE*% come_value5 = new CVALUE;
    
    come_value5.c_value = buf.to_string();
    
    if(result_type->mHeap) {
        come_value5.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
    }
    
    come_value5.type = clone result_type;
    come_value5.type->mStatic = false;
    come_value5.var = null;
    
    add_come_last_code(info, "%s;\n", buf.to_string());
    
    info.stack.push_back(come_value5);
    
    return true;
}

int sMapNode*::sline(sMapNode* self, sInfo* info)
{
    return self.sline;
}

string sMapNode*::sname(sMapNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% expression_node(sInfo* info) version 98
{
    if(*info->p == '"') 
    {
        info->p++;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf(info);
                
                parse_sharp(info)
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info->p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info->p);
                    info->p++;
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                info->sline = sline2;
                throw;
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf(info);
        
        return new sNode(new sStrNode(value.to_string(), sline, info));
    }
    else if(*info->p == '\'') {
        info->p++;

        int c;

        if(*info->p == '\\') {
            info->p++;

            if(xisdigit(*info->p)) {
                int n = 0;
                while(xisdigit(*info->p)) {
                    n = n * 8 + *info->p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info->p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case 'f':
                        c = '\f';
                        info->p++;
                        break;
    
                    case 'v':
                        c = '\v';
                        info->p++;
                        break;
    
                    case 'b':
                        c = '\b';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        info->p++;
                        
                        if(xisdigit(*info->p)) {
                            int n = 0;
                            while(xisdigit(*info->p)) {
                                n = n * 8 + *info->p - '0';
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info->p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info->p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            c = *info->p;
            info->p++;
        }

        if(*info->p != '\'') {
            err_msg(info, "close \' to make character value");
        }
        else {
            info->p++;

            skip_spaces_and_lf(info);

            return new sNode(new sCharNode(c, info));
        }
    }
    /// chararacter ///
    else if(*info->p == 'L' && *(info->p+1) == '\'') {
        info->p+=2;

        wchar_t c;

        if(*info->p == '\\') {
            info->p++;
            
            if(xisdigit(*info->p)) {
                int n = 0;
                while(xisdigit(*info->p)) {
                    n = n * 8 + *info->p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info->p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        
                        info->p++;
                        
                        if(xisdigit(*info->p)) {
                            int n = 0;
                            while(xisdigit(*info->p)) {
                                n = n * 8 + *info->p - '0';
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info->p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info->p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            unsigned char p2 = *(unsigned char*)info->p;

            /// utf-8 character ///
            if(p2 > 127) {
                int size;
                char str[MB_LEN_MAX+1];

                size = ((p2 & 0x80) >> 7) + ((p2 & 0x40) >> 6) + ((p2 & 0x20) >> 5) + ((p2 & 0x10) >> 4);

                if(size > MB_LEN_MAX) {
                    err_msg(info, "invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str, info->p, size);
                    str[size] = 0;

                    if(mbtowc(&c, str, size) < 0) {
                        perror("mbtowc");
                        err_msg(info, "invalid utf-8 character. mbtowc");
                        info->err_num++;
                        c = 0;
                    }

                    info->p += size;
                }
            }
            /// ASCII character ///
            else {
                c = *info->p;
                info->p++;
            }
        }

        if(*info->p != '\'') {
            err_msg(info, "close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;

            skip_spaces_and_lf(info);

            return new sNode(new sWCharNode(c, info));
        }
    }
    /// chararacter ///
    else if(*info->p == 'L' && *(info->p+1) == '"') {
        info->p+=2;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf(info);
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    int n = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        n = n * 8 + *info->p - '0';
                        info->p++;
                        len++;
                    }
                    
                    value.append_char(n);
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    info->p++;
                    
                    char buf[128];
                    strncpy(buf, "0x", 128);
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        char buf2[2];
                        buf2[0] = *info->p;
                        buf2[1] = '\0';
                        info->p++;
                        strncat(buf, buf2, 128);
                    }
                    
                    unsigned long lont int n = strtoll(buf, NULL, 0);
                    
                    value.append_char((char)n);
                }
                else {
                    switch(*info->p) {
                        case '0':
                            value.append_char('\0');
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char('\n');
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char('\t');
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char('\r');
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char('\v');
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char('\f');
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char('\a');
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char('\b');
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char('\\');
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info->p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                throw
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf(info);
        
        int len = value.len;
        
        wchar_t*% wstr = new wchar_t[len+1];
        
        char* str = value.buf;
        
        if(mbstowcs(wstr, str, len+1) < 0) {
            perror("mbstowcs");
            exit(1);
        }
        
        wstr[len] = '\0';

        return new sNode(new sWStringNode(wstr, sline, info));
    }
    else if(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf(info);
        
        char* p = info.p;
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        sNode*% node = expression(info) throws;
        
        info.no_comma = no_comma;
        
        char* p2 = info.p;
        
        buffer*% first_element_source = new buffer();
        
        first_element_source.append(p, p2 - p);
        first_element_source.append_char('\0');
        
        list<sNode*%>*% list_elements = new list<sNode*%>();
        
        list<sNode*%>*% map_keys = new list<sNode*%>();
        list<sNode*%>*% map_elements = new list<sNode*%>();
        
        //// map ///
        if(*info->p == ':') {
            info->p++;
            skip_spaces_and_lf(info);
            
            map_keys.push_back(node);
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            
            sNode*% node2 = expression(info) throws;
            
            info.no_comma = no_comma;
            
            map_elements.push_back(node2);
            
            if(*info->p == ']') {
                info->p++;
                skip_spaces_and_lf(info);
                
                return new sNode(new sMapNode(map_keys, map_elements, info));
            }
            else {
                expected_next_character(',', info) throws;
                
                while(true) {
                    bool no_comma = info.no_comma;
                    info.no_comma = true;
                    
                    sNode*% node2 = expression(info) throws;
                    
                    info.no_comma = no_comma;
                    
                    map_keys.push_back(node2);
                    
                    expected_next_character(':', info) throws;
                    
                    no_comma = info.no_comma;
                    info.no_comma = true;
                    
                    sNode*% node3 = expression(info) throws;
                    
                    info.no_comma = no_comma;
                    
                    map_elements.push_back(node3);
                    
                    if(*info->p == '\0') {
                        err_msg(info, "invalid source end");
                        throw;
                    }
                    else if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p == ']') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    else {
                        err_msg(info, "invalid character(%c)(3)", *info->p);
                        throw;
                    }
                }
                
                return new sNode(new sMapNode(map_keys, map_elements, info));
            }
        }
        /// list ///
        else if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf(info);
            
            list_elements.push_back(node);
        }
        else if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
            
            list_elements.push_back(node);
            
            while(true) {
                bool no_comma = info.no_comma;
                info.no_comma = true;
                
                sNode*% node2 = expression(info) throws;
                
                info.no_comma = no_comma;
                
                list_elements.push_back(node2);
                
                if(*info->p == '\0') {
                    err_msg(info, "invalid source end");
                    throw;
                }
                else if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == ']') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    err_msg(info, "invalid character(%c)(4)", *info->p);
                    throw;
                }
            }
        }
        else {
            err_msg(info, "invalid character(%c)(5)", *info->p);
            throw;
        }
        
        if(list_elements.length() > 0) {
            return new sNode(new sListNode(list_elements, info));
        }
        else {
        }
    }
    else {
        inherit(info) throws;
    }
    
    return (sNode*%)null;
}

exception sNode*% parse_tuple(sInfo* info)
{
    list<sNode*%>*% tuple_elements = new list<sNode*%>();
    while(true) {
        char* p = info.p;
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        sNode*% node = expression(info) throws;
        
        info.no_comma = no_comma;
        
        tuple_elements.push_back(node);
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        else {
            err_msg(info, "invalid character(%c) in tuple expression", *info->p);
            throw;
        }
    }
    
    return new sNode(new sTupleNode(tuple_elements, info));
}
