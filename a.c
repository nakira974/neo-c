#include <stdio.h>

int main(int argc, char** argv)
{
    unsigned char a = 0xFF;
    
    if(a < 0xFFF) {
        puts("AAA");
    }
    else {
        puts("BBB");
    }
    
    return 0;
}

