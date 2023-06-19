int puts(const char* str);
int printf(const char *format, ...);

#define TEST 1

int fun(int x, int y)
{
    return x + y;
}

struct Data
{
    int a;
    int b;
};

union Data2
{
    float a;
    double b;
};

enum eEnumA { kA, kB };

typedef int int32;

struct sDataX
{
    int a;
    int b;
}

typedef struct sDataX DataX;

int main()
{
/*
    int a = TEST;
    const char* str = "HELLO WORLD";
    puts(str);
    printf("%d\n", a);
    
    if(1) {
        puts("IF OK");
    }
    else if(2) {
        puts("ELSE IF OK");
    }
    else {
        puts("ELSE OK");
    }
    
    do {
        puts("GUOOOOO");
    } while(0);
    
    for(int i=0; 3; 2) {
        printf("%d\n", a);
        printf("%d\n", i);
    }
    
    switch (1) {
    case 1:
        break;
    case 2:
        break;
    }
    
    int c = 1+3*4;
    printf("%d\n", c);
    printf("%d\n", c<<1);
    
    for(int i=0; i<3;i=i+1) {
        printf("%d\n", i);
    }
*/
    for(int i=0; i<3; i=i+1) {
        printf("%d\n", i);
    }
    int a = 2;
    for(int i=0; i<3; i=i+1) {
        printf("%d %d\n", i, a);
    }
    if(1) {
        puts("IF OK");
    }
    else if(2) {
        puts("ELSE IF OK");
    }
    else {
        puts("ELSE OK");
    }
    
    printf("%d\n", fun(1,2));
    
    int32 x = 123;
    
    printf("%d\n" x);
    
    DataX data;
    
    eEnumA enum_data;
    
    return 0;
}

