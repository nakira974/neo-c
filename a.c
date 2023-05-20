
using comelang;

int printf(const char *format, ...);
int puts(const char *s);
void *memset(void *s, int c, size_t n);

static int gA;

int main(int argc, char** argv)
{
    static int a = 0;
    printf("%d\n", ++a);
    
    return 0;
}

