/* source head */
typedef long size_t;
typedef char* string;
struct sDataXYZ
{
    char* a;
    int b;
};
typedef long long anonymous_var_name1;
typedef long long anonymous_var_name2;
typedef unsigned long long anonymous_var_name3;
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
    struct list_char** liX_50;
    struct list_int** liX2_59;
    int* aX_66;
};
struct __current_stack3__
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
    struct list_char** liX_50;
    struct list_int** liX2_59;
    int* aX_66;
    int* aXYZY_70;
    struct list_char** li_71;
    struct list_int** li2_73;
    int* aXL_75;
};

/* header function */
int puts(const char* str);
int printf(const char* format, ...);
void* malloc(long size);
void free(void* ptr);
void* calloc(long nmemb, long size);
void* realloc(void* ptr, long size);
long strlen(const char* s);
void* memset(void* s, int c, long n);
char* strncpy(char* dest, const char* src, long n);
char* strncat(char* dst, char* src, long sz);
int strcmp(const char* s1, const char* s2);
int strncmp(const char s1, const char s2, long n);
void exit(int status);
int funX(int a, int b);
char* funX2(char* a, char* b);
int main();
static void xassert(char* msg, _Bool test);
static void ncfree(void* mem);
static void* come_calloc(long count, long size);
static void* come_increment_ref_count(void* mem);
static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free);
static void come_free_object(void* mem);
static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free);
static void* nccalloc(long nmemb, long size);
static void* come_memdup(void* block);
static void int_times(int self, void* parent, void (*block)(void*));
static char* __builtin_string(char* str);
static _Bool int_equals(int self, int right);
static _Bool bool_equals(_Bool self, _Bool right);
static _Bool char_equals(char self, char right);
static _Bool short_equals(short short self, short short right);
static _Bool long_equals(long self, long right);
static _Bool stringp_equals(char* self, char* right);
static _Bool charp_equals(char* self, char* right);
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int intp_fun(int* self);
static void sDatap_finalize(struct sData* self);
void method_block1(struct __current_stack1__* parent);
static struct list_char* list_charp_initialize(struct list_char* self);
static void list_charp_finalize(struct list_char* self);
static void list_item_charp_finalize(struct list_item_char* self);
static void list_charp_push_back(struct list_char* self, char* item);
static char* list_charp_begin(struct list_char* self);
static _Bool list_charp_end(struct list_char* self);
static char* list_charp_next(struct list_char* self);
static struct list_int* list_intp_initialize(struct list_int* self);
static void list_intp_finalize(struct list_int* self);
static void list_item_intp_finalize(struct list_item_int* self);
static void list_intp_push_back(struct list_int* self, int item);
static int list_intp_begin(struct list_int* self);
static _Bool list_intp_end(struct list_int* self);
static int list_intp_next(struct list_int* self);
static void list_intp_each(struct list_int* self, void* parent, void (*block)(void*,int,int,_Bool*));
void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3);
void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3);
static int list_intp_item(struct list_int* self, int position, int default_value);
static void list_intp_insert(struct list_int* self, int position, int item);
static void list_charp_insert(struct list_char* self, int position, char* item);
static char* list_charp_item(struct list_char* self, int position, char* default_value);
static void list_charp_reset(struct list_char* self);
static int list_charp_length(struct list_char* self);
static void list_intp_delete(struct list_int* self, int head, int tail);
static void list_intp_reset(struct list_int* self);
static void list_charp_replace(struct list_char* self, int position, char* item);
static _Bool list_intp_equals(struct list_int* left, struct list_int* right);
static int list_intp_find(struct list_int* self, int item, int default_value);
static struct list_int* list_intp_sublist(struct list_int* self, int begin, int tail);

