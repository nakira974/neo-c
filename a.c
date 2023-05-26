#include <comelang.h>

using unsafe;

int gA[] = { 1, 2, 3};
int gB[3] = { 1, 2, 3};
int gC[2][2] = { { 1,2 }, { 3,4 }};
char gD[4] = "ABC";
char gE[] = "ABC";
char gF[3] = { [0] = 0, [1] = 1, [2] = 2 };
int gG[] = { 1, 2 ,3 };

int main(int argc, char** argv)
{
    xassert("global array initializer test", gA[0] == 1 && gA[1] == 2 && gA[2] == 3);
    xassert("global array initializer test2", gB[0] == 1 && gB[1] == 2 && gB[2] == 3);
    xassert("global array initializer test3", gC[0][0] == 1 && gC[0][1] == 2 && gC[1][0] == 3 && gC[1][1] == 4);
    xassert("global array initializer test4", strcmp(gD, "ABC") == 0);
    xassert("global array initializer test5", strcmp(gE, "ABC") == 0);
    xassert("global array initializer test6", gF[0] == 0 && gF[1] == 1 && gF[2] == 2);
    xassert("global array initializer test7", gG[0] == 1 && gG[1] == 2 && gG[2] == 3);
    
    return 0;
}

