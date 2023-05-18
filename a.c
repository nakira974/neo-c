extern int *stdin;
extern int *stdout;
extern int *stderr;
int printf(const char *format, ...);
int puts(const char *s);

int main(int argc, char** argv)
{
    int n = *stdin;
    
    int x = 1;
    int y = 2 + x;
    
    printf("%d\n", y);
    
    return 0;
}


