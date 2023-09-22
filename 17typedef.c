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

bool sTypedefNode*::terminated()
{
    return true;
}

bool sTypedefNode*::compile(sTypedefNode* self, sInfo* info)
{
    string type_name = string(self.mTypeName);
    sType*% type = clone self.mType;
    
    info.types.insert(string(type_name), clone type);
    
    add_come_code_at_source_head(info, "typedef %s;\n", make_define_var(type, type_name, info, true@in_header));

    return true;
}

int sTypedefNode*::sline(sTypedefNode* self, sInfo* info)
{
    return self.sline;
}

string sTypedefNode*::sname(sTypedefNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 95
{
    if(buf === "typedef") {
        bool in_typedef = info.in_typedef;
        info.in_typedef = true;
        var type, type_name,err = parse_type(info, true@parse_variable_name);
        if(!err) {
            exit(2);
        }
        info.in_typedef = false;
        info.in_typedef = in_typedef;
        
        return new sNode(new sTypedefNode(type_name, type, info));
    }
    
    return inherit(string(buf), head, head_sline, info);
}
