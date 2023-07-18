#include "common.h"

struct sCurrentNode {
    int sline;
    string sname;
};

sCurrentNode*% sCurrentNode*::initialize(sCurrentNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCurrentNode*::sline(sCurrentNode* self, sInfo* info)
{
    return self.sline;
}

string sCurrentNode*::sname(sCurrentNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCurrentNode*::compile(sCurrentNode* self, sInfo* info)
{
    string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
    info->current_stack_num++;
    sClass*% current_stack = new sClass(name: class_name, struct_:true);
    
    sVarTable* vtable = info->lv_table;
    
    while(vtable) {
        foreach(it, vtable.mVars) {
            char* key = it;
            sVar* value = vtable.mVars[key];
            
            sType*% type2 = clone value.mType;
            
            type2.mPointerNum++;
            
            tuple2<string, sType*%>*% item = (value.mCValueName, type2);
            
            current_stack.mFields.push_back(item);
        }
        
        vtable = vtable->mParent;
    }
    
    define_struct(current_stack, info);
    
    info.classes.insert(class_name, current_stack);
    
    static int num_current_stack = 0;
    num_current_stack++;
    add_come_code_at_function_head(info, "struct %s __current_stack%d__;\n", class_name, num_current_stack);
    
    vtable = info->lv_table;
    
    while(vtable) {
        foreach(it, vtable.mVars) {
            char* key = it;
            sVar* value = vtable.mVars[key];
            
            sType*% type2 = clone value.mType;
            
            tuple2<string, sType*%>*% item = (value.mCValueName, type2);
            
            if(type2->mClass->mName === "lambda") {
                add_come_code(info, "__current_stack%d__.%s = %s;\n", num_current_stack, value.mCValueName, value.mCValueName);
            }
            else {
                add_come_code(info, "__current_stack%d__.%s = &%s;\n", num_current_stack, value.mCValueName, value.mCValueName);
            }
        }
        
        vtable = vtable->mParent;
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("&__current_stack%d__", num_current_stack);
    come_value.type = new sType(class_name, info);
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

exception sNode*% string_node(char* buf, char* head, sInfo* info) version 23
{
    if(buf === "__current__") {
        return new sNode(new sCurrentNode(info));
    }
    
    return inherit(buf, head ,info).catch {
        throw;
    }
}

