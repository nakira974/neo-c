
struct __builtin_va_list
{
    char* v1;
    char* v2;
    char* v3;
    int v4;
    int v5;
};

typedef __builtin_va_list va_list;

//#include <stdio.h>
//#include <stdlib.h>

int main(int argc, char** argv)
{
    int a = 0xff;
    short x = 1;
    ((short) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)));
    
    return 0;
}

