#include <comelang2.h>

int main(int argc, char** argv)
{
    list<string>*% li = new list<string>();
    
    li.push_back(string("AAA"));
    li.push_back(string("BBB"));
    li.push_back(string("CCC"));
    
    printf("%d\n", li.length());
    
    li.each {
        puts(it);
    }
    
    return 0;
}
