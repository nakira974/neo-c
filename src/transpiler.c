#include "common.h"

struct sComeModule gComeModule;
sComeFun gComeFunctions[COME_FUN_MAX];
struct sComeFunStruct* gComeFunctionHead;

BOOL gInHeader = FALSE;

struct sOutputStruct 
{
    char* mName;
    struct sOutputStruct* mNext;
};

struct sOutputStruct* gHeadOutputStruct;

void transpiler_init()
{
    sBuf_init(&gComeModule.mSource);
    sBuf_init(&gComeModule.mSourceHead);
    memset(gComeFunctions, 0, sizeof(sComeFun)*COME_FUN_MAX);
    gComeFunctionHead = NULL;
    gHeadOutputStruct = NULL;
    
    add_come_code_top_level("%s", "typedef void* protocol_obj_t;\n");
}

void transpiler_final()
{
    if(gNCTranspile) {
        FILE* f = fopen(xsprintf("%s.c", gFName), "w");
        fprintf(f, "%s\n", gComeModule.mSourceHead.mBuf);
        
        sComeFun* it = gComeFunctionHead;
        while(it) {
            sBuf fun_output;
            sBuf_init(&fun_output);
            header_function(&fun_output, it);
            
            fprintf(f, "%s", fun_output.mBuf);
            
            free(fun_output.mBuf);
            
            it = it->mNext;
        }
        
        fprintf(f, "\n");
        
        it = gComeFunctionHead;
        while(it) {
            if(!it->mExternal) {
                sBuf fun_output;
                sBuf_init(&fun_output);
                output_function(&fun_output, it);
                
                fprintf(f, "%s", fun_output.mBuf);
                
                free(fun_output.mBuf);
                
                fprintf(f, "\n");
            }
            
            it = it->mNext;
        }
        
        fclose(f);
    }
    free(gComeModule.mSource.mBuf);
    free(gComeModule.mSourceHead.mBuf);
}

void remove_come_function(char* fun_name)
{
    unsigned int hash_key = get_hash_key(fun_name, COME_FUN_MAX);
    
    sComeFun* fun = get_come_function(fun_name);
    
    if(fun) {
        sComeFun* it = gComeFunctions + hash_key;
        while(TRUE) {
            if(strcmp(it->mName, fun_name) == 0) {
                if(strcmp(gComeFunctionHead->mName, fun_name) == 0) {
                    gComeFunctionHead = NULL;
                }
                else {
                    sComeFun* it2 = gComeFunctionHead;
                    sComeFun* before_it = gComeFunctionHead;
                    
                    while(it2) {
                        if(strcmp(it2->mName, fun_name) == 0) {
                            before_it->mNext = it2->mNext;
                        }
                        
                        before_it = it2;
                        it2 = it2->mNext;
                    }
                }
                
                free(it->mSource.mBuf);
                free(it->mSourceHead.mBuf);
                memset(it, 0, sizeof(sComeFun));
                break;
            }
            else {
                it++;
                
                if(it == gComeFunctions + COME_FUN_MAX) {
                    it = gComeFunctions;
                }
                else if(it == gComeFunctions + hash_key) {
                    fprintf(stderr, "overflow come functions\n");
                    exit(2);
                }
            }
        }
    }
}

void add_come_function(char* fun_name, sNodeType* result_type, int num_params, sNodeType** param_types, char** param_names, BOOL external, BOOL var_args)
{
    unsigned int hash_key = get_hash_key(fun_name, COME_FUN_MAX);
    
    sComeFun* fun = get_come_function(fun_name);
    
    if(fun) {
        remove_come_function(fun_name);
    }
    
    sComeFun* it = gComeFunctions + hash_key;
    while(TRUE) {
        if(it->mName[0] == 0) {
            xstrncpy(it->mName, fun_name, VAR_NAME_MAX);
            it->mResultType = clone_node_type(result_type);
            it->mNumParams = num_params;
            it->mExternal = external;
            it->mVarArgs = var_args;
            int i;
            for(i=0; i<num_params; i++) {
                it->mParamTypes[i] = clone_node_type(param_types[i]);
                it->mParamNames[i] = GC_strdup(param_names[i]);
            }
            sBuf_init(&it->mSource);
            sBuf_init(&it->mSourceHead);
            
            if(gComeFunctionHead == NULL) {
                gComeFunctionHead = it;
            }
            else {
                sComeFun* it2 = gComeFunctionHead;
                while(it2->mNext) {
                    it2 = it2->mNext;
                }
                
                it2->mNext = it;
            }
            break;
        }
        else {
            it++;
            
            if(it == gComeFunctions + COME_FUN_MAX) {
                it = gComeFunctions;
            }
            else if(it == gComeFunctions + hash_key) {
                fprintf(stderr, "overflow come functions\n");
                exit(2);
            }
        }
    }
}

