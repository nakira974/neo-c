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
    
    sType*% type2 = solve_generics(type, info->generics_type, info).catch {
        return false;
    }
    
    string type_name = make_type_name_string(type2, false@in_header, true@array_cast_pointer, info);
    
    come_value.c_value = xsprintf("(%s*)come_calloc(1, sizeof(%s)*%s)", type_name, type_name, num_string.to_string());
    sType*% type3 = clone type2;
    type3->mPointerNum++;
    type3->mHeap = true;
    type2->mHeap = true;
    come_value.type = clone type2;
    come_value.c_value = append_object_to_right_values(come_value.c_value, type3 ,info);
    come_value.type->mPointerNum ++;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sImplementsNode {
    sNode*% obj_exp;
    sType*% inf_type;
    
    int sline;
    string sname;
};

sImplementsNode*% sImplementsNode*::initialize(sImplementsNode*% self, sNode*% obj_exp, sType*% inf_type, sInfo* info)
{
    self.obj_exp = clone obj_exp;
    self.inf_type = clone inf_type;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sImplementsNode*::sline(sImplementsNode* self, sInfo* info)
{
    return self.sline;
}

string sImplementsNode*::sname(sImplementsNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sImplementsNode*::compile(sImplementsNode* self, sInfo* info)
{
    sNode*% obj_exp = clone self.obj_exp;
    sType*% inf_type = clone self.inf_type;
    
    if(!obj_exp.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = clone come_value.type;
    type->mPointerNum--;
    type->mHeap = false;
    
    sClass* klass = inf_type->mClass;
    
    CVALUE*% come_value2 = new CVALUE;
    
    sType*% type2 = clone inf_type;
    
    string type_name = make_type_name_string(inf_type, false@in_header, true@array_cast_pointer, info);
    string type_name2 = make_type_name_string(type, false@in_header, true@array_cast_pointer, info);
    
    static int inf_num = 0;
    
    string buf = xsprintf("%s* _inf_value%d;\n", type_name, ++inf_num);
    add_come_code_at_function_head(info, buf);
    string buf2 = xsprintf("%s* _inf_obj_value%d;\n", type_name2, inf_num);
    add_come_code_at_function_head(info, buf2);
    
    add_come_code(info, "_inf_value%d=(%s*)come_calloc(1, sizeof(%s));\n", inf_num, type_name, type_name);
    add_come_code(info, "_inf_obj_value%d=%s;\n", inf_num, come_value.c_value);
    add_come_code(info, "_inf_value%d->_protocol_obj=_inf_obj_value%d;\n", inf_num, inf_num);
    
    sType*% typeX = clone type;
    typeX->mPointerNum++;
    
    create_finalizer_automatically(typeX, "finalize", info);
    create_cloner_automatically(typeX, "clone", info);
    
    for(int i=1; i<klass->mFields.length(); i++) {
        var name, field_type = klass->mFields[i];
        
        string method_name = create_method_name(type, false@no_pointer_name, name, info);
        
        add_come_code(info, "_inf_value%d->%s=%s;\n", inf_num, name, method_name);
    }
    
    come_value2.c_value = xsprintf("_inf_value%d", inf_num);
    sType*% type3 = clone inf_type;
    type3->mPointerNum++;
    type3->mHeap = true;
    type2->mHeap = true;
    come_value2.type = clone type2;
    come_value2.c_value = append_object_to_right_values(come_value2.c_value, type3 ,info);
    come_value2.type->mPointerNum ++;
    come_value2.var = null;
    
    add_come_last_code(info, "%s;\n", come_value2.c_value);
    
    info.stack.push_back(come_value2);
    
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

struct sCloneNode {
    sNode*% node;
    int sline;
    string sname;
};

sCloneNode*% sCloneNode*::initialize(sCloneNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCloneNode*::sline(sCloneNode* self, sInfo* info)
{
    return self.sline;
}

string sCloneNode*::sname(sCloneNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCloneNode*::compile(sCloneNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% left_type = clone left_value.type;
    
    CVALUE*% come_value = new CVALUE;
    come_value.c_value = clone_object(left_type, left_value.c_value, info);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sDummyHeapNode {
    sNode*% node;
    int sline;
    string sname;
};

sDummyHeapNode*% sDummyHeapNode*::initialize(sDummyHeapNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sDummyHeapNode*::sline(sDummyHeapNode* self, sInfo* info)
{
    return self.sline;
}

string sDummyHeapNode*::sname(sDummyHeapNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sDummyHeapNode*::compile(sDummyHeapNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    come_value.type.mHeap = true;
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sGCIncNode {
    sNode*% node;
    int sline;
    string sname;
};

sGCIncNode*% sGCIncNode*::initialize(sGCIncNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sGCIncNode*::sline(sGCIncNode* self, sInfo* info)
{
    return self.sline;
}

string sGCIncNode*::sname(sGCIncNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sGCIncNode*::compile(sGCIncNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* type = come_value.type;
    
    if(come_value.type.mHeap) {
        string type_name = make_type_name_string(type, false@in_header, false@array_cast_pointer, info);
        come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
    }
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sGCDecNode {
    sNode*% node;
    int sline;
    string sname;
};

sGCDecNode*% sGCDecNode*::initialize(sGCDecNode*% self, sNode*% node, sInfo* info)
{
    self.node = clone node;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sGCDecNode*::sline(sGCDecNode* self, sInfo* info)
{
    return self.sline;
}

string sGCDecNode*::sname(sGCDecNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sGCDecNode*::compile(sGCDecNode* self, sInfo* info)
{
    sNode* node = self.node;
    
    if(!node.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType* type = come_value.type;
    
    decrement_ref_count_object(type, come_value.c_value, info);
    
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
        var type, name = parse_type(info) throws;
        
        if(*info->p == '(') {
            bool interface_ = false;
            {
                char* p = info.p;
                int sline = info.sline;
                
                info->p++;
                skip_spaces_and_lf(info);
                
                var word = parse_word(info, true) throws;
                
                if(word === "new") {
                    interface_ = true;
                }
                
                info.p = p;
                info.sline = sline;
            }
            
            if(interface_) {
                info->p++;
                skip_spaces_and_lf(info);
                
                sNode*% node = expression(info) throws;
                
                expected_next_character(')', info) throws;
                
                return new sNode(new sImplementsNode(node, type, info));
            }
            else {
                sNode*% obj = new sNode(new sNewNode(type, info));
                string fun_name = string("initialize");
                
                return parse_method_call(obj, fun_name, info) throws;
            }
        }
        else {
            return new sNode(new sNewNode(type, info));
        }
    }
    else if(buf === "true") {
        return new sNode(new sTrueNode(info));
    }
    else if(buf === "false") {
        return new sNode(new sFalseNode(info));
    }
    else if(buf === "delete") {
         sNode*% node = expression(info) throws;
         
         return new sNode(new sDeleteNode(node, info));
        
    }
    else if(buf === "borrow") {
         sNode*% node = expression(info) throws;
         
         return new sNode(new sBorrowNode(node, info));
    }
    else if(buf === "clone") {
         sNode*% node = expression(info) throws;
         
         return new sNode(new sCloneNode(node, info));
    }
    else if(buf === "dummy_heap") {
         sNode*% node = expression(info) throws;
         
         return new sNode(new sDummyHeapNode(node, info));
    }
    else if(buf === "gc_inc" && *info->p == '(') {
         info->p++;
         skip_spaces_and_lf(info);
         
         sNode*% node = expression(info) throws;
         
         expected_next_character(')', info) throws;
         
         return new sNode(new sGCIncNode(node, info));
    }
    else if(buf === "gc_dec" && *info->p == '(') {
         info->p++;
         skip_spaces_and_lf(info);
         
         sNode*% node = expression(info) throws;
         
         expected_next_character(')', info) throws;
         
         return new sNode(new sGCDecNode(node, info));
    }
    else if(buf === "isheap" && *info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
        
        var param_type, param_name = parse_type(info, parse_variable_name:false) throws;
        
        var type2 = solve_generics(param_type, info->generics_type, info) throws;
        
        expected_next_character(')', info) throws;
        
        return new sNode(new sIsHeap(type2, info));
    }
    else if(buf === "using") {
        if(memcmp(info->p, "comelang", strlen("comelang")) == 0) {
            info->p += strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang = true;
        }
        else if(memcmp(info->p, "c", strlen("c")) == 0) {
            info->p += strlen("c");
            skip_spaces_and_lf(info);
            
            gComelang = false;
        }
        else if(memcmp(info->p, "gc", strlen("gc")) == 0) {
            info->p += strlen("gc");
            skip_spaces_and_lf(info);
            
            gGC = true;
        }
        else if(memcmp(info->p, "no-gc", strlen("no-gc")) == 0) {
            info->p += strlen("no-gc");
            skip_spaces_and_lf(info);
            
            gGC = false;
        }
        else if(memcmp(info->p, "unsafe", strlen("unsafe")) == 0) {
            info->p += strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "no-null-check", strlen("no-null-check")) == 0) {
            info->p += strlen("no-null-check");
            skip_spaces_and_lf(info);
        }
        else {
            err_msg(info, "invalid using");
            throw;
        }
    }
    else if(buf === "sizeof") {
        expected_next_character('(', info) throws;
        
        /// backtrace ///
        bool is_type_name_flag = false;
        {
            char* p = info.p;
            int sline = info.sline;
            
            var word = parse_word(info, true) throws;
            
            if(is_type_name(word, info)) {
                is_type_name_flag = true;
            }
            
            info.p = p;
            info.sline = sline;
        }
        
        if(is_type_name_flag) {
            var type, name = parse_type(info, false) throws;
            
            expected_next_character(')', info) throws;
            
            return new sNode(new sSizeOfNode(type, info));
        }
    }
    
    return inherit(buf, head, head_sline, info) throws;
}

exception sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 94
{
   if(buf === "using") {
        if(memcmp(info->p, "comelang", strlen("comelang")) == 0) {
            info->p += strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang = true;
        }
        else if(memcmp(info->p, "c", strlen("c")) == 0) {
            info->p += strlen("c");
            skip_spaces_and_lf(info);
            
            gComelang = false;
        }
        else if(memcmp(info->p, "gc", strlen("gc")) == 0) {
            info->p += strlen("gc");
            skip_spaces_and_lf(info);
            
            gGC = true;
        }
        else if(memcmp(info->p, "no-gc", strlen("no-gc")) == 0) {
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
    
    return inherit(string(buf), head, head_sline, info) throws;
}

exception sNode*% post_position_operator3(sNode*% node, sInfo* info)
{
    if(memcmp(info->p, "implements", strlen("implements")) == 0) {
        info->p += strlen("implements");
        skip_spaces_and_lf(info);
        
        var type3, name2 = parse_type(info) throws;
        
        sType*% inf_type = clone type3;
        
        return new sNode(new sImplementsNode(node, inf_type, info));
    }
    else if(*info->p == '@') {
        info->p++;
        while(xisalnum(*info->p) || *info->p == '_') {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    
    return node;
}


