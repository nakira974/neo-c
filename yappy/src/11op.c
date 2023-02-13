#include "common.h"
#include <ctype.h>

class sEqualNode(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* self.left = left;
    sNode* self.right = right;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sEqualNode* self)
    {
        return self.id;
    }
    
    bool compile(sEqualNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_EQ);
        
        info->stack_num -= 2;
        info->stack_num++;
        
        return true;
    }
}

class sEqualNotNode(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* self.left = left;
    sNode* self.right = right;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sEqualNotNode* self)
    {
        return self.id;
    }
    
    bool compile(sEqualNotNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_NOT_EQ);
        
        info->stack_num -= 2;
        info->stack_num++;
        
        return true;
    }
}

class sIsNode(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* self.left = left;
    sNode* self.right = right;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sIsNode* self)
    {
        return self.id;
    }
    
    bool compile(sIsNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_IS);
        
        info->stack_num -= 2;
        info->stack_num++;
        
        return true;
    }
}

class sIsNotNode(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* self.left = left;
    sNode* self.right = right;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sIsNotNode* self)
    {
        return self.id;
    }
    
    bool compile(sIsNotNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_IS_NOT);
        
        info->stack_num -= 2;
        info->stack_num++;
        
        return true;
    }
}

class sMultNode(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* self.left = left;
    sNode* self.right = right;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sMultNode* self)
    {
        return self.id;
    }
    
    bool compile(sMultNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_MULT);
        
        info->stack_num -= 2;
        info->stack_num++;
        
        return true;
    }
}

class sDivNode(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* self.left = left;
    sNode* self.right = right;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sDivNode* self)
    {
        return self.id;
    }
    
    bool compile(sDivNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_DIV);
        
        info->stack_num -= 2;
        info->stack_num++;
        
        return true;
    }
}

class sAndAndNode(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* self.left = left;
    sNode* self.right = right;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sAndAndNode* self)
    {
        return self.id;
    }
    
    bool compile(sAndAndNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_ANDAND);
        
        info->stack_num -= 2;
        info->stack_num++;
        
        return true;
    }
}

class sOrOrNode(sNode* left, sNode* right, sParserInfo* info)
{
    sNode* self.left = left;
    sNode* self.right = right;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sOrOrNode* self)
    {
        return self.id;
    }
    
    bool compile(sOrOrNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* left = self.left
        
        if(!left.compile->(codes, info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_OROR);
        
        info->stack_num -= 2;
        info->stack_num++;
        
        return true;
    }
}

bool ZVALUE_is(ZVALUE self, ZVALUE right)
{
    if(self.kind != right.kind) {
        return false;
    }
    
    switch(self.kind) {
        case kIntValue:
            if(self.intValue != right.intValue) {
                return false;
            }
            break;
            
        case kBoolValue:
            if(self.boolValue != right.boolValue) {
                return false;
            }
            break;
            
        case kLongValue:
            if(self.longValue != right.longValue) {
                return false;
            }
            break;
            
        case kStringValue:
            if(self.stringValue != right.stringValue) {
                return false;
            }
            break;
            
        case kRegexValue:
            if(self.regexValue != right.regexValue) {
                return false;
            }
            break;
            
        case kObjValue: {
            sObject* left_obj = self.objValue;
            sObject* right_obj = right.objValue;
            
            if(left_obj != right_obj) {
                return false;
            }
            }
            break;
            
        case kNoneValue:
            if(right.kind != kNoneValue) {
                return false;
            }
            break;
            
        case kExceptionValue:
            if(self.expValue != right.expValue) {
                return false;
            }
            break;
            
        case kModuleValue:
            return false;
            break;
            
        case kClassValue: {
            sClass* klass1 = self.classValue;
            sClass* klass2 = self.classValue;
            if(klass1 != klass2) {
                return false;
            }
            }
            break;
            
        case kListValue:
            if(self.listValue != right.listValue) {
                return false;
            }
            break;
            
        case kTupleValue:
            if(self.tupleValue != right.tupleValue) {
                return false;
            }
            break;
            
        case kMapValue:
            if(self.mapValue != right.mapValue) {
                return false;
            }
            break;
    }
    
    return true;
}