sComeFun* get_come_function(char* fun_name)
{
    unsigned int hash_key = get_hash_key(fun_name, COME_FUN_MAX);
    
    sComeFun* it = gComeFunctions + hash_key;
    while(TRUE) {
        if(it->mName[0] == '\0') {
            return NULL;
        }
        else if(strcmp(it->mName, fun_name) == 0) {
            break;
        }
        else {
            it++;
            
            if(it == gComeFunctions + COME_FUN_MAX) {
                it = gComeFunctions;
            }
            else if(it == gComeFunctions + hash_key) {
                return NULL;
            }
        }
    }
    
    return it;
}

void add_come_code(struct sCompileInfoStruct* info, const char* msg, ...)
{
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, COME_CODE_MAX, msg, args);
    va_end(args);
    
    if(info->come_fun) {
        int i;
        for(i=0; i<info->come_nest; i++) {
            sBuf_append_str(&info->come_fun->mSource, "    ");
        }
        sBuf_append_str(&info->come_fun->mSource, xsprintf("%s", msg2));
    }
    else {
        sBuf_append_str(&gComeModule.mSourceHead, xsprintf("%s", msg2));
    }
}

void add_come_code_at_head(struct sCompileInfoStruct* info, const char* msg, ...)
{
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, COME_CODE_MAX, msg, args);
    va_end(args);
    
    if(info->come_fun) {
        sBuf_append_str(&info->come_fun->mSourceHead, xsprintf("%s", msg2));
    }
    else {
        sBuf_append_str(&gComeModule.mSourceHead, xsprintf("%s", msg2));
    }
}

void add_come_code_top_level(const char* msg, ...)
{
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, COME_CODE_MAX, msg, args);
    va_end(args);
    
    sBuf_append_str(&gComeModule.mSourceHead, xsprintf("%s", msg2));
}

void add_last_code_to_source(struct sCompileInfoStruct* info)
{
    if(gNCTranspile) {
        if(gComeModule.mLastCode) {
           add_come_code(info, "%s", gComeModule.mLastCode);
           gComeModule.mLastCode = NULL;
        }
    }
}

void add_come_last_code(struct sCompileInfoStruct* info, const char* msg, ...)
{
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, COME_CODE_MAX, msg, args);
    va_end(args);
    
    gComeModule.mLastCode = xsprintf("%s", msg2);
}

void transpiler_clear_last_code()
{
    gComeModule.mLastCode = NULL;
}


void add_declare_right_value_var(struct sCompileInfoStruct* info, char* var_name)
{
    char* buf = xsprintf("void* %s;\n", var_name);
    sBuf_append_str(&info->come_fun->mSourceHead, buf);
}

char* xsprintf(const char* msg, ...)
{
    char msg2[1024];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 1024, msg, args);
    va_end(args);
    
    return GC_strdup(msg2);
}

char* make_define_var(sNodeType* node_type, char* name, struct sCompileInfoStruct* info)
{
    sBuf buf;
    sBuf_init(&buf);
    
    if(type_identify_with_class_name(node_type, "lambda")) {
        char* str = make_lambda_type_name_string(node_type, name);
        
        sBuf_append_str(&buf, str);
    }
    else if(node_type->mSizeNum > 0) {
        sBuf_append_str(&buf, "int ");
        sBuf_append_str(&buf, xsprintf("%s:%d;\n", name, node_type->mSizeNum));
    }
    else if(info != NULL && node_type->mDynamicArrayNum != 0) {
        if(!compile(node_type->mDynamicArrayNum, info)) {
            return FALSE;
        }

        LVALUE llvm_value = *get_value_from_stack(-1);
        
        char* node_type_str = make_type_name_string(node_type);
        
        sBuf_append_str(&buf, node_type_str);
        
        sBuf_append_str(&buf, " ");
        sBuf_append_str(&buf, name);
        
        sBuf_append_str(&buf, xsprintf("[%s]", llvm_value.c_value));
    }
    else if(node_type->mArrayDimentionNum > 0) {
        char* node_type_str = make_type_name_string(node_type);
        
        sBuf_append_str(&buf, node_type_str);
        
        sBuf_append_str(&buf, " ");
        sBuf_append_str(&buf, name);
        
        int i=0;
        for(i=0; i<node_type->mArrayDimentionNum; i++) {
            sBuf_append_str(&buf, xsprintf("[%d]", node_type->mArrayNum[i]));
        }
    }
    else {
        char* node_type_str = make_type_name_string(node_type);
        
        sBuf_append_str(&buf, node_type_str);
        
        sBuf_append_str(&buf, " ");
        sBuf_append_str(&buf, name);
    }
    
    char* result = xsprintf("%s", buf.mBuf);
    
    free(buf.mBuf);
    
    return result;
}

