// source head
typedef int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long int __int64_t;
typedef unsigned long int __uint64_t;
typedef char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef unsigned short int __uint_least16_t;
typedef int __int_least32_t;
typedef unsigned int __uint_least32_t;
typedef long int __int_least64_t;
typedef unsigned long int __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
struct anonymous_typeX1
{
    int __val[2];
};
typedef struct anonymous_typeX1 __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void* __timer_t;
typedef int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef long int __loff_t;
typedef char* __caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
union anonymous_typeZ3
{
unsigned int __wch;
char __wchb[4];
};
struct anonymous_typeX2
{
    int __count;
    union anonymous_typeZ3 __value;
};
typedef struct anonymous_typeX2 __mbstate_t;
struct _G_fpos_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos_t __fpos_t;
struct _G_fpos64_t
{
    long int __pos;
    struct anonymous_typeX2 __state;
};
typedef struct _G_fpos64_t __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker* _markers;
    struct _IO_FILE* _chain;
    int _fileno;
    int _flags2;
    long int _old_offset;
    unsigned short short _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long int _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    int __pad5;
    int _mode;
    char _unused2[15*sizeof(int)-4*sizeof(void*)-sizeof(int)];
};
typedef long int (*cookie_read_function_t)(void*,char*,int);
typedef long int (*cookie_write_function_t)(void*,const char*,int);
typedef int (*cookie_seek_function_t)(void*,long int*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long int (*read)(void*,char*,int);
    long int (*write)(void*,const char*,int);
    int (*seek)(void*,long int*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef __builtin_va_list va_list;
typedef long int off_t;
typedef long int off64_t;
typedef long int ssize_t;
typedef struct _G_fpos_t fpos_t;
typedef struct _G_fpos64_t fpos64_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long double _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct obstack;
struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};
typedef struct __locale_struct* __locale_t;
typedef struct __locale_struct* locale_t;
typedef unsigned int wchar_t;
struct anonymous_typeX4
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX4 div_t;
struct anonymous_typeX5
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX5 ldiv_t;
struct anonymous_typeX6
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX6 lldiv_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int u_long;
typedef long int quad_t;
typedef unsigned long int u_quad_t;
typedef struct anonymous_typeX1 fsid_t;
typedef long int loff_t;
typedef unsigned long int ino_t;
typedef unsigned long int ino64_t;
typedef unsigned long int dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned int nlink_t;
typedef unsigned int uid_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int daddr_t;
typedef char* caddr_t;
typedef int key_t;
typedef long int clock_t;
typedef int clockid_t;
typedef long int time_t;
typedef void* timer_t;
typedef unsigned int useconds_t;
typedef long int suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long int u_int64_t;
typedef int register_t;
struct anonymous_typeX7
{
    unsigned long int __val[(1024/(8*sizeof(unsigned long int)))];
};
typedef struct anonymous_typeX7 __sigset_t;
typedef struct anonymous_typeX7 sigset_t;
struct timeval
{
    long int tv_sec;
    long int tv_usec;
};
struct timespec
{
    long int tv_sec;
    long int tv_nsec;
};
typedef long int __fd_mask;
struct anonymous_typeX8
{
    long int fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX8 fd_set;
typedef long int fd_mask;
typedef int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned long int fsblkcnt64_t;
typedef unsigned long int fsfilcnt64_t;
struct anonymous_typeX10
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ9
{
unsigned int __value64;
struct anonymous_typeX10 __value32;
};
typedef union anonymous_typeZ9 __atomic_wide_counter;
struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev;
    struct __pthread_internal_list* __next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    int __spins;
    struct __pthread_internal_list __list;
};
struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;
    unsigned int __flags;
};
struct __pthread_cond_s
{
    union anonymous_typeZ9 __wseq;
    union anonymous_typeZ9 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
struct anonymous_typeX11
{
    int __data;
};
typedef struct anonymous_typeX11 __once_flag;
typedef unsigned long int pthread_t;
union anonymous_typeZ12
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ12 pthread_mutexattr_t;
union anonymous_typeZ13
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ13 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
char __size[64];
long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anonymous_typeZ14
{
struct __pthread_mutex_s __data;
char __size[48];
long int __align;
};
typedef union anonymous_typeZ14 pthread_mutex_t;
union anonymous_typeZ15
{
struct __pthread_cond_s __data;
char __size[48];
int __align;
};
typedef union anonymous_typeZ15 pthread_cond_t;
union anonymous_typeZ16
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long int __align;
};
typedef union anonymous_typeZ16 pthread_rwlock_t;
union anonymous_typeZ17
{
char __size[8];
long int __align;
};
typedef union anonymous_typeZ17 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union anonymous_typeZ18
{
char __size[32];
long int __align;
};
typedef union anonymous_typeZ18 pthread_barrier_t;
union anonymous_typeZ19
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ19 pthread_barrierattr_t;
struct random_data
{
    int* fptr;
    int* rptr;
    int* state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr;
};
struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned int __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
typedef int (*comparison_fn_t)(const void*,const void*);
typedef int (*__compar_d_fn_t)(const void*,const void*,void*);
typedef char* string;
struct buffer
{
    char* buf;
    int len;
    int size;
};
struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};
struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};
extern _Bool gComelang;
extern _Bool gGC;
struct sType;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};
struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};
struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
};
struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
};
struct sInfo;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
};
struct tuple1$1sTypeph
{
    struct sType* v1;
};
struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};
struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};
struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};
struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};
struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDummyHeap;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mNoArrayPointerNum;
    int mSizeNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mInline;
};
struct sVar;
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
};
struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
};
struct sVarTable;
struct sBlock;
struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    char* mComeHeader;
};
struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
};
struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
};
struct sVarTable;
struct list$1charp
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};
struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct sBlock
{
    struct list$1sNodeph* mNodes;
    struct sVarTable* mVarTable;
};
struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
};
struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};
struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};
struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};
struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};
struct sInfo
{
    char* p;
    char* head;
    struct buffer* source;
    char* sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    struct sFun* come_fun;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
    _Bool define_struct;
    _Bool in_typedef;
    char* output_file_name;
};
struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};
struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};
struct sForNode
{
    struct sNode* mExpressionNode;
    struct sNode* mExpressionNode2;
    struct sNode* mExpressionNode3;
    struct sBlock* mBlock;
    int sline;
    char* sname;
};
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

// header function
void* come_calloc(int count, int size);

void* come_increment_ref_count(void* mem);

void ncfree(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free);

void come_free_object(void* mem);

void* nccalloc(int nmemb, int size);

void* come_memdup(void* block);

char* __builtin_string(char* str);

void come_release_malloced_mem();

void come_heap_pool_init();

void come_heap_pool_final();

int remove(const char* __filename);

int rename(const char* __old, const char* __new);

int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);

int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);

int fclose(struct _IO_FILE* __stream);

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char anonymous_var_name1[20]);

char* tmpnam_r(char __s[20]);

char* tempnam(const char* __dir, const char* __pfx);

int fflush(struct _IO_FILE* __stream);

int fflush_unlocked(struct _IO_FILE* __stream);

int fcloseall();

struct _IO_FILE* fopen(const char* __filename, const char* __modes);

struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fopen64(const char* __filename, const char* __modes);

struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream);

struct _IO_FILE* fdopen(int __fd, const char* __modes);

struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs);

struct _IO_FILE* fmemopen(void* __s, int __len, const char* __modes);

struct _IO_FILE* open_memstream(char** __bufloc, int* __sizeloc);

void setbuf(struct _IO_FILE* __stream, char* __buf);

int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, int __n);

void setbuffer(struct _IO_FILE* __stream, char* __buf, int __size);

void setlinebuf(struct _IO_FILE* __stream);

int fprintf(struct _IO_FILE* __stream, const char* __format, ...);

int printf(const char* __format, ...);

int sprintf(char* __s, const char* __format, ...);

int vfprintf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vprintf(const char* __format, va_list __arg);

int vsprintf(char* __s, const char* __format, va_list __arg);

int snprintf(char* __s, int __maxlen, const char* __format, ...);

int vsnprintf(char* __s, int __maxlen, const char* __format, va_list __arg);

int vasprintf(char** __ptr, const char* __f, va_list __arg);

int __asprintf(char** __ptr, const char* __fmt, ...);

int asprintf(char** __ptr, const char* __fmt, ...);

int vdprintf(int __fd, const char* __fmt, va_list __arg);

int dprintf(int __fd, const char* __fmt, ...);

int fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int scanf(const char* __format, ...);

int sscanf(const char* __s, const char* __format, ...);

int __isoc99_fscanf(struct _IO_FILE* __stream, const char* __format, ...);

int __isoc99_scanf(const char* __format, ...);

int __isoc99_sscanf(const char* __s, const char* __format, ...);

int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int vscanf(const char* __format, va_list __arg);

int vsscanf(const char* __s, const char* __format, va_list __arg);

int __isoc99_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);

int __isoc99_vscanf(const char* __format, va_list __arg);

int __isoc99_vsscanf(const char* __s, const char* __format, va_list __arg);

int fgetc(struct _IO_FILE* __stream);

int getc(struct _IO_FILE* __stream);

int getchar();

int getc_unlocked(struct _IO_FILE* __stream);

int getchar_unlocked();

int fgetc_unlocked(struct _IO_FILE* __stream);

int fputc(int __c, struct _IO_FILE* __stream);

int putc(int __c, struct _IO_FILE* __stream);

int putchar(int __c);

int fputc_unlocked(int __c, struct _IO_FILE* __stream);

int putc_unlocked(int __c, struct _IO_FILE* __stream);

int putchar_unlocked(int __c);

int getw(struct _IO_FILE* __stream);

int putw(int __w, struct _IO_FILE* __stream);

char* fgets(char* __s, int __n, struct _IO_FILE* __stream);

char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);