static sNode* op_mult_node(sParserInfo* info)
{
    sNode* result = op_add_node(info);
    
    while(*info->p == '*' || *info->p == '/') {
        if(*info->p == '*') {
            info->p++;
            skip_spaces_until_eol(info);
            
            sNode*? right = op_mult_node(info);
            
            if(right == null) {
                return nonullable null;
            }
            
            result = new sNode(new sMultNode(result, right!, info));
        }
        else if(*info->p == '/') {
            info->p++;
            skip_spaces_until_eol(info);
            
            sNode*? right = op_mult_node(info);
            
            if(right == null) {
                return nonullable null;
            }
            
            result = new sNode(new sDivNode(result, right!, info));
        }
    }
    
    return result;
}

static sNode* op_eq_node(sParserInfo* info)
{
    sNode* result = op_mult_node(info);
    
    while((*info->p == '=' && *(info->p+1) == '=') 
            || (*info->p == '!' && *(info->p+1) == '=')
            || (*info->p == 'i' && *(info->p+1) == 's'))
    {
        if(*info->p == '=' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_until_eol(info);
            
            sNode* right = op_eq_node(info);
            
            if(right == null) {
                return nonullable null;
            }
            
            result = new sNode(new sEqualNode(result, right!, info));
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_until_eol(info);
            
            sNode* right = op_eq_node(info);
            
            if(right == null) {
                return nonullable null;
            }
            
            result = new sNode(new sEqualNotNode(result, right, info));
        }
        else if(*info->p == 'i' && *(info->p+1) == 's') {
            info->p+=2;
            skip_spaces_until_eol(info);
            
            if(memcmp(info->p, "not", 3) == 0) {
                info->p += 3;
                skip_spaces_until_eol(info);
                
                sNode*? right = op_eq_node(info);
                
                if(right == null) {
                    return nonullable null;
                }
                
                result = new sNode(new sIsNotNode(result, right, info));
            }
            else {
                sNode* right = op_eq_node(info);
                
                if(right == null) {
                    return nonullable null;
                }
                
                result = new sNode(new sIsNode(result, right!, info));
            }
        }
    }
    
    return result;
}

static sNode* op_andand_node(sParserInfo* info)
{
    sNode* result = op_eq_node(info);
    
    while((*info->p == 'a' && *(info->p+1) == 'n' && *(info->p+2) == 'd') || (*info->p == 'o' && *(info->p+1) == 'r')) {
        if(*info->p == 'a' && *(info->p+1) == 'n' && *(info->p+2) == 'd') {
            info->p+=3;
            skip_spaces_until_eol(info);
            
            sNode* right = op_andand_node(info);
            
            if(right == null) {
                return nonullable null;
            }
            
            result = new sNode(new sAndAndNode(result, right, info));
        }
        else if(*info->p == 'o' && *(info->p+1) == 'r') {
            info->p+=2;
            skip_spaces_until_eol(info);
            
            sNode* right = op_andand_node(info);
            
            if(right == null) {
                return nonullable null;
            }
            
            result = new sNode(new sOrOrNode(result, right, info));
        }
    }
    
    return result;
}

