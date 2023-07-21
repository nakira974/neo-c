typedef unsigned long size_t;
struct sData
{
    char* a;
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
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int intp_fun(int* self);
int main();

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

int* funHeap(int x, int y){
void* right_value0;
int* result_17;
    result_17=come_increment_ref_count((int*)(right_value0=(int*)come_calloc(1, sizeof(int)*1)));
    *result_17=x+y;
    come_decrement_ref_count2(result_17);
    return result_17;
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
char* a_18;
char* p_19;
void* p2_20;
int count_21;
int size2_22;
char* mem2_23;
int b_24;
int* a_25;
int a2_26;
int b_27;
int n_28;
void* right_value2;
char* ax_29;
void* right_value3;
char* a_30;
char* b_31;
struct sData data_32;
void* right_value4;
char* str_33;
void* right_value5;
struct sData* data_34;
void* right_value6;
void* right_value7;
void* right_value8;
int* axyz_35;
void* right_value9;
int* xxx_36;
void* right_value10;
int* yyy_37;
void* right_value11;
int* zzz_38;
void* right_value12;
int bzyz_39;
int* azyz_40;
    if(1) {
        a_18=come_increment_ref_count((char**)(right_value1=(char**)come_calloc(1, sizeof(char*)*1*128)));
        a_18 = come_decrement_ref_count(a_18);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_19="ABC";
    p2_20="ABC";
    printf("%s\n",(char*)p2_20);
    printf("%c\n",*p_19);
    count_21=0;
    size2_22=1;
    mem2_23=calloc(1,sizeof(int)+sizeof(long)+count_21*size2_22);
    free(mem2_23);
    a_25=&b_24;
    (*a_25)=123;
    a2_26=123;
    if((_Bool)1) {
        b_27=234;
        n_28=0;
        while(n_28<3) {
            printf("a %d\n",a2_26);
            printf("b %d\n",b_27);
            n_28++;
        }
    }
    ax_29=come_increment_ref_count((char**)(right_value2=(char**)come_calloc(1, sizeof(char*)*1*128)));
    if(1) {
        a_30=come_increment_ref_count((char**)(right_value3=(char**)come_calloc(1, sizeof(char*)*1*128)));
        b_31=come_increment_ref_count(a_30);
        memset(&data_32, 0, sizeof(struct sData));
        data_32.a=come_increment_ref_count(a_30);
        a_30 = come_decrement_ref_count(a_30);
        b_31 = come_decrement_ref_count(b_31);
    }
    str_33=come_increment_ref_count((char**)(right_value4=(char**)come_calloc(1, sizeof(char*)*1*128)));
    strncpy(str_33,"ABC",128);
    data_34=come_increment_ref_count((struct sData*)(right_value5=(struct sData*)come_calloc(1, sizeof(struct sData)*1)));
    data_34->a=come_increment_ref_count(str_33);
    puts(data_34->a);
    (int*)(right_value6=funHeap(7,7));
    right_value6 = come_decrement_ref_count(right_value6);
    xassert("right value test",*(int*)(right_value7=funHeap(3,4))==7);
    right_value7 = come_decrement_ref_count(right_value7);
    axyz_35=come_increment_ref_count((int*)(right_value8=funHeap(1,2)));
    xassert("variable test",*axyz_35==3);
    xxx_36=come_increment_ref_count((int*)(right_value9=(int*)come_calloc(1, sizeof(int)*1)));
    *xxx_36=1;
    yyy_37=come_increment_ref_count((int*)(right_value10=(int*)come_calloc(1, sizeof(int)*1)));
    *yyy_37=2;
    xassert("heap",funHeap2(come_increment_ref_count(xxx_36),come_increment_ref_count(yyy_37))==3);
    zzz_38=(int*)(right_value11=(int*)come_calloc(1, sizeof(int)*1));
    right_value11 = come_decrement_ref_count(right_value11);
    (int*)(right_value12=(int*)come_calloc(1, sizeof(int)*1));
    right_value12 = come_decrement_ref_count(right_value12);
    bzyz_39=123;
    azyz_40=&bzyz_39;
    xassert("impl",intp_fun(azyz_40)==123);
    ax_29 = come_decrement_ref_count(ax_29);
    str_33 = come_decrement_ref_count(str_33);
    data_34->a = come_decrement_ref_count(data_34->a);
    data_34 = come_decrement_ref_count(data_34);
    axyz_35 = come_decrement_ref_count(axyz_35);
    xxx_36 = come_decrement_ref_count(xxx_36);
    yyy_37 = come_decrement_ref_count(yyy_37);
    return 0;
}

