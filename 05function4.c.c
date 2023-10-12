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

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table);

void arrange_stack(struct sInfo* info, int top);

int expected_next_character(char c, struct sInfo* info);

struct sNode* parse_function(struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

int transpile_v5(struct sInfo* info);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNodep_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void list$1charphp_push_back2(struct list$1charph* self, char* item);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphboolp_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct sType* sTypep_clone(struct sType* self);
static void sTypep_finalize(struct sType* self);
static _Bool list$1charphp_contained(struct list$1charph* self, char* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static int list$1charphp_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int index);
static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value);
static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static void list$1charpp_remove(struct list$1charp* self, char* item);
static void list$1charpp_delete(struct list$1charp* self, int head, int tail);
static void list$1charpp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void sClassp_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void list$1charpp_push_back(struct list$1charp* self, char* item);
static void sClass_finalize(struct sClass* self);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
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






void skip_paren(struct sInfo* info){
int nest_0;
memset(&nest_0, 0, sizeof(int));
    nest_0=0;
    while((_Bool)1) {
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_0++;
        }
        else if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_0--;
            if(nest_0==0) {
                break;
            }
        }
        else {
            info->p++;
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
int line_1;
char* p_3;
void* right_value0;
char* __dec_obj1;
memset(&line_1, 0, sizeof(int));
memset(&p_3, 0, sizeof(char*));
memset(&right_value0, 0, sizeof(void*));
    while(memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(*info->p==35) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(memcmp(info->p,"pragma",strlen("pragma"))==0) {
            while(*info->p) {
                if(*info->p==10) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(xisdigit(*info->p)) {
            line_1=0;
            char fname_2[4096];
            memset(&fname_2, 0, sizeof(fname_2)); /* aaa */
            while(xisdigit(*info->p)) {
                line_1=line_1*10+(*info->p-48);
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(*info->p==34) {
                info->p++;
                p_3=fname_2;
                while(*info->p!=34) {
                    *p_3=*info->p;
                    p_3++;
                    info->p++;
                }
                *p_3=0;
                while(*info->p!=10) {
                    info->p++;
                }
                info->p++;
            }
            info->sline=line_1;
            __dec_obj1=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(fname_2))));
            if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
            if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
            skip_spaces_and_lf(info);
        }
        else if(*info->p==34) {
            info->p++;
            while(*info->p!=34) {
                info->p++;
            }
            while(*info->p!=10) {
                info->p++;
            }
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    while(memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
    _Bool __result7__ = memcmp(info->p,str,strlen(str))==0;
    return __result7__;
}

char* parse_word(struct sInfo* info){
void* right_value1;
void* right_value2;
struct buffer* buf_4;
void* right_value3;
int* a_5;
void* right_value4;
memset(&right_value1, 0, sizeof(void*));
memset(&right_value2, 0, sizeof(void*));
memset(&buf_4, 0, sizeof(struct buffer*));
memset(&right_value3, 0, sizeof(void*));
memset(&a_5, 0, sizeof(int*));
memset(&right_value4, 0, sizeof(void*));
    buf_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 117))))))));
    if(right_value1) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value2) { come_call_finalizer(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0); }
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_4,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(string_length(((char*)(right_value3=buffer_to_string(buf_4))))==0) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        a_5=(void*)0;
        *a_5=0;
        exit(2);
    }
    if(right_value3) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0); }
    char* __result8__ = ((char*)(right_value4=buffer_to_string(buf_4)));
    if(buf_4) { come_call_finalizer(buffer_finalize,buf_4, (void*)0, (void*)0, 0, 0, 0); }
    return __result8__;
}

void skip_spaces_and_lf(struct sInfo* info){
    while((_Bool)1) {
        if(*info->p==32||*info->p==9) {
            info->p++;
        }
        else if(*info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct sType* it_7;
memset(&it_7, 0, sizeof(struct sType*));
    for(
    it_7=list$1sTypephp_begin((type->mGenericsTypes));
    !list$1sTypephp_end((type->mGenericsTypes));
    it_7=list$1sTypephp_next((type->mGenericsTypes))
    ){
        if(is_contained_generics_class(it_7,info)) {
            _Bool __result14__ = (_Bool)1;
            return __result14__;
        }
    }
    if(type->mClass->mGenerics) {
        _Bool __result15__ = (_Bool)1;
        return __result15__;
    }
    _Bool __result16__ = (_Bool)0;
    return __result16__;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_6;
memset(&result_6, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sType* __result9__ = self->it->item;
            return __result9__;
        }
        memset(&result_6,0,sizeof(struct sType*));
        struct sType* __result10__ = result_6;
        return __result10__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
        _Bool __result11__ = self->it==((void*)0);
        return __result11__;
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_8;
memset(&result_8, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sType* __result12__ = self->it->item;
            return __result12__;
        }
        memset(&result_8,0,sizeof(struct sType*));
        struct sType* __result13__ = result_8;
        return __result13__;
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info){
void* right_value5;
void* right_value6;
struct list$1sTypeph* param_types_15;
void* right_value7;
void* right_value8;
struct list$1charph* param_names_16;
void* right_value9;
void* right_value10;
struct list$1charph* param_default_parametors_17;
_Bool var_args_18;
_Bool void_param_19;
char* p_20;
int sline_21;
void* right_value11;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* param_type_22;
char* param_name_23;
_Bool err_24;
void* right_value12;
struct sType* param_type2_25;
void* right_value46;
void* right_value50;
char* p_50;
_Bool no_comma_51;
void* right_value51;
struct sNode* node_52;
char* p2_53;
void* right_value52;
void* right_value53;
void* right_value54;
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&param_types_15, 0, sizeof(struct list$1sTypeph*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&param_names_16, 0, sizeof(struct list$1charph*));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
memset(&param_default_parametors_17, 0, sizeof(struct list$1charph*));
memset(&var_args_18, 0, sizeof(_Bool));
memset(&void_param_19, 0, sizeof(_Bool));
memset(&p_20, 0, sizeof(char*));
memset(&sline_21, 0, sizeof(int));
memset(&right_value11, 0, sizeof(void*));
memset(&param_type_22, 0, sizeof(struct sType*)); /* ccc */
memset(&param_name_23, 0, sizeof(char*)); /* ccc */
memset(&err_24, 0, sizeof(_Bool)); /* ccc */
memset(&param_type_22, 0, sizeof(struct sType*)); /* eee */
memset(&param_name_23, 0, sizeof(char*)); /* eee */
memset(&err_24, 0, sizeof(_Bool)); /* eee */
memset(&right_value12, 0, sizeof(void*));
memset(&param_type2_25, 0, sizeof(struct sType*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&p_50, 0, sizeof(char*));
memset(&no_comma_51, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&node_52, 0, sizeof(struct sNode*));
memset(&p2_53, 0, sizeof(char*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
    param_types_15=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value6=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value5=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 170))))))));
    if(right_value6) { come_call_finalizer(list$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
    param_names_16=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value8=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value7=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 171))))))));
    if(right_value8) { come_call_finalizer(list$1charphp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0); }
    param_default_parametors_17=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value10=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value9=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 172))))))));
    if(right_value10) { come_call_finalizer(list$1charphp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0); }
    var_args_18=(_Bool)0;
    expected_next_character(40,info);
    void_param_19=(_Bool)0;
    {
        p_20=info->p;
        sline_21=info->sline;
        if(memcmp(info->p,"void",strlen("void"))==0) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                void_param_19=(_Bool)1;
            }
        }
        info->p=p_20;
        info->sline=sline_21;
    }
    if(void_param_19) {
        if(memcmp(info->p,"void",strlen("void"))==0) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assgin_var1=((struct tuple3$3sTypephcharphbool*)(right_value11=parse_type(info,(_Bool)1,(_Bool)0)));
            param_type_22=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
            param_name_23=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            err_24=multiple_assgin_var1->v3;
            if(right_value11) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
            if(!err_24) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                exit(2);
            }
            param_type2_25=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=solve_generics(param_type_22,info->generics_type,info))));
            if(right_value12) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0); }
            param_type2_25->mFunctionParam=(_Bool)1;
            list$1sTypephp_push_back(param_types_15,(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_clone(param_type2_25)))));
            if(right_value46) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0); }
            list$1charphp_push_back(param_names_16,(char*)come_increment_ref_count(((char*)(right_value50=string_clone(param_name_23)))));
            if(right_value50) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0); }
            if(*info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_50=info->p;
                no_comma_51=info->no_comma;
                info->no_comma=(_Bool)1;
                node_52=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value51=expression_v13(info))));
                if(right_value51) { right_value51 = come_decrement_ref_count(right_value51, ((struct sNode*)right_value51)->finalize, ((struct sNode*)right_value51)->_protocol_obj, 1, 0); } 
                info->no_comma=no_comma_51;
                p2_53=info->p;
                char buf_54[p2_53-p_50+1];
                memset(&buf_54, 0, sizeof(buf_54)); /* aaa */
                memcpy(buf_54,p_50,p2_53-p_50);
                buf_54[p2_53-p_50]=0;
                list$1charphp_push_back(param_default_parametors_17,(char*)come_increment_ref_count(((char*)(right_value52=__builtin_string(buf_54)))));
                if(right_value52) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0); }
                if(node_52) { node_52 = come_decrement_ref_count(node_52, ((struct sNode*)node_52)->finalize, ((struct sNode*)node_52)->_protocol_obj, 0, 0); } 
            }
            else {
                list$1charphp_push_back(param_default_parametors_17,((void*)0));
            }
            parse_sharp_v5(info);
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(parsecmp("...",info)) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_18=(_Bool)1;
                    expected_next_character(41,info);
                    break;
                }
            }
            else if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            if(param_type_22) { come_call_finalizer(sType_finalize,param_type_22, (void*)0, (void*)0, 0, 0, 0); }
            if(param_name_23) { param_name_23 = come_decrement_ref_count(param_name_23, (void*)0, (void*)0, 0, 0); }
            if(param_type2_25) { come_call_finalizer(sType_finalize,param_type2_25, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result33__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value54=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value53=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 281)))),(struct list$1sTypeph*)come_increment_ref_count(param_types_15),(struct list$1charph*)come_increment_ref_count(param_names_16),(struct list$1charph*)come_increment_ref_count(param_default_parametors_17),var_args_18)));
    if(param_types_15) { come_call_finalizer(list$1sTypephp_finalize,param_types_15, (void*)0, (void*)0, 0, 0, 0); }
    if(param_names_16) { come_call_finalizer(list$1charphp_finalize,param_names_16, (void*)0, (void*)0, 0, 0, 0); }
    if(param_default_parametors_17) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_17, (void*)0, (void*)0, 0, 0, 0); }
    return __result33__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1sTypeph* __result17__ = self;
        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        return __result17__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_9;
