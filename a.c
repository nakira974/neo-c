#include <comelang.h>

using unsafe;

int bbb[] = { 1, 2, 3};

char ccc[] = "ABC";

char* arrays2[] = { "AAA", "BBB", "CCC" };

int gA[] = { 1, 2, 3};
int gB[3] = { 1, 2, 3};
int gC[2][2] = { { 1,2 }, { 3,4 }};
char gD[4] = "ABC";
char gE[] = "ABC";
char gF[3] = { [0] = 0, [1] = 1, [2] = 2 };
int gG[] = { 1, 2 ,3 };

struct sData
{
    int a;
    int b;
    int c;
};

struct sData gH = { 1, 2 };
struct sData gI = { .a=3, .c=7 };

struct sData gJ[3] = { { 1,2,3}, {4,5,6}, {7,8,9}};

struct {
    char* a;
    int b;
} xyz[] = { { "AAA",2 }, { "BBB", 4 }};

struct sData2 {
    int a;
    int b;
    
    struct {
        int c;
        int d;
    } c;
    
    struct {
        int c;
        int d;
    } d;
    
    union {
        int a;
        long b;
        char c;
    } e;
};

struct sData2 gData = (struct sData2){ .a = 1, .b = 2, .c = { .c = 3, .d =4 }, .e = { .c='c' } };

struct sData2* gData2 = &(struct sData2) { .a = 3, .b = 4, .c = { .c = 4, .d = 5} };

union uNode2 {
    int a;
    long b;
    char c;
};

union uNode2 gNodeX = (uNode2) { .c = 'd' };

int main(int argc, char** argv)
{
    xassert("global array initializer test", gA[0] == 1 && gA[1] == 2 && gA[2] == 3);
    xassert("global array initializer test2", gB[0] == 1 && gB[1] == 2 && gB[2] == 3);
    xassert("global array initializer test3", gC[0][0] == 1 && gC[0][1] == 2 && gC[1][0] == 3 && gC[1][1] == 4);
    xassert("global array initializer test4", strcmp(gD, "ABC") == 0);
    xassert("global array initializer test5", strcmp(gE, "ABC") == 0);
    xassert("global array initializer test6", gF[0] == 0 && gF[1] == 1 && gF[2] == 2);
    xassert("global array initializer test7", gG[0] == 1 && gG[1] == 2 && gG[2] == 3);
    xassert("global struct initializer test", gH.a == 1 && gH.b == 2);
    xassert("global struct initializer test2", gI.a == 3 && gI.c == 7);
    xassert("global struct initializer test3", gJ[0].a == 1 && gJ[1].c == 6);

    xassert("struct initializer test4", gData.a == 1 && gData.b == 2);

    xassert("struct initializer test5", gData2->a == 3 && gData2->b == 4);

    xassert("union initializer test6",  gNodeX->c == 'd');
    
    return 0;
}

