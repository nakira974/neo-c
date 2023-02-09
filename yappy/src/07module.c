#include "common.h"

class sClassNode(char* class_name, buffer* codes, sParserInfo* info)
{
    string self.name = string(class_name);
    buffer* self.codes = codes;
    vector<char*>* self.param_names = nonullable null;
    
    bool compile(sClassNode* self, buffer* codes, sParserInfo* info)
    {
        codes.append_int(OP_CLASS);
        
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
        
        return true;
    }
}

class sImportNode(char* name, sParserInfo* info)
{
    string self.name = string(name);
    
    bool compile(sImportNode* self, buffer* codes, sParserInfo* info)
    {
        char* str = string(self.name);
        
        if(strcmp(str, "sys") != 0 && strcmp(str, "re") != 0) {
            codes.append_int(OP_IMPORT);
            
            int len = strlen(str);
            int offset = (len + 3) & ~3;
            offset /= sizeof(int);
            
            codes.append_int(offset);
            codes.append_int(len);
            codes.append_str(str);
            codes.alignment();
        }
        
        return true;
    }
}

class sMethodCallNode(sNode* left, char* fun_name, vector<sNode*>* params, map<char*, sNode*>* name_params, sParserInfo* info)
{
    string self.name = string(fun_name);
    vector<sNode*>* self.params = params;
    map<char*, sNode*>* self.named_params = name_params;
    sNode* self.left = left;
    
    bool compile(sMethodCallNode* self, buffer* codes, sParserInfo* info)
    {
        int stack_num = info.stack_num;
        
        sNode* left = self.left;
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
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
        
        codes.append_int(OP_METHOD_CALL);
        
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

class sStoreField(sNode* left, char* field_name, sNode* right, sParserInfo* info)
{
    string self.name = string(field_name);
    sNode* self.left = left;
    sNode* self.right = right;
    
    bool compile(sStoreField* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left;
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_STORE_FIELD);
        
        char* name = self.name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        info->stack_num--;
        
        return true;
    }
}

class sLoadFieldNode(sNode* left, char* field_name, sParserInfo* info)
{
    string self.name = string(field_name);
    sNode* self.left = left;
    
    bool compile(sLoadFieldNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left;
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_LOAD_FIELD);
        
        char* name = self.name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        return true;
    }
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

sNode* method_node(sNode* node, sParserInfo* info) version 7
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
            
            sNode* result = new sNode(new sStoreField(node, buf.to_string(), right, info));
            
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
            
            sNode* result = new sNode(new sMethodCallNode(node, buf.to_string(), params, named_params, info));
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
            
            return result;
        }
        else {
            sNode* result = new sNode(new sLoadFieldNode(node, buf.to_string(), info));
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
            
            return result;
        }
    }
    
    return nonullable null;
}

sNode* exp_node(sParserInfo* info) version 7
{
    sNode* result = nonullable null;
    
    if(emb_funcmp(info->p, "import")) {
        info->p += strlen("import");
        skip_spaces_until_eol(info);
        
        char* word = parse_word(info);
        
        result = new sNode(new sImportNode(word, info));
    }
    
    if(result == null) {
        result = inherit(info);
    }
    
    return result;
}

