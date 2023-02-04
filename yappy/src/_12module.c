#include "common.h"
#include <ctype.h>

bool import_module(char* module_name)
{
    buffer*% source = new buffer.initialize();
    
    string fname = xsprintf("%s/%s.py", gDirName, module_name);
    
    read_source(fname, source).expect {
        exit(1);
    }
    
    sParserInfo info;
    
    string source2 = source.to_string();
    
    info.p = source2;
    info.fname = fname;
    info.sline = 1;
    info.stack_num = 0;
    info.in_global_context = true;
    info.space_num = 0;
    info.loop_head = -1;
    
    while(true) {
        skip_spaces_until_eol(&info);
        if(*info.p == '\n') {
            info.p++;
        }
        else {
            break;
        }
    }
    
    auto nodes = parse(&info, block_space_num:0);
    
    buffer*% codes = compile_nodes(nodes, &info);
    
    sVMInfo vm_info;
    
    memset(&vm_info, 0, sizeof(sVMInfo));
    
    vm_info.module_name = borrow string(module_name);
    
    add_module(module_name);
    
    vm(codes, null, &vm_info).expect {
        print_exception(parent->vm_info->exception);
        exit(1);
    }
    
    delete vm_info.module_name;

    return true;
}

static sNode* create_import_node(char* name, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kImport;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.importValue.name = string(name);
    
    return result;
}

static sNode* create_method_call(sNode* left, char* fun_name, vector<sNode*>* params, map<char*, sNode*>* named_params, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kMethodCall;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.methodCallValue.name = string(fun_name);
    result.value.methodCallValue.params = params;
    result.value.methodCallValue.named_params = named_params;
    result.value.methodCallValue.left = left;
    
    return result;
}

static sNode* create_store_field(sNode* left, char* field_name, sNode* right, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kStoreField;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.storeField.name = string(field_name);
    result.value.storeField.left = left;
    result.value.storeField.right = right;
    
    return result;
}

static sNode* create_load_field(sNode* left, char* field_name, sParserInfo* info)
{
    sNode* result = new  sNode;
    
    result.kind = kLoadField;
    
    result.fname = info->fname;
    result.sline = info->sline;
    result.value.loadField.name = string(field_name);
    result.value.loadField.left = left;
    
    return result;
}

static bool emb_funcmp(char* p, char* word2)
{
    bool result = strstr(p, word2) == p;
    
    char c = p[strlen(word2)];
    
    if(result && (c == ' ' || c == '\t' || c == '\0' || c == '\n')) {
        return true;
    }
    
    return false;
}

sNode*? method_node(sNode* node, sParserInfo* info)
{
    info->p++;
    skip_spaces_until_eol(info);
    
    if(xisalpha(*info->p) || *info->p == '_') {
        buffer* buf = new  buffer.initialize();
        
        while(xisalnum(*info->p) || *info->p == '_') {
            buf.append_char(*info->p);
            info->p++;
        }
        skip_spaces_until_eol(info);
        
        parse_type(info);
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_until_eol(info);
            
            sNode* right;
            if(!expression(&right, info)) {
                fprintf(stderr, "%s %d: require right value\n", info->fname, info->sline);
                return null;
            }
            
            sNode*? result = nullable create_store_field(node, buf.to_string(), right, info);
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
            
            return result;
        }
        else if(*info->p == '(') {
            info->p++;
            skip_spaces_until_eol(info);
            
            vector<sNode*>* params = new  vector<sNode*>.initialize();
            map<char*, sNode*>* named_params = new  map<char*, sNode*>.initialize();
            
            bool in_fun_call = info->in_fun_call;
            info->in_fun_call = true;
            
            while(*info->p) {
                if(*info->p == ')') {
                    info->p++;
                    skip_spaces_until_eol(info);
                    break;
                }
                
                char* p = info->p;
                int sline = info->sline;
                bool named_param_flag = false;
                
                if(xisalpha(*info->p)) {
                    buffer* buf = new  buffer.initialize();
                    
                    while(xisalnum(*info->p)) {
                        buf.append_char(*info->p);
                        info->p++;
                    }
                    skip_spaces_until_eol(info);
                    
                    if(*info->p == '=' && *(info->p+1) != '=') {
                        info->p++;
                        skip_spaces_until_eol(info);
                        named_param_flag = true;
                        
                        sNode* node = null;
                        if(!expression(&node, info)) {
                            fprintf(stderr, "%s %d: unexpected character (%c)\n", info->fname, info->sline, *info->p);
                            exit(1);
                        }
                        
                        named_params.insert(buf.to_string(), node);
                    }
                    else {
                        info->p = p;
                        info->sline = sline;
                    }
                }
                
                if(named_param_flag == false) {
                    sNode* node = null;
                    if(!expression(&node, info)) {
                        fprintf(stderr, "%s %d: unexpected character (%c)\n", info->fname, info->sline, *info->p);
                        exit(1);
                    }
                    
                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_until_eol(info);
                    }
                    
                    params.push_back(node);
                }
            }
            
            info->in_fun_call = in_fun_call;
            
            sNode*? result = nullable create_method_call(node, buf.to_string(), params, named_params, info);
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
            
            return result;
        }
        else {
            sNode*? result = nullable create_load_field(node, buf.to_string(), info);
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
            
            return result;
        }
    }
}

sNode*? exp_node(sParserInfo* info) version 12
{
    sNode*? result = null;
    
    if(emb_funcmp(info->p, "import")) {
        info->p += strlen("import");
        skip_spaces_until_eol(info);
        
        char* word = parse_word(info);
        
        result = nullable create_import_node(word, info);
    }
    
    if(result == null) {
        result = inherit(info);
    }
    
    return result;
}

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 12
{
    inherit(node, codes, info);
    
    if(node.kind == kImport) {
    }
    else if(node.kind == kMethodCall) {
    }
    else if(node.kind == kLoadField) {
    }
    else if(node.kind == kStoreField) {
    }
    
    return true;
}

