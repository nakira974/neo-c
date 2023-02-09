#include "common.h"
#include <ctype.h>

class sIntNode(int value)
{
    int self.intValue = value;
    
    bool compile(sIntNode* self, buffer* codes, sParserInfo* info)
    {
        codes.append_int(OP_INT_VALUE);
        codes.append_int(self.intValue);
        
        info->stack_num++;
        
        return true;
    }
};

sNode* exp_node(sParserInfo* info) version 1
{
    if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
        }
        skip_spaces_until_eol(info);
        
        return new sNode(new sIntNode(n));
    }
    
    return nonullable null;
}

bool expression(sNode** node, sParserInfo* info) version 1
{
    *node = exp_node(info);
    
    if(*node == null) {
        return false;
    }
    
    return true;
}

ZVALUE gNoneValue;
ZVALUE gUndefined;

void initialize_modules() version 1
{
    setlocale(LC_ALL, "");
    
    gNoneValue.kind = kNoneValue;
    gNoneValue.objValue = null;
    
    gUndefined.kind = kUndefinedValue;
    gUndefined.objValue = null;
    
    gModules = new map<char*, sModule*>();
    
    sModule* sys_module = new  sModule("sys");
    gModules.insert("sys", sys_module);
    
    sModule* main_module = new  sModule("__main__");
    gModules.insert("__main__", main_module);
    
    main_module.global_vars.insert("None", gNoneValue);
    
    add_class("int", "", "__main__");
    add_class("float", "", "__main__");
    sClass* str_class = add_class("str", "", "__main__");
    add_class("bytes", "", "__main__");
    add_class("bool", "", "__main__");
    add_class("NoneType", "", "__main__");
    add_class("UndefinedType", "", "__main__");
    sClass* list_class = add_class("list", "", "__main__");
    add_class("type", "", "__main__");
    add_class("module", "", "__main__");
    add_class("exception", "", "__main__");
}

sModule* sModule*::initialize(sModule* self, char* module_name)
{
    self.name = string(module_name);
    
    self.funcs = new map<char*, sFunction*>();
    self.global_vars = new map<char*, ZVALUE>();
    self.classes = new map<char*, sClass*>();
    
    return self;
}

sClass* sClass*::initialize(sClass* self, char* name, buffer* codes, char* module_name)
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
}

void finalize_modules() version 1
{
}

map<char*, sModule*>* gModules;

void add_module(char* module_name)
{
    sModule* module = new sModule(module_name);
    
    gModules.insert(string(module_name), module);
}

sClass* add_class(char* class_name, char* class_module_name, char* module_name)
{
    sModule* module = gModules.at(module_name, null);
    
    if(module) {
        sClass* klass = new  sClass(class_name, null, class_module_name);
        module.classes.insert(string(class_name), klass);
        
        return klass;
    }
    
    return null;
}

