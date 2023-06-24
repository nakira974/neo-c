#include "common.h"

struct sStoreFieldNode
{
    sNode*% mLeft;
    sNode*% mRight;
    string mName;
  
    int sline;
    string sname;
};

sStoreFieldNode*% sStoreFieldNode*::initialize(sStoreFieldNode*% self, sNode* left, sNode*% right, string name, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;
    self.mName = string(name);

    return self;
}

bool sStoreFieldNode*::compile(sStoreFieldNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    sNode* right = self.mRight;
    string name = string(self.mName);
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    if(!right.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sClass* klass = left_value.type->mClass;
    
    sType*% field_type = null;
    int index = 0;
    foreach(field, klass->mFields) {
        var field_name, field_type2 = field;
        
        if(field_name === name) {
            field_type = clone field_type2;
            break;
        }
        
        index++;
    }
    
    if(index == klass->mFields.length()) {
        err_msg(info, "field not found(%s) in %s", name, klass->mName);
        return false;
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s.%s=%s", left_value.c_value, name, right_value.c_value);
    come_value.type = clone field_type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);

    return true;
}

int sStoreFieldNode*::sline(sStoreFieldNode* self, sInfo* info)
{
    return self.sline;
}

string sStoreFieldNode*::sname(sStoreFieldNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLoadFieldNode
{
    sNode*% mLeft;
    string mName;
  
    int sline;
    string sname;
};

sLoadFieldNode*% sLoadFieldNode*::initialize(sLoadFieldNode*% self, sNode* left, string name, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mName = string(name);

    return self;
}

bool sLoadFieldNode*::compile(sLoadFieldNode* self, sInfo* info)
{
    sNode* left = self.mLeft;
    string name = string(self.mName);
    
    if(!left.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sClass* klass = left_value.type->mClass;
    
    sType*% field_type = null;
    int index = 0;
    foreach(field, klass->mFields) {
        var field_name, field_type2 = field;
        
        if(field_name === name) {
            field_type = clone field_type2;
            break;
        }
        
        index++;
    }
    
    if(index == klass->mFields.length()) {
        err_msg(info, "field not found(%s) in %s", name, klass->mName);
        return false;
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s.%s", left_value.c_value, name);
    come_value.type = clone field_type;
    come_value.var = null;
    
    info.stack.push_back(come_value);

    return true;
}

int sLoadFieldNode*::sline(sLoadFieldNode* self, sInfo* info)
{
    return self.sline;
}

string sLoadFieldNode*::sname(sLoadFieldNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% post_position_operator2(sNode*% node, sInfo* info) version 18
{
    return (sNode*)null;
}

exception sNode*% post_position_operator(sNode*% node, sInfo* info) version 18
{
    while(true){
        if(*info->p == '.') {
            info->p++;
            skip_spaces_and_lf(info);
            
            string field_name = parse_word(info).catch { throw };
            
            if(*info->p == '=') {
                info->p++;
                skip_spaces_and_lf(info);
                
                sNode*% right_node = expression(info).catch { throw }
                
                node = new sNode(new sStoreFieldNode(node, right_node, field_name, info));
            }
            else {
                node = new sNode(new sLoadFieldNode(node, field_name, info));
            }
        }
        else {
            sNode*% node2 = post_position_operator2(node, info).catch {
                throw
            }
            
            if(node2 == null) {
                break;
            }
            
            node = node2;
        }
    }
    
    return node;
}
