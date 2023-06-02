#ifndef __COMMON_H__
#define __COMMON_H__

#include <comelang.h>

using unsafe;

#define COME_CODE_MAX 2048
#define FUN_VERSION_MAX 128

extern bool gComelang;

struct sType;

void sType*::finalize(sType* self);
sType*% sType*::clone(sType* self);

struct sClass {
    bool mStruct;
    bool mUnion;
    bool mGenerics;
    bool mEnum;
    bool mProtocol;
    bool mNumber;
    
    string mName;
    
    int mGenericsNum;
    int mMethodGenericsNum;
    
    list<tuple2<string, sType*%>*%>*% mFields;
};

struct sType
{
    sClass* mClass;

    list<sType*>* mGenericsTypes;
    
    list<int>* mArrayNum;
    bool mOmitArrayNum;
    
    list<sType*>* mParamTypes;
    sType* mResultType;
    
    bool mUnsigned;
    bool mConstant;
    bool mRegister;
    bool mVolatile;
    bool mStatic;
    bool mRestrict;
    bool mImmutable;
    bool mLongLong;
    bool mHeap;
    bool mDummyHeap;
    bool mNoHeap;
    bool mRefference;
    
    int mPointerNum;
    int mNoArrayPointerNum;
    int mSizeNum;
    
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;

    char* mOriginalTypeName;
    int mOriginalPointerNum;
    
    bool mFunctionParam;
};

struct sVar;

struct LVALUE {
    string c_value;
    sType*% type;
    sVar* var;
};

struct sVar {
    string mName;
    string mValue;
    int mIndex;
    sType* mType;

    int mBlockLevel;

    LVALUE mLLVMValue;

    bool mGlobal;
    bool mAllocaValue;
    bool mFunctionParam;
    bool mNoFree;
};

struct sFun
{
    string mName;
    
    sType*% mResultType;
    list<sType*%>*% mParamTypes;
    list<string%>*% mParamNames;
    
    bool mExternal;
    bool mVarArgs;
    
    buffer*% mSource;
    buffer*% mSourceHead;
    buffer*% mSourceDefer;
};

struct sModule
{
    buffer*% mSourceHead;
    buffer*% mSource;
    string mLastCode;
};

struct sVarTable;

struct sVarTable {
    map<string, sVar*%>*% mVars;
    bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sInfo;

interface sNode {
    bool compile(sInfo* info);
};

struct sBlock
{
    list<sNode*%>*% mNodes;
    sVarTable*% mLVTable;
    bool mHasResult;
};

struct sRightValueObject 
{
    sType*% mType;
    string mVarName;
    string mFunName;
    bool mFreed;
    int mObjectID;
};

struct sInfo
{
    smart_pointer<char>*% p;
    char* head;
    string sname;
    int sline;
    int err_num;
    string clang_option;
    bool no_output_err;
    bool no_output_come_code;
    
    sFun* come_fun;
    int come_nest;

    map<string, sFun*%>*% funcs;
    sModule*% module;
    
    sType*% type;
    
    list<sRightValueObject*%>*% right_value_objects;
    
    sType*% generics_type;
    list<sType*%>*% method_generics_types;
    
    list<LVALUE*%>*% stack;
    
    sType*% come_function_result_type;
    
    sVarTable* lv_table;
    sVarTable*% head_lv_tabale;
};

/////////////////////////////////////////////////////////////////////
/// 01main.c ///
/////////////////////////////////////////////////////////////////////
int come_main(int argc, char** argv) version 1;

/////////////////////////////////////////////////////////////////////
/// 02transpile.c ///
/////////////////////////////////////////////////////////////////////
int come_main(int argc, char** argv) version 2;
void come_init() version 2;
void come_final() version 2;
void err_msg(sInfo* info, char* str);
exception int parse(sInfo* info) version 2;
exception int transpile(sInfo* info) version 2;
exception int output_source_file(sInfo* info) version 2;

/////////////////////////////////////////////////////////////////////
/// 03transpile2.c ///
/////////////////////////////////////////////////////////////////////
void come_init() version 3;
void come_final() version 3;

sModule*% sModule*::initialize(sModule*% self);
sFun*% sFun*::initialize(sFun*% self, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, bool external, bool var_args, sInfo* info);
sClass*% sClass*::initialize(sClass*% self, char* name);
sType*% sType*::initialize(sType*% self, char* name, int pointer_num=0, bool heap=false);

exception int transpile(sInfo* info) version 3;
exception int output_source_file(sInfo* info) version 3;
void show_type(sType* type, sInfo* info);
string create_generics_name(sType* generics_type, sInfo* info);
void add_last_code_to_source(sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 04function.c ///
/////////////////////////////////////////////////////////////////////
sVarTable*% initialize(sVarTable*% self, bool global, sVarTable* parent);
sVar* get_variable_from_table(sVarTable* table, char* name);
void free_objects_on_return(sBlock* current_block, sInfo* info, char* ret_value, bool top_block);

#endif
