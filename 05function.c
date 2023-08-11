#include "common.h"
#include <ctype.h>

void parse_sharp(sInfo* info) version 5
{
    while(*info->p == '#') {
        skip_spaces_and_lf(info);
    
        info->p++;
        skip_spaces_and_lf(info);

        if(xisdigit(*info->p)) {
            int line = 0;
            char fname[PATH_MAX];

            while(xisdigit(*info->p)) {
                line = line * 10 + (*info->p - '0');
                info->p++;
            }
            skip_spaces_and_lf(info);

            if(*info->p == '"') {
                info->p++;

                char* p = fname;

                while(*info->p != '"') {
                    *p = *info->p;
                    p++;
                    info->p++;
                }
                *p = '\0';

                while(*info->p != '\n') {
                    info->p++;
                }
                info->p++;
            }

            info->sline = line;
            info->sname = string(fname);

            skip_spaces_and_lf(info);
        }
        else if(*info->p == '"') {
            info->p++;

            while(*info->p != '"') {
                info->p++;
            }

            while(*info->p != '\n') {
                info->p++;
            }
            info->p++;
        }
    
        skip_spaces_and_lf(info);
    }
}

bool parsecmp(char* str, sInfo* info) 
{
    return memcmp(info.p.p, str, strlen(str)) == 0;
}

