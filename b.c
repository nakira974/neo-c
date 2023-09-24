#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    struct sData* a;
    memset(&a, 0, sizeof(struct sData*));
    
    return 0;
}

