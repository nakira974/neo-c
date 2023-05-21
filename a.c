#include <comelang.h>

int main(int argc, char** argv)
{
    list<int>*% l = new list<int>();
    
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    
    list<int>*% l2 = clone l;
    
    l2.each {
        printf("%d\n", it);
    }
    
    return 0;
}

