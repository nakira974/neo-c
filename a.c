#include <comelang2.h>

int main(int argc, char** argv)
{
    puts("HELLO COMELANG2");
    
    list<int>*% li = new list<int>.initialize();
    
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    
    li.each() {
        printf("%d\n", it);
    }
    
    li[0] = 777;
    
    printf("li[0] %d\n", li[0]);
    
    return 0;
}