struct list_item$1sTypeph* prev_it_14;
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sTypeph*));
            it_9=self->head;
            while(it_9!=((void*)0)) {
                if(1) {
                    if(it_9->item) { come_call_finalizer(sType_finalize,it_9->item, (void*)0, (void*)0, 0, 0, 0); }
                }
                prev_it_14=it_9;
                it_9=it_9->next;
                come_free_object(prev_it_14);
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

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_10;
struct list_item$1sNodeph* prev_it_11;
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                                it_10=self->head;
                                while(it_10!=((void*)0)) {
                                    if(1) {
                                        if(it_10->item) { it_10->item = come_decrement_ref_count(it_10->item, ((struct sNode*)it_10->item)->finalize, ((struct sNode*)it_10->item)->_protocol_obj, 0, 0); } 
                                    }
                                    prev_it_11=it_10;
                                    it_10=it_10->next;
                                    come_free_object(prev_it_11);
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_12;
struct list_item$1charph* prev_it_13;
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                                it_12=self->head;
                                while(it_12!=((void*)0)) {
                                    if(1) {
                                        if(it_12->item) { it_12->item = come_decrement_ref_count(it_12->item, (void*)0, (void*)0, 0, 0); }
                                    }
                                    prev_it_13=it_12;
                                    it_12=it_12->next;
                                    come_free_object(prev_it_13);
                                }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1charph* __result18__ = self;
        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        return __result18__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
                }
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value13;
struct list_item$1sTypeph* litem_26;
struct sType* __dec_obj2;
void* right_value14;
struct list_item$1sTypeph* litem_27;
struct sType* __dec_obj3;
void* right_value15;
struct list_item$1sTypeph* litem_28;
struct sType* __dec_obj4;
memset(&right_value13, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value14, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value15, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1sTypeph*));
                if(self->len==0) {
                    litem_26=((struct list_item$1sTypeph*)(right_value13=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function4.c", 230)));
                    litem_26->prev=((void*)0);
                    litem_26->next=((void*)0);
                    __dec_obj2=litem_26->item;
                    litem_26->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj2) { come_call_finalizer(sType_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_26;
                    self->head=litem_26;
                }
                else if(self->len==1) {
                    litem_27=((struct list_item$1sTypeph*)(right_value14=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function4.c", 240)));
                    litem_27->prev=self->head;
                    litem_27->next=((void*)0);
                    __dec_obj3=litem_27->item;
                    litem_27->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj3) { come_call_finalizer(sType_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_27;
                    self->head->next=litem_27;
                }
                else {
                    litem_28=((struct list_item$1sTypeph*)(right_value15=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function4.c", 250)));
                    litem_28->prev=self->tail;
                    litem_28->next=((void*)0);
                    __dec_obj4=litem_28->item;
                    litem_28->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail->next=litem_28;
                    self->tail=litem_28;
                }
                self->len++;
                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct sType* sType_clone(struct sType* self){
void* right_value16;
struct sType* result_29;
void* right_value19;
struct tuple1$1sTypeph* __dec_obj6;
void* right_value20;
char* __dec_obj7;
void* right_value27;
struct list$1sTypeph* __dec_obj11;
void* right_value35;
struct list$1sNodeph* __dec_obj15;
void* right_value36;
struct list$1sTypeph* __dec_obj16;
void* right_value43;
struct list$1charph* __dec_obj20;
void* right_value44;
struct tuple1$1sTypeph* __dec_obj21;
void* right_value45;
char* __dec_obj22;
memset(&right_value16, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct sType*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sType* __result19__ = (void*)0;
                    return __result19__;
                }
                result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value16=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 230))));
                if(right_value16) { come_call_finalizer(sType_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_29->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj6=result_29->mNoSolvedGenericsType;
                    result_29->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value19=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj6) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value19) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj7=result_29->mGenericsName;
                    result_29->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value20=string_clone(self->mGenericsName))));
                    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
                    if(right_value20) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj11=result_29->mGenericsTypes;
                    result_29->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value27=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj11) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value27) { come_call_finalizer(list$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj15=result_29->mArrayNum;
                    result_29->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value35=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj15) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value35) { come_call_finalizer(list$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_29->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj16=result_29->mParamTypes;
                    result_29->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value36=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj16) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value36) { come_call_finalizer(list$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj20=result_29->mParamNames;
                    result_29->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value43=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj20) { come_call_finalizer(list$1charphp_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value43) { come_call_finalizer(list$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj21=result_29->mResultType;
                    result_29->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value44=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj21) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value44) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_29->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)) {
                    result_29->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_29->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_29->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_29->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_29->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_29->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_29->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_29->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_29->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_29->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_29->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_29->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_29->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_29->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_29->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_29->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_29->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_29->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_29->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)) {
                    result_29->mSizeNum=self->mSizeNum;
                }
                if(self!=((void*)0)) {
                    result_29->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_29->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj22=result_29->mOriginalTypeName;
                    result_29->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value45=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
                    if(right_value45) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_29->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_29->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_29->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_29->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_29->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_29->mComeMemCore=self->mComeMemCore;
                }
                if(self!=((void*)0)) {
                    result_29->mInline=self->mInline;
                }
                struct sType* __result31__ = result_29;
                if(result_29) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1); }
                return __result31__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value17;
struct tuple1$1sTypeph* result_30;
void* right_value18;
struct sType* __dec_obj5;
memset(&right_value17, 0, sizeof(void*));
memset(&result_30, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value18, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct tuple1$1sTypeph* __result20__ = (void*)0;
                            return __result20__;
                        }
                        result_30=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 234))));
                        if(right_value17) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0); }
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            __dec_obj5=result_30->v1;
                            result_30->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=sType_clone(self->v1))));
                            if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value18) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        struct tuple1$1sTypeph* __result21__ = result_30;
                        if(result_30) { come_call_finalizer(tuple1$1sTypephp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1); }
                        return __result21__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value21;
void* right_value22;
struct list$1sTypeph* result_31;
struct list_item$1sTypeph* it_32;
void* right_value26;
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&result_31, 0, sizeof(struct list$1sTypeph*));
memset(&it_32, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value26, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1sTypeph* __result22__ = ((void*)0);
                            return __result22__;
                        }
                        result_31=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 238))))))));
                        if(right_value22) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
                        it_32=self->head;
                        while(it_32!=((void*)0)) {
                            list$1sTypephp_push_back2(result_31,(struct sType*)come_increment_ref_count(((struct sType*)(right_value26=sType_clone(it_32->item)))));
                            if(right_value26) { come_call_finalizer(sType_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0); }
                            it_32=it_32->next;
                        }
                        struct list$1sTypeph* __result23__ = result_31;
                        if(result_31) { come_call_finalizer(list$1sTypephp_finalize,result_31, (void*)0, (void*)0, 0, 0, 1); }
                        return __result23__;
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value23;
struct list_item$1sTypeph* litem_33;
struct sType* __dec_obj8;
void* right_value24;
struct list_item$1sTypeph* litem_34;
struct sType* __dec_obj9;
void* right_value25;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj10;
memset(&right_value23, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
                                if(self->len==0) {
                                    litem_33=((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function4.c", 244)));
                                    litem_33->prev=((void*)0);
                                    litem_33->next=((void*)0);
                                    __dec_obj8=litem_33->item;
                                    litem_33->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0); }
                                    self->tail=litem_33;
                                    self->head=litem_33;
                                }
                                else if(self->len==1) {
                                    litem_34=((struct list_item$1sTypeph*)(right_value24=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function4.c", 254)));
                                    litem_34->prev=self->head;
                                    litem_34->next=((void*)0);
                                    __dec_obj9=litem_34->item;
                                    litem_34->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0); }
                                    self->tail=litem_34;
                                    self->head->next=litem_34;
                                }
                                else {
                                    litem_35=((struct list_item$1sTypeph*)(right_value25=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "05function4.c", 264)));
                                    litem_35->prev=self->tail;
                                    litem_35->next=((void*)0);
                                    __dec_obj10=litem_35->item;
                                    litem_35->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0); }
                                    self->tail->next=litem_35;
                                    self->tail=litem_35;
                                }
                                self->len++;
                                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value28;
void* right_value29;
struct list$1sNodeph* result_36;
struct list_item$1sNodeph* it_37;
void* right_value34;
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct list$1sNodeph*));
memset(&it_37, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value34, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1sNodeph* __result24__ = ((void*)0);
                            return __result24__;
                        }
                        result_36=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value29=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value28=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function4.c", 239))))))));
                        if(right_value29) { come_call_finalizer(list$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0); }
                        it_37=self->head;
                        while(it_37!=((void*)0)) {
                            list$1sNodephp_push_back2(result_36,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value34=sNodep_clone(it_37->item)))));
                            if(right_value34) { right_value34 = come_decrement_ref_count(right_value34, ((struct sNode*)right_value34)->finalize, ((struct sNode*)right_value34)->_protocol_obj, 1, 0); } 
                            it_37=it_37->next;
                        }
                        struct list$1sNodeph* __result28__ = result_36;
                        if(result_36) { come_call_finalizer(list$1sNodephp_finalize,result_36, (void*)0, (void*)0, 0, 0, 1); }
                        return __result28__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            struct list$1sNodeph* __result25__ = self;
                            if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            return __result25__;
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value30;
struct list_item$1sNodeph* litem_38;
struct sNode* __dec_obj12;
void* right_value31;
struct list_item$1sNodeph* litem_39;
struct sNode* __dec_obj13;
void* right_value32;
struct list_item$1sNodeph* litem_40;
struct sNode* __dec_obj14;
memset(&right_value30, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value31, 0, sizeof(void*));
memset(&litem_39, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value32, 0, sizeof(void*));
memset(&litem_40, 0, sizeof(struct list_item$1sNodeph*));
                                if(self->len==0) {
                                    litem_38=((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function4.c", 245)));
                                    litem_38->prev=((void*)0);
                                    litem_38->next=((void*)0);
                                    __dec_obj12=litem_38->item;
                                    litem_38->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0); }
                                    self->tail=litem_38;
                                    self->head=litem_38;
                                }
                                else if(self->len==1) {
                                    litem_39=((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function4.c", 255)));
                                    litem_39->prev=self->head;
                                    litem_39->next=((void*)0);
                                    __dec_obj13=litem_39->item;
                                    litem_39->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0); }
                                    self->tail=litem_39;
                                    self->head->next=litem_39;
                                }
                                else {
                                    litem_40=((struct list_item$1sNodeph*)(right_value32=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function4.c", 265)));
                                    litem_40->prev=self->tail;
                                    litem_40->next=((void*)0);
                                    __dec_obj14=litem_40->item;
                                    litem_40->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0); }
                                    self->tail->next=litem_40;
                                    self->tail=litem_40;
                                }
                                self->len++;
                                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value33;
struct sNode* result_41;
memset(&right_value33, 0, sizeof(void*));
memset(&result_41, 0, sizeof(struct sNode*));
                                if(self==(void*)0) {
                                    struct sNode* __result26__ = (void*)0;
                                    return __result26__;
                                }
                                result_41=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "05function4.c", 245))));
                                if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                    result_41->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(self!=((void*)0)) {
                                    result_41->finalize=self->finalize;
                                }
                                if(self!=((void*)0)) {
                                    result_41->clone=self->clone;
                                }
                                if(self!=((void*)0)) {
                                    result_41->compile=self->compile;
                                }
                                if(self!=((void*)0)) {
                                    result_41->sline=self->sline;
                                }
                                if(self!=((void*)0)) {
                                    result_41->sname=self->sname;
                                }
                                if(self!=((void*)0)) {
                                    result_41->terminated=self->terminated;
                                }
                                struct sNode* __result27__ = result_41;
                                return __result27__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value37;
