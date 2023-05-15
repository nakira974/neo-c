#define NULL ((void*)0)
using comelang;

using unsafe;

typedef long long int size_t;

char* strncpy(char* str, char* str2, int n);
int strlen(char* str);
int puts(char* str);
void* calloc(size_t count, size_t size);
int printf(const char *format, ...);

int fun(int x, int y)
{
    return x + y;
}

void funX(size_t count, size_t size)
{
    using unsafe;
}

int main(int argc, char** argv)
{
    
    return 0;
}


