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
    
    if(!type.mGenericsStruct) {
        info.types.insert(string(type.mName), clone type);
    }

    return self;
}

bool is_no_solve_generics_type(sType* type, sInfo* info)
{
    sClass* klass = type->mClass;
    
    if(klass->mGenerics) {
        return true;
    }
    
    foreach(it, klass->mFields) {
        var name, type2 = it;
        
        if(type->mClass.mName !== type2.mClass.mName) {
            if(is_no_solve_generics_type(type2, info)) {
                return true;
            }
        }
    }
    
    return false;
}

bool define_generics_struct(sType* type, sInfo* info)
{
    sType*% generics_type = clone type;
    string new_name = create_generics_name(generics_type, info);
    
    if(!info.classes.find(new_name)) {
        sClass*% new_class = new sClass(name:new_name, struct_:true);
        info.classes.insert(new_name, new_class);
        new_class.mNoneGenericsName = string(type.mName);
        sClass*% generics_class = clone info.classes[type.mName];
        
        buffer*% buf = new buffer();
        
        buf.append_str(xsprintf("struct %s\n{\n", new_name));
        
        int i = 0;
        bool no_solve_generics_type = false;
        foreach(it, generics_class.mFields) {
            var name, type = it;
            
            sType*% new_type = solve_generics(type, generics_type, info).catch {
                return false;
            }
            
            if(is_no_solve_generics_type(new_type, info)) {
                no_solve_generics_type = true;
            }
            
            new_class.mFields.push_back((clone name, clone new_type));
            
            buf.append_str("    ");
            buf.append_str(make_define_var(new_type, name, info));
            buf.append_str(";\n");
            
            i++;
        }
        
        buf.append_str("};\n");
        
        if(!no_solve_generics_type) {
            add_come_code_at_source_head(info, "%s", buf.to_string());
        }
    }
    
    return true;
}

void define_struct(sClass* klass, sInfo* info)
{
    buffer*% buf = new buffer();
    
    buf.append_str(xsprintf("struct %s\n{\n", klass.mName));
    
    foreach(it, klass.mFields) {
        var name, type = it;
        
        buf.append_str("    ");
        buf.append_str(make_define_var(type, name, info));
        buf.append_str(";\n");
    }
    
    buf.append_str("};\n");
    
    add_come_code_at_source_head(info, "%s", buf.to_string());
}

bool sStructNode*::compile(sStructNode* self, sInfo* info)
{
    sType* type = self.mType;
    
    if(!type.mGenericsStruct) {
        define_struct(type.mClass, info);
    }

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
        
        bool generics_struct = false;
        if(*info->p == '<') {
            generics_struct = true;
            
            info.generics_type_names.reset();
            
            info->p++;
            skip_spaces_and_lf(info);
            
            while(true) {
                var T = parse_word(info).catch {
                    throw;
                }
                info.generics_type_names.push_back(T);
                
                if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    err_msg(info, "invalid generics struct definition");
                    throw;
                }
            }
        }
        
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
        
        info.generics_type_names.reset();
        
        type.mGenericsStruct = generics_struct;
        
        return new sNode(new sStructNode(type, info));
    }
    
    return inherit(buf, head, info).catch {
        throw;
    }
}
