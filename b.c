#include <comelang.h>

int main()
{
    var a = [[string("A"), string("B")], [string("C")]];
    
    var b = [string("AAA"):[string("CCC"):1], string("BBB"):[string("DDD"):2]];
    
    printf("b %d\n", b.at(string("AAA"),null).at(string("CCC"), -9));
    
    var c = (string("CCC"), (string("BBB"), 1), "AAA");
    
    printf("c.0 %s\n", c.1.0);
    
//    printf("%d\n", [[string("111"), string("222"), string("333")], [string("444"), string("555"), string("666")]] === [[string("111"), string("222"), string("333")], [string("444"), string("555"), string("666")]])
    
    return 0;
}

