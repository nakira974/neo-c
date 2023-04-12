#include <comelang.h>

int fun(int a=123, string b = string("ABC"), list<int>*% c = [1,2,3])
{
    printf("a %d b %s\n", a, b);
    
    foreach(it, c) {
        printf("%d\n", it);
    }
    
    var d = clone c;
    
    foreach(it, d) {
        printf("%d\n", it);
    }
    
    return 0;
}

int main(int argc, char** argv)
{
    fun(b:string("DEF"));
    
    return 0;
}
