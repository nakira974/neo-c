
int gB = 1;
int gA = 0;
int printf(const char *format, ...);
int puts(const char *s);
extern int gC;

int fun(int x, int y)
{
    return x + y;
}

int main(int argc, char** argv)
{
    gA = gB + gC + 1;
    printf("gA %d gC %d\n", gA, gC);
    
    int x = 1;
    int y = 2 + x;
    x +=2;
    y++;
    
    if(x==3) {
        puts("OK");
    }
    
    printf("x %d y %d\n", x, y);
    printf("x + y %d\n", fun(x, y));
    
    return 0;
}


