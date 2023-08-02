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
    
    li2.insert(1, 5);
    
    xassert("list::insert", li2.item(0, -1) == 1 && li2.item(1, -1) == 5 && li2.item(2, -1) == 2 && li2.item(3, -1) == 3);
    
    li.insert(1, string("GGG"));
    
    xassert("list::insert", strcmp(li.item(0, -1), "ABC") == 0 && strcmp(li.item(1, -1), "GGG") == 0 && strcmp(li.item(2,-1), "DEF") == 0 && strcmp(li.item(3,-1), "GHI") == 0);
    
    li.reset();
    
    xassert("list::reset", li.length() == 0);
    
    li2.delete(0, 1);
    
    xassert("list::delete", li2.item(0, -1) == 5 && li2.item(1, -1) == 2 && li2.item(2, -1) == 3);
    
    return 0;
}

