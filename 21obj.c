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
    
    buffer*% type_name = new buffer();
    
    type_name.append_str(type->mClass->mName);
    for(int i=0; i<type.mPointerNum; i++) {
        type_name.append_str("*");
    }
    
    come_value.c_value = xsprintf("(%s*)calloc(1, sizeof(%s)*%s)", type_name.to_string(), type_name.to_string(), num_string.to_string());
    come_value.type = clone type;
    come_value.type->mPointerNum ++;
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
    
    return inherit(buf, head ,info).catch {
        throw;
    }
}
