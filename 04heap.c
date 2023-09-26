#include "common.h"


sType*% solve_generics(sType* type, sType* generics_type, sInfo* info)
{
    sType*% result = clone type;
    if(generics_type == null) {
        return result;
    }
    if(generics_type.mGenericsTypes.length() == 0) {
        return result;
    }

    sClass* klass = type->mClass;

    if(klass->mName === "lambda") {
        var result_type = solve_generics(type->mResultType.v1, generics_type, info);
        
        result->mResultType = new tuple1<sType*%>(result_type);
        
        list<sType*%>*% new_param_types = new list<sType*%>();

        foreach(it, type->mParamTypes) {
            sType*% new_param_type = solve_generics(it, generics_type, info);
            
            new_param_types.push_back(new_param_type);
        }
        
        result->mParamTypes = new_param_types;
    }
    else if(klass->mGenerics) {
        int generics_number = klass->mGenericsNum;

        if(generics_number >= generics_type->mGenericsTypes.length())
        {
            err_msg(info, "invalid generics parametor number");
            exit(2);
        }

        sClass* klass2 = generics_type->mGenericsTypes[generics_number]->mClass;

        int generics_number2 = klass2->mGenericsNum;

        if(generics_number != generics_number2) 
        {
            var array_num = clone type->mArrayNum;
            bool immutable_ = type->mImmutable;
            int pointer_num = type->mPointerNum;
            bool heap = type->mHeap;
            
            bool no_heap = type->mNoHeap;
            bool no_calling_destructor = type->mNoCallingDestructor;
            
            result = clone generics_type->mGenericsTypes[generics_number];
/*
            if(info.classes[result->mClass->mName]) {
                result->mClass = info.classes[result->mClass->mName];
            }
*/

            if(heap) {
                result->mHeap = heap;
            }
            if(no_heap) {
                result->mNoHeap = true;
                result->mHeap = false;
            }
            if(no_calling_destructor) {
                result->mNoCallingDestructor = true;
            }
            if(immutable_) {
                result->mImmutable = immutable_;
            }
            if(array_num.length() > 0) {
                result->mArrayNum = array_num;
            }
            
            if(pointer_num > 0) {
                result->mPointerNum += pointer_num;
            }
        }
    }
    else {
        result.mGenericsTypes.reset();
        foreach(it, type->mGenericsTypes) {
            var type = solve_generics(it, generics_type, info);
            result->mGenericsTypes.push_back(clone type);
        }
        
        if(!output_generics_struct(result, generics_type, info))
        {
            string new_name = create_generics_name(type, info);
            err_msg(info, "output generics is failed(%s)", new_name);
            exit(1);
        }
    }
    
    return result;
}

sType*% solve_type(sType* type, sType* generics_type, list<sType*%>* method_generics_types, sInfo* info)
{
    sType*% result = clone type;

    if(generics_type) {
        result = solve_generics(result, generics_type, info);
    }
    
    return result;
}

int gRightValueNum = 0;

int get_right_value_id_from_obj(string obj)
{
    char* p = obj;
    if(*p == '(') {
        p++;
        while(*p != ')') {
            p++;
        }
        p++;
        if(*p == '(') {
            p++;
            if(memcmp(p, "right_value", strlen("right_value")) == 0) {
                p += strlen("right_value");
                if(xisdigit(*p)) {
                    int n = 0;
                    while(xisdigit(*p)) {
                        n = n * 10 + *p - '0';
                        p++;
                    }
                    return n;
                }
            }
        }
    }
    
    return -1;
}

string append_object_to_right_values(char* obj, sType*% type, sInfo* info)
{
    if(info->no_output_come_code) {
        return string("");
    }
    var new_value = new sRightValueObject;
    new_value.mType = type;
    new_value.mFreed = false;
    new_value.mID = gRightValueNum;
    new_value.mVarName = xsprintf("right_value%d", gRightValueNum++);
    new_value.mFunName = clone info->come_fun->mName;
    new_value.mBlockLevel = info->block_level;
    
    info.right_value_objects.push_back(new_value);
    
    string buf = xsprintf("void* right_value%d;\n", gRightValueNum-1);
    add_come_code_at_function_head(info, buf);
    
    return xsprintf("((%s)(%s=%s))", make_type_name_string(type, false@in_header, true@array_cast_pointer, info), new_value->mVarName, obj);
}

