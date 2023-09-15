#include "common.h"

struct sWhileNode
{
  sNode*% mExpressionNode;
  sBlock*% mBlock;
  
  int sline;
  string sname;
};


sWhileNode*% sWhileNode*::initialize(sWhileNode*% self, sNode*% expression_node, sBlock* block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mExpressionNode = clone expression_node;
    self.mBlock = clone block;

    return self;
}

bool sWhileNode*::terminated()
{
    return true;
}

bool sWhileNode*::compile(sWhileNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    if(!expression_node.compile->(info)) {
        return false;
    }

    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);

    free_right_value_objects(info);

    sBlock* block = self.mBlock;
    
    add_come_code(info, "while(%s) {\n", conditional_value.c_value);

    transpile_block(block, null!, null!, info).catch {
        return false;
    }
    
    add_come_code(info, "}\n");
    
    transpiler_clear_last_code(info);

    return true;
}

int sWhileNode*::sline(sWhileNode* self, sInfo* info)
{
    return self.sline;
}

string sWhileNode*::sname(sWhileNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 9
{
    if(buf === "while") {
        string sname = clone info->sname;
        int sline = info->sline;
    
        expected_next_character('(', info) throws;
    
        /// expression ///
        sNode*% expression_node = expression(info) throws;
        
        expected_next_character(')', info) throws;
    
        sBlock*% block = parse_block(info) throws;
    
        return new sNode(new sWhileNode(expression_node, block, info));
    }
    
    return inherit(buf, head,head_sline, info) throws;
}
