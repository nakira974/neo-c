#include <comelang2.h>

interface IA
{
    int fun(int a, int b);
};

struct sData
{
    int a;
    int b;
};

sData*% sData*::initialize(sData*% self, int a, int b)
{
    self.a = a;
    self.b = b;
    
    return self;
}

int sData*::fun(sData* self, int a, int b)
{
    return self.a + self.b + a + b;
}

int main()
{
/*
    IA*% ia = new sData.initialize(111,222) implements IA;
    
    printf("%d\n", ia.fun(0, 0));
*/
    
    list<IA*%>*% li = new list<IA*%>.initialize();
    
    li.push_back(new sData.initialize(1, 1) implements IA);
    li.push_back(new sData.initialize(2, 2) implements IA);
    li.push_back(new sData.initialize(3, 3) implements IA);
    
/*
    foreach(it, li) {
        printf("%d\n", it.fun(0, 0));
    }
*/
    
    return 0;
}

