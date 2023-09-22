#include "common.h"

struct sStoreNode
{
    string name;
    list<string>*% multiple_assign;
    sNode*% right_value;
    sType*% type;
    bool alloc;
    int sline;
    string sname;
};

sStoreNode*% sStoreNode*::initialize(sStoreNode*% self, string name, list<string>*%? multiple_assign, sType*% type, bool alloc, sNode*%? right_value, sInfo* info)
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
    if(multiple_assign) {
        self.multiple_assign = clone multiple_assign;
    }
    else {
        self.multiple_assign = null;
    }
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sStoreNode*::terminated()
{
    return false;
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
            
            var type = solve_generics(self.type, info->generics_type, info);
            
            add_variable_to_table(self.name, type, info);
        }
    
        sVar* var_ = get_variable_from_table(info.lv_table, self.name);
        
        if(var_ == null) {
            var_ = get_variable_from_table(info.gv_table, self.name);
            
            if(var_ == null) {
                err_msg(info, "var not found(%s)(Y) at definition of variable\n", self.name);
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
            sType*% left_type2 = clone left_type;
            left_type2->mStatic = false;
            if(!var_->mType->mConstant) {
                add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(left_type2, false@in_header, false@array_cast_pointer, info));
            }
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
        
        if(self.multiple_assign) {
            if(right_type->mNoSolvedGenericsType.v1) {
                right_type = right_type->mNoSolvedGenericsType.v1;
            }
        }
        
        if(self.alloc) {
            sVar* var_ = info.lv_table.mVars[self.name];
            if(var_) {
                err_msg(info, "Already appended this var name(%s)", self.name);
                return false;
            }
            
            if(self.multiple_assign) {
                int i = 0;
                foreach(it, self.multiple_assign) {
                    if(i < right_type.mGenericsTypes.length()) {
                        sType* right_type2 = right_type.mGenericsTypes[i];
                        
                        add_variable_to_table(it, right_type2, info);
                        
                        var_ = get_variable_from_table(info.lv_table, it);
                        
                        sType*% var_type = clone var_->mType;
                        var_type->mStatic = false;
                        
                        if(!var_type->mConstant) {add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(var_type, false@in_header, false@array_cast_pointer, info));
                        }
                    }
                    
                    i++;
                }
            }
            else {
                if(self.type == null) {
                    add_variable_to_table(self.name, right_type, info);
                }
                else {
                    var type = solve_generics(self.type, info->generics_type, info);
                    
                    add_variable_to_table(self.name, type, info);
                }
                
                var_ = get_variable_from_table(info.lv_table, self.name);
                
                sType*% var_type = clone var_->mType;
                var_type->mStatic = false;
                
                if(!var_type->mConstant) { add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(var_type, false@in_header, false@array_cast_pointer, info));
                }
            }
        }
        
        sClass* current_stack_frame_struct = info->current_stack_frame_struct;
        
        if(current_stack_frame_struct) {
            sVar* parent_var = get_variable_from_table(info.lv_table->mParent, self.name);
            
            if(parent_var != null) {
                CVALUE*% come_value = new CVALUE;
                
                sType* left_type = parent_var->mType;
                
                if(left_type->mPointerNum > 0 && right_type->mPointerNum > 0 && right_type->mHeap && left_type->mHeap) {
                    string c_value = xsprintf("*(parent->%s)", parent_var->mCValueName);
                    decrement_ref_count_object(parent_var->mType, c_value, info);
                    
                    right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    come_value.c_value = xsprintf("(*(parent->%s))=%s", parent_var->mCValueName, right_value.c_value);
                    
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
        
        if(self.multiple_assign) {
            static int num_multiple_var = 0;
            string multiple_var_name = xsprintf("multiple_assgin_var%d", ++num_multiple_var);
            add_come_code_at_function_head(info, "%s;\n", make_define_var(right_value.type, multiple_var_name, info));
            
            add_come_code(info, "%s=%s;\n", multiple_var_name, right_value.c_value);
            
            right_value.c_value = clone multiple_var_name;
            
            int i = 0;
            foreach(it, self.multiple_assign) {
                if(i < right_type.mGenericsTypes.length()) {
                    sType*% right_type2 = clone right_type.mGenericsTypes[i];
                    
                    sVar* var_ = get_variable_from_table(info.lv_table, it);
                    
                    sType*% var_type = clone var_->mType;
                    var_type->mStatic = false;
                    
                    if(!var_type->mConstant) {
                        add_come_code_at_function_head2(info, "memset(&%s, 0, sizeof(%s));\n", var_->mCValueName, make_type_name_string(var_type, false@in_header, false@array_cast_pointer, info));
                    }
                    
                    sType*% left_type = clone var_->mType;
                    
                    CVALUE*% right_value2 = new CVALUE;
                    
                    right_value2.c_value = xsprintf("%s->v%d", right_value.c_value, i+1);
                    right_value2.type = clone right_type2;
                    right_value2.var = null;
                    
                    CVALUE*% come_value = new CVALUE;
                    
                    if(right_type2->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type2->mPointerNum > 0)
                    {
                        if(self.alloc) {
                            right_value2.c_value = increment_ref_count_object(right_value2.type, right_value2.c_value, info);
                            come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value2.c_value);
                        }
                        
                        int right_value_id = get_right_value_id_from_obj(right_value2.c_value);
                        
                        if(right_value_id != -1) {
                            remove_object_from_right_values(right_value_id, info);
                        }
                    }
                    else {
                        come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value2.c_value);
                    }
                    come_value.type = clone left_type;
                    come_value.var = var_;
                    
                    if(self.alloc) {
                        add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName, info));
                        add_come_code(info, "%s;\n", come_value.c_value);
                    }
                    else {
                        add_come_code(info, "%s;\n", come_value.c_value);
                    }
                }
                
                i++;
            }
        }
        else {
            sVar* var_ = get_variable_from_table(info.lv_table, self.name);
            
            if(var_ == null) {
                var_ = get_variable_from_table(info.gv_table, self.name);
                
                if(var_ == null) {
                    err_msg(info, "var not found(%s)(X) at storing variable\n", self.name);
                    return false;
                }
            }
            
            if(var_->mType == NULL) {
                var_->mType = clone right_type;
            }
            sType*% left_type = clone var_->mType;
            
            CVALUE*% come_value = new CVALUE;
            
            if(var_->mType->mConstant) {
                add_come_code_at_function_head(info, "%s=%s;\n", make_define_var(left_type, var_->mCValueName, info), right_value.c_value);
                come_value.c_value = string("");
                
                info.stack.push_back(come_value);
                
                transpiler_clear_last_code(info);
            }
            else if(right_type->mHeap && left_type->mHeap && left_type->mPointerNum > 0 && right_type->mPointerNum > 0)
            {
                if(self.alloc) {
                    right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                }
                else {
                    decrement_ref_count_object(left_type, var_->mCValueName, info);
                    right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
                    come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                }
                int right_value_id = get_right_value_id_from_obj(right_value.c_value);
                
                if(right_value_id != -1) {
                    remove_object_from_right_values(right_value_id, info);
                }
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
            else {
                come_value.c_value = xsprintf("%s=%s", var_->mCValueName, right_value.c_value);
                come_value.type = clone left_type;
                come_value.var = var_;
                
                info.stack.push_back(come_value);
                
                add_come_last_code(info, "%s;\n", come_value.c_value);
            }
            
            if(self.alloc && !left_type->mConstant) {
                add_come_code_at_function_head(info, "%s;\n", make_define_var(left_type, var_->mCValueName, info));
            }
        }
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

sNode*% store_var(string name, list<string>*%? multiple_assign, sType*% type, bool alloc, sNode*%? right_node, sInfo* info)
{
    return new sNode(new sStoreNode(name, multiple_assign, type, alloc, right_node, info));
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

bool sLoadNode*::terminated()
{
    return false;
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
            sFun* fun = info.funcs[self.name]
            
            if(fun) {
                CVALUE*% come_value = new CVALUE;
                
                come_value.c_value = xsprintf("%s", fun->mName);
                come_value.type = fun->mLambdaType;
                come_value.var = null;
                
                info.stack.push_back(come_value);
                
                return true;
            }
            else {
                err_msg(info, "var not found(%s)(Z) at loading variable\n", self.name);
                return false;
            }
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

sNode*% load_var(string name, sInfo* info)
{
    return new sNode(new sLoadNode(name, info));
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

bool sFunLoadNode*::terminated()
{
    return false;
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

void add_variable_to_global_table_with_int_value(char* name, sType* type, char* c_value, sInfo* info)
{
    sVar*% self = new sVar;
    
    self->mName = string(name);
    self->mType = clone type;
    
    self->mGlobal = true;
    
    self->mCValueName = string(c_value);
    
    self->mBlockLevel = info->block_level;
    self->mAllocaValue = false;
    self->mFunctionParam = false;
    self->mNoFree = false;
    
    info.gv_table.mVars.insert(string(name), self);
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 7
{
    bool is_type_name_flag = is_type_name(buf, info);
    
    parse_sharp(info);
    sFun* fun = info.funcs[buf]
    
    if(buf === "var") {
        parse_sharp(info);
        var buf2 = parse_word(info);
        parse_sharp(info);
        
        list<string>*% multiple_assign = null;
        
        if(*info->p == ',' ) {
            multiple_assign = new list<string>();
            multiple_assign.push_back(clone buf2);
            
            while(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
                
                parse_sharp(info);
                var buf3 = parse_word(info);
                parse_sharp(info);
                
                multiple_assign.push_back(clone buf3);
            }
        }
        parse_sharp(info);
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info.p++;
            skip_spaces_and_lf(info);
            
            parse_sharp(info);
            sNode*% right_value = expression(info);
            parse_sharp(info);
            
            right_value = post_position_operator3(right_value, info);
            parse_sharp(info);
            
            return new sNode(new sStoreNode(string(buf2)@name, multiple_assign, null!, true@alloc, right_value, info));
        }
        else {
            err_msg(info, "var requires a right value(%c)", *info->p);
            exit(2);
        }
    }
    else if(!is_type_name_flag && *info->p == '=' && *(info->p+1) != '=') {
        info.p++;
        skip_spaces_and_lf(info);
        
        parse_sharp(info);
        sNode*% right_value = expression(info);
        parse_sharp(info);
        
        right_value = post_position_operator3(right_value, info);
        
        parse_sharp(info);
        return new sNode(new sStoreNode(string(buf)@name, null!, null!, false@alloc, right_value, info));
    }
/*
    else if(fun) {
        sNode*% node = new sNode(new sFunLoadNode(string(buf)@name, info));
        
        node = post_position_operator(node, info);
        
        return node;
    }
*/
    else if(!is_type_name_flag) {
        sNode*% node = new sNode(new sLoadNode(string(buf)@name, info));
        
        node = post_position_operator(node, info);
        
        node = post_position_operator3(node, info);
        
        return node;
    }
    else {
        info.p = head;
        info.sline = head_sline;
        
        string word = string("");
        if(xisalpha(*info->p) || *info->p == '_') {
            word = parse_word(info);
        }
        
        bool is_type_name_flag = is_type_name(word, info);
        
        info.p = head;
        info.sline = head_sline;
        
        if(is_type_name_flag) {
            parse_sharp(info);
            var type, name, err = parse_type(info, true@parse_variable_name);
            
            if(!err) {
                exit(2);
            }
            parse_sharp(info);
            
            
            if(*info->p == '=') {
                info.p++;
                skip_spaces_and_lf(info);
                
                parse_sharp(info);
                sNode*% right_value = expression(info);
                parse_sharp(info);
                
                right_value = post_position_operator3(right_value, info);
                
                return new sNode(new sStoreNode(name, null!, type, true@alloc, right_value, info));
            }
            else {
                return new sNode(new sStoreNode(name, null!, type, true@alloc, null!, info));
            }
        }
    }
    
    return inherit(buf, head,head_sline, info);
}

