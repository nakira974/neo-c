#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    int a = 0;
    
    int b = a+=2;
    
    printf("%d\n", b);
    
    return 0;
}

