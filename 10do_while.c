#include "common.h"

struct sDoWhileNode
{
  sNode*% mExpressionNode;
  sBlock*% mBlock;
  
  int sline;
  string sname;
};


sDoWhileNode*% sDoWhileNode*::initialize(sDoWhileNode*% self, sNode*% expression_node, sBlock* block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mExpressionNode = clone expression_node;
    self.mBlock = clone block;

    return self;
}

bool sDoWhileNode*::compile(sDoWhileNode* self, sInfo* info)
{
    sBlock* block = self.mBlock;
    
    add_come_code(info, "do {\n");

    transpile_block(block, info).catch {
        return false;
    }
    
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    if(!expression_node.compile->(info)) {
        return false;
    }

    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);

    free_right_value_objects(info);

    add_come_code(info, "} while(%s);\n", conditional_value.c_value);
    
    transpiler_clear_last_code(info);

    return TRUE;
}

int sDoWhileNode*::sline(sDoWhileNode* self, sInfo* info)
{
    return self.sline;
}

string sDoWhileNode*::sname(sDoWhileNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% string_node(char* buf, char* head, sInfo* info) version 10
{
    if(buf === "do") {
        string sname = clone info->sname;
        int sline = info->sline;
    
        sBlock*% block = parse_block(null!, null!, info).catch { throw; }
        
        string buf2 = parse_word(info).catch {
            throw;
        }
        
        if(buf2 !== "while") {
            throw;
        }
    
        expected_next_character('(', info).catch { throw; }
    
        /// expression ///
        sNode*% expression_node = expression(info).catch {
            throw;
        }
        
        expected_next_character(')', info).catch { throw; }
    
        return new sNode(new sDoWhileNode(expression_node, block, info));
    }
    
    return inherit(buf, head ,info).catch {
        throw;
    }
}
