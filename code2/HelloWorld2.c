
#include <comelang2.h>

struct sData
{
    char*% a;
};

int*% funHeap(int x, int y)
{
    int*% result = new int;
    
    *result = x + y;
    
    return result;
}

int funHeap2(int*% x, int*% y)
{
    return *x + *y;
}

impl int*
{
    int fun(int* self) {
        return *self;
    }
}

int main()
{
    if(1) {
        char*% a = new char[128];
    }
    
    printf("%ld\n", sizeof(unsigned long));
    
    char* p = "ABC";
    
    void* p2 = "ABC";
    
    printf("%s\n", (char*)p2);
    
    printf("%c\n", *p);
    
    int count = 0;
    int size2 = 1;
    
    char* mem2 = calloc(1, sizeof(int)+sizeof(long)+count*size2);
    
    free(mem2);
    
    int b;
    int *a = &b;
    
    (*a) = 123;
    
    int a2 = 123;
    
    if(true) {
        int b = 234;
        int n = 0;
        while(n < 3) {
            printf("a %d\n", a2);
            printf("b %d\n", b);
            n++;
        }
    }
    char*% ax = new char[128];
    
    if(1) {
        char*% a = new char[128];
        char*% b = a;
        
        sData data;
        data.a = a;
    }
    
    char*% str = new char[128];
    
    strncpy(str, "ABC", 128);
    
    sData*% data = new sData;
    data.a = str;
    
    puts(data.a);
    
    funHeap(7,7);
    
    xassert("right value test", *funHeap(3,4) == 7);
    
    int*% axyz = funHeap(1,2);
    
    xassert("variable test", *axyz == 3);
    
    int*% xxx = new int;
    *xxx = 1;
    int*% yyy = new int;
    *yyy = 2;
    
    xassert("heap", funHeap2(xxx, yyy) == 3);
    
    int* zzz = new int;
    new int;
    
    int bzyz = 123;
    
    int* azyz = &bzyz;
    
    xassert("impl", azyz.fun() == 123);
    
    return 0;
}

