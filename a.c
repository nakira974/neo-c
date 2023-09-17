#include <comelang2.h>

int main(int argc, char** argv)
{
    var a = [string("AAA"), string("BBB")];
    
    printf("str %s\n", a[0]);
    
    var b = [1,2,3,4,5];
    
    printf("int %d\n", b[0]);
    
    var c = ["AAA":1, "BBB":2, "CCC":3];
    
    printf("map %d\n", c["AAA"]);
    
    return 0;
}
