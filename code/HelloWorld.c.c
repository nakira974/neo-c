typedef void* protocol_obj_t;
struct __builtin_va_list
{
    int v1;
    int v2;
    char* v3;
    char* v4;
};
typedef __builtin_va_list __buitin_va_list;
void* call_cloner(void* fun, void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* ncmemdup(void* block);
;
void* gc_ncmemdup(void* block);
;
typedef long size_t;
struct sData
{
    int a;
    int b;
};
struct sUndefinedStruct;
struct sUndefinedStruct2
{
    struct sUndefinedStruct* data;
};
struct come_anon0
{
    int a;
    int b;
};
struct come_anon1
{
    int a;
    int b;
};
struct sAnonymousStruct
{
    struct come_anon1 data;
};
static const int kEnumA=0;
static const int kEnumB=1;
static const int kEnumC=2;
static const int kEnumD=0;
static const int kEnumE=1;
static const int kEnumF=2;
static const int kEnumG=0;
static const int kEnumH=1;
static const int kEnumI=2;
int AAA;
static const int kEnumJ=0;
static const int kEnumK=1;
static const int kEnumL=2;
int BBB;
struct come_anon6
{
    int a;
    long b;
    long c;
};
struct come_anon7
{
    int a;
    long b;
    long c;
};
union uData
{
    int data1;
    long data2;
    struct come_anon7 data3;
};
union uData gUnionData;
int gGlobalArray[3];
int gGlobalArray2[3][3];
const int gGlobalArray3[3];
const int gGlobalArray4[3][2];
const int gGlobalArray5[2][3][4];
const char gGlobalString[4];
const char* gGlobalArray6[3];
const char gGlobalArray7[4];
const char gGlobalArray8[4];
typedef __builtin_va_list va_list;
struct GenericsType_int_bool
{
    int item;
    _Bool item2;
};
static const int kA=0;
static const int kB=1;
static const int kC=2;

void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
void* igc_calloc(unsigned long count, unsigned long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void unwrap_exception(char* sname, int sline, char* mem);
int puts(const char* msg);
int printf(const char* format, ...);
long strlen(const char* s);
void* calloc(long nmemb, long size);
void free(void* ptr);
int strcmp(const char* s1, const char* s2);
void exit(int status);
char* strcpy(char* dest, const char* src);
char* strncpy(char* dest, const char* src, long n);
void xassert(const char* msg, _Bool exp);
int vasprintf(char** strp, const char* fmt, __builtin_va_list ap);
static void funA();
int funB(int x, int y);
void int_show(int self);
void fun(struct GenericsType_int_bool* data);
void funX();
void normal_fun(char* a);
void funY_v1(int a, int b);
void funY_v2(int a, int b);
void funY_v3(int a, int b);
int funXY_v1(int a, int b);
int funXY_v2(int a, int b);
int funXY_v3(int a, int b);
int xxx(int a, int b);
int main();

void xassert(const char* msg, _Bool exp)
{
    (printf(msg));
    (printf("..."));
    if(exp) {
        (puts("ok"));
    }
    else {
        (puts("false"));
        (exit(2));
    }
}

static void funA()
{
    static int xxx__1=1;
    (printf("%d\n",xxx__1));
    xxx__1=xxx__1+1;
}

int funB(int x, int y)
{
        int __result_value = x+y;
    return __result_value;
}

void int_show(int self)
{
    (printf("int_show %d\n",self));
}

void fun(struct GenericsType_int_bool* data)
{
    int __tmp_variable1 = 1;
    int a__1=__tmp_variable1;
}

void funX()
{
}

void normal_fun(char* a)
{
    (puts(a));
}

void funY_v1(int a, int b)
{
    (puts("version 1"));
}

void funY_v2(int a, int b)
{
    (funY_v1(a,b));
    (puts("version 2"));
}

void funY_v3(int a, int b)
{
    (funY_v2(a,b));
    (puts("verion 3"));
    (printf("a %d b %d\n",a,b));
}

int funXY_v1(int a, int b)
{
        int __result_value = 1;
    return __result_value;
}

int funXY_v2(int a, int b)
{
        int __result_value = (funXY_v1(a,b))+1;
    return __result_value;
}

int funXY_v3(int a, int b)
{
        int __result_value = (funXY_v2(a,b))+1;
    return __result_value;
}

int xxx(int a, int b)
{
        int __result_value = a+b;
    return __result_value;
}

int main()
{
int inline_result_variable4;
int inline_result_variable5;
int inline_result_variable6;
come_gc_init();
    (printf("HELLO WORLD\n"));
    (xassert("assert test",1));
    (xassert("exp test",1<2));
    (xassert("exp2 test",2>1));
    (xassert("exp3 test",1>=1));
    (xassert("exp4 test",1<=1));
    (xassert("exp5 test",1==1));
    (xassert("exp6 test",1!=2));
    (xassert("exp7 test",1+1==2));
    (xassert("exp8 test",1-1==0));
    (xassert("exp9 test",1*2==2));
    (xassert("exp10 test",2/2==1));
    (xassert("exp11 test",3%2==1));
    int __tmp_variable2 = 1+1;
    int a__1=__tmp_variable2;
    (xassert("auto test",a__1==2));
    (xassert("long test",1+1==2));
    (xassert("auto cast test",1+1==2));
    {
        (puts("HELLO WORLD"));
    
inline_func_end_label1:
    (void)0;
}
    {
    char* _inline_msg1 = "HELLO HELLO";
        (puts(_inline_msg1));
    
inline_func_end_label2:
    (void)0;
}
    {
    int _inline_x1 = 1;
    int _inline_y1 = 2;
        (printf("%d\n",_inline_x1+_inline_y1));
    
inline_func_end_label3:
    (void)0;
}
    {
    int _inline_x1 = 1;
    int _inline_y1 = 2;
                inline_result_variable4 = _inline_x1+_inline_y1;
        goto inline_func_end_label4;
    
inline_func_end_label4:
    (void)0;
}
    (xassert("inline function test",inline_result_variable4==3));
    {
    int _inline_x1 = 1;
    int _inline_y1 = 2;
                {
        int _inline_x2 = _inline_x1;
        int _inline_y2 = _inline_y1;
                        inline_result_variable6 = _inline_x2+_inline_y2;
            goto inline_func_end_label6;
        
inline_func_end_label6:
        (void)0;
}
        inline_result_variable5 = inline_result_variable6;
        goto inline_func_end_label5;
    
inline_func_end_label5:
    (void)0;
}
    (xassert("inline function test2",inline_result_variable5==3));
    struct sData c__1;
    memset(&c__1, 0, sizeof(struct sData));
    int __tmp_store_field1 = 1;
    c__1.a=__tmp_store_field1;
        int __result_value = 0;
    return __result_value;
}

