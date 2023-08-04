typedef unsigned long size_t;
typedef char* string;
struct sData
{
    char* a;
};
struct list_item_char
{
    char* item;
    struct list_item_char* prev;
    struct list_item_char* next;
};
struct list_char
{
    struct list_item_char* head;
    struct list_item_char* tail;
    int len;
    struct list_item_char* it;
};
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
struct __current_stack2__
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
    struct list_char** li_50;
    struct list_int** li2_59;
    int* aX_66;
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
int strcmp(const char* s1, const char* s2);
int strncmp(const char s1, const char s2, unsigned long n);
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
_Bool int_equals(int self, int right);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short short self, short short right);
_Bool long_equals(long self, long right);
_Bool stringp_equals(char* self, char* right);
_Bool charp_equals(char* self, char* right);
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int intp_fun(int* self);
int main();
void sDatap_finalize(struct sData* self);
void method_block1(struct __current_stack1__* parent);
struct list_char* list_charp_initialize(struct list_char* self);
void list_charp_finalize(struct list_char* self);
void list_item_charp_finalize(struct list_item_char* self);
void list_charp_push_back(struct list_char* self, char* item);
char* list_charp_begin(struct list_char* self);
_Bool list_charp_end(struct list_char* self);
char* list_charp_next(struct list_char* self);
struct list_int* list_intp_initialize(struct list_int* self);
void list_intp_finalize(struct list_int* self);
void list_item_intp_finalize(struct list_item_int* self);
void list_intp_push_back(struct list_int* self, int item);
int list_intp_begin(struct list_int* self);
_Bool list_intp_end(struct list_int* self);
int list_intp_next(struct list_int* self);
void list_intp_each(struct list_int* self, void* parent, void (*block)(void*,int,int,_Bool*));
void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3);

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

_Bool int_equals(int self, int right){
    int __result__ = self==right;
    return __result__;
}

_Bool bool_equals(_Bool self, _Bool right){
    _Bool __result__ = self==right;
    return __result__;
}

_Bool char_equals(char self, char right){
    char __result__ = self==right;
    return __result__;
}

_Bool short_equals(short short self, short short right){
    short short __result__ = self==right;
    return __result__;
}

_Bool long_equals(long self, long right){
    long __result__ = self==right;
    return __result__;
}

_Bool stringp_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}

_Bool charp_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
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

