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

    transpile_block(block, null, null, info);
    
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    if(!expression_node.compile->(info)) {
        return false;
    }

    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    static int num_while_condtional = 0;
    add_come_code_at_function_head(info, "_Bool _do_while_condtional%d;\n", ++num_while_condtional);

    add_come_code(info, "} while(_do_while_condtional%d=%s,", num_while_condtional, conditional_value.c_value);
    free_right_value_objects(info, comma:true);
    add_come_code(info, "_do_while_condtional%d);\n", num_while_condtional);
    
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

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 10
{
    if(buf === "do") {
        string sname = clone info->sname;
        int sline = info->sline;
    
        sBlock*% block = parse_block(info);
        
        string buf2 = parse_word(info);
        
        if(buf2 !== "while") {
            err_msg(info, "require while");
            exit(2);
        }
    
        expected_next_character('(', info);
    
        /// expression ///
        sNode*% expression_node = expression(info);
        
        expected_next_character(')', info);
    
        return new sNode(new sDoWhileNode(expression_node, block, info));
    }
    
    return inherit(buf, head,head_sline, info);
}
