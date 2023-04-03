#include <comelang.h>

interface IA
{
    void show();
};

struct sA
{
    int a;
    int b;
};

sA*% sA*::initialize(sA*% self)
{
    self.a = 111;
    self.b = 222;
    
    return self;
}

void sA*::show(sA* self) {
    printf("%d %d\n", self.a, self.b);
}

struct sInfo
{
    IA*% ia;
};

int main()
{
    vector<IA*%>*% v = new vector<IA*%>();
    
    v.push_back(new IA(new sA));
    
    list<IA*%>*% l = new list<IA*%>();
    
    l.push_back(new IA(new sA));
    
    puts("in main");
    
//    ia.show->();
    
    return 0;
}

