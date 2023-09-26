#include "common.h"
#include <ctype.h>

struct sLambdaNode {
    sFun* mFun;
    int sline;
    string sname;
};

sLambdaNode*% sLambdaNode*::initialize(sLambdaNode*% self, sFun* fun, sInfo* info)
{
    self.mFun = fun;
    self.sline = info.sline;
    self.sname = info.sname;
    
    return self;
}

int sLambdaNode*::sline(sLambdaNode* self, sInfo* info)
{
    return self.sline;
}

string sLambdaNode*::sname(sLambdaNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sLambdaNode*::terminated()
{
    return false;
}

bool sLambdaNode*::compile(sLambdaNode* self, sInfo* info)
{
    sFun* come_fun = info.come_fun;
    info.come_fun = self.mFun;
    
    if(self.mFun.mBlock) {
        transpile_block(self.mFun.mBlock, self.mFun.mParamTypes, self.mFun.mParamNames, info);
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s", self.mFun.mName);
    come_value.type = clone self.mFun.mLambdaType;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    info.come_fun = come_fun;
    
    return true;
}

sBlock*% sBlock*::initialize(sBlock*% self, sInfo* info)
{
    self.mNodes = new list<sNode*%>();
    
    return self;
}

sGenericsFun*% sGenericsFun*::initialize(sGenericsFun*% self, sType*% impl_type, list<string>* generics_type_names, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, bool var_args, string block, sInfo* info)
{
    self.mImplType = clone impl_type;
    self.mGenericsTypeNames = clone generics_type_names;
    
    self.mName = name;
    self.mResultType = result_type;
    self.mParamTypes = param_types;
    self.mParamNames = param_names;
    self.mVarArgs = var_args;
    
    self.mBlock = block;
    self.mSLine = info.sline;
    
    return self;
}


sBlock*% parse_block(sInfo* info, bool no_block_level=false)
{
    var result = new sBlock(info);
    
    int block_level = info->block_level;
    if(!no_block_level) {
        info->block_level++;
    }
    
    if(*info->p == '{') {
        info->p++;
        skip_spaces_and_lf(info);
        while(true) {
            parse_sharp(info);
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            
            parse_sharp(info);
            
            int sline = info.sline;
            char* sname = info.sname;
            
//            add_come_code(info, xsprintf("# %d \"%s\"\n", info->sline, info->sname));
            
            sNode*% node = expression(info);
            
            result.mNodes.push_back(node);
            
            parse_sharp(info);
            
            if(node.terminated->()) {
                skip_spaces_and_lf(info);
            }
            
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
        sNode*% node = expression(info);
        parse_sharp(info);
        
        result.mNodes.push_back(node);
    }
    
    info->block_level = block_level;
    
    return result;
}

int transpile_block(sBlock* block, list<sType*%>*? param_types, list<string>*? param_names, sInfo* info, bool no_var_table=false)
{
    sVarTable* old_table = info->lv_table;
    if(!no_var_table) {
        block->mVarTable = new sVarTable(false@global, old_table);
        info->lv_table = block->mVarTable;
    }
    
    list<sType*%>*? param_types_ = info.param_types;
    list<string>*? param_names_ = info.param_names;
    
    info.param_types = param_types;
    info.param_names = param_names;
    
    if(param_types && param_names) {
        int i;
        foreach(name, param_names) {
            sType*% type = clone param_types[i];
            type->mFunctionParam = true;
            type->mAllocaValue = false;
            add_variable_to_table(name, type, info);
            i++;
        }
    }
    
    var right_value_objects = info.right_value_objects;
    info.right_value_objects = new list<sRightValueObject*%>();
    
    int block_level = info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    
    if(block->mNodes.length() == 0) {
    }
    else {
        int i;
        foreach(node, block->mNodes) {
            info.module.mLastCode = null;
            info.module.mLastCode2 = null;
            
            int stack_num_before = info->stack.length();
            
            int sline = info.sline;
            string sname = string(info.sname);
            
            info->last_statment_is_return = false;
            
            info.sline = node.sline->();
            info.sname = node.sname->();
            
            if(!node.compile->(info)) {
                err_msg(info, "compiling is failed(5)");
                exit(2);
            }
            
            info.sline = sline;
            info.sname = string(sname);
    
            add_last_code_to_source(info);

            arrange_stack(info, stack_num_before);

            free_right_value_objects(info);
        }
    }
    
    if(info.come_fun.mName === "main" && block_level == 0 && !no_var_table) {
        foreach(it, info.funcs) {
            sFun* it2 = info.funcs[it];
            
            if(memcmp(it, "__final_", strlen("__final_")) == 0) {
                add_come_code(info, "%s();\n", it);
            }
        }
    }

    if(!info->last_statment_is_return && !no_var_table) {
        free_objects(info->lv_table, null!, info);
    }
    
    info->lv_table = old_table;
    info->block_level = block_level;
    
    info.param_types = param_types_;
    info.param_names = param_names_;
    
    info.right_value_objects = right_value_objects;
    
    return 0;
}


void arrange_stack(sInfo* info, int top)
{
    if(info->stack.length() > top) {
        dec_stack_ptr(info->stack.length()-top, info);
    }
    if(info->stack.length() < top) {
        fprintf(stderr, "%s %d: unexpected stack value. The stack num is %d. top is %d\n", info->sname, info->sline, info->stack.length(), top);
        int a = 0;
        int b = 1;
        int c = b/a;
        exit(2);
    }
}

int expected_next_character(char c, sInfo* info)
{
    parse_sharp(info);
    if(*info->p != c) {
        err_msg(info, "expected next charaster is %c, but %c\n", c, *info->p);
int* a = (void*)0;
*a = 0;
        exit(2);
    }
    
    info->p++;
    skip_spaces_and_lf(info);
    
    return 0;
}

string skip_block(sInfo* info)
{
    char* head = info.p;
    if(*info->p == '{') {
        info->p++;

        bool dquort = false;
        bool squort = false;
        int sline = 0;
        int nest = 0;
        while(1) {
            if(dquort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    info->p++;
                }
                else if(*info->p == '"') {
                    info->p++;
                    dquort = !dquort;
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(squort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    info->p++;
                }
                else if(*info->p == '\'') {
                    info->p++;
                    squort = !squort;
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(*info->p == '\'') {
                sline = info->sline;
                info->p++;
                squort = !squort;
            }
            else if(*info->p == '"') {
                sline = info->sline;
                info->p++;
                dquort = !dquort;
            }
            else if(*info->p == '#') {
                parse_sharp(info);
            }
            else if(*info->p == '{') {
                info->p++;

                nest++;
            }
            else if(*info->p == '}') {
                info->p++;

                if(nest == 0) {
                    skip_spaces_and_lf(info);
                    break;
                }

                nest--;
            }
            else if(*info->p == '\0') {
                err_msg(info, "The block requires } character for closing block");
                exit(2);
            }
            else if(*info->p == '\n') {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info, "Require block. This is %c", *info->p);
    }
    
    char* tail = info.p;
    
    char*% buf = new char[tail-head+1];
    memcpy(buf, head, tail-head);
    buf[tail-head] = '\0';
    
    return string(buf);
}

string parse_attribute(sInfo* info)
{
    buffer*% asm_fun_name = new buffer();

    while(true) {
        if(memcmp(info->p, "__attribute_pure__", strlen("__attribute_pure__")) == 0) {
            info->p += strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__attribute_malloc__", strlen("__attribute_malloc__")) == 0) {
            info->p += strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__attr_dealloc_fclose", strlen("__attr_dealloc_fclose")) == 0) {
            info->p += strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__wur", strlen("__wur")) == 0) {
            info->p += strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__noreturn", strlen("__noreturn")) == 0) {
            info->p += strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__attribute__", strlen("__attribute__")) == 0) {
            info->p += strlen("__attribute__");
            skip_spaces_and_lf(info);

            int brace_num = 0;
            while(*info->p) {
                if(*info->p == '(') {
                    info->p++;
                    brace_num++;
                }
                else if(*info->p == ')') {
                    info->p++;
                    brace_num--;

                    if(brace_num == 0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }

            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__asm__", strlen("__asm__")) == 0) {
            info->p += strlen("__asm__");
            skip_spaces_and_lf(info);

            int len = 0;

            bool in_dquort = false;
            int brace_num = 0;
            while(*info->p) {
                if(*info->p == '"') {
                    info->p++;

                    in_dquort = !in_dquort;
                }
                else if(in_dquort) {
                    asm_fun_name.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '(') {
                    info->p++;
                    brace_num++;
                }
                else if(*info->p == ')') {
                    info->p++;
                    brace_num--;

                    if(brace_num == 0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }

            skip_spaces_and_lf(info);
        }
#ifdef __DARWIN__
        else if(memcmp(info->p, "__asm", strlen("__asm")) == 0) {
            info->p += strlen("__asm");
            skip_spaces_and_lf(info);
            int len = 0;

            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            bool in_dquort = false;
            bool first_underbar = true;
            while(*info->p) {
                if(*info->p == '"') {
                    info->p++;

                    in_dquort = !in_dquort;
                }
                else if(in_dquort) {
                    if(first_underbar) {
                        info->p++;
                        first_underbar = false;
                    }
                    else {
                        asm_fun_name.append_char(*info->p);
                    }
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
#else
        else if(memcmp(info->p, "__asm", strlen("__asm")) == 0) {
            info->p += strlen("__asm");
            skip_spaces_and_lf(info);

            int brace_num = 0;
            while(*info->p) {
                if(*info->p == '(') {
                    info->p++;
                    brace_num++;
                }
                else if(*info->p == ')') {
                    info->p++;
                    brace_num--;

                    if(brace_num == 0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }

            skip_spaces_and_lf(info);
        }
#endif
        else {
            break;
        }
    }

    return asm_fun_name.to_string();
}

int transpile(sInfo* info) version 5
{
    skip_spaces_and_lf(info);
    parse_sharp(info);
    
    while(*info->p) {
        parse_sharp(info);
        
        char* head = info.p;
        int head_sline = info.sline;
        string buf = parse_word(info);
        
        parse_sharp(info);
        
        sNode*% node = top_level(buf, head, head_sline, info);
        parse_sharp(info);
        
        while(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp(info);
        
        if(node != null) {
            if(!node.compile->(info)) {
                err_msg(info, "compiling is faield(X)");
                exit(2);
            }
        }
        parse_sharp(info);
        
        skip_spaces_and_lf(info);
    }
    
    return 0;
}

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 99
{
    bool is_type_name_flag = is_type_name(buf, info);
    int sline = info.sline;
    
    
    /// backtrace ///
    bool define_function_flag = false;
    if(is_type_name_flag)
    {
        char* p = info.p;
        info.p = head;
        
        bool invalid_type = false;
        info.no_output_err = true;
        parse_type(info);
        info.no_output_err = false;
        
        if(!info.define_struct) {
            info.define_struct = false;
            string word = null;
            if(xisalnum(*info.p) || *info->p == '_') {
                word = parse_word(info);
                
                if(word === "extern") {
                    word = parse_word(info);
                }
            }
            else {
                word = null;
            }
            info.no_output_err = false;
            
            if(word) {
                if(is_type_name(word, info)) {
                    while(*info->p == '*') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p == '%') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p == ':') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p == ':') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(xisalnum(*info.p) || *info->p == '_') {
                        word = parse_word(info);
                    }
                }
                
                /// fun name ///
                if(strlen(word) > 0 && (*info->p == '(' || (*info->p == ':' && *(info->p+1) == ':'))) {
                    if(is_type_name_flag) {
                        define_function_flag = true;
                    }
                }
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    /// backtrace2 ///
    bool define_variable = true;
    if(is_type_name_flag)
    {
        char* p = info.p;
        info.p = head;
        
        if(!is_type_name_flag) {
            define_variable = false;
        }
        
        info.no_output_err = true;
        parse_type(parse_variable_name:false, info);
        info.no_output_err = false;
        
        if(info.define_struct) {
            info.define_struct = false;
            define_variable = false;
        }
        else {
            if(!(xisalpha(*info->p) || *info->p == '_')) {
                define_variable = false;
            }
            
            while(xisalpha(*info->p) || *info->p == '_') {
                info->p++;
            }
            skip_spaces_and_lf(info);
            
            if(*info->p == '(' || *info->p == ':') {
                define_variable = false;
            }
        }
        
        info.p = p;
        info.sline = sline;
    }
    else {
        define_variable = false;
    }
    
    if(define_function_flag) {
        info.p = head;
        info.sline = sline;
        
        return parse_function(info);
    }
    else if(define_variable) {
        info.p = head;
        info.sline = sline;
        
        return parse_global_variable(info);
    }
    
    info.p = head;
    info.sline = sline;
    
    string buf2 = parse_word(info);
 
    return inherit(buf2, head, head_sline, info);
}

bool is_type_name(char* buf, sInfo* info)
{
    sClass* klass = info.classes[buf];
    sType* type = info.types[buf];
    sClass* generics_class = info.generics_classes[buf];
    bool generics_type_name = info.generics_type_names.contained(string(buf));
    
    return generics_class || generics_type_name || klass || type || buf === "const" || buf === "register" || buf === "static" || buf === "volatile" || buf === "unsigned" || buf === "immutable" || buf === "mutable" || buf === "struct" || buf === "enum" || buf === "union" || buf === "extern" || buf === "inline" || buf === "__inline" || buf === "__extension__";

}
struct sFunNode {
    sFun*% mFun;
    int sline;
    string sname;
};

sFunNode*% sFunNode*::initialize(sFunNode*% self, sFun*% fun, sInfo* info)
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

bool sFunNode*::terminated()
{
    return false;
}

bool sFunNode*::compile(sFunNode* self, sInfo* info)
{
    sFun* come_fun = info.come_fun;
    info.come_fun = self.mFun;
    
    if(self.mFun.mBlock) {
        transpile_block(self.mFun.mBlock, self.mFun.mParamTypes, self.mFun.mParamNames, info);
    }
    
    info.come_fun = come_fun;
    
    return true;
}

bool create_generics_fun(string fun_name, sGenericsFun* generics_fun, sType* generics_type, sInfo* info)
{
    string sname_top = string(info->sname);
    int sline_top = info->sline;
    
    if(generics_type->mNoSolvedGenericsType.v1) {
        generics_type = generics_type->mNoSolvedGenericsType.v1;
    }
    sFun* funX = info.funcs[fun_name];
    if(funX) {
        return true;
    }

    sType*% result_type = solve_generics(generics_fun->mResultType, generics_type, info);
    
    list<sType*%>*% param_types = new list<sType*%>();
    foreach(it, generics_fun->mParamTypes) {
        var param_type = solve_generics(it, generics_type, info);
        
        param_type->mFunctionParam = true;

        param_types.push_back(clone param_type);
    }
    list<string>*% param_names = clone generics_fun->mParamNames;
    
    char* p = info.p;
    int sline = generics_fun->mSLine;
    char* head = info.head;
    buffer*% source = info.source;
    
    info.source = generics_fun->mBlock.to_buffer();
    info.p = info.source.buf;
    info.head = info.source.buf;
    
    var generics_type_saved = clone info->generics_type;
    info->generics_type = clone generics_type;
    
    var generics_type_names_saved = clone info->generics_type_names;
    info->generics_type_names = clone generics_fun.mGenericsTypeNames;
    
    sBlock*% block = parse_block(info);
    
    info.source = source;
    info.p = p;
    info.sline = sline;
    info.head = head;
    
    result_type->mInline = false;
    
    bool var_args = generics_fun.mVarArgs;
    var fun = new sFun(fun_name, result_type
                    , param_types
                    , param_names, new list<string>(), false@external
                    , var_args, block, true@static_, string(""), info);
    
    info.funcs.insert(clone fun_name, fun);
    
    sNode*% node = new sNode(new sFunNode(fun, info));
    
    if(!node.compile->(info)) {
        return false
    }
    
    info->generics_type = generics_type_saved;
    info->generics_type_names = generics_type_names_saved;
    
    info->sname = string(sname_top);
    info->sline = sline_top;
    
    return true;
}

sNode*% parse_function(sInfo* info)
{
    char* header_head = info.p;
    var result_type, var_name, err = parse_type(info);
    
    if(!err) {
        exit(2);
    }
    
    /// backtrace ///
    bool method_definition = false;
    {
        char* p = info.p;
        int sline = info.sline;
        
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
        
        if(buf2.length() > 0 && *info->p == ':' && *(info->p+1) == ':') {
            method_definition = true;
        }
        
        info.p = p;
        info.sline = sline;
    }
    
    string fun_name;
    string base_fun_name;
    if(method_definition) {
        var obj_type, name, err = parse_type(info);
        
        if(!err) {
            exit(2);
        }
        
        expected_next_character(':', info);
        expected_next_character(':', info);
        
        base_fun_name = clone parse_word(info);
        fun_name = clone create_method_name(obj_type, false@no_pointer_name, string(base_fun_name), info)
    }
    else if(info->impl_type) {
        base_fun_name = clone parse_word(info);
    
        fun_name = clone create_method_name(info->impl_type, false@no_pointer_name, string(base_fun_name), info);
    }
    else {
        fun_name = clone parse_word(info);
        base_fun_name = clone string(fun_name);
    }
    
    var param_types, param_names, param_default_parametors, var_args = parse_params(info);
    char* header_tail = info.p;
    
    buffer*% header_buf = new buffer();
    
    header_buf.append(header_head, header_tail - header_head);
    header_buf.append_char('\0');
    
    int version = 0;
    if(memcmp(info->p, "version", strlen("version")) == 0) {
        info->p += strlen("version");
        skip_spaces_and_lf(info);
        
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
        }
        skip_spaces_and_lf(info);
        
        version = n;
    }
    
    if(base_fun_name === "lambda") {
        sBlock*% block = parse_block(info);
        
        static int lambda_num = 0;
        lambda_num++;
        
        fun_name = xsprintf("lambda%d", lambda_num);
        
        result_type->mStatic = false;
        
        var fun = new sFun(string(fun_name), result_type, param_types, param_names
                            , param_default_parametors
                            , false@external, var_args, block
                            , true@static_, header_buf.to_string(), info);
        
        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone fun_name, fun);
        }
        
        return new sNode(new sLambdaNode(fun, info));
    }
    else if(info.impl_type && info.generics_type_names.length() > 0) {
        string none_generics_name = get_none_generics_name(info.impl_type.mClass.mName);
        
        string block = skip_block(info);
        
        var fun = new sGenericsFun(info.impl_type, info.generics_type_names, string(fun_name), result_type, param_types, param_names, var_args, block, info);
        
        string fun_name3 = xsprintf("%s_%s", none_generics_name, base_fun_name);
        
        info.generics_funcs.insert(string(fun_name3), fun);
        
        return (sNode*%)null;
    }
    else if(*info->p == '{') {
        sBlock*% block = parse_block(info);
    
        
        bool static_ = false;
        if(result_type->mStatic) {
            result_type->mStatic = false;
            static_ = true;
        }
        
        if(version > 0) {
            string new_fun_name = xsprintf("%s_v%d", string(fun_name), version);
            fun_name = string(new_fun_name);
        }
        
        var fun = new sFun(string(fun_name), result_type, param_types
                                , param_names
                                , param_default_parametors
                                , false@external, var_args, clone block
                                , static_
                                , header_buf.to_string()
                                , info);
    
        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone fun_name, fun);
        }
    
        
        return new sNode(new sFunNode(fun, info));
    }
    else if(xisalpha(*info->p) || *info->p == '_' || *info->p == ';') {
        if(version > 0) {
            string new_fun_name = xsprintf("%s_v%d", fun_name, version);
            fun_name = string(new_fun_name);
        }
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);
            
            result_type->mStatic = false;
            
            var fun = new sFun(string(fun_name), result_type
                                , param_types, param_names
                                , param_default_parametors
                                , true@external, var_args, null!@block
                                , false@static_, header_buf.to_string(), info);
            
            var fun2 = info.funcs[string(fun_name)];
            if(fun2 == null || fun2.mExternal) {
    
                info.funcs.insert(clone fun_name, fun);
            }
            
            return new sNode(new sFunNode(fun, info));
        }
        else {
            string asm_fun = parse_attribute(info);
            
            if(asm_fun !== "") {
                fun_name = string(asm_fun);
            }
            
            expected_next_character(';', info);
            
            result_type->mStatic = false;
            
            var fun = new sFun(string(fun_name), result_type, param_types
                                , param_names
                                , param_default_parametors
                                , true@external, var_args, null!@block
                                , false@static_, header_buf.to_string(), info);
            
            var fun2 = info.funcs[string(fun_name)];
            if(fun2 == null || fun2.mExternal) {
    
                info.funcs.insert(clone fun_name, fun);
            }
            
            return new sNode(new sFunNode(fun, info));
        }
    }
    else {
        err_msg(info, "invalid character(%c)(2)\n", *info->p);
        exit(2);
    }
    
    return (sNode*%)null;
}

sFun*,string create_finalizer_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* finalizer = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && klass->mStruct) {
        var source = new buffer();
        
        source.append_char('{');
        
        klass = info.classes[klass->mName];
        foreach(it, klass->mFields) {
            var name, field_type = it;
            
            if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
            {
                err_msg(info, "Define recusively the finalizer. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                exit(2);
            }
            
            if(field_type->mHeap) {
                char source2[1024];
                snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n", name, name);
                
                source.append_str(source2);
            }
        }
        
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        info.p = source.buf;
        info.head = source.buf;
        
        sBlock*% block = parse_block(info);
        
        var result_type = new sType("void", info);
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        if(self_type->mPointerNum > 1) {
            self_type->mPointerNum = 1;
        }
        var param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);
        
        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone name, fun);
        }
        
        finalizer = fun;
        
        sNode*% node = new sNode(new sFunNode(fun, info));
        
        if(!node.compile->(info)) {
            err_msg(info, "compiling is failed(X)");
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    return (finalizer, real_fun_name);
}

sFun*,string create_equals_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return left.%s.equals(right.%s);\n", name, name);
            source.append_str(source2);
        }
        else {
            klass = info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the equals. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                char source2[1024];
                snprintf(source2, 1024, "if(!left.%s.equals(right.%s)) { return false; }\n", name, name);
                
                source.append_str(source2);
            }
        }
        
        source.append_str("return true;");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        info.p = source.buf;
        info.head = source.buf;
        
        sBlock*% block = parse_block(info);
        
        var result_type = new sType("bool", info);
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        var param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
        var param_default_parametors = new list<string>();
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);
        
        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone name, fun);
        }
        
        equaler = fun;
        
        sNode*% node = new sNode(new sFunNode(fun, info));
        
        if(!node.compile->(info)) {
            err_msg(info, "compiling error");
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    return (equaler, real_fun_name);
}

sFun*,string create_operator_not_equals_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return !left.%s.equals(right.%s);\n", name, name);
            source.append_str(source2);
        }
        else {
            char source2[1024];
            snprintf(source2, 1024, "return !(");
            
            source.append_str(source2);
            
            int i = 0;
            klass = info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the equals. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                char source2[1024];
                snprintf(source2, 1024, "left.%s.equals(right.%s)", name, name);
                source.append_str(source2);
                
                if(i == klass->mFields.length()-1) {
                    char source2[1024];
                    snprintf(source2, 1024, ");");
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, " && ");
                    source.append_str(source2);
                }
                
                i++;
            }
        }
        
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        info.p = source.buf;
        info.head = source.buf;
        
        sBlock*% block = parse_block(info);
        
        var result_type = new sType("bool", info);
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        var param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
        var param_default_parametors = new list<string>();
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);
        
        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone name, fun);
        }
        
        equaler = fun;
        
        sNode*% node = new sNode(new sFunNode(fun, info));
        
        if(!node.compile->(info)) {
            err_msg(info, "compiling error");
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    return (equaler, real_fun_name);
}

