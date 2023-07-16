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

/*
void int::times(int self, void* parent, void (*block)(void* parent))
{
    for(int i = 0; i < self; i++) {
        block(parent);
    }
}
*/

int fun(int a, int b)
{
    return a + b;
}

int main(int argc, char** argv)
{
/*
    sData<int>*% a = new sData<int>;
    a.a = 123;
    a.fun();
*/
    
    int (*block)(int a, int b) = fun;
    
/*
    3.times {
        puts("AAA");
    }
*/
    int i;
    for(i=0; i<3; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}

