#include <comelang2.h>

struct sData<T>
{
    T a;
};

impl sData<T>
{
    void fun(sData<T>* self) {
        printf("%d\n", self.a);
    }
}

int fun(int a, int b)
{
    return a + b;
}

int main(int argc, char** argv)
{
    sData<int>*% a = new sData<int>;
/*
    a.a = 123;
    a.fun();
*/
    
    int (*block)(int a, int b) = fun;
    
    int i;
    for(i=0; i<3; i++) {
        printf("%d\n", i);
    }
    
    int n = 0;
    
    3.times() {
        puts("HO!");
        printf("%d\n", n);
        n++;
    }
    
    list<int>*% li = new list<int>.initialize();
    
    return 0;
}

