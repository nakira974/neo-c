#include <comelang.h>

int main(int argc, char** argv)
{
    char* b = "ABCD";
    void* a = b;
    
    map<char*, int>*% c = [b:1, "DEF":2, (char*)a:3];
    
    c.each{
        puts(it);
    }
    
    return 0;
}
