#include "common.h"
#include <ctype.h>

void come_init() version 5
{
}

void come_final() version 5
{
}

struct sReturnNode
{
    sNode*%? value;
    string value_source;
    int sline;
    string sname;
};

sReturnNode*% sReturnNode*::initialize(sReturnNode*% self, sNode*% value, string value_source, sInfo* info)
{
    self.value = value;
    self.value_source = clone value_source;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sReturnNode*::sline(sReturnNode* self, sInfo* info)
{
    return self.sline;
}

string sReturnNode*::sname(sReturnNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sReturnNode*::terminated()
{
    return false;
}

bool sReturnNode*::compile(sReturnNode* self, sInfo* info)
{
    if(self.value) {
        sFun* come_fun = info.come_fun;
        
        sType*% result_type = clone come_fun.mResultType;
        
        sType*% result_type2 = solve_generics(result_type, info.generics_type, info);
        
        sType* result_type3 = result_type2->mNoSolvedGenericsType.v1;
        if(result_type2->mNoSolvedGenericsType.v1) {
            result_type3 = result_type2->mNoSolvedGenericsType.v1;
        }
        else {
            result_type3 = result_type2;
        }
        
        if(result_type->mException) {
            int stack_num_before = info->stack.length();
            
            sType*% result_type4 = clone result_type2;
            result_type4->mPointerNum = 0;
            
            sNode*% obj_node = create_object(clone result_type4, info);
            static int num_result_tuple = 0;
            sNode*% store_node = store_var(xsprintf("result_tuplea%d", ++num_result_tuple)@name, null@multiple_assign, clone result_type2@type, true@alloc, clone obj_node@right_node, info);
            
            if(!store_node.compile->(info)) {
                return false;
            }
            add_last_code_to_source(info);
            arrange_stack(info, stack_num_before);
            free_right_value_objects(info);
            
            sNode*% load_node = load_var(xsprintf("result_tuplea%d", num_result_tuple), info);
            
            sNode*% right_node = clone self.value;
            
            sNode*% store_field_node1 = store_field(load_node, clone right_node, string("v1"), info);
            
            if(!store_field_node1.compile->(info)) {
                return false;
            }
            add_last_code_to_source(info);
            arrange_stack(info, stack_num_before);
            free_right_value_objects(info);
            
            sNode*% true_node = create_true_object(info);
            
            sNode*% store_field_node2 = store_field(load_node, clone true_node, string("v2"), info);
            
            if(!store_field_node2.compile->(info)) {
                return false;
            }
            add_last_code_to_source(info);
            arrange_stack(info, stack_num_before);
            free_right_value_objects(info);
            
            if(!load_node.compile->(info)) {
                return false;
            }
            add_last_code_to_source(info);
            free_right_value_objects(info);
        }
        else {
            if(!self.value->compile->(info)) {
                return false;
            }
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        if(come_value.type->mHeap && come_value.var == null) {
            int right_value_id = get_right_value_id_from_obj(come_value.c_value);
            
            if(right_value_id != -1) {
                remove_object_from_right_values(right_value_id, info);
            }
        }
        
        sType*% come_value_type = solve_generics(come_value.type, info.generics_type, info);
        
        static int num_result = 0;
        add_come_code(info, "%s __result%d__ = %s;\n", make_type_name_string(result_type2, false@in_header, false@array_cast_pointer, info), ++num_result, come_value.c_value);
        
        free_objects_on_return(come_fun.mBlock, info, come_value.var, false@top_block);
        free_right_value_objects(info);
        
        add_come_code(info, "return __result%d__;\n", num_result);
    }
    else {
        sFun* come_fun = info.come_fun;
        free_objects_on_return(come_fun.mBlock, info, null!, false@top_block);
        free_right_value_objects(info);
        add_come_code(info, "return;\n");
    }
    
    info->last_statment_is_return = true;
    
    return true;
}

struct sDerefferenceNode
{
    sNode*%? value;
    int sline;
    string sname;
};

sDerefferenceNode*% sDerefferenceNode*::initialize(sDerefferenceNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sDerefferenceNode*::sline(sDerefferenceNode* self, sInfo* info)
{
    return self.sline;
}

string sDerefferenceNode*::sname(sDerefferenceNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sDerefferenceNode*::terminated()
{
    return false;
}

bool sDerefferenceNode*::compile(sDerefferenceNode* self, sInfo* info)
{
    sNode* value = self.value;
    
    if(!value->compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("*%s", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mPointerNum--;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
    
    return true;
}

struct sRefferenceNode
{
    sNode*%? value;
    int sline;
    string sname;
};

sRefferenceNode*% sRefferenceNode*::initialize(sRefferenceNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sRefferenceNode*::sline(sRefferenceNode* self, sInfo* info)
{
    return self.sline;
}

string sRefferenceNode*::sname(sRefferenceNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sRefferenceNode*::terminated()
{
    return false;
}

bool sRefferenceNode*::compile(sRefferenceNode* self, sInfo* info)
{
    sNode* value = self.value;
    
    if(!value->compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("&%s", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mPointerNum--;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
    
    return true;
}

struct sReverseNode
{
    sNode*%? value;
    int sline;
    string sname;
};

sReverseNode*% sReverseNode*::initialize(sReverseNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sReverseNode*::sline(sReverseNode* self, sInfo* info)
{
    return self.sline;
}

string sReverseNode*::sname(sReverseNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sReverseNode*::terminated()
{
    return false;
}

bool sReverseNode*::compile(sReverseNode* self, sInfo* info)
{
    sNode* value = self.value;
    
    if(!value->compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("!%s", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mPointerNum--;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

sNode*% expression_node(sInfo* info) version 1
{
    skip_spaces_and_lf(info);
    parse_sharp(info);
    
    err_msg(info, "invalid character(%c)(1)\n", *info->p);
    exit(3);
    return (sNode*%)null;
}

struct sFunCallNode 
{
    string fun_name;
    list<tuple2<string,sNode*%>*%>*% params;
    int sline;
    string sname;
};

sFunCallNode*% sFunCallNode*::initialize(sFunCallNode*% self, char* fun_name, list<tuple2<string,sNode*%>*%>* params, sInfo* info)
{
    self.fun_name = string(fun_name);
    self.params = clone params;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sFunCallNode*::sline(sFunCallNode* self, sInfo* info)
{
    return self.sline;
}

string sFunCallNode*::sname(sFunCallNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sFunCallNode*::terminated()
{
    return false;
}

bool sFunCallNode*::compile(sFunCallNode* self, sInfo* info)
{
    string fun_name = self.fun_name;
    list<tuple2<string,sNode*%>*%>* params = self.params;
    
    sVar* var_ = get_variable_from_table(info.lv_table, fun_name);
    
    if(var_) {
        sType* lambda_type = var_->mType;
        
        sType*% result_type = clone lambda_type->mResultType.v1;
        result_type->mStatic = false;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(lambda_type.mParamTypes.length() != params.length() && !lambda_type.mVarArgs) {
            err_msg(info, "invalid param number(%s). function param number is %d. caller param number is %d", fun_name, lambda_type.mParamTypes.length(), params.length());
            return false;
        }
        
        int i = 0;
        foreach(it, params) {
            var label, node = it;
            
            if(!node.compile->(info)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            if(lambda_type.mVarArgs && lambda_type.mParamTypes[i] == null) {
            }
            else {
                if(lambda_type.mParamTypes[i].mHeap && come_value.type.mHeap) {
                    come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                }
            }
            come_params.push_back(come_value);
            dec_stack_ptr(1, info);
            
            i++;
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(var_->mCValueName);
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
        
        CVALUE*% come_value = new CVALUE;
        come_value.c_value = buf.to_string();
        
        if(lambda_type->mResultType.v1.mHeap) {
            come_value.c_value = append_object_to_right_values(come_value.c_value, lambda_type->mResultType.v1, info);
        }
        
        come_value.type = clone result_type;
        come_value.type->mStatic = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }
    else {
        if(fun_name === "string") {
            fun_name = string("__builtin_string");
        }
        else if(fun_name === "inherit") {
            char* p = info.come_fun.mName;
    
            int version = 0;
            while(*p) {
                if(*p == '_' && *(p+1) == 'v' && xisdigit(*(p+2))) {
                    char* p2 = p + 2;
                    version = 0;
                    while(xisdigit(*p2)) {
                        version = version * 10 + (*p2 - '0');
                        p2++;
                    }
                    break;
                }
                else {
                    p++;
                }
            }
    
            char real_fun_name[2048];
            memcpy(real_fun_name, info.come_fun.mName, p - info.come_fun.mName);
            real_fun_name[p-info.come_fun.mName] = '\0';
            
            int i;
            for(i=version-1; i>=1; i--) {
                string new_fun_name = xsprintf("%s_v%d", real_fun_name, i);
                
                if(info.funcs[new_fun_name]) {
                    fun_name = string(new_fun_name);
                    break;
                }
            }
            
            if(i==0) {
                string new_fun_name = xsprintf("%s", real_fun_name);
                
                if(info.funcs[new_fun_name]) {
                    fun_name = string(new_fun_name);
                }
                
                if(fun_name === info.come_fun.mName) {
                    err_msg(info, "invalid inherit");
                    return false;
                }
            }
        }
        else {
            for(int i=FUN_VERSION_MAX; i>=1; i--) {
                string new_fun_name = xsprintf("%s_v%d", fun_name, i);
            
                if(info.funcs[new_fun_name]) {
                    fun_name = string(new_fun_name);
                    break;
                }
            }
        }
        
        sFun* fun = info.funcs.at(fun_name, null!);
        
        if(fun == null) {
            err_msg(info, "function not found(%s) at normal function call(1)\n", fun_name);
            return false;
        }
        
        sType*% result_type = clone fun.mResultType;
        result_type->mStatic = false;
        
        list<sType*%>*% param_types = new list<sType*%>();
        foreach(it, fun.mParamTypes) {
            sType*% it2 = solve_generics(it, info.generics_type, info);
            param_types.push_back(clone it2);
        }
        
        result_type = solve_generics(result_type, info.generics_type, info);
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        map<string,CVALUE*%>*% label_params = new map<string,CVALUE*%>();
        
        int i = 0;
        foreach(it, params) {
            var label, node = it;
            
            if(!node.compile->(info)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            if(fun.mVarArgs && fun.mParamTypes[i] == null) {
            }
            else {
                if(i < fun.mParamTypes.length() && param_types[i].mHeap && come_value.type.mHeap) {
                    come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                }
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
        
        if(params.length() < fun.mParamTypes.length()) {
            for(; i<fun.mParamTypes.length(); i++) {
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
                    
                    sNode*% node = expression(info);
                    
                    if(!node.compile->(info)) {
                        return false;
                    }
                    
                    info.source = source;
                    info.p = p;
                    info.head = head;
                    info.sline = sline;
            
                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    if(param_types[i].mHeap && come_value.type.mHeap) {
                        come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                    }
                    come_params.push_back(come_value);
                    dec_stack_ptr(1, info);
                }
                else {
                    if(come_value == null) {
                        err_msg(info, "require parametor(%s)", fun.mName);
                        return false;
                    }
                    else {
                        come_params.push_back(null);
                    }
                }
            }
        }
        if(label_params.length() > 0) {
            for(i=0; i<fun.mParamNames.length(); i++) {
                char* param_name = fun.mParamNames[i];
                
                CVALUE* come_value = label_params[param_name];
                
                if(come_value) {
                    come_params.replace(i, clone come_value);
                }
            }
        }
        
        if(fun.mParamTypes.length() != come_params.length() && !fun.mVarArgs && fun_name !== "__builtin_va_start" && fun_name !== "__builtin_va_end") 
        {
            err_msg(info, "invalid param number(%s). function param number is %d. caller param number is %d", fun_name, fun.mParamTypes.length(), params.length());
            return false;
        }
        
        buffer*% buf = new buffer();
        
        buf.append_str(fun_name);
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
        
        CVALUE*% come_value = new CVALUE;
        come_value.c_value = buf.to_string();
        
        if(fun.mResultType->mHeap) {
            come_value.c_value = append_object_to_right_values(come_value.c_value, result_type, info);
        }
        
        come_value.type = clone result_type;
        come_value.type->mStatic = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }
    
    return true;
}

struct sCastNode {
    sType*% mType;
    sNode*% mLeft;
    int sline;
    string sname;
};

sCastNode*% sCastNode*::initialize(sCastNode*% self, sType* type, sNode* left, sInfo* info)
{
    self.mType = clone type;
    self.mLeft = clone left;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCastNode*::sline(sCastNode* self, sInfo* info)
{
    return self.sline;
}

string sCastNode*::sname(sCastNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCastNode*::terminated()
{
    return false;
}

bool sCastNode*::compile(sCastNode* self, sInfo* info)
{
    sType* type = self.mType;
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type2 = solve_generics(type, info.generics_type, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s)%s", make_type_name_string(type2, false@in_header, false@array_cast_pointer, info), left_value.c_value);
    come_value.type = clone type2;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sParenNode {
    sNode*% mLeft;
    int sline;
    string sname;
};

sParenNode*% sParenNode*::initialize(sParenNode*% self, sNode* left, sInfo* info)
{
    self.mLeft = clone left;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sParenNode*::sline(sParenNode* self, sInfo* info)
{
    return self.sline;
}

string sParenNode*::sname(sParenNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sParenNode*::terminated()
{
    return false;
}

bool sParenNode*::compile(sParenNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s)", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

sNode*% parse_function_call(char* fun_name, sInfo* info)
{
    expected_next_character('(', info);
    
    
    list<tuple2<string,sNode*%>*%>*% params = new list<tuple2<string,sNode*%>*%>();
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        
        char* p = info.p;
        int sline = info.sline;
        
        bool err_flag = false;
        string label = string("");
        if(xisalpha(*info->p) || *info->p == '_') {
            label = parse_word(info);
            err_flag = true;
        }
        
        if(err_flag == true && *info->p == ':') {
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
        
        sNode*% node = expression(info);
        
        node = post_position_operator3(node, info);
        
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
    
    return new sNode(new sFunCallNode(fun_name, params, info));
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 5
{
    err_msg(info, "unexpected word(%s)(1)\n", buf);
    exit(3);
    return (sNode*%)null;
}

sNode*% post_position_operator(sNode*% node, sInfo* info) version 5
{
    return node;
}


struct sLogicalDenial
{
    sNode*% value;
    int sline;
    string sname;
};

sLogicalDenial*% sLogicalDenial*::initialize(sLogicalDenial*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sLogicalDenial*::terminated()
{
    return false;
}

bool sLogicalDenial*::compile(sLogicalDenial* self, sInfo* info)
{
    if(!self.value.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("!%s", come_value.c_value);
    come_value2.type = clone come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    return true;
}

int sLogicalDenial*::sline(sLogicalDenial* self, sInfo* info)
{
    return self.sline;
}

string sLogicalDenial*::sname(sLogicalDenial* self, sInfo* info)
{
    return string(self.sname);
}

struct sMinusNode2
{
    sNode*% value;
    int sline;
    string sname;
};

sMinusNode2*% sMinusNode2*::initialize(sMinusNode2*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sMinusNode2*::terminated()
{
    return false;
}

bool sMinusNode2*::compile(sMinusNode2* self, sInfo* info)
{
    if(!self.value.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("-%s", come_value.c_value);
    come_value2.type = clone come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    return true;
}

int sMinusNode2*::sline(sMinusNode2* self, sInfo* info)
{
    return self.sline;
}

string sMinusNode2*::sname(sMinusNode2* self, sInfo* info)
{
    return string(self.sname);
}

struct sPlusPlusNode2
{
    sNode*% value;
    int sline;
    string sname;
};

sPlusPlusNode2*% sPlusPlusNode2*::initialize(sPlusPlusNode2*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sPlusPlusNode2*::terminated()
{
    return false;
}

bool sPlusPlusNode2*::compile(sPlusPlusNode2* self, sInfo* info)
{
    if(!self.value.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("++%s", come_value.c_value);
    come_value2.type = clone come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    return true;
}

int sPlusPlusNode2*::sline(sPlusPlusNode2* self, sInfo* info)
{
    return self.sline;
}

string sPlusPlusNode2*::sname(sPlusPlusNode2* self, sInfo* info)
{
    return string(self.sname);
}

struct sMinusMinusNode2
{
    sNode*% value;
    int sline;
    string sname;
};

sMinusMinusNode2*% sMinusMinusNode2*::initialize(sMinusMinusNode2*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sMinusMinusNode2*::terminated()
{
    return false;
}

bool sMinusMinusNode2*::compile(sMinusMinusNode2* self, sInfo* info)
{
    if(!self.value.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("--%s", come_value.c_value);
    come_value2.type = clone come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    return true;
}

int sMinusMinusNode2*::sline(sMinusMinusNode2* self, sInfo* info)
{
    return self.sline;
}

string sMinusMinusNode2*::sname(sMinusMinusNode2* self, sInfo* info)
{
    return string(self.sname);
}

struct sComplement
{
    sNode*% value;
    int sline;
    string sname;
};

sComplement*% sComplement*::initialize(sComplement*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sComplement*::terminated()
{
    return false;
}

bool sComplement*::compile(sComplement* self, sInfo* info)
{
    if(!self.value.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = xsprintf("~%s", come_value.c_value);
    come_value2.type = clone come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    return true;
}

int sComplement*::sline(sComplement* self, sInfo* info)
{
    return self.sline;
}

string sComplement*::sname(sComplement* self, sInfo* info)
{
    return string(self.sname);
}

struct sNormalBlock
{
  sBlock*% mBlock;
  
  int sline;
  string sname;
};


sNormalBlock*% sNormalBlock*::initialize(sNormalBlock*% self, sBlock* block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mBlock = clone block;

    return self;
}

bool sNormalBlock*::terminated()
{
    return true;
}

bool sNormalBlock*::compile(sNormalBlock* self, sInfo* info)
{
    sBlock* block = self.mBlock;
    
    add_come_code(info, "{\n");

    transpile_block(block, null!, null!, info);
    
    add_come_code(info, "}\n");
    
    transpiler_clear_last_code(info);

    return true;
}

int sNormalBlock*::sline(sNormalBlock* self, sInfo* info)
{
    return self.sline;
}

string sNormalBlock*::sname(sNormalBlock* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% expression_node(sInfo* info) version 99
{
    skip_spaces_and_lf(info);
    
    parse_sharp(info);
    
    /// logical denial ///
    if(*info->p == '{') {
        sBlock*% block = parse_block(info);
        
        return new sNode(new sNormalBlock(block, info));
    }
    else if(*info->p == '!') {
        info->p++;
        skip_spaces_and_lf(info);

        sNode*% node = expression_node(info);

        return new sNode(new sLogicalDenial(node, info));
    }
    else if(*info->p == '-' && *(info->p+1) == '-') {
        info->p+=2;
        skip_spaces_and_lf(info);

        sNode*% node = expression_node(info);

        return new sNode(new sMinusMinusNode2(node, info));
    }
    else if(*info->p == '-') {
        info->p++;
        skip_spaces_and_lf(info);

        sNode*% node = expression_node(info);

        return new sNode(new sMinusNode2(node, info));
    }
    else if(*info->p == '+' && *(info->p+1) == '+') {
        info->p+=2;
        skip_spaces_and_lf(info);

        sNode*% node = expression_node(info);

        return new sNode(new sPlusPlusNode2(node, info));
    }
    else if(*info->p == '~') {
        info->p++;
        skip_spaces_and_lf(info);

        sNode*% node = expression_node(info);

        return new sNode(new sComplement(node, info));
    }
    
    /// hex number ///
    else if(*info->p == '0' && (*(info->p+1) == 'x' || *(info->p+1) == 'X')) {
        info->p += 2;

        sNode*% node = get_hex_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    /// oct number ///
    else if(*info->p == '0' && xisdigit(*(info->p+1))) {
        info->p++;

        sNode*% node = get_oct_number(info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(xisdigit(*info->p)) {
        sNode*% node = get_number(false@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(*info->p == '-' && xisdigit(*(info->p+1))) {
        info->p++;
        
        sNode*% node = get_number(true@minus, info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    else if(parsecmp("return", info)) {
        info->p += strlen("return");
        skip_spaces_and_lf(info);
        
        if(*info->p == ';') {
            return new sNode(new sReturnNode(null!, string("0"), info));
        }
        else {
            char* head = info.p;
            sNode*% value = expression(info);
            char* tail = info.p;
            
            char buf[tail-head+1];
            memcpy(buf, head, tail-head);
            buf[tail-head] = '\0';
            
            return new sNode(new sReturnNode(value, string(buf), info));
        }
    }
    else if(*info->p == '*') {
        info->p ++;
        skip_spaces_and_lf(info);
        
        sNode*% value = expression_node(info);
        
        return new sNode(new sDerefferenceNode(value, info));
    }
    else if(*info->p == '&') {
        info->p ++;
        skip_spaces_and_lf(info);
        
        sNode*% value = expression_node(info);
        
        return new sNode(new sRefferenceNode(value, info));
    }
    else if(*info->p == '!') {
        info->p ++;
        skip_spaces_and_lf(info);
        
        sNode*% value = expression_node(info);
        
        return new sNode(new sReverseNode(value, info));
    }
    else if(xisalpha(*info->p) || *info->p == '_') {
        char* head = info.p;
        int head_sline = info.sline;
        
        string buf;
        {
            char* p = info.p;
            int sline = info.sline;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                buf = parse_word(info);
            }
            else {
                buf = string("");
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        bool is_type_name_ = is_type_name(buf, info);
        
        /// backtrace ///
        bool define_function_pointer_flag = false;
        if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "switch" && buf !== "return" && buf !== "sizeof" && buf !== "isheap" && buf !== "gc_inc" && buf !== "gc_dec" && *info->p == '(' && *(info->p+1) != '*')
        {
            info.no_output_err = true;
            parse_type(info);
            info.no_output_err = false;
            
            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf(info);
                
                if(*info->p == '*') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    define_function_pointer_flag = true;
                }
            }
            
            info.p = head;
            info.sline = head_sline;
        }
        
        /// backtrace2 ///
        bool lambda_flag = false;
        if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "switch" && buf !== "return" && buf !== "sizeof" && buf !== "isheap" && buf !== "gc_inc" && buf !== "gc_dec" && *info->p == '(' && *(info->p+1) != '*')
        {
            info.p = head;
            info.sline = head_sline;
            
            info.no_output_err = true;
            
            parse_type(info);
            
            if(xisalpha(*info.p) || *info.p == '_') {
                var word2 = parse_word(info);
                
                if(word2 === "lambda") {
                    lambda_flag = true;
                }
            }
            info.no_output_err = false;
            
            info.p = head;
            info.sline = head_sline;
        }
        
        buf = parse_word(info);
        
        if(lambda_flag) {
            info.p = head;
            info.sline = head_sline;
            
            return parse_function(info);
        }
        else if((buf === "string" || buf === "wstring") && *info->p == '(') {
            sNode*% node = parse_function_call(buf, info);
            
            node = post_position_operator(node, info);
            node = post_position_operator3(node, info);
            
            return node;
        }
        else if(buf === "sizeof" && *info->p == '(') {
            sNode*% node = string_node(buf, head, head_sline, info);
            
            node = post_position_operator(node, info);
            
            return node;
        }
        else if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "switch" && buf !== "return" && buf !== "sizeof" && buf !== "isheap" && buf !== "gc_inc" && buf !== "gc_dec" && *info->p == '(' && !(*(info->p+1) == '*' && is_type_name_))
        {
            sNode*% node = parse_function_call(buf, info);
            
            node = post_position_operator(node, info);
            node = post_position_operator3(node, info);
            
            return node;
        }
        else {
            sNode*% node = string_node(buf, head, head_sline, info);
            
            node = post_position_operator(node, info);
            
            return node;
        }
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
        
        /// backtrace ///
        bool cast_expression_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            string word = string("");
            if(isalpha(*info->p) || *info->p == '_') {
                word = parse_word(info);
            }
            
            if(is_type_name(word, info)) {
                cast_expression_flag = true;
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        /// backtrace ///
        bool tuple_expression_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            bool no_comma = info.no_comma;
            info.no_comma = true;
            bool no_output_err = info.no_output_err;
            info.no_output_err = true;
            bool no_output_come_code = info.no_output_come_code;
            info.no_output_come_code = true;
            
            sNode*% node = expression(info);
            
            info.no_comma = no_comma;
            info.no_output_err = no_output_err;
            info.no_output_come_code = no_output_come_code;
            
            if(*info->p == ',') {
                tuple_expression_flag = true;
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(tuple_expression_flag) {
            return parse_tuple(info);
        }
        else if(cast_expression_flag) {
            parse_sharp(info);
            var type, name, err = parse_type(info);
            
            if(!err) {
                exit(2);
            }
            
            parse_sharp(info);
            expected_next_character(')', info);
            
            sNode*% node = expression_node(info);
            
            return new sNode(new sCastNode(type, node, info));
        }
        else {
            parse_sharp(info);
            sNode*% node = expression(info);
            parse_sharp(info);
            
            expected_next_character(')', info);
            parse_sharp(info);
            
            node = new sNode(new sParenNode(node, info));
            
            node = post_position_operator(node, info);
            
            return node;
        }
    }
    else {
        sNode*% node = inherit(info);
        
        node = post_position_operator(node, info);
        
        return node;
    }
    
    err_msg(info, "unexpected operator(%c)\n", *info->p);
    exit(2);
    
    return (sNode*%)null;
}

sNode*% expression(sInfo* info) version 5
{
    return expression_node(info);
}


struct sGlobalVariable {
    sType*% type;
    string name;
    sNode*% right_node;
    
    int sline;
    string sname;
    
    string array_initializer;
};

sGlobalVariable*% sGlobalVariable*::initialize(sGlobalVariable*% self, sType* type, string name, sNode*% right_node, string array_initializer, sInfo* info)
{
    self.sline = info.sline;
    self.sname = info.sname;
    
    self.type = clone type;
    self.name = string(name);
    self.right_node = right_node;
    self.array_initializer = array_initializer;
    
    return self;
}

int sGlobalVariable*::sline(sGlobalVariable* self, sInfo* info)
{
    return self.sline;
}

string sGlobalVariable*::sname(sGlobalVariable* self, sInfo* info)
{
    return string(self.sname);
}

bool sGlobalVariable*::terminated()
{
    return false;
}

bool sGlobalVariable*::compile(sGlobalVariable* self, sInfo* info)
{
    sType* type = self.type;
    string name = self.name;
    sNode* right_node = self.right_node;
    string array_initializer = self.array_initializer;
    
    add_variable_to_global_table(name, type, info);
    
    if(array_initializer) {
        add_come_code_at_source_head(info, "%s=%s;\n", make_define_var(type, name, info), array_initializer);
    }
    else if(right_node) {
        add_come_code_at_source_head(info, "%s;\n", make_define_var(type, name, info));
        var name2 = borrow string(name);
    }
    else {
        add_come_code_at_source_head(info, "%s;\n", make_define_var(type, name, info));
    }
    
    return true;
}

struct sExternalGlobalVariable {
    sType*% type;
    string name;
    
    int sline;
    string sname;
};

sExternalGlobalVariable*% sExternalGlobalVariable*::initialize(sExternalGlobalVariable*% self, sType* type, string name, sInfo* info)
{
    self.type = clone type;
    self.name = string(name);

    self.sline = info.sline;
    self.sname = info.sname;
    
    return self;
}

int sExternalGlobalVariable*::sline(sExternalGlobalVariable* self, sInfo* info)
{
    return self.sline;
}

string sExternalGlobalVariable*::sname(sExternalGlobalVariable* self, sInfo* info)
{
    return string(self.sname);
}

bool sExternalGlobalVariable*::terminated()
{
    return false;
}

bool sExternalGlobalVariable*::compile(sExternalGlobalVariable* self, sInfo* info)
{
    sType* type = self.type;
    string name = self.name;
    
    add_variable_to_global_table(name, type, info);
    
    add_come_code_at_source_head(info, "extern %s;\n", make_define_var(type, name, info));
    
    return true;
}


string create_method_name(sType* obj_type, bool no_pointer_name, char* fun_name, sInfo* info)
{
    string struct_name;
    buffer*% buf = new buffer();
    if(obj_type->mOriginalTypeName !== "" && !obj_type->mNoHeap) {
        struct_name = string(obj_type->mOriginalTypeName);
    }
    else {
        struct_name = create_generics_name(obj_type, info);
        for(int i=0; i<obj_type->mPointerNum; i++)
        {
            buf.append_str("p");
        }
    }
    
    return xsprintf("%s%s_%s", struct_name, buf.to_string(), fun_name);
}


sNode*% parse_global_variable(sInfo* info)
{
    var result_type, var_name,err = parse_type(info, true@parse_variable_name);
    
    if(!err) {
        exit(2);
    }
    
    sNode*% right_node = null;
    string array_initializer = null;
    
    if(*info->p == '=') {
        info->p++;
        skip_spaces_and_lf(info);
        
        if(*info->p == '{') {
            buffer*% buf = new buffer();
            
            buf.append_char(*info->p);
            info->p++;
            
            bool squort = false;
            bool dquort = false;
            int nest = 1;
            while(1) {
                if(*info->p == '\0') {
                    err_msg(info, "unexpected source end in array initiailizer");
                    exit(2);
                }
                else if(*info->p == '\\') {
                    buf.append_char(*info->p);
                    info->p++;
                    buf.append_char(*info->p);
                    info->p++;
                }
                else if(!squort && *info->p == '"') {
                    buf.append_char(*info->p);
                    info->p++;
                    dquort = !dquort;
                }
                else if(!dquort && *info->p == '\'') {
                    buf.append_char(*info->p);
                    info->p++;
                    squort = !squort;
                }
                else if(squort || dquort) {
                    buf.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '{') {
                    nest++;
                    buf.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '}') {
                    nest--;
                    buf.append_char(*info->p);
                    info->p++;
                    
                    if(nest == 0) {
                        skip_spaces_and_lf(info);
                        break;
                    }
                }
                else {
                    buf.append_char(*info->p);
                    info->p++;
                }
            }
            array_initializer = buf.to_string();
        }
        else {
            parse_sharp(info);
            right_node = expression(info);
            parse_sharp(info);
        }
    }
    
    if(result_type->mExtern) {
        if(right_node) {
            err_msg(info, "invalid right value");
            exit(2);
        }
        return new sNode(new sExternalGlobalVariable(result_type, var_name, info));
    }
    else {
        return new sNode(new sGlobalVariable(result_type, var_name, right_node, array_initializer, info));
    }
    
    return (sNode*%)null;
}

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 1
{
    err_msg(info, "unexpected word(%s)(2)\n", buf);
    exit(2);
    
    return (sNode*%)null;
}

sNode*% post_position_operator3(sNode*% node, sInfo* info) version 5
{
    return node;
}

