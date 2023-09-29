#include <comelang.h>

exception int fun()
{
    throw;
}

exception int fun2()
{
    fun() throws;
}

int main()
{
    fun2().catch {
        puts("X");
    }
    
    return 0;
}
