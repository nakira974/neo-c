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

int main(int argc, char** argv)
{
    sData<int>*% a = new sData<int>;
    a.a = 123;
    a.fun();
    
    return 0;
}

