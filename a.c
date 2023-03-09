#include <neo-c.h>

class sParam(string name, sType* type)
{
    string self.mName = string(name);
};

class sFunction(string name, sType* result_type, list<sParam*>* params, LLVMValueRef llvm_fun)
{
    string self.mName = string(name);
    list<sParam*>* self.params = params;
    bool self.mVarArgs = false;
};

int main(int argc, char** argv)
{
    return 0;
}

