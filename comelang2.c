#include "comelang.h"

void* gc_nccalloc(size_t nmemb, size_t size)
{
    void* result = GC_malloc(nmemb * size);
    return result;
}

void* gc_ncmemdup(void* block)
{
    using unsafe;
    
    if(!block) {
        return null;
    }
    if(!GC_is_heap_ptr(block)) {
        return block;
    }
    
    size_t size = GC_size(block);

    void* ret = GC_malloc(size);

    if (ret) {
        char* p = ret;
        char* p2 = block;
        while(p - ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }

    return ret;
}

