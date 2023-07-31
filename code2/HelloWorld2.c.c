typedef unsigned long size_t;
typedef char* string;
struct sData
{
    char* a;
};
struct __current_stack1__
{
    char** p_25;
    void** p2_26;
    int* count_27;
    int* size2_28;
    char** mem2_29;
    int* b_30;
    int** a_31;
    int* a2_32;
    char** ax_35;
    char** str_39;
    struct sData** data_40;
    int** axyz_41;
    int** xxx_42;
    int** yyy_43;
    int** zzz_44;
    int* bzyz_45;
    int** azyz_46;
    int* n_47;
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
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int int_fun(int* self);
int main();
void sData_finalize(struct sData* self);
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
    char* __result__ = mem_0+sizeof(int)+sizeof(long);
    return __result__;
}

static void* come_increment_ref_count(void* mem){
int* ref_count_3;
    if(mem==((void*)0)) {
        void* __result__ = mem;
        return __result__;
    }
    ref_count_3=(int*)((char*)mem-sizeof(int)-sizeof(long));
    (*ref_count_3)++;
    void* __result__ = mem;
    return __result__;
}

static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free){
int* ref_count_4;
int count_5;
    if(mem==((void*)0)) {
        void* __result__ = ((void*)0);
        return __result__;
    }
    ref_count_4=(int*)((char*)mem-sizeof(int)-sizeof(long));
    if(!no_decrement) {
        (*ref_count_4)--;
    }
    count_5=*ref_count_4;
    if(!no_free&&count_5<=0) {
        ncfree(ref_count_4);
        void* __result__ = ((void*)0);
        return __result__;
    }
    void* __result__ = mem;
    return __result__;
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
    void* __result__ = result_11;
    return __result__;
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
        void* __result__ = ((void*)0);
        return __result__;
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
    char* __result__ = (char*)ret_15+sizeof(int)+sizeof(long);
    return __result__;
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
    char* __result__ = result_22;
    result_22 = come_decrement_ref_count(result_22, 0, 1);
    return __result__;
}

int* funHeap(int x, int y){
void* right_value1;
int* result_23;
    result_23=come_increment_ref_count((int*)(right_value1=(int*)come_calloc(1, sizeof(int)*1)));
    *result_23=x+y;
    int* __result__ = result_23;
    result_23 = come_decrement_ref_count(result_23, 0, 1);
    return __result__;
}

int funHeap2(int* x, int* y){
    int __result__ = *x+*y;
    x = come_decrement_ref_count(x, 0, 0);
    y = come_decrement_ref_count(y, 0, 0);
    return __result__;
}

int int_fun(int* self){
    int __result__ = *self;
    return __result__;
}

