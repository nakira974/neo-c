#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void va_arg_test(char *fmt, ...) 
{
    va_list ap;

    va_start(ap, fmt);
    int a = va_arg(ap, int);
    char* b = va_arg(ap, char*);
    
    if(a == 1 && strcmp(b, "ABC") == 0) {
        puts("OK");
    }
    else {
        puts("NO");
    }
    va_end(ap);
}


int main(int argc, char** argv)
{
    va_arg_test("AAA", 1, "ABC");
    
    return 0;
}

