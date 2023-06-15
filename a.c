#include <comelang.h>

int main(int argc, char** argv)
{
    list<char*>*% li = new list<char*>();
    
    {
        string a = string("ABC");
        
        li.push_back(a);
    }
    
    return 0;
}

