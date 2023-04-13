#include <comelang.h>

int main(int argc, char** argv)
{
    var ma = ["AAA":1, "BBB":2];
    ma["CCC"] = 3;
    
    foreach(it, ma) {
        puts(it);
    }
    
    return 0;
}
