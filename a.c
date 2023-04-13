#include <comelang.h>

int main(int argc, char** argv)
{
    xassert("map", ["AAA":1, "BBB":2] === ["AAA":1, "BBB":2]);
    
    ["AAA":1, "BBB":2, "CCC":3].each {
        puts(it);
        printf("%d\n", it2);
    }
    
    return 0;
}
