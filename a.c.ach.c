/* source head */
typedef unsigned long size_t;
typedef char* string;
struct sDataXYZ
{
    char* a;
    int b;
};
typedef unsigned long long anonymous_var_name1;
typedef unsigned long long anonymous_var_name2;

/* header function */
int puts(const char* str);
int printf(const char* format, ...);
void* malloc(unsigned long size);
void free(void* ptr);
void* calloc(unsigned long nmemb, unsigned long size);
void* realloc(void* ptr, unsigned long size);
unsigned long strlen(const char* s);
void* memset(void* s, int c, unsigned long n);
char* strncpy(char* dest, const char* src, unsigned long n);
char* strncat(char* dst, char* src, unsigned long sz);
int strcmp(const char* s1, const char* s2);
int strncmp(const char s1, const char s2, unsigned long n);
void exit(int status);
int funX(int a, int b);
char* funX2(char* a, char* b);
int main(int argc, char** argv);

/* body function */
