#include <comelang.h>

int main(int argc, char** argv)
{
    list<string>*% li = new list<string>();
    
/*
    li.push_back(string("AAA"));
    li.push_back(string("BBB"));
    li.push_back(string("CCC"));
*/
    
    if(li.length() > 0) {
        printf("%d\n", li.length());
    }
    
    return 0;
}
