#include "common.h"
#include <ctype.h>

bool parsecmp(char* str, sInfo* info) 
{
    return memcmp(info.p.p, str, strlen(str)) == 0;
}

exception string parse_word(sInfo* info)
{
    var buf = new buffer();
    
    while(*info->p >= 'a' && *info->p <= 'z' || *info->p >= 'A' && *info->p <= 'Z' || *info->p == '_' || *info->p >= '0' && *info->p <= '9')
    {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    
    if(buf.length() == 0) {
        err_msg(info, "unexpected character(%c)\n", *info->p);
        throw;
    }
    
    return buf.to_string();
}

void skip_spaces_and_lf(sInfo* info)
{
    while(true) {
        if(*info->p == ' ' || *info->p == '\t') {
            info->p++;
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

exception tuple2<sType*%,string>*% parse_type(sInfo* info, bool parse_variable_name=false)
{
    string type_name = parse_word(info).catch {
        throw;
    }
    
    sType*% type = new sType(type_name);
    
    if(*info->p == '<') {
        info->p++;
        skip_spaces_and_lf(info);
        
        while(true) {
            var generics_type, var_name = borrow parse_type(info).catch {
                throw;
            }
            
            type->mGenericsTypes.push_back(generics_type);
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf(info);
                
                break;
            }
            else {
                err_msg(info, "invalid generics type\n");
                throw;
            }
        }
    }
    
    while(*info->p == '*') {
        info->p++;
        skip_spaces_and_lf(info);
        
        type->mPointerNum++;
    }
    
    bool heap = false;
    if(*info->p == '%') {
        info->p++;
        skip_spaces_and_lf(info);
        
        if(!gGC) {
            type->mHeap = true;
        }
    }
    
    if(*info->p == '&') {
        info->p++;
        skip_spaces_and_lf(info);
        
        if(!gGC) {
            type->mNoHeap = true;
        }
    }
    
    string var_name = string("");
    if(parse_variable_name) {
        var_name = parse_word(info).catch {
            throw;
        }
    }
    
    return new tuple2<sType*%, string>(type, var_name);
}

sBlock*% sBlock*::initialize(sBlock*% self, sVarTable* lv_table, sInfo* info)
{
    self.mNodes = new list<sNode*%>();
    self.mVarTable = new sVarTable(global:false, parent:lv_table);
    
    return self;
}

struct sIntNode
{
    int value;
};

sIntNode*% sIntNode*::initialize(sIntNode*% self, int value, sInfo* info)
{
    self.value = value;
    return self;
}

bool sIntNode*::compile(sIntNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", self.value);
    come_value.type = new sType("int");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sReturnNode
{
    sNode*%? value;
};

sReturnNode*% sReturnNode*::initialize(sReturnNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    return self;
}

bool sReturnNode*::compile(sReturnNode* self, sInfo* info)
{
    if(self.value) {
        if(!self.value->compile->(info)) {
            return false;
        }
        
        CVALUE* come_value = info.stack[-1];
        
        add_come_code(info, "return %s;\n", come_value.c_value);
        
        dec_stack_ptr(1, info);
    }
    else {
        add_come_code(info, "return\n");
    }
    
    return true;
}

exception sNode*% expression(sInfo* info) version 5
{
    if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        return new sNode(new sIntNode(n, info));
    }
    else if(parsecmp("return", info)) {
        info->p += strlen("return");
        skip_spaces_and_lf(info);
        
        if(*info->p == ';') {
            return new sNode(new sReturnNode(null!, info));
        }
        else {
            sNode*% value = expression(info).catch {
                throw;
            }
            
            return new sNode(new sReturnNode(value, info));
        }
    }
    
    err_msg(info, "invalid character(%c)\n", *info->p);
    throw;
}

exception sBlock*% parse_block(sInfo* info)
{
    sVarTable* lv_table = info->lv_table;
    
    var result = new sBlock(lv_table, info);
    info->lv_table = result.mVarTable;
    
    if(*info->p == '{') {
        info->p++;
        while(true) {
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            
            sNode*% node = expression(info).catch {
                throw;
            }
            
            result.mNodes.push_back(node);
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
    }
    else {
puts("BBB");
        sNode*% node = expression(info).catch {
            throw;
        }
        
        result.mNodes.push_back(node);
    }
    
    info->lv_table = lv_table;
    
    return result;
}

exception int transpile_block(sBlock* block, sInfo* info)
{
    sVarTable* old_table = info->lv_table;
    info->lv_table = block->mVarTable;
    
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
            
            int stack_num_before = info->stack.length();

            if(!node.compile->(info))
            {
                info->lv_table = old_table;
                throw;
            }
    
            add_last_code_to_source(info);

            if(!last_expression_is_return) {
                free_right_value_objects(info);
            }

            arrange_stack(info, stack_num_before);
        }
    }

    free_objects(info->lv_table, null!, info);
    
    info->lv_table = old_table;
    info->come_nest = nest;
    
    return 0;
}

void dec_stack_ptr(int value, sInfo* info)
{
    info.stack.delete(-value-1, -1);
}

void arrange_stack(sInfo* info, int top)
{
    if(info->stack.length() > top) {
        dec_stack_ptr(info->stack.length()-top, info);
    }
    if(info->stack.length() < top) {
        fprintf(stderr, "%s %d: unexpected stack value. The stack num is %d. top is %d\n", info->sname, info->sline, info->stack.length(), top);
        exit(2);
    }
}

exception int expected_next_character(char c, sInfo* info)
{
    if(*info->p != c) {
        err_msg(info, "expected next charaster is %c, but %c\n", c, *info->p);
        throw;
    }
    
    info->p++;
    
    return 0;
}

struct sFunNode {
    sFun*% mFun;
};

sFunNode*% sFunNode*::initialize(sFunNode*% self, sFun*% fun, sInfo* info)
{
    self.mFun = fun;
    
    return self;
}

bool sFunNode*::compile(sFunNode* self, sInfo* info)
{
    info.funcs.insert(self.mFun.mName, self.mFun);
    
    sFun* come_fun = info.come_fun;
    info.come_fun = self.mFun;
    
    bool result = true;
    transpile_block(self.mFun.mBlock, info).catch {
        result = false;
    }
    
    info.come_fun = come_fun;
    
    return result;
}

exception sNode*% parse_function(sInfo* info)
{
    var result_type, var_name = parse_type(info).catch {
        throw;
    }
    
    string fun_name = parse_word(info).catch {
        throw;
    }
    
    expected_next_character('(', info).catch {
        throw;
    }
    
    var param_types = new list<sType*%>();
    var param_names = new list<string>();
    bool var_args = false;
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        
        var param_type, param_name = parse_type(info, parse_variable_name:true).catch {
            throw
        }
        
        param_types.push_back(param_type);
        param_names.push_back(param_name);
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
            
            if(parsecmp("...", info)) {
                var_args = true;
                
                expected_next_character(')', info);
                break;
            }
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    
    sBlock*% block = parse_block(info).catch {
        throw;
    }
    
    var fun = new sFun(fun_name, result_type, param_types, param_names
                            , false@external, var_args, info);
    fun.mBlock = block;
    
    return new sNode(new sFunNode(fun, info));
}

exception int transpile(sInfo* info) version 5
{
    skip_spaces_and_lf(info);
    
    sNode* node = parse_function(info).catch {
        throw
    }
    
    if(node.compile->(info)) {
        throw;
    }
    
    skip_spaces_and_lf(info);
    
    return 0;
}
