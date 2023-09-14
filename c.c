#include <comelang2.h>

struct sData<T>
{
    T a;
};

int main(int argc, char** argv)
{
    sData<string>*% data = new sData<string>;
    
    data.a = string("ABC");
    
    var data2 = clone data;
    
    return 0;
}