void* right_value38;
struct list$1charph* result_42;
struct list_item$1charph* it_43;
void* right_value42;
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&result_42, 0, sizeof(struct list$1charph*));
memset(&it_43, 0, sizeof(struct list_item$1charph*));
memset(&right_value42, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1charph* __result29__ = ((void*)0);
                            return __result29__;
                        }
                        result_42=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value37=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 242))))))));
                        if(right_value38) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
                        it_43=self->head;
                        while(it_43!=((void*)0)) {
                            list$1charphp_push_back2(result_42,(char*)come_increment_ref_count(((char*)(right_value42=string_clone(it_43->item)))));
                            if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
                            it_43=it_43->next;
                        }
                        struct list$1charph* __result30__ = result_42;
                        if(result_42) { come_call_finalizer(list$1charphp_finalize,result_42, (void*)0, (void*)0, 0, 0, 1); }
                        return __result30__;
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value39;
struct list_item$1charph* litem_44;
char* __dec_obj17;
void* right_value40;
struct list_item$1charph* litem_45;
char* __dec_obj18;
void* right_value41;
struct list_item$1charph* litem_46;
char* __dec_obj19;
memset(&right_value39, 0, sizeof(void*));
memset(&litem_44, 0, sizeof(struct list_item$1charph*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1charph*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1charph*));
                                if(self->len==0) {
                                    litem_44=((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function4.c", 248)));
                                    litem_44->prev=((void*)0);
                                    litem_44->next=((void*)0);
                                    __dec_obj17=litem_44->item;
                                    litem_44->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
                                    self->tail=litem_44;
                                    self->head=litem_44;
                                }
                                else if(self->len==1) {
                                    litem_45=((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function4.c", 258)));
                                    litem_45->prev=self->head;
                                    litem_45->next=((void*)0);
                                    __dec_obj18=litem_45->item;
                                    litem_45->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
                                    self->tail=litem_45;
                                    self->head->next=litem_45;
                                }
                                else {
                                    litem_46=((struct list_item$1charph*)(right_value41=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function4.c", 268)));
                                    litem_46->prev=self->tail;
                                    litem_46->next=((void*)0);
                                    __dec_obj19=litem_46->item;
                                    litem_46->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
                                    self->tail->next=litem_46;
                                    self->tail=litem_46;
                                }
                                self->len++;
                                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value47;
struct list_item$1charph* litem_47;
char* __dec_obj23;
void* right_value48;
struct list_item$1charph* litem_48;
char* __dec_obj24;
void* right_value49;
struct list_item$1charph* litem_49;
char* __dec_obj25;
memset(&right_value47, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1charph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1charph*));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_49, 0, sizeof(struct list_item$1charph*));
                if(self->len==0) {
                    litem_47=((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function4.c", 231)));
                    litem_47->prev=((void*)0);
                    litem_47->next=((void*)0);
                    __dec_obj23=litem_47->item;
                    litem_47->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_47;
                    self->head=litem_47;
                }
                else if(self->len==1) {
                    litem_48=((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function4.c", 241)));
                    litem_48->prev=self->head;
                    litem_48->next=((void*)0);
                    __dec_obj24=litem_48->item;
                    litem_48->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_48;
                    self->head->next=litem_48;
                }
                else {
                    litem_49=((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "05function4.c", 251)));
                    litem_49->prev=self->tail;
                    litem_49->next=((void*)0);
                    __dec_obj25=litem_49->item;
                    litem_49->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_49;
                    self->tail=litem_49;
                }
                self->len++;
                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
struct list$1sTypeph* __dec_obj26;
struct list$1charph* __dec_obj27;
struct list$1charph* __dec_obj28;
        __dec_obj26=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        if(__dec_obj26) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0); }
        __dec_obj27=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        if(__dec_obj27) { come_call_finalizer(list$1charphp_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0); }
        __dec_obj28=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        if(__dec_obj28) { come_call_finalizer(list$1charphp_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0); }
        self->v4=v4;
        struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result32__ = self;
        if(self) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        if(v1) { come_call_finalizer(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1); }
        if(v2) { come_call_finalizer(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1); }
        if(v3) { come_call_finalizer(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1); }
        return __result32__;
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

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
char* head_55;
int head_sline_56;
void* right_value55;
char* type_name_57;
void* right_value56;
char* __dec_obj29;
_Bool constant_58;
_Bool static__59;
_Bool volatile__60;
_Bool register__61;
_Bool unsigned__62;
_Bool long__63;
_Bool long_long_64;
_Bool short__65;
_Bool restrict__66;
_Bool struct__67;
_Bool union__68;
_Bool enum__69;
_Bool no_heap_70;
_Bool extern__71;
_Bool inline__72;
_Bool come_mem_core__73;
_Bool anonymous_type_74;
char* p_75;
int sline_76;
void* right_value57;
void* right_value58;
void* right_value59;
void* right_value60;
char* __dec_obj32;
void* right_value61;
char* __dec_obj33;
char* p_77;
int sline_78;
void* right_value62;
void* right_value63;
char* p_79;
int sline_80;
void* right_value64;
void* right_value65;
void* right_value66;
char* p_81;
int sline_82;
void* right_value67;
void* right_value68;
char* __dec_obj34;
void* right_value69;
char* __dec_obj35;
void* right_value70;
char* __dec_obj36;
char* p_83;
int sline_84;
void* right_value71;
void* right_value72;
void* right_value73;
char* p_85;
int sline_86;
void* right_value74;
void* right_value75;
void* right_value76;
void* right_value77;
char* __dec_obj37;
void* right_value78;
char* __dec_obj38;
char* p_87;
int sline_88;
void* right_value79;
void* right_value80;
void* right_value81;
void* right_value82;
char* __dec_obj39;
void* right_value83;
char* __dec_obj40;
void* right_value84;
char* __dec_obj41;
void* right_value85;
char* __dec_obj42;
void* right_value86;
char* __dec_obj43;
void* right_value87;
char* __dec_obj44;
char* p_89;
int sline_90;
void* right_value88;
char* __dec_obj45;
void* right_value89;
char* __dec_obj46;
void* right_value90;
char* __dec_obj47;
void* right_value91;
char* __dec_obj48;
void* right_value92;
char* __dec_obj49;
void* right_value93;
char* __dec_obj50;
char* p_91;
int sline_92;
void* right_value94;
char* __dec_obj51;
char* p_93;
int sline_94;
void* right_value95;
char* __dec_obj52;
void* right_value96;
char* __dec_obj53;
void* right_value97;
char* __dec_obj54;
char* p_95;
int sline_96;
void* right_value98;
char* __dec_obj55;
void* right_value99;
char* __dec_obj56;
void* right_value100;
char* __dec_obj57;
void* right_value101;
char* __dec_obj58;
void* right_value102;
char* __dec_obj59;
void* right_value103;
char* __dec_obj60;
void* right_value104;
char* __dec_obj61;
void* right_value105;
char* __dec_obj62;
char* p_97;
int sline_98;
void* right_value106;
char* __dec_obj63;
void* right_value107;
char* __dec_obj64;
int pointer_num_99;
_Bool lambda_flag_100;
char* pX_101;
int slineX_102;
void* right_value108;
struct sType* type_103;
char* var_name_104;
static int anonymous_num_105=0;
void* right_value109;
char* __dec_obj65;
void* right_value110;
struct sNode* node_106;
void* right_value111;
void* right_value112;
void* right_value113;
void* right_value114;
struct sType* __dec_obj66;
void* right_value115;
char* __dec_obj67;
void* right_value116;
struct sNode* node_107;
void* right_value117;
void* right_value118;
void* right_value119;
void* right_value120;
struct sType* __dec_obj68;
void* right_value121;
char* __dec_obj69;
void* right_value122;
struct sNode* node_108;
void* right_value123;
void* right_value124;
void* right_value125;
void* right_value126;
struct sType* __dec_obj70;
void* right_value127;
void* right_value128;
void* right_value129;
char* __dec_obj71;
static int num_anonymous_var_name_109=0;
void* right_value130;
char* __dec_obj72;
int n_110;
struct sType* result_type_111;
void* right_value140;
struct sType* __dec_obj81;
int i_119;
void* right_value141;
void* right_value142;
void* right_value143;
struct sType* __dec_obj82;
void* right_value144;
void* right_value145;
struct sType* __dec_obj83;
void* right_value146;
char* __dec_obj84;
void* right_value147;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var2;
struct list$1sTypeph* param_types_123;
struct list$1charph* param_names_124;
struct list$1charph* param_default_parametors_125;
_Bool var_args_126;
void* right_value148;
void* right_value149;
struct sType* __dec_obj85;
void* right_value150;
void* right_value151;
struct tuple1$1sTypeph* __dec_obj87;
struct list$1sTypeph* __dec_obj88;
struct list$1charph* __dec_obj89;
struct sType* result_type_127;
void* right_value152;
struct sType* __dec_obj90;
int i_128;
void* right_value153;
void* right_value154;
void* right_value155;
struct sType* __dec_obj91;
void* right_value156;
void* right_value157;
struct sType* __dec_obj92;
void* right_value158;
char* __dec_obj93;
void* right_value159;
void* right_value160;
static int num_anonymous_var_name_129=0;
void* right_value161;
char* __dec_obj94;
void* right_value162;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_130;
struct list$1charph* param_names_131;
struct list$1charph* param_default_parametors_132;
_Bool var_args_133;
void* right_value163;
void* right_value164;
struct sType* __dec_obj95;
void* right_value165;
void* right_value166;
struct tuple1$1sTypeph* __dec_obj96;
struct list$1sTypeph* __dec_obj97;
struct list$1charph* __dec_obj98;
void* right_value167;
struct sType* __dec_obj99;
void* right_value168;
char* __dec_obj100;
int i_134;
void* right_value169;
void* right_value170;
void* right_value171;
struct sType* __dec_obj101;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
struct sType* __dec_obj102;
void* right_value176;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* generics_type_138;
char* var_name_139;
_Bool err_140;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
struct sType* __dec_obj103;
void* right_value182;
char* new_name_141;
struct sClass* klass_142;
void* right_value189;
void* right_value190;
void* right_value191;
void* right_value192;
struct sType* __dec_obj104;
void* right_value193;
void* right_value194;
struct list$1sTypeph* types_183;
void* right_value195;
void* right_value196;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* type2_184;
char* name_185;
_Bool err_186;
void* right_value197;
void* right_value198;
void* right_value199;
int num_tuples_187;
void* right_value200;
void* right_value201;
void* right_value202;
struct sType* __dec_obj105;
struct sType* it_188;
void* right_value203;
void* right_value204;
struct sType* __dec_obj106;
void* right_value205;
char* new_name_189;
void* right_value206;
char* __dec_obj107;
static int num_anonymous_var_name_190=0;
void* right_value207;
char* __dec_obj108;
int n_191;
void* right_value208;
struct sNode* node_192;
void* right_value212;
void* right_value213;
memset(&head_55, 0, sizeof(char*));
memset(&head_sline_56, 0, sizeof(int));
memset(&right_value55, 0, sizeof(void*));
memset(&type_name_57, 0, sizeof(char*));
memset(&right_value56, 0, sizeof(void*));
memset(&constant_58, 0, sizeof(_Bool));
memset(&static__59, 0, sizeof(_Bool));
memset(&volatile__60, 0, sizeof(_Bool));
memset(&register__61, 0, sizeof(_Bool));
memset(&unsigned__62, 0, sizeof(_Bool));
memset(&long__63, 0, sizeof(_Bool));
memset(&long_long_64, 0, sizeof(_Bool));
memset(&short__65, 0, sizeof(_Bool));
memset(&restrict__66, 0, sizeof(_Bool));
memset(&struct__67, 0, sizeof(_Bool));
memset(&union__68, 0, sizeof(_Bool));
memset(&enum__69, 0, sizeof(_Bool));
memset(&no_heap_70, 0, sizeof(_Bool));
memset(&extern__71, 0, sizeof(_Bool));
memset(&inline__72, 0, sizeof(_Bool));
memset(&come_mem_core__73, 0, sizeof(_Bool));
memset(&anonymous_type_74, 0, sizeof(_Bool));
memset(&p_75, 0, sizeof(char*));
memset(&sline_76, 0, sizeof(int));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&p_77, 0, sizeof(char*));
memset(&sline_78, 0, sizeof(int));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&p_79, 0, sizeof(char*));
memset(&sline_80, 0, sizeof(int));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&p_81, 0, sizeof(char*));
memset(&sline_82, 0, sizeof(int));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&p_83, 0, sizeof(char*));
memset(&sline_84, 0, sizeof(int));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&p_85, 0, sizeof(char*));
memset(&sline_86, 0, sizeof(int));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&p_87, 0, sizeof(char*));
memset(&sline_88, 0, sizeof(int));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&p_89, 0, sizeof(char*));
memset(&sline_90, 0, sizeof(int));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&p_91, 0, sizeof(char*));
memset(&sline_92, 0, sizeof(int));
memset(&right_value94, 0, sizeof(void*));
memset(&p_93, 0, sizeof(char*));
memset(&sline_94, 0, sizeof(int));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&p_95, 0, sizeof(char*));
memset(&sline_96, 0, sizeof(int));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&p_97, 0, sizeof(char*));
memset(&sline_98, 0, sizeof(int));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&pointer_num_99, 0, sizeof(int));
memset(&lambda_flag_100, 0, sizeof(_Bool));
memset(&pX_101, 0, sizeof(char*));
memset(&slineX_102, 0, sizeof(int));
memset(&right_value108, 0, sizeof(void*));
memset(&type_103, 0, sizeof(struct sType*)); /* bbb */
memset(&var_name_104, 0, sizeof(char*)); /* bbb */
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&node_106, 0, sizeof(struct sNode*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&node_107, 0, sizeof(struct sNode*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&node_108, 0, sizeof(struct sNode*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&n_110, 0, sizeof(int));
memset(&result_type_111, 0, sizeof(struct sType*)); /* bbb */
memset(&right_value140, 0, sizeof(void*));
memset(&i_119, 0, sizeof(int));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&param_types_123, 0, sizeof(struct list$1sTypeph*)); /* ccc */
memset(&param_names_124, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&param_default_parametors_125, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&var_args_126, 0, sizeof(_Bool)); /* ccc */
memset(&param_types_123, 0, sizeof(struct list$1sTypeph*)); /* eee */
memset(&param_names_124, 0, sizeof(struct list$1charph*)); /* eee */
memset(&param_default_parametors_125, 0, sizeof(struct list$1charph*)); /* eee */
memset(&var_args_126, 0, sizeof(_Bool)); /* eee */
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&result_type_127, 0, sizeof(struct sType*)); /* bbb */
memset(&right_value152, 0, sizeof(void*));
memset(&i_128, 0, sizeof(int));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&param_types_130, 0, sizeof(struct list$1sTypeph*)); /* ccc */
memset(&param_names_131, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&param_default_parametors_132, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&var_args_133, 0, sizeof(_Bool)); /* ccc */
memset(&param_types_130, 0, sizeof(struct list$1sTypeph*)); /* eee */
memset(&param_names_131, 0, sizeof(struct list$1charph*)); /* eee */
memset(&param_default_parametors_132, 0, sizeof(struct list$1charph*)); /* eee */
memset(&var_args_133, 0, sizeof(_Bool)); /* eee */
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&i_134, 0, sizeof(int));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&generics_type_138, 0, sizeof(struct sType*)); /* ccc */
memset(&var_name_139, 0, sizeof(char*)); /* ccc */
memset(&err_140, 0, sizeof(_Bool)); /* ccc */
memset(&generics_type_138, 0, sizeof(struct sType*)); /* eee */
memset(&var_name_139, 0, sizeof(char*)); /* eee */
memset(&err_140, 0, sizeof(_Bool)); /* eee */
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&new_name_141, 0, sizeof(char*));
memset(&klass_142, 0, sizeof(struct sClass*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&types_183, 0, sizeof(struct list$1sTypeph*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&type2_184, 0, sizeof(struct sType*)); /* ccc */
memset(&name_185, 0, sizeof(char*)); /* ccc */
memset(&err_186, 0, sizeof(_Bool)); /* ccc */
memset(&type2_184, 0, sizeof(struct sType*)); /* eee */
memset(&name_185, 0, sizeof(char*)); /* eee */
memset(&err_186, 0, sizeof(_Bool)); /* eee */
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&num_tuples_187, 0, sizeof(int));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&it_188, 0, sizeof(struct sType*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&new_name_189, 0, sizeof(char*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&n_191, 0, sizeof(int));
memset(&right_value208, 0, sizeof(void*));
memset(&node_192, 0, sizeof(struct sNode*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
    head_55=info->p;
    head_sline_56=info->sline;
    info->define_struct=(_Bool)0;
    type_name_57=(char*)come_increment_ref_count(((char*)(right_value55=parse_word(info))));
    if(right_value55) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0); }
    if(string_operator_equals(type_name_57,"__extension__")) {
        __dec_obj29=type_name_57;
        type_name_57=(char*)come_increment_ref_count(((char*)(right_value56=parse_word(info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
        if(right_value56) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0); }
    }
    constant_58=(_Bool)0;
    static__59=(_Bool)0;
    volatile__60=(_Bool)0;
    register__61=(_Bool)0;
    unsigned__62=(_Bool)0;
    long__63=(_Bool)0;
    long_long_64=(_Bool)0;
    short__65=(_Bool)0;
    restrict__66=(_Bool)0;
    struct__67=(_Bool)0;
    union__68=(_Bool)0;
    enum__69=(_Bool)0;
    no_heap_70=(_Bool)0;
    extern__71=(_Bool)0;
    inline__72=(_Bool)0;
    come_mem_core__73=(_Bool)0;
    anonymous_type_74=(_Bool)0;
    while((_Bool)1) {
        if(string_operator_equals(type_name_57,"struct")) {
            struct__67=(_Bool)1;
            if(*info->p==123) {
                p_75=info->p;
                sline_76=info->sline;
                ((char*)(right_value57=skip_block(info)));
                if(right_value57) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_55;
                    info->sline=head_sline_56;
                    info->define_struct=(_Bool)1;
                    struct tuple3$3sTypephcharphbool* __result35__ = ((struct tuple3$3sTypephcharphbool*)(right_value59=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value58=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 329)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    return __result35__;
                }
                else {
                    anonymous_type_74=(_Bool)1;
                    __dec_obj32=type_name_57;
                    type_name_57=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(""))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
                    if(right_value60) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0); }
                    info->p=p_75;
                    info->sline=sline_76;
                    break;
                }
            }
            __dec_obj33=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value61=parse_word(info))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0); }
            if(right_value61) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0); }
            if(*info->p==60) {
                p_77=info->p;
                sline_78=info->sline;
                info->p++;
                skip_spaces_and_lf(info);
                while((_Bool)1) {
                    if(*info->p==62) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p==123) {
                        }
                        else {
                            info->p=p_77;
                            info->sline=sline_78;
                        }
                        break;
                    }
                    else if(*info->p==0) {
                        err_msg(info,"invalid struct definition");
                        struct tuple3$3sTypephcharphbool* __result36__ = ((struct tuple3$3sTypephcharphbool*)(right_value63=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value62=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 364)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        return __result36__;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            if(*info->p==123) {
                p_79=info->p;
                sline_80=info->sline;
                ((char*)(right_value64=skip_block(info)));
                if(right_value64) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_55;
                    info->sline=head_sline_56;
                    info->define_struct=(_Bool)1;
                    struct tuple3$3sTypephcharphbool* __result37__ = ((struct tuple3$3sTypephcharphbool*)(right_value66=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value65=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 382)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    return __result37__;
                }
                else {
                    anonymous_type_74=(_Bool)1;
                    info->p=p_79;
                    info->sline=sline_80;
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name_57,"union")) {
            union__68=(_Bool)1;
            if(*info->p==123) {
                p_81=info->p;
                sline_82=info->sline;
                ((char*)(right_value67=skip_block(info)));
                if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_55;
                    info->sline=head_sline_56;
                    info->define_struct=(_Bool)0;
                    anonymous_type_74=(_Bool)1;
                    __dec_obj34=type_name_57;
                    type_name_57=(char*)come_increment_ref_count(((char*)(right_value68=__builtin_string(""))));
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
                    if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
                    info->p=p_81;
                    info->sline=sline_82;
                    break;
                }
                else {
                    anonymous_type_74=(_Bool)1;
                    __dec_obj35=type_name_57;
                    type_name_57=(char*)come_increment_ref_count(((char*)(right_value69=__builtin_string(""))));
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
                    if(right_value69) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0); }
                    info->p=p_81;
                    info->sline=sline_82;
                    break;
                }
            }
            __dec_obj36=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value70=parse_word(info))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0); }
            if(right_value70) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0); }
            if(*info->p==123) {
                p_83=info->p;
                sline_84=info->sline;
                ((char*)(right_value71=skip_block(info)));
                if(right_value71) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_55;
                    info->sline=head_sline_56;
                    info->define_struct=(_Bool)1;
                    struct tuple3$3sTypephcharphbool* __result38__ = ((struct tuple3$3sTypephcharphbool*)(right_value73=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value72=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 434)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    return __result38__;
                }
                else {
                    anonymous_type_74=(_Bool)1;
                    info->p=p_83;
                    info->sline=sline_84;
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name_57,"enum")) {
            enum__69=(_Bool)1;
            if(*info->p==123) {
                p_85=info->p;
                sline_86=info->sline;
                ((char*)(right_value74=skip_block(info)));
                if(right_value74) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_55;
                    info->sline=head_sline_56;
                    info->define_struct=(_Bool)1;
                    struct tuple3$3sTypephcharphbool* __result39__ = ((struct tuple3$3sTypephcharphbool*)(right_value76=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value75=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 457)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    return __result39__;
                }
                else {
                    anonymous_type_74=(_Bool)1;
                    __dec_obj37=type_name_57;
                    type_name_57=(char*)come_increment_ref_count(((char*)(right_value77=__builtin_string(""))));
                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
                    if(right_value77) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0); }
                    info->p=p_85;
                    info->sline=sline_86;
                    break;
                }
            }
            __dec_obj38=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value78=parse_word(info))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
            if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0); }
            if(*info->p==123) {
                p_87=info->p;
                sline_88=info->sline;
                ((char*)(right_value79=skip_block(info)));
                if(right_value79) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_55;
                    info->sline=head_sline_56;
                    info->define_struct=(_Bool)1;
                    struct tuple3$3sTypephcharphbool* __result40__ = ((struct tuple3$3sTypephcharphbool*)(right_value81=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value80=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 480)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    return __result40__;
                }
                else {
                    anonymous_type_74=(_Bool)1;
                    info->p=p_87;
                    info->sline=sline_88;
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name_57,"const")) {
            constant_58=(_Bool)1;
            __dec_obj39=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value82=parse_word(info))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0); }
            if(right_value82) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_57,"static")) {
            static__59=(_Bool)1;
            __dec_obj40=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value83=parse_word(info))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
            if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_57,"come_mem_core")) {
            come_mem_core__73=(_Bool)1;
            __dec_obj41=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value84=parse_word(info))));
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
            if(right_value84) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_57,"extern")) {
            extern__71=(_Bool)1;
            __dec_obj42=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value85=parse_word(info))));
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
            if(right_value85) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_57,"inline")||string_operator_equals(type_name_57,"__inline")) {
            inline__72=(_Bool)1;
            __dec_obj43=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value86=parse_word(info))));
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
            if(right_value86) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_57,"volatile")) {
            volatile__60=(_Bool)1;
            __dec_obj44=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value87=parse_word(info))));
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
            if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_57,"long")) {
            {
                p_89=info->p;
                sline_90=info->sline;
                if(!xisalpha(*info->p)) {
                    info->p=p_89;
                    info->sline=sline_90;
                    __dec_obj45=type_name_57;
                    type_name_57=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string("long"))));
                    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
                    if(right_value88) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0); }
                    break;
                }
                else {
                    __dec_obj46=type_name_57;
                    type_name_57=(char*)come_increment_ref_count(((char*)(right_value89=parse_word(info))));
                    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
                    if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
                    if(string_operator_equals(type_name_57,"unsigned")) {
                        __dec_obj47=type_name_57;
                        type_name_57=(char*)come_increment_ref_count(((char*)(right_value90=parse_word(info))));
                        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
                        if(right_value90) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0); }
                        if(string_operator_equals(type_name_57,"int")) {
                            break;
                        }
                    }
                    else if(string_operator_equals(type_name_57,"long")) {
                        p_89=info->p;
                        sline_90=info->sline;
                        if(xisalpha(*info->p)) {
                            __dec_obj48=type_name_57;
                            type_name_57=(char*)come_increment_ref_count(((char*)(right_value91=parse_word(info))));
                            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
                            if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
                        }
                        else {
                            break;
                        }
                        if(string_operator_equals(type_name_57,"int")) {
                            break;
                        }
                        else if(!is_type_name(type_name_57,info)) {
                            __dec_obj49=type_name_57;
                            type_name_57=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string("long"))));
                            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
                            if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
                            info->p=p_89;
                            info->sline=sline_90;
                            break;
                        }
                    }
                    else if(is_type_name(type_name_57,info)) {
                        if(long__63) {
                            long_long_64=(_Bool)1;
                            long__63=(_Bool)0;
                        }
                        else {
                            long__63=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_89;
                        info->sline=sline_90;
                        __dec_obj50=type_name_57;
                        type_name_57=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string("long"))));
                        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
                        if(right_value93) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0); }
                        break;
                    }
                }
            }
        }
        else if(string_operator_equals(type_name_57,"unsigned")) {
            unsigned__62=(_Bool)1;
            if(xisalpha(*info->p)||*info->p==95) {
                p_91=info->p;
                sline_92=info->sline;
                __dec_obj51=type_name_57;
                type_name_57=(char*)come_increment_ref_count(((char*)(right_value94=parse_word(info))));
                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
                if(right_value94) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0); }
                if(string_operator_equals(type_name_57,"short")) {
                    if(xisalpha(*info->p)||*info->p==95) {
                        p_93=info->p;
                        sline_94=info->sline;
                        __dec_obj52=type_name_57;
                        type_name_57=(char*)come_increment_ref_count(((char*)(right_value95=parse_word(info))));
                        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                        if(right_value95) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0); }
                        if(is_type_name(type_name_57,info)) {
                        }
                        else {
                            __dec_obj53=type_name_57;
                            type_name_57=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string("int"))));
                            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
                            if(right_value96) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0); }
                            info->p=p_93;
                            info->sline=sline_94;
                        }
                    }
                    else {
                        __dec_obj54=type_name_57;
                        type_name_57=(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string("int"))));
                        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
                        if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0); }
                        break;
                    }
                }
                else if(string_operator_equals(type_name_57,"long")) {
                    if(xisalpha(*info->p)||*info->p==95) {
                        p_95=info->p;
                        sline_96=info->sline;
                        __dec_obj55=type_name_57;
                        type_name_57=(char*)come_increment_ref_count(((char*)(right_value98=parse_word(info))));
                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
                        if(right_value98) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0); }
                        if(is_type_name(type_name_57,info)) {
                        }
                        else {
                            __dec_obj56=type_name_57;
                            type_name_57=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string("int"))));
                            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
                            if(right_value99) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0); }
                            info->p=p_95;
                            info->sline=sline_96;
                        }
                    }
                    else {
                        __dec_obj57=type_name_57;
                        type_name_57=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string("int"))));
                        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
                        if(right_value100) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0); }
                        break;
                    }
                }
                else if(!is_type_name(type_name_57,info)) {
                    __dec_obj58=type_name_57;
                    type_name_57=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string("int"))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
                    if(right_value101) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0); }
                    info->p=p_91;
                    info->sline=sline_92;
                    break;
                }
            }
            else {
                __dec_obj59=type_name_57;
                type_name_57=(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string("int"))));
                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
                if(right_value102) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0); }
                break;
            }
        }
        else if(string_operator_equals(type_name_57,"signed")) {
            unsigned__62=(_Bool)0;
            __dec_obj60=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value103=parse_word(info))));
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
            if(right_value103) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_57,"register")) {
            register__61=(_Bool)1;
            __dec_obj61=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value104=parse_word(info))));
            if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
            if(right_value104) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_57,"restrict")) {
            restrict__66=(_Bool)1;
            __dec_obj62=type_name_57;
            type_name_57=(char*)come_increment_ref_count(((char*)(right_value105=parse_word(info))));
            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0); }
            if(right_value105) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_57,"short")) {
            short__65=(_Bool)1;
            if(*info->p==58) {
                break;
            }
            else if(xisalnum(*info->p)) {
                p_97=info->p;
                sline_98=info->sline;
                __dec_obj63=type_name_57;
                type_name_57=(char*)come_increment_ref_count(((char*)(right_value106=parse_word(info))));
                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
                if(right_value106) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0); }
                if(string_operator_equals(type_name_57,"int")) {
                    break;
                }
                else if(string_operator_equals(type_name_57,"short")) {
                    short__65=(_Bool)0;
                    break;
                }
                else if(is_type_name(type_name_57,info)) {
                    info->p=p_97;
                    info->sline=sline_98;
                }
                else {
                    __dec_obj64=type_name_57;
                    type_name_57=(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string("short"))));
                    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
                    if(right_value107) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0); }
                    info->p=p_97;
                    info->sline=sline_98;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    pointer_num_99=0;
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        if(memcmp(info->p,"const ",strlen("const "))==0) {
            info->p+=strlen("const ");
            skip_spaces_and_lf(info);
        }
        pointer_num_99++;
    }
    lambda_flag_100=(_Bool)0;
    {
        pX_101=info->p;
        slineX_102=info->sline;
        if(xisalpha(*info->p)) {
            (void)((char*)(right_value108=parse_word(info)));
            if(right_value108) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0); }
            if(*info->p==40&&info->in_typedef) {
                lambda_flag_100=(_Bool)1;
            }
        }
        info->p=pX_101;
        info->sline=slineX_102;
    }
    if(anonymous_type_74&&*info->p==123) {
        if(struct__67) {
            if(string_operator_equals(type_name_57,"")) {
                __dec_obj65=type_name_57;
                type_name_57=(char*)come_increment_ref_count(((char*)(right_value109=xsprintf("anonymous_typeX%d",++anonymous_num_105))));
                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
                if(right_value109) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0); }
            }
            node_106=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=parse_struct((char*)come_increment_ref_count(type_name_57),info))));
            if(right_value110) { right_value110 = come_decrement_ref_count(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0); } 
            if(!info->no_output_err) {
                if(!node_106->compile(node_106->_protocol_obj,info)) {
                    err_msg(info,"parse_struct is failed");
                    struct tuple3$3sTypephcharphbool* __result41__ = ((struct tuple3$3sTypephcharphbool*)(right_value112=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value111=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 744)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_106) { node_106 = come_decrement_ref_count(node_106, ((struct sNode*)node_106)->finalize, ((struct sNode*)node_106)->_protocol_obj, 0, 0); } 
                    return __result41__;
                }
            }
            __dec_obj66=type_103;
            type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value113=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 748)))),type_name_57,info,(_Bool)0))));
            if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value113) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value114) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
            if(node_106) { node_106 = come_decrement_ref_count(node_106, ((struct sNode*)node_106)->finalize, ((struct sNode*)node_106)->_protocol_obj, 0, 0); } 
        }
        else if(enum__69) {
            if(string_operator_equals(type_name_57,"")) {
                __dec_obj67=type_name_57;
                type_name_57=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("anonymous_typeY%d",++anonymous_num_105))));
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0); }
                if(right_value115) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0); }
            }
            node_107=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=parse_enum((char*)come_increment_ref_count(type_name_57),info))));
            if(right_value116) { right_value116 = come_decrement_ref_count(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0); } 
            if(!info->no_output_err) {
                if(!node_107->compile(node_107->_protocol_obj,info)) {
                    err_msg(info,"enum compiling is faied");
                    struct tuple3$3sTypephcharphbool* __result42__ = ((struct tuple3$3sTypephcharphbool*)(right_value118=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value117=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 760)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_107) { node_107 = come_decrement_ref_count(node_107, ((struct sNode*)node_107)->finalize, ((struct sNode*)node_107)->_protocol_obj, 0, 0); } 
                    return __result42__;
                }
            }
            __dec_obj68=type_103;
            type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value119=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 764)))),type_name_57,info,(_Bool)0))));
            if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value119) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value120) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
            if(node_107) { node_107 = come_decrement_ref_count(node_107, ((struct sNode*)node_107)->finalize, ((struct sNode*)node_107)->_protocol_obj, 0, 0); } 
        }
        else if(union__68) {
            if(string_operator_equals(type_name_57,"")) {
                __dec_obj69=type_name_57;
                type_name_57=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("anonymous_typeZ%d",++anonymous_num_105))));
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0); }
                if(right_value121) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0); }
            }
            node_108=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value122=parse_union((char*)come_increment_ref_count(type_name_57),info))));
            if(right_value122) { right_value122 = come_decrement_ref_count(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0); } 
            if(!info->no_output_err) {
                if(!node_108->compile(node_108->_protocol_obj,info)) {
                    err_msg(info,"union compiling is failed");
                    struct tuple3$3sTypephcharphbool* __result43__ = ((struct tuple3$3sTypephcharphbool*)(right_value124=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value123=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 776)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_108) { node_108 = come_decrement_ref_count(node_108, ((struct sNode*)node_108)->finalize, ((struct sNode*)node_108)->_protocol_obj, 0, 0); } 
                    return __result43__;
                }
            }
            __dec_obj70=type_103;
            type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value125=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 780)))),type_name_57,info,(_Bool)0))));
            if(__dec_obj70) { come_call_finalizer(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value125) { come_call_finalizer(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value126) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
            if(node_108) { node_108 = come_decrement_ref_count(node_108, ((struct sNode*)node_108)->finalize, ((struct sNode*)node_108)->_protocol_obj, 0, 0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            struct tuple3$3sTypephcharphbool* __result44__ = ((struct tuple3$3sTypephcharphbool*)(right_value128=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value127=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 784)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            return __result44__;
        }
        if(parse_variable_name) {
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj71=var_name_104;
                var_name_104=(char*)come_increment_ref_count(((char*)(right_value129=parse_word(info))));
                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
                if(right_value129) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0); }
            }
            else {
                num_anonymous_var_name_109++;
                __dec_obj72=var_name_104;
                var_name_104=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_109))));
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0); }
                if(right_value130) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0); }
            }
            if(*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                n_110=0;
                while(xisdigit(*info->p)) {
                    n_110=n_110*10+*info->p-48;
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                type_103->mSizeNum=n_110;
            }
        }
    }
    else if(lambda_flag_100) {
        if(map$2charphsTypephp_operator_load_element(info->types,type_name_57)) {
            __dec_obj81=result_type_111;
            result_type_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sTypep_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_57)))));
            if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value140) { come_call_finalizer(sTypep_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0); }
        }
        else if(list$1charphp_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_57))) {
            for(
            i_119=0;
            i_119<list$1charphp_length(info->generics_type_names);
            i_119++
            ){
                if(charp_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_119),type_name_57)) {
                    __dec_obj82=result_type_111;
                    result_type_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value141=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 820)))),((char*)(right_value142=xsprintf("generics_type%d",i_119))),info,(_Bool)0))));
                    if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value141) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value142) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0); }
                    if(right_value143) { come_call_finalizer(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
        }
        else {
            __dec_obj83=result_type_111;
            result_type_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 825)))),type_name_57,info,(_Bool)0))));
            if(__dec_obj83) { come_call_finalizer(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value144) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value145) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
        }
        result_type_111->mConstant=result_type_111->mConstant||constant_58;
        result_type_111->mComeMemCore=result_type_111->mComeMemCore||come_mem_core__73;
        result_type_111->mRegister=register__61;
        result_type_111->mUnsigned=result_type_111->mUnsigned||unsigned__62;
        result_type_111->mVolatile=volatile__60;
        result_type_111->mStatic=result_type_111->mStatic||static__59;
        result_type_111->mExtern=result_type_111->mExtern||extern__71;
        result_type_111->mInline=result_type_111->mInline||inline__72;
        result_type_111->mRestrict=result_type_111->mRestrict||restrict__66;
        result_type_111->mLongLong=result_type_111->mLongLong||long_long_64;
        result_type_111->mLong=result_type_111->mLong||long__63;
        result_type_111->mShort=result_type_111->mShort||short__65;
        __dec_obj84=var_name_104;
        var_name_104=(char*)come_increment_ref_count(((char*)(right_value146=parse_word(info))));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0); }
        if(right_value146) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0); }
        multiple_assgin_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value147=parse_params(info)));
        param_types_123=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var2->v1);
        param_names_124=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v2);
        param_default_parametors_125=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v3);
        var_args_126=multiple_assgin_var2->v4;
        if(right_value147) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj85=type_103;
        type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value148=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 845)))),"lambda",info,(_Bool)0))));
        if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value148) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value149) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj87=type_103->mResultType;
        type_103->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value151=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value150=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 847)))),(struct sType*)come_increment_ref_count(result_type_111)))));
        if(__dec_obj87) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value151) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj88=type_103->mParamTypes;
        type_103->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_123);
        if(__dec_obj88) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0); }
        __dec_obj89=type_103->mParamNames;
        type_103->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_124);
        if(__dec_obj89) { come_call_finalizer(list$1charphp_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0); }
        type_103->mVarArgs=var_args_126;
        if(result_type_111) { come_call_finalizer(sType_finalize,result_type_111, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_123) { come_call_finalizer(list$1sTypephp_finalize,param_types_123, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_124) { come_call_finalizer(list$1charphp_finalize,param_names_124, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_125) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_125, (void*)0, (void*)0, 0, 0, 0); }
    }
    else if(*info->p==40&&(*(info->p+1)==42||*(info->p+1)==94)) {
        info->p++;
        if(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(memcmp(info->p,"_Nullable",strlen("_Nullable"))==0) {
            info->p+=strlen("_Nullable");
            skip_spaces_and_lf(info);
        }
        if(memcmp(info->p,"_Nonnull",strlen("_Nonnull"))==0) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
        }
        if(map$2charphsTypephp_operator_load_element(info->types,type_name_57)) {
            __dec_obj90=result_type_127;
            result_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sTypep_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_57)))));
            if(__dec_obj90) { come_call_finalizer(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value152) { come_call_finalizer(sTypep_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0); }
        }
        else if(list$1charphp_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_57))) {
            for(
            i_128=0;
            i_128<list$1charphp_length(info->generics_type_names);
            i_128++
            ){
                if(charp_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_128),type_name_57)) {
                    __dec_obj91=result_type_127;
                    result_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value153=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 876)))),((char*)(right_value154=xsprintf("generics_type%d",i_128))),info,(_Bool)0))));
                    if(__dec_obj91) { come_call_finalizer(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value153) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value154) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0); }
                    if(right_value155) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
        }
        else {
            __dec_obj92=result_type_127;
            result_type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value156=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 881)))),type_name_57,info,(_Bool)0))));
            if(__dec_obj92) { come_call_finalizer(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value156) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value157) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0); }
        }
        result_type_127->mConstant=result_type_127->mConstant||constant_58;
        result_type_127->mComeMemCore=result_type_127->mComeMemCore||come_mem_core__73;
        result_type_127->mRegister=register__61;
        result_type_127->mUnsigned=result_type_127->mUnsigned||unsigned__62;
        result_type_127->mVolatile=volatile__60;
        result_type_127->mStatic=result_type_127->mStatic||static__59;
        result_type_127->mExtern=result_type_127->mExtern||extern__71;
        result_type_127->mInline=result_type_127->mInline||inline__72;
        result_type_127->mRestrict=result_type_127->mRestrict||restrict__66;
        result_type_127->mLongLong=result_type_127->mLongLong||long_long_64;
        result_type_127->mLong=result_type_127->mLong||long__63;
        result_type_127->mShort=result_type_127->mShort||short__65;
        result_type_127->mPointerNum+=pointer_num_99;
        if(xisalnum(*info->p)||*info->p==95) {
            __dec_obj93=var_name_104;
            var_name_104=(char*)come_increment_ref_count(((char*)(right_value158=parse_word(info))));
            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
            if(right_value158) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0); }
            if(*info->p==40) {
                struct tuple3$3sTypephcharphbool* __result64__ = ((struct tuple3$3sTypephcharphbool*)(right_value160=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value159=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 901)))),(struct sType*)come_increment_ref_count(result_type_127),(char*)come_increment_ref_count(var_name_104),(_Bool)0)));
                if(result_type_127) { come_call_finalizer(sType_finalize,result_type_127, (void*)0, (void*)0, 0, 0, 0); }
                return __result64__;
            }
        }
        else {
            num_anonymous_var_name_129++;
            __dec_obj94=var_name_104;
            var_name_104=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_129))));
            if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0); }
            if(right_value161) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0); }
        }
        expected_next_character(41,info);
        multiple_assgin_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value162=parse_params(info)));
        param_types_130=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
        param_names_131=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
        param_default_parametors_132=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
        var_args_133=multiple_assgin_var3->v4;
        if(right_value162) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj95=type_103;
        type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 913)))),"lambda",info,(_Bool)0))));
        if(__dec_obj95) { come_call_finalizer(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value163) { come_call_finalizer(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value164) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj96=type_103->mResultType;
        type_103->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value166=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value165=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 915)))),(struct sType*)come_increment_ref_count(result_type_127)))));
        if(__dec_obj96) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value166) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj97=type_103->mParamTypes;
        type_103->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_130);
        if(__dec_obj97) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0); }
        __dec_obj98=type_103->mParamNames;
        type_103->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_131);
        if(__dec_obj98) { come_call_finalizer(list$1charphp_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0); }
        type_103->mVarArgs=var_args_133;
        if(result_type_127) { come_call_finalizer(sType_finalize,result_type_127, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_130) { come_call_finalizer(list$1sTypephp_finalize,param_types_130, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_131) { come_call_finalizer(list$1charphp_finalize,param_names_131, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_132) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_132, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(map$2charphsTypephp_operator_load_element(info->types,type_name_57)) {
            __dec_obj99=type_103;
            type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sTypep_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_57)))));
            if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value167) { come_call_finalizer(sTypep_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0); }
            __dec_obj100=type_103->mOriginalTypeName;
            type_103->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string(type_name_57))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0); }
            if(right_value168) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0); }
            type_103->mConstant=type_103->mConstant||constant_58;
            type_103->mComeMemCore=type_103->mComeMemCore||come_mem_core__73;
            type_103->mRegister=register__61;
            type_103->mUnsigned=type_103->mUnsigned||unsigned__62;
            type_103->mVolatile=volatile__60;
            type_103->mStatic=type_103->mStatic||static__59;
            type_103->mExtern=type_103->mExtern||extern__71;
            type_103->mInline=type_103->mInline||inline__72;
            type_103->mRestrict=type_103->mRestrict||restrict__66;
            type_103->mLongLong=type_103->mLongLong||long_long_64;
            type_103->mLong=type_103->mLong||long__63;
            type_103->mShort=type_103->mShort||short__65;
            type_103->mPointerNum+=pointer_num_99;
        }
        else if(list$1charphp_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_57))) {
            for(
            i_134=0;
            i_134<list$1charphp_length(info->generics_type_names);
            i_134++
            ){
                if(charp_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_134),type_name_57)) {
                    __dec_obj101=type_103;
                    type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 942)))),((char*)(right_value170=xsprintf("generics_type%d",i_134))),info,(_Bool)0))));
                    if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value169) { come_call_finalizer(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value170) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0); }
                    if(right_value171) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
            type_103->mConstant=type_103->mConstant||constant_58;
            type_103->mComeMemCore=type_103->mComeMemCore||come_mem_core__73;
            type_103->mRegister=register__61;
            type_103->mUnsigned=type_103->mUnsigned||unsigned__62;
            type_103->mVolatile=volatile__60;
            type_103->mStatic=type_103->mStatic||static__59;
            type_103->mExtern=type_103->mExtern||extern__71;
            type_103->mInline=type_103->mInline||inline__72;
            type_103->mRestrict=type_103->mRestrict||restrict__66;
            type_103->mLongLong=type_103->mLongLong||long_long_64;
            type_103->mLong=type_103->mLong||long__63;
            type_103->mShort=type_103->mShort||short__65;
            type_103->mPointerNum+=pointer_num_99;
        }
        else if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_57)==((void*)0)) {
                struct tuple3$3sTypephcharphbool* __result70__ = ((struct tuple3$3sTypephcharphbool*)(right_value173=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value172=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 966)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                return __result70__;
            }
            __dec_obj102=type_103;
            type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value174=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 969)))),type_name_57,info,(_Bool)0))));
            if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value174) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value175) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0); }
            while((_Bool)1) {
                multiple_assgin_var4=((struct tuple3$3sTypephcharphbool*)(right_value176=parse_type(info,(_Bool)0,(_Bool)0)));
                generics_type_138=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
                var_name_139=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                err_140=multiple_assgin_var4->v3;
                if(right_value176) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0); }
                if(!err_140) {
                    struct tuple3$3sTypephcharphbool* __result71__ = ((struct tuple3$3sTypephcharphbool*)(right_value178=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value177=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 975)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(generics_type_138) { come_call_finalizer(sType_finalize,generics_type_138, (void*)0, (void*)0, 0, 0, 0); }
                    if(var_name_139) { var_name_139 = come_decrement_ref_count(var_name_139, (void*)0, (void*)0, 0, 0); }
                    return __result71__;
                }
                list$1sTypephp_push_back(type_103->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_138));
                if(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    err_msg(info,"invalid generics type\n");
                    struct tuple3$3sTypephcharphbool* __result72__ = ((struct tuple3$3sTypephcharphbool*)(right_value180=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value179=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 992)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(generics_type_138) { come_call_finalizer(sType_finalize,generics_type_138, (void*)0, (void*)0, 0, 0, 0); }
                    if(var_name_139) { var_name_139 = come_decrement_ref_count(var_name_139, (void*)0, (void*)0, 0, 0); }
                    return __result72__;
                }
            }
            if(is_contained_generics_class(type_103,info)) {
                __dec_obj103=type_103;
                type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=solve_generics(type_103,info->generics_type,info))));
                if(__dec_obj103) { come_call_finalizer(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value181) { come_call_finalizer(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0); }
            }
            else {
                if(!output_generics_struct(type_103,type_103,info)) {
                    new_name_141=(char*)come_increment_ref_count(((char*)(right_value182=create_generics_name(type_103,info))));
                    if(right_value182) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0); }
                    err_msg(info,"output generics is failed(%s)",new_name_141);
                    exit(1);
                    if(new_name_141) { new_name_141 = come_decrement_ref_count(new_name_141, (void*)0, (void*)0, 0, 0); }
                }
            }
            type_103->mConstant=type_103->mConstant||constant_58;
            type_103->mComeMemCore=type_103->mComeMemCore||come_mem_core__73;
            type_103->mRegister=register__61;
            type_103->mUnsigned=type_103->mUnsigned||unsigned__62;
            type_103->mVolatile=volatile__60;
            type_103->mStatic=type_103->mStatic||static__59;
            type_103->mExtern=type_103->mExtern||extern__71;
            type_103->mInline=type_103->mInline||inline__72;
            type_103->mRestrict=type_103->mRestrict||restrict__66;
            type_103->mLongLong=type_103->mLongLong||long_long_64;
            type_103->mLong=type_103->mLong||long__63;
            type_103->mShort=type_103->mShort||short__65;
            type_103->mPointerNum+=pointer_num_99;
        }
        else {
            if(struct__67) {
                klass_142=map$2charphsClassphp_operator_load_element(info->classes,type_name_57);
                if(klass_142==((void*)0)&&*info->p!=60) {
                    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_57),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value190=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value189=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1027)))),type_name_57,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0)))));
                    if(right_value189) { come_call_finalizer(sClass_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value190) { come_call_finalizer(sClass_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
            __dec_obj104=type_103;
            type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value191=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1031)))),type_name_57,info,(_Bool)0))));
            if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value191) { come_call_finalizer(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value192) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
            type_103->mConstant=type_103->mConstant||constant_58;
            type_103->mComeMemCore=type_103->mComeMemCore||come_mem_core__73;
            type_103->mRegister=register__61;
            type_103->mUnsigned=type_103->mUnsigned||unsigned__62;
            type_103->mVolatile=volatile__60;
            type_103->mStatic=type_103->mStatic||static__59;
            type_103->mExtern=type_103->mExtern||extern__71;
            type_103->mInline=type_103->mInline||inline__72;
            type_103->mRestrict=type_103->mRestrict||restrict__66;
            type_103->mLongLong=type_103->mLongLong||long_long_64;
            type_103->mLong=type_103->mLong||long__63;
            type_103->mShort=type_103->mShort||short__65;
            type_103->mPointerNum+=pointer_num_99;
        }
        if(memcmp(info->p,"const ",strlen("const "))==0) {
            info->p+=strlen("const ");
            skip_spaces_and_lf(info);
            type_103->mConstant=(_Bool)1;
        }
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            if(memcmp(info->p,"const ",strlen("const "))==0) {
                info->p+=strlen("const ");
                skip_spaces_and_lf(info);
                type_103->mConstant=(_Bool)1;
            }
            type_103->mPointerNum++;
            if(type_103->mNoSolvedGenericsType->v1) {
                type_103->mNoSolvedGenericsType->v1->mPointerNum++;
            }
        }
        if(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            type_103->mHeap=(_Bool)1;
            if(type_103->mNoSolvedGenericsType->v1) {
                type_103->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
            }
        }
        if(*info->p==38) {
            info->p++;
            skip_spaces_and_lf(info);
            type_103->mNoHeap=(_Bool)1;
            if(type_103->mNoSolvedGenericsType->v1) {
                type_103->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
            }
        }
        if(*info->p==63) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(*info->p==124) {
            info->p++;
            skip_spaces_and_lf(info);
            type_103->mNoCallingDestructor=(_Bool)1;
        }
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            if(memcmp(info->p,"const ",strlen("const "))==0) {
                info->p+=strlen("const ");
                skip_spaces_and_lf(info);
                type_103->mConstant=(_Bool)1;
            }
            type_103->mPointerNum++;
            if(type_103->mNoSolvedGenericsType->v1) {
                type_103->mNoSolvedGenericsType->v1->mPointerNum++;
            }
        }
        if(memcmp(info->p,"__restrict ",strlen("__restrict "))==0) {
            info->p+=strlen("__restrict ");
            skip_spaces_and_lf(info);
        }
        if(memcmp(info->p,"restrict ",strlen("restrict "))==0) {
            info->p+=strlen("restrict ");
            skip_spaces_and_lf(info);
        }
        if(parse_multiple_type&&*info->p==44) {
            types_183=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value194=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value193=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1132))))))));
            if(right_value194) { come_call_finalizer(list$1sTypephp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0); }
            list$1sTypephp_push_back(types_183,(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(type_103)))));
            if(right_value195) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0); }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assgin_var5=((struct tuple3$3sTypephcharphbool*)(right_value196=parse_type(info,(_Bool)0,(_Bool)0)));
                type2_184=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                name_185=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                err_186=multiple_assgin_var5->v3;
                if(right_value196) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0); }
                if(!err_186) {
                    struct tuple3$3sTypephcharphbool* __result83__ = ((struct tuple3$3sTypephcharphbool*)(right_value198=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value197=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1143)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(type2_184) { come_call_finalizer(sType_finalize,type2_184, (void*)0, (void*)0, 0, 0, 0); }
                    if(name_185) { name_185 = come_decrement_ref_count(name_185, (void*)0, (void*)0, 0, 0); }
                    if(types_183) { come_call_finalizer(list$1sTypephp_finalize,types_183, (void*)0, (void*)0, 0, 0, 0); }
                    return __result83__;
                }
                list$1sTypephp_push_back(types_183,(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(type2_184)))));
                if(right_value199) { come_call_finalizer(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0); }
                if(type2_184) { come_call_finalizer(sType_finalize,type2_184, (void*)0, (void*)0, 0, 0, 0); }
                if(name_185) { name_185 = come_decrement_ref_count(name_185, (void*)0, (void*)0, 0, 0); }
            }
            num_tuples_187=list$1sTypephp_length(types_183);
            __dec_obj105=type_103;
            type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value200=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1151)))),((char*)(right_value201=xsprintf("tuple%d",num_tuples_187))),info,(_Bool)0))));
            if(__dec_obj105) { come_call_finalizer(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value200) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value201) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0); }
            if(right_value202) { come_call_finalizer(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0); }
            type_103->mPointerNum++;
            type_103->mHeap=(_Bool)1;
            for(
            it_188=list$1sTypephp_begin((types_183));
            !list$1sTypephp_end((types_183));
            it_188=list$1sTypephp_next((types_183))
            ){
                list$1sTypephp_push_back(type_103->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sTypep_clone(it_188)))));
                if(right_value203) { come_call_finalizer(sTypep_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(is_contained_generics_class(type_103,info)) {
                __dec_obj106=type_103;
                type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=solve_generics(type_103,info->generics_type,info))));
                if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value204) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0); }
            }
            else {
                if(!output_generics_struct(type_103,type_103,info)) {
                    new_name_189=(char*)come_increment_ref_count(((char*)(right_value205=create_generics_name(type_103,info))));
                    if(right_value205) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0); }
                    err_msg(info,"output generics is failed(%s)",new_name_189);
                    exit(1);
                    if(new_name_189) { new_name_189 = come_decrement_ref_count(new_name_189, (void*)0, (void*)0, 0, 0); }
                }
            }
            if(types_183) { come_call_finalizer(list$1sTypephp_finalize,types_183, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(parse_variable_name) {
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj107=var_name_104;
                var_name_104=(char*)come_increment_ref_count(((char*)(right_value206=parse_word(info))));
                if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0); }
                if(right_value206) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0); }
            }
            else {
                num_anonymous_var_name_190++;
                __dec_obj108=var_name_104;
                var_name_104=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_190))));
                if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0); }
                if(right_value207) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0); }
            }
            if(*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                n_191=0;
                while(xisdigit(*info->p)) {
                    n_191=n_191*10+*info->p-48;
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                type_103->mSizeNum=n_191;
            }
        }
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_103->mPointerNum++;
            break;
        }
        node_192=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=expression_v13(info))));
        if(right_value208) { right_value208 = come_decrement_ref_count(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0); } 
        list$1sNodephp_push_back(type_103->mArrayNum,(struct sNode*)come_increment_ref_count(node_192));
        expected_next_character(93,info);
        if(node_192) { node_192 = come_decrement_ref_count(node_192, ((struct sNode*)node_192)->finalize, ((struct sNode*)node_192)->_protocol_obj, 0, 0); } 
    }
    struct tuple3$3sTypephcharphbool* __result85__ = ((struct tuple3$3sTypephcharphbool*)(right_value213=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value212=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1216)))),(struct sType*)come_increment_ref_count(type_103),(char*)come_increment_ref_count(var_name_104),(_Bool)1)));
    if(type_name_57) { type_name_57 = come_decrement_ref_count(type_name_57, (void*)0, (void*)0, 0, 0); }
    if(type_103) { come_call_finalizer(sType_finalize,type_103, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_104) { var_name_104 = come_decrement_ref_count(var_name_104, (void*)0, (void*)0, 0, 0); }
    return __result85__;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphboolp_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
struct sType* __dec_obj30;
char* __dec_obj31;
                        __dec_obj30=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0); }
                        __dec_obj31=self->v2;
                        self->v2=(char*)come_increment_ref_count(v2);
                        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
                        self->v3=v3;
                        struct tuple3$3sTypephcharphbool* __result34__ = self;
                        if(self) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1); }
                        if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1); }
                        return __result34__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