long int __getdelim(char** __lineptr, int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getdelim(char** __lineptr, int* __n, int __delimiter, struct _IO_FILE* __stream);

long int getline(char** __lineptr, int* __n, struct _IO_FILE* __stream);

int fputs(const char* __s, struct _IO_FILE* __stream);

int puts(const char* __s);

int ungetc(int __c, struct _IO_FILE* __stream);

int fread(void* __ptr, int __size, int __n, struct _IO_FILE* __stream);

int fwrite(const void* __ptr, int __size, int __n, struct _IO_FILE* __s);

int fputs_unlocked(const char* __s, struct _IO_FILE* __stream);

int fread_unlocked(void* __ptr, int __size, int __n, struct _IO_FILE* __stream);

int fwrite_unlocked(const void* __ptr, int __size, int __n, struct _IO_FILE* __stream);

int fseek(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftell(struct _IO_FILE* __stream);

void rewind(struct _IO_FILE* __stream);

int fseeko(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello(struct _IO_FILE* __stream);

int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);

int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);

int fseeko64(struct _IO_FILE* __stream, long int __off, int __whence);

long int ftello64(struct _IO_FILE* __stream);

int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);

int fsetpos64(struct _IO_FILE* __stream, const struct _G_fpos64_t* __pos);

void clearerr(struct _IO_FILE* __stream);

int feof(struct _IO_FILE* __stream);

int ferror(struct _IO_FILE* __stream);

void clearerr_unlocked(struct _IO_FILE* __stream);

int feof_unlocked(struct _IO_FILE* __stream);

int ferror_unlocked(struct _IO_FILE* __stream);

void perror(const char* __s);

int fileno(struct _IO_FILE* __stream);

int fileno_unlocked(struct _IO_FILE* __stream);

int pclose(struct _IO_FILE* __stream);

struct _IO_FILE* popen(const char* __command, const char* __modes);

char* ctermid(char* __s);

char* cuserid(char* __s);

int obstack_printf(struct obstack* __obstack, const char* __format, ...);

int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);

void flockfile(struct _IO_FILE* __stream);

int ftrylockfile(struct _IO_FILE* __stream);

void funlockfile(struct _IO_FILE* __stream);

int __uflow(struct _IO_FILE* anonymous_var_name2);

int __overflow(struct _IO_FILE* anonymous_var_name3, int anonymous_var_name4);

void* memcpy(void* __dest, const void* __src, int __n);

void* memmove(void* __dest, const void* __src, int __n);

void* memccpy(void* __dest, const void* __src, int __c, int __n);

void* memset(void* __s, int __c, int __n);

int memcmp(const void* __s1, const void* __s2, int __n);

int __memcmpeq(const void* __s1, const void* __s2, int __n);

void* memchr(const void* __s, int __c, int __n);

void* rawmemchr(const void* __s, int __c);

void* memrchr(const void* __s, int __c, int __n);

char* strcpy(char* __dest, const char* __src);

char* strncpy(char* __dest, const char* __src, int __n);

char* strcat(char* __dest, const char* __src);

char* strncat(char* __dest, const char* __src, int __n);

int strcmp(const char* __s1, const char* __s2);

int strncmp(const char* __s1, const char* __s2, int __n);

int strcoll(const char* __s1, const char* __s2);

int strxfrm(char* __dest, const char* __src, int __n);

int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l);

int strxfrm_l(char* __dest, const char* __src, int __n, struct __locale_struct* __l);

char* strdup(const char* __s);

char* strndup(const char* __string, int __n);

char* strchr(const char* __s, int __c);

char* strrchr(const char* __s, int __c);

char* strchrnul(const char* __s, int __c);

int strcspn(const char* __s, const char* __reject);

int strspn(const char* __s, const char* __accept);

char* strpbrk(const char* __s, const char* __accept);

char* strstr(const char* __haystack, const char* __needle);

char* strtok(char* __s, const char* __delim);

char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strtok_r(char* __s, const char* __delim, char** __save_ptr);

char* strcasestr(const char* __haystack, const char* __needle);

void* memmem(const void* __haystack, int __haystacklen, const void* __needle, int __needlelen);

void* __mempcpy(void* __dest, const void* __src, int __n);

void* mempcpy(void* __dest, const void* __src, int __n);

int strlen(const char* __s);

int strnlen(const char* __string, int __maxlen);

char* strerror(int __errnum);

char* strerror_r(int __errnum, char* __buf, int __buflen);

const char* strerrordesc_np(int __err);

const char* strerrorname_np(int __err);

char* strerror_l(int __errnum, struct __locale_struct* __l);

int bcmp(const void* __s1, const void* __s2, int __n);

void bcopy(const void* __src, void* __dest, int __n);

void bzero(void* __s, int __n);

char* index(const char* __s, int __c);

char* rindex(const char* __s, int __c);

int ffs(int __i);

int ffsl(long int __l);

int ffsll(int __ll);

int strcasecmp(const char* __s1, const char* __s2);

int strncasecmp(const char* __s1, const char* __s2, int __n);

int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc);

int strncasecmp_l(const char* __s1, const char* __s2, int __n, struct __locale_struct* __loc);

void explicit_bzero(void* __s, int __n);

char* strsep(char** __stringp, const char* __delim);

char* strsignal(int __sig);

const char* sigabbrev_np(int __sig);

const char* sigdescr_np(int __sig);

char* __stpcpy(char* __dest, const char* __src);

char* stpcpy(char* __dest, const char* __src);

char* __stpncpy(char* __dest, const char* __src, int __n);

char* stpncpy(char* __dest, const char* __src, int __n);

int strverscmp(const char* __s1, const char* __s2);

char* strfry(char* __string);

void* memfrob(void* __s, int __n);

char* basename(const char* __filename);

int __ctype_get_mb_cur_max();

double atof(const char* __nptr);

int atoi(const char* __nptr);

long int atol(const char* __nptr);

int atoll(const char* __nptr);

double strtod(const char* __nptr, char** __endptr);

float strtof(const char* __nptr, char** __endptr);

long double strtold(const char* __nptr, char** __endptr);

float strtof32(const char* __nptr, char** __endptr);

double strtof64(const char* __nptr, char** __endptr);

long double strtof128(const char* __nptr, char** __endptr);

double strtof32x(const char* __nptr, char** __endptr);

long double strtof64x(const char* __nptr, char** __endptr);

long int strtol(const char* __nptr, char** __endptr, int __base);

unsigned long int strtoul(const char* __nptr, char** __endptr, int __base);

int strtoq(const char* __nptr, char** __endptr, int __base);

unsigned int strtouq(const char* __nptr, char** __endptr, int __base);

int strtoll(const char* __nptr, char** __endptr, int __base);

unsigned int strtoull(const char* __nptr, char** __endptr, int __base);

int strfromd(char* __dest, int __size, const char* __format, double __f);

int strfromf(char* __dest, int __size, const char* __format, float __f);

int strfroml(char* __dest, int __size, const char* __format, long double __f);

int strfromf32(char* __dest, int __size, const char* __format, float __f);

int strfromf64(char* __dest, int __size, const char* __format, double __f);

int strfromf128(char* __dest, int __size, const char* __format, long double __f);

int strfromf32x(char* __dest, int __size, const char* __format, double __f);

int strfromf64x(char* __dest, int __size, const char* __format, long double __f);

long int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof128_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

long double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);

char* l64a(long int __n);

long int a64l(const char* __s);

int select(int __nfds, struct anonymous_typeX8* __readfds, struct anonymous_typeX8* __writefds, struct anonymous_typeX8* __exceptfds, struct timeval* __timeout);

int pselect(int __nfds, struct anonymous_typeX8* __readfds, struct anonymous_typeX8* __writefds, struct anonymous_typeX8* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX7* __sigmask);

long int random();

void srandom(unsigned int __seed);

char* initstate(unsigned int __seed, char* __statebuf, int __statelen);

char* setstate(char* __statebuf);

int random_r(struct random_data* __buf, int* __result);

int srandom_r(unsigned int __seed, struct random_data* __buf);

int initstate_r(unsigned int __seed, char* __statebuf, int __statelen, struct random_data* __buf);

int setstate_r(char* __statebuf, struct random_data* __buf);

int rand();

void srand(unsigned int __seed);

int rand_r(unsigned int* __seed);

double drand48();

double erand48(unsigned short int __xsubi[3]);

long int lrand48();

long int nrand48(unsigned short int __xsubi[3]);

long int mrand48();

long int jrand48(unsigned short int __xsubi[3]);

void srand48(long int __seedval);

unsigned short int* seed48(unsigned short int __seed16v[3]);

void lcong48(unsigned short int __param[7]);

int drand48_r(struct drand48_data* __buffer, double* __result);

int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, double* __result);

int lrand48_r(struct drand48_data* __buffer, long int* __result);

int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int mrand48_r(struct drand48_data* __buffer, long int* __result);

int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int srand48_r(long int __seedval, struct drand48_data* __buffer);

int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer);

int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer);

unsigned int arc4random();

void arc4random_buf(void* __buf, int __size);

unsigned int arc4random_uniform(unsigned int __upper_bound);

void* malloc(int __size);

void* calloc(int __nmemb, int __size);

void* realloc(void* __ptr, int __size);

void free(void* __ptr);

void* reallocarray(void* __ptr, int __nmemb, int __size);

void* alloca(int __size);

void* valloc(int __size);

int posix_memalign(void** __memptr, int __alignment, int __size);

void* aligned_alloc(int __alignment, int __size);

void abort();

int atexit(void (*__func)());

int at_quick_exit(void (*__func)());

int on_exit(void (*__func)(int,void*), void* __arg);

void exit(int __status);

void quick_exit(int __status);

void _Exit(int __status);

char* getenv(const char* __name);

char* secure_getenv(const char* __name);

int putenv(char* __string);

int setenv(const char* __name, const char* __value, int __replace);

int unsetenv(const char* __name);

int clearenv();

char* mktemp(char* __template);

int mkstemp(char* __template);

int mkstemp64(char* __template);

int mkstemps(char* __template, int __suffixlen);

int mkstemps64(char* __template, int __suffixlen);

char* mkdtemp(char* __template);

int mkostemp(char* __template, int __flags);

int mkostemp64(char* __template, int __flags);

int mkostemps(char* __template, int __suffixlen, int __flags);

int mkostemps64(char* __template, int __suffixlen, int __flags);

int system(const char* __command);

char* canonicalize_file_name(const char* __name);

char* realpath(const char* __name, char* __resolved);

void* bsearch(const void* __key, const void* __base, int __nmemb, int __size, int (*__compar)(const void*,const void*));

void qsort(void* __base, int __nmemb, int __size, int (*__compar)(const void*,const void*));

void qsort_r(void* __base, int __nmemb, int __size, int (*__compar)(const void*,const void*,void*), void* __arg);

int abs(int __x);

long int labs(long int __x);

int llabs(int __x);

struct anonymous_typeX4 div(int __numer, int __denom);

struct anonymous_typeX5 ldiv(long int __numer, long int __denom);

