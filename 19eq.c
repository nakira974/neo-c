#include "common.h"

struct sPlusPlusNode
{
    sNode*% mLeft;
  
    int sline;
    string sname;
};

sPlusPlusNode*% sPlusPlusNode*::initialize(sPlusPlusNode*% self, sNode*% left, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;

    return self;
}

bool sPlusPlusNode*::compile(sPlusPlusNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s++", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sPlusPlusNode*::sline(sPlusPlusNode* self, sInfo* info)
{
    return self.sline;
}

string sPlusPlusNode*::sname(sPlusPlusNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% post_position_operator2(sNode*% node, sInfo* info) version 19
{
    if(*info->p == '+' && *(info->p+1) == '+') {
         info->p+=2;
         skip_spaces_and_lf(info);
        
         return new sNode(new sPlusPlusNode(node, info));
    }
    return (sNode*)null;
}
