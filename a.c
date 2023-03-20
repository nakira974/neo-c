#include <neo-c.h>

int main()
{
    var p = "ABCDEFGHIJKLMN".to_buffer().to_pointer();
    
    p += strlen("ABC");
    
    printf("%c\n", *p);
    
    return 0;
}

