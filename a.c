//#include <comelang2.h>

struct __builtin_va_list
{
    char* v1;
    char* v2;
    char* v3;
    int v4;
    int v5;
};

void __builtin_va_start(char* list);
void __builtin_va_end(char* list);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char* msg, ...)
{
    char msg2[128];
    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 128, msg, args);
    va_end(args);
}

int main()
{
    
    return 0;
}