struct anonymous_typeX6 lldiv(int __numer, int __denom);

char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);

char* gcvt(double __value, int __ndigit, char* __buf);

char* qecvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qfcvt(long double __value, int __ndigit, int* __decpt, int* __sign);

char* qgcvt(long double __value, int __ndigit, char* __buf);

int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, int __len);

int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, int __len);

int qecvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, int __len);

int qfcvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, int __len);

int mblen(const char* __s, int __n);

int mbtowc(unsigned int* __pwc, const char* __s, int __n);

int wctomb(char* __s, unsigned int __wchar);

int mbstowcs(unsigned int* __pwcs, const char* __s, int __n);

int wcstombs(char* __s, const unsigned int* __pwcs, int __n);

int rpmatch(const char* __response);

int getsubopt(char** __optionp, const char** __tokens, char** __valuep);

int posix_openpt(int __oflag);

int grantpt(int __fd);

int unlockpt(int __fd);

char* ptsname(int __fd);

int ptsname_r(int __fd, char* __buf, int __buflen);

int getpt();

int getloadavg(double* __loadavg, int __nelem);

char* dirname(char* __path);

char* __xpg_basename(char* __path);

long int __sysconf(int __name);

void xassert(char* msg, _Bool test);

void* come_print_ref_count(void* mem);

void int_times(int self, void* parent, void (*block)(void*));

_Bool int_equals(int self, int right);

_Bool bool_equals(_Bool self, _Bool right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool string_equals(char* self, char* right);

_Bool charp_equals(char* self, char* right);

_Bool string_operator_equals(char* self, char* right);

_Bool charp_operator_equals(char* self, char* right);

_Bool string_operator_not_equals(char* self, char* right);

_Bool charp_operator_not_equals(char* self, char* right);

char* charp_operator_add(char* self, char* right);

char* string_operator_add(char* self, char* right);

unsigned int int_get_hash_key(int value);

unsigned int bool_get_hash_key(_Bool value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

int int_clone(int self);

char* charp_clone(char* self);

char* string_clone(char* self);

int long_clone(long self);

short int short_clone(short short self);

double double_clone(double self);

char char_clone(char self);

float float_clone(float self);

void buffer_finalize(struct buffer* self);

struct buffer* buffer_initialize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_append(struct buffer* self, char* mem, int size);

void buffer_append_char(struct buffer* self, char c);

void buffer_append_str(struct buffer* self, char* str);

void buffer_append_nullterminated_str(struct buffer* self, char* str);

void buffer_append_int(struct buffer* self, int value);

void buffer_append_long(struct buffer* self, long value);

void buffer_append_short(struct buffer* self, short short value);

void buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

void FILE_fclose(struct _IO_FILE* f);

char* FILE_read(struct _IO_FILE* f);

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

char* string_write(char* self, char* file_name, _Bool append);

char* charp_write(char* self, char* file_name, _Bool append);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* string_chomp(char* str);

char* charp_chomp(char* str);

char* xbasename(char* path);

char* xsprintf(char* msg, ...);

char* xextname(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xrealpath(char* path);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

char* string_to_string(char* self);

void bool_expect(_Bool self, void* parent, void (*block)(void*));

void bool_catch(_Bool self, void* parent, void (*block)(void*));

char* charp_read(char* file_name);

char* string_read(char* file_name);

_Bool xiswascii(unsigned int c);

char* buffer_to_string(struct buffer* self);

int come_main_v1(int argc, char** argv);

int come_main_v2(int argc, char** argv);

void come_init_v2();

void come_final_v2();

void err_msg(struct sInfo* info, char* msg, ...);

int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, struct sInfo* info, _Bool heap);

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

void sVarTable_finalize(struct sVarTable* self);

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_);

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, struct sInfo* info);

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, struct sInfo* info, _Bool no_pointer);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

void come_init_v3();

void come_final_v3();

char* header_function(struct sFun* fun, struct sInfo* info);

int transpile_v3(struct sInfo* info);

_Bool output_source_file_v3(struct sInfo* info);