sFun*,string create_operator_equals_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* equaler = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return left.%s.equals(right.%s);\n", name, name);
            source.append_str(source2);
        }
        else {
            klass = info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the equals. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                char source2[1024];
                snprintf(source2, 1024, "if(!left.%s.equals(right.%s)) { return false; }\n", name, name);
                
                source.append_str(source2);
            }
        }
        
        source.append_str("return true;\n");
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        char* head = info.head;
        buffer*% source3 = info.source;
        
        info.source = source;
        info.p = source.buf;
        info.head = source.buf;
        
        sBlock*% block = parse_block(info);
        
        var result_type = new sType("bool", info);
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        var param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
        var param_default_parametors = new list<string>();
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);
        
        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {
    
            info.funcs.insert(clone name, fun);
        }
        
        equaler = fun;
        
        sNode*% node = new sNode(new sFunNode(fun, info));
        
        if(!node.compile->(info)) {
            err_msg(info, "compiling error(X)");
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    return (equaler, real_fun_name);
}

sFun*,string create_cloner_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* cloner = null;
    
    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);
    
    sType*% type2 = solve_generics(type, type, info);
    
    type = borrow type2;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();
        
        source.append_str("{\n");
        source.append_str("if(self == (void*)0) { return (void*)0; }\n");
        source.append_str(xsprintf("var result = new %s;\n", make_type_name_string(type, false@in_header, false@array_cast_pointer, info, true)));
        
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            
            source.append_str(source2);
            
            klass = info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the cloner. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                if(name === "_protocol_obj") {
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { result.%s = self.%s; }\n", name, name);
                    
                    source.append_str(source2);
                }
            }
        }
        else {
            klass = info.classes[klass->mName];
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the cloner. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }
                
                if(field_type->mHeap) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n", name, name, name);
                    
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { result.%s = self.%s; }\n", name, name);
                    
                    source.append_str(source2);
                }
            }
        }
        
        source.append_str(xsprintf("return result;"));
        source.append_char('}');
        
        char* p = info.p;
        int sline = info.sline;
        buffer*% source3 = info.source;
        char* head = info.head;
        
        info.source = source;
        info.p = info.source.buf;
        info.head = info.source.buf;
        
        sBlock*% block = parse_block(info);
        
        var result_type = clone type;
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        var param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();
        
        buffer*% header_buf = new buffer();
        
        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");
        
        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];
            
            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);
            
            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");
        
        result_type->mStatic = false;
        
        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);
        
        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {
            info.funcs.insert(clone name, fun);
        }
        
        cloner = fun;
        
        sNode*% node = new sNode(new sFunNode(fun, info));
        
        if(!node.compile->(info)) {
            err_msg(info, "compiling error(Y)");
            exit(2);
        }
        
        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }
    
    return (cloner, real_fun_name);
}
