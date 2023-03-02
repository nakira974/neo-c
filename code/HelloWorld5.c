#include <neo-c.h>

void fun(int@ pipe) 
{
    @pipe = 1;
}

int main() 
{
    int@ pipe;
    come fun(pipe);

    xassert("come channel test", @pipe == 1);

    come join;
    
    puts("finish");
    
    return 0;
}
