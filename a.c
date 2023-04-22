#include <comelang.h>

int main(int argc, char** argv) 
{
    auto p = "ABC".to_buffer().to_pointer();
    
    p++;
    
    printf("%c\n", *p);

    return 0;
}
