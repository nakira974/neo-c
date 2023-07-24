typedef unsigned long size_t;

int puts(const char* str);
int printf(const char* format, ...);
void* malloc(unsigned long size);
void free(void* ptr);
void* calloc(unsigned long nmemb, unsigned long size);
void* realloc(void* ptr, unsigned long size);
unsigned long strlen(const char* s);
void* memset(void* s, int c, unsigned long n);
char* strncpy(char* dest, const char* src, unsigned long n);
void exit(int status);
static void xassert(char* msg, _Bool test);
static void ncfree(void* mem);
static void* come_calloc(unsigned long count, unsigned long size);
static void* come_increment_ref_count(void* mem);
static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_Free);

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

static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_Free){
int* ref_count_4;
int count_5;
    if(mem==((void*)0)) {
        return ((void*)0);
    }
    ref_count_4=(int*)((char*)mem-sizeof(int)-sizeof(long));
    if(no_decrement) {
        (*ref_count_4)--;
    }
    count_5=*ref_count_4;
}

