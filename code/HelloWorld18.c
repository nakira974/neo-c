#include <comelang.h>

tuple2<int, char*>*% fun(int n, char* m) 
{
    return ((n, m));
}

exception int fun2()
{
    return 1;
}

extern map<string, int>* gID;

void funX()
{
    gID = borrow new map<string, int>();
    gID.insert(string("GGG"), 0);
}

map<string, int>* gID;

void funX2()
{
    gID.insert(string("FFF"), 0);
}

int main(int argc, char** argv)
{
    int a = 2 + fun2().catch {};
    
    xassert("exception test", a == 3);
    
    xassert("list sort test", ['b', 'a', 'c'].sort() === ['a', 'b', 'c']);
    
    auto n, m = fun(1, "AAA");
    
    xassert("multiple assigned", n == 1 && m === "AAA");
    
    funX();
    funX2();
    
    gID.insert(string("ABC"), 1);
    gID.insert(string("DEF"), 2);
    
    foreach(it, gID) {
        int n = gID[it];
        
        printf("%s %d\n", it, n);
    }
    
    delete gID;
    
    var xxxxxxxxxx = "ABCFGDEFFEFE".to_buffer().to_pointer();
    
    xxxxxxxxxx += strlen("ABC");
    
    xassert("smart pointer test", *xxxxxxxxxx == 'F');
    
    return 0;
}
