#include "common.h"

class sFunNode(char* fun_name, buffer* codes, vector<char*>* param_names, sParserInfo* info)
{
    string self.name = string(fun_name);
    buffer* self.codes = codes;
    vector<char*>* self.param_names = param_names;
    
    bool compile(sFunNode* self, buffer* codes, sParserInfo* info)
    {
        codes.append_int(OP_FUN);
        
        char* name = self.name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        buffer* codes2 = self.codes;
        
        codes.append_int(codes2.len);
        
        codes.append(codes2.buf, codes2.len);
        
        vector<char*>* param_names = self.param_names;
        
        codes.append_int(param_names.length());
        
        foreach(it, param_names) {
            char* name = it;
            
            int len = strlen(name);
            int offset = (len + 3) & ~3;
            offset /= sizeof(int);
            
            codes.append_int(offset);
            codes.append_int(len);
            
            codes.append_str(name);
            codes.alignment();
        }
        
        return true;
    }
};

class sReturnNode(sNode* exp)
{
    sNode* self.left = exp;
    
    bool compile(sReturnNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* exp = self.left;
        
        if(!exp.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_RETURN);
        
        return true;
    }
};

class sFunCallNode(char* fun_name, vector<sNode*>* params, map<char*, sNode*>* named_params, sParserInfo* info)
{
    string self.name = string(fun_name);
    vector<sNode*>* self.params = params;
    map<char*, sNode*>* self.named_params = named_params;
    
    bool compile(sFunCallNode* self, buffer* codes, sParserInfo* info) {
        int stack_num = info.stack_num;
        
        vector<sNode*>* params = self.params;
        
        foreach(it, params) {
            if(!it.compile->(codes, info)) {
                return false;
            }
        }
        
        map<char*, sNode*>* named_params = self.named_params;
        
        foreach(key, named_params) {
            sNode* item = named_params.at(key, null);
            
            if(!item.compile->(codes, info)) {
                return false;
            }
        }
        info.stack_num = stack_num;
        
        codes.append_int(OP_FUNCALL);
        
        char* name = self.name;
        int num_params = params.length();
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        codes.append_int(num_params);
        
        int num_named_params = named_params.length();
        
        codes.append_int(num_named_params);
        
        foreach(key, named_params) {
            int len = strlen(key);
            int offset = (len + 3) & ~3;
            offset /= sizeof(int);
            
            codes.append_int(offset);
            codes.append_int(len);
            
            codes.append_str(key);
            codes.alignment();
        }
        
        info.stack_num++;
        
        return true;
    }
}

sNode* def_node(sParserInfo* info) version 6
{
    buffer* buf = new buffer();
    
    while(xisalnum(*info->p) || *info->p == '_') {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_until_eol(info);
    
    char* fun_name = buf.to_string();
    
    if(*info->p != '(') {
        fprintf(stderr, "%s %d: require (\n", info->fname, info->sline);
        exit(2);
    }
    
    info->p++;
    skip_spaces_until_eol(info);
    
    vector<char*>* param_names = new vector<char*>();
    
    buffer* buf2 = new buffer();
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_until_eol(info);
            
            parse_type(info);
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_until_eol(info);
                break;
            }
            else {
                fprintf(stderr, "%s %d: require :\n", info->fname, info->sline);
                exit(2);
            }
        }
        else if(xisalpha(*info->p)) {
            while(xisalnum(*info->p) || *info->p == '_') {
                buf2.append_char(*info->p);
                info->p++;
            }
            
            parse_type(info);
            
            param_names.push_back(buf2.to_string());
            
            buf2 = new buffer();
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_until_eol(info);
            }
        }
        else {
            fprintf(stderr, "%s %d: require parametor name or )\n", info->fname, info->sline);
            exit(2);
        }
    }
    
    bool in_global_context = info.in_global_context;
    info.in_global_context = false;
    
    list<sNode*>* nodes = parse_block(info);
    
    info.in_global_context = in_global_context;
    buffer* codes = compile_nodes(nodes, info);
    
    return new sNode(new sFunNode(fun_name, codes, param_names, info));
}

