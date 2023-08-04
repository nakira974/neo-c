#include "common.h"


exception sType*% solve_generics(sType* type, sType* generics_type, sInfo* info)
{
    sType*% result = clone type;
    if(generics_type == null) {
        return result;
    }

    sClass* klass = type->mClass;

    if(klass->mName === "lambda") {
        var result_type = solve_generics(type->mResultType.0, generics_type, info).catch {
            throw;
        }
        
        result->mResultType = new tuple1<sType*%>(result_type);
        
        list<sType*%>*% new_param_types = new list<sType*%>();

        foreach(it, type->mParamTypes) {
            sType*% new_param_type = solve_generics(it, generics_type, info).catch
            {
                throw
            }
            
            new_param_types.push_back(new_param_type);
        }
        
        result->mParamTypes = new_param_types;
    }
    else if(klass->mGenerics) {
        int generics_number = klass->mGenericsNum;

        if(generics_number >= generics_type->mGenericsTypes.length())
        {
            err_msg(info, "invalid generics parametor number");
            throw;
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
            
            result = clone generics_type->mGenericsTypes[generics_number];


            if(heap) {
                result->mHeap = heap;
            }
            if(no_heap) {
                result->mHeap = false;
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
        int i = 0;
        result.mGenericsTypes.reset();
        foreach(it, type->mGenericsTypes) {
            var type = solve_generics(it, generics_type, info)
                .catch
            {
                throw;
            }
            result->mGenericsTypes.push_back(clone type);
            i++;
        }
        
        string new_name = create_generics_name(result, false@no_pointer_name, info);
        if(info.classes[new_name] == null) {
            if(!define_generics_struct(result, info)) {
                throw;
            }
            if(!is_contained_generics_class(result, info)) {
                result->mClass = info.classes[new_name];
                result->mSolvedGenericsName = true;
            }
        }
        else {
            if(!is_contained_generics_class(result, info)) {
                result->mClass = info.classes[new_name];
                result->mSolvedGenericsName = true;
            }
        }
    }

    if(result->mPointerNum == 0) {
        result->mHeap = false;
    }

    return result;
}

exception sType*% solve_method_generics(sType* type, list<sType*%>* method_generics_types, sInfo* info)
{
    sType*% result = clone type;
    sClass* klass = type->mClass;

    if(klass->mName === "lambda")
    {
        var result_type = solve_method_generics(type->mResultType.0, method_generics_types, info).catch 
        {
            throw
        }
        
        result->mResultType = new tuple1<sType*%>(result_type);

        list<sType*%>*% new_param_types = new list<sType*%>();

        foreach(it, type->mParamTypes) {
            sType*% new_param_type = solve_method_generics(it, method_generics_types, info).catch
            {
                throw
            }
            
            new_param_types.push_back(new_param_type);
        }
        
        result->mParamTypes = new_param_types;
    }
    else if(klass->mMethodGenerics)
    {
        int method_generics_number = klass->mMethodGenericsNum;

        if(method_generics_number < method_generics_types.length())
        {
            var array_num = clone type->mArrayNum;
            bool immutable_ = type->mImmutable;
            int pointer_num = type->mPointerNum;
            bool heap = type->mHeap;

            bool no_heap = type->mNoHeap;
            
            result = clone method_generics_types[method_generics_number];

            if(heap) {
                result->mHeap = heap;
            }
            if(no_heap) {
                result->mHeap = false;
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
        else {
            throw
        }
    }
    else {
        int i = 0;
        foreach(it, type->mGenericsTypes) {
            result->mGenericsTypes[i] = solve_method_generics(it, method_generics_types, info)
                .catch
            {
                throw;
            }
            i++;
        }
    }

    if(result->mPointerNum == 0) {
        result->mHeap = false;
    }

    return result;
}

exception sType*% solve_type(sType* type, sType* generics_type, list<sType*%>* method_generics_types, sInfo* info)
{
    sType*% result = clone type;
    if(method_generics_types && method_generics_types.length() > 0) {
        result = solve_method_generics(result, method_generics_types,info).catch
        {
            err_msg(info, "Can't solve method generics type(2)");
            show_type(type, info);
            throw;
        }
    }

    if(generics_type) {
        result = solve_generics(result, generics_type, info).catch {
            err_msg(info, "Can't solve generics types(3)");
            show_type(type, info);
            show_type(generics_type, info);
            throw;
        }
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
    
    info.right_value_objects.push_back(new_value);
    
    string buf = xsprintf("void* right_value%d;\n", gRightValueNum-1);
    add_come_code_at_function_head(info, buf);
    
    return xsprintf("(%s)(%s=%s)", make_type_name_string(type, false@in_header, true@array_cast_pointer, info), new_value->mVarName, obj);
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

static void free_protocol_object(sType* protocol_type, char* protocol_value_c_source, bool no_decrement, bool no_free, sInfo* info)
{
    char* fun_name = "call_finalizer";
    sFun* come_fun = info.funcs[fun_name];
    
    if(!gGC) {
        if(come_fun == NULL) {
            add_come_code(info, "%s._protocol_obj = come_decrement_ref_count(%s._porotocol_obj, %d, %d);\n", protocol_value_c_source, no_decrement, no_free);
        }
        else {
            add_come_code(info, "call_finalizer(%s->finalize, %s->_protocol_obj,0, %d, %d);\n", protocol_value_c_source, protocol_value_c_source, no_decrement, no_free);
        }
    }
}

static void decrement_ref_count_protocol_object(sType* protocol_type, char* protocol_value_c_source, sInfo* info)
{
}

void free_object(sType* type, char* obj, bool no_decrement, bool no_free, sInfo* info)
{
    var stack_saved = info.stack;
    var right_value_objects = info->right_value_objects;
    
    if(!gGC && type->mPointerNum > 0) {
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
                string generics_fun_name = xsprintf("%s_%s", type->mGenericsName, fun_name);
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
        
        if(finalizer == NULL && !type->mProtocol && !type->mNumber 
            && gComelang)
        {
            var fun,new_fun_name = create_finalizer_automatically(type, fun_name, info).catch { exit(1); }
            
            fun_name2 = new_fun_name;
            finalizer = fun;
        }

        /// call finalizer ///
        if(finalizer != null) {
            if(c_value) add_come_code(info, xsprintf("call_finalizer(%s,%s,%d, %d, %d);\n", fun_name2, c_value, type->mAllocaValue, no_decrement, no_free));
        }
        else {
            if(klass->mProtocol && type->mPointerNum == 1) {
                free_protocol_object(type, c_value, no_decrement, no_free, info);
            }
            
            if(klass->mStruct && type->mPointerNum == 0) {
                foreach(it, klass->mFields) {
                    var name, field_type = it;
                    if(field_type->mHeap && field_type->mPointerNum > 0) {
                        string obj = xsprintf("(%s.%s)", c_value, name);
                        free_object(field_type, obj, no_decrement, no_free, info);
                    }
                }
            }
            else if(klass->mStruct && type->mPointerNum == 1) {
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
                if(c_value) add_come_code(info, "%s = come_decrement_ref_count(%s, %d, %d);\n", c_value, c_value, no_decrement, no_free);
            }
        }
    }
    
    info.right_value_objects = right_value_objects;
    info.stack = stack_saved;
}

void free_right_value_objects(sInfo* info)
{
    var right_value_objects = info->right_value_objects;
    foreach(it, right_value_objects) {
        if(!it->mFreed) {
            if(it->mFunName === info->come_fun->mName) {
                sType*% type = clone it->mType;
                
                type = solve_type(type, info->generics_type, info->method_generics_types, info).catch
                {
                    err_msg(info, "Can't solve type");
                    show_type(type, info);
                    exit(1);
                }

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

void free_objects(sVarTable* table, char* ret_value, sInfo* info)
{
    foreach(it, table->mVars) {
        sVar* p = table->mVars[it];
        sType* type = p->mType;
        sClass* klass = type->mClass;
        
        if(type->mHeap && ret_value != null && p->mCValueName === ret_value) {
            free_object(p->mType, p->mCValueName, false@no_decrement, true@no_free, info);

            p->mCValueName = null;
        }
        else if(type->mHeap && p->mCValueName) {
            free_object(p->mType, p->mCValueName, false@no_decrement, false@no_free, info);

            p->mCValueName = null;
        }
        else if(klass->mStruct && p->mCValueName && type->mAllocaValue) {
            string c_value = xsprintf("(&%s)", p->mCValueName);
            sType*% type2 = clone type;
            type2->mPointerNum++;
            free_object(type2, c_value, false@no_decrement, false@no_free, info);

            p->mCValueName = null;
        }
    }
}

void free_objects_on_return(sBlock* current_block, sInfo* info, char* ret_value, bool top_block)
{
    sVarTable* it = info->lv_table;
    
    if(it == info->come_fun->mVarTable) {
        free_objects(it, ret_value!, info);
    }
    else {
        while(it != info->come_fun->mVarTable) {
            free_objects(it, ret_value!, info);
    
            it = it->mParent;
        }
    }
}
