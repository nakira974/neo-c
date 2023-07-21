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
static void xassert(char* msg, _Bool test);
static void ncfree(void* mem);
static void* come_calloc(unsigned long count, unsigned long size);
static void* come_increment_ref_count(void* mem);
static void* come_decrement_ref_count(void* mem);
static void come_decrement_ref_count2(void* mem);
static void come_free_object(void* mem);
static void* nccalloc(unsigned long nmemb, unsigned long size);
static void* come_memdup(void* block);
void int_times(int self, void* parent, void (*block)(void*));

static void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

static void ncfree(void* mem){
    if(mem) {
        free(mem);
    }
}

static void* come_calloc(unsigned long count, unsigned long size){
char* mem_0;
int* ref_count_1;
long* size2_2;
    mem_0=calloc(1,sizeof(int)+sizeof(long)+count*size);
    ref_count_1=(int*)mem_0;
    size2_2=(long*)(mem_0+sizeof(int));
    *size2_2=size*count+sizeof(long)+sizeof(int);
    return mem_0+sizeof(int)+sizeof(long);
}

static void* come_increment_ref_count(void* mem){
int* ref_count_3;
    if(mem==((void*)0)) {
        return mem;
    }
    ref_count_3=(int*)((char*)mem-sizeof(int)-sizeof(long));
    (*ref_count_3)++;
    return mem;
}

static void* come_decrement_ref_count(void* mem){
int* ref_count_4;
int count_5;
    if(mem==((void*)0)) {
        return ((void*)0);
    }
    ref_count_4=(int*)((char*)mem-sizeof(int)-sizeof(long));
    (*ref_count_4)--;
    count_5=*ref_count_4;
    if(count_5<=0) {
        ncfree(ref_count_4);
        return ((void*)0);
    }
    return mem;
}

static void come_decrement_ref_count2(void* mem){
int* ref_count_6;
    if(mem==((void*)0)) {
        return;
    }
    ref_count_6=(int*)((char*)mem-sizeof(int)-sizeof(long));
    (*ref_count_6)--;
}

static void come_free_object(void* mem){
int* ref_count_7;
    if(mem==((void*)0)) {
        return;
    }
    ref_count_7=(int*)((char*)mem-sizeof(int)-sizeof(long));
    ncfree(ref_count_7);
}

static void* nccalloc(unsigned long nmemb, unsigned long size){
void* result_8;
    result_8=calloc(nmemb,size);
    return result_8;
}

static void* come_memdup(void* block){
char* mem_9;
long* size_p_10;
unsigned long size_11;
void* ret_12;
int* ref_count_13;
char* p_14;
char* p2_15;
long* size_p2_16;
    if(!block) {
        return ((void*)0);
    }
    mem_9=(char*)block-sizeof(int)-sizeof(long);
    size_p_10=(long*)(mem_9+sizeof(int));
    size_11=*size_p_10;
    ret_12=calloc(1,size_11);
    ref_count_13=ret_12;
    if(ret_12) {
        p_14=ret_12;
        p2_15=mem_9;
        while(p_14-(char*)ret_12<size_11) {
            *p_14=*p2_15;
            p_14++;
            p2_15++;
        }
    }
    size_p2_16=(long*)((char*)ret_12+sizeof(int));
    *size_p2_16=size_11;
    return (char*)ret_12+sizeof(int)+sizeof(long);
}

void int_times(int self, void* parent, void (*block)(void*)){
int i_17;
    for(
    i_17=0;
    i_17<self;
    i_17++
    ){
        block(parent);
    }
}

