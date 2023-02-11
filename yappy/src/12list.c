#include "common.h"
#include <ctype.h>

class sListNode(list<sNode*>* elements, sParserInfo* info)
{
    list<sNode*>* self.listValue = clone  elements;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sListNode* self)
    {
        return self.id;
    }
    
    bool compile(sListNode* self, buffer* codes, sParserInfo* info)
    {
        list<sNode*>* elements = self.listValue;
        
        foreach(it, elements) {
            if(!it.compile->(codes, info)) {
                return false;
            }
        }
        
        codes.append_int(OP_LIST_VALUE);
        
        int len = elements.length();
        
        info.stack_num -= len;
        
        codes.append_int(len);
        
        info->stack_num++;
        
        return true;
    }
}

class sTupleNode(list<sNode*>* elements, sParserInfo* info)
{
    list<sNode*>* self.listValue = clone  elements;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sTupleNode* self)
    {
        return self.id;
    }
    
    bool compile(sTupleNode* self, buffer* codes, sParserInfo* info)
    {
        list<sNode*>* elements = self.listValue;
        
        foreach(it, elements) {
            if(!it.compile->(codes, info)) {
                return false;
            }
        }
        
        codes.append_int(OP_TUPLE_VALUE);
        
        int len = elements.length();
        
        info.stack_num -= len;
        
        codes.append_int(len);
        
        info->stack_num++;
        
        return true;
    }
}

class sMapNode(map<sNode*, sNode*>* elements, sParserInfo* info)
{
    map<sNode*, sNode*>* self.mapValue = clone  elements;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sMapNode* self)
    {
        return self.id;
    }
    
    bool compile(sMapNode* self, buffer* codes, sParserInfo* info)
    {
        map<sNode*, sNode*>* elements = self.mapValue;
        
        foreach(key, elements) {
            sNode* item = elements.at(key, null);
            
            if(!key.compile->(codes, info)) {
                return false;
            }
            
            if(!item.compile->(codes, info)) {
                return false;
            }
        }
        
        codes.append_int(OP_MAP_VALUE);
        
        int len = elements.length();
        
        info.stack_num -= (len * 2);
        
        codes.append_int(len);
        
        info->stack_num++;
        
        return true;
    }
}

class sIndexNode(char* var_name, sNode* index_node, sNode* index_node2, sNode* index_node3, sParserInfo* info)
{
    char* self.var_name = clone  var_name;
    sNode* self.index_node = index_node;
    sNode* self.index_node2 = index_node2;
    sNode* self.index_node3 = index_node3;
    bool self.in_global_context = info->in_global_context;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sIndexNode* self)
    {
        return self.id;
    }
    
    bool compile(sIndexNode* self, buffer* codes, sParserInfo* info)
    {
        char* var_name = self.var_name;
        sNode* index_node = self.index_node;
        sNode* index_node2 = self.index_node2;
        sNode* index_node3 = self.index_node3;
        bool in_global_context = self.in_global_context;
        
        codes.append_int(OP_LOAD);
        
        int len = strlen(var_name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(var_name);
        codes.alignment();
        
        codes.append_int(in_global_context);
        
        info->stack_num++;
        
        if(!index_node.compile->(codes, info)) {
            return  false;
        }
        
        if(index_node2) {
            if(!index_node2.compile->(codes, info)) {
                return false;
            }
        }
        
        if(index_node3) {
            if(!index_node3.compile->(codes, info)) {
                return false;
            }
        }
        
        codes.append_int(OP_LIST_INDEX);
        
        int slice = index_node2 ?1:0;
        codes.append_int(slice);
        
        int slice2 = index_node3 ? 1:0;
        codes.append_int(slice2);
        
        if(slice && slice2) {
            info->stack_num-=4;
            info->stack_num++;
        }
        else if(slice || slice2) {
            info->stack_num-=3;
            info->stack_num++;
        }
        else {
            info->stack_num-=2;
            info->stack_num++;
        }
        
        return true;
    }
}

