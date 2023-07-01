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
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

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

struct sMinusMinusNode
{
    sNode*% mLeft;
  
    int sline;
    string sname;
};

sMinusMinusNode*% sMinusMinusNode*::initialize(sMinusMinusNode*% self, sNode*% left, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;

    return self;
}

bool sMinusMinusNode*::compile(sMinusMinusNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s--", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sMinusMinusNode*::sline(sMinusMinusNode* self, sInfo* info)
{
    return self.sline;
}

string sMinusMinusNode*::sname(sMinusMinusNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sPlusEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sPlusEqualNode*% sPlusEqualNode*::initialize(sPlusEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sPlusEqualNode*::compile(sPlusEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s+=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sPlusEqualNode*::sline(sPlusEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sPlusEqualNode*::sname(sPlusEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sMinusEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sMinusEqualNode*% sMinusEqualNode*::initialize(sMinusEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sMinusEqualNode*::compile(sMinusEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s-=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sMinusEqualNode*::sline(sMinusEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sMinusEqualNode*::sname(sMinusEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sMultEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sMultEqualNode*% sMultEqualNode*::initialize(sMultEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sMultEqualNode*::compile(sMultEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s*=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sMultEqualNode*::sline(sMultEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sMultEqualNode*::sname(sMultEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sDivEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sDivEqualNode*% sDivEqualNode*::initialize(sDivEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sDivEqualNode*::compile(sDivEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s/=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sDivEqualNode*::sline(sDivEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sDivEqualNode*::sname(sDivEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sModEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sModEqualNode*% sModEqualNode*::initialize(sModEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sModEqualNode*::compile(sModEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s%%=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sModEqualNode*::sline(sModEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sModEqualNode*::sname(sModEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLShifEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sLShifEqualNode*% sLShifEqualNode*::initialize(sLShifEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sLShifEqualNode*::compile(sLShifEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s<<=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sLShifEqualNode*::sline(sLShifEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sLShifEqualNode*::sname(sLShifEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sRShiftEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sRShiftEqualNode*% sRShiftEqualNode*::initialize(sRShiftEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sRShiftEqualNode*::compile(sRShiftEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s>>=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sRShiftEqualNode*::sline(sRShiftEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sRShiftEqualNode*::sname(sRShiftEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sXorEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sXorEqualNode*% sXorEqualNode*::initialize(sXorEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sXorEqualNode*::compile(sXorEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s^=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sXorEqualNode*::sline(sXorEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sXorEqualNode*::sname(sXorEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sOrEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sOrEqualNode*% sOrEqualNode*::initialize(sOrEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sOrEqualNode*::compile(sOrEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s|=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sOrEqualNode*::sline(sOrEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sOrEqualNode*::sname(sOrEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sAndEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sAndEqualNode*% sAndEqualNode*::initialize(sAndEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sAndEqualNode*::compile(sAndEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s&=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sAndEqualNode*::sline(sAndEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sAndEqualNode*::sname(sAndEqualNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sExpEqualNode
{
    sNode*% mLeft;
    sNode*% mRight;
  
    int sline;
    string sname;
};

sExpEqualNode*% sExpEqualNode*::initialize(sExpEqualNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sExpEqualNode*::compile(sExpEqualNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right = self.mRight;
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sExpEqualNode*::sline(sExpEqualNode* self, sInfo* info)
{
    return self.sline;
}

string sExpEqualNode*::sname(sExpEqualNode* self, sInfo* info)
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
    else if(*info->p == '-' && *(info->p+1) == '-') {
         info->p+=2;
         skip_spaces_and_lf(info);
        
         return new sNode(new sMinusMinusNode(node, info));
    }
    else if(*info->p == '+' && *(info->p+1) == '=') {
         info->p+=2;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sPlusEqualNode(node, right_node, info));
    }
    else if(*info->p == '-' && *(info->p+1) == '=') {
         info->p+=2;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sMinusEqualNode(node, right_node, info));
    }
    else if(*info->p == '*' && *(info->p+1) == '=') {
         info->p+=2;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sMultEqualNode(node, right_node, info));
    }
    else if(*info->p == '/' && *(info->p+1) == '=') {
         info->p+=2;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sDivEqualNode(node, right_node, info));
    }
    else if(*info->p == '%' && *(info->p+1) == '=') {
         info->p+=2;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sModEqualNode(node, right_node, info));
    }
    else if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=') {
         info->p+=3;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sLShifEqualNode(node, right_node, info));
    }
    else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=') {
         info->p+=3;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sRShiftEqualNode(node, right_node, info));
    }
    else if(*info->p == '^' && *(info->p+1) == '=') {
         info->p+=2;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sXorEqualNode(node, right_node, info));
    }
    else if(*info->p == '&' && *(info->p+1) == '=') {
         info->p+=2;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sAndEqualNode(node, right_node, info));
    }
    else if(*info->p == '|' && *(info->p+1) == '=') {
         info->p+=2;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sOrEqualNode(node, right_node, info));
    }
    else if(*info->p == '=' && *(info->p+1) != '=') {
         info->p++;
         skip_spaces_and_lf(info);
         
         sNode*% right_node = expression(info).catch {
             throw;
         }
        
         return new sNode(new sExpEqualNode(node, right_node, info));
    }
    
    return (sNode*)null;
}