int main(){
void* right_value2;
char* a_24;
char* p_25;
void* p2_26;
int count_27;
int size2_28;
char* mem2_29;
int b_30;
int* a_31;
int a2_32;
int b_33;
int n_34;
void* right_value3;
char* ax_35;
void* right_value4;
char* a_36;
char* b_37;
struct sData data_38;
void* right_value5;
char* str_39;
void* right_value6;
struct sData* data_40;
void* right_value7;
void* right_value8;
void* right_value9;
int* axyz_41;
void* right_value10;
int* xxx_42;
void* right_value11;
int* yyy_43;
void* right_value12;
int* zzz_44;
void* right_value13;
int bzyz_45;
int* azyz_46;
int n_47;
struct __current_stack1__ __current_stack1__;
    if(1) {
        a_24=come_increment_ref_count((char**)(right_value2=(char**)come_calloc(1, sizeof(char*)*1*128)));
        a_24 = come_decrement_ref_count(a_24, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_25="ABC";
    p2_26="ABC";
    printf("%s\n",(char*)p2_26);
    printf("%c\n",*p_25);
    count_27=0;
    size2_28=1;
    mem2_29=calloc(1,sizeof(int)+sizeof(long)+count_27*size2_28);
    free(mem2_29);
    a_31=&b_30;
    (*a_31)=123;
    a2_32=123;
    if((_Bool)1) {
        b_33=234;
        n_34=0;
        while(n_34<3) {
            printf("a %d\n",a2_32);
            printf("b %d\n",b_33);
            n_34++;
        }
    }
    ax_35=come_increment_ref_count((char**)(right_value3=(char**)come_calloc(1, sizeof(char*)*1*128)));
    if(1) {
        a_36=come_increment_ref_count((char**)(right_value4=(char**)come_calloc(1, sizeof(char*)*1*128)));
        b_37=come_increment_ref_count(a_36);
        memset(&data_38, 0, sizeof(struct sData));
        data_38.a=come_increment_ref_count(a_36);
        a_36 = come_decrement_ref_count(a_36, 0, 0);
        b_37 = come_decrement_ref_count(b_37, 0, 0);
        call_finalizer(sData_finalize,(&data_38),1, 0, 0);
    }
    str_39=come_increment_ref_count((char**)(right_value5=(char**)come_calloc(1, sizeof(char*)*1*128)));
    strncpy(str_39,"ABC",128);
    data_40=come_increment_ref_count((struct sData*)(right_value6=(struct sData*)come_calloc(1, sizeof(struct sData)*1)));
    data_40->a=come_increment_ref_count(str_39);
    puts(data_40->a);
    (int*)(right_value7=funHeap(7,7));
    right_value7 = come_decrement_ref_count(right_value7, 1, 0);
    xassert("right value test",*(int*)(right_value8=funHeap(3,4))==7);
    right_value8 = come_decrement_ref_count(right_value8, 1, 0);
    axyz_41=come_increment_ref_count((int*)(right_value9=funHeap(1,2)));
    xassert("variable test",*axyz_41==3);
    xxx_42=come_increment_ref_count((int*)(right_value10=(int*)come_calloc(1, sizeof(int)*1)));
    *xxx_42=1;
    yyy_43=come_increment_ref_count((int*)(right_value11=(int*)come_calloc(1, sizeof(int)*1)));
    *yyy_43=2;
    xassert("heap",funHeap2(come_increment_ref_count(xxx_42),come_increment_ref_count(yyy_43))==3);
    zzz_44=(int*)(right_value12=(int*)come_calloc(1, sizeof(int)*1));
    right_value12 = come_decrement_ref_count(right_value12, 1, 0);
    (int*)(right_value13=(int*)come_calloc(1, sizeof(int)*1));
    right_value13 = come_decrement_ref_count(right_value13, 1, 0);
    bzyz_45=123;
    azyz_46=&bzyz_45;
    xassert("impl",int_fun(azyz_46)==123);
    n_47=0;
    __current_stack1__.p_25 = &p_25;
    __current_stack1__.p2_26 = &p2_26;
    __current_stack1__.count_27 = &count_27;
    __current_stack1__.size2_28 = &size2_28;
    __current_stack1__.mem2_29 = &mem2_29;
    __current_stack1__.b_30 = &b_30;
    __current_stack1__.a_31 = &a_31;
    __current_stack1__.a2_32 = &a2_32;
    __current_stack1__.ax_35 = &ax_35;
    __current_stack1__.str_39 = &str_39;
    __current_stack1__.data_40 = &data_40;
    __current_stack1__.axyz_41 = &axyz_41;
    __current_stack1__.xxx_42 = &xxx_42;
    __current_stack1__.yyy_43 = &yyy_43;
    __current_stack1__.zzz_44 = &zzz_44;
    __current_stack1__.bzyz_45 = &bzyz_45;
    __current_stack1__.azyz_46 = &azyz_46;
    __current_stack1__.n_47 = &n_47;
    int_times(3,&__current_stack1__,method_block1);
    int __result__ = 0;
    ax_35 = come_decrement_ref_count(ax_35, 0, 0);
    str_39 = come_decrement_ref_count(str_39, 0, 0);
    call_finalizer(sData_finalize,data_40,0, 0, 0);
    axyz_41 = come_decrement_ref_count(axyz_41, 0, 0);
    xxx_42 = come_decrement_ref_count(xxx_42, 0, 0);
    yyy_43 = come_decrement_ref_count(yyy_43, 0, 0);
    return __result__;
}

void sData_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*((*parent).n_47)));
        (*((*parent).n_47))++;
}

