typedef unsigned long size_t;
struct sData
{
    char* a;
};
struct __current_stack1__
{
    char** p_20;
    void** p2_21;
    int* count_22;
    int* size2_23;
    char** mem2_24;
    int* b_25;
    int** a_26;
    int* a2_27;
    char** ax_30;
    char** str_34;
    struct sData** data_35;
    int** axyz_36;
    int** xxx_37;
    int** yyy_38;
    int** zzz_39;
    int* bzyz_40;
    int** azyz_41;
    int* n_42;
};

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
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int intp_fun(int* self);
int main();
void method_block1(struct __current_stack1__* parent);

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

int* funHeap(int x, int y){
void* right_value0;
int* result_18;
    result_18=come_increment_ref_count((int*)(right_value0=(int*)come_calloc(1, sizeof(int)*1)));
    *result_18=x+y;
    come_decrement_ref_count2(result_18);
    return result_18;
}

int funHeap2(int* x, int* y){
    x = come_decrement_ref_count(x);
    y = come_decrement_ref_count(y);
    return *x+*y;
}

int intp_fun(int* self){
    return *self;
}

int main(){
void* right_value1;
char* a_19;
char* p_20;
void* p2_21;
int count_22;
int size2_23;
char* mem2_24;
int b_25;
int* a_26;
int a2_27;
int b_28;
int n_29;
void* right_value2;
char* ax_30;
void* right_value3;
char* a_31;
char* b_32;
struct sData data_33;
void* right_value4;
char* str_34;
void* right_value5;
struct sData* data_35;
void* right_value6;
void* right_value7;
void* right_value8;
int* axyz_36;
void* right_value9;
int* xxx_37;
void* right_value10;
int* yyy_38;
void* right_value11;
int* zzz_39;
void* right_value12;
int bzyz_40;
int* azyz_41;
int n_42;
struct __current_stack1__ __current_stack1__;
    if(1) {
        a_19=come_increment_ref_count((char**)(right_value1=(char**)come_calloc(1, sizeof(char*)*1*128)));
        a_19 = come_decrement_ref_count(a_19);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_20="ABC";
    p2_21="ABC";
    printf("%s\n",(char*)p2_21);
    printf("%c\n",*p_20);
    count_22=0;
    size2_23=1;
    mem2_24=calloc(1,sizeof(int)+sizeof(long)+count_22*size2_23);
    free(mem2_24);
    a_26=&b_25;
    (*a_26)=123;
    a2_27=123;
    if((_Bool)1) {
        b_28=234;
        n_29=0;
        while(n_29<3) {
            printf("a %d\n",a2_27);
            printf("b %d\n",b_28);
            n_29++;
        }
    }
    ax_30=come_increment_ref_count((char**)(right_value2=(char**)come_calloc(1, sizeof(char*)*1*128)));
    if(1) {
        a_31=come_increment_ref_count((char**)(right_value3=(char**)come_calloc(1, sizeof(char*)*1*128)));
        b_32=come_increment_ref_count(a_31);
        memset(&data_33, 0, sizeof(struct sData));
        data_33.a=come_increment_ref_count(a_31);
        a_31 = come_decrement_ref_count(a_31);
        b_32 = come_decrement_ref_count(b_32);
    }
    str_34=come_increment_ref_count((char**)(right_value4=(char**)come_calloc(1, sizeof(char*)*1*128)));
    strncpy(str_34,"ABC",128);
    data_35=come_increment_ref_count((struct sData*)(right_value5=(struct sData*)come_calloc(1, sizeof(struct sData)*1)));
    data_35->a=come_increment_ref_count(str_34);
    puts(data_35->a);
    (int*)(right_value6=funHeap(7,7));
    right_value6 = come_decrement_ref_count(right_value6);
    xassert("right value test",*(int*)(right_value7=funHeap(3,4))==7);
    right_value7 = come_decrement_ref_count(right_value7);
    axyz_36=come_increment_ref_count((int*)(right_value8=funHeap(1,2)));
    xassert("variable test",*axyz_36==3);
    xxx_37=come_increment_ref_count((int*)(right_value9=(int*)come_calloc(1, sizeof(int)*1)));
    *xxx_37=1;
    yyy_38=come_increment_ref_count((int*)(right_value10=(int*)come_calloc(1, sizeof(int)*1)));
    *yyy_38=2;
    xassert("heap",funHeap2(come_increment_ref_count(xxx_37),come_increment_ref_count(yyy_38))==3);
    zzz_39=(int*)(right_value11=(int*)come_calloc(1, sizeof(int)*1));
    right_value11 = come_decrement_ref_count(right_value11);
    (int*)(right_value12=(int*)come_calloc(1, sizeof(int)*1));
    right_value12 = come_decrement_ref_count(right_value12);
    bzyz_40=123;
    azyz_41=&bzyz_40;
    xassert("impl",intp_fun(azyz_41)==123);
    n_42=0;
    __current_stack1__.p_20 = &p_20;
    __current_stack1__.p2_21 = &p2_21;
    __current_stack1__.count_22 = &count_22;
    __current_stack1__.size2_23 = &size2_23;
    __current_stack1__.mem2_24 = &mem2_24;
    __current_stack1__.b_25 = &b_25;
    __current_stack1__.a_26 = &a_26;
    __current_stack1__.a2_27 = &a2_27;
    __current_stack1__.ax_30 = &ax_30;
    __current_stack1__.str_34 = &str_34;
    __current_stack1__.data_35 = &data_35;
    __current_stack1__.axyz_36 = &axyz_36;
    __current_stack1__.xxx_37 = &xxx_37;
    __current_stack1__.yyy_38 = &yyy_38;
    __current_stack1__.zzz_39 = &zzz_39;
    __current_stack1__.bzyz_40 = &bzyz_40;
    __current_stack1__.azyz_41 = &azyz_41;
    __current_stack1__.n_42 = &n_42;
    int_times(3,&__current_stack1__,method_block1);
    ax_30 = come_decrement_ref_count(ax_30);
    str_34 = come_decrement_ref_count(str_34);
    data_35->a = come_decrement_ref_count(data_35->a);
    data_35 = come_decrement_ref_count(data_35);
    axyz_36 = come_decrement_ref_count(axyz_36);
    xxx_37 = come_decrement_ref_count(xxx_37);
    yyy_38 = come_decrement_ref_count(yyy_38);
    return 0;
}

void method_block1(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*((*parent).n_42)));
        (*((*parent).n_42))++;
}

