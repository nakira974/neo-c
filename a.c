#include "common.h"

struct sData
{
    int a;
    int b;
};

sData*% sData*::initialize(sData*% self, int a, int b)
{
    self.a = a;
    self.b = b;
    
    return self;
}

exception sData*%, sData*% fun(int x, int y)
{
    throw;
    return (new sData(1,2), new sData(3,3));
}

int main(int argc, char** argv)
{
    var x,y = fun(1, 2).catch {
        puts("CATCH");
    }
    
    printf("%p %p\n", x, y);
    
    return 0;
}