sNode* fun_node(char* fun_name, sParserInfo* info) version 6
{
    info->p++;
    skip_spaces_until_eol(info);
    
    vector<sNode*>* params = new vector<sNode*>();
    map<char*, sNode*>* named_params = new map<char*, sNode*>();
    
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
    
    return new sNode(new sFunCallNode(fun_name, params, named_params, info));
}

sNode* return_node(sParserInfo* info) version 2
{
    info->p += strlen("return");
    skip_spaces_until_eol(info);
    
    if(*info->p == '(') {
        info->p++;
        skip_spaces_until_eol(info);
    }
    
    sNode* node = null;
    if(!expression(&node, info)) {
        return null;
    }
    
    if(*info->p == ')') {
        info->p++;
        skip_spaces_until_eol(info);
    }
    
    return new sNode(new sReturnNode(node));
}

static sFunction* sFunction*::initialize(sFunction* self, char* name, buffer* codes, vector<string>* param_names)
{
    self.name = string(name);
    if(codes) {
        self.codes = clone codes;
    }
    else {
        self.codes = null;
    }
    self.param_names = clone param_names;
    self.native_fun = null;
    
    return self;
}

static bool function_call(sFunction* fun, vector<ZVALUE>* param_values, map<char*, ZVALUE>* named_params, sVMInfo* info)
{
    if(fun.native_fun) {
        fNativeFun fun2 = fun.native_fun;
        
        vector<char*>* param_names = fun->param_names;
        
        map<char*, ZVALUE>* params = new  map<char*, ZVALUE>.initialize();
        
        int i = 0;
        foreach(it, param_names) {
            ZVALUE value = param_values.item(i, gNoneValue);
            params.insert(string(it), value);
            
            i++;
        }
        
        foreach(key, named_params) {
            ZVALUE null_value;
            memset(&null_value, 0, sizeof(ZVALUE));
            
            ZVALUE value = named_params.at(key, null_value);
            params.insert(string(key), value);
        }
        
        if(!fun2(params, info)) {
            return false;
        }
    }
    else {
        buffer* codes = fun->codes;
        
        vector<char*>* param_names = fun->param_names;
        
        map<char*, ZVALUE>* params = new  map<char*, ZVALUE>.initialize();
        
        int i = 0;
        foreach(it, param_names) {
            ZVALUE value = param_values.item(i, gNoneValue);
            params.insert(string(it), value);
            
            i++;
        }
        
        foreach(key, named_params) {
            ZVALUE null_value;
            memset(&null_value, 0, sizeof(ZVALUE));
            
            ZVALUE value = named_params.at(key, null_value);
            params.insert(string(key), value);
        }
        
        sVMInfo vm_info;
        
        memset(&vm_info, 0, sizeof(sVMInfo));
        
        vm_init(codes, params, info->module_name, info->class_name, &vm_info);
        if(!vm(codes, params, &vm_info)) {
            return false;
        }
        
        info->return_value = vm_info->return_value;
    }
    
    return true;
}