/* body function */
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
struct list_char* liX_50;
void* right_value19;
void* right_value20;
void* right_value21;
char* it_55;
void* right_value22;
void* right_value23;
struct list_int* liX2_59;
int it_64;
int aX_66;
struct __current_stack2__ __current_stack2__;
int aXYZY_70;
void* right_value27;
void* right_value28;
struct list_char* li_71;
void* right_value29;
void* right_value30;
void* right_value31;
char* it_72;
void* right_value32;
void* right_value33;
struct list_int* li2_73;
int it_74;
int aXL_75;
struct __current_stack3__ __current_stack3__;
void* right_value40;
void* right_value41;
void* right_value42;
struct list_char* li3_106;
void* right_value43;
void* right_value44;
void* right_value45;
void* right_value46;
void* right_value47;
void* right_value48;
struct list_int* li4_109;
void* right_value49;
void* right_value50;
struct list_int* li5_110;
void* right_value51;
void* right_value52;
struct list_int* li6_115;
void* right_value55;
int* axyzX_119;
void* right_value56;
void* right_value57;
memset(&a_24, 0, sizeof(char*));
memset(&p_25, 0, sizeof(char*));
memset(&p2_26, 0, sizeof(void*));
memset(&count_27, 0, sizeof(int));
memset(&size2_28, 0, sizeof(int));
memset(&mem2_29, 0, sizeof(char*));
memset(&b_30, 0, sizeof(int));
memset(&a_31, 0, sizeof(int*));
memset(&a2_32, 0, sizeof(int));
memset(&b_33, 0, sizeof(int));
memset(&n_34, 0, sizeof(int));
memset(&ax_35, 0, sizeof(char*));
memset(&a_36, 0, sizeof(char*));
memset(&b_37, 0, sizeof(char*));
memset(&data_38, 0, sizeof(struct sData));
memset(&str_39, 0, sizeof(char*));
memset(&data_40, 0, sizeof(struct sData*));
memset(&axyz_41, 0, sizeof(int*));
memset(&xxx_42, 0, sizeof(int*));
memset(&yyy_43, 0, sizeof(int*));
memset(&zzz_44, 0, sizeof(int*));
memset(&bzyz_45, 0, sizeof(int));
memset(&azyz_46, 0, sizeof(int*));
memset(&n_47, 0, sizeof(int));
memset(&liX_50, 0, sizeof(struct list_char*));
memset(&it_55, 0, sizeof(char*));
memset(&liX2_59, 0, sizeof(struct list_int*));
memset(&it_64, 0, sizeof(int));
memset(&aX_66, 0, sizeof(int));
memset(&aXYZY_70, 0, sizeof(int));
memset(&li_71, 0, sizeof(struct list_char*));
memset(&it_72, 0, sizeof(char*));
memset(&li2_73, 0, sizeof(struct list_int*));
memset(&it_74, 0, sizeof(int));
memset(&aXL_75, 0, sizeof(int));
memset(&li3_106, 0, sizeof(struct list_char*));
memset(&li4_109, 0, sizeof(struct list_int*));
memset(&li5_110, 0, sizeof(struct list_int*));
memset(&li6_115, 0, sizeof(struct list_int*));
memset(&axyzX_119, 0, sizeof(int*));
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
        data_38.a=come_increment_ref_count(a_36);
        a_36 = come_decrement_ref_count(a_36, 0, 0);
        b_37 = come_decrement_ref_count(b_37, 0, 0);
        call_finalizer(sDatap_finalize,(&data_38),1, 0, 0);
    }
    str_39=come_increment_ref_count((char**)(right_value5=(char**)come_calloc(1, sizeof(char*)*1*128)));
    strncpy(str_39,"ABC",128);
    data_40=come_increment_ref_count((struct sData*)(right_value6=(struct sData*)come_calloc(1, sizeof(struct sData)*1)));
    come_decrement_ref_count(data_40->a, 0, 0);
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
    liX_50=come_increment_ref_count((struct list_char*)(right_value15=list_charp_initialize(come_increment_ref_count((struct list_char*)(right_value14=(struct list_char*)come_calloc(1, sizeof(struct list_char)*1))))));
    call_finalizer(list_charp_finalize,right_value14,0, 1, 0);
    list_charp_push_back(liX_50,come_increment_ref_count((char*)(right_value19=__builtin_string("ABC"))));
    right_value19 = come_decrement_ref_count(right_value19, 1, 0);
    list_charp_push_back(liX_50,come_increment_ref_count((char*)(right_value20=__builtin_string("DEF"))));
    right_value20 = come_decrement_ref_count(right_value20, 1, 0);
    list_charp_push_back(liX_50,come_increment_ref_count((char*)(right_value21=__builtin_string("GHI"))));
    right_value21 = come_decrement_ref_count(right_value21, 1, 0);
    for(
    it_55=list_charp_begin((liX_50));
    !list_charp_end((liX_50));
    it_55=list_charp_next((liX_50))
    ){
        printf("%s\n",it_55);
    }
    liX2_59=come_increment_ref_count((struct list_int*)(right_value23=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value22=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value22,0, 1, 0);
    list_intp_push_back(liX2_59,1);
    list_intp_push_back(liX2_59,2);
    list_intp_push_back(liX2_59,3);
    for(
    it_64=list_intp_begin((liX2_59));
    !list_intp_end((liX2_59));
    it_64=list_intp_next((liX2_59))
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
    __current_stack2__.liX_50 = &liX_50;
    __current_stack2__.liX2_59 = &liX2_59;
    __current_stack2__.aX_66 = &aX_66;
    list_intp_each(liX2_59,&__current_stack2__,method_block2);
    xassert("method_block test",aX_66==2);
    xassert("var initialize test",aXYZY_70==0);
    li_71=come_increment_ref_count((struct list_char*)(right_value28=list_charp_initialize(come_increment_ref_count((struct list_char*)(right_value27=(struct list_char*)come_calloc(1, sizeof(struct list_char)*1))))));
    call_finalizer(list_charp_finalize,right_value27,0, 1, 0);
    list_charp_push_back(li_71,come_increment_ref_count((char*)(right_value29=__builtin_string("ABC"))));
    right_value29 = come_decrement_ref_count(right_value29, 1, 0);
    list_charp_push_back(li_71,come_increment_ref_count((char*)(right_value30=__builtin_string("DEF"))));
    right_value30 = come_decrement_ref_count(right_value30, 1, 0);
    list_charp_push_back(li_71,come_increment_ref_count((char*)(right_value31=__builtin_string("GHI"))));
    right_value31 = come_decrement_ref_count(right_value31, 1, 0);
    for(
    it_72=list_charp_begin((li_71));
    !list_charp_end((li_71));
    it_72=list_charp_next((li_71))
    ){
        printf("%s\n",it_72);
    }
    li2_73=come_increment_ref_count((struct list_int*)(right_value33=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value32=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value32,0, 1, 0);
    list_intp_push_back(li2_73,1);
    list_intp_push_back(li2_73,2);
    list_intp_push_back(li2_73,3);
    for(
    it_74=list_intp_begin((li2_73));
    !list_intp_end((li2_73));
    it_74=list_intp_next((li2_73))
    ){
        printf("%d\n",it_74);
    }
    aXL_75=123;
    __current_stack3__.p_25 = &p_25;
    __current_stack3__.p2_26 = &p2_26;
    __current_stack3__.count_27 = &count_27;
    __current_stack3__.size2_28 = &size2_28;
    __current_stack3__.mem2_29 = &mem2_29;
    __current_stack3__.b_30 = &b_30;
    __current_stack3__.a_31 = &a_31;
    __current_stack3__.a2_32 = &a2_32;
    __current_stack3__.ax_35 = &ax_35;
    __current_stack3__.str_39 = &str_39;
    __current_stack3__.data_40 = &data_40;
    __current_stack3__.axyz_41 = &axyz_41;
    __current_stack3__.xxx_42 = &xxx_42;
    __current_stack3__.yyy_43 = &yyy_43;
    __current_stack3__.zzz_44 = &zzz_44;
    __current_stack3__.bzyz_45 = &bzyz_45;
    __current_stack3__.azyz_46 = &azyz_46;
    __current_stack3__.n_47 = &n_47;
    __current_stack3__.liX_50 = &liX_50;
    __current_stack3__.liX2_59 = &liX2_59;
    __current_stack3__.aX_66 = &aX_66;
    __current_stack3__.aXYZY_70 = &aXYZY_70;
    __current_stack3__.li_71 = &li_71;
    __current_stack3__.li2_73 = &li2_73;
    __current_stack3__.aXL_75 = &aXL_75;
    list_intp_each(li2_73,&__current_stack3__,method_block3);
    printf("a %d\n",aXL_75);
    xassert("list::item",list_intp_item(li2_73,0,-1)==1);
    list_intp_insert(li2_73,1,5);
    xassert("list::insert",list_intp_item(li2_73,0,-1)==1&&list_intp_item(li2_73,1,-1)==5&&list_intp_item(li2_73,2,-1)==2&&list_intp_item(li2_73,3,-1)==3);
    list_charp_insert(li_71,1,come_increment_ref_count((char*)(right_value40=__builtin_string("GGG"))));
    right_value40 = come_decrement_ref_count(right_value40, 1, 0);
    xassert("list::insert",strcmp(list_charp_item(li_71,0,-1),"ABC")==0&&strcmp(list_charp_item(li_71,1,-1),"GGG")==0&&strcmp(list_charp_item(li_71,2,-1),"DEF")==0&&strcmp(list_charp_item(li_71,3,-1),"GHI")==0);
    list_charp_reset(li_71);
    xassert("list::reset",list_charp_length(li_71)==0);
    list_intp_delete(li2_73,0,1);
    xassert("list::delete",list_intp_item(li2_73,0,-1)==5&&list_intp_item(li2_73,1,-1)==2&&list_intp_item(li2_73,2,-1)==3);
    li3_106=come_increment_ref_count((struct list_char*)(right_value42=list_charp_initialize(come_increment_ref_count((struct list_char*)(right_value41=(struct list_char*)come_calloc(1, sizeof(struct list_char)*1))))));
    call_finalizer(list_charp_finalize,right_value41,0, 1, 0);
    list_charp_push_back(li3_106,come_increment_ref_count((char*)(right_value43=__builtin_string("AAA"))));
    right_value43 = come_decrement_ref_count(right_value43, 1, 0);
    list_charp_push_back(li3_106,come_increment_ref_count((char*)(right_value44=__builtin_string("BBB"))));
    right_value44 = come_decrement_ref_count(right_value44, 1, 0);
    list_charp_push_back(li3_106,come_increment_ref_count((char*)(right_value45=__builtin_string("CCC"))));
    right_value45 = come_decrement_ref_count(right_value45, 1, 0);
    list_charp_replace(li3_106,0,come_increment_ref_count((char*)(right_value46=__builtin_string("ABC"))));
    right_value46 = come_decrement_ref_count(right_value46, 1, 0);
    xassert("list::replace",strcmp(list_charp_item(li3_106,0,((void*)0)),"ABC")==0&&strcmp(list_charp_item(li3_106,1,((void*)0)),"BBB")==0&&strcmp(list_charp_item(li3_106,2,((void*)0)),"CCC")==0);
    li4_109=come_increment_ref_count((struct list_int*)(right_value48=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value47=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value47,0, 1, 0);
    list_intp_push_back(li4_109,1);
    list_intp_push_back(li4_109,3);
    list_intp_push_back(li4_109,5);
    li5_110=come_increment_ref_count((struct list_int*)(right_value50=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value49=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value49,0, 1, 0);
    list_intp_push_back(li5_110,1);
    list_intp_push_back(li5_110,3);
    list_intp_push_back(li5_110,5);
    xassert("list::equals",list_intp_equals(li4_109,li5_110));
    xassert("list::find",list_intp_find(li4_109,5,-1)==2);
    li6_115=come_increment_ref_count((struct list_int*)(right_value52=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value51=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value51,0, 1, 0);
    list_intp_push_back(li6_115,3);
    list_intp_push_back(li6_115,5);
    xassert("list::sublist",list_intp_equals((struct list_int*)(right_value55=list_intp_sublist(li5_110,1,-1)),li6_115));
    call_finalizer(list_intp_finalize,right_value55,0, 1, 0);
    come_decrement_ref_count(axyzX_119, 0, 0);
    axyzX_119=come_increment_ref_count((int*)(right_value56=(int*)come_calloc(1, sizeof(int)*1)));
    come_decrement_ref_count(axyzX_119, 0, 0);
    axyzX_119=come_increment_ref_count((int*)(right_value57=(int*)come_calloc(1, sizeof(int)*1)));
    int __result__ = 0;
    ax_35 = come_decrement_ref_count(ax_35, 0, 0);
    str_39 = come_decrement_ref_count(str_39, 0, 0);
    call_finalizer(sDatap_finalize,data_40,0, 0, 0);
    axyz_41 = come_decrement_ref_count(axyz_41, 0, 0);
    xxx_42 = come_decrement_ref_count(xxx_42, 0, 0);
    yyy_43 = come_decrement_ref_count(yyy_43, 0, 0);
    zzz_44 = come_decrement_ref_count(zzz_44, 0, 0);
    call_finalizer(list_charp_finalize,liX_50,0, 0, 0);
    call_finalizer(list_intp_finalize,liX2_59,0, 0, 0);
    call_finalizer(list_charp_finalize,li_71,0, 0, 0);
    call_finalizer(list_intp_finalize,li2_73,0, 0, 0);
    call_finalizer(list_charp_finalize,li3_106,0, 0, 0);
    call_finalizer(list_intp_finalize,li4_109,0, 0, 0);
    call_finalizer(list_intp_finalize,li5_110,0, 0, 0);
    call_finalizer(list_intp_finalize,li6_115,0, 0, 0);
    axyzX_119 = come_decrement_ref_count(axyzX_119, 0, 0);
    return __result__;
}

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

static void* come_calloc(long count, long size){
char* mem_0;
int* ref_count_1;
long* size2_2;
memset(&mem_0, 0, sizeof(char*));
memset(&ref_count_1, 0, sizeof(int*));
memset(&size2_2, 0, sizeof(long*));
    mem_0=calloc(1,sizeof(int)+sizeof(long)+count*size);
    ref_count_1=(int*)mem_0;
    size2_2=(long*)(mem_0+sizeof(int));
    *size2_2=size*count+sizeof(long)+sizeof(int);
    char* __result__ = mem_0+sizeof(int)+sizeof(long);
    return __result__;
}

static void* come_increment_ref_count(void* mem){
int* ref_count_3;
memset(&ref_count_3, 0, sizeof(int*));
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
memset(&ref_count_4, 0, sizeof(int*));
memset(&count_5, 0, sizeof(int));
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
memset(&ref_count_6, 0, sizeof(int*));
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
memset(&finalizer_7, 0, sizeof(void (*)()));
memset(&ref_count_8, 0, sizeof(int*));
memset(&count_9, 0, sizeof(int));
memset(&finalizer_10, 0, sizeof(void (*)()));
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

static void* nccalloc(long nmemb, long size){
void* result_11;
memset(&result_11, 0, sizeof(void*));
    result_11=calloc(nmemb,size);
    void* __result__ = result_11;
    return __result__;
}

static void* come_memdup(void* block){
char* mem_12;
long* size_p_13;
long size_14;
void* ret_15;
int* ref_count_16;
char* p_17;
char* p2_18;
long* size_p2_19;
memset(&mem_12, 0, sizeof(char*));
memset(&size_p_13, 0, sizeof(long*));
memset(&size_14, 0, sizeof(long));
memset(&ret_15, 0, sizeof(void*));
memset(&ref_count_16, 0, sizeof(int*));
memset(&p_17, 0, sizeof(char*));
memset(&p2_18, 0, sizeof(char*));
memset(&size_p2_19, 0, sizeof(long*));
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

static void int_times(int self, void* parent, void (*block)(void*)){
int i_20;
memset(&i_20, 0, sizeof(int));
    for(
    i_20=0;
    i_20<self;
    i_20++
    ){
        block(parent);
    }
}

static char* __builtin_string(char* str){
int len_21;
void* right_value0;
char* result_22;
memset(&len_21, 0, sizeof(int));
memset(&result_22, 0, sizeof(char*));
    len_21=strlen(str)+1;
    result_22=come_increment_ref_count((char**)(right_value0=(char**)come_calloc(1, sizeof(char*)*1*len_21)));
    strncpy(result_22,str,len_21);
    char* __result__ = result_22;
    result_22 = come_decrement_ref_count(result_22, 0, 1);
    return __result__;
}

static _Bool int_equals(int self, int right){
    int __result__ = self==right;
    return __result__;
}

static _Bool bool_equals(_Bool self, _Bool right){
    _Bool __result__ = self==right;
    return __result__;
}

static _Bool char_equals(char self, char right){
    char __result__ = self==right;
    return __result__;
}

static _Bool short_equals(short short self, short short right){
    short short __result__ = self==right;
    return __result__;
}

static _Bool long_equals(long self, long right){
    long __result__ = self==right;
    return __result__;
}

static _Bool stringp_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}

static _Bool charp_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}

int* funHeap(int x, int y){
void* right_value1;
int* result_23;
memset(&result_23, 0, sizeof(int*));
    result_23=come_increment_ref_count((int*)(right_value1=(int*)come_calloc(1, sizeof(int)*1)));
    *result_23=x+y;
    int* __result__ = result_23;
    result_23 = come_decrement_ref_count(result_23, 0, 1);
    return __result__;
}

int funHeap2(int* x, int* y){
    int __result__ = *x+*y;
    x = come_decrement_ref_count(x, 0, 1);
    y = come_decrement_ref_count(y, 0, 1);
    return __result__;
}

int intp_fun(int* self){
    int __result__ = *self;
    return __result__;
}

static void sDatap_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_47)));
        (*(parent->n_47))++;
}

static struct list_char* list_charp_initialize(struct list_char* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list_char* __result__ = self;
        call_finalizer(list_charp_finalize,self,0, 0, 1);
        return __result__;
}

static void list_charp_finalize(struct list_char* self){
struct list_item_char* it_48;
struct list_item_char* prev_it_49;
memset(&it_48, 0, sizeof(struct list_item_char*));
memset(&prev_it_49, 0, sizeof(struct list_item_char*));
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

static void list_item_charp_finalize(struct list_item_char* self){
                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                        self->item = come_decrement_ref_count(self->item, 0, 0);
                    }
}

static void list_charp_push_back(struct list_char* self, char* item){
void* right_value16;
struct list_item_char* litem_51;
void* right_value17;
struct list_item_char* litem_52;
void* right_value18;
struct list_item_char* litem_53;
memset(&litem_51, 0, sizeof(struct list_item_char*));
memset(&litem_52, 0, sizeof(struct list_item_char*));
memset(&litem_53, 0, sizeof(struct list_item_char*));
        if(self->len==0) {
            litem_51=(struct list_item_char*)(right_value16=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_51->prev=((void*)0);
            litem_51->next=((void*)0);
            come_decrement_ref_count(litem_51->item, 0, 0);
            litem_51->item=come_increment_ref_count(item);
            self->tail=litem_51;
            self->head=litem_51;
        }
        else if(self->len==1) {
            litem_52=(struct list_item_char*)(right_value17=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_52->prev=self->head;
            litem_52->next=((void*)0);
            come_decrement_ref_count(litem_52->item, 0, 0);
            litem_52->item=come_increment_ref_count(item);
            self->tail=litem_52;
            self->head->next=litem_52;
        }
        else {
            litem_53=(struct list_item_char*)(right_value18=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_53->prev=self->tail;
            litem_53->next=((void*)0);
            come_decrement_ref_count(litem_53->item, 0, 0);
            litem_53->item=come_increment_ref_count(item);
            self->tail->next=litem_53;
            self->tail=litem_53;
        }
        self->len++;
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list_charp_begin(struct list_char* self){
char* result_54;
memset(&result_54, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_54,0,sizeof(char*));
        char* __result__ = result_54;
        return __result__;
}

static _Bool list_charp_end(struct list_char* self){
        struct list_item_char* __result__ = self->it==((void*)0);
        return __result__;
}

static char* list_charp_next(struct list_char* self){
char* result_56;
memset(&result_56, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_56,0,sizeof(char*));
        char* __result__ = result_56;
        return __result__;
}

static struct list_int* list_intp_initialize(struct list_int* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list_int* __result__ = self;
        call_finalizer(list_intp_finalize,self,0, 0, 1);
        return __result__;
}

static void list_intp_finalize(struct list_int* self){
struct list_item_int* it_57;
struct list_item_int* prev_it_58;
memset(&it_57, 0, sizeof(struct list_item_int*));
memset(&prev_it_58, 0, sizeof(struct list_item_int*));
            it_57=self->head;
            while(it_57!=((void*)0)) {
                if(0) {
                }
                prev_it_58=it_57;
                it_57=it_57->next;
                call_finalizer(list_item_intp_finalize,prev_it_58,0, 0, 0);
            }
}

static void list_item_intp_finalize(struct list_item_int* self){
}

static void list_intp_push_back(struct list_int* self, int item){
void* right_value24;
struct list_item_int* litem_60;
void* right_value25;
struct list_item_int* litem_61;
void* right_value26;
struct list_item_int* litem_62;
memset(&litem_60, 0, sizeof(struct list_item_int*));
memset(&litem_61, 0, sizeof(struct list_item_int*));
memset(&litem_62, 0, sizeof(struct list_item_int*));
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

static int list_intp_begin(struct list_int* self){
int result_63;
memset(&result_63, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_63,0,sizeof(int));
        int __result__ = result_63;
        return __result__;
}

static _Bool list_intp_end(struct list_int* self){
        struct list_item_int* __result__ = self->it==((void*)0);
        return __result__;
}

static int list_intp_next(struct list_int* self){
int result_65;
memset(&result_65, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_65,0,sizeof(int));
        int __result__ = result_65;
        return __result__;
}

static void list_intp_each(struct list_int* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item_int* it_67;
int i_68;
_Bool end_flag_69;
memset(&it_67, 0, sizeof(struct list_item_int*));
memset(&i_68, 0, sizeof(int));
memset(&end_flag_69, 0, sizeof(_Bool));
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

void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_75)));
        (*(parent->aXL_75))=2;
}

static int list_intp_item(struct list_int* self, int position, int default_value){
struct list_item_int* it_76;
int i_77;
memset(&it_76, 0, sizeof(struct list_item_int*));
memset(&i_77, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_76=self->head;
        i_77=0;
        while(it_76!=((void*)0)) {
            if(position==i_77) {
                int __result__ = it_76->item;
                return __result__;
            }
            it_76=it_76->next;
            i_77++;
        }
        int __result__ = default_value;
        return __result__;
}

static void list_intp_insert(struct list_int* self, int position, int item){
void* right_value34;
struct list_item_int* litem_78;
void* right_value35;
struct list_item_int* litem_79;
struct list_item_int* it_80;
int i_81;
void* right_value36;
struct list_item_int* litem_82;
memset(&litem_78, 0, sizeof(struct list_item_int*));
memset(&litem_79, 0, sizeof(struct list_item_int*));
memset(&it_80, 0, sizeof(struct list_item_int*));
memset(&i_81, 0, sizeof(int));
memset(&litem_82, 0, sizeof(struct list_item_int*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list_intp_push_back(self,item);
            return;
        }
        if(position==0) {
            litem_78=(struct list_item_int*)(right_value34=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_78->prev=((void*)0);
            litem_78->next=self->head;
            litem_78->item=item;
            self->head->prev=litem_78;
            self->head=litem_78;
            self->len++;
        }
        else if(self->len==1) {
            litem_79=(struct list_item_int*)(right_value35=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_79->prev=self->head;
            litem_79->next=self->tail;
            litem_79->item=item;
            self->tail->prev=litem_79;
            self->head->next=litem_79;
            self->len++;
        }
        else {
            it_80=self->head;
            i_81=0;
            while(it_80!=((void*)0)) {
                if(position==i_81) {
                    litem_82=(struct list_item_int*)(right_value36=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
                    litem_82->prev=it_80->prev;
                    litem_82->next=it_80;
                    litem_82->item=item;
                    it_80->prev->next=litem_82;
                    it_80->prev=litem_82;
                    self->len++;
                }
                it_80=it_80->next;
                i_81++;
            }
        }
}

static void list_charp_insert(struct list_char* self, int position, char* item){
void* right_value37;
struct list_item_char* litem_83;
void* right_value38;
struct list_item_char* litem_84;
struct list_item_char* it_85;
int i_86;
void* right_value39;
struct list_item_char* litem_87;
memset(&litem_83, 0, sizeof(struct list_item_char*));
memset(&litem_84, 0, sizeof(struct list_item_char*));
memset(&it_85, 0, sizeof(struct list_item_char*));
memset(&i_86, 0, sizeof(int));
memset(&litem_87, 0, sizeof(struct list_item_char*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list_charp_push_back(self,come_increment_ref_count(item));
            return;
        }
        if(position==0) {
            litem_83=(struct list_item_char*)(right_value37=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_83->prev=((void*)0);
            litem_83->next=self->head;
            come_decrement_ref_count(litem_83->item, 0, 0);
            litem_83->item=come_increment_ref_count(item);
            self->head->prev=litem_83;
            self->head=litem_83;
            self->len++;
        }
        else if(self->len==1) {
            litem_84=(struct list_item_char*)(right_value38=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_84->prev=self->head;
            litem_84->next=self->tail;
            come_decrement_ref_count(litem_84->item, 0, 0);
            litem_84->item=come_increment_ref_count(item);
            self->tail->prev=litem_84;
            self->head->next=litem_84;
            self->len++;
        }
        else {
            it_85=self->head;
            i_86=0;
            while(it_85!=((void*)0)) {
                if(position==i_86) {
                    litem_87=(struct list_item_char*)(right_value39=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
                    litem_87->prev=it_85->prev;
                    litem_87->next=it_85;
                    come_decrement_ref_count(litem_87->item, 0, 0);
                    litem_87->item=come_increment_ref_count(item);
                    it_85->prev->next=litem_87;
                    it_85->prev=litem_87;
                    self->len++;
                }
                it_85=it_85->next;
                i_86++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list_charp_item(struct list_char* self, int position, char* default_value){
struct list_item_char* it_88;
int i_89;
memset(&it_88, 0, sizeof(struct list_item_char*));
memset(&i_89, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_88=self->head;
        i_89=0;
        while(it_88!=((void*)0)) {
            if(position==i_89) {
                char* __result__ = it_88->item;
                return __result__;
            }
            it_88=it_88->next;
            i_89++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list_charp_reset(struct list_char* self){
struct list_item_char* it_90;
struct list_item_char* prev_it_91;
memset(&it_90, 0, sizeof(struct list_item_char*));
memset(&prev_it_91, 0, sizeof(struct list_item_char*));
        it_90=self->head;
        while(it_90!=((void*)0)) {
            prev_it_91=it_90;
            it_90=it_90->next;
            call_finalizer(list_item_charp_finalize,prev_it_91,0, 0, 0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
}

static int list_charp_length(struct list_char* self){
        int __result__ = self->len;
        return __result__;
}

static void list_intp_delete(struct list_int* self, int head, int tail){
int tmp_92;
struct list_item_int* it_95;
int i_96;
struct list_item_int* prev_it_97;
struct list_item_int* it_98;
int i_99;
struct list_item_int* prev_it_100;
struct list_item_int* it_101;
struct list_item_int* head_prev_it_102;
struct list_item_int* tail_it_103;
int i_104;
struct list_item_int* prev_it_105;
memset(&tmp_92, 0, sizeof(int));
memset(&it_95, 0, sizeof(struct list_item_int*));
memset(&i_96, 0, sizeof(int));
memset(&prev_it_97, 0, sizeof(struct list_item_int*));
memset(&it_98, 0, sizeof(struct list_item_int*));
memset(&i_99, 0, sizeof(int));
memset(&prev_it_100, 0, sizeof(struct list_item_int*));
memset(&it_101, 0, sizeof(struct list_item_int*));
memset(&head_prev_it_102, 0, sizeof(struct list_item_int*));
memset(&tail_it_103, 0, sizeof(struct list_item_int*));
memset(&i_104, 0, sizeof(int));
memset(&prev_it_105, 0, sizeof(struct list_item_int*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_92=tail;
            tail=head;
            head=tmp_92;
        }
        if(head<0) {
            head=0;
        }
        if(tail>self->len) {
            tail=self->len;
        }
        if(head==tail) {
            return;
        }
        if(head==0&&tail==self->len) {
            list_intp_reset(self);
        }
        else if(head==0) {
            it_95=self->head;
            i_96=0;
            while(it_95!=((void*)0)) {
                if(i_96<tail) {
                    prev_it_97=it_95;
                    it_95=it_95->next;
                    i_96++;
                    call_finalizer(list_item_intp_finalize,prev_it_97,0, 0, 0);
                    self->len--;
                }
                else if(i_96==tail) {
                    self->head=it_95;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_95=it_95->next;
                    i_96++;
                }
            }
        }
        else if(tail==self->len) {
            it_98=self->head;
            i_99=0;
            while(it_98!=((void*)0)) {
                if(i_99==head) {
                    self->tail=it_98->prev;
                    self->tail->next=((void*)0);
                }
                if(i_99>=head) {
                    prev_it_100=it_98;
                    it_98=it_98->next;
                    i_99++;
                    call_finalizer(list_item_intp_finalize,prev_it_100,0, 0, 0);
                    self->len--;
                }
                else {
                    it_98=it_98->next;
                    i_99++;
                }
            }
        }
        else {
            it_101=self->head;
            head_prev_it_102=((void*)0);
            tail_it_103=((void*)0);
            i_104=0;
            while(it_101!=((void*)0)) {
                if(i_104==head) {
                    head_prev_it_102=it_101->prev;
                }
                if(i_104==tail) {
                    tail_it_103=it_101;
                }
                if(i_104>=head&&i_104<tail) {
                    prev_it_105=it_101;
                    it_101=it_101->next;
                    i_104++;
                    call_finalizer(list_item_intp_finalize,prev_it_105,0, 0, 0);
                    self->len--;
                }
                else {
                    it_101=it_101->next;
                    i_104++;
                }
            }
            if(head_prev_it_102!=((void*)0)) {
                head_prev_it_102->next=tail_it_103;
            }
            if(tail_it_103!=((void*)0)) {
                tail_it_103->prev=head_prev_it_102;
            }
        }
}

static void list_intp_reset(struct list_int* self){
struct list_item_int* it_93;
struct list_item_int* prev_it_94;
memset(&it_93, 0, sizeof(struct list_item_int*));
memset(&prev_it_94, 0, sizeof(struct list_item_int*));
                it_93=self->head;
                while(it_93!=((void*)0)) {
                    prev_it_94=it_93;
                    it_93=it_93->next;
                    call_finalizer(list_item_intp_finalize,prev_it_94,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_charp_replace(struct list_char* self, int position, char* item){
struct list_item_char* it_107;
int i_108;
memset(&it_107, 0, sizeof(struct list_item_char*));
memset(&i_108, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_107=self->head;
        i_108=0;
        while(it_107!=((void*)0)) {
            if(position==i_108) {
                come_decrement_ref_count(it_107->item, 0, 0);
                it_107->item=come_increment_ref_count(item);
                break;
            }
            it_107=it_107->next;
            i_108++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static _Bool list_intp_equals(struct list_int* left, struct list_int* right){
struct list_item_int* it_111;
struct list_item_int* it2_112;
memset(&it_111, 0, sizeof(struct list_item_int*));
memset(&it2_112, 0, sizeof(struct list_item_int*));
        if(left->len!=right->len) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        it_111=left->head;
        it2_112=right->head;
        while(it_111!=((void*)0)) {
            if(!int_equals(it_111->item,it2_112->item)) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_111=it_111->next;
            it2_112=it2_112->next;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static int list_intp_find(struct list_int* self, int item, int default_value){
int it2_113;
struct list_item_int* it_114;
memset(&it2_113, 0, sizeof(int));
memset(&it_114, 0, sizeof(struct list_item_int*));
        it2_113=0;
        it_114=self->head;
        while(it_114!=((void*)0)) {
            if(int_equals(it_114->item,item)) {
                int __result__ = it2_113;
                return __result__;
            }
            it2_113++;
            it_114=it_114->next;
        }
        int __result__ = default_value;
        return __result__;
}

static struct list_int* list_intp_sublist(struct list_int* self, int begin, int tail){
void* right_value53;
void* right_value54;
struct list_int* result_116;
struct list_item_int* it_117;
int i_118;
memset(&result_116, 0, sizeof(struct list_int*));
memset(&it_117, 0, sizeof(struct list_item_int*));
memset(&i_118, 0, sizeof(int));
        result_116=come_increment_ref_count((struct list_int*)(right_value54=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value53=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
        call_finalizer(list_intp_finalize,right_value53,0, 1, 0);
        if(begin<0) {
            begin+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(begin<0) {
            begin=0;
        }
        if(tail>=self->len) {
            tail=self->len;
        }
        it_117=self->head;
        i_118=0;
        while(it_117!=((void*)0)) {
            if(i_118>=begin&&i_118<tail) {
                list_intp_push_back(result_116,it_117->item);
            }
            it_117=it_117->next;
            i_118++;
        }
        struct list_int* __result__ = result_116;
        call_finalizer(list_intp_finalize,result_116,0, 0, 1);
        return __result__;
}

