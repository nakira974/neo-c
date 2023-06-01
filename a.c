#include <comelang.h>

using unsafe;

struct sType;

void sType*::finalize(sType* self);
void sType*::clone(sType* self);

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
    
    list<string>*% mFieldNames;
    list<sType*%>*% mFieldTypes;
};

struct sType
{
    sClass*% mClass;

    list<sType*%>*% mGenericsTypes;
    
    list<int>*% mArrayNum;
    bool mOmitArrayNum;
    
    list<sType*%>*% mParamTypes;
    sType*% mResultType;
    
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

struct sInfo
{
    smart_pointer<char>*% p;
    char* head;
    string sname;
    int sline;
    int err_num;
    string clang_option;
    bool no_output_err;

    list<sFun*%>*% mFuncs;
    sModule*% mModule;
};


int main(int argc, char** argv)
{
    sClass*% klass = new sClass;
    
    return 0;
}
