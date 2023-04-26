#include "common.h"

struct sComeModule gComeModule;
sComeFun gComeFunctions[COME_FUN_MAX];
struct sComeFunStruct* gComeFunctionHead;

void transpiler_init()
{
    sBuf_init(&gComeModule.mSource);
    memset(gComeFunctions, 0, sizeof(sComeFun)*COME_FUN_MAX);
    gComeFunctionHead = NULL;
}

void transpiler_final()
{
    if(gNCTranspile) {
        sComeFun* it = gComeFunctionHead;
        while(it) {
            sBuf fun_output;
            sBuf_init(&fun_output);
            output_function(&fun_output, it);
            
            printf("%s", fun_output.mBuf);
            
            free(fun_output.mBuf);
            
            it = it->mNext;
        }
    }
    free(gComeModule.mSource.mBuf);
}

void add_come_function(char* fun_name, sNodeType* result_type, int num_params, sNodeType** param_types, char** param_names)
{
    unsigned int hash_key = get_hash_key(fun_name, COME_FUN_MAX);
    
    sComeFun* it = gComeFunctions + hash_key;
    while(TRUE) {
        if(it->mName[0] == 0) {
            xstrncpy(it->mName, fun_name, VAR_NAME_MAX);
            it->mResultType = clone_node_type(result_type);
            it->mNumParams = num_params;
            int i;
            for(i=0; i<num_params; i++) {
                it->mParamTypes[i] = clone_node_type(param_types[i]);
                it->mParamNames[i] = GC_strdup(param_names[i]);
            }
            sBuf_init(&it->mSource);
            
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
    sBuf_append_str(output, ")\n{\n");
    
    sBuf_append_str(output, fun->mSource.mBuf);
    
    sBuf_append_str(output, "}\n");
}