void output_function(sBuf* output, sComeFun* fun)
{
    if(fun->mResultType->mResultType) {
        sBuf output2;
        sBuf_init(&output2);
        
        sBuf_append_str(&output2, fun->mName);
        sBuf_append_str(&output2, "(");
        
        int i;
        for(i=0; i<fun->mNumParams; i++) {
            sNodeType* param_type = fun->mParamTypes[i];
            char* name = fun->mParamNames[i];
            
            char* str = make_define_var(param_type, name, NULL);
            sBuf_append_str(&output2, str);
            
            if(i == fun->mNumParams-1) {
                if(fun->mVarArgs) {
                    sBuf_append_str(output, ", ...");
                }
            }
            else {
                sBuf_append_str(output, ", ");
            }
        }
        sBuf_append_str(&output2, ")");
        
        char* str = make_lambda_type_name_string(fun->mResultType, output2.mBuf);
        
        sBuf_append_str(output, str);
        
        sBuf_append_str(&gComeModule.mSourceHead, output->mBuf);
        sBuf_append_str(&gComeModule.mSourceHead, ";\n");
        
        free(output2.mBuf);
    }
    else {
        char* result_type_str = make_type_name_string(fun->mResultType);
        
        sBuf_append_str(output, result_type_str);
        sBuf_append_str(output, " ");
        
        sBuf_append_str(output, fun->mName);
        sBuf_append_str(output, "(");
        
        int i;
        for(i=0; i<fun->mNumParams; i++) {
            sNodeType* param_type = fun->mParamTypes[i];
            char* name = fun->mParamNames[i];
            
            char* str = make_define_var(param_type, name, NULL);
            sBuf_append_str(output, str);
            
            if(i == fun->mNumParams-1) {
                if(fun->mVarArgs) {
                    sBuf_append_str(output, ", ...");
                }
            }
            else {
                sBuf_append_str(output, ", ");
            }
        }
        
        sBuf_append_str(&gComeModule.mSourceHead, output->mBuf);
        sBuf_append_str(&gComeModule.mSourceHead, ");\n");
    }
    
    sBuf_append_str(output, ")\n{\n");
    
    sBuf_append_str(output, fun->mSourceHead.mBuf);
    sBuf_append_str(output, fun->mSource.mBuf);
    
    sBuf_append_str(output, "}\n");
}

void header_function(sBuf* output, sComeFun* fun)
{
    BOOL in_header = gInHeader;
    gInHeader = TRUE;
    
    if(fun->mResultType->mResultType) {
        sBuf output2;
        sBuf_init(&output2);
        
        sBuf_append_str(&output2, fun->mName);
        sBuf_append_str(&output2, "(");
        
        int i;
        for(i=0; i<fun->mNumParams; i++) {
            sNodeType* param_type = fun->mParamTypes[i];
            char* name = fun->mParamNames[i];
            
            char* str = make_define_var(param_type, name, NULL);
            sBuf_append_str(&output2, str);
            
            if(i != fun->mNumParams-1) {
                sBuf_append_str(&output2, ", ");
            }
        }
        sBuf_append_str(&output2, ")");
        
        char* str = make_lambda_type_name_string(fun->mResultType, output2.mBuf);
        
        sBuf_append_str(output, str);
        sBuf_append_str(output, ";\n");
        
        free(output2.mBuf);
    }
    else {
        char* result_type_str = make_type_name_string(fun->mResultType);
        
        sBuf_append_str(output, result_type_str);
        sBuf_append_str(output, " ");
        
        sBuf_append_str(output, fun->mName);
        sBuf_append_str(output, "(");
        
        int i;
        for(i=0; i<fun->mNumParams; i++) {
            sNodeType* param_type = fun->mParamTypes[i];
            char* name = fun->mParamNames[i];
            
            char* str = make_define_var(param_type, name, NULL);
            sBuf_append_str(output, str);
            
            if(i == fun->mNumParams-1) {
                if(fun->mVarArgs) {
                    sBuf_append_str(output, ", ...");
                }
            }
            else {
                sBuf_append_str(output, ", ");
            }
        }
        
        sBuf_append_str(output, ");\n");
    }
    
    gInHeader = in_header;
}

