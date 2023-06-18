#include "common.h"

struct sForNode
{
  sNode*% mExpressionNode;
  sNode*% mExpressionNode2;
  sNode*% mExpressionNode3;
  sBlock*% mBlock;
  sVarTable*% mForBlockVarTable;
  
  int sline;
  string sname;
};


sForNode*% sForNode*::initialize(sForNode*% self, sNode*% expression_node, sNode*% expression_node2, sNode*% expression_node3, sBlock* block, sVarTable*% for_block_var_table, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mExpressionNode = clone expression_node;
    self.mExpressionNode2 = clone expression_node2;
    self.mExpressionNode3 = clone expression_node3;
    self.mBlock = clone block;
    self.mForBlockVarTable = for_block_var_table;

    return self;
}

bool sForNode*::compile(sForNode* self, sInfo* info)
{
    sBlock* block = self.mBlock;
    
    sVarTable* lv_table = info->lv_table;
    info->lv_table = block->mVarTable;
    
    add_come_code(info, "for(\n");
    
    /// compile expression ///
    sNode* expression_node = self.mExpressionNode;

    if(!expression_node.compile->(info)) {
        return false;
    }
    
    add_last_code_to_source(info);
    
    CVALUE*% conditional_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);

    free_right_value_objects(info);
    
    /// compile expression ///
    sNode* expression_node2 = self.mExpressionNode2;

    if(!expression_node2.compile->(info)) {
        return false;
    }
    
    add_last_code_to_source(info);
    
    CVALUE*% conditional_value2 = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);

    free_right_value_objects(info);
    
    sNode* expression_node3 = self.mExpressionNode3;

    if(!expression_node3.compile->(info)) {
        return false;
    }
    
    add_last_code_to_source_without_semicolon(info);
    
    CVALUE*% conditional_value3 = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);

    free_right_value_objects(info);
    
    add_come_code(info, "){\n");

    transpile_block(block, info).catch {
        return false;
    }

    add_come_code(info, "}\n");
    
    transpiler_clear_last_code(info);
    info->lv_table = lv_table;

    return TRUE;
}

int sForNode*::sline(sForNode* self, sInfo* info)
{
    return self.sline;
}

string sForNode*::sname(sForNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% string_node(char* buf, char* head, sInfo* info) version 11
{
    if(buf === "for") {
        sVarTable* lv_table = info->lv_table;
        sVarTable*% for_block_var_table = new sVarTable(global:false, parent:info.lv_table);
        
        info->lv_table = for_block_var_table;
        
        expected_next_character('(', info).catch { throw; }
        
        /// expression ///
        sNode*% expression_node = expression(info).catch {
            throw;
        }
        expected_next_character(';', info).catch { throw; }
        sNode*% expression_node2 = expression(info).catch {
            throw;
        }
        expected_next_character(';', info).catch { throw; }
        sNode*% expression_node3 = expression(info).catch {
            throw;
        }
        expected_next_character(')', info).catch { throw; }
        
        sBlock*% block = parse_block(null!, null!, info).catch { throw; }
        
        info->lv_table = lv_table;
    
        return new sNode(new sForNode(expression_node, expression_node2, expression_node3, block, for_block_var_table, info));
    }
    
    return inherit(buf, head ,info).catch {
        throw;
    }
}
