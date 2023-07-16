typedef unsigned long size_t;

int puts(const char* str);
int printf(const char* format, ...);
void* malloc(unsigned long size);
void free(void* ptr);
void* calloc(unsigned long nmemb, unsigned long size);
void* realloc(void* ptr, unsigned long size);
void* memset(void* s, int c, unsigned long n);
char* strncpy(char* dest, const char* src, unsigned long n);
void exit(int status);

