#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sData<T>
{
    T a;
    T b;
};

impl sData<T>
{
    void fun(sData<T>* self)
    {
        printf("%d %d\n", self.a, self.b);
    }
}



int main(int argc, char** argv)
{
    char*% str = new char[128];
    
    strncpy(str, "ABC", 128);
    puts(str);
    
    sData<int>*% data = new sData<int>;
    
    data.a = 123;
    data.b = 234;
    
    data.fun();
    
    return 0;
}