struct sType* default_value_112;
memset(&default_value_112, 0, sizeof(struct sType*)); /* bbb */
            memset(&default_value_112,0,sizeof(struct sType*));
            struct sType* __result49__ = map$2charphsTypephp_at(self,key,default_value_112);
            return __result49__;
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
int hash_113;
int it_114;
memset(&hash_113, 0, sizeof(int));
memset(&it_114, 0, sizeof(int));
                hash_113=string_get_hash_key(((char*)key))%self->size;
                it_114=hash_113;
                while((_Bool)1) {
                    if(self->item_existance[it_114]) {
                        if(charp_equals(self->keys[it_114],key)) {
                            struct sType* __result45__ = self->items[it_114];
                            return __result45__;
                        }
                        it_114++;
                        if(it_114>=self->size) {
                            it_114=0;
                        }
                        else if(it_114==hash_113) {
                            struct sType* __result46__ = default_value;
                            return __result46__;
                        }
                    }
                    else {
                        struct sType* __result47__ = default_value;
                        return __result47__;
                    }
                }
                struct sType* __result48__ = default_value;
                return __result48__;
}

static struct sType* sTypep_clone(struct sType* self){
void* right_value131;
struct sType* result_115;
void* right_value132;
struct tuple1$1sTypeph* __dec_obj73;
void* right_value133;
char* __dec_obj74;
void* right_value134;
struct list$1sTypeph* __dec_obj75;
void* right_value135;
struct list$1sNodeph* __dec_obj76;
void* right_value136;
struct list$1sTypeph* __dec_obj77;
void* right_value137;
struct list$1charph* __dec_obj78;
void* right_value138;
struct tuple1$1sTypeph* __dec_obj79;
void* right_value139;
char* __dec_obj80;
memset(&right_value131, 0, sizeof(void*));
memset(&result_115, 0, sizeof(struct sType*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sType* __result50__ = (void*)0;
                    return __result50__;
                }
                result_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 817))));
                if(right_value131) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_115->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj73=result_115->mNoSolvedGenericsType;
                    result_115->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value132=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj73) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value132) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj74=result_115->mGenericsName;
                    result_115->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value133=string_clone(self->mGenericsName))));
                    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0); }
                    if(right_value133) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj75=result_115->mGenericsTypes;
                    result_115->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value134=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj75) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value134) { come_call_finalizer(list$1sTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj76=result_115->mArrayNum;
                    result_115->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value135=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj76) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value135) { come_call_finalizer(list$1sNodephp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_115->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj77=result_115->mParamTypes;
                    result_115->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value136=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj77) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value136) { come_call_finalizer(list$1sTypephp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj78=result_115->mParamNames;
                    result_115->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value137=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj78) { come_call_finalizer(list$1charphp_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value137) { come_call_finalizer(list$1charphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj79=result_115->mResultType;
                    result_115->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value138=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj79) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value138) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_115->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)) {
                    result_115->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_115->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_115->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_115->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_115->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_115->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_115->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_115->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_115->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_115->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_115->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_115->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_115->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_115->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_115->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_115->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_115->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_115->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_115->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)) {
                    result_115->mSizeNum=self->mSizeNum;
                }
                if(self!=((void*)0)) {
                    result_115->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_115->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj80=result_115->mOriginalTypeName;
                    result_115->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value139=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0); }
                    if(right_value139) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_115->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_115->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_115->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_115->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_115->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_115->mComeMemCore=self->mComeMemCore;
                }
                if(self!=((void*)0)) {
                    result_115->mInline=self->mInline;
                }
                struct sType* __result51__ = result_115;
                if(result_115) { come_call_finalizer(sType_finalize,result_115, (void*)0, (void*)0, 0, 0, 1); }
                return __result51__;
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

