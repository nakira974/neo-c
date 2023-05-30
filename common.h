#ifndef __COMMON_H__
#define __COMMON_H__

#include <comelang.h>

struct sType;

struct sClass {
    bool mStruct;
    bool mUnion;
    bool mGenerics;
    bool mEnum;
    bool mProtocol;
    bool mNumber;
    
    string name;
    
    int mGenericsNum;
    int mMethodGenericsNum;
    
    list<string>*% mFieldNames;
    list<sType*%>*% mFieldTypes;
};

struct sType;

struct sType
{
    sClass*% mClass;

    list<sType*>*% mGenericsTypes;
    
    list<int>*% mArrayNum;
    
    list<sType*>*% mParamTypes;
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

    string mOriginalTypeName;
    int mOriginalPointerNum;
    
/*
    BOOL mCurrentStackVariable;
    BOOL mMethodGenericsResult;
    BOOL mAllocaValue;
    
    BOOL mArrayPointer;
    BOOL mOmitArrayNum;
    BOOL mOriginalOmitArrayNum;
    BOOL mException;
    
    BOOL mFunctionParam;
    
    BOOL mArrayParam;
    BOOL mCastedPointerToPointer;
    BOOL mNoAutoCast;
*/
};

struct sVar;

struct LVALUE {
    string c_value;
    sType*% type;
    sVar* var;
};

struct sVar {
    string mName;
    string mCValueName;
    int mIndex;
    sType* mType;

    int mBlockLevel;

    LVALUE mLLVMValue;

    bool mGlobal;
    bool mAllocaValue;
    bool mFunctionParam;
    bool mNoFree;
};

/*
struct sInfo
{
    smart_pointer<char>*% p;
    char* head;
    string sname;
    
    int err_num;
    struct sParserInfoStruct* pinfo;

    char sname[PATH_MAX];
    int sline;
    
    int err_num;
    sNodeType* type;

    int stack_num;

    char fun_name[VAR_NAME_MAX];
    char real_fun_name[VAR_NAME_MAX];

    void* current_block;

    sNodeType* generics_type;

    BOOL last_expression_is_return;
    void* loop_end_block[LOOP_NEST_MAX];
    int num_loop;
    void* loop_begin_block[LOOP_NEST_MAX];
    int num_loop2;

    void* switch_expression;
    sNodeType* switch_expression_type;

    void* case_else_block;
    void* case_then_block;

    int mBlockLevel;

    struct sNodeBlockStruct* current_node_block;
    struct sNodeBlockStruct* function_node_block;

    BOOL in_inline_function;
    char in_inline_function_name[VAR_NAME_MAX];
    int inline_sline;
    LLVMBasicBlockRef inline_func_end;
    char* inline_func_end_label;
    int num_inline;

    BOOL in_lambda_function;
    int lambda_sline;
    BOOL in_select_block;

    void* andand_result_var;
    void* oror_result_var;

    LLVMMetadataRef function_meta_data;
    LLVMValueRef inline_result_variable;

    BOOL in_generics_function;
    char generics_sname[PATH_MAX];
    int generics_sline;

    BOOL in_automatically_created_function;

    BOOL in_thread_function;

    char calling_fun_name[VAR_NAME_MAX];

    sNodeType* method_block_generics_type;

    sNodeType* return_result_type;

    LLVMBasicBlockRef defer_block;
    BOOL empty_function;
    
    sNodeType* method_generics_types[GENERICS_TYPES_MAX];
    int num_method_generics_types;
    
    void* right_value_objects;
    void* refference_objeccts;
    
    BOOL no_output;
    
    char inline_caller_sname[VAR_NAME_MAX];
    int inline_caller_sline;
    
    BOOL creating_generics_function;
    
    sComeFun* come_fun;
    int come_nest;
    int inline_nest;
    
    char* inline_result_variable_name;
    
    BOOL no_output_come_code;
    
    char* continue_code;
};
*/

#endif
