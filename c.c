#include <comelang.h>

int main(int argc, char** argv)
{
    var c = ("AAA", "BBB", "CCC", ["AAA":1]);
    
    printf("%c\n", c.0[0]);
    
    return 0;
}