static _Bool list$1charphp_contained(struct list$1charph* self, char* item){
char* it_117;
memset(&it_117, 0, sizeof(char*));
            for(
            it_117=list$1charphp_begin(self);
            !list$1charphp_end(self);
            it_117=list$1charphp_next(self)
            ){
                if(charp_operator_equals(it_117,item)) {
                    _Bool __result57__ = (_Bool)1;
                    return __result57__;
                }
            }
            _Bool __result58__ = (_Bool)0;
            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
            return __result58__;
}

static char* list$1charphp_begin(struct list$1charph* self){
char* result_116;
memset(&result_116, 0, sizeof(char*)); /* bbb */
                self->it=self->head;
                if(self->it) {
                    char* __result52__ = self->it->item;
                    return __result52__;
                }
                memset(&result_116,0,sizeof(char*));
                char* __result53__ = result_116;
                return __result53__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
                _Bool __result54__ = self->it==((void*)0);
                return __result54__;
}

static char* list$1charphp_next(struct list$1charph* self){
char* result_118;
memset(&result_118, 0, sizeof(char*)); /* bbb */
                self->it=self->it->next;
                if(self->it) {
                    char* __result55__ = self->it->item;
                    return __result55__;
                }
                memset(&result_118,0,sizeof(char*));
                char* __result56__ = result_118;
                return __result56__;
}

