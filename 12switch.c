#include "common.h"

struct sSwitchNode
{
  sNode*% mExpressionNode;
  sBlock*% mBlock;
  
  int sline;
  string sname;
};


sSwitchNode*% sSwitchNode*::initialize(sSwitchNode*% self, sNode*% expression_node, sBlock* block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mExpressionNode = clone expression_node;
    self.mBlock = clone block;

    return self;
}

bool sSwitchNode*::terminated()
{
    return true;
}

bool sSwitchNode*::compile(sSwitchNode* self, sInfo* info)
{
    sBlock* block = self.mBlock;
    
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    if(!expression_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);

    free_right_value_objects(info);
    
    add_come_code(info, "switch (%s) {\n", conditional_value.c_value);

    transpile_block(block, null, null, info);

    add_come_code(info, "}\n");
    
    transpiler_clear_last_code(info);

    return true;
}

int sSwitchNode*::sline(sSwitchNode* self, sInfo* info)
{
    return self.sline;
}

string sSwitchNode*::sname(sSwitchNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sCaseNode
{
  sNode*% mNode;
  
  int sline;
  string sname;
};


sCaseNode*% sCaseNode*::initialize(sCaseNode*% self, sNode*% node, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mNode = clone node;

    return self;
}

bool sCaseNode*::terminated()
{
    return false;
}

bool sCaseNode*::compile(sCaseNode* self, sInfo* info)
{
    sNode* node = self.mNode;
    
    if(!node.compile->(info)) {
        return false;
    }
    
    CVALUE*% label_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    add_come_code(info, "case %s:\n", label_value.c_value);
    
    transpiler_clear_last_code(info);

    return true;
}

int sCaseNode*::sline(sCaseNode* self, sInfo* info)
{
    return self.sline;
}

string sCaseNode*::sname(sCaseNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sDefaultNode
{
  int sline;
  string sname;
};


sDefaultNode*% sDefaultNode*::initialize(sDefaultNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}

bool sDefaultNode*::terminated()
{
    return false;
}

bool sDefaultNode*::compile(sDefaultNode* self, sInfo* info)
{
    add_come_code(info, "default:\n");
    
    transpiler_clear_last_code(info);

    return true;
}

int sDefaultNode*::sline(sDefaultNode* self, sInfo* info)
{
    return self.sline;
}

string sDefaultNode*::sname(sDefaultNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sBreakNode
{
  int sline;
  string sname;
};


sBreakNode*% sBreakNode*::initialize(sBreakNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}

bool sBreakNode*::terminated()
{
    return false;
}

bool sBreakNode*::compile(sBreakNode* self, sInfo* info)
{
    add_come_code(info, "break;\n");
    
    transpiler_clear_last_code(info);

    return true;
}

int sBreakNode*::sline(sBreakNode* self, sInfo* info)
{
    return self.sline;
}

string sBreakNode*::sname(sBreakNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 12
{
    if(buf === "case") {
        sNode*% node = expression(info);
        expected_next_character(':', info);
        
        return new sNode(new sCaseNode(node, info));
    }
    else if(buf === "default") {
        expected_next_character(':', info);
        
        return new sNode(new sDefaultNode(info));
    }
    else if(buf === "break") {
        return new sNode(new sBreakNode(info));
    }
    else if(buf === "switch") {
        expected_next_character('(', info);
        
        /// expression ///
        sNode*% expression_node = expression(info);
        expected_next_character(')', info);
        
        sBlock*% block = parse_block(info);
    
        return new sNode(new sSwitchNode(expression_node, block, info));
    }
    
    return inherit(buf, head ,head_sline, info);
}