void remove_object_from_right_values(int right_value_num, sInfo* info)
{
    int i = 0;
    foreach(it, info->right_value_objects) {
        if(it->mID == right_value_num) {
            break;
        }
        i++;
    }
    
    info->right_value_objects.delete(i, i+1);
}

string increment_ref_count_object(sType* type, char* obj, sInfo* info)
{
    sClass* klass = type->mClass;
    
    string type_name = make_type_name_string(type, false@in_header, false@array_cast_pointer, info);
/*
    if(klass->mProtocol && type->mPointerNum == 1) {
        static int inf_num = 0;
        string buf = xsprintf("%s* _inf_valueX%d;\n", type_name, ++inf_num);
        add_come_code_at_function_head(info, buf);
        string inf_c_value = xsprintf("_inf_valueX%d", inf_num);
        string name = xsprintf("_inf_valueX_obj%d", inf_num);
        add_come_code_at_function_head(info, "%s;\n", make_define_var(type, name, info));
        add_come_code(info, "%s=%s;\n", name, obj);
        add_come_code(info, xsprintf("%s=(%s)come_increment_ref_count(%s);\n", inf_c_value, type_name, name));
//        add_come_code(info, xsprintf("if(%s) { come_increment_ref_count(((%s)%s)->_protocol_obj);}\n", name, type_name, name));
        return xsprintf("%s", inf_c_value);
    }
*/
    
    return xsprintf("(%s)come_increment_ref_count(%s)", type_name, obj);
}

void decrement_ref_count_object(sType* type, char* obj, sInfo* info)
{
    sClass* klass = type->mClass;
    
    static int dec_num = 0;
    
    string name = xsprintf("__dec_obj%d", ++dec_num);
    add_come_code_at_function_head(info, "%s;\n", make_define_var(type, name, info));
    
    add_come_code(info, "%s=%s;\n", name, obj);
    
    if(klass->mProtocol && type->mPointerNum == 1) {
        string type_name = make_type_name_string(type, false@in_header, false@array_cast_pointer, info);
        add_come_last_code2(info, xsprintf("if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0); }\n", name, name, name, type_name, name, type_name, name));
    }
    else {
        add_come_last_code2(info, xsprintf("if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0,0); }\n", name, name, name));
    }
}

