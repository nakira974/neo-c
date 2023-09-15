#include <comelang2.h>

interface IA
{
    void fun();
};

struct sTest
{
    int a;
    int b;
};

sTest*% sTest*::initialize(sTest*% self, int a, int b)
{
    self.a = a;
    self.b = b;
    
    return self;
}

void sTest*::fun(sTest* test)
{
    printf("%d %d\n", test.a, test.b);
}

int main(int argc, char** argv)
{
    IA*% ia = new IA(new sTest(111, 222));
    
    ia.fun();
    
    return 0;
}
