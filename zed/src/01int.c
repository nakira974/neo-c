#include "common.h"

struct sIntNode
{
    int value;
};

sNode* create_int_node(int value)
{
    sNode* self = borrow new sNode;
    
    self.mID = gNodeID++;
    
    self.mKind = kIntNode;
    
    sIntNode* body = borrow new sIntNode;
    
    body.value = value;
    
    self.body = body;
    
    return self;
}

sNode* exp_node(sInfo* info) version 99
{
    if(*info->p == '-' && xisdigit(*(info->p+1))) {
        info->p++;
        
        if(xisdigit(*info->p)) {
            int n = 0;
            while(xisdigit(*info->p)) {
                n = n * 10 + (*info->p - '0');
                info->p++;
            }
            skip_spaces(info);
            
            return create_int_node(-n);
        }
    }
    else if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
        }
        skip_spaces(info);
        
        return create_int_node(n);
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces(info);
        
        sNode* exp = expression(info);
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces(info);
        }
        
        return exp;
    }
    else {
        return inherit(info);
    }
    
    return null;
}

void free_node(sNode* self) version 99
{
    switch(self.mKind) {
        case kIntNode:
            delete (sIntNode*)self.body;
            break;
            
        default:
            inherit(self);
            break;
    }
}

sNode* expression(sInfo* info) version 1
{
    return exp_node(info);
}

bool parse(sInfo* info)
{
    sNode* node = expression(info);
    
    info->nodes.push_back(dummy_heap node);
    
    return true;
}

void arrange_stack(sInfo* info)
{
    if(info->stack_num > 0) {
        info.codes.append_int(OP_POP);
        info.codes.append_int(info->stack_num);
    }
}

bool compile_node(sNode* self, sInfo* info) version 99
{
    switch(self.mKind) {
        case kIntNode: {
            info.codes.append_int(OP_INT_VALUE);
            
            sIntNode* body = (sIntNode*)self.body;
            info.codes.append_int(body.value);
            
            info.stack_num++;
            }
            break;
            
        default:
            return inherit(self, info);
    }
    
    return true;
}

bool vm(sInfo* info) version 99
{
    switch(*info->op) {
        case OP_POP: {
            info->op++;
            
            int value = *info->op;
            info->op++;
            
            if(info.stack.length() > 0) {
                info->result_value = clone info.stack[-1];
            }
            
            for(int i=0; i<value; i++) {
                info.stack.delete_back();
            }
            }
            break;
            
        case OP_INT_VALUE: {
            info->op++;
            int value = *info->op;
            info->op++;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
        default:
            return inherit(info);
            break;
            
    }
    
    return true;
}

