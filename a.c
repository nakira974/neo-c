#include <comelang.h>

int c(char*% a)
{
    a = string("AAA");
    
    delete borrow a;
    
    return 0;
}

int main(int argc, char** argv)
{
    c(string("AAA"));
    
    return 0;
}
