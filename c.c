using comelang;

int puts(const char* str);
int printf(const char *format, ...);

typedef unsigned long size_t;

void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);

void *memset(void *s, int c, size_t n);
char *strncpy(char *dest, const char *src, size_t n);

#define NULL ((void*)0)

void ncfree(void* mem)
{
    if(mem) {
        free(mem);
    }
}


void* come_calloc(size_t count, size_t size)
{
    char* mem = calloc(1, sizeof(int)+sizeof(long)+count*size);
    
    int* ref_count = (int*)mem;
    
//    (*ref_count)++;
    
    long* size2 = (long*)(mem + sizeof(int));
    
    *size2 = size*count + sizeof(long) + sizeof(int);
    
    return mem + sizeof(int) + sizeof(long);
}

void* come_increment_ref_count(void* mem)
{
    if(mem == NULL) {
        return mem;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    (*ref_count)++;
    
    return mem;
}

void* come_decrement_ref_count(void* mem)
{
    if(mem == NULL) {
        return NULL;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    (*ref_count)--;
    
    int count = *ref_count;
    if(count <= 0) {
        ncfree(ref_count);
        return NULL;
    }
    
    return mem;
}

void come_decrement_ref_count2(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    (*ref_count)--;
}

void come_free_object(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    ncfree(ref_count);
}

void* nccalloc(size_t nmemb, size_t size)
{
    void* result = calloc(nmemb, size);
    return result;
}

void* come_memdup(void* block)
{
    if(!block) {
        return null;
    }
    char* mem = (char*)block - sizeof(int) - sizeof(long);
    
    long* size_p = (long*)(mem + sizeof(int));

    size_t size = *size_p;

    void* ret = calloc(1, size);

    int* ref_count = ret;
    
    if (ret) {
        char* p = ret;
        char* p2 = mem;
        while(p - (char*)ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }

//    (*ref_count) = 1;
    
    long* size_p2 = (long*)((char*)ret + sizeof(int));
    *size_p2 = size;
    
    return (char*)ret + sizeof(int) + sizeof(long);
}

struct sData
{
    char*% a;
};

int*% funHeap(int x, int y)
{
    int*% result = new int;
    
    *result = x + y;
    
    return result;
}

int funHeap2(int* x, int* y)
{
    return *x + *y;
}

int main()
{
/*
    if(1) {
        char*% a = new char[128];
    }
    
    printf("%ld\n", sizeof(unsigned long));
    
    char* p = "ABC";
    
    void* p2 = "ABC";
    
    printf("%s\n", (char*)p2);
    
    printf("%c\n", *p);
    
    int count = 0;
    int size2 = 1;
    
    char* mem2 = calloc(1, sizeof(int)+sizeof(long)+count*size2);
    
    int b;
    int *a = &b;
    
    (*a) = 123;
    int size = 123;
    int ret = 1;
    char* mem = "ABC";
    if (ret) {
        char* p = ret;
        char* p2 = mem;
        while(p - (char*)ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }
    
    int a2 = 123;
    
    if(true) {
        int b = 234;
        while(true) {
            printf("a %d\n", a2);
            printf("b %d\n", b);
        }
    }
*/
/*
    char*% a = new char[128];
    
    if(1) {
        char*% a = new char[128];
        char*% b = a;
        
        sData data;
        data.a = a;
    }
*/
    
    char*% str = new char[128];
    
    strncpy(str, "ABC", 128);
    
    sData*% data = new sData;
    data.a = str;
    
    puts(data.a);
    
    return 0;
}