void show_type(struct sType* type, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void add_last_code_to_source(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source_without_semicolon(struct sInfo* info);

void dec_stack_ptr(int value, struct sInfo* info);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

char* make_define_var(struct sType* type, char* name, struct sInfo* info, _Bool in_header);

char* make_come_define_var(struct sType* type, char* name, struct sInfo* info);

void transpiler_clear_last_code(struct sInfo* info);

_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info);

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

void free_right_value_objects(struct sInfo* info);

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

_Bool is_right_values(int right_value_num, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

void remove_object_from_right_values(int right_value_num, struct sInfo* info);

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table);

void arrange_stack(struct sInfo* info, int top);

struct sNode* parse_function(struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sForNode* sForNode_initialize(struct sForNode* self, struct sNode* expression_node, struct sNode* expression_node2, struct sNode* expression_node3, struct sBlock* block, struct sInfo* info);

static struct sNode* sNodep_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVarp_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static void list$1charpp_remove(struct list$1charp* self, char* item);
static void list$1charpp_delete(struct list$1charp* self, int head, int tail);
static void list$1charpp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void list$1charpp_push_back(struct list$1charp* self, char* item);
static void sVar_finalize(struct sVar* self);
static struct sVar* sVarp_clone(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self);
static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_push_back2(struct list$1charph* self, char* item);
static void sForNode_finalize(struct sForNode* self);
_Bool sForNode_terminated();

_Bool sForNode_compile(struct sForNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
int sForNode_sline(struct sForNode* self, struct sInfo* info);

char* sForNode_sname(struct sForNode* self, struct sInfo* info);

static struct sForNode* sForNode_clone(struct sForNode* self);
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
    unsigned short int __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    come_release_malloced_mem();
    return __result1__;
come_release_malloced_mem();
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    unsigned int __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    come_release_malloced_mem();
    return __result2__;
come_release_malloced_mem();
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
    unsigned long int __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    come_release_malloced_mem();
    return __result3__;
come_release_malloced_mem();
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
    unsigned short int __result4__ = __x;
    come_release_malloced_mem();
    return __result4__;
come_release_malloced_mem();
}
static inline unsigned int __uint32_identity(unsigned int __x){
    unsigned int __result5__ = __x;
    come_release_malloced_mem();
    return __result5__;
come_release_malloced_mem();
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
    unsigned long int __result6__ = __x;
    come_release_malloced_mem();
    return __result6__;
come_release_malloced_mem();
}

// body function






struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info){
struct sNode* expression_node_86;
void* right_value67;
struct sNode* __dec_obj33;
struct sNode* expression_node2_87;
void* right_value68;
struct sNode* __dec_obj34;
struct sNode* expression_node3_88;
void* right_value69;
struct sNode* __dec_obj35;
void* right_value70;
struct sBlock* block_89;
void* right_value71;
void* right_value72;
struct sNode* _inf_value1;
struct sForNode* _inf_obj_value1;
void* right_value79;
void* right_value80;
memset(&expression_node_86, 0, sizeof(struct sNode*)); /* bbb */
memset(&right_value67, 0, sizeof(void*));
memset(&expression_node2_87, 0, sizeof(struct sNode*)); /* bbb */
memset(&right_value68, 0, sizeof(void*));
memset(&expression_node3_88, 0, sizeof(struct sNode*)); /* bbb */
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&block_89, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
    if(charp_operator_equals(buf,"for")) {
        expected_next_character(40,info);
        parse_sharp_v5(info);
        if(*info->p==59) {
            expression_node_86=((void*)0);
        }
        else {
            __dec_obj33=expression_node_86;
            expression_node_86=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=expression_v13(info))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0); }
            if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0); } 
        }
        parse_sharp_v5(info);
        expected_next_character(59,info);
        parse_sharp_v5(info);
        if(*info->p==59) {
            expression_node2_87=((void*)0);
        }
        else {
            __dec_obj34=expression_node2_87;
            expression_node2_87=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=expression_v13(info))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0); }
            if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0); } 
        }
        parse_sharp_v5(info);
        expected_next_character(59,info);
        parse_sharp_v5(info);
        if(*info->p==41) {
            expression_node3_88=((void*)0);
        }
        else {
            __dec_obj35=expression_node3_88;
            expression_node3_88=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=expression_v13(info))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0); }
            if(right_value69) { right_value69 = come_decrement_ref_count(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0); } 
        }
        parse_sharp_v5(info);
        expected_next_character(41,info);
        parse_sharp_v5(info);
        block_89=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value70=parse_block(info,(_Bool)0))));
        if(right_value70) { come_call_finalizer(sBlock_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value1=come_increment_ref_count(((struct sForNode*)(right_value72=sForNode_initialize((struct sForNode*)come_increment_ref_count(((struct sForNode*)(right_value71=(struct sForNode*)come_calloc(1, sizeof(struct sForNode)*(1))))),(struct sNode*)come_increment_ref_count(expression_node_86),(struct sNode*)come_increment_ref_count(expression_node2_87),(struct sNode*)come_increment_ref_count(expression_node3_88),block_89,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=sForNode_finalize;
        _inf_value1->clone=sForNode_clone;
        _inf_value1->compile=sForNode_compile;
        _inf_value1->sline=sForNode_sline;
        _inf_value1->sname=sForNode_sname;
        _inf_value1->terminated=sForNode_terminated;
        struct sNode* __result56__ = ((struct sNode*)(right_value79=_inf_value1));
        if(expression_node_86) { expression_node_86 = come_decrement_ref_count(expression_node_86, ((struct sNode*)expression_node_86)->finalize, ((struct sNode*)expression_node_86)->_protocol_obj, 0, 0); } 
        if(expression_node2_87) { expression_node2_87 = come_decrement_ref_count(expression_node2_87, ((struct sNode*)expression_node2_87)->finalize, ((struct sNode*)expression_node2_87)->_protocol_obj, 0, 0); } 
        if(expression_node3_88) { expression_node3_88 = come_decrement_ref_count(expression_node3_88, ((struct sNode*)expression_node3_88)->finalize, ((struct sNode*)expression_node3_88)->_protocol_obj, 0, 0); } 
        if(block_89) { come_call_finalizer(sBlock_finalize,block_89, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value71) { come_call_finalizer(sForNode_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value72) { come_call_finalizer(sForNode_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result56__;
    }
    struct sNode* __result57__ = ((struct sNode*)(right_value80=string_node_v10(buf,head,head_sline,info)));
    come_release_malloced_mem();
    return __result57__;
come_release_malloced_mem();
}

struct sForNode* sForNode_initialize(struct sForNode* self, struct sNode* expression_node, struct sNode* expression_node2, struct sNode* expression_node3, struct sBlock* block, struct sInfo* info){
void* right_value0;
char* __dec_obj1;
void* right_value2;
struct sNode* __dec_obj2;
void* right_value3;
struct sNode* __dec_obj3;
void* right_value4;
struct sNode* __dec_obj4;
void* right_value60;
struct sBlock* __dec_obj30;
memset(&right_value0, 0, sizeof(void*));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj1=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(info->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    if(expression_node) {
        __dec_obj2=self->mExpressionNode;
        self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value2=sNodep_clone(expression_node))));
        if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0); }
        if(right_value2) { right_value2 = come_decrement_ref_count(right_value2, ((struct sNode*)right_value2)->finalize, ((struct sNode*)right_value2)->_protocol_obj, 1, 0); } 
    }
    else {
        self->mExpressionNode=((void*)0);
    }
    if(expression_node2) {
        __dec_obj3=self->mExpressionNode2;
        self->mExpressionNode2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value3=sNodep_clone(expression_node2))));
        if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, ((struct sNode*)__dec_obj3)->finalize, ((struct sNode*)__dec_obj3)->_protocol_obj, 0,0); }
        if(right_value3) { right_value3 = come_decrement_ref_count(right_value3, ((struct sNode*)right_value3)->finalize, ((struct sNode*)right_value3)->_protocol_obj, 1, 0); } 
    }
    else {
        self->mExpressionNode2=((void*)0);
    }
    if(expression_node3) {
        __dec_obj4=self->mExpressionNode3;
        self->mExpressionNode3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value4=sNodep_clone(expression_node3))));
        if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, ((struct sNode*)__dec_obj4)->finalize, ((struct sNode*)__dec_obj4)->_protocol_obj, 0,0); }
        if(right_value4) { right_value4 = come_decrement_ref_count(right_value4, ((struct sNode*)right_value4)->finalize, ((struct sNode*)right_value4)->_protocol_obj, 1, 0); } 
    }
    else {
        self->mExpressionNode3=((void*)0);
    }
    __dec_obj30=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value60=sBlock_clone(block))));
    if(__dec_obj30) { come_call_finalizer(sBlock_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value60) { come_call_finalizer(sBlock_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
    struct sForNode* __result46__ = self;
    if(self) { come_call_finalizer(sForNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(expression_node) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1); } 
    if(expression_node2) { expression_node2 = come_decrement_ref_count(expression_node2, ((struct sNode*)expression_node2)->finalize, ((struct sNode*)expression_node2)->_protocol_obj, 0, 1); } 
    if(expression_node3) { expression_node3 = come_decrement_ref_count(expression_node3, ((struct sNode*)expression_node3)->finalize, ((struct sNode*)expression_node3)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result46__;
come_release_malloced_mem();
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value1;
struct sNode* result_0;
memset(&right_value1, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sNode*)); /* ddd */
            if(self==(void*)0) {
                struct sNode* __result7__ = (void*)0;
                come_release_malloced_mem();
                return __result7__;
            }
            result_0=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
            if(right_value1) { right_value1 = come_decrement_ref_count(right_value1, ((struct sNode*)right_value1)->finalize, ((struct sNode*)right_value1)->_protocol_obj, 1, 0); } 
            if(self!=((void*)0)&&self->clone!=((void*)0)) {
                result_0->_protocol_obj=self->clone(self->_protocol_obj);
            }
            if(self!=((void*)0)) {
                result_0->finalize=self->finalize;
            }
            if(self!=((void*)0)) {
                result_0->clone=self->clone;
            }
            if(self!=((void*)0)) {
                result_0->compile=self->compile;
            }
            if(self!=((void*)0)) {
                result_0->sline=self->sline;
            }
            if(self!=((void*)0)) {
                result_0->sname=self->sname;
            }
            if(self!=((void*)0)) {
                result_0->terminated=self->terminated;
            }
            struct sNode* __result8__ = result_0;
            if(result_0) { result_0 = come_decrement_ref_count(result_0, ((struct sNode*)result_0)->finalize, ((struct sNode*)result_0)->_protocol_obj, 0, 1); } 
            come_release_malloced_mem();
            return __result8__;
        come_release_malloced_mem();
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* right_value5;
struct sBlock* result_1;
void* right_value12;
struct list$1sNodeph* __dec_obj8;
void* right_value59;
struct sVarTable* __dec_obj29;
memset(&right_value5, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value12, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sBlock* __result9__ = (void*)0;
            come_release_malloced_mem();
            return __result9__;
        }
        result_1=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value5=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1)))));
        if(right_value5) { come_call_finalizer(sBlock_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
            __dec_obj8=result_1->mNodes;
            result_1->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value12=list$1sNodephp_clone(self->mNodes))));
            if(__dec_obj8) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value12) { come_call_finalizer(list$1sNodephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
            __dec_obj29=result_1->mVarTable;
            result_1->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value59=sVarTable_clone(self->mVarTable))));
            if(__dec_obj29) { come_call_finalizer(sVarTable_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value59) { come_call_finalizer(sVarTable_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
        }
        struct sBlock* __result45__ = result_1;
        if(result_1) { come_call_finalizer(sBlock_finalize,result_1, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result45__;
    come_release_malloced_mem();
}

static void sBlock_finalize(struct sBlock* self){
            if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                if(self->mNodes) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                if(self->mVarTable) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0); }
            }
        come_release_malloced_mem();
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_2;
struct list_item$1sNodeph* prev_it_3;
memset(&it_2, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&prev_it_3, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                    it_2=self->head;
                    while(it_2!=((void*)0)) {
                        if(1) {
                            if(it_2->item) { it_2->item = come_decrement_ref_count(it_2->item, ((struct sNode*)it_2->item)->finalize, ((struct sNode*)it_2->item)->_protocol_obj, 0, 0); } 
                        }
                        prev_it_3=it_2;
                        it_2=it_2->next;
                        come_free_object(prev_it_3);
                    }
                come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value6;
void* right_value7;
struct list$1sNodeph* result_4;
struct list_item$1sNodeph* it_5;
void* right_value11;
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_5, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value11, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sNodeph* __result10__ = ((void*)0);
                    come_release_malloced_mem();
                    return __result10__;
                }
                result_4=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value7=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value6=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                if(right_value7) { come_call_finalizer(list$1sNodephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0); }
                it_5=self->head;
                while(it_5!=((void*)0)) {
                    list$1sNodephp_push_back2(result_4,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=sNodep_clone(it_5->item)))));
                    if(right_value11) { right_value11 = come_decrement_ref_count(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0); } 
                    it_5=it_5->next;
                }
                struct list$1sNodeph* __result12__ = result_4;
                if(result_4) { come_call_finalizer(list$1sNodephp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result12__;
            come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sNodeph* __result11__ = self;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result11__;
                come_release_malloced_mem();
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value8;
struct list_item$1sNodeph* litem_6;
struct sNode* __dec_obj5;
void* right_value9;
struct list_item$1sNodeph* litem_7;
struct sNode* __dec_obj6;
void* right_value10;
struct list_item$1sNodeph* litem_8;
struct sNode* __dec_obj7;
memset(&right_value8, 0, sizeof(void*));
memset(&litem_6, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value9, 0, sizeof(void*));
memset(&litem_7, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value10, 0, sizeof(void*));
memset(&litem_8, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                        if(self->len==0) {
                            litem_6=((struct list_item$1sNodeph*)(right_value8=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_6->prev=((void*)0);
                            litem_6->next=((void*)0);
                            __dec_obj5=litem_6->item;
                            litem_6->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, ((struct sNode*)__dec_obj5)->finalize, ((struct sNode*)__dec_obj5)->_protocol_obj, 0,0); }
                            self->tail=litem_6;
                            self->head=litem_6;
                        }
                        else if(self->len==1) {
                            litem_7=((struct list_item$1sNodeph*)(right_value9=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_7->prev=self->head;
                            litem_7->next=((void*)0);
                            __dec_obj6=litem_7->item;
                            litem_7->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, ((struct sNode*)__dec_obj6)->finalize, ((struct sNode*)__dec_obj6)->_protocol_obj, 0,0); }
                            self->tail=litem_7;
                            self->head->next=litem_7;
                        }
                        else {
                            litem_8=((struct list_item$1sNodeph*)(right_value10=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_8->prev=self->tail;
                            litem_8->next=((void*)0);
                            __dec_obj7=litem_8->item;
                            litem_8->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0); }
                            self->tail->next=litem_8;
                            self->tail=litem_8;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
                    come_release_malloced_mem();
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* right_value13;
struct sVarTable* result_9;
void* right_value58;
struct map$2charphsVarph* __dec_obj28;
memset(&right_value13, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&right_value58, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sVarTable* __result13__ = (void*)0;
                    come_release_malloced_mem();
                    return __result13__;
                }
                result_9=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value13=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1)))));
                if(right_value13) { come_call_finalizer(sVarTable_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                    __dec_obj28=result_9->mVars;
                    result_9->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value58=map$2charphsVarphp_clone(self->mVars))));
                    if(__dec_obj28) { come_call_finalizer(map$2charphsVarphp_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value58) { come_call_finalizer(map$2charphsVarphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_9->mGlobal=self->mGlobal;
                }
                if(self!=((void*)0)) {
                    result_9->mParent=self->mParent;
                }
                if(self!=((void*)0)) {
                    result_9->mID=self->mID;
                }
                struct sVarTable* __result44__ = result_9;
                if(result_9) { come_call_finalizer(sVarTable_finalize,result_9, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result44__;
            come_release_malloced_mem();
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* right_value14;
void* right_value20;
struct map$2charphsVarph* result_19;
char* it_21;
struct sVar* default_value_23;
struct sVar* it2_26;
void* right_value27;
void* right_value28;
void* right_value56;
void* right_value57;
memset(&right_value14, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct map$2charphsVarph*)); /* ddd */
memset(&it_21, 0, sizeof(char*)); /* ddd */
memset(&default_value_23, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_26, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct map$2charphsVarph* __result14__ = ((void*)0);
                            come_release_malloced_mem();
                            return __result14__;
                        }
                        result_19=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value20=map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value14=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1)))))))));
                        if(right_value20) { come_call_finalizer(map$2charphsVarphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0); }
                        for(
                        it_21=map$2charphsVarphp_begin(self);
                        !map$2charphsVarphp_end(self);
                        it_21=map$2charphsVarphp_next(self)
                        ){
                            it2_26=map$2charphsVarphp_at(self,it_21,default_value_23);
                            if(1&&!1) {
                                map$2charphsVarphp_insert2(result_19,(char*)come_increment_ref_count(((char*)(right_value27=charp_clone(it_21)))),it2_26);
                                if(right_value27) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0); }
                            }
                            else if(1&&1) {
                                map$2charphsVarphp_insert2(result_19,(char*)come_increment_ref_count(((char*)(right_value28=charp_clone(it_21)))),(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value56=sVarp_clone(it2_26)))));
                                if(right_value28) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0); }
                                if(right_value56) { come_call_finalizer(sVarp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            else if(!1&&1) {
                                map$2charphsVarphp_insert2(result_19,it_21,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value57=sVarp_clone(it2_26)))));
                                if(right_value57) { come_call_finalizer(sVarp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            else if(!1&&!1) {
                                map$2charphsVarphp_insert2(result_19,it_21,it2_26);
                            }
                        }
                        struct map$2charphsVarph* __result43__ = result_19;
                        if(result_19) { come_call_finalizer(map$2charphsVarphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result43__;
                    come_release_malloced_mem();
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* right_value15;
void* right_value16;
void* right_value17;
int i_10;
void* right_value18;
void* right_value19;
struct list$1charp* __dec_obj9;
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&i_10, 0, sizeof(int)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
                            self->keys=((char**)(right_value15=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
                            self->items=((struct sVar**)(right_value16=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)))));
                            self->item_existance=((_Bool*)(right_value17=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
                            for(
                            i_10=0;
                            i_10<128;
                            i_10++
                            ){
                                self->item_existance[i_10]=(_Bool)0;
                            }
                            self->size=128;
                            self->len=0;
                            __dec_obj9=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value19=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value18=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
                            if(__dec_obj9) { come_call_finalizer(list$1charpp_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value19) { come_call_finalizer(list$1charpp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0); }
                            self->it=0;
                            struct map$2charphsVarph* __result16__ = self;
                            if(self) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            come_release_malloced_mem();
                            return __result16__;
                        come_release_malloced_mem();
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
                                self->head=((void*)0);
                                self->tail=((void*)0);
                                self->len=0;
                                struct list$1charp* __result15__ = self;
                                if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                                come_release_malloced_mem();
                                return __result15__;
                            come_release_malloced_mem();
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_11;
struct list_item$1charp* prev_it_12;
memset(&it_11, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_12, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                    it_11=self->head;
                                    while(it_11!=((void*)0)) {
                                        if(0) {
                                            if(it_11->item) { it_11->item = come_decrement_ref_count(it_11->item, (void*)0, (void*)0, 0, 0); }
                                        }
                                        prev_it_12=it_11;
                                        it_11=it_11->next;
                                        come_free_object(prev_it_12);
                                    }
                                come_release_malloced_mem();
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_13;
int i_18;
memset(&i_13, 0, sizeof(int)); /* ddd */
memset(&i_18, 0, sizeof(int)); /* ddd */
                                for(
                                i_13=0;
                                i_13<self->size;
                                i_13++
                                ){
                                    if(self->item_existance[i_13]) {
                                        if(1) {
                                            if(self->items[i_13]) { come_call_finalizer(sVarp_finalize,self->items[i_13], (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                    }
                                }
                                come_free_object((char*)self->items);
                                for(
                                i_18=0;
                                i_18<self->size;
                                i_18++
                                ){
                                    if(self->item_existance[i_18]) {
                                        if(1) {
                                            if(self->keys[i_18]) { self->keys[i_18] = come_decrement_ref_count(self->keys[i_18], (void*)0, (void*)0, 0, 0); }
                                        }
                                    }
                                }
                                come_free_object((char*)self->keys);
                                if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
                                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                            come_release_malloced_mem();
}

static void sVarp_finalize(struct sVar* self){
                                                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                    if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                                                }
                                                if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                                    if(self->mCValueName) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0); }
                                                }
                                                if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                                    if(self->mType) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                            come_release_malloced_mem();
}

static void sType_finalize(struct sType* self){
                                                        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                                                            if(self->mNoSolvedGenericsType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                                                            if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0); }
                                                        }
                                                        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                                                            if(self->mGenericsTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                                                            if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                                            if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                                            if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                                            if(self->mResultType) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                                                            if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0); }
                                                        }
                                                    come_release_malloced_mem();
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
                                                                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                                    if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                                }
                                                            come_release_malloced_mem();
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_14;
struct list_item$1sTypeph* prev_it_15;
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&prev_it_15, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                                                                it_14=self->head;
                                                                while(it_14!=((void*)0)) {
                                                                    if(1) {
                                                                        if(it_14->item) { come_call_finalizer(sType_finalize,it_14->item, (void*)0, (void*)0, 0, 0, 0); }
                                                                    }
                                                                    prev_it_15=it_14;
                                                                    it_14=it_14->next;
                                                                    come_free_object(prev_it_15);
                                                                }
                                                            come_release_malloced_mem();
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_16;
struct list_item$1charph* prev_it_17;
memset(&it_16, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&prev_it_17, 0, sizeof(struct list_item$1charph*)); /* ddd */
                                                                it_16=self->head;
                                                                while(it_16!=((void*)0)) {
                                                                    if(1) {
                                                                        if(it_16->item) { it_16->item = come_decrement_ref_count(it_16->item, (void*)0, (void*)0, 0, 0); }
                                                                    }
                                                                    prev_it_17=it_16;
                                                                    it_16=it_16->next;
                                                                    come_free_object(prev_it_17);
                                                                }
                                                            come_release_malloced_mem();
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
char* result_20;
memset(&result_20, 0, sizeof(char*)); /* bbb */
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                char* __result17__ = self->key_list->it->item;
                                come_release_malloced_mem();
                                return __result17__;
                            }
                            memset(&result_20,0,sizeof(char*));
                            char* __result18__ = result_20;
                            come_release_malloced_mem();
                            return __result18__;
                        come_release_malloced_mem();
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
                            _Bool __result19__ = self->key_list->it==((void*)0);
                            come_release_malloced_mem();
                            return __result19__;
                        come_release_malloced_mem();
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
char* result_22;
memset(&result_22, 0, sizeof(char*)); /* bbb */
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                char* __result20__ = self->key_list->it->item;
                                come_release_malloced_mem();
                                return __result20__;
                            }
                            memset(&result_22,0,sizeof(char*));
                            char* __result21__ = result_22;
                            come_release_malloced_mem();
                            return __result21__;
                        come_release_malloced_mem();
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
int hash_24;
int it_25;
memset(&hash_24, 0, sizeof(int)); /* ddd */
memset(&it_25, 0, sizeof(int)); /* ddd */
                                hash_24=string_get_hash_key(((char*)key))%self->size;
                                it_25=hash_24;
                                while((_Bool)1) {
                                    if(self->item_existance[it_25]) {
                                        if(charp_equals(self->keys[it_25],key)) {
                                            struct sVar* __result22__ = self->items[it_25];
                                            come_release_malloced_mem();
                                            return __result22__;
                                        }
                                        it_25++;
                                        if(it_25>=self->size) {
                                            it_25=0;
                                        }
                                        else if(it_25==hash_24) {
                                            struct sVar* __result23__ = default_value;
                                            come_release_malloced_mem();
                                            return __result23__;
                                        }
                                    }
                                    else {
                                        struct sVar* __result24__ = default_value;
                                        come_release_malloced_mem();
                                        return __result24__;
                                    }
                                }
                                struct sVar* __result25__ = default_value;
                                come_release_malloced_mem();
                                return __result25__;
                            come_release_malloced_mem();
}

