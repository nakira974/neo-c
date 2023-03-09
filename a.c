#include <neo-c.h>

class sA(int a)
{
    int self.a = a;
};

void fun(int b)
{
    sA* a = new sA(b);
}

class sA(int a)
{
    int self.a = a;
};

int main(int argc, char** argv)
{
    var a = new sA(123);
    
    printf("%d\n", a.a);
    return 0;
}

