#include <comelang.h>

int fun(sInfo* a)
{
    return 1;
}

struct sInfo
{
    int a;
    int b;
}

int main(int argc, char** argv)
{
    sInfo info;
    fun(&info);
    
    return 0;
}
