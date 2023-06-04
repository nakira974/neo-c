#include "common.h"

bool gComelang;
bool gGC;

void come_init() version 2
{
    gComelang = false;
    gGC = true;
}

void come_final() version 2
{
}

void err_msg(sInfo* info, char* str)
{
    if(!info.no_output_err) {
        fprintf(stderr, "%s %d: %s\n", info.sname, info.sline, str);
        info.err_num++;
    }
}

bool transpile(sInfo* info) version 2
{
    return true;
}

bool output_source_file(sInfo* info) version 2
{
    string output_file_name = xsprintf("%s.c", info.sname);
    
    /// dummy output ///
    string("int main(int argc, char** argv) { return 0; }\n").write(output_file_name);
    
    return true;
}

static bool compile(sInfo* info, bool output_object_file, list<string>* object_files)
{
    char* p = info.sname + strlen(info.sname);
    
    while(p >= info.sname) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p == info.sname) {
        err_msg(info, "invalid source file name. require suffix");
        return false;
    }
    
    char output_file_name[PATH_MAX];
    memcpy(output_file_name, info.sname, p - info.sname);
    output_file_name[p - info.sname] = '\0'
    strncat(output_file_name, ".o", PATH_MAX);
    
    string input_file_name = xsprintf("%s.c", info.sname);
    
    var command = xsprintf("clang -o %s -c %s %s", output_file_name, input_file_name, info.clang_option);
    
    int rc = system(command);
    
    if(rc != 0) {
        err_msg(info, "clang is faield");
        return false;
    }
    
    if(!output_object_file) {
        object_files.push_back(string(output_file_name));
    }
    
    return true;
}

static bool linker(sInfo* info, list<string>* object_files)
{
    char* p = info.sname + strlen(info.sname);
    
    while(p >= info.sname) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p == info.sname) {
        err_msg(info, "invalid source file name. require suffix");
        return false;
    }
    
    char output_file_name[PATH_MAX];
    memcpy(output_file_name, info.sname, p - info.sname);
    output_file_name[p - info.sname] = '\0'
    
    var command = new buffer();
    
    command.append_str(xsprintf("clang -o %s %s ", output_file_name, info.clang_option));
    
    foreach(it, object_files) {
        command.append_str(xsprintf("%s ", it));
    }
    
    int rc = system(command.to_string());
    
    if(rc != 0) {
        err_msg(info, "clang is faield");
        return false;
    }
    
    return true;
}

sModule*% sModule*::initialize(sModule*% self)
{
    self.mSourceHead = new buffer();
    self.mSource = new buffer();
    self.mLastCode = null;
    
    return self;
}

sVarTable*% sVarTable*::initialize(sVarTable*% self, bool global, sVarTable* parent)
{
    self.mVars = new map<string, sVar*%>();
    self.mGlobal = global;
    self.mParent = parent;
    static int id = 0;
    self.mID = ++id;
    
    return self;
}

sType*% sType*::initialize(sType*% self, char* name, int pointer_num=0, bool heap=false)
{
    self.mClass = borrow new sClass(name);
    
    self.mGenericsTypes = borrow new list<sType*>();
    self.mArrayNum = borrow new list<int>();
    self.mOmitArrayNum = false;
    self.mParamTypes = borrow new list<sType*>();
    self.mResultType = null;
    self.mUnsigned = false;
    self.mConstant = false;
    self.mRegister = false;
    self.mVolatile = false;
    self.mStatic = false;
    self.mRestrict = false;
    self.mImmutable = false;
    self.mLongLong = false;
    self.mHeap = heap;
    self.mDummyHeap = false;
    self.mNoHeap = false;
    self.mRefference = false;
    
    self.mPointerNum = pointer_num;
    self.mNoArrayPointerNum = 0;
    self.mSizeNum = 0;
    
    self.mDynamicArrayNum = 0;
    self.mTypeOfExpression = 0;

    self.mOriginalTypeName = borrow string("");
    self.mOriginalPointerNum = 0;
    
    self.mFunctionParam = false;
    
    return self;
}

void sType*::finalize(sType* self)
{
    delete self.mClass;
    
    foreach(it, self.mGenericsTypes) {
        delete it;
    }
    delete self.mGenericsTypes;
    delete self.mArrayNum;
    foreach(it, self.mParamTypes) {
        delete it;
    }
    delete self.mParamTypes;
    if(self.mResultType) self.mResultType;

    delete self.mOriginalTypeName;
}