void free_object(sType* type, char* obj, bool no_decrement, bool no_free, sInfo* info)
{
    var stack_saved = info.stack;
    var right_value_objects = info->right_value_objects;
    
    if(type->mNoSolvedGenericsType.v1) {
        type = type->mNoSolvedGenericsType.v1;
    }
    if(type->mPointerNum > 0) {
        string c_value = string(obj);
        
        sClass* klass = type->mClass;
        
        char* class_name = klass->mName;

        char* fun_name = "finalize";
        
        sType*% type2 = clone type;
        type2->mHeap = false;
        
        string fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
        sFun* finalizer = NULL;
        if(type->mGenericsTypes.length() > 0) {
            finalizer = info->funcs[fun_name2];
            
            if(finalizer == NULL) {
                string none_generics_name = get_none_generics_name(type2.mClass.mName);
                
                string generics_fun_name = xsprintf("%s_%s", none_generics_name, fun_name);
                sGenericsFun* generics_fun = info->generics_funcs[generics_fun_name];
                
                if(generics_fun) {
                    if(!create_generics_fun(fun_name2, generics_fun, type, info))
                    {
                        fprintf(stderr, "%s %d: can't create generics finalizer\n", info->sname, info->sline);
                        exit(2);
                    }
                    finalizer = info->funcs[fun_name2];
                }
            }
        }
        else {
            int i;
            for(i=FUN_VERSION_MAX-1; i>=1; i--) {
                string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
                finalizer = info->funcs[new_fun_name];
                
                if(finalizer) {
                    fun_name2 = string(new_fun_name);
                    break;
                }
            }
            
            if(finalizer == NULL) {
                finalizer = info->funcs[fun_name2];
            }
        }
        
        if(finalizer == NULL && !type->mClass->mProtocol && !type->mClass->mNumber 
            && gComelang)
        {
            var fun,new_fun_name = create_finalizer_automatically(type, fun_name, info);
            
            fun_name2 = new_fun_name;
            finalizer = fun;
        }

        /// call finalizer ///
        if(finalizer != null) {
            if(klass->mProtocol && type->mPointerNum == 1) {
                string type_name = make_type_name_string(type, false@in_header, false@array_cast_pointer, info);
                if(c_value) {
                    add_come_code(info, "if(%s) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); }\n", c_value, fun_name2, c_value, type_name, c_value, type_name, c_value, type->mAllocaValue, no_decrement, no_free);
                }
            }
            else {
                if(c_value) {
                    add_come_code(info, xsprintf("if(%s) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d); }\n", c_value, fun_name2, c_value, type->mAllocaValue, no_decrement, no_free));
                }
            }
        }
        else {
            if(klass->mStruct && type->mPointerNum == 0) {
                //klass = info.classes[klass->mName];
                foreach(it, klass->mFields) {
                    var name, field_type = it;
                    
                    if(field_type->mHeap && field_type->mPointerNum > 0) {
                        string obj = xsprintf("(%s.%s)", c_value, name);
                        free_object(field_type, obj, no_decrement, no_free, info);
                    }
                }
            }
            else if(klass->mStruct && type->mPointerNum == 1) {
                //klass = info.classes[klass->mName];
                foreach(it, klass->mFields) {
                    var name, field_type = it;
                    
                    if(field_type->mHeap && field_type->mPointerNum > 0) {
                        string obj = xsprintf("(%s->%s)", c_value, name);
                        free_object(field_type, obj, no_decrement, no_free, info);
                    }
                }
            }
            
            /// free memmory ///
            if(!type->mAllocaValue) {
                if(klass->mProtocol && type->mPointerNum == 1) {
                    if(c_value) {
                        string type_name = make_type_name_string(type, false@in_header, false@array_cast_pointer, info);
                        add_come_code(info, "if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d); } \n", c_value, c_value, c_value, type_name, c_value, type_name, c_value, no_decrement, no_free);
                    }
                }
                else {
                    if(c_value) {
                        add_come_code(info, "if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d); }\n", c_value, c_value, c_value, no_decrement, no_free);
                    }
                }
            }
        }
    }
    
    info.right_value_objects = right_value_objects;
    info.stack = stack_saved;
}

sType*%, string clone_object(sType* type, char* obj, sInfo* info)
{
    if(type->mNoSolvedGenericsType.v1) {
        type = type->mNoSolvedGenericsType.v1;
    }
    
    string result = null
    sType*% result_type = null;
    var stack_saved = info.stack;
    var right_value_objects = info->right_value_objects;
    
    string c_value = string(obj);
    
    sClass* klass = type->mClass;
    
    char* class_name = klass->mName;

    char* fun_name = "clone";
    
    sFun* cloner = NULL;
    string fun_name2;
    if(type->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type.mClass.mName);
        
        sType*% obj_type = solve_generics(type, info.generics_type, info);
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null!);
        
        if(generics_fun) {
            if(!create_generics_fun(string(fun_name2), generics_fun, obj_type, info)) {
                return (new sType("void", info), string(""));
            }
        }
        
        cloner = info->funcs[fun_name2];
    }
    else {
        fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
            cloner = info->funcs[new_fun_name];
            
            if(cloner) {
                fun_name2 = string(new_fun_name);
                break;
            }
        }
        
        if(cloner == NULL) {
            cloner = info->funcs[fun_name2];
        }
    }
    
    if(cloner == NULL && !type->mClass->mNumber && gComelang)
    {
        var fun,new_fun_name = create_cloner_automatically(type, fun_name, info);
        
        fun_name2 = new_fun_name;
        cloner = fun;
    }

    /// call cloner ///
    if(cloner != null) {
        result = xsprintf("%s(%s)", fun_name2, c_value);
        result_type = cloner->mResultType;
        result_type = solve_generics(result_type, type, info);
    }
    else {
        type->mHeap = true;
        string type_name = make_type_name_string(type, false@in_header, false@array_cast_pointer, info);
        result = xsprintf("(%s)come_memdup(%s)", type_name, c_value);
        result_type = clone type;
    }
    
    info.right_value_objects = right_value_objects;
    info.stack = stack_saved;
    
    return (result_type, result);
}

