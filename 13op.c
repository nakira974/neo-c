#include "common.h"

bool operator_overload_fun(sType* type, char* fun_name, CVALUE* left_value, CVALUE* right_value, sInfo* info)
{
    sType*% generics_type = clone type;
    if(generics_type->mNoSolvedGenericsType.v1) {
        generics_type = generics_type->mNoSolvedGenericsType.v1;
    }
    
    if(type->mNoSolvedGenericsType.v1) {
        type = type->mNoSolvedGenericsType.v1;
    }
    sClass* klass = type->mClass;
    char* class_name = klass->mName;
    
    sFun* operator_fun = null;
    
    string fun_name2;
    if(type->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type.mClass.mName);
        
        sType*% obj_type = solve_generics(type, info.generics_type, info);
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null);
        
        
        if(generics_fun) {
            if(!create_generics_fun(string(fun_name2), generics_fun, obj_type, info)) {
                return false;
            }
            
            operator_fun = info->funcs[fun_name2];
        }
        else {
            if(fun_name === "operator_equals") {
                var fun, fun_name = create_equals_automatically(obj_type, "equals", info);
                var fun2, fun_name2 = create_operator_equals_automatically(obj_type, "operator_equals", info);
                
                operator_fun = fun2;
            }
            else if(fun_name === "operator_not_equals") {
                var fun, fun_name = create_equals_automatically(obj_type, "not_equals", info);
                var fun2, fun_name2 = create_operator_not_equals_automatically(obj_type, "operator_not_equals", info);
                
                operator_fun = fun2;
            }
            else {
                operator_fun = info->funcs[fun_name2];
            }
        }
    }
    else {
        fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
            operator_fun = info->funcs[new_fun_name];
            
            if(operator_fun) {
                fun_name2 = string(new_fun_name);
                break;
            }
        }
        
        if(operator_fun == NULL) {
            operator_fun = info->funcs[fun_name2];
        }
    }
    
    bool result = false;
    
    if(operator_fun && (type->mGenericsTypes.length() > 0 || (left_value.type.mClass.mName === right_value.type.mClass.mName && left_value.type.mPointerNum == right_value.type.mPointerNum))) {
        CVALUE*% come_value = new CVALUE;
        string left_value2;
        if(operator_fun.mParamTypes[0].mHeap && left_value.type.mHeap) {
            left_value.c_value = increment_ref_count_object(left_value.type, left_value.c_value, info);
            left_value2 = xsprintf("%s", left_value.c_value);
        }
        else {
            left_value2 = clone left_value.c_value;
        }
        string right_value2;
        if(operator_fun.mParamTypes[1].mHeap && right_value.type.mHeap) {
            right_value.c_value = increment_ref_count_object(right_value.type, right_value.c_value, info);
            right_value2 = xsprintf("%s", right_value.c_value);
        }
        else {
            right_value2 = clone right_value.c_value;
        }
        
        come_value.c_value = xsprintf("%s(%s,%s)", fun_name2, left_value2, right_value2);
        
        sType*% type2 = clone operator_fun->mResultType;
        
        sType*% type3 = solve_generics(type2, generics_type, info);
        
        if(type3->mHeap) {
            come_value.c_value = append_object_to_right_values(come_value.c_value, type3, info);
        }
        
        come_value.type = clone type3;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
        
        result = true;
    }
    
    return result;
}

struct sNullNode
{
  int sline;
  string sname;
};


sNullNode*% sNullNode*::initialize(sNullNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}

bool sNullNode*::terminated()
{
    return false;
}

bool sNullNode*::compile(sNullNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("((void*)0)");
    come_value.type = new sType("void*", info);
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return true;
}

int sNullNode*::sline(sNullNode* self, sInfo* info)
{
    return self.sline;
}

