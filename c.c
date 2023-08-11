#include <comelang2.h>

int gA;
list<int>*% gList = new list<int>.initialize();

int gB[3] = { 1,2,3 };

int main()
{
    printf("%d %d %d\n", gB[0], gB[1], gB[2]);
    
    gB[1] = 777;
    
    printf("%d\n", gB[1]);
    
    printf("%d\n" gB[1] == 777);
    
    return 0;
}