bool expression(sNode** node, sParserInfo* info) version 11
{
    *node = op_andand_node(info);
    
    if(*node == null) {
        return false;
    }
    
    return true;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 89
{
    switch(*info->p) {
        case OP_EQ: {
            info->p++;
            
            ZVALUE lvalue = info->stack[info->stack_num-2];
            ZVALUE rvalue = info->stack[info->stack_num-1];
            
            info->stack_num-=2;
            
            info->stack[info->stack_num].kind = kBoolValue;
            info->stack[info->stack_num].value.boolValue = ZVALUE_equals(lvalue, rvalue);
            info->stack_num++;
            }
            
            break;
            
        case OP_NOT_EQ: {
            info->p++;
            
            ZVALUE lvalue = info->stack[info->stack_num-2];
            ZVALUE rvalue = info->stack[info->stack_num-1];
            
            info->stack_num-=2;
            
            info->stack[info->stack_num].kind = kBoolValue;
            info->stack[info->stack_num].value.boolValue = !ZVALUE_equals(lvalue, rvalue);
            info->stack_num++;
            }
            break;
            
        case OP_IS: {
            info->p++;
            
            ZVALUE lvalue = info->stack[info->stack_num-2];
            ZVALUE rvalue = info->stack[info->stack_num-1];
            
            info->stack_num-=2;
            
            info->stack[info->stack_num].kind = kBoolValue;
            info->stack[info->stack_num].value.boolValue = ZVALUE_is(lvalue, rvalue);
            info->stack_num++;
            }
            
            break;
            
        case OP_IS_NOT: {
            info->p++;
            
            ZVALUE lvalue = info->stack[info->stack_num-2];
            ZVALUE rvalue = info->stack[info->stack_num-1];
            
            info->stack_num-=2;
            
            info->stack[info->stack_num].kind = kBoolValue;
            info->stack[info->stack_num].value.boolValue = !ZVALUE_is(lvalue, rvalue);
            info->stack_num++;
            }
            break;
            
        case OP_MULT: {
            info->p++;
            
            ZVALUE lvalue = info->stack[info->stack_num-2];
            ZVALUE rvalue = info->stack[info->stack_num-1];
            
            info->stack_num-=2;
            
            if(rvalue.kind != kIntValue) {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionTypeError;
                return false;
            }
            
            switch(lvalue.kind) {
                case kIntValue:
                    info->stack[info->stack_num].kind = kIntValue;
                    info->stack[info->stack_num].value.intValue = lvalue.intValue * rvalue.intValue;
                    info->stack_num++;
                    break;
                    
                case kStringValue: {
                    buffer* buf = new buffer();
                    
                    for(int i=0; i<rvalue.intValue; i++) {
                        buf.append_str(lvalue.value.stringValue.to_string());
                    }
                    
                    info->stack[info->stack_num].kind = kStringValue;
                    info->stack[info->stack_num].value.stringValue = buf.to_string().to_wstring();
                    info->stack_num++;
                    }
                    break;
                    
                case kListValue: {
                    list<ZVALUE>* list_object = new list<ZVALUE>();
                    
                    list<ZVALUE>* li = lvalue.value.listValue;
                    
                    for(int i=0; i<rvalue.intValue; i++) {
                        foreach(it, li) {
                            list_object.push_back(it);
                        }
                    }
                    
                    info->stack[info->stack_num].kind = kListValue;
                    info->stack[info->stack_num].value.listValue = list_object;
                    info->stack_num++;
                    }
                    break;
                    
                case kTupleValue: {
                    list<ZVALUE>* list_object = new list<ZVALUE>();
                    
                    immutable list<ZVALUE>* li = lvalue.value.tupleValue;
                    
                    for(int i=0; i<rvalue.intValue; i++) {
                        foreach(it, li) {
                            list_object.push_back(it);
                        }
                    }
                    
                    info->stack[info->stack_num].kind = kTupleValue;
                    info->stack[info->stack_num].value.tupleValue = list_object;
                    info->stack_num++;
                    }
                    break;
                    
                default:
                    info->exception.kind = kExceptionValue;
                    info->exception.value.expValue = kExceptionTypeError;
                    return false;
            }
            
            }
            break;
            
        case OP_DIV: {
            info->p++;
            
            ZVALUE lvalue = info->stack[info->stack_num-2];
            ZVALUE rvalue = info->stack[info->stack_num-1];
            
            info->stack_num-=2;
            
            if(lvalue.kind != kIntValue && rvalue.kind != kIntValue) {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionTypeError;
                return false;
            }
            
            if(rvalue.intValue == 0) {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionDivisionByZero;
                return false;
            }
            
            info->stack[info->stack_num].kind = kIntValue;
            info->stack[info->stack_num].value.intValue = lvalue.intValue / rvalue.intValue;
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
    
    return true;
}
