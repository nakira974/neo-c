#include "common.h"
//#include <ctype.h>

void skip_paren(sInfo* info)
{
    int nest = 0;
    while(true) {
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);
            
            nest++;
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            
            nest--;
            if(nest == 0) {
                break;
            }
        }
        else {
            info->p++;
        }
    }
}

void parse_sharp(sInfo* info) version 5
{
    while(memcmp(info.p, "__attribute__", strlen("__attribute__")) == 0) {
        info->p += strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }

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
    
    while(memcmp(info.p, "__attribute__", strlen("__attribute__")) == 0) {
        info->p += strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
}

bool parsecmp(char* str, sInfo* info) 
{
    return memcmp(info.p, str, strlen(str)) == 0;
}

string parse_word(sInfo* info)
{
    var buf = new buffer();
    parse_sharp(info);
    
    while((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p >= '0' && *info->p <= '9') || (*info->p == '$'))
    {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    
    if(buf.to_string().length() == 0) {
        err_msg(info, "unexpected character(%c). expected word character", *info->p);
        exit(2);
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
        if(is_contained_generics_class(it, info)) {
            return true;
        }
    }
    
    if(type->mClass->mGenerics) {
        return true;
    }
    
    return false;
}

list<sType*%>*%, list<string>*%, list<string>*%, bool parse_params(sInfo* info)
{
    var param_types = new list<sType*%>();
    var param_names = new list<string>();
    var param_default_parametors = new list<string>();
    bool var_args = false;
    
    expected_next_character('(', info);
    
    /// backtrace ///
    bool void_param = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
        if(memcmp(info.p, "void", strlen("void")) == 0) {
            info.p += strlen("void");
            skip_spaces_and_lf(info);
            
            if(*info->p == ')') {
                void_param = true;
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    if(void_param) {
        if(memcmp(info.p, "void", strlen("void")) == 0) {
            info.p += strlen("void");
            skip_spaces_and_lf(info);
            
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(true) {
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            
            var param_type, param_name, err = parse_type(info, true@parse_variable_name, false@parse_multiple_type);
            
            if(!err) {
                exit(2);
            }
            
            var param_type2 = solve_generics(param_type, info->generics_type, info);
            
            param_type2->mFunctionParam = true;
            
            param_types.push_back(clone param_type2);
            param_names.push_back(clone param_name);
            
            if(*info->p == '=') {
                info->p++;
                skip_spaces_and_lf(info);
                
                parse_sharp(info);
                
                char* p = info->p;
                
                bool no_comma = info.no_comma;
                info.no_comma = true;
                
                sNode*% node = expression(info);
                
                info.no_comma = no_comma;
                
                char* p2 = info->p;
                
                char buf[p2 -p +1];
                memcpy(buf, p, p2 -p);
                buf[p2-p] = '\0';
                
                param_default_parametors.push_back(string(buf));
            }
            else {
                param_default_parametors.push_back(null);
            }
            
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
    }
    
    return (param_types, param_names, param_default_parametors, var_args);
}

sType*%,string,bool parse_type(sInfo* info, bool parse_variable_name=false, bool parse_multiple_type=true)
{
    char* head = info.p;
    int head_sline = info.sline;
    info.define_struct = false;
    
    string type_name = parse_word(info);
    if(type_name === "__extension__") {
        type_name = parse_word(info);
    }
    
    bool constant = false;
    bool static_ = false;
    bool volatile_ = false;
    bool register_ = false;
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
    bool inline_ = false;
    
    bool anonymous_type = false;
    
    while(true) {
        if(type_name === "struct") {
            struct_ = true;
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                } 
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            
            type_name = parse_word(info);
            
            if(*info->p == '<') {
                char* p = info.p;
                int sline = info.sline;
                
                info->p++;
                skip_spaces_and_lf(info);
                
                while(true) {
                    if(*info->p == '>') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        if(*info->p == '{') {
                        }
                        else {
                            info.p = p;
                            info.sline = sline;
                        }
                        break;
                    }
                    else if(*info->p == '\0') {
                        err_msg(info, "invalid struct definition");
                        return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                    }
                    else {
                        info->p++;
                    }
                }
            }
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                }
                else {
                    anonymous_type = true;
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
        }
        else if(type_name === "union") {
            union_ = true;
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    //info.define_struct = true;
                    info.define_struct = false;
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
//                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                }
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            
            type_name = parse_word(info);
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                } 
                else {
                    anonymous_type = true;
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
        }
        else if(type_name === "enum") {
            enum_ = true;
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                }
                else {
                    anonymous_type = true;
                    type_name = string("");
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
            
            type_name = parse_word(info);
            
            if(*info->p == '{') {
                char* p = info.p;
                int sline = info.sline;
                
                skip_block(info);
                
                if(*info->p == ';') {
                    info.p = head;
                    info.sline = head_sline;
                    info.define_struct = true;
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                }
                else {
                    anonymous_type = true;
                    info.p = p;
                    info.sline = sline;
                    break;
                }
            }
        }
        else if(type_name === "const") {
            constant = true;
            
            type_name = parse_word(info);
        }
        else if(type_name === "static") {
            static_ = true;
            
            type_name = parse_word(info);
        }
        else if(type_name === "extern") {
            extern_ = true;
            
            type_name = parse_word(info);
        }
        else if(type_name === "inline" || type_name === "__inline") {
            inline_ = true;
            
            type_name = parse_word(info);
        }
        else if(type_name === "volatile") {
            volatile_ = true;
            
            type_name = parse_word(info);
        }
        else if(type_name === "long") {
            /// backtrace ///
            {
                char* p = info.p;
                int sline = info.sline;
                
                if(!xisalpha(*info->p)) {
                    info.p = p;
                    info.sline = sline;
                    
                    type_name = string("long");
                    break;
                }
                else {
                    type_name = parse_word(info);
                    
                    if(type_name === "unsigned") {
                        type_name = parse_word(info);
                        
                        if(type_name === "int") {
                            break;
                        }
                    }
                    else if(type_name === "long") {
                        p = info.p;
                        sline = info.sline;
                        type_name = parse_word(info);
                        
                        if(type_name === "int") {
                            break;
                        }
                        else if(!is_type_name(type_name, info)) {
                            type_name = string("long");
                            info.p = p;
                            info.sline = sline;
                            break;
                        }
                    }
                    else if(is_type_name(type_name, info)) {
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
                        info.p = p;
                        info.sline = sline;
                        
                        type_name = string("long");
                        break;
                    }
                }
            }
        }
        else if(type_name === "unsigned") {
            unsigned_ = true;
            
            type_name = parse_word(info);
        }
        else if(type_name === "signed") {
            unsigned_ = false;
            
            type_name = parse_word(info);
        }
        else if(type_name === "register") {
            register_ = true;
            
            type_name = parse_word(info);
        }
        else if(type_name === "restrict") {
            restrict_ = true;
            
            type_name = parse_word(info);
        }
        else if(type_name === "short") {
            short_ = true;
            
            if(*info->p == ':') {
                break;
            }
            else if(xisalnum(*info.p)) {
                char* p = info.p;
                int sline = info.sline;
                type_name = parse_word(info);
                
                if(type_name === "int") {
                    break;
                }
                else if(type_name === "short") {
                    short_ = false;
                    break;
                }
                else if(is_type_name(type_name, info)) {
                    info.p = p;
                    info.sline = sline;
                }
                else {
                    type_name = string("short");
                    info.p = p;
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
    
    bool lambda_flag = false;
    {
        char* pX = info.p;
        int slineX = info.sline;
        
        if(xisalpha(*info->p)) {
            (void)parse_word(info);
            
            if(*info->p == '(' && info.in_typedef) {
                lambda_flag = true;
            }
        }
        
        info.p = pX;
        info.sline = slineX;
    }
    
    sType*% type;
    string var_name;
            
    if(anonymous_type && *info->p == '{') {
        static int anonymous_num = 0;
        if(struct_) {
            if(type_name === "") {
                type_name = xsprintf("anonymous_typeX%d", ++anonymous_num);
            }
            
            sNode*% node = parse_struct(type_name, info);
            
            if(!info.no_output_err) {
                if(!node.compile->(info)) {
                    err_msg(info, "parse_struct is failed");
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                }
            }
            
            type = new sType(type_name, info);
        }
        else if(enum_) {
            if(type_name === "") {
                type_name = xsprintf("anonymous_typeY%d", ++anonymous_num);
            }
            
            sNode*% node = parse_enum(type_name, info);
            
            if(!info.no_output_err) {
                if(!node.compile->(info)) {
                    err_msg(info, "enum compiling is faied");
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                }
            }
            
            type = new sType(type_name, info);
        }
        else if(union_) {
            if(type_name === "") {
                type_name = xsprintf("anonymous_typeZ%d", ++anonymous_num);
            }
            
            sNode*% node = parse_union(type_name, info);
            
            if(!info.no_output_err) {
                if(!node.compile->(info)) {
                    err_msg(info, "union compiling is failed");
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                }
            }
            
            type = new sType(type_name, info);
        }
        else {
            err_msg(info, "unexpected { character");
            return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
        }
        
        if(parse_variable_name) {
            if(xisalnum(*info.p) || *info->p == '_') {
                var_name = parse_word(info);
            }
            else {
                static int num_anonymous_var_name = 0;
                num_anonymous_var_name++;
                var_name = xsprintf("anonymous_var_name%d", num_anonymous_var_name);
            }
        }
    }
    else if(lambda_flag) {
        sType*% result_type;
        if(info.types[type_name]) {
            result_type = clone info.types[type_name];
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
        result_type->mInline = result_type->mInline || inline_;
        result_type->mRestrict = result_type->mRestrict || restrict_;
        result_type->mLongLong = result_type->mLongLong || long_long;
        result_type->mLong = result_type->mLong || long_;
        result_type->mShort = result_type->mShort || short_;
        
        var_name = parse_word(info);
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
        type = new sType("lambda", info);
        
        type->mResultType = new tuple1<sType*%>(result_type);
        type->mParamTypes = param_types;
        type->mParamNames = param_names;
        type->mVarArgs = var_args;
    }
    else if(*info->p == '(' && *(info->p+1) == '*') {
        info->p++;
        expected_next_character('*', info);
        
        if(memcmp(info->p, "_Nullable", strlen("_Nullable")) == 0) {
            info->p += strlen("_Nullable");
            skip_spaces_and_lf(info);
        }
        
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
        result_type->mInline = result_type->mInline || inline_;
        result_type->mRestrict = result_type->mRestrict || restrict_;
        result_type->mLongLong = result_type->mLongLong || long_long;
        result_type->mLong = result_type->mLong || long_;
        result_type->mShort = result_type->mShort || short_;
        
        var_name = parse_word(info);
        expected_next_character(')', info);
        
        var param_types, param_names, param_default_parametors, var_args = parse_params(info);
        
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
            
            type->mConstant = type->mConstant || constant;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mStatic = type->mStatic || static_;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
        }
        else if(info.generics_type_names.contained(type_name)) {
            for(int i=0; i<info.generics_type_names.length(); i++) {
                if(info.generics_type_names[i] === type_name) {
                    type = new sType(xsprintf("generics_type%d", i), info);
                }
            }
            
            type->mConstant = type->mConstant || constant;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mStatic = type->mStatic || static_;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
        }
        else if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf(info);
            
            if(info.generics_classes[type_name] == null)
            {
                return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
            }
            
            type = new sType(type_name, info);
            
            while(true) {
                var generics_type, var_name, err = parse_type(info, false@parse_variable_name, false@parse_multiple_type)
                
                if(!err) {
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                }
                
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
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                }
            }
            
            if(is_contained_generics_class(type, info)) {
                type = solve_generics(type, info.generics_type, info);
            }
            else {
                if(!output_generics_struct(type, type, info))
                {
                    string new_name = create_generics_name(type, info);
                    err_msg(info, "output generics is failed(%s)", new_name);
                    exit(1);
                }
            }
            
            type->mConstant = type->mConstant || constant;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mStatic = type->mStatic || static_;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
        }
        else {
            if(struct_) {
                sClass* klass = info.classes[type_name];
                
                if(klass == null && *info->p != '<') {
                    info.classes.insert(type_name, new sClass(name:type_name, struct_:true));
                }
            }
            
            type = new sType(type_name, info);
            
            type->mConstant = type->mConstant || constant;
            type->mRegister = register_;
            type->mUnsigned = type->mUnsigned || unsigned_;
            type->mVolatile = volatile_;
            type->mStatic = type->mStatic || static_;
            type->mExtern = type->mExtern || extern_;
            type->mInline = type->mInline || inline_;
            type->mRestrict = type->mRestrict || restrict_;
            type->mLongLong = type->mLongLong || long_long;
            type->mLong = type->mLong || long_;
            type->mShort = type->mShort || short_;
        }
        
        if(memcmp(info->p, "const ", strlen("const ")) == 0) {
            info->p += strlen("const ");
            skip_spaces_and_lf(info);
            
            type->mConstant = true;
        }
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
            
            if(memcmp(info->p, "const ", strlen("const ")) == 0) {
                info->p += strlen("const ");
                skip_spaces_and_lf(info);
                
                type->mConstant = true;
            }
            
            type->mPointerNum++;
            if(type->mNoSolvedGenericsType.v1) {
                type->mNoSolvedGenericsType.v1.mPointerNum++;
            }
        }
        
        if(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf(info);
            
            type->mHeap = true;
            if(type->mNoSolvedGenericsType.v1) {
                type->mNoSolvedGenericsType.v1.mHeap = true;
            }
        }
        
        if(*info->p == '&') {
            info->p++;
            skip_spaces_and_lf(info);
            
            type->mNoHeap = true;
            
            if(type->mNoSolvedGenericsType.v1) {
                type->mNoSolvedGenericsType.v1.mHeap = false;
            }
        }
        
        if(*info->p == '?') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(*info->p == '|') {
            info->p++;
            skip_spaces_and_lf(info);
            
            type->mNoCallingDestructor = true;
        }
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
            
            if(memcmp(info->p, "const ", strlen("const ")) == 0) {
                info->p += strlen("const ");
                skip_spaces_and_lf(info);
                
                type->mConstant = true;
            }
            
            type->mPointerNum++;
            
            if(type->mNoSolvedGenericsType.v1) {
                type->mNoSolvedGenericsType.v1.mPointerNum++;
            }
        }
        
        if(memcmp(info.p, "__restrict ", strlen("__restrict ")) == 0) {
            info->p += strlen("__restrict ");
            skip_spaces_and_lf(info);
        }
        if(memcmp(info.p, "restrict ", strlen("restrict ")) == 0) {
            info->p += strlen("restrict ");
            skip_spaces_and_lf(info);
        }
        
        if(parse_multiple_type && *info->p == ',') {
            list<sType*%>*% types = new list<sType*%>();
            
            types.push_back(clone type);
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
                
                var type2, name, err = parse_type(info, false@parse_variable_name, false@parse_multiple_type);
                
                if(!err) {
                    return new tuple3<sType*%,string,bool>((sType*%)null, (string)null, false);
                }
                    
                types.push_back(clone type2);
            }
            
            int num_tuples = types.length();
            
            type = new sType(xsprintf("tuple%d", num_tuples), info);
            type->mPointerNum++;
            type->mHeap = true;
            
            foreach(it, types) {
                type->mGenericsTypes.push_back(clone it);
            }
            
            if(is_contained_generics_class(type, info)) {
                type = solve_generics(type, info.generics_type, info);
            }
            else {
                if(!output_generics_struct(type, type, info))
                {
                    string new_name = create_generics_name(type, info);
                    err_msg(info, "output generics is failed(%s)", new_name);
                    exit(1);
                }
            }
        }

        if(parse_variable_name) {
            if(xisalnum(*info.p) || *info->p == '_') {
                var_name = parse_word(info);
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
        
        if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf(info);
            
            type->mPointerNum++;
            break;
        }
        
        sNode*% node = expression(info);
        type.mArrayNum.push_back(node);
        
        expected_next_character(']', info);
    }
    
    return new tuple3<sType*%, string, bool>(type, var_name, true);
}
