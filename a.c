#include <comelang2.h>

struct sData
{
    string a;
    string b;
};

int main(int argc, char** argv)
{
    sData*% data = new sData;
    
    data.a = string("ABC");
    
    return 0;
}

