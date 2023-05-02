#include <comelang.h>
#include "zed2/src/common.h"

int main(int argc, char** argv)
{
    string fun_name = string("map");
    list<ZVALUE*>* params;
    buffer*% codes = new buffer();
    sInfo* info;
    
    ZVALUE* obj;
    
    ZVALUE*% result;
    
    switch(1) {
        case kIntValue: {
            if(fun_name === "to_string") {
                if(params.length() == 0) {
                    string str = obj.intValue.to_string();
                    
                    result = new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
                }
            }
            }
            break;
            
        case kListValue: {
            if(fun_name === "join") {
                if(params.length() == 1 && params[0].kind == kStrValue) {
                    string param0 = params[0].strValue.to_string();
                    
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    list<string>*% list2 = new list<string>();
                    
                    foreach(it, list1) {
                        list2.push_back(it.strValue.to_string());
                    }
                    
                    string str = list2.join(param0);
                    
                    result = new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
                }
            }
            else if(fun_name === "sublist") {
                if(params.length() == 2 && params[0].kind == kIntValue && params[1].kind == kIntValue) {
                    int param0 = params[0].intValue;
                    int param1 = params[1].intValue;
                    
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    list<ZVALUE*%>*% list2 = list1.sublist(param0, param1);
                    
                    result = new ZVALUE(kind:kListValue, list_value:list2);
                }
            }
            else if(fun_name === "uniq") {
                if(params.length() == 0) {
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    list<ZVALUE*%>*% list2 = list1.uniq();
                    
                    result = new ZVALUE(kind:kListValue, list_value:list2);
                }
            }
            else if(fun_name === "reverse") {
                if(params.length() == 0) {
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    list<ZVALUE*%>*% list2 = list1.reverse();
                    
                    result = new ZVALUE(kind:kListValue, list_value:list2);
                }
            }
            else if(fun_name === "sort") {
                if(params.length() == 0) {
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    list<ZVALUE*%>*% list2 = list1.sort();
                    
                    result = new ZVALUE(kind:kListValue, list_value:list2);
                }
            }
            else if(fun_name === "find") {
                if(params.length() == 1) {
                    ZVALUE* param0 = params[0];
                    
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    int n = list1.find(param0, -1);
                    
                    result = new ZVALUE(kind:kIntValue, int_value:n);
                }
            }
            else if(fun_name === "length") {
                if(params.length() == 0) {
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    int n = list1.length();
                    
                    result = new ZVALUE(kind:kIntValue, int_value:n);
                }
            }
            else if(fun_name === "filter") {
                if(params.length() == 0) {
                    list<ZVALUE*%>*% list1 = obj.listValue.filter {
                        using unsafe;
                        
                        append_var(name:"it".to_wstring(), value: clone it);
                        
                        sInfo info2;
                        
                        info2.p = null;
                        info2.command = null;
                        info2.codes = clone codes;
                        info2.nodes = null;
                        info2.op = info2.codes.to_int_pointer();
                        info2.head = (char*)info2.op.p;
                        info2.stack = new vector<ZVALUE*%>();
                        info2.loop_head = 0;
                        info2.breaks = null;
                        info2.result_value = null;
                        info2.stack_num = 0;
                        
                        while(*info2.op) {
                            if(!vm(&info2)) {
                                exit(1);
                            }
                        }
                        
                        if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                            fprintf(stderr, "invalid block result value\n");
                            exit(1);
                        }
                        
                        return info2.result_value.boolValue;
                    }
                    
                    result = new ZVALUE(kind:kListValue, list_value:list1);
                }
            }
            else if(fun_name === "map") {
                if(params.length() == 0) {
                    list<ZVALUE*%>*% list1 = obj.listValue.map {
                        using unsafe;
                        
                        ZVALUE*% var_value = clone it;
                        
                        append_var(name:"it".to_wstring(), value: var_value);
                        
                        sInfo info2;
                        
                        info2.p = null;
                        info2.command = null;
                        info2.codes = clone codes;
                        info2.nodes = null;
                        info2.op = info2.codes.to_int_pointer();
                        info2.head = (char*)info2.op.p;
                        info2.stack = new vector<ZVALUE*%>();
                        info2.loop_head = 0;
                        info2.breaks = null;
                        info2.result_value = null;
                        info2.stack_num = 0;
                        
                        while(*info2.op) {
                            if(!vm(&info2)) {
                                exit(1);
                            }
                        }
                        
                        if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                            fprintf(stderr, "invalid block result value\n");
                            exit(1);
                        }
                        
                        return clone info2->result_value;
                    }
                    
                    result = new ZVALUE(kind:kListValue, list_value:list1);
                }
            }
            else if(fun_name === "each") {
                if(params.length() == 0) {
                a;
                    obj.listValue.each {
                        using unsafe;
                        
                        ZVALUE*% var_value = clone it;
                        
                        append_var(name:"it".to_wstring(), value: var_value);
                        
                        sInfo info2;
                        
                        info2.p = null;
                        info2.command = null;
                        info2.codes = clone codes;
                        info2.nodes = null;
                        info2.op = info2.codes.to_int_pointer();
                        info2.head = (char*)info2.op.p;
                        info2.stack = new vector<ZVALUE*%>();
                        info2.loop_head = 0;
                        info2.breaks = null;
                        info2.result_value = null;
                        info2.stack_num = 0;
                        
                        while(*info2.op) {
                            if(!vm(&info2)) {
                                exit(1);
                            }
                        }
                    }
                    
                    result = new ZVALUE(kind:kListValue, list_value:clone obj.listValue);
                }
            }
            else if(fun_name === "add") {
                if(params.length() == 1) {
                    ZVALUE* param0 = params[0];
                    
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    list1.push_back(clone param0);
                    
                    result = new ZVALUE(kind:kListValue, list_value:list1);
                }
            }
            else if(fun_name === "insert") {
                if(params.length() == 2 && params[0].kind == kIntValue) {
                    int param0 = params[0].intValue;
                    ZVALUE* param1 = params[1];
                    
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    list1.insert(param0, clone param1);
                    
                    result = new ZVALUE(kind:kListValue, list_value:list1);
                }
            }
            else if(fun_name === "delete") {
                if(params.length() == 2 && params[0].kind == kIntValue && params[1].kind == kIntValue) {
                    int param0 = params[0].intValue;
                    int param1 = params[1].intValue;
                    
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    list1.delete(param0, param1);
                    
                    result = new ZVALUE(kind:kListValue, list_value:list1);
                }
            }
            else if(fun_name === "replace") {
                if(params.length() == 2 && params[0].kind == kIntValue) {
                    int param0 = params[0].intValue;
                    ZVALUE* param1 = params[1];
                    
                    list<ZVALUE*%>* list1 = obj.listValue;
                    
                    list1.replace(param0, clone param1);
                    
                    result = new ZVALUE(kind:kListValue, list_value:list1);
                }
            }
            }
            break;
            
        case kMapValue: {
            if(fun_name === "length") {
                if(params.length() == 0) {
                    map<ZVALUE*%, ZVALUE*%>* map1 = obj.mapValue;
                    
                    int n = map1.length();
                    
                    result = new ZVALUE(kind:kIntValue, int_value:n);
                }
            }
            else if(fun_name === "find") {
                if(params.length() == 1) {
                    ZVALUE* param0 = params[0];
                    
                    map<ZVALUE*%, ZVALUE*%>* map1 = obj.mapValue;
                    
                    bool n = map1.find(param0);
                    
                    result = new ZVALUE(kind:kBoolValue, bool_value:n);
                }
            }
            else if(fun_name === "keys") {
                if(params.length() == 0) {
                    map<ZVALUE*%, ZVALUE*%>* map1 = obj.mapValue;
                    
                    list<ZVALUE*%>*% l = map1.keys();
                    
                    result = new ZVALUE(kind:kListValue, list_value:l);
                }
            }
            else if(fun_name === "values") {
                if(params.length() == 0) {
                    map<ZVALUE*%, ZVALUE*%>* map1 = obj.mapValue;
                    
                    list<ZVALUE*%>*% l = map1.values();
                    
                    result = new ZVALUE(kind:kListValue, list_value:l);
                }
            }
            }
            break;
            
        case kFileValue: {
            if(fun_name === "read") {
                if(params.length() == 0) {
                    string str = obj.fileValue.read();
                    
                    result = new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
                }
            }
            else if(fun_name === "sub_block") {
                if(params.length() == 1 && params[0].kind == kRegexValue) {
                    regex_struct* param0 = params[0].regexValue;
                    
                    string str = obj.strValue.to_string().sub_block(param0) {
                        using unsafe;
                        ZVALUE*% value = new ZVALUE(kind:kStrValue, str_value:it.to_wstring());
                        append_var(name:"it".to_wstring(), value: value);
                        
                        list<string>* group_strings = it2;
                        
                        list<ZVALUE*%>*% list2 = new list<ZVALUE*%>();
                        
                        foreach(it, group_strings) {
                            list2.push_back(new ZVALUE(kind:kStrValue, str_value:it.to_wstring()));
                        }
                        
                        ZVALUE*% value2 = new ZVALUE(kind:kListValue, list_value:clone list2);
                        append_var(name:"it2".to_wstring(), value: value2);
                        
                        sInfo info2;
                        
                        info2.p = null;
                        info2.command = null;
                        info2.codes = clone codes;
                        info2.nodes = null;
                        info2.op = info2.codes.to_int_pointer();
                        info2.head = (char*)info.op.p;
                        info2.stack = new vector<ZVALUE*%>();
                        info2.loop_head = 0;
                        info2.breaks = null;
                        info2.result_value = null;
                        info2.stack_num = 0;
                        
                        while(*info2.op) {
                            if(!vm(&info2)) {
                                exit(1);
                            }
                        }
                        
                        if(info2.result_value == null || info2.result_value.kind != kStrValue) {
                            fprintf(stderr, "invalid block result value\n");
                            exit(1);
                        }
                        
                        return info2.result_value.strValue.to_string();
                    }
                    
                    result = new ZVALUE(kind:kStrValue, str_value:str.to_wstring());
                }
            }
            }
            break;
            
    }
    
    return 0;
}