int intp_fun(int* self){
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
void* right_value14;
void* right_value15;
struct list_char* li_50;
void* right_value19;
void* right_value20;
void* right_value21;
char* it_55;
void* right_value22;
void* right_value23;
struct list_int* li2_59;
int it_64;
int aX_66;
struct __current_stack2__ __current_stack2__;
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
        if(data_38.a) { come_decrement_ref_count(data_38.a, 0, 0); }; data_38.a=come_increment_ref_count(a_36);
        a_36 = come_decrement_ref_count(a_36, 0, 0);
        b_37 = come_decrement_ref_count(b_37, 0, 0);
        call_finalizer(sDatap_finalize,(&data_38),1, 0, 0);
    }
    str_39=come_increment_ref_count((char**)(right_value5=(char**)come_calloc(1, sizeof(char*)*1*128)));
    strncpy(str_39,"ABC",128);
    data_40=come_increment_ref_count((struct sData*)(right_value6=(struct sData*)come_calloc(1, sizeof(struct sData)*1)));
    if(data_40->a) { come_decrement_ref_count(data_40->a, 0, 0); }; data_40->a=come_increment_ref_count(str_39);
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
    zzz_44=come_increment_ref_count((int*)(right_value12=(int*)come_calloc(1, sizeof(int)*1)));
    (int*)(right_value13=(int*)come_calloc(1, sizeof(int)*1));
    right_value13 = come_decrement_ref_count(right_value13, 1, 0);
    bzyz_45=123;
    azyz_46=&bzyz_45;
    xassert("impl",intp_fun(azyz_46)==123);
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
    li_50=come_increment_ref_count((struct list_char*)(right_value15=list_charp_initialize(come_increment_ref_count((struct list_char*)(right_value14=(struct list_char*)come_calloc(1, sizeof(struct list_char)*1))))));
    call_finalizer(list_charp_finalize,right_value14,0, 1, 0);
    list_charp_push_back(li_50,come_increment_ref_count((char*)(right_value19=__builtin_string("ABC"))));
    right_value19 = come_decrement_ref_count(right_value19, 1, 0);
    list_charp_push_back(li_50,come_increment_ref_count((char*)(right_value20=__builtin_string("DEF"))));
    right_value20 = come_decrement_ref_count(right_value20, 1, 0);
    list_charp_push_back(li_50,come_increment_ref_count((char*)(right_value21=__builtin_string("GHI"))));
    right_value21 = come_decrement_ref_count(right_value21, 1, 0);
    for(
    it_55=list_charp_begin((li_50));
    !list_charp_end((li_50));
    it_55=list_charp_next((li_50))
    ){
        printf("%s\n",it_55);
    }
    li2_59=come_increment_ref_count((struct list_int*)(right_value23=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value22=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value22,0, 1, 0);
    list_intp_push_back(li2_59,1);
    list_intp_push_back(li2_59,2);
    list_intp_push_back(li2_59,3);
    for(
    it_64=list_intp_begin((li2_59));
    !list_intp_end((li2_59));
    it_64=list_intp_next((li2_59))
    ){
        printf("%d\n",it_64);
    }
    aX_66=123;
    __current_stack2__.p_25 = &p_25;
    __current_stack2__.p2_26 = &p2_26;
    __current_stack2__.count_27 = &count_27;
    __current_stack2__.size2_28 = &size2_28;
    __current_stack2__.mem2_29 = &mem2_29;
    __current_stack2__.b_30 = &b_30;
    __current_stack2__.a_31 = &a_31;
    __current_stack2__.a2_32 = &a2_32;
    __current_stack2__.ax_35 = &ax_35;
    __current_stack2__.str_39 = &str_39;
    __current_stack2__.data_40 = &data_40;
    __current_stack2__.axyz_41 = &axyz_41;
    __current_stack2__.xxx_42 = &xxx_42;
    __current_stack2__.yyy_43 = &yyy_43;
    __current_stack2__.zzz_44 = &zzz_44;
    __current_stack2__.bzyz_45 = &bzyz_45;
    __current_stack2__.azyz_46 = &azyz_46;
    __current_stack2__.n_47 = &n_47;
    __current_stack2__.li_50 = &li_50;
    __current_stack2__.li2_59 = &li2_59;
    __current_stack2__.aX_66 = &aX_66;
    list_intp_each(li2_59,&__current_stack2__,method_block2);
    xassert("method_block test",aX_66==2);
    int __result__ = 0;
    ax_35 = come_decrement_ref_count(ax_35, 0, 0);
    str_39 = come_decrement_ref_count(str_39, 0, 0);
    call_finalizer(sDatap_finalize,data_40,0, 0, 0);
    axyz_41 = come_decrement_ref_count(axyz_41, 0, 0);
    xxx_42 = come_decrement_ref_count(xxx_42, 0, 0);
    yyy_43 = come_decrement_ref_count(yyy_43, 0, 0);
    zzz_44 = come_decrement_ref_count(zzz_44, 0, 0);
    call_finalizer(list_charp_finalize,li_50,0, 0, 0);
    call_finalizer(list_intp_finalize,li2_59,0, 0, 0);
    return __result__;
}

void sDatap_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_47)));
        (*(parent->n_47))++;
}

struct list_char* list_charp_initialize(struct list_char* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list_char* __result__ = self;
        call_finalizer(list_charp_finalize,self,0, 0, 1);
        return __result__;
}

void list_charp_finalize(struct list_char* self){
struct list_item_char* it_48;
struct list_item_char* prev_it_49;
            it_48=self->head;
            while(it_48!=((void*)0)) {
                if(1) {
                    it_48->item = come_decrement_ref_count(it_48->item, 0, 0);
                }
                prev_it_49=it_48;
                it_48=it_48->next;
                call_finalizer(list_item_charp_finalize,prev_it_49,0, 0, 0);
            }
}

void list_item_charp_finalize(struct list_item_char* self){
                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                        self->item = come_decrement_ref_count(self->item, 0, 0);
                    }
}

