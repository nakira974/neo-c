#define NULL ((void*)0)
using comelang;

void call_finalizer(void* fun, void* mem, int call_finalizer_only);

using unsafe;

struct sA
{
    int*% a;
};

struct sB
{
    int a;
    int b;
    int c;
};

int fun(int a, int b)
{
    return a + b;
}

int strlen(char* str);
void strncpy(char*, char*, int);
void puts(char* str);

char*% string2(char* str)
{
    int len = strlen(str) + 1;
    
    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

int main(int argc, char** argv)
{
    sA*% obj = new sA;
    new sA;
    
    obj.a = new int;
    
    *obj.a = 123;
    
    fun(*obj.a, *obj.a);
    
    string2("ABC");
    
    return 0;
}