static int list$1charphp_length(struct list$1charph* self){
                int __result59__ = self->len;
                return __result59__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index){
char* default_value_120;
memset(&default_value_120, 0, sizeof(char*)); /* bbb */
                    memset(&default_value_120,0,sizeof(char*));
                    char* __result62__ = list$1charphp_item(self,index,default_value_120);
                    return __result62__;
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_121;
int i_122;
memset(&it_121, 0, sizeof(struct list_item$1charph*));
memset(&i_122, 0, sizeof(int));
                        if(position<0) {
                            position+=self->len;
                        }
                        it_121=self->head;
                        i_122=0;
                        while(it_121!=((void*)0)) {
                            if(position==i_122) {
                                char* __result60__ = it_121->item;
                                return __result60__;
                            }
                            it_121=it_121->next;
                            i_122++;
                        }
                        char* __result61__ = default_value;
                        return __result61__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
struct sType* __dec_obj86;
            __dec_obj86=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0); }
            struct tuple1$1sTypeph* __result63__ = self;
            if(self) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1); }
            return __result63__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
struct sClass* default_value_135;
memset(&default_value_135, 0, sizeof(struct sClass*)); /* bbb */
                memset(&default_value_135,0,sizeof(struct sClass*));
                struct sClass* __result69__ = map$2charphsClassphp_at(self,key,default_value_135);
                return __result69__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_136;
