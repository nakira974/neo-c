#include <comelang2.h>
int fun(int a, int b)
{
    return a + b;
}

struct sData
{
    int a;
    int b;
};

struct sData2<T>
{
    T a;
    T b;
};

impl sData2<T>
{
    void fun(sData2<T>* self, T a, T b)
    {
        self.a = a;
        self.b = b;
    }
}

int main(int argc, char** argv)
{
    sData2<int> data2;
    
    (&data2).fun(1,2);
    
    list<int>*% li = new list<int>.initialize();
    
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    
    li.each {
        printf("%d\n", it);
    }
    
    return 0;
}
