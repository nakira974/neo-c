#include <comelang.h>

struct sData
{
    int a;
    string b;
};

int main(int argc, char** argv)
{
    sData*% data = new sData;
    data.a = 111;
    data.b = string("BBB");
    
    gc_inc data;
    gc_dec data;
    
    return 0;
}

