int printf(const char *format, ...);
int puts(const char *s);
void *memset(void *s, int c, size_t n);

void times(int n, void* parent, void (*fun)(void* parent))
{
    int i;
    while(i<n) {
        fun(parent);
        i++;
    }
}

int main(int argc, char** argv)
{
    int a = 1;

    times(3) {
        puts("HELLO METHOD BLOCK");
        printf("a %d\n", a);
        a++;
    }
}

