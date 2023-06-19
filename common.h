#ifndef __COMMON_H__
#define __COMMON_H__

#include <comelang.h>

using no-null-check;
using unsafe;

#define COME_CODE_MAX 2048
#define FUN_VERSION_MAX 128

extern bool gComelang;
extern bool gGC;

struct sType;

void sType*::finalize(sType* self);
sType*% sType*::clone(sType* self);

struct sClass {
    bool mStruct;
    bool mFloat;
    bool mUnion;
    bool mGenerics;
    bool mMethodGenerics;
    bool mEnum;
    bool mProtocol;
    bool mNumber;
    bool mEnum;
    
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
    bool mShort;
    bool mLong;
    bool mLongLong;
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
    bool mAllocaValue;
};

struct sVar;

struct CVALUE {
    string c_value;
    sType*% type;
    sVar* var;
};

struct sVar {
    string mName;
    string mCValueName;
    sType*% mType;

    int mBlockLevel;

    bool mGlobal;
    bool mAllocaValue;
    bool mFunctionParam;
    bool mNoFree;
};

struct sVarTable;

struct sBlock;

struct sFun
{
    string mName;
    
    sType*% mResultType;
    list<sType*%>*% mParamTypes;
    list<string%>*% mParamNames;
    
    sBlock*% mBlock;
    
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
    int sline();
    string sname();
};

struct sBlock
{
    list<sNode*%>*% mNodes;
    sVarTable*% mVarTable;
};

struct sRightValueObject 
{
    sType*% mType;
    string mVarName;
    string mFunName;
    bool mFreed;
    char* mObj;
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
    int block_level;

    map<string, sFun*%>*% funcs;
    map<string, sClass*%>*% classes;
    map<string, sType*%>*% types;
    sModule*% module;
    
    sType*% type;
    
    list<sRightValueObject*%>*% right_value_objects;
    
    sType*% generics_type;
    list<sType*%>*% method_generics_types;
    
    list<CVALUE*%>*% stack;
    
    sType*% come_function_result_type;
    
    sVarTable* lv_table;
    sVarTable*% gv_table;
    
    bool comma;
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
void err_msg(sInfo* info, char* msg, ...);
bool transpile(sInfo* info) version 2;
bool output_source_file(sInfo* info) version 2;
sModule*% sModule*::initialize(sModule*% self);
sType*% sType*::initialize(sType*% self, char* name, sInfo* info, bool heap=false);
sVarTable*% sVarTable*::initialize(sVarTable*% self, bool global, sVarTable* parent);
sVarTable*% sVarTable*::clone(sVarTable* self);
sType*% sType*::clone(sType* self);
sType*% sType*::shallow_clone(sType* self);
void sType*::finalize(sType* self);
sClass*% sClass*::initialize(sClass*% self, char* name, bool number=false, bool union_=false, bool generics=false, bool method_generics=false, bool protocol_=false, bool struct_=false, bool float_=false, int generics_num=-1, int method_generics_num=-1, bool enum_=false);
sFun*% sFun*::initialize(sFun*% self, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, bool external, bool var_args, sBlock*% block, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 03transpile2.c ///
/////////////////////////////////////////////////////////////////////
void come_init() version 3;
void come_final() version 3;

bool transpile(sInfo* info) version 3;
bool output_source_file(sInfo* info) version 3;
void show_type(sType* type, sInfo* info);
string create_generics_name(sType* generics_type, sInfo* info);
void add_last_code_to_source(sInfo* info);
void add_come_code_at_function_head(sInfo* info, char* code, ...);
void add_come_code(sInfo* info, const char* msg, ...);
void add_come_last_code(sInfo* info, const char* msg, ...);
void add_last_code_to_source_without_semicolon(sInfo* info);
void dec_stack_ptr(int value, sInfo* info);
CVALUE*% get_value_from_stack(int offset, sInfo* info);
string make_define_var(sType* type, char* name, sInfo* info);
void transpiler_clear_last_code(sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 04heap.c ///
/////////////////////////////////////////////////////////////////////
sVar* get_variable_from_table(sVarTable* table, char* name);
void free_objects_on_return(sBlock* current_block, sInfo* info, char* ret_value, bool top_block);
void free_right_value_objects(sInfo* info);
void free_objects(sVarTable* table, char* ret_value, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 05function.c ///
/////////////////////////////////////////////////////////////////////
bool is_type_name(char* buf, sInfo* info);
bool parsecmp(char* str, sInfo* info);
exception string parse_word(sInfo* info);
void skip_spaces_and_lf(sInfo* info);
exception int expected_next_character(char c, sInfo* info);
sBlock*% sBlock*::initialize(sBlock*% self, sVarTable* lv_table, sInfo* info);

exception tuple2<sType*%,string>*% parse_type(sInfo* info, bool parse_variable_name=false);
exception sBlock*% parse_block(list<sType*%>*? param_types, list<string>*? param_names, sInfo* info);
exception int transpile_block(sBlock* block, sInfo* info);
void arrange_stack(sInfo* info, int top);
exception int expected_next_character(char c, sInfo* info);
exception sNode*% parse_function(sInfo* info);

exception sNode*% expression(sInfo* info) version 5;
exception sNode*% top_level(char* buf, char* head, sInfo* info) version 99;
exception sNode*% expression_node(sInfo* info) version 1;
exception sNode*% expression_node(sInfo* info) version 99;

exception int transpile(sInfo* info) version 5;
void parse_sharp(sInfo* info) version 5;
exception sNode*% string_node(char* buf, char* head, sInfo* info) version 5;

/////////////////////////////////////////////////////////////////////
/// 06str.c ///
/////////////////////////////////////////////////////////////////////
exception sNode*% expression_node(sInfo* info) version 98;

/////////////////////////////////////////////////////////////////////
/// 07var.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, sInfo* info) version 7;
void add_variable_to_table(char* name, sType* type, sInfo* info);

/////////////////////////////////////////////////////////////////////
/// 08if.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, sInfo* info) version 8;

/////////////////////////////////////////////////////////////////////
/// 09while.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, sInfo* info) version 9;

/////////////////////////////////////////////////////////////////////
/// 10do_while.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, sInfo* info) version 10;

/////////////////////////////////////////////////////////////////////
/// 11for.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, sInfo* info) version 11;

/////////////////////////////////////////////////////////////////////
/// 12switch.c
/////////////////////////////////////////////////////////////////////
exception sNode*% string_node(char* buf, char* head, sInfo* info) version 12;

/////////////////////////////////////////////////////////////////////
/// 13op.c
/////////////////////////////////////////////////////////////////////
exception sNode*% expression(sInfo* info) version 13;

/////////////////////////////////////////////////////////////////////
/// 14struct.c
/////////////////////////////////////////////////////////////////////
exception sNode*% top_level(char* buf, char* head, sInfo* info) version 98;

/////////////////////////////////////////////////////////////////////
/// 15union.c
/////////////////////////////////////////////////////////////////////
exception sNode*% top_level(char* buf, char* head, sInfo* info) version 97;

/////////////////////////////////////////////////////////////////////
/// 16enum.c
/////////////////////////////////////////////////////////////////////
exception sNode*% top_level(char* buf, char* head, sInfo* info) version 96;

/////////////////////////////////////////////////////////////////////
/// 17typedef.c
/////////////////////////////////////////////////////////////////////
exception sNode*% top_level(char* buf, char* head, sInfo* info) version 95;

#endif