void list_charp_push_back(struct list_char* self, char* item){
void* right_value16;
struct list_item_char* litem_51;
void* right_value17;
struct list_item_char* litem_52;
void* right_value18;
struct list_item_char* litem_53;
        if(self->len==0) {
            litem_51=(struct list_item_char*)(right_value16=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_51->prev=((void*)0);
            litem_51->next=((void*)0);
            if(litem_51->item) { come_decrement_ref_count(litem_51->item, 0, 0); }; litem_51->item=come_increment_ref_count(item);
            self->tail=litem_51;
            self->head=litem_51;
        }
        else if(self->len==1) {
            litem_52=(struct list_item_char*)(right_value17=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_52->prev=self->head;
            litem_52->next=((void*)0);
            if(litem_52->item) { come_decrement_ref_count(litem_52->item, 0, 0); }; litem_52->item=come_increment_ref_count(item);
            self->tail=litem_52;
            self->head->next=litem_52;
        }
        else {
            litem_53=(struct list_item_char*)(right_value18=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_53->prev=self->tail;
            litem_53->next=((void*)0);
            if(litem_53->item) { come_decrement_ref_count(litem_53->item, 0, 0); }; litem_53->item=come_increment_ref_count(item);
            self->tail->next=litem_53;
            self->tail=litem_53;
        }
        self->len++;
        item = come_decrement_ref_count(item, 0, 0);
}

char* list_charp_begin(struct list_char* self){
char* result_54;
        self->it=self->head;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_54,0,sizeof(char*));
        char* __result__ = result_54;
        return __result__;
}

_Bool list_charp_end(struct list_char* self){
        struct list_item_char* __result__ = self->it==((void*)0);
        return __result__;
}

char* list_charp_next(struct list_char* self){
char* result_56;
        self->it=self->it->next;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_56,0,sizeof(char*));
        char* __result__ = result_56;
        return __result__;
}

struct list_int* list_intp_initialize(struct list_int* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list_int* __result__ = self;
        call_finalizer(list_intp_finalize,self,0, 0, 1);
        return __result__;
}

void list_intp_finalize(struct list_int* self){
struct list_item_int* it_57;
struct list_item_int* prev_it_58;
            it_57=self->head;
            while(it_57!=((void*)0)) {
                if(0) {
                }
                prev_it_58=it_57;
                it_57=it_57->next;
                call_finalizer(list_item_intp_finalize,prev_it_58,0, 0, 0);
            }
}

void list_item_intp_finalize(struct list_item_int* self){
}

void list_intp_push_back(struct list_int* self, int item){
void* right_value24;
struct list_item_int* litem_60;
void* right_value25;
struct list_item_int* litem_61;
void* right_value26;
struct list_item_int* litem_62;
        if(self->len==0) {
            litem_60=(struct list_item_int*)(right_value24=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_60->prev=((void*)0);
            litem_60->next=((void*)0);
            litem_60->item=item;
            self->tail=litem_60;
            self->head=litem_60;
        }
        else if(self->len==1) {
            litem_61=(struct list_item_int*)(right_value25=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_61->prev=self->head;
            litem_61->next=((void*)0);
            litem_61->item=item;
            self->tail=litem_61;
            self->head->next=litem_61;
        }
        else {
            litem_62=(struct list_item_int*)(right_value26=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_62->prev=self->tail;
            litem_62->next=((void*)0);
            litem_62->item=item;
            self->tail->next=litem_62;
            self->tail=litem_62;
        }
        self->len++;
}

int list_intp_begin(struct list_int* self){
int result_63;
        self->it=self->head;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_63,0,sizeof(int));
        int __result__ = result_63;
        return __result__;
}

_Bool list_intp_end(struct list_int* self){
        struct list_item_int* __result__ = self->it==((void*)0);
        return __result__;
}

int list_intp_next(struct list_int* self){
int result_65;
        self->it=self->it->next;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_65,0,sizeof(int));
        int __result__ = result_65;
        return __result__;
}

void list_intp_each(struct list_int* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item_int* it_67;
int i_68;
_Bool end_flag_69;
        it_67=self->head;
        i_68=0;
        while(it_67!=((void*)0)) {
            end_flag_69=(_Bool)0;
            block(parent,it_67->item,i_68,&end_flag_69);
            if(end_flag_69==(_Bool)1) {
                break;
            }
            it_67=it_67->next;
            i_68++;
        }
}

void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_66)));
        (*(parent->aX_66))=2;
}

