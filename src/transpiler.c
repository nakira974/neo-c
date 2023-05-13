#include "common.h"

struct sComeModule gComeModule;
sComeFun gComeFunctions[COME_FUN_MAX];
struct sComeFunStruct* gComeFunctionHead;

void transpiler_init()
{
    sBuf_init(&gComeModule.mSource);
    sBuf_init(&gComeModule.mSourceHead);
    memset(gComeFunctions, 0, sizeof(sComeFun)*COME_FUN_MAX);
    gComeFunctionHead = NULL;
    
    add_come_code_directory_top_level("%s", "typedef void* protocol_obj_t;\n");
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

void add_come_function(char* fun_name, sNodeType* result_type, int num_params, sNodeType** param_types, char** param_names, BOOL external)
{
    unsigned int hash_key = get_hash_key(fun_name, COME_FUN_MAX);
    
    sComeFun* it = gComeFunctions + hash_key;
    while(TRUE) {
        if(it->mName[0] == 0) {
            xstrncpy(it->mName, fun_name, VAR_NAME_MAX);
            it->mResultType = clone_node_type(result_type);
            it->mNumParams = num_params;
            it->mExternal = external;
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
    
    gComeModule.mLastCode = xsprintf("%s", msg2);
}

void transpiler_clear_last_code()
{
    gComeModule.mLastCode = NULL;
}

void add_come_code_directory(struct sCompileInfoStruct* info, const char* msg, ...)
{
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, COME_CODE_MAX, msg, args);
    va_end(args);
    
    sBuf_append_str(&info->come_fun->mSource, msg2);
}

void add_come_code_directory_top_level(const char* msg, ...)
{
    char msg2[COME_CODE_MAX];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, COME_CODE_MAX, msg, args);
    va_end(args);
    
    sBuf_append_str(&gComeModule.mSourceHead, msg2);
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

void output_function(sBuf* output, sComeFun* fun)
{
    char* result_type_str = make_type_name_string(fun->mResultType);
    
    sBuf_append_str(output, result_type_str);
    sBuf_append_str(output, " ");
    
    sBuf_append_str(output, fun->mName);
    sBuf_append_str(output, "(");
    
    int i;
    for(i=0; i<fun->mNumParams; i++) {
        sNodeType* param_type = fun->mParamTypes[i];
        
        char* param_type_str = make_type_name_string(fun->mParamTypes[i]);
        
        sBuf_append_str(output, param_type_str);
        
        sBuf_append_str(output, " ");
        sBuf_append_str(output, fun->mParamNames[i]);
        
        if(i != fun->mNumParams-1) {
            sBuf_append_str(output, ", ");
        }
    }
    
    sBuf_append_str(&gComeModule.mSourceHead, output->mBuf);
    sBuf_append_str(&gComeModule.mSourceHead, ");\n");
    
    sBuf_append_str(output, ")\n{\n");
    
    sBuf_append_str(output, fun->mSourceHead.mBuf);
    sBuf_append_str(output, fun->mSource.mBuf);
    
    sBuf_append_str(output, "}\n");
}

void header_function(sBuf* output, sComeFun* fun)
{
    char* result_type_str = make_type_name_string(fun->mResultType);
    
    sBuf_append_str(output, result_type_str);
    sBuf_append_str(output, " ");
    
    sBuf_append_str(output, fun->mName);
    sBuf_append_str(output, "(");
    
    int i;
    for(i=0; i<fun->mNumParams; i++) {
        sNodeType* param_type = fun->mParamTypes[i];
        
        char* param_type_str = make_type_name_string(fun->mParamTypes[i]);
        
        sBuf_append_str(output, param_type_str);
        
        sBuf_append_str(output, " ");
        sBuf_append_str(output, fun->mParamNames[i]);
        
        if(i != fun->mNumParams-1) {
            sBuf_append_str(output, ", ");
        }
    }
    
    sBuf_append_str(output, ");\n");
}

void output_struct(char* struct_name, sNodeType* struct_type, sNodeType* generics_type, BOOL undefined_body)
{
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
                exit(1);
            }
            
            if(type_identify_with_class_name(field, "lambda")) {
                sBuf_append_str(&gComeModule.mSourceHead, "    ");
                char* str = make_lambda_type_name_string(field, name);
                
                sBuf_append_str(&gComeModule.mSourceHead, str);
                sBuf_append_str(&gComeModule.mSourceHead, ";\n");
            }
            else {
                char* str = xsprintf("    %s %s;\n", make_type_name_string(field), name);
                
                sBuf_append_str(&gComeModule.mSourceHead, str);
            }
        }
        sBuf_append_str(&gComeModule.mSourceHead, "};\n");
    }
}

char* make_lambda_type_name_string(sNodeType* node_type, char* var_name)
{
    char buf[256];
    snprintf(buf, 256, "%s(*%s)(", make_type_name_string(node_type->mResultType), var_name);
    
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
