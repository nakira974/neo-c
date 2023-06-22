#include <comelang.h>

exception string fun(string a)
{
    return (string)null;
}

int main(int argc, char** argv)
{
    string b = string("ABC");
    
    string c = fun(b).catch {
        puts("catch");
    }
    
    printf("%p\n", c!);
    
    return 0;
}