sNode* index_node(char* var_name, sParserInfo* info) version 12
{
    info->p++;
    skip_spaces_until_eol(info);
    
    sNode* index_node = null;
    sNode* index_node2 = null;
    sNode* index_node3 = null;
    
    if(*info->p == ':') {
        info->p++;
        skip_spaces_until_eol(info);
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_until_eol(info);
            
            if(*info->p == ']') {
                index_node = new sNode(new sIntNode(0));
                index_node2 = new sNode(new sIntNode(-1));
                index_node3 = null;
            }
            else {
                index_node = new sNode(new sIntNode(0));
                index_node2 = new sNode(new sIntNode(-1));
                
                if(!expression(&index_node3, info)) {
                    return nonullable null;
                }
            }
        }
        else if(*info->p == ']') {
            index_node = new sNode(new sIntNode(0));
            index_node2 = new sNode(new sIntNode(-1));
            index_node3 = null;
        }
        else {
            index_node = new sNode(new sIntNode(0));
            
            if(!expression(&index_node2, info)) {
                return nonullable null;
            }
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_until_eol(info);
                
                if(!expression(&index_node3, info)) {
                    return nonullable null;
                }
            }
            else {
                index_node3 = null;
            }
        }
    }
    else {
        if(!expression(&index_node, info)) {
            return nonullable null;
        }
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_until_eol(info);
            
            if(*info->p == ']') {
                index_node2 = new sNode(new sIntNode(-1));
                index_node3 = null;
            }
            else if(*info->p == ':') {
                info->p++;
                skip_spaces_until_eol(info);
                
                index_node2 = new sNode(new sIntNode(-1));
                
                if(*info->p == ']') {
                    index_node3 = null;
                }
                else {
                    if(!expression(&index_node3, info)) {
                        return nonullable null;
                    }
                }
            }
            else {
                if(!expression(&index_node2, info)) {
                    return nonullable null;
                }
                
                if(*info->p == ':') {
                    info->p++;
                    skip_spaces_until_eol(info);
                    
                    if(*info->p == ']') {
                        index_node3 = null;
                    }
                    else {
                        if(!expression(&index_node3, info)) {
                            return nonullable null;
                        }
                    }
                }
            }
        }
        else if(*info->p == ']') {
            index_node2 = null;
            index_node3 = null;
        }
    }
    
    if(*info->p == ']'){
        info->p++;
        skip_spaces_until_eol(info);
    }
    else {
        fprintf(stderr, "%s %d: require ] for list index", info->fname, info->sline);
        return null;
    }

    return new sNode(new sIndexNode(var_name, index_node, index_node2, index_node3, info));
}

