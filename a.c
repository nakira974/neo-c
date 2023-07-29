#include <comelang2.h>

struct sData
{
    char*% a;
};

int main(int argc, char** argv)
{
    char*% a = new char[128];
    char*% b = a;
        
    sData data;
    data.a = a;
    
/*
    list<int>*% li = new list<int>.initialize();
    
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    
    for(var it = li.begin(); !li.end(); it = li.next())
    {
        printf("%d\n", it);
    }
*/
    
    return 0;
}

