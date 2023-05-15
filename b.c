#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int* a=calloc(1, 4);
    *a = 1;
    *(&((*a)))=(*a)+1;
    int b = (*a) - 1;
    
    printf("%d\n", *a);

    return 0;
}

