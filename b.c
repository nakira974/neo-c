#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int fun(int a, int b)
{
    int c = 1;
    return a + b + c;
}


int main(int argc, char** argv)
{
    int a = 0;
    printf("%d\n", a);
    {
        int a = 1;
        printf("%d\n", a);
    }
    
    return 0;
}
