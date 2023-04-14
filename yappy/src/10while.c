#include "common.h"

class sWhileNode(sNode* while_exp, list<sNode*>* while_nodes
                , list<sNode*>*? else_nodes, sParserInfo* info)
{
    sNode* self.while_exp = while_exp;
    list<sNode*>* self.while_nodes = while_nodes;
    list<sNode*>*? self.else_nodes = else_nodes;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sWhileNode* self)
    {
        return self.id;
    }
    
    
    bool compile(sWhileNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* while_exp = self.while_exp;
        list<sNode*>* while_nodes = self.while_nodes;
        list<sNode*>* else_nodes = self.else_nodes;
        
        int head = codes.len;
        
        int head_before = info->loop_head;
        info->loop_head = head;
        
        vector<int>* breaks_before = info->breaks;
        info->breaks = new  vector<int>();
        
        if(!while_exp.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_IF);
        int end_point = codes.len;
        codes.append_int(0);
        
        info->stack_num--;
        
        compile_block(codes, while_nodes, info);
        
        codes.append_int(OP_GOTO);
        codes.append_int(head);
        
        int* p = (int*)(codes.buf + end_point);
        *p = codes.len;
        
        if(else_nodes) {
            compile_block(codes, else_nodes, info);
        }
        
        for(int i=0; i<info->breaks.length(); i++) {
            int break_point = info->breaks.item(i, -1);
            
            int* p = (int*)(codes.buf + break_point);
            
            *p = codes.length();
        }
        
        info->breaks = breaks_before;
        info->loop_head = head_before;
        
        return true;
    }
}

class sForNode(char* var_name, list<sNode*>* nodes, sNode* list_node
                , sParserInfo* info)
{
    char* self.var_name = string(var_name);
    list<sNode*>* self.for_nodes = nodes;
    sNode* self.list_node = list_node;
    
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sForNode* self)
    {
        return self.id;
    }
    
    bool compile(sForNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* list_node = self.list_node;
        list<sNode*>* for_nodes = self.for_nodes;
        char* var_name = self.var_name;
        
        if(!list_node.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_INIT_GET_ELEMENT);
        
        info->stack_num--;
        
        int head = codes.len;
        
        codes.append_int(OP_GET_ELEMENT);
        
        int end_point = codes.length();
        codes.append_int(0);
        
        int in_global_context = info.in_global_context;
        codes.append_int(in_global_context);
        
        char* name = var_name;
        
        int len = strlen(name);
        int offset = (len + 3) & ~3;
        offset /= sizeof(int);
        
        codes.append_int(offset);
        codes.append_int(len);
        
        codes.append_str(name);
        codes.alignment();
        
        vector<int>* breaks_before = info->breaks;
        info->breaks = new  vector<int>();
        
        int head2 = codes.length();
        int head_before = info->loop_head;
        info->loop_head = head2;
        
        compile_block(codes, for_nodes, info);
        
        codes.append_int(OP_GOTO);
        codes.append_int(head);
        
        int* p = (int*)(codes.buf + end_point);
        
        *p = codes.length();
        
        for(int i=0; i<info->breaks.length(); i++) {
            int break_point = info->breaks.item(i, -1);
            
            int* p = (int*)(codes.buf + break_point);
            
            *p = codes.length();
        }
        
        info->breaks = breaks_before;
        info->loop_head = head_before;
        
        return true;
    }
}

class sContinueNode(sParserInfo* info)
{
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sContinueNode* self)
    {
        return self.id;
    }
    bool compile(sContinueNode* self, buffer* codes, sParserInfo* info)
    {
        if(info->loop_head == -1) {
            fprintf(stderr, "%s %d: require loop for continue\n", info->fname, info->sline);
            return false;
        }
        
        codes.append_int(OP_GOTO);
        codes.append_int(info->loop_head);
        
        return true;
    }
}

class sBreakNode(sParserInfo* info)
{
    unsigned int self.id = gNodeID++;
    
    unsigned int get_hash_key(sBreakNode* self)
    {
        return self.id;
    }
    
    bool compile(sBreakNode* self, buffer* codes, sParserInfo* info)
    {
        if(info->breaks == null) {
            fprintf(stderr, "%s %d: require loop for break\n", info->fname, info->sline);
            return false;
        }
        
        codes.append_int(OP_GOTO);
        
        int break_point = codes.len;
        info->breaks.push_back(break_point);
        
        codes.append_int(0);
        
        return true;
    }
}

static bool word_cmp(char* p, char* word2)
{
    int result = strstr(p, word2) == p;
    
    char c = p[strlen(word2)];
    
    if(result && (c == '\n' || c == ' ' || c == '\t' || c == '\0' || c == ':')) {
        return true;
    }
    
    return false;
}

