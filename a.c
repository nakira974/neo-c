#include <comelang.h>

int main(int argc, char** argv)
{
    list<string>*% li = new list<string>();
    
    {
        string a = string("ABC");
        
        li.push_back(a);
        
        string b = string("DEF");
        
        li.push_back(b);
    }
    
    li.each {
        printf("%s\n", it);
    }
    
    return 0;
}

