#include <comelang.h>

struct sInfo
{
    string c;
}

int main(int argc, char** argv)
{
    string a = null;
    string b = clone a;
    
    printf("a %p b %p\n", a!, b!);
    
    sInfo info;
    info.c = clone b;
    
    printf("c %p\n", info.c!);
    
    return 0;
}
