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
struct sLambdaNode
{
    struct sFun* mFun;
    int sline;
    char* sname;
};
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};
struct sFunNode
{
    struct sFun* mFun;
    int sline;
    char* sname;
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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);

static void sLambdaNode_finalize(struct sLambdaNode* self);
int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info);

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info);

_Bool sLambdaNode_terminated();

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self);
static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNodep_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_push_back2(struct list$1charph* self, char* item);
static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void sBlock_finalize(struct sBlock* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, _Bool var_args, char* block, struct sInfo* info);

static void sGenericsFun_finalize(struct sGenericsFun* self);
static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index);
static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value);
static struct sType* sTypep_clone(struct sType* self);
static void sTypep_finalize(struct sType* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
char* parse_attribute(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void list$1charpp_remove(struct list$1charp* self, char* item);
static void list$1charpp_delete(struct list$1charp* self, int head, int tail);
static void list$1charpp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void sFunp_finalize(struct sFun* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void list$1charpp_push_back(struct list$1charp* self, char* item);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static _Bool list$1charphp_contained(struct list$1charph* self, char* item);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);

static void sFunNode_finalize(struct sFunNode* self);
int sFunNode_sline(struct sFunNode* self, struct sInfo* info);

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info);

_Bool sFunNode_terminated();

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVarp_finalize(struct sVar* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct sVar* sVarp_clone(struct sVar* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charphp_length(struct list$1charph* self);
static void map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFunp_finalize(struct sGenericsFun* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int index);
static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self);
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






struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* finalizer_382;
void* right_value520;
char* real_fun_name_383;
void* right_value521;
struct sType* type2_384;
struct sClass* klass_385;
void* right_value522;
void* right_value523;
struct buffer* source_386;
struct tuple2$2charphsTypeph* it_388;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* name_390;
struct sType* field_type_391;
char* p_393;
int sline_394;
char* head_395;
struct buffer* source3_396;
struct buffer* __dec_obj105;
void* right_value524;
struct sBlock* block_397;
void* right_value525;
void* right_value526;
struct sType* result_type_398;
void* right_value527;
char* name_399;
void* right_value528;
struct sType* self_type_400;
struct sType* __list_values25___401[1];
void* right_value529;
void* right_value530;
struct list$1sTypeph* param_types_402;
void* right_value531;
char* __list_values26___403[1];
void* right_value532;
void* right_value533;
struct list$1charph* param_names_404;
void* right_value534;
void* right_value535;
struct list$1charph* param_default_parametors_405;
void* right_value536;
void* right_value537;
struct buffer* header_buf_406;
void* right_value538;
int i_407;
struct sType* param_type_408;
char* param_name_412;
void* right_value539;
void* right_value540;
void* right_value541;
void* right_value542;
struct sFun* fun_413;
void* right_value543;
struct sFun* fun2_414;
void* right_value544;
void* right_value545;
void* right_value546;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value550;
struct sNode* node_416;
struct buffer* __dec_obj108;
void* right_value551;
void* right_value552;
memset(&finalizer_382, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value520, 0, sizeof(void*));
memset(&real_fun_name_383, 0, sizeof(char*)); /* ddd */
memset(&right_value521, 0, sizeof(void*));
memset(&type2_384, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_385, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value522, 0, sizeof(void*));
memset(&right_value523, 0, sizeof(void*));
memset(&source_386, 0, sizeof(struct buffer*)); /* ddd */
memset(&it_388, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_390, 0, sizeof(char*)); /* ccc */
memset(&field_type_391, 0, sizeof(struct sType*)); /* ccc */
memset(&name_390, 0, sizeof(char*)); /* eee */
memset(&field_type_391, 0, sizeof(struct sType*)); /* eee */
memset(&p_393, 0, sizeof(char*)); /* ddd */
memset(&sline_394, 0, sizeof(int)); /* ddd */
memset(&head_395, 0, sizeof(char*)); /* ddd */
memset(&source3_396, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value524, 0, sizeof(void*));
memset(&block_397, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value525, 0, sizeof(void*));
memset(&right_value526, 0, sizeof(void*));
memset(&result_type_398, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value527, 0, sizeof(void*));
memset(&name_399, 0, sizeof(char*)); /* ddd */
memset(&right_value528, 0, sizeof(void*));
memset(&self_type_400, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value529, 0, sizeof(void*));
memset(&right_value530, 0, sizeof(void*));
memset(&param_types_402, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value531, 0, sizeof(void*));
memset(&right_value532, 0, sizeof(void*));
memset(&right_value533, 0, sizeof(void*));
memset(&param_names_404, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value534, 0, sizeof(void*));
memset(&right_value535, 0, sizeof(void*));
memset(&param_default_parametors_405, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value536, 0, sizeof(void*));
memset(&right_value537, 0, sizeof(void*));
memset(&header_buf_406, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value538, 0, sizeof(void*));
memset(&i_407, 0, sizeof(int)); /* ddd */
memset(&param_type_408, 0, sizeof(struct sType*)); /* ddd */
memset(&param_name_412, 0, sizeof(char*)); /* ddd */
memset(&right_value539, 0, sizeof(void*));
memset(&right_value540, 0, sizeof(void*));
memset(&right_value541, 0, sizeof(void*));
memset(&right_value542, 0, sizeof(void*));
memset(&fun_413, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value543, 0, sizeof(void*));
memset(&fun2_414, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value544, 0, sizeof(void*));
memset(&right_value545, 0, sizeof(void*));
memset(&right_value546, 0, sizeof(void*));
memset(&right_value550, 0, sizeof(void*));
memset(&node_416, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value551, 0, sizeof(void*));
memset(&right_value552, 0, sizeof(void*));
    finalizer_382=((void*)0);
    real_fun_name_383=(char*)come_increment_ref_count(((char*)(right_value520=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value520) { right_value520 = come_decrement_ref_count(right_value520, (void*)0, (void*)0, 1, 0); }
    type2_384=(struct sType*)come_increment_ref_count(((struct sType*)(right_value521=solve_generics(type,type,info))));
    if(right_value521) { come_call_finalizer(sType_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_384;
    klass_385=type->mClass;
    if(type->mPointerNum>0&&klass_385->mStruct) {
        source_386=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value523=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value522=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value522) { come_call_finalizer(buffer_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value523) { come_call_finalizer(buffer_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_386,123);
        klass_385=map$2charphsClassphp_operator_load_element(info->classes,klass_385->mName);
        for(
        it_388=list$1tuple2$2charphsTypephphp_begin((klass_385->mFields));
        !list$1tuple2$2charphsTypephphp_end((klass_385->mFields));
        it_388=list$1tuple2$2charphsTypephphp_next((klass_385->mFields))
        ){
            multiple_assgin_var4=it_388;
            name_390=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
            field_type_391=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
            if(string_operator_equals(type->mClass->mName,field_type_391->mClass->mName)&&type->mPointerNum==field_type_391->mPointerNum&&field_type_391->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_391->mHeap) {
                char source2_392[1024];
                memset(&source2_392, 0, sizeof(source2_392)); /* aaa */
                snprintf(source2_392,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_390,name_390);
                buffer_append_str(source_386,source2_392);
            }
            if(name_390) { name_390 = come_decrement_ref_count(name_390, (void*)0, (void*)0, 0, 0); }
            if(field_type_391) { come_call_finalizer(sType_finalize,field_type_391, (void*)0, (void*)0, 0, 0, 0); }
        }
        buffer_append_char(source_386,125);
        p_393=info->p;
        sline_394=info->sline;
        head_395=info->head;
        source3_396=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj105=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_386);
        if(__dec_obj105) { come_call_finalizer(buffer_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0); }
        info->p=source_386->buf;
        info->head=source_386->buf;
        block_397=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value524=parse_block(info,(_Bool)0))));
        if(right_value524) { come_call_finalizer(sBlock_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0); }
        result_type_398=(struct sType*)come_increment_ref_count(((struct sType*)(right_value526=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value525=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value525) { come_call_finalizer(sType_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value526) { come_call_finalizer(sType_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0); }
        name_399=(char*)come_increment_ref_count(((char*)(right_value527=string_clone(real_fun_name_383))));
        if(right_value527) { right_value527 = come_decrement_ref_count(right_value527, (void*)0, (void*)0, 1, 0); }
        self_type_400=(struct sType*)come_increment_ref_count(((struct sType*)(right_value528=sType_clone(type))));
        if(right_value528) { come_call_finalizer(sType_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0); }
        self_type_400->mHeap=(_Bool)0;
        if(self_type_400->mPointerNum>1) {
            self_type_400->mPointerNum=1;
        }
        {__list_values25___401[0]=come_increment_ref_count(self_type_400);
}        param_types_402=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value530=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value529=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values25___401))));
        if(right_value530) { come_call_finalizer(list$1sTypephp_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values26___403[0]=come_increment_ref_count(((char*)(right_value531=__builtin_string("self"))));
}        param_names_404=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value533=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value532=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values26___403))));
        if(right_value531) { right_value531 = come_decrement_ref_count(right_value531, (void*)0, (void*)0, 1, 0); }
        if(right_value533) { come_call_finalizer(list$1charphp_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_405=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value535=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value534=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value535) { come_call_finalizer(list$1charphp_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_406=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value537=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value536=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value536) { come_call_finalizer(buffer_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value537) { come_call_finalizer(buffer_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_406,((char*)(right_value538=make_come_type_name_string(result_type_398,info))));
        if(right_value538) { right_value538 = come_decrement_ref_count(right_value538, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_406," ");
        buffer_append_str(header_buf_406,real_fun_name_383);
        buffer_append_str(header_buf_406,"(");
        for(
        i_407=0;
        i_407<list$1sTypephp_length(param_types_402);
        i_407++
        ){
            param_type_408=list$1sTypephp_operator_load_element(param_types_402,i_407);
            param_name_412=list$1charphp_operator_load_element(param_names_404,i_407);
            buffer_append_str(header_buf_406,((char*)(right_value539=make_come_type_name_string(param_type_408,info))));
            if(right_value539) { right_value539 = come_decrement_ref_count(right_value539, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_406," ");
            buffer_append_str(header_buf_406,param_name_412);
            if(i_407!=list$1sTypephp_length(param_types_402)-1) {
                buffer_append_str(header_buf_406,",");
            }
        }
        buffer_append_str(header_buf_406,")");
        result_type_398->mStatic=(_Bool)0;
        fun_413=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value542=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value540=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_399),(struct sType*)come_increment_ref_count(result_type_398),(struct list$1sTypeph*)come_increment_ref_count(param_types_402),(struct list$1charph*)come_increment_ref_count(param_names_404),(struct list$1charph*)come_increment_ref_count(param_default_parametors_405),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_397),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value541=buffer_to_string(header_buf_406)))),info))));
        if(right_value540) { come_call_finalizer(sFun_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value541) { right_value541 = come_decrement_ref_count(right_value541, (void*)0, (void*)0, 1, 0); }
        if(right_value542) { come_call_finalizer(sFun_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0); }
        fun2_414=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value543=__builtin_string(fun_name))));
        if(right_value543) { right_value543 = come_decrement_ref_count(right_value543, (void*)0, (void*)0, 1, 0); }
        if(fun2_414==((void*)0)||fun2_414->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value544=string_clone(name_399)))),(struct sFun*)come_increment_ref_count(fun_413));
            if(right_value544) { right_value544 = come_decrement_ref_count(right_value544, (void*)0, (void*)0, 1, 0); }
        }
        finalizer_382=fun_413;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value546=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value545=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_413),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=sFunNode_finalize;
        _inf_value6->clone=sFunNode_clone;
        _inf_value6->compile=sFunNode_compile;
        _inf_value6->sline=sFunNode_sline;
        _inf_value6->sname=sFunNode_sname;
        _inf_value6->terminated=sFunNode_terminated;
        node_416=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value550=_inf_value6)));
        if(right_value545) { come_call_finalizer(sFunNode_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value546) { come_call_finalizer(sFunNode_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value550) { right_value550 = come_decrement_ref_count(right_value550, ((struct sNode*)right_value550)->finalize, ((struct sNode*)right_value550)->_protocol_obj, 1, 0); } 
        if(!node_416->compile(node_416->_protocol_obj,info)) {
            err_msg(info,"compiling is failed(X)");
            exit(2);
        }
        __dec_obj108=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_396);
        if(__dec_obj108) { come_call_finalizer(buffer_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0); }
        info->p=p_393;
        info->head=head_395;
        info->sline=sline_394;
        if(source_386) { come_call_finalizer(buffer_finalize,source_386, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_396) { come_call_finalizer(buffer_finalize,source3_396, (void*)0, (void*)0, 0, 0, 0); }
        if(block_397) { come_call_finalizer(sBlock_finalize,block_397, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_398) { come_call_finalizer(sType_finalize,result_type_398, (void*)0, (void*)0, 0, 0, 0); }
        if(name_399) { name_399 = come_decrement_ref_count(name_399, (void*)0, (void*)0, 0, 0); }
        if(self_type_400) { come_call_finalizer(sType_finalize,self_type_400, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_402) { come_call_finalizer(list$1sTypephp_finalize,param_types_402, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_404) { come_call_finalizer(list$1charphp_finalize,param_names_404, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_405) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_405, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_406) { come_call_finalizer(buffer_finalize,header_buf_406, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_413) { come_call_finalizer(sFun_finalize,fun_413, (void*)0, (void*)0, 0, 0, 0); }
        if(node_416) { node_416 = come_decrement_ref_count(node_416, ((struct sNode*)node_416)->finalize, ((struct sNode*)node_416)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result158__ = ((struct tuple2$2sFunpcharph*)(right_value552=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value551=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1))))),finalizer_382,(char*)come_increment_ref_count(real_fun_name_383))));
    if(real_fun_name_383) { real_fun_name_383 = come_decrement_ref_count(real_fun_name_383, (void*)0, (void*)0, 0, 0); }
    if(type2_384) { come_call_finalizer(sType_finalize,type2_384, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result158__;
come_release_malloced_mem();
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* cloner_520;
void* right_value658;
char* real_fun_name_521;
void* right_value659;
struct sType* type2_522;
struct sClass* klass_523;
void* right_value660;
void* right_value661;
struct buffer* source_524;
void* right_value662;
void* right_value663;
char* name_525;
struct tuple2$2charphsTypeph* it_527;
struct tuple2$2charphsTypeph* multiple_assgin_var8;
char* name_528;
struct sType* field_type_529;
struct tuple2$2charphsTypeph* it_531;
struct tuple2$2charphsTypeph* multiple_assgin_var9;
char* name_532;
struct sType* field_type_533;
void* right_value664;
char* p_536;
int sline_537;
struct buffer* source3_538;
char* head_539;
struct buffer* __dec_obj122;
void* right_value665;
struct sBlock* block_540;
void* right_value666;
struct sType* result_type_541;
void* right_value667;
char* name_542;
void* right_value668;
struct sType* self_type_543;
struct sType* __list_values33___544[1];
void* right_value669;
void* right_value670;
struct list$1sTypeph* param_types_545;
void* right_value671;
char* __list_values34___546[1];
void* right_value672;
void* right_value673;
struct list$1charph* param_names_547;
void* right_value674;
void* right_value675;
struct list$1charph* param_default_parametors_548;
void* right_value676;
void* right_value677;
struct buffer* header_buf_549;
void* right_value678;
int i_550;
struct sType* param_type_551;
char* param_name_552;
void* right_value679;
void* right_value680;
void* right_value681;
void* right_value682;
struct sFun* fun_553;
void* right_value683;
struct sFun* fun2_554;
void* right_value684;
void* right_value685;
void* right_value686;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value690;
struct sNode* node_556;
struct buffer* __dec_obj125;
void* right_value691;
void* right_value692;
memset(&cloner_520, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value658, 0, sizeof(void*));
memset(&real_fun_name_521, 0, sizeof(char*)); /* ddd */
memset(&right_value659, 0, sizeof(void*));
memset(&type2_522, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_523, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value660, 0, sizeof(void*));
memset(&right_value661, 0, sizeof(void*));
memset(&source_524, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value662, 0, sizeof(void*));
memset(&right_value663, 0, sizeof(void*));
memset(&name_525, 0, sizeof(char*)); /* ddd */
memset(&it_527, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_528, 0, sizeof(char*)); /* ccc */
memset(&field_type_529, 0, sizeof(struct sType*)); /* ccc */
memset(&name_528, 0, sizeof(char*)); /* eee */
memset(&field_type_529, 0, sizeof(struct sType*)); /* eee */
memset(&it_531, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_532, 0, sizeof(char*)); /* ccc */
memset(&field_type_533, 0, sizeof(struct sType*)); /* ccc */
memset(&name_532, 0, sizeof(char*)); /* eee */
memset(&field_type_533, 0, sizeof(struct sType*)); /* eee */
memset(&right_value664, 0, sizeof(void*));
memset(&p_536, 0, sizeof(char*)); /* ddd */
memset(&sline_537, 0, sizeof(int)); /* ddd */
memset(&source3_538, 0, sizeof(struct buffer*)); /* ddd */
memset(&head_539, 0, sizeof(char*)); /* ddd */
memset(&right_value665, 0, sizeof(void*));
memset(&block_540, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value666, 0, sizeof(void*));
memset(&result_type_541, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value667, 0, sizeof(void*));
memset(&name_542, 0, sizeof(char*)); /* ddd */
memset(&right_value668, 0, sizeof(void*));
memset(&self_type_543, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value669, 0, sizeof(void*));
memset(&right_value670, 0, sizeof(void*));
memset(&param_types_545, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value671, 0, sizeof(void*));
memset(&right_value672, 0, sizeof(void*));
memset(&right_value673, 0, sizeof(void*));
memset(&param_names_547, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value674, 0, sizeof(void*));
memset(&right_value675, 0, sizeof(void*));
memset(&param_default_parametors_548, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value676, 0, sizeof(void*));
memset(&right_value677, 0, sizeof(void*));
memset(&header_buf_549, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value678, 0, sizeof(void*));
memset(&i_550, 0, sizeof(int)); /* ddd */
memset(&param_type_551, 0, sizeof(struct sType*)); /* ddd */
memset(&param_name_552, 0, sizeof(char*)); /* ddd */
memset(&right_value679, 0, sizeof(void*));
memset(&right_value680, 0, sizeof(void*));
memset(&right_value681, 0, sizeof(void*));
memset(&right_value682, 0, sizeof(void*));
memset(&fun_553, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value683, 0, sizeof(void*));
memset(&fun2_554, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value684, 0, sizeof(void*));
memset(&right_value685, 0, sizeof(void*));
memset(&right_value686, 0, sizeof(void*));
memset(&right_value690, 0, sizeof(void*));
memset(&node_556, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value691, 0, sizeof(void*));
memset(&right_value692, 0, sizeof(void*));
    cloner_520=((void*)0);
    real_fun_name_521=(char*)come_increment_ref_count(((char*)(right_value658=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value658) { right_value658 = come_decrement_ref_count(right_value658, (void*)0, (void*)0, 1, 0); }
    type2_522=(struct sType*)come_increment_ref_count(((struct sType*)(right_value659=solve_generics(type,type,info))));
    if(right_value659) { come_call_finalizer(sType_finalize,right_value659, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_522;
    klass_523=type->mClass;
    if(type->mPointerNum>0&&!klass_523->mNumber) {
        source_524=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value661=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value660=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value660) { come_call_finalizer(buffer_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value661) { come_call_finalizer(buffer_finalize,right_value661, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(source_524,"{\n");
        buffer_append_str(source_524,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_524,((char*)(right_value663=xsprintf("var result = new %s;\n",((char*)(right_value662=make_type_name_string(type,(_Bool)0,(_Bool)0,info,(_Bool)1)))))));
        if(right_value662) { right_value662 = come_decrement_ref_count(right_value662, (void*)0, (void*)0, 1, 0); }
        if(right_value663) { right_value663 = come_decrement_ref_count(right_value663, (void*)0, (void*)0, 1, 0); }
        if(klass_523->mProtocol) {
            name_525="_protocol_obj";
            char source2_526[1024];
            memset(&source2_526, 0, sizeof(source2_526)); /* aaa */
            snprintf(source2_526,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_524,source2_526);
            klass_523=map$2charphsClassphp_operator_load_element(info->classes,klass_523->mName);
            for(
            it_527=list$1tuple2$2charphsTypephphp_begin((klass_523->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_523->mFields));
            it_527=list$1tuple2$2charphsTypephphp_next((klass_523->mFields))
            ){
                multiple_assgin_var8=it_527;
                name_528=(char*)come_increment_ref_count(multiple_assgin_var8->v1);
                field_type_529=(struct sType*)come_increment_ref_count(multiple_assgin_var8->v2);
                if(string_operator_equals(type->mClass->mName,field_type_529->mClass->mName)&&type->mPointerNum==field_type_529->mPointerNum&&field_type_529->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_528,"_protocol_obj")) {
                }
                else {
                    char source2_530[1024];
                    memset(&source2_530, 0, sizeof(source2_530)); /* aaa */
                    snprintf(source2_530,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_528,name_528);
                    buffer_append_str(source_524,source2_530);
                }
                if(name_528) { name_528 = come_decrement_ref_count(name_528, (void*)0, (void*)0, 0, 0); }
                if(field_type_529) { come_call_finalizer(sType_finalize,field_type_529, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            klass_523=map$2charphsClassphp_operator_load_element(info->classes,klass_523->mName);
            for(
            it_531=list$1tuple2$2charphsTypephphp_begin((klass_523->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_523->mFields));
            it_531=list$1tuple2$2charphsTypephphp_next((klass_523->mFields))
            ){
                multiple_assgin_var9=it_531;
                name_532=(char*)come_increment_ref_count(multiple_assgin_var9->v1);
                field_type_533=(struct sType*)come_increment_ref_count(multiple_assgin_var9->v2);
                if(string_operator_equals(type->mClass->mName,field_type_533->mClass->mName)&&type->mPointerNum==field_type_533->mPointerNum&&field_type_533->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_533->mHeap) {
                    char source2_534[1024];
                    memset(&source2_534, 0, sizeof(source2_534)); /* aaa */
                    snprintf(source2_534,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_532,name_532,name_532);
                    buffer_append_str(source_524,source2_534);
                }
                else {
                    char source2_535[1024];
                    memset(&source2_535, 0, sizeof(source2_535)); /* aaa */
                    snprintf(source2_535,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_532,name_532);
                    buffer_append_str(source_524,source2_535);
                }
                if(name_532) { name_532 = come_decrement_ref_count(name_532, (void*)0, (void*)0, 0, 0); }
                if(field_type_533) { come_call_finalizer(sType_finalize,field_type_533, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_str(source_524,((char*)(right_value664=xsprintf("return result;"))));
        if(right_value664) { right_value664 = come_decrement_ref_count(right_value664, (void*)0, (void*)0, 1, 0); }
        buffer_append_char(source_524,125);
        p_536=info->p;
        sline_537=info->sline;
        source3_538=(struct buffer*)come_increment_ref_count(info->source);
        head_539=info->head;
        __dec_obj122=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_524);
        if(__dec_obj122) { come_call_finalizer(buffer_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0); }
        info->p=info->source->buf;
        info->head=info->source->buf;
        block_540=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value665=parse_block(info,(_Bool)0))));
        if(right_value665) { come_call_finalizer(sBlock_finalize,right_value665, (void*)0, (void*)0, 0, 1, 0); }
        result_type_541=(struct sType*)come_increment_ref_count(((struct sType*)(right_value666=sType_clone(type))));
        if(right_value666) { come_call_finalizer(sType_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0); }
        name_542=(char*)come_increment_ref_count(((char*)(right_value667=string_clone(real_fun_name_521))));
        if(right_value667) { right_value667 = come_decrement_ref_count(right_value667, (void*)0, (void*)0, 1, 0); }
        self_type_543=(struct sType*)come_increment_ref_count(((struct sType*)(right_value668=sType_clone(type))));
        if(right_value668) { come_call_finalizer(sType_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0); }
        self_type_543->mHeap=(_Bool)0;
        {__list_values33___544[0]=come_increment_ref_count(self_type_543);
}        param_types_545=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value670=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value669=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values33___544))));
        if(right_value670) { come_call_finalizer(list$1sTypephp_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values34___546[0]=come_increment_ref_count(((char*)(right_value671=__builtin_string("self"))));
}        param_names_547=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value673=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value672=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values34___546))));
        if(right_value671) { right_value671 = come_decrement_ref_count(right_value671, (void*)0, (void*)0, 1, 0); }
        if(right_value673) { come_call_finalizer(list$1charphp_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_548=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value675=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value674=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value675) { come_call_finalizer(list$1charphp_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_549=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value677=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value676=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value676) { come_call_finalizer(buffer_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value677) { come_call_finalizer(buffer_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_549,((char*)(right_value678=make_come_type_name_string(result_type_541,info))));
        if(right_value678) { right_value678 = come_decrement_ref_count(right_value678, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_549," ");
        buffer_append_str(header_buf_549,real_fun_name_521);
        buffer_append_str(header_buf_549,"(");
        for(
        i_550=0;
        i_550<list$1sTypephp_length(param_types_545);
        i_550++
        ){
            param_type_551=list$1sTypephp_operator_load_element(param_types_545,i_550);
            param_name_552=list$1charphp_operator_load_element(param_names_547,i_550);
            buffer_append_str(header_buf_549,((char*)(right_value679=make_come_type_name_string(param_type_551,info))));
            if(right_value679) { right_value679 = come_decrement_ref_count(right_value679, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_549," ");
            buffer_append_str(header_buf_549,param_name_552);
            if(i_550!=list$1sTypephp_length(param_types_545)-1) {
                buffer_append_str(header_buf_549,",");
            }
        }
        buffer_append_str(header_buf_549,")");
        result_type_541->mStatic=(_Bool)0;
        fun_553=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value682=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value680=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_542),(struct sType*)come_increment_ref_count(result_type_541),(struct list$1sTypeph*)come_increment_ref_count(param_types_545),(struct list$1charph*)come_increment_ref_count(param_names_547),(struct list$1charph*)come_increment_ref_count(param_default_parametors_548),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_540),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value681=buffer_to_string(header_buf_549)))),info))));
        if(right_value680) { come_call_finalizer(sFun_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value681) { right_value681 = come_decrement_ref_count(right_value681, (void*)0, (void*)0, 1, 0); }
        if(right_value682) { come_call_finalizer(sFun_finalize,right_value682, (void*)0, (void*)0, 0, 1, 0); }
        fun2_554=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value683=__builtin_string(fun_name))));
        if(right_value683) { right_value683 = come_decrement_ref_count(right_value683, (void*)0, (void*)0, 1, 0); }
        if(fun2_554==((void*)0)||fun2_554->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value684=string_clone(name_542)))),(struct sFun*)come_increment_ref_count(fun_553));
            if(right_value684) { right_value684 = come_decrement_ref_count(right_value684, (void*)0, (void*)0, 1, 0); }
        }
        cloner_520=fun_553;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value686=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value685=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_553),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=sFunNode_finalize;
        _inf_value10->clone=sFunNode_clone;
        _inf_value10->compile=sFunNode_compile;
        _inf_value10->sline=sFunNode_sline;
        _inf_value10->sname=sFunNode_sname;
        _inf_value10->terminated=sFunNode_terminated;
        node_556=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value690=_inf_value10)));
        if(right_value685) { come_call_finalizer(sFunNode_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value686) { come_call_finalizer(sFunNode_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value690) { right_value690 = come_decrement_ref_count(right_value690, ((struct sNode*)right_value690)->finalize, ((struct sNode*)right_value690)->_protocol_obj, 1, 0); } 
        if(!node_556->compile(node_556->_protocol_obj,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj125=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_538);
        if(__dec_obj125) { come_call_finalizer(buffer_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0); }
        info->p=p_536;
        info->head=head_539;
        info->sline=sline_537;
        if(source_524) { come_call_finalizer(buffer_finalize,source_524, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_538) { come_call_finalizer(buffer_finalize,source3_538, (void*)0, (void*)0, 0, 0, 0); }
        if(block_540) { come_call_finalizer(sBlock_finalize,block_540, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_541) { come_call_finalizer(sType_finalize,result_type_541, (void*)0, (void*)0, 0, 0, 0); }
        if(name_542) { name_542 = come_decrement_ref_count(name_542, (void*)0, (void*)0, 0, 0); }
        if(self_type_543) { come_call_finalizer(sType_finalize,self_type_543, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_545) { come_call_finalizer(list$1sTypephp_finalize,param_types_545, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_547) { come_call_finalizer(list$1charphp_finalize,param_names_547, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_548) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_548, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_549) { come_call_finalizer(buffer_finalize,header_buf_549, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_553) { come_call_finalizer(sFun_finalize,fun_553, (void*)0, (void*)0, 0, 0, 0); }
        if(node_556) { node_556 = come_decrement_ref_count(node_556, ((struct sNode*)node_556)->finalize, ((struct sNode*)node_556)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result171__ = ((struct tuple2$2sFunpcharph*)(right_value692=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value691=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1))))),cloner_520,(char*)come_increment_ref_count(real_fun_name_521))));
    if(real_fun_name_521) { real_fun_name_521 = come_decrement_ref_count(real_fun_name_521, (void*)0, (void*)0, 0, 0); }
    if(type2_522) { come_call_finalizer(sType_finalize,type2_522, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result171__;
come_release_malloced_mem();
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* equaler_417;
void* right_value553;
char* real_fun_name_418;
void* right_value554;
struct sType* type2_419;
struct sClass* klass_420;
void* right_value555;
void* right_value556;
struct buffer* source_421;
char* name_422;
struct tuple2$2charphsTypeph* it_424;
struct tuple2$2charphsTypeph* multiple_assgin_var5;
char* name_425;
struct sType* field_type_426;
char* p_428;
int sline_429;
char* head_430;
struct buffer* source3_431;
struct buffer* __dec_obj110;
void* right_value557;
struct sBlock* block_432;
void* right_value558;
void* right_value559;
struct sType* result_type_433;
void* right_value560;
char* name_434;
void* right_value561;
struct sType* left_type_435;
void* right_value562;
struct sType* right_type_436;
struct sType* __list_values27___437[2];
void* right_value563;
void* right_value564;
struct list$1sTypeph* param_types_438;
void* right_value565;
void* right_value566;
char* __list_values28___439[2];
void* right_value567;
void* right_value568;
struct list$1charph* param_names_440;
void* right_value569;
void* right_value570;
struct list$1charph* param_default_parametors_441;
void* right_value571;
void* right_value572;
struct buffer* header_buf_442;
void* right_value573;
int i_443;
struct sType* param_type_444;
char* param_name_445;
void* right_value574;
void* right_value575;
void* right_value576;
void* right_value577;
struct sFun* fun_446;
void* right_value578;
struct sFun* fun2_447;
void* right_value579;
void* right_value580;
void* right_value581;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value585;
struct sNode* node_449;
struct buffer* __dec_obj113;
void* right_value586;
void* right_value587;
memset(&equaler_417, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value553, 0, sizeof(void*));
memset(&real_fun_name_418, 0, sizeof(char*)); /* ddd */
memset(&right_value554, 0, sizeof(void*));
memset(&type2_419, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_420, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value555, 0, sizeof(void*));
memset(&right_value556, 0, sizeof(void*));
memset(&source_421, 0, sizeof(struct buffer*)); /* ddd */
memset(&name_422, 0, sizeof(char*)); /* ddd */
memset(&it_424, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_425, 0, sizeof(char*)); /* ccc */
memset(&field_type_426, 0, sizeof(struct sType*)); /* ccc */
memset(&name_425, 0, sizeof(char*)); /* eee */
memset(&field_type_426, 0, sizeof(struct sType*)); /* eee */
memset(&p_428, 0, sizeof(char*)); /* ddd */
memset(&sline_429, 0, sizeof(int)); /* ddd */
memset(&head_430, 0, sizeof(char*)); /* ddd */
memset(&source3_431, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value557, 0, sizeof(void*));
memset(&block_432, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value558, 0, sizeof(void*));
memset(&right_value559, 0, sizeof(void*));
memset(&result_type_433, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value560, 0, sizeof(void*));
memset(&name_434, 0, sizeof(char*)); /* ddd */
memset(&right_value561, 0, sizeof(void*));
memset(&left_type_435, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value562, 0, sizeof(void*));
memset(&right_type_436, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value563, 0, sizeof(void*));
memset(&right_value564, 0, sizeof(void*));
memset(&param_types_438, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value565, 0, sizeof(void*));
memset(&right_value566, 0, sizeof(void*));
memset(&right_value567, 0, sizeof(void*));
memset(&right_value568, 0, sizeof(void*));
memset(&param_names_440, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value569, 0, sizeof(void*));
memset(&right_value570, 0, sizeof(void*));
memset(&param_default_parametors_441, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value571, 0, sizeof(void*));
memset(&right_value572, 0, sizeof(void*));
memset(&header_buf_442, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value573, 0, sizeof(void*));
memset(&i_443, 0, sizeof(int)); /* ddd */
memset(&param_type_444, 0, sizeof(struct sType*)); /* ddd */
memset(&param_name_445, 0, sizeof(char*)); /* ddd */
memset(&right_value574, 0, sizeof(void*));
memset(&right_value575, 0, sizeof(void*));
memset(&right_value576, 0, sizeof(void*));
memset(&right_value577, 0, sizeof(void*));
memset(&fun_446, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value578, 0, sizeof(void*));
memset(&fun2_447, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value579, 0, sizeof(void*));
memset(&right_value580, 0, sizeof(void*));
memset(&right_value581, 0, sizeof(void*));
memset(&right_value585, 0, sizeof(void*));
memset(&node_449, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value586, 0, sizeof(void*));
memset(&right_value587, 0, sizeof(void*));
    equaler_417=((void*)0);
    real_fun_name_418=(char*)come_increment_ref_count(((char*)(right_value553=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value553) { right_value553 = come_decrement_ref_count(right_value553, (void*)0, (void*)0, 1, 0); }
    type2_419=(struct sType*)come_increment_ref_count(((struct sType*)(right_value554=solve_generics(type,type,info))));
    if(right_value554) { come_call_finalizer(sType_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_419;
    klass_420=type->mClass;
    if(type->mPointerNum>0&&!klass_420->mNumber) {
        source_421=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value556=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value555=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value555) { come_call_finalizer(buffer_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value556) { come_call_finalizer(buffer_finalize,right_value556, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_421,123);
        if(klass_420->mProtocol) {
            name_422="_protocol_obj";
            char source2_423[1024];
            memset(&source2_423, 0, sizeof(source2_423)); /* aaa */
            snprintf(source2_423,1024,"return left.%s.equals(right.%s);\n",name_422,name_422);
            buffer_append_str(source_421,source2_423);
        }
        else {
            klass_420=map$2charphsClassphp_operator_load_element(info->classes,klass_420->mName);
            for(
            it_424=list$1tuple2$2charphsTypephphp_begin((klass_420->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_420->mFields));
            it_424=list$1tuple2$2charphsTypephphp_next((klass_420->mFields))
            ){
                multiple_assgin_var5=it_424;
                name_425=(char*)come_increment_ref_count(multiple_assgin_var5->v1);
                field_type_426=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v2);
                if(string_operator_equals(type->mClass->mName,field_type_426->mClass->mName)&&type->mPointerNum==field_type_426->mPointerNum&&field_type_426->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_427[1024];
                memset(&source2_427, 0, sizeof(source2_427)); /* aaa */
                snprintf(source2_427,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_425,name_425);
                buffer_append_str(source_421,source2_427);
                if(name_425) { name_425 = come_decrement_ref_count(name_425, (void*)0, (void*)0, 0, 0); }
                if(field_type_426) { come_call_finalizer(sType_finalize,field_type_426, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_str(source_421,"return true;");
        buffer_append_char(source_421,125);
        p_428=info->p;
        sline_429=info->sline;
        head_430=info->head;
        source3_431=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj110=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_421);
        if(__dec_obj110) { come_call_finalizer(buffer_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0); }
        info->p=source_421->buf;
        info->head=source_421->buf;
        block_432=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value557=parse_block(info,(_Bool)0))));
        if(right_value557) { come_call_finalizer(sBlock_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0); }
        result_type_433=(struct sType*)come_increment_ref_count(((struct sType*)(right_value559=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value558=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
        if(right_value558) { come_call_finalizer(sType_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value559) { come_call_finalizer(sType_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0); }
        name_434=(char*)come_increment_ref_count(((char*)(right_value560=string_clone(real_fun_name_418))));
        if(right_value560) { right_value560 = come_decrement_ref_count(right_value560, (void*)0, (void*)0, 1, 0); }
        left_type_435=(struct sType*)come_increment_ref_count(((struct sType*)(right_value561=sType_clone(type))));
        if(right_value561) { come_call_finalizer(sType_finalize,right_value561, (void*)0, (void*)0, 0, 1, 0); }
        left_type_435->mHeap=(_Bool)0;
        right_type_436=(struct sType*)come_increment_ref_count(((struct sType*)(right_value562=sType_clone(type))));
        if(right_value562) { come_call_finalizer(sType_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0); }
        right_type_436->mHeap=(_Bool)0;
        {__list_values27___437[0]=come_increment_ref_count(left_type_435);
__list_values27___437[1]=come_increment_ref_count(right_type_436);
}        param_types_438=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value564=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value563=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values27___437))));
        if(right_value564) { come_call_finalizer(list$1sTypephp_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values28___439[0]=come_increment_ref_count(((char*)(right_value565=__builtin_string("left"))));
__list_values28___439[1]=come_increment_ref_count(((char*)(right_value566=__builtin_string("right"))));
}        param_names_440=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value568=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value567=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values28___439))));
        if(right_value565) { right_value565 = come_decrement_ref_count(right_value565, (void*)0, (void*)0, 1, 0); }
        if(right_value566) { right_value566 = come_decrement_ref_count(right_value566, (void*)0, (void*)0, 1, 0); }
        if(right_value568) { come_call_finalizer(list$1charphp_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_441=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value570=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value569=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value570) { come_call_finalizer(list$1charphp_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_442=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value572=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value571=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value571) { come_call_finalizer(buffer_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value572) { come_call_finalizer(buffer_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_442,((char*)(right_value573=make_come_type_name_string(result_type_433,info))));
        if(right_value573) { right_value573 = come_decrement_ref_count(right_value573, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_442," ");
        buffer_append_str(header_buf_442,real_fun_name_418);
        buffer_append_str(header_buf_442,"(");
        for(
        i_443=0;
        i_443<list$1sTypephp_length(param_types_438);
        i_443++
        ){
            param_type_444=list$1sTypephp_operator_load_element(param_types_438,i_443);
            param_name_445=list$1charphp_operator_load_element(param_names_440,i_443);
            buffer_append_str(header_buf_442,((char*)(right_value574=make_come_type_name_string(param_type_444,info))));
            if(right_value574) { right_value574 = come_decrement_ref_count(right_value574, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_442," ");
            buffer_append_str(header_buf_442,param_name_445);
            if(i_443!=list$1sTypephp_length(param_types_438)-1) {
                buffer_append_str(header_buf_442,",");
            }
        }
        buffer_append_str(header_buf_442,")");
        result_type_433->mStatic=(_Bool)0;
        fun_446=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value577=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value575=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_434),(struct sType*)come_increment_ref_count(result_type_433),(struct list$1sTypeph*)come_increment_ref_count(param_types_438),(struct list$1charph*)come_increment_ref_count(param_names_440),(struct list$1charph*)come_increment_ref_count(param_default_parametors_441),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_432),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value576=buffer_to_string(header_buf_442)))),info))));
        if(right_value575) { come_call_finalizer(sFun_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value576) { right_value576 = come_decrement_ref_count(right_value576, (void*)0, (void*)0, 1, 0); }
        if(right_value577) { come_call_finalizer(sFun_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0); }
        fun2_447=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value578=__builtin_string(fun_name))));
        if(right_value578) { right_value578 = come_decrement_ref_count(right_value578, (void*)0, (void*)0, 1, 0); }
        if(fun2_447==((void*)0)||fun2_447->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value579=string_clone(name_434)))),(struct sFun*)come_increment_ref_count(fun_446));
            if(right_value579) { right_value579 = come_decrement_ref_count(right_value579, (void*)0, (void*)0, 1, 0); }
        }
        equaler_417=fun_446;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value581=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value580=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_446),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=sFunNode_finalize;
        _inf_value7->clone=sFunNode_clone;
        _inf_value7->compile=sFunNode_compile;
        _inf_value7->sline=sFunNode_sline;
        _inf_value7->sname=sFunNode_sname;
        _inf_value7->terminated=sFunNode_terminated;
        node_449=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value585=_inf_value7)));
        if(right_value580) { come_call_finalizer(sFunNode_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value581) { come_call_finalizer(sFunNode_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value585) { right_value585 = come_decrement_ref_count(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0); } 
        if(!node_449->compile(node_449->_protocol_obj,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj113=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_431);
        if(__dec_obj113) { come_call_finalizer(buffer_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0); }
        info->p=p_428;
        info->head=head_430;
        info->sline=sline_429;
        if(source_421) { come_call_finalizer(buffer_finalize,source_421, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_431) { come_call_finalizer(buffer_finalize,source3_431, (void*)0, (void*)0, 0, 0, 0); }
        if(block_432) { come_call_finalizer(sBlock_finalize,block_432, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_433) { come_call_finalizer(sType_finalize,result_type_433, (void*)0, (void*)0, 0, 0, 0); }
        if(name_434) { name_434 = come_decrement_ref_count(name_434, (void*)0, (void*)0, 0, 0); }
        if(left_type_435) { come_call_finalizer(sType_finalize,left_type_435, (void*)0, (void*)0, 0, 0, 0); }
        if(right_type_436) { come_call_finalizer(sType_finalize,right_type_436, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_438) { come_call_finalizer(list$1sTypephp_finalize,param_types_438, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_440) { come_call_finalizer(list$1charphp_finalize,param_names_440, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_441) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_441, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_442) { come_call_finalizer(buffer_finalize,header_buf_442, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_446) { come_call_finalizer(sFun_finalize,fun_446, (void*)0, (void*)0, 0, 0, 0); }
        if(node_449) { node_449 = come_decrement_ref_count(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result161__ = ((struct tuple2$2sFunpcharph*)(right_value587=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value586=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1))))),equaler_417,(char*)come_increment_ref_count(real_fun_name_418))));
    if(real_fun_name_418) { real_fun_name_418 = come_decrement_ref_count(real_fun_name_418, (void*)0, (void*)0, 0, 0); }
    if(type2_419) { come_call_finalizer(sType_finalize,type2_419, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result161__;
come_release_malloced_mem();
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* equaler_487;
void* right_value623;
char* real_fun_name_488;
void* right_value624;
struct sType* type2_489;
struct sClass* klass_490;
void* right_value625;
void* right_value626;
struct buffer* source_491;
char* name_492;
struct tuple2$2charphsTypeph* it_494;
struct tuple2$2charphsTypeph* multiple_assgin_var7;
char* name_495;
struct sType* field_type_496;
char* p_498;
int sline_499;
char* head_500;
struct buffer* source3_501;
struct buffer* __dec_obj118;
void* right_value627;
struct sBlock* block_502;
void* right_value628;
void* right_value629;
struct sType* result_type_503;
void* right_value630;
char* name_504;
void* right_value631;
struct sType* left_type_505;
void* right_value632;
struct sType* right_type_506;
struct sType* __list_values31___507[2];
void* right_value633;
void* right_value634;
struct list$1sTypeph* param_types_508;
void* right_value635;
void* right_value636;
char* __list_values32___509[2];
void* right_value637;
void* right_value638;
struct list$1charph* param_names_510;
void* right_value639;
void* right_value640;
struct list$1charph* param_default_parametors_511;
void* right_value641;
void* right_value642;
struct buffer* header_buf_512;
void* right_value643;
int i_513;
struct sType* param_type_514;
char* param_name_515;
void* right_value644;
void* right_value645;
void* right_value646;
void* right_value647;
struct sFun* fun_516;
void* right_value648;
struct sFun* fun2_517;
void* right_value649;
void* right_value650;
void* right_value651;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value655;
struct sNode* node_519;
struct buffer* __dec_obj121;
void* right_value656;
void* right_value657;
memset(&equaler_487, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value623, 0, sizeof(void*));
memset(&real_fun_name_488, 0, sizeof(char*)); /* ddd */
memset(&right_value624, 0, sizeof(void*));
memset(&type2_489, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_490, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value625, 0, sizeof(void*));
memset(&right_value626, 0, sizeof(void*));
memset(&source_491, 0, sizeof(struct buffer*)); /* ddd */
memset(&name_492, 0, sizeof(char*)); /* ddd */
memset(&it_494, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_495, 0, sizeof(char*)); /* ccc */
memset(&field_type_496, 0, sizeof(struct sType*)); /* ccc */
memset(&name_495, 0, sizeof(char*)); /* eee */
memset(&field_type_496, 0, sizeof(struct sType*)); /* eee */
memset(&p_498, 0, sizeof(char*)); /* ddd */
memset(&sline_499, 0, sizeof(int)); /* ddd */
memset(&head_500, 0, sizeof(char*)); /* ddd */
memset(&source3_501, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value627, 0, sizeof(void*));
memset(&block_502, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value628, 0, sizeof(void*));
memset(&right_value629, 0, sizeof(void*));
memset(&result_type_503, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value630, 0, sizeof(void*));
memset(&name_504, 0, sizeof(char*)); /* ddd */
memset(&right_value631, 0, sizeof(void*));
memset(&left_type_505, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value632, 0, sizeof(void*));
memset(&right_type_506, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value633, 0, sizeof(void*));
memset(&right_value634, 0, sizeof(void*));
memset(&param_types_508, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value635, 0, sizeof(void*));
memset(&right_value636, 0, sizeof(void*));
memset(&right_value637, 0, sizeof(void*));
memset(&right_value638, 0, sizeof(void*));
memset(&param_names_510, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value639, 0, sizeof(void*));
memset(&right_value640, 0, sizeof(void*));
memset(&param_default_parametors_511, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value641, 0, sizeof(void*));
memset(&right_value642, 0, sizeof(void*));
memset(&header_buf_512, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value643, 0, sizeof(void*));
memset(&i_513, 0, sizeof(int)); /* ddd */
memset(&param_type_514, 0, sizeof(struct sType*)); /* ddd */
memset(&param_name_515, 0, sizeof(char*)); /* ddd */
memset(&right_value644, 0, sizeof(void*));
memset(&right_value645, 0, sizeof(void*));
memset(&right_value646, 0, sizeof(void*));
memset(&right_value647, 0, sizeof(void*));
memset(&fun_516, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value648, 0, sizeof(void*));
memset(&fun2_517, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value649, 0, sizeof(void*));
memset(&right_value650, 0, sizeof(void*));
memset(&right_value651, 0, sizeof(void*));
memset(&right_value655, 0, sizeof(void*));
memset(&node_519, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value656, 0, sizeof(void*));
memset(&right_value657, 0, sizeof(void*));
    equaler_487=((void*)0);
    real_fun_name_488=(char*)come_increment_ref_count(((char*)(right_value623=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value623) { right_value623 = come_decrement_ref_count(right_value623, (void*)0, (void*)0, 1, 0); }
    type2_489=(struct sType*)come_increment_ref_count(((struct sType*)(right_value624=solve_generics(type,type,info))));
    if(right_value624) { come_call_finalizer(sType_finalize,right_value624, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_489;
    klass_490=type->mClass;
    if(type->mPointerNum>0&&!klass_490->mNumber) {
        source_491=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value626=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value625=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value625) { come_call_finalizer(buffer_finalize,right_value625, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value626) { come_call_finalizer(buffer_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_491,123);
        if(klass_490->mProtocol) {
            name_492="_protocol_obj";
            char source2_493[1024];
            memset(&source2_493, 0, sizeof(source2_493)); /* aaa */
            snprintf(source2_493,1024,"return left.%s.equals(right.%s);\n",name_492,name_492);
            buffer_append_str(source_491,source2_493);
        }
        else {
            klass_490=map$2charphsClassphp_operator_load_element(info->classes,klass_490->mName);
            for(
            it_494=list$1tuple2$2charphsTypephphp_begin((klass_490->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_490->mFields));
            it_494=list$1tuple2$2charphsTypephphp_next((klass_490->mFields))
            ){
                multiple_assgin_var7=it_494;
                name_495=(char*)come_increment_ref_count(multiple_assgin_var7->v1);
                field_type_496=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v2);
                if(string_operator_equals(type->mClass->mName,field_type_496->mClass->mName)&&type->mPointerNum==field_type_496->mPointerNum&&field_type_496->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_497[1024];
                memset(&source2_497, 0, sizeof(source2_497)); /* aaa */
                snprintf(source2_497,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_495,name_495);
                buffer_append_str(source_491,source2_497);
                if(name_495) { name_495 = come_decrement_ref_count(name_495, (void*)0, (void*)0, 0, 0); }
                if(field_type_496) { come_call_finalizer(sType_finalize,field_type_496, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_str(source_491,"return true;\n");
        buffer_append_char(source_491,125);
        p_498=info->p;
        sline_499=info->sline;
        head_500=info->head;
        source3_501=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj118=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_491);
        if(__dec_obj118) { come_call_finalizer(buffer_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0); }
        info->p=source_491->buf;
        info->head=source_491->buf;
        block_502=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value627=parse_block(info,(_Bool)0))));
        if(right_value627) { come_call_finalizer(sBlock_finalize,right_value627, (void*)0, (void*)0, 0, 1, 0); }
        result_type_503=(struct sType*)come_increment_ref_count(((struct sType*)(right_value629=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value628=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
        if(right_value628) { come_call_finalizer(sType_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value629) { come_call_finalizer(sType_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0); }
        name_504=(char*)come_increment_ref_count(((char*)(right_value630=string_clone(real_fun_name_488))));
        if(right_value630) { right_value630 = come_decrement_ref_count(right_value630, (void*)0, (void*)0, 1, 0); }
        left_type_505=(struct sType*)come_increment_ref_count(((struct sType*)(right_value631=sType_clone(type))));
        if(right_value631) { come_call_finalizer(sType_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0); }
        left_type_505->mHeap=(_Bool)0;
        right_type_506=(struct sType*)come_increment_ref_count(((struct sType*)(right_value632=sType_clone(type))));
        if(right_value632) { come_call_finalizer(sType_finalize,right_value632, (void*)0, (void*)0, 0, 1, 0); }
        right_type_506->mHeap=(_Bool)0;
        {__list_values31___507[0]=come_increment_ref_count(left_type_505);
__list_values31___507[1]=come_increment_ref_count(right_type_506);
}        param_types_508=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value634=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value633=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values31___507))));
        if(right_value634) { come_call_finalizer(list$1sTypephp_finalize,right_value634, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values32___509[0]=come_increment_ref_count(((char*)(right_value635=__builtin_string("left"))));
__list_values32___509[1]=come_increment_ref_count(((char*)(right_value636=__builtin_string("right"))));
}        param_names_510=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value638=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value637=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values32___509))));
        if(right_value635) { right_value635 = come_decrement_ref_count(right_value635, (void*)0, (void*)0, 1, 0); }
        if(right_value636) { right_value636 = come_decrement_ref_count(right_value636, (void*)0, (void*)0, 1, 0); }
        if(right_value638) { come_call_finalizer(list$1charphp_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_511=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value640=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value639=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value640) { come_call_finalizer(list$1charphp_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_512=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value642=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value641=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value641) { come_call_finalizer(buffer_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value642) { come_call_finalizer(buffer_finalize,right_value642, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_512,((char*)(right_value643=make_come_type_name_string(result_type_503,info))));
        if(right_value643) { right_value643 = come_decrement_ref_count(right_value643, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_512," ");
        buffer_append_str(header_buf_512,real_fun_name_488);
        buffer_append_str(header_buf_512,"(");
        for(
        i_513=0;
        i_513<list$1sTypephp_length(param_types_508);
        i_513++
        ){
            param_type_514=list$1sTypephp_operator_load_element(param_types_508,i_513);
            param_name_515=list$1charphp_operator_load_element(param_names_510,i_513);
            buffer_append_str(header_buf_512,((char*)(right_value644=make_come_type_name_string(param_type_514,info))));
            if(right_value644) { right_value644 = come_decrement_ref_count(right_value644, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_512," ");
            buffer_append_str(header_buf_512,param_name_515);
            if(i_513!=list$1sTypephp_length(param_types_508)-1) {
                buffer_append_str(header_buf_512,",");
            }
        }
        buffer_append_str(header_buf_512,")");
        result_type_503->mStatic=(_Bool)0;
        fun_516=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value647=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value645=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_504),(struct sType*)come_increment_ref_count(result_type_503),(struct list$1sTypeph*)come_increment_ref_count(param_types_508),(struct list$1charph*)come_increment_ref_count(param_names_510),(struct list$1charph*)come_increment_ref_count(param_default_parametors_511),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_502),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value646=buffer_to_string(header_buf_512)))),info))));
        if(right_value645) { come_call_finalizer(sFun_finalize,right_value645, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value646) { right_value646 = come_decrement_ref_count(right_value646, (void*)0, (void*)0, 1, 0); }
        if(right_value647) { come_call_finalizer(sFun_finalize,right_value647, (void*)0, (void*)0, 0, 1, 0); }
        fun2_517=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value648=__builtin_string(fun_name))));
        if(right_value648) { right_value648 = come_decrement_ref_count(right_value648, (void*)0, (void*)0, 1, 0); }
        if(fun2_517==((void*)0)||fun2_517->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value649=string_clone(name_504)))),(struct sFun*)come_increment_ref_count(fun_516));
            if(right_value649) { right_value649 = come_decrement_ref_count(right_value649, (void*)0, (void*)0, 1, 0); }
        }
        equaler_487=fun_516;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value651=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value650=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_516),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=sFunNode_finalize;
        _inf_value9->clone=sFunNode_clone;
        _inf_value9->compile=sFunNode_compile;
        _inf_value9->sline=sFunNode_sline;
        _inf_value9->sname=sFunNode_sname;
        _inf_value9->terminated=sFunNode_terminated;
        node_519=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value655=_inf_value9)));
        if(right_value650) { come_call_finalizer(sFunNode_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value651) { come_call_finalizer(sFunNode_finalize,right_value651, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value655) { right_value655 = come_decrement_ref_count(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0); } 
        if(!node_519->compile(node_519->_protocol_obj,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj121=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_501);
        if(__dec_obj121) { come_call_finalizer(buffer_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0); }
        info->p=p_498;
        info->head=head_500;
        info->sline=sline_499;
        if(source_491) { come_call_finalizer(buffer_finalize,source_491, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_501) { come_call_finalizer(buffer_finalize,source3_501, (void*)0, (void*)0, 0, 0, 0); }
        if(block_502) { come_call_finalizer(sBlock_finalize,block_502, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_503) { come_call_finalizer(sType_finalize,result_type_503, (void*)0, (void*)0, 0, 0, 0); }
        if(name_504) { name_504 = come_decrement_ref_count(name_504, (void*)0, (void*)0, 0, 0); }
        if(left_type_505) { come_call_finalizer(sType_finalize,left_type_505, (void*)0, (void*)0, 0, 0, 0); }
        if(right_type_506) { come_call_finalizer(sType_finalize,right_type_506, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_508) { come_call_finalizer(list$1sTypephp_finalize,param_types_508, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_510) { come_call_finalizer(list$1charphp_finalize,param_names_510, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_511) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_511, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_512) { come_call_finalizer(buffer_finalize,header_buf_512, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_516) { come_call_finalizer(sFun_finalize,fun_516, (void*)0, (void*)0, 0, 0, 0); }
        if(node_519) { node_519 = come_decrement_ref_count(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result168__ = ((struct tuple2$2sFunpcharph*)(right_value657=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value656=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1))))),equaler_487,(char*)come_increment_ref_count(real_fun_name_488))));
    if(real_fun_name_488) { real_fun_name_488 = come_decrement_ref_count(real_fun_name_488, (void*)0, (void*)0, 0, 0); }
    if(type2_489) { come_call_finalizer(sType_finalize,type2_489, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result168__;
come_release_malloced_mem();
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* equaler_450;
void* right_value588;
char* real_fun_name_451;
void* right_value589;
struct sType* type2_452;
struct sClass* klass_453;
void* right_value590;
void* right_value591;
struct buffer* source_454;
char* name_455;
int i_458;
struct tuple2$2charphsTypeph* it_459;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* name_460;
struct sType* field_type_461;
char* p_465;
int sline_466;
char* head_467;
struct buffer* source3_468;
struct buffer* __dec_obj114;
void* right_value592;
struct sBlock* block_469;
void* right_value593;
void* right_value594;
struct sType* result_type_470;
void* right_value595;
char* name_471;
void* right_value596;
struct sType* left_type_472;
void* right_value597;
struct sType* right_type_473;
struct sType* __list_values29___474[2];
void* right_value598;
void* right_value599;
struct list$1sTypeph* param_types_475;
void* right_value600;
void* right_value601;
char* __list_values30___476[2];
void* right_value602;
void* right_value603;
struct list$1charph* param_names_477;
void* right_value604;
void* right_value605;
struct list$1charph* param_default_parametors_478;
void* right_value606;
void* right_value607;
struct buffer* header_buf_479;
void* right_value608;
int i_480;
struct sType* param_type_481;
char* param_name_482;
void* right_value609;
void* right_value610;
void* right_value611;
void* right_value612;
struct sFun* fun_483;
void* right_value613;
struct sFun* fun2_484;
void* right_value614;
void* right_value615;
void* right_value616;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value620;
struct sNode* node_486;
struct buffer* __dec_obj117;
void* right_value621;
void* right_value622;
memset(&equaler_450, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value588, 0, sizeof(void*));
memset(&real_fun_name_451, 0, sizeof(char*)); /* ddd */
memset(&right_value589, 0, sizeof(void*));
memset(&type2_452, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_453, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value590, 0, sizeof(void*));
memset(&right_value591, 0, sizeof(void*));
memset(&source_454, 0, sizeof(struct buffer*)); /* ddd */
memset(&name_455, 0, sizeof(char*)); /* ddd */
memset(&i_458, 0, sizeof(int)); /* ddd */
memset(&it_459, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_460, 0, sizeof(char*)); /* ccc */
memset(&field_type_461, 0, sizeof(struct sType*)); /* ccc */
memset(&name_460, 0, sizeof(char*)); /* eee */
memset(&field_type_461, 0, sizeof(struct sType*)); /* eee */
memset(&p_465, 0, sizeof(char*)); /* ddd */
memset(&sline_466, 0, sizeof(int)); /* ddd */
memset(&head_467, 0, sizeof(char*)); /* ddd */
memset(&source3_468, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value592, 0, sizeof(void*));
memset(&block_469, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value593, 0, sizeof(void*));
memset(&right_value594, 0, sizeof(void*));
memset(&result_type_470, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value595, 0, sizeof(void*));
memset(&name_471, 0, sizeof(char*)); /* ddd */
memset(&right_value596, 0, sizeof(void*));
memset(&left_type_472, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value597, 0, sizeof(void*));
memset(&right_type_473, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value598, 0, sizeof(void*));
memset(&right_value599, 0, sizeof(void*));
memset(&param_types_475, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value600, 0, sizeof(void*));
memset(&right_value601, 0, sizeof(void*));
memset(&right_value602, 0, sizeof(void*));
memset(&right_value603, 0, sizeof(void*));
memset(&param_names_477, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value604, 0, sizeof(void*));
memset(&right_value605, 0, sizeof(void*));
memset(&param_default_parametors_478, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value606, 0, sizeof(void*));
memset(&right_value607, 0, sizeof(void*));
memset(&header_buf_479, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value608, 0, sizeof(void*));
memset(&i_480, 0, sizeof(int)); /* ddd */
memset(&param_type_481, 0, sizeof(struct sType*)); /* ddd */
memset(&param_name_482, 0, sizeof(char*)); /* ddd */
memset(&right_value609, 0, sizeof(void*));
memset(&right_value610, 0, sizeof(void*));
memset(&right_value611, 0, sizeof(void*));
memset(&right_value612, 0, sizeof(void*));
memset(&fun_483, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value613, 0, sizeof(void*));
memset(&fun2_484, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value614, 0, sizeof(void*));
memset(&right_value615, 0, sizeof(void*));
memset(&right_value616, 0, sizeof(void*));
memset(&right_value620, 0, sizeof(void*));
memset(&node_486, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value621, 0, sizeof(void*));
memset(&right_value622, 0, sizeof(void*));
    equaler_450=((void*)0);
    real_fun_name_451=(char*)come_increment_ref_count(((char*)(right_value588=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value588) { right_value588 = come_decrement_ref_count(right_value588, (void*)0, (void*)0, 1, 0); }
    type2_452=(struct sType*)come_increment_ref_count(((struct sType*)(right_value589=solve_generics(type,type,info))));
    if(right_value589) { come_call_finalizer(sType_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_452;
    klass_453=type->mClass;
    if(type->mPointerNum>0&&!klass_453->mNumber) {
        source_454=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value591=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value590=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value590) { come_call_finalizer(buffer_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value591) { come_call_finalizer(buffer_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_454,123);
        if(klass_453->mProtocol) {
            name_455="_protocol_obj";
            char source2_456[1024];
            memset(&source2_456, 0, sizeof(source2_456)); /* aaa */
            snprintf(source2_456,1024,"return !left.%s.equals(right.%s);\n",name_455,name_455);
            buffer_append_str(source_454,source2_456);
        }
        else {
            char source2_457[1024];
            memset(&source2_457, 0, sizeof(source2_457)); /* aaa */
            snprintf(source2_457,1024,"return !(");
            buffer_append_str(source_454,source2_457);
            i_458=0;
            klass_453=map$2charphsClassphp_operator_load_element(info->classes,klass_453->mName);
            for(
            it_459=list$1tuple2$2charphsTypephphp_begin((klass_453->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_453->mFields));
            it_459=list$1tuple2$2charphsTypephphp_next((klass_453->mFields))
            ){
                multiple_assgin_var6=it_459;
                name_460=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                field_type_461=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                if(string_operator_equals(type->mClass->mName,field_type_461->mClass->mName)&&type->mPointerNum==field_type_461->mPointerNum&&field_type_461->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_462[1024];
                memset(&source2_462, 0, sizeof(source2_462)); /* aaa */
                snprintf(source2_462,1024,"left.%s.equals(right.%s)",name_460,name_460);
                buffer_append_str(source_454,source2_462);
                if(i_458==list$1tuple2$2charphsTypephphp_length(klass_453->mFields)-1) {
                    char source2_463[1024];
                    memset(&source2_463, 0, sizeof(source2_463)); /* aaa */
                    snprintf(source2_463,1024,");");
                    buffer_append_str(source_454,source2_463);
                }
                else {
                    char source2_464[1024];
                    memset(&source2_464, 0, sizeof(source2_464)); /* aaa */
                    snprintf(source2_464,1024," && ");
                    buffer_append_str(source_454,source2_464);
                }
                i_458++;
                if(name_460) { name_460 = come_decrement_ref_count(name_460, (void*)0, (void*)0, 0, 0); }
                if(field_type_461) { come_call_finalizer(sType_finalize,field_type_461, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_char(source_454,125);
        p_465=info->p;
        sline_466=info->sline;
        head_467=info->head;
        source3_468=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj114=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_454);
        if(__dec_obj114) { come_call_finalizer(buffer_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0); }
        info->p=source_454->buf;
        info->head=source_454->buf;
        block_469=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value592=parse_block(info,(_Bool)0))));
        if(right_value592) { come_call_finalizer(sBlock_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0); }
        result_type_470=(struct sType*)come_increment_ref_count(((struct sType*)(right_value594=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value593=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
        if(right_value593) { come_call_finalizer(sType_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value594) { come_call_finalizer(sType_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0); }
        name_471=(char*)come_increment_ref_count(((char*)(right_value595=string_clone(real_fun_name_451))));
        if(right_value595) { right_value595 = come_decrement_ref_count(right_value595, (void*)0, (void*)0, 1, 0); }
        left_type_472=(struct sType*)come_increment_ref_count(((struct sType*)(right_value596=sType_clone(type))));
        if(right_value596) { come_call_finalizer(sType_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0); }
        left_type_472->mHeap=(_Bool)0;
        right_type_473=(struct sType*)come_increment_ref_count(((struct sType*)(right_value597=sType_clone(type))));
        if(right_value597) { come_call_finalizer(sType_finalize,right_value597, (void*)0, (void*)0, 0, 1, 0); }
        right_type_473->mHeap=(_Bool)0;
        {__list_values29___474[0]=come_increment_ref_count(left_type_472);
__list_values29___474[1]=come_increment_ref_count(right_type_473);
}        param_types_475=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value599=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value598=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values29___474))));
        if(right_value599) { come_call_finalizer(list$1sTypephp_finalize,right_value599, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values30___476[0]=come_increment_ref_count(((char*)(right_value600=__builtin_string("left"))));
__list_values30___476[1]=come_increment_ref_count(((char*)(right_value601=__builtin_string("right"))));
}        param_names_477=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value603=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value602=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values30___476))));
        if(right_value600) { right_value600 = come_decrement_ref_count(right_value600, (void*)0, (void*)0, 1, 0); }
        if(right_value601) { right_value601 = come_decrement_ref_count(right_value601, (void*)0, (void*)0, 1, 0); }
        if(right_value603) { come_call_finalizer(list$1charphp_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_478=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value605=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value604=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value605) { come_call_finalizer(list$1charphp_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_479=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value607=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value606=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value606) { come_call_finalizer(buffer_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value607) { come_call_finalizer(buffer_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_479,((char*)(right_value608=make_come_type_name_string(result_type_470,info))));
        if(right_value608) { right_value608 = come_decrement_ref_count(right_value608, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_479," ");
        buffer_append_str(header_buf_479,real_fun_name_451);
        buffer_append_str(header_buf_479,"(");
        for(
        i_480=0;
        i_480<list$1sTypephp_length(param_types_475);
        i_480++
        ){
            param_type_481=list$1sTypephp_operator_load_element(param_types_475,i_480);
            param_name_482=list$1charphp_operator_load_element(param_names_477,i_480);
            buffer_append_str(header_buf_479,((char*)(right_value609=make_come_type_name_string(param_type_481,info))));
            if(right_value609) { right_value609 = come_decrement_ref_count(right_value609, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_479," ");
            buffer_append_str(header_buf_479,param_name_482);
            if(i_480!=list$1sTypephp_length(param_types_475)-1) {
                buffer_append_str(header_buf_479,",");
            }
        }
        buffer_append_str(header_buf_479,")");
        result_type_470->mStatic=(_Bool)0;
        fun_483=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value612=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value610=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_471),(struct sType*)come_increment_ref_count(result_type_470),(struct list$1sTypeph*)come_increment_ref_count(param_types_475),(struct list$1charph*)come_increment_ref_count(param_names_477),(struct list$1charph*)come_increment_ref_count(param_default_parametors_478),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_469),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value611=buffer_to_string(header_buf_479)))),info))));
        if(right_value610) { come_call_finalizer(sFun_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value611) { right_value611 = come_decrement_ref_count(right_value611, (void*)0, (void*)0, 1, 0); }
        if(right_value612) { come_call_finalizer(sFun_finalize,right_value612, (void*)0, (void*)0, 0, 1, 0); }
        fun2_484=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value613=__builtin_string(fun_name))));
        if(right_value613) { right_value613 = come_decrement_ref_count(right_value613, (void*)0, (void*)0, 1, 0); }
        if(fun2_484==((void*)0)||fun2_484->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value614=string_clone(name_471)))),(struct sFun*)come_increment_ref_count(fun_483));
            if(right_value614) { right_value614 = come_decrement_ref_count(right_value614, (void*)0, (void*)0, 1, 0); }
        }
        equaler_450=fun_483;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value616=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value615=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_483),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=sFunNode_finalize;
        _inf_value8->clone=sFunNode_clone;
        _inf_value8->compile=sFunNode_compile;
        _inf_value8->sline=sFunNode_sline;
        _inf_value8->sname=sFunNode_sname;
        _inf_value8->terminated=sFunNode_terminated;
        node_486=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value620=_inf_value8)));
        if(right_value615) { come_call_finalizer(sFunNode_finalize,right_value615, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value616) { come_call_finalizer(sFunNode_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value620) { right_value620 = come_decrement_ref_count(right_value620, ((struct sNode*)right_value620)->finalize, ((struct sNode*)right_value620)->_protocol_obj, 1, 0); } 
        if(!node_486->compile(node_486->_protocol_obj,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj117=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_468);
        if(__dec_obj117) { come_call_finalizer(buffer_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0); }
        info->p=p_465;
        info->head=head_467;
        info->sline=sline_466;
        if(source_454) { come_call_finalizer(buffer_finalize,source_454, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_468) { come_call_finalizer(buffer_finalize,source3_468, (void*)0, (void*)0, 0, 0, 0); }
        if(block_469) { come_call_finalizer(sBlock_finalize,block_469, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_470) { come_call_finalizer(sType_finalize,result_type_470, (void*)0, (void*)0, 0, 0, 0); }
        if(name_471) { name_471 = come_decrement_ref_count(name_471, (void*)0, (void*)0, 0, 0); }
        if(left_type_472) { come_call_finalizer(sType_finalize,left_type_472, (void*)0, (void*)0, 0, 0, 0); }
        if(right_type_473) { come_call_finalizer(sType_finalize,right_type_473, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_475) { come_call_finalizer(list$1sTypephp_finalize,param_types_475, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_477) { come_call_finalizer(list$1charphp_finalize,param_names_477, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_478) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_478, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_479) { come_call_finalizer(buffer_finalize,header_buf_479, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_483) { come_call_finalizer(sFun_finalize,fun_483, (void*)0, (void*)0, 0, 0, 0); }
        if(node_486) { node_486 = come_decrement_ref_count(node_486, ((struct sNode*)node_486)->finalize, ((struct sNode*)node_486)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result165__ = ((struct tuple2$2sFunpcharph*)(right_value622=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value621=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1))))),equaler_450,(char*)come_increment_ref_count(real_fun_name_451))));
    if(real_fun_name_451) { real_fun_name_451 = come_decrement_ref_count(real_fun_name_451, (void*)0, (void*)0, 0, 0); }
    if(type2_452) { come_call_finalizer(sType_finalize,type2_452, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result165__;
come_release_malloced_mem();
}

char* skip_block(struct sInfo* info){
char* head_65;
_Bool dquort_66;
_Bool squort_67;
int sline_68;
int nest_69;
char* tail_70;
void* right_value66;
char* buf_71;
void* right_value67;
memset(&head_65, 0, sizeof(char*)); /* ddd */
memset(&dquort_66, 0, sizeof(_Bool)); /* ddd */
memset(&squort_67, 0, sizeof(_Bool)); /* ddd */
memset(&sline_68, 0, sizeof(int)); /* ddd */
memset(&nest_69, 0, sizeof(int)); /* ddd */
memset(&tail_70, 0, sizeof(char*)); /* ddd */
memset(&right_value66, 0, sizeof(void*));
memset(&buf_71, 0, sizeof(char*)); /* ddd */
memset(&right_value67, 0, sizeof(void*));
    head_65=info->p;
    if(*info->p==123) {
        info->p++;
        dquort_66=(_Bool)0;
        squort_67=(_Bool)0;
        sline_68=0;
        nest_69=0;
        while(1) {
            if(dquort_66) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_68);
                        exit(2);
                    }
                    info->p++;
                }
                else if(*info->p==34) {
                    info->p++;
                    dquort_66=!dquort_66;
                }
                else {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_68);
                        exit(2);
                    }
                }
            }
            else if(squort_67) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_68);
                        exit(2);
                    }
                    info->p++;
                }
                else if(*info->p==39) {
                    info->p++;
                    squort_67=!squort_67;
                }
                else {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_68);
                        exit(2);
                    }
                }
            }
            else if(*info->p==39) {
                sline_68=info->sline;
                info->p++;
                squort_67=!squort_67;
            }
            else if(*info->p==34) {
                sline_68=info->sline;
                info->p++;
                dquort_66=!dquort_66;
            }
            else if(*info->p==35) {
                parse_sharp_v5(info);
            }
            else if(*info->p==123) {
                info->p++;
                nest_69++;
            }
            else if(*info->p==125) {
                info->p++;
                if(nest_69==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_69--;
            }
            else if(*info->p==0) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
            }
            else if(*info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_70=info->p;
    buf_71=(char*)come_increment_ref_count(((char*)(right_value66=(char*)come_calloc(1, sizeof(char)*(1*(tail_70-head_65+1))))));
    if(right_value66) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0); }
    memcpy(buf_71,head_65,tail_70-head_65);
    buf_71[tail_70-head_65]=0;
    char* __result50__ = ((char*)(right_value67=__builtin_string(buf_71)));
    if(buf_71) { buf_71 = come_decrement_ref_count(buf_71, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result50__;
come_release_malloced_mem();
}

_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_256;
struct sType* type_260;
struct sClass* generics_class_261;
void* right_value367;
_Bool generics_type_name_263;
memset(&klass_256, 0, sizeof(struct sClass*)); /* ddd */
memset(&type_260, 0, sizeof(struct sType*)); /* ddd */
memset(&generics_class_261, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value367, 0, sizeof(void*));
memset(&generics_type_name_263, 0, sizeof(_Bool)); /* ddd */
    klass_256=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_260=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_261=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_263=list$1charphp_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string(buf)))));
    if(right_value367) { right_value367 = come_decrement_ref_count(right_value367, (void*)0, (void*)0, 1, 0); }
    _Bool __result84__ = generics_class_261||generics_type_name_263||klass_256||type_260||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__extension__");
    come_release_malloced_mem();
    return __result84__;
