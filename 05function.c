#include "common.h"

exception int compile_block(sBlock* block, sInfo* info)
{
    sVarTable* old_table = info->lv_table;
    info->lv_table = block->mLVTable;
    
    int nest = info->come_nest;
    info->come_nest++;

    if(block->mNodes.length() == 0) {
        free_right_value_objects(info);
        info->type = new sType("void");
    }
    else {
        bool last_expression_is_return = false;
        int i;
        foreach(node, block->mNodes) {
            info.module.mLastCode = null;
            
            LVALUE llvm_value;
            
            string sname = clone info->sname;
            int sline = info->sline;

            xstrncpy(info->sname, gNodes[node].mSName, PATH_MAX);
            info->sline = gNodes[node].mLine;

            node.compile->(info) {
                info->pinfo->lv_table = old_table;
                throw;
            }
    
            add_last_code_to_source(info);

            if(!last_expression_is_return) {
                free_right_value_objects(info);
            }

            info->sname = sname;
            info->sline = sline;

//            arrange_stack(info, stack_num_before);
        }
    }

    free_objects(info->pinfo->lv_table, info);
    
    info->pinfo->lv_table = old_table;
    info->come_nest = nest;
    
    return TRUE;
}
