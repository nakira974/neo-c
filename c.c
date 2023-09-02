#include <stdio.h>

int fun()
{
    return 1;
}

int fun2()
{
    return 2;
}

int main(int argc, char** argv)
{
    int a = fun(), fun2();
    printf("%d\n", a);
    
    return 0;
}
