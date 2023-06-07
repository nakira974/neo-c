#include "common.h"

exception sType*% solve_generics(sType* type, sType* generics_type, sInfo* info)
{
    sType*% result = clone type;
    if(generics_type == NULL) {
        return result;
    }

    sClass* klass = type->mClass;

    if(klass->mName === "lambda") {
        result->mResultType = borrow solve_generics(type->mResultType, generics_type, info).catch {
            throw;
        }
        
        list<sType*>* new_param_types = borrow new list<sType*>();

        foreach(it, type->mParamTypes) {
            sType* new_param_type = borrow solve_generics(it, generics_type, info).catch
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
        foreach(it, type->mGenericsTypes) {
            result->mGenericsTypes[i] = solve_generics(it, generics_type, info)
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

exception sType*% solve_method_generics(sType* type, list<sType*%>* method_generics_types, sInfo* info)
{
    sType*% result = clone type;
    sClass* klass = type->mClass;

    if(klass->mName === "lambda")
    {
        result->mResultType = borrow solve_method_generics(type->mResultType, method_generics_types, info).catch 
        {
            throw
        }

        list<sType*>* new_param_types = borrow new list<sType*>();

        foreach(it, type->mParamTypes) {
            sType* new_param_type = borrow solve_method_generics(it, method_generics_types, info).catch
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
    if(method_generics_types.length() > 0) {
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

char* append_object_to_right_values(char* obj, sType*% type, sInfo* info)
{
    var new_value = new sRightValueObject;
    new_value.mType = type;
    new_value.mFreed = false;
    new_value.mObj = obj;
    new_value->mFreed = FALSE;
    new_value.mVarName = xsprintf("right_value%d", gRightValueNum++);
    new_value.mFunName = clone info->come_fun->mName;
    
    info.right_value_objects.push_back(new_value);
    
    string buf = xsprintf("void* right_value%d;\n", gRightValueNum-1);
    add_come_code_at_function_head(info, buf);
    
    return new_value->mVarName;
}

void remove_object_from_right_values(char* obj, sInfo* info)
{
    int i = 0;
    foreach(it, info->right_value_objects) {
        if(it->mObj == obj) {
            break;
        }
        i++;
    }
    
    info->right_value_objects.delete(i, i+1);
}

sFun*,string create_finalizer_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* finalizer = null;
    string real_fun_name = null;
    
    if(type->mGenericsTypes.length() > 0) {
        string struct_name = create_generics_name(type, info)
        
        real_fun_name = xsprintf("%s_%s", fun_name, struct_name);
    }
    else {
        real_fun_name = xsprintf("%s", fun_name);
    }
    
    char* last_code = borrow info.module.mLastCode;
    info.module.mLastCode = NULL;
    char* last_stack_c_value = borrow info.stack[-1].c_value;
    info.stack[-1].c_value = NULL;
    
    sType* come_function_result_type = borrow info.come_function_result_type;
    
    sClass* klass = type->mClass;
    
    if(type->mPointerNum > 0 && klass->mStruct) {
        var source = new buffer();
        
        source.append_char('{');
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0) && self.finalize) { void (*finalizer)(void*) = self.finalize; finalizer(self._protocol_obj); igc_decrement_ref_count(self.%s); }\n", name, name);
            
            source.append_str(source2);
        }
        else {
            foreach(it, klass->mFields) {
                var name, field_type = it;
                
                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    fprintf(stderr, "Defining recusively the finalizer. exited. Define the finalizer mannually or remove %% of the field type from the recursively defined field.%s in %s.\n", name, type->mClass->mName);
                    exit(21);
                }
                
                if(field_type->mHeap) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { delete (borrow self.%s); }\n", name, name);
                    
                    source.append_str(source2);
                }
            }
        }
        
        source.append_char('}');
        
        var name = clone real_fun_name;
        var result_type = new sType("void", info);
        var self_type = clone type;
        self_type->mHeap = false;
        var param_types = [self_type];
        var param_names = [string("self")];
        finalizer = borrow new sFun(name, result_type, param_types, param_names
                                , false@external, false@var_args, info);
        
        info.funcs.insert(name, dummy_heap finalizer);
        
        info.come_fun = finalizer;
        
        info.come_nest++;
        add_come_code(info, source.to_string());
        info.come_nest--;
    }
    
    info->come_function_result_type = dummy_heap come_function_result_type;
    
    info.module.mLastCode = dummy_heap last_code;
    info.stack[-1].c_value = dummy_heap last_stack_c_value;
    
    (finalizer, real_fun_name);
}

static void free_protocol_object(sType* protocol_type, char* protocol_value_c_source, sInfo* info)
{
    char* fun_name = "call_finalizer";
    sFun* come_fun = info.funcs[fun_name];
    
    if(!gGC) {
        if(come_fun == NULL) {
            add_come_code(info, "igc_decrement_ref_count(%s._porotocol_obj);\n", protocol_value_c_source);
        }
        else {
            add_come_code(info, "call_finalizer(%s->finalize, %s->_protocol_obj, 0);\n", protocol_value_c_source, protocol_value_c_source);
        }
    }
}

void free_object(sType* type, char* obj, bool force_delete, sInfo* info)
{
    if(!gGC && (type->mAllocaValue || type->mPointerNum > 0)) {
        string c_value;
        if(type->mAllocaValue) {
            c_value = xsprintf("(&%s)", obj);
        }
        else {
            c_value = string(obj);
        }
        
        sClass* klass = type->mClass;
        
        char* class_name = klass->mName;

        string fun_name = xsprintf("%s_finalize", class_name);

        int i;
        sFun* finalizer = NULL;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            string new_fun_name = xsprintf("%s_v%d", fun_name, i);
            finalizer = info->funcs[new_fun_name];
            
            if(finalizer) {
                fun_name = string(new_fun_name);
                break;
            }
        }
        
        if(finalizer == NULL) {
            finalizer = info->funcs[fun_name];
        }
        
        if(finalizer == NULL && !type->mProtocol && !type->mNumber 
            && gComelang)
        {
            var finalizer,new_fun_name = create_finalizer_automatically(type, fun_name, info);
            fun_name = new_fun_name;
        }

        /// call finalizer ///
        if(finalizer != null) {
            if(c_value) add_come_code(info, xsprintf("call_finalizer(%s,%s,%d);\n", fun_name, c_value, type->mAllocaValue));
        }
        else {
            if(klass->mProtocol && type->mPointerNum == 1) {
                free_protocol_object(type, c_value, info);
            }
            
            /// free memmory ///
            if(force_delete) {
                /// free ///
                if(c_value) add_come_code(info, xsprintf("igc_decrement_ref_count(%s);\n", c_value));
            }
            else if(type->mHeap) {
                if(c_value) add_come_code(info, xsprintf("igc_decrement_ref_count(%s);\n", c_value));
            }
        }
    }
}

void free_right_value_objects(sInfo* info)
{
    foreach(it, info->right_value_objects) {
        if(!it->mFreed) {
            if(it->mFunName === info->come_fun->mName) {
                sType*% type = clone it->mType;
                
                type = solve_type(type, info->generics_type, info->method_generics_types, info).catch
                {
                    err_msg(info, "Can't solve type");
                    show_type(type, info);
                    exit(1);
                }

                free_object(type, it->mVarName, true@force_delete, info);

                it->mFreed = true;
            }
        }
    }
}

bool is_right_values(char* obj, sInfo* info)
{
    foreach(it, info->right_value_objects) {
        if(it->mObj == obj) {
            return true;
        }
    }

    return false;
}


sVar* get_variable_from_table(sVarTable* table, char* name)
{
    sVarTable* it = table;

    while(it) {
        sVar* var_ = table.mVars[name];

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

        if(type->mHeap && !p->mNoFree && p->mValue && p->mValue != ret_value)
        {
            free_object(p->mType, p->mValue, false@force_delete, info);
            remove_object_from_right_values(p->mValue, info);

            p->mValue = null;
        }
        else if(p->mAllocaValue && klass->mStruct && gComelang && p->mValue != ret_value) 
        {
            sType*% type = clone p->mType;
            type->mPointerNum++;
            type->mAllocaValue = TRUE;
            
            bool exist_heap_fields = false;
            foreach(it, klass->mFields) {
                var name, field_type = it;
                if(field_type->mHeap) {
                    exist_heap_fields = true;
                }
            }
            
            if(exist_heap_fields) {
                free_object(type, p->mValue, false@force_delete, info);
            }
        }
    }
}

void free_objects_on_return(sBlock* current_block, sInfo* info, char* ret_value, bool top_block)
{
    sVarTable* it = info->lv_table;
    
    while(it.mID != info->come_fun->mVarTable) {
        free_objects(it, ret_value, info);

        it = it->mParent;
    }
}
