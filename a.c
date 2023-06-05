#include <comelang.h>

class sData(int a, int b)
{
    int self.a = a;
    int self.b = b;
};

exception tuple2<sData*%,string>*% fun(sData* data)
{
    sData*% result = new sData(data.a, data.b);
    
    return new tuple2<sData*%,string>(result, string("ABC"));
}

int main(int argc, char** argv)
{
    sData*% data = new sData(1, 2);
    var data2, str = fun(data).catch {
        puts("AAA");
    }
    printf("%d %d %s\n", data2.a, data2.b, str);
    
    return 0;
}

