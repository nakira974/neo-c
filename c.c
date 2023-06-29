int puts(const char* str);
int printf(const char *format, ...);

typedef unsigned long size_t;

void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);

/*
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
    
    (*ref_count)++;
    
    long* size2 = (long*)(mem + sizeof(int));
    
    *size2 = size*count + sizeof(long) + sizeof(int);
    
    return mem + sizeof(int) + sizeof(long);
}

void come_increment_ref_count(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    (*ref_count)++;
}

void come_decrement_ref_count(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    (*ref_count)--;
    
    int count = *ref_count;
    if(count == 0) {
        ncfree(ref_count);
    }
}

void come_free_object(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    ncfree(ref_count);
}

void* come_calloc(size_t nmemb, size_t size)
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

    (*ref_count) = 1;
    
    long* size_p2 = (long*)((char*)ret + sizeof(int));
    *size_p2 = size;
    
    return (char*)ret + sizeof(int) + sizeof(long);
}
*/

int main()
{
/*
    if(1) {
        char*% a = new char[128];
    }
*/
    
    printf("%ld\n", sizeof(unsigned long));
    
    char* p = "ABC";
    
    void* p2 = "ABC";
    
    printf("%s\n", (char*)p2);
    
//    printf("%c\n", *p);
    
    return 0;
}

