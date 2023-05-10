#include <stdio.h>
#include <stdlib.h>

int fun(int x, int y)
{
    return x + y;
}

int main(int argc, char** argv)
{
    printf("%d\n", fun(1,2));
    
    return 0;
}

