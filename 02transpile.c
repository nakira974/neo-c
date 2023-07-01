#include "common.h"

bool gComelang;
bool gGC;

void come_init() version 2
{
    gComelang = false;
    gGC = false;
}

void come_final() version 2
{
}

void err_msg(sInfo* info, char* msg, ...)
{
    if(!info.no_output_err) {
        char msg2[COME_CODE_MAX];
    
        va_list args;
        va_start(args, msg);
        vsnprintf(msg2, COME_CODE_MAX, msg, args);
        va_end(args);
        
        fprintf(stderr, "%s %d: %s\n", info.sname, info.sline, msg2);
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

static bool cpp(sInfo* info)
{
    string input_file_name = info.sname;
    string output_file_name = xsprintf("%s.i", info.sname);
    
    char cmd[1024];
#ifdef __DARWIN_ARM__
    snprintf(cmd, 1024, "/opt/homebrew/opt/llvm/bin/clang-cpp -I. -I/usr/local/include -I%s/include -I/opt/homebrew/opt/llvm@16/include -I/opt/homebrew/opt/libgc/include -I/opt/homebrew/opt/pcre/include -D__DARWIN_ARM__ -U__GNUC__ %s > %s", input_file_name, output_file_name);
#else
    snprintf(cmd, 1024, "cpp -I. -U__GNUC__ %s > %s", input_file_name, output_file_name);
#endif
    //puts(cmd);

    int rc = system(cmd);
    if(rc != 0) {
        char cmd[1024];
        snprintf(cmd, 1024, "cpp -I. -C %s > %s", input_file_name, output_file_name);

        //puts(cmd);
        rc = system(cmd);

        if(rc != 0) {
            fprintf(stderr, "failed to cpp(2) (%s)\n", cmd);
            exit(5);
        }
    }
    
    return true;
}

static bool compile(sInfo* info, bool output_object_file, list<string>* object_files)
{
    string noextname = xnoextname(info.sname);
    string output_file_name = noextname + ".o";
    
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
    string output_file_name = xnoextname(info.sname);
    
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

void sVarTable*::finalize(sVarTable* self)
{
    delete borrow self.mVars;
}

sType*% sType*::initialize(sType*% self, char* name, sInfo* info, bool heap=false)
{
    int pointer_num = 0;
    char* p = name;
    while(*p) {
        if(xisalpha(*p)) {
            p++;
        }
        else {
            break;
        }
    }
    while(*p == '*') {
        pointer_num++;
        p++;
    }
    string name2 = string(name).substring(0, -pointer_num-1);
    sClass* klass = info.classes[name2];
    
    if(klass == null) {
        err_msg(info, "class not found(%s)\n", name2);
    }
    self.mClass = klass;
    
    self.mGenericsTypes = borrow new list<sType*>();
    self.mArrayNum = borrow new list<sNode*%>();
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
//    delete self.mClass;
    
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

sType*% sType*::clone(sType* self)
{
    sType*% result = new sType;
    
    result.mClass = self.mClass;
    
    result.mGenericsTypes = borrow new list<sType*>();
    
    foreach(it, self.mGenericsTypes) {
        result.mGenericsTypes.push_back(borrow clone it);
    }
    result.mArrayNum = borrow new list<sNode*%>();
    foreach(it, self.mArrayNum) {
        result.mArrayNum.push_back(clone it);
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

sType*% sType*::shallow_clone(sType* self)
{
    var result = new sType;
    
    result.mClass = self.mClass;
    
    result.mGenericsTypes = self.mGenericsTypes;
    igc_increment_ref_count(result.mGenericsTypes);

    result.mArrayNum = self.mArrayNum;
    igc_increment_ref_count(result.mArrayNum);
    
    result.mParamTypes = self.mParamTypes;
    igc_increment_ref_count(self.mParamTypes);
    if(self.mResultType) {
        result.mResultType = self.mResultType;
        igc_increment_ref_count(self.mResultType);
    }
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

    if(self.mOriginalTypeName) {
        result.mOriginalTypeName = self.mOriginalTypeName;
        igc_increment_ref_count(result.mOriginalTypeName);
    }
    result.mOriginalPointerNum = self.mOriginalPointerNum;
    
    result.mFunctionParam = self.mFunctionParam;
    
    return result;
}

sClass*% sClass*::initialize(sClass*% self, char* name, bool number=false, bool union_=false, bool generics=false, bool method_generics=false, bool protocol_=false, bool struct_=false, bool float_=false, int generics_num=-1, int method_generics_num=-1, bool enum_=false)
{
    self.mNumber = number;
    self.mStruct = struct_;
    self.mUnion = union_;
    self.mGenerics = generics;
    self.mMethodGenerics = method_generics;
    self.mEnum = false;
    self.mProtocol = protocol_;
    self.mFloat = float_;
    self.mEnum = enum_;
    
    self.mName = string(name);
    
    self.mGenericsNum = generics_num;
    self.mMethodGenericsNum = method_generics_num;
    
    self.mFields = new list<tuple2<string, sType*%>*%>();
    
    return self;
};

sFun*% sFun*::initialize(sFun*% self, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, bool external, bool var_args, sBlock*% block, sInfo* info)
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
    
    self.mBlock = block;
    
    return self;
}

void init_classes(sInfo* info)
{
    info.classes.insert(string("int"), new sClass("int", number:true));
    info.classes.insert(string("short"), new sClass("short", number:true));
    info.classes.insert(string("long"), new sClass("long", number:true));
    info.classes.insert(string("char"), new sClass("char", number:true));
    info.classes.insert(string("bool"), new sClass("bool", number:true));
    info.classes.insert(string("void"), new sClass("void"));
    info.classes.insert(string("float"), new sClass("float", float_:true));
    info.classes.insert(string("double"), new sClass("double", float_:true));
}

int come_main(int argc, char** argv) version 2
{
    var clang_option = new buffer();
    var files = new list<string>();
    var object_files = new list<string>();
    bool output_object_file = false;
    bool output_cpp_file = false;
    bool output_source_file_flag = false;
    for(int i=1; i<argc; i++) {
        if(argv[i] === "-g") {
            clang_option.append_str("-g ");
        }
        else if(argv[i] === "-s" || argv[i] === "-S") {
            output_source_file_flag = true;
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
        info.classes = new map<string, sClass*%>();
        info.types = new map<string, sType*%>();
        info.module = new sModule();
        info.right_value_objects = new list<sRightValueObject*%>();
        info.stack = new list<CVALUE*%>();
        info.gv_table = new sVarTable(global:true, parent:null);
        info.lv_table = borrow info.gv_table;
        
        init_classes(&info);
        
        if(!cpp(&info)) {
            fprintf(stderr, "%s %d: traspile faield\n", info.sname, info.sline);
            exit(2);
        }
        
        info.p = xsprintf("%s.i", it).read().to_buffer().to_pointer();
        info.head = info.p.p;
        
        if(!output_cpp_file) {
            if(!transpile(&info)) {
                fprintf(stderr, "%s %d: traspile faield\n", info.sname, info.sline);
                exit(2);
            }
            
            if(!output_source_file(&info)) {
                fprintf(stderr, "%s %d: output source file faield\n", info->sname, info->sline);
                exit(2);
            }
            
            (void)system(xsprintf("rm -f %s.i", info.sname));
            
            if(info.err_num > 0) {
                fprintf(stderr, "transpile error. err num %d\n", info->err_num);
                exit(2);
            }
            else {
                if(!compile(&info, output_object_file, object_files)) {
                    fprintf(stderr, "%s %d: compile faield\n", info.sname, info.sline);
                    exit(1);
                }
                
/*
                if(!output_source_file_flag) {
                    (void)system(xsprintf("rm -f %s.c", info.sname));
                }
*/
            }
        }
    }
    
    if(!output_object_file && !output_cpp_file && files.length() > 0) {
        sInfo info;
        
        info.sname = clone files[0];
        info.clang_option = clang_option.to_string();
        
        linker(&info, object_files).expect {
            fprintf(stderr, "%s %d: linker faield\n", info.sname, info.sline);
            exit(1);
        }
        
        (void)system(xsprintf("rm -f %s.o", xnoextname(info.sname)));
    }
    
    come_final();
    
    return 0;
}