static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
int hash_38;
int it_39;
_Bool same_key_exist_56;
char* it2_58;
memset(&hash_38, 0, sizeof(int)); /* ddd */
memset(&it_39, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_56, 0, sizeof(_Bool)); /* ddd */
memset(&it2_58, 0, sizeof(char*)); /* ddd */
                                    if(self->len*2>=self->size) {
                                        map$2charphsVarphp_rehash(self);
                                    }
                                    hash_38=string_get_hash_key(key)%self->size;
                                    it_39=hash_38;
                                    while((_Bool)1) {
                                        if(self->item_existance[it_39]) {
                                            if(charp_equals(self->keys[it_39],key)) {
                                                if(1) {
                                                    if(self->keys[it_39]) { self->keys[it_39] = come_decrement_ref_count(self->keys[it_39], (void*)0, (void*)0, 0, 0); }
                                                    list$1charpp_remove(self->key_list,self->keys[it_39]);
                                                    self->keys[it_39]=(char*)come_increment_ref_count(key);
                                                }
                                                else {
                                                    list$1charpp_remove(self->key_list,self->keys[it_39]);
                                                    self->keys[it_39]=key;
                                                }
                                                if(1) {
                                                    if(self->items[it_39]) { come_call_finalizer(sVarp_finalize,self->items[it_39], (void*)0, (void*)0, 0, 0, 0); }
                                                    self->items[it_39]=(struct sVar*)come_increment_ref_count(item);
                                                }
                                                else {
                                                    self->items[it_39]=item;
                                                }
                                                break;
                                            }
                                            it_39++;
                                            if(it_39>=self->size) {
                                                it_39=0;
                                            }
                                            else if(it_39==hash_38) {
                                                printf("unexpected error in map.insert\n");
                                                exit(2);
                                            }
                                        }
                                        else {
                                            self->item_existance[it_39]=(_Bool)1;
                                            if(1) {
                                                self->keys[it_39]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                self->keys[it_39]=key;
                                            }
                                            if(1) {
                                                self->items[it_39]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_39]=item;
                                            }
                                            self->len++;
                                            break;
                                        }
                                    }
                                    same_key_exist_56=(_Bool)0;
                                    for(
                                    it2_58=list$1charpp_begin(self->key_list);
                                    !list$1charpp_end(self->key_list);
                                    it_39=list$1charpp_next(self->key_list)
                                    ){
                                        if(charp_equals(it2_58,key)) {
                                            same_key_exist_56=(_Bool)1;
                                        }
                                    }
                                    if(!same_key_exist_56) {
                                        list$1charpp_push_back(self->key_list,key);
                                    }
                                    if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                                    if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                                come_release_malloced_mem();
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_27;
void* right_value21;
char** keys_28;
void* right_value22;
struct sVar** items_29;
void* right_value23;
_Bool* item_existance_30;
int len_31;
char* it_32;
struct sVar* default_value_33;
struct sVar* it2_34;
int hash_35;
int n_36;
struct sVar* default_value_37;
memset(&size_27, 0, sizeof(int)); /* ddd */
memset(&right_value21, 0, sizeof(void*));
memset(&keys_28, 0, sizeof(char**)); /* ddd */
memset(&right_value22, 0, sizeof(void*));
memset(&items_29, 0, sizeof(struct sVar**)); /* ddd */
memset(&right_value23, 0, sizeof(void*));
memset(&item_existance_30, 0, sizeof(_Bool*)); /* ddd */
memset(&len_31, 0, sizeof(int)); /* ddd */
memset(&it_32, 0, sizeof(char*)); /* ddd */
memset(&default_value_33, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_34, 0, sizeof(struct sVar*)); /* ddd */
memset(&hash_35, 0, sizeof(int)); /* ddd */
memset(&n_36, 0, sizeof(int)); /* ddd */
memset(&default_value_37, 0, sizeof(struct sVar*)); /* bbb */
                                            size_27=self->size*3;
                                            keys_28=((char**)(right_value21=(char**)come_calloc(1, sizeof(char*)*(1*(size_27)))));
                                            items_29=((struct sVar**)(right_value22=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_27)))));
                                            item_existance_30=((_Bool*)(right_value23=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_27)))));
                                            len_31=0;
                                            for(
                                            it_32=map$2charphsVarphp_begin(self);
                                            !map$2charphsVarphp_end(self);
                                            it_32=map$2charphsVarphp_next(self)
                                            ){
                                                it2_34=map$2charphsVarphp_at(self,it_32,default_value_33);
                                                hash_35=charp_get_hash_key(it_32)%size_27;
                                                n_36=hash_35;
                                                while((_Bool)1) {
                                                    if(item_existance_30[n_36]) {
                                                        n_36++;
                                                        if(n_36>=size_27) {
                                                            n_36=0;
                                                        }
                                                        else if(n_36==hash_35) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            exit(2);
                                                        }
                                                    }
                                                    else {
                                                        item_existance_30[n_36]=(_Bool)1;
                                                        keys_28[n_36]=it_32;
                                                        items_29[n_36]=map$2charphsVarphp_at(self,it_32,default_value_37);
                                                        len_31++;
                                                        break;
                                                    }
                                                }
                                            }
                                            come_free_object((char*)self->items);
                                            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                                            come_free_object((char*)self->keys);
                                            self->keys=keys_28;
                                            self->items=items_29;
                                            self->item_existance=item_existance_30;
                                            self->size=size_27;
                                            self->len=len_31;
                                        come_release_malloced_mem();
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_40;
struct list_item$1charp* it_41;
memset(&it2_40, 0, sizeof(int)); /* ddd */
memset(&it_41, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                        it2_40=0;
                                                        it_41=self->head;
                                                        while(it_41!=((void*)0)) {
                                                            if(charp_equals(it_41->item,item)) {
                                                                list$1charpp_delete(self,it2_40,it2_40+1);
                                                                break;
                                                            }
                                                            it2_40++;
                                                            it_41=it_41->next;
                                                        }
                                                    come_release_malloced_mem();
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_42;
struct list_item$1charp* it_45;
int i_46;
struct list_item$1charp* prev_it_47;
struct list_item$1charp* it_48;
int i_49;
struct list_item$1charp* prev_it_50;
struct list_item$1charp* it_51;
struct list_item$1charp* head_prev_it_52;
struct list_item$1charp* tail_it_53;
int i_54;
struct list_item$1charp* prev_it_55;
memset(&tmp_42, 0, sizeof(int)); /* ddd */
memset(&it_45, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_46, 0, sizeof(int)); /* ddd */
memset(&prev_it_47, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_48, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_49, 0, sizeof(int)); /* ddd */
memset(&prev_it_50, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_51, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_52, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_53, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_54, 0, sizeof(int)); /* ddd */
memset(&prev_it_55, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                                    if(head<0) {
                                                                        head+=self->len;
                                                                    }
                                                                    if(tail<0) {
                                                                        tail+=self->len+1;
                                                                    }
                                                                    if(head>tail) {
                                                                        tmp_42=tail;
                                                                        tail=head;
                                                                        head=tmp_42;
                                                                    }
                                                                    if(head<0) {
                                                                        head=0;
                                                                    }
                                                                    if(tail>self->len) {
                                                                        tail=self->len;
                                                                    }
                                                                    if(head==tail) {
                                                                        come_release_malloced_mem();
                                                                        return;
                                                                    }
                                                                    if(head==0&&tail==self->len) {
                                                                        list$1charpp_reset(self);
                                                                    }
                                                                    else if(head==0) {
                                                                        it_45=self->head;
                                                                        i_46=0;
                                                                        while(it_45!=((void*)0)) {
                                                                            if(i_46<tail) {
                                                                                prev_it_47=it_45;
                                                                                it_45=it_45->next;
                                                                                i_46++;
                                                                                if(prev_it_47) { come_call_finalizer(list_item$1charpp_finalize,prev_it_47, (void*)0, (void*)0, 0, 0, 0); }
                                                                                self->len--;
                                                                            }
                                                                            else if(i_46==tail) {
                                                                                self->head=it_45;
                                                                                self->head->prev=((void*)0);
                                                                                break;
                                                                            }
                                                                            else {
                                                                                it_45=it_45->next;
                                                                                i_46++;
                                                                            }
                                                                        }
                                                                    }
                                                                    else if(tail==self->len) {
                                                                        it_48=self->head;
                                                                        i_49=0;
                                                                        while(it_48!=((void*)0)) {
                                                                            if(i_49==head) {
                                                                                self->tail=it_48->prev;
                                                                                self->tail->next=((void*)0);
                                                                            }
                                                                            if(i_49>=head) {
                                                                                prev_it_50=it_48;
                                                                                it_48=it_48->next;
                                                                                i_49++;
                                                                                if(prev_it_50) { come_call_finalizer(list_item$1charpp_finalize,prev_it_50, (void*)0, (void*)0, 0, 0, 0); }
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                it_48=it_48->next;
                                                                                i_49++;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        it_51=self->head;
                                                                        head_prev_it_52=((void*)0);
                                                                        tail_it_53=((void*)0);
                                                                        i_54=0;
                                                                        while(it_51!=((void*)0)) {
                                                                            if(i_54==head) {
                                                                                head_prev_it_52=it_51->prev;
                                                                            }
                                                                            if(i_54==tail) {
                                                                                tail_it_53=it_51;
                                                                            }
                                                                            if(i_54>=head&&i_54<tail) {
                                                                                prev_it_55=it_51;
                                                                                it_51=it_51->next;
                                                                                i_54++;
                                                                                if(prev_it_55) { come_call_finalizer(list_item$1charpp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0); }
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                it_51=it_51->next;
                                                                                i_54++;
                                                                            }
                                                                        }
                                                                        if(head_prev_it_52!=((void*)0)) {
                                                                            head_prev_it_52->next=tail_it_53;
                                                                        }
                                                                        if(tail_it_53!=((void*)0)) {
                                                                            tail_it_53->prev=head_prev_it_52;
                                                                        }
                                                                    }
                                                                come_release_malloced_mem();
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_43;
struct list_item$1charp* prev_it_44;
memset(&it_43, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_44, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                                            it_43=self->head;
                                                                            while(it_43!=((void*)0)) {
                                                                                prev_it_44=it_43;
                                                                                it_43=it_43->next;
                                                                                if(prev_it_44) { come_call_finalizer(list_item$1charpp_finalize,prev_it_44, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
                                                                            self->head=((void*)0);
                                                                            self->tail=((void*)0);
                                                                            self->len=0;
                                                                        come_release_malloced_mem();
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
                                                                                come_release_malloced_mem();
}

static char* list$1charpp_begin(struct list$1charp* self){
char* result_57;
memset(&result_57, 0, sizeof(char*)); /* bbb */
                                        self->it=self->head;
                                        if(self->it) {
                                            char* __result26__ = self->it->item;
                                            come_release_malloced_mem();
                                            return __result26__;
                                        }
                                        memset(&result_57,0,sizeof(char*));
                                        char* __result27__ = result_57;
                                        come_release_malloced_mem();
                                        return __result27__;
                                    come_release_malloced_mem();
}

static _Bool list$1charpp_end(struct list$1charp* self){
                                        _Bool __result28__ = self->it==((void*)0);
                                        come_release_malloced_mem();
                                        return __result28__;
                                    come_release_malloced_mem();
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_59;
memset(&result_59, 0, sizeof(char*)); /* bbb */
                                        self->it=self->it->next;
                                        if(self->it) {
                                            char* __result29__ = self->it->item;
                                            come_release_malloced_mem();
                                            return __result29__;
                                        }
                                        memset(&result_59,0,sizeof(char*));
                                        char* __result30__ = result_59;
                                        come_release_malloced_mem();
                                        return __result30__;
                                    come_release_malloced_mem();
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value24;
struct list_item$1charp* litem_60;
void* right_value25;
struct list_item$1charp* litem_61;
void* right_value26;
struct list_item$1charp* litem_62;
memset(&right_value24, 0, sizeof(void*));
memset(&litem_60, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value25, 0, sizeof(void*));
memset(&litem_61, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value26, 0, sizeof(void*));
memset(&litem_62, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                            if(self->len==0) {
                                                litem_60=((struct list_item$1charp*)(right_value24=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                                litem_60->prev=((void*)0);
                                                litem_60->next=((void*)0);
                                                litem_60->item=item;
                                                self->tail=litem_60;
                                                self->head=litem_60;
                                            }
                                            else if(self->len==1) {
                                                litem_61=((struct list_item$1charp*)(right_value25=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                                litem_61->prev=self->head;
                                                litem_61->next=((void*)0);
                                                litem_61->item=item;
                                                self->tail=litem_61;
                                                self->head->next=litem_61;
                                            }
                                            else {
                                                litem_62=((struct list_item$1charp*)(right_value26=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                                litem_62->prev=self->tail;
                                                litem_62->next=((void*)0);
                                                litem_62->item=item;
                                                self->tail->next=litem_62;
                                                self->tail=litem_62;
                                            }
                                            self->len++;
                                        come_release_malloced_mem();
}

static void sVar_finalize(struct sVar* self){
                                        if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                            if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                                        }
                                        if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                            if(self->mCValueName) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0); }
                                        }
                                        if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                            if(self->mType) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                    come_release_malloced_mem();
}

static struct sVar* sVarp_clone(struct sVar* self){
void* right_value29;
struct sVar* result_63;
void* right_value30;
char* __dec_obj10;
void* right_value31;
char* __dec_obj11;
void* right_value55;
struct sType* __dec_obj27;
memset(&right_value29, 0, sizeof(void*));
memset(&result_63, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
                                    if(self==(void*)0) {
                                        struct sVar* __result31__ = (void*)0;
                                        come_release_malloced_mem();
                                        return __result31__;
                                    }
                                    result_63=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value29=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1)))));
                                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                        __dec_obj10=result_63->mName;
                                        result_63->mName=(char*)come_increment_ref_count(((char*)(right_value30=string_clone(self->mName))));
                                        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0); }
                                        if(right_value30) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0); }
                                    }
                                    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                        __dec_obj11=result_63->mCValueName;
                                        result_63->mCValueName=(char*)come_increment_ref_count(((char*)(right_value31=string_clone(self->mCValueName))));
                                        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0); }
                                        if(right_value31) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0); }
                                    }
                                    if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                        __dec_obj27=result_63->mType;
                                        result_63->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(self->mType))));
                                        if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0); }
                                        if(right_value55) { come_call_finalizer(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
                                    }
                                    if(self!=((void*)0)) {
                                        result_63->mBlockLevel=self->mBlockLevel;
                                    }
                                    if(self!=((void*)0)) {
                                        result_63->mGlobal=self->mGlobal;
                                    }
                                    if(self!=((void*)0)) {
                                        result_63->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(self!=((void*)0)) {
                                        result_63->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(self!=((void*)0)) {
                                        result_63->mNoFree=self->mNoFree;
                                    }
                                    struct sVar* __result42__ = result_63;
                                    come_release_malloced_mem();
                                    return __result42__;
                                come_release_malloced_mem();
}

static struct sType* sType_clone(struct sType* self){
void* right_value32;
struct sType* result_64;
void* right_value35;
struct tuple1$1sTypeph* __dec_obj13;
void* right_value36;
char* __dec_obj14;
void* right_value43;
struct list$1sTypeph* __dec_obj18;
void* right_value44;
struct list$1sNodeph* __dec_obj19;
void* right_value45;
struct list$1sTypeph* __dec_obj20;
void* right_value52;
struct list$1charph* __dec_obj24;
void* right_value53;
struct tuple1$1sTypeph* __dec_obj25;
void* right_value54;
char* __dec_obj26;
memset(&right_value32, 0, sizeof(void*));
memset(&result_64, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
                                            if(self==(void*)0) {
                                                struct sType* __result32__ = (void*)0;
                                                come_release_malloced_mem();
                                                return __result32__;
                                            }
                                            result_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value32=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
                                            if(self!=((void*)0)) {
                                                result_64->mClass=self->mClass;
                                            }
                                            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                                                __dec_obj13=result_64->mNoSolvedGenericsType;
                                                result_64->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value35=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                                if(__dec_obj13) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0); }
                                                if(right_value35) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                                                __dec_obj14=result_64->mGenericsName;
                                                result_64->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value36=string_clone(self->mGenericsName))));
                                                if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
                                                if(right_value36) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0); }
                                            }
                                            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                                                __dec_obj18=result_64->mGenericsTypes;
                                                result_64->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypephp_clone(self->mGenericsTypes))));
                                                if(__dec_obj18) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0); }
                                                if(right_value43) { come_call_finalizer(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                                                __dec_obj19=result_64->mArrayNum;
                                                result_64->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value44=list$1sNodephp_clone(self->mArrayNum))));
                                                if(__dec_obj19) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0); }
                                                if(right_value44) { come_call_finalizer(list$1sNodephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mOmitArrayNum=self->mOmitArrayNum;
                                            }
                                            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                                __dec_obj20=result_64->mParamTypes;
                                                result_64->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value45=list$1sTypephp_clone(self->mParamTypes))));
                                                if(__dec_obj20) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0); }
                                                if(right_value45) { come_call_finalizer(list$1sTypephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                                __dec_obj24=result_64->mParamNames;
                                                result_64->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value52=list$1charphp_clone(self->mParamNames))));
                                                if(__dec_obj24) { come_call_finalizer(list$1charphp_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0); }
                                                if(right_value52) { come_call_finalizer(list$1charphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                                __dec_obj25=result_64->mResultType;
                                                result_64->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value53=tuple1$1sTypephp_clone(self->mResultType))));
                                                if(__dec_obj25) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0); }
                                                if(right_value53) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mVarArgs=self->mVarArgs;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mUnsigned=self->mUnsigned;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mShort=self->mShort;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mLong=self->mLong;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mLongLong=self->mLongLong;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mConstant=self->mConstant;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mRegister=self->mRegister;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mVolatile=self->mVolatile;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mStatic=self->mStatic;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mExtern=self->mExtern;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mRestrict=self->mRestrict;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mImmutable=self->mImmutable;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mHeap=self->mHeap;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mDummyHeap=self->mDummyHeap;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mNoHeap=self->mNoHeap;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mNoCallingDestructor=self->mNoCallingDestructor;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mRefference=self->mRefference;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mException=self->mException;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mPointerNum=self->mPointerNum;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mSizeNum=self->mSizeNum;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mDynamicArrayNum=self->mDynamicArrayNum;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mTypeOfExpression=self->mTypeOfExpression;
                                            }
                                            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                                                __dec_obj26=result_64->mOriginalTypeName;
                                                result_64->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value54=string_clone(self->mOriginalTypeName))));
                                                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
                                                if(right_value54) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0); }
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mOriginalPointerNum=self->mOriginalPointerNum;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mFunctionParam=self->mFunctionParam;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mAllocaValue=self->mAllocaValue;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mGenericsStruct=self->mGenericsStruct;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mSolvedGenericsName=self->mSolvedGenericsName;
                                            }
                                            if(self!=((void*)0)) {
                                                result_64->mInline=self->mInline;
                                            }
                                            struct sType* __result41__ = result_64;
                                            come_release_malloced_mem();
                                            return __result41__;
                                        come_release_malloced_mem();
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value33;
struct tuple1$1sTypeph* result_65;
void* right_value34;
struct sType* __dec_obj12;
memset(&right_value33, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value34, 0, sizeof(void*));
                                                    if(self==(void*)0) {
                                                        struct tuple1$1sTypeph* __result33__ = (void*)0;
                                                        come_release_malloced_mem();
                                                        return __result33__;
                                                    }
                                                    result_65=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value33=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                                                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                        __dec_obj12=result_65->v1;
                                                        result_65->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(self->v1))));
                                                        if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0); }
                                                        if(right_value34) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0); }
                                                    }
                                                    struct tuple1$1sTypeph* __result34__ = result_65;
                                                    come_release_malloced_mem();
                                                    return __result34__;
                                                come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value37;
