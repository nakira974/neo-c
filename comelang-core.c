using comelang;
using unsafe;

#include <stdlib.h>
#include <stdio.h>

#define NULL ((void*)0)

typedef long long size_t;

void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);

void exit(int status);

int fprintf(FILE * restrict stream, const char * restrict format, ...);

#ifdef __DARWIN_ARM__
size_t malloc_size(const void *ptr);
#else
size_t malloc_usable_size (void *ptr);
#endif

void come_gc_init()
{
}

void come_gc_final()
{
}

void ncfree(void* mem)
{
    if(mem) {
        free(mem);
    }
}


void* igc_calloc(size_t count, size_t size)
{
    char* mem = calloc(1, sizeof(int)+count*size);
    
    int* ref_count = (int*)mem;
    
    (*ref_count)++;
    
    return mem + sizeof(int);
}

void igc_increment_ref_count(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int));
    
    (*ref_count)++;
}

void igc_decrement_ref_count(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int));
    
    (*ref_count)--;
    
    int count = *ref_count;
    if(count == 0) {
        ncfree(ref_count);
    }
}

void free_object(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int));
    
    ncfree(ref_count);
}

void call_finalizer(void* fun, void* mem, int call_finalizer_only)
{
    if(mem == NULL) {
        return;
    }
    
    if(call_finalizer_only) {
        if(fun) {
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        int* ref_count = (int*)((char*)mem - sizeof(int));
        
        (*ref_count)--;
        
        int count = *ref_count;
        if(count == 0) {
            if(mem) {
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                free_object(mem);
            }
        }
    }
}
void* nccalloc(size_t nmemb, size_t size)
{
    void* result = calloc(nmemb, size);
    return result;
}

void*%? ncmemdup(void*% block)
{
    managed block;

    if(!block) {
        return dummy_heap null;
    }
    char* mem = (char*)block - sizeof(int);

#ifdef __DARWIN_ARM__
    size_t size = malloc_size(mem);
#else
    size_t size = malloc_usable_size(mem);
#endif

    void* ret = calloc(1, size);

    int* ref_count = ret;
    
    if (ret) {
        char* p = ret;
        char* p2 = mem;
        while(p - ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }

    (*ref_count) = 1;
    
    return dummy_heap (char*)ret + sizeof(int);
}

void* call_cloner(void* fun, void* mem)
{
    if(fun && mem) {
        void* (*cloner)(void*) = fun;
        return cloner(mem);
    }
    
    return null;
}

void unwrap_exception(char* sname, int sline, char* mem)
{
    if(mem == null) {
        fprintf(stderr, "%s %d: unwrap exception. The value is null\n", sname, sline);
        exit(2);
    }
}

