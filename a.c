#include <comelang.h>

int fun(int x, int y) version 98
{
    return inherit(x, y);
}

int fun(int x, int y) version 99
{
    return inherit(x, y);
}

int main(int argc, char** argv)
{
    fun(1,2);
    
    return 0;
}

