#include <comelang2.h>

int*% fun(int x, int y)
{
    int*% result = new int;
    *result = x + y;
    return result;
}

struct sData {
    int*% x;
};

int main(int argc, char** argv)
{
    int*% x = fun(1, 2);
    int*% y = x;
    
    sData data;
    data.x = y;
    
    sData*% data2 = new sData;
    data2.x = new int;
    
    sData*% data3 = new sData;
    data3.x = data2.x;
    
    int* z = x;
    
    return 0;
}

