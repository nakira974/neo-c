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
    if(self.right_value == null) {
        if(self.alloc) {
            sVar* var_ = info.lv_table.mVars[self.name];
            if(var_) {
                err_msg(info, "Already appended this var name(%s)", self.name);
                return false;
            }
            
            var type = solve_generics(self.type, info->generics_type, info).catch {
                return false;
            }
            
            add_variable_to_table(self.name, type, info);
        }
    
        sVar* var_ = get_variable_from_table(info.lv_table, self.name);
        
        if(var_ == null) {
            var_ = get_variable_from_table(info.gv_table, self.name);
            
            if(var_ == null) {
                err_msg(info, "var not found(%s) at definition of variable\n", self.name);
                return false;
            }
        }
        
        if(var_->mType == null) {
            err_msg(info, "require varible type(%s)\n", self.name);
            return false;
        }
        sType*% left_type = clone var_->mType;
        
        if(self.alloc) {
            add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName, info));
            add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(left_type, false@in_header, false@array_cast_pointer, info));
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
            var_->mType->mAllocaValue = true;
        }
    }
    else {
        if(!self.right_value.compile->(info)) {
            return false;
        }
        
        CVALUE*% right_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        sType* right_type = right_value.type;
        
        if(self.alloc) {
            sVar* var_ = info.lv_table.mVars[self.name];
            if(var_) {
                err_msg(info, "Already appended this var name(%s)", self.name);
                return false;
            }
            
            if(self.type == null) {
                add_variable_to_table(self.name, right_type, info);
            }
            else {
                var type = solve_generics(self.type, info->generics_type, info).catch {
                    return false;
                }
                
                add_variable_to_table(self.name, type, info);
            }
            
            var_ = get_variable_from_table(info.lv_table, self.name);
            
            add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(var_->mType, false@in_header, false@array_cast_pointer, info));
        }
        
        sClass* current_stack_frame_struct = info->current_stack_frame_struct;
        
        if(current_stack_frame_struct) {
            sVar* parent_var = get_variable_from_table(info.lv_table->mParent, self.name);
            
            if(parent_var != null) {
                CVALUE*% come_value = new CVALUE;
                
                sType* left_type = parent_var->mType;
                
                if(right_type->mHeap && !left_type->mHeap) {
                    err_msg(info, "require left type appended %");
                    return false;
                }
                
                if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mHeap && left_type->mHeap) {
                    add_come_code(info, "come_decrement_ref_count(*(parent->%s), 0, 0); }\n", parent_var->mCValueName);
                    come_value.c_value = xsprintf("(*(parent->%s))=come_increment_ref_count(%s)", parent_var->mCValueName, right_value.c_value);
                    
                    int right_value_id = get_right_value_id_from_obj(right_value.c_value);
                    
                    if(right_value_id != -1) {
                        remove_object_from_right_values(right_value_id, info);
                    }
                }
                else {
                    come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                }
                
                come_value.type = clone left_type;
                come_value.var = null;
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
                
                info.stack.push_back(come_value);
                
                return true;
            }
        }
        
        sVar* var_ = get_variable_from_table(info.lv_table, self.name);
        
        if(var_ == null) {
            var_ = get_variable_from_table(info.gv_table, self.name);
            
            if(var_ == null) {
                err_msg(info, "var not found(%s) at storing variable\n", self.name);
                return false;
            }
        }
        
        if(var_->mType == NULL) {
            var_->mType = clone right_type;
        }
        sType*% left_type = clone var_->mType;
        
        CVALUE*% come_value = new CVALUE;
        
        if(right_type->mHeap && !left_type->mHeap) {
            err_msg(info, "require left type appended %");
            return false;
        }
        
        if(right_type->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
        {
            if(self.alloc) {
                come_value.c_value = xsprintf("%s=come_increment_ref_count(%s)", var_->mCValueName, right_value.c_value);
            }
            else {
                add_come_code(info, "come_decrement_ref_count(%s, 0, 0);\n", var_->mCValueName);
                come_value.c_value = xsprintf("%s=come_increment_ref_count(%s)", var_->mCValueName, right_value.c_value);
            }
            int right_value_id = get_right_value_id_from_obj(right_value.c_value);
            
            if(right_value_id != -1) {
                remove_object_from_right_values(right_value_id, info);
            }
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
    sClass* current_stack_frame_struct = info->current_stack_frame_struct;
    
    if(current_stack_frame_struct) {
        sVar* parent_var = get_variable_from_table(info.lv_table->mParent, self.name);
        
        if(parent_var != null) {
            CVALUE*% come_value = new CVALUE;
            
            sType* type = parent_var->mType;
            
            come_value.c_value = xsprintf("(*(parent->%s))", parent_var->mCValueName);
            
            come_value.type = clone type;
            come_value.var = null;
            
            add_come_last_code(info, "%s;\n", come_value.c_value);
            
            info.stack.push_back(come_value);
            
            return true;
        }
    }
    
    sVar* var_ = get_variable_from_table(info.lv_table, self.name);
    
    if(var_ == null) {
        var_ = get_variable_from_table(info.gv_table, self.name);
        
        if(var_ == null) {
            err_msg(info, "var not found(%s) at loading variable\n", self.name);
            return false;
        }
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

struct sFunLoadNode
{
    string name;
    int sline;
    string sname;
};

sFunLoadNode*% sFunLoadNode*::initialize(sFunLoadNode*% self, string name, sInfo* info)
{
    self.name = string(name);
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sFunLoadNode*::compile(sFunLoadNode* self, sInfo* info)
{
    sFun* fun = info.funcs[self.name]
    
    if(fun == null) {
        err_msg(info, "fun not found(%s) at loading variable\n", self.name);
        return false;
    }
    else {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s", fun->mName);
        come_value.type = fun->mLambdaType;
        come_value.var = null;
        
        info.stack.push_back(come_value);
    }
    
    return true;
}

int sFunLoadNode*::sline(sFunLoadNode* self, sInfo* info)
{
    return self.sline;
}

string sFunLoadNode*::sname(sFunLoadNode* self, sInfo* info)
{
    return string(self.sname);
}


void add_variable_to_table(char* name, sType* type, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    if(type->mFunctionParam) {
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

void add_variable_to_global_table(char* name, sType* type, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    self->mGlobal = true;
    
    self->mCValueName = string(name);
    
    self->mBlockLevel = info->block_level;
    self->mAllocaValue = false;
    self->mFunctionParam = false;
    self->mNoFree = false;
    
    info.gv_table.mVars.insert(string(name), self);
}

exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 7
{
    bool is_type_name_flag = is_type_name(buf, info);
    
    sFun* fun = info.funcs[buf]
    
    if(buf === "var") {
        var buf2 = parse_word(info) throws;
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info.p++;
            skip_spaces_and_lf(info);
            
            sNode*% right_value = expression(info) throws;
            
            return new sNode(new sStoreNode(string(buf2)@name, null!, true@alloc, right_value, info));
        }
        else {
            err_msg(info, "var requires a right value");
            throw;
        }
    }
    else if(!is_type_name_flag && *info->p == '=' && *(info->p+1) != '=') {
        info.p++;
        skip_spaces_and_lf(info);
        
        sNode*% right_value = expression(info) throws;
        
        return new sNode(new sStoreNode(string(buf)@name, null!, false@alloc, right_value, info));
    }
    else if(fun) {
        sNode*% node = new sNode(new sFunLoadNode(string(buf)@name, info));
        
        node = post_position_operator(node, info) throws;
        
        return node;
    }
    else if(!is_type_name_flag) {
        sNode*% node = new sNode(new sLoadNode(string(buf)@name, info));
        
        node = post_position_operator(node, info) throws;
        
        return node;
    }
    else {
        info.p.p = head;
        info.sline = head_sline;
        
        info.no_output_err = true;
        string word = parse_word(info).catch { }
        info.no_output_err = false;
        
        bool is_type_name_flag = is_type_name(word, info);
        
        info.p.p = head;
        info.sline = head_sline;
        
        if(is_type_name_flag) {
            var type, name = parse_type(info, true@parse_variable_name) throws;
            
            if(*info->p == '=') {
                info.p++;
                skip_spaces_and_lf(info);
                
                sNode*% right_value = expression(info) throws;
                
                return new sNode(new sStoreNode(name, type, true@alloc, right_value, info));
            }
            else {
                return new sNode(new sStoreNode(name, type, true@alloc, null!, info));
            }
        }
    }
    
    return inherit(buf, head,head_sline, info) throws;
}

