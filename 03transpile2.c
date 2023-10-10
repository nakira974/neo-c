#include "common.h"

void come_init() version 3
{
}

void come_final() version 3
{
}



string make_type_name_string(sType* type, bool in_header, bool array_cast_pointer, sInfo* info, bool no_pointer=false)
{
    var buf = new buffer();
    
    char* class_name = type->mClass->mName;
    
    if(type->mStatic && !type->mClass->mStruct && !type->mClass->mUnion) {
        buf.append_str("static ");
    }
    
    if(type->mConstant) {
        buf.append_str("const ");
    }
    
    if(type->mUnsigned) {
        buf.append_str("unsigned ");
    }
    
    
    if(type->mShort) {
        buf.append_str("short ");
    }
    
    if(type->mOriginalTypeName === "va_list") {
        buf.append_str("va_list");
    }
    else if(type->mOriginalTypeName === "__builtin_va_list") {
        buf.append_str("__builtin_va_list");
    }
    else if(class_name === "__builtin_va_list") {
        if(in_header) {
            buf.append_str(class_name);
        }
        else {
            buf.append_str("va_list");
        }
    }
    else if(type->mClass->mStruct) {
        buf.append_str("struct ");
        buf.append_str(class_name);
    }
    else if(type->mClass->mUnion) {
        buf.append_str("union ");
        buf.append_str(class_name);
    }
    else if(type->mClass->mEnum) {
        buf.append_str("enum ");
        buf.append_str(class_name);
    }
    else if(type->mLongLong) {
        if(class_name === "int") {
            buf.append_str("long long int");
        }
        else if(class_name === "long") {
            buf.append_str("long long");
        }
    }
    else if(type->mLong) {
        if(class_name === "int") {
            buf.append_str("long int");
        }
        else if(class_name === "long") {
            buf.append_str("long long");
        }
        else if(class_name === "double") {
            buf.append_str("long double");
        }
    }
    else if(class_name === "long") {
        buf.append_str("long");
    }
    else if(class_name === "__uint128_t") {
        buf.append_str("__uint128_t");
    }
    else if(class_name === "bool") {
        buf.append_str("_Bool");
    }
    else if(class_name === "lambda") {
        string result_type_str = make_type_name_string(type->mResultType.v1, in_header, false@array_cast_pointer, info);
        buf.append_str(result_type_str);
        buf.append_str(" (*)(");
        
        int j = 0;
        foreach(it, type->mParamTypes) {
            string param_type_str = make_type_name_string(it, in_header, false@array_cast_pointer, info);
            
            buf.append_str(param_type_str);
            
            if(j != type->mParamTypes.length()-1) {
                buf.append_str(",");
            }
            j++;
        }
        buf.append_str(")");
    }
    else {
        buf.append_str(class_name);
    }
    
    if(type->mNoArrayPointerNum == 0 && class_name !== "lambda" && !no_pointer && type->mOriginalTypeName !== "va_list" && type->mOriginalTypeName !== "__builtin_va_list") {
        for(int i=0; i<type->mPointerNum; i++) {
            buf.append_str("*");
        }
    }
    
    if(array_cast_pointer && type->mArrayNum.length() > 0 && !no_pointer && type->mOriginalTypeName !== "va_list" && type->mOriginalTypeName !== "__builtin_va_list") {
        buf.append_str("*");
    }
    
    if(type->mRestrict) {
        buf.append_str("restrict");
    }
    
    return buf.to_string();
}

string make_come_type_name_string(sType* type, sInfo* info)
{
    var buf = new buffer();
    
    char* class_name = type->mClass->mName;
    
    buf.append_str(class_name);
    
    if(type->mGenericsTypes.length() > 0) {
        buf.append_str("<");
        for(int i=0; i<type->mGenericsTypes.length(); i++) {
            sType* gtype = type->mGenericsTypes[i];
            
            buf.append_str(make_come_type_name_string(gtype, info));
            
            if(i != type->mGenericsTypes.length() -1) {
                buf.append_str(",");
            }
        }
        
        buf.append_str(">");
    }
    
    if(type->mNoArrayPointerNum == 0 && class_name !== "lambda") {
        for(int i=0; i<type->mPointerNum; i++) {
            buf.append_str("*");
        }
    }
    
    if(type->mHeap) {
        buf.append_str("%");
    }
    
    return buf.to_string();
}

