#include "common.h"

class sTrueNode(sParserInfo* info)
{
    bool compile(sFunNode* self, buffer* codes, sParserInfo* info)
    {
        codes.append_int(OP_BOOL_VALUE);
        
        codes.append_int(1);
        
        info->stack_num++;
        
        return true;
    }
};

class sFalseNode(sParserInfo* info)
{
    bool compile(sFunNode* self, buffer* codes, sParserInfo* info)
    {
        codes.append_int(OP_BOOL_VALUE);
        
        codes.append_int(0);
        
        info->stack_num++;
        
        return true;
    }
};

class sNoneNode(sParserInfo* info)
{
    bool compile(sFunNode* self, buffer* codes, sParserInfo* info)
    {
        codes.append_int(OP_NONE_VALUE);
        
        info->stack_num++;
        
        return true;
    }
};

class sIfNode(sNode* if_exp, list<sNode*>* if_nodes, vector<sNode*>* elif_exps, vector<list<sNode*>*>* elif_blocks, list<sNode*>*? else_nodes, sParserInfo* info)
{
    sNode* self.if_exp = if_exp;
    list<sNode*>* self.if_nodes = if_nodes;
    vector<sNode*>* self.elif_exps = elif_exps;
    vector<list<sNode*>*>* self.elif_blocks = elif_blocks;
    list<sNode?>*? self.else_nodes = null;
    if(else_nodes) {
        self.else_nodes = else_nodes;
    }
    
    bool compile(sIfNode* self, buffer* codes, sParserInfo* info)
    {
        sNode* if_exp = self.if_exp;
        list<sNode*>* if_nodes = self.if_nodes;
        vector<sNode*>* elif_exps = self.elif_exps;
        vector<list<sNode*>*>* elif_blocks = self.elif_blocks;
        list<sNode*>* else_nodes = self.else_nodes;
        
        vector<int>* end_points = new vector<int>();
        
        if(!if_exp.compile->(codes, info)) {
            return false;
        }
        
        codes.append_int(OP_IF);
        int false_jump_point = codes.len;
        codes.append_int(0);
        
        info->stack_num--;
        
        compile_block(codes, if_nodes, info);
        
        codes.append_int(OP_GOTO);
        
        int end_point = codes.len;
        end_points.push_back(end_point);
        codes.append_int(0);
        
        int* p = (int*)(codes.buf + false_jump_point);
        *p = codes.len;
        
        for(int i= 0; i<elif_exps.length(); i++) {
            sNode* elif_exp = elif_exps.item(i, null);
            list<sNode*>* elif_nodes = elif_blocks.item(i, null);
            
            if(!elif_exp.compile->(codes, info)) {
                return false;
            }
            
            codes.append_int(OP_IF);
            int false_jump_point = codes.len;
            codes.append_int(0);
            
            info->stack_num--;
            
            compile_block(codes, elif_nodes, info);
            
            codes.append_int(OP_GOTO);
            
            int end_point = codes.len;
            end_points.push_back(end_point);
            codes.append_int(0);
            
            int* p = (int*)(codes.buf + false_jump_point);
            *p = codes.len;
        }
        
        if(else_nodes) {
            compile_block(codes, else_nodes, info);
        }
        
        for(int i=0; i<end_points.length(); i++) {
            int end_point = end_points.item(i, -1);
            
            int* p = (int*)(codes.buf + end_point);
            
            *p = codes.length();
        }
        
        return true;
    }
};

static bool word_cmp(char* p, char* word2)
{
    bool result = strstr(p, word2) == p;
    
    char c = p[strlen(word2)];
    
    if(result && (c == '\n' || c == ' ' || c == '\t' || c == '\0' || c == ':')) {
        return true;
    }
    
    return false;
}

sNode* exp_node(sParserInfo* info) version 8
{
    sNode* result = null;
    
    if(word_cmp(info->p, "True")) {
        info->p += strlen("True");
        skip_spaces_until_eol(info);
        
        result = new sNode(new sTrueNode(info));
    }
    else if(word_cmp(info->p, "False")) {
        info->p += strlen("False");
        skip_spaces_until_eol(info);
        
        result = new sNode(new sFalseNode(info));
    }
    else if(word_cmp(info->p, "None")) {
        info->p += strlen("None");
        skip_spaces_until_eol(info);
        
        result = new sNode(new sNoneNode(info));
    }
    else if(word_cmp(info->p, "if")) {
        info->p += strlen("if");
        skip_spaces_until_eol(info);
        
        sNode* node = NULL;
        if(!expression(&node, info)) {
            fprintf(stderr, "%s %d: invalid if exp\n", info->fname, info->sline);
            return null;
        }
        
        sNode* if_exp = node;
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_until_eol(info);
        }
        else {
            fprintf(stderr, "%s %d: require : for block\n", info->fname, info->sline);
            return null;
        }
        
        list<sNode*>* if_nodes = parse_block(info);
        
        vector<sNode*>* elif_exps = new  vector<sNode*>.initialize();
        vector<list<sNode*>*>* elif_blocks = new  vector<list<sNode*>*>.initialize();
        
        while(word_cmp(info->p, "elif")) {
            info->p += strlen("elif");
            skip_spaces_until_eol(info);
            
            sNode* node = null;
            if(!expression(&node, info)) {
                fprintf(stderr, "%s %d: invalid if exp\n", info->fname, info->sline);
                return null;
            }
            
            elif_exps.push_back(node);
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            else {
                fprintf(stderr, "%s %d: require : for block\n", info->fname, info->sline);
                return null;
            }
            
            list<sNode*>* elif_block = parse_block(info);
            
            elif_blocks.push_back(elif_block);
        }
        
        list<sNode*>*? else_nodes = null;
        
        if(word_cmp(info->p, "else")) {
            info->p += strlen("else");
            skip_spaces_until_eol(info);
            
            if(*info->p == ':') {
                info->p++;
                skip_spaces_until_eol(info);
            }
            else {
                fprintf(stderr, "%s %d: require : for block\n", info->fname, info->sline);
                return null;
            }
            
            else_nodes = nullable parse_block(info);
        }
        
        result = new sNode(new sIfNode(if_exp, if_nodes, elif_exps, elif_blocks, else_nodes, info));
    }
    
    if(result == null) {
        result = inherit(info);
    }
    
    return result;
}

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 92
{
    switch(*info->p) {
        case OP_BOOL_VALUE: {
            info->p++;
            int value = *info->p;
            info->p++;
            
            info->stack[info->stack_num].kind = kBoolValue;
            info->stack[info->stack_num].value.boolValue = value;
            info->stack_num++;
            }
            break;
            
        case OP_NONE_VALUE: {
            info->p++;
            
            info->stack[info->stack_num]= gNoneValue;
            info->stack_num++;
            }
            break;
            
        case OP_IF: {
            info->p++;
            
            int value = *info->p;
            info->p++;
            
            bool exp = info->stack[info->stack_num-1].value.boolValue;
            info->stack_num--;
            
            if(!exp) {
                info->p = (int*)((char*)info->head + value);
            }
            }
            break;
            
        case OP_GOTO: {
            info->p++;
            
            int value = *info->p;
            info->p++;
            
            info->p = (int*)((char*)info->head + value);
            }
            break;
            
        default: {
            bool result = inherit(codes, params, info);
            if(!result) {
                return false;
            }
            }
            break;
    }
    
    return true;
}

