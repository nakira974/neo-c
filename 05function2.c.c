// source head
typedef int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned int __u_short;
typedef unsigned int __u_int;
typedef unsigned int __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long int __int64_t;
typedef unsigned int __uint64_t;
typedef char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef unsigned int __uint_least16_t;
typedef int __int_least32_t;
typedef unsigned int __uint_least32_t;
typedef long int __int_least64_t;
typedef unsigned int __uint_least64_t;
typedef long int __quad_t;
typedef unsigned int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned int __uintmax_t;
typedef unsigned int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned int __ino_t;
typedef unsigned int __ino64_t;
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
typedef unsigned int __rlim_t;
typedef unsigned int __rlim64_t;
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
typedef unsigned int __fsblkcnt_t;
typedef unsigned int __fsblkcnt64_t;
typedef unsigned int __fsfilcnt_t;
typedef unsigned int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned int __syscall_ulong_t;
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
    unsigned int _cur_column;
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
    const unsigned int* __ctype_b;
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
typedef unsigned int u_short;
typedef unsigned int u_int;
typedef unsigned int u_long;
typedef long int quad_t;
typedef unsigned int u_quad_t;
typedef struct anonymous_typeX1 fsid_t;
typedef long int loff_t;
typedef unsigned int ino_t;
typedef unsigned int ino64_t;
typedef unsigned int dev_t;
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
typedef unsigned int ulong;
typedef unsigned int ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char u_int8_t;
typedef unsigned int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned int u_int64_t;
typedef int register_t;
struct anonymous_typeX7
{
    unsigned int __val[(1024/(8*sizeof(unsigned int)))];
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
typedef unsigned int fsblkcnt_t;
typedef unsigned int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned int fsblkcnt64_t;
typedef unsigned int fsfilcnt64_t;
struct anonymous_typeX10
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ9
{
unsigned long int __value64;
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
    unsigned int __pad1;
    unsigned int __pad2;
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
typedef unsigned int __thrd_t;
struct anonymous_typeX11
{
    int __data;
};
typedef struct anonymous_typeX11 __once_flag;
typedef unsigned int pthread_t;
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
    unsigned int __x[3];
    unsigned int __old_x[3];
    unsigned int __c;
    unsigned int __init;
    unsigned long int __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
typedef int (*comparison_fn_t)(const void*,const void*);
typedef int (*__compar_d_fn_t)(const void*,const void*,void*);
typedef void* any;
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
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
extern _Bool gComeDebug;
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
    _Bool mComeMemCore;
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
struct sFunNode
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

// header function
void come_heap_init();

void come_heap_final(_Bool check_mem_leak);

void* come_null_check(void* mem, char* sname, int sline);

int remove(const char* __filename);

int rename(const char* __old, const char* __new);

int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);

int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);

int fclose(struct _IO_FILE* __stream);

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char anonymous_var_nameX1[20]);

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

int __uflow(struct _IO_FILE* anonymous_var_nameX2);

int __overflow(struct _IO_FILE* anonymous_var_nameX3, int anonymous_var_nameX4);

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

unsigned int strtoul(const char* __nptr, char** __endptr, int __base);

int strtoq(const char* __nptr, char** __endptr, int __base);

unsigned long int strtouq(const char* __nptr, char** __endptr, int __base);

int strtoll(const char* __nptr, char** __endptr, int __base);

unsigned long int strtoull(const char* __nptr, char** __endptr, int __base);

int strfromd(char* __dest, int __size, const char* __format, double __f);

int strfromf(char* __dest, int __size, const char* __format, float __f);

int strfroml(char* __dest, int __size, const char* __format, long double __f);

int strfromf32(char* __dest, int __size, const char* __format, float __f);

int strfromf64(char* __dest, int __size, const char* __format, double __f);

int strfromf128(char* __dest, int __size, const char* __format, long double __f);

int strfromf32x(char* __dest, int __size, const char* __format, double __f);

int strfromf64x(char* __dest, int __size, const char* __format, long double __f);

long int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

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

double erand48(unsigned int __xsubi[3]);

long int lrand48();

long int nrand48(unsigned int __xsubi[3]);

long int mrand48();

long int jrand48(unsigned int __xsubi[3]);

void srand48(long int __seedval);

unsigned int* seed48(unsigned int __seed16v[3]);

void lcong48(unsigned int __param[7]);

int drand48_r(struct drand48_data* __buffer, double* __result);

int erand48_r(unsigned int __xsubi[3], struct drand48_data* __buffer, double* __result);

int lrand48_r(struct drand48_data* __buffer, long int* __result);

int nrand48_r(unsigned int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int mrand48_r(struct drand48_data* __buffer, long int* __result);

int jrand48_r(unsigned int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int srand48_r(long int __seedval, struct drand48_data* __buffer);

int seed48_r(unsigned int __seed16v[3], struct drand48_data* __buffer);

int lcong48_r(unsigned int __param[7], struct drand48_data* __buffer);

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

int getsubopt(char** __optionp, char** __tokens, char** __valuep);

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

void* come_calloc(int count, int size, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

void int_times(int self, void* parent, void (*block)(void*));

char* __builtin_string(char* str);

_Bool int_equals(int self, int right);

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

unsigned int short_get_hash_key(short short value);

unsigned int long_get_hash_key(long value);

unsigned int char_get_hash_key(char value);

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

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

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

_Bool xisalpha(char c);

char* charp_reverse(char* str);

char* string_reverse(char* str);

int char_compare(char left, char right);

int short_compare(short short left, short short right);

int int_compare(int left, int right);

int long_compare(long left, long right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_if(_Bool self, void* parent, void (*block)(void*));

_Bool bool_equals(_Bool left, _Bool right);

void charp_puts(char* self);

void charp_print(char* self);

void charp_printf(char* self, const char* msg);

int int_printf(int self, const char* msg);

void fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

char char_putc(char self);

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

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

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
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);

static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
int sFunNode_sline(struct sFunNode* self, struct sInfo* info);

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info);

_Bool sFunNode_terminated();

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, _Bool var_args, char* block, struct sInfo* info);

static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table);

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
void arrange_stack(struct sInfo* info, int top);

int expected_next_character(char c, struct sInfo* info);

char* skip_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

int transpile_v5(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
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
_Bool is_type_name(char* buf, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static _Bool list$1charphp_contained(struct list$1charph* self, char* item);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
struct sNode* parse_function(struct sInfo* info);

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charphp_length(struct list$1charph* self);
static void map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFunp_finalize(struct sGenericsFun* self);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int index);
static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
// inline function
static inline unsigned int __bswap_16(unsigned int __bsx){
    unsigned int __result1__ = ((unsigned int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    return __result1__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    unsigned int __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result2__;
}
static inline unsigned int __bswap_64(unsigned int __bsx){
    unsigned int __result3__ = ((((__bsx)&0)>>56)|(((__bsx)&0)>>40)|(((__bsx)&0)>>24)|(((__bsx)&0)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result3__;
}
static inline unsigned int __uint16_identity(unsigned int __x){
    unsigned int __result4__ = __x;
    return __result4__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
    unsigned int __result5__ = __x;
    return __result5__;
}
static inline unsigned int __uint64_identity(unsigned int __x){
    unsigned int __result6__ = __x;
    return __result6__;
}

// body function






struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
char* __dec_obj1;
    self->mFun=fun;
    self->sline=info->sline;
    __dec_obj1=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    struct sLambdaNode* __result7__ = self;
    if(self) { come_call_finalizer(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result7__;
}

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info){
    int __result8__ = self->sline;
    return __result8__;
}

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info){
void* right_value0;
memset(&right_value0, 0, sizeof(void*));
    char* __result9__ = ((char*)(right_value0=__builtin_string(self->sname)));
    return __result9__;
}

_Bool sLambdaNode_terminated(){
    _Bool __result10__ = (_Bool)0;
    return __result10__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_0;
void* right_value1;
struct CVALUE* come_value_1;
void* right_value2;
char* __dec_obj2;
void* right_value33;
struct sType* __dec_obj21;
memset(&come_fun_0, 0, sizeof(struct sFun*));
memset(&right_value1, 0, sizeof(void*));
memset(&come_value_1, 0, sizeof(struct CVALUE*));
memset(&right_value2, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
    come_fun_0=info->come_fun;
    info->come_fun=self->mFun;
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0);
    }
    come_value_1=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value1=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function2.c", 43))));
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
    return __result26__;
}

static void CVALUE_finalize(struct CVALUE* self){
        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
            if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
        }
        if(self!=((void*)0)&&self->type!=((void*)0)) {
            if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
        }
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
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_2;
struct list_item$1sTypeph* prev_it_3;
memset(&it_2, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_3, 0, sizeof(struct list_item$1sTypeph*));
                        it_2=self->head;
                        while(it_2!=((void*)0)) {
                            if(1) {
                                if(it_2->item) { come_call_finalizer(sType_finalize,it_2->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            prev_it_3=it_2;
                            it_2=it_2->next;
                            come_free_object(prev_it_3);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_4;
struct list_item$1sNodeph* prev_it_5;
memset(&it_4, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_5, 0, sizeof(struct list_item$1sNodeph*));
                        it_4=self->head;
                        while(it_4!=((void*)0)) {
                            if(1) {
                                if(it_4->item) { it_4->item = come_decrement_ref_count(it_4->item, ((struct sNode*)it_4->item)->finalize, ((struct sNode*)it_4->item)->_protocol_obj, 0, 0); } 
                            }
                            prev_it_5=it_4;
                            it_4=it_4->next;
                            come_free_object(prev_it_5);
                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_6;
struct list_item$1charph* prev_it_7;
memset(&it_6, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1charph*));
                        it_6=self->head;
                        while(it_6!=((void*)0)) {
                            if(1) {
                                if(it_6->item) { it_6->item = come_decrement_ref_count(it_6->item, (void*)0, (void*)0, 0, 0); }
                            }
                            prev_it_7=it_6;
                            it_6=it_6->next;
                            come_free_object(prev_it_7);
                        }
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
memset(&result_8, 0, sizeof(struct sType*));
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
            return __result11__;
        }
        result_8=(struct sType*)come_increment_ref_count(((struct sType*)(right_value3=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 48))));
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
            result_8->mComeMemCore=self->mComeMemCore;
        }
        if(self!=((void*)0)) {
            result_8->mInline=self->mInline;
        }
        struct sType* __result25__ = result_8;
        if(result_8) { come_call_finalizer(sType_finalize,result_8, (void*)0, (void*)0, 0, 0, 1); }
        return __result25__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value4;
struct tuple1$1sTypeph* result_9;
void* right_value5;
struct sType* __dec_obj3;
memset(&right_value4, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value5, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple1$1sTypeph* __result12__ = (void*)0;
                    return __result12__;
                }
                result_9=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 52))));
                if(right_value4) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj3=result_9->v1;
                    result_9->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value5=sType_clone(self->v1))));
                    if(__dec_obj3) { come_call_finalizer(sType_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value5) { come_call_finalizer(sType_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0); }
                }
                struct tuple1$1sTypeph* __result13__ = result_9;
                if(result_9) { come_call_finalizer(tuple1$1sTypephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1); }
                return __result13__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value8;
void* right_value9;
struct list$1sTypeph* result_10;
struct list_item$1sTypeph* it_11;
void* right_value13;
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value13, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sTypeph* __result14__ = ((void*)0);
                    return __result14__;
                }
                result_10=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value9=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value8=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 56))))))));
                if(right_value9) { come_call_finalizer(list$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0); }
                it_11=self->head;
                while(it_11!=((void*)0)) {
                    list$1sTypephp_push_back2(result_10,(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_clone(it_11->item)))));
                    if(right_value13) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
                    it_11=it_11->next;
                }
                struct list$1sTypeph* __result16__ = result_10;
                if(result_10) { come_call_finalizer(list$1sTypephp_finalize,result_10, (void*)0, (void*)0, 0, 0, 1); }
                return __result16__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sTypeph* __result15__ = self;
                    if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result15__;
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
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value12, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_12=((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function2.c", 62)));
                            litem_12->prev=((void*)0);
                            litem_12->next=((void*)0);
                            __dec_obj6=litem_12->item;
                            litem_12->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_12;
                            self->head=litem_12;
                        }
                        else if(self->len==1) {
                            litem_13=((struct list_item$1sTypeph*)(right_value11=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function2.c", 72)));
                            litem_13->prev=self->head;
                            litem_13->next=((void*)0);
                            __dec_obj7=litem_13->item;
                            litem_13->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_13;
                            self->head->next=litem_13;
                        }
                        else {
                            litem_14=((struct list_item$1sTypeph*)(right_value12=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function2.c", 82)));
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
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value15;
void* right_value16;
struct list$1sNodeph* result_15;
struct list_item$1sNodeph* it_16;
void* right_value21;
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct list$1sNodeph*));
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value21, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sNodeph* __result17__ = ((void*)0);
                    return __result17__;
                }
                result_15=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value16=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function2.c", 57))))))));
                if(right_value16) { come_call_finalizer(list$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
                it_16=self->head;
                while(it_16!=((void*)0)) {
                    list$1sNodephp_push_back2(result_15,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value21=sNodep_clone(it_16->item)))));
                    if(right_value21) { right_value21 = come_decrement_ref_count(right_value21, ((struct sNode*)right_value21)->finalize, ((struct sNode*)right_value21)->_protocol_obj, 1, 0); } 
                    it_16=it_16->next;
                }
                struct list$1sNodeph* __result21__ = result_15;
                if(result_15) { come_call_finalizer(list$1sNodephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1); }
                return __result21__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sNodeph* __result18__ = self;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result18__;
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
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_17=((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function2.c", 63)));
                            litem_17->prev=((void*)0);
                            litem_17->next=((void*)0);
                            __dec_obj10=litem_17->item;
                            litem_17->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0); }
                            self->tail=litem_17;
                            self->head=litem_17;
                        }
                        else if(self->len==1) {
                            litem_18=((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function2.c", 73)));
                            litem_18->prev=self->head;
                            litem_18->next=((void*)0);
                            __dec_obj11=litem_18->item;
                            litem_18->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0); }
                            self->tail=litem_18;
                            self->head->next=litem_18;
                        }
                        else {
                            litem_19=((struct list_item$1sNodeph*)(right_value19=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function2.c", 83)));
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
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value20;
struct sNode* result_20;
memset(&right_value20, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            struct sNode* __result19__ = (void*)0;
                            return __result19__;
                        }
                        result_20=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "05function2.c", 63))));
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
                        return __result20__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value24;
void* right_value25;
struct list$1charph* result_21;
struct list_item$1charph* it_22;
void* right_value29;
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct list$1charph*));
memset(&it_22, 0, sizeof(struct list_item$1charph*));
memset(&right_value29, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1charph* __result22__ = ((void*)0);
                    return __result22__;
                }
                result_21=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value25=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value24=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 60))))))));
                if(right_value25) { come_call_finalizer(list$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0); }
                it_22=self->head;
                while(it_22!=((void*)0)) {
                    list$1charphp_push_back2(result_21,(char*)come_increment_ref_count(((char*)(right_value29=string_clone(it_22->item)))));
                    if(right_value29) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0); }
                    it_22=it_22->next;
                }
                struct list$1charph* __result24__ = result_21;
                if(result_21) { come_call_finalizer(list$1charphp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1); }
                return __result24__;
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1charph* __result23__ = self;
                    if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result23__;
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
memset(&litem_23, 0, sizeof(struct list_item$1charph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1charph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_23=((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function2.c", 66)));
                            litem_23->prev=((void*)0);
                            litem_23->next=((void*)0);
                            __dec_obj15=litem_23->item;
                            litem_23->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_23;
                            self->head=litem_23;
                        }
                        else if(self->len==1) {
                            litem_24=((struct list_item$1charph*)(right_value27=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function2.c", 76)));
                            litem_24->prev=self->head;
                            litem_24->next=((void*)0);
                            __dec_obj16=litem_24->item;
                            litem_24->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_24;
                            self->head->next=litem_24;
                        }
                        else {
                            litem_25=((struct list_item$1charph*)(right_value28=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function2.c", 86)));
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
memset(&litem_26, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1CVALUEph*));
        if(self->len==0) {
            litem_26=((struct list_item$1CVALUEph*)(right_value34=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "05function2.c", 53)));
            litem_26->prev=((void*)0);
            litem_26->next=((void*)0);
            __dec_obj22=litem_26->item;
            litem_26->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj22) { come_call_finalizer(CVALUE_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_26;
            self->head=litem_26;
        }
        else if(self->len==1) {
            litem_27=((struct list_item$1CVALUEph*)(right_value35=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "05function2.c", 63)));
            litem_27->prev=self->head;
            litem_27->next=((void*)0);
            __dec_obj23=litem_27->item;
            litem_27->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj23) { come_call_finalizer(CVALUE_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_27;
            self->head->next=litem_27;
        }
        else {
            litem_28=((struct list_item$1CVALUEph*)(right_value36=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "05function2.c", 73)));
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
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
struct sFun* __dec_obj25;
char* __dec_obj26;
    __dec_obj25=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    if(__dec_obj25) { come_call_finalizer(sFun_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj26=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
    struct sFunNode* __result27__ = self;
    if(self) { come_call_finalizer(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(fun) { come_call_finalizer(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1); }
    return __result27__;
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
}

static void sBlock_finalize(struct sBlock* self){
                if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                    if(self->mNodes) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                    if(self->mVarTable) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0); }
                }
}

int sFunNode_sline(struct sFunNode* self, struct sInfo* info){
    int __result28__ = self->sline;
    return __result28__;
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* right_value37;
memset(&right_value37, 0, sizeof(void*));
    char* __result29__ = ((char*)(right_value37=__builtin_string(self->sname)));
    return __result29__;
}

_Bool sFunNode_terminated(){
    _Bool __result30__ = (_Bool)0;
    return __result30__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_29;
void* right_value38;
memset(&come_fun_29, 0, sizeof(struct sFun*));
memset(&right_value38, 0, sizeof(void*));
    come_fun_29=info->come_fun;
    info->come_fun=self->mFun;
    if(self->mFun->mBlock) {
        if(string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"come_heap_init();\n");
        }
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0);
        if(string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,((char*)(right_value38=xsprintf("come_heap_final(%d);\n",gComeDebug))));
            if(right_value38) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0); }
        }
    }
    info->come_fun=come_fun_29;
    _Bool __result31__ = (_Bool)1;
    return __result31__;
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* right_value39;
void* right_value40;
struct list$1sNodeph* __dec_obj27;
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
    __dec_obj27=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value40=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value39=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function2.c", 110))))))));
    if(__dec_obj27) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value40) { come_call_finalizer(list$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
    struct sBlock* __result32__ = self;
    if(self) { come_call_finalizer(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result32__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, _Bool var_args, char* block, struct sInfo* info){
void* right_value41;
struct sType* __dec_obj28;
void* right_value42;
struct list$1charph* __dec_obj29;
char* __dec_obj30;
struct sType* __dec_obj31;
struct list$1sTypeph* __dec_obj32;
struct list$1charph* __dec_obj33;
char* __dec_obj34;
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
    __dec_obj28=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value41=sType_clone(impl_type))));
    if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value41) { come_call_finalizer(sType_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj29=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value42=list$1charphp_clone(generics_type_names))));
    if(__dec_obj29) { come_call_finalizer(list$1charphp_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value42) { come_call_finalizer(list$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj30=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
    __dec_obj31=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj32=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    if(__dec_obj32) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj33=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    if(__dec_obj33) { come_call_finalizer(list$1charphp_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0); }
    self->mVarArgs=var_args;
    __dec_obj34=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
    self->mSLine=info->sline;
    struct sGenericsFun* __result33__ = self;
    if(self) { come_call_finalizer(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(impl_type) { come_call_finalizer(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(result_type) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1); }
    if(param_types) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1); }
    if(param_names) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1); }
    if(block) { block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 1); }
    return __result33__;
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
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level){
void* right_value43;
void* right_value44;
struct sBlock* result_30;
int block_level_31;
int sline_32;
char* sname_33;
void* right_value45;
struct sNode* node_34;
void* right_value49;
struct sNode* node_38;
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&result_30, 0, sizeof(struct sBlock*));
memset(&block_level_31, 0, sizeof(int));
memset(&sline_32, 0, sizeof(int));
memset(&sname_33, 0, sizeof(char*));
memset(&right_value45, 0, sizeof(void*));
memset(&node_34, 0, sizeof(struct sNode*));
memset(&right_value49, 0, sizeof(void*));
memset(&node_38, 0, sizeof(struct sNode*));
    result_30=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value44=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value43=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function2.c", 135)))),info))));
    if(right_value43) { come_call_finalizer(sBlock_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value44) { come_call_finalizer(sBlock_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0); }
    block_level_31=info->block_level;
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
            sline_32=info->sline;
            sname_33=info->sname;
            node_34=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=expression_v13(info))));
            if(right_value45) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0); } 
            list$1sNodephp_push_back(result_30->mNodes,(struct sNode*)come_increment_ref_count(node_34));
            parse_sharp_v5(info);
            if(node_34->terminated(node_34->_protocol_obj)) {
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
            if(node_34) { node_34 = come_decrement_ref_count(node_34, ((struct sNode*)node_34)->finalize, ((struct sNode*)node_34)->_protocol_obj, 0, 0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        node_38=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=expression_v13(info))));
        if(right_value49) { right_value49 = come_decrement_ref_count(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0); } 
        parse_sharp_v5(info);
        list$1sNodephp_push_back(result_30->mNodes,(struct sNode*)come_increment_ref_count(node_38));
        if(node_38) { node_38 = come_decrement_ref_count(node_38, ((struct sNode*)node_38)->finalize, ((struct sNode*)node_38)->_protocol_obj, 0, 0); } 
    }
    info->block_level=block_level_31;
    struct sBlock* __result34__ = result_30;
    if(result_30) { come_call_finalizer(sBlock_finalize,result_30, (void*)0, (void*)0, 0, 0, 1); }
    return __result34__;
}

static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* right_value46;
struct list_item$1sNodeph* litem_35;
struct sNode* __dec_obj35;
void* right_value47;
struct list_item$1sNodeph* litem_36;
struct sNode* __dec_obj36;
void* right_value48;
struct list_item$1sNodeph* litem_37;
struct sNode* __dec_obj37;
memset(&right_value46, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1sNodeph*));
                if(self->len==0) {
                    litem_35=((struct list_item$1sNodeph*)(right_value46=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function2.c", 164)));
                    litem_35->prev=((void*)0);
                    litem_35->next=((void*)0);
                    __dec_obj35=litem_35->item;
                    litem_35->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0); }
                    self->tail=litem_35;
                    self->head=litem_35;
                }
                else if(self->len==1) {
                    litem_36=((struct list_item$1sNodeph*)(right_value47=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function2.c", 174)));
                    litem_36->prev=self->head;
                    litem_36->next=((void*)0);
                    __dec_obj36=litem_36->item;
                    litem_36->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0); }
                    self->tail=litem_36;
                    self->head->next=litem_36;
                }
                else {
                    litem_37=((struct list_item$1sNodeph*)(right_value48=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function2.c", 184)));
                    litem_37->prev=self->tail;
                    litem_37->next=((void*)0);
                    __dec_obj37=litem_37->item;
                    litem_37->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0); }
                    self->tail->next=litem_37;
                    self->tail=litem_37;
                }
                self->len++;
                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table){
struct sVarTable* old_table_39;
void* right_value50;
void* right_value51;
struct sVarTable* __dec_obj38;
struct list$1sTypeph* param_types__40;
struct list$1charph* param_names__41;
int i_42;
char* name_44;
void* right_value61;
struct sType* type_50;
void* right_value62;
struct list$1sRightValueObjectph* right_value_objects_51;
void* right_value63;
void* right_value64;
struct list$1sRightValueObjectph* __dec_obj47;
int block_level_54;
int i_55;
struct sNode* node_57;
int stack_num_before_59;
int sline_60;
void* right_value65;
char* sname_61;
void* right_value66;
char* __dec_obj48;
void* right_value67;
char* __dec_obj49;
struct list$1sRightValueObjectph* __dec_obj50;
memset(&old_table_39, 0, sizeof(struct sVarTable*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&param_types__40, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__41, 0, sizeof(struct list$1charph*));
memset(&i_42, 0, sizeof(int)); /* bbb */
memset(&name_44, 0, sizeof(char*));
memset(&right_value61, 0, sizeof(void*));
memset(&type_50, 0, sizeof(struct sType*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value_objects_51, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&block_level_54, 0, sizeof(int));
memset(&i_55, 0, sizeof(int)); /* bbb */
memset(&node_57, 0, sizeof(struct sNode*));
memset(&stack_num_before_59, 0, sizeof(int));
memset(&sline_60, 0, sizeof(int));
memset(&right_value65, 0, sizeof(void*));
memset(&sname_61, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
    old_table_39=info->lv_table;
    if(!no_var_table) {
        __dec_obj38=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value51=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value50=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 200)))),(_Bool)0,old_table_39))));
        if(__dec_obj38) { come_call_finalizer(sVarTable_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value50) { come_call_finalizer(sVarTable_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value51) { come_call_finalizer(sVarTable_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0); }
        info->lv_table=block->mVarTable;
    }
    param_types__40=info->param_types;
    param_names__41=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(param_types&&param_names) {
        for(
        name_44=list$1charphp_begin((param_names));
        !list$1charphp_end((param_names));
        name_44=list$1charphp_next((param_names))
        ){
            type_50=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sTypep_clone(list$1sTypephp_operator_load_element(param_types,i_42)))));
            if(right_value61) { come_call_finalizer(sTypep_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
            type_50->mFunctionParam=(_Bool)1;
            type_50->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_44,(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(type_50)))),info);
            if(right_value62) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0); }
            i_42++;
            if(type_50) { come_call_finalizer(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    right_value_objects_51=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    __dec_obj47=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value64=list$1sRightValueObjectphp_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value63=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function2.c", 222))))))));
    if(__dec_obj47) { come_call_finalizer(list$1sRightValueObjectphp_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value64) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
    block_level_54=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNodephp_length(block->mNodes)==0) {
    }
    else {
        for(
        node_57=list$1sNodephp_begin((block->mNodes));
        !list$1sNodephp_end((block->mNodes));
        node_57=list$1sNodephp_next((block->mNodes))
        ){
            info->module->mLastCode=((void*)0);
            info->module->mLastCode2=((void*)0);
            stack_num_before_59=list$1CVALUEphp_length(info->stack);
            sline_60=info->sline;
            sname_61=(char*)come_increment_ref_count(((char*)(right_value65=__builtin_string(info->sname))));
            if(right_value65) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0); }
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_57->sline(node_57->_protocol_obj);
            __dec_obj48=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value66=node_57->sname(node_57->_protocol_obj))));
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
            if(right_value66) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0); }
            if(!node_57->compile(node_57->_protocol_obj,info)) {
                err_msg(info,"compiling is failed(5)");
                exit(2);
            }
            info->sline=sline_60;
            __dec_obj49=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value67=__builtin_string(sname_61))));
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
            if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0); }
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_59);
            free_right_value_objects(info);
            if(sname_61) { sname_61 = come_decrement_ref_count(sname_61, (void*)0, (void*)0, 0, 0); }
        }
    }
    if(!info->last_statment_is_return&&!no_var_table) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_39;
    info->block_level=block_level_54;
    info->param_types=param_types__40;
    info->param_names=param_names__41;
    __dec_obj50=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_51);
    if(__dec_obj50) { come_call_finalizer(list$1sRightValueObjectphp_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0); }
    int __result53__ = 0;
    if(right_value_objects_51) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_51, (void*)0, (void*)0, 0, 0, 0); }
    return __result53__;
}

static char* list$1charphp_begin(struct list$1charph* self){
char* result_43;
memset(&result_43, 0, sizeof(char*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                char* __result35__ = self->it->item;
                return __result35__;
            }
            memset(&result_43,0,sizeof(char*));
            char* __result36__ = result_43;
            return __result36__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
            _Bool __result37__ = self->it==((void*)0);
            return __result37__;
}

static char* list$1charphp_next(struct list$1charph* self){
char* result_45;
memset(&result_45, 0, sizeof(char*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                char* __result38__ = self->it->item;
                return __result38__;
            }
            memset(&result_45,0,sizeof(char*));
            char* __result39__ = result_45;
            return __result39__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_46;
memset(&default_value_46, 0, sizeof(struct sType*)); /* bbb */
                memset(&default_value_46,0,sizeof(struct sType*));
                struct sType* __result42__ = list$1sTypephp_item(self,index,default_value_46);
                return __result42__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_47;
int i_48;
memset(&it_47, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_48, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_47=self->head;
                    i_48=0;
                    while(it_47!=((void*)0)) {
                        if(position==i_48) {
                            struct sType* __result40__ = it_47->item;
                            return __result40__;
                        }
                        it_47=it_47->next;
                        i_48++;
                    }
                    struct sType* __result41__ = default_value;
                    return __result41__;
}

static struct sType* sTypep_clone(struct sType* self){
void* right_value52;
struct sType* result_49;
void* right_value53;
struct tuple1$1sTypeph* __dec_obj39;
void* right_value54;
char* __dec_obj40;
void* right_value55;
struct list$1sTypeph* __dec_obj41;
void* right_value56;
struct list$1sNodeph* __dec_obj42;
void* right_value57;
struct list$1sTypeph* __dec_obj43;
void* right_value58;
struct list$1charph* __dec_obj44;
void* right_value59;
struct tuple1$1sTypeph* __dec_obj45;
void* right_value60;
char* __dec_obj46;
memset(&right_value52, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct sType*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sType* __result43__ = (void*)0;
                    return __result43__;
                }
                result_49=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 215))));
                if(right_value52) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_49->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj39=result_49->mNoSolvedGenericsType;
                    result_49->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value53=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj39) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value53) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj40=result_49->mGenericsName;
                    result_49->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value54=string_clone(self->mGenericsName))));
                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
                    if(right_value54) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj41=result_49->mGenericsTypes;
                    result_49->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj41) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value55) { come_call_finalizer(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj42=result_49->mArrayNum;
                    result_49->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value56=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj42) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value56) { come_call_finalizer(list$1sNodephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_49->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj43=result_49->mParamTypes;
                    result_49->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value57=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj43) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value57) { come_call_finalizer(list$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj44=result_49->mParamNames;
                    result_49->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value58=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj44) { come_call_finalizer(list$1charphp_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value58) { come_call_finalizer(list$1charphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj45=result_49->mResultType;
                    result_49->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value59=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj45) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value59) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_49->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)) {
                    result_49->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_49->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_49->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_49->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_49->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_49->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_49->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_49->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_49->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_49->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_49->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_49->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_49->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_49->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_49->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_49->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_49->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_49->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_49->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)) {
                    result_49->mSizeNum=self->mSizeNum;
                }
                if(self!=((void*)0)) {
                    result_49->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_49->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj46=result_49->mOriginalTypeName;
                    result_49->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value60=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
                    if(right_value60) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_49->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_49->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_49->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_49->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_49->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_49->mComeMemCore=self->mComeMemCore;
                }
                if(self!=((void*)0)) {
                    result_49->mInline=self->mInline;
                }
                struct sType* __result44__ = result_49;
                if(result_49) { come_call_finalizer(sType_finalize,result_49, (void*)0, (void*)0, 0, 0, 1); }
                return __result44__;
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
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_initialize(struct list$1sRightValueObjectph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1sRightValueObjectph* __result45__ = self;
        if(self) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        return __result45__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_52;
struct list_item$1sRightValueObjectph* prev_it_53;
memset(&it_52, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1sRightValueObjectph*));
            it_52=self->head;
            while(it_52!=((void*)0)) {
                if(1) {
                    if(it_52->item) { come_call_finalizer(sRightValueObject_finalize,it_52->item, (void*)0, (void*)0, 0, 0, 0); }
                }
                prev_it_53=it_52;
                it_52=it_52->next;
                come_free_object(prev_it_53);
            }
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
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
        int __result46__ = self->len;
        return __result46__;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