come_release_malloced_mem();
}

int expected_next_character(char c, struct sInfo* info){
int* a_64;
memset(&a_64, 0, sizeof(int*)); /* ddd */
    parse_sharp_v5(info);
    if(*info->p!=c) {
        err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
        a_64=(void*)0;
        *a_64=0;
        exit(2);
    }
    info->p++;
    skip_spaces_and_lf(info);
    int __result49__ = 0;
    come_release_malloced_mem();
    return __result49__;
come_release_malloced_mem();
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* right_value37;
void* right_value38;
struct list$1sNodeph* __dec_obj25;
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
    __dec_obj25=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value38=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value37=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
    if(__dec_obj25) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value38) { come_call_finalizer(list$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
    struct sBlock* __result27__ = self;
    if(self) { come_call_finalizer(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result27__;
come_release_malloced_mem();
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* right_value369;
char* sname_top_265;
int sline_top_266;
struct sFun* funX_268;
void* right_value370;
struct sType* result_type_269;
void* right_value371;
void* right_value372;
struct list$1sTypeph* param_types_270;
struct sType* it_272;
void* right_value373;
struct sType* param_type_274;
void* right_value374;
void* right_value375;
struct list$1charph* param_names_275;
char* p_276;
int sline_277;
char* head_278;
struct buffer* source_279;
void* right_value376;
struct buffer* __dec_obj60;
void* right_value377;
struct sType* generics_type_saved_280;
void* right_value378;
struct sType* __dec_obj61;
void* right_value379;
struct list$1charph* generics_type_names_saved_281;
void* right_value380;
struct list$1charph* __dec_obj62;
void* right_value381;
struct sBlock* block_282;
struct buffer* __dec_obj63;
_Bool var_args_283;
void* right_value382;
void* right_value383;
void* right_value384;
void* right_value385;
void* right_value386;
struct sFun* fun_284;
void* right_value387;
void* right_value388;
void* right_value389;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value429;
struct sNode* node_318;
struct sType* __dec_obj85;
struct list$1charph* __dec_obj86;
void* right_value430;
char* __dec_obj87;
memset(&right_value369, 0, sizeof(void*));
memset(&sname_top_265, 0, sizeof(char*)); /* ddd */
memset(&sline_top_266, 0, sizeof(int)); /* ddd */
memset(&funX_268, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value370, 0, sizeof(void*));
memset(&result_type_269, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&param_types_270, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_272, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value373, 0, sizeof(void*));
memset(&param_type_274, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&param_names_275, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&p_276, 0, sizeof(char*)); /* ddd */
memset(&sline_277, 0, sizeof(int)); /* ddd */
memset(&head_278, 0, sizeof(char*)); /* ddd */
memset(&source_279, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&generics_type_saved_280, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&generics_type_names_saved_281, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&block_282, 0, sizeof(struct sBlock*)); /* ddd */
memset(&var_args_283, 0, sizeof(_Bool)); /* ddd */
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&fun_284, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&node_318, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value430, 0, sizeof(void*));
    sname_top_265=(char*)come_increment_ref_count(((char*)(right_value369=__builtin_string(info->sname))));
    if(right_value369) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0); }
    sline_top_266=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_268=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_268) {
        _Bool __result91__ = (_Bool)1;
        come_release_malloced_mem();
        return __result91__;
    }
    result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value370=solve_generics(generics_fun->mResultType,generics_type,info))));
    if(right_value370) { come_call_finalizer(sType_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0); }
    param_types_270=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value372=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value371=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
    if(right_value372) { come_call_finalizer(list$1sTypephp_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_272=list$1sTypephp_begin((generics_fun->mParamTypes));
    !list$1sTypephp_end((generics_fun->mParamTypes));
    it_272=list$1sTypephp_next((generics_fun->mParamTypes))
    ){
        param_type_274=(struct sType*)come_increment_ref_count(((struct sType*)(right_value373=solve_generics(it_272,generics_type,info))));
        if(right_value373) { come_call_finalizer(sType_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0); }
        param_type_274->mFunctionParam=(_Bool)1;
        list$1sTypephp_push_back(param_types_270,(struct sType*)come_increment_ref_count(((struct sType*)(right_value374=sType_clone(param_type_274)))));
        if(right_value374) { come_call_finalizer(sType_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0); }
        if(param_type_274) { come_call_finalizer(sType_finalize,param_type_274, (void*)0, (void*)0, 0, 0, 0); }
    }
    param_names_275=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value375=list$1charphp_clone(generics_fun->mParamNames))));
    if(right_value375) { come_call_finalizer(list$1charphp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0); }
    p_276=info->p;
    sline_277=generics_fun->mSLine;
    head_278=info->head;
    source_279=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj60=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value376=string_to_buffer(generics_fun->mBlock))));
    if(__dec_obj60) { come_call_finalizer(buffer_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value376) { come_call_finalizer(buffer_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0); }
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_280=(struct sType*)come_increment_ref_count(((struct sType*)(right_value377=sType_clone(info->generics_type))));
    if(right_value377) { come_call_finalizer(sType_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj61=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value378=sType_clone(generics_type))));
    if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value378) { come_call_finalizer(sType_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0); }
    generics_type_names_saved_281=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value379=list$1charphp_clone(info->generics_type_names))));
    if(right_value379) { come_call_finalizer(list$1charphp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj62=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value380=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    if(__dec_obj62) { come_call_finalizer(list$1charphp_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value380) { come_call_finalizer(list$1charphp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0); }
    block_282=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value381=parse_block(info,(_Bool)0))));
    if(right_value381) { come_call_finalizer(sBlock_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj63=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_279);
    if(__dec_obj63) { come_call_finalizer(buffer_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0); }
    info->p=p_276;
    info->sline=sline_277;
    info->head=head_278;
    result_type_269->mInline=(_Bool)0;
    var_args_283=generics_fun->mVarArgs;
    fun_284=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value386=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value382=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_269),(struct list$1sTypeph*)come_increment_ref_count(param_types_270),(struct list$1charph*)come_increment_ref_count(param_names_275),(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value384=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value383=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))))))),(_Bool)0,var_args_283,(struct sBlock*)come_increment_ref_count(block_282),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value385=__builtin_string("")))),info))));
    if(right_value382) { come_call_finalizer(sFun_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value384) { come_call_finalizer(list$1charphp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value385) { right_value385 = come_decrement_ref_count(right_value385, (void*)0, (void*)0, 1, 0); }
    if(right_value386) { come_call_finalizer(sFun_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value387=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_284));
    if(right_value387) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0); }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value389=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value388=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_284),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sFunNode_finalize;
    _inf_value1->clone=sFunNode_clone;
    _inf_value1->compile=sFunNode_compile;
    _inf_value1->sline=sFunNode_sline;
    _inf_value1->sname=sFunNode_sname;
    _inf_value1->terminated=sFunNode_terminated;
    node_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value429=_inf_value1)));
    if(right_value388) { come_call_finalizer(sFunNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value389) { come_call_finalizer(sFunNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value429) { right_value429 = come_decrement_ref_count(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0); } 
    if(!node_318->compile(node_318->_protocol_obj,info)) {
        _Bool __result120__ = (_Bool)0;
        come_release_malloced_mem();
        return __result120__;
    }
    __dec_obj85=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_280);
    if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj86=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(generics_type_names_saved_281);
    if(__dec_obj86) { come_call_finalizer(list$1charphp_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj87=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value430=__builtin_string(sname_top_265))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0); }
    if(right_value430) { right_value430 = come_decrement_ref_count(right_value430, (void*)0, (void*)0, 1, 0); }
    info->sline=sline_top_266;
    _Bool __result121__ = (_Bool)1;
    if(fun_name) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1); }
    if(sname_top_265) { sname_top_265 = come_decrement_ref_count(sname_top_265, (void*)0, (void*)0, 0, 0); }
    if(result_type_269) { come_call_finalizer(sType_finalize,result_type_269, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_270) { come_call_finalizer(list$1sTypephp_finalize,param_types_270, (void*)0, (void*)0, 0, 0, 0); }
    if(param_names_275) { come_call_finalizer(list$1charphp_finalize,param_names_275, (void*)0, (void*)0, 0, 0, 0); }
    if(source_279) { come_call_finalizer(buffer_finalize,source_279, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_type_saved_280) { come_call_finalizer(sType_finalize,generics_type_saved_280, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_type_names_saved_281) { come_call_finalizer(list$1charphp_finalize,generics_type_names_saved_281, (void*)0, (void*)0, 0, 0, 0); }
    if(block_282) { come_call_finalizer(sBlock_finalize,block_282, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_284) { come_call_finalizer(sFun_finalize,fun_284, (void*)0, (void*)0, 0, 0, 0); }
    if(node_318) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0); } 
    come_release_malloced_mem();
    return __result121__;
come_release_malloced_mem();
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level){
void* right_value41;
void* right_value42;
struct sBlock* result_29;
int block_level_30;
int sline_31;
char* sname_32;
void* right_value43;
struct sNode* node_33;
void* right_value47;
struct sNode* node_37;
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct sBlock*)); /* ddd */
memset(&block_level_30, 0, sizeof(int)); /* ddd */
memset(&sline_31, 0, sizeof(int)); /* ddd */
memset(&sname_32, 0, sizeof(char*)); /* ddd */
memset(&right_value43, 0, sizeof(void*));
memset(&node_33, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value47, 0, sizeof(void*));
memset(&node_37, 0, sizeof(struct sNode*)); /* ddd */
    result_29=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value42=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value41=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1))))),info))));
    if(right_value41) { come_call_finalizer(sBlock_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value42) { come_call_finalizer(sBlock_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
    block_level_30=info->block_level;
    if(!no_block_level) {
        info->block_level++;
    }
    if(*info->p==123) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_31=info->sline;
            sname_32=info->sname;
            node_33=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value43=expression_v13(info))));
            if(right_value43) { right_value43 = come_decrement_ref_count(right_value43, ((struct sNode*)right_value43)->finalize, ((struct sNode*)right_value43)->_protocol_obj, 1, 0); } 
            list$1sNodephp_push_back(result_29->mNodes,(struct sNode*)come_increment_ref_count(node_33));
            parse_sharp_v5(info);
            if(node_33->terminated(node_33->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            if(node_33) { node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        node_37=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value47=expression_v13(info))));
        if(right_value47) { right_value47 = come_decrement_ref_count(right_value47, ((struct sNode*)right_value47)->finalize, ((struct sNode*)right_value47)->_protocol_obj, 1, 0); } 
        parse_sharp_v5(info);
        list$1sNodephp_push_back(result_29->mNodes,(struct sNode*)come_increment_ref_count(node_37));
        if(node_37) { node_37 = come_decrement_ref_count(node_37, ((struct sNode*)node_37)->finalize, ((struct sNode*)node_37)->_protocol_obj, 0, 0); } 
    }
    info->block_level=block_level_30;
    struct sBlock* __result29__ = result_29;
    if(result_29) { come_call_finalizer(sBlock_finalize,result_29, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result29__;
come_release_malloced_mem();
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table){
struct sVarTable* old_table_38;
void* right_value48;
void* right_value49;
struct sVarTable* __dec_obj36;
struct list$1sTypeph* param_types__39;
struct list$1charph* param_names__40;
int i_41;
char* name_43;
void* right_value59;
struct sType* type_49;
void* right_value60;
struct list$1sRightValueObjectph* right_value_objects_50;
void* right_value61;
void* right_value62;
struct list$1sRightValueObjectph* __dec_obj45;
int block_level_53;
int i_54;
struct sNode* node_56;
int stack_num_before_58;
int sline_59;
void* right_value63;
char* sname_60;
void* right_value64;
char* __dec_obj46;
void* right_value65;
char* __dec_obj47;
struct list$1sRightValueObjectph* __dec_obj48;
memset(&old_table_38, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&param_types__39, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&param_names__40, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&i_41, 0, sizeof(int)); /* bbb */
memset(&name_43, 0, sizeof(char*)); /* ddd */
memset(&right_value59, 0, sizeof(void*));
memset(&type_49, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value60, 0, sizeof(void*));
memset(&right_value_objects_50, 0, sizeof(struct list$1sRightValueObjectph*)); /* ddd */
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&block_level_53, 0, sizeof(int)); /* ddd */
memset(&i_54, 0, sizeof(int)); /* bbb */
memset(&node_56, 0, sizeof(struct sNode*)); /* ddd */
memset(&stack_num_before_58, 0, sizeof(int)); /* ddd */
memset(&sline_59, 0, sizeof(int)); /* ddd */
memset(&right_value63, 0, sizeof(void*));
memset(&sname_60, 0, sizeof(char*)); /* ddd */
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
    old_table_38=info->lv_table;
    if(!no_var_table) {
        __dec_obj36=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value49=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value48=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1))))),(_Bool)0,old_table_38))));
        if(__dec_obj36) { come_call_finalizer(sVarTable_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value48) { come_call_finalizer(sVarTable_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value49) { come_call_finalizer(sVarTable_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0); }
        info->lv_table=block->mVarTable;
    }
    param_types__39=info->param_types;
    param_names__40=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(param_types&&param_names) {
        for(
        name_43=list$1charphp_begin((param_names));
        !list$1charphp_end((param_names));
        name_43=list$1charphp_next((param_names))
        ){
            type_49=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sTypep_clone(list$1sTypephp_operator_load_element(param_types,i_41)))));
            if(right_value59) { come_call_finalizer(sTypep_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
            type_49->mFunctionParam=(_Bool)1;
            type_49->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_43,(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(type_49)))),info);
            if(right_value60) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
            i_41++;
            if(type_49) { come_call_finalizer(sType_finalize,type_49, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    right_value_objects_50=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    __dec_obj45=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value62=list$1sRightValueObjectphp_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value61=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1)))))))));
    if(__dec_obj45) { come_call_finalizer(list$1sRightValueObjectphp_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value62) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0); }
    block_level_53=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNodephp_length(block->mNodes)==0) {
    }
    else {
        for(
        node_56=list$1sNodephp_begin((block->mNodes));
        !list$1sNodephp_end((block->mNodes));
        node_56=list$1sNodephp_next((block->mNodes))
        ){
            info->module->mLastCode=((void*)0);
            info->module->mLastCode2=((void*)0);
            stack_num_before_58=list$1CVALUEphp_length(info->stack);
            sline_59=info->sline;
            sname_60=(char*)come_increment_ref_count(((char*)(right_value63=__builtin_string(info->sname))));
            if(right_value63) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0); }
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_56->sline(node_56->_protocol_obj);
            __dec_obj46=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value64=node_56->sname(node_56->_protocol_obj))));
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
            if(right_value64) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0); }
            if(!node_56->compile(node_56->_protocol_obj,info)) {
                err_msg(info,"compiling is failed(5)");
                exit(2);
            }
            info->sline=sline_59;
            __dec_obj47=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value65=__builtin_string(sname_60))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
            if(right_value65) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0); }
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_58);
            free_right_value_objects(info);
            if(sname_60) { sname_60 = come_decrement_ref_count(sname_60, (void*)0, (void*)0, 0, 0); }
        }
    }
    if(!info->last_statment_is_return&&!no_var_table) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_38;
    info->block_level=block_level_53;
    info->param_types=param_types__39;
    info->param_names=param_names__40;
    __dec_obj48=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_50);
    if(__dec_obj48) { come_call_finalizer(list$1sRightValueObjectphp_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0); }
    int __result48__ = 0;
    if(right_value_objects_50) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_50, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result48__;
