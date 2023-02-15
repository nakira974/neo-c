#include <stdio.h>

int main(int argc, char** argv)
{
    short a;
    short b[10];
    
    a = b;
    
    printf("%p %p\n", a, b);
    
    return 0;
}