void vm_init(buffer* codes, map<char*, ZVALUE>* params, char* module_name, char* class_name, sVMInfo* info)
{
    info->module_name = string(module_name);
    if(class_name) {
        info->class_name = string(class_name);
    }
    else {
        info->class_name = null;
    }
    
    info->stack_num = 0;
    info->return_value = gNoneValue;
    
    info->p = (int*)codes.buf;
    info->head = (int*)codes.buf;
    
    info->vtable = new map<char*, ZVALUE>();
    
    int get_element_num = 0;
    ZVALUE for_list_value;
    
    if(params) {
        foreach(it, params) {
            char* key = it;
            
            ZVALUE item = params.at(string(it), gUndefined);
            
            if(item.kind == kUndefinedValue) {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionVarNotFound;
                return false;
            }
            
            info->vtable.insert(string(key), item);
        }
    }
    
    info->get_element_num = 0;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 1
{
    return true;
}

void print_op(int op)
{
    switch(op) {
        case OP_POP:
            puts("OP_POP");
            break;
        case OP_STORE_FIELD:
            puts("OP_STORE_FIELD");
            break;
            
        case OP_EQ:
            puts("OP_EQ");
            break;
            
        case OP_ANDAND:
            puts("OP_ANDAND");
            break;
            
        case OP_OROR:
            puts("OP_OROR");
            break;
            
        case OP_CLASS:
            puts("OP_CLASS");
            break;
                
        case OP_INT_VALUE: 
            puts("OP_INT_VALUE");
            break;
                
        case OP_ADD: 
            puts("OP_ADD");
            break;
                
        case OP_SUB:
            puts("OP_SUB");
            break;
                 
        case OP_STRING_VALUE:
            puts("OP_STRING_VALUE");
            break;
                 
        case OP_STR:
            puts("OP_STR");
            break;
                 
        case OP_TYPE:
            puts("OP_TYPE");
            break;
                
        case OP_PRINT: 
            puts("OP_PRINT");
            break;
                
        case OP_LEN: 
            puts("OP_LEN");
            break;
                
        case OP_INT: 
            puts("OP_INT");
            break;
                
        case OP_LOAD: 
            puts("OP_LOAD");
            break;
                
        case OP_STORE: 
            puts("OP_STORE");
            break;
                
        case OP_FUNCALL:
            puts("OP_FUNCALL");
            break;
            
        case OP_METHOD_CALL:
            puts("OP_METHOD_CALL");
            break;
                
        case OP_BOOL_VALUE: 
            puts("OP_BOOL_VALUE");
            break;
            
        case OP_NONE_VALUE: 
            puts("OP_NONE_VALUE");
            break;
                
        case OP_GOTO: 
            puts("OP_GOTO");
            break;
                
        case OP_IF: 
            puts("OP_IF");
            break;
            
        case OP_EXIT: 
            puts("OP_EXIT");
            break;
            
        case OP_RETURN: 
            puts("OP_RETURN");
            break;
            
        case OP_FUN: 
            puts("OP_FUN");
            break;
            
        case OP_LOAD_FIELD:
            puts("OP_LOAD_FIELD");
            break;
            
        case OP_LOAD_FIELD:
            puts("OP_STORE_FIELD");
            break;
            
        case OP_LIST_VALUE:
            puts("OP_LIST_VALUE");
            break;
            
        case OP_MAP_VALUE:
            puts("OP_MAP_VALUE");
            break;
            
        case OP_TUPLE_VALUE:
            puts("OP_TUPLE_VALUE");
            break;
            
        case OP_LIST_INDEX:
            puts("OP_LIST_INDEX");
            break;
                
        default:
            printf("invalid op code %d\n", op);
            break;
    }
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 98
{
    while((info->p - info->head) < (codes.length() / sizeof(int))) {
//print_op(*info->p);
//printf("start info->p - info->head %d max %d\n", info->p - info->head, codes.length() / sizeof(int));
        switch(*info->p) {
            case OP_POP: {
                info->p++;
                int n = *info->p;
                info->p++;
                
                info->stack_num -= n;
                }
                break;
                
            case OP_INT_VALUE: {
                info->p++;
                int value = *info->p;
                info->p++;
                
                info->stack[info->stack_num].kind = kIntValue;
                info->stack[info->stack_num].value.intValue = value;
                info->stack_num++;
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
//printf("end info->p - info->head %d max %d\n", info->p - info->head, codes.length() / sizeof(int));
//printf("end info->stack_num %d\n", info->stack_num);
        
        if(info->stack_num < 0 || info->stack_num >= ZSTACK_MAX) {
            fprintf(stderr, "Inerpreter Bug occurs. invalid stack num %d\n", info->stack_num);
            exit(1);
        }
    }
    
    if(info->stack_num != 0) {
        fprintf(stderr, "Inerpreter Bug occurs. invalid stack num %d\n", info->stack_num);
        exit(1);
    }
    
    return true;
}