come_release_malloced_mem();
}

void arrange_stack(struct sInfo* info, int top){
int a_61;
int b_62;
int c_63;
memset(&a_61, 0, sizeof(int)); /* ddd */
memset(&b_62, 0, sizeof(int)); /* ddd */
memset(&c_63, 0, sizeof(int)); /* ddd */
    if(list$1CVALUEphp_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEphp_length(info->stack)-top,info);
    }
    if(list$1CVALUEphp_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEphp_length(info->stack),top);
        a_61=0;
        b_62=1;
        c_63=b_62/a_61;
        exit(2);
    }
come_release_malloced_mem();
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_319;
void* right_value431;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* result_type_320;
char* var_name_321;
_Bool err_322;
_Bool method_definition_323;
char* p_324;
int sline_325;
void* right_value432;
void* right_value433;
struct buffer* buf2_326;
char* fun_name_327;
char* base_fun_name_328;
void* right_value434;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* obj_type_329;
char* name_330;
_Bool err_331;
void* right_value435;
void* right_value436;
char* __dec_obj88;
void* right_value437;
void* right_value438;
void* right_value439;
char* __dec_obj89;
void* right_value440;
void* right_value441;
char* __dec_obj90;
void* right_value442;
void* right_value443;
void* right_value444;
char* __dec_obj91;
void* right_value445;
void* right_value446;
char* __dec_obj92;
void* right_value447;
void* right_value448;
char* __dec_obj93;
void* right_value449;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_332;
struct list$1charph* param_names_333;
struct list$1charph* param_default_parametors_334;
_Bool var_args_335;
char* header_tail_336;
void* right_value450;
void* right_value451;
struct buffer* header_buf_337;
int version_338;
int n_339;
void* right_value452;
struct sBlock* block_340;
static int lambda_num_341=0;
void* right_value453;
char* __dec_obj94;
void* right_value454;
void* right_value455;
void* right_value456;
void* right_value457;
struct sFun* fun_342;
void* right_value458;
struct sFun* fun2_343;
void* right_value459;
void* right_value460;
void* right_value461;
struct sNode* _inf_value2;
struct sLambdaNode* _inf_obj_value2;
void* right_value464;
void* right_value465;
char* none_generics_name_345;
void* right_value466;
char* block_346;
void* right_value467;
void* right_value468;
void* right_value469;
struct sGenericsFun* fun_347;
void* right_value470;
char* fun_name3_348;
void* right_value474;
void* right_value475;
struct sBlock* block_368;
_Bool static__369;
void* right_value476;
void* right_value477;
char* new_fun_name_370;
void* right_value478;
char* __dec_obj96;
void* right_value479;
void* right_value480;
void* right_value481;
void* right_value482;
void* right_value483;
struct sFun* fun_371;
void* right_value484;
struct sFun* fun2_372;
void* right_value485;
void* right_value486;
void* right_value487;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* right_value491;
void* right_value492;
char* new_fun_name_374;
void* right_value493;
char* __dec_obj99;
void* right_value494;
void* right_value495;
void* right_value496;
void* right_value497;
struct sFun* fun_375;
void* right_value498;
struct sFun* fun2_376;
void* right_value499;
void* right_value500;
void* right_value501;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value505;
void* right_value506;
char* asm_fun_378;
void* right_value507;
char* __dec_obj102;
void* right_value508;
void* right_value509;
void* right_value510;
void* right_value511;
struct sFun* fun_379;
void* right_value512;
struct sFun* fun2_380;
void* right_value513;
void* right_value514;
void* right_value515;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value519;
memset(&header_head_319, 0, sizeof(char*)); /* ddd */
memset(&right_value431, 0, sizeof(void*));
memset(&result_type_320, 0, sizeof(struct sType*)); /* ccc */
memset(&var_name_321, 0, sizeof(char*)); /* ccc */
memset(&err_322, 0, sizeof(_Bool)); /* ccc */
memset(&result_type_320, 0, sizeof(struct sType*)); /* eee */
memset(&var_name_321, 0, sizeof(char*)); /* eee */
memset(&err_322, 0, sizeof(_Bool)); /* eee */
memset(&method_definition_323, 0, sizeof(_Bool)); /* ddd */
memset(&p_324, 0, sizeof(char*)); /* ddd */
memset(&sline_325, 0, sizeof(int)); /* ddd */
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&buf2_326, 0, sizeof(struct buffer*)); /* ddd */
memset(&fun_name_327, 0, sizeof(char*)); /* bbb */
memset(&base_fun_name_328, 0, sizeof(char*)); /* bbb */
memset(&right_value434, 0, sizeof(void*));
memset(&obj_type_329, 0, sizeof(struct sType*)); /* ccc */
memset(&name_330, 0, sizeof(char*)); /* ccc */
memset(&err_331, 0, sizeof(_Bool)); /* ccc */
memset(&obj_type_329, 0, sizeof(struct sType*)); /* eee */
memset(&name_330, 0, sizeof(char*)); /* eee */
memset(&err_331, 0, sizeof(_Bool)); /* eee */
memset(&right_value435, 0, sizeof(void*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_value447, 0, sizeof(void*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&param_types_332, 0, sizeof(struct list$1sTypeph*)); /* ccc */
memset(&param_names_333, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&param_default_parametors_334, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&var_args_335, 0, sizeof(_Bool)); /* ccc */
memset(&param_types_332, 0, sizeof(struct list$1sTypeph*)); /* eee */
memset(&param_names_333, 0, sizeof(struct list$1charph*)); /* eee */
memset(&param_default_parametors_334, 0, sizeof(struct list$1charph*)); /* eee */
memset(&var_args_335, 0, sizeof(_Bool)); /* eee */
memset(&header_tail_336, 0, sizeof(char*)); /* ddd */
memset(&right_value450, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&header_buf_337, 0, sizeof(struct buffer*)); /* ddd */
memset(&version_338, 0, sizeof(int)); /* ddd */
memset(&n_339, 0, sizeof(int)); /* ddd */
memset(&right_value452, 0, sizeof(void*));
memset(&block_340, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&right_value456, 0, sizeof(void*));
memset(&right_value457, 0, sizeof(void*));
memset(&fun_342, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value458, 0, sizeof(void*));
memset(&fun2_343, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value464, 0, sizeof(void*));
memset(&right_value465, 0, sizeof(void*));
memset(&none_generics_name_345, 0, sizeof(char*)); /* ddd */
memset(&right_value466, 0, sizeof(void*));
memset(&block_346, 0, sizeof(char*)); /* ddd */
memset(&right_value467, 0, sizeof(void*));
memset(&right_value468, 0, sizeof(void*));
memset(&right_value469, 0, sizeof(void*));
memset(&fun_347, 0, sizeof(struct sGenericsFun*)); /* ddd */
memset(&right_value470, 0, sizeof(void*));
memset(&fun_name3_348, 0, sizeof(char*)); /* ddd */
memset(&right_value474, 0, sizeof(void*));
memset(&right_value475, 0, sizeof(void*));
memset(&block_368, 0, sizeof(struct sBlock*)); /* ddd */
memset(&static__369, 0, sizeof(_Bool)); /* ddd */
memset(&right_value476, 0, sizeof(void*));
memset(&right_value477, 0, sizeof(void*));
memset(&new_fun_name_370, 0, sizeof(char*)); /* ddd */
memset(&right_value478, 0, sizeof(void*));
memset(&right_value479, 0, sizeof(void*));
memset(&right_value480, 0, sizeof(void*));
memset(&right_value481, 0, sizeof(void*));
memset(&right_value482, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
memset(&fun_371, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value484, 0, sizeof(void*));
memset(&fun2_372, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value487, 0, sizeof(void*));
memset(&right_value491, 0, sizeof(void*));
memset(&right_value492, 0, sizeof(void*));
memset(&new_fun_name_374, 0, sizeof(char*)); /* ddd */
memset(&right_value493, 0, sizeof(void*));
memset(&right_value494, 0, sizeof(void*));
memset(&right_value495, 0, sizeof(void*));
memset(&right_value496, 0, sizeof(void*));
memset(&right_value497, 0, sizeof(void*));
memset(&fun_375, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value498, 0, sizeof(void*));
memset(&fun2_376, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value499, 0, sizeof(void*));
memset(&right_value500, 0, sizeof(void*));
memset(&right_value501, 0, sizeof(void*));
memset(&right_value505, 0, sizeof(void*));
memset(&right_value506, 0, sizeof(void*));
memset(&asm_fun_378, 0, sizeof(char*)); /* ddd */
memset(&right_value507, 0, sizeof(void*));
memset(&right_value508, 0, sizeof(void*));
memset(&right_value509, 0, sizeof(void*));
memset(&right_value510, 0, sizeof(void*));
memset(&right_value511, 0, sizeof(void*));
memset(&fun_379, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value512, 0, sizeof(void*));
memset(&fun2_380, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value513, 0, sizeof(void*));
memset(&right_value514, 0, sizeof(void*));
memset(&right_value515, 0, sizeof(void*));
memset(&right_value519, 0, sizeof(void*));
    header_head_319=info->p;
    multiple_assgin_var1=((struct tuple3$3sTypephcharphbool*)(right_value431=parse_type(info,(_Bool)0,(_Bool)1)));
    result_type_320=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
    var_name_321=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
    err_322=multiple_assgin_var1->v3;
    if(right_value431) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0); }
    if(!err_322) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    method_definition_323=(_Bool)0;
    {
        p_324=info->p;
        sline_325=info->sline;
        buf2_326=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value433=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value432=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value432) { come_call_finalizer(buffer_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value433) { come_call_finalizer(buffer_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0); }
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_326,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(buffer_length(buf2_326)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_323=(_Bool)1;
        }
        info->p=p_324;
        info->sline=sline_325;
        if(buf2_326) { come_call_finalizer(buffer_finalize,buf2_326, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(method_definition_323) {
        multiple_assgin_var2=((struct tuple3$3sTypephcharphbool*)(right_value434=parse_type(info,(_Bool)0,(_Bool)1)));
        obj_type_329=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
        name_330=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
        err_331=multiple_assgin_var2->v3;
        if(right_value434) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0); }
        if(!err_331) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj88=base_fun_name_328;
        base_fun_name_328=(char*)come_increment_ref_count(((char*)(right_value436=string_clone(((char*)(right_value435=parse_word(info)))))));
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
        if(right_value435) { right_value435 = come_decrement_ref_count(right_value435, (void*)0, (void*)0, 1, 0); }
        if(right_value436) { right_value436 = come_decrement_ref_count(right_value436, (void*)0, (void*)0, 1, 0); }
        __dec_obj89=fun_name_327;
        fun_name_327=(char*)come_increment_ref_count(((char*)(right_value439=string_clone(((char*)(right_value438=create_method_name(obj_type_329,(_Bool)0,((char*)(right_value437=__builtin_string(base_fun_name_328))),info)))))));
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0); }
        if(right_value437) { right_value437 = come_decrement_ref_count(right_value437, (void*)0, (void*)0, 1, 0); }
        if(right_value438) { right_value438 = come_decrement_ref_count(right_value438, (void*)0, (void*)0, 1, 0); }
        if(right_value439) { right_value439 = come_decrement_ref_count(right_value439, (void*)0, (void*)0, 1, 0); }
        if(obj_type_329) { come_call_finalizer(sType_finalize,obj_type_329, (void*)0, (void*)0, 0, 0, 0); }
        if(name_330) { name_330 = come_decrement_ref_count(name_330, (void*)0, (void*)0, 0, 0); }
    }
    else if(info->impl_type) {
        __dec_obj90=base_fun_name_328;
        base_fun_name_328=(char*)come_increment_ref_count(((char*)(right_value441=string_clone(((char*)(right_value440=parse_word(info)))))));
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0); }
        if(right_value440) { right_value440 = come_decrement_ref_count(right_value440, (void*)0, (void*)0, 1, 0); }
        if(right_value441) { right_value441 = come_decrement_ref_count(right_value441, (void*)0, (void*)0, 1, 0); }
        __dec_obj91=fun_name_327;
        fun_name_327=(char*)come_increment_ref_count(((char*)(right_value444=string_clone(((char*)(right_value443=create_method_name(info->impl_type,(_Bool)0,((char*)(right_value442=__builtin_string(base_fun_name_328))),info)))))));
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0); }
        if(right_value442) { right_value442 = come_decrement_ref_count(right_value442, (void*)0, (void*)0, 1, 0); }
        if(right_value443) { right_value443 = come_decrement_ref_count(right_value443, (void*)0, (void*)0, 1, 0); }
        if(right_value444) { right_value444 = come_decrement_ref_count(right_value444, (void*)0, (void*)0, 1, 0); }
    }
    else {
        __dec_obj92=fun_name_327;
        fun_name_327=(char*)come_increment_ref_count(((char*)(right_value446=string_clone(((char*)(right_value445=parse_word(info)))))));
        if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0); }
        if(right_value445) { right_value445 = come_decrement_ref_count(right_value445, (void*)0, (void*)0, 1, 0); }
        if(right_value446) { right_value446 = come_decrement_ref_count(right_value446, (void*)0, (void*)0, 1, 0); }
        __dec_obj93=base_fun_name_328;
        base_fun_name_328=(char*)come_increment_ref_count(((char*)(right_value448=string_clone(((char*)(right_value447=__builtin_string(fun_name_327)))))));
        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
        if(right_value447) { right_value447 = come_decrement_ref_count(right_value447, (void*)0, (void*)0, 1, 0); }
        if(right_value448) { right_value448 = come_decrement_ref_count(right_value448, (void*)0, (void*)0, 1, 0); }
    }
    multiple_assgin_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value449=parse_params(info)));
    param_types_332=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
    param_names_333=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
    param_default_parametors_334=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
    var_args_335=multiple_assgin_var3->v4;
    if(right_value449) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0); }
    header_tail_336=info->p;
    header_buf_337=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value451=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value450=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value450) { come_call_finalizer(buffer_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value451) { come_call_finalizer(buffer_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append(header_buf_337,header_head_319,header_tail_336-header_head_319);
    buffer_append_char(header_buf_337,0);
    version_338=0;
    if(memcmp(info->p,"version",strlen("version"))==0) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_339=0;
        while(xisdigit(*info->p)) {
            n_339=n_339*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_338=n_339;
    }
    if(string_operator_equals(base_fun_name_328,"lambda")) {
        block_340=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value452=parse_block(info,(_Bool)0))));
        if(right_value452) { come_call_finalizer(sBlock_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0); }
        lambda_num_341++;
        __dec_obj94=fun_name_327;
        fun_name_327=(char*)come_increment_ref_count(((char*)(right_value453=xsprintf("lambda%d",lambda_num_341))));
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0); }
        if(right_value453) { right_value453 = come_decrement_ref_count(right_value453, (void*)0, (void*)0, 1, 0); }
        result_type_320->mStatic=(_Bool)0;
        fun_342=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value457=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value454=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(((char*)(right_value455=__builtin_string(fun_name_327)))),(struct sType*)come_increment_ref_count(result_type_320),(struct list$1sTypeph*)come_increment_ref_count(param_types_332),(struct list$1charph*)come_increment_ref_count(param_names_333),(struct list$1charph*)come_increment_ref_count(param_default_parametors_334),(_Bool)0,var_args_335,(struct sBlock*)come_increment_ref_count(block_340),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value456=buffer_to_string(header_buf_337)))),info))));
        if(right_value454) { come_call_finalizer(sFun_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value455) { right_value455 = come_decrement_ref_count(right_value455, (void*)0, (void*)0, 1, 0); }
        if(right_value456) { right_value456 = come_decrement_ref_count(right_value456, (void*)0, (void*)0, 1, 0); }
        if(right_value457) { come_call_finalizer(sFun_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0); }
        fun2_343=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value458=__builtin_string(fun_name_327))));
        if(right_value458) { right_value458 = come_decrement_ref_count(right_value458, (void*)0, (void*)0, 1, 0); }
        if(fun2_343==((void*)0)||fun2_343->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value459=string_clone(fun_name_327)))),(struct sFun*)come_increment_ref_count(fun_342));
            if(right_value459) { right_value459 = come_decrement_ref_count(right_value459, (void*)0, (void*)0, 1, 0); }
        }
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value2=come_increment_ref_count(((struct sLambdaNode*)(right_value461=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value460=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1))))),fun_342,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=sLambdaNode_finalize;
        _inf_value2->clone=sLambdaNode_clone;
        _inf_value2->compile=sLambdaNode_compile;
        _inf_value2->sline=sLambdaNode_sline;
        _inf_value2->sname=sLambdaNode_sname;
        _inf_value2->terminated=sLambdaNode_terminated;
        struct sNode* __result124__ = ((struct sNode*)(right_value464=_inf_value2));
        if(block_340) { come_call_finalizer(sBlock_finalize,block_340, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_342) { come_call_finalizer(sFun_finalize,fun_342, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value460) { come_call_finalizer(sLambdaNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value461) { come_call_finalizer(sLambdaNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result124__;
    }
    else if(info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_345=(char*)come_increment_ref_count(((char*)(right_value465=get_none_generics_name(info->impl_type->mClass->mName))));
        if(right_value465) { right_value465 = come_decrement_ref_count(right_value465, (void*)0, (void*)0, 1, 0); }
        block_346=(char*)come_increment_ref_count(((char*)(right_value466=skip_block(info))));
        if(right_value466) { right_value466 = come_decrement_ref_count(right_value466, (void*)0, (void*)0, 1, 0); }
        fun_347=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value469=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value467=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1))))),(struct sType*)come_increment_ref_count(info->impl_type),info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value468=__builtin_string(fun_name_327)))),(struct sType*)come_increment_ref_count(result_type_320),(struct list$1sTypeph*)come_increment_ref_count(param_types_332),(struct list$1charph*)come_increment_ref_count(param_names_333),var_args_335,(char*)come_increment_ref_count(block_346),info))));
        if(right_value467) { come_call_finalizer(sGenericsFun_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value468) { right_value468 = come_decrement_ref_count(right_value468, (void*)0, (void*)0, 1, 0); }
        if(right_value469) { come_call_finalizer(sGenericsFun_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0); }
        fun_name3_348=(char*)come_increment_ref_count(((char*)(right_value470=xsprintf("%s_%s",none_generics_name_345,base_fun_name_328))));
        if(right_value470) { right_value470 = come_decrement_ref_count(right_value470, (void*)0, (void*)0, 1, 0); }
        map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value474=__builtin_string(fun_name3_348)))),(struct sGenericsFun*)come_increment_ref_count(fun_347));
        if(right_value474) { right_value474 = come_decrement_ref_count(right_value474, (void*)0, (void*)0, 1, 0); }
        struct sNode* __result135__ = (struct sNode*)((void*)0);
        if(none_generics_name_345) { none_generics_name_345 = come_decrement_ref_count(none_generics_name_345, (void*)0, (void*)0, 0, 0); }
        if(block_346) { block_346 = come_decrement_ref_count(block_346, (void*)0, (void*)0, 0, 0); }
        if(fun_347) { come_call_finalizer(sGenericsFun_finalize,fun_347, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name3_348) { fun_name3_348 = come_decrement_ref_count(fun_name3_348, (void*)0, (void*)0, 0, 0); }
        come_release_malloced_mem();
        return __result135__;
    }
    else if(*info->p==123) {
        block_368=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value475=parse_block(info,(_Bool)0))));
        if(right_value475) { come_call_finalizer(sBlock_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0); }
        static__369=(_Bool)0;
        if(result_type_320->mStatic) {
            result_type_320->mStatic=(_Bool)0;
            static__369=(_Bool)1;
        }
        if(version_338>0) {
            new_fun_name_370=(char*)come_increment_ref_count(((char*)(right_value477=xsprintf("%s_v%d",((char*)(right_value476=__builtin_string(fun_name_327))),version_338))));
            if(right_value476) { right_value476 = come_decrement_ref_count(right_value476, (void*)0, (void*)0, 1, 0); }
            if(right_value477) { right_value477 = come_decrement_ref_count(right_value477, (void*)0, (void*)0, 1, 0); }
            __dec_obj96=fun_name_327;
            fun_name_327=(char*)come_increment_ref_count(((char*)(right_value478=__builtin_string(new_fun_name_370))));
            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0); }
            if(right_value478) { right_value478 = come_decrement_ref_count(right_value478, (void*)0, (void*)0, 1, 0); }
            if(new_fun_name_370) { new_fun_name_370 = come_decrement_ref_count(new_fun_name_370, (void*)0, (void*)0, 0, 0); }
        }
        fun_371=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value483=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value479=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(((char*)(right_value480=__builtin_string(fun_name_327)))),(struct sType*)come_increment_ref_count(result_type_320),(struct list$1sTypeph*)come_increment_ref_count(param_types_332),(struct list$1charph*)come_increment_ref_count(param_names_333),(struct list$1charph*)come_increment_ref_count(param_default_parametors_334),(_Bool)0,var_args_335,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value481=sBlock_clone(block_368)))),static__369,(char*)come_increment_ref_count(((char*)(right_value482=buffer_to_string(header_buf_337)))),info))));
        if(right_value479) { come_call_finalizer(sFun_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value480) { right_value480 = come_decrement_ref_count(right_value480, (void*)0, (void*)0, 1, 0); }
        if(right_value481) { come_call_finalizer(sBlock_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value482) { right_value482 = come_decrement_ref_count(right_value482, (void*)0, (void*)0, 1, 0); }
        if(right_value483) { come_call_finalizer(sFun_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0); }
        fun2_372=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value484=__builtin_string(fun_name_327))));
        if(right_value484) { right_value484 = come_decrement_ref_count(right_value484, (void*)0, (void*)0, 1, 0); }
        if(fun2_372==((void*)0)||fun2_372->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value485=string_clone(fun_name_327)))),(struct sFun*)come_increment_ref_count(fun_371));
            if(right_value485) { right_value485 = come_decrement_ref_count(right_value485, (void*)0, (void*)0, 1, 0); }
        }
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(right_value487=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value486=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_371),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=sFunNode_finalize;
        _inf_value3->clone=sFunNode_clone;
        _inf_value3->compile=sFunNode_compile;
        _inf_value3->sline=sFunNode_sline;
        _inf_value3->sname=sFunNode_sname;
        _inf_value3->terminated=sFunNode_terminated;
        struct sNode* __result138__ = ((struct sNode*)(right_value491=_inf_value3));
        if(block_368) { come_call_finalizer(sBlock_finalize,block_368, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_371) { come_call_finalizer(sFun_finalize,fun_371, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value486) { come_call_finalizer(sFunNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value487) { come_call_finalizer(sFunNode_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result138__;
    }
    else if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(version_338>0) {
            new_fun_name_374=(char*)come_increment_ref_count(((char*)(right_value492=xsprintf("%s_v%d",fun_name_327,version_338))));
            if(right_value492) { right_value492 = come_decrement_ref_count(right_value492, (void*)0, (void*)0, 1, 0); }
            __dec_obj99=fun_name_327;
            fun_name_327=(char*)come_increment_ref_count(((char*)(right_value493=__builtin_string(new_fun_name_374))));
            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0); }
            if(right_value493) { right_value493 = come_decrement_ref_count(right_value493, (void*)0, (void*)0, 1, 0); }
            if(new_fun_name_374) { new_fun_name_374 = come_decrement_ref_count(new_fun_name_374, (void*)0, (void*)0, 0, 0); }
        }
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_320->mStatic=(_Bool)0;
            fun_375=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value497=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value494=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(((char*)(right_value495=__builtin_string(fun_name_327)))),(struct sType*)come_increment_ref_count(result_type_320),(struct list$1sTypeph*)come_increment_ref_count(param_types_332),(struct list$1charph*)come_increment_ref_count(param_names_333),(struct list$1charph*)come_increment_ref_count(param_default_parametors_334),(_Bool)1,var_args_335,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value496=buffer_to_string(header_buf_337)))),info))));
            if(right_value494) { come_call_finalizer(sFun_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value495) { right_value495 = come_decrement_ref_count(right_value495, (void*)0, (void*)0, 1, 0); }
            if(right_value496) { right_value496 = come_decrement_ref_count(right_value496, (void*)0, (void*)0, 1, 0); }
            if(right_value497) { come_call_finalizer(sFun_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0); }
            fun2_376=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value498=__builtin_string(fun_name_327))));
            if(right_value498) { right_value498 = come_decrement_ref_count(right_value498, (void*)0, (void*)0, 1, 0); }
            if(fun2_376==((void*)0)||fun2_376->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value499=string_clone(fun_name_327)))),(struct sFun*)come_increment_ref_count(fun_375));
                if(right_value499) { right_value499 = come_decrement_ref_count(right_value499, (void*)0, (void*)0, 1, 0); }
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value501=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value500=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_375),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=sFunNode_finalize;
            _inf_value4->clone=sFunNode_clone;
            _inf_value4->compile=sFunNode_compile;
            _inf_value4->sline=sFunNode_sline;
            _inf_value4->sname=sFunNode_sname;
            _inf_value4->terminated=sFunNode_terminated;
            struct sNode* __result141__ = ((struct sNode*)(right_value505=_inf_value4));
            if(fun_375) { come_call_finalizer(sFun_finalize,fun_375, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value500) { come_call_finalizer(sFunNode_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value501) { come_call_finalizer(sFunNode_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result141__;
        }
        else {
            asm_fun_378=(char*)come_increment_ref_count(((char*)(right_value506=parse_attribute(info))));
            if(right_value506) { right_value506 = come_decrement_ref_count(right_value506, (void*)0, (void*)0, 1, 0); }
            if(string_operator_not_equals(asm_fun_378,"")) {
                __dec_obj102=fun_name_327;
                fun_name_327=(char*)come_increment_ref_count(((char*)(right_value507=__builtin_string(asm_fun_378))));
                if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0); }
                if(right_value507) { right_value507 = come_decrement_ref_count(right_value507, (void*)0, (void*)0, 1, 0); }
            }
            expected_next_character(59,info);
            result_type_320->mStatic=(_Bool)0;
            fun_379=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value511=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value508=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(((char*)(right_value509=__builtin_string(fun_name_327)))),(struct sType*)come_increment_ref_count(result_type_320),(struct list$1sTypeph*)come_increment_ref_count(param_types_332),(struct list$1charph*)come_increment_ref_count(param_names_333),(struct list$1charph*)come_increment_ref_count(param_default_parametors_334),(_Bool)1,var_args_335,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value510=buffer_to_string(header_buf_337)))),info))));
            if(right_value508) { come_call_finalizer(sFun_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value509) { right_value509 = come_decrement_ref_count(right_value509, (void*)0, (void*)0, 1, 0); }
            if(right_value510) { right_value510 = come_decrement_ref_count(right_value510, (void*)0, (void*)0, 1, 0); }
            if(right_value511) { come_call_finalizer(sFun_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0); }
            fun2_380=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value512=__builtin_string(fun_name_327))));
            if(right_value512) { right_value512 = come_decrement_ref_count(right_value512, (void*)0, (void*)0, 1, 0); }
            if(fun2_380==((void*)0)||fun2_380->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value513=string_clone(fun_name_327)))),(struct sFun*)come_increment_ref_count(fun_379));
                if(right_value513) { right_value513 = come_decrement_ref_count(right_value513, (void*)0, (void*)0, 1, 0); }
            }
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value515=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value514=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_379),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=sFunNode_finalize;
            _inf_value5->clone=sFunNode_clone;
            _inf_value5->compile=sFunNode_compile;
            _inf_value5->sline=sFunNode_sline;
            _inf_value5->sname=sFunNode_sname;
            _inf_value5->terminated=sFunNode_terminated;
            struct sNode* __result144__ = ((struct sNode*)(right_value519=_inf_value5));
            if(asm_fun_378) { asm_fun_378 = come_decrement_ref_count(asm_fun_378, (void*)0, (void*)0, 0, 0); }
            if(fun_379) { come_call_finalizer(sFun_finalize,fun_379, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value514) { come_call_finalizer(sFunNode_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value515) { come_call_finalizer(sFunNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result144__;
        }
    }
    else {
        err_msg(info,"invalid character(%c)(2)\n",*info->p);
        exit(2);
    }
    struct sNode* __result145__ = (struct sNode*)((void*)0);
    if(result_type_320) { come_call_finalizer(sType_finalize,result_type_320, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_321) { var_name_321 = come_decrement_ref_count(var_name_321, (void*)0, (void*)0, 0, 0); }
    if(fun_name_327) { fun_name_327 = come_decrement_ref_count(fun_name_327, (void*)0, (void*)0, 0, 0); }
    if(base_fun_name_328) { base_fun_name_328 = come_decrement_ref_count(base_fun_name_328, (void*)0, (void*)0, 0, 0); }
    if(param_types_332) { come_call_finalizer(list$1sTypephp_finalize,param_types_332, (void*)0, (void*)0, 0, 0, 0); }
    if(param_names_333) { come_call_finalizer(list$1charphp_finalize,param_names_333, (void*)0, (void*)0, 0, 0, 0); }
    if(param_default_parametors_334) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_334, (void*)0, (void*)0, 0, 0, 0); }
    if(header_buf_337) { come_call_finalizer(buffer_finalize,header_buf_337, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result145__;
come_release_malloced_mem();
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool is_type_name_flag_244;
int sline_245;
_Bool define_function_flag_246;
char* p_247;
_Bool invalid_type_248;
void* right_value358;
char* word_249;
void* right_value359;
char* __dec_obj55;
void* right_value360;
char* __dec_obj56;
void* right_value361;
char* __dec_obj57;
_Bool define_variable_250;
char* p_251;
void* right_value362;
void* right_value363;
void* right_value364;
void* right_value365;
char* buf2_252;
void* right_value366;
memset(&is_type_name_flag_244, 0, sizeof(_Bool)); /* ddd */
memset(&sline_245, 0, sizeof(int)); /* ddd */
memset(&define_function_flag_246, 0, sizeof(_Bool)); /* ddd */
memset(&p_247, 0, sizeof(char*)); /* ddd */
memset(&invalid_type_248, 0, sizeof(_Bool)); /* ddd */
memset(&right_value358, 0, sizeof(void*));
memset(&word_249, 0, sizeof(char*)); /* ddd */
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&define_variable_250, 0, sizeof(_Bool)); /* ddd */
memset(&p_251, 0, sizeof(char*)); /* ddd */
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&buf2_252, 0, sizeof(char*)); /* ddd */
memset(&right_value366, 0, sizeof(void*));
    is_type_name_flag_244=is_type_name(buf,info);
    sline_245=info->sline;
    define_function_flag_246=(_Bool)0;
    if(is_type_name_flag_244) {
        p_247=info->p;
        info->p=head;
        invalid_type_248=(_Bool)0;
        info->no_output_err=(_Bool)1;
        ((struct tuple3$3sTypephcharphbool*)(right_value358=parse_type(info,(_Bool)0,(_Bool)1)));
        if(right_value358) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0); }
        info->no_output_err=(_Bool)0;
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            word_249=((void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj55=word_249;
                word_249=(char*)come_increment_ref_count(((char*)(right_value359=parse_word(info))));
                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
                if(right_value359) { right_value359 = come_decrement_ref_count(right_value359, (void*)0, (void*)0, 1, 0); }
                if(string_operator_equals(word_249,"extern")) {
                    __dec_obj56=word_249;
                    word_249=(char*)come_increment_ref_count(((char*)(right_value360=parse_word(info))));
                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
                    if(right_value360) { right_value360 = come_decrement_ref_count(right_value360, (void*)0, (void*)0, 1, 0); }
                }
            }
            else {
                word_249=((void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_249) {
                if(is_type_name(word_249,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==37) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(xisalnum(*info->p)||*info->p==95) {
                        __dec_obj57=word_249;
                        word_249=(char*)come_increment_ref_count(((char*)(right_value361=parse_word(info))));
                        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
                        if(right_value361) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0); }
                    }
                }
                if(strlen(word_249)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag_244) {
                        define_function_flag_246=(_Bool)1;
                    }
                }
            }
            if(word_249) { word_249 = come_decrement_ref_count(word_249, (void*)0, (void*)0, 0, 0); }
        }
        info->p=p_247;
        info->sline=sline_245;
    }
    define_variable_250=(_Bool)1;
    if(is_type_name_flag_244) {
        p_251=info->p;
        info->p=head;
        if(!is_type_name_flag_244) {
            define_variable_250=(_Bool)0;
        }
        info->no_output_err=(_Bool)1;
        ((struct tuple3$3sTypephcharphbool*)(right_value362=parse_type(info,(_Bool)0,(_Bool)1)));
        if(right_value362) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0); }
        info->no_output_err=(_Bool)0;
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_250=(_Bool)0;
        }
        else {
            if(!(xisalpha(*info->p)||*info->p==95)) {
                define_variable_250=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(*info->p==40||*info->p==58) {
                define_variable_250=(_Bool)0;
            }
        }
        info->p=p_251;
        info->sline=sline_245;
    }
    else {
        define_variable_250=(_Bool)0;
    }
    if(define_function_flag_246) {
        info->p=head;
        info->sline=sline_245;
        struct sNode* __result69__ = ((struct sNode*)(right_value363=parse_function(info)));
        come_release_malloced_mem();
        return __result69__;
    }
    else if(define_variable_250) {
        info->p=head;
        info->sline=sline_245;
        struct sNode* __result70__ = ((struct sNode*)(right_value364=parse_global_variable(info)));
        come_release_malloced_mem();
        return __result70__;
    }
    info->p=head;
    info->sline=sline_245;
    buf2_252=(char*)come_increment_ref_count(((char*)(right_value365=parse_word(info))));
    if(right_value365) { right_value365 = come_decrement_ref_count(right_value365, (void*)0, (void*)0, 1, 0); }
    struct sNode* __result71__ = ((struct sNode*)(right_value366=top_level_v98((char*)come_increment_ref_count(buf2_252),head,head_sline,info)));
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1); }
    if(buf2_252) { buf2_252 = come_decrement_ref_count(buf2_252, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result71__;
come_release_malloced_mem();
}

int transpile_v5(struct sInfo* info){
void* right_value71;
char* name_78;
void* right_value72;
void* right_value73;
struct sType* result_type_79;
void* right_value74;
void* right_value75;
void* right_value76;
void* right_value77;
struct sType* __list_values1___80[2];
void* right_value81;
void* right_value82;
struct list$1sTypeph* param_types_85;
void* right_value83;
void* right_value84;
char* __list_values2___86[2];
void* right_value88;
void* right_value89;
struct list$1charph* param_names_91;
void* right_value90;
void* right_value91;
struct list$1charph* param_default_parametors_92;
void* right_value92;
void* right_value93;
void* right_value94;
struct sFun* main_fun_93;
void* right_value101;
void* right_value102;
char* name_134;
void* right_value103;
void* right_value104;
struct sType* result_type_135;
void* right_value105;
void* right_value106;
struct sType* __list_values3___136[1];
void* right_value107;
void* right_value108;
struct list$1sTypeph* param_types_137;
void* right_value109;
char* __list_values4___138[1];
void* right_value110;
void* right_value111;
struct list$1charph* param_names_139;
void* right_value112;
void* right_value113;
struct list$1charph* param_default_parametors_140;
void* right_value114;
void* right_value115;
void* right_value116;
struct sFun* main_fun_141;
void* right_value117;
void* right_value118;
char* name_142;
void* right_value119;
void* right_value120;
struct sType* result_type_143;
void* right_value121;
void* right_value122;
struct sType* __list_values5___144[1];
void* right_value123;
void* right_value124;
struct list$1sTypeph* param_types_145;
void* right_value125;
char* __list_values6___146[1];
void* right_value126;
void* right_value127;
struct list$1charph* param_names_147;
void* right_value128;
void* right_value129;
struct list$1charph* param_default_parametors_148;
void* right_value130;
void* right_value131;
void* right_value132;
struct sFun* main_fun_149;
void* right_value133;
void* right_value134;
char* name_150;
void* right_value135;
void* right_value136;
struct sType* result_type_151;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
struct sType* __list_values7___152[2];
void* right_value141;
void* right_value142;
struct list$1sTypeph* param_types_153;
void* right_value143;
void* right_value144;
char* __list_values8___154[2];
void* right_value145;
void* right_value146;
struct list$1charph* param_names_155;
void* right_value147;
void* right_value148;
struct list$1charph* param_default_parametors_156;
void* right_value149;
void* right_value150;
void* right_value151;
struct sFun* main_fun_157;
void* right_value152;
void* right_value153;
char* name_158;
void* right_value154;
void* right_value155;
struct sType* result_type_159;
void* right_value156;
void* right_value157;
void* right_value158;
void* right_value159;
struct sType* __list_values9___160[2];
void* right_value160;
void* right_value161;
struct list$1sTypeph* param_types_161;
void* right_value162;
void* right_value163;
char* __list_values10___162[2];
void* right_value164;
void* right_value165;
struct list$1charph* param_names_163;
void* right_value166;
void* right_value167;
struct list$1charph* param_default_parametors_164;
void* right_value168;
void* right_value169;
void* right_value170;
struct sFun* main_fun_165;
void* right_value171;
void* right_value172;
char* name_166;
void* right_value173;
void* right_value174;
struct sType* result_type_167;
void* right_value175;
void* right_value176;
struct sType* __list_values11___168[1];
void* right_value177;
void* right_value178;
struct list$1sTypeph* param_types_169;
void* right_value179;
char* __list_values12___170[1];
void* right_value180;
void* right_value181;
struct list$1charph* param_names_171;
void* right_value182;
void* right_value183;
struct list$1charph* param_default_parametors_172;
void* right_value184;
void* right_value185;
void* right_value186;
struct sFun* main_fun_173;
void* right_value187;
void* right_value188;
char* name_174;
void* right_value189;
void* right_value190;
struct sType* result_type_175;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
struct sType* __list_values13___176[7];
void* right_value205;
void* right_value206;
struct list$1sTypeph* param_types_177;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
char* __list_values14___178[7];
void* right_value214;
void* right_value215;
struct list$1charph* param_names_179;
void* right_value216;
void* right_value217;
struct list$1charph* param_default_parametors_180;
void* right_value218;
void* right_value219;
void* right_value220;
struct sFun* main_fun_181;
void* right_value221;
void* right_value222;
char* name_182;
void* right_value223;
void* right_value224;
struct sType* result_type_183;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
struct sType* __list_values15___184[5];
void* right_value235;
void* right_value236;
struct list$1sTypeph* param_types_185;
void* right_value237;
void* right_value238;
void* right_value239;
void* right_value240;
void* right_value241;
char* __list_values16___186[5];
void* right_value242;
void* right_value243;
struct list$1charph* param_names_187;
void* right_value244;
void* right_value245;
struct list$1charph* param_default_parametors_188;
void* right_value246;
void* right_value247;
void* right_value248;
struct sFun* main_fun_189;
void* right_value249;
void* right_value250;
char* name_190;
void* right_value251;
void* right_value252;
struct sType* result_type_191;
void* right_value253;
void* right_value254;
struct sType* __list_values17___192[1];
void* right_value255;
void* right_value256;
struct list$1sTypeph* param_types_193;
void* right_value257;
char* __list_values18___194[1];
void* right_value258;
void* right_value259;
struct list$1charph* param_names_195;
void* right_value260;
void* right_value261;
struct list$1charph* param_default_parametors_196;
void* right_value262;
void* right_value263;
void* right_value264;
struct sFun* main_fun_197;
void* right_value265;
void* right_value266;
char* name_198;
void* right_value267;
void* right_value268;
struct sType* result_type_199;
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
struct sType* __list_values19___200[2];
void* right_value273;
void* right_value274;
struct list$1sTypeph* param_types_201;
void* right_value275;
void* right_value276;
char* __list_values20___202[2];
void* right_value277;
void* right_value278;
struct list$1charph* param_names_203;
void* right_value279;
void* right_value280;
struct list$1charph* param_default_parametors_204;
void* right_value281;
void* right_value282;
void* right_value283;
struct sFun* main_fun_205;
void* right_value284;
void* right_value285;
char* name_206;
void* right_value286;
void* right_value287;
struct sType* result_type_207;
void* right_value288;
void* right_value289;
struct sType* __list_values21___208[1];
void* right_value290;
void* right_value291;
struct list$1sTypeph* param_types_209;
void* right_value292;
char* __list_values22___210[1];
void* right_value293;
void* right_value294;
struct list$1charph* param_names_211;
void* right_value295;
void* right_value296;
struct list$1charph* param_default_parametors_212;
void* right_value297;
void* right_value298;
void* right_value299;
struct sFun* main_fun_213;
void* right_value300;
void* right_value301;
char* name_214;
void* right_value302;
void* right_value303;
struct sType* result_type_215;
void* right_value304;
void* right_value305;
struct sType* __list_values23___216[1];
void* right_value306;
void* right_value307;
struct list$1sTypeph* param_types_217;
void* right_value308;
char* __list_values24___218[1];
void* right_value309;
void* right_value310;
struct list$1charph* param_names_219;
void* right_value311;
void* right_value312;
struct list$1charph* param_default_parametors_220;
void* right_value313;
void* right_value314;
void* right_value315;
struct sFun* main_fun_221;
void* right_value316;
void* right_value317;
char* name_222;
void* right_value318;
void* right_value319;
struct sType* result_type_223;
void* right_value320;
void* right_value321;
struct list$1sTypeph* param_types_224;
void* right_value322;
void* right_value323;
struct list$1charph* param_names_225;
void* right_value324;
void* right_value325;
struct list$1charph* param_default_parametors_226;
void* right_value326;
void* right_value327;
void* right_value328;
struct sFun* main_fun_227;
void* right_value329;
void* right_value330;
char* name_228;
void* right_value331;
void* right_value332;
struct sType* result_type_229;
void* right_value333;
void* right_value334;
struct list$1sTypeph* param_types_230;
void* right_value335;
void* right_value336;
struct list$1charph* param_names_231;
void* right_value337;
void* right_value338;
struct list$1charph* param_default_parametors_232;
void* right_value339;
void* right_value340;
void* right_value341;
struct sFun* main_fun_233;
void* right_value342;
void* right_value343;
char* name_234;
void* right_value344;
void* right_value345;
struct sType* result_type_235;
void* right_value346;
void* right_value347;
struct list$1sTypeph* param_types_236;
void* right_value348;
void* right_value349;
struct list$1charph* param_names_237;
void* right_value350;
void* right_value351;
struct list$1charph* param_default_parametors_238;
void* right_value352;
void* right_value353;
void* right_value354;
struct sFun* main_fun_239;
void* right_value355;
char* head_240;
int head_sline_241;
void* right_value356;
char* buf_242;
void* right_value357;
struct sNode* node_243;
memset(&right_value71, 0, sizeof(void*));
memset(&name_78, 0, sizeof(char*)); /* ddd */
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&result_type_79, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&param_types_85, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&param_names_91, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&param_default_parametors_92, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&main_fun_93, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&name_134, 0, sizeof(char*)); /* ddd */
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&result_type_135, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&param_types_137, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&param_names_139, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&param_default_parametors_140, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&main_fun_141, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&name_142, 0, sizeof(char*)); /* ddd */
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&result_type_143, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&param_types_145, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&param_names_147, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&param_default_parametors_148, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&main_fun_149, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&name_150, 0, sizeof(char*)); /* ddd */
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&result_type_151, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&param_types_153, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&param_names_155, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&param_default_parametors_156, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&main_fun_157, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&name_158, 0, sizeof(char*)); /* ddd */
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&result_type_159, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&param_types_161, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&param_names_163, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&param_default_parametors_164, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&main_fun_165, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&name_166, 0, sizeof(char*)); /* ddd */
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&result_type_167, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&param_types_169, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&param_names_171, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&param_default_parametors_172, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&main_fun_173, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&name_174, 0, sizeof(char*)); /* ddd */
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&result_type_175, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&param_types_177, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&param_names_179, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&param_default_parametors_180, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&main_fun_181, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&name_182, 0, sizeof(char*)); /* ddd */
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&result_type_183, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&param_types_185, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&param_names_187, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&param_default_parametors_188, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&main_fun_189, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&name_190, 0, sizeof(char*)); /* ddd */
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&result_type_191, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&param_types_193, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&param_names_195, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&param_default_parametors_196, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&main_fun_197, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&name_198, 0, sizeof(char*)); /* ddd */
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&result_type_199, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&param_types_201, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&param_names_203, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&param_default_parametors_204, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&main_fun_205, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&name_206, 0, sizeof(char*)); /* ddd */
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&result_type_207, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&param_types_209, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&param_names_211, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&param_default_parametors_212, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&main_fun_213, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&name_214, 0, sizeof(char*)); /* ddd */
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&result_type_215, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&param_types_217, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&param_names_219, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&param_default_parametors_220, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&main_fun_221, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&name_222, 0, sizeof(char*)); /* ddd */
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&result_type_223, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&param_types_224, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&param_names_225, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&param_default_parametors_226, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&main_fun_227, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&name_228, 0, sizeof(char*)); /* ddd */
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&result_type_229, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&param_types_230, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&param_names_231, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&param_default_parametors_232, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&main_fun_233, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&name_234, 0, sizeof(char*)); /* ddd */
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&result_type_235, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&param_types_236, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&param_names_237, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&param_default_parametors_238, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&main_fun_239, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value355, 0, sizeof(void*));
memset(&head_240, 0, sizeof(char*)); /* ddd */
memset(&head_sline_241, 0, sizeof(int)); /* ddd */
memset(&right_value356, 0, sizeof(void*));
memset(&buf_242, 0, sizeof(char*)); /* ddd */
memset(&right_value357, 0, sizeof(void*));
memset(&node_243, 0, sizeof(struct sNode*)); /* ddd */
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_78=(char*)come_increment_ref_count(((char*)(right_value71=__builtin_string("come_calloc"))));
        if(right_value71) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0); }
        result_type_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value72=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value72) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value73) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values1___80[0]=come_increment_ref_count(((struct sType*)(right_value75=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value74=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values1___80[1]=come_increment_ref_count(((struct sType*)(right_value77=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value76=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
}        param_types_85=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values1___80))));
        if(right_value74) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value75) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value76) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value77) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value82) { come_call_finalizer(list$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values2___86[0]=come_increment_ref_count(((char*)(right_value83=__builtin_string("count"))));
__list_values2___86[1]=come_increment_ref_count(((char*)(right_value84=__builtin_string("size"))));
}        param_names_91=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values2___86))));
        if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
        if(right_value84) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0); }
        if(right_value89) { come_call_finalizer(list$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_92=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value91) { come_call_finalizer(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_93=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value94=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value92=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_78),(struct sType*)come_increment_ref_count(result_type_79),(struct list$1sTypeph*)come_increment_ref_count(param_types_85),(struct list$1charph*)come_increment_ref_count(param_names_91),(struct list$1charph*)come_increment_ref_count(param_default_parametors_92),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string("void* come_calloc(int count, int size)")))),info))));
        if(right_value92) { come_call_finalizer(sFun_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value93) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0); }
        if(right_value94) { come_call_finalizer(sFun_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(name_78)))),(struct sFun*)come_increment_ref_count(main_fun_93));
        if(right_value101) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0); }
        if(name_78) { name_78 = come_decrement_ref_count(name_78, (void*)0, (void*)0, 0, 0); }
        if(result_type_79) { come_call_finalizer(sType_finalize,result_type_79, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_85) { come_call_finalizer(list$1sTypephp_finalize,param_types_85, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_91) { come_call_finalizer(list$1charphp_finalize,param_names_91, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_92) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_92, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_93) { come_call_finalizer(sFun_finalize,main_fun_93, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_134=(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string("come_increment_ref_count"))));
        if(right_value102) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0); }
        result_type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value103) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value104) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values3___136[0]=come_increment_ref_count(((struct sType*)(right_value106=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value105=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
}        param_types_137=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value108=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values3___136))));
        if(right_value105) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value106) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value108) { come_call_finalizer(list$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values4___138[0]=come_increment_ref_count(((char*)(right_value109=__builtin_string("mem"))));
}        param_names_139=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values4___138))));
        if(right_value109) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0); }
        if(right_value111) { come_call_finalizer(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_140=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value113=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value112=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value113) { come_call_finalizer(list$1charphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_141=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value116=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value114=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_134),(struct sType*)come_increment_ref_count(result_type_135),(struct list$1sTypeph*)come_increment_ref_count(param_types_137),(struct list$1charph*)come_increment_ref_count(param_names_139),(struct list$1charph*)come_increment_ref_count(param_default_parametors_140),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string("void* come_increment_ref_count(void* mem)")))),info))));
        if(right_value114) { come_call_finalizer(sFun_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value115) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0); }
        if(right_value116) { come_call_finalizer(sFun_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(name_134)))),(struct sFun*)come_increment_ref_count(main_fun_141));
        if(right_value117) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0); }
        if(name_134) { name_134 = come_decrement_ref_count(name_134, (void*)0, (void*)0, 0, 0); }
        if(result_type_135) { come_call_finalizer(sType_finalize,result_type_135, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_137) { come_call_finalizer(list$1sTypephp_finalize,param_types_137, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_139) { come_call_finalizer(list$1charphp_finalize,param_names_139, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_140) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_140, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_141) { come_call_finalizer(sFun_finalize,main_fun_141, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_142=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string("ncfree"))));
        if(right_value118) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0); }
        result_type_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value119=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value119) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value120) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values5___144[0]=come_increment_ref_count(((struct sType*)(right_value122=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value121=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
}        param_types_145=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value124=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value123=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values5___144))));
        if(right_value121) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value122) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value124) { come_call_finalizer(list$1sTypephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values6___146[0]=come_increment_ref_count(((char*)(right_value125=__builtin_string("mem"))));
}        param_names_147=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values6___146))));
        if(right_value125) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0); }
        if(right_value127) { come_call_finalizer(list$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_148=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value129=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value128=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value129) { come_call_finalizer(list$1charphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_149=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value132=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value130=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_142),(struct sType*)come_increment_ref_count(result_type_143),(struct list$1sTypeph*)come_increment_ref_count(param_types_145),(struct list$1charph*)come_increment_ref_count(param_names_147),(struct list$1charph*)come_increment_ref_count(param_default_parametors_148),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string("void ncfree(void* mem)")))),info))));
        if(right_value130) { come_call_finalizer(sFun_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value131) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0); }
        if(right_value132) { come_call_finalizer(sFun_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(name_142)))),(struct sFun*)come_increment_ref_count(main_fun_149));
        if(right_value133) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0); }
        if(name_142) { name_142 = come_decrement_ref_count(name_142, (void*)0, (void*)0, 0, 0); }
        if(result_type_143) { come_call_finalizer(sType_finalize,result_type_143, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_145) { come_call_finalizer(list$1sTypephp_finalize,param_types_145, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_147) { come_call_finalizer(list$1charphp_finalize,param_names_147, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_148) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_148, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_149) { come_call_finalizer(sFun_finalize,main_fun_149, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_150=(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string("come_calloc"))));
        if(right_value134) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0); }
        result_type_151=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value135=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value135) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value136) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values7___152[0]=come_increment_ref_count(((struct sType*)(right_value138=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value137=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values7___152[1]=come_increment_ref_count(((struct sType*)(right_value140=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
}        param_types_153=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value142=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value141=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values7___152))));
        if(right_value137) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value138) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value139) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value140) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value142) { come_call_finalizer(list$1sTypephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values8___154[0]=come_increment_ref_count(((char*)(right_value143=__builtin_string("count"))));
__list_values8___154[1]=come_increment_ref_count(((char*)(right_value144=__builtin_string("size"))));
}        param_names_155=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value146=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values8___154))));
        if(right_value143) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0); }
        if(right_value144) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0); }
        if(right_value146) { come_call_finalizer(list$1charphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_156=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value148=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value147=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value148) { come_call_finalizer(list$1charphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_157=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value151=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value149=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_150),(struct sType*)come_increment_ref_count(result_type_151),(struct list$1sTypeph*)come_increment_ref_count(param_types_153),(struct list$1charph*)come_increment_ref_count(param_names_155),(struct list$1charph*)come_increment_ref_count(param_default_parametors_156),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string("void* come_calloc(int count, int size)")))),info))));
        if(right_value149) { come_call_finalizer(sFun_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value150) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0); }
        if(right_value151) { come_call_finalizer(sFun_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(name_150)))),(struct sFun*)come_increment_ref_count(main_fun_157));
        if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
        if(name_150) { name_150 = come_decrement_ref_count(name_150, (void*)0, (void*)0, 0, 0); }
        if(result_type_151) { come_call_finalizer(sType_finalize,result_type_151, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_153) { come_call_finalizer(list$1sTypephp_finalize,param_types_153, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_155) { come_call_finalizer(list$1charphp_finalize,param_names_155, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_156) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_156, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_157) { come_call_finalizer(sFun_finalize,main_fun_157, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_158=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string("come_calloc"))));
        if(right_value153) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0); }
        result_type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value154=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value154) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value155) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values9___160[0]=come_increment_ref_count(((struct sType*)(right_value157=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value156=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values9___160[1]=come_increment_ref_count(((struct sType*)(right_value159=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value158=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
}        param_types_161=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value161=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value160=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values9___160))));
        if(right_value156) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value157) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value158) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value159) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value161) { come_call_finalizer(list$1sTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values10___162[0]=come_increment_ref_count(((char*)(right_value162=__builtin_string("count"))));
__list_values10___162[1]=come_increment_ref_count(((char*)(right_value163=__builtin_string("size"))));
}        param_names_163=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value165=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value164=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values10___162))));
        if(right_value162) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0); }
        if(right_value163) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0); }
        if(right_value165) { come_call_finalizer(list$1charphp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_164=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value167=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value166=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value167) { come_call_finalizer(list$1charphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_165=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value170=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value168=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_158),(struct sType*)come_increment_ref_count(result_type_159),(struct list$1sTypeph*)come_increment_ref_count(param_types_161),(struct list$1charph*)come_increment_ref_count(param_names_163),(struct list$1charph*)come_increment_ref_count(param_default_parametors_164),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value169=__builtin_string("void* come_calloc(int count, int size)")))),info))));
        if(right_value168) { come_call_finalizer(sFun_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value169) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0); }
        if(right_value170) { come_call_finalizer(sFun_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(name_158)))),(struct sFun*)come_increment_ref_count(main_fun_165));
        if(right_value171) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0); }
        if(name_158) { name_158 = come_decrement_ref_count(name_158, (void*)0, (void*)0, 0, 0); }
        if(result_type_159) { come_call_finalizer(sType_finalize,result_type_159, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_161) { come_call_finalizer(list$1sTypephp_finalize,param_types_161, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_163) { come_call_finalizer(list$1charphp_finalize,param_names_163, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_164) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_164, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_165) { come_call_finalizer(sFun_finalize,main_fun_165, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_166=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string("come_increment_ref_count"))));
        if(right_value172) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0); }
        result_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value173) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value174) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values11___168[0]=come_increment_ref_count(((struct sType*)(right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
}        param_types_169=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value178=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value177=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values11___168))));
        if(right_value175) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value176) { come_call_finalizer(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value178) { come_call_finalizer(list$1sTypephp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values12___170[0]=come_increment_ref_count(((char*)(right_value179=__builtin_string("mem"))));
}        param_names_171=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value181=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value180=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values12___170))));
        if(right_value179) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0); }
        if(right_value181) { come_call_finalizer(list$1charphp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_172=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value183=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value182=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value183) { come_call_finalizer(list$1charphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_173=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value186=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value184=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_166),(struct sType*)come_increment_ref_count(result_type_167),(struct list$1sTypeph*)come_increment_ref_count(param_types_169),(struct list$1charph*)come_increment_ref_count(param_names_171),(struct list$1charph*)come_increment_ref_count(param_default_parametors_172),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string("void* come_increment_ref_count(void* mem)")))),info))));
        if(right_value184) { come_call_finalizer(sFun_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value185) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0); }
        if(right_value186) { come_call_finalizer(sFun_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(name_166)))),(struct sFun*)come_increment_ref_count(main_fun_173));
        if(right_value187) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0); }
        if(name_166) { name_166 = come_decrement_ref_count(name_166, (void*)0, (void*)0, 0, 0); }
        if(result_type_167) { come_call_finalizer(sType_finalize,result_type_167, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_169) { come_call_finalizer(list$1sTypephp_finalize,param_types_169, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_171) { come_call_finalizer(list$1charphp_finalize,param_names_171, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_172) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_172, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_173) { come_call_finalizer(sFun_finalize,main_fun_173, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_174=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string("come_call_finalizer"))));
        if(right_value188) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0); }
        result_type_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value189=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value189) { come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value190) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values13___176[0]=come_increment_ref_count(((struct sType*)(right_value192=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value191=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values13___176[1]=come_increment_ref_count(((struct sType*)(right_value194=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values13___176[2]=come_increment_ref_count(((struct sType*)(right_value196=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value195=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values13___176[3]=come_increment_ref_count(((struct sType*)(right_value198=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values13___176[4]=come_increment_ref_count(((struct sType*)(right_value200=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value199=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values13___176[5]=come_increment_ref_count(((struct sType*)(right_value202=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values13___176[6]=come_increment_ref_count(((struct sType*)(right_value204=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
}        param_types_177=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value206=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value205=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),7,__list_values13___176))));
        if(right_value191) { come_call_finalizer(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value192) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value193) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value194) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value195) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value196) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value197) { come_call_finalizer(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value198) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value199) { come_call_finalizer(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value200) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value201) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value202) { come_call_finalizer(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value203) { come_call_finalizer(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value204) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value206) { come_call_finalizer(list$1sTypephp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values14___178[0]=come_increment_ref_count(((char*)(right_value207=__builtin_string("fun"))));
__list_values14___178[1]=come_increment_ref_count(((char*)(right_value208=__builtin_string("mem"))));
__list_values14___178[2]=come_increment_ref_count(((char*)(right_value209=__builtin_string("protocol_fun"))));
__list_values14___178[3]=come_increment_ref_count(((char*)(right_value210=__builtin_string("protocol_obj"))));
__list_values14___178[4]=come_increment_ref_count(((char*)(right_value211=__builtin_string("call_finalizer_only"))));
__list_values14___178[5]=come_increment_ref_count(((char*)(right_value212=__builtin_string("no_decrement"))));
__list_values14___178[6]=come_increment_ref_count(((char*)(right_value213=__builtin_string("no_free"))));
}        param_names_179=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value215=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value214=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),7,__list_values14___178))));
        if(right_value207) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0); }
        if(right_value208) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0); }
        if(right_value209) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0); }
        if(right_value210) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0); }
        if(right_value211) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0); }
        if(right_value212) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0); }
        if(right_value213) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0); }
        if(right_value215) { come_call_finalizer(list$1charphp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_180=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value217=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value217) { come_call_finalizer(list$1charphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_181=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value220=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value218=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_174),(struct sType*)come_increment_ref_count(result_type_175),(struct list$1sTypeph*)come_increment_ref_count(param_types_177),(struct list$1charph*)come_increment_ref_count(param_names_179),(struct list$1charph*)come_increment_ref_count(param_default_parametors_180),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string("")))),info))));
        if(right_value218) { come_call_finalizer(sFun_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value219) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0); }
        if(right_value220) { come_call_finalizer(sFun_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(name_174)))),(struct sFun*)come_increment_ref_count(main_fun_181));
        if(right_value221) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0); }
        if(name_174) { name_174 = come_decrement_ref_count(name_174, (void*)0, (void*)0, 0, 0); }
        if(result_type_175) { come_call_finalizer(sType_finalize,result_type_175, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_177) { come_call_finalizer(list$1sTypephp_finalize,param_types_177, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_179) { come_call_finalizer(list$1charphp_finalize,param_names_179, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_180) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_180, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_181) { come_call_finalizer(sFun_finalize,main_fun_181, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_182=(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("come_decrement_ref_count"))));
        if(right_value222) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0); }
        result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value223=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value223) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value224) { come_call_finalizer(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values15___184[0]=come_increment_ref_count(((struct sType*)(right_value226=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value225=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values15___184[1]=come_increment_ref_count(((struct sType*)(right_value228=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value227=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values15___184[2]=come_increment_ref_count(((struct sType*)(right_value230=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values15___184[3]=come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
__list_values15___184[4]=come_increment_ref_count(((struct sType*)(right_value234=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value233=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
}        param_types_185=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value236=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value235=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),5,__list_values15___184))));
        if(right_value225) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value226) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value227) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value228) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value229) { come_call_finalizer(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value230) { come_call_finalizer(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value231) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value232) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value233) { come_call_finalizer(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value234) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value236) { come_call_finalizer(list$1sTypephp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values16___186[0]=come_increment_ref_count(((char*)(right_value237=__builtin_string("mem"))));
__list_values16___186[1]=come_increment_ref_count(((char*)(right_value238=__builtin_string("protocol_fun"))));
__list_values16___186[2]=come_increment_ref_count(((char*)(right_value239=__builtin_string("protocol_obj"))));
__list_values16___186[3]=come_increment_ref_count(((char*)(right_value240=__builtin_string("no_decrement"))));
__list_values16___186[4]=come_increment_ref_count(((char*)(right_value241=__builtin_string("no_free"))));
}        param_names_187=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value243=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),5,__list_values16___186))));
        if(right_value237) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0); }
        if(right_value238) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0); }
        if(right_value239) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0); }
        if(right_value240) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0); }
        if(right_value241) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0); }
        if(right_value243) { come_call_finalizer(list$1charphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_188=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value245=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value244=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value245) { come_call_finalizer(list$1charphp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_189=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value248=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value246=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_182),(struct sType*)come_increment_ref_count(result_type_183),(struct list$1sTypeph*)come_increment_ref_count(param_types_185),(struct list$1charph*)come_increment_ref_count(param_names_187),(struct list$1charph*)come_increment_ref_count(param_default_parametors_188),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),info))));
        if(right_value246) { come_call_finalizer(sFun_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value247) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0); }
        if(right_value248) { come_call_finalizer(sFun_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string(name_182)))),(struct sFun*)come_increment_ref_count(main_fun_189));
        if(right_value249) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0); }
        if(name_182) { name_182 = come_decrement_ref_count(name_182, (void*)0, (void*)0, 0, 0); }
        if(result_type_183) { come_call_finalizer(sType_finalize,result_type_183, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_185) { come_call_finalizer(list$1sTypephp_finalize,param_types_185, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_187) { come_call_finalizer(list$1charphp_finalize,param_names_187, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_188) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_188, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_189) { come_call_finalizer(sFun_finalize,main_fun_189, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_190=(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string("come_free_object"))));
        if(right_value250) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0); }
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value251=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value251) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value252) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values17___192[0]=come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
}        param_types_193=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value256=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value255=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values17___192))));
        if(right_value253) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value254) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value256) { come_call_finalizer(list$1sTypephp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values18___194[0]=come_increment_ref_count(((char*)(right_value257=__builtin_string("mem"))));
}        param_names_195=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value259=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value258=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values18___194))));
        if(right_value257) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0); }
        if(right_value259) { come_call_finalizer(list$1charphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_196=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value261=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value260=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value261) { come_call_finalizer(list$1charphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_197=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value264=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value262=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_190),(struct sType*)come_increment_ref_count(result_type_191),(struct list$1sTypeph*)come_increment_ref_count(param_types_193),(struct list$1charph*)come_increment_ref_count(param_names_195),(struct list$1charph*)come_increment_ref_count(param_default_parametors_196),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string("void come_free_object(void* mem)")))),info))));
        if(right_value262) { come_call_finalizer(sFun_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value263) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0); }
        if(right_value264) { come_call_finalizer(sFun_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string(name_190)))),(struct sFun*)come_increment_ref_count(main_fun_197));
        if(right_value265) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0); }
        if(name_190) { name_190 = come_decrement_ref_count(name_190, (void*)0, (void*)0, 0, 0); }
        if(result_type_191) { come_call_finalizer(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_193) { come_call_finalizer(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_195) { come_call_finalizer(list$1charphp_finalize,param_names_195, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_196) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_196, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_197) { come_call_finalizer(sFun_finalize,main_fun_197, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_198=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("nccalloc"))));
        if(right_value266) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0); }
        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value267) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value268) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values19___200[0]=come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values19___200[1]=come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
}        param_types_201=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value274=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value273=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values19___200))));
        if(right_value269) { come_call_finalizer(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value270) { come_call_finalizer(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value271) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value272) { come_call_finalizer(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value274) { come_call_finalizer(list$1sTypephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values20___202[0]=come_increment_ref_count(((char*)(right_value275=__builtin_string("nmemb"))));
__list_values20___202[1]=come_increment_ref_count(((char*)(right_value276=__builtin_string("size"))));
}        param_names_203=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value278=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value277=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values20___202))));
        if(right_value275) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0); }
        if(right_value276) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0); }
        if(right_value278) { come_call_finalizer(list$1charphp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_204=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value280=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value279=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value280) { come_call_finalizer(list$1charphp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_205=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value283=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value281=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_198),(struct sType*)come_increment_ref_count(result_type_199),(struct list$1sTypeph*)come_increment_ref_count(param_types_201),(struct list$1charph*)come_increment_ref_count(param_names_203),(struct list$1charph*)come_increment_ref_count(param_default_parametors_204),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string("void* nccalloc(int nmemb, int size)")))),info))));
        if(right_value281) { come_call_finalizer(sFun_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value282) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0); }
        if(right_value283) { come_call_finalizer(sFun_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(name_198)))),(struct sFun*)come_increment_ref_count(main_fun_205));
        if(right_value284) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0); }
        if(name_198) { name_198 = come_decrement_ref_count(name_198, (void*)0, (void*)0, 0, 0); }
        if(result_type_199) { come_call_finalizer(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_201) { come_call_finalizer(list$1sTypephp_finalize,param_types_201, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_203) { come_call_finalizer(list$1charphp_finalize,param_names_203, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_204) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_204, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_205) { come_call_finalizer(sFun_finalize,main_fun_205, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_206=(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("come_memdup"))));
        if(right_value285) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0); }
        result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value287=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value286=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value286) { come_call_finalizer(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value287) { come_call_finalizer(sType_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values21___208[0]=come_increment_ref_count(((struct sType*)(right_value289=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value288=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
}        param_types_209=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value291=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value290=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values21___208))));
        if(right_value288) { come_call_finalizer(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value289) { come_call_finalizer(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value291) { come_call_finalizer(list$1sTypephp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values22___210[0]=come_increment_ref_count(((char*)(right_value292=__builtin_string("block"))));
}        param_names_211=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value294=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value293=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values22___210))));
        if(right_value292) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0); }
        if(right_value294) { come_call_finalizer(list$1charphp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_212=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value296=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value295=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value296) { come_call_finalizer(list$1charphp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_213=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value299=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value297=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_206),(struct sType*)come_increment_ref_count(result_type_207),(struct list$1sTypeph*)come_increment_ref_count(param_types_209),(struct list$1charph*)come_increment_ref_count(param_names_211),(struct list$1charph*)come_increment_ref_count(param_default_parametors_212),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string("void* come_memdup(void* block)")))),info))));
        if(right_value297) { come_call_finalizer(sFun_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value298) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0); }
        if(right_value299) { come_call_finalizer(sFun_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value300=__builtin_string(name_206)))),(struct sFun*)come_increment_ref_count(main_fun_213));
        if(right_value300) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0); }
        if(name_206) { name_206 = come_decrement_ref_count(name_206, (void*)0, (void*)0, 0, 0); }
        if(result_type_207) { come_call_finalizer(sType_finalize,result_type_207, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_209) { come_call_finalizer(list$1sTypephp_finalize,param_types_209, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_211) { come_call_finalizer(list$1charphp_finalize,param_names_211, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_212) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_212, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_213) { come_call_finalizer(sFun_finalize,main_fun_213, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_214=(char*)come_increment_ref_count(((char*)(right_value301=__builtin_string("__builtin_string"))));
        if(right_value301) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0); }
        result_type_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value302=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char*",info,(_Bool)0))));
        if(right_value302) { come_call_finalizer(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value303) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values23___216[0]=come_increment_ref_count(((struct sType*)(right_value305=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value304=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char*",info,(_Bool)0))));
}        param_types_217=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value307=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value306=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values23___216))));
        if(right_value304) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value305) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value307) { come_call_finalizer(list$1sTypephp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values24___218[0]=come_increment_ref_count(((char*)(right_value308=__builtin_string("str"))));
}        param_names_219=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value310=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value309=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values24___218))));
        if(right_value308) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0); }
        if(right_value310) { come_call_finalizer(list$1charphp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_220=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value312=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value311=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value312) { come_call_finalizer(list$1charphp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_221=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value315=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value313=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_214),(struct sType*)come_increment_ref_count(result_type_215),(struct list$1sTypeph*)come_increment_ref_count(param_types_217),(struct list$1charph*)come_increment_ref_count(param_names_219),(struct list$1charph*)come_increment_ref_count(param_default_parametors_220),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value314=__builtin_string("char* __builtin_string(char* str)")))),info))));
        if(right_value313) { come_call_finalizer(sFun_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value314) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0); }
        if(right_value315) { come_call_finalizer(sFun_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(name_214)))),(struct sFun*)come_increment_ref_count(main_fun_221));
        if(right_value316) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0); }
        if(name_214) { name_214 = come_decrement_ref_count(name_214, (void*)0, (void*)0, 0, 0); }
        if(result_type_215) { come_call_finalizer(sType_finalize,result_type_215, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_217) { come_call_finalizer(list$1sTypephp_finalize,param_types_217, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_219) { come_call_finalizer(list$1charphp_finalize,param_names_219, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_220) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_220, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_221) { come_call_finalizer(sFun_finalize,main_fun_221, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_222=(char*)come_increment_ref_count(((char*)(right_value317=__builtin_string("come_release_malloced_mem"))));
        if(right_value317) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0); }
        result_type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value318=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value318) { come_call_finalizer(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value319) { come_call_finalizer(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0); }
        param_types_224=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value321=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value320=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
        if(right_value321) { come_call_finalizer(list$1sTypephp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0); }
        param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value323=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value322=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value323) { come_call_finalizer(list$1charphp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value324=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value325) { come_call_finalizer(list$1charphp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_227=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value328=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value326=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_222),(struct sType*)come_increment_ref_count(result_type_223),(struct list$1sTypeph*)come_increment_ref_count(param_types_224),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string("void come_release_malloced_mem()")))),info))));
        if(right_value326) { come_call_finalizer(sFun_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value327) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0); }
        if(right_value328) { come_call_finalizer(sFun_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string(name_222)))),(struct sFun*)come_increment_ref_count(main_fun_227));
        if(right_value329) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0); }
        if(name_222) { name_222 = come_decrement_ref_count(name_222, (void*)0, (void*)0, 0, 0); }
        if(result_type_223) { come_call_finalizer(sType_finalize,result_type_223, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_224) { come_call_finalizer(list$1sTypephp_finalize,param_types_224, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_225) { come_call_finalizer(list$1charphp_finalize,param_names_225, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_226) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_226, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_227) { come_call_finalizer(sFun_finalize,main_fun_227, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_228=(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string("come_heap_pool_init"))));
        if(right_value330) { right_value330 = come_decrement_ref_count(right_value330, (void*)0, (void*)0, 1, 0); }
        result_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value331=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value331) { come_call_finalizer(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value332) { come_call_finalizer(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0); }
        param_types_230=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value334=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value333=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
        if(right_value334) { come_call_finalizer(list$1sTypephp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0); }
        param_names_231=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value336=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value335=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value336) { come_call_finalizer(list$1charphp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_232=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value338=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value337=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value338) { come_call_finalizer(list$1charphp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_233=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value341=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value339=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_228),(struct sType*)come_increment_ref_count(result_type_229),(struct list$1sTypeph*)come_increment_ref_count(param_types_230),(struct list$1charph*)come_increment_ref_count(param_names_231),(struct list$1charph*)come_increment_ref_count(param_default_parametors_232),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value340=__builtin_string("come_heap_pool_init()")))),info))));
        if(right_value339) { come_call_finalizer(sFun_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value340) { right_value340 = come_decrement_ref_count(right_value340, (void*)0, (void*)0, 1, 0); }
        if(right_value341) { come_call_finalizer(sFun_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string(name_228)))),(struct sFun*)come_increment_ref_count(main_fun_233));
        if(right_value342) { right_value342 = come_decrement_ref_count(right_value342, (void*)0, (void*)0, 1, 0); }
        if(name_228) { name_228 = come_decrement_ref_count(name_228, (void*)0, (void*)0, 0, 0); }
        if(result_type_229) { come_call_finalizer(sType_finalize,result_type_229, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_230) { come_call_finalizer(list$1sTypephp_finalize,param_types_230, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_231) { come_call_finalizer(list$1charphp_finalize,param_names_231, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_232) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_232, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_233) { come_call_finalizer(sFun_finalize,main_fun_233, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_234=(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string("come_heap_pool_final"))));
        if(right_value343) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0); }
        result_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value344=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value344) { come_call_finalizer(sType_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value345) { come_call_finalizer(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0); }
        param_types_236=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value347=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value346=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
        if(right_value347) { come_call_finalizer(list$1sTypephp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0); }
        param_names_237=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value349=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value348=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value349) { come_call_finalizer(list$1charphp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_238=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value351=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value350=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value351) { come_call_finalizer(list$1charphp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_239=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value354=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value352=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_234),(struct sType*)come_increment_ref_count(result_type_235),(struct list$1sTypeph*)come_increment_ref_count(param_types_236),(struct list$1charph*)come_increment_ref_count(param_names_237),(struct list$1charph*)come_increment_ref_count(param_default_parametors_238),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value353=__builtin_string("void come_heap_pool_final()")))),info))));
        if(right_value352) { come_call_finalizer(sFun_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value353) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0); }
        if(right_value354) { come_call_finalizer(sFun_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value355=__builtin_string(name_234)))),(struct sFun*)come_increment_ref_count(main_fun_239));
        if(right_value355) { right_value355 = come_decrement_ref_count(right_value355, (void*)0, (void*)0, 1, 0); }
        if(name_234) { name_234 = come_decrement_ref_count(name_234, (void*)0, (void*)0, 0, 0); }
        if(result_type_235) { come_call_finalizer(sType_finalize,result_type_235, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_236) { come_call_finalizer(list$1sTypephp_finalize,param_types_236, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_237) { come_call_finalizer(list$1charphp_finalize,param_names_237, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_238) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_238, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_239) { come_call_finalizer(sFun_finalize,main_fun_239, (void*)0, (void*)0, 0, 0, 0); }
    }
    while(*info->p) {
        parse_sharp_v5(info);
        head_240=info->p;
        head_sline_241=info->sline;
        buf_242=(char*)come_increment_ref_count(((char*)(right_value356=parse_word(info))));
        if(right_value356) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0); }
        parse_sharp_v5(info);
        node_243=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=top_level_v99((char*)come_increment_ref_count(buf_242),head_240,head_sline_241,info))));
        if(right_value357) { right_value357 = come_decrement_ref_count(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0); } 
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(node_243!=((void*)0)) {
            if(!node_243->compile(node_243->_protocol_obj,info)) {
                err_msg(info,"compiling is faield(X)");
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(buf_242) { buf_242 = come_decrement_ref_count(buf_242, (void*)0, (void*)0, 0, 0); }
        if(node_243) { node_243 = come_decrement_ref_count(node_243, ((struct sNode*)node_243)->finalize, ((struct sNode*)node_243)->_protocol_obj, 0, 0); } 
    }
    int __result68__ = 0;
    come_release_malloced_mem();
    return __result68__;
come_release_malloced_mem();
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
char* __dec_obj1;
    self->mFun=fun;
    self->sline=info->sline;
    __dec_obj1=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    struct sLambdaNode* __result7__ = self;
    if(self) { come_call_finalizer(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result7__;
come_release_malloced_mem();
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info){
    int __result8__ = self->sline;
    come_release_malloced_mem();
    return __result8__;
come_release_malloced_mem();
}

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info){
void* right_value0;
memset(&right_value0, 0, sizeof(void*));
    char* __result9__ = ((char*)(right_value0=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result9__;
come_release_malloced_mem();
}

_Bool sLambdaNode_terminated(){
    _Bool __result10__ = (_Bool)0;
    come_release_malloced_mem();
    return __result10__;
come_release_malloced_mem();
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_0;
void* right_value1;
struct CVALUE* come_value_1;
void* right_value2;
char* __dec_obj2;
void* right_value33;
struct sType* __dec_obj21;
memset(&come_fun_0, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value1, 0, sizeof(void*));
memset(&come_value_1, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value2, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
    come_fun_0=info->come_fun;
    info->come_fun=self->mFun;
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0);
    }
    come_value_1=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value1=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value1) { come_call_finalizer(CVALUE_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj2=come_value_1->c_value;
    come_value_1->c_value=(char*)come_increment_ref_count(((char*)(right_value2=xsprintf("%s",self->mFun->mName))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
    if(right_value2) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0); }
    __dec_obj21=come_value_1->type;
    come_value_1->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(self->mFun->mLambdaType))));
    if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value33) { come_call_finalizer(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0); }
    come_value_1->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_1->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_1));
    info->come_fun=come_fun_0;
    _Bool __result26__ = (_Bool)1;
    if(come_value_1) { come_call_finalizer(CVALUE_finalize,come_value_1, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result26__;
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
struct list_item$1sTypeph* it_2;
struct list_item$1sTypeph* prev_it_3;
memset(&it_2, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&prev_it_3, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                        it_2=self->head;
                        while(it_2!=((void*)0)) {
                            if(1) {
                                if(it_2->item) { come_call_finalizer(sType_finalize,it_2->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            prev_it_3=it_2;
                            it_2=it_2->next;
                            come_free_object(prev_it_3);
                        }
                    come_release_malloced_mem();
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_4;
struct list_item$1sNodeph* prev_it_5;
memset(&it_4, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&prev_it_5, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                        it_4=self->head;
                        while(it_4!=((void*)0)) {
                            if(1) {
                                if(it_4->item) { it_4->item = come_decrement_ref_count(it_4->item, ((struct sNode*)it_4->item)->finalize, ((struct sNode*)it_4->item)->_protocol_obj, 0, 0); } 
                            }
                            prev_it_5=it_4;
                            it_4=it_4->next;
                            come_free_object(prev_it_5);
                        }
                    come_release_malloced_mem();
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_6;
struct list_item$1charph* prev_it_7;
memset(&it_6, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&prev_it_7, 0, sizeof(struct list_item$1charph*)); /* ddd */
                        it_6=self->head;
                        while(it_6!=((void*)0)) {
                            if(1) {
                                if(it_6->item) { it_6->item = come_decrement_ref_count(it_6->item, (void*)0, (void*)0, 0, 0); }
                            }
                            prev_it_7=it_6;
                            it_6=it_6->next;
                            come_free_object(prev_it_7);
                        }
                    come_release_malloced_mem();
}

static struct sType* sType_clone(struct sType* self){
void* right_value3;
struct sType* result_8;
void* right_value6;
struct tuple1$1sTypeph* __dec_obj4;
void* right_value7;
char* __dec_obj5;
void* right_value14;
struct list$1sTypeph* __dec_obj9;
void* right_value22;
struct list$1sNodeph* __dec_obj13;
void* right_value23;
struct list$1sTypeph* __dec_obj14;
void* right_value30;
struct list$1charph* __dec_obj18;
void* right_value31;
struct tuple1$1sTypeph* __dec_obj19;
void* right_value32;
char* __dec_obj20;
memset(&right_value3, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sType* __result11__ = (void*)0;
            come_release_malloced_mem();
            return __result11__;
        }
        result_8=(struct sType*)come_increment_ref_count(((struct sType*)(right_value3=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
        if(right_value3) { come_call_finalizer(sType_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)) {
            result_8->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj4=result_8->mNoSolvedGenericsType;
            result_8->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value6=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj4) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value6) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj5=result_8->mGenericsName;
            result_8->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value7=string_clone(self->mGenericsName))));
            if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
            if(right_value7) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj9=result_8->mGenericsTypes;
            result_8->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value14=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj9) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value14) { come_call_finalizer(list$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj13=result_8->mArrayNum;
            result_8->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value22=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj13) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value22) { come_call_finalizer(list$1sNodephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_8->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj14=result_8->mParamTypes;
            result_8->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj14) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value23) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj18=result_8->mParamNames;
            result_8->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value30=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj18) { come_call_finalizer(list$1charphp_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value30) { come_call_finalizer(list$1charphp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj19=result_8->mResultType;
            result_8->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value31=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj19) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value31) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_8->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)) {
            result_8->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_8->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_8->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_8->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_8->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_8->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_8->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_8->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_8->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_8->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_8->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_8->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_8->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_8->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_8->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_8->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_8->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_8->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_8->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_8->mSizeNum=self->mSizeNum;
        }
        if(self!=((void*)0)) {
            result_8->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_8->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj20=result_8->mOriginalTypeName;
            result_8->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value32=string_clone(self->mOriginalTypeName))));
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
            if(right_value32) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_8->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_8->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_8->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_8->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_8->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_8->mInline=self->mInline;
        }
        struct sType* __result25__ = result_8;
        if(result_8) { come_call_finalizer(sType_finalize,result_8, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result25__;
    come_release_malloced_mem();
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value4;
struct tuple1$1sTypeph* result_9;
void* right_value5;
struct sType* __dec_obj3;
memset(&right_value4, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value5, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple1$1sTypeph* __result12__ = (void*)0;
                    come_release_malloced_mem();
                    return __result12__;
                }
                result_9=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                if(right_value4) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj3=result_9->v1;
                    result_9->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value5=sType_clone(self->v1))));
                    if(__dec_obj3) { come_call_finalizer(sType_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value5) { come_call_finalizer(sType_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0); }
                }
                struct tuple1$1sTypeph* __result13__ = result_9;
                if(result_9) { come_call_finalizer(tuple1$1sTypephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result13__;
            come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value8;
void* right_value9;
struct list$1sTypeph* result_10;
struct list_item$1sTypeph* it_11;
void* right_value13;
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_11, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value13, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sTypeph* __result14__ = ((void*)0);
                    come_release_malloced_mem();
                    return __result14__;
                }
                result_10=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value9=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value8=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                if(right_value9) { come_call_finalizer(list$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0); }
                it_11=self->head;
                while(it_11!=((void*)0)) {
                    list$1sTypephp_push_back2(result_10,(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_clone(it_11->item)))));
                    if(right_value13) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
                    it_11=it_11->next;
                }
                struct list$1sTypeph* __result16__ = result_10;
                if(result_10) { come_call_finalizer(list$1sTypephp_finalize,result_10, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result16__;
            come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sTypeph* __result15__ = self;
                    if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result15__;
                come_release_malloced_mem();
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value10;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj6;
void* right_value11;
struct list_item$1sTypeph* litem_13;
struct sType* __dec_obj7;
void* right_value12;
struct list_item$1sTypeph* litem_14;
struct sType* __dec_obj8;
memset(&right_value10, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value11, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value12, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                        if(self->len==0) {
                            litem_12=((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_12->prev=((void*)0);
                            litem_12->next=((void*)0);
                            __dec_obj6=litem_12->item;
                            litem_12->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_12;
                            self->head=litem_12;
                        }
                        else if(self->len==1) {
                            litem_13=((struct list_item$1sTypeph*)(right_value11=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_13->prev=self->head;
                            litem_13->next=((void*)0);
                            __dec_obj7=litem_13->item;
                            litem_13->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_13;
                            self->head->next=litem_13;
                        }
                        else {
                            litem_14=((struct list_item$1sTypeph*)(right_value12=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_14->prev=self->tail;
                            litem_14->next=((void*)0);
                            __dec_obj8=litem_14->item;
                            litem_14->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail->next=litem_14;
                            self->tail=litem_14;
                        }
                        self->len++;
                        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value15;
void* right_value16;
struct list$1sNodeph* result_15;
struct list_item$1sNodeph* it_16;
void* right_value21;
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value21, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sNodeph* __result17__ = ((void*)0);
                    come_release_malloced_mem();
                    return __result17__;
                }
                result_15=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value16=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                if(right_value16) { come_call_finalizer(list$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
                it_16=self->head;
                while(it_16!=((void*)0)) {
                    list$1sNodephp_push_back2(result_15,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value21=sNodep_clone(it_16->item)))));
                    if(right_value21) { right_value21 = come_decrement_ref_count(right_value21, ((struct sNode*)right_value21)->finalize, ((struct sNode*)right_value21)->_protocol_obj, 1, 0); } 
                    it_16=it_16->next;
                }
                struct list$1sNodeph* __result21__ = result_15;
                if(result_15) { come_call_finalizer(list$1sNodephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result21__;
            come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sNodeph* __result18__ = self;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result18__;
                come_release_malloced_mem();
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value17;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj10;
void* right_value18;
struct list_item$1sNodeph* litem_18;
struct sNode* __dec_obj11;
void* right_value19;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj12;
memset(&right_value17, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value19, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                        if(self->len==0) {
                            litem_17=((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_17->prev=((void*)0);
                            litem_17->next=((void*)0);
                            __dec_obj10=litem_17->item;
                            litem_17->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0); }
                            self->tail=litem_17;
                            self->head=litem_17;
                        }
                        else if(self->len==1) {
                            litem_18=((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_18->prev=self->head;
                            litem_18->next=((void*)0);
                            __dec_obj11=litem_18->item;
                            litem_18->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0); }
                            self->tail=litem_18;
                            self->head->next=litem_18;
                        }
                        else {
                            litem_19=((struct list_item$1sNodeph*)(right_value19=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_19->prev=self->tail;
                            litem_19->next=((void*)0);
                            __dec_obj12=litem_19->item;
                            litem_19->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0); }
                            self->tail->next=litem_19;
                            self->tail=litem_19;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
                    come_release_malloced_mem();
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value20;
struct sNode* result_20;
memset(&right_value20, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct sNode*)); /* ddd */
                        if(self==(void*)0) {
                            struct sNode* __result19__ = (void*)0;
                            come_release_malloced_mem();
                            return __result19__;
                        }
                        result_20=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
                        if(self!=((void*)0)&&self->clone!=((void*)0)) {
                            result_20->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(self!=((void*)0)) {
                            result_20->finalize=self->finalize;
                        }
                        if(self!=((void*)0)) {
                            result_20->clone=self->clone;
                        }
                        if(self!=((void*)0)) {
                            result_20->compile=self->compile;
                        }
                        if(self!=((void*)0)) {
                            result_20->sline=self->sline;
                        }
                        if(self!=((void*)0)) {
                            result_20->sname=self->sname;
                        }
                        if(self!=((void*)0)) {
                            result_20->terminated=self->terminated;
                        }
                        struct sNode* __result20__ = result_20;
                        come_release_malloced_mem();
                        return __result20__;
                    come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value24;
void* right_value25;
struct list$1charph* result_21;
struct list_item$1charph* it_22;
void* right_value29;
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_22, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value29, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1charph* __result22__ = ((void*)0);
                    come_release_malloced_mem();
                    return __result22__;
                }
                result_21=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value25=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value24=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                if(right_value25) { come_call_finalizer(list$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0); }
                it_22=self->head;
                while(it_22!=((void*)0)) {
                    list$1charphp_push_back2(result_21,(char*)come_increment_ref_count(((char*)(right_value29=string_clone(it_22->item)))));
                    if(right_value29) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0); }
                    it_22=it_22->next;
                }
                struct list$1charph* __result24__ = result_21;
                if(result_21) { come_call_finalizer(list$1charphp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result24__;
            come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1charph* __result23__ = self;
                    if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result23__;
                come_release_malloced_mem();
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value26;
struct list_item$1charph* litem_23;
char* __dec_obj15;
void* right_value27;
struct list_item$1charph* litem_24;
char* __dec_obj16;
void* right_value28;
struct list_item$1charph* litem_25;
char* __dec_obj17;
memset(&right_value26, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value27, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value28, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1charph*)); /* ddd */
                        if(self->len==0) {
                            litem_23=((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_23->prev=((void*)0);
                            litem_23->next=((void*)0);
                            __dec_obj15=litem_23->item;
                            litem_23->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_23;
                            self->head=litem_23;
                        }
                        else if(self->len==1) {
                            litem_24=((struct list_item$1charph*)(right_value27=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_24->prev=self->head;
                            litem_24->next=((void*)0);
                            __dec_obj16=litem_24->item;
                            litem_24->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_24;
                            self->head->next=litem_24;
                        }
                        else {
                            litem_25=((struct list_item$1charph*)(right_value28=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_25->prev=self->tail;
                            litem_25->next=((void*)0);
                            __dec_obj17=litem_25->item;
                            litem_25->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
                            self->tail->next=litem_25;
                            self->tail=litem_25;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
                    come_release_malloced_mem();
}

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* right_value34;
struct list_item$1CVALUEph* litem_26;
struct CVALUE* __dec_obj22;
void* right_value35;
struct list_item$1CVALUEph* litem_27;
struct CVALUE* __dec_obj23;
void* right_value36;
struct list_item$1CVALUEph* litem_28;
struct CVALUE* __dec_obj24;
memset(&right_value34, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value35, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
        if(self->len==0) {
            litem_26=((struct list_item$1CVALUEph*)(right_value34=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_26->prev=((void*)0);
            litem_26->next=((void*)0);
            __dec_obj22=litem_26->item;
            litem_26->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj22) { come_call_finalizer(CVALUE_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_26;
            self->head=litem_26;
        }
        else if(self->len==1) {
            litem_27=((struct list_item$1CVALUEph*)(right_value35=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_27->prev=self->head;
            litem_27->next=((void*)0);
            __dec_obj23=litem_27->item;
            litem_27->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj23) { come_call_finalizer(CVALUE_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_27;
            self->head->next=litem_27;
        }
        else {
            litem_28=((struct list_item$1CVALUEph*)(right_value36=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_28->prev=self->tail;
            litem_28->next=((void*)0);
            __dec_obj24=litem_28->item;
            litem_28->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj24) { come_call_finalizer(CVALUE_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0); }
            self->tail->next=litem_28;
            self->tail=litem_28;
        }
        self->len++;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
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

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, _Bool var_args, char* block, struct sInfo* info){
void* right_value39;
struct sType* __dec_obj26;
void* right_value40;
struct list$1charph* __dec_obj27;
char* __dec_obj28;
struct sType* __dec_obj29;
struct list$1sTypeph* __dec_obj30;
struct list$1charph* __dec_obj31;
char* __dec_obj32;
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
    __dec_obj26=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value39=sType_clone(impl_type))));
    if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value39) { come_call_finalizer(sType_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj27=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value40=list$1charphp_clone(generics_type_names))));
    if(__dec_obj27) { come_call_finalizer(list$1charphp_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value40) { come_call_finalizer(list$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj28=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
    __dec_obj29=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj30=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    if(__dec_obj30) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj31=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    if(__dec_obj31) { come_call_finalizer(list$1charphp_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0); }
    self->mVarArgs=var_args;
    __dec_obj32=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
    self->mSLine=info->sline;
    struct sGenericsFun* __result28__ = self;
    if(self) { come_call_finalizer(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(impl_type) { come_call_finalizer(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(result_type) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1); }
    if(param_types) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1); }
    if(param_names) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1); }
    if(block) { block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result28__;
come_release_malloced_mem();
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
        if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
            if(self->mImplType) { come_call_finalizer(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
            if(self->mGenericsTypeNames) { come_call_finalizer(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->mName!=((void*)0)) {
            if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            if(self->mResultType) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
            if(self->mBlock) { self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0); }
        }
    come_release_malloced_mem();
}

static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* right_value44;
struct list_item$1sNodeph* litem_34;
struct sNode* __dec_obj33;
void* right_value45;
struct list_item$1sNodeph* litem_35;
struct sNode* __dec_obj34;
void* right_value46;
struct list_item$1sNodeph* litem_36;
struct sNode* __dec_obj35;
memset(&right_value44, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value45, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value46, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                if(self->len==0) {
                    litem_34=((struct list_item$1sNodeph*)(right_value44=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                    litem_34->prev=((void*)0);
                    litem_34->next=((void*)0);
                    __dec_obj33=litem_34->item;
                    litem_34->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0); }
                    self->tail=litem_34;
                    self->head=litem_34;
                }
                else if(self->len==1) {
                    litem_35=((struct list_item$1sNodeph*)(right_value45=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                    litem_35->prev=self->head;
                    litem_35->next=((void*)0);
                    __dec_obj34=litem_35->item;
                    litem_35->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0); }
                    self->tail=litem_35;
                    self->head->next=litem_35;
                }
                else {
                    litem_36=((struct list_item$1sNodeph*)(right_value46=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                    litem_36->prev=self->tail;
                    litem_36->next=((void*)0);
                    __dec_obj35=litem_36->item;
                    litem_36->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0); }
                    self->tail->next=litem_36;
                    self->tail=litem_36;
                }
                self->len++;
                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
            come_release_malloced_mem();
}

static char* list$1charphp_begin(struct list$1charph* self){
char* result_42;
memset(&result_42, 0, sizeof(char*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                char* __result30__ = self->it->item;
                come_release_malloced_mem();
                return __result30__;
            }
            memset(&result_42,0,sizeof(char*));
            char* __result31__ = result_42;
            come_release_malloced_mem();
            return __result31__;
        come_release_malloced_mem();
}

static _Bool list$1charphp_end(struct list$1charph* self){
            _Bool __result32__ = self->it==((void*)0);
            come_release_malloced_mem();
            return __result32__;
        come_release_malloced_mem();
}

static char* list$1charphp_next(struct list$1charph* self){
char* result_44;
memset(&result_44, 0, sizeof(char*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                char* __result33__ = self->it->item;
                come_release_malloced_mem();
                return __result33__;
            }
            memset(&result_44,0,sizeof(char*));
            char* __result34__ = result_44;
            come_release_malloced_mem();
            return __result34__;
        come_release_malloced_mem();
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_45;
memset(&default_value_45, 0, sizeof(struct sType*)); /* bbb */
                memset(&default_value_45,0,sizeof(struct sType*));
                struct sType* __result37__ = list$1sTypephp_item(self,index,default_value_45);
                come_release_malloced_mem();
                return __result37__;
            come_release_malloced_mem();
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_46;
int i_47;
memset(&it_46, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&i_47, 0, sizeof(int)); /* ddd */
                    if(position<0) {
                        position+=self->len;
                    }
                    it_46=self->head;
                    i_47=0;
                    while(it_46!=((void*)0)) {
                        if(position==i_47) {
                            struct sType* __result35__ = it_46->item;
                            come_release_malloced_mem();
                            return __result35__;
                        }
                        it_46=it_46->next;
                        i_47++;
                    }
                    struct sType* __result36__ = default_value;
                    come_release_malloced_mem();
                    return __result36__;
                come_release_malloced_mem();
}

static struct sType* sTypep_clone(struct sType* self){
void* right_value50;
struct sType* result_48;
void* right_value51;
struct tuple1$1sTypeph* __dec_obj37;
void* right_value52;
char* __dec_obj38;
void* right_value53;
struct list$1sTypeph* __dec_obj39;
void* right_value54;
struct list$1sNodeph* __dec_obj40;
void* right_value55;
struct list$1sTypeph* __dec_obj41;
void* right_value56;
struct list$1charph* __dec_obj42;
void* right_value57;
struct tuple1$1sTypeph* __dec_obj43;
void* right_value58;
char* __dec_obj44;
memset(&right_value50, 0, sizeof(void*));
memset(&result_48, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sType* __result38__ = (void*)0;
                    come_release_malloced_mem();
                    return __result38__;
                }
                result_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
                if(right_value50) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_48->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj37=result_48->mNoSolvedGenericsType;
                    result_48->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value51=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj37) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value51) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj38=result_48->mGenericsName;
                    result_48->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value52=string_clone(self->mGenericsName))));
                    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
                    if(right_value52) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj39=result_48->mGenericsTypes;
                    result_48->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value53=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj39) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value53) { come_call_finalizer(list$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj40=result_48->mArrayNum;
                    result_48->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value54=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj40) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value54) { come_call_finalizer(list$1sNodephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_48->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj41=result_48->mParamTypes;
                    result_48->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj41) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value55) { come_call_finalizer(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj42=result_48->mParamNames;
                    result_48->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value56=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj42) { come_call_finalizer(list$1charphp_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value56) { come_call_finalizer(list$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj43=result_48->mResultType;
                    result_48->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj43) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value57) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_48->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)) {
                    result_48->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_48->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_48->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_48->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_48->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_48->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_48->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_48->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_48->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_48->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_48->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_48->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_48->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_48->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_48->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_48->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_48->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_48->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_48->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)) {
                    result_48->mSizeNum=self->mSizeNum;
                }
                if(self!=((void*)0)) {
                    result_48->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_48->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj44=result_48->mOriginalTypeName;
                    result_48->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
                    if(right_value58) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_48->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_48->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_48->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_48->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_48->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_48->mInline=self->mInline;
                }
                struct sType* __result39__ = result_48;
                if(result_48) { come_call_finalizer(sType_finalize,result_48, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result39__;
            come_release_malloced_mem();
}

static void sTypep_finalize(struct sType* self){
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

static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_initialize(struct list$1sRightValueObjectph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1sRightValueObjectph* __result40__ = self;
        if(self) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result40__;
    come_release_malloced_mem();
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_51;
struct list_item$1sRightValueObjectph* prev_it_52;
memset(&it_51, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&prev_it_52, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
            it_51=self->head;
            while(it_51!=((void*)0)) {
                if(1) {
                    if(it_51->item) { come_call_finalizer(sRightValueObject_finalize,it_51->item, (void*)0, (void*)0, 0, 0, 0); }
                }
                prev_it_52=it_51;
                it_51=it_51->next;
                come_free_object(prev_it_52);
            }
        come_release_malloced_mem();
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
                        if(self!=((void*)0)&&self->mType!=((void*)0)) {
                            if(self->mType) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
                            if(self->mVarName) { self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0); }
                        }
                        if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
                            if(self->mFunName) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0); }
                        }
                    come_release_malloced_mem();
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
        int __result41__ = self->len;
        come_release_malloced_mem();
        return __result41__;
    come_release_malloced_mem();
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
struct sNode* result_55;
memset(&result_55, 0, sizeof(struct sNode*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct sNode* __result42__ = self->it->item;
                come_release_malloced_mem();
                return __result42__;
            }
            memset(&result_55,0,sizeof(struct sNode*));
            struct sNode* __result43__ = result_55;
            come_release_malloced_mem();
            return __result43__;
        come_release_malloced_mem();
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
            _Bool __result44__ = self->it==((void*)0);
            come_release_malloced_mem();
            return __result44__;
        come_release_malloced_mem();
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
struct sNode* result_57;
memset(&result_57, 0, sizeof(struct sNode*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct sNode* __result45__ = self->it->item;
                come_release_malloced_mem();
                return __result45__;
            }
            memset(&result_57,0,sizeof(struct sNode*));
            struct sNode* __result46__ = result_57;
            come_release_malloced_mem();
            return __result46__;
        come_release_malloced_mem();
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
                int __result47__ = self->len;
                come_release_malloced_mem();
                return __result47__;
            come_release_malloced_mem();
}

char* parse_attribute(struct sInfo* info){
void* right_value68;
void* right_value69;
struct buffer* asm_fun_name_72;
int brace_num_73;
int len_74;
_Bool in_dquort_75;
int brace_num_76;
int brace_num_77;
void* right_value70;
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&asm_fun_name_72, 0, sizeof(struct buffer*)); /* ddd */
memset(&brace_num_73, 0, sizeof(int)); /* ddd */
memset(&len_74, 0, sizeof(int)); /* ddd */
memset(&in_dquort_75, 0, sizeof(_Bool)); /* ddd */
memset(&brace_num_76, 0, sizeof(int)); /* ddd */
memset(&brace_num_77, 0, sizeof(int)); /* ddd */
memset(&right_value70, 0, sizeof(void*));
    asm_fun_name_72=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value69=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value68=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value68) { come_call_finalizer(buffer_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value69) { come_call_finalizer(buffer_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0); }
    while((_Bool)1) {
        if(memcmp(info->p,"__attribute_pure__",strlen("__attribute_pure__"))==0) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p,"__attribute_malloc__",strlen("__attribute_malloc__"))==0) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p,"__attr_dealloc_fclose",strlen("__attr_dealloc_fclose"))==0) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p,"__wur",strlen("__wur"))==0) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p,"__noreturn",strlen("__noreturn"))==0) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            brace_num_73=0;
            while(*info->p) {
                if(*info->p==40) {
                    info->p++;
                    brace_num_73++;
                }
                else if(*info->p==41) {
                    info->p++;
                    brace_num_73--;
                    if(brace_num_73==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p,"__asm__",strlen("__asm__"))==0) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            len_74=0;
            in_dquort_75=(_Bool)0;
            brace_num_76=0;
            while(*info->p) {
                if(*info->p==34) {
                    info->p++;
                    in_dquort_75=!in_dquort_75;
                }
                else if(in_dquort_75) {
                    buffer_append_char(asm_fun_name_72,*info->p);
                    info->p++;
                }
                else if(*info->p==40) {
                    info->p++;
                    brace_num_76++;
                }
                else if(*info->p==41) {
                    info->p++;
                    brace_num_76--;
                    if(brace_num_76==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p,"__asm",strlen("__asm"))==0) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            brace_num_77=0;
            while(*info->p) {
                if(*info->p==40) {
                    info->p++;
                    brace_num_77++;
                }
                else if(*info->p==41) {
                    info->p++;
                    brace_num_77--;
                    if(brace_num_77==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    char* __result51__ = ((char*)(right_value70=buffer_to_string(asm_fun_name_72)));
    if(asm_fun_name_72) { come_call_finalizer(buffer_finalize,asm_fun_name_72, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result51__;
come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
int i_81;
memset(&i_81, 0, sizeof(int)); /* ddd */
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_81=0;
            i_81<num_value;
            i_81++
            ){
                list$1sTypephp_push_back(self,values[i_81]);
            }
            struct list$1sTypeph* __result52__ = self;
            if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result52__;
        come_release_malloced_mem();
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value78;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj49;
void* right_value79;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj50;
void* right_value80;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj51;
memset(&right_value78, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value79, 0, sizeof(void*));
memset(&litem_83, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&litem_84, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                    if(self->len==0) {
                        litem_82=((struct list_item$1sTypeph*)(right_value78=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                        litem_82->prev=((void*)0);
                        litem_82->next=((void*)0);
                        __dec_obj49=litem_82->item;
                        litem_82->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj49) { come_call_finalizer(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0); }
                        self->tail=litem_82;
                        self->head=litem_82;
                    }
                    else if(self->len==1) {
                        litem_83=((struct list_item$1sTypeph*)(right_value79=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                        litem_83->prev=self->head;
                        litem_83->next=((void*)0);
                        __dec_obj50=litem_83->item;
                        litem_83->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0); }
                        self->tail=litem_83;
                        self->head->next=litem_83;
                    }
                    else {
                        litem_84=((struct list_item$1sTypeph*)(right_value80=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                        litem_84->prev=self->tail;
                        litem_84->next=((void*)0);
                        __dec_obj51=litem_84->item;
                        litem_84->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0); }
                        self->tail->next=litem_84;
                        self->tail=litem_84;
                    }
                    self->len++;
                    if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
int i_87;
memset(&i_87, 0, sizeof(int)); /* ddd */
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_87=0;
            i_87<num_value;
            i_87++
            ){
                list$1charphp_push_back(self,values[i_87]);
            }
            struct list$1charph* __result53__ = self;
            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result53__;
        come_release_malloced_mem();
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value85;
struct list_item$1charph* litem_88;
char* __dec_obj52;
void* right_value86;
struct list_item$1charph* litem_89;
char* __dec_obj53;
void* right_value87;
struct list_item$1charph* litem_90;
char* __dec_obj54;
memset(&right_value85, 0, sizeof(void*));
memset(&litem_88, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value86, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value87, 0, sizeof(void*));
memset(&litem_90, 0, sizeof(struct list_item$1charph*)); /* ddd */
                    if(self->len==0) {
                        litem_88=((struct list_item$1charph*)(right_value85=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                        litem_88->prev=((void*)0);
                        litem_88->next=((void*)0);
                        __dec_obj52=litem_88->item;
                        litem_88->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                        self->tail=litem_88;
                        self->head=litem_88;
                    }
                    else if(self->len==1) {
                        litem_89=((struct list_item$1charph*)(right_value86=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                        litem_89->prev=self->head;
                        litem_89->next=((void*)0);
                        __dec_obj53=litem_89->item;
                        litem_89->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
                        self->tail=litem_89;
                        self->head->next=litem_89;
                    }
                    else {
                        litem_90=((struct list_item$1charph*)(right_value87=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                        litem_90->prev=self->tail;
                        litem_90->next=((void*)0);
                        __dec_obj54=litem_90->item;
                        litem_90->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
                        self->tail->next=litem_90;
                        self->tail=litem_90;
                    }
                    self->len++;
                    if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
                come_release_malloced_mem();
}

static void sFun_finalize(struct sFun* self){
            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                if(self->mResultType) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                if(self->mParamDefaultParametors) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                if(self->mLambdaType) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                if(self->mBlock) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                if(self->mSource) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                if(self->mSourceHead) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                if(self->mSourceHead2) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                if(self->mSourceDefer) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                if(self->mComeHeader) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

static void map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
int hash_109;
int it_110;
_Bool same_key_exist_127;
char* it2_129;
memset(&hash_109, 0, sizeof(int)); /* ddd */
memset(&it_110, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_127, 0, sizeof(_Bool)); /* ddd */
memset(&it2_129, 0, sizeof(char*)); /* ddd */
            if(self->len*2>=self->size) {
                map$2charphsFunphp_rehash(self);
            }
            hash_109=string_get_hash_key(key)%self->size;
            it_110=hash_109;
            while((_Bool)1) {
                if(self->item_existance[it_110]) {
                    if(charp_equals(self->keys[it_110],key)) {
                        if(1) {
                            list$1charpp_remove(self->key_list,self->keys[it_110]);
                            if(self->keys[it_110]) { self->keys[it_110] = come_decrement_ref_count(self->keys[it_110], (void*)0, (void*)0, 0, 0); }
                            self->keys[it_110]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charpp_remove(self->key_list,self->keys[it_110]);
                            self->keys[it_110]=key;
                        }
                        if(1) {
                            if(self->items[it_110]) { come_call_finalizer(sFunp_finalize,self->items[it_110], (void*)0, (void*)0, 0, 0, 0); }
                            self->items[it_110]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_110]=item;
                        }
                        break;
                    }
                    it_110++;
                    if(it_110>=self->size) {
                        it_110=0;
                    }
                    else if(it_110==hash_109) {
                        printf("unexpected error in map.insert\n");
                        exit(2);
                    }
                }
                else {
                    self->item_existance[it_110]=(_Bool)1;
                    if(1) {
                        self->keys[it_110]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_110]=key;
                    }
                    if(1) {
                        self->items[it_110]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_110]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_127=(_Bool)0;
            for(
            it2_129=list$1charpp_begin(self->key_list);
            !list$1charpp_end(self->key_list);
            it_110=list$1charpp_next(self->key_list)
            ){
                if(charp_equals(it2_129,key)) {
                    same_key_exist_127=(_Bool)1;
                }
            }
            if(!same_key_exist_127) {
                list$1charpp_push_back(self->key_list,key);
            }
            if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
            if(item) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
}

static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self){
int size_94;
void* right_value95;
char** keys_95;
void* right_value96;
struct sFun** items_96;
void* right_value97;
_Bool* item_existance_97;
int len_98;
char* it_100;
struct sFun* default_value_102;
struct sFun* it2_105;
int hash_106;
int n_107;
struct sFun* default_value_108;
memset(&size_94, 0, sizeof(int)); /* ddd */
memset(&right_value95, 0, sizeof(void*));
memset(&keys_95, 0, sizeof(char**)); /* ddd */
memset(&right_value96, 0, sizeof(void*));
memset(&items_96, 0, sizeof(struct sFun**)); /* ddd */
memset(&right_value97, 0, sizeof(void*));
memset(&item_existance_97, 0, sizeof(_Bool*)); /* ddd */
memset(&len_98, 0, sizeof(int)); /* ddd */
memset(&it_100, 0, sizeof(char*)); /* ddd */
memset(&default_value_102, 0, sizeof(struct sFun*)); /* bbb */
memset(&it2_105, 0, sizeof(struct sFun*)); /* ddd */
memset(&hash_106, 0, sizeof(int)); /* ddd */
memset(&n_107, 0, sizeof(int)); /* ddd */
memset(&default_value_108, 0, sizeof(struct sFun*)); /* bbb */
                    size_94=self->size*3;
                    keys_95=((char**)(right_value95=(char**)come_calloc(1, sizeof(char*)*(1*(size_94)))));
                    items_96=((struct sFun**)(right_value96=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_94)))));
                    item_existance_97=((_Bool*)(right_value97=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_94)))));
                    len_98=0;
                    for(
                    it_100=map$2charphsFunphp_begin(self);
                    !map$2charphsFunphp_end(self);
                    it_100=map$2charphsFunphp_next(self)
                    ){
                        it2_105=map$2charphsFunphp_at(self,it_100,default_value_102);
                        hash_106=charp_get_hash_key(it_100)%size_94;
                        n_107=hash_106;
                        while((_Bool)1) {
                            if(item_existance_97[n_107]) {
                                n_107++;
                                if(n_107>=size_94) {
                                    n_107=0;
                                }
                                else if(n_107==hash_106) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    exit(2);
                                }
                            }
                            else {
                                item_existance_97[n_107]=(_Bool)1;
                                keys_95[n_107]=it_100;
                                items_96[n_107]=map$2charphsFunphp_at(self,it_100,default_value_108);
                                len_98++;
                                break;
                            }
                        }
                    }
                    come_free_object((char*)self->items);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                    come_free_object((char*)self->keys);
                    self->keys=keys_95;
                    self->items=items_96;
                    self->item_existance=item_existance_97;
                    self->size=size_94;
                    self->len=len_98;
                come_release_malloced_mem();
}

static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self){
char* result_99;
memset(&result_99, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            char* __result54__ = self->key_list->it->item;
                            come_release_malloced_mem();
                            return __result54__;
                        }
                        memset(&result_99,0,sizeof(char*));
                        char* __result55__ = result_99;
                        come_release_malloced_mem();
                        return __result55__;
                    come_release_malloced_mem();
}

static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self){
                        _Bool __result56__ = self->key_list->it==((void*)0);
                        come_release_malloced_mem();
                        return __result56__;
                    come_release_malloced_mem();
}

static char* map$2charphsFunphp_next(struct map$2charphsFunph* self){
char* result_101;
memset(&result_101, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            char* __result57__ = self->key_list->it->item;
                            come_release_malloced_mem();
                            return __result57__;
                        }
                        memset(&result_101,0,sizeof(char*));
                        char* __result58__ = result_101;
                        come_release_malloced_mem();
                        return __result58__;
                    come_release_malloced_mem();
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_103;
int it_104;
memset(&hash_103, 0, sizeof(int)); /* ddd */
memset(&it_104, 0, sizeof(int)); /* ddd */
                            hash_103=string_get_hash_key(((char*)key))%self->size;
                            it_104=hash_103;
                            while((_Bool)1) {
                                if(self->item_existance[it_104]) {
                                    if(charp_equals(self->keys[it_104],key)) {
                                        struct sFun* __result59__ = self->items[it_104];
                                        come_release_malloced_mem();
                                        return __result59__;
                                    }
                                    it_104++;
                                    if(it_104>=self->size) {
                                        it_104=0;
                                    }
                                    else if(it_104==hash_103) {
                                        struct sFun* __result60__ = default_value;
                                        come_release_malloced_mem();
                                        return __result60__;
                                    }
                                }
                                else {
                                    struct sFun* __result61__ = default_value;
                                    come_release_malloced_mem();
                                    return __result61__;
                                }
                            }
                            struct sFun* __result62__ = default_value;
                            come_release_malloced_mem();
                            return __result62__;
                        come_release_malloced_mem();
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_111;
struct list_item$1charp* it_112;
memset(&it2_111, 0, sizeof(int)); /* ddd */
memset(&it_112, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                it2_111=0;
                                it_112=self->head;
                                while(it_112!=((void*)0)) {
                                    if(charp_equals(it_112->item,item)) {
                                        list$1charpp_delete(self,it2_111,it2_111+1);
                                        break;
                                    }
                                    it2_111++;
                                    it_112=it_112->next;
                                }
                            come_release_malloced_mem();
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_113;
struct list_item$1charp* it_116;
int i_117;
struct list_item$1charp* prev_it_118;
struct list_item$1charp* it_119;
int i_120;
struct list_item$1charp* prev_it_121;
struct list_item$1charp* it_122;
struct list_item$1charp* head_prev_it_123;
struct list_item$1charp* tail_it_124;
int i_125;
struct list_item$1charp* prev_it_126;
memset(&tmp_113, 0, sizeof(int)); /* ddd */
memset(&it_116, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_117, 0, sizeof(int)); /* ddd */
memset(&prev_it_118, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_119, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_120, 0, sizeof(int)); /* ddd */
memset(&prev_it_121, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_122, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_123, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_124, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_125, 0, sizeof(int)); /* ddd */
memset(&prev_it_126, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                            if(head<0) {
                                                head+=self->len;
                                            }
                                            if(tail<0) {
                                                tail+=self->len+1;
                                            }
                                            if(head>tail) {
                                                tmp_113=tail;
                                                tail=head;
                                                head=tmp_113;
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
                                                it_116=self->head;
                                                i_117=0;
                                                while(it_116!=((void*)0)) {
                                                    if(i_117<tail) {
                                                        prev_it_118=it_116;
                                                        it_116=it_116->next;
                                                        i_117++;
                                                        if(prev_it_118) { come_call_finalizer(list_item$1charpp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else if(i_117==tail) {
                                                        self->head=it_116;
                                                        self->head->prev=((void*)0);
                                                        break;
                                                    }
                                                    else {
                                                        it_116=it_116->next;
                                                        i_117++;
                                                    }
                                                }
                                            }
                                            else if(tail==self->len) {
                                                it_119=self->head;
                                                i_120=0;
                                                while(it_119!=((void*)0)) {
                                                    if(i_120==head) {
                                                        self->tail=it_119->prev;
                                                        self->tail->next=((void*)0);
                                                    }
                                                    if(i_120>=head) {
                                                        prev_it_121=it_119;
                                                        it_119=it_119->next;
                                                        i_120++;
                                                        if(prev_it_121) { come_call_finalizer(list_item$1charpp_finalize,prev_it_121, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        it_119=it_119->next;
                                                        i_120++;
                                                    }
                                                }
                                            }
                                            else {
                                                it_122=self->head;
                                                head_prev_it_123=((void*)0);
                                                tail_it_124=((void*)0);
                                                i_125=0;
                                                while(it_122!=((void*)0)) {
                                                    if(i_125==head) {
                                                        head_prev_it_123=it_122->prev;
                                                    }
                                                    if(i_125==tail) {
                                                        tail_it_124=it_122;
                                                    }
                                                    if(i_125>=head&&i_125<tail) {
                                                        prev_it_126=it_122;
                                                        it_122=it_122->next;
                                                        i_125++;
                                                        if(prev_it_126) { come_call_finalizer(list_item$1charpp_finalize,prev_it_126, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        it_122=it_122->next;
                                                        i_125++;
                                                    }
                                                }
                                                if(head_prev_it_123!=((void*)0)) {
                                                    head_prev_it_123->next=tail_it_124;
                                                }
                                                if(tail_it_124!=((void*)0)) {
                                                    tail_it_124->prev=head_prev_it_123;
                                                }
                                            }
                                        come_release_malloced_mem();
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_114;
struct list_item$1charp* prev_it_115;
memset(&it_114, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_115, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                    it_114=self->head;
                                                    while(it_114!=((void*)0)) {
                                                        prev_it_115=it_114;
                                                        it_114=it_114->next;
                                                        if(prev_it_115) { come_call_finalizer(list_item$1charpp_finalize,prev_it_115, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                come_release_malloced_mem();
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
                                                        come_release_malloced_mem();
}

static void sFunp_finalize(struct sFun* self){
                                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                    if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                    if(self->mResultType) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                    if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                    if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                                    if(self->mParamDefaultParametors) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                                    if(self->mLambdaType) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                    if(self->mBlock) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                                    if(self->mSource) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                                    if(self->mSourceHead) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                                    if(self->mSourceHead2) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                                    if(self->mSourceDefer) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                                    if(self->mComeHeader) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0); }
                                }
                            come_release_malloced_mem();
}

static char* list$1charpp_begin(struct list$1charp* self){
char* result_128;
memset(&result_128, 0, sizeof(char*)); /* bbb */
                self->it=self->head;
                if(self->it) {
                    char* __result63__ = self->it->item;
                    come_release_malloced_mem();
                    return __result63__;
                }
                memset(&result_128,0,sizeof(char*));
                char* __result64__ = result_128;
                come_release_malloced_mem();
                return __result64__;
            come_release_malloced_mem();
}

static _Bool list$1charpp_end(struct list$1charp* self){
                _Bool __result65__ = self->it==((void*)0);
                come_release_malloced_mem();
                return __result65__;
            come_release_malloced_mem();
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_130;
memset(&result_130, 0, sizeof(char*)); /* bbb */
                self->it=self->it->next;
                if(self->it) {
                    char* __result66__ = self->it->item;
                    come_release_malloced_mem();
                    return __result66__;
                }
                memset(&result_130,0,sizeof(char*));
                char* __result67__ = result_130;
                come_release_malloced_mem();
                return __result67__;
            come_release_malloced_mem();
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value98;
struct list_item$1charp* litem_131;
void* right_value99;
struct list_item$1charp* litem_132;
void* right_value100;
struct list_item$1charp* litem_133;
memset(&right_value98, 0, sizeof(void*));
memset(&litem_131, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value99, 0, sizeof(void*));
memset(&litem_132, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value100, 0, sizeof(void*));
memset(&litem_133, 0, sizeof(struct list_item$1charp*)); /* ddd */
                    if(self->len==0) {
                        litem_131=((struct list_item$1charp*)(right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                        litem_131->prev=((void*)0);
                        litem_131->next=((void*)0);
                        litem_131->item=item;
                        self->tail=litem_131;
                        self->head=litem_131;
                    }
                    else if(self->len==1) {
                        litem_132=((struct list_item$1charp*)(right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                        litem_132->prev=self->head;
                        litem_132->next=((void*)0);
                        litem_132->item=item;
                        self->tail=litem_132;
                        self->head->next=litem_132;
                    }
                    else {
                        litem_133=((struct list_item$1charp*)(right_value100=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                        litem_133->prev=self->tail;
                        litem_133->next=((void*)0);
                        litem_133->item=item;
                        self->tail->next=litem_133;
                        self->tail=litem_133;
                    }
                    self->len++;
                come_release_malloced_mem();
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
struct sClass* default_value_253;
memset(&default_value_253, 0, sizeof(struct sClass*)); /* bbb */
        memset(&default_value_253,0,sizeof(struct sClass*));
        struct sClass* __result76__ = map$2charphsClassphp_at(self,key,default_value_253);
        come_release_malloced_mem();
        return __result76__;
    come_release_malloced_mem();
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_254;
int it_255;
memset(&hash_254, 0, sizeof(int)); /* ddd */
memset(&it_255, 0, sizeof(int)); /* ddd */
            hash_254=string_get_hash_key(((char*)key))%self->size;
            it_255=hash_254;
            while((_Bool)1) {
                if(self->item_existance[it_255]) {
                    if(charp_equals(self->keys[it_255],key)) {
                        struct sClass* __result72__ = self->items[it_255];
                        come_release_malloced_mem();
                        return __result72__;
                    }
                    it_255++;
                    if(it_255>=self->size) {
                        it_255=0;
                    }
                    else if(it_255==hash_254) {
                        struct sClass* __result73__ = default_value;
                        come_release_malloced_mem();
                        return __result73__;
                    }
                }
                else {
                    struct sClass* __result74__ = default_value;
                    come_release_malloced_mem();
                    return __result74__;
                }
            }
            struct sClass* __result75__ = default_value;
            come_release_malloced_mem();
            return __result75__;
        come_release_malloced_mem();
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
struct sType* default_value_257;
memset(&default_value_257, 0, sizeof(struct sType*)); /* bbb */
        memset(&default_value_257,0,sizeof(struct sType*));
        struct sType* __result81__ = map$2charphsTypephp_at(self,key,default_value_257);
        come_release_malloced_mem();
        return __result81__;
    come_release_malloced_mem();
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
int hash_258;
int it_259;
memset(&hash_258, 0, sizeof(int)); /* ddd */
memset(&it_259, 0, sizeof(int)); /* ddd */
            hash_258=string_get_hash_key(((char*)key))%self->size;
            it_259=hash_258;
            while((_Bool)1) {
                if(self->item_existance[it_259]) {
                    if(charp_equals(self->keys[it_259],key)) {
                        struct sType* __result77__ = self->items[it_259];
                        come_release_malloced_mem();
                        return __result77__;
                    }
                    it_259++;
                    if(it_259>=self->size) {
                        it_259=0;
                    }
                    else if(it_259==hash_258) {
                        struct sType* __result78__ = default_value;
                        come_release_malloced_mem();
                        return __result78__;
                    }
                }
                else {
                    struct sType* __result79__ = default_value;
                    come_release_malloced_mem();
                    return __result79__;
                }
            }
            struct sType* __result80__ = default_value;
            come_release_malloced_mem();
            return __result80__;
        come_release_malloced_mem();
}

static _Bool list$1charphp_contained(struct list$1charph* self, char* item){
char* it_262;
memset(&it_262, 0, sizeof(char*)); /* ddd */
        for(
        it_262=list$1charphp_begin(self);
        !list$1charphp_end(self);
        it_262=list$1charphp_next(self)
        ){
            if(charp_operator_equals(it_262,item)) {
                _Bool __result82__ = (_Bool)1;
                come_release_malloced_mem();
                return __result82__;
            }
        }
        _Bool __result83__ = (_Bool)0;
        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
        come_release_malloced_mem();
        return __result83__;
    come_release_malloced_mem();
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
struct sFun* __dec_obj58;
char* __dec_obj59;
    __dec_obj58=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    if(__dec_obj58) { come_call_finalizer(sFun_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
    struct sFunNode* __result85__ = self;
    if(self) { come_call_finalizer(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(fun) { come_call_finalizer(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result85__;
come_release_malloced_mem();
}

static void sFunNode_finalize(struct sFunNode* self){
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                if(self->mFun) { come_call_finalizer(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

int sFunNode_sline(struct sFunNode* self, struct sInfo* info){
    int __result86__ = self->sline;
    come_release_malloced_mem();
    return __result86__;
come_release_malloced_mem();
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* right_value368;
memset(&right_value368, 0, sizeof(void*));
    char* __result87__ = ((char*)(right_value368=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result87__;
come_release_malloced_mem();
}

_Bool sFunNode_terminated(){
    _Bool __result88__ = (_Bool)0;
    come_release_malloced_mem();
    return __result88__;
come_release_malloced_mem();
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_264;
memset(&come_fun_264, 0, sizeof(struct sFun*)); /* ddd */
    come_fun_264=info->come_fun;
    info->come_fun=self->mFun;
    if(self->mFun->mBlock) {
        if(string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"come_heap_pool_init();\n");
        }
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0);
        if(string_operator_not_equals(info->come_fun->mName,"come_release_malloced_mem")) {
            add_come_code(info,"come_release_malloced_mem();\n");
        }
        if(string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"come_heap_pool_final();\n");
        }
    }
    info->come_fun=come_fun_264;
    _Bool __result89__ = (_Bool)1;
    come_release_malloced_mem();
    return __result89__;
come_release_malloced_mem();
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
struct sFun* default_value_267;
memset(&default_value_267, 0, sizeof(struct sFun*)); /* bbb */
        memset(&default_value_267,0,sizeof(struct sFun*));
        struct sFun* __result90__ = map$2charphsFunphp_at(self,key,default_value_267);
        come_release_malloced_mem();
        return __result90__;
    come_release_malloced_mem();
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_271;
memset(&result_271, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sType* __result92__ = self->it->item;
            come_release_malloced_mem();
            return __result92__;
        }
        memset(&result_271,0,sizeof(struct sType*));
        struct sType* __result93__ = result_271;
        come_release_malloced_mem();
        return __result93__;
    come_release_malloced_mem();
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
        _Bool __result94__ = self->it==((void*)0);
        come_release_malloced_mem();
        return __result94__;
    come_release_malloced_mem();
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_273;
memset(&result_273, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sType* __result95__ = self->it->item;
            come_release_malloced_mem();
            return __result95__;
        }
        memset(&result_273,0,sizeof(struct sType*));
        struct sType* __result96__ = result_273;
        come_release_malloced_mem();
        return __result96__;
    come_release_malloced_mem();
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* right_value687;
struct sFunNode* result_555;
void* right_value688;
struct sFun* __dec_obj123;
void* right_value689;
char* __dec_obj124;
memset(&right_value687, 0, sizeof(void*));
memset(&result_555, 0, sizeof(struct sFunNode*)); /* ddd */
memset(&right_value688, 0, sizeof(void*));
memset(&right_value689, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sFunNode* __result169__ = (void*)0;
                come_release_malloced_mem();
                return __result169__;
            }
            result_555=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value687=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1)))));
            if(right_value687) { come_call_finalizer(sFunNode_finalize,right_value687, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                __dec_obj123=result_555->mFun;
                result_555->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value688=sFun_clone(self->mFun))));
                if(__dec_obj123) { come_call_finalizer(sFun_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value688) { come_call_finalizer(sFun_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_555->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj124=result_555->sname;
                result_555->sname=(char*)come_increment_ref_count(((char*)(right_value689=string_clone(self->sname))));
                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0); }
                if(right_value689) { right_value689 = come_decrement_ref_count(right_value689, (void*)0, (void*)0, 1, 0); }
            }
            struct sFunNode* __result170__ = result_555;
            if(result_555) { come_call_finalizer(sFunNode_finalize,result_555, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result170__;
        come_release_malloced_mem();
}

static struct sFun* sFun_clone(struct sFun* self){
void* right_value391;
struct sFun* result_286;
void* right_value392;
char* __dec_obj64;
void* right_value393;
struct sType* __dec_obj65;
void* right_value394;
struct list$1sTypeph* __dec_obj66;
void* right_value395;
struct list$1charph* __dec_obj67;
void* right_value396;
struct list$1charph* __dec_obj68;
void* right_value397;
struct sType* __dec_obj69;
void* right_value421;
struct sBlock* __dec_obj77;
void* right_value422;
struct buffer* __dec_obj78;
void* right_value423;
struct buffer* __dec_obj79;
void* right_value424;
struct buffer* __dec_obj80;
void* right_value425;
struct buffer* __dec_obj81;
void* right_value426;
char* __dec_obj82;
memset(&right_value391, 0, sizeof(void*));
memset(&result_286, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sFun* __result98__ = (void*)0;
                    come_release_malloced_mem();
                    return __result98__;
                }
                result_286=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value391=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1)))));
                if(right_value391) { come_call_finalizer(sFun_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                    __dec_obj64=result_286->mName;
                    result_286->mName=(char*)come_increment_ref_count(((char*)(right_value392=string_clone(self->mName))));
                    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
                    if(right_value392) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj65=result_286->mResultType;
                    result_286->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value393=sType_clone(self->mResultType))));
                    if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value393) { come_call_finalizer(sType_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj66=result_286->mParamTypes;
                    result_286->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value394=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj66) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value394) { come_call_finalizer(list$1sTypephp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj67=result_286->mParamNames;
                    result_286->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value395=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj67) { come_call_finalizer(list$1charphp_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value395) { come_call_finalizer(list$1charphp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                    __dec_obj68=result_286->mParamDefaultParametors;
                    result_286->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value396=list$1charphp_clone(self->mParamDefaultParametors))));
                    if(__dec_obj68) { come_call_finalizer(list$1charphp_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value396) { come_call_finalizer(list$1charphp_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                    __dec_obj69=result_286->mLambdaType;
                    result_286->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value397=sType_clone(self->mLambdaType))));
                    if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value397) { come_call_finalizer(sType_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                    __dec_obj77=result_286->mBlock;
                    result_286->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value421=sBlock_clone(self->mBlock))));
                    if(__dec_obj77) { come_call_finalizer(sBlock_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value421) { come_call_finalizer(sBlock_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_286->mExternal=self->mExternal;
                }
                if(self!=((void*)0)) {
                    result_286->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                    __dec_obj78=result_286->mSource;
                    result_286->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value422=buffer_clone(self->mSource))));
                    if(__dec_obj78) { come_call_finalizer(buffer_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value422) { come_call_finalizer(buffer_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                    __dec_obj79=result_286->mSourceHead;
                    result_286->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value423=buffer_clone(self->mSourceHead))));
                    if(__dec_obj79) { come_call_finalizer(buffer_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value423) { come_call_finalizer(buffer_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                    __dec_obj80=result_286->mSourceHead2;
                    result_286->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value424=buffer_clone(self->mSourceHead2))));
                    if(__dec_obj80) { come_call_finalizer(buffer_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value424) { come_call_finalizer(buffer_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                    __dec_obj81=result_286->mSourceDefer;
                    result_286->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value425=buffer_clone(self->mSourceDefer))));
                    if(__dec_obj81) { come_call_finalizer(buffer_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value425) { come_call_finalizer(buffer_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_286->mStatic=self->mStatic;
                }
                if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                    __dec_obj82=result_286->mComeHeader;
                    result_286->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value426=string_clone(self->mComeHeader))));
                    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0); }
                    if(right_value426) { right_value426 = come_decrement_ref_count(right_value426, (void*)0, (void*)0, 1, 0); }
                }
                struct sFun* __result118__ = result_286;
                if(result_286) { come_call_finalizer(sFun_finalize,result_286, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result118__;
            come_release_malloced_mem();
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* right_value398;
struct sBlock* result_287;
void* right_value399;
struct list$1sNodeph* __dec_obj70;
void* right_value420;
struct sVarTable* __dec_obj76;
memset(&right_value398, 0, sizeof(void*));
memset(&result_287, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value399, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct sBlock* __result99__ = (void*)0;
                            come_release_malloced_mem();
                            return __result99__;
                        }
                        result_287=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value398=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1)))));
                        if(right_value398) { come_call_finalizer(sBlock_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0); }
                        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                            __dec_obj70=result_287->mNodes;
                            result_287->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value399=list$1sNodephp_clone(self->mNodes))));
                            if(__dec_obj70) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value399) { come_call_finalizer(list$1sNodephp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                            __dec_obj76=result_287->mVarTable;
                            result_287->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value420=sVarTable_clone(self->mVarTable))));
                            if(__dec_obj76) { come_call_finalizer(sVarTable_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value420) { come_call_finalizer(sVarTable_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        struct sBlock* __result117__ = result_287;
                        if(result_287) { come_call_finalizer(sBlock_finalize,result_287, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result117__;
                    come_release_malloced_mem();
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* right_value400;
struct sVarTable* result_288;
void* right_value419;
struct map$2charphsVarph* __dec_obj75;
memset(&right_value400, 0, sizeof(void*));
memset(&result_288, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&right_value419, 0, sizeof(void*));
                                if(self==(void*)0) {
                                    struct sVarTable* __result100__ = (void*)0;
                                    come_release_malloced_mem();
                                    return __result100__;
                                }
                                result_288=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value400=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1)))));
                                if(right_value400) { come_call_finalizer(sVarTable_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0); }
                                if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                                    __dec_obj75=result_288->mVars;
                                    result_288->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value419=map$2charphsVarphp_clone(self->mVars))));
                                    if(__dec_obj75) { come_call_finalizer(map$2charphsVarphp_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0); }
                                    if(right_value419) { come_call_finalizer(map$2charphsVarphp_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0); }
                                }
                                if(self!=((void*)0)) {
                                    result_288->mGlobal=self->mGlobal;
                                }
                                if(self!=((void*)0)) {
                                    result_288->mParent=self->mParent;
                                }
                                if(self!=((void*)0)) {
                                    result_288->mID=self->mID;
                                }
                                struct sVarTable* __result116__ = result_288;
                                if(result_288) { come_call_finalizer(sVarTable_finalize,result_288, (void*)0, (void*)0, 0, 0, 1); }
                                come_release_malloced_mem();
                                return __result116__;
                            come_release_malloced_mem();
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* right_value401;
void* right_value407;
struct map$2charphsVarph* result_294;
char* it_296;
struct sVar* default_value_298;
struct sVar* it2_301;
void* right_value411;
void* right_value412;
void* right_value417;
void* right_value418;
memset(&right_value401, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&result_294, 0, sizeof(struct map$2charphsVarph*)); /* ddd */
memset(&it_296, 0, sizeof(char*)); /* ddd */
memset(&default_value_298, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_301, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value411, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
                                        if(self==((void*)0)) {
                                            struct map$2charphsVarph* __result101__ = ((void*)0);
                                            come_release_malloced_mem();
                                            return __result101__;
                                        }
                                        result_294=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value407=map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value401=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1)))))))));
                                        if(right_value407) { come_call_finalizer(map$2charphsVarphp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0); }
                                        for(
                                        it_296=map$2charphsVarphp_begin(self);
                                        !map$2charphsVarphp_end(self);
                                        it_296=map$2charphsVarphp_next(self)
                                        ){
                                            it2_301=map$2charphsVarphp_at(self,it_296,default_value_298);
                                            if(1&&!1) {
                                                map$2charphsVarphp_insert2(result_294,(char*)come_increment_ref_count(((char*)(right_value411=charp_clone(it_296)))),it2_301);
                                                if(right_value411) { right_value411 = come_decrement_ref_count(right_value411, (void*)0, (void*)0, 1, 0); }
                                            }
                                            else if(1&&1) {
                                                map$2charphsVarphp_insert2(result_294,(char*)come_increment_ref_count(((char*)(right_value412=charp_clone(it_296)))),(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value417=sVarp_clone(it2_301)))));
                                                if(right_value412) { right_value412 = come_decrement_ref_count(right_value412, (void*)0, (void*)0, 1, 0); }
                                                if(right_value417) { come_call_finalizer(sVarp_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            else if(!1&&1) {
                                                map$2charphsVarphp_insert2(result_294,it_296,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value418=sVarp_clone(it2_301)))));
                                                if(right_value418) { come_call_finalizer(sVarp_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            else if(!1&&!1) {
                                                map$2charphsVarphp_insert2(result_294,it_296,it2_301);
                                            }
                                        }
                                        struct map$2charphsVarph* __result115__ = result_294;
                                        if(result_294) { come_call_finalizer(map$2charphsVarphp_finalize,result_294, (void*)0, (void*)0, 0, 0, 1); }
                                        come_release_malloced_mem();
                                        return __result115__;
                                    come_release_malloced_mem();
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* right_value402;
void* right_value403;
void* right_value404;
int i_289;
void* right_value405;
void* right_value406;
struct list$1charp* __dec_obj71;
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&i_289, 0, sizeof(int)); /* ddd */
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
                                            self->keys=((char**)(right_value402=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
                                            self->items=((struct sVar**)(right_value403=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)))));
                                            self->item_existance=((_Bool*)(right_value404=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
                                            for(
                                            i_289=0;
                                            i_289<128;
                                            i_289++
                                            ){
                                                self->item_existance[i_289]=(_Bool)0;
                                            }
                                            self->size=128;
                                            self->len=0;
                                            __dec_obj71=self->key_list;
                                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value406=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value405=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
                                            if(__dec_obj71) { come_call_finalizer(list$1charpp_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0); }
                                            if(right_value406) { come_call_finalizer(list$1charpp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0); }
                                            self->it=0;
                                            struct map$2charphsVarph* __result103__ = self;
                                            if(self) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                                            come_release_malloced_mem();
                                            return __result103__;
                                        come_release_malloced_mem();
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                struct list$1charp* __result102__ = self;
                                                if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                                                come_release_malloced_mem();
                                                return __result102__;
                                            come_release_malloced_mem();
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_290;
struct list_item$1charp* prev_it_291;
memset(&it_290, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_291, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                    it_290=self->head;
                                                    while(it_290!=((void*)0)) {
                                                        if(0) {
                                                            if(it_290->item) { it_290->item = come_decrement_ref_count(it_290->item, (void*)0, (void*)0, 0, 0); }
                                                        }
                                                        prev_it_291=it_290;
                                                        it_290=it_290->next;
                                                        come_free_object(prev_it_291);
                                                    }
                                                come_release_malloced_mem();
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_292;
int i_293;
memset(&i_292, 0, sizeof(int)); /* ddd */
memset(&i_293, 0, sizeof(int)); /* ddd */
                                                for(
                                                i_292=0;
                                                i_292<self->size;
                                                i_292++
                                                ){
                                                    if(self->item_existance[i_292]) {
                                                        if(1) {
                                                            if(self->items[i_292]) { come_call_finalizer(sVarp_finalize,self->items[i_292], (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                    }
                                                }
                                                come_free_object((char*)self->items);
                                                for(
                                                i_293=0;
                                                i_293<self->size;
                                                i_293++
                                                ){
                                                    if(self->item_existance[i_293]) {
                                                        if(1) {
                                                            if(self->keys[i_293]) { self->keys[i_293] = come_decrement_ref_count(self->keys[i_293], (void*)0, (void*)0, 0, 0); }
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

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
char* result_295;
memset(&result_295, 0, sizeof(char*)); /* bbb */
                                            self->key_list->it=self->key_list->head;
                                            if(self->key_list->it) {
                                                char* __result104__ = self->key_list->it->item;
                                                come_release_malloced_mem();
                                                return __result104__;
                                            }
                                            memset(&result_295,0,sizeof(char*));
                                            char* __result105__ = result_295;
                                            come_release_malloced_mem();
                                            return __result105__;
                                        come_release_malloced_mem();
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
                                            _Bool __result106__ = self->key_list->it==((void*)0);
                                            come_release_malloced_mem();
                                            return __result106__;
                                        come_release_malloced_mem();
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
char* result_297;
memset(&result_297, 0, sizeof(char*)); /* bbb */
                                            self->key_list->it=self->key_list->it->next;
                                            if(self->key_list->it) {
                                                char* __result107__ = self->key_list->it->item;
                                                come_release_malloced_mem();
                                                return __result107__;
                                            }
                                            memset(&result_297,0,sizeof(char*));
                                            char* __result108__ = result_297;
                                            come_release_malloced_mem();
                                            return __result108__;
                                        come_release_malloced_mem();
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
int hash_299;
int it_300;
memset(&hash_299, 0, sizeof(int)); /* ddd */
memset(&it_300, 0, sizeof(int)); /* ddd */
                                                hash_299=string_get_hash_key(((char*)key))%self->size;
                                                it_300=hash_299;
                                                while((_Bool)1) {
                                                    if(self->item_existance[it_300]) {
                                                        if(charp_equals(self->keys[it_300],key)) {
                                                            struct sVar* __result109__ = self->items[it_300];
                                                            come_release_malloced_mem();
                                                            return __result109__;
                                                        }
                                                        it_300++;
                                                        if(it_300>=self->size) {
                                                            it_300=0;
                                                        }
                                                        else if(it_300==hash_299) {
                                                            struct sVar* __result110__ = default_value;
                                                            come_release_malloced_mem();
                                                            return __result110__;
                                                        }
                                                    }
                                                    else {
                                                        struct sVar* __result111__ = default_value;
                                                        come_release_malloced_mem();
                                                        return __result111__;
                                                    }
                                                }
                                                struct sVar* __result112__ = default_value;
                                                come_release_malloced_mem();
                                                return __result112__;
                                            come_release_malloced_mem();
}

static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
int hash_313;
int it_314;
_Bool same_key_exist_315;
char* it2_316;
memset(&hash_313, 0, sizeof(int)); /* ddd */
memset(&it_314, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_315, 0, sizeof(_Bool)); /* ddd */
memset(&it2_316, 0, sizeof(char*)); /* ddd */
                                                    if(self->len*2>=self->size) {
                                                        map$2charphsVarphp_rehash(self);
                                                    }
                                                    hash_313=string_get_hash_key(key)%self->size;
                                                    it_314=hash_313;
                                                    while((_Bool)1) {
                                                        if(self->item_existance[it_314]) {
                                                            if(charp_equals(self->keys[it_314],key)) {
                                                                if(1) {
                                                                    if(self->keys[it_314]) { self->keys[it_314] = come_decrement_ref_count(self->keys[it_314], (void*)0, (void*)0, 0, 0); }
                                                                    list$1charpp_remove(self->key_list,self->keys[it_314]);
                                                                    self->keys[it_314]=(char*)come_increment_ref_count(key);
                                                                }
                                                                else {
                                                                    list$1charpp_remove(self->key_list,self->keys[it_314]);
                                                                    self->keys[it_314]=key;
                                                                }
                                                                if(1) {
                                                                    if(self->items[it_314]) { come_call_finalizer(sVarp_finalize,self->items[it_314], (void*)0, (void*)0, 0, 0, 0); }
                                                                    self->items[it_314]=(struct sVar*)come_increment_ref_count(item);
                                                                }
                                                                else {
                                                                    self->items[it_314]=item;
                                                                }
                                                                break;
                                                            }
                                                            it_314++;
                                                            if(it_314>=self->size) {
                                                                it_314=0;
                                                            }
                                                            else if(it_314==hash_313) {
                                                                printf("unexpected error in map.insert\n");
                                                                exit(2);
                                                            }
                                                        }
                                                        else {
                                                            self->item_existance[it_314]=(_Bool)1;
                                                            if(1) {
                                                                self->keys[it_314]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                self->keys[it_314]=key;
                                                            }
                                                            if(1) {
                                                                self->items[it_314]=(struct sVar*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                self->items[it_314]=item;
                                                            }
                                                            self->len++;
                                                            break;
                                                        }
                                                    }
                                                    same_key_exist_315=(_Bool)0;
                                                    for(
                                                    it2_316=list$1charpp_begin(self->key_list);
                                                    !list$1charpp_end(self->key_list);
                                                    it_314=list$1charpp_next(self->key_list)
                                                    ){
                                                        if(charp_equals(it2_316,key)) {
                                                            same_key_exist_315=(_Bool)1;
                                                        }
                                                    }
                                                    if(!same_key_exist_315) {
                                                        list$1charpp_push_back(self->key_list,key);
                                                    }
                                                    if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                                                    if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                                                come_release_malloced_mem();
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_302;
void* right_value408;
char** keys_303;
void* right_value409;
struct sVar** items_304;
void* right_value410;
_Bool* item_existance_305;
int len_306;
char* it_307;
struct sVar* default_value_308;
struct sVar* it2_309;
int hash_310;
int n_311;
struct sVar* default_value_312;
memset(&size_302, 0, sizeof(int)); /* ddd */
memset(&right_value408, 0, sizeof(void*));
memset(&keys_303, 0, sizeof(char**)); /* ddd */
memset(&right_value409, 0, sizeof(void*));
memset(&items_304, 0, sizeof(struct sVar**)); /* ddd */
memset(&right_value410, 0, sizeof(void*));
memset(&item_existance_305, 0, sizeof(_Bool*)); /* ddd */
memset(&len_306, 0, sizeof(int)); /* ddd */
memset(&it_307, 0, sizeof(char*)); /* ddd */
memset(&default_value_308, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_309, 0, sizeof(struct sVar*)); /* ddd */
memset(&hash_310, 0, sizeof(int)); /* ddd */
memset(&n_311, 0, sizeof(int)); /* ddd */
memset(&default_value_312, 0, sizeof(struct sVar*)); /* bbb */
                                                            size_302=self->size*3;
                                                            keys_303=((char**)(right_value408=(char**)come_calloc(1, sizeof(char*)*(1*(size_302)))));
                                                            items_304=((struct sVar**)(right_value409=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_302)))));
                                                            item_existance_305=((_Bool*)(right_value410=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_302)))));
                                                            len_306=0;
                                                            for(
                                                            it_307=map$2charphsVarphp_begin(self);
                                                            !map$2charphsVarphp_end(self);
                                                            it_307=map$2charphsVarphp_next(self)
                                                            ){
                                                                it2_309=map$2charphsVarphp_at(self,it_307,default_value_308);
                                                                hash_310=charp_get_hash_key(it_307)%size_302;
                                                                n_311=hash_310;
                                                                while((_Bool)1) {
                                                                    if(item_existance_305[n_311]) {
                                                                        n_311++;
                                                                        if(n_311>=size_302) {
                                                                            n_311=0;
                                                                        }
                                                                        else if(n_311==hash_310) {
                                                                            printf("unexpected error in map.rehash(1)\n");
                                                                            exit(2);
                                                                        }
                                                                    }
                                                                    else {
                                                                        item_existance_305[n_311]=(_Bool)1;
                                                                        keys_303[n_311]=it_307;
                                                                        items_304[n_311]=map$2charphsVarphp_at(self,it_307,default_value_312);
                                                                        len_306++;
                                                                        break;
                                                                    }
                                                                }
                                                            }
                                                            come_free_object((char*)self->items);
                                                            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                                                            come_free_object((char*)self->keys);
                                                            self->keys=keys_303;
                                                            self->items=items_304;
                                                            self->item_existance=item_existance_305;
                                                            self->size=size_302;
                                                            self->len=len_306;
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
void* right_value413;
struct sVar* result_317;
void* right_value414;
char* __dec_obj72;
void* right_value415;
char* __dec_obj73;
void* right_value416;
struct sType* __dec_obj74;
memset(&right_value413, 0, sizeof(void*));
memset(&result_317, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
                                                    if(self==(void*)0) {
                                                        struct sVar* __result113__ = (void*)0;
                                                        come_release_malloced_mem();
                                                        return __result113__;
                                                    }
                                                    result_317=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value413=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1)))));
                                                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                        __dec_obj72=result_317->mName;
                                                        result_317->mName=(char*)come_increment_ref_count(((char*)(right_value414=string_clone(self->mName))));
                                                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0); }
                                                        if(right_value414) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0); }
                                                    }
                                                    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                                        __dec_obj73=result_317->mCValueName;
                                                        result_317->mCValueName=(char*)come_increment_ref_count(((char*)(right_value415=string_clone(self->mCValueName))));
                                                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
                                                        if(right_value415) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0); }
                                                    }
                                                    if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                                        __dec_obj74=result_317->mType;
                                                        result_317->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value416=sType_clone(self->mType))));
                                                        if(__dec_obj74) { come_call_finalizer(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0); }
                                                        if(right_value416) { come_call_finalizer(sType_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0); }
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_317->mBlockLevel=self->mBlockLevel;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_317->mGlobal=self->mGlobal;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_317->mAllocaValue=self->mAllocaValue;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_317->mFunctionParam=self->mFunctionParam;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_317->mNoFree=self->mNoFree;
                                                    }
                                                    struct sVar* __result114__ = result_317;
                                                    come_release_malloced_mem();
                                                    return __result114__;
                                                come_release_malloced_mem();
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            if(self->v1) { come_call_finalizer(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->v2!=((void*)0)) {
            if(self->v2) { come_call_finalizer(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->v3!=((void*)0)) {
            if(self->v3) { come_call_finalizer(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0); }
        }
    come_release_malloced_mem();
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* right_value462;
struct sLambdaNode* result_344;
void* right_value463;
char* __dec_obj95;
memset(&right_value462, 0, sizeof(void*));
memset(&result_344, 0, sizeof(struct sLambdaNode*)); /* ddd */
memset(&right_value463, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sLambdaNode* __result122__ = (void*)0;
                come_release_malloced_mem();
                return __result122__;
            }
            result_344=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value462=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1)))));
            if(right_value462) { come_call_finalizer(sLambdaNode_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_344->mFun=self->mFun;
            }
            if(self!=((void*)0)) {
                result_344->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj95=result_344->sname;
                result_344->sname=(char*)come_increment_ref_count(((char*)(right_value463=string_clone(self->sname))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0); }
                if(right_value463) { right_value463 = come_decrement_ref_count(right_value463, (void*)0, (void*)0, 1, 0); }
            }
            struct sLambdaNode* __result123__ = result_344;
            if(result_344) { come_call_finalizer(sLambdaNode_finalize,result_344, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result123__;
        come_release_malloced_mem();
}

static int list$1charphp_length(struct list$1charph* self){
        int __result125__ = self->len;
        come_release_malloced_mem();
        return __result125__;
    come_release_malloced_mem();
}

static void map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
int hash_364;
int it_365;
_Bool same_key_exist_366;
char* it2_367;
memset(&hash_364, 0, sizeof(int)); /* ddd */
memset(&it_365, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_366, 0, sizeof(_Bool)); /* ddd */
memset(&it2_367, 0, sizeof(char*)); /* ddd */
            if(self->len*2>=self->size) {
                map$2charphsGenericsFunphp_rehash(self);
            }
            hash_364=string_get_hash_key(key)%self->size;
            it_365=hash_364;
            while((_Bool)1) {
                if(self->item_existance[it_365]) {
                    if(charp_equals(self->keys[it_365],key)) {
                        if(1) {
                            list$1charpp_remove(self->key_list,self->keys[it_365]);
                            if(self->keys[it_365]) { self->keys[it_365] = come_decrement_ref_count(self->keys[it_365], (void*)0, (void*)0, 0, 0); }
                            self->keys[it_365]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charpp_remove(self->key_list,self->keys[it_365]);
                            self->keys[it_365]=key;
                        }
                        if(1) {
                            if(self->items[it_365]) { come_call_finalizer(sGenericsFunp_finalize,self->items[it_365], (void*)0, (void*)0, 0, 0, 0); }
                            self->items[it_365]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_365]=item;
                        }
                        break;
                    }
                    it_365++;
                    if(it_365>=self->size) {
                        it_365=0;
                    }
                    else if(it_365==hash_364) {
                        printf("unexpected error in map.insert\n");
                        exit(2);
                    }
                }
                else {
                    self->item_existance[it_365]=(_Bool)1;
                    if(1) {
                        self->keys[it_365]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_365]=key;
                    }
                    if(1) {
                        self->items[it_365]=(struct sGenericsFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_365]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_366=(_Bool)0;
            for(
            it2_367=list$1charpp_begin(self->key_list);
            !list$1charpp_end(self->key_list);
            it_365=list$1charpp_next(self->key_list)
            ){
                if(charp_equals(it2_367,key)) {
                    same_key_exist_366=(_Bool)1;
                }
            }
            if(!same_key_exist_366) {
                list$1charpp_push_back(self->key_list,key);
            }
            if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
            if(item) { come_call_finalizer(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
}

static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self){
int size_349;
void* right_value471;
char** keys_350;
void* right_value472;
struct sGenericsFun** items_351;
void* right_value473;
_Bool* item_existance_352;
int len_353;
char* it_355;
struct sGenericsFun* default_value_357;
struct sGenericsFun* it2_360;
int hash_361;
int n_362;
struct sGenericsFun* default_value_363;
memset(&size_349, 0, sizeof(int)); /* ddd */
memset(&right_value471, 0, sizeof(void*));
memset(&keys_350, 0, sizeof(char**)); /* ddd */
memset(&right_value472, 0, sizeof(void*));
memset(&items_351, 0, sizeof(struct sGenericsFun**)); /* ddd */
memset(&right_value473, 0, sizeof(void*));
memset(&item_existance_352, 0, sizeof(_Bool*)); /* ddd */
memset(&len_353, 0, sizeof(int)); /* ddd */
memset(&it_355, 0, sizeof(char*)); /* ddd */
memset(&default_value_357, 0, sizeof(struct sGenericsFun*)); /* bbb */
memset(&it2_360, 0, sizeof(struct sGenericsFun*)); /* ddd */
memset(&hash_361, 0, sizeof(int)); /* ddd */
memset(&n_362, 0, sizeof(int)); /* ddd */
memset(&default_value_363, 0, sizeof(struct sGenericsFun*)); /* bbb */
                    size_349=self->size*3;
                    keys_350=((char**)(right_value471=(char**)come_calloc(1, sizeof(char*)*(1*(size_349)))));
                    items_351=((struct sGenericsFun**)(right_value472=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_349)))));
                    item_existance_352=((_Bool*)(right_value473=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_349)))));
                    len_353=0;
                    for(
                    it_355=map$2charphsGenericsFunphp_begin(self);
                    !map$2charphsGenericsFunphp_end(self);
                    it_355=map$2charphsGenericsFunphp_next(self)
                    ){
                        it2_360=map$2charphsGenericsFunphp_at(self,it_355,default_value_357);
                        hash_361=charp_get_hash_key(it_355)%size_349;
                        n_362=hash_361;
                        while((_Bool)1) {
                            if(item_existance_352[n_362]) {
                                n_362++;
                                if(n_362>=size_349) {
                                    n_362=0;
                                }
                                else if(n_362==hash_361) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    exit(2);
                                }
                            }
                            else {
                                item_existance_352[n_362]=(_Bool)1;
                                keys_350[n_362]=it_355;
                                items_351[n_362]=map$2charphsGenericsFunphp_at(self,it_355,default_value_363);
                                len_353++;
                                break;
                            }
                        }
                    }
                    come_free_object((char*)self->items);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                    come_free_object((char*)self->keys);
                    self->keys=keys_350;
                    self->items=items_351;
                    self->item_existance=item_existance_352;
                    self->size=size_349;
                    self->len=len_353;
                come_release_malloced_mem();
}

