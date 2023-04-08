#include <comelang.h>

struct sInfo
{
    int a[3][3];
};

int main()
{
    sInfo info;
    
    info.a[1][1] = 1;
    
    printf("%d\n", info.a[1][1]);
    
    return 0;
}

