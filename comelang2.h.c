typedef unsigned long size_t;
typedef char* string;
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
struct list_item_char_char
{
    char* item;
    struct list_item_char_char* prev;
    struct list_item_char_char* next;
};
struct list_item_int_int
{
    int item;
    struct list_item_int_int* prev;
    struct list_item_int_int* next;
};
struct __current_stack1__
{
    int* argc;
    char*** argv;
    struct list_char** li_25;
    struct list_int** li2_34;
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
struct list_char* list_char_initialize(struct list_char* self);
void list_char_finalize(struct list_char* self);
void list_item_char_char_finalize(struct list_item_char_char* self);
void list_char_push_back(struct list_char* self, char* item);
char* list_char_begin(struct list_char* self);
_Bool list_char_end(struct list_char* self);
char* list_char_next(struct list_char* self);
struct list_int* list_int_initialize(struct list_int* self);
void list_int_finalize(struct list_int* self);
void list_item_int_int_finalize(struct list_item_int_int* self);
void list_int_push_back(struct list_int* self, int item);
int list_int_begin(struct list_int* self);
_Bool list_int_end(struct list_int* self);
int list_int_next(struct list_int* self);
void list_int_each(struct list_int* self, void* parent, void (*block)(void*,int,int,_Bool*));

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

int main(int argc, char** argv){
void* right_value1;
struct list_char* li_25;
void* right_value5;
void* right_value6;
void* right_value7;
char* it_30;
void* right_value8;
struct list_int* li2_34;
int it_39;
struct __current_stack1__ __current_stack1__;
    li_25=come_increment_ref_count(list_char_initialize(come_increment_ref_count((struct list_char*)(right_value1=(struct list_char*)come_calloc(1, sizeof(struct list_char)*1)))));
    call_finalizer(list_char_finalize,right_value1,0, 1, 0);
    list_char_push_back(li_25,come_increment_ref_count((char*)(right_value5=__builtin_string("ABC"))));
    right_value5 = come_decrement_ref_count(right_value5, 1, 0);
    list_char_push_back(li_25,come_increment_ref_count((char*)(right_value6=__builtin_string("DEF"))));
    right_value6 = come_decrement_ref_count(right_value6, 1, 0);
    list_char_push_back(li_25,come_increment_ref_count((char*)(right_value7=__builtin_string("GHI"))));
    right_value7 = come_decrement_ref_count(right_value7, 1, 0);
    for(
    it_30=list_char_begin((li_25));
    !list_char_end((li_25));
    it_30=list_char_next((li_25))
    ){
        printf("%s\n",it_30);
    }
    li2_34=come_increment_ref_count(list_int_initialize(come_increment_ref_count((struct list_int*)(right_value8=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1)))));
    call_finalizer(list_int_finalize,right_value8,0, 1, 0);
    list_int_push_back(li2_34,1);
    list_int_push_back(li2_34,2);
    list_int_push_back(li2_34,3);
    for(
    it_39=list_int_begin((li2_34));
    !list_int_end((li2_34));
    it_39=list_int_next((li2_34))
    ){
        printf("%d\n",it_39);
    }
    __current_stack1__.argc = &argc;
    __current_stack1__.argv = &argv;
    __current_stack1__.li_25 = &li_25;
    __current_stack1__.li2_34 = &li2_34;
}

struct list_char* list_char_initialize(struct list_char* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list_char* __result__ = self;
        call_finalizer(list_char_finalize,self,0, 0, 1);
        return __result__;
}

void list_char_finalize(struct list_char* self){
struct list_item_char_char* it_23;
struct list_item_char_char* prev_it_24;
            it_23=self->head;
            while(it_23!=((void*)0)) {
                if(1) {
                    it_23->item = come_decrement_ref_count(it_23->item, 0, 0);
                }
                prev_it_24=it_23;
                it_23=it_23->next;
                call_finalizer(list_item_char_char_finalize,prev_it_24,0, 0, 0);
            }
}

