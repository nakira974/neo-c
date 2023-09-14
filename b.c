#include <comelang2.h>


exception int fun(int x, int y)
{
    throw;
}

int main(int argc, char** argv)
{
    int a = fun(1,2).catch {
        puts("CATCH");
    }
    
    return 0;
}
