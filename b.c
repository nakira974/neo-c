#include <comelang.h>

int main(int argc, char** argv)
{
    var li = [1,2,3];
    li.delete(0,1);
    
    li.each {
        printf("%d\n", it);
    }
    
    return 0;
}