void show_type(sType* type, sInfo* info)
{
    puts(make_type_name_string(type, false@in_header, false@array_cast_pointer, info));
}

string make_lambda_type_name_string(sType* type, char* var_name, sInfo* info)
{
    var buf = new buffer();
    if(type->mResultType.v1 && type->mResultType.v1.mClass->mName === "lambda") 
    {
        buf.append_str(xsprintf("(*%s)(", var_name));
        
        int i = 0;
        foreach(it, type->mParamTypes) {
            buf.append_str(make_type_name_string(it, false@in_header, false@array_cast_pointer, info));
            if(i != type->mParamTypes.length()-1) {
                buf.append_str(",");
            }
            
            i++;
        }
        
        buf.append_str(")");
        
        return make_lambda_type_name_string(type->mResultType.v1, buf.to_string(), info);
    }
    else {
        buf.append_str(xsprintf("%s (*%s)(", make_type_name_string(type->mResultType.v1, false@in_header, false@array_cast_pointer, info), var_name));
        
        int i = 0;
        foreach(it, type->mParamTypes) {
            buf.append_str(make_type_name_string(it, false@in_header, false@array_cast_pointer, info));
            if(i != type->mParamTypes.length()-1) {
                buf.append_str(",");
            }
            
            i++;
        }
        
        buf.append_str(")");
        
        return buf.to_string();
    }
    
    return buf.to_string();
}

string make_define_var(sType* type, char* name, sInfo* info, bool in_header=false)
{
    var buf = new buffer();
    
    if(type->mClass->mName === "lambda") {
        var str = make_lambda_type_name_string(type, name, info);
        
        buf.append_str(str);
    }
    else if(type->mSizeNum > 0) {
        var type_str = make_type_name_string(type, in_header, false@array_cast_pointer, info);
        buf.append_str(xsprintf("%s ", type_str));
        buf.append_str(xsprintf("%s:%d", name, type->mSizeNum));
    }
    else if(type->mOmitArrayNum) {
        var type_str = make_type_name_string(type, in_header, false@array_cast_pointer, info);
        
        buf.append_str(type_str);
        
        buf.append_str(" ");
        buf.append_str(name);
        
        buf.append_str("[]");
    }
    else if(type->mArrayNum.length() > 0) {
        var type_str = make_type_name_string(type, in_header, false@array_cast_pointer, info);
        
        buf.append_str(type_str);
        
        buf.append_str(" ");
        if(type->mNoArrayPointerNum > 0) {
            buf.append_str("(*");
        }
        buf.append_str(name);
        if(type->mNoArrayPointerNum > 0) {
            buf.append_str(")");
        }
        
        foreach(it, type->mArrayNum) {
            if(!it.compile->(info)) {
                err_msg(info, "invalid array number");
                exit(2);
            }
            CVALUE*% cvalue = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
        
            buf.append_str(xsprintf("[%s]", cvalue.c_value));
        }
    }
    else {
        var type_str = make_type_name_string(type, in_header, false@array_cast_pointer, info);
        
        buf.append_str(type_str);
        
        buf.append_str(" ");
        if(type->mNoArrayPointerNum > 0) {
            buf.append_str("(*");
        }
        buf.append_str(name);
        if(type->mNoArrayPointerNum > 0) {
            buf.append_str(")");
        }
    }
    
    return buf.to_string();
}

