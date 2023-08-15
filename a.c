
struct __builtin_va_list
{
    char* v1;
    char* v2;
    char* v3;
    int v4;
    int v5;
};

#include <stdio.h>

int main(int argc, char** argv)
{
    struct { int a; int b; int c; } x;
    enum { kA, kB, kC } y;
    union { double a; float b; } z;
    
    return 0;
}