struct sNode* result_56;
memset(&result_56, 0, sizeof(struct sNode*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct sNode* __result47__ = self->it->item;
                return __result47__;
            }
            memset(&result_56,0,sizeof(struct sNode*));
            struct sNode* __result48__ = result_56;
            return __result48__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
            _Bool __result49__ = self->it==((void*)0);
            return __result49__;
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
struct sNode* result_58;
memset(&result_58, 0, sizeof(struct sNode*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct sNode* __result50__ = self->it->item;
                return __result50__;
            }
            memset(&result_58,0,sizeof(struct sNode*));
            struct sNode* __result51__ = result_58;
            return __result51__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
                int __result52__ = self->len;
                return __result52__;
}

void arrange_stack(struct sInfo* info, int top){
    if(list$1CVALUEphp_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEphp_length(info->stack)-top,info);
    }
    if(list$1CVALUEphp_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEphp_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(*info->p!=c) {
        if(!info->no_output_err) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    int __result54__ = 0;
    return __result54__;
}

char* skip_block(struct sInfo* info){
char* head_62;
_Bool dquort_63;
_Bool squort_64;
int sline_65;
int nest_66;
char* tail_67;
void* right_value68;
char* buf_68;
void* right_value69;
memset(&head_62, 0, sizeof(char*));
memset(&dquort_63, 0, sizeof(_Bool));
memset(&squort_64, 0, sizeof(_Bool));
memset(&sline_65, 0, sizeof(int));
memset(&nest_66, 0, sizeof(int));
memset(&tail_67, 0, sizeof(char*));
memset(&right_value68, 0, sizeof(void*));
memset(&buf_68, 0, sizeof(char*));
memset(&right_value69, 0, sizeof(void*));
    head_62=info->p;
    if(*info->p==123) {
        info->p++;
        dquort_63=(_Bool)0;
        squort_64=(_Bool)0;
        sline_65=0;
        nest_66=0;
        while(1) {
            if(dquort_63) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_65);
                        exit(2);
                    }
                    info->p++;
                }
                else if(*info->p==34) {
                    info->p++;
                    dquort_63=!dquort_63;
                }
                else {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_65);
                        exit(2);
                    }
                }
            }
            else if(squort_64) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_65);
                        exit(2);
                    }
                    info->p++;
                }
                else if(*info->p==39) {
                    info->p++;
                    squort_64=!squort_64;
                }
                else {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_65);
                        exit(2);
                    }
                }
            }
            else if(*info->p==39) {
                sline_65=info->sline;
                info->p++;
                squort_64=!squort_64;
            }
            else if(*info->p==34) {
                sline_65=info->sline;
                info->p++;
                dquort_63=!dquort_63;
            }
            else if(*info->p==35) {
                parse_sharp_v5(info);
            }
            else if(*info->p==123) {
                info->p++;
                nest_66++;
            }
            else if(*info->p==125) {
                info->p++;
                if(nest_66==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_66--;
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
    tail_67=info->p;
    buf_68=(char*)come_increment_ref_count(((char*)(right_value68=(char*)come_calloc(1, sizeof(char)*(1*(tail_67-head_62+1)), "05function2.c", 408))));
    if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
    memcpy(buf_68,head_62,tail_67-head_62);
    buf_68[tail_67-head_62]=0;
    char* __result55__ = ((char*)(right_value69=__builtin_string(buf_68)));
    if(buf_68) { buf_68 = come_decrement_ref_count(buf_68, (void*)0, (void*)0, 0, 0); }
    return __result55__;
}

char* parse_attribute(struct sInfo* info){
void* right_value70;
void* right_value71;
struct buffer* asm_fun_name_69;
int brace_num_70;
int len_71;
_Bool in_dquort_72;
int brace_num_73;
int brace_num_74;
void* right_value72;
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&asm_fun_name_69, 0, sizeof(struct buffer*));
memset(&brace_num_70, 0, sizeof(int));
memset(&len_71, 0, sizeof(int));
memset(&in_dquort_72, 0, sizeof(_Bool));
memset(&brace_num_73, 0, sizeof(int));
memset(&brace_num_74, 0, sizeof(int));
memset(&right_value72, 0, sizeof(void*));
    asm_fun_name_69=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value71=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value70=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 417))))))));
    if(right_value70) { come_call_finalizer(buffer_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value71) { come_call_finalizer(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
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
            brace_num_70=0;
            while(*info->p) {
                if(*info->p==40) {
                    info->p++;
                    brace_num_70++;
                }
                else if(*info->p==41) {
                    info->p++;
                    brace_num_70--;
                    if(brace_num_70==0) {
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
            len_71=0;
            in_dquort_72=(_Bool)0;
            brace_num_73=0;
            while(*info->p) {
                if(*info->p==34) {
                    info->p++;
                    in_dquort_72=!in_dquort_72;
                }
                else if(in_dquort_72) {
                    buffer_append_char(asm_fun_name_69,*info->p);
                    info->p++;
                }
                else if(*info->p==40) {
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
        else if(memcmp(info->p,"__asm",strlen("__asm"))==0) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            brace_num_74=0;
            while(*info->p) {
                if(*info->p==40) {
                    info->p++;
                    brace_num_74++;
                }
                else if(*info->p==41) {
                    info->p++;
                    brace_num_74--;
                    if(brace_num_74==0) {
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
    char* __result56__ = ((char*)(right_value72=buffer_to_string(asm_fun_name_69)));
    if(asm_fun_name_69) { come_call_finalizer(buffer_finalize,asm_fun_name_69, (void*)0, (void*)0, 0, 0, 0); }
    return __result56__;
}

int transpile_v5(struct sInfo* info){
void* right_value73;
char* name_75;
void* right_value74;
void* right_value75;
struct sType* result_type_76;
void* right_value76;
void* right_value77;
void* right_value78;
void* right_value79;
void* right_value80;
void* right_value81;
void* right_value82;
void* right_value83;
struct sType* __list_values1___77[4];
void* right_value87;
void* right_value88;
struct list$1sTypeph* param_types_82;
void* right_value89;
void* right_value90;
void* right_value91;
void* right_value92;
char* __list_values2___83[4];
void* right_value96;
void* right_value97;
struct list$1charph* param_names_88;
void* right_value98;
void* right_value99;
struct list$1charph* param_default_parametors_89;
void* right_value100;
void* right_value101;
void* right_value102;
void* right_value103;
void* right_value104;
struct sFun* main_fun_90;
void* right_value111;
void* right_value112;
char* name_131;
void* right_value113;
void* right_value114;
struct sType* result_type_132;
void* right_value115;
void* right_value116;
struct sType* __list_values3___133[1];
void* right_value117;
void* right_value118;
struct list$1sTypeph* param_types_134;
void* right_value119;
char* __list_values4___135[1];
void* right_value120;
void* right_value121;
struct list$1charph* param_names_136;
void* right_value122;
void* right_value123;
struct list$1charph* param_default_parametors_137;
void* right_value124;
void* right_value125;
void* right_value126;
struct sFun* main_fun_138;
void* right_value127;
void* right_value128;
char* name_139;
void* right_value129;
void* right_value130;
struct sType* result_type_140;
void* right_value131;
void* right_value132;
void* right_value133;
void* right_value134;
void* right_value135;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
struct sType* __list_values5___141[7];
void* right_value145;
void* right_value146;
struct list$1sTypeph* param_types_142;
void* right_value147;
void* right_value148;
void* right_value149;
void* right_value150;
void* right_value151;
void* right_value152;
void* right_value153;
char* __list_values6___143[7];
void* right_value154;
void* right_value155;
struct list$1charph* param_names_144;
void* right_value156;
void* right_value157;
struct list$1charph* param_default_parametors_145;
void* right_value158;
void* right_value159;
void* right_value160;
struct sFun* main_fun_146;
void* right_value161;
void* right_value162;
char* name_147;
void* right_value163;
void* right_value164;
struct sType* result_type_148;
void* right_value165;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
struct sType* __list_values7___149[5];
void* right_value175;
void* right_value176;
struct list$1sTypeph* param_types_150;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
char* __list_values8___151[5];
void* right_value182;
void* right_value183;
struct list$1charph* param_names_152;
void* right_value184;
void* right_value185;
struct list$1charph* param_default_parametors_153;
void* right_value186;
void* right_value187;
void* right_value188;
struct sFun* main_fun_154;
void* right_value189;
void* right_value190;
char* name_155;
void* right_value191;
void* right_value192;
struct sType* result_type_156;
void* right_value193;
void* right_value194;
struct sType* __list_values9___157[1];
void* right_value195;
void* right_value196;
struct list$1sTypeph* param_types_158;
void* right_value197;
char* __list_values10___159[1];
void* right_value198;
void* right_value199;
struct list$1charph* param_names_160;
void* right_value200;
void* right_value201;
struct list$1charph* param_default_parametors_161;
void* right_value202;
void* right_value203;
void* right_value204;
struct sFun* main_fun_162;
void* right_value205;
void* right_value206;
char* name_163;
void* right_value207;
void* right_value208;
struct sType* result_type_164;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
struct sType* __list_values11___165[3];
void* right_value215;
void* right_value216;
struct list$1sTypeph* param_types_166;
void* right_value217;
void* right_value218;
void* right_value219;
char* __list_values12___167[3];
void* right_value220;
void* right_value221;
struct list$1charph* param_names_168;
void* right_value222;
void* right_value223;
struct list$1charph* param_default_parametors_169;
void* right_value224;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
struct sFun* main_fun_170;
void* right_value229;
void* right_value230;
char* name_171;
void* right_value231;
void* right_value232;
struct sType* result_type_172;
void* right_value233;
void* right_value234;
struct sType* __list_values13___173[1];
void* right_value235;
void* right_value236;
struct list$1sTypeph* param_types_174;
void* right_value237;
char* __list_values14___175[1];
void* right_value238;
void* right_value239;
struct list$1charph* param_names_176;
void* right_value240;
void* right_value241;
struct list$1charph* param_default_parametors_177;
void* right_value242;
void* right_value243;
void* right_value244;
struct sFun* main_fun_178;
void* right_value245;
void* right_value246;
char* name_179;
void* right_value247;
void* right_value248;
struct sType* result_type_180;
void* right_value249;
void* right_value250;
struct list$1sTypeph* param_types_181;
void* right_value251;
void* right_value252;
struct list$1charph* param_names_182;
void* right_value253;
void* right_value254;
struct list$1charph* param_default_parametors_183;
void* right_value255;
void* right_value256;
void* right_value257;
struct sFun* main_fun_184;
void* right_value258;
void* right_value259;
char* name_185;
void* right_value260;
void* right_value261;
struct sType* result_type_186;
void* right_value262;
void* right_value263;
struct sType* __list_values15___187[1];
void* right_value264;
void* right_value265;
struct list$1sTypeph* param_types_188;
void* right_value266;
char* __list_values16___189[1];
void* right_value267;
void* right_value268;
struct list$1charph* param_names_190;
void* right_value269;
void* right_value270;
struct list$1charph* param_default_parametors_191;
void* right_value271;
void* right_value272;
void* right_value273;
struct sFun* main_fun_192;
void* right_value274;
void* right_value275;
char* name_193;
void* right_value276;
void* right_value277;
struct sType* result_type_194;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value281;
void* right_value282;
void* right_value283;
struct sType* __list_values17___195[3];
void* right_value284;
void* right_value285;
struct list$1sTypeph* param_types_196;
void* right_value286;
void* right_value287;
void* right_value288;
char* __list_values18___197[3];
void* right_value289;
void* right_value290;
struct list$1charph* param_names_198;
void* right_value291;
void* right_value292;
struct list$1charph* param_default_parametors_199;
void* right_value293;
void* right_value294;
void* right_value295;
struct sFun* main_fun_200;
void* right_value296;
char* head_201;
int head_sline_202;
void* right_value297;
char* buf_203;
void* right_value298;
struct sNode* node_204;
memset(&right_value73, 0, sizeof(void*));
memset(&name_75, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&result_type_76, 0, sizeof(struct sType*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&param_types_82, 0, sizeof(struct list$1sTypeph*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&param_names_88, 0, sizeof(struct list$1charph*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&param_default_parametors_89, 0, sizeof(struct list$1charph*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&main_fun_90, 0, sizeof(struct sFun*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&name_131, 0, sizeof(char*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&result_type_132, 0, sizeof(struct sType*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&param_types_134, 0, sizeof(struct list$1sTypeph*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&param_names_136, 0, sizeof(struct list$1charph*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&param_default_parametors_137, 0, sizeof(struct list$1charph*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&main_fun_138, 0, sizeof(struct sFun*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&name_139, 0, sizeof(char*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&result_type_140, 0, sizeof(struct sType*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&param_types_142, 0, sizeof(struct list$1sTypeph*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&param_names_144, 0, sizeof(struct list$1charph*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&param_default_parametors_145, 0, sizeof(struct list$1charph*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&main_fun_146, 0, sizeof(struct sFun*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&name_147, 0, sizeof(char*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&result_type_148, 0, sizeof(struct sType*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&param_types_150, 0, sizeof(struct list$1sTypeph*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&param_names_152, 0, sizeof(struct list$1charph*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&param_default_parametors_153, 0, sizeof(struct list$1charph*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&main_fun_154, 0, sizeof(struct sFun*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&name_155, 0, sizeof(char*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&result_type_156, 0, sizeof(struct sType*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&param_types_158, 0, sizeof(struct list$1sTypeph*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&param_names_160, 0, sizeof(struct list$1charph*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&param_default_parametors_161, 0, sizeof(struct list$1charph*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&main_fun_162, 0, sizeof(struct sFun*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&name_163, 0, sizeof(char*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&result_type_164, 0, sizeof(struct sType*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&param_types_166, 0, sizeof(struct list$1sTypeph*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&param_names_168, 0, sizeof(struct list$1charph*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&param_default_parametors_169, 0, sizeof(struct list$1charph*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&main_fun_170, 0, sizeof(struct sFun*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&name_171, 0, sizeof(char*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&result_type_172, 0, sizeof(struct sType*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&param_types_174, 0, sizeof(struct list$1sTypeph*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&param_names_176, 0, sizeof(struct list$1charph*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&param_default_parametors_177, 0, sizeof(struct list$1charph*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&main_fun_178, 0, sizeof(struct sFun*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&name_179, 0, sizeof(char*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&result_type_180, 0, sizeof(struct sType*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&param_types_181, 0, sizeof(struct list$1sTypeph*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&param_names_182, 0, sizeof(struct list$1charph*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&param_default_parametors_183, 0, sizeof(struct list$1charph*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&main_fun_184, 0, sizeof(struct sFun*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&name_185, 0, sizeof(char*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&result_type_186, 0, sizeof(struct sType*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&param_types_188, 0, sizeof(struct list$1sTypeph*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&param_names_190, 0, sizeof(struct list$1charph*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&param_default_parametors_191, 0, sizeof(struct list$1charph*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&main_fun_192, 0, sizeof(struct sFun*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&name_193, 0, sizeof(char*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&result_type_194, 0, sizeof(struct sType*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&param_types_196, 0, sizeof(struct list$1sTypeph*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&param_names_198, 0, sizeof(struct list$1charph*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&param_default_parametors_199, 0, sizeof(struct list$1charph*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&main_fun_200, 0, sizeof(struct sFun*));
memset(&right_value296, 0, sizeof(void*));
memset(&head_201, 0, sizeof(char*));
memset(&head_sline_202, 0, sizeof(int));
memset(&right_value297, 0, sizeof(void*));
memset(&buf_203, 0, sizeof(char*));
memset(&right_value298, 0, sizeof(void*));
memset(&node_204, 0, sizeof(struct sNode*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_75=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string("come_calloc"))));
        if(right_value73) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0); }
        result_type_76=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value74=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 582)))),"void*",info,(_Bool)0))));
        if(right_value74) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value75) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values1___77[0]=come_increment_ref_count(((struct sType*)(right_value77=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value76=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 583)))),"int",info,(_Bool)0))));
__list_values1___77[1]=come_increment_ref_count(((struct sType*)(right_value79=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value78=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 583)))),"int",info,(_Bool)0))));
__list_values1___77[2]=come_increment_ref_count(((struct sType*)(right_value81=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value80=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 583)))),"char*",info,(_Bool)0))));
__list_values1___77[3]=come_increment_ref_count(((struct sType*)(right_value83=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value82=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 583)))),"int",info,(_Bool)0))));
}        param_types_82=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 583)))),4,__list_values1___77))));
        if(right_value76) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value77) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value78) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value79) { come_call_finalizer(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value80) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value81) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value82) { come_call_finalizer(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value83) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value88) { come_call_finalizer(list$1sTypephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values2___83[0]=come_increment_ref_count(((char*)(right_value89=__builtin_string("count"))));
__list_values2___83[1]=come_increment_ref_count(((char*)(right_value90=__builtin_string("size"))));
__list_values2___83[2]=come_increment_ref_count(((char*)(right_value91=__builtin_string("sname"))));
__list_values2___83[3]=come_increment_ref_count(((char*)(right_value92=__builtin_string("sline"))));
}        param_names_88=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value97=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value96=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 584)))),4,__list_values2___83))));
        if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
        if(right_value90) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0); }
        if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
        if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
        if(right_value97) { come_call_finalizer(list$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_89=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value99=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value98=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 585))))))));
        if(right_value99) { come_call_finalizer(list$1charphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0); }
        list$1charphp_push_back(param_default_parametors_89,((void*)0));
        list$1charphp_push_back(param_default_parametors_89,((void*)0));
        list$1charphp_push_back(param_default_parametors_89,(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string("null")))));
        if(right_value100) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0); }
        list$1charphp_push_back(param_default_parametors_89,(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string("0")))));
        if(right_value101) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0); }
        main_fun_90=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value104=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value102=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 594)))),(char*)come_increment_ref_count(name_75),(struct sType*)come_increment_ref_count(result_type_76),(struct list$1sTypeph*)come_increment_ref_count(param_types_82),(struct list$1charph*)come_increment_ref_count(param_names_88),(struct list$1charph*)come_increment_ref_count(param_default_parametors_89),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline)")))),info))));
        if(right_value102) { come_call_finalizer(sFun_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value103) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0); }
        if(right_value104) { come_call_finalizer(sFun_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string(name_75)))),(struct sFun*)come_increment_ref_count(main_fun_90));
        if(right_value111) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0); }
        if(name_75) { name_75 = come_decrement_ref_count(name_75, (void*)0, (void*)0, 0, 0); }
        if(result_type_76) { come_call_finalizer(sType_finalize,result_type_76, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_82) { come_call_finalizer(list$1sTypephp_finalize,param_types_82, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_88) { come_call_finalizer(list$1charphp_finalize,param_names_88, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_89) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_89, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_90) { come_call_finalizer(sFun_finalize,main_fun_90, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_131=(char*)come_increment_ref_count(((char*)(right_value112=__builtin_string("come_increment_ref_count"))));
        if(right_value112) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0); }
        result_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value113=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 600)))),"void*",info,(_Bool)0))));
        if(right_value113) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value114) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values3___133[0]=come_increment_ref_count(((struct sType*)(right_value116=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value115=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 601)))),"void*",info,(_Bool)0))));
}        param_types_134=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value118=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value117=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 601)))),1,__list_values3___133))));
        if(right_value115) { come_call_finalizer(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value116) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value118) { come_call_finalizer(list$1sTypephp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values4___135[0]=come_increment_ref_count(((char*)(right_value119=__builtin_string("mem"))));
}        param_names_136=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 602)))),1,__list_values4___135))));
        if(right_value119) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0); }
        if(right_value121) { come_call_finalizer(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_137=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 603))))))));
        if(right_value123) { come_call_finalizer(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_138=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value126=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value124=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 608)))),(char*)come_increment_ref_count(name_131),(struct sType*)come_increment_ref_count(result_type_132),(struct list$1sTypeph*)come_increment_ref_count(param_types_134),(struct list$1charph*)come_increment_ref_count(param_names_136),(struct list$1charph*)come_increment_ref_count(param_default_parametors_137),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string("void* come_increment_ref_count(void* mem)")))),info))));
        if(right_value124) { come_call_finalizer(sFun_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value125) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0); }
        if(right_value126) { come_call_finalizer(sFun_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(name_131)))),(struct sFun*)come_increment_ref_count(main_fun_138));
        if(right_value127) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0); }
        if(name_131) { name_131 = come_decrement_ref_count(name_131, (void*)0, (void*)0, 0, 0); }
        if(result_type_132) { come_call_finalizer(sType_finalize,result_type_132, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_134) { come_call_finalizer(list$1sTypephp_finalize,param_types_134, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_136) { come_call_finalizer(list$1charphp_finalize,param_names_136, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_137) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_137, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_138) { come_call_finalizer(sFun_finalize,main_fun_138, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_139=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string("come_call_finalizer"))));
        if(right_value128) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0); }
        result_type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 614)))),"void",info,(_Bool)0))));
        if(right_value129) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value130) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values5___141[0]=come_increment_ref_count(((struct sType*)(right_value132=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value131=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 615)))),"void*",info,(_Bool)0))));
__list_values5___141[1]=come_increment_ref_count(((struct sType*)(right_value134=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 615)))),"void*",info,(_Bool)0))));
__list_values5___141[2]=come_increment_ref_count(((struct sType*)(right_value136=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value135=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 615)))),"void*",info,(_Bool)0))));
__list_values5___141[3]=come_increment_ref_count(((struct sType*)(right_value138=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value137=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 615)))),"void*",info,(_Bool)0))));
__list_values5___141[4]=come_increment_ref_count(((struct sType*)(right_value140=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 615)))),"int",info,(_Bool)0))));
__list_values5___141[5]=come_increment_ref_count(((struct sType*)(right_value142=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value141=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 615)))),"int",info,(_Bool)0))));
__list_values5___141[6]=come_increment_ref_count(((struct sType*)(right_value144=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value143=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 615)))),"int",info,(_Bool)0))));
}        param_types_142=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value146=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value145=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 615)))),7,__list_values5___141))));
        if(right_value131) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value132) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value133) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value134) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value135) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value136) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value137) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value138) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value139) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value140) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value141) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value142) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value143) { come_call_finalizer(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value144) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value146) { come_call_finalizer(list$1sTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values6___143[0]=come_increment_ref_count(((char*)(right_value147=__builtin_string("fun"))));
__list_values6___143[1]=come_increment_ref_count(((char*)(right_value148=__builtin_string("mem"))));
__list_values6___143[2]=come_increment_ref_count(((char*)(right_value149=__builtin_string("protocol_fun"))));
__list_values6___143[3]=come_increment_ref_count(((char*)(right_value150=__builtin_string("protocol_obj"))));
__list_values6___143[4]=come_increment_ref_count(((char*)(right_value151=__builtin_string("call_finalizer_only"))));
__list_values6___143[5]=come_increment_ref_count(((char*)(right_value152=__builtin_string("no_decrement"))));
__list_values6___143[6]=come_increment_ref_count(((char*)(right_value153=__builtin_string("no_free"))));
}        param_names_144=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value155=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value154=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 616)))),7,__list_values6___143))));
        if(right_value147) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0); }
        if(right_value148) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0); }
        if(right_value149) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0); }
        if(right_value150) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0); }
        if(right_value151) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0); }
        if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
        if(right_value153) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0); }
        if(right_value155) { come_call_finalizer(list$1charphp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_145=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value157=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value156=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 617))))))));
        if(right_value157) { come_call_finalizer(list$1charphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_146=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value160=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value158=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 622)))),(char*)come_increment_ref_count(name_139),(struct sType*)come_increment_ref_count(result_type_140),(struct list$1sTypeph*)come_increment_ref_count(param_types_142),(struct list$1charph*)come_increment_ref_count(param_names_144),(struct list$1charph*)come_increment_ref_count(param_default_parametors_145),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string("")))),info))));
        if(right_value158) { come_call_finalizer(sFun_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value159) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0); }
        if(right_value160) { come_call_finalizer(sFun_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string(name_139)))),(struct sFun*)come_increment_ref_count(main_fun_146));
        if(right_value161) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0); }
        if(name_139) { name_139 = come_decrement_ref_count(name_139, (void*)0, (void*)0, 0, 0); }
        if(result_type_140) { come_call_finalizer(sType_finalize,result_type_140, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_142) { come_call_finalizer(list$1sTypephp_finalize,param_types_142, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_144) { come_call_finalizer(list$1charphp_finalize,param_names_144, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_145) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_145, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_146) { come_call_finalizer(sFun_finalize,main_fun_146, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_147=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string("come_decrement_ref_count"))));
        if(right_value162) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0); }
        result_type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 628)))),"void*",info,(_Bool)0))));
        if(right_value163) { come_call_finalizer(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value164) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values7___149[0]=come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 629)))),"void*",info,(_Bool)0))));
__list_values7___149[1]=come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 629)))),"void*",info,(_Bool)0))));
__list_values7___149[2]=come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 629)))),"void*",info,(_Bool)0))));
__list_values7___149[3]=come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 629)))),"bool",info,(_Bool)0))));
__list_values7___149[4]=come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 629)))),"bool",info,(_Bool)0))));
}        param_types_150=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value176=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value175=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 629)))),5,__list_values7___149))));
        if(right_value165) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value166) { come_call_finalizer(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value167) { come_call_finalizer(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value168) { come_call_finalizer(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value169) { come_call_finalizer(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value170) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value171) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value172) { come_call_finalizer(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value173) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value174) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value176) { come_call_finalizer(list$1sTypephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values8___151[0]=come_increment_ref_count(((char*)(right_value177=__builtin_string("mem"))));
__list_values8___151[1]=come_increment_ref_count(((char*)(right_value178=__builtin_string("protocol_fun"))));
__list_values8___151[2]=come_increment_ref_count(((char*)(right_value179=__builtin_string("protocol_obj"))));
__list_values8___151[3]=come_increment_ref_count(((char*)(right_value180=__builtin_string("no_decrement"))));
__list_values8___151[4]=come_increment_ref_count(((char*)(right_value181=__builtin_string("no_free"))));
}        param_names_152=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value183=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value182=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 630)))),5,__list_values8___151))));
        if(right_value177) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0); }
        if(right_value178) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0); }
        if(right_value179) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0); }
        if(right_value180) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0); }
        if(right_value181) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0); }
        if(right_value183) { come_call_finalizer(list$1charphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_153=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value185=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value184=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 631))))))));
        if(right_value185) { come_call_finalizer(list$1charphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_154=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value188=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value186=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 636)))),(char*)come_increment_ref_count(name_147),(struct sType*)come_increment_ref_count(result_type_148),(struct list$1sTypeph*)come_increment_ref_count(param_types_150),(struct list$1charph*)come_increment_ref_count(param_names_152),(struct list$1charph*)come_increment_ref_count(param_default_parametors_153),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),info))));
        if(right_value186) { come_call_finalizer(sFun_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value187) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0); }
        if(right_value188) { come_call_finalizer(sFun_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string(name_147)))),(struct sFun*)come_increment_ref_count(main_fun_154));
        if(right_value189) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0); }
        if(name_147) { name_147 = come_decrement_ref_count(name_147, (void*)0, (void*)0, 0, 0); }
        if(result_type_148) { come_call_finalizer(sType_finalize,result_type_148, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_150) { come_call_finalizer(list$1sTypephp_finalize,param_types_150, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_152) { come_call_finalizer(list$1charphp_finalize,param_names_152, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_153) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_153, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_154) { come_call_finalizer(sFun_finalize,main_fun_154, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_155=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string("come_free_object"))));
        if(right_value190) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0); }
        result_type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value191=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 642)))),"void",info,(_Bool)0))));
        if(right_value191) { come_call_finalizer(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value192) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values9___157[0]=come_increment_ref_count(((struct sType*)(right_value194=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 643)))),"void*",info,(_Bool)0))));
}        param_types_158=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value196=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value195=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 643)))),1,__list_values9___157))));
        if(right_value193) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value194) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value196) { come_call_finalizer(list$1sTypephp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values10___159[0]=come_increment_ref_count(((char*)(right_value197=__builtin_string("mem"))));
}        param_names_160=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value199=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value198=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 644)))),1,__list_values10___159))));
        if(right_value197) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0); }
        if(right_value199) { come_call_finalizer(list$1charphp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_161=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value200=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 645))))))));
        if(right_value201) { come_call_finalizer(list$1charphp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_162=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value204=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value202=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 650)))),(char*)come_increment_ref_count(name_155),(struct sType*)come_increment_ref_count(result_type_156),(struct list$1sTypeph*)come_increment_ref_count(param_types_158),(struct list$1charph*)come_increment_ref_count(param_names_160),(struct list$1charph*)come_increment_ref_count(param_default_parametors_161),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string("void come_free_object(void* mem)")))),info))));
        if(right_value202) { come_call_finalizer(sFun_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value203) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0); }
        if(right_value204) { come_call_finalizer(sFun_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string(name_155)))),(struct sFun*)come_increment_ref_count(main_fun_162));
        if(right_value205) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0); }
        if(name_155) { name_155 = come_decrement_ref_count(name_155, (void*)0, (void*)0, 0, 0); }
        if(result_type_156) { come_call_finalizer(sType_finalize,result_type_156, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_158) { come_call_finalizer(list$1sTypephp_finalize,param_types_158, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_160) { come_call_finalizer(list$1charphp_finalize,param_names_160, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_161) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_161, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_162) { come_call_finalizer(sFun_finalize,main_fun_162, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_163=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string("come_memdup"))));
        if(right_value206) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0); }
        result_type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value207=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 656)))),"void*",info,(_Bool)0))));
        if(right_value207) { come_call_finalizer(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value208) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values11___165[0]=come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 657)))),"void*",info,(_Bool)0))));
