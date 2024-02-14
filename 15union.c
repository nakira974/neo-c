#include "common.h"

struct sUnionNode
{
    sType*% mType;
  
    int sline;
    string sname;
};

sUnionNode*% sUnionNode*::initialize(sUnionNode*% self, sType*% type, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mType = clone type;
    
    info.types.insert(string(type.mClass.mName), clone type);

    return self;
}

bool sUnionNode*::terminated()
{
    return true;
}

bool sUnionNode*::compile(sUnionNode* self, sInfo* info)
{
    sType* type = self.mType;
    sClass* klass = type->mClass;
    
    if(!klass->mOutputed) {
        klass->mOutputed = true;
        
        buffer*% buf = new buffer();
        
        buf.append_str(xsprintf("union %s\n{\n", type.mClass.mName));
        
        //klass = info.classes[klass->mName];
        foreach(it, klass.mFields) {
            var name, type = it;
            
            buf.append_str(make_define_var(type, name, info));
            buf.append_str(";\n");
        }
        
        buf.append_str(xsprintf("};\n", type.mClass.mName));
        
        add_come_code_at_source_head(info, "%s", buf.to_string());
    }

    return true;
}

int sUnionNode*::sline(sUnionNode* self, sInfo* info)
{
    return self.sline;
}

string sUnionNode*::sname(sUnionNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% parse_union(string type_name, sInfo* info)
{
    info.classes.insert(type_name, new sClass(name:type_name, union_:true));
    
    sType*% type = new sType(type_name, info);
    
    expected_next_character('{', info);
    
    type.mClass.mFields.reset();
    
    while(true) {
        var type2, name, err = parse_type(info, true@parse_variable_name);
        
        if(!err) {
            printf("%s %d: parse_type failed\n", info->sname, info->sline);
            exit(2);
        }
        expected_next_character(';', info);
        
        type.mClass.mFields.push_back(new tuple2<string, sType*%>(name, type2));
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    
    return new sNode(new sUnionNode(type, info));
}

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 97
{
    if(buf === "union") {
        string type_name = parse_word(info);
        
        info.classes.insert(type_name, new sClass(name:type_name, union_:true));
        
        sType*% type = new sType(type_name, info);
        
        expected_next_character('{', info);
        
        type.mClass.mFields.reset();
        
        while(true) {
            var type2, name, err = parse_type(info, true@parse_variable_name);
            if(!err) {
                printf("%s %d: parse_type failed\n", info->sname, info->sline);
                exit(2);
            }
            expected_next_character(';', info);
            
            type.mClass.mFields.push_back(new tuple2<string, sType*%>(name, type2));
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
        
        return new sNode(new sUnionNode(type, info));
    }
    
    return inherit(string(buf), head, head_sline, info);
}

