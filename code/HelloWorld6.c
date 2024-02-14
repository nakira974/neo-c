#include <comelang.h>

void fun(int@ pipe) 
{
    @pipe = 4;
}

void fun2(int@ pipe2)
{
    @pipe2 = 5;
}

int main() 
{
    int@ pipe;
    come fun(pipe);

    int@ pipe2;
    come fun2(pipe2);

    come select {
        pipe {
            xassert("pipe test", @pipe == 4);
        }

        pipe2 {
            xassert("pipe2 test", @pipe2 == 5);
        }
    }

    come join;
    
    puts("finish");
    
    return 0;
}
