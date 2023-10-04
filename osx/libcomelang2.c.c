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
struct sMem
{
    char* mem;
    int size;
    struct sMem* next;
};
struct sHeapPool
{
    char** mem_pages;
    int size_pages;
    int num_pages;
    char* top;
    struct sMem* free_mem;
    struct sMem* malloced_free_mem;
};
struct sHeapPool gHeapPool;

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

static void* come_alloc_mem_from_heap_pool(int size);
static void* my_calloc(int a, int b);
static void come_free_mem_of_heap_pool(char* mem);
static void va_list_finalize(va_list* self);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
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
void* come_calloc(int count, int size){
char* mem_21;
int* ref_count_22;
long* size2_23;
memset(&mem_21, 0, sizeof(char*)); /* ddd */
memset(&ref_count_22, 0, sizeof(int*)); /* ddd */
memset(&size2_23, 0, sizeof(long*)); /* ddd */
    mem_21=come_alloc_mem_from_heap_pool(sizeof(int)+sizeof(long)+count*size);
    ref_count_22=(int*)mem_21;
    size2_23=(long*)(mem_21+sizeof(int));
    *size2_23=size*count+sizeof(long)+sizeof(int);
    void* __result12__ = mem_21+sizeof(int)+sizeof(long);
    come_release_malloced_mem();
    return __result12__;
come_release_malloced_mem();
}

void* come_increment_ref_count(void* mem){
int* ref_count_33;
memset(&ref_count_33, 0, sizeof(int*)); /* ddd */
    if(mem==((void*)0)) {
        void* __result15__ = mem;
        come_release_malloced_mem();
        return __result15__;
    }
    ref_count_33=(int*)((char*)mem-sizeof(int)-sizeof(long));
    (*ref_count_33)++;
    void* __result16__ = mem;
    come_release_malloced_mem();
    return __result16__;
come_release_malloced_mem();
}

