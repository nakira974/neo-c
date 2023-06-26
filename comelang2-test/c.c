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
};

typedef struct sDataX DataY;

typedef DataY DataX;

void int::fun(int self)
{
    printf("%d\n", self);
}

int main()
{
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
    for(int i=0; i<3; i=i+1) {
        printf("%d\n", i);
    }

    int aa = 2;
    for(int i=0; i<3; i=i+1) {
        printf("%d %d\n", i, aa);
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
    
    printf("%d\n", x);
    
    enum eEnumA enum_data;
    
    DataX data;
    
    data.a = 123;
    data.b = 234;
    
    printf("%d %d\n", data.a, data.b);
    
    data.a++;
    
    printf("data.a %d\n", data.a);
    
    data.a--;
    
    printf("data.a %d\n", data.a);
    
    data.a+=2;
    
    printf("data.a %d\n", data.a);
    
    data.a*=2;
    
    printf("data.a %d\n", data.a);
    
    data.a/=2;
    
    printf("data.a %d\n", data.a);
    
    data.a%=2;
    
    printf("data.a %d\n", data.a);
    
    data.a<<=2;
    
    printf("data.a %d\n", data.a);
    
    data.a>>=2;
    
    printf("data.a %d\n", data.a);
    
    data.a&=2;
    
    printf("data.a %d\n", data.a);
    
    data.a|=2;
    
    printf("data.a %d\n", data.a);
    
    data.a^=2;
    
    printf("data.a %d\n", data.a);
    
    1.fun();
    
    return 0;
}

