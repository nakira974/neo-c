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
    
    if(type_name === "__darwin_va_list") {
        info.classes.insert(string("__darwin_va_list"), new sClass("__darwin_va_list", number:true));
        
        sType*% type = new sType("__darwin_va_list", info);
        type->mOriginalTypeName = string("__darwin_va_list");
        
        info.types.insert(string(type_name), clone type);
        
        add_come_code_at_source_head(info, "typedef __builtin_va_list __darwin_va_list;\n");
    }
    else {
        sType*% type = clone self.mType;
        
        if(type_name !== "va_list") {
            type->mOriginalTypeName = string(type_name);
        }
        
        info.types.insert(string(type_name), clone type);
        
        add_come_code_at_source_head(info, "typedef %s;\n", make_define_var(type, type_name, info, true@in_header));
    }

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
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        info.in_typedef = false;
        info.in_typedef = in_typedef;
        
        return new sNode(new sTypedefNode(type_name, type, info));
    }
    
    return inherit(string(buf), head, head_sline, info);
}
