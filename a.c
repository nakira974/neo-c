#include <comelang.h>

class sData(int a, int b)
{
    int self.a = a;
    int self.b = b;
};

exception sData*% fun(sData* data)
{
    sData*% result = new sData(data.a, data.b);
    
    return result;
}

int main(int argc, char** argv)
{
    sData*% data = new sData(1, 2);
    printf("%d %d\n", data.a, data.b);
    sData*% data2 = fun(data).catch {
        puts("AAA");
    }
    printf("%d %d\n", data2.a, data.b);
    
    return 0;
}