void list_item_char_char_finalize(struct list_item_char_char* self){
                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                        self->item = come_decrement_ref_count(self->item, 0, 0);
                    }
}

void list_char_push_back(struct list_char* self, char* item){
void* right_value2;
struct list_item_char_char* litem_26;
void* right_value3;
struct list_item_char_char* litem_27;
void* right_value4;
struct list_item_char_char* litem_28;
        if(self->len==0) {
            litem_26=(struct list_item_char*)(right_value2=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_26->prev=((void*)0);
            litem_26->next=((void*)0);
            litem_26->item=come_increment_ref_count(item);
            self->tail=litem_26;
            self->head=litem_26;
        }
        else if(self->len==1) {
            litem_27=(struct list_item_char*)(right_value3=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_27->prev=self->head;
            litem_27->next=((void*)0);
            litem_27->item=come_increment_ref_count(item);
            self->tail=litem_27;
            self->head->next=litem_27;
        }
        else {
            litem_28=(struct list_item_char*)(right_value4=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_28->prev=self->tail;
            litem_28->next=((void*)0);
            litem_28->item=come_increment_ref_count(item);
            self->tail->next=litem_28;
            self->tail=litem_28;
        }
        self->len++;
        item = come_decrement_ref_count(item, 0, 0);
}

char* list_char_begin(struct list_char* self){
char* result_29;
        self->it=self->head;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_29,0,sizeof(char*));
        char* __result__ = result_29;
        return __result__;
}

_Bool list_char_end(struct list_char* self){
        struct list_item_char* __result__ = self->it==((void*)0);
        return __result__;
}

char* list_char_next(struct list_char* self){
char* result_31;
        self->it=self->it->next;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_31,0,sizeof(char*));
        char* __result__ = result_31;
        return __result__;
}

struct list_int* list_int_initialize(struct list_int* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list_int* __result__ = self;
        call_finalizer(list_int_finalize,self,0, 0, 1);
        return __result__;
}

void list_int_finalize(struct list_int* self){
struct list_item_int_int* it_32;
struct list_item_int_int* prev_it_33;
            it_32=self->head;
            while(it_32!=((void*)0)) {
                if(0) {
                }
                prev_it_33=it_32;
                it_32=it_32->next;
                call_finalizer(list_item_int_int_finalize,prev_it_33,0, 0, 0);
            }
}

void list_item_int_int_finalize(struct list_item_int_int* self){
}

void list_int_push_back(struct list_int* self, int item){
void* right_value9;
struct list_item_int_int* litem_35;
void* right_value10;
struct list_item_int_int* litem_36;
void* right_value11;
struct list_item_int_int* litem_37;
        if(self->len==0) {
            litem_35=(struct list_item_int*)(right_value9=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_35->prev=((void*)0);
            litem_35->next=((void*)0);
            litem_35->item=item;
            self->tail=litem_35;
            self->head=litem_35;
        }
        else if(self->len==1) {
            litem_36=(struct list_item_int*)(right_value10=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_36->prev=self->head;
            litem_36->next=((void*)0);
            litem_36->item=item;
            self->tail=litem_36;
            self->head->next=litem_36;
        }
        else {
            litem_37=(struct list_item_int*)(right_value11=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_37->prev=self->tail;
            litem_37->next=((void*)0);
            litem_37->item=item;
            self->tail->next=litem_37;
            self->tail=litem_37;
        }
        self->len++;
}

int list_int_begin(struct list_int* self){
int result_38;
        self->it=self->head;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_38,0,sizeof(int));
        int __result__ = result_38;
        return __result__;
}

_Bool list_int_end(struct list_int* self){
        struct list_item_int* __result__ = self->it==((void*)0);
        return __result__;
}

int list_int_next(struct list_int* self){
int result_40;
        self->it=self->it->next;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_40,0,sizeof(int));
        int __result__ = result_40;
        return __result__;
}

void list_int_each(struct list_int* self, void* parent, void (*block)(void*,int,int,_Bool*)){
}