static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self){
char* result_354;
memset(&result_354, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            char* __result126__ = self->key_list->it->item;
                            come_release_malloced_mem();
                            return __result126__;
                        }
                        memset(&result_354,0,sizeof(char*));
                        char* __result127__ = result_354;
                        come_release_malloced_mem();
                        return __result127__;
                    come_release_malloced_mem();
}

static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self){
                        _Bool __result128__ = self->key_list->it==((void*)0);
                        come_release_malloced_mem();
                        return __result128__;
                    come_release_malloced_mem();
}

static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self){
char* result_356;
memset(&result_356, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            char* __result129__ = self->key_list->it->item;
                            come_release_malloced_mem();
                            return __result129__;
                        }
                        memset(&result_356,0,sizeof(char*));
                        char* __result130__ = result_356;
                        come_release_malloced_mem();
                        return __result130__;
                    come_release_malloced_mem();
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
int hash_358;
int it_359;
memset(&hash_358, 0, sizeof(int)); /* ddd */
memset(&it_359, 0, sizeof(int)); /* ddd */
                            hash_358=string_get_hash_key(((char*)key))%self->size;
                            it_359=hash_358;
                            while((_Bool)1) {
                                if(self->item_existance[it_359]) {
                                    if(charp_equals(self->keys[it_359],key)) {
                                        struct sGenericsFun* __result131__ = self->items[it_359];
                                        come_release_malloced_mem();
                                        return __result131__;
                                    }
                                    it_359++;
                                    if(it_359>=self->size) {
                                        it_359=0;
                                    }
                                    else if(it_359==hash_358) {
                                        struct sGenericsFun* __result132__ = default_value;
                                        come_release_malloced_mem();
                                        return __result132__;
                                    }
                                }
                                else {
                                    struct sGenericsFun* __result133__ = default_value;
                                    come_release_malloced_mem();
                                    return __result133__;
                                }
                            }
                            struct sGenericsFun* __result134__ = default_value;
                            come_release_malloced_mem();
                            return __result134__;
                        come_release_malloced_mem();
}

