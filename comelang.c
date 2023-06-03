#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using comelang;
using unsafe;

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
    char* mem = calloc(1, sizeof(int)+sizeof(long)+count*size);
    
    int* ref_count = (int*)mem;
    
    (*ref_count)++;
    
    long* size2 = (long*)(mem + sizeof(int));
    
    *size2 = size*count + sizeof(long) + sizeof(int);
    
    return mem + sizeof(int) + sizeof(long);
}

void igc_increment_ref_count(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    (*ref_count)++;
}

void igc_decrement_ref_count(void* mem)
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

void ncfree_object(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
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
        int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
        
        (*ref_count)--;
        
        int count = *ref_count;
        if(count == 0) {
            if(mem) {
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                ncfree_object(mem);
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
    
    return dummy_heap (char*)ret + sizeof(int) + sizeof(long);
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
