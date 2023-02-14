#include <stdio.h>

int main(int argc, char** argv)
{
    int a;
    int b[10];
    
    a = b;
    
    printf("%p %p\n", a, b);
    
    return 0;
}