sNode* class_node(sParserInfo* info) version 7
{
    buffer* buf = new buffer();
    
    while(xisalnum(*info->p) || *info->p == '_') {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_until_eol(info);
    
    if(*info->p == ':') {
        info->p++;
        skip_spaces_until_eol(info);
    }
    
    char* class_name = buf.to_string();
    
    list<sNode*>* nodes = parse_block(info);
    buffer* codes = compile_nodes(nodes, info);
    
    return new sNode(new sClassNode(class_name, codes, info));
}

static sClass* sClass*::initialize(sClass* self, char* name, buffer* codes, char* module_name)
{
    self.name = string(name);
    self.module_name = string(module_name);
    
    if(codes) {
        self.codes = clone codes;
    }
    else {
        self.codes = null;
    }
    
    self.class_vars = new map<string, ZVALUE>.initialize();
    self.funcs = new map<string, sFunction*%>.initialize();
    
    return self;
};

static bool class_call(sClass* klass, sVMInfo* info)
{
    buffer* codes = klass->codes;
    
    char* class_name = info->class_name;
    
    sVMInfo vm_info;
    
    memset(&vm_info, 0, sizeof(sVMInfo));
    
    vm_init(codes, null, info->module_name, klass.name, &vm_info);
    if(!vm(codes, null, &vm_info)) {
        return false;
    }
    
    info->class_name = class_name;
    
    return true;
}

static bool import_module(char* module_name)
{
    buffer* source = new buffer();
    
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
    
    buffer* codes = compile_nodes(nodes, &info);
    
    add_module(module_name);
    
    sVMInfo vm_info;
    memset(&vm_info, 0, sizeof(sVMInfo));
    
    vm_init(codes, null, string(module_name), null, &vm_info);
    vm(codes, null, &vm_info).expect {
        print_exception(parent->vm_info->exception);
        exit(1);
    }

    return true;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 92
{
    switch(*info->p) {
        case OP_CLASS: {
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
            
            buffer* codes2 = new  buffer.initialize();
            
            codes2.append(codes, len_codes);
            
            sModule* module = gModules.at(info.module_name, null);
            
            if(module == null) {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionVarNotFound;
                return false;
            }
            
            sClass* klass = new  sClass.initialize(string(name2), codes2, module.name);
            
            module.classes.insert(string(name2), klass);
            
            if(!class_call(klass, info)) {
                return false;
            }
            }
            break;
            
        case OP_LOAD_FIELD: {
            info->p++;
            
            int offset = *info->p;
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            char* field_name = (char*)info->p;
            
            char field_name2[len+1];
            memcpy(field_name2, field_name, len);
            field_name2[len] = '\0'
            
            info->p += offset;
            
            if(info->stack[info->stack_num-1].kind == kModuleValue) {
                sModule* module = (sModule*)info->stack[info->stack_num-1].moduleValue;
                info->stack_num--;
                
                
                sClass* klass = module->classes.at(string(field_name2), null);
                
                if(klass == null) {
                    info->stack[info->stack_num] = module->global_vars.at(string(field_name2), gUndefined);
                    info->stack_num++;
                    
                    if(info->stack[info->stack_num-1].kind == kUndefinedValue) {
                        info->exception.kind = kExceptionValue;
                        info->exception.value.expValue = kExceptionVarNotFound;
                        return false;
                    }
                }
                else {
                    info->stack[info->stack_num].kind = kClassValue;
                    info->stack[info->stack_num].classValue = klass;
                    info->stack_num++;
                }
            }
            else if(info->stack[info->stack_num-1].kind == kClassValue) {
                sClass* klass = (sClass*)info->stack[info->stack_num-1].classValue;
                info->stack_num--;
                
                info->stack[info->stack_num] = klass->class_vars.at(string(field_name2), gUndefined);
                info->stack_num++;
                
                if(info->stack[info->stack_num-1].kind == kUndefinedValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionVarNotFound;
                    return false;
                }
            }
            else if(info->stack[info->stack_num-1].kind == kObjValue) {
                sObject* object = (sObject*)info->stack[info->stack_num-1].objValue;
                info->stack_num--;
                
                info->stack[info->stack_num] = object->fields.at(string(field_name2), gUndefined);
                info->stack_num++;
                
                if(info->stack[info->stack_num-1].kind == kUndefinedValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionVarNotFound;
                    return false;
                }
            }
            else {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionVarNotFound;
                return false;
            }
            }
            break;
            
        case OP_IMPORT: {
            info->p++;
            
            int offset = *info->p;
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            char* str = (char*)info->p;
            
            char str2[len+1];
            memcpy(str2, str, len);
            str2[len] = '\0'
            
            info->p += offset;
            
            if(!import_module(str2)) {
                return false;
            }
            }
            
            break;
            
        case OP_METHOD_CALL: {
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
            
            map<char*, ZVALUE>* named_params = new  map<char*, ZVALUE>();
            
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
            
            if(info->stack[info->stack_num-1-num_params].kind == kModuleValue) {
                sModule* module = (sModule*)info->stack[info->stack_num-num_params-1].moduleValue;
                
                vector<ZVALUE>* param_values = new vector<ZVALUE>();
                
                for(int i=0; i<num_params; i++) {
                    ZVALUE value = info->stack[info->stack_num-num_params+i];
                    
                    param_values.push_back(value);
                }
                
                sFunction* fun = module.funcs.at(fun_name2, null);
                
                if(fun == null) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionMethodNotFound;
                    return false;
                }
                
                if(!function_call(fun, param_values, named_params, info)) {
                    return false;
                }
                
                info->stack_num--;
                info->stack_num -= param_values.length();
                
                info->stack[info->stack_num] = info->return_value;
                info->stack_num++;
            }
            else if(info->stack[info->stack_num-num_params-1].kind == kObjValue) {
                sObject* object = (sObject*)info->stack[info->stack_num-num_params-1].objValue;
                
                vector<ZVALUE>* param_values = new vector<ZVALUE>();
                
                ZVALUE object_value;
                object_value.kind = kObjValue;
                object_value.objValue = object;
                
                param_values.push_back(object_value);
                
                for(int i=0; i<num_params; i++) {
                    ZVALUE value = info->stack[info->stack_num-num_params+i];
                    
                    param_values.push_back(value);
                }
                
                sFunction* fun = object.klass.funcs.at(fun_name2, null);
                
                if(fun == null) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionMethodNotFound;
                    return false;
                }
                
                if(!function_call(fun, param_values, named_params, info)) {
                    return false;
                }
                
                info->stack_num -= param_values.length();
                
                info->stack[info->stack_num] = info->return_value;
                info->stack_num++;
            }
            else if(info->stack[info->stack_num-num_params-1].kind == kListValue) {
                list<ZVALUE>* object = info->stack[info->stack_num-num_params-1].listValue;
                
                vector<ZVALUE>* param_values = new vector<ZVALUE>();
                
                ZVALUE object_value;
                object_value.kind = kListValue;
                object_value.listValue = object;
                
                param_values.push_back(object_value);
                
                for(int i=0; i<num_params; i++) {
                    ZVALUE value = info->stack[info->stack_num-num_params+i];
                    
                    param_values.push_back(value);
                }
                
                sModule* main_module = gModules.at("__main__", null);
                
                sClass* list_class = main_module.classes.at("list", null);
                
                sFunction* fun = list_class.funcs.at(fun_name2, null);
                
                if(fun == null) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionMethodNotFound;
                    return false;
                }
                
                if(!function_call(fun, param_values, named_params, info)) {
                    return false;
                }
                
                info->stack_num -= param_values.length();
                
                info->stack[info->stack_num] = info->return_value;
                info->stack_num++;
            }
            else if(info->stack[info->stack_num-num_params-1].kind == kTupleValue) {
                immutable list<ZVALUE>* object = info->stack[info->stack_num-num_params-1].tupleValue;
                
                vector<ZVALUE>* param_values = new  vector<ZVALUE>();
                
                ZVALUE object_value;
                object_value.kind = kListValue;
                object_value.listValue = object;
                
                param_values.push_back(object_value);
                
                for(int i=0; i<num_params; i++) {
                    ZVALUE value = info->stack[info->stack_num-num_params+i];
                    
                    param_values.push_back(value);
                }
                
                sModule* main_module = gModules.at("__main__", null);
                
                sClass* list_class = main_module.classes.at("tuple", null);
                
                sFunction* fun = list_class.funcs.at(fun_name2, null);
                
                if(fun == null) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionMethodNotFound;
                    return false;
                }
                
                if(!function_call(fun, param_values, named_params, info)) {
                    return false;
                }
                
                info->stack_num -= param_values.length();
                
                info->stack[info->stack_num] = info->return_value;
                info->stack_num++;
            }
            else if(info->stack[info->stack_num-num_params-1].kind == kStringValue) {
                wchar_t* str = info->stack[info->stack_num-num_params-1].value.stringValue;
                
                vector<ZVALUE>* param_values = new vector<ZVALUE>();
                
                ZVALUE object_value;
                object_value.kind = kStringValue;
                object_value.stringValue = str;
                
                param_values.push_back(object_value);
                
                for(int i=0; i<num_params; i++) {
                    ZVALUE value = info->stack[info->stack_num-num_params+i];
                    
                    param_values.push_back(value);
                }
                
                sModule* main_module = gModules.at("__main__", null);
                
                sClass* str_class = main_module.classes.at("str", null);
                
                sFunction* fun = str_class.funcs.at(fun_name2, null);
                
                if(fun == null) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionMethodNotFound;
                    return false;
                }
                
                if(!function_call(fun, param_values, named_params, info)) {
                    return false;
                }
                
                info->stack_num -= param_values.length();
                
                info->stack[info->stack_num] = info->return_value;
                info->stack_num++;
            }
            else if(info->stack[info->stack_num-num_params-1].kind == kMatchObjectValue) {
                vector<ZVALUE>* param_values = new  vector<ZVALUE>();
                
                ZVALUE object_value;
                object_value = info->stack[info->stack_num-num_params-1];
                
                param_values.push_back(object_value);
                
                for(int i=0; i<num_params; i++) {
                    ZVALUE value = info->stack[info->stack_num-num_params];
                    
                    param_values.push_back(value);
                }
                
                sModule* main_module = gModules.at("__main__", null);
                
                sClass* klass = main_module.classes.at("Match", null);
                
                sFunction* fun = klass.funcs.at(fun_name2, null);
                
                if(fun == null) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionMethodNotFound;
                    return false;
                }
                
                if(!function_call(fun, param_values, named_params, info)) {
                    return false;
                }
                
                info->stack_num -= param_values.length();
                
                info->stack[info->stack_num] = info->return_value;
                info->stack_num++;
            }
            else {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionMethodNotFound;
                return false;
            }
            }
            break;
            
        case OP_STORE_FIELD: {
            info->p++;
            
            int offset = *info->p;
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            char* field_name = (char*)info->p;
            
            char field_name2[len+1];
            memcpy(field_name2, field_name, len);
            field_name2[len] = '\0'
            
            info->p += offset;
            
            ZVALUE left = info->stack[info->stack_num-2];
            ZVALUE right = info->stack[info->stack_num-1];
            
            if(left.kind == kModuleValue) {
                sModule* module = (sModule*)left.moduleValue;
                
                module->global_vars.insert(string(field_name2), right);
                
                info->stack_num -= 2;
                
                info->stack[info->stack_num] = right;
                info->stack_num++;
            }
            else if(left.kind == kClassValue) {
                sClass* klass = (sClass*)left.classValue;
                
                klass->class_vars.insert(string(field_name2), right);
                
                info->stack_num -= 2;
                
                info->stack[info->stack_num] = right;
                info->stack_num++;
            }
            else if(left.kind == kObjValue) {
                sObject* obj = (sObject*)left.objValue;
                
                obj->fields.insert(string(field_name2), right);
                
                info->stack_num -= 2;
                
                info->stack[info->stack_num] = right;
                info->stack_num++;
            }
            else {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionVarNotFound;
                return false;
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

