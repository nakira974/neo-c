#include "common.h"

struct sNullNode
{
  int sline;
  string sname;
};


sNullNode*% sNullNode*::initialize(sNullNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}

bool sNullNode*::compile(sNullNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("((void*)0)");
    come_value.type = new sType("void*", info);
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sNullNode*::sline(sNullNode* self, sInfo* info)
{
    return self.sline;
}

string sNullNode*::sname(sNullNode* self, sInfo* info)
{
    return string(self.sname);
}


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
    
    come_value.c_value = xsprintf("%s+%s", left_value.c_value, right_value.c_value);
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
    
    come_value.c_value = xsprintf("%s-%s", left_value.c_value, right_value.c_value);
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
    
    come_value.c_value = xsprintf("%s*%s", left_value.c_value, right_value.c_value);
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
    
    come_value.c_value = xsprintf("%s/%s", left_value.c_value, right_value.c_value);
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
    
    come_value.c_value = xsprintf("%s%%%s", left_value.c_value, right_value.c_value);
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

struct sLShiftNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sLShiftNode*% sLShiftNode*::initialize(sLShiftNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sLShiftNode*::compile(sLShiftNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s<<%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sLShiftNode*::sline(sLShiftNode* self, sInfo* info)
{
    return self.sline;
}

string sLShiftNode*::sname(sLShiftNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sRShiftNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sRShiftNode*% sRShiftNode*::initialize(sRShiftNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sRShiftNode*::compile(sRShiftNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s>>%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sRShiftNode*::sline(sRShiftNode* self, sInfo* info)
{
    return self.sline;
}

string sRShiftNode*::sname(sLShiftNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sGtEqNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sGtEqNode*% sGtEqNode*::initialize(sGtEqNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sGtEqNode*::compile(sGtEqNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s>=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sGtEqNode*::sline(sGtEqNode* self, sInfo* info)
{
    return self.sline;
}

string sGtEqNode*::sname(sGtEqNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLtEqNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sLtEqNode*% sLtEqNode*::initialize(sLtEqNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sLtEqNode*::compile(sLtEqNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s<=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sLtEqNode*::sline(sLtEqNode* self, sInfo* info)
{
    return self.sline;
}

string sLtEqNode*::sname(sLtEqNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLtNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sLtNode*% sLtNode*::initialize(sLtNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sLtNode*::compile(sLtNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s<%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sLtNode*::sline(sLtNode* self, sInfo* info)
{
    return self.sline;
}

string sLtNode*::sname(sLtNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sGtNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sGtNode*% sGtNode*::initialize(sGtNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sGtNode*::compile(sGtNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s<%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sGtNode*::sline(sGtNode* self, sInfo* info)
{
    return self.sline;
}

string sGtNode*::sname(sGtNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sEqNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sEqNode*% sEqNode*::initialize(sEqNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sEqNode*::compile(sEqNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s==%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sEqNode*::sline(sEqNode* self, sInfo* info)
{
    return self.sline;
}

string sEqNode*::sname(sEqNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sNotEqNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sNotEqNode*% sNotEqNode*::initialize(sNotEqNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sNotEqNode*::compile(sNotEqNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s==%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sNotEqNode*::sline(sNotEqNode* self, sInfo* info)
{
    return self.sline;
}

string sNotEqNode*::sname(sNotEqNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sEq2Node
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sEq2Node*% sEq2Node*::initialize(sEq2Node*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sEq2Node*::compile(sEq2Node* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s==%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sEq2Node*::sline(sEq2Node* self, sInfo* info)
{
    return self.sline;
}

string sEq2Node*::sname(sEq2Node* self, sInfo* info)
{
    return string(self.sname);
}

struct sNotEq2Node
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sNotEq2Node*% sNotEq2Node*::initialize(sNotEq2Node*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sNotEq2Node*::compile(sNotEq2Node* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s==%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sNotEq2Node*::sline(sNotEq2Node* self, sInfo* info)
{
    return self.sline;
}

string sNotEq2Node*::sname(sNotEq2Node* self, sInfo* info)
{
    return string(self.sname);
}

struct sAndNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sAndNode*% sAndNode*::initialize(sAndNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sAndNode*::compile(sAndNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s&%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sAndNode*::sline(sAndNode* self, sInfo* info)
{
    return self.sline;
}

string sAndNode*::sname(sAndNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sXOrNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sXOrNode*% sXOrNode*::initialize(sXOrNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sXOrNode*::compile(sXOrNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s^%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sXOrNode*::sline(sXOrNode* self, sInfo* info)
{
    return self.sline;
}

string sXOrNode*::sname(sXOrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sOrNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};

sOrNode*% sOrNode*::initialize(sOrNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sOrNode*::compile(sOrNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s|%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sOrNode*::sline(sOrNode* self, sInfo* info)
{
    return self.sline;
}

string sOrNode*::sname(sOrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sAndAndNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};

sAndAndNode*% sAndAndNode*::initialize(sAndAndNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sAndAndNode*::compile(sAndAndNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s|%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sAndAndNode*::sline(sAndAndNode* self, sInfo* info)
{
    return self.sline;
}

string sAndAndNode*::sname(sAndAndNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sOrOrNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};

sOrOrNode*% sOrOrNode*::initialize(sOrOrNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sOrOrNode*::compile(sOrOrNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s|%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sOrOrNode*::sline(sOrOrNode* self, sInfo* info)
{
    return self.sline;
}

string sOrOrNode*::sname(sOrOrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sCommaNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sCommaNode*% sCommaNode*::initialize(sCommaNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sCommaNode*::compile(sCommaNode* self, sInfo* info)
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
    
    come_value.c_value = xsprintf("%s,%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sCommaNode*::sline(sCommaNode* self, sInfo* info)
{
    return self.sline;
}

string sCommaNode*::sname(sCommaNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sConditionalNode
{
  sNode*% mValue1;
  sNode*% mValue2;
  sNode*% mValue3;
  
  int sline;
  string sname;
};


sConditionalNode*% sConditionalNode*::initialize(sConditionalNode*% self, sNode*% value1, sNode*% value2, sNode*% value3, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mValue1 = clone value1;
    self.mValue2 = clone value2;
    self.mValue3 = clone value3;

    return self;
}

bool sConditionalNode*::compile(sConditionalNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* value1 = self.mValue1;

    if(!value1.compile->(info)) {
        return false;
    }
    
    CVALUE*% value1_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* value2 = self.mValue2;

    if(!value2.compile->(info)) {
        return false;
    }
    
    CVALUE*% value2_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* value3 = self.mValue3;

    if(!value3.compile->(info)) {
        return false;
    }
    
    CVALUE*% value3_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s?%s:%s", value1_value.c_value, value2_value.c_value, value3_value.c_value);
    come_value.type = clone value1_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return TRUE;
}

int sConditionalNode*::sline(sConditionalNode* self, sInfo* info)
{
    return self.sline;
}

string sConditionalNode*::sname(sConditionalNode* self, sInfo* info)
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

            sNode*% right = mult_exp(info).catch {
                throw;
            }
            
            return new sNode(new sMultNode(node, right, info));
        }
        else if(*info->p == '/' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = mult_exp(info).catch {
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

            sNode*% right = add_exp(info).catch {
                throw;
            }
            
            return new sNode(new sAddNode(node, right, info));
        }
        else if(*info->p == '-' && *(info->p+1) != '=' && *(info->p+1) != '-' && *(info->p+1) != '>') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = add_exp(info).catch {
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

exception sNode*% shift_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = add_exp(info).catch {
        throw;
    }
    
    parse_sharp(info)

    while(*info->p) {
        if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) != '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info).catch {
                throw;
            }
            
            return new sNode(new sLShiftNode(node, right, info));
        }
        else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) != '=' && *(info->p+2) != '>') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info).catch {
                throw;
            }
            
            return new sNode(new sRShiftNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);
    
    return node;
}

exception sNode*% comparison_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = shift_exp(info).catch {
        throw;
    }
    
    parse_sharp(info)

    while(*info->p) {
        if(*info->p == '>' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info).catch {
                throw;
            }
            
            return new sNode(new sGtEqNode(node, right, info));
        }
        else if(*info->p == '<' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info).catch {
                throw;
            }
            
            return new sNode(new sLtEqNode(node, right, info));
        }
        else if(*info->p == '>' && *(info->p+1) != '>') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info).catch {
                throw;
            }
            
            return new sNode(new sGtNode(node, right, info));
        }
        else if(*info->p == '<' && *(info->p+1) != '<') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info).catch {
                throw;
            }
            
            return new sNode(new sLtNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);
    
    return node;
}

exception sNode*% eq_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = comparison_exp(info).catch {
        throw;
    }
    
    parse_sharp(info)

    while(*info->p) {
        if(*info->p == '=' && *(info->p+1) == '=' && *(info->p+2) == '=') {
            info->p+=3;
            skip_spaces_and_lf(info);

            sNode*% right = eq_exp(info).catch {
                throw;
            }
            
            return new sNode(new sEq2Node(node, right, info));
        }
        else if(*info->p == '=' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = eq_exp(info).catch {
                throw;
            }
            
            return new sNode(new sEqNode(node, right, info));
        }
        else if(*info->p == '!' && *(info->p+1) == '=' && *(info->p+2) == '=') {
            info->p+=3;
            skip_spaces_and_lf(info);

            sNode*% right = eq_exp(info).catch {
                throw;
            }
            
            return new sNode(new sNotEq2Node(node, right, info));
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = eq_exp(info).catch {
                throw;
            }
            
            return new sNode(new sNotEqNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);
    
    return node;
}

exception sNode*% and_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = eq_exp(info).catch {
        throw;
    }

    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) != '&' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = eq_exp(info).catch {
                throw;
            }

            return new sNode(new sAndNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

exception sNode*% xor_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = and_exp(info).catch {
        throw;
    }

    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '^' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = and_exp(info).catch {
                throw;
            }

            return new sNode(new sXOrNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

exception sNode*% or_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = xor_exp(info).catch {
        throw;
    }

    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '|' && *(info->p+1) != '=' && *(info->p+1) != '|') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = xor_exp(info).catch {
                throw;
            }

            return new sNode(new sOrNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

exception sNode*% andand_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = or_exp(info).catch {
        throw;
    }

    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = or_exp(info).catch {
                throw;
            }

            return new sNode(new sAndAndNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

exception sNode*% oror_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = andand_exp(info).catch {
        throw;
    }

    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = andand_exp(info).catch {
                throw;
            }

            return new sNode(new sOrOrNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

exception sNode*% comma_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = oror_exp(info).catch {
        throw;
    }
    
    parse_sharp(info);

    while(*info->p) {
        if(info.comma && *info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% node2 = oror_exp(info).catch {
                throw;
            }
            
            return new sNode(new sCommaNode(node, node2, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

exception sNode*% conditional_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = comma_exp(info).catch {
        throw;
    }
    
    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '?') {
            info->p++;
            skip_spaces_and_lf(info);

            parse_sharp(info);

            sNode*% value1;
            if(*info->p == ':') {
                value1 = new sNode(new sNullNode(info));
            }
            else {
                value1 = comma_exp(info).catch {
                    throw;
                }
            }

            parse_sharp(info);

            expected_next_character(':', info).catch { throw; }

            sNode*% value2 = comma_exp(info).catch {
                throw;
            }

            parse_sharp(info);

            return new sNode(new sConditionalNode(node, value1, value2, info));
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
    parse_sharp(info);
    skip_spaces_and_lf(info);
    sNode*% node = conditional_exp(info).catch {
        throw
    }
    
    return node;
}

exception sNode*% string_node(char* buf, char* head, sInfo* info) version 13
{
    if(buf === "null") {
        return new sNode(new sNullNode(info));
    }
    
    return inherit(buf, head ,info).catch {
        throw;
    }
}
