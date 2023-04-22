#include <comelang.h>

interface IA
{
    void show();
};

struct sNode
{
    int a;
    int b;
};

sNode*% sNode*::initialize(sNode*% self)
{
    self.a = 111;
    self.b = 222;
    
    return self;
}

void sNode*::show(sNode* self)
{
    printf("%d %d\n", self.a, self.b);
}

int main(int argc, char** argv) 
{
    list<IA*%>*% li = new list<IA*%>();
    
    IA*% node = new IA(new sNode());
    
    li.push_back(node);
    
    node.show->();

    return 0;
}