string make_come_define_var(sType* type, char* name, sInfo* info)
{
    var buf = new buffer();
    
    if(type->mClass->mName === "lambda") {
        var str = make_lambda_type_name_string(type, name, info);
        
        buf.append_str(str);
    }
    else if(type->mSizeNum > 0) {
        buf.append_str("int ");
        buf.append_str(xsprintf("%s:%d", name, type->mSizeNum));
    }
    else if(type->mOmitArrayNum) {
        var type_str = make_come_type_name_string(type, info);
        
        buf.append_str(type_str);
        
        buf.append_str(" ");
        buf.append_str(name);
        
        buf.append_str("[]");
    }
    else if(type->mArrayNum.length() > 0) {
        var type_str = make_come_type_name_string(type, info);
        
        buf.append_str(type_str);
        
        buf.append_str(" ");
        if(type->mNoArrayPointerNum > 0) {
            buf.append_str("(*");
        }
        buf.append_str(name);
        if(type->mNoArrayPointerNum > 0) {
            buf.append_str(")");
        }
        
        foreach(it, type->mArrayNum) {
            if(!it.compile->(info)) {
                err_msg(info, "invalid array number");
                exit(2);
            }
            CVALUE*% cvalue = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
        
            buf.append_str(xsprintf("[%s]", cvalue.c_value));
        }
    }
    else {
        var type_str = make_come_type_name_string(type, info);
        
        buf.append_str(type_str);
        
        buf.append_str(" ");
        if(type->mNoArrayPointerNum > 0) {
            buf.append_str("(*");
        }
        buf.append_str(name);
        if(type->mNoArrayPointerNum > 0) {
            buf.append_str(")");
        }
    }
    
    return buf.to_string();
}

string output_function(sFun* fun, sInfo* info)
{
    var output = new buffer();
    if(fun->mResultType->mResultType) {
        var output2 = new buffer();
        
        output2.append_str(fun->mName);
        output2.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = fun->mParamNames[i];
            
            var str = make_define_var(it, name, info);
            output2.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output2.append_str(", ...");
                }
            }
            else {
                output2.append_str(", ");
            }
            
            i++;
        }
        output2.append_str(")");
        
        string str = make_lambda_type_name_string(fun->mResultType, output2.to_string(), info);
        
        output.append_str(str);
        
        output.append_str(")");
        
        info.module.mSourceHead.append_str(output.to_string());
        info.module.mSourceHead.append_str(";\n");
    }
    else if(fun->mResultType->mArrayNum.length() > 0) {
        sType*% base_result_type = clone fun->mResultType;
        base_result_type.mArrayNum = new list<sNode*%>();
        
        string result_type_str = make_type_name_string(base_result_type, false@in_header, false@array_cast_pointer, info);
        
        output.append_str(result_type_str);
        output.append_str(" (*");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = fun->mParamNames[i];
            
            string str = make_define_var(it, name, NULL);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            
            i++;
        }
        
        if(!fun->mResultType->mArrayNum[0].compile->(info)) {
            err_msg(info, "invalid array number");
            exit(2);
        }
        CVALUE*% cvalue = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        output.append_str(xsprintf("))[%s]", cvalue.c_value));
        
        info.module.mSourceHead.append_str(output.to_string());
        info.module.mSourceHead.append_str(";\n");
    }
    else {
        string result_type_str = make_type_name_string(fun->mResultType, false@in_header, false@array_cast_pointer, info);
        
        output.append_str(result_type_str);
        output.append_str(" ");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = fun->mParamNames[i];
            
            string str = make_define_var(it, name, info);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            i++;
        }
        
        output.append_str(")");
        
        info.module.mSourceHead.append_str(output.to_string());
        info.module.mSourceHead.append_str(";\n");
    }
    
    output.append_str("{\n");
    
    output.append_str(fun->mSourceHead.to_string());
    output.append_str(fun->mSourceHead2.to_string());
    output.append_str(fun->mSource.to_string());
    
    output.append_str("}\n");
    
    return output.to_string();
}

