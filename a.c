#include <comelang.h>
#include <stdio.h>

protocol sIA
{
    void show();
};

struct sDataA
{
    sIA*% a;
    sIA*% b;
};

sDataA*% sDataA*::initialize(sDataA*% self, sIA*% a, sIA*% b)
{
    self.a = a;
    self.b = b;
    
    return self;
}

void sDataA*::show(sDataA* self)
{
    puts("sDataA::show");
}

struct sDataB
{
    string a;
    string b;
};

sDataB*% sDataB*::initialize(sDataB*% self, string a, string b)
{
    self.a = a;
    self.b = b;
    
    return self;
}

void sDataB*::show(sDataA* self)
{
    puts("sDataB::show");
}

int main(int argc, char** argv) 
{
    vector<sIA*%>*% v = new vector<sIA*%>();
    sIA*% a = new sIA(new sDataB(string("AAA"), string("BBB")));
    sIA*% b = new sIA(new sDataB(string("AAA"), string("BBB")));
    v.push_back(new sIA(new sDataA(clone a, clone b)));
    v.push_back(new sIA(new sDataA(clone a, clone b)));
    
    //delete a;
    //delete b;

    return 0;
}
