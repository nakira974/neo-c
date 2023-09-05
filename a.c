#include <comelang2.h>

exception int fun(int a, int b)
{
    if(true) {
        puts("THROW IN FUN");
        throw;
    }
    return 3;
}

int main()
{
    int a = fun(1,2).catch {
        puts("X");
        exit(2);
    }
    
    printf("a %d\n", a);
    
    return 0;
}
