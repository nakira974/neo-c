#include "common.h"

struct sInterfaceNode {
    string name;
    sClass*% klass;
    
    int sline;
    string sname;
};

sInterfaceNode*% sInterfaceNode*::initialize(sInterfaceNode*% self, string name, sClass*% klass, sInfo* info)
{
    self.name = string(name);
    self.klass = clone klass;
    
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sInterfaceNode*::sline(sInterfaceNode* self, sInfo* info)
{
    return self.sline;
}

string sInterfaceNode*::sname(sInterfaceNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sInterfaceNode*::compile(sInterfaceNode* self, sInfo* info)
{
    string name = string(self.name);
    sClass* klass = self.klass;
    klass->mProtocol = true;
    
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
    
    info.classes.insert(string(name), clone klass);
    
    return true;
}

exception tuple2<sType*%, string>*% parse_interface_function(sInfo* info)
{
    var result_type, var_name = parse_type(info) throws;
    
    string fun_name = parse_word(info) throws;
    
    var param_types, param_names, param_default_parametors, var_args = parse_params(info) throws;
    
    param_types.insert(0, new sType("void*", info));
    param_names.insert(0, string("self"));
    
    sType*% type = new sType("lambda", info);
    
    type->mParamTypes = clone param_types;
    type->mParamNames = clone param_names;
    type->mVarArgs = var_args;
    type->mResultType = new tuple1<sType*%>(clone result_type);
    
    return (type, fun_name);
}

exception sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 92
{
    if(buf === "interface" || buf === "protocol") {
        var type_name = parse_word(info) throws;
        
        sClass*% klass;
        if(info.classes.at(type_name, null) == null) {
            klass = new sClass(name:type_name, struct_:true, protocol_:true);
        }
        else {
            klass = clone info.classes.at(type_name, null);
        }
        
        expected_next_character('{', info) throws;
    
        sType*% voidp = new sType("void", info);
        voidp->mPointerNum++;
        
        klass.mFields.push_back(new tuple2<string, sType*%>(string("_protocol_obj"), voidp));
        
        sType*% finalizer = new sType("lambda", info);
    
        finalizer->mParamTypes = [clone voidp ];
        finalizer->mParamNames = [string("self")];
        finalizer->mVarArgs = false;
        finalizer->mResultType = new tuple1<sType*%>(new sType("void", info));
        
        klass.mFields.push_back(new tuple2<string, sType*%>(string("finalize"), finalizer));
        
        sType*% cloner = new sType("lambda", info);
    
        cloner->mParamTypes = [clone voidp ];
        cloner->mParamNames = [string("self")];
        cloner->mVarArgs = false;
        cloner->mResultType = new tuple1<sType*%>(clone voidp);
        
        klass.mFields.push_back(new tuple2<string, sType*%>(string("clone"), cloner));
        
        while(true) {
            parse_sharp(info);
            var type2, name = parse_interface_function(info) throws;
            expected_next_character(';', info) throws;
            
            klass.mFields.push_back(new tuple2<string, sType*%>(name, type2));
            
            parse_sharp(info);
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp(info);
        }
        
        return new sNode(new sInterfaceNode(string(type_name), klass, info));
    }
    
    return inherit(string(buf), head, head_sline, info) throws;
}
