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

bool sSwitchNode*::compile(sSwitchNode* self, sInfo* info)
{
    sBlock* block = self.mBlock;
    
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    if(!expression_node.compile->(info)) {
        return false;
    }
    
    CVALUE* conditional_value = get_value_from_stack(-1, info);

    free_right_value_objects(info);
    
    add_come_code(info, "switch (%s) {\n", conditional_value.c_value);
    dec_stack_ptr(1, info);

    transpile_block(block, info).catch {
        return false;
    }

    add_come_code(info, "}\n");
    
    transpiler_clear_last_code(info);

    return TRUE;
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
  string mName;
  
  int sline;
  string sname;
};


sCaseNode*% sCaseNode*::initialize(sCaseNode*% self, string name, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mName = string(name);

    return self;
}

bool sCaseNode*::compile(sCaseNode* self, sInfo* info)
{
    add_come_code(info, "case %s:\n", self.mName);
    
    transpiler_clear_last_code(info);

    return TRUE;
}

int sCaseNode*::sline(sCaseNode* self, sInfo* info)
{
    return self.sline;
}

string sCaseNode*::sname(sCaseNode* self, sInfo* info)
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

bool sBreakNode*::compile(sBreakNode* self, sInfo* info)
{
    add_come_code(info, "break;\n");
    
    transpiler_clear_last_code(info);

    return TRUE;
}

int sBreakNode*::sline(sBreakNode* self, sInfo* info)
{
    return self.sline;
}

string sBreakNode*::sname(sBreakNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% string_node(char* buf, char* head, sInfo* info) version 12
{
    if(buf === "case") {
        string name = parse_word(info).catch {
            throw;
        }
        expected_next_character(':', info).catch { throw; }
        
        return new sNode(new sCaseNode(name, info));
    }
    else if(buf === "break") {
        return new sNode(new sBreakNode(info));
    }
    else if(buf === "switch") {
        expected_next_character('(', info).catch { throw; }
        
        /// expression ///
        sNode*% expression_node = expression(info).catch {
            throw;
        }
        expected_next_character(')', info).catch { throw; }
        
        sBlock*% block = parse_block(info).catch { throw; }
    
        return new sNode(new sSwitchNode(expression_node, block, info));
    }
    
    return inherit(buf, head ,info).catch {
        throw;
    }
}
