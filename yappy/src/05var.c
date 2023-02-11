#include "common.h"

class sLoadVarNode(char* str, sParserInfo* info)
{
    string self.name = string(str);
    bool self.in_global_context = info->in_global_context;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sLoadVarNode* self)
    {
        return self.id;
    }
    
    bool compile(sLoadVarNode* self, buffer* codes, sParserInfo* info)
    {
        codes.append_int(OP_LOAD);
        
        char* name = self.name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        codes.append_int(self.in_global_context);
        
        info->stack_num++;
        
        return true;
    }
};

class sStoreVarNode(char* str, sNode* right, sParserInfo* info)
{
    string self.name = string(str);
    bool self.in_global_context = info->in_global_context;
    sNode* self.right = right;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sStoreVarNode* self)
    {
        return self.id;
    }
    
    bool compile(sStoreVarNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_STORE);
        
        char* name = self.name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        codes.append_int(self.in_global_context);
        
        return true;
    }
};


sNode*? fun_node(char* fun_name, sParserInfo* info) version 5   // implemented after layer
{
    return null;
}

sNode*? index_node(char* var_name, sParserInfo* info) version 5   // implemented after layer
{
    return null;
}

sNode*? def_node(sParserInfo* info) version 5   // implemented after layer
{
    return null;
}

sNode*? class_node(sParserInfo* info) version 5   // implemented after layer
{
    return null;
}

static bool emb_funcmp(char* p, char* word2)
{
    bool result = strstr(p, word2) == p;
    
    char c = p[strlen(word2)];
    
    if(result && (c == ' ' || c == '\t' || c == '\0' || c == '(' || c == '\n')) {
        return true;
    }
    
    return false;
}

sPyType* parse_type(sParserInfo* info)
{
    char* p = info->p;
    int sline = info->sline;
    
    sPyType* type_ = null;
    
    if(*info->p == ':' || (*info->p == '-' && *(info->p+1) == '>')) {
        if(*info->p == ':') {
            info->p++;
            skip_spaces_until_eol(info);
        }
        else {
            info->p+=2;
            skip_spaces_until_eol(info);
        }
        
        if(*info->p == '\n') {
            info->p = p;
            info->sline = sline;
            return null;
        }
        
        buffer* buf = new  buffer();
        while(xisalnum(*info->p) || *info->p == '_') {
            buf.append_char(*info->p);
            info->p++;
        }
        skip_spaces_until_eol(info);
        
        type_ = get_type(buf.to_string());
    }
    
    return type_;
}

