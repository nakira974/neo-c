#include <comelang2.h>

int main(int argc, char** argv)
{
    list<int>*% li = new list<int>.initialize();
    
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    
    for(var it = li.begin(); !li.end(); it = li.next())
    {
        printf("%d\n", it);
    }

    
    return 0;
}

