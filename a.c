#include <comelang2.h>

int*% fun(int x, int y)
{
    int*% result = new int;
    *result = x + y;
    return result;
}

void fun2(int*% a)
{
}

int main(int argc, char** argv)
{
    int*% x = fun(1, 2);
    fun2(x);
    
    return 0;
}

