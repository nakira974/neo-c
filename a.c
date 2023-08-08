#include <comelang2.h>

int main(int argc, char** argv)
{
    xassert("auto come header", funX(1,2) == 3);
    
    sDataXYZ data;
    
    data.a = string("ABC");
    data.b = 2;
    
    xassert("auto come header2", data.a.equals("ABC") && data.b == 2);
    
    xassert("auto come header3", funX2(string("ABC"), string("DEF")).equals(string("ABCDEF")));
    
    return 0;
}

