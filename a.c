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
    
    if(string("AAA") === string("AAA")) {
        puts("OK");
    }
    
    puts("AAA" + "BBB");
    
    char* str = "ABC";
    
    printf("%c\n", *(str + 1));
    
    return 0;
}