sNode* exp_node(sParserInfo* info) version 10
{
    sNode* result = null;
    
    if(word_cmp(info->p, "while")) {
        info->p += strlen("while");
        skip_spaces_until_eol(info);
        
        sNode* node = NULL;
        if(!expression(&node, info)) {
            fprintf(stderr, "%s %d: invalid while exp\n", info->fname, info->sline);
            return null;
        }
        
        sNode* while_exp = node;
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_until_eol(info);
        }
        else {
            fprintf(stderr, "%s %d: require : while block\n", info->fname, info->sline);
            return null;
        }
        
        list<sNode*>* while_nodes = parse_block(info);
        
        list<sNode*>*? else_nodes = null;
        
        if(word_cmp(info->p, "else")) {
            info->p += strlen("else");
            skip_spaces_until_eol(info);
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            else {
                fprintf(stderr, "%s %d: require : while block\n", info->fname, info->sline);
                return null;
            }
            
            else_nodes = parse_block(info);
        }
        
        result = new sNode(new sWhileNode(while_exp, while_nodes, else_nodes!, info));
    }
    else if(word_cmp(info->p, "for")) {
        info->p += strlen("for");
        skip_spaces_until_eol(info);
        
        buffer* buf = new buffer();
        
        if(xisalpha(*info->p)) {
            while(xisalnum(*info->p)) {
                buf.append_char(*info->p);
                info->p++;
            }
            skip_spaces_until_eol(info);
        }
        
        char* var_name = buf.to_string();
        
        if(memcmp(info->p, "in", strlen("in")) == 0) {
            info->p += strlen("in");
            skip_spaces_until_eol(info);
        }
        
        sNode* node = NULL;
        if(!expression(&node, info)) {
            fprintf(stderr, "%s %d: invalid for exp\n", info->fname, info->sline);
            return null;
        }
        
        sNode* list_node = node;
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_until_eol(info);
        }
        else {
            fprintf(stderr, "%s %d: require : for block\n", info->fname, info->sline);
            return null;
        }
        
        list<sNode*>* for_nodes = parse_block(info);
        
        result = new sNode(new sForNode(var_name, for_nodes, list_node, info));
    }
    else if(word_cmp(info->p, "break")) {
        info->p += strlen("break");
        skip_spaces_until_eol(info);
        
        result = new sNode(new sBreakNode(info));
    }
    else if(word_cmp(info->p, "continue")) {
        info->p += strlen("continue");
        skip_spaces_until_eol(info);
        
        result = new sNode(new sContinueNode(info));
    }
    
    if(result == null) {
        result = inherit(info);
    }
    
    return result;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 90
{
    switch(*info->p) {
        case OP_INIT_GET_ELEMENT: {
            info->p++;
            info->get_element_num = 0;
            
            info->for_list_value = info->stack[info->stack_num-1];
            info->stack_num--;
            
            if(info->for_list_value.kind != kListValue && info->for_list_value.kind != kTupleValue) {
                info->exception.kind = kExceptionValue;
                info->exception.value.expValue = kExceptionTypeError;
                return false;
            }
            }
            break;
            
        case OP_GET_ELEMENT: {
            info->p++;
            
            int end_point = *info->p;
            info->p++;
            
            bool in_global_context = (bool)*info->p;
            info->p++;
            
            int offset = *info->p;
            info->p++;
            
            int len = *info->p;
            info->p++;
            
            char* var_name = (char*)info->p;
            
            char var_name2[len+1];
            memcpy(var_name2, var_name, len);
            var_name2[len] = '\0'
            
            info->p += offset;
            
            ZVALUE list_value = info->for_list_value;
            list<ZVALUE>* list_object = list_value.listValue;
            if(list_value.kind == kListValue) {
                list_object = list_value.listValue;
            }
            else if(list_value.kind == kTupleValue) {
                list_object = list_value.tupleValue;
            }
            
            ZVALUE element = list_object.item(info->get_element_num, gUndefined);
            
            if(element.kind == kUndefinedValue) {
                info->p = (int*)((char*)info->head + end_point);
            }
            
            if(in_global_context) {
                if(info.module_name) {
                    sModule* module = gModules.at(info.module_name, null!);
                    
                    if(module == null) {
                        info->exception.kind = kExceptionValue;
                        info->exception.value.expValue = kExceptionVarNotFound;
                        return false;
                    }
                    
                    module.global_vars.insert(string(var_name2), element);
                }
            }
            else {
                if(info.module_name) {
                    sModule* module = gModules.at(info.module_name, null!);
                    
                    if(module == null) {
                        info->exception.kind = kExceptionValue;
                        info->exception.value.expValue = kExceptionVarNotFound;
                        return false;
                    }
                    
                    if(info.class_name) {
                        sClass* klass = module->classes.at(info.class_name, null!);
                        
                        if(klass == null) {
                            info->exception.kind = kExceptionValue;
                            info->exception.value.expValue = kExceptionVarNotFound;
                            return false;
                        }
                        
                        klass.class_vars.insert(string(var_name2), element);
                    }
                    else {
                        info->vtable.insert(string(var_name2), element);
                    }
                }
            }
            
            info->get_element_num++;
            }
            break;
            
        default: {
            bool result = inherit(codes, params!, info);
            if(!result) {
                return false;
            }
            }
            break;
    }
    
    return true;
}
