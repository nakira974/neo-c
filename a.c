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

exception sData*%,sData*%,int fun(int x, int y)
{
    return (new sData(111, 222), new sData(333, 444));
}

int main(int argc, char** argv)
{
    var data, data2 = fun(1, 2).catch {
        puts("CATCH");
        exit(2);
    }
    printf("data %d %d\n", data.a, data.b);
    printf("data2 %d %d\n", data2.a, data2.b);
    
    return 0;
}
