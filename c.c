int puts(const char* str);
int printf(const char *format, ...);

#define TEST 1

int main()
{
    int a = TEST;
    const char* str = "HELLO WORLD";
    puts(str);
    printf("%d\n", a);
    
    if(1) {
        puts("IF OK");
    }
    
    return 0;
}
