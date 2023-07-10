#include "common.h"

struct sMethodCallNode {
    sNode*% obj;
    string fun_name;
    list<sNode*%>*% params
    int sline;
    string sname;
};

sMethodCallNode*% sMethodCallNode*::initialize(sMethodCallNode*% self, char* fun_name,sNode*% obj, list<sNode*%>* params, sInfo* info)
{
    self.obj = clone obj;
    self.fun_name = string(fun_name);
    self.params = clone params;
    self.sline = info.sline;
    self.sname = string(info.sname);
    
    return self;
}

int sMethodCallNode*::sline(sMethodCallNode* self, sInfo* info)
{
    return self.sline;
}

string sMethodCallNode*::sname(sMethodCallNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sMethodCallNode*::compile(sMethodCallNode* self, sInfo* info)
{
    char* fun_name = self.fun_name;
    list<sNode*%>* params = self.params;
    sNode* obj = self.obj;
    
    if(!obj.compile->(info)) {
        return false;
    }
    
    CVALUE*% come_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% obj_type = clone come_value.type;
    
    string fun_name2 = create_method_name(obj_type, fun_name);
    
    sFun* fun = info.funcs.at(fun_name2, null!);
    
    if(fun == null) {
        err_msg(info, "founction not found(%s)\n", fun_name);
        return false;
    }
    
    sType* result_type = fun->mResultType;
    
    list<CVALUE*%>*% come_params = new list<CVALUE*%>();
    
    foreach(it, params) {
        if(!it.compile->(info)) {
            return false;
        }
        
        CVALUE*% come_value = get_value_from_stack(-1, info);
        come_params.push_back(come_value);
        dec_stack_ptr(1, info);
    }
    
    buffer*% buf = new buffer();
    
    buf.append_str(fun_name2);
    buf.append_str("(");
    
    int j = 0;
    foreach(it, come_params) {
        buf.append_str(it.c_value);
        
        if(j != come_params.length()-1) {
            buf.append_str(",");
        }
        
        j++;
    }
    buf.append_str(")");
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = buf.to_string();
    come_value2.type = clone result_type;
    come_value2.var = null;
    
    add_come_last_code(info, "%s;\n", buf.to_string());
    
    info.stack.push_back(come_value2);
    
    return true;
}

exception sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 20
{
    expected_next_character('(', info).catch {
        throw;
    }
    
    list<sNode*%>*% params = new list<sNode*%>();
    
    params.push_back(obj);
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        
        sNode*% node = expression(info).catch {
            throw;
        }
        
        params.push_back(node);
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    
    return new sNode(new sMethodCallNode(fun_name, obj, params, info));
}