void* right_value38;
struct list$1sTypeph* result_66;
struct list_item$1sTypeph* it_67;
void* right_value42;
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_67, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
                                                    if(self==((void*)0)) {
                                                        struct list$1sTypeph* __result35__ = ((void*)0);
                                                        come_release_malloced_mem();
                                                        return __result35__;
                                                    }
                                                    result_66=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value38=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                                                    if(right_value38) { come_call_finalizer(list$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
                                                    it_67=self->head;
                                                    while(it_67!=((void*)0)) {
                                                        list$1sTypephp_push_back2(result_66,(struct sType*)come_increment_ref_count(((struct sType*)(right_value42=sType_clone(it_67->item)))));
                                                        if(right_value42) { come_call_finalizer(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
                                                        it_67=it_67->next;
                                                    }
                                                    struct list$1sTypeph* __result37__ = result_66;
                                                    if(result_66) { come_call_finalizer(list$1sTypephp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1); }
                                                    come_release_malloced_mem();
                                                    return __result37__;
                                                come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                                                        self->head=((void*)0);
                                                        self->tail=((void*)0);
                                                        self->len=0;
                                                        struct list$1sTypeph* __result36__ = self;
                                                        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                                                        come_release_malloced_mem();
                                                        return __result36__;
                                                    come_release_malloced_mem();
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value39;
struct list_item$1sTypeph* litem_68;
struct sType* __dec_obj15;
void* right_value40;
struct list_item$1sTypeph* litem_69;
struct sType* __dec_obj16;
void* right_value41;
struct list_item$1sTypeph* litem_70;
struct sType* __dec_obj17;
memset(&right_value39, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value40, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value41, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                                                            if(self->len==0) {
                                                                litem_68=((struct list_item$1sTypeph*)(right_value39=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                                                litem_68->prev=((void*)0);
                                                                litem_68->next=((void*)0);
                                                                __dec_obj15=litem_68->item;
                                                                litem_68->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0); }
                                                                self->tail=litem_68;
                                                                self->head=litem_68;
                                                            }
                                                            else if(self->len==1) {
                                                                litem_69=((struct list_item$1sTypeph*)(right_value40=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                                                litem_69->prev=self->head;
                                                                litem_69->next=((void*)0);
                                                                __dec_obj16=litem_69->item;
                                                                litem_69->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj16) { come_call_finalizer(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0); }
                                                                self->tail=litem_69;
                                                                self->head->next=litem_69;
                                                            }
                                                            else {
                                                                litem_70=((struct list_item$1sTypeph*)(right_value41=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                                                litem_70->prev=self->tail;
                                                                litem_70->next=((void*)0);
                                                                __dec_obj17=litem_70->item;
                                                                litem_70->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0); }
                                                                self->tail->next=litem_70;
                                                                self->tail=litem_70;
                                                            }
                                                            self->len++;
                                                            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                                                        come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value46;
void* right_value47;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
void* right_value51;
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_72, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value51, 0, sizeof(void*));
                                                    if(self==((void*)0)) {
                                                        struct list$1charph* __result38__ = ((void*)0);
                                                        come_release_malloced_mem();
                                                        return __result38__;
                                                    }
                                                    result_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value47=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                                                    if(right_value47) { come_call_finalizer(list$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0); }
                                                    it_72=self->head;
                                                    while(it_72!=((void*)0)) {
                                                        list$1charphp_push_back2(result_71,(char*)come_increment_ref_count(((char*)(right_value51=string_clone(it_72->item)))));
                                                        if(right_value51) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0); }
                                                        it_72=it_72->next;
                                                    }
                                                    struct list$1charph* __result40__ = result_71;
                                                    if(result_71) { come_call_finalizer(list$1charphp_finalize,result_71, (void*)0, (void*)0, 0, 0, 1); }
                                                    come_release_malloced_mem();
                                                    return __result40__;
                                                come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                                                        self->head=((void*)0);
                                                        self->tail=((void*)0);
                                                        self->len=0;
                                                        struct list$1charph* __result39__ = self;
                                                        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                                                        come_release_malloced_mem();
                                                        return __result39__;
                                                    come_release_malloced_mem();
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value48;
struct list_item$1charph* litem_73;
char* __dec_obj21;
void* right_value49;
struct list_item$1charph* litem_74;
char* __dec_obj22;
void* right_value50;
struct list_item$1charph* litem_75;
char* __dec_obj23;
memset(&right_value48, 0, sizeof(void*));
memset(&litem_73, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value49, 0, sizeof(void*));
memset(&litem_74, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value50, 0, sizeof(void*));
memset(&litem_75, 0, sizeof(struct list_item$1charph*)); /* ddd */
                                                            if(self->len==0) {
                                                                litem_73=((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                                                litem_73->prev=((void*)0);
                                                                litem_73->next=((void*)0);
                                                                __dec_obj21=litem_73->item;
                                                                litem_73->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                                                                self->tail=litem_73;
                                                                self->head=litem_73;
                                                            }
                                                            else if(self->len==1) {
                                                                litem_74=((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                                                litem_74->prev=self->head;
                                                                litem_74->next=((void*)0);
                                                                __dec_obj22=litem_74->item;
                                                                litem_74->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
                                                                self->tail=litem_74;
                                                                self->head->next=litem_74;
                                                            }
                                                            else {
                                                                litem_75=((struct list_item$1charph*)(right_value50=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                                                litem_75->prev=self->tail;
                                                                litem_75->next=((void*)0);
                                                                __dec_obj23=litem_75->item;
                                                                litem_75->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
                                                                self->tail->next=litem_75;
                                                                self->tail=litem_75;
                                                            }
                                                            self->len++;
                                                            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
                                                        come_release_malloced_mem();
}

static void sForNode_finalize(struct sForNode* self){
            if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
                if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mExpressionNode2!=((void*)0)) {
                if(self->mExpressionNode2) { self->mExpressionNode2 = come_decrement_ref_count(self->mExpressionNode2, ((struct sNode*)self->mExpressionNode2)->finalize, ((struct sNode*)self->mExpressionNode2)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mExpressionNode3!=((void*)0)) {
                if(self->mExpressionNode3) { self->mExpressionNode3 = come_decrement_ref_count(self->mExpressionNode3, ((struct sNode*)self->mExpressionNode3)->finalize, ((struct sNode*)self->mExpressionNode3)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                if(self->mBlock) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sForNode_terminated(){
    _Bool __result47__ = (_Bool)1;
    come_release_malloced_mem();
    return __result47__;
come_release_malloced_mem();
}

_Bool sForNode_compile(struct sForNode* self, struct sInfo* info){
struct sBlock* block_76;
struct sVarTable* lv_table_77;
void* right_value61;
void* right_value62;
struct sVarTable* for_var_table_78;
struct sNode* expression_node_79;
struct CVALUE* conditional_value_80;
void* right_value63;
struct CVALUE* __dec_obj31;
struct sNode* expression_node2_81;
struct CVALUE* conditional_value2_82;
void* right_value64;
struct CVALUE* __dec_obj32;
struct sNode* expression_node3_83;
struct CVALUE* conditional_value3_84;
void* right_value65;
struct CVALUE* conditional_value3_85;
memset(&block_76, 0, sizeof(struct sBlock*)); /* ddd */
memset(&lv_table_77, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&for_var_table_78, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&expression_node_79, 0, sizeof(struct sNode*)); /* ddd */
memset(&conditional_value_80, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value63, 0, sizeof(void*));
memset(&expression_node2_81, 0, sizeof(struct sNode*)); /* ddd */
memset(&conditional_value2_82, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value64, 0, sizeof(void*));
memset(&expression_node3_83, 0, sizeof(struct sNode*)); /* ddd */
memset(&conditional_value3_84, 0, sizeof(struct CVALUE*)); /* bbb */
memset(&right_value65, 0, sizeof(void*));
memset(&conditional_value3_85, 0, sizeof(struct CVALUE*)); /* ddd */
    block_76=self->mBlock;
    lv_table_77=info->lv_table;
    for_var_table_78=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value62=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value61=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1))))),(_Bool)0,lv_table_77))));
    if(right_value61) { come_call_finalizer(sVarTable_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value62) { come_call_finalizer(sVarTable_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0); }
    info->lv_table=for_var_table_78;
    add_come_code(info,"for(\n");
    expression_node_79=self->mExpressionNode;
    conditional_value_80=((void*)0);
    if(expression_node_79) {
        if(!expression_node_79->compile(expression_node_79->_protocol_obj,info)) {
            _Bool __result48__ = (_Bool)0;
            come_release_malloced_mem();
            return __result48__;
        }
        add_last_code_to_source(info);
        __dec_obj31=conditional_value_80;
        conditional_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value63=get_value_from_stack(-1,info))));
        if(__dec_obj31) { come_call_finalizer(CVALUE_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value63) { come_call_finalizer(CVALUE_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        free_right_value_objects(info);
    }
    else {
        add_come_code(info,";");
    }
    expression_node2_81=self->mExpressionNode2;
    conditional_value2_82=((void*)0);
    if(expression_node2_81) {
        if(!expression_node2_81->compile(expression_node2_81->_protocol_obj,info)) {
            _Bool __result49__ = (_Bool)0;
            come_release_malloced_mem();
            return __result49__;
        }
        add_last_code_to_source(info);
        __dec_obj32=conditional_value2_82;
        conditional_value2_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value64=get_value_from_stack(-1,info))));
        if(__dec_obj32) { come_call_finalizer(CVALUE_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value64) { come_call_finalizer(CVALUE_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        free_right_value_objects(info);
    }
    else {
        add_come_code(info,";");
    }
    expression_node3_83=self->mExpressionNode3;
    if(expression_node3_83) {
        if(!expression_node3_83->compile(expression_node3_83->_protocol_obj,info)) {
            _Bool __result50__ = (_Bool)0;
            come_release_malloced_mem();
            return __result50__;
        }
        add_last_code_to_source_without_semicolon(info);
        conditional_value3_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value65=get_value_from_stack(-1,info))));
        if(right_value65) { come_call_finalizer(CVALUE_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        free_right_value_objects(info);
        if(conditional_value3_85) { come_call_finalizer(CVALUE_finalize,conditional_value3_85, (void*)0, (void*)0, 0, 0, 0); }
    }
    add_come_code(info,"){\n");
    transpile_block(block_76,((void*)0),((void*)0),info,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    info->lv_table=lv_table_77;
    _Bool __result51__ = (_Bool)1;
    if(for_var_table_78) { come_call_finalizer(sVarTable_finalize,for_var_table_78, (void*)0, (void*)0, 0, 0, 0); }
    if(conditional_value_80) { come_call_finalizer(CVALUE_finalize,conditional_value_80, (void*)0, (void*)0, 0, 0, 0); }
    if(conditional_value2_82) { come_call_finalizer(CVALUE_finalize,conditional_value2_82, (void*)0, (void*)0, 0, 0, 0); }
    if(conditional_value3_84) { come_call_finalizer(CVALUE_finalize,conditional_value3_84, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result51__;
come_release_malloced_mem();
}

static void CVALUE_finalize(struct CVALUE* self){
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
            }
        come_release_malloced_mem();
}

int sForNode_sline(struct sForNode* self, struct sInfo* info){
    int __result52__ = self->sline;
    come_release_malloced_mem();
    return __result52__;
come_release_malloced_mem();
}

char* sForNode_sname(struct sForNode* self, struct sInfo* info){
void* right_value66;
memset(&right_value66, 0, sizeof(void*));
    char* __result53__ = ((char*)(right_value66=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result53__;
come_release_malloced_mem();
}

static struct sForNode* sForNode_clone(struct sForNode* self){
void* right_value73;
struct sForNode* result_90;
void* right_value74;
struct sNode* __dec_obj36;
void* right_value75;
struct sNode* __dec_obj37;
void* right_value76;
struct sNode* __dec_obj38;
void* right_value77;
struct sBlock* __dec_obj39;
void* right_value78;
char* __dec_obj40;
memset(&right_value73, 0, sizeof(void*));
memset(&result_90, 0, sizeof(struct sForNode*)); /* ddd */
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sForNode* __result54__ = (void*)0;
                come_release_malloced_mem();
                return __result54__;
            }
            result_90=(struct sForNode*)come_increment_ref_count(((struct sForNode*)(right_value73=(struct sForNode*)come_calloc(1, sizeof(struct sForNode)*(1)))));
            if(right_value73) { come_call_finalizer(sForNode_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
                __dec_obj36=result_90->mExpressionNode;
                result_90->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value74=sNodep_clone(self->mExpressionNode))));
                if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0); }
                if(right_value74) { right_value74 = come_decrement_ref_count(right_value74, ((struct sNode*)right_value74)->finalize, ((struct sNode*)right_value74)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mExpressionNode2!=((void*)0)) {
                __dec_obj37=result_90->mExpressionNode2;
                result_90->mExpressionNode2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value75=sNodep_clone(self->mExpressionNode2))));
                if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0); }
                if(right_value75) { right_value75 = come_decrement_ref_count(right_value75, ((struct sNode*)right_value75)->finalize, ((struct sNode*)right_value75)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mExpressionNode3!=((void*)0)) {
                __dec_obj38=result_90->mExpressionNode3;
                result_90->mExpressionNode3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNodep_clone(self->mExpressionNode3))));
                if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0); }
                if(right_value76) { right_value76 = come_decrement_ref_count(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                __dec_obj39=result_90->mBlock;
                result_90->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value77=sBlock_clone(self->mBlock))));
                if(__dec_obj39) { come_call_finalizer(sBlock_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value77) { come_call_finalizer(sBlock_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_90->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj40=result_90->sname;
                result_90->sname=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(self->sname))));
                if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
                if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0); }
            }
            struct sForNode* __result55__ = result_90;
            if(result_90) { come_call_finalizer(sForNode_finalize,result_90, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result55__;
        come_release_malloced_mem();
}

