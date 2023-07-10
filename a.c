#include <comelang2.h>

/*
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
*/

impl int*
{
    void printf(int* self) {
        printf("%d\n", *self);
    }
}

int main(int argc, char** argv)
{
//   sData<int>*% a = new sData<int>;
    
    int b = 1;
    int *a = &b;
    a.printf();
    
    return 0;
}