__list_values11___165[1]=come_increment_ref_count(((struct sType*)(right_value212=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 657)))),"char*",info,(_Bool)0))));
__list_values11___165[2]=come_increment_ref_count(((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 657)))),"int",info,(_Bool)0))));
}        param_types_166=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value216=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value215=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 657)))),3,__list_values11___165))));
        if(right_value209) { come_call_finalizer(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value210) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value211) { come_call_finalizer(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value212) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value213) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value214) { come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value216) { come_call_finalizer(list$1sTypephp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values12___167[0]=come_increment_ref_count(((char*)(right_value217=__builtin_string("block"))));
__list_values12___167[1]=come_increment_ref_count(((char*)(right_value218=__builtin_string("sname"))));
__list_values12___167[2]=come_increment_ref_count(((char*)(right_value219=__builtin_string("sline"))));
}        param_names_168=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value221=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value220=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 658)))),3,__list_values12___167))));
        if(right_value217) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0); }
        if(right_value218) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0); }
        if(right_value219) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0); }
        if(right_value221) { come_call_finalizer(list$1charphp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_169=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value223=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value222=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 659))))))));
        if(right_value223) { come_call_finalizer(list$1charphp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0); }
        list$1charphp_push_back(param_default_parametors_169,((void*)0));
        list$1charphp_push_back(param_default_parametors_169,(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string("null")))));
        if(right_value224) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0); }
        list$1charphp_push_back(param_default_parametors_169,(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string("0")))));
        if(right_value225) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0); }
        main_fun_170=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value228=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value226=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 667)))),(char*)come_increment_ref_count(name_163),(struct sType*)come_increment_ref_count(result_type_164),(struct list$1sTypeph*)come_increment_ref_count(param_types_166),(struct list$1charph*)come_increment_ref_count(param_names_168),(struct list$1charph*)come_increment_ref_count(param_default_parametors_169),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string("void* come_memdup(void* block, char* sname, int sline)")))),info))));
        if(right_value226) { come_call_finalizer(sFun_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value227) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0); }
        if(right_value228) { come_call_finalizer(sFun_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string(name_163)))),(struct sFun*)come_increment_ref_count(main_fun_170));
        if(right_value229) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0); }
        if(name_163) { name_163 = come_decrement_ref_count(name_163, (void*)0, (void*)0, 0, 0); }
        if(result_type_164) { come_call_finalizer(sType_finalize,result_type_164, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_166) { come_call_finalizer(list$1sTypephp_finalize,param_types_166, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_168) { come_call_finalizer(list$1charphp_finalize,param_names_168, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_169) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_169, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_170) { come_call_finalizer(sFun_finalize,main_fun_170, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_171=(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string("__builtin_string"))));
        if(right_value230) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0); }
        result_type_172=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 673)))),"char*",info,(_Bool)0))));
        if(right_value231) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value232) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values13___173[0]=come_increment_ref_count(((struct sType*)(right_value234=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value233=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 674)))),"char*",info,(_Bool)0))));
}        param_types_174=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value236=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value235=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 674)))),1,__list_values13___173))));
        if(right_value233) { come_call_finalizer(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value234) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value236) { come_call_finalizer(list$1sTypephp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values14___175[0]=come_increment_ref_count(((char*)(right_value237=__builtin_string("str"))));
}        param_names_176=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value239=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value238=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 675)))),1,__list_values14___175))));
        if(right_value237) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0); }
        if(right_value239) { come_call_finalizer(list$1charphp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_177=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value241=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value240=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 676))))))));
        if(right_value241) { come_call_finalizer(list$1charphp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_178=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value244=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value242=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 681)))),(char*)come_increment_ref_count(name_171),(struct sType*)come_increment_ref_count(result_type_172),(struct list$1sTypeph*)come_increment_ref_count(param_types_174),(struct list$1charph*)come_increment_ref_count(param_names_176),(struct list$1charph*)come_increment_ref_count(param_default_parametors_177),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string("char* __builtin_string(char* str)")))),info))));
        if(right_value242) { come_call_finalizer(sFun_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value243) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0); }
        if(right_value244) { come_call_finalizer(sFun_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(name_171)))),(struct sFun*)come_increment_ref_count(main_fun_178));
        if(right_value245) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0); }
        if(name_171) { name_171 = come_decrement_ref_count(name_171, (void*)0, (void*)0, 0, 0); }
        if(result_type_172) { come_call_finalizer(sType_finalize,result_type_172, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_174) { come_call_finalizer(list$1sTypephp_finalize,param_types_174, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_176) { come_call_finalizer(list$1charphp_finalize,param_names_176, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_177) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_177, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_178) { come_call_finalizer(sFun_finalize,main_fun_178, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_179=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string("come_heap_init"))));
        if(right_value246) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0); }
        result_type_180=(struct sType*)come_increment_ref_count(((struct sType*)(right_value248=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value247=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 687)))),"void",info,(_Bool)0))));
        if(right_value247) { come_call_finalizer(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value248) { come_call_finalizer(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0); }
        param_types_181=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value250=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value249=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 688))))))));
        if(right_value250) { come_call_finalizer(list$1sTypephp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0); }
        param_names_182=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value252=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value251=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 689))))))));
        if(right_value252) { come_call_finalizer(list$1charphp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_183=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value254=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value253=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 690))))))));
        if(right_value254) { come_call_finalizer(list$1charphp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_184=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value257=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value255=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 695)))),(char*)come_increment_ref_count(name_179),(struct sType*)come_increment_ref_count(result_type_180),(struct list$1sTypeph*)come_increment_ref_count(param_types_181),(struct list$1charph*)come_increment_ref_count(param_names_182),(struct list$1charph*)come_increment_ref_count(param_default_parametors_183),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string("come_heap_init()")))),info))));
        if(right_value255) { come_call_finalizer(sFun_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value256) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0); }
        if(right_value257) { come_call_finalizer(sFun_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string(name_179)))),(struct sFun*)come_increment_ref_count(main_fun_184));
        if(right_value258) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0); }
        if(name_179) { name_179 = come_decrement_ref_count(name_179, (void*)0, (void*)0, 0, 0); }
        if(result_type_180) { come_call_finalizer(sType_finalize,result_type_180, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_181) { come_call_finalizer(list$1sTypephp_finalize,param_types_181, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_182) { come_call_finalizer(list$1charphp_finalize,param_names_182, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_183) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_183, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_184) { come_call_finalizer(sFun_finalize,main_fun_184, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_185=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string("come_heap_final"))));
        if(right_value259) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0); }
        result_type_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 701)))),"void",info,(_Bool)0))));
        if(right_value260) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value261) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values15___187[0]=come_increment_ref_count(((struct sType*)(right_value263=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 702)))),"bool",info,(_Bool)0))));
}        param_types_188=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value265=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value264=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 702)))),1,__list_values15___187))));
        if(right_value262) { come_call_finalizer(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value263) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value265) { come_call_finalizer(list$1sTypephp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values16___189[0]=come_increment_ref_count(((char*)(right_value266=__builtin_string("check_mem_leak"))));
}        param_names_190=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value268=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value267=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 703)))),1,__list_values16___189))));
        if(right_value266) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0); }
        if(right_value268) { come_call_finalizer(list$1charphp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_191=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value270=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value269=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 704))))))));
        if(right_value270) { come_call_finalizer(list$1charphp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_192=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value273=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value271=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 709)))),(char*)come_increment_ref_count(name_185),(struct sType*)come_increment_ref_count(result_type_186),(struct list$1sTypeph*)come_increment_ref_count(param_types_188),(struct list$1charph*)come_increment_ref_count(param_names_190),(struct list$1charph*)come_increment_ref_count(param_default_parametors_191),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string("void come_heap_final(bool check_mem_leak)")))),info))));
        if(right_value271) { come_call_finalizer(sFun_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value272) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0); }
        if(right_value273) { come_call_finalizer(sFun_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value274=__builtin_string(name_185)))),(struct sFun*)come_increment_ref_count(main_fun_192));
        if(right_value274) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0); }
        if(name_185) { name_185 = come_decrement_ref_count(name_185, (void*)0, (void*)0, 0, 0); }
        if(result_type_186) { come_call_finalizer(sType_finalize,result_type_186, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_188) { come_call_finalizer(list$1sTypephp_finalize,param_types_188, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_190) { come_call_finalizer(list$1charphp_finalize,param_names_190, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_191) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_191, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_192) { come_call_finalizer(sFun_finalize,main_fun_192, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_193=(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string("come_null_check"))));
        if(right_value275) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0); }
        result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value276=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715)))),"void*",info,(_Bool)0))));
        if(right_value276) { come_call_finalizer(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value277) { come_call_finalizer(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values17___195[0]=come_increment_ref_count(((struct sType*)(right_value279=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value278=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716)))),"void*",info,(_Bool)0))));
__list_values17___195[1]=come_increment_ref_count(((struct sType*)(right_value281=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value280=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716)))),"char*",info,(_Bool)0))));
__list_values17___195[2]=come_increment_ref_count(((struct sType*)(right_value283=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value282=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716)))),"int",info,(_Bool)0))));
}        param_types_196=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value285=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value284=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 716)))),3,__list_values17___195))));
        if(right_value278) { come_call_finalizer(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value279) { come_call_finalizer(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value280) { come_call_finalizer(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value281) { come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value282) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value283) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value285) { come_call_finalizer(list$1sTypephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values18___197[0]=come_increment_ref_count(((char*)(right_value286=__builtin_string("mem"))));
__list_values18___197[1]=come_increment_ref_count(((char*)(right_value287=__builtin_string("sname"))));
__list_values18___197[2]=come_increment_ref_count(((char*)(right_value288=__builtin_string("sline"))));
}        param_names_198=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value290=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value289=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 717)))),3,__list_values18___197))));
        if(right_value286) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0); }
        if(right_value287) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0); }
        if(right_value288) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0); }
        if(right_value290) { come_call_finalizer(list$1charphp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_199=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value292=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value291=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 718))))))));
        if(right_value292) { come_call_finalizer(list$1charphp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_200=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value295=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value293=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 723)))),(char*)come_increment_ref_count(name_193),(struct sType*)come_increment_ref_count(result_type_194),(struct list$1sTypeph*)come_increment_ref_count(param_types_196),(struct list$1charph*)come_increment_ref_count(param_names_198),(struct list$1charph*)come_increment_ref_count(param_default_parametors_199),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string("void* come_null_check(void* mem, char* sname, int sline)")))),info))));
        if(right_value293) { come_call_finalizer(sFun_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value294) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0); }
        if(right_value295) { come_call_finalizer(sFun_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string(name_193)))),(struct sFun*)come_increment_ref_count(main_fun_200));
        if(right_value296) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0); }
        if(name_193) { name_193 = come_decrement_ref_count(name_193, (void*)0, (void*)0, 0, 0); }
        if(result_type_194) { come_call_finalizer(sType_finalize,result_type_194, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_196) { come_call_finalizer(list$1sTypephp_finalize,param_types_196, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_198) { come_call_finalizer(list$1charphp_finalize,param_names_198, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_199) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_199, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_200) { come_call_finalizer(sFun_finalize,main_fun_200, (void*)0, (void*)0, 0, 0, 0); }
    }
    while(*info->p) {
        parse_sharp_v5(info);
        head_201=info->p;
        head_sline_202=info->sline;
        buf_203=(char*)come_increment_ref_count(((char*)(right_value297=parse_word(info))));
        if(right_value297) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0); }
        parse_sharp_v5(info);
        node_204=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=top_level_v99((char*)come_increment_ref_count(buf_203),head_201,head_sline_202,info))));
        if(right_value298) { right_value298 = come_decrement_ref_count(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0); } 
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(node_204!=((void*)0)) {
            if(!node_204->compile(node_204->_protocol_obj,info)) {
                err_msg(info,"compiling is faield(X)");
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(buf_203) { buf_203 = come_decrement_ref_count(buf_203, (void*)0, (void*)0, 0, 0); }
        if(node_204) { node_204 = come_decrement_ref_count(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0); } 
    }
    int __result73__ = 0;
    return __result73__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
int i_78;
memset(&i_78, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_78=0;
            i_78<num_value;
            i_78++
            ){
                list$1sTypephp_push_back(self,values[i_78]);
            }
            struct list$1sTypeph* __result57__ = self;
            if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result57__;
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value84;
struct list_item$1sTypeph* litem_79;
struct sType* __dec_obj51;
void* right_value85;
struct list_item$1sTypeph* litem_80;
struct sType* __dec_obj52;
void* right_value86;
struct list_item$1sTypeph* litem_81;
struct sType* __dec_obj53;
memset(&right_value84, 0, sizeof(void*));
memset(&litem_79, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value85, 0, sizeof(void*));
memset(&litem_80, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value86, 0, sizeof(void*));
memset(&litem_81, 0, sizeof(struct list_item$1sTypeph*));
                    if(self->len==0) {
                        litem_79=((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function2.c", 591)));
                        litem_79->prev=((void*)0);
                        litem_79->next=((void*)0);
                        __dec_obj51=litem_79->item;
                        litem_79->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0); }
                        self->tail=litem_79;
                        self->head=litem_79;
                    }
                    else if(self->len==1) {
                        litem_80=((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function2.c", 601)));
                        litem_80->prev=self->head;
                        litem_80->next=((void*)0);
                        __dec_obj52=litem_80->item;
                        litem_80->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0); }
                        self->tail=litem_80;
                        self->head->next=litem_80;
                    }
                    else {
                        litem_81=((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function2.c", 611)));
                        litem_81->prev=self->tail;
                        litem_81->next=((void*)0);
                        __dec_obj53=litem_81->item;
                        litem_81->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0); }
                        self->tail->next=litem_81;
                        self->tail=litem_81;
                    }
                    self->len++;
                    if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
int i_84;
memset(&i_84, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_84=0;
            i_84<num_value;
            i_84++
            ){
                list$1charphp_push_back(self,values[i_84]);
            }
            struct list$1charph* __result58__ = self;
            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result58__;
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value93;
struct list_item$1charph* litem_85;
char* __dec_obj54;
void* right_value94;
struct list_item$1charph* litem_86;
char* __dec_obj55;
void* right_value95;
struct list_item$1charph* litem_87;
char* __dec_obj56;
memset(&right_value93, 0, sizeof(void*));
memset(&litem_85, 0, sizeof(struct list_item$1charph*));
memset(&right_value94, 0, sizeof(void*));
memset(&litem_86, 0, sizeof(struct list_item$1charph*));
memset(&right_value95, 0, sizeof(void*));
memset(&litem_87, 0, sizeof(struct list_item$1charph*));
                    if(self->len==0) {
                        litem_85=((struct list_item$1charph*)(right_value93=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function2.c", 592)));
                        litem_85->prev=((void*)0);
                        litem_85->next=((void*)0);
                        __dec_obj54=litem_85->item;
                        litem_85->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
                        self->tail=litem_85;
                        self->head=litem_85;
                    }
                    else if(self->len==1) {
                        litem_86=((struct list_item$1charph*)(right_value94=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function2.c", 602)));
                        litem_86->prev=self->head;
                        litem_86->next=((void*)0);
                        __dec_obj55=litem_86->item;
                        litem_86->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
                        self->tail=litem_86;
                        self->head->next=litem_86;
                    }
                    else {
                        litem_87=((struct list_item$1charph*)(right_value95=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function2.c", 612)));
                        litem_87->prev=self->tail;
                        litem_87->next=((void*)0);
                        __dec_obj56=litem_87->item;
                        litem_87->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
                        self->tail->next=litem_87;
                        self->tail=litem_87;
                    }
                    self->len++;
                    if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static void map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
int hash_106;
int it_107;
_Bool same_key_exist_124;
char* it2_126;
memset(&hash_106, 0, sizeof(int));
memset(&it_107, 0, sizeof(int));
memset(&same_key_exist_124, 0, sizeof(_Bool));
memset(&it2_126, 0, sizeof(char*));
            if(self->len*10>=self->size) {
                map$2charphsFunphp_rehash(self);
            }
            hash_106=string_get_hash_key(key)%self->size;
            it_107=hash_106;
            while((_Bool)1) {
                if(self->item_existance[it_107]) {
                    if(charp_equals(self->keys[it_107],key)) {
                        if(1) {
                            list$1charpp_remove(self->key_list,self->keys[it_107]);
                            if(self->keys[it_107]) { self->keys[it_107] = come_decrement_ref_count(self->keys[it_107], (void*)0, (void*)0, 0, 0); }
                            self->keys[it_107]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charpp_remove(self->key_list,self->keys[it_107]);
                            self->keys[it_107]=key;
                        }
                        if(1) {
                            if(self->items[it_107]) { come_call_finalizer(sFunp_finalize,self->items[it_107], (void*)0, (void*)0, 0, 0, 0); }
                            self->items[it_107]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_107]=item;
                        }
                        break;
                    }
                    it_107++;
                    if(it_107>=self->size) {
                        it_107=0;
                    }
                    else if(it_107==hash_106) {
                        printf("unexpected error in map.insert\n");
                        exit(2);
                    }
                }
                else {
                    self->item_existance[it_107]=(_Bool)1;
                    if(1) {
                        self->keys[it_107]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_107]=key;
                    }
                    if(1) {
                        self->items[it_107]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_107]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_124=(_Bool)0;
            for(
            it2_126=list$1charpp_begin(self->key_list);
            !list$1charpp_end(self->key_list);
            it_107=list$1charpp_next(self->key_list)
            ){
                if(charp_equals(it2_126,key)) {
                    same_key_exist_124=(_Bool)1;
                }
            }
            if(!same_key_exist_124) {
                list$1charpp_push_back(self->key_list,key);
            }
            if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
            if(item) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self){
int size_91;
void* right_value105;
char** keys_92;
void* right_value106;
struct sFun** items_93;
void* right_value107;
_Bool* item_existance_94;
int len_95;
char* it_97;
struct sFun* default_value_99;
struct sFun* it2_102;
int hash_103;
int n_104;
struct sFun* default_value_105;
memset(&size_91, 0, sizeof(int));
memset(&right_value105, 0, sizeof(void*));
memset(&keys_92, 0, sizeof(char**));
memset(&right_value106, 0, sizeof(void*));
memset(&items_93, 0, sizeof(struct sFun**));
memset(&right_value107, 0, sizeof(void*));
memset(&item_existance_94, 0, sizeof(_Bool*));
memset(&len_95, 0, sizeof(int));
memset(&it_97, 0, sizeof(char*));
memset(&default_value_99, 0, sizeof(struct sFun*)); /* bbb */
memset(&it2_102, 0, sizeof(struct sFun*));
memset(&hash_103, 0, sizeof(int));
memset(&n_104, 0, sizeof(int));
memset(&default_value_105, 0, sizeof(struct sFun*)); /* bbb */
                    size_91=self->size*10;
                    keys_92=((char**)(right_value105=(char**)come_calloc(1, sizeof(char*)*(1*(size_91)), "05function2.c", 600)));
                    items_93=((struct sFun**)(right_value106=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_91)), "05function2.c", 601)));
                    item_existance_94=((_Bool*)(right_value107=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_91)), "05function2.c", 602)));
                    len_95=0;
                    for(
                    it_97=map$2charphsFunphp_begin(self);
                    !map$2charphsFunphp_end(self);
                    it_97=map$2charphsFunphp_next(self)
                    ){
                        it2_102=map$2charphsFunphp_at(self,it_97,default_value_99);
                        hash_103=charp_get_hash_key(it_97)%size_91;
                        n_104=hash_103;
                        while((_Bool)1) {
                            if(item_existance_94[n_104]) {
                                n_104++;
                                if(n_104>=size_91) {
                                    n_104=0;
                                }
                                else if(n_104==hash_103) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    exit(2);
                                }
                            }
                            else {
                                item_existance_94[n_104]=(_Bool)1;
                                keys_92[n_104]=it_97;
                                items_93[n_104]=map$2charphsFunphp_at(self,it_97,default_value_105);
                                len_95++;
                                break;
                            }
                        }
                    }
                    come_free_object((char*)self->items);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                    come_free_object((char*)self->keys);
                    self->keys=keys_92;
                    self->items=items_93;
                    self->item_existance=item_existance_94;
                    self->size=size_91;
                    self->len=len_95;
}

static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self){
char* result_96;
memset(&result_96, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            char* __result59__ = self->key_list->it->item;
                            return __result59__;
                        }
                        memset(&result_96,0,sizeof(char*));
                        char* __result60__ = result_96;
                        return __result60__;
}

static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self){
                        _Bool __result61__ = self->key_list->it==((void*)0);
                        return __result61__;
}

static char* map$2charphsFunphp_next(struct map$2charphsFunph* self){
char* result_98;
memset(&result_98, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            char* __result62__ = self->key_list->it->item;
                            return __result62__;
                        }
                        memset(&result_98,0,sizeof(char*));
                        char* __result63__ = result_98;
                        return __result63__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_100;
int it_101;
memset(&hash_100, 0, sizeof(int));
memset(&it_101, 0, sizeof(int));
                            hash_100=string_get_hash_key(((char*)key))%self->size;
                            it_101=hash_100;
                            while((_Bool)1) {
                                if(self->item_existance[it_101]) {
                                    if(charp_equals(self->keys[it_101],key)) {
                                        struct sFun* __result64__ = self->items[it_101];
                                        return __result64__;
                                    }
                                    it_101++;
                                    if(it_101>=self->size) {
                                        it_101=0;
                                    }
                                    else if(it_101==hash_100) {
                                        struct sFun* __result65__ = default_value;
                                        return __result65__;
                                    }
                                }
                                else {
                                    struct sFun* __result66__ = default_value;
                                    return __result66__;
                                }
                            }
                            struct sFun* __result67__ = default_value;
                            return __result67__;
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_108;
struct list_item$1charp* it_109;
memset(&it2_108, 0, sizeof(int));
memset(&it_109, 0, sizeof(struct list_item$1charp*));
                                it2_108=0;
                                it_109=self->head;
                                while(it_109!=((void*)0)) {
                                    if(charp_equals(it_109->item,item)) {
                                        list$1charpp_delete(self,it2_108,it2_108+1);
                                        break;
                                    }
                                    it2_108++;
                                    it_109=it_109->next;
                                }
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_110;
struct list_item$1charp* it_113;
int i_114;
struct list_item$1charp* prev_it_115;
struct list_item$1charp* it_116;
int i_117;
struct list_item$1charp* prev_it_118;
struct list_item$1charp* it_119;
struct list_item$1charp* head_prev_it_120;
struct list_item$1charp* tail_it_121;
int i_122;
struct list_item$1charp* prev_it_123;
memset(&tmp_110, 0, sizeof(int));
memset(&it_113, 0, sizeof(struct list_item$1charp*));
memset(&i_114, 0, sizeof(int));
memset(&prev_it_115, 0, sizeof(struct list_item$1charp*));
memset(&it_116, 0, sizeof(struct list_item$1charp*));
memset(&i_117, 0, sizeof(int));
memset(&prev_it_118, 0, sizeof(struct list_item$1charp*));
memset(&it_119, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_120, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_121, 0, sizeof(struct list_item$1charp*));
memset(&i_122, 0, sizeof(int));
memset(&prev_it_123, 0, sizeof(struct list_item$1charp*));
                                            if(head<0) {
                                                head+=self->len;
                                            }
                                            if(tail<0) {
                                                tail+=self->len+1;
                                            }
                                            if(head>tail) {
                                                tmp_110=tail;
                                                tail=head;
                                                head=tmp_110;
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
                                                list$1charpp_reset(self);
                                            }
                                            else if(head==0) {
                                                it_113=self->head;
                                                i_114=0;
                                                while(it_113!=((void*)0)) {
                                                    if(i_114<tail) {
                                                        prev_it_115=it_113;
                                                        it_113=it_113->next;
                                                        i_114++;
                                                        if(prev_it_115) { come_call_finalizer(list_item$1charpp_finalize,prev_it_115, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else if(i_114==tail) {
                                                        self->head=it_113;
                                                        self->head->prev=((void*)0);
                                                        break;
                                                    }
                                                    else {
                                                        it_113=it_113->next;
                                                        i_114++;
                                                    }
                                                }
                                            }
                                            else if(tail==self->len) {
                                                it_116=self->head;
                                                i_117=0;
                                                while(it_116!=((void*)0)) {
                                                    if(i_117==head) {
                                                        self->tail=it_116->prev;
                                                        self->tail->next=((void*)0);
                                                    }
                                                    if(i_117>=head) {
                                                        prev_it_118=it_116;
                                                        it_116=it_116->next;
                                                        i_117++;
                                                        if(prev_it_118) { come_call_finalizer(list_item$1charpp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        it_116=it_116->next;
                                                        i_117++;
                                                    }
                                                }
                                            }
                                            else {
                                                it_119=self->head;
                                                head_prev_it_120=((void*)0);
                                                tail_it_121=((void*)0);
                                                i_122=0;
                                                while(it_119!=((void*)0)) {
                                                    if(i_122==head) {
                                                        head_prev_it_120=it_119->prev;
                                                    }
                                                    if(i_122==tail) {
                                                        tail_it_121=it_119;
                                                    }
                                                    if(i_122>=head&&i_122<tail) {
                                                        prev_it_123=it_119;
                                                        it_119=it_119->next;
                                                        i_122++;
                                                        if(prev_it_123) { come_call_finalizer(list_item$1charpp_finalize,prev_it_123, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        it_119=it_119->next;
                                                        i_122++;
                                                    }
                                                }
                                                if(head_prev_it_120!=((void*)0)) {
                                                    head_prev_it_120->next=tail_it_121;
                                                }
                                                if(tail_it_121!=((void*)0)) {
                                                    tail_it_121->prev=head_prev_it_120;
                                                }
                                            }
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_111;
struct list_item$1charp* prev_it_112;
memset(&it_111, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_112, 0, sizeof(struct list_item$1charp*));
                                                    it_111=self->head;
                                                    while(it_111!=((void*)0)) {
                                                        prev_it_112=it_111;
                                                        it_111=it_111->next;
                                                        if(prev_it_112) { come_call_finalizer(list_item$1charpp_finalize,prev_it_112, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
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
}

static char* list$1charpp_begin(struct list$1charp* self){
char* result_125;
memset(&result_125, 0, sizeof(char*)); /* bbb */
                self->it=self->head;
                if(self->it) {
                    char* __result68__ = self->it->item;
                    return __result68__;
                }
                memset(&result_125,0,sizeof(char*));
                char* __result69__ = result_125;
                return __result69__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
                _Bool __result70__ = self->it==((void*)0);
                return __result70__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_127;
memset(&result_127, 0, sizeof(char*)); /* bbb */
                self->it=self->it->next;
                if(self->it) {
                    char* __result71__ = self->it->item;
                    return __result71__;
                }
                memset(&result_127,0,sizeof(char*));
                char* __result72__ = result_127;
                return __result72__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value108;
struct list_item$1charp* litem_128;
void* right_value109;
struct list_item$1charp* litem_129;
void* right_value110;
struct list_item$1charp* litem_130;
memset(&right_value108, 0, sizeof(void*));
memset(&litem_128, 0, sizeof(struct list_item$1charp*));
memset(&right_value109, 0, sizeof(void*));
memset(&litem_129, 0, sizeof(struct list_item$1charp*));
memset(&right_value110, 0, sizeof(void*));
memset(&litem_130, 0, sizeof(struct list_item$1charp*));
                    if(self->len==0) {
                        litem_128=((struct list_item$1charp*)(right_value108=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "05function2.c", 669)));
                        litem_128->prev=((void*)0);
                        litem_128->next=((void*)0);
                        litem_128->item=item;
                        self->tail=litem_128;
                        self->head=litem_128;
                    }
                    else if(self->len==1) {
                        litem_129=((struct list_item$1charp*)(right_value109=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "05function2.c", 679)));
                        litem_129->prev=self->head;
                        litem_129->next=((void*)0);
                        litem_129->item=item;
                        self->tail=litem_129;
                        self->head->next=litem_129;
                    }
                    else {
                        litem_130=((struct list_item$1charp*)(right_value110=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "05function2.c", 689)));
                        litem_130->prev=self->tail;
                        litem_130->next=((void*)0);
                        litem_130->item=item;
                        self->tail->next=litem_130;
                        self->tail=litem_130;
                    }
                    self->len++;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool is_type_name_flag_205;
int sline_206;
_Bool define_struct_nobody_207;
char* p_208;
int sline_209;
void* right_value299;
char* word_210;
_Bool define_function_pointer_result_function_211;
char* p_212;
void* right_value300;
_Bool define_function_flag_213;
char* p_214;
_Bool invalid_type_215;
void* right_value301;
char* word_216;
void* right_value302;
char* __dec_obj57;
void* right_value303;
char* __dec_obj58;
void* right_value304;
char* __dec_obj59;
_Bool define_variable_217;
char* p_218;
void* right_value305;
void* right_value306;
char* word_219;
char* header_head_220;
void* right_value307;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* result_type_221;
char* fun_name_222;
_Bool err_223;
void* right_value308;
void* right_value309;
struct list$1sTypeph* param_types_224;
void* right_value310;
void* right_value311;
struct list$1charph* param_names_225;
void* right_value312;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* param_type_226;
char* param_name_227;
_Bool err_228;
static int num_function_pointer_result_var_name_a_229=0;
void* right_value313;
void* right_value314;
void* right_value315;
struct list$1sTypeph* param_types2_230;
void* right_value316;
void* right_value317;
struct list$1charph* param_names2_231;
void* right_value318;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* param_type_232;
char* param_name_233;
_Bool err_234;
static int num_function_pointer_result_var_name_b_235=0;
void* right_value319;
char* header_tail_236;
void* right_value320;
void* right_value321;
struct sType* result_type2_237;
void* right_value322;
void* right_value323;
struct tuple1$1sTypeph* __dec_obj61;
void* right_value324;
struct list$1sTypeph* __dec_obj62;
void* right_value325;
struct list$1charph* __dec_obj63;
_Bool var_args_238;
void* right_value326;
void* right_value327;
struct buffer* header_buf_239;
void* right_value328;
void* right_value329;
struct list$1charph* param_default_parametors_240;
void* right_value330;
void* right_value331;
void* right_value332;
void* right_value333;
struct sFun* fun_241;
void* right_value334;
struct sFun* fun2_243;
void* right_value335;
void* right_value336;
void* right_value337;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value377;
void* right_value378;
void* right_value379;
void* right_value380;
char* buf2_277;
void* right_value381;
memset(&is_type_name_flag_205, 0, sizeof(_Bool));
memset(&sline_206, 0, sizeof(int));
memset(&define_struct_nobody_207, 0, sizeof(_Bool));
memset(&p_208, 0, sizeof(char*));
memset(&sline_209, 0, sizeof(int));
memset(&right_value299, 0, sizeof(void*));
memset(&word_210, 0, sizeof(char*));
memset(&define_function_pointer_result_function_211, 0, sizeof(_Bool));
memset(&p_212, 0, sizeof(char*));
memset(&right_value300, 0, sizeof(void*));
memset(&define_function_flag_213, 0, sizeof(_Bool));
memset(&p_214, 0, sizeof(char*));
memset(&invalid_type_215, 0, sizeof(_Bool));
memset(&right_value301, 0, sizeof(void*));
memset(&word_216, 0, sizeof(char*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&define_variable_217, 0, sizeof(_Bool));
memset(&p_218, 0, sizeof(char*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&word_219, 0, sizeof(char*));
memset(&header_head_220, 0, sizeof(char*));
memset(&right_value307, 0, sizeof(void*));
memset(&result_type_221, 0, sizeof(struct sType*)); /* ccc */
memset(&fun_name_222, 0, sizeof(char*)); /* ccc */
memset(&err_223, 0, sizeof(_Bool)); /* ccc */
memset(&result_type_221, 0, sizeof(struct sType*)); /* eee */
memset(&fun_name_222, 0, sizeof(char*)); /* eee */
memset(&err_223, 0, sizeof(_Bool)); /* eee */
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&param_types_224, 0, sizeof(struct list$1sTypeph*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&param_names_225, 0, sizeof(struct list$1charph*));
memset(&right_value312, 0, sizeof(void*));
memset(&param_type_226, 0, sizeof(struct sType*)); /* ccc */
memset(&param_name_227, 0, sizeof(char*)); /* ccc */
memset(&err_228, 0, sizeof(_Bool)); /* ccc */
memset(&param_type_226, 0, sizeof(struct sType*)); /* eee */
memset(&param_name_227, 0, sizeof(char*)); /* eee */
memset(&err_228, 0, sizeof(_Bool)); /* eee */
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&param_types2_230, 0, sizeof(struct list$1sTypeph*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&param_names2_231, 0, sizeof(struct list$1charph*));
memset(&right_value318, 0, sizeof(void*));
memset(&param_type_232, 0, sizeof(struct sType*)); /* ccc */
memset(&param_name_233, 0, sizeof(char*)); /* ccc */
memset(&err_234, 0, sizeof(_Bool)); /* ccc */
memset(&param_type_232, 0, sizeof(struct sType*)); /* eee */
memset(&param_name_233, 0, sizeof(char*)); /* eee */
memset(&err_234, 0, sizeof(_Bool)); /* eee */
memset(&right_value319, 0, sizeof(void*));
memset(&header_tail_236, 0, sizeof(char*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&result_type2_237, 0, sizeof(struct sType*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&var_args_238, 0, sizeof(_Bool));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&header_buf_239, 0, sizeof(struct buffer*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&param_default_parametors_240, 0, sizeof(struct list$1charph*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&fun_241, 0, sizeof(struct sFun*));
memset(&right_value334, 0, sizeof(void*));
memset(&fun2_243, 0, sizeof(struct sFun*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&buf2_277, 0, sizeof(char*));
memset(&right_value381, 0, sizeof(void*));
    is_type_name_flag_205=is_type_name(buf,info);
    sline_206=info->sline;
    define_struct_nobody_207=(_Bool)0;
    {
        p_208=info->p;
        sline_209=info->sline;
        if(string_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                word_210=(char*)come_increment_ref_count(((char*)(right_value299=parse_word(info))));
                if(right_value299) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    define_struct_nobody_207=(_Bool)1;
                }
                if(word_210) { word_210 = come_decrement_ref_count(word_210, (void*)0, (void*)0, 0, 0); }
            }
        }
        info->p=head;
        info->sline=sline_209;
    }
    define_function_pointer_result_function_211=(_Bool)0;
    if(is_type_name_flag_205) {
        p_212=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            info->no_output_err=(_Bool)1;
            ((struct tuple3$3sTypephcharphbool*)(right_value300=parse_type(info,(_Bool)0,(_Bool)1)));
            if(right_value300) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0); }
            info->no_output_err=(_Bool)0;
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p!=42) {
                    define_function_pointer_result_function_211=(_Bool)1;
                }
            }
        }
        info->p=head;
        info->sline=sline_206;
    }
    define_function_flag_213=(_Bool)0;
    if(is_type_name_flag_205&&!define_function_pointer_result_function_211) {
        p_214=info->p;
        info->p=head;
        invalid_type_215=(_Bool)0;
        info->no_output_err=(_Bool)1;
        if(xisalpha(*info->p)||*info->p==95) {
            ((struct tuple3$3sTypephcharphbool*)(right_value301=parse_type(info,(_Bool)0,(_Bool)1)));
            if(right_value301) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0); }
        }
        info->no_output_err=(_Bool)0;
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            word_216=((void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj57=word_216;
                word_216=(char*)come_increment_ref_count(((char*)(right_value302=parse_word(info))));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
                if(right_value302) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0); }
                if(string_operator_equals(word_216,"extern")) {
                    __dec_obj58=word_216;
                    word_216=(char*)come_increment_ref_count(((char*)(right_value303=parse_word(info))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
                    if(right_value303) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0); }
                }
            }
            else {
                word_216=((void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_216) {
                if(is_type_name(word_216,info)) {
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
                        __dec_obj59=word_216;
                        word_216=(char*)come_increment_ref_count(((char*)(right_value304=parse_word(info))));
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
                        if(right_value304) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0); }
                    }
                }
                if(strlen(word_216)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag_205) {
                        define_function_flag_213=(_Bool)1;
                    }
                }
            }
            if(word_216) { word_216 = come_decrement_ref_count(word_216, (void*)0, (void*)0, 0, 0); }
        }
        info->p=p_214;
        info->sline=sline_206;
    }
    define_variable_217=(_Bool)1;
    if(is_type_name_flag_205&&!define_function_pointer_result_function_211) {
        p_218=info->p;
        info->p=head;
        if(!is_type_name_flag_205) {
            define_variable_217=(_Bool)0;
        }
        if(xisalpha(*info->p)||*info->p==95) {
            info->no_output_err=(_Bool)1;
            ((struct tuple3$3sTypephcharphbool*)(right_value305=parse_type(info,(_Bool)0,(_Bool)1)));
            if(right_value305) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0); }
            info->no_output_err=(_Bool)0;
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_219=(char*)come_increment_ref_count(((char*)(right_value306=parse_word(info))));
                        if(right_value306) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0); }
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                                define_variable_217=(_Bool)1;
                            }
                        }
                        if(word_219) { word_219 = come_decrement_ref_count(word_219, (void*)0, (void*)0, 0, 0); }
                    }
                }
            }
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_217=(_Bool)0;
        }
        else if(define_variable_217) {
        }
        else {
            if(!(xisalpha(*info->p)||*info->p==95)) {
                define_variable_217=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(*info->p==40||*info->p==58) {
                define_variable_217=(_Bool)0;
            }
        }
        info->p=p_218;
        info->sline=sline_206;
    }
    else {
        define_variable_217=(_Bool)0;
    }
    if(define_struct_nobody_207) {
    }
    else if(define_function_pointer_result_function_211) {
        header_head_220=info->p;
        multiple_assgin_var1=((struct tuple3$3sTypephcharphbool*)(right_value307=parse_type(info,(_Bool)0,(_Bool)1)));
        result_type_221=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
        fun_name_222=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
        err_223=multiple_assgin_var1->v3;
        if(right_value307) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0); }
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_224=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value309=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value308=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 954))))))));
            if(right_value309) { come_call_finalizer(list$1sTypephp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0); }
            param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value311=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value310=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 955))))))));
            if(right_value311) { come_call_finalizer(list$1charphp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0); }
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assgin_var2=((struct tuple3$3sTypephcharphbool*)(right_value312=parse_type(info,(_Bool)0,(_Bool)0)));
                    param_type_226=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
                    param_name_227=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                    err_228=multiple_assgin_var2->v3;
                    if(right_value312) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0); }
                    if(!err_228) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypephp_push_back(param_types_224,(struct sType*)come_increment_ref_count(param_type_226));
                    list$1charphp_push_back(param_names_225,(char*)come_increment_ref_count(((char*)(right_value313=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_229)))));
                    if(right_value313) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0); }
                    if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    else {
                        err_msg(info,"require , or )");
                        exit(2);
                    }
                    if(param_type_226) { come_call_finalizer(sType_finalize,param_type_226, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_name_227) { param_name_227 = come_decrement_ref_count(param_name_227, (void*)0, (void*)0, 0, 0); }
                }
            }
            expected_next_character(41,info);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_230=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value315=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value314=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 997))))))));
                if(right_value315) { come_call_finalizer(list$1sTypephp_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0); }
                param_names2_231=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value317=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value316=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 998))))))));
                if(right_value317) { come_call_finalizer(list$1charphp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0); }
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assgin_var3=((struct tuple3$3sTypephcharphbool*)(right_value318=parse_type(info,(_Bool)0,(_Bool)0)));
                        param_type_232=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
                        param_name_233=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
                        err_234=multiple_assgin_var3->v3;
                        if(right_value318) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0); }
                        if(!err_234) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypephp_push_back(param_types2_230,(struct sType*)come_increment_ref_count(param_type_232));
                        list$1charphp_push_back(param_names2_231,(char*)come_increment_ref_count(((char*)(right_value319=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_235)))));
                        if(right_value319) { right_value319 = come_decrement_ref_count(right_value319, (void*)0, (void*)0, 1, 0); }
                        if(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                        else {
                            err_msg(info,"require , or )");
                            exit(2);
                        }
                        if(param_type_232) { come_call_finalizer(sType_finalize,param_type_232, (void*)0, (void*)0, 0, 0, 0); }
                        if(param_name_233) { param_name_233 = come_decrement_ref_count(param_name_233, (void*)0, (void*)0, 0, 0); }
                    }
                }
                header_tail_236=info->p;
                result_type2_237=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value320=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1036)))),"lambda",info,(_Bool)0))));
                if(right_value320) { come_call_finalizer(sType_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value321) { come_call_finalizer(sType_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0); }
                __dec_obj61=result_type2_237->mResultType;
                result_type2_237->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value323=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value322=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 1038)))),(struct sType*)come_increment_ref_count(result_type_221)))));
                if(__dec_obj61) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value323) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0); }
                __dec_obj62=result_type2_237->mParamTypes;
                result_type2_237->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value324=list$1sTypephp_clone(param_types2_230))));
                if(__dec_obj62) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value324) { come_call_finalizer(list$1sTypephp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0); }
                __dec_obj63=result_type2_237->mParamNames;
                result_type2_237->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=list$1charphp_clone(param_names2_231))));
                if(__dec_obj63) { come_call_finalizer(list$1charphp_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value325) { come_call_finalizer(list$1charphp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0); }
                result_type2_237->mVarArgs=(_Bool)0;
                result_type2_237->mStatic=(_Bool)0;
                var_args_238=(_Bool)0;
                header_buf_239=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value327=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value326=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1046))))))));
                if(right_value326) { come_call_finalizer(buffer_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value327) { come_call_finalizer(buffer_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0); }
                buffer_append(header_buf_239,header_head_220,header_tail_236-header_head_220);
                buffer_append_char(header_buf_239,0);
                param_default_parametors_240=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value329=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value328=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1050))))))));
                if(right_value329) { come_call_finalizer(list$1charphp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0); }
                fun_241=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value333=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value330=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1056)))),(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string(fun_name_222)))),(struct sType*)come_increment_ref_count(result_type2_237),(struct list$1sTypeph*)come_increment_ref_count(param_types_224),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_240),(_Bool)1,var_args_238,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value332=buffer_to_string(header_buf_239)))),info))));
                if(right_value330) { come_call_finalizer(sFun_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value331) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0); }
                if(right_value332) { right_value332 = come_decrement_ref_count(right_value332, (void*)0, (void*)0, 1, 0); }
                if(right_value333) { come_call_finalizer(sFun_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0); }
                fun2_243=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value334=__builtin_string(fun_name_222))));
                if(right_value334) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0); }
                if(fun2_243==((void*)0)||fun2_243->mExternal) {
                    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value335=string_clone(fun_name_222)))),(struct sFun*)come_increment_ref_count(fun_241));
                    if(right_value335) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0); }
                }
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1064);
                _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value337=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value336=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1064)))),(struct sFun*)come_increment_ref_count(fun_241),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=sFunNode_finalize;
                _inf_value1->clone=sFunNode_clone;
                _inf_value1->compile=sFunNode_compile;
                _inf_value1->sline=sFunNode_sline;
                _inf_value1->sname=sFunNode_sname;
                _inf_value1->terminated=sFunNode_terminated;
                struct sNode* __result99__ = ((struct sNode*)(right_value377=_inf_value1));
                if(param_types2_230) { come_call_finalizer(list$1sTypephp_finalize,param_types2_230, (void*)0, (void*)0, 0, 0, 0); }
                if(param_names2_231) { come_call_finalizer(list$1charphp_finalize,param_names2_231, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type2_237) { come_call_finalizer(sType_finalize,result_type2_237, (void*)0, (void*)0, 0, 0, 0); }
                if(header_buf_239) { come_call_finalizer(buffer_finalize,header_buf_239, (void*)0, (void*)0, 0, 0, 0); }
                if(param_default_parametors_240) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_240, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_241) { come_call_finalizer(sFun_finalize,fun_241, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_224) { come_call_finalizer(list$1sTypephp_finalize,param_types_224, (void*)0, (void*)0, 0, 0, 0); }
                if(param_names_225) { come_call_finalizer(list$1charphp_finalize,param_names_225, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_221) { come_call_finalizer(sType_finalize,result_type_221, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name_222) { fun_name_222 = come_decrement_ref_count(fun_name_222, (void*)0, (void*)0, 0, 0); }
                if(right_value336) { come_call_finalizer(sFunNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value337) { come_call_finalizer(sFunNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0); }
                return __result99__;
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            if(param_types_224) { come_call_finalizer(list$1sTypephp_finalize,param_types_224, (void*)0, (void*)0, 0, 0, 0); }
            if(param_names_225) { come_call_finalizer(list$1charphp_finalize,param_names_225, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(result_type_221) { come_call_finalizer(sType_finalize,result_type_221, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name_222) { fun_name_222 = come_decrement_ref_count(fun_name_222, (void*)0, (void*)0, 0, 0); }
    }
    else if(define_function_flag_213) {
        info->p=head;
        info->sline=sline_206;
        struct sNode* __result100__ = ((struct sNode*)(right_value378=parse_function(info)));
        return __result100__;
    }
    else if(define_variable_217) {
        info->p=head;
        info->sline=sline_206;
        struct sNode* __result101__ = ((struct sNode*)(right_value379=parse_global_variable(info)));
        return __result101__;
    }
    info->p=head;
    info->sline=sline_206;
    buf2_277=(char*)come_increment_ref_count(((char*)(right_value380=parse_word(info))));
    if(right_value380) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0); }
    struct sNode* __result102__ = ((struct sNode*)(right_value381=top_level_v98((char*)come_increment_ref_count(buf2_277),head,head_sline,info)));
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1); }
    if(buf2_277) { buf2_277 = come_decrement_ref_count(buf2_277, (void*)0, (void*)0, 0, 0); }
    return __result102__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
struct sType* __dec_obj60;
                    __dec_obj60=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0); }
                    struct tuple1$1sTypeph* __result74__ = self;
                    if(self) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1); }
                    return __result74__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