exception string parse_word(sInfo* info, bool no_check_err=false)
{
    var buf = new buffer();
    
    while((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p >= '0' && *info->p <= '9'))
    {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    
    if(!no_check_err && buf.length() == 0) {
        err_msg(info, "unexpected character(%c)\n", *info->p);
        throw;
    }
    
    return buf.to_string();
}

void skip_spaces_and_lf(sInfo* info)
{
    while(true) {
        if(*info->p == ' ' || *info->p == '\t') {
            info->p++;
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

bool is_contained_generics_class(sType* type, sInfo* info)
{
    foreach(it, type->mGenericsTypes) {
        if(it->mClass->mGenerics) {
            return true;
        }
    }
    
    if(type->mClass->mGenerics) {
        return true;
    }
    
    return false;
}

exception list<sType*%>*%, list<string>*%, bool parse_params(sInfo* info)
{
    var param_types = new list<sType*%>();
    var param_names = new list<string>();
    bool var_args = false;
    
    expected_next_character('(', info) throws;
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        
        var param_type, param_name = parse_type(info, parse_variable_name:true) throws;
        
        var param_type2 = solve_generics(param_type, info->generics_type, info) throws;
        
        param_type2->mFunctionParam = true;
        
        
        param_types.push_back(clone param_type2);
        param_names.push_back(clone param_name);
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
            
            if(parsecmp("...", info)) {
                info->p += strlen("...");
                skip_spaces_and_lf(info);
                var_args = true;
                
                expected_next_character(')', info);
                break;
            }
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    
    return new tuple3<list<sType*%>*%, list<string>*%, bool>(param_types, param_names, var_args);
}

exception tuple2<sType*%,string>*% parse_type(sInfo* info, bool parse_variable_name=false)
{
    string type_name = parse_word(info) throws;
    
    bool constant = false;
    bool static_ = false;
    bool volatile_ = false;
    bool register_ = false;
    bool exception_ = false;
    bool unsigned_ = false;
    bool long_ = false;
    bool long_long = false;
    bool short_ = false;
    bool restrict_ = false;
    bool struct_ = false;
    bool union_ = false;
    bool enum_ = false;
    bool no_heap = false;
    bool extern_ = false;
    
    while(true) {
        if(type_name === "struct") {
            struct_ = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "union") {
            union_ = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "enum") {
            enum_ = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "const") {
            constant = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "static") {
            static_ = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "extern_") {
            extern_ = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "volatile") {
            volatile_ = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "long") {
            /// backtrace ///
            {
                char* p = info.p.p;
                int sline = info.sline;
                
                if(!xisalpha(*info->p)) {
                    info.p.p = p;
                    info.sline = sline;
                    
                    type_name = string("long");
                    break;
                }
                else {
                    type_name = parse_word(info, true) throws;
                    
                    if(is_type_name(type_name, info)) {
                        if(long_) {
                            long_long = true;
                            long_ = false;
                        }
                        else {
                            long_ = true;
                        }
                        break;
                    }
                    else {
                        info.p.p = p;
                        info.sline = sline;
                        
                        type_name = string("long");
                        break;
                    }
                }
            }
        }
        else if(type_name === "unsigned") {
            unsigned_ = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "register") {
            register_ = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "exception") {
            exception_ = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "restrict") {
            restrict_ = true;
            
            type_name = parse_word(info) throws;
        }
        else if(type_name === "short") {
            short_ = true;
            
            if(*info->p == ':') {
                break;
            }
            else if(xisalnum(*info.p)) {
                char* p = info.p.p;
                int sline = info.sline;
                type_name = parse_word(info).catch {
                }
                
                if(type_name === "int") {
                    break;
                }
                else if(type_name === "short") {
                    short_ = false;
                    break;
                }
                else if(is_type_name(type_name, info)) {
                    info.p.p = p;
                    info.sline = sline;
                }
                else {
                    type_name = string("short");
                    info.p.p = p;
                    info.sline = sline;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    
    sType*% type;
    string var_name;
    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
        
        expected_next_character('*', info);
        
        sType*% result_type;
        if(info.types[type_name]) {
            result_type = clone info.types[type_name];
            //type.mOriginalTypeName = string(type_name);
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    result_type = new sType(xsprintf("generics_type%d", i), info);
                }
            }
        }
        else {
            result_type = new sType(type_name, info);
        }
        
        result_type->mConstant = result_type->mConstant || constant;
        result_type->mRegister = register_;
        result_type->mUnsigned = result_type->mUnsigned || unsigned_;
        result_type->mVolatile = volatile_;
        result_type->mStatic = result_type->mStatic || static_;
        result_type->mExtern = result_type->mExtern || extern_;
        result_type->mRestrict = result_type->mRestrict || restrict_;
        result_type->mLongLong = result_type->mLongLong || long_long;
        result_type->mLong = result_type->mLong || long_;
        result_type->mShort = result_type->mShort || short_;
        
        var_name = parse_word(info) throws;
        expected_next_character(')', info);
        
        var param_types, param_names, var_args = parse_params(info) throws;
        
        type = new sType("lambda", info);
        
        type->mResultType = new tuple1<sType*%>(result_type);
        type->mParamTypes = param_types;
        type->mParamNames = param_names;
        type->mVarArgs = var_args;
    }
    else {
        if(info.types[type_name]) {
            type = clone info.types[type_name];
            type.mOriginalTypeName = string(type_name);
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    type = new sType(xsprintf("generics_type%d", i), info);
                }
            }
        }
        else {
            type = new sType(type_name, info);
        }
        
        if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf(info);
            
            while(true) {
                var generics_type, var_name = parse_type(info) throws;
                
                type->mGenericsTypes.push_back(generics_type);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    break;
                }
                else {
                    err_msg(info, "invalid generics type\n");
                    throw;
                }
            }
            if(type->mClass == null) {
                err_msg(info, "class not found (2)");
                throw;
            }
            type = solve_generics(type, info->generics_type, info) throws;
            
            type->mGenericsName = string(type_name);


            string new_name = create_generics_name(type, false@no_pointer_name, info);
            if(type->mClass->mName === type->mGenericsName) {
                if(!info.no_output_err) {
                    if(info.classes[new_name] == null) {
                        if(!define_generics_struct(type, info)) {
                            throw;
                        }
                        if(!is_contained_generics_class(type, info)) {
                            type->mClass = info.classes[new_name];
                            type->mSolvedGenericsName = true;
                        }
                    }
                    else {
                        if(!is_contained_generics_class(type, info)) {
                            type->mClass = info.classes[new_name];
                            type->mSolvedGenericsName = true;
                        }
                    }
                }
            }
        }
        
        type->mConstant = type->mConstant || constant;
        type->mRegister = register_;
        type->mUnsigned = type->mUnsigned || unsigned_;
        type->mVolatile = volatile_;
        type->mStatic = type->mStatic || static_;
        type->mExtern = type->mExtern || extern_;
        type->mRestrict = type->mRestrict || restrict_;
        type->mLongLong = type->mLongLong || long_long;
        type->mLong = type->mLong || long_;
        type->mShort = type->mShort || short_;
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
            
            type->mPointerNum++;
        }
        
        if(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf(info);
            
            if(!gGC) {
                type->mHeap = true;
            }
        }
        
        if(*info->p == '&') {
            info->p++;
            skip_spaces_and_lf(info);
            
            if(!gGC) {
                type->mNoHeap = true;
            }
        }
        
        if(*info->p == '?') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        if(parse_variable_name) {
            if(xisalnum(*info.p) || *info->p == '_') {
                var_name = parse_word(info) throws;
            }
            else {
                static int num_anonymous_var_name = 0;
                num_anonymous_var_name++;
                var_name = xsprintf("anonymous_var_name%d", num_anonymous_var_name);
            }
        }
    }
    
    while(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf(info);
        
        sNode*% node = expression(info) throws;
        type.mArrayNum.push_back(node);
        
        expected_next_character(']', info) throws;
    }
    
    return new tuple2<sType*%, string>(type, var_name);
}


sBlock*% sBlock*::initialize(sBlock*% self, sInfo* info)
{
    self.mNodes = new list<sNode*%>();
    
    return self;
}

sGenericsFun*% sGenericsFun*::initialize(sGenericsFun*% self, sType*% impl_type, list<string>* generics_type_names, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, bool var_args, string block, sInfo* info)
{
    self.mImplType = clone impl_type;
    self.mGenericsTypeNames = clone generics_type_names;
    
    self.mName = name;
    self.mResultType = result_type;
    self.mParamTypes = param_types;
    self.mParamNames = param_names;
    self.mVarArgs = var_args;
    
    self.mBlock = block;
    self.mSLine = info.sline;
    
    return self;
}

struct sIntNode
{
    int value;
    int sline;
    string sname;
};

