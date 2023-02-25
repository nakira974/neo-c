#include <stdio.h>
#include <stdlib.h>

using safe;

struct sData {
    int a;
    long b;
    int c;
    char d;
};

int main(int argc, char** argv)
{
    struct sData a;
    struct sData* b = &a;
    
    b++;
    
    return 0;
}

