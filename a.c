#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>

using comelang;

int main(int argc, char** argv)
{
    char*% a = new char[128];
    strncpy(a, "ABC", 128);
    printf("HELLO WORLD %s\n", a);
    
    return 0;
}


