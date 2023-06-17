int puts(const char* str);
int printf(const char *format, ...);

int main(int argc, char** argv)
{
    for(int i=0; i<3; i=i+1) {
        printf("%d\n", i);
    }
    for(int i=0; i<3; i=i+1) {
        printf("%d\n", i);
    }
    
    return 0;
}

