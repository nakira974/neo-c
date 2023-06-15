#include "common.h"

struct sStoreNode
{
    string name;
    sNode*% right_value;
    bool alloc;
    int sline;
    string sname;
};

sStoreNode*% sStoreNode*::initialize(sStoreNode*% self, string name, bool alloc, sNode*%? right_value, sInfo* info)
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
    if(self.right_value == null) {
        sVar* var_ = get_variable_from_table(info.lv_table, self.name);
        
        if(var_ == null) {
            err_msg(info, "var not found(%s) at definition of variable\n", self.name);
            return true;
        }
        
        if(var_->mType == null) {
            err_msg(info, "require varible type(%s)\n", self.name);
            return true;
        }
        sType*% left_type = clone var_->mType;
        
        if(self.alloc) {
            add_come_code(info, "%s;\n", make_define_var(left_type, var_->mCValueName, info));
        }
        else {
            err_msg(info, "unexpected error. define(%s)\n", self.name);
            return false;
        }
        
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s", var_->mCValueName);
        come_value.type = clone left_type;
        come_value.var = var_;
        
        info.stack.push_back(come_value);
    }
    else {
        if(!self.right_value.compile->(info)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        sType* right_type = right_value.type;
        
        sVar* var_ = get_variable_from_table(info.lv_table, self.name);
        
        if(var_ == null) {
            err_msg(info, "var not found(%s) at storing variable\n", self.name);
            return true;
        }
        
        if(var_->mType == NULL) {
            var_->mType = clone right_type;
        }
        sType*% left_type = clone var_->mType;
        
        if(self.alloc) {
            add_come_code(info, "%s=%s;\n", make_define_var(left_type, var_->mCValueName, info), right_value->c_value);
        }
        else {
            add_come_code(info, "%s=%s;\n", var_->mCValueName, right_value->c_value);
        }
        
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s", var_->mCValueName);
        come_value.type = clone left_type;
        come_value.var = var_;
        
        info.stack.push_back(come_value);
    }
    
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


struct sLoadNode
{
    string name;
    int sline;
    string sname;
};

sLoadNode*% sLoadNode*::initialize(sLoadNode*% self, string name, sInfo* info)
{
    self.name = string(name);
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sLoadNode*::compile(sLoadNode* self, sInfo* info)
{
    sVar* var_ = get_variable_from_table(info.lv_table, self.name);
    
    if(var_ == null) {
        err_msg(info, "var not found(%s) at loading variable\n", self.name);
        return true;
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s", var_->mCValueName);
    come_value.type = clone var_->mType;
    come_value.var = var_;
    
    info.stack.push_back(come_value);
    
    return true;
}

int sLoadNode*::sline(sLoadNode* self, sInfo* info)
{
    return self.sline;
}

string sLoadNode*::sname(sLoadNode* self, sInfo* info)
{
    return string(self.sname);
}

bool is_type_name(char* buf, sInfo* info)
{
    sClass* klass = info.classes[buf];
    
    return klass || buf === "const" || buf === "register" || buf === "static" || buf === "volatile" || buf === "unsigned" || buf === "immutable" || buf === "mutable";

}

sVar*% sVar*::initialize(sVar*% self, char* name, sType* type, sInfo* info)
{
    self->mName = string(name);
    self->mType = clone type;
    
    self->mGlobal = info->block_level == 0;
    self->mCValueName = xsprintf("%s_%d", name, info->block_level);
    
    self->mBlockLevel = info->block_level;
    self->mAllocaValue = false;
    self->mFunctionParam = false;
    self->mNoFree = false;
    
    return self;
}

exception sNode*% string_node(char* buf, char* head, sInfo* info) version 7
{
    sVar* var_ = get_variable_from_table(info.lv_table, buf);
    bool is_type_name_flag = is_type_name(buf, info);
    
    if(var_ && *info->p == '=' && *(info.p + 1) != '=') {
        info.p++;
        skip_spaces_and_lf(info);
        
        sNode*% right_value = expression(info).catch {
            throw;
        }
        
        return new sNode(new sStoreNode(string(buf)@name, false@alloc, right_value, info));
    }
    else if(var_ && *info->p != '(') {
        return new sNode(new sLoadNode(string(buf)@name, info));
    }
    else if(is_type_name_flag && *info->p != '(') {
        info.p.p = head;
        
        var type, name = parse_type(info, true@parse_variable_name).catch {
            throw;
        }
        
        info.lv_table.mVars.insert(string(name), new sVar(name, type, info));
        
        if(*info->p == '=') {
            info.p++;
            skip_spaces_and_lf(info);
            
            sNode*% right_value = expression(info).catch {
                throw;
            }
            
            return new sNode(new sStoreNode(name, true@alloc, right_value, info));
        }
        else {
            return new sNode(new sStoreNode(name, true@alloc, null!, info));
        }
    }
    
    return inherit(buf, head ,info).catch {
        throw;
    }
}
