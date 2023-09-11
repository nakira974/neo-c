#include <comelang2.h>

int main()
{
    list<string>*% li = new list<string>();
    
    li.push_back(string("AAA"));
    li.push_back(string("BBB"));
    li.push_back(string("CCC"));
    
    foreach(it, li) {
        puts(it);
    }
    
    return 0;
}

