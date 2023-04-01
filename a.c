#include <comelang.h>

int main()
{
    var p = "&& false".to_buffer().to_pointer();
    
printf("%p\n", p.p);
    
    while((*p == '&' && *(p+1) == '&') || (*p == '|' && *(p+1) == '|')) {
printf("%p\n", p.p);
        if(*p == '&' && *(p+1) == '&') {
            puts("AAA");
            break;
        }
        else {
            break;
        }
    }
    
    printf("%p\n", p.p);
    printf("%p\n", (p+3).p);
    
    p += 3;
printf("%c\n", *p);
    
    return 0;
}

