#include <neo-c.h>

struct sParserInfo
{
    char* p;
};

int main()
{
    struct sParserInfo info;
    
    
    printf("%c\n", *info.p);
    
    return 0;
}

