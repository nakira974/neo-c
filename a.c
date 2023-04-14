#include <comelang.h>

struct sInfo
{
    char* a;
};

int main(int argc, char** argv)
{
    sInfo info;
    
    info.a = null;
    
    puts(info.a);
    
    return 0;
}
