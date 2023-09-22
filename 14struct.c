#include "common.h"

string get_none_generics_name(char* class_name)
{
    char* p = class_name;
    while(*p) {
        if(*p == '$') {
            return string(class_name).substring(0, p -class_name);
        }
        else {
            p++;
        }
    }
    
    return string(class_name);
}

string create_generics_name(sType* generics_type, sInfo* info)
{
    buffer*% buf = new buffer();
    
    sClass* klass = generics_type->mClass;
    
    char* class_name = klass->mName;
    
    buf.append_str(class_name);
    
    if(generics_type->mGenericsTypes.length() > 0) {
        buf.append_char('$');
        buf.append_char(generics_type->mGenericsTypes.length()+'0');
        
        for(int i=0; i<generics_type->mGenericsTypes.length(); i++) {
            sType* type = generics_type->mGenericsTypes[i];
            string type_name = create_generics_name(type, info);
            
            buf.append_str(type_name);

            for(int i=0; i<type->mPointerNum; i++) {
                buf.append_char('p');
            }
        
            if(type->mHeap) {
                buf.append_str("h");
            }
        }
    }
    
    return buf.to_string();
}

void output_struct(sClass* klass, sInfo* info)
{
/*
    if(info->no_output_come_code) {
        return;
    }
*/
    if(!klass->mOutputed) {
        klass->mOutputed = true;
        
        buffer*% buf = new buffer();
        
        buf.append_str(xsprintf("struct %s\n{\n", klass.mName));
        
        foreach(it, klass.mFields) {
            var name, type = it;
            
            type->mStatic = false;
            
            buf.append_str("    ");
            buf.append_str(make_define_var(type, name, info));
            buf.append_str(";\n");
        }
        
        buf.append_str("};\n");
        
        add_come_code_at_source_head(info, "%s", buf.to_string());
    }
}

bool output_generics_struct(sType* type, sType* generics_type, sInfo* info)
{
/*
    if(info->no_output_come_code) {
        return true;
    }
*/
    string new_name = create_generics_name(type, info);
    
    if(!info.classes.find(new_name)) {
        sClass* generics_class = info.generics_classes[type.mClass.mName];
        
        if(generics_class == null) {
            err_msg(info, "generics_class(%s) is null", type.mClass.mName);
            return false;
        }
        
        sClass*% new_class = new sClass(name:new_name, struct_:true);
        
        info.classes.insert(string(new_name), new_class);
        
        int i = 0;
        foreach(it, generics_class.mFields) {
            var name, type = it;
            
            sType*% new_type = solve_generics(type, generics_type, info);
            
            new_class.mFields.push_back((clone name, clone new_type));
        }
        
        type->mNoSolvedGenericsType.v1 = clone type;
        type->mClass = new_class;
        type->mGenericsTypes.reset();
        
        output_struct(new_class, info);
    }
    else {
        if(type->mNoSolvedGenericsType.v1 == null) {
            type->mNoSolvedGenericsType.v1 = clone type;
        }
        type->mClass = info.classes[new_name];
        type->mGenericsTypes.reset();
    }
    
    return true;
}

struct sStructNode
{
    string mName;
    sClass*% mClass;

    int sline;
    string sname;
};

sStructNode*% sStructNode*::initialize(sStructNode*% self, string name, sClass*% klass, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mName = string(name);
    self.mClass = klass;

    return self;
}

bool sStructNode*::terminated()
{
    return true;
}

bool sStructNode*::compile(sStructNode* self, sInfo* info)
{
    sClass* klass = self.mClass;
    string name = string(self.mName);
    
    if((info.classes.at(name, null) == null || info.classes.at(name, null).mFields.length() == 0) && klass->mFields.length() > 0) 
    {
        info.classes.insert(name, clone klass);
    }
    
    sType*% type = new sType(name, info);
    info.types.insert(name, clone type);
    
    output_struct(klass, info);

    return true;
}

int sStructNode*::sline(sStructNode* self, sInfo* info)
{
    return self.sline;
}

