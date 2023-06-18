#include "common.h"

struct sStructNode
{
    sType*% mType;
  
    int sline;
    string sname;
};

sStructNode*% sStructNode*::initialize(sStructNode*% self, sType*% type, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mType = clone type;
    
    info.types.insert(string(type.mName), clone type);

    return self;
}

bool sStructNode*::compile(sStructNode* self, sInfo* info)
{
    sType* type = self.mType;
    
    buffer*% buf = new buffer();
    
    buf.append_str(xsprintf("struct %s\n{\n", type.mName));
    
    foreach(it, type.mFields) {
        var name, type = it;
        
        buf.append_str(make_define_var(type, name, info));
        buf.append_str(";\n");
    }
    
    buf.append_str(xsprintf("};\n", type.mName));
    
    add_come_code(info, "%s", buf.to_string());

    return TRUE;
}

int sStructNode*::sline(sStructNode* self, sInfo* info)
{
    return self.sline;
}

string sStructNode*::sname(sStructNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% top_level(char* buf, char* head, sInfo* info) version 98
{
    if(buf === "struct") {
        string type_name = parse_word(info).catch { throw; };
        
        info.classes.insert(type_name, new sClass(name:type_name, struct_:true));
        
        sType*% type = new sType(type_name, info);
        
        expected_next_character('{', info).catch { throw; }
        
        while(true) {
            var type2, name = parse_type(info, true@parse_variable_name).catch {
                throw;
            }
            expected_next_character(';', info).catch { throw; }
            
            type.mFields.push_back(new tuple2<string, sType*%>(name, type2));
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
        
        return new sNode(new sStructNode(type, info));
    }
    
    return inherit(buf, head, info).catch {
        throw;
    }
}