void output_struct(char* struct_name, sNodeType* struct_type, sNodeType* generics_type, BOOL undefined_body)
{
    struct sOutputStruct* it = gHeadOutputStruct;
    while(it) {
        if(strcmp(it->mName, struct_name) == 0) {
            return;
        }
        it = it->mNext;
    }
    struct sOutputStruct* output_struct = GC_malloc(sizeof(struct sOutputStruct));
    
    output_struct->mName = xsprintf("%s", struct_name);;
    output_struct->mNext = gHeadOutputStruct;
    gHeadOutputStruct = output_struct;
    
    if(undefined_body) {
        sBuf_append_str(&gComeModule.mSourceHead, xsprintf("struct %s;\n", struct_name));
    }
    else {
        sCLClass* klass = struct_type->mClass;
        
        sBuf_append_str(&gComeModule.mSourceHead, xsprintf("struct %s\n{\n", struct_name));
        
        int i;
        for(i=0; i<klass->mNumFields; i++) {
            char* name = klass->mFieldName[i];
            sNodeType* field = clone_node_type(klass->mFields[i]);
    
            if(!solve_generics(&field, generics_type)) {
                fprintf(stderr, "can't solve generics types(2)");
                exit(70);
            }
            
            char* str = make_define_var(field, name, NULL);
            
            sBuf_append_str(&gComeModule.mSourceHead, "    ");
            sBuf_append_str(&gComeModule.mSourceHead, str);
            sBuf_append_str(&gComeModule.mSourceHead, ";\n");
        }
        sBuf_append_str(&gComeModule.mSourceHead, "};\n");
    }
}

void output_union(char* struct_name, sNodeType* union_type, sNodeType* generics_type, BOOL undefined_body)
{
    struct sOutputStruct* it = gHeadOutputStruct;
    while(it) {
        if(strcmp(it->mName, struct_name) == 0) {
            return;
        }
        it = it->mNext;
    }
    struct sOutputStruct* output_struct = GC_malloc(sizeof(struct sOutputStruct));
    
    output_struct->mName = xsprintf("%s", struct_name);;
    output_struct->mNext = gHeadOutputStruct;
    gHeadOutputStruct = output_struct;
    
    if(undefined_body) {
        sBuf_append_str(&gComeModule.mSourceHead, xsprintf("union %s;\n", struct_name));
    }
    else {
        sCLClass* klass = union_type->mClass;
        
        sBuf_append_str(&gComeModule.mSourceHead, xsprintf("union %s\n{\n", struct_name));
        
        int i;
        for(i=0; i<klass->mNumFields; i++) {
            char* name = klass->mFieldName[i];
            sNodeType* field = clone_node_type(klass->mFields[i]);
    
            if(!solve_generics(&field, generics_type)) {
                fprintf(stderr, "can't solve generics types(2)");
                exit(71);
            }
            
            char* str = make_define_var(field, name, NULL);
            
            sBuf_append_str(&gComeModule.mSourceHead, "    ");
            sBuf_append_str(&gComeModule.mSourceHead, str);
            sBuf_append_str(&gComeModule.mSourceHead, ";\n");
        }
        sBuf_append_str(&gComeModule.mSourceHead, "};\n");
    }
}

void output_typedef(char* name, sNodeType* node_type)
{
    BOOL in_header = gInHeader;
    gInHeader = TRUE;
    
    sCLClass* klass = node_type->mClass;
    
    sBuf_append_str(&gComeModule.mSourceHead, "typedef ");
    
    char* str = make_define_var(node_type, name, NULL);
    sBuf_append_str(&gComeModule.mSourceHead, str);
    
    sBuf_append_str(&gComeModule.mSourceHead, ";\n");
    
    gInHeader = in_header;
}

