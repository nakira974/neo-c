#define NULL ((void*)0)
using comelang;

using unsafe;

char* strncpy(char* str, char* str2, int n);
int strlen(char* str);
void puts(char* str);

protocol IA
{
    void show();
};

struct sA
{
    char* a;
    char*% b;
};

struct sA*% sA*::initialize(struct sA*% self, char* a, char* b)
{
    self.a = a;
    self.b = clone b;
    
    return self;
}

void sA*::show(sA* self)
{
    puts(self.a);
    puts(self.b);
}

int main(int argc, char** argv)
{
    char* a = "ABC";
    char*% b = new char[128];
    strncpy(b, "DFE", 128);
    
    IA*% ia = new IA(new sA(a, b));
    
    ia->show->();
    
    IA*% ib = clone ia;
    
    ib->show->();
    
    return 0;
}