void ncfree(void* mem){
    if(mem) {
        come_free_mem_of_heap_pool(mem);
    }
come_release_malloced_mem();
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free){
void (*finalizer_38)(void*);
void (*finalizer_39)(void*);
int* ref_count_40;
int count_41;
void (*finalizer_42)(void*);
void (*finalizer_43)(void*);
memset(&finalizer_38, 0, sizeof(void (*)(void*))); /* ddd */
memset(&finalizer_39, 0, sizeof(void (*)(void*))); /* ddd */
memset(&ref_count_40, 0, sizeof(int*)); /* ddd */
memset(&count_41, 0, sizeof(int)); /* ddd */
memset(&finalizer_42, 0, sizeof(void (*)(void*))); /* ddd */
memset(&finalizer_43, 0, sizeof(void (*)(void*))); /* ddd */
    if(mem==((void*)0)) {
        come_release_malloced_mem();
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer_38=protocol_fun;
                finalizer_38(protocol_obj);
            }
            finalizer_39=fun;
            finalizer_39(mem);
        }
    }
    else {
        ref_count_40=(int*)((char*)mem-sizeof(int)-sizeof(long));
        if(!no_decrement) {
            (*ref_count_40)--;
        }
        count_41=*ref_count_40;
        if(!no_free&&count_41<=0) {
            if(mem) {
                if(protocol_obj&&protocol_fun) {
                    finalizer_42=protocol_fun;
                    finalizer_42(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_43=fun;
                    finalizer_43(mem);
                }
                come_free_object(mem);
            }
        }
    }
come_release_malloced_mem();
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free){
int* ref_count_35;
int count_36;
void (*finalizer_37)(void*);
memset(&ref_count_35, 0, sizeof(int*)); /* ddd */
memset(&count_36, 0, sizeof(int)); /* ddd */
memset(&finalizer_37, 0, sizeof(void (*)(void*))); /* ddd */
    if(mem==((void*)0)) {
        void* __result19__ = ((void*)0);
        come_release_malloced_mem();
        return __result19__;
    }
    ref_count_35=(int*)((char*)mem-sizeof(int)-sizeof(long));
    if(!no_decrement) {
        (*ref_count_35)--;
    }
    count_36=*ref_count_35;
    if(!no_free&&count_36<=0) {
        if(protocol_obj&&protocol_fun) {
            finalizer_37=protocol_fun;
            finalizer_37(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        void* __result20__ = ((void*)0);
        come_release_malloced_mem();
        return __result20__;
    }
    void* __result21__ = mem;
    come_release_malloced_mem();
    return __result21__;
come_release_malloced_mem();
}

void come_free_object(void* mem){
int* ref_count_24;
memset(&ref_count_24, 0, sizeof(int*)); /* ddd */
    if(mem==((void*)0)) {
        come_release_malloced_mem();
        return;
    }
    ref_count_24=(int*)((char*)mem-sizeof(int)-sizeof(long));
    come_free_mem_of_heap_pool(ref_count_24);
come_release_malloced_mem();
}

void* nccalloc(int nmemb, int size){
void* result_20;
memset(&result_20, 0, sizeof(void*)); /* ddd */
    result_20=come_alloc_mem_from_heap_pool(nmemb*size);
    void* __result11__ = result_20;
    come_release_malloced_mem();
    return __result11__;
come_release_malloced_mem();
}

void* come_memdup(void* block){
char* mem_25;
long* size_p_26;
int size_27;
char* ret_28;
int* ref_count_29;
char* p_30;
char* p2_31;
long* size_p2_32;
memset(&mem_25, 0, sizeof(char*)); /* ddd */
memset(&size_p_26, 0, sizeof(long*)); /* ddd */
memset(&size_27, 0, sizeof(int)); /* ddd */
memset(&ret_28, 0, sizeof(char*)); /* ddd */
memset(&ref_count_29, 0, sizeof(int*)); /* ddd */
memset(&p_30, 0, sizeof(char*)); /* ddd */
memset(&p2_31, 0, sizeof(char*)); /* ddd */
memset(&size_p2_32, 0, sizeof(long*)); /* ddd */
    if(!block) {
        void* __result13__ = ((void*)0);
        come_release_malloced_mem();
        return __result13__;
    }
    mem_25=(char*)block-sizeof(int)-sizeof(long);
    size_p_26=(long*)(mem_25+sizeof(int));
    size_27=*size_p_26;
    ret_28=come_alloc_mem_from_heap_pool(size_27);
    ref_count_29=ret_28;
    if(ret_28) {
        p_30=ret_28;
        p2_31=mem_25;
        while(p_30-(char*)ret_28<size_27) {
            *p_30=*p2_31;
            p_30++;
            p2_31++;
        }
    }
    size_p2_32=(long*)((char*)ret_28+sizeof(int));
    *size_p2_32=size_27;
    void* __result14__ = (char*)ret_28+sizeof(int)+sizeof(long);
    come_release_malloced_mem();
    return __result14__;
come_release_malloced_mem();
}

char* __builtin_string(char* str){
int len_45;
void* right_value0;
char* result_46;
memset(&len_45, 0, sizeof(int)); /* ddd */
memset(&right_value0, 0, sizeof(void*));
memset(&result_46, 0, sizeof(char*)); /* ddd */
    len_45=strlen(str)+1;
    result_46=(char*)come_increment_ref_count(((char*)(right_value0=(char*)come_calloc(1, sizeof(char)*(1*(len_45))))));
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    strncpy(result_46,str,len_45);
    char* __result22__ = result_46;
    if(result_46) { result_46 = come_decrement_ref_count(result_46, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result22__;
come_release_malloced_mem();
}

void come_release_malloced_mem(){
struct sMem* it_6;
struct sMem* prev_it_7;
memset(&it_6, 0, sizeof(struct sMem*)); /* ddd */
memset(&prev_it_7, 0, sizeof(struct sMem*)); /* ddd */
    it_6=gHeapPool.malloced_free_mem;
    while(it_6) {
        prev_it_7=it_6;
        free(it_6->mem);
        it_6=it_6->next;
        free(prev_it_7);
    }
    gHeapPool.malloced_free_mem=((void*)0);
}

void come_heap_pool_init(){
const int size_pages_0=4;
int i_1;
memset(&i_1, 0, sizeof(int)); /* ddd */
    memset(&gHeapPool,0,sizeof(struct sHeapPool));
    gHeapPool.size_pages=size_pages_0;
    gHeapPool.mem_pages=calloc(1,sizeof(void*)*size_pages_0);
    for(
    i_1=0;
    i_1<size_pages_0;
    i_1++
    ){
        gHeapPool.mem_pages[i_1]=calloc(1,sizeof(char)*4096);
    }
    gHeapPool.top=gHeapPool.mem_pages[0];
come_release_malloced_mem();
}

void come_heap_pool_final(){
int i_2;
struct sMem* it_3;
struct sMem* prev_it_4;
struct sMem* prev_it_5;
memset(&i_2, 0, sizeof(int)); /* ddd */
memset(&it_3, 0, sizeof(struct sMem*)); /* ddd */
memset(&prev_it_4, 0, sizeof(struct sMem*)); /* ddd */
memset(&prev_it_5, 0, sizeof(struct sMem*)); /* ddd */
    for(
    i_2=0;
    i_2<gHeapPool.size_pages;
    i_2++
    ){
        free(gHeapPool.mem_pages[i_2]);
    }
    free(gHeapPool.mem_pages);
    it_3=gHeapPool.malloced_free_mem;
    while(it_3) {
        prev_it_4=it_3;
        free(it_3->mem);
        it_3=it_3->next;
        free(prev_it_4);
    }
    it_3=gHeapPool.free_mem;
    while(it_3) {
        prev_it_5=it_3;
        it_3=it_3->next;
        free(prev_it_5);
    }
come_release_malloced_mem();
}







void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
come_release_malloced_mem();
}

void* come_print_ref_count(void* mem){
int* ref_count_34;
memset(&ref_count_34, 0, sizeof(int*)); /* ddd */
    if(mem==((void*)0)) {
        void* __result17__ = mem;
        come_release_malloced_mem();
        return __result17__;
    }
    ref_count_34=(int*)((char*)mem-sizeof(int)-sizeof(long));
    printf("ref_count %d\n",*ref_count_34);
    void* __result18__ = mem;
    come_release_malloced_mem();
    return __result18__;
come_release_malloced_mem();
}

void int_times(int self, void* parent, void (*block)(void*)){
int i_44;
memset(&i_44, 0, sizeof(int)); /* ddd */
    for(
    i_44=0;
    i_44<self;
    i_44++
    ){
        block(parent);
    }
come_release_malloced_mem();
}

_Bool int_equals(int self, int right){
    _Bool __result23__ = self==right;
    come_release_malloced_mem();
    return __result23__;
come_release_malloced_mem();
}

_Bool bool_equals(_Bool self, _Bool right){
    _Bool __result24__ = self==right;
    come_release_malloced_mem();
    return __result24__;
come_release_malloced_mem();
}

_Bool char_equals(char self, char right){
    _Bool __result25__ = self==right;
    come_release_malloced_mem();
    return __result25__;
come_release_malloced_mem();
}

_Bool short_equals(short short self, short short right){
    _Bool __result26__ = self==right;
    come_release_malloced_mem();
    return __result26__;
come_release_malloced_mem();
}

_Bool long_equals(long self, long right){
    _Bool __result27__ = self==right;
    come_release_malloced_mem();
    return __result27__;
come_release_malloced_mem();
}

_Bool string_equals(char* self, char* right){
    _Bool __result28__ = strcmp(self,right)==0;
    come_release_malloced_mem();
    return __result28__;
come_release_malloced_mem();
}

_Bool charp_equals(char* self, char* right){
    _Bool __result33__ = strcmp(self,right)==0;
    come_release_malloced_mem();
    return __result33__;
come_release_malloced_mem();
}

_Bool string_operator_equals(char* self, char* right){
    _Bool __result29__ = strcmp(self,right)==0;
    come_release_malloced_mem();
    return __result29__;
come_release_malloced_mem();
}

_Bool charp_operator_equals(char* self, char* right){
    _Bool __result30__ = strcmp(self,right)==0;
    come_release_malloced_mem();
    return __result30__;
come_release_malloced_mem();
}

_Bool string_operator_not_equals(char* self, char* right){
    _Bool __result31__ = strcmp(self,right)!=0;
    come_release_malloced_mem();
    return __result31__;
come_release_malloced_mem();
}

_Bool charp_operator_not_equals(char* self, char* right){
    _Bool __result32__ = strcmp(self,right)!=0;
    come_release_malloced_mem();
    return __result32__;
come_release_malloced_mem();
}

char* charp_operator_add(char* self, char* right){
int len_47;
void* right_value1;
char* result_48;
memset(&len_47, 0, sizeof(int)); /* ddd */
memset(&right_value1, 0, sizeof(void*));
memset(&result_48, 0, sizeof(char*)); /* ddd */
    len_47=strlen(self)+strlen(right);
    result_48=(char*)come_increment_ref_count(((char*)(right_value1=(char*)come_calloc(1, sizeof(char)*(1*(len_47+1))))));
    if(right_value1) { right_value1 = come_decrement_ref_count(right_value1, (void*)0, (void*)0, 1, 0); }
    strncpy(result_48,self,len_47+1);
    strncat(result_48,right,len_47+1);
    char* __result34__ = result_48;
    if(result_48) { result_48 = come_decrement_ref_count(result_48, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result34__;
come_release_malloced_mem();
}

char* string_operator_add(char* self, char* right){
int len_49;
void* right_value2;
char* result_50;
memset(&len_49, 0, sizeof(int)); /* ddd */
memset(&right_value2, 0, sizeof(void*));
memset(&result_50, 0, sizeof(char*)); /* ddd */
    len_49=strlen(self)+strlen(right);
    result_50=(char*)come_increment_ref_count(((char*)(right_value2=(char*)come_calloc(1, sizeof(char)*(1*(len_49+1))))));
    if(right_value2) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0); }
    strncpy(result_50,self,len_49+1);
    strncat(result_50,right,len_49+1);
    char* __result35__ = result_50;
    if(result_50) { result_50 = come_decrement_ref_count(result_50, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result35__;
come_release_malloced_mem();
}

unsigned int int_get_hash_key(int value){
    unsigned int __result36__ = value;
    come_release_malloced_mem();
    return __result36__;
come_release_malloced_mem();
}

unsigned int bool_get_hash_key(_Bool value){
    unsigned int __result37__ = (int_get_hash_key(((int)value)));
    come_release_malloced_mem();
    return __result37__;
come_release_malloced_mem();
}

unsigned int string_get_hash_key(char* value){
int result_51;
char* p_52;
memset(&result_51, 0, sizeof(int)); /* ddd */
memset(&p_52, 0, sizeof(char*)); /* ddd */
    result_51=0;
    p_52=value;
    while(*p_52) {
        result_51+=(*p_52);
        p_52++;
    }
    unsigned int __result38__ = result_51;
    come_release_malloced_mem();
    return __result38__;
come_release_malloced_mem();
}

unsigned int charp_get_hash_key(char* value){
int result_53;
char* p_54;
memset(&result_53, 0, sizeof(int)); /* ddd */
memset(&p_54, 0, sizeof(char*)); /* ddd */
    result_53=0;
    p_54=value;
    while(*p_54) {
        result_53+=(*p_54);
        p_54++;
    }
    unsigned int __result39__ = result_53;
    come_release_malloced_mem();
    return __result39__;
come_release_malloced_mem();
}

int int_clone(int self){
    int __result42__ = self;
    come_release_malloced_mem();
    return __result42__;
come_release_malloced_mem();
}

char* charp_clone(char* self){
void* right_value3;
memset(&right_value3, 0, sizeof(void*));
    if(self==((void*)0)) {
        char* __result43__ = ((void*)0);
        come_release_malloced_mem();
        return __result43__;
    }
    char* __result44__ = ((char*)(right_value3=__builtin_string(self)));
    come_release_malloced_mem();
    return __result44__;
come_release_malloced_mem();
}

char* string_clone(char* self){
void* right_value4;
memset(&right_value4, 0, sizeof(void*));
    if(self==((void*)0)) {
        char* __result45__ = ((void*)0);
        come_release_malloced_mem();
        return __result45__;
    }
    char* __result46__ = ((char*)(right_value4=__builtin_string(self)));
    come_release_malloced_mem();
    return __result46__;
come_release_malloced_mem();
}

int long_clone(long self){
    int __result47__ = self;
    come_release_malloced_mem();
    return __result47__;
come_release_malloced_mem();
}

short int short_clone(short short self){
    short int __result48__ = self;
    come_release_malloced_mem();
    return __result48__;
come_release_malloced_mem();
}

double double_clone(double self){
    double __result49__ = self;
    come_release_malloced_mem();
    return __result49__;
come_release_malloced_mem();
}

char char_clone(char self){
    char __result41__ = self;
    come_release_malloced_mem();
    return __result41__;
come_release_malloced_mem();
}

float float_clone(float self){
    float __result50__ = self;
    come_release_malloced_mem();
    return __result50__;
come_release_malloced_mem();
}

void buffer_finalize(struct buffer* self){
    if(self&&self->buf) {
        if(self->buf) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0); }
    }
come_release_malloced_mem();
}

struct buffer* buffer_initialize(struct buffer* self){
void* right_value5;
char* __dec_obj1;
memset(&right_value5, 0, sizeof(void*));
    self->size=128;
    __dec_obj1=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value5=(char*)come_calloc(1, sizeof(char)*(1*(self->size))))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value5) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0); }
    self->buf[0]=0;
    self->len=0;
    struct buffer* __result51__ = self;
    if(self) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result51__;
