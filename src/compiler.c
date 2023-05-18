#include "common.h"
#include <fcntl.h>
#include <libgen.h>

BOOL read_source(char* fname, sBuf* source)
{
    int f = open(fname, O_RDONLY);

    if(f < 0) {
        fprintf(stderr, "%s doesn't exist(2)\n", fname);
        return FALSE;
    }

    while(1) {
        char buf[BUFSIZ+1];
        int size = read(f, buf, BUFSIZ);

        if(size == 0) {
            break;
        }
        else if(size < 0) {
            fprintf(stderr, "unexpected error\n");
            close(f);
            return FALSE;
        }

        buf[size] = 0;
        sBuf_append_str(source, buf);

        if(size < BUFSIZ) {
            break;
        }
    }

    close(f);

    return TRUE;
}

BOOL read_source_and_delete_comment(char* fname, sBuf* source)
{
    int f = open(fname, O_RDONLY);

    if(f < 0) {
        fprintf(stderr, "%s doesn't exist(2)\n", fname);
        return FALSE;
    }
    
    sBuf source2;
    
    sBuf_init(&source2);

    while(1) {
        char buf[BUFSIZ+1];
        int size = read(f, buf, BUFSIZ);

        if(size == 0) {
            break;
        }
        else if(size < 0) {
            fprintf(stderr, "unexpected error\n");
            close(f);
            return FALSE;
        }

        buf[size] = 0;
        sBuf_append_str(&source2, buf);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    close(f);
    
    char* p = source2.mBuf;
    
    BOOL squort = FALSE;
    BOOL dquort = FALSE;
    
    while(*p) {
        if(!squort && *p == '\"') {
            sBuf_append_char(source, *p);
            p++;
            dquort = !dquort;
        }
        else if(!dquort && *p == '\'') {
            sBuf_append_char(source, *p);
            p++;
            squort = !squort;
        }
        else if(squort || dquort) {
            sBuf_append_char(source, *p);
            p++;
        }
        else if(*p == '/' && *(p+1) == '*') {
            while(*p) {
                if(*p == '*' && *(p+1) == '/') {
                    p+=2;
                    break;
                }
                else {
                    p++;
                }
            }
        }
        else if(*p == '/' && *(p+1) == '/') {
            while(*p) {
                if(*p == '\n') {
                    p++;
                    break;
                }
                else {
                    p++;
                }
            }
        }
        else {
            sBuf_append_char(source, *p);
            p++;
        }
    }
    
    free(source2.mBuf);

    return TRUE;
}

BOOL get_command_result2(sBuf* command_result, char* cmdline)
{
    char buf[BUFSIZ];
    
    FILE* f = popen(cmdline, "r");
    if(f == NULL) {
        perror("popen");
        fprintf(stderr, "popen(2) is failed at %s\n", cmdline);
        return FALSE;
    }

    while(1) {
        int size = fread(buf, 1, BUFSIZ, f);
        sBuf_append(command_result, buf, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    if(pclose(f) < 0) {
        fprintf(stderr, "pclose(2) is failed at %s\n", cmdline);
        return FALSE;
    }

    return TRUE;
}

BOOL compile_source(char* fname, char** source, BOOL optimize, sVarTable* module_var_table)
{
    sParserInfo info;
    memset(&info, 0, sizeof(sParserInfo));

    sBuf_init(&info.mConst);

    info.p = *source;
    info.source = source;
    xstrncpy(info.sname, fname, PATH_MAX);
    info.lv_table = module_var_table;
    info.sline = 1;
    
    {
        sNodeType* node_type = create_node_type_with_class_name("int");
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(node_type);
        LLVMValueRef global = LLVMGetNamedGlobal(gModule, "errno");
        if(global == NULL) {
            LLVMValueRef alloca_value = LLVMAddGlobal(gModule, llvm_type, "errno");
    
            LLVMSetExternallyInitialized(alloca_value, TRUE);
            
            LVALUE llvm_value;
            llvm_value.type = clone_node_type(node_type);
            llvm_value.value = alloca_value;
            llvm_value.address = NULL;
            llvm_value.var = NULL;
            
            (void)add_variable_to_table(info.lv_table, "errno", "", node_type, llvm_value, -1, TRUE, FALSE);
        }
        else {
            LVALUE llvm_value;
            llvm_value.type = clone_node_type(node_type);
            llvm_value.value = global;
            llvm_value.address = NULL;
            llvm_value.var = NULL;
            
            (void)add_variable_to_table(info.lv_table, "errno", "", node_type, gNullLVALUE, -1, TRUE, FALSE);
        }
    }

    char module_name[PATH_MAX];
    xstrncpy(module_name, fname, PATH_MAX);
    
    char* module_name2 = basename(module_name);

    char module_name3[PATH_MAX];
    xstrncpy(module_name3, module_name2, PATH_MAX);

    char* p = module_name3 + strlen(module_name3);
    while(p >= module_name3) {
        if(*p == '.') {
            *p = '\0';
            break;
        }
        else {
            p--;
        }
    }

    info.module_name = module_name3;

    sCompileInfo cinfo;
    memset(&cinfo, 0, sizeof(sCompileInfo));

    xstrncpy(cinfo.fun_name, fname, VAR_NAME_MAX);

    cinfo.pinfo = &info;

    BOOL in_macro = FALSE;
    char* p_macro_saved = NULL;
    int sline_macro_saved = 0;
    sBuf command_result;

    while(*info.p) {
        skip_spaces_and_lf(&info);
 
        int sline = info.sline;
        char* sname = info.sname;

        info.change_sline = FALSE;

        if(*info.p == '#') {
            if(!parse_sharp(&info)) {
                fprintf(stderr, "%s %d: parse sharp is false\n", info.sname, info.sline);
                free(info.mConst.mBuf);
                return FALSE;
            }
        }
        else if(parse_cmp(info.p, "__extension__") == 0)
        {
            info.p += 13;
            skip_spaces_and_lf(&info);
        }
        else {
            unsigned int node = 0;

            if(!expression(&node, TRUE, &info)) {
                free(info.mConst.mBuf);
                fprintf(stderr, "%s %d: expression is false\n", info.sname, info.sline);
                return FALSE;
            }

            if(node == 0) {
                parser_err_msg(&info, "require an expression(2)");
                break;
            }

            if(info.change_sline) {
                info.change_sline = FALSE;

                gNodes[node].mLine = info.sline;
                xstrncpy(gNodes[node].mSName, fname, PATH_MAX);
            }

            if(info.err_num == 0)
            {
                cinfo.sline = gNodes[node].mLine;
                xstrncpy(cinfo.sname, gNodes[node].mSName, PATH_MAX);

                if(!compile(node, &cinfo)) {
                    fprintf(stderr, "compile sharp is false\n");
                    free(info.mConst.mBuf);
                    return FALSE;
                }

                arrange_stack(&cinfo, 0);
            }
        }

        if(*info.p == ';') {
            info.p++;
            skip_spaces_and_lf(&info);
        }
        skip_spaces_and_lf(&info);

        if(*info.p == '\0' && in_macro) {
            in_macro = FALSE;
            info.p = p_macro_saved;
            info.sline = sline_macro_saved;

            free(command_result.mBuf);
        }
    }
    
    /// detected unclosed block ///
    sParserInfo info2;
    memset(&info2, 0, sizeof(sParserInfo));
    
    info2.p = *source;
    xstrncpy(info2.sname, fname, PATH_MAX);
    info2.sline = 1;
    
    int top_of_block[128];
    memset(top_of_block, 0, sizeof(int)*128);
    
    int block_count = 0;
    while(*info2.p) {
        if(*info2.p == '\'') {
            info2.p++;
            if(*info2.p == '\\') {
                info2.p+=3;
            }
            else {
                info2.p+=2;
            }
        }
        else if(*info2.p == '"') {
            info2.p++;
            while(TRUE) {
                if(*info2.p == '\\') {
                    info2.p+=2;
                }
                else if(*info2.p == '"') {
                    info2.p++;
                    break;
                }
                else {
                    info2.p++;
                }
            }
        }
        else if(*info2.p == '#') {
            if(!parse_sharp(&info2)) {
                fprintf(stderr, "%s %d: parse_sharp is false\n", info2.sname, info2.sline);
                return FALSE;
            }
        }
        else if(*info2.p == '{') {
            info2.p++;
            top_of_block[block_count] = info2.sline;
            
            block_count++;
            
            if(block_count > 128) {
                fprintf(stderr, "overflow block count\n");
                exit(51);
            }
        }
        else if(*info2.p == '}') {
            info2.p++;
            block_count--;
        }
        else if(*info2.p == '\n') {
            info2.p++;
            info2.sline++;
        }
        else {
            info2.p++;
        }
    }
            
    if(block_count > 0) {
        fprintf(stderr, "%s:%d: to match this {\n", info2.sname, top_of_block[block_count-1]);
    }

    if(info.err_num > 0 || cinfo.err_num > 0) {
        fprintf(stderr, "Parser error number is %d. Compile error number is %d\n", info.err_num, cinfo.err_num);
        free(info.mConst.mBuf);
        exit(2);
    }

    free(info.mConst.mBuf);
    
    return TRUE;
}

