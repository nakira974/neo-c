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
    
    string type_name = make_type_name_string(type, false@in_header, info);
    
    come_value.c_value = xsprintf("(%s*)calloc(1, sizeof(%s)*%s)", type_name, type_name, num_string.to_string());
    come_value.type = clone type;
    come_value.type->mPointerNum ++;
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
    
    string type_name = make_type_name_string(type, false@in_header, info);
    
    come_value.c_value = xsprintf("sizeof(%s)", type_name);
    come_value.type = new sType("long", info);
    come_value.type->mUnsigned = true;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);
    
    return true;
}

exception sNode*% string_node(char* buf, char* head, sInfo* info) version 21
{
    if(buf === "new") {
        var type, name = parse_type(info).catch {
            throw;
        }
        
        return new sNode(new sNewNode(type, info));
    }
    else if(buf === "sizeof") {
        expected_next_character('(', info);
        
        /// backword ///
        bool is_type_name_flag = false;
        {
            char* p = info.p.p;
            int sline = info.sline;
            
            var word = parse_word(info).catch {
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
    
    return inherit(buf, head ,info).catch {
        throw;
    }
}
