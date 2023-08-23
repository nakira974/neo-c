#include <comelang2.h>

int gA;

extern int fun2(int a, int b);


int fun()
{
    return 1;
}

struct sData
{
    int a;
    int b;
};

typedef struct { int b; int c; } MAX;

int main(int argc, char** argv)
{
    MAX data;
    
    sData* x;
    
    fun();
    
    return 0;
}