sNode* exp_node(sParserInfo* info) version 5
{
    sNode* result = inherit(info);
    
    if(result == null) {
        if(xisalpha(*info->p) || *info->p == '_') {
            buffer* buf = new  buffer();
            
            while(xisalnum(*info->p) || *info->p == '_') {
                buf.append_char(*info->p);
                info->p++;
            }
            skip_spaces_until_eol(info);
            
            parse_type(info);
            
            if(strcmp(buf.to_string(), "def") == 0) {
                return def_node(info);
            }
            else if(strcmp(buf.to_string(), "class") == 0) {
                return class_node(info);
            }
            else if(*info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_until_eol(info);
                
                sNode* right;
                if(!expression(&right, info)) {
                    fprintf(stderr, "%s %d: require right value\n", info->fname, info->sline);
                    return null;
                }
                
                return new sNode(new sStoreVarNode(buf.to_string(), right, info));
            }
            else if(*info->p == '(') {
                result = fun_node(buf.to_string(), info)
                
                if(*info->p == '.') {
                    result = method_node(result!, info);
                }
                
                return result;
            }
            else if(*info->p == '[') {
                result = index_node(buf.to_string(), info)
                
                if(*info->p == '.') {
                    result = method_node(result!, info);
                }
                
                return result;
            }
            else {
                result = new sNode(new sLoadVarNode(buf.to_string(), info));
                
                if(*info->p == '.') {
                    result = method_node(result!, info);
                }
                
                return result;
            }
        }
    }
    
    return result;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 94
{
    switch(*info->p) {
        case OP_LOAD: {
            info->p++;
            
            int offset = *info->p;
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            char* var_name = (char*)info->p;
            
            char var_name2[len+1];
            memcpy(var_name2, var_name, len);
            var_name2[len] = '\0'
            
            info->p += offset;
            
            bool in_global_context = (bool)*info->p;
            info->p++;
            
            sModule* module = gModules.at(string(var_name2), null);
            
            sModule* module2 = gModules.at(string(info.module_name), null);
            
            sClass* klass = module2.classes.at(string(var_name2), null);
            
            if(module) {
                info->stack[info->stack_num].kind = kModuleValue;
                info->stack[info->stack_num].value.moduleValue = module;
                info->stack_num++;
            }
            else if(klass) {
                info->stack[info->stack_num].kind = kClassValue;
                info->stack[info->stack_num].value.classValue = klass;
                info->stack_num++;
            }
            else if(in_global_context) {
                info->stack[info->stack_num] = module2.global_vars.at(string(var_name2), gUndefined);
                
                if(info->stack[info->stack_num].kind == kUndefinedValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionVarNotFound;
                    return false;
                }
                
                info->stack_num++;
            }
            else {
                info->stack[info->stack_num] = info->vtable.at(var_name2, gUndefined);
                info->stack_num++;
                
                if(info->stack[info->stack_num-1].kind == kUndefinedValue) {
                    info->stack[info->stack_num] = module2.global_vars.at(string(var_name2), gUndefined);
                    info->stack_num++;
                    
                    if(info->stack[info->stack_num-1].kind == kUndefinedValue) {
                        info->exception.kind = kExceptionValue;
                        info->exception.value.expValue = kExceptionVarNotFound;
                        return false;
                    }
                }
            }
            
            }
            break;
            
        case OP_STORE: {
            info->p++;
            
            int offset = *info->p;
            
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            char* var_name = (char*)info->p;
            
            char var_name2[len+1];
            memcpy(var_name2, var_name, len);
            var_name2[len] = '\0'
            
            info->p += offset;
            
            bool in_global_context = (bool)*info->p;

            info->p++;
            
            if(in_global_context) {
                if(info.module_name) {
                    sModule* module = gModules.at(info.module_name, null);
                    
                    if(module == null) {
                        info->exception.kind = kExceptionValue;
                        info->exception.value.expValue = kExceptionVarNotFound;
                        return false;
                    }
                    if(info.class_name) {
                        sClass* klass = module->classes.at(info.class_name, null);
                        
                        if(klass == null) {
                            info->exception.kind = kExceptionValue;
                            info->exception.value.expValue = kExceptionVarNotFound;
                            return false;
                        }
                        
                        ZVALUE right = info->stack[info->stack_num-1];
                        klass.class_vars.insert(string(var_name2), right);
                    }
                    else {
                        ZVALUE right = info->stack[info->stack_num-1];
                        module.global_vars.insert(string(var_name2), right);
                    }
                }
            }
            else {
                if(info.module_name) {
                    sModule* module = gModules.at(info.module_name, null);
                    
                    if(module == null) {
                        info->exception.kind = kExceptionValue;
                        info->exception.value.expValue = kExceptionVarNotFound;
                        return false;
                    }
                    
                    if(info.class_name) {
                        sClass* klass = module->classes.at(info.class_name, null);
                        
                        if(klass == null) {
                            info->exception.kind = kExceptionValue;
                            info->exception.value.expValue = kExceptionVarNotFound;
                            return false;
                        }
                        
                        ZVALUE right = info->stack[info->stack_num-1];
                        klass.class_vars.insert(string(var_name2), right);
                    }
                    else {
                        ZVALUE right = info->stack[info->stack_num-1];
                        info->vtable.insert(string(var_name2), right);
                    }
                }
            }
            }
            break;
            
        default: {
            bool result = inherit(codes, params, info);
            if(!result) {
                return false;
            }
            }
            break;
    }
    
    return true;
}
