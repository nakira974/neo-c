#define NULL ((void*)0)
using comelang;

using unsafe;

char* strncpy(char* str, char* str2, int n);
int strlen(char* str);
void puts(char* str);

struct sA<T>
{
    T a;
    T b;
    char*% c;
};

impl sA<T>
{
sA<T>*% initialize(sA<T>*% self, T a, T b)
{
    self.a = a;
    self.b = b;
    self.c = new char[128];
    
    return self;
}

}

int main(int argc, char** argv)
{
    sA<int>*% a = new sA<int>.initialize(111, 222);
    sA<char>*% b = new sA<char>.initialize(111, 222);
    
    return 0;
}


