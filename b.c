#include <comelang.h>

struct sInfo
{
    string a;
    vector<int>*% b;
};

int main(int argc, char** argv)
{
    sInfo*% info = new sInfo;
    
    info.a = string("ABC");
    info.a = string("DEF");
    info.b = new vector<int>();
    info.b = new vector<int>();
    
    return 0;
}