struct sFun* default_value_242;
memset(&default_value_242, 0, sizeof(struct sFun*)); /* bbb */
                    memset(&default_value_242,0,sizeof(struct sFun*));
                    struct sFun* __result75__ = map$2charphsFunphp_at(self,key,default_value_242);
                    return __result75__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* right_value339;
struct sFun* result_245;
void* right_value340;
char* __dec_obj64;
void* right_value341;
struct sType* __dec_obj65;
void* right_value342;
struct list$1sTypeph* __dec_obj66;
void* right_value343;
struct list$1charph* __dec_obj67;
void* right_value344;
struct list$1charph* __dec_obj68;
void* right_value345;
struct sType* __dec_obj69;
void* right_value369;
struct sBlock* __dec_obj77;
void* right_value370;
struct buffer* __dec_obj78;
void* right_value371;
struct buffer* __dec_obj79;
void* right_value372;
struct buffer* __dec_obj80;
void* right_value373;
struct buffer* __dec_obj81;
void* right_value374;
char* __dec_obj82;
memset(&right_value339, 0, sizeof(void*));
memset(&result_245, 0, sizeof(struct sFun*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
                            if(self==(void*)0) {
                                struct sFun* __result77__ = (void*)0;
                                return __result77__;
                            }
                            result_245=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value339=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1069))));
                            if(right_value339) { come_call_finalizer(sFun_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0); }
                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                __dec_obj64=result_245->mName;
                                result_245->mName=(char*)come_increment_ref_count(((char*)(right_value340=string_clone(self->mName))));
                                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
                                if(right_value340) { right_value340 = come_decrement_ref_count(right_value340, (void*)0, (void*)0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                __dec_obj65=result_245->mResultType;
                                result_245->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(self->mResultType))));
                                if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value341) { come_call_finalizer(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                __dec_obj66=result_245->mParamTypes;
                                result_245->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value342=list$1sTypephp_clone(self->mParamTypes))));
                                if(__dec_obj66) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value342) { come_call_finalizer(list$1sTypephp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                __dec_obj67=result_245->mParamNames;
                                result_245->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value343=list$1charphp_clone(self->mParamNames))));
                                if(__dec_obj67) { come_call_finalizer(list$1charphp_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value343) { come_call_finalizer(list$1charphp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                                __dec_obj68=result_245->mParamDefaultParametors;
                                result_245->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value344=list$1charphp_clone(self->mParamDefaultParametors))));
                                if(__dec_obj68) { come_call_finalizer(list$1charphp_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value344) { come_call_finalizer(list$1charphp_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                                __dec_obj69=result_245->mLambdaType;
                                result_245->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_clone(self->mLambdaType))));
                                if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value345) { come_call_finalizer(sType_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                __dec_obj77=result_245->mBlock;
                                result_245->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value369=sBlock_clone(self->mBlock))));
                                if(__dec_obj77) { come_call_finalizer(sBlock_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value369) { come_call_finalizer(sBlock_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)) {
                                result_245->mExternal=self->mExternal;
                            }
                            if(self!=((void*)0)) {
                                result_245->mVarArgs=self->mVarArgs;
                            }
                            if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                                __dec_obj78=result_245->mSource;
                                result_245->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value370=buffer_clone(self->mSource))));
                                if(__dec_obj78) { come_call_finalizer(buffer_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value370) { come_call_finalizer(buffer_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                                __dec_obj79=result_245->mSourceHead;
                                result_245->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value371=buffer_clone(self->mSourceHead))));
                                if(__dec_obj79) { come_call_finalizer(buffer_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value371) { come_call_finalizer(buffer_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                                __dec_obj80=result_245->mSourceHead2;
                                result_245->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value372=buffer_clone(self->mSourceHead2))));
                                if(__dec_obj80) { come_call_finalizer(buffer_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value372) { come_call_finalizer(buffer_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                                __dec_obj81=result_245->mSourceDefer;
                                result_245->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value373=buffer_clone(self->mSourceDefer))));
                                if(__dec_obj81) { come_call_finalizer(buffer_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value373) { come_call_finalizer(buffer_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)) {
                                result_245->mStatic=self->mStatic;
                            }
                            if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                                __dec_obj82=result_245->mComeHeader;
                                result_245->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value374=string_clone(self->mComeHeader))));
                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0); }
                                if(right_value374) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0); }
                            }
                            struct sFun* __result97__ = result_245;
                            if(result_245) { come_call_finalizer(sFun_finalize,result_245, (void*)0, (void*)0, 0, 0, 1); }
                            return __result97__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* right_value346;
struct sBlock* result_246;
void* right_value347;
struct list$1sNodeph* __dec_obj70;
void* right_value368;
struct sVarTable* __dec_obj76;
memset(&right_value346, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct sBlock*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
                                    if(self==(void*)0) {
                                        struct sBlock* __result78__ = (void*)0;
                                        return __result78__;
                                    }
                                    result_246=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value346=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function2.c", 1078))));
                                    if(right_value346) { come_call_finalizer(sBlock_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0); }
                                    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                                        __dec_obj70=result_246->mNodes;
                                        result_246->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value347=list$1sNodephp_clone(self->mNodes))));
                                        if(__dec_obj70) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0); }
                                        if(right_value347) { come_call_finalizer(list$1sNodephp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0); }
                                    }
                                    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                                        __dec_obj76=result_246->mVarTable;
                                        result_246->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value368=sVarTable_clone(self->mVarTable))));
                                        if(__dec_obj76) { come_call_finalizer(sVarTable_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0); }
                                        if(right_value368) { come_call_finalizer(sVarTable_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0); }
                                    }
                                    struct sBlock* __result96__ = result_246;
                                    if(result_246) { come_call_finalizer(sBlock_finalize,result_246, (void*)0, (void*)0, 0, 0, 1); }
                                    return __result96__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* right_value348;
struct sVarTable* result_247;
void* right_value367;
struct map$2charphsVarph* __dec_obj75;
memset(&right_value348, 0, sizeof(void*));
memset(&result_247, 0, sizeof(struct sVarTable*));
memset(&right_value367, 0, sizeof(void*));
                                            if(self==(void*)0) {
                                                struct sVarTable* __result79__ = (void*)0;
                                                return __result79__;
                                            }
                                            result_247=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value348=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 1082))));
                                            if(right_value348) { come_call_finalizer(sVarTable_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0); }
                                            if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                                                __dec_obj75=result_247->mVars;
                                                result_247->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value367=map$2charphsVarphp_clone(self->mVars))));
                                                if(__dec_obj75) { come_call_finalizer(map$2charphsVarphp_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0); }
                                                if(right_value367) { come_call_finalizer(map$2charphsVarphp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            if(self!=((void*)0)) {
                                                result_247->mGlobal=self->mGlobal;
                                            }
                                            if(self!=((void*)0)) {
                                                result_247->mParent=self->mParent;
                                            }
                                            if(self!=((void*)0)) {
                                                result_247->mID=self->mID;
                                            }
                                            struct sVarTable* __result95__ = result_247;
                                            if(result_247) { come_call_finalizer(sVarTable_finalize,result_247, (void*)0, (void*)0, 0, 0, 1); }
                                            return __result95__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* right_value349;
void* right_value355;
struct map$2charphsVarph* result_253;
char* it_255;
struct sVar* default_value_257;
struct sVar* it2_260;
void* right_value359;
void* right_value360;
void* right_value365;
void* right_value366;
memset(&right_value349, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&result_253, 0, sizeof(struct map$2charphsVarph*));
memset(&it_255, 0, sizeof(char*));
memset(&default_value_257, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_260, 0, sizeof(struct sVar*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
                                                    if(self==((void*)0)) {
                                                        struct map$2charphsVarph* __result80__ = ((void*)0);
                                                        return __result80__;
                                                    }
                                                    result_253=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value355=map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value349=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "05function2.c", 1087))))))));
                                                    if(right_value355) { come_call_finalizer(map$2charphsVarphp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0); }
                                                    for(
                                                    it_255=map$2charphsVarphp_begin(self);
                                                    !map$2charphsVarphp_end(self);
                                                    it_255=map$2charphsVarphp_next(self)
                                                    ){
                                                        it2_260=map$2charphsVarphp_at(self,it_255,default_value_257);
                                                        if(1&&!1) {
                                                            map$2charphsVarphp_insert2(result_253,(char*)come_increment_ref_count(((char*)(right_value359=charp_clone(it_255)))),it2_260);
                                                            if(right_value359) { right_value359 = come_decrement_ref_count(right_value359, (void*)0, (void*)0, 1, 0); }
                                                        }
                                                        else if(1&&1) {
                                                            map$2charphsVarphp_insert2(result_253,(char*)come_increment_ref_count(((char*)(right_value360=charp_clone(it_255)))),(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value365=sVarp_clone(it2_260)))));
                                                            if(right_value360) { right_value360 = come_decrement_ref_count(right_value360, (void*)0, (void*)0, 1, 0); }
                                                            if(right_value365) { come_call_finalizer(sVarp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0); }
                                                        }
                                                        else if(!1&&1) {
                                                            map$2charphsVarphp_insert2(result_253,it_255,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value366=sVarp_clone(it2_260)))));
                                                            if(right_value366) { come_call_finalizer(sVarp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0); }
                                                        }
                                                        else if(!1&&!1) {
                                                            map$2charphsVarphp_insert2(result_253,it_255,it2_260);
                                                        }
                                                    }
                                                    struct map$2charphsVarph* __result94__ = result_253;
                                                    if(result_253) { come_call_finalizer(map$2charphsVarphp_finalize,result_253, (void*)0, (void*)0, 0, 0, 1); }
                                                    return __result94__;
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* right_value350;
void* right_value351;
void* right_value352;
int i_248;
void* right_value353;
void* right_value354;
struct list$1charp* __dec_obj71;
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&i_248, 0, sizeof(int));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
                                                        self->keys=((char**)(right_value350=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "05function2.c", 1088)));
                                                        self->items=((struct sVar**)(right_value351=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "05function2.c", 1089)));
                                                        self->item_existance=((_Bool*)(right_value352=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "05function2.c", 1090)));
                                                        for(
                                                        i_248=0;
                                                        i_248<1024;
                                                        i_248++
                                                        ){
                                                            self->item_existance[i_248]=(_Bool)0;
                                                        }
                                                        self->size=1024;
                                                        self->len=0;
                                                        __dec_obj71=self->key_list;
                                                        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value354=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value353=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "05function2.c", 1100))))))));
                                                        if(__dec_obj71) { come_call_finalizer(list$1charpp_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0); }
                                                        if(right_value354) { come_call_finalizer(list$1charpp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0); }
                                                        self->it=0;
                                                        struct map$2charphsVarph* __result82__ = self;
                                                        if(self) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                                                        return __result82__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
                                                            self->head=((void*)0);
                                                            self->tail=((void*)0);
                                                            self->len=0;
                                                            struct list$1charp* __result81__ = self;
                                                            if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                                                            return __result81__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_249;
struct list_item$1charp* prev_it_250;
memset(&it_249, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_250, 0, sizeof(struct list_item$1charp*));
                                                                it_249=self->head;
                                                                while(it_249!=((void*)0)) {
                                                                    if(0) {
                                                                        if(it_249->item) { it_249->item = come_decrement_ref_count(it_249->item, (void*)0, (void*)0, 0, 0); }
                                                                    }
                                                                    prev_it_250=it_249;
                                                                    it_249=it_249->next;
                                                                    come_free_object(prev_it_250);
                                                                }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_251;
int i_252;
memset(&i_251, 0, sizeof(int));
memset(&i_252, 0, sizeof(int));
                                                            for(
                                                            i_251=0;
                                                            i_251<self->size;
                                                            i_251++
                                                            ){
                                                                if(self->item_existance[i_251]) {
                                                                    if(1) {
                                                                        if(self->items[i_251]) { come_call_finalizer(sVarp_finalize,self->items[i_251], (void*)0, (void*)0, 0, 0, 0); }
                                                                    }
                                                                }
                                                            }
                                                            come_free_object((char*)self->items);
                                                            for(
                                                            i_252=0;
                                                            i_252<self->size;
                                                            i_252++
                                                            ){
                                                                if(self->item_existance[i_252]) {
                                                                    if(1) {
                                                                        if(self->keys[i_252]) { self->keys[i_252] = come_decrement_ref_count(self->keys[i_252], (void*)0, (void*)0, 0, 0); }
                                                                    }
                                                                }
                                                            }
                                                            come_free_object((char*)self->keys);
                                                            if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
                                                            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
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
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
char* result_254;
memset(&result_254, 0, sizeof(char*)); /* bbb */
                                                        self->key_list->it=self->key_list->head;
                                                        if(self->key_list->it) {
                                                            char* __result83__ = self->key_list->it->item;
                                                            return __result83__;
                                                        }
                                                        memset(&result_254,0,sizeof(char*));
                                                        char* __result84__ = result_254;
                                                        return __result84__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
                                                        _Bool __result85__ = self->key_list->it==((void*)0);
                                                        return __result85__;
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
char* result_256;
memset(&result_256, 0, sizeof(char*)); /* bbb */
                                                        self->key_list->it=self->key_list->it->next;
                                                        if(self->key_list->it) {
                                                            char* __result86__ = self->key_list->it->item;
                                                            return __result86__;
                                                        }
                                                        memset(&result_256,0,sizeof(char*));
                                                        char* __result87__ = result_256;
                                                        return __result87__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
int hash_258;
int it_259;
memset(&hash_258, 0, sizeof(int));
memset(&it_259, 0, sizeof(int));
                                                            hash_258=string_get_hash_key(((char*)key))%self->size;
                                                            it_259=hash_258;
                                                            while((_Bool)1) {
                                                                if(self->item_existance[it_259]) {
                                                                    if(charp_equals(self->keys[it_259],key)) {
                                                                        struct sVar* __result88__ = self->items[it_259];
                                                                        return __result88__;
                                                                    }
                                                                    it_259++;
                                                                    if(it_259>=self->size) {
                                                                        it_259=0;
                                                                    }
                                                                    else if(it_259==hash_258) {
                                                                        struct sVar* __result89__ = default_value;
                                                                        return __result89__;
                                                                    }
                                                                }
                                                                else {
                                                                    struct sVar* __result90__ = default_value;
                                                                    return __result90__;
                                                                }
                                                            }
                                                            struct sVar* __result91__ = default_value;
                                                            return __result91__;
}

static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
int hash_272;
int it_273;
_Bool same_key_exist_274;
char* it2_275;
memset(&hash_272, 0, sizeof(int));
memset(&it_273, 0, sizeof(int));
memset(&same_key_exist_274, 0, sizeof(_Bool));
memset(&it2_275, 0, sizeof(char*));
                                                                if(self->len*2>=self->size) {
                                                                    map$2charphsVarphp_rehash(self);
                                                                }
                                                                hash_272=string_get_hash_key(key)%self->size;
                                                                it_273=hash_272;
                                                                while((_Bool)1) {
                                                                    if(self->item_existance[it_273]) {
                                                                        if(charp_equals(self->keys[it_273],key)) {
                                                                            if(1) {
                                                                                if(self->keys[it_273]) { self->keys[it_273] = come_decrement_ref_count(self->keys[it_273], (void*)0, (void*)0, 0, 0); }
                                                                                list$1charpp_remove(self->key_list,self->keys[it_273]);
                                                                                self->keys[it_273]=(char*)come_increment_ref_count(key);
                                                                            }
                                                                            else {
                                                                                list$1charpp_remove(self->key_list,self->keys[it_273]);
                                                                                self->keys[it_273]=key;
                                                                            }
                                                                            if(1) {
                                                                                if(self->items[it_273]) { come_call_finalizer(sVarp_finalize,self->items[it_273], (void*)0, (void*)0, 0, 0, 0); }
                                                                                self->items[it_273]=(struct sVar*)come_increment_ref_count(item);
                                                                            }
                                                                            else {
                                                                                self->items[it_273]=item;
                                                                            }
                                                                            break;
                                                                        }
                                                                        it_273++;
                                                                        if(it_273>=self->size) {
                                                                            it_273=0;
                                                                        }
                                                                        else if(it_273==hash_272) {
                                                                            printf("unexpected error in map.insert\n");
                                                                            exit(2);
                                                                        }
                                                                    }
                                                                    else {
                                                                        self->item_existance[it_273]=(_Bool)1;
                                                                        if(1) {
                                                                            self->keys[it_273]=(char*)come_increment_ref_count(key);
                                                                        }
                                                                        else {
                                                                            self->keys[it_273]=key;
                                                                        }
                                                                        if(1) {
                                                                            self->items[it_273]=(struct sVar*)come_increment_ref_count(item);
                                                                        }
                                                                        else {
                                                                            self->items[it_273]=item;
                                                                        }
                                                                        self->len++;
                                                                        break;
                                                                    }
                                                                }
                                                                same_key_exist_274=(_Bool)0;
                                                                for(
                                                                it2_275=list$1charpp_begin(self->key_list);
                                                                !list$1charpp_end(self->key_list);
                                                                it_273=list$1charpp_next(self->key_list)
                                                                ){
                                                                    if(charp_equals(it2_275,key)) {
                                                                        same_key_exist_274=(_Bool)1;
                                                                    }
                                                                }
                                                                if(!same_key_exist_274) {
                                                                    list$1charpp_push_back(self->key_list,key);
                                                                }
                                                                if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                                                                if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_261;