sIntNode*% sIntNode*::initialize(sIntNode*% self, int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sIntNode*::compile(sIntNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", self.value);
    come_value.type = new sType("int", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sIntNode*::sline(sIntNode* self, sInfo* info)
{
    return self.sline;
}

string sIntNode*::sname(sIntNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sReturnNode
{
    sNode*%? value;
    int sline;
    string sname;
};

sReturnNode*% sReturnNode*::initialize(sReturnNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
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

bool sReturnNode*::compile(sReturnNode* self, sInfo* info)
{
    if(self.value) {
        if(!self.value->compile->(info)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        sFun* come_fun = info.come_fun;
        
/*
        if(come_value.type->mHeap && come_value.var == null) {
            add_come_code(info, "come_increment_ref_count(%s);\n", come_value.c_value);
            int right_value_id = get_right_value_id_from_obj(come_value.c_value);
            
            if(right_value_id != -1) {
                remove_object_from_right_values(right_value_id, info);
            }
        }
*/
        add_come_code(info, "%s __result__ = %s;\n", make_type_name_string(come_value.type, false@in_header, false@array_cast_pointer, info), come_value.c_value);
    
        if(info.come_fun.mName === "main") {
            foreach(it, info.funcs) {
                sFun* it2 = info.funcs[it];
                
                if(memcmp(it, "__final_", strlen("__final_")) == 0) {
                    add_come_code(info, "%s();\n", it);
                }
            }
        }
        
/*
        if(info.param_types && info.param_names) {
            int i = 0;
            foreach(name, info.param_names) {
                sType* type = info.param_types[i];
                if(type->mHeap) {
                    free_object(type, name, false@no_decrement, false@no_free, info);
                }
                i++;
            }
        }
*/
        
        free_objects_on_return(come_fun.mBlock, info, come_value.c_value, false@top_block);
        
        add_come_code(info, "return __result__;\n");
    }
    else {
/*
        if(info.param_types && info.param_names) {
            int i = 0;
            foreach(name, info.param_names) {
                sType* type = info.param_types[i];
                if(type->mHeap) {
                    free_object(type, name, false@no_decrement, false@no_free, info);
                }
                i++;
            }
        }
*/
    
        if(info.come_fun.mName === "main") {
            foreach(it, info.funcs) {
                sFun* it2 = info.funcs[it];
                
                if(memcmp(it, "__final_", strlen("__final_")) == 0) {
                    add_come_code(info, "%s();\n", it);
                }
            }
        }
        
        sFun* come_fun = info.come_fun;
        free_objects_on_return(come_fun.mBlock, info, null!, false@top_block);
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

exception sNode*% expression_node(sInfo* info) version 1
{
    skip_spaces_and_lf(info);
    parse_sharp(info);
    
    err_msg(info, "invalid character(%c)(1)\n", *info->p);
    throw;
}

struct sFunCallNode 
{
    string fun_name;
    list<sNode*%>*% params
    int sline;
    string sname;
};

sFunCallNode*% sFunCallNode*::initialize(sFunCallNode*% self, char* fun_name, list<sNode*%>* params, sInfo* info)
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

bool sFunCallNode*::compile(sFunCallNode* self, sInfo* info)
{
    string fun_name = self.fun_name;
    list<sNode*%>* params = self.params;
    
    sVar* var_ = get_variable_from_table(info.lv_table, fun_name);
    
    if(var_) {
        sType* lambda_type = var_->mType;
        
        sType*% result_type = clone lambda_type->mResultType.0;
        result_type->mStatic = false;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(lambda_type.mParamTypes.length() != params.length() && !lambda_type.mVarArgs) {
            err_msg(info, "invalid param number(%s). function param number is %d. caller param number is %d", fun_name, lambda_type.mParamTypes.length(), params.length());
            return false;
        }
        
        int i = 0;
        foreach(it, params) {
            if(!it.compile->(info)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            if(lambda_type.mVarArgs && lambda_type.mParamTypes[i] == null) {
            }
            else {
                if(lambda_type.mParamTypes[i].mHeap) {
                    come_value.c_value = xsprintf("come_increment_ref_count(%s)", come_value.c_value);
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
        
        if(lambda_type->mResultType.0.mHeap) {
            come_value.c_value = append_object_to_right_values(come_value.c_value, lambda_type->mResultType.0, info);
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
        sFun* fun = info.funcs.at(fun_name, null!);
        
        if(fun == null) {
            err_msg(info, "function not found(%s) at normal function call\n", fun_name);
            return false;
        }
        
        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;
        
        list<CVALUE*%>*% come_params = new list<CVALUE*%>();
        
        if(fun.mParamTypes.length() != params.length() && !fun.mVarArgs) {
            err_msg(info, "invalid param number(%s). function param number is %d. caller param number is %d", fun_name, fun.mParamTypes.length(), params.length());
            return false;
        }
        
        int i = 0;
        foreach(it, params) {
            if(!it.compile->(info)) {
                return false;
            }
            
            CVALUE*% come_value = get_value_from_stack(-1, info);
            if(fun.mVarArgs && fun.mParamTypes[i] == null) {
            }
            else {
                if(fun.mParamTypes[i].mHeap) {
                    come_value.c_value = xsprintf("come_increment_ref_count(%s)", come_value.c_value);
                }
            }
            come_params.push_back(come_value);
            dec_stack_ptr(1, info);
            
            i++;
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
        
        if(fun->mResultType->mHeap) {
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

bool sCastNode*::compile(sCastNode* self, sInfo* info)
{
    sType* type = self.mType;
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s)%s", make_type_name_string(type, false@in_header, false@array_cast_pointer, info), left_value.c_value);
    come_value.type = clone type;
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

exception sNode*% parse_function_call(char* fun_name, sInfo* info)
{
    expected_next_character('(', info) throws;
    
    list<sNode*%>*% params = new list<sNode*%>();
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        
        bool no_comma = info.no_comma;
        info.no_comma = true;
        
        sNode*% node = expression(info) throws;
        
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
    
    return new sNode(new sFunCallNode(fun_name, params, info));
}

exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 5
{
    err_msg(info, "unexpected word(%s)(1)\n", buf);
    throw
}

exception sNode*% post_position_operator(sNode*% node, sInfo* info) version 5
{
    return node;
}

exception sNode*% expression_node(sInfo* info) version 99
{
    skip_spaces_and_lf(info);
    
    parse_sharp(info);
    
    if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        sNode*% node = new sNode(new sIntNode(n, info));
        
        node = post_position_operator(node, info) throws;
        
        return node;
    }
    else if(*info->p == '-' && xisdigit(*(info->p+1))) {
        info->p++;
        
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        sNode*% node = new sNode(new sIntNode(-n, info));
        
        node = post_position_operator(node, info) throws;
        
        return node;
    }
    else if(parsecmp("return", info)) {
        info->p += strlen("return");
        skip_spaces_and_lf(info);
        
        if(*info->p == ';') {
            return new sNode(new sReturnNode(null!, info));
        }
        else {
            sNode*% value = expression(info) throws;
            
            return new sNode(new sReturnNode(value, info));
        }
    }
    else if(*info->p == '*') {
        info->p ++;
        skip_spaces_and_lf(info);
        
        sNode*% value = expression_node(info) throws;
        
        return new sNode(new sDerefferenceNode(value, info));
    }
    else if(*info->p == '&') {
        info->p ++;
        skip_spaces_and_lf(info);
        
        sNode*% value = expression_node(info) throws;
        
        return new sNode(new sRefferenceNode(value, info));
    }
    else if(*info->p == '!') {
        info->p ++;
        skip_spaces_and_lf(info);
        
        sNode*% value = expression_node(info) throws;
        
        return new sNode(new sReverseNode(value, info));
    }
    else if(xisalpha(*info->p) || *info->p == '_') {
        char* head = info.p.p;
        int head_sline = info.sline;
        
        /// backtrace ///
        bool define_function_pointer_flag = false;
        {
            info.no_output_err = true;
            parse_type(info).catch {}
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
            
            info.p.p = head;
            info.sline = head_sline;
        }
        
        /// backtrace2 ///
        bool lambda_flag = false;
        {
            info.p.p = head;
            info.sline = head_sline;
            
            info.no_output_err = true;
            
            (void)parse_type(info);
            
            var word2 = parse_word(info).catch {}
            info.no_output_err = false;
            
            if(word2 != null && word2 === "lambda") {
                lambda_flag = true;
            }
            
            info.p.p = head;
            info.sline = head_sline;
        }
        
        string buf = parse_word(info) throws;
        
        if(lambda_flag) {
            info.p.p = head;
            info.sline = head_sline;
            
            return parse_function(info) throws;
        }
        else if((buf === "string" || buf === "wstring") && *info->p == '(') {
            sNode*% node = parse_function_call(buf, info) throws;
            
            node = post_position_operator(node, info) throws;
            
            return node;
        }
        else if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "switch" && buf !== "return" && buf !== "sizeof" && buf !== "isheap" && *info->p == '(' && *(info->p+1) != '*')
        {
            sNode*% node = parse_function_call(buf, info) throws;
            
            node = post_position_operator(node, info) throws;
            
            return node;
        }
        else {
            sNode*% node = string_node(buf, head, head_sline, info) throws;
            
            node = post_position_operator(node, info) throws;
            
            return node;
        }
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
        
        /// backtrace ///
        bool cast_expression_flag = false;
        {
            char* p = info.p.p;
            int sline = info.sline;
            
            string word = parse_word(info, true) throws;
            
            if(is_type_name(word, info)) {
                cast_expression_flag = true;
            }
            
            info.p.p = p;
            info.sline = sline;
        }
        
        if(cast_expression_flag) {
            var type, name = parse_type(info) throws;
            
            expected_next_character(')', info);
            
            sNode*% node = expression_node(info) throws;
            
            return new sNode(new sCastNode(type, node, info));
        }
        else {
            sNode*% node = expression(info) throws;
            
            expected_next_character(')', info);
            
            node = new sNode(new sParenNode(node, info));
            
            node = post_position_operator(node, info) throws;
            
            return node;
        }
    }
    else {
        sNode*% node = inherit(info) throws;
        
        node = post_position_operator(node, info) throws;
        
        return node;
    }
    
    err_msg(info, "unexpected operator(%c)\n", *info->p);
    throw;
    return (sNode*)null;
}

exception sNode*% expression(sInfo* info) version 5
{
    return expression_node(info) throws;
}


exception sBlock*% parse_block(sInfo* info)
{
    sVarTable* lv_table = info->lv_table;
    
    var result = new sBlock(info);
    
    int block_level = info->block_level;
    info->block_level++;
    
    if(*info->p == '{') {
        info->p++;
        skip_spaces_and_lf(info);
        while(true) {
            parse_sharp(info);
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            
            parse_sharp(info);
            
            sNode*% node = expression(info) throws;
            
            result.mNodes.push_back(node);
            
            parse_sharp(info);
            
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp(info);
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
    }
    else {
        parse_sharp(info);
        sNode*% node = expression(info) throws;
        parse_sharp(info);
        
        result.mNodes.push_back(node);
    }
    
    info->block_level = block_level;
    
    return result;
}

exception int transpile_block(sBlock* block, list<sType*%>*? param_types, list<string>*? param_names, sInfo* info)
{
    sVarTable* old_table = info->lv_table;
    block->mVarTable = new sVarTable(false@global, old_table);
    info->lv_table = block->mVarTable;
    
    list<sType*%>*? param_types_ = info.param_types;
    list<string>*? param_names_ = info.param_names;
    
    info.param_types = param_types;
    info.param_names = param_names;
    
    if(param_types && param_names) {
        int i;
        foreach(name, param_names) {
            sType*% type = clone param_types[i];
            type->mFunctionParam = true;
            type->mAllocaValue = false;
            add_variable_to_table(name, type, info);
            i++;
        }
    }
    
    int block_level = info->block_level;
    info->block_level++;
    
    if(info.come_fun.mName === "main") {
        foreach(it, info.funcs) {
            sFun* it2 = info.funcs[it];
            
            if(memcmp(it, "__init_", strlen("__init_")) == 0) {
                add_come_code(info, "%s();\n", it);
            }
        }
    }
    
    if(block->mNodes.length() == 0) {
    }
    else {
        int i;
        foreach(node, block->mNodes) {
            info.module.mLastCode = null;
            
            int stack_num_before = info->stack.length();
            
            int sline = info.sline;
            string sname = string(info.sname);
            
            info->last_statment_is_return = false;
            
            info.sline = node.sline->();
            info.sname = node.sname->();
            
            if(!node.compile->(info)) {
                throw;
            }
            
            info.sline = sline;
            info.sname = string(sname);
    
            add_last_code_to_source(info);

            arrange_stack(info, stack_num_before);

            free_right_value_objects(info);
        }
    }
    
/*
    if(param_types && param_names) {
        int i = 0;
        foreach(name, param_names) {
            sType* type = param_types[i];
            if(type->mHeap) {
                free_object(type, name, false@no_decrement, false@no_free, info);
            }
            i++;
        }
    }
*/
    
    if(info.come_fun.mName === "main") {
        foreach(it, info.funcs) {
            sFun* it2 = info.funcs[it];
            
            if(memcmp(it, "__final_", strlen("__final_")) == 0) {
                add_come_code(info, "%s();\n", it);
            }
        }
    }

    if(!info->last_statment_is_return) {
        free_objects(info->lv_table, null!, info);
    }
    
    info->lv_table = old_table;
    info->block_level = block_level;
    
    info.param_types = param_types_;
    info.param_names = param_names_;
    
    return 0;
}


void arrange_stack(sInfo* info, int top)
{
    if(info->stack.length() > top) {
        dec_stack_ptr(info->stack.length()-top, info);
    }
    if(info->stack.length() < top) {
        fprintf(stderr, "%s %d: unexpected stack value. The stack num is %d. top is %d\n", info->sname, info->sline, info->stack.length(), top);
        int a = 0;
        int b = 1;
        int c = b/a;
        exit(2);
    }
}

exception int expected_next_character(char c, sInfo* info)
{
    if(*info->p != c) {
        err_msg(info, "expected next charaster is %c, but %c\n", c, *info->p);
        throw;
    }
    
    info->p++;
    skip_spaces_and_lf(info);
    
    return 0;
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

bool sGlobalVariable*::compile(sGlobalVariable* self, sInfo* info)
{
    sType* type = self.type;
    string name = self.name;
    sNode* right_node = self.right_node;
    string array_initializer = self.array_initializer;
    
    add_variable_to_global_table(name, type, info);
    
    if(array_initializer) {
        add_come_code_at_source_head(info, "%s=%s;\n", make_define_var(type, name, info), array_initializer);
        add_come_code_to_auto_come_header(info, "extern %s;\n", make_define_var(type, name, info));
    }
    else if(right_node) {
        add_come_code_at_source_head(info, "%s;\n", make_define_var(type, name, info));
        add_come_code_to_auto_come_header(info, "extern %s;\n", make_define_var(type, name, info));
        info.global_variable_initialize_node.insert(string(name), clone right_node);
    }
    else {
        add_come_code_at_source_head(info, "%s;\n", make_define_var(type, name, info));
        add_come_code_to_auto_come_header(info, "extern %s;\n", make_define_var(type, name, info));
        add_come_code_to_init_module_fun(info, "memset(&%s, 0, sizeof(%s));\n", name, make_type_name_string(type, false@in_header, false@array_cast_pointer, info));
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

bool sExternalGlobalVariable*::compile(sExternalGlobalVariable* self, sInfo* info)
{
    sType* type = self.type;
    string name = self.name;
    
    add_variable_to_global_table(name, type, info);
    
    add_come_code_at_source_head(info, "extern %s;\n", make_define_var(type, name, info));
    add_come_code_to_auto_come_header(info, "extern %s;\n", make_define_var(type, name, info));
    
    return true;
}

struct sFunNode {
    sFun* mFun;
    int sline;
    string sname;
};

sFunNode*% sFunNode*::initialize(sFunNode*% self, sFun* fun, sInfo* info)
{
    self.mFun = fun;
    self.sline = info.sline;
    self.sname = info.sname;
    
    return self;
}

int sFunNode*::sline(sFunNode* self, sInfo* info)
{
    return self.sline;
}

string sFunNode*::sname(sFunNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sFunNode*::compile(sFunNode* self, sInfo* info)
{
    sFun* come_fun = info.come_fun;
    info.come_fun = self.mFun;
    
    bool result = true;
    if(self.mFun.mBlock) {
        transpile_block(self.mFun.mBlock, self.mParamTypes, self.mParamNames, info).catch {
            result = false;
        }
    }
    
    info.come_fun = come_fun;
    
    return result;
}

struct sLambdaNode {
    sFun* mFun;
    int sline;
    string sname;
};

sLambdaNode*% sLambdaNode*::initialize(sLambdaNode*% self, sFun* fun, sInfo* info)
{
    self.mFun = fun;
    self.sline = info.sline;
    self.sname = info.sname;
    
    return self;
}

int sLambdaNode*::sline(sLambdaNode* self, sInfo* info)
{
    return self.sline;
}

string sLambdaNode*::sname(sLambdaNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sLambdaNode*::compile(sLambdaNode* self, sInfo* info)
{
    sFun* come_fun = info.come_fun;
    info.come_fun = self.mFun;
    
    bool result = true;
    if(self.mFun.mBlock) {
        transpile_block(self.mFun.mBlock, self.mParamTypes, self.mParamNames, info).catch {
            result = false;
        }
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s", self.mFun.mName);
    come_value.type = clone self.mFun.mLambdaType;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    info.come_fun = come_fun;
    
    return result;
}

string create_method_name(sType* obj_type, bool no_pointer_name, char* fun_name, sInfo* info)
{
    string struct_name;
    if(obj_type->mOriginalTypeName !== "") {
        struct_name = string(obj_type->mOriginalTypeName);
    }
    else {
        struct_name = obj_type->mClass->mName;
    }
    
    string p_name = "p" * obj_type->mPointerNum;
    
    return xsprintf("%s%s_%s", struct_name, p_name, fun_name);
}

bool create_generics_fun(string fun_name, sGenericsFun* generics_fun, sType* generics_type, sInfo* info)
{
    sFun* funX = info.funcs[fun_name];
    if(funX) {
        return true;
    }
    sType*% result_type = solve_generics(generics_fun->mResultType, generics_type, info).catch {
        return false;
    }
    
    list<sType*%>*% param_types = new list<sType*%>();
    foreach(it, generics_fun->mParamTypes) {
        var param_type = solve_generics(it, generics_type, info).catch {
            return false;
        }
        
        param_type->mFunctionParam = true;

        param_types.push_back(clone param_type);
    }
    list<string>*% param_names = clone generics_fun->mParamNames;
    
    smart_pointer<char>*% p = info.p;
    
    int sline = generics_fun->mSLine;
    info.p = generics_fun->mBlock.to_buffer().to_pointer();
    
    var generics_type_saved = info->generics_type;
    info->generics_type = clone generics_type;
    var generics_type_names_saved = info->generics_type_names;
    info->generics_type_names = clone generics_fun.mGenericsTypeNames;
    
    sBlock*% block = parse_block(info).catch {
        return false;
    }
    
    info.p = info.p;
    info.sline = sline;
    
    bool var_args = generics_fun.mVarArgs;
    sFun*% fun = new sFun(fun_name, result_type
                    , param_types
                    , param_names, false@external
                    , var_args, block, true@static_, string(""), info);
    
    info.funcs.insert(string(fun_name), fun);
    
    sNode*% node = new sNode(new sFunNode(fun, info));
    
    if(!node.compile->(info)) {
        return false
    }
    
    info->generics_type = generics_type_saved;
    info->generics_type_names = generics_type_names_saved;
    
    return true;
}

exception string skip_block(sInfo* info)
{
    char* head = info.p.p;
    if(*info->p == '{') {
        info->p++;

        bool dquort = false;
        bool squort = false;
        int sline = 0;
        int nest = 0;
        while(1) {
            if(dquort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        throw
                    }
                    info->p++;
                }
                else if(*info->p == '"') {
                    info->p++;
                    dquort = !dquort;
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        throw;
                    }
                }
            }
            else if(squort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        throw;
                    }
                    info->p++;
                }
                else if(*info->p == '\'') {
                    info->p++;
                    squort = !squort;
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        throw;
                    }
                }
            }
            else if(*info->p == '\'') {
                sline = info->sline;
                info->p++;
                squort = !squort;
            }
            else if(*info->p == '"') {
                sline = info->sline;
                info->p++;
                dquort = !dquort;
            }
            else if(*info->p == '#') {
                parse_sharp(info);
            }
            else if(*info->p == '{') {
                info->p++;

                nest++;
            }
            else if(*info->p == '}') {
                info->p++;

                if(nest == 0) {
                    skip_spaces_and_lf(info);
                    break;
                }

                nest--;
            }
            else if(*info->p == '\0') {
                err_msg(info, "The block requires } character for closing block");
                throw
            }
            else if(*info->p == '\n') {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info, "Require block. This is %c", *info->p);
    }
    
    char* tail = info.p.p;
    
    char*% buf = new char[tail-head+1];
    memcpy(buf, head, tail-head);
    buf[tail-head] = '\0';
    
    return string(buf);
}


exception sNode*% parse_function(sInfo* info)
{
    char* header_head = info.p.p;
    var result_type, var_name = parse_type(info) throws;
    
    /// backtrace ///
    bool method_definition = false;
    {
        char* p = info.p.p;
        int sline = info.sline;
        
        buffer*% buf2 = new buffer();
        while(xisalnum(*info->p) || *info->p == '_') {
            buf2.append_char(*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        if(buf2.length() > 0 && *info->p == ':' && *(info->p+1) == ':') {
            method_definition = true;
        }
        
        info.p.p = p;
        info.sline = sline;
    }
    
    string fun_name;
    if(method_definition) {
        var obj_type, name = parse_type(info) throws;
        
        expected_next_character(':', info) throws;
        expected_next_character(':', info) throws;
        
        string fun_name2 = parse_word(info) throws;
        fun_name = create_method_name(obj_type, false@no_pointer_name, fun_name2, info)
    }
    else if(info->impl_type) {
        string fun_name2 = parse_word(info) throws;
    
        fun_name = create_method_name(info->impl_type, false@no_pointer_name, fun_name2, info);
    }
    else {
        fun_name = parse_word(info) throws;
    }
    
    var param_types, param_names, var_args = parse_params(info) throws;
    char* header_tail = info.p.p;
    
    buffer*% header_buf = new buffer();
    
    header_buf.append(header_head, header_tail - header_head);
    header_buf.append_char('\0');
    
    if(fun_name === "lambda") {
        sBlock*% block = parse_block(info) throws;
        
        static int lambda_num = 0;
        lambda_num++;
        
        fun_name = xsprintf("lambda%d", lambda_num);
        
        result_type->mStatic = false;
        
        var fun = new sFun(fun_name, result_type, param_types, param_names
                            , false@external, var_args, block
                            , true@static_, header_buf.to_string(), info);
        
        info.funcs.insert(string(fun_name), fun);
        
        return new sNode(new sLambdaNode(fun, info));
    }
    else if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf(info);
        
        result_type->mStatic = false;
        
        var fun = new sFun(fun_name, result_type, param_types, param_names
                            , true@external, var_args, null!@block
                            , false@static_, header_buf.to_string(), info);
        
        info.funcs.insert(string(fun_name), fun);
        
        return new sNode(new sFunNode(fun, info));
    }
    else if(info.impl_type && info.generics_type_names.length() > 0) {
        string block = skip_block(info) throws;
        
        var fun = new sGenericsFun(info.impl_type, info.generics_type_names, fun_name, result_type, param_types, param_names, var_args, block, info);
        
        info.generics_funcs.insert(string(fun_name), fun);
        
        return (sNode*)null;
    }
    else if(*info->p == '{') {
        sBlock*% block = parse_block(info) throws;
        
        bool static_ = false;
        if(result_type->mStatic) {
            result_type->mStatic = false;
            static_ = true;
        }
        
        var fun = new sFun(fun_name, result_type, param_types, param_names
                                , false@external, var_args, block
                                , static_
                                , header_buf.to_string()
                                , info);
        
        info.funcs.insert(string(fun_name), fun);
        
        return new sNode(new sFunNode(fun, info));
    }
    else {
        err_msg(info, "invalid character(%c)(2)\n", *info->p);
        throw;
    }
    
    return (sNode*)null;
}

exception sNode*% parse_global_variable(sInfo* info)
{
    var result_type, var_name = parse_type(info, true@parse_variable_name) throws;
    
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
                    err_msg(info, "unexpected source end in array initiailizer")
                    throw;
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
            right_node = expression(info) throws;
            parse_sharp(info);
        }
    }
    
    if(result_type->mExtern) {
        if(right_node) {
            err_msg(info, "invalid right value");
            throw;
        }
        return new sNode(new sExternalGlobalVariable(result_type, var_name, info));
    }
    else {
        return new sNode(new sGlobalVariable(result_type, var_name, right_node, array_initializer, info));
    }
    
    return (sNode*)null;
}

exception sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 1
{
    err_msg(info, "unexpected word(%s)(2)\n", buf);
    throw;
    
    return (sNode*)null;
}

bool is_type_name(char* buf, sInfo* info)
{
    sClass* klass = info.classes[buf];
    sType* type = info.types[buf];
    bool generics_type_name = info.generics_type_names.contained(string(buf));
    
    return generics_type_name || klass || type || buf === "const" || buf === "register" || buf === "static" || buf === "volatile" || buf === "unsigned" || buf === "immutable" || buf === "mutable" || buf === "struct" || buf === "enum" || buf === "union";

}

exception sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 99
{
    bool is_type_name_flag = is_type_name(buf, info);
    int sline = info.sline;
    
    /// back trace ///
    bool define_function_flag = false;
    {
        char* p = info.p.p;
        info.p.p = head;
        
        info.no_output_err = true;
        parse_type(info).catch {};
        string word = null;
        if(xisalnum(*info.p) || *info->p == '_') {
            word = parse_word(info).catch {}
            
            if(word === "extern") {
                word = parse_word(info).catch {}
            }
        }
        else {
            word = null;
        }
        info.no_output_err = false;
        
        if(word) {
            if(is_type_name(word, info)) {
                while(*info->p == '*') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(*info->p == '%') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(*info->p == ':') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(*info->p == ':') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(xisalnum(*info.p) || *info->p == '_') {
                    word = parse_word(info).catch {}
                }
            }
            
            /// fun name ///
            if(strlen(word) > 0 && (*info->p == '(' || (*info->p == ':' && *(info->p+1) == ':'))) {
                if(is_type_name_flag) {
                    define_function_flag = true;
                }
            }
        }
        
        info.p.p = p;
        info.sline = sline;
    }
    /// back trace2 ///
    bool define_variable = true;
    {
        char* p = info.p.p;
        info.p.p = head;
        
        if(!is_type_name_flag) {
            define_variable = false;
        }
        
        
        if(buf === "struct") {
            define_variable = false;
        }
        else {
            info.no_output_err = true;
            var type, name = parse_type(parse_variable_name:false, info).catch {
            };
            info.no_output_err = false;
        }
        
        if(!xisalpha(*info->p)) {
            define_variable = false;
        }
        
        while(xisalpha(*info->p) || *info->p == '_') {
            info->p++;
        }
        skip_spaces_and_lf(info);
        
        if(*info->p == '(' || *info->p == ':') {
            define_variable = false;
        }
        
        info.p.p = p;
        info.sline = sline;
    }
    
    if(define_function_flag) {
        info.p.p = head;
        info.sline = sline;
        
        return parse_function(info) throws;
    }
    else if(define_variable) {
        info.p.p = head;
        info.sline = sline;
        
        return parse_global_variable(info) throws;
    }
    
    info.p.p = head;
    info.sline = sline;
    
    string buf2 = parse_word(info) throws;
 
    return inherit(buf2, head, head_sline, info) throws;
}

exception int transpile(sInfo* info) version 5
{
    skip_spaces_and_lf(info);
    parse_sharp(info);
    
    while(*info->p) {
        parse_sharp(info);
        
        char* head = info.p.p;
        int head_sline = info.sline;
        string buf = parse_word(info) throws;
        
        parse_sharp(info);
        
        sNode*% node = top_level(buf, head, head_sline, info) throws;
        parse_sharp(info);
        
        while(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp(info);
        
        if(node != null) {
            if(!node.compile->(info)) {
                throw;
            }
        }
        parse_sharp(info);
        
        skip_spaces_and_lf(info);
    }
    
    return 0;
}

exception sFun*,string create_finalizer_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* finalizer = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && klass->mStruct) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0) && self.finalize) { void (*finalizer)(void*) = self.finalize; finalizer(self._protocol_obj); self.%s = come_decrement_ref_count(self.%s); }\n", name, name);
            
            source.append_str(source2);
        }
        else {
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the finalizer. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    throw;
                }
                
                if(field_type->mHeap) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n", name, name);
                    
                    source.append_str(source2);
                }
            }
        }
        
        source.append_char('}');
        
        var p = info.p;
        int sline = info.sline;
        
        info.p = source.to_pointer();
        
        sBlock*% block = parse_block(info) throws;
        
        var result_type = new sType("void", info);
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        var param_types = [self_type];
        var param_names = [string("self")];
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        sFun*% fun = new sFun(name, result_type, param_types, param_names
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);
        
        info.funcs.insert(string(name), fun);
        
        finalizer = fun;
        
        sNode*% node = new sNode(new sFunNode(fun, info));
        
        if(!node.compile->(info)) {
            throw;
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    return (finalizer, real_fun_name);
}
