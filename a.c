#include <comelang2.h>

int main(int argc, char** argv)
{
    list<string>*% li = new list<string>.initialize();
    
    li.push_back(string("ABC"));
    li.push_back(string("DEF"));
    li.push_back(string("GHI"));
    
    foreach(it, li) {
        printf("%s\n", it);
    }
    
    list<int>*% li2 = new list<int>.initialize();
    
    li2.push_back(1);
    li2.push_back(2);
    li2.push_back(3);
    
    foreach(it, li2) {
        printf("%d\n", it);
    }
    
    int a = 123;
    li2.each() {
        printf("%d %d\n", it, a);
        a = 2;
    }
    
    printf("a %d\n", a);
    
    xassert("list::item", li2.item(0, -1) == 1);
    
    return 0;
}