void* right_value356;
char** keys_262;
void* right_value357;
struct sVar** items_263;
void* right_value358;
_Bool* item_existance_264;
int len_265;
char* it_266;
struct sVar* default_value_267;
struct sVar* it2_268;
int hash_269;
int n_270;
struct sVar* default_value_271;
memset(&size_261, 0, sizeof(int));
memset(&right_value356, 0, sizeof(void*));
memset(&keys_262, 0, sizeof(char**));
memset(&right_value357, 0, sizeof(void*));
memset(&items_263, 0, sizeof(struct sVar**));
memset(&right_value358, 0, sizeof(void*));
memset(&item_existance_264, 0, sizeof(_Bool*));
memset(&len_265, 0, sizeof(int));
memset(&it_266, 0, sizeof(char*));
memset(&default_value_267, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_268, 0, sizeof(struct sVar*));
memset(&hash_269, 0, sizeof(int));
memset(&n_270, 0, sizeof(int));
memset(&default_value_271, 0, sizeof(struct sVar*)); /* bbb */
                                                                        size_261=self->size*10;
                                                                        keys_262=((char**)(right_value356=(char**)come_calloc(1, sizeof(char*)*(1*(size_261)), "05function2.c", 1098)));
                                                                        items_263=((struct sVar**)(right_value357=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_261)), "05function2.c", 1099)));
                                                                        item_existance_264=((_Bool*)(right_value358=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_261)), "05function2.c", 1100)));
                                                                        len_265=0;
                                                                        for(
                                                                        it_266=map$2charphsVarphp_begin(self);
                                                                        !map$2charphsVarphp_end(self);
                                                                        it_266=map$2charphsVarphp_next(self)
                                                                        ){
                                                                            it2_268=map$2charphsVarphp_at(self,it_266,default_value_267);
                                                                            hash_269=charp_get_hash_key(it_266)%size_261;
                                                                            n_270=hash_269;
                                                                            while((_Bool)1) {
                                                                                if(item_existance_264[n_270]) {
                                                                                    n_270++;
                                                                                    if(n_270>=size_261) {
                                                                                        n_270=0;
                                                                                    }
                                                                                    else if(n_270==hash_269) {
                                                                                        printf("unexpected error in map.rehash(1)\n");
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    item_existance_264[n_270]=(_Bool)1;
                                                                                    keys_262[n_270]=it_266;
                                                                                    items_263[n_270]=map$2charphsVarphp_at(self,it_266,default_value_271);
                                                                                    len_265++;
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free_object((char*)self->items);
                                                                        if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                                                                        come_free_object((char*)self->keys);
                                                                        self->keys=keys_262;
                                                                        self->items=items_263;
                                                                        self->item_existance=item_existance_264;
                                                                        self->size=size_261;
                                                                        self->len=len_265;
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
}

static struct sVar* sVarp_clone(struct sVar* self){
void* right_value361;
struct sVar* result_276;
void* right_value362;
char* __dec_obj72;
void* right_value363;
char* __dec_obj73;
void* right_value364;
struct sType* __dec_obj74;
memset(&right_value361, 0, sizeof(void*));
memset(&result_276, 0, sizeof(struct sVar*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
                                                                if(self==(void*)0) {
                                                                    struct sVar* __result92__ = (void*)0;
                                                                    return __result92__;
                                                                }
                                                                result_276=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value361=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "05function2.c", 1099))));
                                                                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                                    __dec_obj72=result_276->mName;
                                                                    result_276->mName=(char*)come_increment_ref_count(((char*)(right_value362=string_clone(self->mName))));
                                                                    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0); }
                                                                    if(right_value362) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0); }
                                                                }
                                                                if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                                                    __dec_obj73=result_276->mCValueName;
                                                                    result_276->mCValueName=(char*)come_increment_ref_count(((char*)(right_value363=string_clone(self->mCValueName))));
                                                                    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
                                                                    if(right_value363) { right_value363 = come_decrement_ref_count(right_value363, (void*)0, (void*)0, 1, 0); }
                                                                }
                                                                if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                                                    __dec_obj74=result_276->mType;
                                                                    result_276->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value364=sType_clone(self->mType))));
                                                                    if(__dec_obj74) { come_call_finalizer(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0); }
                                                                    if(right_value364) { come_call_finalizer(sType_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0); }
                                                                }
                                                                if(self!=((void*)0)) {
                                                                    result_276->mBlockLevel=self->mBlockLevel;
                                                                }
                                                                if(self!=((void*)0)) {
                                                                    result_276->mGlobal=self->mGlobal;
                                                                }
                                                                if(self!=((void*)0)) {
                                                                    result_276->mAllocaValue=self->mAllocaValue;
                                                                }
                                                                if(self!=((void*)0)) {
                                                                    result_276->mFunctionParam=self->mFunctionParam;
                                                                }
                                                                if(self!=((void*)0)) {
                                                                    result_276->mNoFree=self->mNoFree;
                                                                }
                                                                struct sVar* __result93__ = result_276;
                                                                return __result93__;
}

_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_281;
struct sType* type_285;
struct sClass* generics_class_286;
void* right_value382;
_Bool generics_type_name_288;
memset(&klass_281, 0, sizeof(struct sClass*));
memset(&type_285, 0, sizeof(struct sType*));
memset(&generics_class_286, 0, sizeof(struct sClass*));
memset(&right_value382, 0, sizeof(void*));
memset(&generics_type_name_288, 0, sizeof(_Bool));
    klass_281=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_285=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_286=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_288=list$1charphp_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value382=__builtin_string(buf)))));
    if(right_value382) { right_value382 = come_decrement_ref_count(right_value382, (void*)0, (void*)0, 1, 0); }
    _Bool __result115__ = generics_class_286||generics_type_name_288||klass_281||type_285||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"come_mem_core");
    return __result115__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
struct sClass* default_value_278;
memset(&default_value_278, 0, sizeof(struct sClass*)); /* bbb */
        memset(&default_value_278,0,sizeof(struct sClass*));
        struct sClass* __result107__ = map$2charphsClassphp_at(self,key,default_value_278);
        return __result107__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_279;
int it_280;
memset(&hash_279, 0, sizeof(int));
memset(&it_280, 0, sizeof(int));
            hash_279=string_get_hash_key(((char*)key))%self->size;
            it_280=hash_279;
            while((_Bool)1) {
                if(self->item_existance[it_280]) {
                    if(charp_equals(self->keys[it_280],key)) {
                        struct sClass* __result103__ = self->items[it_280];
                        return __result103__;
                    }
                    it_280++;
                    if(it_280>=self->size) {
                        it_280=0;
                    }
                    else if(it_280==hash_279) {
                        struct sClass* __result104__ = default_value;
                        return __result104__;
                    }
                }
                else {
                    struct sClass* __result105__ = default_value;
                    return __result105__;
                }
            }
            struct sClass* __result106__ = default_value;
            return __result106__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
struct sType* default_value_282;
memset(&default_value_282, 0, sizeof(struct sType*)); /* bbb */
        memset(&default_value_282,0,sizeof(struct sType*));
        struct sType* __result112__ = map$2charphsTypephp_at(self,key,default_value_282);
        return __result112__;
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
int hash_283;
int it_284;
memset(&hash_283, 0, sizeof(int));
memset(&it_284, 0, sizeof(int));
            hash_283=string_get_hash_key(((char*)key))%self->size;
            it_284=hash_283;
            while((_Bool)1) {
                if(self->item_existance[it_284]) {
                    if(charp_equals(self->keys[it_284],key)) {
                        struct sType* __result108__ = self->items[it_284];
                        return __result108__;
                    }
                    it_284++;
                    if(it_284>=self->size) {
                        it_284=0;
                    }
                    else if(it_284==hash_283) {
                        struct sType* __result109__ = default_value;
                        return __result109__;
                    }
                }
                else {
                    struct sType* __result110__ = default_value;
                    return __result110__;
                }
            }
            struct sType* __result111__ = default_value;
            return __result111__;
}

static _Bool list$1charphp_contained(struct list$1charph* self, char* item){
char* it_287;
memset(&it_287, 0, sizeof(char*));
        for(
        it_287=list$1charphp_begin(self);
        !list$1charphp_end(self);
        it_287=list$1charphp_next(self)
        ){
            if(charp_operator_equals(it_287,item)) {
                _Bool __result113__ = (_Bool)1;
                return __result113__;
            }
        }
        _Bool __result114__ = (_Bool)0;
        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
        return __result114__;
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* right_value383;
char* sname_top_289;
int sline_top_290;
struct sFun* funX_291;
void* right_value384;
struct sType* result_type_292;
void* right_value385;
void* right_value386;
struct list$1sTypeph* param_types_293;
struct sType* it_295;
void* right_value387;
struct sType* param_type_297;
void* right_value388;
void* right_value389;
struct list$1charph* param_names_298;
char* p_299;
int sline_300;
char* head_301;
struct buffer* source_302;
void* right_value390;
struct buffer* __dec_obj85;
void* right_value391;
struct sType* generics_type_saved_303;
void* right_value392;
struct sType* __dec_obj86;
void* right_value393;
struct list$1charph* generics_type_names_saved_304;
void* right_value394;
struct list$1charph* __dec_obj87;
void* right_value395;
struct sBlock* block_305;
struct buffer* __dec_obj88;
_Bool var_args_306;
void* right_value396;
void* right_value397;
void* right_value398;
void* right_value399;
void* right_value400;
struct sFun* fun_307;
void* right_value401;
void* right_value402;
void* right_value403;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value407;
struct sNode* node_309;
struct sType* __dec_obj91;
struct list$1charph* __dec_obj92;
void* right_value408;
char* __dec_obj93;
memset(&right_value383, 0, sizeof(void*));
memset(&sname_top_289, 0, sizeof(char*));
memset(&sline_top_290, 0, sizeof(int));
memset(&funX_291, 0, sizeof(struct sFun*));
memset(&right_value384, 0, sizeof(void*));
memset(&result_type_292, 0, sizeof(struct sType*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&param_types_293, 0, sizeof(struct list$1sTypeph*));
memset(&it_295, 0, sizeof(struct sType*));
memset(&right_value387, 0, sizeof(void*));
memset(&param_type_297, 0, sizeof(struct sType*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&param_names_298, 0, sizeof(struct list$1charph*));
memset(&p_299, 0, sizeof(char*));
memset(&sline_300, 0, sizeof(int));
memset(&head_301, 0, sizeof(char*));
memset(&source_302, 0, sizeof(struct buffer*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&generics_type_saved_303, 0, sizeof(struct sType*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&generics_type_names_saved_304, 0, sizeof(struct list$1charph*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&block_305, 0, sizeof(struct sBlock*));
memset(&var_args_306, 0, sizeof(_Bool));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&fun_307, 0, sizeof(struct sFun*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&node_309, 0, sizeof(struct sNode*));
memset(&right_value408, 0, sizeof(void*));
    sname_top_289=(char*)come_increment_ref_count(((char*)(right_value383=__builtin_string(info->sname))));
    if(right_value383) { right_value383 = come_decrement_ref_count(right_value383, (void*)0, (void*)0, 1, 0); }
    sline_top_290=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_291=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_291) {
        _Bool __result116__ = (_Bool)1;
        return __result116__;
    }
    result_type_292=(struct sType*)come_increment_ref_count(((struct sType*)(right_value384=solve_generics(generics_fun->mResultType,generics_type,info))));
    if(right_value384) { come_call_finalizer(sType_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0); }
    param_types_293=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value386=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value385=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1119))))))));
    if(right_value386) { come_call_finalizer(list$1sTypephp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_295=list$1sTypephp_begin((generics_fun->mParamTypes));
    !list$1sTypephp_end((generics_fun->mParamTypes));
    it_295=list$1sTypephp_next((generics_fun->mParamTypes))
    ){
        param_type_297=(struct sType*)come_increment_ref_count(((struct sType*)(right_value387=solve_generics(it_295,generics_type,info))));
        if(right_value387) { come_call_finalizer(sType_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0); }
        param_type_297->mFunctionParam=(_Bool)1;
        list$1sTypephp_push_back(param_types_293,(struct sType*)come_increment_ref_count(((struct sType*)(right_value388=sType_clone(param_type_297)))));
        if(right_value388) { come_call_finalizer(sType_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0); }
        if(param_type_297) { come_call_finalizer(sType_finalize,param_type_297, (void*)0, (void*)0, 0, 0, 0); }
    }
    param_names_298=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value389=list$1charphp_clone(generics_fun->mParamNames))));
    if(right_value389) { come_call_finalizer(list$1charphp_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0); }
    p_299=info->p;
    sline_300=generics_fun->mSLine;
    head_301=info->head;
    source_302=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj85=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value390=string_to_buffer(generics_fun->mBlock))));
    if(__dec_obj85) { come_call_finalizer(buffer_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value390) { come_call_finalizer(buffer_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0); }
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_303=(struct sType*)come_increment_ref_count(((struct sType*)(right_value391=sType_clone(info->generics_type))));
    if(right_value391) { come_call_finalizer(sType_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj86=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value392=sType_clone(generics_type))));
    if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value392) { come_call_finalizer(sType_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0); }
    generics_type_names_saved_304=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value393=list$1charphp_clone(info->generics_type_names))));
    if(right_value393) { come_call_finalizer(list$1charphp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj87=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value394=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    if(__dec_obj87) { come_call_finalizer(list$1charphp_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value394) { come_call_finalizer(list$1charphp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0); }
    block_305=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value395=parse_block(info,(_Bool)0))));
    if(right_value395) { come_call_finalizer(sBlock_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj88=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_302);
    if(__dec_obj88) { come_call_finalizer(buffer_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0); }
    info->p=p_299;
    info->sline=sline_300;
    info->head=head_301;
    result_type_292->mInline=(_Bool)0;
    var_args_306=generics_fun->mVarArgs;
    fun_307=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value400=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value396=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1157)))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_292),(struct list$1sTypeph*)come_increment_ref_count(param_types_293),(struct list$1charph*)come_increment_ref_count(param_names_298),(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value398=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value397=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1157)))))))),(_Bool)0,var_args_306,(struct sBlock*)come_increment_ref_count(block_305),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value399=__builtin_string("")))),info))));
    if(right_value396) { come_call_finalizer(sFun_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value398) { come_call_finalizer(list$1charphp_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value399) { right_value399 = come_decrement_ref_count(right_value399, (void*)0, (void*)0, 1, 0); }
    if(right_value400) { come_call_finalizer(sFun_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value401=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_307));
    if(right_value401) { right_value401 = come_decrement_ref_count(right_value401, (void*)0, (void*)0, 1, 0); }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1161);
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value403=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value402=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1161)))),(struct sFun*)come_increment_ref_count(fun_307),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=sFunNode_finalize;
    _inf_value2->clone=sFunNode_clone;
    _inf_value2->compile=sFunNode_compile;
    _inf_value2->sline=sFunNode_sline;
    _inf_value2->sname=sFunNode_sname;
    _inf_value2->terminated=sFunNode_terminated;
    node_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=_inf_value2)));
    if(right_value402) { come_call_finalizer(sFunNode_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value403) { come_call_finalizer(sFunNode_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value407) { right_value407 = come_decrement_ref_count(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0); } 
    if(!node_309->compile(node_309->_protocol_obj,info)) {
        _Bool __result124__ = (_Bool)0;
        return __result124__;
    }
    __dec_obj91=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_303);
    if(__dec_obj91) { come_call_finalizer(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj92=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(generics_type_names_saved_304);
    if(__dec_obj92) { come_call_finalizer(list$1charphp_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj93=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value408=__builtin_string(sname_top_289))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
    if(right_value408) { right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0); }
    info->sline=sline_top_290;
    _Bool __result125__ = (_Bool)1;
    if(fun_name) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1); }
    if(sname_top_289) { sname_top_289 = come_decrement_ref_count(sname_top_289, (void*)0, (void*)0, 0, 0); }
    if(result_type_292) { come_call_finalizer(sType_finalize,result_type_292, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_293) { come_call_finalizer(list$1sTypephp_finalize,param_types_293, (void*)0, (void*)0, 0, 0, 0); }
    if(param_names_298) { come_call_finalizer(list$1charphp_finalize,param_names_298, (void*)0, (void*)0, 0, 0, 0); }
    if(source_302) { come_call_finalizer(buffer_finalize,source_302, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_type_saved_303) { come_call_finalizer(sType_finalize,generics_type_saved_303, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_type_names_saved_304) { come_call_finalizer(list$1charphp_finalize,generics_type_names_saved_304, (void*)0, (void*)0, 0, 0, 0); }
    if(block_305) { come_call_finalizer(sBlock_finalize,block_305, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_307) { come_call_finalizer(sFun_finalize,fun_307, (void*)0, (void*)0, 0, 0, 0); }
    if(node_309) { node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0); } 
    return __result125__;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_294;
memset(&result_294, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sType* __result117__ = self->it->item;
            return __result117__;
        }
        memset(&result_294,0,sizeof(struct sType*));
        struct sType* __result118__ = result_294;
        return __result118__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
        _Bool __result119__ = self->it==((void*)0);
        return __result119__;
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_296;
memset(&result_296, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sType* __result120__ = self->it->item;
            return __result120__;
        }
        memset(&result_296,0,sizeof(struct sType*));
        struct sType* __result121__ = result_296;
        return __result121__;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_310;
void* right_value409;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* result_type_311;
char* var_name_312;
_Bool err_313;
_Bool method_definition_314;
char* p_315;
int sline_316;
void* right_value410;
void* right_value411;
struct buffer* buf2_317;
char* fun_name_318;
char* base_fun_name_319;
void* right_value412;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* obj_type_320;
char* name_321;
_Bool err_322;
void* right_value413;
void* right_value414;
char* __dec_obj94;
void* right_value415;
void* right_value416;
void* right_value417;
char* __dec_obj95;
void* right_value418;
void* right_value419;
char* __dec_obj96;
void* right_value420;
void* right_value421;
void* right_value422;
char* __dec_obj97;
void* right_value423;
void* right_value424;
char* __dec_obj98;
void* right_value425;
void* right_value426;
char* __dec_obj99;
void* right_value427;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var6;
struct list$1sTypeph* param_types_323;
struct list$1charph* param_names_324;
struct list$1charph* param_default_parametors_325;
_Bool var_args_326;
char* header_tail_327;
void* right_value428;
void* right_value429;
struct buffer* header_buf_328;
int version_329;
int n_330;
void* right_value430;
struct sBlock* block_331;
static int lambda_num_332=0;
void* right_value431;
char* __dec_obj100;
void* right_value432;
void* right_value433;
void* right_value434;
void* right_value435;
struct sFun* fun_333;
void* right_value436;
struct sFun* fun2_334;
void* right_value437;
void* right_value438;
void* right_value439;
struct sNode* _inf_value3;
struct sLambdaNode* _inf_obj_value3;
void* right_value442;
void* right_value443;
char* none_generics_name_336;
void* right_value444;
char* block_337;
void* right_value445;
void* right_value446;
void* right_value447;
struct sGenericsFun* fun_338;
void* right_value448;
char* fun_name3_339;
void* right_value452;
void* right_value453;
struct sBlock* block_359;
_Bool static__360;
void* right_value454;
void* right_value455;
char* new_fun_name_361;
void* right_value456;
char* __dec_obj102;
void* right_value457;
void* right_value458;
void* right_value459;
void* right_value460;
void* right_value461;
struct sFun* fun_362;
void* right_value462;
struct sFun* fun2_363;
void* right_value463;
void* right_value464;
void* right_value465;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value469;
void* right_value470;
char* new_fun_name_365;
void* right_value471;
char* __dec_obj105;
void* right_value472;
void* right_value473;
void* right_value474;
void* right_value475;
struct sFun* fun_366;
void* right_value476;
struct sFun* fun2_367;
void* right_value477;
void* right_value478;
void* right_value479;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value483;
void* right_value484;
char* asm_fun_369;
void* right_value485;
char* __dec_obj108;
void* right_value486;
void* right_value487;
void* right_value488;
void* right_value489;
struct sFun* fun_370;
void* right_value490;
struct sFun* fun2_371;
void* right_value491;
void* right_value492;
void* right_value493;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value497;
memset(&header_head_310, 0, sizeof(char*));
memset(&right_value409, 0, sizeof(void*));
memset(&result_type_311, 0, sizeof(struct sType*)); /* ccc */
memset(&var_name_312, 0, sizeof(char*)); /* ccc */
memset(&err_313, 0, sizeof(_Bool)); /* ccc */
memset(&result_type_311, 0, sizeof(struct sType*)); /* eee */
memset(&var_name_312, 0, sizeof(char*)); /* eee */
memset(&err_313, 0, sizeof(_Bool)); /* eee */
memset(&method_definition_314, 0, sizeof(_Bool));
memset(&p_315, 0, sizeof(char*));
memset(&sline_316, 0, sizeof(int));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&buf2_317, 0, sizeof(struct buffer*));
memset(&fun_name_318, 0, sizeof(char*)); /* bbb */
memset(&base_fun_name_319, 0, sizeof(char*)); /* bbb */
memset(&right_value412, 0, sizeof(void*));
memset(&obj_type_320, 0, sizeof(struct sType*)); /* ccc */
memset(&name_321, 0, sizeof(char*)); /* ccc */
memset(&err_322, 0, sizeof(_Bool)); /* ccc */
memset(&obj_type_320, 0, sizeof(struct sType*)); /* eee */
memset(&name_321, 0, sizeof(char*)); /* eee */
memset(&err_322, 0, sizeof(_Bool)); /* eee */
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&param_types_323, 0, sizeof(struct list$1sTypeph*)); /* ccc */
memset(&param_names_324, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&param_default_parametors_325, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&var_args_326, 0, sizeof(_Bool)); /* ccc */
memset(&param_types_323, 0, sizeof(struct list$1sTypeph*)); /* eee */
memset(&param_names_324, 0, sizeof(struct list$1charph*)); /* eee */
memset(&param_default_parametors_325, 0, sizeof(struct list$1charph*)); /* eee */
memset(&var_args_326, 0, sizeof(_Bool)); /* eee */
memset(&header_tail_327, 0, sizeof(char*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&header_buf_328, 0, sizeof(struct buffer*));
memset(&version_329, 0, sizeof(int));
memset(&n_330, 0, sizeof(int));
memset(&right_value430, 0, sizeof(void*));
memset(&block_331, 0, sizeof(struct sBlock*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&fun_333, 0, sizeof(struct sFun*));
memset(&right_value436, 0, sizeof(void*));
memset(&fun2_334, 0, sizeof(struct sFun*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&none_generics_name_336, 0, sizeof(char*));
memset(&right_value444, 0, sizeof(void*));
memset(&block_337, 0, sizeof(char*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_value447, 0, sizeof(void*));
memset(&fun_338, 0, sizeof(struct sGenericsFun*));
memset(&right_value448, 0, sizeof(void*));
memset(&fun_name3_339, 0, sizeof(char*));
memset(&right_value452, 0, sizeof(void*));
memset(&right_value453, 0, sizeof(void*));
memset(&block_359, 0, sizeof(struct sBlock*));
memset(&static__360, 0, sizeof(_Bool));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&new_fun_name_361, 0, sizeof(char*));
memset(&right_value456, 0, sizeof(void*));
memset(&right_value457, 0, sizeof(void*));
memset(&right_value458, 0, sizeof(void*));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value461, 0, sizeof(void*));
memset(&fun_362, 0, sizeof(struct sFun*));
memset(&right_value462, 0, sizeof(void*));
memset(&fun2_363, 0, sizeof(struct sFun*));
memset(&right_value463, 0, sizeof(void*));
memset(&right_value464, 0, sizeof(void*));
memset(&right_value465, 0, sizeof(void*));
memset(&right_value469, 0, sizeof(void*));
memset(&right_value470, 0, sizeof(void*));
memset(&new_fun_name_365, 0, sizeof(char*));
memset(&right_value471, 0, sizeof(void*));
memset(&right_value472, 0, sizeof(void*));
memset(&right_value473, 0, sizeof(void*));
memset(&right_value474, 0, sizeof(void*));
memset(&right_value475, 0, sizeof(void*));
memset(&fun_366, 0, sizeof(struct sFun*));
memset(&right_value476, 0, sizeof(void*));
memset(&fun2_367, 0, sizeof(struct sFun*));
memset(&right_value477, 0, sizeof(void*));
memset(&right_value478, 0, sizeof(void*));
memset(&right_value479, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
memset(&right_value484, 0, sizeof(void*));
memset(&asm_fun_369, 0, sizeof(char*));
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value487, 0, sizeof(void*));
memset(&right_value488, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
memset(&fun_370, 0, sizeof(struct sFun*));
memset(&right_value490, 0, sizeof(void*));
memset(&fun2_371, 0, sizeof(struct sFun*));
memset(&right_value491, 0, sizeof(void*));
memset(&right_value492, 0, sizeof(void*));
memset(&right_value493, 0, sizeof(void*));
memset(&right_value497, 0, sizeof(void*));
    header_head_310=info->p;
    multiple_assgin_var4=((struct tuple3$3sTypephcharphbool*)(right_value409=parse_type(info,(_Bool)0,(_Bool)1)));
    result_type_311=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
    var_name_312=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
    err_313=multiple_assgin_var4->v3;
    if(right_value409) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0); }
    if(!err_313) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    method_definition_314=(_Bool)0;
    {
        p_315=info->p;
        sline_316=info->sline;
        buf2_317=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value411=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value410=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1192))))))));
        if(right_value410) { come_call_finalizer(buffer_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value411) { come_call_finalizer(buffer_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0); }
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_317,*info->p);
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
        if(buffer_length(buf2_317)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_314=(_Bool)1;
        }
        info->p=p_315;
        info->sline=sline_316;
        if(buf2_317) { come_call_finalizer(buffer_finalize,buf2_317, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(method_definition_314) {
        multiple_assgin_var5=((struct tuple3$3sTypephcharphbool*)(right_value412=parse_type(info,(_Bool)0,(_Bool)1)));
        obj_type_320=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
        name_321=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
        err_322=multiple_assgin_var5->v3;
        if(right_value412) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0); }
        if(!err_322) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj94=base_fun_name_319;
        base_fun_name_319=(char*)come_increment_ref_count(((char*)(right_value414=string_clone(((char*)(right_value413=parse_word(info)))))));
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0); }
        if(right_value413) { right_value413 = come_decrement_ref_count(right_value413, (void*)0, (void*)0, 1, 0); }
        if(right_value414) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0); }
        __dec_obj95=fun_name_318;
        fun_name_318=(char*)come_increment_ref_count(((char*)(right_value417=string_clone(((char*)(right_value416=create_method_name(obj_type_320,(_Bool)0,((char*)(right_value415=__builtin_string(base_fun_name_319))),info)))))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0); }
        if(right_value415) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0); }
        if(right_value416) { right_value416 = come_decrement_ref_count(right_value416, (void*)0, (void*)0, 1, 0); }
        if(right_value417) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0); }
        if(obj_type_320) { come_call_finalizer(sType_finalize,obj_type_320, (void*)0, (void*)0, 0, 0, 0); }
        if(name_321) { name_321 = come_decrement_ref_count(name_321, (void*)0, (void*)0, 0, 0); }
    }
    else if(info->impl_type) {
        __dec_obj96=base_fun_name_319;
        base_fun_name_319=(char*)come_increment_ref_count(((char*)(right_value419=string_clone(((char*)(right_value418=parse_word(info)))))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0); }
        if(right_value418) { right_value418 = come_decrement_ref_count(right_value418, (void*)0, (void*)0, 1, 0); }
        if(right_value419) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0); }
        __dec_obj97=fun_name_318;
        fun_name_318=(char*)come_increment_ref_count(((char*)(right_value422=string_clone(((char*)(right_value421=create_method_name(info->impl_type,(_Bool)0,((char*)(right_value420=__builtin_string(base_fun_name_319))),info)))))));
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0); }
        if(right_value420) { right_value420 = come_decrement_ref_count(right_value420, (void*)0, (void*)0, 1, 0); }
        if(right_value421) { right_value421 = come_decrement_ref_count(right_value421, (void*)0, (void*)0, 1, 0); }
        if(right_value422) { right_value422 = come_decrement_ref_count(right_value422, (void*)0, (void*)0, 1, 0); }
    }
    else {
        __dec_obj98=fun_name_318;
        fun_name_318=(char*)come_increment_ref_count(((char*)(right_value424=string_clone(((char*)(right_value423=parse_word(info)))))));
        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0); }
        if(right_value423) { right_value423 = come_decrement_ref_count(right_value423, (void*)0, (void*)0, 1, 0); }
        if(right_value424) { right_value424 = come_decrement_ref_count(right_value424, (void*)0, (void*)0, 1, 0); }
        __dec_obj99=base_fun_name_319;
        base_fun_name_319=(char*)come_increment_ref_count(((char*)(right_value426=string_clone(((char*)(right_value425=__builtin_string(fun_name_318)))))));
        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0); }
        if(right_value425) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0); }
        if(right_value426) { right_value426 = come_decrement_ref_count(right_value426, (void*)0, (void*)0, 1, 0); }
    }
    multiple_assgin_var6=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value427=parse_params(info)));
    param_types_323=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var6->v1);
    param_names_324=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var6->v2);
    param_default_parametors_325=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var6->v3);
    var_args_326=multiple_assgin_var6->v4;
    if(right_value427) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0); }
    header_tail_327=info->p;
    header_buf_328=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value429=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value428=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1245))))))));
    if(right_value428) { come_call_finalizer(buffer_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value429) { come_call_finalizer(buffer_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append(header_buf_328,header_head_310,header_tail_327-header_head_310);
    buffer_append_char(header_buf_328,0);
    version_329=0;
    if(memcmp(info->p,"version",strlen("version"))==0) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_330=0;
        while(xisdigit(*info->p)) {
            n_330=n_330*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_329=n_330;
    }
    if(string_operator_equals(base_fun_name_319,"lambda")) {
        block_331=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value430=parse_block(info,(_Bool)0))));
        if(right_value430) { come_call_finalizer(sBlock_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0); }
        lambda_num_332++;
        __dec_obj100=fun_name_318;
        fun_name_318=(char*)come_increment_ref_count(((char*)(right_value431=xsprintf("lambda%d",lambda_num_332))));
        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0); }
        if(right_value431) { right_value431 = come_decrement_ref_count(right_value431, (void*)0, (void*)0, 1, 0); }
        result_type_311->mStatic=(_Bool)0;
        fun_333=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value435=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value432=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1278)))),(char*)come_increment_ref_count(((char*)(right_value433=__builtin_string(fun_name_318)))),(struct sType*)come_increment_ref_count(result_type_311),(struct list$1sTypeph*)come_increment_ref_count(param_types_323),(struct list$1charph*)come_increment_ref_count(param_names_324),(struct list$1charph*)come_increment_ref_count(param_default_parametors_325),(_Bool)0,var_args_326,(struct sBlock*)come_increment_ref_count(block_331),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value434=buffer_to_string(header_buf_328)))),info))));
        if(right_value432) { come_call_finalizer(sFun_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value433) { right_value433 = come_decrement_ref_count(right_value433, (void*)0, (void*)0, 1, 0); }
        if(right_value434) { right_value434 = come_decrement_ref_count(right_value434, (void*)0, (void*)0, 1, 0); }
        if(right_value435) { come_call_finalizer(sFun_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0); }
        fun2_334=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value436=__builtin_string(fun_name_318))));
        if(right_value436) { right_value436 = come_decrement_ref_count(right_value436, (void*)0, (void*)0, 1, 0); }
        if(fun2_334==((void*)0)||fun2_334->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value437=string_clone(fun_name_318)))),(struct sFun*)come_increment_ref_count(fun_333));
            if(right_value437) { right_value437 = come_decrement_ref_count(right_value437, (void*)0, (void*)0, 1, 0); }
        }
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1286);
        _inf_obj_value3=come_increment_ref_count(((struct sLambdaNode*)(right_value439=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value438=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1286)))),fun_333,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=sLambdaNode_finalize;
        _inf_value3->clone=sLambdaNode_clone;
        _inf_value3->compile=sLambdaNode_compile;
        _inf_value3->sline=sLambdaNode_sline;
        _inf_value3->sname=sLambdaNode_sname;
        _inf_value3->terminated=sLambdaNode_terminated;
        struct sNode* __result128__ = ((struct sNode*)(right_value442=_inf_value3));
        if(block_331) { come_call_finalizer(sBlock_finalize,block_331, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_333) { come_call_finalizer(sFun_finalize,fun_333, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value438) { come_call_finalizer(sLambdaNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value439) { come_call_finalizer(sLambdaNode_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0); }
        return __result128__;
    }
    else if(info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_336=(char*)come_increment_ref_count(((char*)(right_value443=get_none_generics_name(info->impl_type->mClass->mName))));
        if(right_value443) { right_value443 = come_decrement_ref_count(right_value443, (void*)0, (void*)0, 1, 0); }
        block_337=(char*)come_increment_ref_count(((char*)(right_value444=skip_block(info))));
        if(right_value444) { right_value444 = come_decrement_ref_count(right_value444, (void*)0, (void*)0, 1, 0); }
        fun_338=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value447=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value445=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1293)))),(struct sType*)come_increment_ref_count(info->impl_type),info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value446=__builtin_string(fun_name_318)))),(struct sType*)come_increment_ref_count(result_type_311),(struct list$1sTypeph*)come_increment_ref_count(param_types_323),(struct list$1charph*)come_increment_ref_count(param_names_324),var_args_326,(char*)come_increment_ref_count(block_337),info))));
        if(right_value445) { come_call_finalizer(sGenericsFun_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value446) { right_value446 = come_decrement_ref_count(right_value446, (void*)0, (void*)0, 1, 0); }
        if(right_value447) { come_call_finalizer(sGenericsFun_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0); }
        fun_name3_339=(char*)come_increment_ref_count(((char*)(right_value448=xsprintf("%s_%s",none_generics_name_336,base_fun_name_319))));
        if(right_value448) { right_value448 = come_decrement_ref_count(right_value448, (void*)0, (void*)0, 1, 0); }
        map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value452=__builtin_string(fun_name3_339)))),(struct sGenericsFun*)come_increment_ref_count(fun_338));
        if(right_value452) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0); }
        struct sNode* __result139__ = (struct sNode*)((void*)0);
        if(none_generics_name_336) { none_generics_name_336 = come_decrement_ref_count(none_generics_name_336, (void*)0, (void*)0, 0, 0); }
        if(block_337) { block_337 = come_decrement_ref_count(block_337, (void*)0, (void*)0, 0, 0); }
        if(fun_338) { come_call_finalizer(sGenericsFun_finalize,fun_338, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name3_339) { fun_name3_339 = come_decrement_ref_count(fun_name3_339, (void*)0, (void*)0, 0, 0); }
        return __result139__;
    }
    else if(*info->p==123) {
        block_359=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value453=parse_block(info,(_Bool)0))));
        if(right_value453) { come_call_finalizer(sBlock_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0); }
        static__360=(_Bool)0;
        if(result_type_311->mStatic) {
            result_type_311->mStatic=(_Bool)0;
            static__360=(_Bool)1;
        }
        if(version_329>0) {
            new_fun_name_361=(char*)come_increment_ref_count(((char*)(right_value455=xsprintf("%s_v%d",((char*)(right_value454=__builtin_string(fun_name_318))),version_329))));
            if(right_value454) { right_value454 = come_decrement_ref_count(right_value454, (void*)0, (void*)0, 1, 0); }
            if(right_value455) { right_value455 = come_decrement_ref_count(right_value455, (void*)0, (void*)0, 1, 0); }
            __dec_obj102=fun_name_318;
            fun_name_318=(char*)come_increment_ref_count(((char*)(right_value456=__builtin_string(new_fun_name_361))));
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0); }
            if(right_value456) { right_value456 = come_decrement_ref_count(right_value456, (void*)0, (void*)0, 1, 0); }
            if(new_fun_name_361) { new_fun_name_361 = come_decrement_ref_count(new_fun_name_361, (void*)0, (void*)0, 0, 0); }
        }
        fun_362=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value461=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value457=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1322)))),(char*)come_increment_ref_count(((char*)(right_value458=__builtin_string(fun_name_318)))),(struct sType*)come_increment_ref_count(result_type_311),(struct list$1sTypeph*)come_increment_ref_count(param_types_323),(struct list$1charph*)come_increment_ref_count(param_names_324),(struct list$1charph*)come_increment_ref_count(param_default_parametors_325),(_Bool)0,var_args_326,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value459=sBlock_clone(block_359)))),static__360,(char*)come_increment_ref_count(((char*)(right_value460=buffer_to_string(header_buf_328)))),info))));
        if(right_value457) { come_call_finalizer(sFun_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value458) { right_value458 = come_decrement_ref_count(right_value458, (void*)0, (void*)0, 1, 0); }
        if(right_value459) { come_call_finalizer(sBlock_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value460) { right_value460 = come_decrement_ref_count(right_value460, (void*)0, (void*)0, 1, 0); }
        if(right_value461) { come_call_finalizer(sFun_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0); }
        fun2_363=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value462=__builtin_string(fun_name_318))));
        if(right_value462) { right_value462 = come_decrement_ref_count(right_value462, (void*)0, (void*)0, 1, 0); }
        if(fun2_363==((void*)0)||fun2_363->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value463=string_clone(fun_name_318)))),(struct sFun*)come_increment_ref_count(fun_362));
            if(right_value463) { right_value463 = come_decrement_ref_count(right_value463, (void*)0, (void*)0, 1, 0); }
        }
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1331);
        _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value465=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value464=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1331)))),(struct sFun*)come_increment_ref_count(fun_362),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=sFunNode_finalize;
        _inf_value4->clone=sFunNode_clone;
        _inf_value4->compile=sFunNode_compile;
        _inf_value4->sline=sFunNode_sline;
        _inf_value4->sname=sFunNode_sname;
        _inf_value4->terminated=sFunNode_terminated;
        struct sNode* __result142__ = ((struct sNode*)(right_value469=_inf_value4));
        if(block_359) { come_call_finalizer(sBlock_finalize,block_359, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_362) { come_call_finalizer(sFun_finalize,fun_362, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value464) { come_call_finalizer(sFunNode_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value465) { come_call_finalizer(sFunNode_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0); }
        return __result142__;
    }
    else if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(version_329>0) {
            new_fun_name_365=(char*)come_increment_ref_count(((char*)(right_value470=xsprintf("%s_v%d",fun_name_318,version_329))));
            if(right_value470) { right_value470 = come_decrement_ref_count(right_value470, (void*)0, (void*)0, 1, 0); }
            __dec_obj105=fun_name_318;
            fun_name_318=(char*)come_increment_ref_count(((char*)(right_value471=__builtin_string(new_fun_name_365))));
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0); }
            if(right_value471) { right_value471 = come_decrement_ref_count(right_value471, (void*)0, (void*)0, 1, 0); }
            if(new_fun_name_365) { new_fun_name_365 = come_decrement_ref_count(new_fun_name_365, (void*)0, (void*)0, 0, 0); }
        }
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_311->mStatic=(_Bool)0;
            fun_366=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value475=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value472=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1349)))),(char*)come_increment_ref_count(((char*)(right_value473=__builtin_string(fun_name_318)))),(struct sType*)come_increment_ref_count(result_type_311),(struct list$1sTypeph*)come_increment_ref_count(param_types_323),(struct list$1charph*)come_increment_ref_count(param_names_324),(struct list$1charph*)come_increment_ref_count(param_default_parametors_325),(_Bool)1,var_args_326,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value474=buffer_to_string(header_buf_328)))),info))));
            if(right_value472) { come_call_finalizer(sFun_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value473) { right_value473 = come_decrement_ref_count(right_value473, (void*)0, (void*)0, 1, 0); }
            if(right_value474) { right_value474 = come_decrement_ref_count(right_value474, (void*)0, (void*)0, 1, 0); }
            if(right_value475) { come_call_finalizer(sFun_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0); }
            fun2_367=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value476=__builtin_string(fun_name_318))));
            if(right_value476) { right_value476 = come_decrement_ref_count(right_value476, (void*)0, (void*)0, 1, 0); }
            if(fun2_367==((void*)0)||fun2_367->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value477=string_clone(fun_name_318)))),(struct sFun*)come_increment_ref_count(fun_366));
                if(right_value477) { right_value477 = come_decrement_ref_count(right_value477, (void*)0, (void*)0, 1, 0); }
            }
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1357);
            _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value479=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value478=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1357)))),(struct sFun*)come_increment_ref_count(fun_366),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=sFunNode_finalize;
            _inf_value5->clone=sFunNode_clone;
            _inf_value5->compile=sFunNode_compile;
            _inf_value5->sline=sFunNode_sline;
            _inf_value5->sname=sFunNode_sname;
            _inf_value5->terminated=sFunNode_terminated;
            struct sNode* __result145__ = ((struct sNode*)(right_value483=_inf_value5));
            if(fun_366) { come_call_finalizer(sFun_finalize,fun_366, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value478) { come_call_finalizer(sFunNode_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value479) { come_call_finalizer(sFunNode_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0); }
            return __result145__;
        }
        else {
            asm_fun_369=(char*)come_increment_ref_count(((char*)(right_value484=parse_attribute(info))));
            if(right_value484) { right_value484 = come_decrement_ref_count(right_value484, (void*)0, (void*)0, 1, 0); }
            if(string_operator_not_equals(asm_fun_369,"")) {
                __dec_obj108=fun_name_318;
                fun_name_318=(char*)come_increment_ref_count(((char*)(right_value485=__builtin_string(asm_fun_369))));
                if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0); }
                if(right_value485) { right_value485 = come_decrement_ref_count(right_value485, (void*)0, (void*)0, 1, 0); }
            }
            expected_next_character(59,info);
            result_type_311->mStatic=(_Bool)0;
            fun_370=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value489=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value486=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1374)))),(char*)come_increment_ref_count(((char*)(right_value487=__builtin_string(fun_name_318)))),(struct sType*)come_increment_ref_count(result_type_311),(struct list$1sTypeph*)come_increment_ref_count(param_types_323),(struct list$1charph*)come_increment_ref_count(param_names_324),(struct list$1charph*)come_increment_ref_count(param_default_parametors_325),(_Bool)1,var_args_326,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value488=buffer_to_string(header_buf_328)))),info))));
            if(right_value486) { come_call_finalizer(sFun_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value487) { right_value487 = come_decrement_ref_count(right_value487, (void*)0, (void*)0, 1, 0); }
            if(right_value488) { right_value488 = come_decrement_ref_count(right_value488, (void*)0, (void*)0, 1, 0); }
            if(right_value489) { come_call_finalizer(sFun_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0); }
            fun2_371=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value490=__builtin_string(fun_name_318))));
            if(right_value490) { right_value490 = come_decrement_ref_count(right_value490, (void*)0, (void*)0, 1, 0); }
            if(fun2_371==((void*)0)||fun2_371->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value491=string_clone(fun_name_318)))),(struct sFun*)come_increment_ref_count(fun_370));
                if(right_value491) { right_value491 = come_decrement_ref_count(right_value491, (void*)0, (void*)0, 1, 0); }
            }
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1382);
            _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value493=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value492=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1382)))),(struct sFun*)come_increment_ref_count(fun_370),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=sFunNode_finalize;
            _inf_value6->clone=sFunNode_clone;
            _inf_value6->compile=sFunNode_compile;
            _inf_value6->sline=sFunNode_sline;
            _inf_value6->sname=sFunNode_sname;
            _inf_value6->terminated=sFunNode_terminated;
            struct sNode* __result148__ = ((struct sNode*)(right_value497=_inf_value6));
            if(asm_fun_369) { asm_fun_369 = come_decrement_ref_count(asm_fun_369, (void*)0, (void*)0, 0, 0); }
            if(fun_370) { come_call_finalizer(sFun_finalize,fun_370, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value492) { come_call_finalizer(sFunNode_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value493) { come_call_finalizer(sFunNode_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0); }
            return __result148__;
        }
    }
    else {
        err_msg(info,"invalid character(%c)(2)\n",*info->p);
        exit(2);
    }
    struct sNode* __result149__ = (struct sNode*)((void*)0);
    if(result_type_311) { come_call_finalizer(sType_finalize,result_type_311, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_312) { var_name_312 = come_decrement_ref_count(var_name_312, (void*)0, (void*)0, 0, 0); }
    if(fun_name_318) { fun_name_318 = come_decrement_ref_count(fun_name_318, (void*)0, (void*)0, 0, 0); }
    if(base_fun_name_319) { base_fun_name_319 = come_decrement_ref_count(base_fun_name_319, (void*)0, (void*)0, 0, 0); }
    if(param_types_323) { come_call_finalizer(list$1sTypephp_finalize,param_types_323, (void*)0, (void*)0, 0, 0, 0); }
    if(param_names_324) { come_call_finalizer(list$1charphp_finalize,param_names_324, (void*)0, (void*)0, 0, 0, 0); }
    if(param_default_parametors_325) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_325, (void*)0, (void*)0, 0, 0, 0); }
    if(header_buf_328) { come_call_finalizer(buffer_finalize,header_buf_328, (void*)0, (void*)0, 0, 0, 0); }
    return __result149__;
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
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* right_value440;
struct sLambdaNode* result_335;
void* right_value441;
char* __dec_obj101;
memset(&right_value440, 0, sizeof(void*));
memset(&result_335, 0, sizeof(struct sLambdaNode*));
memset(&right_value441, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sLambdaNode* __result126__ = (void*)0;
                return __result126__;
            }
            result_335=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value440=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1288))));
            if(right_value440) { come_call_finalizer(sLambdaNode_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_335->mFun=self->mFun;
            }
            if(self!=((void*)0)) {
                result_335->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj101=result_335->sname;
                result_335->sname=(char*)come_increment_ref_count(((char*)(right_value441=string_clone(self->sname))));
                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0); }
                if(right_value441) { right_value441 = come_decrement_ref_count(right_value441, (void*)0, (void*)0, 1, 0); }
            }
            struct sLambdaNode* __result127__ = result_335;
            if(result_335) { come_call_finalizer(sLambdaNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 1); }
            return __result127__;
}

