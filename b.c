#include <string.h>
#include <stdlib.h>

int main() 
{
    char a[3] = "123";
    char* p = a;
    p++;
    
    memcmp(p, "12345", strlen("12345")) == 0;
    
    return 0;
}