come_release_malloced_mem();
}

struct buffer* buffer_clone(struct buffer* self){
void* right_value6;
struct buffer* result_55;
void* right_value7;
char* __dec_obj2;
memset(&right_value6, 0, sizeof(void*));
memset(&result_55, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value7, 0, sizeof(void*));
    if(self==((void*)0)) {
        struct buffer* __result52__ = ((void*)0);
        come_release_malloced_mem();
        return __result52__;
    }
    result_55=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))));
    if(right_value6) { come_call_finalizer(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
    result_55->size=self->size;
    __dec_obj2=result_55->buf;
    result_55->buf=(char*)come_increment_ref_count(((char*)(right_value7=(char*)come_calloc(1, sizeof(char)*(1*(self->size))))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
    if(right_value7) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0); }
    result_55->len=self->len;
    memcpy(result_55->buf,self->buf,self->len);
    struct buffer* __result53__ = result_55;
    if(result_55) { come_call_finalizer(buffer_finalize,result_55, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result53__;
come_release_malloced_mem();
}

int buffer_length(struct buffer* self){
    int __result54__ = self->len;
    come_release_malloced_mem();
    return __result54__;
come_release_malloced_mem();
}

void buffer_reset(struct buffer* self){
    self->buf[0]=0;
    self->len=0;
come_release_malloced_mem();
}

void buffer_append(struct buffer* self, char* mem, int size){
void* right_value8;
char* old_buf_56;
int old_len_57;
int new_size_58;
void* right_value9;
char* __dec_obj3;
memset(&right_value8, 0, sizeof(void*));
memset(&old_buf_56, 0, sizeof(char*)); /* ddd */
memset(&old_len_57, 0, sizeof(int)); /* ddd */
memset(&new_size_58, 0, sizeof(int)); /* ddd */
memset(&right_value9, 0, sizeof(void*));
    if(self->len+size+1+1>=self->size) {
        old_buf_56=(char*)come_increment_ref_count(((char*)(right_value8=charp_clone(self->buf))));
        if(right_value8) { right_value8 = come_decrement_ref_count(right_value8, (void*)0, (void*)0, 1, 0); }
        old_len_57=self->len;
        new_size_58=(self->size+size+1)*2;
        __dec_obj3=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value9=(char*)come_calloc(1, sizeof(char)*(1*(new_size_58))))));
        if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
        if(right_value9) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0); }
        memcpy(self->buf,old_buf_56,old_len_57);
        self->buf[old_len_57]=0;
        self->size=new_size_58;
        if(old_buf_56) { old_buf_56 = come_decrement_ref_count(old_buf_56, (void*)0, (void*)0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
come_release_malloced_mem();
}

void buffer_append_char(struct buffer* self, char c){
int new_size_59;
void* right_value10;
char* __dec_obj4;
memset(&new_size_59, 0, sizeof(int)); /* ddd */
memset(&right_value10, 0, sizeof(void*));
    if(self->len+1+1+1>=self->size) {
        new_size_59=(self->size+10+1)*2;
        __dec_obj4=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value10=(char*)come_calloc(1, sizeof(char)*(1*(new_size_59))))));
        if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
        if(right_value10) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0); }
        self->size=new_size_59;
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
come_release_malloced_mem();
}

