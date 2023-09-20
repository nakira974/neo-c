#include <comelang2.h>

int main(int argc, char** argv)
{
    char* a = "ABC";
    
    char* b = clone a;
    
    char c = 'a';
    char d = clone c;
    
    printf("b %s %c\n", b, d);
    
    return 0;
}