int it_137;
memset(&hash_136, 0, sizeof(int));
memset(&it_137, 0, sizeof(int));
                    hash_136=string_get_hash_key(((char*)key))%self->size;
                    it_137=hash_136;
                    while((_Bool)1) {
                        if(self->item_existance[it_137]) {
                            if(charp_equals(self->keys[it_137],key)) {
                                struct sClass* __result65__ = self->items[it_137];
                                return __result65__;
                            }
                            it_137++;
                            if(it_137>=self->size) {
                                it_137=0;
                            }
                            else if(it_137==hash_136) {
                                struct sClass* __result66__ = default_value;
                                return __result66__;
                            }
                        }
                        else {
                            struct sClass* __result67__ = default_value;
                            return __result67__;
                        }
                    }
                    struct sClass* __result68__ = default_value;
                    return __result68__;
}

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
int hash_156;
int it_157;
_Bool same_key_exist_176;
char* it2_178;
memset(&hash_156, 0, sizeof(int));
memset(&it_157, 0, sizeof(int));
memset(&same_key_exist_176, 0, sizeof(_Bool));
memset(&it2_178, 0, sizeof(char*));
                        if(self->len*10>=self->size) {
                            map$2charphsClassphp_rehash(self);
                        }
                        hash_156=string_get_hash_key(key)%self->size;
                        it_157=hash_156;
                        while((_Bool)1) {
                            if(self->item_existance[it_157]) {
                                if(charp_equals(self->keys[it_157],key)) {
                                    if(1) {
                                        list$1charpp_remove(self->key_list,self->keys[it_157]);
                                        if(self->keys[it_157]) { self->keys[it_157] = come_decrement_ref_count(self->keys[it_157], (void*)0, (void*)0, 0, 0); }
                                        self->keys[it_157]=(char*)come_increment_ref_count(key);
                                    }
                                    else {
                                        list$1charpp_remove(self->key_list,self->keys[it_157]);
                                        self->keys[it_157]=key;
                                    }
                                    if(1) {
                                        if(self->items[it_157]) { come_call_finalizer(sClassp_finalize,self->items[it_157], (void*)0, (void*)0, 0, 0, 0); }
                                        self->items[it_157]=(struct sClass*)come_increment_ref_count(item);
                                    }
                                    else {
                                        self->items[it_157]=item;
                                    }
                                    break;
                                }
                                it_157++;
                                if(it_157>=self->size) {
                                    it_157=0;
                                }
                                else if(it_157==hash_156) {
                                    printf("unexpected error in map.insert\n");
                                    exit(2);
                                }
                            }
                            else {
                                self->item_existance[it_157]=(_Bool)1;
                                if(1) {
                                    self->keys[it_157]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    self->keys[it_157]=key;
                                }
                                if(1) {
                                    self->items[it_157]=(struct sClass*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_157]=item;
                                }
                                self->len++;
                                break;
                            }
                        }
                        same_key_exist_176=(_Bool)0;
                        for(
                        it2_178=list$1charpp_begin(self->key_list);
                        !list$1charpp_end(self->key_list);
                        it_157=list$1charpp_next(self->key_list)
                        ){
                            if(charp_equals(it2_178,key)) {
                                same_key_exist_176=(_Bool)1;
                            }
                        }
                        if(!same_key_exist_176) {
                            list$1charpp_push_back(self->key_list,key);
                        }
                        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                        if(item) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_143;