static void sGenericsFunp_finalize(struct sGenericsFun* self){
                                if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
                                    if(self->mImplType) { come_call_finalizer(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
                                    if(self->mGenericsTypeNames) { come_call_finalizer(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                    if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                    if(self->mResultType) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                    if(self->mParamTypes) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                    if(self->mParamNames) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                    if(self->mBlock) { self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0); }
                                }
                            come_release_malloced_mem();
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_387;
memset(&result_387, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct tuple2$2charphsTypeph* __result146__ = self->it->item;
                come_release_malloced_mem();
                return __result146__;
            }
            memset(&result_387,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result147__ = result_387;
            come_release_malloced_mem();
            return __result147__;
        come_release_malloced_mem();
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
            _Bool __result148__ = self->it==((void*)0);
            come_release_malloced_mem();
            return __result148__;
        come_release_malloced_mem();
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_389;
memset(&result_389, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct tuple2$2charphsTypeph* __result149__ = self->it->item;
                come_release_malloced_mem();
                return __result149__;
            }
            memset(&result_389,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result150__ = result_389;
            come_release_malloced_mem();
            return __result150__;
        come_release_malloced_mem();
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
            int __result151__ = self->len;
            come_release_malloced_mem();
            return __result151__;
        come_release_malloced_mem();
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index){
char* default_value_409;
memset(&default_value_409, 0, sizeof(char*)); /* bbb */
                memset(&default_value_409,0,sizeof(char*));
                char* __result154__ = list$1charphp_item(self,index,default_value_409);
                come_release_malloced_mem();
                return __result154__;
            come_release_malloced_mem();
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_410;
int i_411;
memset(&it_410, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_411, 0, sizeof(int)); /* ddd */
                    if(position<0) {
                        position+=self->len;
                    }
                    it_410=self->head;
                    i_411=0;
                    while(it_410!=((void*)0)) {
                        if(position==i_411) {
                            char* __result152__ = it_410->item;
                            come_release_malloced_mem();
                            return __result152__;
                        }
                        it_410=it_410->next;
                        i_411++;
                    }
                    char* __result153__ = default_value;
                    come_release_malloced_mem();
                    return __result153__;
                come_release_malloced_mem();
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
char* __dec_obj109;
        self->v1=v1;
        __dec_obj109=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0); }
        struct tuple2$2sFunpcharph* __result157__ = self;
        if(self) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1); }
        come_release_malloced_mem();
        return __result157__;
    come_release_malloced_mem();
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self){
                    int __result162__ = self->len;
                    come_release_malloced_mem();
                    return __result162__;
                come_release_malloced_mem();
}

