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
    
    var li3 = new list<string>.initialize();
    
    li3.push_back(string("AAA"));
    li3.push_back(string("BBB"));
    li3.push_back(string("CCC"));
    
    li3.replace(0, string("ABC"));
    
    xassert("list::replace", strcmp(li3.item(0, null), "ABC") == 0 && strcmp(li3.item(1, null), "BBB") == 0 && strcmp(li3.item(2, null), "CCC") == 0);
    
    var li4 = new list<int>.initialize();
    
    li4.push_back(1);
    li4.push_back(3);
    li4.push_back(5);
    
    var li5 = new list<int>.initialize();
    
    li5.push_back(1);
    li5.push_back(3);
    li5.push_back(5);
    
    xassert("list::equals", li4.equals(li5));
    xassert("list::find", li4.find(5,-1) == 2);
    
    var li6 = new list<int>.initialize();
    
    li6.push_back(3);
    li6.push_back(5);
    
    xassert("list::sublist", li5.sublist(1, -1).equals(li6));
    
    return 0;
}

