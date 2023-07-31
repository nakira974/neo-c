#include "common.h"

struct sNewNode {
    sType*% type
    int sline;
    string sname;
};

sNewNode*% sNewNode*::initialize(sNewNode*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sNewNode*::sline(sNewNode* self, sInfo* info)
{
    return self.sline;
}

string sNewNode*::sname(sNewNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sNewNode*::compile(sNewNode* self, sInfo* info)
{
    sType* type = self.type;
    
    CVALUE*% come_value = new CVALUE;
    
    buffer*% num_string = new buffer();
    
    num_string.append_str("1");
    
    foreach(it, type->mArrayNum) {
        if(!it.compile->(info)) {
            return false;
        }
        
        CVALUE*% cvalue = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        
        num_string.append_str(xsprintf("*%s", cvalue.c_value));
    }
    
    string type_name = make_type_name_string(type, false@in_header, true@array_cast_pointer, info);
    
    come_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*%s)", type_name, type_name, num_string.to_string());
    come_value.type = clone type;
    sType*% type2 = clone type;
    type2->mPointerNum++;
    come_value.c_value = append_object_to_right_values(come_value.c_value, type2 ,info);
    come_value.type->mPointerNum ++;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sTrueNode {
    int sline;
    string sname;
};

sTrueNode*% sTrueNode*::initialize(sTrueNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sTrueNode*::sline(sTrueNode* self, sInfo* info)
{
    return self.sline;
}

string sTrueNode*::sname(sTrueNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sTrueNode*::compile(sTrueNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(_Bool)1");
    come_value.type = new sType("bool", info);
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sFalseNode {
    int sline;
    string sname;
};

sFalseNode*% sFalseNode*::initialize(sFalseNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sFalseNode*::sline(sFalseNode* self, sInfo* info)
{
    return self.sline;
}

string sFalseNode*::sname(sFalseNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sFalseNode*::compile(sFalseNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(_Bool)0");
    come_value.type = new sType("bool", info);
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sSizeOfNode {
    sType*% type
    int sline;
    string sname;
};

sSizeOfNode*% sSizeOfNode*::initialize(sSizeOfNode*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sSizeOfNode*::sline(sSizeOfNode* self, sInfo* info)
{
    return self.sline;
}

string sSizeOfNode*::sname(sSizeOfNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sSizeOfNode*::compile(sSizeOfNode* self, sInfo* info)
{
    sType* type = self.type;
    
    CVALUE*% come_value = new CVALUE;
    
    var type2 = solve_generics(type, info->generics_type, info).catch {
        return false;
    }
    
    string type_name = make_type_name_string(type2, false@in_header, false@array_cast_pointer, info);
    
    come_value.c_value = xsprintf("sizeof(%s)", type_name);
    come_value.type = new sType("long", info);
    come_value.type->mUnsigned = true;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sDeleteNode {
    sNode*% node;
    int sline;
    string sname;
};

sDeleteNode*% sDeleteNode*::initialize(sDeleteNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sDeleteNode*::sline(sDeleteNode* self, sInfo* info)
{
    return self.sline;
}

string sDeleteNode*::sname(sDeleteNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sDeleteNode*::compile(sDeleteNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    free_object(come_value.type, come_value.c_value, false@no_decrement, false@no_free, info);
    
    return true;
}

struct sBorrowNode {
    sNode*% node;
    int sline;
    string sname;
};

sBorrowNode*% sBorrowNode*::initialize(sBorrowNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sBorrowNode*::sline(sBorrowNode* self, sInfo* info)
{
    return self.sline;
}

string sBorrowNode*::sname(sBorrowNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sBorrowNode*::compile(sBorrowNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    come_value.type.mHeap = false;
    
    int right_value_id = get_right_value_id_from_obj(come_value.c_value);
    
    if(right_value_id != -1) {
        remove_object_from_right_values(right_value_id, info);
    }
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sIsHeap {
    sType*% type;
    int sline;
    string sname;
};

sIsHeap*% sIsHeap*::initialize(sIsHeap*% self, sType*% type, sInfo* info)
{
    self.type = clone type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sIsHeap*::sline(sIsHeap* self, sInfo* info)
{
    return self.sline;
}

string sIsHeap*::sname(sIsHeap* self, sInfo* info)
{
    return string(self.sname);
}

bool sIsHeap*::compile(sIsHeap* self, sInfo* info)
{
    sType* node = self.type;
    
    if(self.type.mHeap) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("1");
        come_value.type = new sType("int", info);
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }
    else {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("0");
        come_value.type = new sType("int", info);
        come_value.var = null;
        
        info.stack.push_back(come_value);
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
    }
    
    return true;
}

exception sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 21
{
    if(buf === "new") {
        var type, name = parse_type(info).catch {
            throw;
        }
        
        return new sNode(new sNewNode(type, info));
    }
    else if(buf === "true") {
        return new sNode(new sTrueNode(info));
    }
    else if(buf === "false") {
        return new sNode(new sFalseNode(info));
    }
    else if(buf === "delete") {
         sNode*% node = expression(info).catch {
             throw;
         }
         
         return new sNode(new sDeleteNode(node, info));
        
    }
    else if(buf === "borrow") {
         sNode*% node = expression(info).catch {
             throw;
         }
         
         return new sNode(new sBorrowNode(node, info));
    }
    else if(buf === "isheap" && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
        
        var param_type, param_name = parse_type(info, parse_variable_name:false).catch {
            throw
        }
        
        var type2 = solve_generics(param_type, info->generics_type, info).catch {
            throw;
        }
        
        expected_next_character(')', info).catch { throw }
        
        return new sNode(new sIsHeap(type2, info));
    }
    else if(buf === "using") {
        if(memcmp(info->p.p, "comelang", strlen("comelang")) == 0) {
            info->p += strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang = true;
        }
        else if(memcmp(info->p.p, "c", strlen("c")) == 0) {
            info->p += strlen("c");
            skip_spaces_and_lf(info);
            
            gComelang = false;
        }
        else if(memcmp(info->p.p, "gc", strlen("gc")) == 0) {
            info->p += strlen("gc");
            skip_spaces_and_lf(info);
            
            gGC = true;
        }
        else if(memcmp(info->p.p, "no-gc", strlen("no-gc")) == 0) {
            info->p += strlen("no-gc");
            skip_spaces_and_lf(info);
            
            gGC = false;
        }
        else {
            err_msg(info, "invalid using");
            throw;
        }
    }
    else if(buf === "sizeof") {
        expected_next_character('(', info).catch { throw }
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p.p;
            int sline = info.sline;
            
            var word = parse_word(info, true).catch {
                throw;
            }
            
            if(is_type_name(word, info)) {
                is_type_name_flag = true;
            }
            
            info.p.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name = parse_type(info, false).catch {
                throw;
            }
            
            expected_next_character(')', info).catch {
                throw;
            }
            
            return new sNode(new sSizeOfNode(type, info));
        }
    }
    
    return inherit(buf, head, head_sline, info).catch {
        throw;
    }
}

exception sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 94
{
   if(buf === "using") {
        if(memcmp(info->p.p, "comelang", strlen("comelang")) == 0) {
            info->p += strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang = true;
        }
        else if(memcmp(info->p.p, "c", strlen("c")) == 0) {
            info->p += strlen("c");
            skip_spaces_and_lf(info);
            
            gComelang = false;
        }
        else if(memcmp(info->p.p, "gc", strlen("gc")) == 0) {
            info->p += strlen("gc");
            skip_spaces_and_lf(info);
            
            gGC = true;
        }
        else if(memcmp(info->p.p, "no-gc", strlen("no-gc")) == 0) {
            info->p += strlen("no-gc");
            skip_spaces_and_lf(info);
            
            gGC = false;
        }
        else {
            err_msg(info, "invalid using");
            throw;
        }
        
        return (sNode*)null;
    }
    
    return inherit(buf, head, head_sline, info).catch {
        throw;
    }
}