sNode* exp_node(sParserInfo* info) version 12
{
    sNode* result = inherit(info);
    
    if(result == null) {
        if(*info->p == '[') {
            info->p++;
            skip_spaces_until_eol(info);
            
            list<sNode*>* elements = new  list<sNode*>();
            
            bool in_fun_call = info->in_fun_call;
            info->in_fun_call = true;
            
            while(true) {
                if(*info->p == '\0') {
                    fprintf(stderr, "%s %d: the source end", info->fname, info->sline);
                    return null;
                }
                else if(*info->p == ']') {
                    info->p++;
                    skip_spaces_until_eol(info);
                    break;
                }
                else {
                    sNode* node = null;
                    if(!expression(&node, info)) {
                        return null;
                    }
                    
                    if(*info->p == ':') {
                        info->p++;
                        skip_spaces_until_eol(info);
                        
                        if(!expression(&node, info)) {
                            return null;
                        }
                    }
                    
                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_until_eol(info);
                    }
                    
                    elements.push_back(node);
                }
            }
            
            info->in_fun_call = in_fun_call;
            
            result = new sNode(new sListNode(elements, info));
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
        }
        else if(*info->p == '{') {
            info->p++;
            skip_spaces_until_eol(info);
            
            map<sNode*, sNode*>* elements = new  map<sNode*, sNode*>();
            
            bool in_fun_call = info->in_fun_call;
            info->in_fun_call = true;
            
            while(true) {
                if(*info->p == '\0') {
                    fprintf(stderr, "%s %d: the source end", info->fname, info->sline);
                    return null;
                }
                else if(*info->p == '}') {
                    info->p++;
                    skip_spaces_until_eol(info);
                    break;
                }
                else {
                    sNode* node = null;
                    if(!expression(&node, info)) {
                        return null;
                    }
                    
                    if(*info->p == ':') {
                        info->p++;
                        skip_spaces_until_eol(info);
                        
                        sNode* node2 = null;
                        if(!expression(&node2, info)) {
                            return null;
                        }
                        
                        if(*info->p == ',') {
                            info->p++;
                            skip_spaces_until_eol(info);
                        }
                        
                        elements.insert(node, node2);
                    }
                }
            }
            
            info->in_fun_call = in_fun_call;
            
            result = new sNode(new sMapNode(elements, info));
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
        }
        else if(*info->p == '(') {
            info->p++;
            skip_spaces_until_eol(info);
            
            list<sNode*>* elements = new list<sNode*>();
            
            bool in_fun_call = info->in_fun_call;
            info->in_fun_call = true;
            
            while(true) {
                if(*info->p == '\0') {
                    fprintf(stderr, "%s %d: the source end", info->fname, info->sline);
                    return null;
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_until_eol(info);
                    break;
                }
                else {
                    sNode* node = null;
                    if(!expression(&node, info)) {
                        return null;
                    }
                    
                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_until_eol(info);
                    }
                    
                    elements.push_back(node);
                }
            }
            
            info->in_fun_call = in_fun_call;
            
            result = new sNode(new sTupleNode(elements, info));
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
        }
    }
    else {
        if(*info->p == ',' && !info->in_fun_call) {
            info->p++;
            skip_spaces_until_eol(info);
            
            list<sNode*>* elements = new list<sNode*>();
            
            elements.push_back(result!);
            
            while(true) {
                if(*info->p == '\0') {
                    fprintf(stderr, "%s %d: the source end", info->fname, info->sline);
                    return null;
                }
                else {
                    sNode* node = null;
                    if(!expression(&node, info)) {
                        return null;
                    }
                    
                    elements.push_back(node);
                    
                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_until_eol(info);
                    }
                    else {
                        break;
                    }
                }
            }
            
            result = new sNode(new sTupleNode(elements, info));
            
            if(*info->p == '.') {
                result = method_node(result!, info);
            }
        }
    }
    
    return result;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 88
{
    switch(*info->p) {
        case OP_LIST_VALUE: {
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            list<ZVALUE>* list_object = new list<ZVALUE>();
            
            for(int i=0; i<len; i++) {
                ZVALUE element = info->stack[info->stack_num-len+i];
                
                list_object.push_back(element);
            }
            
            info->stack_num -= len;
            
            info->stack[info->stack_num].kind = kListValue;
            info->stack[info->stack_num].listValue = list_object;
            info->stack_num++;
            
            }
            break;
            
        case OP_MAP_VALUE: {
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            map<ZVALUE, ZVALUE>* map_object = new map<ZVALUE, ZVALUE>();
            
            for(int i=0; i<len; i++) {
                ZVALUE key = info->stack[info->stack_num-len*2+i*2];
                ZVALUE item = info->stack[info->stack_num-len*2+i*2 + 1];
                
                map_object.insert(key, item);
            }
            
            info->stack_num -= len * 2;
            
            info->stack[info->stack_num].kind = kMapValue;
            info->stack[info->stack_num].mapValue = map_object;
            info->stack_num++;
            
            }
            break;
                
        case OP_TUPLE_VALUE: {
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            list<ZVALUE>* tuple_object = new list<ZVALUE>();
            
            for(int i=0; i<len; i++) {
                ZVALUE element = info->stack[info->stack_num-len+i];
                
                tuple_object.push_back(element);
            }
            
            info->stack_num -= len;
            
            info->stack[info->stack_num].kind = kTupleValue;
            info->stack[info->stack_num].tupleValue = tuple_object;
            info->stack_num++;
            
            }
            break;
                
        case OP_LIST_INDEX: {
            info->p++;
            
            int slice = *info->p;
            info->p++;
            
            int slice2 = *info->p;
            info->p++;
            
            if(slice && slice2) {
                ZVALUE array_value = info->stack[info->stack_num-4];
                ZVALUE index_value = info->stack[info->stack_num-3];
                ZVALUE index_value2 = info->stack[info->stack_num-2];
                ZVALUE index_value3 = info->stack[info->stack_num-1];
                
                int kind = array_value.kind;
                
                if(array_value.kind != kListValue && array_value.kind != kTupleValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
                
                if(index_value.kind != kIntValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
                
                if(index_value2.kind != kIntValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
                
                if(index_value3.kind != kIntValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
                
                list<ZVALUE>* list_object = array_value.listValue;
                
                int index = index_value.intValue;
                int index2 = index_value2.intValue;
                int index3 = index_value3.intValue;
                
                if(index < 0) {
                    index += list_object.length();
                }

                if(index2 < 0) {
                    index2 += list_object.length() + 1;
                }

                if(index < 0) {
                    index = 0;
                }

                if(index2 >= list_object.length()) {
                    index2 = list_object.length();
                }
                
                list<ZVALUE>* list_object2 = new list<ZVALUE>();
                
                int i = 0;
                foreach(it, list_object) {
                    if(i >= index && i < index2 && (i % index3 == 0)) {
                        list_object2.push_back(it);
                    }
                    i++;
                }
                
                info->stack_num -=4;
                
                info->stack[info->stack_num].kind = kind;
                info->stack[info->stack_num].value.listValue = list_object2;
                info->stack_num++;
            }
            else if(slice) {
                ZVALUE array_value = info->stack[info->stack_num-3];
                ZVALUE index_value = info->stack[info->stack_num-2];
                ZVALUE index_value2 = info->stack[info->stack_num-1];
                
                int kind = array_value.kind;
                
                if(array_value.kind != kListValue && array_value.kind != kTupleValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
                
                if(index_value.kind != kIntValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
                
                if(index_value2.kind != kIntValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
                
                list<ZVALUE>* list_object = array_value.listValue;
                
                int index = index_value.intValue;
                int index2 = index_value2.intValue;
                
                list<ZVALUE>* list_object2 = list_object.sublist(index, index2);
                
                info->stack_num -=3;
                
                info->stack[info->stack_num].kind = kind;
                info->stack[info->stack_num].value.listValue = list_object2;
                info->stack_num++;
            }
/*
            else if(slice2) {
                ZVALUE array_value = stack[stack_num-3];
                ZVALUE index_value = stack[stack_num-2];
                ZVALUE index_value3 = stack[stack_num-1];
                
                if(array_value.kind != kListValue && array_value.kind != kTupleValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
                
                if(index_value.kind != kIntValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
                
                if(index_value3.kind != kIntValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
            }
*/
            else {
                ZVALUE array_value = info->stack[info->stack_num-2];
                ZVALUE index_value = info->stack[info->stack_num-1];

                if(array_value.kind != kListValue && array_value.kind != kTupleValue && array_value.kind != kMapValue) {
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
                }
                
                if(array_value.kind == kMapValue) {
                    map<ZVALUE, ZVALUE>* map_object = array_value.mapValue;
                    
                    ZVALUE key = index_value;
                    
                    info->stack_num -=2;
                    
                    info->stack[info->stack_num] = map_object.at(key, gNoneValue);
                    info->stack_num++;
                }
                else {
                    if(index_value.kind != kIntValue) {
                        info->exception.kind = kExceptionValue;
                        info->exception.value.expValue = kExceptionTypeError;
                        return false;
                    }
                    
                    list<ZVALUE>* list_object = array_value.listValue;
                    
                    int index = index_value.intValue;
                    
                    info->stack_num -=2;
                    
                    info->stack[info->stack_num] = list_object.item(index, gNoneValue);
                    info->stack_num++;
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

