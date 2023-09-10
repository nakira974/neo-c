#include "common.h"

struct sEnumNode
{
    string mTypeName;
    list<tuple2<string, sNode*%>*%>*% mElements;
  
    int sline;
    string sname;
};

sEnumNode*% sEnumNode*::initialize(sEnumNode*% self, string type_name, list<tuple2<string,sNode*%>*%>* elements, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mTypeName = string(type_name);
    self.mElements = clone elements;

    return self;
}

bool sEnumNode*::terminated()
{
    return true;
}

bool sEnumNode*::compile(sEnumNode* self, sInfo* info)
{
    string type_name = self.mTypeName;
    list<tuple2<string, sNode*%>*%>* elements = self.mElements;
    
    buffer*% buf = new buffer();
    
    if(type_name === "") {
        buf.append_str(xsprintf("enum { ", type_name));
    }
    else {
        buf.append_str(xsprintf("enum %s { ", type_name));
    }
    
    int i = 0;
    foreach(it, elements) {
        var name, value = it;
        
        if(value == null) {
            buf.append_str(name);
        }
        else {
            if(!value.compile->(info)) {
                return false;
            }
            
            CVALUE*% right_value = get_value_from_stack(-1, info);
            dec_stack_ptr(1, info);
            
            add_variable_to_global_table_with_int_value(name, new sType("int", info), right_value.c_value, info);
            
            buf.append_str(xsprintf("%s=%s", name, right_value.c_value));
        }
        
        if(i != elements.length()-1) {
            buf.append_str(",");
        }
        
        i++;
    }
    buf.append_str(xsprintf("};\n", type_name));
    
    add_come_code_at_source_head(info, "%s", buf.to_string());

    return TRUE;
}

int sEnumNode*::sline(sEnumNode* self, sInfo* info)
{
    return self.sline;
}

string sEnumNode*::sname(sEnumNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% parse_enum(string type_name, sInfo* info)
{
    info.classes.insert(type_name, new sClass(name:type_name, enum_:true));
    
    expected_next_character('{', info) throws;
    
    list<tuple2<string,sNode*%>*%>*% elements = new list<tuple2<string,sNode*%>*%>();
    
    while(true) {
        string element_name = parse_word(info) throws;
        
        if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf(info);
            
            sNode*% element_value = expression(info) throws;
            
            elements.push_back(new tuple2<string,sNode*%>(element_name, element_value));
        }
        else {
            elements.push_back(new tuple2<string,sNode*%>(element_name, null!));
        }
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    
    return new sNode(new sEnumNode(type_name, elements, info));
}

exception sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 96
{
    if(buf === "enum") {
        string type_name = null;
        if(*info->p == '{') {
            type_name = string("");
        }
        else {
            type_name = parse_word(info) throws;
            
            info.classes.insert(type_name, new sClass(name:type_name, enum_:true));
        }
        
        expected_next_character('{', info) throws;
        
        list<tuple2<string,sNode*%>*%>*% elements = new list<tuple2<string,sNode*%>*%>();
        
        while(true) {
            string element_name = parse_word(info) throws;
            
            if(*info->p == '=') {
                info->p++;
                skip_spaces_and_lf(info);
                
                bool no_comma = info.no_comma;
                info.no_comma = true;
                sNode*% element_value = expression(info) throws;
                
                info.no_comma = no_comma;
                
                elements.push_back(new tuple2<string,sNode*%>(element_name, element_value));
            }
            else {
                elements.push_back(new tuple2<string,sNode*%>(element_name, null!));
            }
            
            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
        
        return new sNode(new sEnumNode(type_name, elements, info));
    }
    
    return inherit(string(buf), head, head_sline, info) throws;
}