bool create_equals_method(sType* type, sInfo* info)
{
    if(type->mNoSolvedGenericsType.v1) {
        type = type->mNoSolvedGenericsType.v1;
    }
    string result = null
    var stack_saved = info.stack;
    var right_value_objects = info->right_value_objects;
    
    sClass* klass = type->mClass;
    
    char* class_name = klass->mName;

    char* fun_name = "equals";
    
    sType*% type2 = clone type;
    type2->mHeap = false;
    
    sFun* cloner = NULL;
    string fun_name2;
    if(type->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type.mClass.mName);
        
        sType*% obj_type = solve_generics(type, info.generics_type, info);
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null!);
        
        if(generics_fun) {
            if(!create_generics_fun(string(fun_name2), generics_fun, obj_type, info)) {
                return false;
            }
        }
        
        cloner = info->funcs[fun_name2];
    }
    else {
        fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
            cloner = info->funcs[new_fun_name];
            
            if(cloner) {
                fun_name2 = string(new_fun_name);
                break;
            }
        }
        
        if(cloner == NULL) {
            cloner = info->funcs[fun_name2];
        }
    }
    
    if(cloner == NULL && !type->mClass->mProtocol && !type->mClass->mNumber 
        && gComelang)
    {
        var fun,new_fun_name = create_equals_automatically(type, fun_name, info);
        
        fun_name2 = new_fun_name;
        cloner = fun;
    }

    info.right_value_objects = right_value_objects;
    info.stack = stack_saved;
    
    return true;
}

bool create_operator_equals_method(sType* type, sInfo* info)
{
    if(type->mNoSolvedGenericsType.v1) {
        type = type->mNoSolvedGenericsType.v1;
    }
    string result = null
    var stack_saved = info.stack;
    var right_value_objects = info->right_value_objects;
    
    sClass* klass = type->mClass;
    
    char* class_name = klass->mName;

    char* fun_name = "operator_equals";
    
    sType*% type2 = clone type;
    type2->mHeap = false;
    
    sFun* cloner = NULL;
    string fun_name2;
    if(type->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type.mClass.mName);
        
        sType*% obj_type = solve_generics(type, info.generics_type, info);
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null!);
        
        if(generics_fun) {
            if(!create_generics_fun(string(fun_name2), generics_fun, obj_type, info)) {
                return false;
            }
        }
        
        cloner = info->funcs[fun_name2];
    }
    else {
        fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
            cloner = info->funcs[new_fun_name];
            
            if(cloner) {
                fun_name2 = string(new_fun_name);
                break;
            }
        }
        
        if(cloner == NULL) {
            cloner = info->funcs[fun_name2];
        }
    }
    
    if(cloner == NULL && !type->mClass->mProtocol && !type->mClass->mNumber 
        && gComelang)
    {
        var fun,new_fun_name = create_operator_equals_automatically(type, fun_name, info);
        
        fun_name2 = new_fun_name;
        cloner = fun;
    }

    info.right_value_objects = right_value_objects;
    info.stack = stack_saved;
    
    return true;
}

