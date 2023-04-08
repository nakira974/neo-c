#include <comelang.h>

struct sInfo
{
    int c[2][2];
};

int main(int argc, char** argv)
{
    sInfo info;
    info.c[0][0] = 123;
    info.c[0][1] = 234;
    
    printf("%d\n", info.c[0][1]);
    
    return 0;
}