string sNullNode*::sname(sNullNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% create_null_object(sInfo* info)
{
    return new sNode(new sNullNode(info));
}


struct sAddNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sAddNode*% sAddNode*::initialize(sAddNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sAddNode*::terminated()
{
    return false;
}

bool sAddNode*::compile(sAddNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_add";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s+%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sAddNode*::sline(sAddNode* self, sInfo* info)
{
    return self.sline;
}

string sAddNode*::sname(sAddNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sSubNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sSubNode*% sSubNode*::initialize(sSubNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sSubNode*::terminated()
{
    return false;
}

bool sSubNode*::compile(sSubNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_sub";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s-%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sSubNode*::sline(sSubNode* self, sInfo* info)
{
    return self.sline;
}

string sSubNode*::sname(sSubNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sMultNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sMultNode*% sMultNode*::initialize(sMultNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sMultNode*::terminated()
{
    return false;
}

bool sMultNode*::compile(sMultNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_mult";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s*%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sMultNode*::sline(sMultNode* self, sInfo* info)
{
    return self.sline;
}

string sMultNode*::sname(sMultNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sDivNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sDivNode*% sDivNode*::initialize(sDivNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sDivNode*::terminated()
{
    return false;
}

bool sDivNode*::compile(sDivNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_div";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s/%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sDivNode*::sline(sDivNode* self, sInfo* info)
{
    return self.sline;
}

string sDivNode*::sname(sDivNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sModNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sModNode*% sModNode*::initialize(sModNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sModNode*::terminated()
{
    return false;
}

bool sModNode*::compile(sModNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_mod";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s%%%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sModNode*::sline(sModNode* self, sInfo* info)
{
    return self.sline;
}

string sModNode*::sname(sModNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLShiftNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sLShiftNode*% sLShiftNode*::initialize(sLShiftNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sLShiftNode*::terminated()
{
    return false;
}

bool sLShiftNode*::compile(sLShiftNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_lshift";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s<<%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sLShiftNode*::sline(sLShiftNode* self, sInfo* info)
{
    return self.sline;
}

string sLShiftNode*::sname(sLShiftNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sRShiftNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sRShiftNode*% sRShiftNode*::initialize(sRShiftNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sRShiftNode*::terminated()
{
    return false;
}

bool sRShiftNode*::compile(sRShiftNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_rshift";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s>>%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sRShiftNode*::sline(sRShiftNode* self, sInfo* info)
{
    return self.sline;
}

string sRShiftNode*::sname(sLShiftNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sGtEqNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sGtEqNode*% sGtEqNode*::initialize(sGtEqNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sGtEqNode*::terminated()
{
    return false;
}

bool sGtEqNode*::compile(sGtEqNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_gteq";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s>=%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sGtEqNode*::sline(sGtEqNode* self, sInfo* info)
{
    return self.sline;
}

string sGtEqNode*::sname(sGtEqNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLtEqNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sLtEqNode*% sLtEqNode*::initialize(sLtEqNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sLtEqNode*::terminated()
{
    return false;
}

bool sLtEqNode*::compile(sLtEqNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_lteq";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s<=%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sLtEqNode*::sline(sLtEqNode* self, sInfo* info)
{
    return self.sline;
}

string sLtEqNode*::sname(sLtEqNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLtNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sLtNode*% sLtNode*::initialize(sLtNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sLtNode*::terminated()
{
    return false;
}

bool sLtNode*::compile(sLtNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_lt";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s<%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sLtNode*::sline(sLtNode* self, sInfo* info)
{
    return self.sline;
}

string sLtNode*::sname(sLtNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sGtNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sGtNode*% sGtNode*::initialize(sGtNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sGtNode*::terminated()
{
    return false;
}

bool sGtNode*::compile(sGtNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_gt";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s>%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sGtNode*::sline(sGtNode* self, sInfo* info)
{
    return self.sline;
}

string sGtNode*::sname(sGtNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sEqNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sEqNode*% sEqNode*::initialize(sEqNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

int sEqNode*::sline(sEqNode* self, sInfo* info)
{
    return self.sline;
}

string sEqNode*::sname(sEqNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sEqNode*::terminated()
{
    return false;
}

bool sEqNode*::compile(sEqNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s==%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mHeap = false;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return true;
}

struct sNotEqNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sNotEqNode*% sNotEqNode*::initialize(sNotEqNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sNotEqNode*::terminated()
{
    return false;
}

bool sNotEqNode*::compile(sNotEqNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s!=%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.type->mHeap = false;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return true;
}

int sNotEqNode*::sline(sNotEqNode* self, sInfo* info)
{
    return self.sline;
}

string sNotEqNode*::sname(sNotEqNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sEq2Node
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sEq2Node*% sEq2Node*::initialize(sEq2Node*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}


bool sEq2Node*::terminated()
{
    return false;
}

bool sEq2Node*::compile(sEqNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_equals";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s==%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sEq2Node*::sline(sEq2Node* self, sInfo* info)
{
    return self.sline;
}

string sEq2Node*::sname(sEq2Node* self, sInfo* info)
{
    return string(self.sname);
}

struct sNotEq2Node
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sNotEq2Node*% sNotEq2Node*::initialize(sNotEq2Node*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sNotEq2Node*::terminated()
{
    return false;
}

bool sNotEq2Node*::compile(sNotEq2Node* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_not_equals";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s!=%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sNotEq2Node*::sline(sNotEq2Node* self, sInfo* info)
{
    return self.sline;
}

string sNotEq2Node*::sname(sNotEq2Node* self, sInfo* info)
{
    return string(self.sname);
}

struct sAndNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sAndNode*% sAndNode*::initialize(sAndNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sAndNode*::terminated()
{
    return false;
}

bool sAndNode*::compile(sAndNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_and";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s&%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sAndNode*::sline(sAndNode* self, sInfo* info)
{
    return self.sline;
}

string sAndNode*::sname(sAndNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sXOrNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sXOrNode*% sXOrNode*::initialize(sXOrNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sXOrNode*::terminated()
{
    return false;
}

bool sXOrNode*::compile(sXOrNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_xor";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s^%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sXOrNode*::sline(sXOrNode* self, sInfo* info)
{
    return self.sline;
}

string sXOrNode*::sname(sXOrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sOrNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};

sOrNode*% sOrNode*::initialize(sOrNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sOrNode*::terminated()
{
    return false;
}

bool sOrNode*::compile(sOrNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_or";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s|%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sOrNode*::sline(sOrNode* self, sInfo* info)
{
    return self.sline;
}

string sOrNode*::sname(sOrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sAndAndNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};

sAndAndNode*% sAndAndNode*::initialize(sAndAndNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sAndAndNode*::terminated()
{
    return false;
}

bool sAndAndNode*::compile(sAndAndNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_andand";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s&&%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sAndAndNode*::sline(sAndAndNode* self, sInfo* info)
{
    return self.sline;
}

string sAndAndNode*::sname(sAndAndNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sOrOrNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};

sOrOrNode*% sOrOrNode*::initialize(sOrOrNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sOrOrNode*::terminated()
{
    return false;
}

bool sOrOrNode*::compile(sOrOrNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sType*% type = left_value.type;
    
    char* fun_name = "operator_oror";
    bool calling_fun = operator_overload_fun(type, fun_name, left_value, right_value, info);
    
    if(!calling_fun) {
        CVALUE*% come_value = new CVALUE;
        
        come_value.c_value = xsprintf("%s||%s", left_value.c_value, right_value.c_value);
        come_value.type = clone left_value.type;
        come_value.type->mHeap = false;
        come_value.var = null;
        
        add_come_last_code(info, "%s;\n", come_value.c_value);
        
        info.stack.push_back(come_value);
    }

    return true;
}

int sOrOrNode*::sline(sOrOrNode* self, sInfo* info)
{
    return self.sline;
}

string sOrOrNode*::sname(sOrOrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sCommaNode
{
  sNode*% mLeft;
  sNode*% mRight;
  
  int sline;
  string sname;
};


sCommaNode*% sCommaNode*::initialize(sCommaNode*% self, sNode*% left, sNode*% right, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mLeft = clone left;
    self.mRight = clone right;

    return self;
}

bool sCommaNode*::terminated()
{
    return false;
}

bool sCommaNode*::compile(sCommaNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* left_node = self.mLeft;

    if(!left_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% left_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* right_node = self.mRight;

    if(!right_node.compile->(info)) {
        return false;
    }
    
    CVALUE*% right_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s,%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return true;
}

int sCommaNode*::sline(sCommaNode* self, sInfo* info)
{
    return self.sline;
}

string sCommaNode*::sname(sCommaNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sConditionalNode
{
  sNode*% mValue1;
  sNode*% mValue2;
  sNode*% mValue3;
  
  int sline;
  string sname;
};


sConditionalNode*% sConditionalNode*::initialize(sConditionalNode*% self, sNode*% value1, sNode*% value2, sNode*% value3, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    self.mValue1 = clone value1;
    self.mValue2 = clone value2;
    self.mValue3 = clone value3;

    return self;
}

bool sConditionalNode*::terminated()
{
    return false;
}

bool sConditionalNode*::compile(sConditionalNode* self, sInfo* info)
{
    /// compile expression ///
    sNode* value1 = self.mValue1;

    if(!value1.compile->(info)) {
        return false;
    }
    
    CVALUE*% value1_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* value2 = self.mValue2;

    if(!value2.compile->(info)) {
        return false;
    }
    
    CVALUE*% value2_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    sNode* value3 = self.mValue3;

    if(!value3.compile->(info)) {
        return false;
    }
    
    CVALUE*% value3_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s?%s:%s", value1_value.c_value, value2_value.c_value, value3_value.c_value);
    come_value.type = clone value1_value.type;
    come_value.var = null;
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    info.stack.push_back(come_value);

    return true;
}

int sConditionalNode*::sline(sConditionalNode* self, sInfo* info)
{
    return self.sline;
}

string sConditionalNode*::sname(sConditionalNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% mult_exp(sInfo* info)
{
    sNode*% node = expression_node(info);
    
    parse_sharp(info)

    while(*info->p) {
        if(!node.terminated->() && *info->p == '*' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = mult_exp(info);
            
            return new sNode(new sMultNode(node, right, info));
        }
        else if(*info->p == '/' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = mult_exp(info);
            
            return new sNode(new sDivNode(node, right, info));
        }
        else if(*info->p == '%' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = expression_node(info);
            
            return new sNode(new sModNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);
    
    return node;
}

sNode*% add_exp(sInfo* info)
{
    sNode*% node = mult_exp(info);
    
    parse_sharp(info)

    while(*info->p) {
        if(*info->p == '+' && *(info->p+1) != '=' && *(info->p+1) != '+') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = add_exp(info);
            
            return new sNode(new sAddNode(node, right, info));
        }
        else if(*info->p == '-' && *(info->p+1) != '=' && *(info->p+1) != '-' && *(info->p+1) != '>') 
        {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = add_exp(info);
            
            return new sNode(new sSubNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);
    
    return node;
}

sNode*% shift_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = add_exp(info);
    
    parse_sharp(info)

    while(*info->p) {
        if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) != '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info);
            
            return new sNode(new sLShiftNode(node, right, info));
        }
        else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) != '=' && *(info->p+2) != '>') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info);
            
            return new sNode(new sRShiftNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);
    
    return node;
}

sNode*% comparison_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = shift_exp(info);
    
    parse_sharp(info)

    while(*info->p) {
        if(*info->p == '>' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info);
            
            return new sNode(new sGtEqNode(node, right, info));
        }
        else if(*info->p == '<' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info);
            
            return new sNode(new sLtEqNode(node, right, info));
        }
        else if(*info->p == '>' && *(info->p+1) != '>') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info);
            
            return new sNode(new sGtNode(node, right, info));
        }
        else if(*info->p == '<' && *(info->p+1) != '<') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = shift_exp(info);
            
            return new sNode(new sLtNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);
    
    return node;
}

sNode*% eq_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = comparison_exp(info);
    
    parse_sharp(info)

    while(*info->p) {
        if(*info->p == '=' && *(info->p+1) == '=' && *(info->p+2) == '=') {
            info->p+=3;
            skip_spaces_and_lf(info);

            sNode*% right = eq_exp(info);
            
            return new sNode(new sEq2Node(node, right, info));
        }
        else if(*info->p == '=' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = eq_exp(info);
            
            return new sNode(new sEqNode(node, right, info));
        }
        else if(*info->p == '!' && *(info->p+1) == '=' && *(info->p+2) == '=') {
            info->p+=3;
            skip_spaces_and_lf(info);

            sNode*% right = eq_exp(info);
            
            return new sNode(new sNotEq2Node(node, right, info));
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = eq_exp(info);
            
            return new sNode(new sNotEqNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);
    
    return node;
}

sNode*% and_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = eq_exp(info);

    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) != '&' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = and_exp(info);

            return new sNode(new sAndNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

sNode*% xor_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = and_exp(info);

    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '^' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = xor_exp(info);

            return new sNode(new sXOrNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

sNode*% or_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = xor_exp(info);

    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '|' && *(info->p+1) != '=' && *(info->p+1) != '|') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% right = or_exp(info);

            return new sNode(new sOrNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

sNode*% andand_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = or_exp(info);

    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = andand_exp(info);

            return new sNode(new sAndAndNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

sNode*% oror_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = andand_exp(info);

    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            skip_spaces_and_lf(info);

            sNode*% right = oror_exp(info);

            return new sNode(new sOrOrNode(node, right, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

sNode*% comma_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = oror_exp(info);
    
    parse_sharp(info);

    while(*info->p) {
        if(!info.no_comma && *info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);

            sNode*% node2 = oror_exp(info);
            
            return new sNode(new sCommaNode(node, node2, info));
        }
        else {
            break;
        }
    }
    
    parse_sharp(info);

    return node;
}

sNode*% conditional_exp(sInfo* info)
{
    parse_sharp(info);
    
    sNode*% node = comma_exp(info);
    
    parse_sharp(info);

    while(*info->p) {
        if(*info->p == '?') {
            info->p++;
            skip_spaces_and_lf(info);

            parse_sharp(info);

            sNode*% value1;
            if(*info->p == ':') {
                value1 = new sNode(new sNullNode(info));
            }
            else {
                value1 = comma_exp(info);
            }

            parse_sharp(info);

            expected_next_character(':', info);

            sNode*% value2 = comma_exp(info);

            parse_sharp(info);

            return new sNode(new sConditionalNode(node, value1, value2, info));
        }
        else {
            break;
        }
    }

    parse_sharp(info);
    
    return node;
}

sNode*% expression(sInfo* info) version 13
{
    parse_sharp(info);

    sNode*% node = conditional_exp(info);
    
    return node;
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 13
{
    if(buf === "null") {
        return new sNode(new sNullNode(info));
    }
    
    return inherit(buf, head,head_sline, info);
}
