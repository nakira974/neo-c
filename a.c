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

int main(int argc, char** argv)
{
    sData<int>*% a = new sData<int>;
    a.a = 123;
    a.fun();
    
    void (*block)(void* parent);
    
/*
    3.times {
        puts("AAA");
    }
*/
    
    return 0;
}