static int list$1charphp_length(struct list$1charph* self){
        int __result129__ = self->len;
        return __result129__;
}

static void map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
int hash_355;
int it_356;
_Bool same_key_exist_357;
char* it2_358;
memset(&hash_355, 0, sizeof(int));
memset(&it_356, 0, sizeof(int));
memset(&same_key_exist_357, 0, sizeof(_Bool));
memset(&it2_358, 0, sizeof(char*));
            if(self->len*10>=self->size) {
                map$2charphsGenericsFunphp_rehash(self);
            }
            hash_355=string_get_hash_key(key)%self->size;
            it_356=hash_355;
            while((_Bool)1) {
                if(self->item_existance[it_356]) {
                    if(charp_equals(self->keys[it_356],key)) {
                        if(1) {
                            list$1charpp_remove(self->key_list,self->keys[it_356]);
                            if(self->keys[it_356]) { self->keys[it_356] = come_decrement_ref_count(self->keys[it_356], (void*)0, (void*)0, 0, 0); }
                            self->keys[it_356]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charpp_remove(self->key_list,self->keys[it_356]);
                            self->keys[it_356]=key;
                        }
                        if(1) {
                            if(self->items[it_356]) { come_call_finalizer(sGenericsFunp_finalize,self->items[it_356], (void*)0, (void*)0, 0, 0, 0); }
                            self->items[it_356]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_356]=item;
                        }
                        break;
                    }
                    it_356++;
                    if(it_356>=self->size) {
                        it_356=0;
                    }
                    else if(it_356==hash_355) {
                        printf("unexpected error in map.insert\n");
                        exit(2);
                    }
                }
                else {
                    self->item_existance[it_356]=(_Bool)1;
                    if(1) {
                        self->keys[it_356]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_356]=key;
                    }
                    if(1) {
                        self->items[it_356]=(struct sGenericsFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_356]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_357=(_Bool)0;
            for(
            it2_358=list$1charpp_begin(self->key_list);
            !list$1charpp_end(self->key_list);
            it_356=list$1charpp_next(self->key_list)
            ){
                if(charp_equals(it2_358,key)) {
                    same_key_exist_357=(_Bool)1;
                }
            }
            if(!same_key_exist_357) {
                list$1charpp_push_back(self->key_list,key);
            }
            if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
            if(item) { come_call_finalizer(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self){
int size_340;
void* right_value449;
char** keys_341;
void* right_value450;
struct sGenericsFun** items_342;
void* right_value451;
_Bool* item_existance_343;
int len_344;
char* it_346;
struct sGenericsFun* default_value_348;
struct sGenericsFun* it2_351;
int hash_352;
int n_353;
struct sGenericsFun* default_value_354;
memset(&size_340, 0, sizeof(int));
memset(&right_value449, 0, sizeof(void*));
memset(&keys_341, 0, sizeof(char**));
memset(&right_value450, 0, sizeof(void*));
memset(&items_342, 0, sizeof(struct sGenericsFun**));
memset(&right_value451, 0, sizeof(void*));
memset(&item_existance_343, 0, sizeof(_Bool*));
memset(&len_344, 0, sizeof(int));
memset(&it_346, 0, sizeof(char*));
memset(&default_value_348, 0, sizeof(struct sGenericsFun*)); /* bbb */
memset(&it2_351, 0, sizeof(struct sGenericsFun*));
memset(&hash_352, 0, sizeof(int));
memset(&n_353, 0, sizeof(int));
memset(&default_value_354, 0, sizeof(struct sGenericsFun*)); /* bbb */
                    size_340=self->size*10;
                    keys_341=((char**)(right_value449=(char**)come_calloc(1, sizeof(char*)*(1*(size_340)), "05function2.c", 1301)));
                    items_342=((struct sGenericsFun**)(right_value450=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_340)), "05function2.c", 1302)));
                    item_existance_343=((_Bool*)(right_value451=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_340)), "05function2.c", 1303)));
                    len_344=0;
                    for(
                    it_346=map$2charphsGenericsFunphp_begin(self);
                    !map$2charphsGenericsFunphp_end(self);
                    it_346=map$2charphsGenericsFunphp_next(self)
                    ){
                        it2_351=map$2charphsGenericsFunphp_at(self,it_346,default_value_348);
                        hash_352=charp_get_hash_key(it_346)%size_340;
                        n_353=hash_352;
                        while((_Bool)1) {
                            if(item_existance_343[n_353]) {
                                n_353++;
                                if(n_353>=size_340) {
                                    n_353=0;
                                }
                                else if(n_353==hash_352) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    exit(2);
                                }
                            }
                            else {
                                item_existance_343[n_353]=(_Bool)1;
                                keys_341[n_353]=it_346;
                                items_342[n_353]=map$2charphsGenericsFunphp_at(self,it_346,default_value_354);
                                len_344++;
                                break;
                            }
                        }
                    }
                    come_free_object((char*)self->items);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                    come_free_object((char*)self->keys);
                    self->keys=keys_341;
                    self->items=items_342;
                    self->item_existance=item_existance_343;
                    self->size=size_340;
                    self->len=len_344;
}

static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self){
char* result_345;
memset(&result_345, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            char* __result130__ = self->key_list->it->item;
                            return __result130__;
                        }
                        memset(&result_345,0,sizeof(char*));
                        char* __result131__ = result_345;
                        return __result131__;
}

static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self){
                        _Bool __result132__ = self->key_list->it==((void*)0);
                        return __result132__;
}

