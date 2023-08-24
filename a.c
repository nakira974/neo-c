#include <comelang2.h>

int main(int argc, char** argv)
{
    [1,2,3,4,5].each {
        printf("%d\n", it);
    }
    
    xassert("list equals test", [1,2,3] === [1,2,3]);
    
    xassert("map equals test", ["AAA":1, "BBB":2] === ["AAA":1, "BBB":2]);
    
    return 0;
}
