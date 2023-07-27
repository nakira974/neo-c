typedef unsigned long size_t;
typedef char* string;
struct list_item_int
{
    int item;
    struct list_item_int* prev;
    struct list_item_int* next;
};
struct list_int
{
    struct list_item_int* head;
    struct list_item_int* tail;
    int len;
    struct list_item_int* it;
};

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
static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free);
static void come_free_object(void* mem);
static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free);
static void* nccalloc(unsigned long nmemb, unsigned long size);
static void* come_memdup(void* block);
void int_times(int self, void* parent, void (*block)(void*));
char* __builtin_string(char* str);
int main(int argc, char** argv);
struct list_int* list_int_initialize(struct list_int* self);
void list_int_finalize(struct list_int* self);

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

static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free){
int* ref_count_4;
int count_5;
    if(mem==((void*)0)) {
        return ((void*)0);
    }
    ref_count_4=(int*)((char*)mem-sizeof(int)-sizeof(long));
    if(!no_decrement) {
        (*ref_count_4)--;
    }
    count_5=*ref_count_4;
    if(!no_free&&count_5<=0) {
        ncfree(ref_count_4);
        return ((void*)0);
    }
    return mem;
}

static void come_free_object(void* mem){
int* ref_count_6;
    if(mem==((void*)0)) {
        return;
    }
    ref_count_6=(int*)((char*)mem-sizeof(int)-sizeof(long));
    ncfree(ref_count_6);
}

static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free){
void (*finalizer_7)(void*);
int* ref_count_8;
int count_9;
void (*finalizer_10)(void*);
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            finalizer_7=fun;
            finalizer_7(mem);
        }
    }
    else {
        ref_count_8=(int*)((char*)mem-sizeof(int)-sizeof(long));
        if(!no_decrement) {
            (*ref_count_8)--;
        }
        count_9=*ref_count_8;
        if(!no_free&&count_9<=0) {
            if(mem) {
                if(fun) {
                    finalizer_10=fun;
                    finalizer_10(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

static void* nccalloc(unsigned long nmemb, unsigned long size){
void* result_11;
    result_11=calloc(nmemb,size);
    return result_11;
}

static void* come_memdup(void* block){
char* mem_12;
long* size_p_13;
unsigned long size_14;
void* ret_15;
int* ref_count_16;
char* p_17;
char* p2_18;
long* size_p2_19;
    if(!block) {
        return ((void*)0);
    }
    mem_12=(char*)block-sizeof(int)-sizeof(long);
    size_p_13=(long*)(mem_12+sizeof(int));
    size_14=*size_p_13;
    ret_15=calloc(1,size_14);
    ref_count_16=ret_15;
    if(ret_15) {
        p_17=ret_15;
        p2_18=mem_12;
        while(p_17-(char*)ret_15<size_14) {
            *p_17=*p2_18;
            p_17++;
            p2_18++;
        }
    }
    size_p2_19=(long*)((char*)ret_15+sizeof(int));
    *size_p2_19=size_14;
    return (char*)ret_15+sizeof(int)+sizeof(long);
}

void int_times(int self, void* parent, void (*block)(void*)){
int i_20;
    for(
    i_20=0;
    i_20<self;
    i_20++
    ){
        block(parent);
    }
}

char* __builtin_string(char* str){
int len_21;
void* right_value0;
char* result_22;
    len_21=strlen(str)+1;
    result_22=come_increment_ref_count((char**)(right_value0=(char**)come_calloc(1, sizeof(char*)*1*len_21)));
    strncpy(result_22,str,len_21);
    result_22 = come_decrement_ref_count(result_22, 0, 1);
    return result_22;
}

int main(int argc, char** argv){
void* right_value1;
void* right_value2;
struct list_int* li_23;
    li_23=come_increment_ref_count(list_int_initialize((struct list_int*)(right_value2=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))));
}

struct list_int* list_int_initialize(struct list_int* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        call_finalizer(list_int_finalize,self,0, 0, 1);
        return self;
        call_finalizer(list_int_finalize,self,0, 0, 0);
}

void list_int_finalize(struct list_int* self){
}