static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self){
char* result_347;
memset(&result_347, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            char* __result133__ = self->key_list->it->item;
                            return __result133__;
                        }
                        memset(&result_347,0,sizeof(char*));
                        char* __result134__ = result_347;
                        return __result134__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
int hash_349;
int it_350;
memset(&hash_349, 0, sizeof(int));
memset(&it_350, 0, sizeof(int));
                            hash_349=string_get_hash_key(((char*)key))%self->size;
                            it_350=hash_349;
                            while((_Bool)1) {
                                if(self->item_existance[it_350]) {
                                    if(charp_equals(self->keys[it_350],key)) {
                                        struct sGenericsFun* __result135__ = self->items[it_350];
                                        return __result135__;
                                    }
                                    it_350++;
                                    if(it_350>=self->size) {
                                        it_350=0;
                                    }
                                    else if(it_350==hash_349) {
                                        struct sGenericsFun* __result136__ = default_value;
                                        return __result136__;
                                    }
                                }
                                else {
                                    struct sGenericsFun* __result137__ = default_value;
                                    return __result137__;
                                }
                            }
                            struct sGenericsFun* __result138__ = default_value;
                            return __result138__;
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
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* finalizer_373;
void* right_value498;
char* real_fun_name_374;
void* right_value499;
struct sType* type2_375;
struct sClass* klass_376;
void* right_value500;
void* right_value501;
struct buffer* source_377;
struct tuple2$2charphsTypeph* it_379;
struct tuple2$2charphsTypeph* multiple_assgin_var7;
char* name_381;
struct sType* field_type_382;
char* p_384;
int sline_385;
char* head_386;
struct buffer* source3_387;
struct buffer* __dec_obj111;
void* right_value502;
struct sBlock* block_388;
void* right_value503;
void* right_value504;
struct sType* result_type_389;
void* right_value505;
char* name_390;
void* right_value506;
struct sType* self_type_391;
struct sType* __list_values19___392[1];
void* right_value507;
void* right_value508;
struct list$1sTypeph* param_types_393;
void* right_value509;
char* __list_values20___394[1];
void* right_value510;
void* right_value511;
struct list$1charph* param_names_395;
void* right_value512;
void* right_value513;
struct list$1charph* param_default_parametors_396;
void* right_value514;
void* right_value515;
struct buffer* header_buf_397;
void* right_value516;
int i_398;
struct sType* param_type_399;
char* param_name_403;
void* right_value517;
void* right_value518;
void* right_value519;
void* right_value520;
struct sFun* fun_404;
void* right_value521;
struct sFun* fun2_405;
void* right_value522;
void* right_value523;
void* right_value524;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value528;
struct sNode* node_407;
struct buffer* __dec_obj114;
void* right_value529;
void* right_value530;
memset(&finalizer_373, 0, sizeof(struct sFun*));
memset(&right_value498, 0, sizeof(void*));
memset(&real_fun_name_374, 0, sizeof(char*));
memset(&right_value499, 0, sizeof(void*));
memset(&type2_375, 0, sizeof(struct sType*));
memset(&klass_376, 0, sizeof(struct sClass*));
memset(&right_value500, 0, sizeof(void*));
memset(&right_value501, 0, sizeof(void*));
memset(&source_377, 0, sizeof(struct buffer*));
memset(&it_379, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_381, 0, sizeof(char*)); /* ccc */
memset(&field_type_382, 0, sizeof(struct sType*)); /* ccc */
memset(&name_381, 0, sizeof(char*)); /* eee */
memset(&field_type_382, 0, sizeof(struct sType*)); /* eee */
memset(&p_384, 0, sizeof(char*));
memset(&sline_385, 0, sizeof(int));
memset(&head_386, 0, sizeof(char*));
memset(&source3_387, 0, sizeof(struct buffer*));
memset(&right_value502, 0, sizeof(void*));
memset(&block_388, 0, sizeof(struct sBlock*));
memset(&right_value503, 0, sizeof(void*));
memset(&right_value504, 0, sizeof(void*));
memset(&result_type_389, 0, sizeof(struct sType*));
memset(&right_value505, 0, sizeof(void*));
memset(&name_390, 0, sizeof(char*));
memset(&right_value506, 0, sizeof(void*));
memset(&self_type_391, 0, sizeof(struct sType*));
memset(&right_value507, 0, sizeof(void*));
memset(&right_value508, 0, sizeof(void*));
memset(&param_types_393, 0, sizeof(struct list$1sTypeph*));
memset(&right_value509, 0, sizeof(void*));
memset(&right_value510, 0, sizeof(void*));
memset(&right_value511, 0, sizeof(void*));
memset(&param_names_395, 0, sizeof(struct list$1charph*));
memset(&right_value512, 0, sizeof(void*));
memset(&right_value513, 0, sizeof(void*));
memset(&param_default_parametors_396, 0, sizeof(struct list$1charph*));
memset(&right_value514, 0, sizeof(void*));
memset(&right_value515, 0, sizeof(void*));
memset(&header_buf_397, 0, sizeof(struct buffer*));
memset(&right_value516, 0, sizeof(void*));
memset(&i_398, 0, sizeof(int));
memset(&param_type_399, 0, sizeof(struct sType*));
memset(&param_name_403, 0, sizeof(char*));
memset(&right_value517, 0, sizeof(void*));
memset(&right_value518, 0, sizeof(void*));
memset(&right_value519, 0, sizeof(void*));
memset(&right_value520, 0, sizeof(void*));
memset(&fun_404, 0, sizeof(struct sFun*));
memset(&right_value521, 0, sizeof(void*));
memset(&fun2_405, 0, sizeof(struct sFun*));
memset(&right_value522, 0, sizeof(void*));
memset(&right_value523, 0, sizeof(void*));
memset(&right_value524, 0, sizeof(void*));
memset(&right_value528, 0, sizeof(void*));
memset(&node_407, 0, sizeof(struct sNode*));
memset(&right_value529, 0, sizeof(void*));
memset(&right_value530, 0, sizeof(void*));
    finalizer_373=((void*)0);
    real_fun_name_374=(char*)come_increment_ref_count(((char*)(right_value498=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value498) { right_value498 = come_decrement_ref_count(right_value498, (void*)0, (void*)0, 1, 0); }
    type2_375=(struct sType*)come_increment_ref_count(((struct sType*)(right_value499=solve_generics(type,type,info))));
    if(right_value499) { come_call_finalizer(sType_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_375;
    klass_376=type->mClass;
    if(type->mPointerNum>0&&klass_376->mStruct) {
        source_377=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value501=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value500=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1406))))))));
        if(right_value500) { come_call_finalizer(buffer_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value501) { come_call_finalizer(buffer_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_377,123);
        klass_376=map$2charphsClassphp_operator_load_element(info->classes,klass_376->mName);
        for(
        it_379=list$1tuple2$2charphsTypephphp_begin((klass_376->mFields));
        !list$1tuple2$2charphsTypephphp_end((klass_376->mFields));
        it_379=list$1tuple2$2charphsTypephphp_next((klass_376->mFields))
        ){
            multiple_assgin_var7=it_379;
            name_381=(char*)come_increment_ref_count(multiple_assgin_var7->v1);
            field_type_382=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v2);
            if(string_operator_equals(type->mClass->mName,field_type_382->mClass->mName)&&type->mPointerNum==field_type_382->mPointerNum&&field_type_382->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_382->mHeap) {
                char source2_383[1024];
                memset(&source2_383, 0, sizeof(source2_383)); /* aaa */
                snprintf(source2_383,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_381,name_381);
                buffer_append_str(source_377,source2_383);
            }
            if(name_381) { name_381 = come_decrement_ref_count(name_381, (void*)0, (void*)0, 0, 0); }
            if(field_type_382) { come_call_finalizer(sType_finalize,field_type_382, (void*)0, (void*)0, 0, 0, 0); }
        }
        buffer_append_char(source_377,125);
        p_384=info->p;
        sline_385=info->sline;
        head_386=info->head;
        source3_387=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj111=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_377);
        if(__dec_obj111) { come_call_finalizer(buffer_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0); }
        info->p=source_377->buf;
        info->head=source_377->buf;
        block_388=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value502=parse_block(info,(_Bool)0))));
        if(right_value502) { come_call_finalizer(sBlock_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0); }
        result_type_389=(struct sType*)come_increment_ref_count(((struct sType*)(right_value504=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value503=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1441)))),"void",info,(_Bool)0))));
        if(right_value503) { come_call_finalizer(sType_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value504) { come_call_finalizer(sType_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0); }
        name_390=(char*)come_increment_ref_count(((char*)(right_value505=string_clone(real_fun_name_374))));
        if(right_value505) { right_value505 = come_decrement_ref_count(right_value505, (void*)0, (void*)0, 1, 0); }
        self_type_391=(struct sType*)come_increment_ref_count(((struct sType*)(right_value506=sType_clone(type))));
        if(right_value506) { come_call_finalizer(sType_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0); }
        self_type_391->mHeap=(_Bool)0;
        if(self_type_391->mPointerNum>1) {
            self_type_391->mPointerNum=1;
        }
        {__list_values19___392[0]=come_increment_ref_count(self_type_391);
}        param_types_393=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value508=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value507=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1448)))),1,__list_values19___392))));
        if(right_value508) { come_call_finalizer(list$1sTypephp_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values20___394[0]=come_increment_ref_count(((char*)(right_value509=__builtin_string("self"))));
}        param_names_395=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value511=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value510=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1449)))),1,__list_values20___394))));
        if(right_value509) { right_value509 = come_decrement_ref_count(right_value509, (void*)0, (void*)0, 1, 0); }
        if(right_value511) { come_call_finalizer(list$1charphp_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_396=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value513=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value512=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1450))))))));
        if(right_value513) { come_call_finalizer(list$1charphp_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_397=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value515=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value514=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1452))))))));
        if(right_value514) { come_call_finalizer(buffer_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value515) { come_call_finalizer(buffer_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_397,((char*)(right_value516=make_come_type_name_string(result_type_389,info))));
        if(right_value516) { right_value516 = come_decrement_ref_count(right_value516, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_397," ");
        buffer_append_str(header_buf_397,real_fun_name_374);
        buffer_append_str(header_buf_397,"(");
        for(
        i_398=0;
        i_398<list$1sTypephp_length(param_types_393);
        i_398++
        ){
            param_type_399=list$1sTypephp_operator_load_element(param_types_393,i_398);
            param_name_403=list$1charphp_operator_load_element(param_names_395,i_398);
            buffer_append_str(header_buf_397,((char*)(right_value517=make_come_type_name_string(param_type_399,info))));
            if(right_value517) { right_value517 = come_decrement_ref_count(right_value517, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_397," ");
            buffer_append_str(header_buf_397,param_name_403);
            if(i_398!=list$1sTypephp_length(param_types_393)-1) {
                buffer_append_str(header_buf_397,",");
            }
        }
        buffer_append_str(header_buf_397,")");
        result_type_389->mStatic=(_Bool)0;
        fun_404=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value520=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value518=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1480)))),(char*)come_increment_ref_count(name_390),(struct sType*)come_increment_ref_count(result_type_389),(struct list$1sTypeph*)come_increment_ref_count(param_types_393),(struct list$1charph*)come_increment_ref_count(param_names_395),(struct list$1charph*)come_increment_ref_count(param_default_parametors_396),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_388),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value519=buffer_to_string(header_buf_397)))),info))));
        if(right_value518) { come_call_finalizer(sFun_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value519) { right_value519 = come_decrement_ref_count(right_value519, (void*)0, (void*)0, 1, 0); }
        if(right_value520) { come_call_finalizer(sFun_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0); }
        fun2_405=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value521=__builtin_string(fun_name))));
        if(right_value521) { right_value521 = come_decrement_ref_count(right_value521, (void*)0, (void*)0, 1, 0); }
        if(fun2_405==((void*)0)||fun2_405->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value522=string_clone(name_390)))),(struct sFun*)come_increment_ref_count(fun_404));
            if(right_value522) { right_value522 = come_decrement_ref_count(right_value522, (void*)0, (void*)0, 1, 0); }
        }
        finalizer_373=fun_404;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1490);
        _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value524=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value523=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1490)))),(struct sFun*)come_increment_ref_count(fun_404),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=sFunNode_finalize;
        _inf_value7->clone=sFunNode_clone;
        _inf_value7->compile=sFunNode_compile;
        _inf_value7->sline=sFunNode_sline;
        _inf_value7->sname=sFunNode_sname;
        _inf_value7->terminated=sFunNode_terminated;
        node_407=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value528=_inf_value7)));
        if(right_value523) { come_call_finalizer(sFunNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value524) { come_call_finalizer(sFunNode_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value528) { right_value528 = come_decrement_ref_count(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0); } 
        if(!node_407->compile(node_407->_protocol_obj,info)) {
            err_msg(info,"compiling is failed(X)");
            exit(2);
        }
        __dec_obj114=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_387);
        if(__dec_obj114) { come_call_finalizer(buffer_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0); }
        info->p=p_384;
        info->head=head_386;
        info->sline=sline_385;
        if(source_377) { come_call_finalizer(buffer_finalize,source_377, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_387) { come_call_finalizer(buffer_finalize,source3_387, (void*)0, (void*)0, 0, 0, 0); }
        if(block_388) { come_call_finalizer(sBlock_finalize,block_388, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_389) { come_call_finalizer(sType_finalize,result_type_389, (void*)0, (void*)0, 0, 0, 0); }
        if(name_390) { name_390 = come_decrement_ref_count(name_390, (void*)0, (void*)0, 0, 0); }
        if(self_type_391) { come_call_finalizer(sType_finalize,self_type_391, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_393) { come_call_finalizer(list$1sTypephp_finalize,param_types_393, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_395) { come_call_finalizer(list$1charphp_finalize,param_names_395, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_396) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_396, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_397) { come_call_finalizer(buffer_finalize,header_buf_397, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_404) { come_call_finalizer(sFun_finalize,fun_404, (void*)0, (void*)0, 0, 0, 0); }
        if(node_407) { node_407 = come_decrement_ref_count(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result162__ = ((struct tuple2$2sFunpcharph*)(right_value530=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value529=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1503)))),finalizer_373,(char*)come_increment_ref_count(real_fun_name_374))));
    if(real_fun_name_374) { real_fun_name_374 = come_decrement_ref_count(real_fun_name_374, (void*)0, (void*)0, 0, 0); }
    if(type2_375) { come_call_finalizer(sType_finalize,type2_375, (void*)0, (void*)0, 0, 0, 0); }
    return __result162__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_378;
memset(&result_378, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct tuple2$2charphsTypeph* __result150__ = self->it->item;
                return __result150__;
            }
            memset(&result_378,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result151__ = result_378;
            return __result151__;
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
            _Bool __result152__ = self->it==((void*)0);
            return __result152__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_380;
memset(&result_380, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct tuple2$2charphsTypeph* __result153__ = self->it->item;
                return __result153__;
            }
            memset(&result_380,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result154__ = result_380;
            return __result154__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
            int __result155__ = self->len;
            return __result155__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index){
char* default_value_400;
memset(&default_value_400, 0, sizeof(char*)); /* bbb */
                memset(&default_value_400,0,sizeof(char*));
                char* __result158__ = list$1charphp_item(self,index,default_value_400);
                return __result158__;
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_401;
int i_402;
memset(&it_401, 0, sizeof(struct list_item$1charph*));
memset(&i_402, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_401=self->head;
                    i_402=0;
                    while(it_401!=((void*)0)) {
                        if(position==i_402) {
                            char* __result156__ = it_401->item;
                            return __result156__;
                        }
                        it_401=it_401->next;
                        i_402++;
                    }
                    char* __result157__ = default_value;
                    return __result157__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
char* __dec_obj115;
        self->v1=v1;
        __dec_obj115=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0); }
        struct tuple2$2sFunpcharph* __result161__ = self;
        if(self) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1); }
        return __result161__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
            }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* equaler_408;
void* right_value531;
char* real_fun_name_409;
void* right_value532;
struct sType* type2_410;
struct sClass* klass_411;
void* right_value533;
void* right_value534;
struct buffer* source_412;
char* name_413;
struct tuple2$2charphsTypeph* it_415;
struct tuple2$2charphsTypeph* multiple_assgin_var8;
char* name_416;
struct sType* field_type_417;
char* p_419;
int sline_420;
char* head_421;
struct buffer* source3_422;
struct buffer* __dec_obj116;
void* right_value535;
struct sBlock* block_423;
void* right_value536;
void* right_value537;
struct sType* result_type_424;
void* right_value538;
char* name_425;
void* right_value539;
struct sType* left_type_426;
void* right_value540;
struct sType* right_type_427;
struct sType* __list_values21___428[2];
void* right_value541;
void* right_value542;
struct list$1sTypeph* param_types_429;
void* right_value543;
void* right_value544;
char* __list_values22___430[2];
void* right_value545;
void* right_value546;
struct list$1charph* param_names_431;
void* right_value547;
void* right_value548;
struct list$1charph* param_default_parametors_432;
void* right_value549;
void* right_value550;
struct buffer* header_buf_433;
void* right_value551;
int i_434;
struct sType* param_type_435;
char* param_name_436;
void* right_value552;
void* right_value553;
void* right_value554;
void* right_value555;
struct sFun* fun_437;
void* right_value556;
struct sFun* fun2_438;
void* right_value557;
void* right_value558;
void* right_value559;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value563;
struct sNode* node_440;
struct buffer* __dec_obj119;
void* right_value564;
void* right_value565;
memset(&equaler_408, 0, sizeof(struct sFun*));
memset(&right_value531, 0, sizeof(void*));
memset(&real_fun_name_409, 0, sizeof(char*));
memset(&right_value532, 0, sizeof(void*));
memset(&type2_410, 0, sizeof(struct sType*));
memset(&klass_411, 0, sizeof(struct sClass*));
memset(&right_value533, 0, sizeof(void*));
memset(&right_value534, 0, sizeof(void*));
memset(&source_412, 0, sizeof(struct buffer*));
memset(&name_413, 0, sizeof(char*));
memset(&it_415, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_416, 0, sizeof(char*)); /* ccc */
memset(&field_type_417, 0, sizeof(struct sType*)); /* ccc */
memset(&name_416, 0, sizeof(char*)); /* eee */
memset(&field_type_417, 0, sizeof(struct sType*)); /* eee */
memset(&p_419, 0, sizeof(char*));
memset(&sline_420, 0, sizeof(int));
memset(&head_421, 0, sizeof(char*));
memset(&source3_422, 0, sizeof(struct buffer*));
memset(&right_value535, 0, sizeof(void*));
memset(&block_423, 0, sizeof(struct sBlock*));
memset(&right_value536, 0, sizeof(void*));
memset(&right_value537, 0, sizeof(void*));
memset(&result_type_424, 0, sizeof(struct sType*));
memset(&right_value538, 0, sizeof(void*));
memset(&name_425, 0, sizeof(char*));
memset(&right_value539, 0, sizeof(void*));
memset(&left_type_426, 0, sizeof(struct sType*));
memset(&right_value540, 0, sizeof(void*));
memset(&right_type_427, 0, sizeof(struct sType*));
memset(&right_value541, 0, sizeof(void*));
memset(&right_value542, 0, sizeof(void*));
memset(&param_types_429, 0, sizeof(struct list$1sTypeph*));
memset(&right_value543, 0, sizeof(void*));
memset(&right_value544, 0, sizeof(void*));
memset(&right_value545, 0, sizeof(void*));
memset(&right_value546, 0, sizeof(void*));
memset(&param_names_431, 0, sizeof(struct list$1charph*));
memset(&right_value547, 0, sizeof(void*));
memset(&right_value548, 0, sizeof(void*));
memset(&param_default_parametors_432, 0, sizeof(struct list$1charph*));
memset(&right_value549, 0, sizeof(void*));
memset(&right_value550, 0, sizeof(void*));
memset(&header_buf_433, 0, sizeof(struct buffer*));
memset(&right_value551, 0, sizeof(void*));
memset(&i_434, 0, sizeof(int));
memset(&param_type_435, 0, sizeof(struct sType*));
memset(&param_name_436, 0, sizeof(char*));
memset(&right_value552, 0, sizeof(void*));
memset(&right_value553, 0, sizeof(void*));
memset(&right_value554, 0, sizeof(void*));
memset(&right_value555, 0, sizeof(void*));
memset(&fun_437, 0, sizeof(struct sFun*));
memset(&right_value556, 0, sizeof(void*));
memset(&fun2_438, 0, sizeof(struct sFun*));
memset(&right_value557, 0, sizeof(void*));
memset(&right_value558, 0, sizeof(void*));
memset(&right_value559, 0, sizeof(void*));
memset(&right_value563, 0, sizeof(void*));
memset(&node_440, 0, sizeof(struct sNode*));
memset(&right_value564, 0, sizeof(void*));
memset(&right_value565, 0, sizeof(void*));
    equaler_408=((void*)0);
    real_fun_name_409=(char*)come_increment_ref_count(((char*)(right_value531=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value531) { right_value531 = come_decrement_ref_count(right_value531, (void*)0, (void*)0, 1, 0); }
    type2_410=(struct sType*)come_increment_ref_count(((struct sType*)(right_value532=solve_generics(type,type,info))));
    if(right_value532) { come_call_finalizer(sType_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_410;
    klass_411=type->mClass;
    if(type->mPointerNum>0&&!klass_411->mNumber) {
        source_412=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value534=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value533=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1519))))))));
        if(right_value533) { come_call_finalizer(buffer_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value534) { come_call_finalizer(buffer_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_412,123);
        if(klass_411->mProtocol) {
            name_413="_protocol_obj";
            char source2_414[1024];
            memset(&source2_414, 0, sizeof(source2_414)); /* aaa */
            snprintf(source2_414,1024,"return left.%s.equals(right.%s);\n",name_413,name_413);
            buffer_append_str(source_412,source2_414);
        }
        else {
            klass_411=map$2charphsClassphp_operator_load_element(info->classes,klass_411->mName);
            for(
            it_415=list$1tuple2$2charphsTypephphp_begin((klass_411->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_411->mFields));
            it_415=list$1tuple2$2charphsTypephphp_next((klass_411->mFields))
            ){
                multiple_assgin_var8=it_415;
                name_416=(char*)come_increment_ref_count(multiple_assgin_var8->v1);
                field_type_417=(struct sType*)come_increment_ref_count(multiple_assgin_var8->v2);
                if(string_operator_equals(type->mClass->mName,field_type_417->mClass->mName)&&type->mPointerNum==field_type_417->mPointerNum&&field_type_417->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_418[1024];
                memset(&source2_418, 0, sizeof(source2_418)); /* aaa */
                snprintf(source2_418,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_416,name_416);
                buffer_append_str(source_412,source2_418);
                if(name_416) { name_416 = come_decrement_ref_count(name_416, (void*)0, (void*)0, 0, 0); }
                if(field_type_417) { come_call_finalizer(sType_finalize,field_type_417, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_str(source_412,"return true;");
        buffer_append_char(source_412,125);
        p_419=info->p;
        sline_420=info->sline;
        head_421=info->head;
        source3_422=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj116=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_412);
        if(__dec_obj116) { come_call_finalizer(buffer_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0); }
        info->p=source_412->buf;
        info->head=source_412->buf;
        block_423=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value535=parse_block(info,(_Bool)0))));
        if(right_value535) { come_call_finalizer(sBlock_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0); }
        result_type_424=(struct sType*)come_increment_ref_count(((struct sType*)(right_value537=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value536=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1561)))),"bool",info,(_Bool)0))));
        if(right_value536) { come_call_finalizer(sType_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value537) { come_call_finalizer(sType_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0); }
        name_425=(char*)come_increment_ref_count(((char*)(right_value538=string_clone(real_fun_name_409))));
        if(right_value538) { right_value538 = come_decrement_ref_count(right_value538, (void*)0, (void*)0, 1, 0); }
        left_type_426=(struct sType*)come_increment_ref_count(((struct sType*)(right_value539=sType_clone(type))));
        if(right_value539) { come_call_finalizer(sType_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0); }
        left_type_426->mHeap=(_Bool)0;
        right_type_427=(struct sType*)come_increment_ref_count(((struct sType*)(right_value540=sType_clone(type))));
        if(right_value540) { come_call_finalizer(sType_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0); }
        right_type_427->mHeap=(_Bool)0;
        {__list_values21___428[0]=come_increment_ref_count(left_type_426);
__list_values21___428[1]=come_increment_ref_count(right_type_427);
}        param_types_429=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value542=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value541=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1567)))),2,__list_values21___428))));
        if(right_value542) { come_call_finalizer(list$1sTypephp_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values22___430[0]=come_increment_ref_count(((char*)(right_value543=__builtin_string("left"))));
__list_values22___430[1]=come_increment_ref_count(((char*)(right_value544=__builtin_string("right"))));
}        param_names_431=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value546=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value545=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1568)))),2,__list_values22___430))));
        if(right_value543) { right_value543 = come_decrement_ref_count(right_value543, (void*)0, (void*)0, 1, 0); }
        if(right_value544) { right_value544 = come_decrement_ref_count(right_value544, (void*)0, (void*)0, 1, 0); }
        if(right_value546) { come_call_finalizer(list$1charphp_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_432=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value548=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value547=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1569))))))));
        if(right_value548) { come_call_finalizer(list$1charphp_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_433=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value550=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value549=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1571))))))));
        if(right_value549) { come_call_finalizer(buffer_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value550) { come_call_finalizer(buffer_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_433,((char*)(right_value551=make_come_type_name_string(result_type_424,info))));
        if(right_value551) { right_value551 = come_decrement_ref_count(right_value551, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_433," ");
        buffer_append_str(header_buf_433,real_fun_name_409);
        buffer_append_str(header_buf_433,"(");
        for(
        i_434=0;
        i_434<list$1sTypephp_length(param_types_429);
        i_434++
        ){
            param_type_435=list$1sTypephp_operator_load_element(param_types_429,i_434);
            param_name_436=list$1charphp_operator_load_element(param_names_431,i_434);
            buffer_append_str(header_buf_433,((char*)(right_value552=make_come_type_name_string(param_type_435,info))));
            if(right_value552) { right_value552 = come_decrement_ref_count(right_value552, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_433," ");
            buffer_append_str(header_buf_433,param_name_436);
            if(i_434!=list$1sTypephp_length(param_types_429)-1) {
                buffer_append_str(header_buf_433,",");
            }
        }
        buffer_append_str(header_buf_433,")");
        result_type_424->mStatic=(_Bool)0;
        fun_437=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value555=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value553=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1599)))),(char*)come_increment_ref_count(name_425),(struct sType*)come_increment_ref_count(result_type_424),(struct list$1sTypeph*)come_increment_ref_count(param_types_429),(struct list$1charph*)come_increment_ref_count(param_names_431),(struct list$1charph*)come_increment_ref_count(param_default_parametors_432),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_423),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value554=buffer_to_string(header_buf_433)))),info))));
        if(right_value553) { come_call_finalizer(sFun_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value554) { right_value554 = come_decrement_ref_count(right_value554, (void*)0, (void*)0, 1, 0); }
        if(right_value555) { come_call_finalizer(sFun_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0); }
        fun2_438=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value556=__builtin_string(fun_name))));
        if(right_value556) { right_value556 = come_decrement_ref_count(right_value556, (void*)0, (void*)0, 1, 0); }
        if(fun2_438==((void*)0)||fun2_438->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value557=string_clone(name_425)))),(struct sFun*)come_increment_ref_count(fun_437));
            if(right_value557) { right_value557 = come_decrement_ref_count(right_value557, (void*)0, (void*)0, 1, 0); }
        }
        equaler_408=fun_437;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1609);
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value559=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value558=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1609)))),(struct sFun*)come_increment_ref_count(fun_437),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=sFunNode_finalize;
        _inf_value8->clone=sFunNode_clone;
        _inf_value8->compile=sFunNode_compile;
        _inf_value8->sline=sFunNode_sline;
        _inf_value8->sname=sFunNode_sname;
        _inf_value8->terminated=sFunNode_terminated;
        node_440=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value563=_inf_value8)));
        if(right_value558) { come_call_finalizer(sFunNode_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value559) { come_call_finalizer(sFunNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value563) { right_value563 = come_decrement_ref_count(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0); } 
        if(!node_440->compile(node_440->_protocol_obj,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj119=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_422);
        if(__dec_obj119) { come_call_finalizer(buffer_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0); }
        info->p=p_419;
        info->head=head_421;
        info->sline=sline_420;
        if(source_412) { come_call_finalizer(buffer_finalize,source_412, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_422) { come_call_finalizer(buffer_finalize,source3_422, (void*)0, (void*)0, 0, 0, 0); }
        if(block_423) { come_call_finalizer(sBlock_finalize,block_423, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_424) { come_call_finalizer(sType_finalize,result_type_424, (void*)0, (void*)0, 0, 0, 0); }
        if(name_425) { name_425 = come_decrement_ref_count(name_425, (void*)0, (void*)0, 0, 0); }
        if(left_type_426) { come_call_finalizer(sType_finalize,left_type_426, (void*)0, (void*)0, 0, 0, 0); }
        if(right_type_427) { come_call_finalizer(sType_finalize,right_type_427, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_429) { come_call_finalizer(list$1sTypephp_finalize,param_types_429, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_431) { come_call_finalizer(list$1charphp_finalize,param_names_431, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_432) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_432, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_433) { come_call_finalizer(buffer_finalize,header_buf_433, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_437) { come_call_finalizer(sFun_finalize,fun_437, (void*)0, (void*)0, 0, 0, 0); }
        if(node_440) { node_440 = come_decrement_ref_count(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result165__ = ((struct tuple2$2sFunpcharph*)(right_value565=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value564=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1622)))),equaler_408,(char*)come_increment_ref_count(real_fun_name_409))));
    if(real_fun_name_409) { real_fun_name_409 = come_decrement_ref_count(real_fun_name_409, (void*)0, (void*)0, 0, 0); }
    if(type2_410) { come_call_finalizer(sType_finalize,type2_410, (void*)0, (void*)0, 0, 0, 0); }
    return __result165__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* equaler_441;
void* right_value566;
char* real_fun_name_442;
void* right_value567;
struct sType* type2_443;
struct sClass* klass_444;
void* right_value568;
void* right_value569;
struct buffer* source_445;
char* name_446;
int i_449;
struct tuple2$2charphsTypeph* it_450;
struct tuple2$2charphsTypeph* multiple_assgin_var9;
char* name_451;
struct sType* field_type_452;
char* p_456;
int sline_457;
char* head_458;
struct buffer* source3_459;
struct buffer* __dec_obj120;
void* right_value570;
struct sBlock* block_460;
void* right_value571;
void* right_value572;
struct sType* result_type_461;
void* right_value573;
char* name_462;
void* right_value574;
struct sType* left_type_463;
void* right_value575;
struct sType* right_type_464;
struct sType* __list_values23___465[2];
void* right_value576;
void* right_value577;
struct list$1sTypeph* param_types_466;
void* right_value578;
void* right_value579;
char* __list_values24___467[2];
void* right_value580;
void* right_value581;
struct list$1charph* param_names_468;
void* right_value582;
void* right_value583;
struct list$1charph* param_default_parametors_469;
void* right_value584;
void* right_value585;
struct buffer* header_buf_470;
void* right_value586;
int i_471;
struct sType* param_type_472;
char* param_name_473;
void* right_value587;
void* right_value588;
void* right_value589;
void* right_value590;
struct sFun* fun_474;
void* right_value591;
struct sFun* fun2_475;
void* right_value592;
void* right_value593;
void* right_value594;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value598;
struct sNode* node_477;
struct buffer* __dec_obj123;
void* right_value599;
void* right_value600;
memset(&equaler_441, 0, sizeof(struct sFun*));
memset(&right_value566, 0, sizeof(void*));
memset(&real_fun_name_442, 0, sizeof(char*));
memset(&right_value567, 0, sizeof(void*));
memset(&type2_443, 0, sizeof(struct sType*));
memset(&klass_444, 0, sizeof(struct sClass*));
memset(&right_value568, 0, sizeof(void*));
memset(&right_value569, 0, sizeof(void*));
memset(&source_445, 0, sizeof(struct buffer*));
memset(&name_446, 0, sizeof(char*));
memset(&i_449, 0, sizeof(int));
memset(&it_450, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_451, 0, sizeof(char*)); /* ccc */
memset(&field_type_452, 0, sizeof(struct sType*)); /* ccc */
memset(&name_451, 0, sizeof(char*)); /* eee */
memset(&field_type_452, 0, sizeof(struct sType*)); /* eee */
memset(&p_456, 0, sizeof(char*));
memset(&sline_457, 0, sizeof(int));
memset(&head_458, 0, sizeof(char*));
memset(&source3_459, 0, sizeof(struct buffer*));
memset(&right_value570, 0, sizeof(void*));
memset(&block_460, 0, sizeof(struct sBlock*));
memset(&right_value571, 0, sizeof(void*));
memset(&right_value572, 0, sizeof(void*));
memset(&result_type_461, 0, sizeof(struct sType*));
memset(&right_value573, 0, sizeof(void*));
memset(&name_462, 0, sizeof(char*));
memset(&right_value574, 0, sizeof(void*));
memset(&left_type_463, 0, sizeof(struct sType*));
memset(&right_value575, 0, sizeof(void*));
memset(&right_type_464, 0, sizeof(struct sType*));
memset(&right_value576, 0, sizeof(void*));
memset(&right_value577, 0, sizeof(void*));
memset(&param_types_466, 0, sizeof(struct list$1sTypeph*));
memset(&right_value578, 0, sizeof(void*));
memset(&right_value579, 0, sizeof(void*));
memset(&right_value580, 0, sizeof(void*));
memset(&right_value581, 0, sizeof(void*));
memset(&param_names_468, 0, sizeof(struct list$1charph*));
memset(&right_value582, 0, sizeof(void*));
memset(&right_value583, 0, sizeof(void*));
memset(&param_default_parametors_469, 0, sizeof(struct list$1charph*));
memset(&right_value584, 0, sizeof(void*));
memset(&right_value585, 0, sizeof(void*));
memset(&header_buf_470, 0, sizeof(struct buffer*));
memset(&right_value586, 0, sizeof(void*));
memset(&i_471, 0, sizeof(int));
memset(&param_type_472, 0, sizeof(struct sType*));
memset(&param_name_473, 0, sizeof(char*));
memset(&right_value587, 0, sizeof(void*));
memset(&right_value588, 0, sizeof(void*));
memset(&right_value589, 0, sizeof(void*));
memset(&right_value590, 0, sizeof(void*));
memset(&fun_474, 0, sizeof(struct sFun*));
memset(&right_value591, 0, sizeof(void*));
memset(&fun2_475, 0, sizeof(struct sFun*));
memset(&right_value592, 0, sizeof(void*));
memset(&right_value593, 0, sizeof(void*));
memset(&right_value594, 0, sizeof(void*));
memset(&right_value598, 0, sizeof(void*));
memset(&node_477, 0, sizeof(struct sNode*));
memset(&right_value599, 0, sizeof(void*));
memset(&right_value600, 0, sizeof(void*));
    equaler_441=((void*)0);
    real_fun_name_442=(char*)come_increment_ref_count(((char*)(right_value566=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value566) { right_value566 = come_decrement_ref_count(right_value566, (void*)0, (void*)0, 1, 0); }
    type2_443=(struct sType*)come_increment_ref_count(((struct sType*)(right_value567=solve_generics(type,type,info))));
    if(right_value567) { come_call_finalizer(sType_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_443;
    klass_444=type->mClass;
    if(type->mPointerNum>0&&!klass_444->mNumber) {
        source_445=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value569=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value568=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1638))))))));
        if(right_value568) { come_call_finalizer(buffer_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value569) { come_call_finalizer(buffer_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_445,123);
        if(klass_444->mProtocol) {
            name_446="_protocol_obj";
            char source2_447[1024];
            memset(&source2_447, 0, sizeof(source2_447)); /* aaa */
            snprintf(source2_447,1024,"return !left.%s.equals(right.%s);\n",name_446,name_446);
            buffer_append_str(source_445,source2_447);
        }
        else {
            char source2_448[1024];
            memset(&source2_448, 0, sizeof(source2_448)); /* aaa */
            snprintf(source2_448,1024,"return !(");
            buffer_append_str(source_445,source2_448);
            i_449=0;
            klass_444=map$2charphsClassphp_operator_load_element(info->classes,klass_444->mName);
            for(
            it_450=list$1tuple2$2charphsTypephphp_begin((klass_444->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_444->mFields));
            it_450=list$1tuple2$2charphsTypephphp_next((klass_444->mFields))
            ){
                multiple_assgin_var9=it_450;
                name_451=(char*)come_increment_ref_count(multiple_assgin_var9->v1);
                field_type_452=(struct sType*)come_increment_ref_count(multiple_assgin_var9->v2);
                if(string_operator_equals(type->mClass->mName,field_type_452->mClass->mName)&&type->mPointerNum==field_type_452->mPointerNum&&field_type_452->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_453[1024];
                memset(&source2_453, 0, sizeof(source2_453)); /* aaa */
                snprintf(source2_453,1024,"left.%s.equals(right.%s)",name_451,name_451);
                buffer_append_str(source_445,source2_453);
                if(i_449==list$1tuple2$2charphsTypephphp_length(klass_444->mFields)-1) {
                    char source2_454[1024];
                    memset(&source2_454, 0, sizeof(source2_454)); /* aaa */
                    snprintf(source2_454,1024,");");
                    buffer_append_str(source_445,source2_454);
                }
                else {
                    char source2_455[1024];
                    memset(&source2_455, 0, sizeof(source2_455)); /* aaa */
                    snprintf(source2_455,1024," && ");
                    buffer_append_str(source_445,source2_455);
                }
                i_449++;
                if(name_451) { name_451 = come_decrement_ref_count(name_451, (void*)0, (void*)0, 0, 0); }
                if(field_type_452) { come_call_finalizer(sType_finalize,field_type_452, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_char(source_445,125);
        p_456=info->p;
        sline_457=info->sline;
        head_458=info->head;
        source3_459=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj120=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_445);
        if(__dec_obj120) { come_call_finalizer(buffer_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0); }
        info->p=source_445->buf;
        info->head=source_445->buf;
        block_460=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value570=parse_block(info,(_Bool)0))));
        if(right_value570) { come_call_finalizer(sBlock_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0); }
        result_type_461=(struct sType*)come_increment_ref_count(((struct sType*)(right_value572=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value571=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1697)))),"bool",info,(_Bool)0))));
        if(right_value571) { come_call_finalizer(sType_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value572) { come_call_finalizer(sType_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0); }
        name_462=(char*)come_increment_ref_count(((char*)(right_value573=string_clone(real_fun_name_442))));
        if(right_value573) { right_value573 = come_decrement_ref_count(right_value573, (void*)0, (void*)0, 1, 0); }
        left_type_463=(struct sType*)come_increment_ref_count(((struct sType*)(right_value574=sType_clone(type))));
        if(right_value574) { come_call_finalizer(sType_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0); }
        left_type_463->mHeap=(_Bool)0;
        right_type_464=(struct sType*)come_increment_ref_count(((struct sType*)(right_value575=sType_clone(type))));
        if(right_value575) { come_call_finalizer(sType_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0); }
        right_type_464->mHeap=(_Bool)0;
        {__list_values23___465[0]=come_increment_ref_count(left_type_463);
__list_values23___465[1]=come_increment_ref_count(right_type_464);
}        param_types_466=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value577=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value576=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1703)))),2,__list_values23___465))));
        if(right_value577) { come_call_finalizer(list$1sTypephp_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values24___467[0]=come_increment_ref_count(((char*)(right_value578=__builtin_string("left"))));
__list_values24___467[1]=come_increment_ref_count(((char*)(right_value579=__builtin_string("right"))));
}        param_names_468=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value581=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value580=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1704)))),2,__list_values24___467))));
        if(right_value578) { right_value578 = come_decrement_ref_count(right_value578, (void*)0, (void*)0, 1, 0); }
        if(right_value579) { right_value579 = come_decrement_ref_count(right_value579, (void*)0, (void*)0, 1, 0); }
        if(right_value581) { come_call_finalizer(list$1charphp_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_469=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value583=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value582=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1705))))))));
        if(right_value583) { come_call_finalizer(list$1charphp_finalize,right_value583, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_470=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value585=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value584=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1707))))))));
        if(right_value584) { come_call_finalizer(buffer_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value585) { come_call_finalizer(buffer_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_470,((char*)(right_value586=make_come_type_name_string(result_type_461,info))));
        if(right_value586) { right_value586 = come_decrement_ref_count(right_value586, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_470," ");
        buffer_append_str(header_buf_470,real_fun_name_442);
        buffer_append_str(header_buf_470,"(");
        for(
        i_471=0;
        i_471<list$1sTypephp_length(param_types_466);
        i_471++
        ){
            param_type_472=list$1sTypephp_operator_load_element(param_types_466,i_471);
            param_name_473=list$1charphp_operator_load_element(param_names_468,i_471);
            buffer_append_str(header_buf_470,((char*)(right_value587=make_come_type_name_string(param_type_472,info))));
            if(right_value587) { right_value587 = come_decrement_ref_count(right_value587, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_470," ");
            buffer_append_str(header_buf_470,param_name_473);
            if(i_471!=list$1sTypephp_length(param_types_466)-1) {
                buffer_append_str(header_buf_470,",");
            }
        }
        buffer_append_str(header_buf_470,")");
        result_type_461->mStatic=(_Bool)0;
        fun_474=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value590=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value588=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1735)))),(char*)come_increment_ref_count(name_462),(struct sType*)come_increment_ref_count(result_type_461),(struct list$1sTypeph*)come_increment_ref_count(param_types_466),(struct list$1charph*)come_increment_ref_count(param_names_468),(struct list$1charph*)come_increment_ref_count(param_default_parametors_469),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_460),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value589=buffer_to_string(header_buf_470)))),info))));
        if(right_value588) { come_call_finalizer(sFun_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value589) { right_value589 = come_decrement_ref_count(right_value589, (void*)0, (void*)0, 1, 0); }
        if(right_value590) { come_call_finalizer(sFun_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0); }
        fun2_475=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value591=__builtin_string(fun_name))));
        if(right_value591) { right_value591 = come_decrement_ref_count(right_value591, (void*)0, (void*)0, 1, 0); }
        if(fun2_475==((void*)0)||fun2_475->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value592=string_clone(name_462)))),(struct sFun*)come_increment_ref_count(fun_474));
            if(right_value592) { right_value592 = come_decrement_ref_count(right_value592, (void*)0, (void*)0, 1, 0); }
        }
        equaler_441=fun_474;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1745);
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value594=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value593=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1745)))),(struct sFun*)come_increment_ref_count(fun_474),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=sFunNode_finalize;
        _inf_value9->clone=sFunNode_clone;
        _inf_value9->compile=sFunNode_compile;
        _inf_value9->sline=sFunNode_sline;
        _inf_value9->sname=sFunNode_sname;
        _inf_value9->terminated=sFunNode_terminated;
        node_477=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value598=_inf_value9)));
        if(right_value593) { come_call_finalizer(sFunNode_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value594) { come_call_finalizer(sFunNode_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value598) { right_value598 = come_decrement_ref_count(right_value598, ((struct sNode*)right_value598)->finalize, ((struct sNode*)right_value598)->_protocol_obj, 1, 0); } 
        if(!node_477->compile(node_477->_protocol_obj,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj123=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_459);
        if(__dec_obj123) { come_call_finalizer(buffer_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0); }
        info->p=p_456;
        info->head=head_458;
        info->sline=sline_457;
        if(source_445) { come_call_finalizer(buffer_finalize,source_445, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_459) { come_call_finalizer(buffer_finalize,source3_459, (void*)0, (void*)0, 0, 0, 0); }
        if(block_460) { come_call_finalizer(sBlock_finalize,block_460, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_461) { come_call_finalizer(sType_finalize,result_type_461, (void*)0, (void*)0, 0, 0, 0); }
        if(name_462) { name_462 = come_decrement_ref_count(name_462, (void*)0, (void*)0, 0, 0); }
        if(left_type_463) { come_call_finalizer(sType_finalize,left_type_463, (void*)0, (void*)0, 0, 0, 0); }
        if(right_type_464) { come_call_finalizer(sType_finalize,right_type_464, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_466) { come_call_finalizer(list$1sTypephp_finalize,param_types_466, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_468) { come_call_finalizer(list$1charphp_finalize,param_names_468, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_469) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_469, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_470) { come_call_finalizer(buffer_finalize,header_buf_470, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_474) { come_call_finalizer(sFun_finalize,fun_474, (void*)0, (void*)0, 0, 0, 0); }
        if(node_477) { node_477 = come_decrement_ref_count(node_477, ((struct sNode*)node_477)->finalize, ((struct sNode*)node_477)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result169__ = ((struct tuple2$2sFunpcharph*)(right_value600=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value599=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1758)))),equaler_441,(char*)come_increment_ref_count(real_fun_name_442))));
    if(real_fun_name_442) { real_fun_name_442 = come_decrement_ref_count(real_fun_name_442, (void*)0, (void*)0, 0, 0); }
    if(type2_443) { come_call_finalizer(sType_finalize,type2_443, (void*)0, (void*)0, 0, 0, 0); }
    return __result169__;
}

static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self){
                    int __result166__ = self->len;
                    return __result166__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* equaler_478;
void* right_value601;
char* real_fun_name_479;
void* right_value602;
struct sType* type2_480;
struct sClass* klass_481;
void* right_value603;
void* right_value604;
struct buffer* source_482;
char* name_483;
struct tuple2$2charphsTypeph* it_485;
struct tuple2$2charphsTypeph* multiple_assgin_var10;
char* name_486;
struct sType* field_type_487;
char* p_489;
int sline_490;
char* head_491;
struct buffer* source3_492;
struct buffer* __dec_obj124;
void* right_value605;
struct sBlock* block_493;
void* right_value606;
void* right_value607;
struct sType* result_type_494;
void* right_value608;
char* name_495;
void* right_value609;
struct sType* left_type_496;
void* right_value610;
struct sType* right_type_497;
struct sType* __list_values25___498[2];
void* right_value611;
void* right_value612;
struct list$1sTypeph* param_types_499;
void* right_value613;
void* right_value614;
char* __list_values26___500[2];
void* right_value615;
void* right_value616;
struct list$1charph* param_names_501;
void* right_value617;
void* right_value618;
struct list$1charph* param_default_parametors_502;
void* right_value619;
void* right_value620;
struct buffer* header_buf_503;
void* right_value621;
int i_504;
struct sType* param_type_505;
char* param_name_506;
void* right_value622;
void* right_value623;
void* right_value624;
void* right_value625;
struct sFun* fun_507;
void* right_value626;
struct sFun* fun2_508;
void* right_value627;
void* right_value628;
void* right_value629;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value633;
struct sNode* node_510;
struct buffer* __dec_obj127;
void* right_value634;
void* right_value635;
memset(&equaler_478, 0, sizeof(struct sFun*));
memset(&right_value601, 0, sizeof(void*));
memset(&real_fun_name_479, 0, sizeof(char*));
memset(&right_value602, 0, sizeof(void*));
memset(&type2_480, 0, sizeof(struct sType*));
memset(&klass_481, 0, sizeof(struct sClass*));
memset(&right_value603, 0, sizeof(void*));
memset(&right_value604, 0, sizeof(void*));
memset(&source_482, 0, sizeof(struct buffer*));
memset(&name_483, 0, sizeof(char*));
memset(&it_485, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_486, 0, sizeof(char*)); /* ccc */
memset(&field_type_487, 0, sizeof(struct sType*)); /* ccc */
memset(&name_486, 0, sizeof(char*)); /* eee */
memset(&field_type_487, 0, sizeof(struct sType*)); /* eee */
memset(&p_489, 0, sizeof(char*));
memset(&sline_490, 0, sizeof(int));
memset(&head_491, 0, sizeof(char*));
memset(&source3_492, 0, sizeof(struct buffer*));
memset(&right_value605, 0, sizeof(void*));
memset(&block_493, 0, sizeof(struct sBlock*));
memset(&right_value606, 0, sizeof(void*));
memset(&right_value607, 0, sizeof(void*));
memset(&result_type_494, 0, sizeof(struct sType*));
memset(&right_value608, 0, sizeof(void*));
memset(&name_495, 0, sizeof(char*));
memset(&right_value609, 0, sizeof(void*));
memset(&left_type_496, 0, sizeof(struct sType*));
memset(&right_value610, 0, sizeof(void*));
memset(&right_type_497, 0, sizeof(struct sType*));
memset(&right_value611, 0, sizeof(void*));
memset(&right_value612, 0, sizeof(void*));
memset(&param_types_499, 0, sizeof(struct list$1sTypeph*));
memset(&right_value613, 0, sizeof(void*));
memset(&right_value614, 0, sizeof(void*));
memset(&right_value615, 0, sizeof(void*));
memset(&right_value616, 0, sizeof(void*));
memset(&param_names_501, 0, sizeof(struct list$1charph*));
memset(&right_value617, 0, sizeof(void*));
memset(&right_value618, 0, sizeof(void*));
memset(&param_default_parametors_502, 0, sizeof(struct list$1charph*));
memset(&right_value619, 0, sizeof(void*));
memset(&right_value620, 0, sizeof(void*));
memset(&header_buf_503, 0, sizeof(struct buffer*));
memset(&right_value621, 0, sizeof(void*));
memset(&i_504, 0, sizeof(int));
memset(&param_type_505, 0, sizeof(struct sType*));
memset(&param_name_506, 0, sizeof(char*));
memset(&right_value622, 0, sizeof(void*));
memset(&right_value623, 0, sizeof(void*));
memset(&right_value624, 0, sizeof(void*));
memset(&right_value625, 0, sizeof(void*));
memset(&fun_507, 0, sizeof(struct sFun*));
memset(&right_value626, 0, sizeof(void*));
memset(&fun2_508, 0, sizeof(struct sFun*));
memset(&right_value627, 0, sizeof(void*));
memset(&right_value628, 0, sizeof(void*));
memset(&right_value629, 0, sizeof(void*));
memset(&right_value633, 0, sizeof(void*));
memset(&node_510, 0, sizeof(struct sNode*));
memset(&right_value634, 0, sizeof(void*));
memset(&right_value635, 0, sizeof(void*));
    equaler_478=((void*)0);
    real_fun_name_479=(char*)come_increment_ref_count(((char*)(right_value601=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value601) { right_value601 = come_decrement_ref_count(right_value601, (void*)0, (void*)0, 1, 0); }
    type2_480=(struct sType*)come_increment_ref_count(((struct sType*)(right_value602=solve_generics(type,type,info))));
    if(right_value602) { come_call_finalizer(sType_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_480;
    klass_481=type->mClass;
    if(type->mPointerNum>0&&!klass_481->mNumber) {
        source_482=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value604=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value603=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1774))))))));
        if(right_value603) { come_call_finalizer(buffer_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value604) { come_call_finalizer(buffer_finalize,right_value604, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_482,123);
        if(klass_481->mProtocol) {
            name_483="_protocol_obj";
            char source2_484[1024];
            memset(&source2_484, 0, sizeof(source2_484)); /* aaa */
            snprintf(source2_484,1024,"return left.%s.equals(right.%s);\n",name_483,name_483);
            buffer_append_str(source_482,source2_484);
        }
        else {
            klass_481=map$2charphsClassphp_operator_load_element(info->classes,klass_481->mName);
            for(
            it_485=list$1tuple2$2charphsTypephphp_begin((klass_481->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_481->mFields));
            it_485=list$1tuple2$2charphsTypephphp_next((klass_481->mFields))
            ){
                multiple_assgin_var10=it_485;
                name_486=(char*)come_increment_ref_count(multiple_assgin_var10->v1);
                field_type_487=(struct sType*)come_increment_ref_count(multiple_assgin_var10->v2);
                if(string_operator_equals(type->mClass->mName,field_type_487->mClass->mName)&&type->mPointerNum==field_type_487->mPointerNum&&field_type_487->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_488[1024];
                memset(&source2_488, 0, sizeof(source2_488)); /* aaa */
                snprintf(source2_488,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_486,name_486);
                buffer_append_str(source_482,source2_488);
                if(name_486) { name_486 = come_decrement_ref_count(name_486, (void*)0, (void*)0, 0, 0); }
                if(field_type_487) { come_call_finalizer(sType_finalize,field_type_487, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_str(source_482,"return true;\n");
        buffer_append_char(source_482,125);
        p_489=info->p;
        sline_490=info->sline;
        head_491=info->head;
        source3_492=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj124=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_482);
        if(__dec_obj124) { come_call_finalizer(buffer_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0); }
        info->p=source_482->buf;
        info->head=source_482->buf;
        block_493=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value605=parse_block(info,(_Bool)0))));
        if(right_value605) { come_call_finalizer(sBlock_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0); }
        result_type_494=(struct sType*)come_increment_ref_count(((struct sType*)(right_value607=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value606=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1816)))),"bool",info,(_Bool)0))));
        if(right_value606) { come_call_finalizer(sType_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value607) { come_call_finalizer(sType_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0); }
        name_495=(char*)come_increment_ref_count(((char*)(right_value608=string_clone(real_fun_name_479))));
        if(right_value608) { right_value608 = come_decrement_ref_count(right_value608, (void*)0, (void*)0, 1, 0); }
        left_type_496=(struct sType*)come_increment_ref_count(((struct sType*)(right_value609=sType_clone(type))));
        if(right_value609) { come_call_finalizer(sType_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0); }
        left_type_496->mHeap=(_Bool)0;
        right_type_497=(struct sType*)come_increment_ref_count(((struct sType*)(right_value610=sType_clone(type))));
        if(right_value610) { come_call_finalizer(sType_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0); }
        right_type_497->mHeap=(_Bool)0;
        {__list_values25___498[0]=come_increment_ref_count(left_type_496);
__list_values25___498[1]=come_increment_ref_count(right_type_497);
}        param_types_499=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value612=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value611=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1822)))),2,__list_values25___498))));
        if(right_value612) { come_call_finalizer(list$1sTypephp_finalize,right_value612, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values26___500[0]=come_increment_ref_count(((char*)(right_value613=__builtin_string("left"))));
__list_values26___500[1]=come_increment_ref_count(((char*)(right_value614=__builtin_string("right"))));
}        param_names_501=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value616=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value615=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1823)))),2,__list_values26___500))));
        if(right_value613) { right_value613 = come_decrement_ref_count(right_value613, (void*)0, (void*)0, 1, 0); }
        if(right_value614) { right_value614 = come_decrement_ref_count(right_value614, (void*)0, (void*)0, 1, 0); }
        if(right_value616) { come_call_finalizer(list$1charphp_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_502=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value618=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value617=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1824))))))));
        if(right_value618) { come_call_finalizer(list$1charphp_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_503=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value620=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value619=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1826))))))));
        if(right_value619) { come_call_finalizer(buffer_finalize,right_value619, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value620) { come_call_finalizer(buffer_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_503,((char*)(right_value621=make_come_type_name_string(result_type_494,info))));
        if(right_value621) { right_value621 = come_decrement_ref_count(right_value621, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_503," ");
        buffer_append_str(header_buf_503,real_fun_name_479);
        buffer_append_str(header_buf_503,"(");
        for(
        i_504=0;
        i_504<list$1sTypephp_length(param_types_499);
        i_504++
        ){
            param_type_505=list$1sTypephp_operator_load_element(param_types_499,i_504);
            param_name_506=list$1charphp_operator_load_element(param_names_501,i_504);
            buffer_append_str(header_buf_503,((char*)(right_value622=make_come_type_name_string(param_type_505,info))));
            if(right_value622) { right_value622 = come_decrement_ref_count(right_value622, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_503," ");
            buffer_append_str(header_buf_503,param_name_506);
            if(i_504!=list$1sTypephp_length(param_types_499)-1) {
                buffer_append_str(header_buf_503,",");
            }
        }
        buffer_append_str(header_buf_503,")");
        result_type_494->mStatic=(_Bool)0;
        fun_507=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value625=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value623=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1854)))),(char*)come_increment_ref_count(name_495),(struct sType*)come_increment_ref_count(result_type_494),(struct list$1sTypeph*)come_increment_ref_count(param_types_499),(struct list$1charph*)come_increment_ref_count(param_names_501),(struct list$1charph*)come_increment_ref_count(param_default_parametors_502),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_493),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value624=buffer_to_string(header_buf_503)))),info))));
        if(right_value623) { come_call_finalizer(sFun_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value624) { right_value624 = come_decrement_ref_count(right_value624, (void*)0, (void*)0, 1, 0); }
        if(right_value625) { come_call_finalizer(sFun_finalize,right_value625, (void*)0, (void*)0, 0, 1, 0); }
        fun2_508=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value626=__builtin_string(fun_name))));
        if(right_value626) { right_value626 = come_decrement_ref_count(right_value626, (void*)0, (void*)0, 1, 0); }
        if(fun2_508==((void*)0)||fun2_508->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value627=string_clone(name_495)))),(struct sFun*)come_increment_ref_count(fun_507));
            if(right_value627) { right_value627 = come_decrement_ref_count(right_value627, (void*)0, (void*)0, 1, 0); }
        }
        equaler_478=fun_507;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1864);
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value629=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value628=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1864)))),(struct sFun*)come_increment_ref_count(fun_507),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=sFunNode_finalize;
        _inf_value10->clone=sFunNode_clone;
        _inf_value10->compile=sFunNode_compile;
        _inf_value10->sline=sFunNode_sline;
        _inf_value10->sname=sFunNode_sname;
        _inf_value10->terminated=sFunNode_terminated;
        node_510=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value633=_inf_value10)));
        if(right_value628) { come_call_finalizer(sFunNode_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value629) { come_call_finalizer(sFunNode_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value633) { right_value633 = come_decrement_ref_count(right_value633, ((struct sNode*)right_value633)->finalize, ((struct sNode*)right_value633)->_protocol_obj, 1, 0); } 
        if(!node_510->compile(node_510->_protocol_obj,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj127=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_492);
        if(__dec_obj127) { come_call_finalizer(buffer_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0); }
        info->p=p_489;
        info->head=head_491;
        info->sline=sline_490;
        if(source_482) { come_call_finalizer(buffer_finalize,source_482, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_492) { come_call_finalizer(buffer_finalize,source3_492, (void*)0, (void*)0, 0, 0, 0); }
        if(block_493) { come_call_finalizer(sBlock_finalize,block_493, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_494) { come_call_finalizer(sType_finalize,result_type_494, (void*)0, (void*)0, 0, 0, 0); }
        if(name_495) { name_495 = come_decrement_ref_count(name_495, (void*)0, (void*)0, 0, 0); }
        if(left_type_496) { come_call_finalizer(sType_finalize,left_type_496, (void*)0, (void*)0, 0, 0, 0); }
        if(right_type_497) { come_call_finalizer(sType_finalize,right_type_497, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_499) { come_call_finalizer(list$1sTypephp_finalize,param_types_499, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_501) { come_call_finalizer(list$1charphp_finalize,param_names_501, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_502) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_502, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_503) { come_call_finalizer(buffer_finalize,header_buf_503, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_507) { come_call_finalizer(sFun_finalize,fun_507, (void*)0, (void*)0, 0, 0, 0); }
        if(node_510) { node_510 = come_decrement_ref_count(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result172__ = ((struct tuple2$2sFunpcharph*)(right_value635=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value634=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1877)))),equaler_478,(char*)come_increment_ref_count(real_fun_name_479))));
    if(real_fun_name_479) { real_fun_name_479 = come_decrement_ref_count(real_fun_name_479, (void*)0, (void*)0, 0, 0); }
    if(type2_480) { come_call_finalizer(sType_finalize,type2_480, (void*)0, (void*)0, 0, 0, 0); }
    return __result172__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* cloner_511;
void* right_value636;
char* real_fun_name_512;
void* right_value637;
struct sType* type2_513;
struct sClass* klass_514;
void* right_value638;
void* right_value639;
struct buffer* source_515;
void* right_value640;
void* right_value641;
char* name_516;
struct tuple2$2charphsTypeph* it_518;
struct tuple2$2charphsTypeph* multiple_assgin_var11;
char* name_519;
struct sType* field_type_520;
struct tuple2$2charphsTypeph* it_522;
struct tuple2$2charphsTypeph* multiple_assgin_var12;
char* name_523;
struct sType* field_type_524;
void* right_value642;
char* p_527;
int sline_528;
struct buffer* source3_529;
char* head_530;
struct buffer* __dec_obj128;
void* right_value643;
struct sBlock* block_531;
void* right_value644;
struct sType* result_type_532;
void* right_value645;
char* name_533;
void* right_value646;
struct sType* self_type_534;
struct sType* __list_values27___535[1];
void* right_value647;
void* right_value648;
struct list$1sTypeph* param_types_536;
void* right_value649;
char* __list_values28___537[1];
void* right_value650;
void* right_value651;
struct list$1charph* param_names_538;
void* right_value652;
void* right_value653;
struct list$1charph* param_default_parametors_539;
void* right_value654;
void* right_value655;
struct buffer* header_buf_540;
void* right_value656;
int i_541;
struct sType* param_type_542;
char* param_name_543;
void* right_value657;
void* right_value658;
void* right_value659;
void* right_value660;
struct sFun* fun_544;
void* right_value661;
struct sFun* fun2_545;
void* right_value662;
void* right_value663;
void* right_value664;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value668;
struct sNode* node_547;
struct buffer* __dec_obj131;
void* right_value669;
void* right_value670;
memset(&cloner_511, 0, sizeof(struct sFun*));
memset(&right_value636, 0, sizeof(void*));
memset(&real_fun_name_512, 0, sizeof(char*));
memset(&right_value637, 0, sizeof(void*));
memset(&type2_513, 0, sizeof(struct sType*));
memset(&klass_514, 0, sizeof(struct sClass*));
memset(&right_value638, 0, sizeof(void*));
memset(&right_value639, 0, sizeof(void*));
memset(&source_515, 0, sizeof(struct buffer*));
memset(&right_value640, 0, sizeof(void*));
memset(&right_value641, 0, sizeof(void*));
memset(&name_516, 0, sizeof(char*));
memset(&it_518, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_519, 0, sizeof(char*)); /* ccc */
memset(&field_type_520, 0, sizeof(struct sType*)); /* ccc */
memset(&name_519, 0, sizeof(char*)); /* eee */
memset(&field_type_520, 0, sizeof(struct sType*)); /* eee */
memset(&it_522, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_523, 0, sizeof(char*)); /* ccc */
memset(&field_type_524, 0, sizeof(struct sType*)); /* ccc */
memset(&name_523, 0, sizeof(char*)); /* eee */
memset(&field_type_524, 0, sizeof(struct sType*)); /* eee */
memset(&right_value642, 0, sizeof(void*));
memset(&p_527, 0, sizeof(char*));
memset(&sline_528, 0, sizeof(int));
memset(&source3_529, 0, sizeof(struct buffer*));
memset(&head_530, 0, sizeof(char*));
memset(&right_value643, 0, sizeof(void*));
memset(&block_531, 0, sizeof(struct sBlock*));
memset(&right_value644, 0, sizeof(void*));
memset(&result_type_532, 0, sizeof(struct sType*));
memset(&right_value645, 0, sizeof(void*));
memset(&name_533, 0, sizeof(char*));
memset(&right_value646, 0, sizeof(void*));
memset(&self_type_534, 0, sizeof(struct sType*));
memset(&right_value647, 0, sizeof(void*));
memset(&right_value648, 0, sizeof(void*));
memset(&param_types_536, 0, sizeof(struct list$1sTypeph*));
memset(&right_value649, 0, sizeof(void*));
memset(&right_value650, 0, sizeof(void*));
memset(&right_value651, 0, sizeof(void*));
memset(&param_names_538, 0, sizeof(struct list$1charph*));
memset(&right_value652, 0, sizeof(void*));
memset(&right_value653, 0, sizeof(void*));
memset(&param_default_parametors_539, 0, sizeof(struct list$1charph*));
memset(&right_value654, 0, sizeof(void*));
memset(&right_value655, 0, sizeof(void*));
memset(&header_buf_540, 0, sizeof(struct buffer*));
memset(&right_value656, 0, sizeof(void*));
memset(&i_541, 0, sizeof(int));
memset(&param_type_542, 0, sizeof(struct sType*));
memset(&param_name_543, 0, sizeof(char*));
memset(&right_value657, 0, sizeof(void*));
memset(&right_value658, 0, sizeof(void*));
memset(&right_value659, 0, sizeof(void*));
memset(&right_value660, 0, sizeof(void*));
memset(&fun_544, 0, sizeof(struct sFun*));
memset(&right_value661, 0, sizeof(void*));
memset(&fun2_545, 0, sizeof(struct sFun*));
memset(&right_value662, 0, sizeof(void*));
memset(&right_value663, 0, sizeof(void*));
memset(&right_value664, 0, sizeof(void*));
memset(&right_value668, 0, sizeof(void*));
memset(&node_547, 0, sizeof(struct sNode*));
memset(&right_value669, 0, sizeof(void*));
memset(&right_value670, 0, sizeof(void*));
    cloner_511=((void*)0);
    real_fun_name_512=(char*)come_increment_ref_count(((char*)(right_value636=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value636) { right_value636 = come_decrement_ref_count(right_value636, (void*)0, (void*)0, 1, 0); }
    type2_513=(struct sType*)come_increment_ref_count(((struct sType*)(right_value637=solve_generics(type,type,info))));
    if(right_value637) { come_call_finalizer(sType_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_513;
    klass_514=type->mClass;
    if(type->mPointerNum>0&&!klass_514->mNumber) {
        source_515=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value639=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value638=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1893))))))));
        if(right_value638) { come_call_finalizer(buffer_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value639) { come_call_finalizer(buffer_finalize,right_value639, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(source_515,"{\n");
        buffer_append_str(source_515,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_515,((char*)(right_value641=xsprintf("var result = new %s;\n",((char*)(right_value640=make_type_name_string(type,(_Bool)0,(_Bool)0,info,(_Bool)1)))))));
        if(right_value640) { right_value640 = come_decrement_ref_count(right_value640, (void*)0, (void*)0, 1, 0); }
        if(right_value641) { right_value641 = come_decrement_ref_count(right_value641, (void*)0, (void*)0, 1, 0); }
        if(klass_514->mProtocol) {
            name_516="_protocol_obj";
            char source2_517[1024];
            memset(&source2_517, 0, sizeof(source2_517)); /* aaa */
            snprintf(source2_517,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_515,source2_517);
            klass_514=map$2charphsClassphp_operator_load_element(info->classes,klass_514->mName);
            for(
            it_518=list$1tuple2$2charphsTypephphp_begin((klass_514->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_514->mFields));
            it_518=list$1tuple2$2charphsTypephphp_next((klass_514->mFields))
            ){
                multiple_assgin_var11=it_518;
                name_519=(char*)come_increment_ref_count(multiple_assgin_var11->v1);
                field_type_520=(struct sType*)come_increment_ref_count(multiple_assgin_var11->v2);
                if(string_operator_equals(type->mClass->mName,field_type_520->mClass->mName)&&type->mPointerNum==field_type_520->mPointerNum&&field_type_520->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_519,"_protocol_obj")) {
                }
                else {
                    char source2_521[1024];
                    memset(&source2_521, 0, sizeof(source2_521)); /* aaa */
                    snprintf(source2_521,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_519,name_519);
                    buffer_append_str(source_515,source2_521);
                }
                if(name_519) { name_519 = come_decrement_ref_count(name_519, (void*)0, (void*)0, 0, 0); }
                if(field_type_520) { come_call_finalizer(sType_finalize,field_type_520, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            klass_514=map$2charphsClassphp_operator_load_element(info->classes,klass_514->mName);
            for(
            it_522=list$1tuple2$2charphsTypephphp_begin((klass_514->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_514->mFields));
            it_522=list$1tuple2$2charphsTypephphp_next((klass_514->mFields))
            ){
                multiple_assgin_var12=it_522;
                name_523=(char*)come_increment_ref_count(multiple_assgin_var12->v1);
                field_type_524=(struct sType*)come_increment_ref_count(multiple_assgin_var12->v2);
                if(string_operator_equals(type->mClass->mName,field_type_524->mClass->mName)&&type->mPointerNum==field_type_524->mPointerNum&&field_type_524->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_524->mHeap) {
                    char source2_525[1024];
                    memset(&source2_525, 0, sizeof(source2_525)); /* aaa */
                    snprintf(source2_525,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_523,name_523,name_523);
                    buffer_append_str(source_515,source2_525);
                }
                else {
                    char source2_526[1024];
                    memset(&source2_526, 0, sizeof(source2_526)); /* aaa */
                    snprintf(source2_526,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_523,name_523);
                    buffer_append_str(source_515,source2_526);
                }
                if(name_523) { name_523 = come_decrement_ref_count(name_523, (void*)0, (void*)0, 0, 0); }
                if(field_type_524) { come_call_finalizer(sType_finalize,field_type_524, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_str(source_515,((char*)(right_value642=xsprintf("return result;"))));
        if(right_value642) { right_value642 = come_decrement_ref_count(right_value642, (void*)0, (void*)0, 1, 0); }
        buffer_append_char(source_515,125);
        p_527=info->p;
        sline_528=info->sline;
        source3_529=(struct buffer*)come_increment_ref_count(info->source);
        head_530=info->head;
        __dec_obj128=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_515);
        if(__dec_obj128) { come_call_finalizer(buffer_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0); }
        info->p=info->source->buf;
        info->head=info->source->buf;
        block_531=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value643=parse_block(info,(_Bool)0))));
        if(right_value643) { come_call_finalizer(sBlock_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0); }
        result_type_532=(struct sType*)come_increment_ref_count(((struct sType*)(right_value644=sType_clone(type))));
        if(right_value644) { come_call_finalizer(sType_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0); }
        name_533=(char*)come_increment_ref_count(((char*)(right_value645=string_clone(real_fun_name_512))));
        if(right_value645) { right_value645 = come_decrement_ref_count(right_value645, (void*)0, (void*)0, 1, 0); }
        self_type_534=(struct sType*)come_increment_ref_count(((struct sType*)(right_value646=sType_clone(type))));
        if(right_value646) { come_call_finalizer(sType_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0); }
        self_type_534->mHeap=(_Bool)0;
        {__list_values27___535[0]=come_increment_ref_count(self_type_534);
}        param_types_536=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value648=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value647=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1971)))),1,__list_values27___535))));
        if(right_value648) { come_call_finalizer(list$1sTypephp_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values28___537[0]=come_increment_ref_count(((char*)(right_value649=__builtin_string("self"))));
}        param_names_538=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value651=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value650=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1972)))),1,__list_values28___537))));
        if(right_value649) { right_value649 = come_decrement_ref_count(right_value649, (void*)0, (void*)0, 1, 0); }
        if(right_value651) { come_call_finalizer(list$1charphp_finalize,right_value651, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_539=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value653=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value652=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1973))))))));
        if(right_value653) { come_call_finalizer(list$1charphp_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_540=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value655=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value654=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1975))))))));
        if(right_value654) { come_call_finalizer(buffer_finalize,right_value654, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value655) { come_call_finalizer(buffer_finalize,right_value655, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_540,((char*)(right_value656=make_come_type_name_string(result_type_532,info))));
        if(right_value656) { right_value656 = come_decrement_ref_count(right_value656, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_540," ");
        buffer_append_str(header_buf_540,real_fun_name_512);
        buffer_append_str(header_buf_540,"(");
        for(
        i_541=0;
        i_541<list$1sTypephp_length(param_types_536);
        i_541++
        ){
            param_type_542=list$1sTypephp_operator_load_element(param_types_536,i_541);
            param_name_543=list$1charphp_operator_load_element(param_names_538,i_541);
            buffer_append_str(header_buf_540,((char*)(right_value657=make_come_type_name_string(param_type_542,info))));
            if(right_value657) { right_value657 = come_decrement_ref_count(right_value657, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_540," ");
            buffer_append_str(header_buf_540,param_name_543);
            if(i_541!=list$1sTypephp_length(param_types_536)-1) {
                buffer_append_str(header_buf_540,",");
            }
        }
        buffer_append_str(header_buf_540,")");
        result_type_532->mStatic=(_Bool)0;
        fun_544=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value660=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value658=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2003)))),(char*)come_increment_ref_count(name_533),(struct sType*)come_increment_ref_count(result_type_532),(struct list$1sTypeph*)come_increment_ref_count(param_types_536),(struct list$1charph*)come_increment_ref_count(param_names_538),(struct list$1charph*)come_increment_ref_count(param_default_parametors_539),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_531),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value659=buffer_to_string(header_buf_540)))),info))));
        if(right_value658) { come_call_finalizer(sFun_finalize,right_value658, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value659) { right_value659 = come_decrement_ref_count(right_value659, (void*)0, (void*)0, 1, 0); }
        if(right_value660) { come_call_finalizer(sFun_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0); }
        fun2_545=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value661=__builtin_string(fun_name))));
        if(right_value661) { right_value661 = come_decrement_ref_count(right_value661, (void*)0, (void*)0, 1, 0); }
        if(fun2_545==((void*)0)||fun2_545->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value662=string_clone(name_533)))),(struct sFun*)come_increment_ref_count(fun_544));
            if(right_value662) { right_value662 = come_decrement_ref_count(right_value662, (void*)0, (void*)0, 1, 0); }
        }
        cloner_511=fun_544;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2012);
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value664=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value663=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2012)))),(struct sFun*)come_increment_ref_count(fun_544),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=sFunNode_finalize;
        _inf_value11->clone=sFunNode_clone;
        _inf_value11->compile=sFunNode_compile;
        _inf_value11->sline=sFunNode_sline;
        _inf_value11->sname=sFunNode_sname;
        _inf_value11->terminated=sFunNode_terminated;
        node_547=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value668=_inf_value11)));
        if(right_value663) { come_call_finalizer(sFunNode_finalize,right_value663, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value664) { come_call_finalizer(sFunNode_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value668) { right_value668 = come_decrement_ref_count(right_value668, ((struct sNode*)right_value668)->finalize, ((struct sNode*)right_value668)->_protocol_obj, 1, 0); } 
        if(!node_547->compile(node_547->_protocol_obj,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj131=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_529);
        if(__dec_obj131) { come_call_finalizer(buffer_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0); }
        info->p=p_527;
        info->head=head_530;
        info->sline=sline_528;
        if(source_515) { come_call_finalizer(buffer_finalize,source_515, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_529) { come_call_finalizer(buffer_finalize,source3_529, (void*)0, (void*)0, 0, 0, 0); }
        if(block_531) { come_call_finalizer(sBlock_finalize,block_531, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_532) { come_call_finalizer(sType_finalize,result_type_532, (void*)0, (void*)0, 0, 0, 0); }
        if(name_533) { name_533 = come_decrement_ref_count(name_533, (void*)0, (void*)0, 0, 0); }
        if(self_type_534) { come_call_finalizer(sType_finalize,self_type_534, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_536) { come_call_finalizer(list$1sTypephp_finalize,param_types_536, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_538) { come_call_finalizer(list$1charphp_finalize,param_names_538, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_539) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_539, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_540) { come_call_finalizer(buffer_finalize,header_buf_540, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_544) { come_call_finalizer(sFun_finalize,fun_544, (void*)0, (void*)0, 0, 0, 0); }
        if(node_547) { node_547 = come_decrement_ref_count(node_547, ((struct sNode*)node_547)->finalize, ((struct sNode*)node_547)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result175__ = ((struct tuple2$2sFunpcharph*)(right_value670=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value669=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2025)))),cloner_511,(char*)come_increment_ref_count(real_fun_name_512))));
    if(real_fun_name_512) { real_fun_name_512 = come_decrement_ref_count(real_fun_name_512, (void*)0, (void*)0, 0, 0); }
    if(type2_513) { come_call_finalizer(sType_finalize,type2_513, (void*)0, (void*)0, 0, 0, 0); }
    return __result175__;
}

static void sFunNode_finalize(struct sFunNode* self){
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                if(self->mFun) { come_call_finalizer(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* right_value665;
struct sFunNode* result_546;
void* right_value666;
struct sFun* __dec_obj129;
void* right_value667;
char* __dec_obj130;
memset(&right_value665, 0, sizeof(void*));
memset(&result_546, 0, sizeof(struct sFunNode*));
memset(&right_value666, 0, sizeof(void*));
memset(&right_value667, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sFunNode* __result173__ = (void*)0;
                return __result173__;
            }
            result_546=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value665=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2014))));
            if(right_value665) { come_call_finalizer(sFunNode_finalize,right_value665, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                __dec_obj129=result_546->mFun;
                result_546->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value666=sFun_clone(self->mFun))));
                if(__dec_obj129) { come_call_finalizer(sFun_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value666) { come_call_finalizer(sFun_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_546->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj130=result_546->sname;
                result_546->sname=(char*)come_increment_ref_count(((char*)(right_value667=string_clone(self->sname))));
                if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0); }
                if(right_value667) { right_value667 = come_decrement_ref_count(right_value667, (void*)0, (void*)0, 1, 0); }
            }
            struct sFunNode* __result174__ = result_546;
            if(result_546) { come_call_finalizer(sFunNode_finalize,result_546, (void*)0, (void*)0, 0, 0, 1); }
            return __result174__;
}