bool create_operator_not_equals_method(sType* type, sInfo* info)
{
    if(type->mNoSolvedGenericsType.v1) {
        type = type->mNoSolvedGenericsType.v1;
    }
    string result = null
    var stack_saved = info.stack;
    var right_value_objects = info->right_value_objects;
    
    sClass* klass = type->mClass;
    
    char* class_name = klass->mName;

    char* fun_name = "operator_not_equals";
    
    sType*% type2 = clone type;
    type2->mHeap = false;
    
    sFun* cloner = NULL;
    string fun_name2;
    if(type->mGenericsTypes.length() > 0) {
        string none_generics_name = get_none_generics_name(type.mClass.mName);
        
        sType*% obj_type = solve_generics(type, info.generics_type, info);
        
        fun_name2 = create_method_name(obj_type, false@no_pointer_name, fun_name, info);
        string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);
        
        sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null!);
        
        if(generics_fun) {
            if(!create_generics_fun(string(fun_name2), generics_fun, obj_type, info)) {
                return false;
            }
        }
        
        cloner = info->funcs[fun_name2];
    }
    else {
        fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
        
        int i;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name2, i);
            cloner = info->funcs[new_fun_name];
            
            if(cloner) {
                fun_name2 = string(new_fun_name);
                break;
            }
        }
        
        if(cloner == NULL) {
            cloner = info->funcs[fun_name2];
        }
    }
    
    if(cloner == NULL && !type->mClass->mProtocol && !type->mClass->mNumber 
        && gComelang)
    {
        var fun,new_fun_name = create_operator_not_equals_automatically(type, fun_name, info);
        
        fun_name2 = new_fun_name;
        cloner = fun;
    }

    info.right_value_objects = right_value_objects;
    info.stack = stack_saved;
    
    return true;
}

void free_right_value_objects(sInfo* info)
{
    var right_value_objects = info->right_value_objects;
    foreach(it, right_value_objects) {
        if(it && !it->mFreed) {
            if(it->mFunName === info->come_fun->mName && it->mBlockLevel == info->block_level) {
                sType*% type = clone it->mType;
                
                type = solve_type(type, info->generics_type, info->method_generics_types, info);

                free_object(type, it->mVarName, true@no_decrement, false@no_free, info);
                
                it->mFreed = true;
            }
        }
    }
}

bool is_right_values(int right_value_num, sInfo* info)
{
    foreach(it, info->right_value_objects) {
        if(it->mID == right_value_num) {
            return true;
        }
    }

    return false;
}


sVar* get_variable_from_table(sVarTable* table, char* name)
{
    sVarTable* it = table;

    while(it) {
        sVar* var_ = it.mVars[name];

        if(var_) {
            return var_;
        }

        it = it->mParent;
    }

    return null;
}

void free_objects(sVarTable* table, sVar* ret_value, sInfo* info)
{
    foreach(it, table->mVars) {
        sVar* p = table->mVars[it];
        sType* type = p->mType;
        sClass* klass = type->mClass;
        
        if(ret_value != null && p->mCValueName != null && p->mCValueName === ret_value->mCValueName && type->mHeap) 
        {
            free_object(p->mType, p->mCValueName, false@no_decrement, true@no_free, info);

//            p->mCValueName = null;
        }
        else if(type->mHeap && p->mCValueName) {
            if(type->mFunctionParam) {
                free_object(p->mType, p->mCValueName, false@no_decrement, true@no_free, info);
            }
            else {
                free_object(p->mType, p->mCValueName, false@no_decrement, false@no_free, info);
            }

//            p->mCValueName = null;
        }
        else if(klass->mStruct && p->mCValueName && type->mAllocaValue && !type->mNoCallingDestructor) {
            string c_value = xsprintf("(&%s)", p->mCValueName);
            sType*% type2 = clone type;
            type2->mPointerNum++;
            free_object(type2, c_value, false@no_decrement, false@no_free, info);

//            p->mCValueName = null;
        }
    }
}

void free_objects_on_return(sBlock* current_block, sInfo* info, sVar* ret_value, bool top_block)
{
    sVarTable* it = info->lv_table;
    
    if(it == info->come_fun->mBlock->mVarTable) {
        free_objects(it, ret_value!, info);
    }
    else {
        while(it != info->come_fun->mBlock->mVarTable) {
            free_objects(it, ret_value!, info);
    
            it = it->mParent;
        }
    }
}
