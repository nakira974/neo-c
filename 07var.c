#include "common.h"

struct sStoreNode
{
    string name;
    sNode*% right_value;
    sType*% type;
    bool alloc;
    int sline;
    string sname;
};

sStoreNode*% sStoreNode*::initialize(sStoreNode*% self, string name, sType*% type, bool alloc, sNode*%? right_value, sInfo* info)
{
    self.name = string(name);
    self.alloc = alloc;
    if(type) {
        self.type = clone type;
    }
    else {
        self.type = null;
    }
    self.right_value = right_value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sStoreNode*::compile(sStoreNode* self, sInfo* info)
{
    if(self.alloc) {
        sVar* var_ = info.lv_table.mVars[self.name];
        if(var_) {
            err_msg(info, "Already appended this var name(%s)", self.name);
            return false;
        }
        add_variable_to_table(self.name, self.type, info);
    }
    
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
            add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName, info));
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
        
        if(self.alloc && left_type->mClass->mStruct) {
            add_come_code(info, "memset(&%s, 0, sizeof(struct %s));\n", var_->mCValueName, left_type->mClass->mName);
        }
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
        
        CVALUE*% come_value = new CVALUE;
        
        if(left_type->mHeap && (self.alloc || left_type->mClass->mStruct)) {
            come_value.c_value = xsprintf("%s=come_increment_ref_count(%s)", var_->mCValueName, right_value.c_value);
            remove_object_from_right_values(right_value.c_value, info);
        }
        else {
            come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
        }
        come_value.type = clone left_type;
        come_value.var = var_;
        
        if(self.alloc) {
            add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName, info));
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
        else {
            add_come_last_code(info, "%s;\n", come_value.c_value);
        }
        
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


void add_variable_to_table(char* name, sType* type, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    bool global = info->block_level == 0;
    
    self->mGlobal = global;
    
    if(global) {
        self->mCValueName = string(name);
    }
    else {
        static int n = 0;
        self->mCValueName = xsprintf("%s_%d", name, n++);
    }
    
    self->mBlockLevel = info->block_level;
    self->mAllocaValue = false;
    self->mFunctionParam = false;
    self->mNoFree = false;
    
    info.lv_table.mVars.insert(string(name), self);
}

exception sNode*% string_node(char* buf, char* head, sInfo* info) version 7
{
    bool is_type_name_flag = is_type_name(buf, info);
    
    char* p = info.p.p;
    int sline = info.sline;
    
    buffer*% buf2 = new buffer();
    
    while(xisalnum(*info->p)) {
        buf2.append_char(*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    
    bool lambda_call_flag = false;
    bool define_function_flag = false;
    if(buf2.length() > 0 && *info->p == '(') {
        if(is_type_name_flag) {
            define_function_flag = true;
        }
    }
    
    info.p.p = p;
    info.sline = sline;
    
    if(define_function_flag) {
        return parse_function(info).catch {
            throw;
        }
    }
    else if(!is_type_name_flag && *info->p == '=' && *(info.p + 1) != '=') {
        info.p++;
        skip_spaces_and_lf(info);
        
        sNode*% right_value = expression(info).catch {
            throw;
        }
        
        return new sNode(new sStoreNode(string(buf)@name, null!, false@alloc, right_value, info));
    }
    else if(!is_type_name_flag && *info->p != '(') {
        sNode*% node = new sNode(new sLoadNode(string(buf)@name, info));
        
        node = post_position_operator(node, info).catch { throw };
        
        return node;
    }
    else if(is_type_name_flag && *info->p != '(') {
        info.p.p = head;
        
        var type, name = parse_type(info, true@parse_variable_name).catch {
            throw;
        }
        
        if(*info->p == '=') {
            info.p++;
            skip_spaces_and_lf(info);
            
            sNode*% right_value = expression(info).catch {
                throw;
            }
            
            return new sNode(new sStoreNode(name, type, true@alloc, right_value, info));
        }
        else {
            return new sNode(new sStoreNode(name, type, true@alloc, null!, info));
        }
    }
    
    return inherit(buf, head ,info).catch {
        throw;
    }
}