char* make_type_name_string(sNodeType* node_type)
{
    sBuf output;
    sBuf_init(&output);
    
    char* class_name = node_type->mClass->mName;
    
    if(node_type->mStatic) {
        sBuf_append_str(&output, "static ");
    }
    
    if(node_type->mConstant) {
        sBuf_append_str(&output, "const ");
    }
    
    if(node_type->mUnsigned) {
        sBuf_append_str(&output, "unsigned ");
    }
    
    if(node_type->mNumGenericsTypes > 0) {
        char struct_name[512];
        create_generics_struct_name(struct_name, 512, node_type);
        
        sBuf_append_str(&output, "struct ");
        sBuf_append_str(&output, struct_name);
    }
    else {
        if(node_type->mClass->mFlags & CLASS_FLAGS_STRUCT) {
            if(strcmp(class_name, "__builtin_va_list") == 0) {
                if(gInHeader) {
                    sBuf_append_str(&output, class_name);
                }
                else {
                    sBuf_append_str(&output, "va_list");
                }
            }
            else if(strcmp(node_type->mOriginalTypeName, "") != 0){
                sBuf_append_str(&output, node_type->mOriginalTypeName);
            }
            else {
                sBuf_append_str(&output, "struct ");
                sBuf_append_str(&output, class_name);
            }
        }
        else if(node_type->mClass->mFlags & CLASS_FLAGS_UNION) {
            sBuf_append_str(&output, "union ");
            sBuf_append_str(&output, class_name);
        }
        else if(strcmp(class_name, "long_double") == 0) {
            sBuf_append_str(&output, "long double");
        }
        else if(node_type->mLongLong) {
            if(strcmp(class_name, "int") == 0) {
                sBuf_append_str(&output, "long long int");
            }
            else if(strcmp(class_name, "long") == 0) {
                sBuf_append_str(&output, "long long");
            }
        }
        else if(strcmp(class_name, "long") == 0) {
            sBuf_append_str(&output, "long");
        }
        else if(strcmp(class_name, "bool") == 0) {
            sBuf_append_str(&output, "_Bool");
        }
        else if(strcmp(class_name, "lambda") == 0) {
            sBuf_append_str(&output, make_type_name_string(node_type->mResultType));
            sBuf_append_str(&output, " (*)(");
            int j;
            for(j=0; j<node_type->mNumParams; j++) {
                sBuf_append_str(&output, make_type_name_string(node_type->mParamTypes[j]));
                if(j != node_type->mNumParams-1) {
                    sBuf_append_str(&output, ",");
                }
            }
            sBuf_append_str(&output, ")");
        }
        else {
            sBuf_append_str(&output, class_name);
        }
    }
    
    int i;
    for(i=0; i<node_type->mPointerNum; i++) {
        sBuf_append_str(&output, "*");
    }
    
    if(node_type->mRestrict) {
        sBuf_append_str(&output, "restrict");
    }
    
    char* result = xsprintf("%s", output.mBuf);
    
    free(output.mBuf);
    
    return result;
}

char* make_lambda_type_name_string(sNodeType* node_type, char* var_name)
{
    char buf[256];
    if(type_identify_with_class_name(node_type->mResultType, "lambda")) {
        snprintf(buf, 256, "(*%s)(", var_name);
        
        int i;
        for(i=0; i<node_type->mNumParams; i++) {
            xstrncat(buf, make_type_name_string(node_type->mParamTypes[i]), 256);
            if(i != node_type->mNumParams-1) {
                xstrncat(buf, ",", 256);
            }
        }
        
        xstrncat(buf, ")", 256);
        
        char* var_name2 = xsprintf("%s", buf);
        return make_lambda_type_name_string(node_type->mResultType, var_name2);
    }
    else {

        snprintf(buf, 256, "%s (*%s)(", make_type_name_string(node_type->mResultType), var_name);
        
        int i;
        for(i=0; i<node_type->mNumParams; i++) {
            xstrncat(buf, make_type_name_string(node_type->mParamTypes[i]), 256);
            if(i != node_type->mNumParams-1) {
                xstrncat(buf, ",", 256);
            }
        }
        
        xstrncat(buf, ")", 256);
        
        return xsprintf("%s", buf);
    }
}
