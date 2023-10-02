#include <comelang2.h>

int fun(int x, int y=1, int z=2)
{
    printf("x %d y %d z %d\n", x,y,z);
}

int main(int argc, char** argv)
{
    fun(123);
    
    return 0;
}
