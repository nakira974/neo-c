#include <neo-c.h>

int main()
{
    buffer* buf = new buffer();
    
    buf.append_int(123);
    buf.append_int(234);
    buf.append_int(567);
    
    smart_pointer<int>* p = buf.to_pointer();
    
    p.p = (int*)(buf.buf + 4);
    
    printf("%d\n", p->as_int());
    
    return 0;
}

