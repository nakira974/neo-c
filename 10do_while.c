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

bool sDoWhileNode*::terminated()
{
    return true;
}

bool sDoWhileNode*::compile(sDoWhileNode* self, sInfo* info)
{
    sBlock* block = self.mBlock;
    
    add_come_code(info, "do {\n");

    transpile_block(block, null!, null!, info).catch {
        exit(2);
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

    return true;
}

int sDoWhileNode*::sline(sDoWhileNode* self, sInfo* info)
{
    return self.sline;
}

string sDoWhileNode*::sname(sDoWhileNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 10
{
    if(buf === "do") {
        string sname = clone info->sname;
        int sline = info->sline;
    
        sBlock*% block = parse_block(info) throws;
        
        string buf2 = parse_word(info) throws;
        
        if(buf2 !== "while") {
            err_msg(info, "require while");
            throw;
        }
    
        expected_next_character('(', info) throws;
    
        /// expression ///
        sNode*% expression_node = expression(info) throws;
        
        expected_next_character(')', info) throws;
    
        return new sNode(new sDoWhileNode(expression_node, block, info));
    }
    
    return inherit(buf, head,head_sline, info) throws;
}
