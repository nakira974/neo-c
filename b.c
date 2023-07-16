#include <comelang.h>

int main(int argc, char** argv)
{
    char* b = "ABC";
    void* a = b;
    
    char* c = a + 1;
    
    return 0;
}
