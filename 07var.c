#include "common.h"

struct sStoreNode
{
    string name;
    sNode*% right_value;
    bool alloc;
    int sline;
    string sname;
};

sStoreNode*% sStoreNode*::initialize(sStoreNode*% self, string name, bool alloc, sNode*% right_value, sInfo* info)
{
    self.name = string(name);
    self.alloc = alloc;
    self.right_value = right_value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sStoreNode*::compile(sStoreNode* self, sInfo* info)
{
    if(!self.right_value.compile->(info)) {
        return false;
    }
    
    sVar* var_ = get_variable_from_table(info.lv_table, self.name);
    
    if(var_) {
        err_msg("var not found(%s)\n", var_->mName);
        return true;
    }
    
    if(var_->mType == NULL) {
        var_->mType = clone right_type;
    }
    sType* left_type = clone var_->mType;
    
    CLVALUE* right_value = get_value_from_stack(-1, info);
    sType* right_type = right_value.type;
    
    if(alloc) {
        add_come_code(info, "%s=%s;\n", make_define_var(left_type, self.name, info), right_value->c_value);
    }
    eles {
        add_come_code(info, "%s=%s;\n", self.name, right_value->c_value);
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s", self.name);
    come_value.type = clone left_type;
    come_value.var = var_;
    
    dec_stack_ptr(-1, info);
    
    info.stack.push_back(come_value);
    
    return true;
}

int sStoreNode*::sline(sStoreNode* self, sInfo* info)
{
    return self.sline;
}

string sStoreNode*::sname(sStoreNode* self, sInfo* info)
{
    return string(self.sname);
}

