#include "common.h"

struct sStructNode
{
    sType*% mType;
    bool mComeHeader;
  
    int sline;
    string sname;
};

sStructNode*% sStructNode*::initialize(sStructNode*% self, sType*% type, bool come_header, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.mComeHeader = come_header;

    self.mType = clone type;

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
    string new_name = create_generics_name(generics_type, false@no_pointer_name, info);
    
    if(!info.classes.find(new_name)) {
        sClass*% new_class = new sClass(name:new_name, struct_:true);
        info.classes.insert(new_name, new_class);
        new_class.mNoneGenericsName = string(type.mName);
        sClass*% generics_class = clone info.classes[type.mName];
        
        buffer*% buf = new buffer();
        
        buf.append_str(xsprintf("struct %s\n{\n", new_name));
        
        new_class.mFields.reset();
        
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

void define_struct(sClass* klass, bool come_header, sInfo* info)
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
    
    if(!info.enum_typedef_already_output[string(klass->mName)]) {
        add_come_code_at_source_head(info, "%s", buf.to_string());
        
        if(come_header) {
            add_come_code_to_auto_come_header(info, "%s", buf.to_string());
        }
        
        info.enum_typedef_already_output.insert(string(klass->mName), true);
    }
}

bool sStructNode*::compile(sStructNode* self, sInfo* info)
{
    sType* type = self.mType;
    sClass* klass = type.mClass;
    bool come_header = self.mComeHeader;
    
    if(!type.mGenericsStruct) {
        define_struct(type.mClass, come_header, info);
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

struct sStructNobodyNode
{
    sType*% mType;
  
    int sline;
    string sname;
};

sStructNobodyNode*% sStructNobodyNode*::initialize(sStructNobodyNode*% self, sType*% type, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mType = clone type;
    
    info.types.insert(string(type.mName), type);

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
    string new_name = create_generics_name(generics_type, false@no_pointer_name, info);
    
    if(!info.classes.find(new_name)) {
        sClass*% new_class = new sClass(name:new_name, struct_:true);
        info.classes.insert(new_name, new_class);
        new_class.mNoneGenericsName = string(type.mName);
        sClass*% generics_class = clone info.classes[type.mName];
        
        buffer*% buf = new buffer();
        
        buf.append_str(xsprintf("struct %s\n{\n", new_name));
        
        new_class.mFields.reset();
        
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

void define_struct(sClass* klass, bool come_header, sInfo* info)
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
    
    if(!info.enum_typedef_already_output[string(klass->mName)]) {
        add_come_code_at_source_head(info, "%s", buf.to_string());
        
        if(come_header) {
            add_come_code_to_auto_come_header(info, "%s", buf.to_string());
        }
        
        info.enum_typedef_already_output[string(klass->mName)] = true;
    }
}

bool sStructNobodyNode*::compile(sStructNobodyNode* self, sInfo* info)
{
    sType* type = self.mType;
    sClass* klass = type.mClass;
    
    add_come_code_at_source_head(info, "struct %s;\n", klass->mName);
    add_come_code_to_auto_come_header(info, "struct %s;\n", klass->mName);

    return TRUE;
}

int sStructNobodyNode*::sline(sStructNobodyNode* self, sInfo* info)
{
    return self.sline;
}

string sStructNobodyNode*::sname(sStructNobodyNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% parse_struct(string type_name, sInfo* info)
{
    if(info.classes.at(type_name, null) == null) {
        info.classes.insert(type_name, new sClass(name:type_name, struct_:true));
    }
    
    sType*% type = new sType(type_name, info);
    
    expected_next_character('{', info) throws;
    
    if(!type.mGenericsStruct) {
        info.types.insert(string(type.mName), clone type);
    }
    
    type.mFields.reset();
    
    while(true) {
        parse_sharp(info);
        var type2, name = parse_type(info, true@parse_variable_name) throws;
        expected_next_character(';', info) throws;
        
        type.mFields.push_back(new tuple2<string, sType*%>(name, type2));
        
        parse_sharp(info);
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp(info);
    }
    
    return new sNode(new sStructNode(type, true@come_header, info));
}

exception sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 98
{
    if(buf === "struct") {
        char* header_head = head;
        
        string type_name = parse_word(info) throws;
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);
            
            if(info.classes.at(type_name, null) == null) {
                info.classes.insert(type_name, new sClass(name:type_name, struct_:true));
            }
            
            sType*% type = new sType(type_name, info);
    
            if(!type.mGenericsStruct) {
                info.types.insert(string(type.mName), clone type);
            }
            
            return new sNode(new sStructNobodyNode(type, info));
        }
        else {
            bool generics_struct = false;
            if(*info->p == '<') {
                generics_struct = true;
                
                info.generics_type_names.reset();
                
                info->p++;
                skip_spaces_and_lf(info);
                
                while(true) {
                    var T = parse_word(info) throws;
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
            
            if(info.classes.at(type_name, null) == null) {
                info.classes.insert(type_name, new sClass(name:type_name, struct_:true));
            }
            
            sType*% type = new sType(type_name, info);
            
            type.mGenericsStruct = generics_struct;
    
            if(!type.mGenericsStruct) {
                info.types.insert(string(type.mName), clone type);
            }
            
            expected_next_character('{', info) throws;
            
            type.mClass.mFields.reset();
            
            while(true) {
                parse_sharp(info);
                
                var type2, name = parse_type(info, true@parse_variable_name) throws;
                expected_next_character(';', info) throws;
                
                type.mClass.mFields.push_back(new tuple2<string, sType*%>(name, type2));
                
                parse_sharp(info);
                
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp(info);
            }
            char* header_tail = info.p;
            
            info.generics_type_names.reset();
            
            return new sNode(new sStructNode(type, true@come_header, info));
        }
    }
    
    return inherit(string(buf), head, head_sline, info) throws;
}
