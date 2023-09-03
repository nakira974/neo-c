#include <comelang2.h>

int main()
{
    list<string>*% li_str = new list<string>();
    
    li_str.push_back(string("AAA"));
    li_str.push_back(string("BBB"));
    li_str.push_back(string("CCC"));
    
    foreach(it, li_str) {
        puts(it);
    }
    
    return 0;
}

