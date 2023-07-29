#include <comelang2.h>

int main(int argc, char** argv)
{
    list<int>*% li = new list<int>.initialize();
    
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    
    return 0;
}

