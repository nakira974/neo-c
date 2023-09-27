int puts(const char *s);
int printf(const char* __format, ...);

union {
    int a;
    double b;
} gA;

typedef int int32;

enum kEnumA { kA, kB, kC };

typedef enum { kA1, kB2, kC2 } eEnumA;

int gB = 123;

struct sData
{
    union {
        int a;
        double b;
    };
    
    struct {
        int a;
        int b;
    } data;
};

int main(int argc, char** argv)
{
    puts("HELLO WORLD");
    int a = 1 + 1;
    printf("%d\n", a);
    return 0;
}
