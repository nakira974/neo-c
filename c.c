#include <comelang.h>

int main(int argc, char** argv)
{
    var c = (["AAA","BBB","CCC"], "BBB", "CCC", ["AAA":1]);
    
    printf("%c\n", c.0[0][0]);
    
    var d = "ABC".to_buffer().to_pointer();
    
    d++;
    d++;
    d++;
    d++;
    
    return 0;
}
