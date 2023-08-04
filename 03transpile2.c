#include "common.h"

void come_init() version 3
{
}

void come_final() version 3
{
}


string create_generics_name(sType* generics_type, bool no_pointer_name, sInfo* info)
{
    var buf = new buffer();
    
    sClass* klass = generics_type->mClass;
    
    char* class_name = klass->mName;
    
    buf.append_str(class_name);
    
    if(generics_type->mSolvedGenericsName) {
        return buf.to_string();
    }
    

//    buf.append_str("p" * generics_type->mPointerNum);

/*
    if(generics_type->mHeap) {
        buf.append_str("h");
    }
*/
    
    if(generics_type->mGenericsTypes.length() > 0) {
        buf.append_str("_");
        
        int i = 0;
        foreach(it, generics_type->mGenericsTypes) {
            string type_name = create_generics_name(it, no_pointer_name, info);
            
            buf.append_str(type_name);
    
            if(i != generics_type->mGenericsTypes.length() -1) {
                buf.append_str("_");
            }
            
            i++;
        }
    }
    
    return buf.to_string();
}

string make_type_name_string(sType* type, bool in_header, bool array_cast_pointer, sInfo* info)
{
    var buf = new buffer();
    
    char* class_name = type->mClass->mName;
    
    if(type->mStatic) {
        buf.append_str("static ");
    }
    
    if(type->mConstant) {
        buf.append_str("const ");
    }
    
    if(type->mUnsigned) {
        buf.append_str("unsigned ");
    }
    
/*
    if(type->mLongLong) {
        buf.append_str("long long ");
    }
    
    if(type->mLong) {
        buf.append_str("long ");
    }
*/
    
    if(type->mShort) {
        buf.append_str("short ");
    }
    
/*
    if(type->mGenericsTypes.length() > 0) {
        string struct_name = create_generics_name(type, info);
        
        buf.append_str("struct ");
        buf.append_str(struct_name);
    }
    else {
*/
        if(type->mStruct) {
            if(class_name === "__builtin_va_list") {
                if(in_header) {
                    buf.append_str(class_name);
                }
                else {
                    buf.append_str("va_list");
                }
            }
/*
            else if(type->mOriginalTypeName !== "") {
                buf.append_str(type->mOriginalTypeName);
            }
*/
            else {
                buf.append_str("struct ");
                buf.append_str(class_name);
            }
        }
        else if(type->mUnion) {
            buf.append_str("union ");
            buf.append_str(class_name);
        }
        else if(type->mEnum) {
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
        }
        else if(class_name === "long") {
            buf.append_str("long");
        }
        else if(class_name === "bool") {
            buf.append_str("_Bool");
        }
        else if(class_name === "lambda") {
            string result_type_str = make_type_name_string(type->mResultType.0, in_header, false@array_cast_pointer, info);
            buf.append_str(result_type_str);
            buf.append_str(" (*)(");
            
            int j = 0;
            foreach(it, type->mParamTypes) {
                string param_type_str = make_type_name_string(it, in_header, false@array_cast_pointer, info);
                
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
    
    if(type->mNoArrayPointerNum == 0 && class_name !== "lambda") {
        for(int i=0; i<type->mPointerNum; i++) {
            buf.append_str("*");
        }
    }
    
    if(array_cast_pointer && type->mArrayNum.length() > 0) {
        buf.append_str("*");
    }
    
    if(type->mRestrict) {
        buf.append_str("restrict");
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
    if(type->mResultType.0 && type->mResultType.0->mClass->mName === "lambda") {
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
        
        return make_lambda_type_name_string(type->mResultType.0, buf.to_string(), info);
    }
    else {
        buf.append_str(xsprintf("%s (*%s)(", make_type_name_string(type->mResultType.0, false@in_header, false@array_cast_pointer, info), var_name));
        
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

string make_define_var(sType* type, char* name, sInfo* info)
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
        var type_str = make_type_name_string(type, false@in_header, false@array_cast_pointer, info);
        
        buf.append_str(type_str);
        
        buf.append_str(" ");
        buf.append_str(name);
        
        buf.append_str("[]");
    }
    else if(type->mArrayNum.length() > 0) {
        var type_str = make_type_name_string(type, false@in_header, false@array_cast_pointer, info);
        
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
                exit(1);
            }
            CVALUE*% cvalue = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
        
            buf.append_str(xsprintf("[%s]", cvalue.c_value));
        }
    }
    else {
        var type_str = make_type_name_string(type, false@in_header, false@array_cast_pointer, info);
        
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
            exit(1);
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
            exit(1);
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

bool transpile(sInfo* info) version 3
{
    var name = string("main");
    var result_type = new sType("int", info);
    var param_types = [new sType("int", info), new sType("char**", info)];
    var param_names = [string("argc"), string("argv")];
    var main_fun = new sFun(name, result_type, param_types, param_names
                            , false@external, false@var_args, null!@block, info);
    
    info.funcs.insert(name, main_fun);
    
    add_come_code(info, "#include <stdio.h>\n");
    
    info.come_fun = main_fun;
    
    info.block_level++;
    add_come_code(info, "puts(\"HELLO COMELANG\");\n\n");
    add_come_code(info, "return 0;\n");
    info.block_level--;
    
    return true;
}

bool output_source_file(sInfo* info) version 3
{
    string output_file_name = xsprintf("%s.c", info.sname);
    
    FILE* f = fopen(output_file_name, "w");
    
    fprintf(f, "%s\n", info.module.mSourceHead.to_string());
    
    foreach(it, info.funcs) {
        sFun* it2 = info.funcs[it];
        string header = header_function(it2, info);
        
        fprintf(f, "%s", header);
    }
    
    fprintf(f, "\n");
    
    foreach(it, info.funcs) {
        sFun* it2 = info.funcs[it];
        
        if(!it2->mExternal) {
            string output = output_function(it2, info);
            
            fprintf(f, "%s", output);
            
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

void add_last_code_to_source(sInfo* info)
{
    if(info->no_output_come_code) {
        return;
    }
    if(info.module.mLastCode) {
       add_come_code(info, "%s", info.module.mLastCode);
       info.module.mLastCode = null;
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

void dec_stack_ptr(int value, sInfo* info)
{
    info.stack.delete(-value-1, -1);
}

CVALUE*% get_value_from_stack(int offset, sInfo* info)
{
    info.module.mLastCode = null;
    return clone info.stack[offset];
}

void transpiler_clear_last_code(sInfo* info)
{
    info.module.mLastCode = null;
}
