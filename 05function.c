#include "common.h"
#include <ctype.h>

void parse_sharp(sInfo* info) version 5
{
    while(*info->p == '#') {
        skip_spaces_and_lf(info);
    
        info->p++;
        skip_spaces_and_lf(info);

        if(xisdigit(*info->p)) {
            int line = 0;
            char fname[PATH_MAX];

            while(xisdigit(*info->p)) {
                line = line * 10 + (*info->p - '0');
                info->p++;
            }
            skip_spaces_and_lf(info);

            if(*info->p == '"') {
                info->p++;

                char* p = fname;

                while(*info->p != '"') {
                    *p = *info->p;
                    p++;
                    info->p++;
                }
                *p = '\0';

                while(*info->p != '\n') {
                    info->p++;
                }
                info->p++;
            }

            info->sline = line;
            info->sname = string(fname);

            skip_spaces_and_lf(info);
        }
        else if(*info->p == '"') {
            info->p++;

            while(*info->p != '"') {
                info->p++;
            }

            while(*info->p != '\n') {
                info->p++;
            }
            info->p++;
        }
    
        skip_spaces_and_lf(info);
    }
}

bool parsecmp(char* str, sInfo* info) 
{
    return memcmp(info.p.p, str, strlen(str)) == 0;
}

exception string parse_word(sInfo* info, bool no_check_err=false)
{
    var buf = new buffer();
    
    while((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p >= '0' && *info->p <= '9'))
    {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    
    if(!no_check_err && buf.length() == 0) {
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
    
    bool constant = false;
    bool static_ = false;
    bool volatile_ = false;
    bool register_ = false;
    bool exception_ = false;
    bool unsigned_ = false;
    bool long_ = false;
    bool long_long = false;
    bool short_ = false;
    bool restrict_ = false;
    bool struct_ = false;
    bool union_ = false;
    bool enum_ = false;
    
    while(true) {
        if(type_name === "struct") {
            struct_ = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else if(type_name === "union") {
            union_ = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else if(type_name === "enum") {
            enum_ = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else if(type_name === "const") {
            constant = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else if(type_name === "static") {
            static_ = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else if(type_name === "volatile") {
            volatile_ = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else if(type_name === "long") {
            /// backtrace ///
            {
                char* p = info.p.p;
                int sline = info.sline;
                
                if(!xisalpha(*info->p)) {
                    info.p.p = p;
                    info.sline = sline;
                    
                    type_name = string("long");
                    break;
                }
                else {
                    type_name = parse_word(info, true).catch {
                        throw;
                    }
                    
                    if(is_type_name(type_name, info)) {
                        if(long_) {
                            long_long = true;
                            long_ = false;
                        }
                        else {
                            long_ = true;
                        }
                        break;
                    }
                    else {
                        info.p.p = p;
                        info.sline = sline;
                        
                        type_name = string("long");
                        break;
                    }
                }
            }
        }
        else if(type_name === "unsigned") {
            unsigned_ = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else if(type_name === "register") {
            register_ = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else if(type_name === "exception") {
            exception_ = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else if(type_name === "restrict") {
            restrict_ = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else if(type_name === "short") {
            short_ = true;
            
            type_name = parse_word(info).catch {
                throw;
            }
        }
        else {
            break;
        }
    }
    
    sType*% type;
    if(info.types[type_name]) {
        type = clone info.types[type_name];
    }
    else {
        type = new sType(type_name, info);
    }
    
    type->mConstant = type->mConstant || constant;
    type->mRegister = register_;
    type->mUnsigned = type->mUnsigned || unsigned_;
    type->mVolatile = volatile_;
    type->mStatic = type->mStatic || static_;
    type->mRestrict = type->mRestrict || restrict_;
    type->mLongLong = type->mLongLong || long_long;
    type->mLong = type->mLong || long_;
    type->mShort = type->mShort || short_;
    
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
    
    while(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf(info);
        
        sNode*% node = expression(info).catch {
            throw;
        }
        type.mArrayNum.push_back(node);
        
        expected_next_character(']', info).catch {
            throw;
        }
    }
    
    return new tuple2<sType*%, string>(type, var_name);
}

sBlock*% sBlock*::initialize(sBlock*% self, sInfo* info)
{
    self.mNodes = new list<sNode*%>();
    
    return self;
}

struct sIntNode
{
    int value;
    int sline;
    string sname;
};

sIntNode*% sIntNode*::initialize(sIntNode*% self, int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sIntNode*::compile(sIntNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", self.value);
    come_value.type = new sType("int", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sIntNode*::sline(sIntNode* self, sInfo* info)
{
    return self.sline;
}

string sIntNode*::sname(sIntNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sReturnNode
{
    sNode*%? value;
    int sline;
    string sname;
};

sReturnNode*% sReturnNode*::initialize(sReturnNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sReturnNode*::sline(sReturnNode* self, sInfo* info)
{
    return self.sline;
}

string sReturnNode*::sname(sReturnNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sReturnNode*::compile(sReturnNode* self, sInfo* info)
{
    if(self.value) {
        if(!self.value->compile->(info)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        dec_stack_ptr(1, info);
        sFun* come_fun = info.come_fun;
        
        if(come_value.type->mHeap && come_value.var == null) {
            add_come_code(info, "come_increment_ref_count(%s);\n", come_value.c_value);
        }
        
        free_objects_on_return(come_fun.mBlock, info, come_value.c_value, false@top_block);
        
        add_come_code(info, "return %s;\n", come_value.c_value);
    }
    else {
        sFun* come_fun = info.come_fun;
        free_objects_on_return(come_fun.mBlock, info, null!, false@top_block);
        add_come_code(info, "return;\n");
    }
    
    info->last_statment_is_return = true;
    
    return true;
}

struct sDerefferenceNode
{
    sNode*%? value;
    int sline;
    string sname;
};

sDerefferenceNode*% sDerefferenceNode*::initialize(sDerefferenceNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sDerefferenceNode*::sline(sDerefferenceNode* self, sInfo* info)
{
    return self.sline;
}

string sDerefferenceNode*::sname(sDerefferenceNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sDerefferenceNode*::compile(sDerefferenceNode* self, sInfo* info)
{
    sNode* value = self.value;
    
    if(!value->compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("*%s", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mPointerNum--;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
    
    return true;
}

struct sRefferenceNode
{
    sNode*%? value;
    int sline;
    string sname;
};

sRefferenceNode*% sRefferenceNode*::initialize(sRefferenceNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sRefferenceNode*::sline(sRefferenceNode* self, sInfo* info)
{
    return self.sline;
}

string sRefferenceNode*::sname(sRefferenceNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sRefferenceNode*::compile(sRefferenceNode* self, sInfo* info)
{
    sNode* value = self.value;
    
    if(!value->compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("&%s", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mPointerNum--;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
    
    return true;
}

struct sReverseNode
{
    sNode*%? value;
    int sline;
    string sname;
};

sReverseNode*% sReverseNode*::initialize(sReverseNode*% self, sNode*% value, sInfo* info)
{
    self.value = value;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sReverseNode*::sline(sReverseNode* self, sInfo* info)
{
    return self.sline;
}

string sReverseNode*::sname(sReverseNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sReverseNode*::compile(sReverseNode* self, sInfo* info)
{
    sNode* value = self.value;
    
    if(!value->compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("!%s", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mPointerNum--;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

exception sNode*% expression_node(sInfo* info) version 1
{
    skip_spaces_and_lf(info);
    parse_sharp(info);
    
    err_msg(info, "invalid character(%c)\n", *info->p);
    throw;
}

struct sFunCallNode {
    string fun_name;
    list<sNode*%>*% params
    int sline;
    string sname;
};

sFunCallNode*% sFunCallNode*::initialize(sFunCallNode*% self, char* fun_name, list<sNode*%>* params, sInfo* info)
{
    self.fun_name = string(fun_name);
    self.params = clone params;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sFunCallNode*::sline(sFunCallNode* self, sInfo* info)
{
    return self.sline;
}

string sFunCallNode*::sname(sFunCallNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sFunCallNode*::compile(sFunCallNode* self, sInfo* info)
{
    string fun_name = self.fun_name;
    list<sNode*%>* params = self.params;
    
    sFun* fun = info.funcs.at(fun_name, null!);
    
    if(fun == null) {
        err_msg(info, "founction not found(%s)\n", fun_name);
        return false;
    }
    
    sType* result_type = fun->mResultType;
    
    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
    
    foreach(it, params) {
        if(!it.compile->(info)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        come_params.push_back(come_value);
        dec_stack_ptr(1, info);
    }
    
    buffer*% buf = new buffer();
    
    buf.append_str(self.fun_name);
    buf.append_str("(");
    
    int j = 0;
    foreach(it, come_params) {
        buf.append_str(it.c_value);
        
        if(j != come_params.length()-1) {
            buf.append_str(",");
        }
        
        j++;
    }
    buf.append_str(")");
    
    CVALUE*% come_value = new CVALUE;
    come_value.c_value = buf.to_string();
    
    if(fun->mResultType->mHeap) {
        come_value.c_value = append_object_to_right_values(come_value.c_value, fun->mResultType, info);
    }
    
    come_value.type = clone result_type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", buf.to_string());
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sCastNode {
    sType*% mType;
    sNode*% mLeft;
    int sline;
    string sname;
};

sCastNode*% sCastNode*::initialize(sCastNode*% self, sType* type, sNode* left, sInfo* info)
{
    self.mType = clone type;
    self.mLeft = clone left;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sCastNode*::sline(sCastNode* self, sInfo* info)
{
    return self.sline;
}

string sCastNode*::sname(sCastNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCastNode*::compile(sCastNode* self, sInfo* info)
{
    sType* type = self.mType;
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s)%s", make_type_name_string(type, false@in_header, false@array_cast_pointer, info), left_value.c_value);
    come_value.type = clone type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

struct sParenNode {
    sNode*% mLeft;
    int sline;
    string sname;
};

sParenNode*% sParenNode*::initialize(sParenNode*% self, sNode* left, sInfo* info)
{
    self.mLeft = clone left;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sParenNode*::sline(sParenNode* self, sInfo* info)
{
    return self.sline;
}

string sParenNode*::sname(sParenNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sParenNode*::compile(sParenNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("(%s)", left_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

exception sNode*% parse_function_call(char* fun_name, sInfo* info)
{
    expected_next_character('(', info).catch {
        throw;
    }
    
    list<sNode*%>*% params = new list<sNode*%>();
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        
        sNode*% node = expression(info).catch {
            throw;
        }
        
        params.push_back(node);
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    
    return new sNode(new sFunCallNode(fun_name, params, info));
}

exception sNode*% string_node(char* buf, char* head, sInfo* info) version 5
{
    err_msg(info, "unexpected word(%s)\n", buf);
    throw
}

exception sNode*% post_position_operator(sNode*% node, sInfo* info) version 5
{
    return node;
}

exception sNode*% expression_node(sInfo* info) version 99
{
    skip_spaces_and_lf(info);
    
    parse_sharp(info);
    
    if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        sNode*% node = new sNode(new sIntNode(n, info));
        
        node = post_position_operator(node, info).catch { throw };
        
        return node;
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
    else if(*info->p == '*') {
        info->p ++;
        skip_spaces_and_lf(info);
        
        sNode*% value = expression_node(info).catch {
            throw;
        }
        
        return new sNode(new sDerefferenceNode(value, info));
    }
    else if(*info->p == '&') {
        info->p ++;
        skip_spaces_and_lf(info);
        
        sNode*% value = expression_node(info).catch {
            throw;
        }
        
        return new sNode(new sRefferenceNode(value, info));
    }
    else if(*info->p == '!') {
        info->p ++;
        skip_spaces_and_lf(info);
        
        sNode*% value = expression_node(info).catch {
            throw;
        }
        
        return new sNode(new sReverseNode(value, info));
    }
    else if(xisalpha(*info->p)) {
        char* head = info.p.p;
        
        string buf = parse_word(info).catch {
            throw;
        }
        
        if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "switch" && buf !== "return" && buf !== "sizeof" && *info->p == '(') 
        {
            sNode*% node = parse_function_call(buf, info).catch {
                throw;
            }
            
            node = post_position_operator(node, info).catch { throw };
            
            return node;
        }
        else {
            sNode*% node = string_node(buf, head, info).catch {
                throw;
            }
            
            node = post_position_operator(node, info).catch { throw };
            
            return node;
        }
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
        
        /// backtrace ///
        bool cast_exp_flag = false;
        {
            char* p = info.p.p;
            int sline = info.sline;
            
            string word = parse_word(info, true).catch {
                throw;
            }
            
            if(is_type_name(word, info)) {
                cast_exp_flag = true;
            }
            
            info.p.p = p;
            info.sline = sline;
        }
        
        if(cast_exp_flag) {
            var type, name = parse_type(info).catch {
                throw;
            }
            
            expected_next_character(')', info);
            
            sNode*% node = expression_node(info).catch {
                throw;
            }
            
            return new sNode(new sCastNode(type, node, info));
        }
        else {
            sNode*% node = expression(info).catch {
                throw
            }
            
            expected_next_character(')', info);
            
            node = new sNode(new sParenNode(node, info));
            
            node = post_position_operator(node, info).catch { throw };
            
            return node;
        }
    }
    else {
        sNode*% node = inherit(info).catch {
            throw;
        }
        
        node = post_position_operator(node, info).catch { throw };
        
        return node;
    }
    
    err_msg(info, "unexpected operator(%c)\n", *info->p);
    throw;
    return (sNode*)null;
}

exception sNode*% expression(sInfo* info) version 5
{
    return expression_node(info).catch {
        throw
    }
}


exception sBlock*% parse_block(sInfo* info)
{
    sVarTable* lv_table = info->lv_table;
    
    var result = new sBlock(info);
    
    int block_level = info->block_level;
    info->block_level++;
    
    if(*info->p == '{') {
        info->p++;
        while(true) {
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            
            parse_sharp(info);
            
            sNode*% node = expression(info).catch {
                throw;
            }
            
            result.mNodes.push_back(node);
            
            parse_sharp(info);
            
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp(info);
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
    }
    else {
        parse_sharp(info);
        sNode*% node = expression(info).catch {
            throw;
        }
        parse_sharp(info);
        
        result.mNodes.push_back(node);
    }
    
    info->block_level = block_level;
    
    return result;
}

exception int transpile_block(sBlock* block, list<sType*%>*? param_types, list<string>*? param_names, sInfo* info)
{
    sVarTable* old_table = info->lv_table;
    block->mVarTable = new sVarTable(false@global, old_table);
    info->lv_table = block->mVarTable;
    
    if(param_types && param_names) {
        int i;
        foreach(name, param_names) {
            sType* type = param_types[i];
            add_variable_to_table(name, type, info);
            i++;
        }
    }
    
    int block_level = info->block_level;
    info->block_level++;
    
    if(block->mNodes.length() == 0) {
    }
    else {
        int i;
        foreach(node, block->mNodes) {
            info.module.mLastCode = null;
            
            int stack_num_before = info->stack.length();
            
            int sline = info.sline;
            string sname = string(info.sname);
            
            info->last_statment_is_return = false;
            
            info.sline = node.sline->();
            info.sname = node.sname->();
            
            if(!node.compile->(info)) {
                throw;
            }
            
            info.sline = sline;
            info.sname = string(sname);
    
            add_last_code_to_source(info);

            if(!info->last_statment_is_return) {
                free_right_value_objects(info);
            }

            arrange_stack(info, stack_num_before);
        }
    }

    if(!info->last_statment_is_return) {
        free_objects(info->lv_table, null!, info);
    }
    
    info->lv_table = old_table;
    info->block_level = block_level;
    
    return 0;
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
    skip_spaces_and_lf(info);
    
    return 0;
}

struct sFunNode {
    sFun* mFun;
    int sline;
    string sname;
};

sFunNode*% sFunNode*::initialize(sFunNode*% self, sFun* fun, sInfo* info)
{
    self.mFun = fun;
    self.sline = info.sline;
    self.sname = info.sname;
    
    return self;
}

int sFunNode*::sline(sFunNode* self, sInfo* info)
{
    return self.sline;
}

string sFunNode*::sname(sFunNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sFunNode*::compile(sFunNode* self, sInfo* info)
{
    sFun* come_fun = info.come_fun;
    info.come_fun = self.mFun;
    
    bool result = true;
    if(self.mFun.mBlock) {
        transpile_block(self.mFun.mBlock, self.mParamTypes, self.mParamNames, info).catch {
            result = false;
        }
    }
    
    info.come_fun = come_fun;
    
    return result;
}

string crete_method_name(sType* obj_type, char* fun_name)
{
    string pointer_name = "p" * obj_type->mPointerNum;
    string heap_name;
    if(obj_type->mHeap) {
        heap_name = string("h");
    }
    else {
        heap_name = string("");
    }
    string class_name = obj_type->mClass->mName;
    
    return xsprintf("%s%s%s_%s", class_name, pointer_name, heap_name, fun_name);
}

exception sNode*% parse_function(sInfo* info)
{
    var result_type, var_name = parse_type(info).catch {
        throw;
    }
    
    /// backtrace ///
    bool method_definition = false;
    {
        char* p = info.p.p;
        int sline = info.sline;
        
        buffer*% buf2 = new buffer();
        while(xisalnum(*info->p)) {
            buf2.append_char(*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        if(buf2.length() > 0 && *info->p == ':' && *(info->p+1) == ':') {
            method_definition = true;
        }
        
        info.p.p = p;
        info.sline = sline;
    }
    
    string fun_name;
    if(method_definition) {
        var obj_type, name = parse_type(info).catch {
            throw;
        }
        
        expected_next_character(':', info).catch { throw; }
        expected_next_character(':', info).catch { throw; }
        
        string fun_name2 = parse_word(info).catch {
            throw;
        }
        fun_name = crete_method_name(obj_type, fun_name2)
    }
    else {
        fun_name = parse_word(info).catch {
            throw;
        }
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
                info->p += strlen("...");
                skip_spaces_and_lf(info);
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
    
    if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf(info);
        
        var fun = new sFun(fun_name, result_type, param_types, param_names
                                , true@external, var_args, null!@block, info);
        
        info.funcs.insert(string(fun_name), fun);
        
        return new sNode(new sFunNode(fun, info));
    }
    else if(*info->p == '{') {
        sBlock*% block = parse_block(info).catch {
            throw;
        }
        
        var fun = new sFun(fun_name, result_type, param_types, param_names
                                , false@external, var_args, block, info);
        
        info.funcs.insert(string(fun_name), fun);
        
        return new sNode(new sFunNode(fun, info));
    }
    else {
        err_msg(info, "invalid character(%c)\n", *info->p);
        throw;
    }
    
    return (sNode*)null;
}

exception sNode*% top_level(char* buf, char* head, sInfo* info) version 1
{
    err_msg(info, "unexpected word(%s)\n", buf);
    throw;
    
    return (sNode*)null;
}

bool is_type_name(char* buf, sInfo* info)
{
    sClass* klass = info.classes[buf];
    sType* type = info.types[buf];
    
    return klass || type || buf === "const" || buf === "register" || buf === "static" || buf === "volatile" || buf === "unsigned" || buf === "immutable" || buf === "mutable" || buf === "struct" || buf === "enum" || buf === "union";

}

exception sNode*% top_level(char* buf, char* head, sInfo* info) version 99
{
    bool is_type_name_flag = is_type_name(buf, info);
    int sline = info.sline;
    
    /// back trace ///
    bool define_function_flag = false;
    {
        char* p = info.p.p;
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        buffer*% buf2 = new buffer();
        
        while(xisalnum(*info->p) || *info->p == '_') {
            buf2.append_char(*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        if(buf2.length() > 0 && (*info->p == '(' || (*info->p == ':' && *(info->p+1) == ':'))) {
            if(is_type_name_flag) {
                define_function_flag = true;
            }
        }
        
        info.p.p = p;
        info.sline = sline;
    }
    
    if(define_function_flag) {
        info.p.p = head;
        info.sline = sline;
        
        return parse_function(info).catch {
            throw;
        }
    }
 
    return inherit(buf, head, info).catch {
        throw
    }
}

exception int transpile(sInfo* info) version 5
{
    skip_spaces_and_lf(info);
    parse_sharp(info);
    
    while(*info->p) {
        parse_sharp(info);
        
        char* head = info.p.p;
        string buf = parse_word(info).catch {
            throw;
        }
        
        parse_sharp(info);
        
        sNode*% node = top_level(buf, head, info).catch {
            throw;
        }
        parse_sharp(info);
        
        while(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp(info);
        
        if(node != null) {
            if(!node.compile->(info)) {
                throw;
            }
        }
        parse_sharp(info);
        
        skip_spaces_and_lf(info);
    }
    
    return 0;
}

