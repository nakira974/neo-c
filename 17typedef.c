#include "common.h"

struct sTypedefNode
{
    string mTypeName;
    sType*% mType;
  
    int sline;
    string sname;
};

sTypedefNode*% sTypedefNode*::initialize(sTypedefNode*% self, string type_name, sType*% type, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mTypeName = string(type_name);
    self.mType = clone type;

    return self;
}

bool sTypedefNode*::compile(sTypedefNode* self, sInfo* info)
{
    string type_name = string(self.mTypeName);
    sType* type = self.mType;
    
    info.types.insert(string(type_name), clone type);
    
    if(info.enum_typedef_already_output[string(type_name)] == false) {
        info.enum_typedef_already_output.insert(string(type_name), true);
        
        add_come_code_at_source_head(info, "typedef %s;\n", make_define_var(type, type_name, info));
        add_come_code_to_auto_come_header(info, "typedef %s;\n", make_come_define_var(type, type_name, info));
    }

    return TRUE;
}

int sTypedefNode*::sline(sTypedefNode* self, sInfo* info)
{
    return self.sline;
}

string sTypedefNode*::sname(sTypedefNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 95
{
    if(buf === "typedef") {
        var type, type_name = parse_type(info, true@parse_variable_name) throws;
        
        return new sNode(new sTypedefNode(type_name, type, info));
    }
    
    return inherit(buf, head, head_sline, info) throws;
}