sType*% sType::clone(sType* self)
{
    var result = new sType;
    
    if(self.mClass) result.mClass = borrow clone self.mClass;
    
    result.mGenericsTypes = borrow new list<sType*>();
    foreach(it, self.mGenericsTypes) {
        result.mGenericsTypes.push_back(borrow clone it);
    }
    result.mArrayNum = borrow new list<int>();
    foreach(it, self.mArrayNum) {
        result.mArrayNum.push_back(it);
    }
    result.mOmitArrayNum = self.mOmitArrayNum;
    result.mParamTypes = borrow new list<sType*>();
    foreach(it, self.mParamTypes) {
        result.mParamTypes.push_back(borrow clone it);
    }
    if(self.mResultType) result.mResultType = borrow clone self.mResultType;
    result.mUnsigned = self.mUnsigned;
    result.mConstant = self.mConstant;
    result.mRegister = self.mRegister;
    result.mVolatile = self.mVolatile;
    result.mStatic = self.mStatic;
    result.mRestrict = self.mRestrict;
    result.mImmutable = self.mImmutable;
    result.mLongLong = self.mLongLong;
    result.mHeap = self.mHeap;
    result.mDummyHeap = self.mDummyHeap;
    result.mNoHeap = self.mNoHeap;
    result.mRefference = self.mRefference;
    
    result.mPointerNum = self.mPointerNum;
    result.mNoArrayPointerNum = self.mNoArrayPointerNum;
    result.mSizeNum = self.mSizeNum;
    
    result.mDynamicArrayNum = self.mDynamicArrayNum;
    result.mTypeOfExpression = self.mTypeOfExpression;

    if(self.mOriginalTypeName) result.mOriginalTypeName = borrow clone self.mOriginalTypeName;
    result.mOriginalPointerNum = self.mOriginalPointerNum;
    
    result.mFunctionParam = self.mFunctionParam;
    
    return result;
}

sClass*% sClass*::initialize(sClass*% self, char* name)
{
    self.mStruct = false;
    self.mUnion = false;
    self.mGenerics = false;
    self.mEnum = false;
    self.mProtocol = false;
    self.mNumber = false;
    self.mMethodGenerics = false;
    
    self.mName = string(name);
    
    self.mGenericsNum = -1;
    self.mMethodGenericsNum = -1;
    
    self.mFields = new list<tuple2<string, sType*%>*%>();
    
    return self;
};

sFun*% sFun*::initialize(sFun*% self, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, bool external, bool var_args, sInfo* info)
{
    self.mName = name;
    self.mResultType = result_type;
    self.mParamTypes = param_types;
    self.mParamNames = param_names;
    self.mExternal = external;
    self.mVarArgs = var_args;
    
    self.mSource = new buffer();
    self.mSourceHead = new buffer();
    self.mSourceDefer = new buffer();
    
    return self;
}

int come_main(int argc, char** argv) version 2
{
    var clang_option = new buffer();
    var files = new list<string>();
    var object_files = new list<string>();
    bool output_object_file = false;
    bool output_cpp_file = false;
    for(int i=1; i<argc; i++) {
        if(argv[i] === "-g") {
            clang_option.append_str("-g ");
        }
        else if(argv[i] === "-c") {
            output_object_file = true;
        }
        else if(argv[i] === "-E") {
            output_cpp_file = true;
        }
        else if(argv[i] === "-no-gc") {
            gGC = false;
        }
        else if(argv[i] === "-gc") {
            gGC = true;
        }
        else if(argv[i][0] == '-') {
            clang_option.append_str(argv[i] + " ");
        }
        else if(memcmp(argv[i] + strlen(argv[i]) -2, ".o", 2) == 0) {
            object_files.push_back(string(argv[i]));
        }
        else {
            files.push_back(string(argv[i]));
        }
    }
    
    come_init();
    foreach(it, files) {
        sInfo info;
        
        info.sname = clone it;
        info.sline = 1;
        info.err_num = 0;
        info.clang_option = clang_option.to_string();
        info.no_output_err = false;
        info.funcs = new map<string, sFun*%>();
        info.module = new sModule();
        info.right_value_objects = new list<sRightValueObject*%>();
        info.stack = new list<LVALUE*%>();
        info.lv_table = new sVarTable(global:true, parent:null);
        
        info.p = it.read().to_buffer().to_pointer();
        info.head = info.p.p;
        
        if(!transpile(&info)) {
            fprintf(stderr, "%s %d: traspile faield\n", info.sname, info.sline);
            exit(2);
        }
        
        if(!output_source_file(&info)) {
            fprintf(stderr, "%s %d: output source file faield\n", info->sname, info->sline);
            exit(2);
        }
        
        if(!compile(&info, output_object_file, object_files)) {
            fprintf(stderr, "%s %d: compile faield\n", info.sname, info.sline);
            exit(1);
        }
    }
    
    if(!output_object_file && files.length() > 0) {
        sInfo info;
        
        info.sname = clone files[0];
        info.clang_option = clang_option.to_string();
        
        linker(&info, object_files).expect {
            fprintf(stderr, "%s %d: linker faield\n", info.sname, info.sline);
            exit(1);
        }
    }
    
    come_final();
    
    return 0;
}
