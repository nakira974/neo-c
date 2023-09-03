#include <comelang2.h>

exception int fun(int x, int y)
{
    return (x+y, true);
}

int main()
{
    list<string>*% li_str = new list<string>();
    
    li_str.push_back(string("AAA"));
    li_str.push_back(string("BBB"));
    li_str.push_back(string("CCC"));
    
    foreach(it, li_str) {
        puts(it);
    }
    
    int x = fun(1, 2).catch { fprintf(stderr, "exception\n"); };
    
    printf("x %d\n", x);
    
    return 0;
}

