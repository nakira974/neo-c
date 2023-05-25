#include <comelang.h>

interface IA
{
    void show();
};

struct sChildA
{
    int x;
    int y;
    int z;
    string str;
};

sChildA*% sChildA*::initialize(sChildA*% self)
{
    self.x = 1;
    self.y = 2;
    self.z = 3;
    self.str = string("ABC");

    return self;
}

void sChildA*::show(sChildA* self)
{
    printf("x %d y %d z %d str %s\n", self.x, self.y, self.z, self.str);
}

struct sChildB
{
    string hello;
};

sChildB*% sChildB*::initialize(sChildB*% self)
{
    self.hello = string("HELLO");

    return self;
}

void sChildB*::show(sChildB* self)
{
    puts(self.hello);
}

int main(int argc, char** argv)
{
    list<IA*%>*% li = new list<IA*%>();
    
    IA*% ia = new IA(new sChildA());
    
    li.push_back(ia);
    li.push_back(new IA(new sChildB()));

    foreach(it, li) {
        it.show->();
    }
    
    return 0;
}