void* right_value183;
char** keys_144;
void* right_value184;
struct sClass** items_145;
void* right_value185;
_Bool* item_existance_146;
int len_147;
char* it_149;
struct sClass* default_value_151;
struct sClass* it2_152;
int hash_153;
int n_154;
struct sClass* default_value_155;
memset(&size_143, 0, sizeof(int));
memset(&right_value183, 0, sizeof(void*));
memset(&keys_144, 0, sizeof(char**));
memset(&right_value184, 0, sizeof(void*));
memset(&items_145, 0, sizeof(struct sClass**));
memset(&right_value185, 0, sizeof(void*));
memset(&item_existance_146, 0, sizeof(_Bool*));
memset(&len_147, 0, sizeof(int));
memset(&it_149, 0, sizeof(char*));
memset(&default_value_151, 0, sizeof(struct sClass*)); /* bbb */
memset(&it2_152, 0, sizeof(struct sClass*));
memset(&hash_153, 0, sizeof(int));
memset(&n_154, 0, sizeof(int));
memset(&default_value_155, 0, sizeof(struct sClass*)); /* bbb */
                                size_143=self->size*10;
                                keys_144=((char**)(right_value183=(char**)come_calloc(1, sizeof(char*)*(1*(size_143)), "05function4.c", 1031)));
                                items_145=((struct sClass**)(right_value184=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_143)), "05function4.c", 1032)));
                                item_existance_146=((_Bool*)(right_value185=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_143)), "05function4.c", 1033)));
                                len_147=0;
                                for(
                                it_149=map$2charphsClassphp_begin(self);
                                !map$2charphsClassphp_end(self);
                                it_149=map$2charphsClassphp_next(self)
                                ){
                                    it2_152=map$2charphsClassphp_at(self,it_149,default_value_151);
                                    hash_153=charp_get_hash_key(it_149)%size_143;
                                    n_154=hash_153;
                                    while((_Bool)1) {
                                        if(item_existance_146[n_154]) {
                                            n_154++;
                                            if(n_154>=size_143) {
                                                n_154=0;
                                            }
                                            else if(n_154==hash_153) {
                                                printf("unexpected error in map.rehash(1)\n");
                                                exit(2);
                                            }
                                        }
                                        else {
                                            item_existance_146[n_154]=(_Bool)1;
                                            keys_144[n_154]=it_149;
                                            items_145[n_154]=map$2charphsClassphp_at(self,it_149,default_value_155);
                                            len_147++;
                                            break;
                                        }
                                    }
                                }
                                come_free_object((char*)self->items);
                                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                                come_free_object((char*)self->keys);
                                self->keys=keys_144;
                                self->items=items_145;
                                self->item_existance=item_existance_146;
                                self->size=size_143;
                                self->len=len_147;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
char* result_148;
memset(&result_148, 0, sizeof(char*)); /* bbb */
                                    self->key_list->it=self->key_list->head;
                                    if(self->key_list->it) {
                                        char* __result73__ = self->key_list->it->item;
                                        return __result73__;
                                    }
                                    memset(&result_148,0,sizeof(char*));
                                    char* __result74__ = result_148;
                                    return __result74__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
                                    _Bool __result75__ = self->key_list->it==((void*)0);
                                    return __result75__;
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
char* result_150;
memset(&result_150, 0, sizeof(char*)); /* bbb */
                                    self->key_list->it=self->key_list->it->next;
                                    if(self->key_list->it) {
                                        char* __result76__ = self->key_list->it->item;
                                        return __result76__;
                                    }
                                    memset(&result_150,0,sizeof(char*));
                                    char* __result77__ = result_150;
                                    return __result77__;
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_158;
struct list_item$1charp* it_159;
memset(&it2_158, 0, sizeof(int));
memset(&it_159, 0, sizeof(struct list_item$1charp*));
                                            it2_158=0;
                                            it_159=self->head;
                                            while(it_159!=((void*)0)) {
                                                if(charp_equals(it_159->item,item)) {
                                                    list$1charpp_delete(self,it2_158,it2_158+1);
                                                    break;
                                                }
                                                it2_158++;
                                                it_159=it_159->next;
                                            }
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_160;
struct list_item$1charp* it_163;
int i_164;
struct list_item$1charp* prev_it_165;
struct list_item$1charp* it_166;
int i_167;
struct list_item$1charp* prev_it_168;
struct list_item$1charp* it_169;
struct list_item$1charp* head_prev_it_170;
struct list_item$1charp* tail_it_171;
int i_172;
struct list_item$1charp* prev_it_173;
memset(&tmp_160, 0, sizeof(int));
memset(&it_163, 0, sizeof(struct list_item$1charp*));
memset(&i_164, 0, sizeof(int));
memset(&prev_it_165, 0, sizeof(struct list_item$1charp*));
memset(&it_166, 0, sizeof(struct list_item$1charp*));
memset(&i_167, 0, sizeof(int));
memset(&prev_it_168, 0, sizeof(struct list_item$1charp*));
memset(&it_169, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_170, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_171, 0, sizeof(struct list_item$1charp*));
memset(&i_172, 0, sizeof(int));
memset(&prev_it_173, 0, sizeof(struct list_item$1charp*));
                                                        if(head<0) {
                                                            head+=self->len;
                                                        }
                                                        if(tail<0) {
                                                            tail+=self->len+1;
                                                        }
                                                        if(head>tail) {
                                                            tmp_160=tail;
                                                            tail=head;
                                                            head=tmp_160;
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
                                                            it_163=self->head;
                                                            i_164=0;
                                                            while(it_163!=((void*)0)) {
                                                                if(i_164<tail) {
                                                                    prev_it_165=it_163;
                                                                    it_163=it_163->next;
                                                                    i_164++;
                                                                    if(prev_it_165) { come_call_finalizer(list_item$1charpp_finalize,prev_it_165, (void*)0, (void*)0, 0, 0, 0); }
                                                                    self->len--;
                                                                }
                                                                else if(i_164==tail) {
                                                                    self->head=it_163;
                                                                    self->head->prev=((void*)0);
                                                                    break;
                                                                }
                                                                else {
                                                                    it_163=it_163->next;
                                                                    i_164++;
                                                                }
                                                            }
                                                        }
                                                        else if(tail==self->len) {
                                                            it_166=self->head;
                                                            i_167=0;
                                                            while(it_166!=((void*)0)) {
                                                                if(i_167==head) {
                                                                    self->tail=it_166->prev;
                                                                    self->tail->next=((void*)0);
                                                                }
                                                                if(i_167>=head) {
                                                                    prev_it_168=it_166;
                                                                    it_166=it_166->next;
                                                                    i_167++;
                                                                    if(prev_it_168) { come_call_finalizer(list_item$1charpp_finalize,prev_it_168, (void*)0, (void*)0, 0, 0, 0); }
                                                                    self->len--;
                                                                }
                                                                else {
                                                                    it_166=it_166->next;
                                                                    i_167++;
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            it_169=self->head;
                                                            head_prev_it_170=((void*)0);
                                                            tail_it_171=((void*)0);
                                                            i_172=0;
                                                            while(it_169!=((void*)0)) {
                                                                if(i_172==head) {
                                                                    head_prev_it_170=it_169->prev;
                                                                }
                                                                if(i_172==tail) {
                                                                    tail_it_171=it_169;
                                                                }
                                                                if(i_172>=head&&i_172<tail) {
                                                                    prev_it_173=it_169;
                                                                    it_169=it_169->next;
                                                                    i_172++;
                                                                    if(prev_it_173) { come_call_finalizer(list_item$1charpp_finalize,prev_it_173, (void*)0, (void*)0, 0, 0, 0); }
                                                                    self->len--;
                                                                }
                                                                else {
                                                                    it_169=it_169->next;
                                                                    i_172++;
                                                                }
                                                            }
                                                            if(head_prev_it_170!=((void*)0)) {
                                                                head_prev_it_170->next=tail_it_171;
                                                            }
                                                            if(tail_it_171!=((void*)0)) {
                                                                tail_it_171->prev=head_prev_it_170;
                                                            }
                                                        }
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_161;
struct list_item$1charp* prev_it_162;
memset(&it_161, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_162, 0, sizeof(struct list_item$1charp*));
                                                                it_161=self->head;
                                                                while(it_161!=((void*)0)) {
                                                                    prev_it_162=it_161;
                                                                    it_161=it_161->next;
                                                                    if(prev_it_162) { come_call_finalizer(list_item$1charpp_finalize,prev_it_162, (void*)0, (void*)0, 0, 0, 0); }
                                                                }
                                                                self->head=((void*)0);
                                                                self->tail=((void*)0);
                                                                self->len=0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static void sClassp_finalize(struct sClass* self){
                                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                                            }
                                            if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                                                if(self->mFields) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_174;
struct list_item$1tuple2$2charphsTypephph* prev_it_175;
memset(&it_174, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_175, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                    it_174=self->head;
                                                    while(it_174!=((void*)0)) {
                                                        if(1) {
                                                            if(it_174->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,it_174->item, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        prev_it_175=it_174;
                                                        it_174=it_174->next;
                                                        come_free_object(prev_it_175);
                                                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
                                                                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                                    if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0); }
                                                                }
                                                                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                                                    if(self->v2) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0); }
                                                                }
}

static char* list$1charpp_begin(struct list$1charp* self){
char* result_177;
memset(&result_177, 0, sizeof(char*)); /* bbb */
                            self->it=self->head;
                            if(self->it) {
                                char* __result78__ = self->it->item;
                                return __result78__;
                            }
                            memset(&result_177,0,sizeof(char*));
                            char* __result79__ = result_177;
                            return __result79__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
                            _Bool __result80__ = self->it==((void*)0);
                            return __result80__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_179;
memset(&result_179, 0, sizeof(char*)); /* bbb */
                            self->it=self->it->next;
                            if(self->it) {
                                char* __result81__ = self->it->item;
                                return __result81__;
                            }
                            memset(&result_179,0,sizeof(char*));
                            char* __result82__ = result_179;
                            return __result82__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value186;
struct list_item$1charp* litem_180;
void* right_value187;
struct list_item$1charp* litem_181;
void* right_value188;
struct list_item$1charp* litem_182;
memset(&right_value186, 0, sizeof(void*));
memset(&litem_180, 0, sizeof(struct list_item$1charp*));
memset(&right_value187, 0, sizeof(void*));
memset(&litem_181, 0, sizeof(struct list_item$1charp*));
memset(&right_value188, 0, sizeof(void*));
memset(&litem_182, 0, sizeof(struct list_item$1charp*));
                                if(self->len==0) {
                                    litem_180=((struct list_item$1charp*)(right_value186=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "05function4.c", 1100)));
                                    litem_180->prev=((void*)0);
                                    litem_180->next=((void*)0);
                                    litem_180->item=item;
                                    self->tail=litem_180;
                                    self->head=litem_180;
                                }
                                else if(self->len==1) {
                                    litem_181=((struct list_item$1charp*)(right_value187=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "05function4.c", 1110)));
                                    litem_181->prev=self->head;
                                    litem_181->next=((void*)0);
                                    litem_181->item=item;
                                    self->tail=litem_181;
                                    self->head->next=litem_181;
                                }
                                else {
                                    litem_182=((struct list_item$1charp*)(right_value188=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "05function4.c", 1120)));
                                    litem_182->prev=self->tail;
                                    litem_182->next=((void*)0);
                                    litem_182->item=item;
                                    self->tail->next=litem_182;
                                    self->tail=litem_182;
                                }
                                self->len++;
}

static void sClass_finalize(struct sClass* self){
                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                            }
                            if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                                if(self->mFields) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
                int __result84__ = self->len;
                return __result84__;
}

static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* right_value209;
struct list_item$1sNodeph* litem_193;
struct sNode* __dec_obj109;
void* right_value210;
struct list_item$1sNodeph* litem_194;
struct sNode* __dec_obj110;
void* right_value211;
struct list_item$1sNodeph* litem_195;
struct sNode* __dec_obj111;
memset(&right_value209, 0, sizeof(void*));
memset(&litem_193, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value210, 0, sizeof(void*));
memset(&litem_194, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value211, 0, sizeof(void*));
memset(&litem_195, 0, sizeof(struct list_item$1sNodeph*));
            if(self->len==0) {
                litem_193=((struct list_item$1sNodeph*)(right_value209=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function4.c", 1213)));
                litem_193->prev=((void*)0);
                litem_193->next=((void*)0);
                __dec_obj109=litem_193->item;
                litem_193->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0); }
                self->tail=litem_193;
                self->head=litem_193;
            }
            else if(self->len==1) {
                litem_194=((struct list_item$1sNodeph*)(right_value210=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function4.c", 1223)));
                litem_194->prev=self->head;
                litem_194->next=((void*)0);
                __dec_obj110=litem_194->item;
                litem_194->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0); }
                self->tail=litem_194;
                self->head->next=litem_194;
            }
            else {
                litem_195=((struct list_item$1sNodeph*)(right_value211=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "05function4.c", 1233)));
                litem_195->prev=self->tail;
                litem_195->next=((void*)0);
                __dec_obj111=litem_195->item;
                litem_195->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0); }
                self->tail->next=litem_195;
                self->tail=litem_195;
            }
            self->len++;
            if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