void buffer_append_str(struct buffer* self, char* str){
    buffer_append(self,str,strlen(str));
come_release_malloced_mem();
}

void buffer_append_nullterminated_str(struct buffer* self, char* str){
    buffer_append(self,str,strlen(str));
    buffer_append_char(self,0);
come_release_malloced_mem();
}

void buffer_append_int(struct buffer* self, int value){
    buffer_append(self,(char*)&value,sizeof(int));
come_release_malloced_mem();
}

void buffer_append_long(struct buffer* self, long value){
    buffer_append(self,(char*)&value,sizeof(long));
come_release_malloced_mem();
}

void buffer_append_short(struct buffer* self, short short value){
    buffer_append(self,(char*)&value,sizeof(short short));
come_release_malloced_mem();
}

void buffer_alignment(struct buffer* self){
int len_60;
int new_size_61;
void* right_value12;
char* __dec_obj5;
int i_62;
memset(&len_60, 0, sizeof(int)); /* ddd */
memset(&new_size_61, 0, sizeof(int)); /* ddd */
memset(&right_value12, 0, sizeof(void*));
memset(&i_62, 0, sizeof(int)); /* ddd */
    len_60=self->len;
    len_60=(len_60+3)&~3;
    if(len_60>=self->size) {
        new_size_61=(self->size+1+1)*2;
        __dec_obj5=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value12=(char*)come_calloc(1, sizeof(char)*(1*(new_size_61))))));
        if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
        if(right_value12) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0); }
        self->size=new_size_61;
    }
    for(
    i_62=self->len;
    i_62<len_60;
    i_62++
    ){
        self->buf[i_62]=0;
    }
    self->len=len_60;
come_release_malloced_mem();
}

int buffer_compare(struct buffer* left, struct buffer* right){
    int __result56__ = strcmp(left->buf,right->buf);
    come_release_malloced_mem();
    return __result56__;
come_release_malloced_mem();
}