string header_function(sFun* fun, sInfo* info)
{
    var output = new buffer();
    
    if(fun->mResultType->mResultType) {
        var output2 = new buffer();
        
        output2.append_str(fun->mName);
        output2.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = fun->mParamNames[i];
            
            string str = make_define_var(it, name, info);
            output2.append_str(str);
            
            if(i != fun->mParamTypes.length()-1) {
                output2.append_str(", ");
            }
            i++;
        }
        output2.append_str(")");
        
        string str = make_lambda_type_name_string(fun->mResultType, output2.to_string(), info);
        
        output.append_str(str);
        output.append_str(";\n");
    }
    else if(fun->mResultType->mArrayNum.length() > 0) {
        sType*% base_result_type = clone fun->mResultType;
        base_result_type->mArrayNum = new list<sNode*%>();
        
        string result_type_str = make_type_name_string(base_result_type, true@in_header, false@array_cast_pointer, info);
        
        output.append_str(result_type_str);
        output.append_str(" (*");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = fun->mParamNames[i];
            
            string str = make_define_var(it, name, info);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            i++;
        }
        
        if(!fun->mResultType->mArrayNum[0].compile->(info)) {
            err_msg(info, "invalid array number");
            exit(2);
        }
        CVALUE*% cvalue = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        output.append_str(xsprintf("))[%s];\n", cvalue.c_value));
    }
    else {
        string result_type_str = make_type_name_string(fun->mResultType, true@in_header, false@array_cast_pointer, info);
        
        output.append_str(result_type_str);
        output.append_str(" ");
        
        output.append_str(fun->mName);
        output.append_str("(");
        
        int i = 0;
        foreach(it, fun->mParamTypes) {
            char* name = fun->mParamNames[i];
            
            string str = make_define_var(it, name, info);
            output.append_str(str);
            
            if(i == fun->mParamTypes.length()-1) {
                if(fun->mVarArgs) {
                    output.append_str(", ...");
                }
            }
            else {
                output.append_str(", ");
            }
            i++;
        }
        
        output.append_str(");\n");
    }
    
    return output.to_string();
}


void add_come_code(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, COME_CODE_MAX, msg, args);
    va_end(args);
    
    if(info->come_fun) {
        int i;
        for(i=0; i<info->block_level; i++) {
            info.come_fun.mSource.append_str("    ");
        }
        
        info.come_fun.mSource.append_str(xsprintf("%s", msg2));
    }
    else {
        info.module.mSourceHead.append_str(xsprintf("%s", msg2));
    }
}

void add_come_code_at_source_head(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, COME_CODE_MAX, msg, args);
    va_end(args);
    
    info.module.mSourceHead.append_str(xsprintf("%s", msg2));
}

int transpile(sInfo* info) version 3
{
    var name = string("main");
    var result_type = new sType("int", info);
    var param_types = [new sType("int", info), new sType("char**", info)];
    var param_names = [string("argc"), string("argv")];
    var param_default_parametors = new list<string>();
    var main_fun = new sFun(name, result_type, param_types, param_names
        , param_default_parametors, false@external, false@var_args
        , null@block, false@static_
        , string("int main(int argc, char** argv)")
        , info);
    
    info.funcs.insert(string(name), main_fun);
    
    add_come_code(info, "#include <stdio.h>\n");
    
    info.come_fun = main_fun;
    
    info.block_level++;
    add_come_code(info, "puts(\"HELLO COMELANG\");\n\n");
    add_come_code(info, "return 0;\n");
    info.block_level--;
    
    return 0;
}

