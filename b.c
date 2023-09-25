#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    int a[128];
    memset(a, 0, sizeof(a));
    
    
    printf("%d\n", a[127]);
    
    return 0;
}

