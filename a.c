#include <comelang.h>

int main(int argc, char** argv)
{
    string result2 = wstring("ABC").to_string().replace(1, 'D');
    
    puts(result2);
    
    return 0;
}

