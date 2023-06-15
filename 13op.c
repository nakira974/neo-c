#include "common.h"

struct sAddNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sAddNode*% sAddNode*::initialize(sAddNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sAddNode*::compile(sAddNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s+%s)", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sAddNode*::sline(sAddNode* self, sInfo* info)
{
    return self.sline;
}

string sAddNode*::sname(sAddNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sSubNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sSubNode*% sSubNode*::initialize(sSubNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sSubNode*::compile(sSubNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s-%s)", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sSubNode*::sline(sSubNode* self, sInfo* info)
{
    return self.sline;
}

string sSubNode*::sname(sSubNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sMultNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sMultNode*% sMultNode*::initialize(sMultNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sMultNode*::compile(sMultNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s*%s)", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sMultNode*::sline(sMultNode* self, sInfo* info)
{
    return self.sline;
}

string sMultNode*::sname(sMultNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sDivNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sDivNode*% sDivNode*::initialize(sDivNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sDivNode*::compile(sDivNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s/%s)", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sDivNode*::sline(sDivNode* self, sInfo* info)
{
    return self.sline;
}

string sDivNode*::sname(sDivNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sModNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sModNode*% sModNode*::initialize(sModNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sModNode*::compile(sModNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s%%%s)", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sModNode*::sline(sModNode* self, sInfo* info)
{
    return self.sline;
}

string sModNode*::sname(sModNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% mult_exp(sInfo* info)
{
    sNode*% node = expression_node(info).catch {
        throw;
    }
    
    parse_sharp(info)

    while(*info->p) {
        if(*info->p == '*' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = expression_node(info).catch {
                throw;
            }
            
            return new sNode(new sMultNode(node, right, info));
        }
        else if(*info->p == '/' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = expression_node(info).catch {
                throw;
            }
            
            return new sNode(new sDivNode(node, right, info));
        }
        else if(*info->p == '%' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = expression_node(info).catch {
                throw;
            }
            
            return new sNode(new sModNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);
    
    return node;
}

exception sNode*% add_exp(sInfo* info)
{
    sNode*% node = mult_exp(info).catch {
        throw;
    }
    
    parse_sharp(info)

    while(*info->p) {
        if(*info->p == '+' && *(info->p+1) != '=' && *(info->p+1) != '+') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = mult_exp(info).catch {
                throw;
            }
            
            return new sNode(new sAddNode(node, right, info));
        }
        else if(*info->p == '-' && *(info->p+1) != '=' && *(info->p+1) != '-' && *(info->p+1) != '>') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = mult_exp(info).catch {
                throw;
            }
            
            return new sNode(new sSubNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);
    
    return node;
}

exception sNode*% expression(sInfo* info) version 13
{
    skip_spaces_and_lf(info);
    return add_exp(info).catch {
        throw
    }
}

