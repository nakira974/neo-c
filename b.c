#include <comelang.h>

using unsafe;

exception int*% fun(int a)
{
    int*% aa = new int;
    *aa = a;
    return aa;
}

int main(int argc, char** argv)
{
    int* a = fun(123).catch {
        puts("EERRRO");
    }
    
    printf("%d\n", *a);
    
    return 0;
}
