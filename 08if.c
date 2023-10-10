#include "common.h"

struct sIfNode
{
  sNode*% mExpressionNode;
  sBlock*% mIfBlock;
  list<sNode*%>*% mElifExpressionNodes;
  list<sBlock*%>*% mElifBlocks;
  int mElifNum;
  sBlock*% mElseBlock;
  
  int sline;
  string sname;
};


sIfNode*% sIfNode*::initialize(sIfNode*% self, sNode*% expression_node, sBlock* if_block, list<sNode*%>* elif_expression_nodes, list<sBlock*%>* elif_blocks, int elif_num, sBlock*? else_block, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mExpressionNode = clone expression_node;
    self.mIfBlock = clone if_block;
    self.mElifExpressionNodes = clone elif_expression_nodes;
    self.mElifBlocks = clone elif_blocks;
    self.mElifNum = elif_num;
    
    if(else_block) {
        self.mElseBlock = clone else_block;
    }
    else {
        self.mElseBlock = null;
    }

    return self;
}

bool sIfNode*::terminated()
{
    return true;
}

bool sIfNode*::compile(sIfNode* self, sInfo* info)
{
    sBlock* else_block = self.mElseBlock;
    int elif_num = self.mElifNum;
    
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    if(!expression_node.compile->(info)) {
        return false;
    }
    

    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);

//    free_right_value_objects(info);

    sBlock* if_block = self.mIfBlock;
    
    add_come_code(info, "if(%s) {\n", conditional_value.c_value);

    transpile_block(if_block, null, null, info);
    
    add_come_code(info, "}\n");

    //// elif ///
    if(elif_num > 0) {
        for(int i=0; i<elif_num; i++) {
            sNode* expression_node2 = self.mElifExpressionNodes[i];

            if(!expression_node2.compile->(info)) {
                return false;
            }

            CVALUE*% conditional_value = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);

            //free_right_value_objects(info);

            sBlock* elif_node_block = self.mElifBlocks[i];

            add_come_code(info, "else if(%s) {\n", conditional_value.c_value);
            
            transpile_block(elif_node_block, null, null, info);

            add_come_code(info, "}\n");
        }
    }

    if(else_block) {
        add_come_code(info, "else {\n");

        transpile_block(else_block, null, null, info);
        
        add_come_code(info, "}\n");
    }
    
    transpiler_clear_last_code(info);

    return true;
}

int sIfNode*::sline(sIfNode* self, sInfo* info)
{
    return self.sline;
}

string sIfNode*::sname(sIfNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 8
{
    if(buf === "if") {
        string sname = clone info->sname;
        int sline = info->sline;
        
        parse_sharp(info);
    
        expected_next_character('(', info);
    
        /// expression ///
        sNode*% expression_node = expression(info);
        
        expected_next_character(')', info);
        parse_sharp(info);
    
        sBlock*% if_block = parse_block(info);
        
        list<sNode*%>*% elif_expression_nodes = new list<sNode*%>();
    
        list<sBlock*%>*% elif_blocks = new list<sBlock*%>();
    
        int elif_num = 0;
    
        sBlock*% else_block = null;
    
        while(1) {
            char* saved_p = info->p;
            int saved_sline = info->sline;
            parse_sharp(info);
    
            /// else ///
            if(!xisalpha(*info->p)) {
                break;
            }
            parse_sharp(info);
            string buf = parse_word(info);
            parse_sharp(info);
    
            if(buf === "else") {
                if(parsecmp("if", info)) {
                    parse_sharp(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp(info);
    
                    expected_next_character('(', info);
    
                    /// expression ///
                    sNode*% expression_node = expression(info);
                    
                    elif_expression_nodes.push_back(expression_node);
    
                    expected_next_character(')', info);
                    parse_sharp(info);
    
                    
                    sBlock*% elif_block = parse_block(info);
                    
                    elif_blocks.push_back(elif_block);
    
                    elif_num++;
                }
                else {
                    else_block = parse_block(info);
                    break;
                }
            }
            else {
                info->p = saved_p;
                info->sline = saved_sline;
                break;
            }
        };
    
        sNode*% result = new sNode(new sIfNode(expression_node, if_block, elif_expression_nodes, elif_blocks, elif_num, else_block, info));
        
        return result;
    }
    
    return inherit(buf, head,head_sline, info);
}
