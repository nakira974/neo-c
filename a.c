#include <neo-c.h>

void fun(char*@ a)
{
    sleep(1);
    @a = "ABC";
}

int main(int argc, char** argv)
{
    char*@ a;
    come fun(a);
    
    printf("%s\n", @a);
    
    come join;
    
    return 0;
}

