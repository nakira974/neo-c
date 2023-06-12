#include <comelang.h>

int main(int argc, char** argv)
{
    using unsafe;
    
    string buf = string("if");
    char* p = "(";
    
    printf("%d\n", buf !== "if");
    
    if(buf !== "if" && buf !== "while" && buf !== "for" && buf !== "return" && *p == '(') 
    {
        puts("AAA");
    }
    else {
        puts("BBB");
    }
    
    return 0;
}

