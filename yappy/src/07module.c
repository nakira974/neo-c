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

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 93
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