string sStructNode*::sname(sStructNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sStructNobodyNode
{
    string mName;
    sClass*% mClass;
  
    int sline;
    string sname;
};

sStructNobodyNode*% sStructNobodyNode*::initialize(sStructNobodyNode*% self, string name, sClass*% klass, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mName = string(name);
    self.mClass = clone klass;

    return self;
}

bool sStructNobodyNode*::terminated()
{
    return true;
}

bool sStructNobodyNode*::compile(sStructNobodyNode* self, sInfo* info)
{
    string name = string(self.mName);
    sClass* klass = self.mClass;
    
    if(info.classes.at(name, null) == null) {
        info.classes.insert(name, clone klass);
    }
    
    sType*% type = new sType(name, info);
    
    info.types.insert(name, clone type);
    
    add_come_code_at_source_head(info, "struct %s;\n", name);

    return true;
}

int sStructNobodyNode*::sline(sStructNobodyNode* self, sInfo* info)
{
    return self.sline;
}

string sStructNobodyNode*::sname(sStructNobodyNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sGenericsStructNode
{
    int sline;
    string sname;
};

sGenericsStructNode*% sGenericsStructNode*::initialize(sGenericsStructNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}


bool sGenericsStructNode*::terminated()
{
    return true;
}

bool sGenericsStructNode*::compile(sGenericsStructNode* self, sInfo* info)
{

    return true;
}

int sGenericsStructNode*::sline(sGenericsStructNode* self, sInfo* info)
{
    return self.sline;
}

string sGenericsStructNode*::sname(sGenericsStructNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% parse_struct(string type_name, sInfo* info)
{
    sClass*% klass;
    if(info.classes.at(type_name, null) == null) {
        klass = new sClass(name:type_name, struct_:true);
    }
    else {
        klass = clone info.classes.at(type_name, null);
    }
    
    expected_next_character('{', info);
    
    while(true) {
        parse_sharp(info);
        var type2, name, err = parse_type(info, true@parse_variable_name);
        if(!err) {
            exit(2);
        }
        expected_next_character(';', info) ;
        
        klass.mFields.push_back(new tuple2<string, sType*%>(name, type2));
        
        parse_sharp(info);
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp(info);
    }
    
    return new sNode(new sStructNode(string(type_name), klass, info));
}

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 98
{
    if(buf === "struct") {
        char* header_head = head;
        
        string type_name = parse_word(info);
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);
            
            sClass*% struct_class;
            if(info.classes.at(type_name, null) == null) {
                struct_class = new sClass(name:type_name, struct_:true);
            }
            else {
                struct_class = clone info.classes.at(type_name, null);
            }
            
            return new sNode(new sStructNobodyNode(string(type_name), struct_class, info));
        }
        else {
            if(*info->p == '<') {
                info.generics_type_names.reset();
                
                info->p++;
                skip_spaces_and_lf(info);
                
                while(true) {
                    var T = parse_word(info) ;
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
                        exit(2);
                    }
                }
                
                sClass*% generics_class;
                if(info.generics_classes.at(type_name, null) != null) {
                    err_msg(info, "redifined generics struct(%s)", type_name);
                    exit(2);
                }
                else {
                    generics_class = new sClass(name:type_name, struct_:true);
                }
                
                if(info.generics_classes.at(type_name, null) == null) {
                    info.generics_classes.insert(type_name, generics_class);
                }
                
                expected_next_character('{', info) ;
                
                while(true) {
                    parse_sharp(info);
                    
                    var type2, name, err = parse_type(info, true@parse_variable_name);
                    
                    if(!err) {
                        exit(2);
                    }
                    expected_next_character(';', info) ;
                    
                    generics_class.mFields.push_back(new tuple2<string, sType*%>(name, type2));
                    
                    parse_sharp(info);
                    
                    if(*info->p == '}') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp(info);
                }
                
                info.generics_type_names.reset();
                
                return new sNode(new sGenericsStructNode(info));
            }
            else {
                sClass*% struct_class;
                if(info.classes.at(type_name, null) == null) {
                    struct_class = new sClass(name:type_name, struct_:true);
                }
                else {
                    struct_class = clone info.classes.at(type_name, null);
                }
                
                expected_next_character('{', info) ;
                
                while(true) {
                    parse_sharp(info);
                    
                    var type2, name, err = parse_type(info, true@parse_variable_name);
                    if(!err) {
                        exit(2);
                    }
                    expected_next_character(';', info) ;
                    
                    struct_class.mFields.push_back(new tuple2<string, sType*%>(name, type2));
                    
                    parse_sharp(info);
                    
                    if(*info->p == '}') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp(info);
                }
                
                info.generics_type_names.reset();
                
                return new sNode(new sStructNode(string(type_name), clone struct_class, info));
            }
        }
    }
    
    return inherit(string(buf), head, head_sline, info) ;
}