struct buffer* string_to_buffer(char* self){
void* right_value13;
void* right_value14;
struct buffer* result_63;
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&result_63, 0, sizeof(struct buffer*)); /* ddd */
    result_63=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value13) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value14) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(result_63,self);
    struct buffer* __result57__ = result_63;
    if(result_63) { come_call_finalizer(buffer_finalize,result_63, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result57__;
come_release_malloced_mem();
}

void FILE_fclose(struct _IO_FILE* f){
    fclose(f);
come_release_malloced_mem();
}

char* FILE_read(struct _IO_FILE* f){
void* right_value16;
void* right_value17;
struct buffer* buf_68;
int size_70;
void* right_value18;
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&buf_68, 0, sizeof(struct buffer*)); /* ddd */
memset(&size_70, 0, sizeof(int)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
    buf_68=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value16) { come_call_finalizer(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value17) { come_call_finalizer(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0); }
    while(1) {
        char buf2_69[8192];
        memset(&buf2_69, 0, sizeof(buf2_69)); /* aaa */
        size_70=fread(buf2_69,1,8192,f);
        buffer_append(buf_68,buf2_69,size_70);
        if(size_70<8192) {
            break;
        }
    }
    char* __result59__ = ((char*)(right_value18=buffer_to_string(buf_68)));
    if(buf_68) { come_call_finalizer(buffer_finalize,buf_68, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result59__;
come_release_malloced_mem();
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
va_list args_72;
memset(&args_72, 0, sizeof(va_list)); /* bbb */
    char msg2_71[1024];
    memset(&msg2_71, 0, sizeof(msg2_71)); /* aaa */
    __builtin_va_start(args_72,msg);
    vsnprintf(msg2_71,1024,msg,args_72);
    __builtin_va_end(args_72);
    (void)fprintf(f,"%s",msg2_71);
    struct _IO_FILE* __result60__ = f;
    if((&args_72)) { come_call_finalizer(va_list_finalize,(&args_72), (void*)0, (void*)0, 1, 0, 0); }
    come_release_malloced_mem();
    return __result60__;
come_release_malloced_mem();
}

char* string_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_73;
void* right_value19;
memset(&f_73, 0, sizeof(struct _IO_FILE*)); /* bbb */
memset(&right_value19, 0, sizeof(void*));
    if(append) {
        f_73=fopen(file_name,"a");
    }
    else {
        f_73=fopen(file_name,"w");
    }
    FILE_fprintf(f_73,"%s",self);
    FILE_fclose(f_73);
    char* __result61__ = ((char*)(right_value19=__builtin_string(self)));
    come_release_malloced_mem();
    return __result61__;
come_release_malloced_mem();
}

char* charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_74;
void* right_value20;
memset(&f_74, 0, sizeof(struct _IO_FILE*)); /* bbb */
memset(&right_value20, 0, sizeof(void*));
    if(append) {
        f_74=fopen(file_name,"a");
    }
    else {
        f_74=fopen(file_name,"w");
    }
    FILE_fprintf(f_74,"%s",self);
    FILE_fclose(f_74);
    char* __result62__ = ((char*)(right_value20=__builtin_string(self)));
    come_release_malloced_mem();
    return __result62__;
come_release_malloced_mem();
}

int string_length(char* str){
    int __result63__ = strlen(str);
    come_release_malloced_mem();
    return __result63__;
come_release_malloced_mem();
}

int charp_length(char* str){
    int __result64__ = strlen(str);
    come_release_malloced_mem();
    return __result64__;
come_release_malloced_mem();
}

char* string_reverse(char* str){
int len_75;
void* right_value21;
char* result_76;
int i_77;
memset(&len_75, 0, sizeof(int)); /* ddd */
memset(&right_value21, 0, sizeof(void*));
memset(&result_76, 0, sizeof(char*)); /* ddd */
memset(&i_77, 0, sizeof(int)); /* ddd */
    len_75=strlen(str);
    result_76=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(len_75+1))))));
    if(right_value21) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0); }
    for(
    i_77=0;
    i_77<len_75;
    i_77++
    ){
        result_76[i_77]=str[len_75-i_77-1];
    }
    result_76[len_75]=0;
    char* __result65__ = result_76;
    if(result_76) { result_76 = come_decrement_ref_count(result_76, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result65__;
come_release_malloced_mem();
}

char* charp_reverse(char* str){
int len_78;
void* right_value22;
char* result_79;
int i_80;
memset(&len_78, 0, sizeof(int)); /* ddd */
memset(&right_value22, 0, sizeof(void*));
memset(&result_79, 0, sizeof(char*)); /* ddd */
memset(&i_80, 0, sizeof(int)); /* ddd */
    len_78=strlen(str);
    result_79=(char*)come_increment_ref_count(((char*)(right_value22=(char*)come_calloc(1, sizeof(char)*(1*(len_78+1))))));
    if(right_value22) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0); }
    for(
    i_80=0;
    i_80<len_78;
    i_80++
    ){
        result_79[i_80]=str[len_78-i_80-1];
    }
    result_79[len_78]=0;
    char* __result66__ = result_79;
    if(result_79) { result_79 = come_decrement_ref_count(result_79, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result66__;
come_release_malloced_mem();
}

char* charp_substring(char* str, int head, int tail){
void* right_value23;
int len_81;
void* right_value24;
void* right_value25;
void* right_value26;
void* right_value27;
void* right_value28;
char* result_82;
memset(&right_value23, 0, sizeof(void*));
memset(&len_81, 0, sizeof(int)); /* ddd */
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&result_82, 0, sizeof(char*)); /* ddd */
    if(str==((void*)0)) {
        char* __result67__ = ((char*)(right_value23=__builtin_string("")));
        come_release_malloced_mem();
        return __result67__;
    }
    len_81=strlen(str);
    if(head<0) {
        head+=len_81;
    }
    if(tail<0) {
        tail+=len_81+1;
    }
    if(head>tail) {
        char* __result68__ = ((char*)(right_value25=string_reverse(((char*)(right_value24=charp_substring(str,tail,head))))));
        if(right_value24) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0); }
        come_release_malloced_mem();
        return __result68__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_81) {
        tail=len_81;
    }
    if(head==tail) {
        char* __result69__ = ((char*)(right_value26=__builtin_string("")));
        come_release_malloced_mem();
        return __result69__;
    }
    if(tail-head+1<1) {
        char* __result70__ = ((char*)(right_value27=__builtin_string("")));
        come_release_malloced_mem();
        return __result70__;
    }
    result_82=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1))))));
    if(right_value28) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0); }
    memcpy(result_82,str+head,tail-head);
    result_82[tail-head]=0;
    char* __result71__ = result_82;
    if(result_82) { result_82 = come_decrement_ref_count(result_82, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result71__;
come_release_malloced_mem();
}

char* string_substring(char* str, int head, int tail){
void* right_value29;
int len_83;
void* right_value30;
void* right_value31;
void* right_value32;
void* right_value33;
void* right_value34;
char* result_84;
memset(&right_value29, 0, sizeof(void*));
memset(&len_83, 0, sizeof(int)); /* ddd */
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&result_84, 0, sizeof(char*)); /* ddd */
    if(str==((void*)0)) {
        char* __result72__ = ((char*)(right_value29=__builtin_string("")));
        come_release_malloced_mem();
        return __result72__;
    }
    len_83=strlen(str);
    if(head<0) {
        head+=len_83;
    }
    if(tail<0) {
        tail+=len_83+1;
    }
    if(head>tail) {
        char* __result73__ = ((char*)(right_value31=string_reverse(((char*)(right_value30=charp_substring(str,tail,head))))));
        if(right_value30) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0); }
        come_release_malloced_mem();
        return __result73__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_83) {
        tail=len_83;
    }
    if(head==tail) {
        char* __result74__ = ((char*)(right_value32=__builtin_string("")));
        come_release_malloced_mem();
        return __result74__;
    }
    if(tail-head+1<1) {
        char* __result75__ = ((char*)(right_value33=__builtin_string("")));
        come_release_malloced_mem();
        return __result75__;
    }
    result_84=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1))))));
    if(right_value34) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0); }
    memcpy(result_84,str+head,tail-head);
    result_84[tail-head]=0;
    char* __result76__ = result_84;
    if(result_84) { result_84 = come_decrement_ref_count(result_84, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result76__;
come_release_malloced_mem();
}

char* string_chomp(char* str){
void* right_value35;
char* result_85;
void* right_value36;
memset(&right_value35, 0, sizeof(void*));
memset(&result_85, 0, sizeof(char*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
    result_85=(char*)come_increment_ref_count(((char*)(right_value35=__builtin_string(str))));
    if(right_value35) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0); }
    if(result_85[string_length(result_85)-1]==10) {
        char* __result77__ = ((char*)(right_value36=string_substring(result_85,0,-2)));
        come_release_malloced_mem();
        return __result77__;
    }
    char* __result78__ = result_85;
    if(result_85) { result_85 = come_decrement_ref_count(result_85, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result78__;
come_release_malloced_mem();
}

char* charp_chomp(char* str){
void* right_value37;
char* result_86;
void* right_value38;
memset(&right_value37, 0, sizeof(void*));
memset(&result_86, 0, sizeof(char*)); /* ddd */
memset(&right_value38, 0, sizeof(void*));
    result_86=(char*)come_increment_ref_count(((char*)(right_value37=__builtin_string(str))));
    if(right_value37) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0); }
    if(result_86[string_length(result_86)-1]==10) {
        char* __result79__ = ((char*)(right_value38=string_substring(result_86,0,-2)));
        come_release_malloced_mem();
        return __result79__;
    }
    char* __result80__ = result_86;
    if(result_86) { result_86 = come_decrement_ref_count(result_86, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result80__;
come_release_malloced_mem();
}

char* xbasename(char* path){
char* p_87;
void* right_value39;
void* right_value40;
void* right_value41;
memset(&p_87, 0, sizeof(char*)); /* ddd */
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
    p_87=path+strlen(path);
    while(p_87>=path) {
        if(*p_87==47) {
            break;
        }
        else {
            p_87--;
        }
    }
    if(p_87<path) {
        char* __result81__ = ((char*)(right_value39=__builtin_string(path)));
        come_release_malloced_mem();
        return __result81__;
    }
    else {
        char* __result82__ = ((char*)(right_value40=__builtin_string(p_87+1)));
        come_release_malloced_mem();
        return __result82__;
    }
    char* __result83__ = ((char*)(right_value41=__builtin_string("")));
    come_release_malloced_mem();
    return __result83__;
come_release_malloced_mem();
}

char* xsprintf(char* msg, ...){
va_list args_64;
char* result_65;
int len_66;
void* right_value15;
char* result2_67;
memset(&args_64, 0, sizeof(va_list)); /* bbb */
memset(&result_65, 0, sizeof(char*)); /* bbb */
memset(&len_66, 0, sizeof(int)); /* ddd */
memset(&right_value15, 0, sizeof(void*));
memset(&result2_67, 0, sizeof(char*)); /* ddd */
    __builtin_va_start(args_64,msg);
    len_66=vasprintf(&result_65,msg,args_64);
    __builtin_va_end(args_64);
    if(len_66<0) {
        printf("vasprintf can't get heap memory.(msg %s)\n",msg);
        exit(2);
    }
    result2_67=(char*)come_increment_ref_count(((char*)(right_value15=__builtin_string(result_65))));
    if(right_value15) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0); }
    free(result_65);
    char* __result58__ = result2_67;
    if((&args_64)) { come_call_finalizer(va_list_finalize,(&args_64), (void*)0, (void*)0, 1, 0, 0); }
    if(result2_67) { result2_67 = come_decrement_ref_count(result2_67, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result58__;
come_release_malloced_mem();
}

char* xextname(char* path){
char* p_90;
void* right_value48;
void* right_value49;
void* right_value50;
memset(&p_90, 0, sizeof(char*)); /* ddd */
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
    p_90=path+strlen(path);
    while(p_90>=path) {
        if(*p_90==46) {
            break;
        }
        else {
            p_90--;
        }
    }
    if(p_90<path) {
        char* __result88__ = ((char*)(right_value48=__builtin_string(path)));
        come_release_malloced_mem();
        return __result88__;
    }
    else {
        char* __result89__ = ((char*)(right_value49=__builtin_string(p_90+1)));
        come_release_malloced_mem();
        return __result89__;
    }
    char* __result90__ = ((char*)(right_value50=__builtin_string("")));
    come_release_malloced_mem();
    return __result90__;
come_release_malloced_mem();
}

char* xdirname(char* path){
void* right_value42;
void* right_value43;
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
    char* __result84__ = ((char*)(right_value43=__builtin_string(dirname(((char*)(right_value42=__builtin_string(path)))))));
    if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
    come_release_malloced_mem();
    return __result84__;
come_release_malloced_mem();
}

char* xnoextname(char* path){
void* right_value44;
char* path2_88;
char* p_89;
void* right_value45;
void* right_value46;
void* right_value47;
memset(&right_value44, 0, sizeof(void*));
memset(&path2_88, 0, sizeof(char*)); /* ddd */
memset(&p_89, 0, sizeof(char*)); /* ddd */
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
    path2_88=(char*)come_increment_ref_count(((char*)(right_value44=xbasename(path))));
    if(right_value44) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0); }
    p_89=path2_88+strlen(path2_88);
    while(p_89>=path2_88) {
        if(*p_89==46) {
            break;
        }
        else {
            p_89--;
        }
    }
    if(p_89<path2_88) {
        char* __result85__ = ((char*)(right_value45=__builtin_string(path2_88)));
        come_release_malloced_mem();
        return __result85__;
    }
    else {
        char* __result86__ = ((char*)(right_value46=string_substring(path2_88,0,p_89-path2_88)));
        come_release_malloced_mem();
        return __result86__;
    }
    char* __result87__ = ((char*)(right_value47=__builtin_string("")));
    if(path2_88) { path2_88 = come_decrement_ref_count(path2_88, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result87__;
come_release_malloced_mem();
}

char* xrealpath(char* path){
char* result_91;
void* right_value51;
char* result2_92;
memset(&result_91, 0, sizeof(char*)); /* ddd */
memset(&right_value51, 0, sizeof(void*));
memset(&result2_92, 0, sizeof(char*)); /* ddd */
    result_91=realpath(path,((void*)0));
    result2_92=(char*)come_increment_ref_count(((char*)(right_value51=__builtin_string(result_91))));
    if(right_value51) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0); }
    free(result_91);
    char* __result91__ = result2_92;
    if(result2_92) { result2_92 = come_decrement_ref_count(result2_92, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result91__;
come_release_malloced_mem();
}

_Bool xiswalpha(unsigned int c){
_Bool result_93;
memset(&result_93, 0, sizeof(_Bool)); /* ddd */
    result_93=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result92__ = result_93;
    come_release_malloced_mem();
    return __result92__;
come_release_malloced_mem();
}

_Bool xiswblank(unsigned int c){
    _Bool __result93__ = c==32||c==9;
    come_release_malloced_mem();
    return __result93__;
come_release_malloced_mem();
}

_Bool xiswdigit(unsigned int c){
    _Bool __result94__ = (c>=48&&c<=57);
    come_release_malloced_mem();
    return __result94__;
come_release_malloced_mem();
}

_Bool xiswalnum(unsigned int c){
    _Bool __result95__ = xiswalpha(c)||xiswdigit(c);
    come_release_malloced_mem();
    return __result95__;
come_release_malloced_mem();
}

_Bool xisalpha(char c){
_Bool result_94;
memset(&result_94, 0, sizeof(_Bool)); /* ddd */
    result_94=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result96__ = result_94;
    come_release_malloced_mem();
    return __result96__;
come_release_malloced_mem();
}

_Bool xisblank(char c){
    _Bool __result97__ = c==32||c==9;
    come_release_malloced_mem();
    return __result97__;
come_release_malloced_mem();
}

_Bool xisdigit(char c){
    _Bool __result98__ = (c>=48&&c<=57);
    come_release_malloced_mem();
    return __result98__;
come_release_malloced_mem();
}

_Bool xisalnum(char c){
    _Bool __result99__ = xisalpha(c)||xisdigit(c);
    come_release_malloced_mem();
    return __result99__;
come_release_malloced_mem();
}

_Bool xisascii(char c){
_Bool result_95;
memset(&result_95, 0, sizeof(_Bool)); /* ddd */
    result_95=(c>=32&&c<=126);
    _Bool __result100__ = result_95;
    come_release_malloced_mem();
    return __result100__;
come_release_malloced_mem();
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* right_value57;
void* right_value58;
struct list$1charph* result_103;
void* right_value62;
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&result_103, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
    result_103=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value58=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value57=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(right_value58) { come_call_finalizer(list$1charphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0); }
    while(1) {
        char buf_104[8192];
        memset(&buf_104, 0, sizeof(buf_104)); /* aaa */
        if(fgets(buf_104,8192,f)==((void*)0)) {
            break;
        }
        list$1charphp_push_back(result_103,(char*)come_increment_ref_count(((char*)(right_value62=__builtin_string(buf_104)))));
        if(right_value62) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0); }
    }
    struct list$1charph* __result108__ = result_103;
    if(result_103) { come_call_finalizer(list$1charphp_finalize,result_103, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result108__;
come_release_malloced_mem();
}

char* string_to_string(char* self){
void* right_value56;
memset(&right_value56, 0, sizeof(void*));
    char* __result106__ = ((char*)(right_value56=__builtin_string(self)));
    come_release_malloced_mem();
    return __result106__;
come_release_malloced_mem();
}

void bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
come_release_malloced_mem();
}

void bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
come_release_malloced_mem();
}

char* charp_read(char* file_name){
struct _IO_FILE* f_99;
void* right_value54;
void* right_value55;
char* result_100;
memset(&f_99, 0, sizeof(struct _IO_FILE*)); /* ddd */
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&result_100, 0, sizeof(char*)); /* ddd */
    f_99=fopen(file_name,"r");
    if(f_99==((void*)0)) {
        char* __result104__ = ((char*)(right_value54=__builtin_string("")));
        come_release_malloced_mem();
        return __result104__;
    }
    result_100=(char*)come_increment_ref_count(((char*)(right_value55=FILE_read(f_99))));
    if(right_value55) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0); }
    FILE_fclose(f_99);
    char* __result105__ = result_100;
    if(result_100) { result_100 = come_decrement_ref_count(result_100, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result105__;
come_release_malloced_mem();
}

char* string_read(char* file_name){
struct _IO_FILE* f_97;
void* right_value52;
void* right_value53;
char* result_98;
memset(&f_97, 0, sizeof(struct _IO_FILE*)); /* ddd */
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&result_98, 0, sizeof(char*)); /* ddd */
    f_97=fopen(file_name,"r");
    if(f_97==((void*)0)) {
        char* __result102__ = ((char*)(right_value52=__builtin_string("")));
        come_release_malloced_mem();
        return __result102__;
    }
    result_98=(char*)come_increment_ref_count(((char*)(right_value53=FILE_read(f_97))));
    if(right_value53) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0); }
    FILE_fclose(f_97);
    char* __result103__ = result_98;
    if(result_98) { result_98 = come_decrement_ref_count(result_98, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result103__;
come_release_malloced_mem();
}

_Bool xiswascii(unsigned int c){
_Bool result_96;
memset(&result_96, 0, sizeof(_Bool)); /* ddd */
    result_96=(c>=32&&c<=126);
    _Bool __result101__ = result_96;
    come_release_malloced_mem();
    return __result101__;
come_release_malloced_mem();
}

char* buffer_to_string(struct buffer* self){
void* right_value11;
memset(&right_value11, 0, sizeof(void*));
    char* __result55__ = ((char*)(right_value11=__builtin_string(self->buf)));
    come_release_malloced_mem();
    return __result55__;
come_release_malloced_mem();
}

static void* come_alloc_mem_from_heap_pool(int size){
void* result_8;
struct sMem* it_9;
struct sMem* prev_it_10;
int new_size_pages_11;
char** new_mem_pages_12;
int i_13;
int i_14;
memset(&result_8, 0, sizeof(void*)); /* ddd */
memset(&it_9, 0, sizeof(struct sMem*)); /* ddd */
memset(&prev_it_10, 0, sizeof(struct sMem*)); /* ddd */
memset(&new_size_pages_11, 0, sizeof(int)); /* ddd */
memset(&new_mem_pages_12, 0, sizeof(char**)); /* ddd */
memset(&i_13, 0, sizeof(int)); /* ddd */
memset(&i_14, 0, sizeof(int)); /* ddd */
    result_8=((void*)0);
    if(size+sizeof(int)>=4096) {
        result_8=(char*)calloc(1,size+sizeof(int))+sizeof(int);
        *(int*)(result_8-sizeof(int))=size;
        void* __result7__ = result_8;
        come_release_malloced_mem();
        return __result7__;
    }
    it_9=gHeapPool.free_mem;
    prev_it_10=it_9;
    while(it_9) {
        if(size<=it_9->size) {
            result_8=it_9->mem+sizeof(int);
            if(it_9==gHeapPool.free_mem) {
                if(it_9->next==((void*)0)) {
                    gHeapPool.free_mem=((void*)0);
                    free(it_9);
                }
                else {
                    gHeapPool.free_mem=it_9->next;
                    free(it_9);
                }
            }
            else {
                prev_it_10->next=it_9->next;
                free(it_9);
            }
            memset(result_8,0,size);
            void* __result8__ = result_8;
            come_release_malloced_mem();
            return __result8__;
        }
        prev_it_10=it_9;
        it_9=it_9->next;
    }
    if(gHeapPool.top+size+sizeof(int)-gHeapPool.mem_pages[gHeapPool.num_pages]>=4096) {
        gHeapPool.num_pages++;
        if(gHeapPool.num_pages==gHeapPool.size_pages) {
            new_size_pages_11=gHeapPool.size_pages+4;
            new_mem_pages_12=calloc(1,sizeof(char*)*new_size_pages_11);
            for(
            i_13=0;
            i_13<gHeapPool.size_pages;
            i_13++
            ){
                new_mem_pages_12[i_13]=gHeapPool.mem_pages[i_13];
            }
            for(
            i_14=gHeapPool.size_pages;
            i_14<new_size_pages_11;
            i_14++
            ){
                new_mem_pages_12[i_14]=calloc(1,sizeof(char)*4096);
            }
            free(gHeapPool.mem_pages);
            gHeapPool.mem_pages=new_mem_pages_12;
            gHeapPool.size_pages=new_size_pages_11;
        }
        gHeapPool.top=gHeapPool.mem_pages[gHeapPool.num_pages];
    }
    result_8=gHeapPool.top+sizeof(int);
    *(int*)(result_8-sizeof(int))=size;
    gHeapPool.top+=size+sizeof(int);
    memset(result_8,0,size);
    void* __result9__ = result_8;
    come_release_malloced_mem();
    return __result9__;
come_release_malloced_mem();
}

static void* my_calloc(int a, int b){
    void* __result10__ = calloc(a,b);
    come_release_malloced_mem();
    return __result10__;
come_release_malloced_mem();
}

static void come_free_mem_of_heap_pool(char* mem){
int size_15;
struct sMem* it_16;
struct sMem* malloced_free_mem_17;
struct sMem* it_18;
struct sMem* free_mem_19;
memset(&size_15, 0, sizeof(int)); /* ddd */
memset(&it_16, 0, sizeof(struct sMem*)); /* ddd */
memset(&malloced_free_mem_17, 0, sizeof(struct sMem*)); /* ddd */
memset(&it_18, 0, sizeof(struct sMem*)); /* ddd */
memset(&free_mem_19, 0, sizeof(struct sMem*)); /* ddd */
    size_15=*(int*)(mem-sizeof(int));
    if(size_15+sizeof(int)>=4096) {
        it_16=gHeapPool.malloced_free_mem;
        while(it_16) {
            if(it_16->mem==mem-sizeof(int)) {
                come_release_malloced_mem();
                return;
            }
            it_16=it_16->next;
        }
        malloced_free_mem_17=calloc(1,sizeof(struct sMem));
        malloced_free_mem_17->mem=mem-sizeof(int);
        malloced_free_mem_17->size=size_15;
        malloced_free_mem_17->next=gHeapPool.malloced_free_mem;
        gHeapPool.malloced_free_mem=malloced_free_mem_17;
    }
    else {
        it_18=gHeapPool.free_mem;
        while(it_18) {
            if(it_18->mem==mem-sizeof(int)) {
                come_release_malloced_mem();
                return;
            }
            it_18=it_18->next;
        }
        free_mem_19=my_calloc(1,sizeof(struct sMem));
        free_mem_19->mem=mem-sizeof(int);
        free_mem_19->size=size_15;
        free_mem_19->next=gHeapPool.free_mem;
        gHeapPool.free_mem=free_mem_19;
    }
come_release_malloced_mem();
}

static void va_list_finalize(va_list* self){
    come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1charph* __result107__ = self;
        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result107__;
    come_release_malloced_mem();
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_101;
struct list_item$1charph* prev_it_102;
memset(&it_101, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&prev_it_102, 0, sizeof(struct list_item$1charph*)); /* ddd */
            it_101=self->head;
            while(it_101!=((void*)0)) {
                if(1) {
                    if(it_101->item) { it_101->item = come_decrement_ref_count(it_101->item, (void*)0, (void*)0, 0, 0); }
                }
                prev_it_102=it_101;
                it_101=it_101->next;
                come_free_object(prev_it_102);
            }
        come_release_malloced_mem();
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value59;
struct list_item$1charph* litem_105;
char* __dec_obj6;
void* right_value60;
struct list_item$1charph* litem_106;
char* __dec_obj7;
void* right_value61;
struct list_item$1charph* litem_107;
char* __dec_obj8;
memset(&right_value59, 0, sizeof(void*));
memset(&litem_105, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value60, 0, sizeof(void*));
memset(&litem_106, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value61, 0, sizeof(void*));
memset(&litem_107, 0, sizeof(struct list_item$1charph*)); /* ddd */
            if(self->len==0) {
                litem_105=((struct list_item$1charph*)(right_value59=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_105->prev=((void*)0);
                litem_105->next=((void*)0);
                __dec_obj6=litem_105->item;
                litem_105->item=(char*)come_increment_ref_count(item);
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                self->tail=litem_105;
                self->head=litem_105;
            }
            else if(self->len==1) {
                litem_106=((struct list_item$1charph*)(right_value60=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_106->prev=self->head;
                litem_106->next=((void*)0);
                __dec_obj7=litem_106->item;
                litem_106->item=(char*)come_increment_ref_count(item);
                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
                self->tail=litem_106;
                self->head->next=litem_106;
            }
            else {
                litem_107=((struct list_item$1charph*)(right_value61=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_107->prev=self->tail;
                litem_107->next=((void*)0);
                __dec_obj8=litem_107->item;
                litem_107->item=(char*)come_increment_ref_count(item);
                if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
                self->tail->next=litem_107;
                self->tail=litem_107;
            }
            self->len++;
            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
        come_release_malloced_mem();
}