sObject* sObject*::initialize(sObject* self, sModule* module, sClass* klass)
{
    self.klass = klass;
    self.module = module;
    self.fields = new map<char*, ZVALUE>.initialize();
    
    return self;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 94
{
    switch(*info->p) {
        case OP_FUN: {
            info->p++;
            
            int offset = *info->p;
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            char* name = (char*)info->p;
            
            char name2[len+1];
            memcpy(name2, name, len);
            name2[len] = '\0'
            
            info->p += offset;
            
            int len_codes = *info->p;
            info->p++;
            
            char* codes = (char*)info->p;
            
            info->p += len_codes / sizeof(int);
            
            buffer* codes2 = new buffer();
            
            codes2.append(codes, len_codes);
            
            int len_param_names = *info->p;
            info->p++;
            
            vector<char*>* param_names = new vector<char*>();
            
            for(int i=0; i<len_param_names; i++) {
                int offset = *info->p;
                info->p++;
                
                int len = *info->p;
                info->p++;
                
                char* name = (char*)info->p;
                
                char name2[len+1];
                memcpy(name2, name, len);
                name2[len] = '\0'
                
                info->p += offset;
                
                param_names.push_back(string(name2));
            }
            
            sFunction* fun = new sFunction(string(name2), codes2, param_names);
            
            if(info.class_name) {
                if(info.module_name) {
                    sModule* module = gModules.at(info.module_name, null);
                    
                    if(module == null) {
                        info->exception.kind = kExceptionValue;
                        info->exception.value.expValue = kExceptionVarNotFound;
                        return false;
                    }
                    
                    sClass* klass = module.classes.at(info.class_name, null);
                    
                    if(klass == null) {
                        info->exception.kind = kExceptionValue;
                        info->exception.value.expValue = kExceptionVarNotFound;
                        return false;
                    }
                    
                    klass->funcs.insert(string(name2), fun);
                }
            }
            else if(info.module_name) {
                sModule* module = gModules.at(info.module_name, null);
                
                if(module == null) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionVarNotFound;
                    return false;
                }
                
                module.funcs.insert(string(name2), fun);
            }
            }
            break;
            
        case OP_FUNCALL: {
            info->p++;
            
            int offset = *info->p;
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            char* fun_name = (char*)info->p;
            
            char fun_name2[len+1];
            memcpy(fun_name2, fun_name, len);
            fun_name2[len] = '\0'
            
            info->p += offset;
            
            int num_params = *info->p;
            info->p++;
            
            int num_named_params = *info->p;
            info->p++;
            
            map<char*, ZVALUE>* named_params = new map<char*, ZVALUE>();
            
            for(int i=0; i<num_named_params; i++) {
                int offset = *info->p;
                info->p++;
                
                int len = *info->p;
                info->p++;
                
                char* named_param = (char*)info->p;
                
                char named_param2[len+1];
                memcpy(named_param2, named_param, len);
                named_param2[len] = '\0'
                
                info->p += offset;
                
                ZVALUE value = info->stack[info->stack_num-num_named_params+i];
                
                named_params.insert(string(named_param2), value);
            }
            
            info->stack_num -= num_named_params;
            
            sModule* module = gModules.at(info.module_name, null);
            sClass* klass = module.classes.at(string(fun_name2), null);
            
            /// new object ///
            if(klass) {
                sObject* object = new sObject(module, klass);
                
                sFunction* constructor = klass.funcs.at("__init__", null);
                
                if(constructor) {
                    vector<ZVALUE>* param_values = new  vector<ZVALUE>.initialize();
                    
                    ZVALUE object_value;
                    object_value.kind = kObjValue;
                    object_value.objValue = object;
                    
                    param_values.push_back(object_value);
                    
                    for(int i=0; i<num_params; i++) {
                        ZVALUE value = info->stack[info->stack_num-num_params+i];
                        
                        param_values.push_back(value);
                    }
                    
                    if(!function_call(constructor, param_values, named_params, info)) {
                        return false;
                    }
                    
                    info->stack_num -= param_values.length() -1;
                    
                    info->stack[info->stack_num].kind = kObjValue;
                    info->stack[info->stack_num].objValue = object;
                    info->stack_num++;
                }
                else {
                    info->stack[info->stack_num].kind = kObjValue;
                    info->stack[info->stack_num].objValue = object;
                    info->stack_num++;
                }
            }
            /// function call ///
            else {
                vector<ZVALUE>* param_values = new  vector<ZVALUE>.initialize();
                
                for(int i=0; i<num_params; i++) {
                    ZVALUE value = info->stack[info->stack_num-num_params+i];
                    
                    param_values.push_back(value);
                }
                
                sFunction* fun = null;
                if(info.module_name) {
                    sModule* module = gModules.at(info.module_name, null);
                    
                    fun = module.funcs.at(fun_name2, null);
                }
                
                if(fun == null) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionNameError;
                    return false;
                }
                
                if(!function_call(fun, param_values, named_params, info)) {
                    return false;
                }
                
                info->stack_num -= param_values.length();
                
                info->stack[info->stack_num] = info->return_value;
                info->stack_num++;
            }
            }
            break;
        
        case OP_RETURN: 
            info->p++;
            
            ZVALUE return_value = info->stack[info->stack_num-1];
            
//            info->stack_num--;
            
            info->return_value = return_value;
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