bool output_source_file(sInfo* info) version 3
{
    /// go ///
    string output_file_name = xsprintf("%s.c", info.sname);
    
    FILE* f = fopen(output_file_name, "w");
    
    fprintf(f, "// source head\n");
    fprintf(f, "%s\n", info.module.mSourceHead.to_string());
    
    fprintf(f, "// header function\n");
    foreach(it, info.funcs) {
        sFun* it2 = info.funcs[string(it)];
        
        string header = header_function(it2, info);
        
        if(it2->mStatic && it2->mResultType->mInline) {
        }
        else if(it2->mStatic) {
            fprintf(f, "static %s", header);
        }
        else if(it2->mResultType->mInline) {
        }
        else if(it !== "__builtin_va_start" && it !== "__builtin_va_end") {
            fprintf(f, "%s\n", header, it);
        }
    }
    
    fprintf(f, "// inline function\n");
    foreach(it, info.funcs) {
        sFun* it2 = info.funcs[string(it)];

        string header = header_function(it2, info);
        
        if(it2->mStatic && it2->mResultType->mInline) {
            string output = output_function(it2, info);
            fprintf(f, "static inline %s", output);
        }
        else if(it2->mResultType->mInline) {
            string output = output_function(it2, info);
            fprintf(f, "inline %s", output);
        }
        else if(it2->mStatic) {
        }
        else if(it !== "__builtin_va_start" && it !== "__builtin_va_end") {
        }
    }
    
    fprintf(f, "\n");
    
    fprintf(f, "// body function\n");
    foreach(it, info.funcs) {
        sFun* it2 = info.funcs[it];
        
        if(!it2->mExternal) {
            string output = output_function(it2, info);
            
            if(it2->mStatic && it2->mResultType->mInline) {
            }
            else if(it2->mStatic) {
                fprintf(f, "static %s", output);
            }
            else if(it2->mResultType->mInline) {
            }
            else {
                fprintf(f, "%s", output);
            }
            
            fprintf(f, "\n");
        }
    }
    
    fclose(f);
    
    return true;
}

void add_come_code_at_function_head(sInfo* info, char* code, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, code);
    vsnprintf(msg2, COME_CODE_MAX, code, args);
    va_end(args);
    
    if(info.come_fun) {
        info->come_fun->mSourceHead.append_str(msg2);
    }
}

void add_come_code_at_function_head2(sInfo* info, char* code, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, code);
    vsnprintf(msg2, COME_CODE_MAX, code, args);
    va_end(args);
    
    if(info.come_fun) {
        info->come_fun->mSourceHead2.append_str(msg2);
    }
}

void add_last_code_to_source(sInfo* info)
{
    if(info->no_output_come_code) {
        return;
    }
    if(info.module.mLastCode) {
       add_come_code(info, "%s", info.module.mLastCode);
       info.module.mLastCode = null;
    }
    if(info.module.mLastCode2) {
       add_come_code(info, "%s", info.module.mLastCode2);
       info.module.mLastCode2 = null;
    }
}

void add_last_code_to_source_without_semicolon(sInfo* info)
{
    if(info->no_output_come_code) {
        return;
    }
    if(info.module.mLastCode) {
       add_come_code(info, "%s\n", info.module.mLastCode.substring(0,-3));
       info.module.mLastCode = null;
    }
    if(info.module.mLastCode2) {
       add_come_code(info, "%s\n", info.module.mLastCode2.substring(0,-3));
       info.module.mLastCode2 = null;
    }
}

void add_come_last_code(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, COME_CODE_MAX, msg, args);
    va_end(args);
    
    info.module.mLastCode = xsprintf("%s", msg2);
}

void add_come_last_code2(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, COME_CODE_MAX, msg, args);
    va_end(args);
    
    info.module.mLastCode2 = xsprintf("%s", msg2);
}

void dec_stack_ptr(int value, sInfo* info)
{
    info.stack.delete(-value-1, -1);
}

CVALUE*% get_value_from_stack(int offset, sInfo* info)
{
    info.module.mLastCode = null;
    info.module.mLastCode2 = null;
    return clone info.stack[offset];
}

void transpiler_clear_last_code(sInfo* info)
{
    info.module.mLastCode = null;
    info.module.mLastCode2 = null;
}
