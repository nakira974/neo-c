#include "common.h"

struct sUnionNode
{
    sType*% mType;
    string mComeHeader;
  
    int sline;
    string sname;
};

sUnionNode*% sUnionNode*::initialize(sUnionNode*% self, sType*% type, string come_header, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mComeHeader = string(come_header);

    self.mType = clone type;
    
    info.types.insert(string(type.mName), clone type);

    return self;
}

bool sUnionNode*::compile(sUnionNode* self, sInfo* info)
{
    sType* type = self.mType;
    sClass* klass = type->mClass;
    
    string come_header = self.mComeHeader;
    
    buffer*% buf = new buffer();
    
    buf.append_str(xsprintf("union %s\n{\n", type.mName));
    
    foreach(it, type.mFields) {
        var name, type = it;
        
        buf.append_str(make_define_var(type, name, info));
        buf.append_str(";\n");
    }
    
    buf.append_str(xsprintf("};\n", type.mName));
    
    if(!info.enum_typedef_already_output[string(klass->mName)]) {
        add_come_code_at_source_head(info, "%s", buf.to_string());
        add_come_code_to_auto_come_header(info, "%s", come_header);
        
        info.enum_typedef_already_output[string(klass->mName)] = true;
    }

    return TRUE;
}

int sUnionNode*::sline(sUnionNode* self, sInfo* info)
{
    return self.sline;
}

string sUnionNode*::sname(sUnionNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 97
{
    if(buf === "union") {
        char* header_head = head;
        
        string type_name = parse_word(info) throws;
        
        info.classes.insert(type_name, new sClass(name:type_name, union_:true));
        
        sType*% type = new sType(type_name, info);
        
        expected_next_character('{', info) throws;
        
        while(true) {
            var type2, name = parse_type(info, true@parse_variable_name) throws;
            expected_next_character(';', info) throws;
            
            type.mFields.push_back(new tuple2<string, sType*%>(name, type2));
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
        
        char* header_tail = info.p.p;
        
        buffer*% header_buf = new buffer();
        
        header_buf.append(header_head, header_tail - header_head);
        header_buf.append_char('\0');
        
        return new sNode(new sUnionNode(type, header_buf.to_string(), info));
    }
    
    return inherit(buf, head, head_sline, info) throws;
}
