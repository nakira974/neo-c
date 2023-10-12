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
struct sStructNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
};
struct sStructNobodyNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
};
struct sGenericsStructNode
{
    int sline;
    char* sname;
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

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

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

char* get_none_generics_name(char* class_name);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

static int list$1sTypephp_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index);
static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value);
void output_struct(struct sClass* klass, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

static _Bool map$2charphsClassphp_find(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1tuple2$2charphsTypephphp_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
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
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void list$1sTypephp_reset(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_push_back2(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
_Bool sStructNode_terminated();

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);

static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self);
static void map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static void sTypep_finalize(struct sType* self);
int sStructNode_sline(struct sStructNode* self, struct sInfo* info);

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info);

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);

_Bool sStructNobodyNode_terminated();

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info);

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info);

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);

_Bool sGenericsStructNode_terminated();

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info);

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

static struct sClass* sClassp_clone(struct sClass* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static void list$1charphp_reset(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
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






char* get_none_generics_name(char* class_name){
char* p_0;
void* right_value0;
void* right_value1;
void* right_value2;
memset(&p_0, 0, sizeof(char*));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&right_value2, 0, sizeof(void*));
    p_0=class_name;
    while(*p_0) {
        if(*p_0==36) {
            char* __result7__ = ((char*)(right_value1=string_substring(((char*)(right_value0=__builtin_string(class_name))),0,p_0-class_name)));
            if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
            return __result7__;
        }
        else {
            p_0++;
        }
    }
    char* __result8__ = ((char*)(right_value2=__builtin_string(class_name)));
    return __result8__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* right_value3;
void* right_value4;
struct buffer* buf_1;
struct sClass* klass_2;
char* class_name_3;
int i_4;
struct sType* type_8;
void* right_value5;
char* type_name_9;
int i_10;
void* right_value6;
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&buf_1, 0, sizeof(struct buffer*));
memset(&klass_2, 0, sizeof(struct sClass*));
memset(&class_name_3, 0, sizeof(char*));
memset(&i_4, 0, sizeof(int));
memset(&type_8, 0, sizeof(struct sType*));
memset(&right_value5, 0, sizeof(void*));
memset(&type_name_9, 0, sizeof(char*));
memset(&i_10, 0, sizeof(int));
memset(&right_value6, 0, sizeof(void*));
    buf_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20))))))));
    if(right_value3) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value4) { come_call_finalizer(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
    klass_2=generics_type->mClass;
    class_name_3=klass_2->mName;
    buffer_append_str(buf_1,class_name_3);
    if(list$1sTypephp_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_1,36);
        buffer_append_char(buf_1,list$1sTypephp_length(generics_type->mGenericsTypes)+48);
        for(
        i_4=0;
        i_4<list$1sTypephp_length(generics_type->mGenericsTypes);
        i_4++
        ){
            type_8=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_4);
            type_name_9=(char*)come_increment_ref_count(((char*)(right_value5=create_generics_name(type_8,info))));
            if(right_value5) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(buf_1,type_name_9);
            for(
            i_10=0;
            i_10<type_8->mPointerNum;
            i_10++
            ){
                buffer_append_char(buf_1,112);
            }
            if(type_8->mHeap) {
                buffer_append_str(buf_1,"h");
            }
            if(type_name_9) { type_name_9 = come_decrement_ref_count(type_name_9, (void*)0, (void*)0, 0, 0); }
        }
    }
    char* __result13__ = ((char*)(right_value6=buffer_to_string(buf_1)));
    if(buf_1) { come_call_finalizer(buffer_finalize,buf_1, (void*)0, (void*)0, 0, 0, 0); }
    return __result13__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
        int __result9__ = self->len;
        return __result9__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_5;
memset(&default_value_5, 0, sizeof(struct sType*)); /* bbb */
                memset(&default_value_5,0,sizeof(struct sType*));
                struct sType* __result12__ = list$1sTypephp_item(self,index,default_value_5);
                return __result12__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_6;
int i_7;
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_7, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_6=self->head;
                    i_7=0;
                    while(it_6!=((void*)0)) {
                        if(position==i_7) {
                            struct sType* __result10__ = it_6->item;
                            return __result10__;
                        }
                        it_6=it_6->next;
                        i_7++;
                    }
                    struct sType* __result11__ = default_value;
                    return __result11__;
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* right_value7;
void* right_value8;
struct buffer* buf_11;
void* right_value9;
struct tuple2$2charphsTypeph* it_13;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_15;
struct sType* type_16;
void* right_value10;
void* right_value11;
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&buf_11, 0, sizeof(struct buffer*));
memset(&right_value9, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_15, 0, sizeof(char*)); /* ccc */
memset(&type_16, 0, sizeof(struct sType*)); /* ccc */
memset(&name_15, 0, sizeof(char*)); /* eee */
memset(&type_16, 0, sizeof(struct sType*)); /* eee */
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
    if(!klass->mOutputed) {
        klass->mOutputed=(_Bool)1;
        buf_11=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61))))))));
        if(right_value7) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value8) { come_call_finalizer(buffer_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(buf_11,((char*)(right_value9=xsprintf("struct %s\n{\n",klass->mName))));
        if(right_value9) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0); }
        for(
        it_13=list$1tuple2$2charphsTypephphp_begin((klass->mFields));
        !list$1tuple2$2charphsTypephphp_end((klass->mFields));
        it_13=list$1tuple2$2charphsTypephphp_next((klass->mFields))
        ){
            multiple_assgin_var1=it_13;
            name_15=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
            type_16=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
            type_16->mStatic=(_Bool)0;
            buffer_append_str(buf_11,"    ");
            buffer_append_str(buf_11,((char*)(right_value10=make_define_var(type_16,name_15,info,(_Bool)0))));
            if(right_value10) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(buf_11,";\n");
            if(name_15) { name_15 = come_decrement_ref_count(name_15, (void*)0, (void*)0, 0, 0); }
            if(type_16) { come_call_finalizer(sType_finalize,type_16, (void*)0, (void*)0, 0, 0, 0); }
        }
        buffer_append_str(buf_11,"};\n");
        add_come_code_at_source_head(info,"%s",((char*)(right_value11=buffer_to_string(buf_11))));
        if(right_value11) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0); }
        if(buf_11) { come_call_finalizer(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0); }
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_12;
memset(&result_12, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct tuple2$2charphsTypeph* __result14__ = self->it->item;
                return __result14__;
            }
            memset(&result_12,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result15__ = result_12;
            return __result15__;
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
            _Bool __result16__ = self->it==((void*)0);
            return __result16__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_14;
memset(&result_14, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct tuple2$2charphsTypeph* __result17__ = self->it->item;
                return __result17__;
            }
            memset(&result_14,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result18__ = result_14;
            return __result18__;
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
struct list_item$1sTypeph* it_17;
struct list_item$1sTypeph* prev_it_18;
memset(&it_17, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1sTypeph*));
                        it_17=self->head;
                        while(it_17!=((void*)0)) {
                            if(1) {
                                if(it_17->item) { come_call_finalizer(sType_finalize,it_17->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            prev_it_18=it_17;
                            it_17=it_17->next;
                            come_free_object(prev_it_18);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_19;
struct list_item$1sNodeph* prev_it_20;
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_20, 0, sizeof(struct list_item$1sNodeph*));
                        it_19=self->head;
                        while(it_19!=((void*)0)) {
                            if(1) {
                                if(it_19->item) { it_19->item = come_decrement_ref_count(it_19->item, ((struct sNode*)it_19->item)->finalize, ((struct sNode*)it_19->item)->_protocol_obj, 0, 0); } 
                            }
                            prev_it_20=it_19;
                            it_19=it_19->next;
                            come_free_object(prev_it_20);
                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_21;
struct list_item$1charph* prev_it_22;
memset(&it_21, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_22, 0, sizeof(struct list_item$1charph*));
                        it_21=self->head;
                        while(it_21!=((void*)0)) {
                            if(1) {
                                if(it_21->item) { it_21->item = come_decrement_ref_count(it_21->item, (void*)0, (void*)0, 0, 0); }
                            }
                            prev_it_22=it_21;
                            it_21=it_21->next;
                            come_free_object(prev_it_22);
                        }
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* right_value12;
char* new_name_23;
struct sClass* generics_class_29;
void* right_value13;
void* right_value14;
struct sClass* new_class_30;
void* right_value21;
int i_71;
struct tuple2$2charphsTypeph* it_72;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* name_73;
struct sType* type_74;
void* right_value22;
struct sType* new_type_75;
void* right_value26;
void* right_value57;
void* right_value58;
void* right_value59;
void* right_value60;
struct sType* __dec_obj24;
void* right_value61;
struct sType* __dec_obj25;
memset(&right_value12, 0, sizeof(void*));
memset(&new_name_23, 0, sizeof(char*));
memset(&generics_class_29, 0, sizeof(struct sClass*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&new_class_30, 0, sizeof(struct sClass*));
memset(&right_value21, 0, sizeof(void*));
memset(&i_71, 0, sizeof(int));
memset(&it_72, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_73, 0, sizeof(char*)); /* ccc */
memset(&type_74, 0, sizeof(struct sType*)); /* ccc */
memset(&name_73, 0, sizeof(char*)); /* eee */
memset(&type_74, 0, sizeof(struct sType*)); /* eee */
memset(&right_value22, 0, sizeof(void*));
memset(&new_type_75, 0, sizeof(struct sType*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
    new_name_23=(char*)come_increment_ref_count(((char*)(right_value12=create_generics_name(type,info))));
    if(right_value12) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0); }
    if(!map$2charphsClassphp_find(info->classes,new_name_23)) {
        generics_class_29=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        if(generics_class_29==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            _Bool __result28__ = (_Bool)0;
            return __result28__;
        }
        new_class_30=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value14=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value13=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 99)))),new_name_23,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0))));
        if(right_value13) { come_call_finalizer(sClass_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value14) { come_call_finalizer(sClass_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value21=__builtin_string(new_name_23)))),(struct sClass*)come_increment_ref_count(new_class_30));
        if(right_value21) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0); }
        i_71=0;
        for(
        it_72=list$1tuple2$2charphsTypephphp_begin((generics_class_29->mFields));
        !list$1tuple2$2charphsTypephphp_end((generics_class_29->mFields));
        it_72=list$1tuple2$2charphsTypephphp_next((generics_class_29->mFields))
        ){
            multiple_assgin_var2=it_72;
            name_73=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            type_74=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
            new_type_75=(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=solve_generics(type_74,generics_type,info))));
            if(right_value22) { come_call_finalizer(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
            list$1tuple2$2charphsTypephphp_push_back(new_class_30->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value59=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value58=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 109)))),(char*)come_increment_ref_count(((char*)(right_value26=string_clone(name_73)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_clone(new_type_75)))))))));
            if(right_value26) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0); }
            if(right_value57) { come_call_finalizer(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value59) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
        }
        __dec_obj24=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(type))));
        if(__dec_obj24) { come_call_finalizer(sType_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value60) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
        type->mClass=new_class_30;
        list$1sTypephp_reset(type->mGenericsTypes);
        output_struct(new_class_30,info);
        if(new_class_30) { come_call_finalizer(sClass_finalize,new_class_30, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(type->mNoSolvedGenericsType->v1==((void*)0)) {
            __dec_obj25=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(type))));
            if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value61) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
        }
        type->mClass=map$2charphsClassphp_operator_load_element(info->classes,new_name_23);
        list$1sTypephp_reset(type->mGenericsTypes);
    }
    _Bool __result55__ = (_Bool)1;
    if(new_name_23) { new_name_23 = come_decrement_ref_count(new_name_23, (void*)0, (void*)0, 0, 0); }
    return __result55__;
}

static _Bool map$2charphsClassphp_find(struct map$2charphsClassph* self, char* key){
int hash_24;
int it_25;
memset(&hash_24, 0, sizeof(int));
memset(&it_25, 0, sizeof(int));
        hash_24=string_get_hash_key(((char*)key))%self->size;
        it_25=hash_24;
        while((_Bool)1) {
            if(self->item_existance[it_25]) {
                if(charp_equals(self->keys[it_25],key)) {
                    _Bool __result19__ = (_Bool)1;
                    return __result19__;
                }
                it_25++;
                if(it_25>=self->size) {
                    it_25=0;
                }
                else if(it_25==hash_24) {
                    _Bool __result20__ = (_Bool)0;
                    return __result20__;
                }
            }
            else {
                _Bool __result21__ = (_Bool)0;
                return __result21__;
            }
        }
        _Bool __result22__ = (_Bool)0;
        return __result22__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
struct sClass* default_value_26;
memset(&default_value_26, 0, sizeof(struct sClass*)); /* bbb */
            memset(&default_value_26,0,sizeof(struct sClass*));
            struct sClass* __result27__ = map$2charphsClassphp_at(self,key,default_value_26);
            return __result27__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_27;
int it_28;
memset(&hash_27, 0, sizeof(int));
memset(&it_28, 0, sizeof(int));
                hash_27=string_get_hash_key(((char*)key))%self->size;
                it_28=hash_27;
                while((_Bool)1) {
                    if(self->item_existance[it_28]) {
                        if(charp_equals(self->keys[it_28],key)) {
                            struct sClass* __result23__ = self->items[it_28];
                            return __result23__;
                        }
                        it_28++;
                        if(it_28>=self->size) {
                            it_28=0;
                        }
                        else if(it_28==hash_27) {
                            struct sClass* __result24__ = default_value;
                            return __result24__;
                        }
                    }
                    else {
                        struct sClass* __result25__ = default_value;
                        return __result25__;
                    }
                }
                struct sClass* __result26__ = default_value;
                return __result26__;
}

static void sClass_finalize(struct sClass* self){
            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                if(self->mFields) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_31;
struct list_item$1tuple2$2charphsTypephph* prev_it_32;
memset(&it_31, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_32, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_31=self->head;
                    while(it_31!=((void*)0)) {
                        if(1) {
                            if(it_31->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,it_31->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        prev_it_32=it_31;
                        it_31=it_31->next;
                        come_free_object(prev_it_32);
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

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
int hash_46;
int it_47;
_Bool same_key_exist_64;
char* it2_66;
memset(&hash_46, 0, sizeof(int));
memset(&it_47, 0, sizeof(int));
memset(&same_key_exist_64, 0, sizeof(_Bool));
memset(&it2_66, 0, sizeof(char*));
            if(self->len*10>=self->size) {
                map$2charphsClassphp_rehash(self);
            }
            hash_46=string_get_hash_key(key)%self->size;
            it_47=hash_46;
            while((_Bool)1) {
                if(self->item_existance[it_47]) {
                    if(charp_equals(self->keys[it_47],key)) {
                        if(1) {
                            list$1charpp_remove(self->key_list,self->keys[it_47]);
                            if(self->keys[it_47]) { self->keys[it_47] = come_decrement_ref_count(self->keys[it_47], (void*)0, (void*)0, 0, 0); }
                            self->keys[it_47]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charpp_remove(self->key_list,self->keys[it_47]);
                            self->keys[it_47]=key;
                        }
                        if(1) {
                            if(self->items[it_47]) { come_call_finalizer(sClassp_finalize,self->items[it_47], (void*)0, (void*)0, 0, 0, 0); }
                            self->items[it_47]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_47]=item;
                        }
                        break;
                    }
                    it_47++;
                    if(it_47>=self->size) {
                        it_47=0;
                    }
                    else if(it_47==hash_46) {
                        printf("unexpected error in map.insert\n");
                        exit(2);
                    }
                }
                else {
                    self->item_existance[it_47]=(_Bool)1;
                    if(1) {
                        self->keys[it_47]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_47]=key;
                    }
                    if(1) {
                        self->items[it_47]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_47]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_64=(_Bool)0;
            for(
            it2_66=list$1charpp_begin(self->key_list);
            !list$1charpp_end(self->key_list);
            it_47=list$1charpp_next(self->key_list)
            ){
                if(charp_equals(it2_66,key)) {
                    same_key_exist_64=(_Bool)1;
                }
            }
            if(!same_key_exist_64) {
                list$1charpp_push_back(self->key_list,key);
            }
            if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
            if(item) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_33;
void* right_value15;
char** keys_34;
void* right_value16;
struct sClass** items_35;
void* right_value17;
_Bool* item_existance_36;
int len_37;
char* it_39;
struct sClass* default_value_41;
struct sClass* it2_42;
int hash_43;
int n_44;
struct sClass* default_value_45;
memset(&size_33, 0, sizeof(int));
memset(&right_value15, 0, sizeof(void*));
memset(&keys_34, 0, sizeof(char**));
memset(&right_value16, 0, sizeof(void*));
memset(&items_35, 0, sizeof(struct sClass**));
memset(&right_value17, 0, sizeof(void*));
memset(&item_existance_36, 0, sizeof(_Bool*));
memset(&len_37, 0, sizeof(int));
memset(&it_39, 0, sizeof(char*));
memset(&default_value_41, 0, sizeof(struct sClass*)); /* bbb */
memset(&it2_42, 0, sizeof(struct sClass*));
memset(&hash_43, 0, sizeof(int));
memset(&n_44, 0, sizeof(int));
memset(&default_value_45, 0, sizeof(struct sClass*)); /* bbb */
                    size_33=self->size*10;
                    keys_34=((char**)(right_value15=(char**)come_calloc(1, sizeof(char*)*(1*(size_33)), "14struct.c", 105)));
                    items_35=((struct sClass**)(right_value16=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_33)), "14struct.c", 106)));
                    item_existance_36=((_Bool*)(right_value17=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_33)), "14struct.c", 107)));
                    len_37=0;
                    for(
                    it_39=map$2charphsClassphp_begin(self);
                    !map$2charphsClassphp_end(self);
                    it_39=map$2charphsClassphp_next(self)
                    ){
                        it2_42=map$2charphsClassphp_at(self,it_39,default_value_41);
                        hash_43=charp_get_hash_key(it_39)%size_33;
                        n_44=hash_43;
                        while((_Bool)1) {
                            if(item_existance_36[n_44]) {
                                n_44++;
                                if(n_44>=size_33) {
                                    n_44=0;
                                }
                                else if(n_44==hash_43) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    exit(2);
                                }
                            }
                            else {
                                item_existance_36[n_44]=(_Bool)1;
                                keys_34[n_44]=it_39;
                                items_35[n_44]=map$2charphsClassphp_at(self,it_39,default_value_45);
                                len_37++;
                                break;
                            }
                        }
                    }
                    come_free_object((char*)self->items);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                    come_free_object((char*)self->keys);
                    self->keys=keys_34;
                    self->items=items_35;
                    self->item_existance=item_existance_36;
                    self->size=size_33;
                    self->len=len_37;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
char* result_38;
memset(&result_38, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            char* __result29__ = self->key_list->it->item;
                            return __result29__;
                        }
                        memset(&result_38,0,sizeof(char*));
                        char* __result30__ = result_38;
                        return __result30__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
                        _Bool __result31__ = self->key_list->it==((void*)0);
                        return __result31__;
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
char* result_40;
memset(&result_40, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            char* __result32__ = self->key_list->it->item;
                            return __result32__;
                        }
                        memset(&result_40,0,sizeof(char*));
                        char* __result33__ = result_40;
                        return __result33__;
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_48;
struct list_item$1charp* it_49;
memset(&it2_48, 0, sizeof(int));
memset(&it_49, 0, sizeof(struct list_item$1charp*));
                                it2_48=0;
                                it_49=self->head;
                                while(it_49!=((void*)0)) {
                                    if(charp_equals(it_49->item,item)) {
                                        list$1charpp_delete(self,it2_48,it2_48+1);
                                        break;
                                    }
                                    it2_48++;
                                    it_49=it_49->next;
                                }
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_50;
struct list_item$1charp* it_53;
int i_54;
struct list_item$1charp* prev_it_55;
struct list_item$1charp* it_56;
int i_57;
struct list_item$1charp* prev_it_58;
struct list_item$1charp* it_59;
struct list_item$1charp* head_prev_it_60;
struct list_item$1charp* tail_it_61;
int i_62;
struct list_item$1charp* prev_it_63;
memset(&tmp_50, 0, sizeof(int));
memset(&it_53, 0, sizeof(struct list_item$1charp*));
memset(&i_54, 0, sizeof(int));
memset(&prev_it_55, 0, sizeof(struct list_item$1charp*));
memset(&it_56, 0, sizeof(struct list_item$1charp*));
memset(&i_57, 0, sizeof(int));
memset(&prev_it_58, 0, sizeof(struct list_item$1charp*));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_60, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_61, 0, sizeof(struct list_item$1charp*));
memset(&i_62, 0, sizeof(int));
memset(&prev_it_63, 0, sizeof(struct list_item$1charp*));
                                            if(head<0) {
                                                head+=self->len;
                                            }
                                            if(tail<0) {
                                                tail+=self->len+1;
                                            }
                                            if(head>tail) {
                                                tmp_50=tail;
                                                tail=head;
                                                head=tmp_50;
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
                                                it_53=self->head;
                                                i_54=0;
                                                while(it_53!=((void*)0)) {
                                                    if(i_54<tail) {
                                                        prev_it_55=it_53;
                                                        it_53=it_53->next;
                                                        i_54++;
                                                        if(prev_it_55) { come_call_finalizer(list_item$1charpp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else if(i_54==tail) {
                                                        self->head=it_53;
                                                        self->head->prev=((void*)0);
                                                        break;
                                                    }
                                                    else {
                                                        it_53=it_53->next;
                                                        i_54++;
                                                    }
                                                }
                                            }
                                            else if(tail==self->len) {
                                                it_56=self->head;
                                                i_57=0;
                                                while(it_56!=((void*)0)) {
                                                    if(i_57==head) {
                                                        self->tail=it_56->prev;
                                                        self->tail->next=((void*)0);
                                                    }
                                                    if(i_57>=head) {
                                                        prev_it_58=it_56;
                                                        it_56=it_56->next;
                                                        i_57++;
                                                        if(prev_it_58) { come_call_finalizer(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        it_56=it_56->next;
                                                        i_57++;
                                                    }
                                                }
                                            }
                                            else {
                                                it_59=self->head;
                                                head_prev_it_60=((void*)0);
                                                tail_it_61=((void*)0);
                                                i_62=0;
                                                while(it_59!=((void*)0)) {
                                                    if(i_62==head) {
                                                        head_prev_it_60=it_59->prev;
                                                    }
                                                    if(i_62==tail) {
                                                        tail_it_61=it_59;
                                                    }
                                                    if(i_62>=head&&i_62<tail) {
                                                        prev_it_63=it_59;
                                                        it_59=it_59->next;
                                                        i_62++;
                                                        if(prev_it_63) { come_call_finalizer(list_item$1charpp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        it_59=it_59->next;
                                                        i_62++;
                                                    }
                                                }
                                                if(head_prev_it_60!=((void*)0)) {
                                                    head_prev_it_60->next=tail_it_61;
                                                }
                                                if(tail_it_61!=((void*)0)) {
                                                    tail_it_61->prev=head_prev_it_60;
                                                }
                                            }
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_51;
struct list_item$1charp* prev_it_52;
memset(&it_51, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_52, 0, sizeof(struct list_item$1charp*));
                                                    it_51=self->head;
                                                    while(it_51!=((void*)0)) {
                                                        prev_it_52=it_51;
                                                        it_51=it_51->next;
                                                        if(prev_it_52) { come_call_finalizer(list_item$1charpp_finalize,prev_it_52, (void*)0, (void*)0, 0, 0, 0); }
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

static char* list$1charpp_begin(struct list$1charp* self){
char* result_65;
memset(&result_65, 0, sizeof(char*)); /* bbb */
                self->it=self->head;
                if(self->it) {
                    char* __result34__ = self->it->item;
                    return __result34__;
                }
                memset(&result_65,0,sizeof(char*));
                char* __result35__ = result_65;
                return __result35__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
                _Bool __result36__ = self->it==((void*)0);
                return __result36__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_67;
memset(&result_67, 0, sizeof(char*)); /* bbb */
                self->it=self->it->next;
                if(self->it) {
                    char* __result37__ = self->it->item;
                    return __result37__;
                }
                memset(&result_67,0,sizeof(char*));
                char* __result38__ = result_67;
                return __result38__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value18;
struct list_item$1charp* litem_68;
void* right_value19;
struct list_item$1charp* litem_69;
void* right_value20;
struct list_item$1charp* litem_70;
memset(&right_value18, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1charp*));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1charp*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1charp*));
                    if(self->len==0) {
                        litem_68=((struct list_item$1charp*)(right_value18=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "14struct.c", 174)));
                        litem_68->prev=((void*)0);
                        litem_68->next=((void*)0);
                        litem_68->item=item;
                        self->tail=litem_68;
                        self->head=litem_68;
                    }
                    else if(self->len==1) {
                        litem_69=((struct list_item$1charp*)(right_value19=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "14struct.c", 184)));
                        litem_69->prev=self->head;
                        litem_69->next=((void*)0);
                        litem_69->item=item;
                        self->tail=litem_69;
                        self->head->next=litem_69;
                    }
                    else {
                        litem_70=((struct list_item$1charp*)(right_value20=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "14struct.c", 194)));
                        litem_70->prev=self->tail;
                        litem_70->next=((void*)0);
                        litem_70->item=item;
                        self->tail->next=litem_70;
                        self->tail=litem_70;
                    }
                    self->len++;
}

static void list$1tuple2$2charphsTypephphp_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* right_value23;
struct list_item$1tuple2$2charphsTypephph* litem_76;
struct tuple2$2charphsTypeph* __dec_obj1;
void* right_value24;
struct list_item$1tuple2$2charphsTypephph* litem_77;
struct tuple2$2charphsTypeph* __dec_obj2;
void* right_value25;
struct list_item$1tuple2$2charphsTypephph* litem_78;
struct tuple2$2charphsTypeph* __dec_obj3;
memset(&right_value23, 0, sizeof(void*));
memset(&litem_76, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_78, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                if(self->len==0) {
                    litem_76=((struct list_item$1tuple2$2charphsTypephph*)(right_value23=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "14struct.c", 111)));
                    litem_76->prev=((void*)0);
                    litem_76->next=((void*)0);
                    __dec_obj1=litem_76->item;
                    litem_76->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj1) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_76;
                    self->head=litem_76;
                }
                else if(self->len==1) {
                    litem_77=((struct list_item$1tuple2$2charphsTypephph*)(right_value24=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "14struct.c", 121)));
                    litem_77->prev=self->head;
                    litem_77->next=((void*)0);
                    __dec_obj2=litem_77->item;
                    litem_77->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj2) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_77;
                    self->head->next=litem_77;
                }
                else {
                    litem_78=((struct list_item$1tuple2$2charphsTypephph*)(right_value25=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "14struct.c", 131)));
                    litem_78->prev=self->tail;
                    litem_78->next=((void*)0);
                    __dec_obj3=litem_78->item;
                    litem_78->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj3) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail->next=litem_78;
                    self->tail=litem_78;
                }
                self->len++;
                if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct sType* sType_clone(struct sType* self){
void* right_value27;
struct sType* result_79;
void* right_value30;
struct tuple1$1sTypeph* __dec_obj5;
void* right_value31;
char* __dec_obj6;
void* right_value38;
struct list$1sTypeph* __dec_obj10;
void* right_value46;
struct list$1sNodeph* __dec_obj14;
void* right_value47;
struct list$1sTypeph* __dec_obj15;
void* right_value54;
struct list$1charph* __dec_obj19;
void* right_value55;
struct tuple1$1sTypeph* __dec_obj20;
void* right_value56;
char* __dec_obj21;
memset(&right_value27, 0, sizeof(void*));
memset(&result_79, 0, sizeof(struct sType*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sType* __result39__ = (void*)0;
                    return __result39__;
                }
                result_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value27=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 111))));
                if(right_value27) { come_call_finalizer(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_79->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj5=result_79->mNoSolvedGenericsType;
                    result_79->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value30=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj5) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value30) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj6=result_79->mGenericsName;
                    result_79->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value31=string_clone(self->mGenericsName))));
                    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                    if(right_value31) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj10=result_79->mGenericsTypes;
                    result_79->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value38=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj10) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value38) { come_call_finalizer(list$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj14=result_79->mArrayNum;
                    result_79->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value46=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj14) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value46) { come_call_finalizer(list$1sNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_79->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj15=result_79->mParamTypes;
                    result_79->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value47=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj15) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value47) { come_call_finalizer(list$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj19=result_79->mParamNames;
                    result_79->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj19) { come_call_finalizer(list$1charphp_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value54) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj20=result_79->mResultType;
                    result_79->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value55=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj20) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value55) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_79->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)) {
                    result_79->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_79->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_79->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_79->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_79->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_79->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_79->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_79->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_79->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_79->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_79->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_79->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_79->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_79->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_79->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_79->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_79->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_79->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_79->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)) {
                    result_79->mSizeNum=self->mSizeNum;
                }
                if(self!=((void*)0)) {
                    result_79->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_79->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj21=result_79->mOriginalTypeName;
                    result_79->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value56=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                    if(right_value56) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_79->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_79->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_79->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_79->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_79->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_79->mComeMemCore=self->mComeMemCore;
                }
                if(self!=((void*)0)) {
                    result_79->mInline=self->mInline;
                }
                struct sType* __result53__ = result_79;
                if(result_79) { come_call_finalizer(sType_finalize,result_79, (void*)0, (void*)0, 0, 0, 1); }
                return __result53__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value28;
struct tuple1$1sTypeph* result_80;
void* right_value29;
struct sType* __dec_obj4;
memset(&right_value28, 0, sizeof(void*));
memset(&result_80, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value29, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct tuple1$1sTypeph* __result40__ = (void*)0;
                            return __result40__;
                        }
                        result_80=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value28=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "14struct.c", 115))));
                        if(right_value28) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0); }
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            __dec_obj4=result_80->v1;
                            result_80->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value29=sType_clone(self->v1))));
                            if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value29) { come_call_finalizer(sType_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        struct tuple1$1sTypeph* __result41__ = result_80;
                        if(result_80) { come_call_finalizer(tuple1$1sTypephp_finalize,result_80, (void*)0, (void*)0, 0, 0, 1); }
                        return __result41__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value32;
void* right_value33;
struct list$1sTypeph* result_81;
struct list_item$1sTypeph* it_82;
void* right_value37;
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct list$1sTypeph*));
memset(&it_82, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value37, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1sTypeph* __result42__ = ((void*)0);
                            return __result42__;
                        }
                        result_81=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value33=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "14struct.c", 119))))))));
                        if(right_value33) { come_call_finalizer(list$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0); }
                        it_82=self->head;
                        while(it_82!=((void*)0)) {
                            list$1sTypephp_push_back2(result_81,(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_clone(it_82->item)))));
                            if(right_value37) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0); }
                            it_82=it_82->next;
                        }
                        struct list$1sTypeph* __result44__ = result_81;
                        if(result_81) { come_call_finalizer(list$1sTypephp_finalize,result_81, (void*)0, (void*)0, 0, 0, 1); }
                        return __result44__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            struct list$1sTypeph* __result43__ = self;
                            if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            return __result43__;
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value34;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj7;
void* right_value35;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj8;
void* right_value36;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj9;
memset(&right_value34, 0, sizeof(void*));
memset(&litem_83, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_84, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_85, 0, sizeof(struct list_item$1sTypeph*));
                                if(self->len==0) {
                                    litem_83=((struct list_item$1sTypeph*)(right_value34=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "14struct.c", 125)));
                                    litem_83->prev=((void*)0);
                                    litem_83->next=((void*)0);
                                    __dec_obj7=litem_83->item;
                                    litem_83->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0); }
                                    self->tail=litem_83;
                                    self->head=litem_83;
                                }
                                else if(self->len==1) {
                                    litem_84=((struct list_item$1sTypeph*)(right_value35=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "14struct.c", 135)));
                                    litem_84->prev=self->head;
                                    litem_84->next=((void*)0);
                                    __dec_obj8=litem_84->item;
                                    litem_84->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0); }
                                    self->tail=litem_84;
                                    self->head->next=litem_84;
                                }
                                else {
                                    litem_85=((struct list_item$1sTypeph*)(right_value36=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "14struct.c", 145)));
                                    litem_85->prev=self->tail;
                                    litem_85->next=((void*)0);
                                    __dec_obj9=litem_85->item;
                                    litem_85->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0); }
                                    self->tail->next=litem_85;
                                    self->tail=litem_85;
                                }
                                self->len++;
                                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value39;
void* right_value40;
struct list$1sNodeph* result_86;
struct list_item$1sNodeph* it_87;
void* right_value45;
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&result_86, 0, sizeof(struct list$1sNodeph*));
memset(&it_87, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value45, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1sNodeph* __result45__ = ((void*)0);
                            return __result45__;
                        }
                        result_86=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value40=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value39=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 120))))))));
                        if(right_value40) { come_call_finalizer(list$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
                        it_87=self->head;
                        while(it_87!=((void*)0)) {
                            list$1sNodephp_push_back2(result_86,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNodep_clone(it_87->item)))));
                            if(right_value45) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0); } 
                            it_87=it_87->next;
                        }
                        struct list$1sNodeph* __result49__ = result_86;
                        if(result_86) { come_call_finalizer(list$1sNodephp_finalize,result_86, (void*)0, (void*)0, 0, 0, 1); }
                        return __result49__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            struct list$1sNodeph* __result46__ = self;
                            if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            return __result46__;
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value41;
struct list_item$1sNodeph* litem_88;
struct sNode* __dec_obj11;
void* right_value42;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj12;
void* right_value43;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj13;
memset(&right_value41, 0, sizeof(void*));
memset(&litem_88, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value43, 0, sizeof(void*));
memset(&litem_90, 0, sizeof(struct list_item$1sNodeph*));
                                if(self->len==0) {
                                    litem_88=((struct list_item$1sNodeph*)(right_value41=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "14struct.c", 126)));
                                    litem_88->prev=((void*)0);
                                    litem_88->next=((void*)0);
                                    __dec_obj11=litem_88->item;
                                    litem_88->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0); }
                                    self->tail=litem_88;
                                    self->head=litem_88;
                                }
                                else if(self->len==1) {
                                    litem_89=((struct list_item$1sNodeph*)(right_value42=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "14struct.c", 136)));
                                    litem_89->prev=self->head;
                                    litem_89->next=((void*)0);
                                    __dec_obj12=litem_89->item;
                                    litem_89->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0); }
                                    self->tail=litem_89;
                                    self->head->next=litem_89;
                                }
                                else {
                                    litem_90=((struct list_item$1sNodeph*)(right_value43=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "14struct.c", 146)));
                                    litem_90->prev=self->tail;
                                    litem_90->next=((void*)0);
                                    __dec_obj13=litem_90->item;
                                    litem_90->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0); }
                                    self->tail->next=litem_90;
                                    self->tail=litem_90;
                                }
                                self->len++;
                                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value44;
struct sNode* result_91;
memset(&right_value44, 0, sizeof(void*));
memset(&result_91, 0, sizeof(struct sNode*));
                                if(self==(void*)0) {
                                    struct sNode* __result47__ = (void*)0;
                                    return __result47__;
                                }
                                result_91=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "14struct.c", 126))));
                                if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                    result_91->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(self!=((void*)0)) {
                                    result_91->finalize=self->finalize;
                                }
                                if(self!=((void*)0)) {
                                    result_91->clone=self->clone;
                                }
                                if(self!=((void*)0)) {
                                    result_91->compile=self->compile;
                                }
                                if(self!=((void*)0)) {
                                    result_91->sline=self->sline;
                                }
                                if(self!=((void*)0)) {
                                    result_91->sname=self->sname;
                                }
                                if(self!=((void*)0)) {
                                    result_91->terminated=self->terminated;
                                }
                                struct sNode* __result48__ = result_91;
                                return __result48__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value48;
void* right_value49;
struct list$1charph* result_92;
struct list_item$1charph* it_93;
void* right_value53;
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&result_92, 0, sizeof(struct list$1charph*));
memset(&it_93, 0, sizeof(struct list_item$1charph*));
memset(&right_value53, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1charph* __result50__ = ((void*)0);
                            return __result50__;
                        }
                        result_92=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value49=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value48=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 123))))))));
                        if(right_value49) { come_call_finalizer(list$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0); }
                        it_93=self->head;
                        while(it_93!=((void*)0)) {
                            list$1charphp_push_back2(result_92,(char*)come_increment_ref_count(((char*)(right_value53=string_clone(it_93->item)))));
                            if(right_value53) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0); }
                            it_93=it_93->next;
                        }
                        struct list$1charph* __result52__ = result_92;
                        if(result_92) { come_call_finalizer(list$1charphp_finalize,result_92, (void*)0, (void*)0, 0, 0, 1); }
                        return __result52__;
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            struct list$1charph* __result51__ = self;
                            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            return __result51__;
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value50;
struct list_item$1charph* litem_94;
char* __dec_obj16;
void* right_value51;
struct list_item$1charph* litem_95;
char* __dec_obj17;
void* right_value52;
struct list_item$1charph* litem_96;
char* __dec_obj18;
memset(&right_value50, 0, sizeof(void*));
memset(&litem_94, 0, sizeof(struct list_item$1charph*));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_95, 0, sizeof(struct list_item$1charph*));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_96, 0, sizeof(struct list_item$1charph*));
                                if(self->len==0) {
                                    litem_94=((struct list_item$1charph*)(right_value50=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "14struct.c", 129)));
                                    litem_94->prev=((void*)0);
                                    litem_94->next=((void*)0);
                                    __dec_obj16=litem_94->item;
                                    litem_94->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
                                    self->tail=litem_94;
                                    self->head=litem_94;
                                }
                                else if(self->len==1) {
                                    litem_95=((struct list_item$1charph*)(right_value51=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "14struct.c", 139)));
                                    litem_95->prev=self->head;
                                    litem_95->next=((void*)0);
                                    __dec_obj17=litem_95->item;
                                    litem_95->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
                                    self->tail=litem_95;
                                    self->head->next=litem_95;
                                }
                                else {
                                    litem_96=((struct list_item$1charph*)(right_value52=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "14struct.c", 149)));
                                    litem_96->prev=self->tail;
                                    litem_96->next=((void*)0);
                                    __dec_obj18=litem_96->item;
                                    litem_96->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
                                    self->tail->next=litem_96;
                                    self->tail=litem_96;
                                }
                                self->len++;
                                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
char* __dec_obj22;
struct sType* __dec_obj23;
                __dec_obj22=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
                __dec_obj23=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0); }
                struct tuple2$2charphsTypeph* __result54__ = self;
                if(self) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
                if(v2) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1); }
                return __result54__;
}

static void list$1sTypephp_reset(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_97;
struct list_item$1sTypeph* prev_it_98;
memset(&it_97, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_98, 0, sizeof(struct list_item$1sTypeph*));
            it_97=self->head;
            while(it_97!=((void*)0)) {
                prev_it_98=it_97;
                it_97=it_97->next;
                if(prev_it_98) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_98, (void*)0, (void*)0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                        if(self->item) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* right_value62;
char* __dec_obj26;
void* right_value63;
char* __dec_obj27;
void* right_value76;
struct sClass* __dec_obj35;
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj26=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value62=__builtin_string(info->sname))));
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
    if(right_value62) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0); }
    __dec_obj27=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value63=__builtin_string(name))));
    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
    if(right_value63) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0); }
    __dec_obj35=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value76=sClass_clone(klass))));
    if(__dec_obj35) { come_call_finalizer(sClass_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value76) { come_call_finalizer(sClass_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0); }
    struct sStructNode* __result63__ = self;
    if(self) { come_call_finalizer(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(klass) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1); }
    return __result63__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* right_value64;
struct sClass* result_99;
void* right_value65;
char* __dec_obj28;
void* right_value75;
struct list$1tuple2$2charphsTypephph* __dec_obj34;
memset(&right_value64, 0, sizeof(void*));
memset(&result_99, 0, sizeof(struct sClass*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sClass* __result56__ = (void*)0;
            return __result56__;
        }
        result_99=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value64=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 146))));
        if(right_value64) { come_call_finalizer(sClass_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)) {
            result_99->mStruct=self->mStruct;
        }
        if(self!=((void*)0)) {
            result_99->mFloat=self->mFloat;
        }
        if(self!=((void*)0)) {
            result_99->mUnion=self->mUnion;
        }
        if(self!=((void*)0)) {
            result_99->mGenerics=self->mGenerics;
        }
        if(self!=((void*)0)) {
            result_99->mMethodGenerics=self->mMethodGenerics;
        }
        if(self!=((void*)0)) {
            result_99->mEnum=self->mEnum;
        }
        if(self!=((void*)0)) {
            result_99->mProtocol=self->mProtocol;
        }
        if(self!=((void*)0)) {
            result_99->mNumber=self->mNumber;
        }
        if(self!=((void*)0)&&self->mName!=((void*)0)) {
            __dec_obj28=result_99->mName;
            result_99->mName=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(self->mName))));
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
            if(right_value65) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_99->mGenericsNum=self->mGenericsNum;
        }
        if(self!=((void*)0)) {
            result_99->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        if(self!=((void*)0)&&self->mFields!=((void*)0)) {
            __dec_obj34=result_99->mFields;
            result_99->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value75=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            if(__dec_obj34) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value75) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_99->mOutputed=self->mOutputed;
        }
        struct sClass* __result62__ = result_99;
        if(result_99) { come_call_finalizer(sClass_finalize,result_99, (void*)0, (void*)0, 0, 0, 1); }
        return __result62__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* right_value66;
void* right_value67;
struct list$1tuple2$2charphsTypephph* result_100;
struct list_item$1tuple2$2charphsTypephph* it_101;
void* right_value74;
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&result_100, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_101, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value74, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1tuple2$2charphsTypephph* __result57__ = ((void*)0);
                    return __result57__;
                }
                result_100=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value67=list$1tuple2$2charphsTypephphp_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value66=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "14struct.c", 162))))))));
                if(right_value67) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0); }
                it_101=self->head;
                while(it_101!=((void*)0)) {
                    list$1tuple2$2charphsTypephphp_push_back2(result_100,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value74=tuple2$2charphsTypephp_clone(it_101->item)))));
                    if(right_value74) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
                    it_101=it_101->next;
                }
                struct list$1tuple2$2charphsTypephph* __result61__ = result_100;
                if(result_100) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_100, (void*)0, (void*)0, 0, 0, 1); }
                return __result61__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_initialize(struct list$1tuple2$2charphsTypephph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1tuple2$2charphsTypephph* __result58__ = self;
                    if(self) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result58__;
}

static void list$1tuple2$2charphsTypephphp_push_back2(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* right_value68;
struct list_item$1tuple2$2charphsTypephph* litem_102;
struct tuple2$2charphsTypeph* __dec_obj29;
void* right_value69;
struct list_item$1tuple2$2charphsTypephph* litem_103;
struct tuple2$2charphsTypeph* __dec_obj30;
void* right_value70;
struct list_item$1tuple2$2charphsTypephph* litem_104;
struct tuple2$2charphsTypeph* __dec_obj31;
memset(&right_value68, 0, sizeof(void*));
memset(&litem_102, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value69, 0, sizeof(void*));
memset(&litem_103, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value70, 0, sizeof(void*));
memset(&litem_104, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(self->len==0) {
                            litem_102=((struct list_item$1tuple2$2charphsTypephph*)(right_value68=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "14struct.c", 168)));
                            litem_102->prev=((void*)0);
                            litem_102->next=((void*)0);
                            __dec_obj29=litem_102->item;
                            litem_102->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj29) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_102;
                            self->head=litem_102;
                        }
                        else if(self->len==1) {
                            litem_103=((struct list_item$1tuple2$2charphsTypephph*)(right_value69=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "14struct.c", 178)));
                            litem_103->prev=self->head;
                            litem_103->next=((void*)0);
                            __dec_obj30=litem_103->item;
                            litem_103->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj30) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_103;
                            self->head->next=litem_103;
                        }
                        else {
                            litem_104=((struct list_item$1tuple2$2charphsTypephph*)(right_value70=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "14struct.c", 188)));
                            litem_104->prev=self->tail;
                            litem_104->next=((void*)0);
                            __dec_obj31=litem_104->item;
                            litem_104->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj31) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail->next=litem_104;
                            self->tail=litem_104;
                        }
                        self->len++;
                        if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* right_value71;
struct tuple2$2charphsTypeph* result_105;
void* right_value72;
char* __dec_obj32;
void* right_value73;
struct sType* __dec_obj33;
memset(&right_value71, 0, sizeof(void*));
memset(&result_105, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct tuple2$2charphsTypeph* __result59__ = (void*)0;
                            return __result59__;
                        }
                        result_105=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value71=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 168))));
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            __dec_obj32=result_105->v1;
                            result_105->v1=(char*)come_increment_ref_count(((char*)(right_value72=string_clone(self->v1))));
                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
                            if(right_value72) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->v2!=((void*)0)) {
                            __dec_obj33=result_105->v2;
                            result_105->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(self->v2))));
                            if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value73) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        struct tuple2$2charphsTypeph* __result60__ = result_105;
                        return __result60__;
}

_Bool sStructNode_terminated(){
    _Bool __result64__ = (_Bool)1;
    return __result64__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* right_value77;
struct sClass* klass_106;
void* right_value78;
char* name_107;
void* right_value79;
struct sClass* klass2_108;
void* right_value80;
struct list$1tuple2$2charphsTypephph* __dec_obj36;
void* right_value81;
void* right_value82;
struct sType* type_109;
void* right_value86;
memset(&right_value77, 0, sizeof(void*));
memset(&klass_106, 0, sizeof(struct sClass*));
memset(&right_value78, 0, sizeof(void*));
memset(&name_107, 0, sizeof(char*));
memset(&right_value79, 0, sizeof(void*));
memset(&klass2_108, 0, sizeof(struct sClass*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&type_109, 0, sizeof(struct sType*));
memset(&right_value86, 0, sizeof(void*));
    klass_106=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value77=sClass_clone(self->mClass))));
    if(right_value77) { come_call_finalizer(sClass_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0); }
    name_107=(char*)come_increment_ref_count(((char*)(right_value78=__builtin_string(self->mName))));
    if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0); }
    if(map$2charphsClassphp_at(info->classes,name_107,((void*)0))==((void*)0)) {
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(name_107),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value79=sClass_clone(klass_106)))));
        if(right_value79) { come_call_finalizer(sClass_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0); }
    }
    else if(list$1tuple2$2charphsTypephphp_length(map$2charphsClassphp_at(info->classes,name_107,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephphp_length(klass_106->mFields)>0) {
        klass2_108=map$2charphsClassphp_at(info->classes,name_107,((void*)0));
        __dec_obj36=klass2_108->mFields;
        klass2_108->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value80=list$1tuple2$2charphsTypephphp_clone(klass_106->mFields))));
        if(__dec_obj36) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value80) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0); }
    }
    type_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 167)))),name_107,info,(_Bool)0))));
    if(right_value81) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value82) { come_call_finalizer(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(name_107),(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(type_109)))));
    if(right_value86) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0); }
    output_struct(klass_106,info);
    _Bool __result75__ = (_Bool)1;
    if(klass_106) { come_call_finalizer(sClass_finalize,klass_106, (void*)0, (void*)0, 0, 0, 0); }
    if(name_107) { name_107 = come_decrement_ref_count(name_107, (void*)0, (void*)0, 0, 0); }
    if(type_109) { come_call_finalizer(sType_finalize,type_109, (void*)0, (void*)0, 0, 0, 0); }
    return __result75__;
}

static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self){
        int __result65__ = self->len;
        return __result65__;
}

static void map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
int hash_125;
int it_126;
_Bool same_key_exist_127;
char* it2_128;
memset(&hash_125, 0, sizeof(int));
memset(&it_126, 0, sizeof(int));
memset(&same_key_exist_127, 0, sizeof(_Bool));
memset(&it2_128, 0, sizeof(char*));
        if(self->len*10>=self->size) {
            map$2charphsTypephp_rehash(self);
        }
        hash_125=string_get_hash_key(key)%self->size;
        it_126=hash_125;
        while((_Bool)1) {
            if(self->item_existance[it_126]) {
                if(charp_equals(self->keys[it_126],key)) {
                    if(1) {
                        list$1charpp_remove(self->key_list,self->keys[it_126]);
                        if(self->keys[it_126]) { self->keys[it_126] = come_decrement_ref_count(self->keys[it_126], (void*)0, (void*)0, 0, 0); }
                        self->keys[it_126]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charpp_remove(self->key_list,self->keys[it_126]);
                        self->keys[it_126]=key;
                    }
                    if(1) {
                        if(self->items[it_126]) { come_call_finalizer(sTypep_finalize,self->items[it_126], (void*)0, (void*)0, 0, 0, 0); }
                        self->items[it_126]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_126]=item;
                    }
                    break;
                }
                it_126++;
                if(it_126>=self->size) {
                    it_126=0;
                }
                else if(it_126==hash_125) {
                    printf("unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_126]=(_Bool)1;
                if(1) {
                    self->keys[it_126]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_126]=key;
                }
                if(1) {
                    self->items[it_126]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_126]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_127=(_Bool)0;
        for(
        it2_128=list$1charpp_begin(self->key_list);
        !list$1charpp_end(self->key_list);
        it_126=list$1charpp_next(self->key_list)
        ){
            if(charp_equals(it2_128,key)) {
                same_key_exist_127=(_Bool)1;
            }
        }
        if(!same_key_exist_127) {
            list$1charpp_push_back(self->key_list,key);
        }
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self){
int size_110;
void* right_value83;
char** keys_111;
void* right_value84;
struct sType** items_112;
void* right_value85;
_Bool* item_existance_113;
int len_114;
char* it_116;
struct sType* default_value_118;
struct sType* it2_121;
int hash_122;
int n_123;
struct sType* default_value_124;
memset(&size_110, 0, sizeof(int));
memset(&right_value83, 0, sizeof(void*));
memset(&keys_111, 0, sizeof(char**));
memset(&right_value84, 0, sizeof(void*));
memset(&items_112, 0, sizeof(struct sType**));
memset(&right_value85, 0, sizeof(void*));
memset(&item_existance_113, 0, sizeof(_Bool*));
memset(&len_114, 0, sizeof(int));
memset(&it_116, 0, sizeof(char*));
memset(&default_value_118, 0, sizeof(struct sType*)); /* bbb */
memset(&it2_121, 0, sizeof(struct sType*));
memset(&hash_122, 0, sizeof(int));
memset(&n_123, 0, sizeof(int));
memset(&default_value_124, 0, sizeof(struct sType*)); /* bbb */
                size_110=self->size*10;
                keys_111=((char**)(right_value83=(char**)come_calloc(1, sizeof(char*)*(1*(size_110)), "14struct.c", 172)));
                items_112=((struct sType**)(right_value84=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_110)), "14struct.c", 173)));
                item_existance_113=((_Bool*)(right_value85=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_110)), "14struct.c", 174)));
                len_114=0;
                for(
                it_116=map$2charphsTypephp_begin(self);
                !map$2charphsTypephp_end(self);
                it_116=map$2charphsTypephp_next(self)
                ){
                    it2_121=map$2charphsTypephp_at(self,it_116,default_value_118);
                    hash_122=charp_get_hash_key(it_116)%size_110;
                    n_123=hash_122;
                    while((_Bool)1) {
                        if(item_existance_113[n_123]) {
                            n_123++;
                            if(n_123>=size_110) {
                                n_123=0;
                            }
                            else if(n_123==hash_122) {
                                printf("unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_113[n_123]=(_Bool)1;
                            keys_111[n_123]=it_116;
                            items_112[n_123]=map$2charphsTypephp_at(self,it_116,default_value_124);
                            len_114++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_111;
                self->items=items_112;
                self->item_existance=item_existance_113;
                self->size=size_110;
                self->len=len_114;
}

static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self){
char* result_115;
memset(&result_115, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result66__ = self->key_list->it->item;
                        return __result66__;
                    }
                    memset(&result_115,0,sizeof(char*));
                    char* __result67__ = result_115;
                    return __result67__;
}

static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self){
                    _Bool __result68__ = self->key_list->it==((void*)0);
                    return __result68__;
}

static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self){
char* result_117;
memset(&result_117, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result69__ = self->key_list->it->item;
                        return __result69__;
                    }
                    memset(&result_117,0,sizeof(char*));
                    char* __result70__ = result_117;
                    return __result70__;
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
int hash_119;
int it_120;
memset(&hash_119, 0, sizeof(int));
memset(&it_120, 0, sizeof(int));
                        hash_119=string_get_hash_key(((char*)key))%self->size;
                        it_120=hash_119;
                        while((_Bool)1) {
                            if(self->item_existance[it_120]) {
                                if(charp_equals(self->keys[it_120],key)) {
                                    struct sType* __result71__ = self->items[it_120];
                                    return __result71__;
                                }
                                it_120++;
                                if(it_120>=self->size) {
                                    it_120=0;
                                }
                                else if(it_120==hash_119) {
                                    struct sType* __result72__ = default_value;
                                    return __result72__;
                                }
                            }
                            else {
                                struct sType* __result73__ = default_value;
                                return __result73__;
                            }
                        }
                        struct sType* __result74__ = default_value;
                        return __result74__;
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

int sStructNode_sline(struct sStructNode* self, struct sInfo* info){
    int __result76__ = self->sline;
    return __result76__;
}

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info){
void* right_value87;
memset(&right_value87, 0, sizeof(void*));
    char* __result77__ = ((char*)(right_value87=__builtin_string(self->sname)));
    return __result77__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* right_value88;
char* __dec_obj37;
void* right_value89;
char* __dec_obj38;
void* right_value90;
struct sClass* __dec_obj39;
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj37=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(info->sname))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
    if(right_value88) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0); }
    __dec_obj38=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(name))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
    if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
    __dec_obj39=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value90=sClass_clone(klass))));
    if(__dec_obj39) { come_call_finalizer(sClass_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value90) { come_call_finalizer(sClass_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0); }
    struct sStructNobodyNode* __result78__ = self;
    if(self) { come_call_finalizer(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(klass) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1); }
    return __result78__;
}

_Bool sStructNobodyNode_terminated(){
    _Bool __result79__ = (_Bool)1;
    return __result79__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* right_value91;
char* name_129;
struct sClass* klass_130;
void* right_value92;
void* right_value93;
void* right_value94;
struct sType* type_131;
void* right_value95;
memset(&right_value91, 0, sizeof(void*));
memset(&name_129, 0, sizeof(char*));
memset(&klass_130, 0, sizeof(struct sClass*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&type_131, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
    name_129=(char*)come_increment_ref_count(((char*)(right_value91=__builtin_string(self->mName))));
    if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
    klass_130=self->mClass;
    if(map$2charphsClassphp_at(info->classes,name_129,((void*)0))==((void*)0)) {
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(name_129),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value92=sClass_clone(klass_130)))));
        if(right_value92) { come_call_finalizer(sClass_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0); }
    }
    type_131=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value93=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 219)))),name_129,info,(_Bool)0))));
    if(right_value93) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value94) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(name_129),(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(type_131)))));
    if(right_value95) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0); }
    add_come_code_at_source_head(info,"struct %s;\n",name_129);
    _Bool __result80__ = (_Bool)1;
    if(name_129) { name_129 = come_decrement_ref_count(name_129, (void*)0, (void*)0, 0, 0); }
    if(type_131) { come_call_finalizer(sType_finalize,type_131, (void*)0, (void*)0, 0, 0, 0); }
    return __result80__;
}

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info){
    int __result81__ = self->sline;
    return __result81__;
}

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info){
void* right_value96;
memset(&right_value96, 0, sizeof(void*));
    char* __result82__ = ((char*)(right_value96=__builtin_string(self->sname)));
    return __result82__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* right_value97;
char* __dec_obj40;
memset(&right_value97, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj40=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string(info->sname))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
    if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0); }
    struct sGenericsStructNode* __result83__ = self;
    if(self) { come_call_finalizer(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result83__;
}

_Bool sGenericsStructNode_terminated(){
    _Bool __result84__ = (_Bool)1;
    return __result84__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
    _Bool __result85__ = (_Bool)1;
    return __result85__;
}

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info){
    int __result86__ = self->sline;
    return __result86__;
}

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info){
void* right_value98;
memset(&right_value98, 0, sizeof(void*));
    char* __result87__ = ((char*)(right_value98=__builtin_string(self->sname)));
    return __result87__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
struct sClass* klass_132;
void* right_value99;
void* right_value100;
struct sClass* __dec_obj41;
void* right_value104;
struct sClass* __dec_obj44;
void* right_value105;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type2_134;
char* name_135;
_Bool err_136;
void* right_value106;
void* right_value107;
void* right_value108;
char* name2_137;
void* right_value109;
struct sType* type3_138;
int n_139;
void* right_value110;
void* right_value111;
void* right_value112;
void* right_value113;
void* right_value114;
void* right_value115;
void* right_value116;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value121;
memset(&klass_132, 0, sizeof(struct sClass*)); /* bbb */
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&type2_134, 0, sizeof(struct sType*)); /* ccc */
memset(&name_135, 0, sizeof(char*)); /* ccc */
memset(&err_136, 0, sizeof(_Bool)); /* ccc */
memset(&type2_134, 0, sizeof(struct sType*)); /* eee */
memset(&name_135, 0, sizeof(char*)); /* eee */
memset(&err_136, 0, sizeof(_Bool)); /* eee */
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&name2_137, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&type3_138, 0, sizeof(struct sType*));
memset(&n_139, 0, sizeof(int));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
    if(map$2charphsClassphp_at(info->classes,type_name,((void*)0))==((void*)0)) {
        __dec_obj41=klass_132;
        klass_132=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value100=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value99=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 278)))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0))));
        if(__dec_obj41) { come_call_finalizer(sClass_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value99) { come_call_finalizer(sClass_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value100) { come_call_finalizer(sClass_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0); }
    }
    else {
        __dec_obj44=klass_132;
        klass_132=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value104=sClassp_clone(map$2charphsClassphp_at(info->classes,type_name,((void*)0))))));
        if(__dec_obj44) { come_call_finalizer(sClass_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value104) { come_call_finalizer(sClassp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0); }
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        parse_sharp_v5(info);
        multiple_assgin_var3=((struct tuple3$3sTypephcharphbool*)(right_value105=parse_type(info,(_Bool)1,(_Bool)1)));
        type2_134=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
        name_135=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
        err_136=multiple_assgin_var3->v3;
        if(right_value105) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0); }
        if(!err_136) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        if(*info->p==44) {
            list$1tuple2$2charphsTypephphp_push_back(klass_132->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value107=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value106=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 294)))),(char*)come_increment_ref_count(name_135),(struct sType*)come_increment_ref_count(type2_134))))));
            if(right_value107) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0); }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                name2_137=(char*)come_increment_ref_count(((char*)(right_value108=parse_word(info))));
                if(right_value108) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0); }
                type3_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(type2_134))));
                if(right_value109) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0); }
                if(*info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    n_139=0;
                    while(xisdigit(*info->p)) {
                        n_139=n_139*10+*info->p-48;
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    type3_138->mSizeNum=n_139;
                }
                list$1tuple2$2charphsTypephphp_push_back(klass_132->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value111=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value110=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 318)))),(char*)come_increment_ref_count(name2_137),(struct sType*)come_increment_ref_count(type3_138))))));
                if(right_value111) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0); }
                if(name2_137) { name2_137 = come_decrement_ref_count(name2_137, (void*)0, (void*)0, 0, 0); }
                if(type3_138) { come_call_finalizer(sType_finalize,type3_138, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            list$1tuple2$2charphsTypephphp_push_back(klass_132->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value113=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value112=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 322)))),(char*)come_increment_ref_count(name_135),(struct sType*)come_increment_ref_count(type2_134))))));
            if(right_value113) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0); }
        }
        expected_next_character(59,info);
        parse_sharp_v5(info);
        if(*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        if(type2_134) { come_call_finalizer(sType_finalize,type2_134, (void*)0, (void*)0, 0, 0, 0); }
        if(name_135) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0); }
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 336);
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(right_value116=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value114=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 336)))),(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_132),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sStructNode_finalize;
    _inf_value1->clone=sStructNode_clone;
    _inf_value1->compile=sStructNode_compile;
    _inf_value1->sline=sStructNode_sline;
    _inf_value1->sname=sStructNode_sname;
    _inf_value1->terminated=sStructNode_terminated;
    struct sNode* __result93__ = ((struct sNode*)(right_value121=_inf_value1));
    if(type_name) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1); }
    if(klass_132) { come_call_finalizer(sClass_finalize,klass_132, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value114) { come_call_finalizer(sStructNode_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value115) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0); }
    if(right_value116) { come_call_finalizer(sStructNode_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
    return __result93__;
}

static struct sClass* sClassp_clone(struct sClass* self){
void* right_value101;
struct sClass* result_133;
void* right_value102;
char* __dec_obj42;
void* right_value103;
struct list$1tuple2$2charphsTypephph* __dec_obj43;
memset(&right_value101, 0, sizeof(void*));
memset(&result_133, 0, sizeof(struct sClass*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sClass* __result88__ = (void*)0;
                return __result88__;
            }
            result_133=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value101=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 283))));
            if(right_value101) { come_call_finalizer(sClass_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_133->mStruct=self->mStruct;
            }
            if(self!=((void*)0)) {
                result_133->mFloat=self->mFloat;
            }
            if(self!=((void*)0)) {
                result_133->mUnion=self->mUnion;
            }
            if(self!=((void*)0)) {
                result_133->mGenerics=self->mGenerics;
            }
            if(self!=((void*)0)) {
                result_133->mMethodGenerics=self->mMethodGenerics;
            }
            if(self!=((void*)0)) {
                result_133->mEnum=self->mEnum;
            }
            if(self!=((void*)0)) {
                result_133->mProtocol=self->mProtocol;
            }
            if(self!=((void*)0)) {
                result_133->mNumber=self->mNumber;
            }
            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                __dec_obj42=result_133->mName;
                result_133->mName=(char*)come_increment_ref_count(((char*)(right_value102=string_clone(self->mName))));
                if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
                if(right_value102) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_133->mGenericsNum=self->mGenericsNum;
            }
            if(self!=((void*)0)) {
                result_133->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                __dec_obj43=result_133->mFields;
                result_133->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value103=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                if(__dec_obj43) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value103) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_133->mOutputed=self->mOutputed;
            }
            struct sClass* __result89__ = result_133;
            if(result_133) { come_call_finalizer(sClass_finalize,result_133, (void*)0, (void*)0, 0, 0, 1); }
            return __result89__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
            }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
char* __dec_obj45;
struct sType* __dec_obj46;
                __dec_obj45=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
                __dec_obj46=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0); }
                struct tuple2$2charphsTypeph* __result90__ = self;
                if(self) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
                if(v2) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1); }
                return __result90__;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
char* header_head_141;
void* right_value122;
char* type_name_142;
struct sClass* struct_class_143;
void* right_value123;
void* right_value124;
struct sClass* __dec_obj50;
void* right_value125;
struct sClass* __dec_obj51;
void* right_value126;
void* right_value127;
void* right_value128;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value133;
void* right_value134;
char* T_147;
struct sClass* generics_class_151;
void* right_value138;
void* right_value139;
struct sClass* __dec_obj58;
void* right_value140;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* type2_152;
char* name_153;
_Bool err_154;
void* right_value141;
void* right_value142;
void* right_value143;
char* name2_155;
void* right_value144;
struct sType* type3_156;
int n_157;
void* right_value145;
void* right_value146;
void* right_value147;
void* right_value148;
void* right_value149;
void* right_value150;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value153;
struct sClass* struct_class_159;
void* right_value154;
void* right_value155;
struct sClass* __dec_obj60;
void* right_value156;
struct sClass* __dec_obj61;
void* right_value157;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* type2_160;
char* name_161;
_Bool err_162;
void* right_value158;
void* right_value159;
void* right_value160;
char* name2_163;
void* right_value161;
struct sType* type3_164;
int n_165;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value174;
void* right_value175;
void* right_value176;
memset(&header_head_141, 0, sizeof(char*));
memset(&right_value122, 0, sizeof(void*));
memset(&type_name_142, 0, sizeof(char*));
memset(&struct_class_143, 0, sizeof(struct sClass*)); /* bbb */
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&T_147, 0, sizeof(char*));
memset(&generics_class_151, 0, sizeof(struct sClass*)); /* bbb */
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&type2_152, 0, sizeof(struct sType*)); /* ccc */
memset(&name_153, 0, sizeof(char*)); /* ccc */
memset(&err_154, 0, sizeof(_Bool)); /* ccc */
memset(&type2_152, 0, sizeof(struct sType*)); /* eee */
memset(&name_153, 0, sizeof(char*)); /* eee */
memset(&err_154, 0, sizeof(_Bool)); /* eee */
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&name2_155, 0, sizeof(char*));
memset(&right_value144, 0, sizeof(void*));
memset(&type3_156, 0, sizeof(struct sType*));
memset(&n_157, 0, sizeof(int));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&struct_class_159, 0, sizeof(struct sClass*)); /* bbb */
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&type2_160, 0, sizeof(struct sType*)); /* ccc */
memset(&name_161, 0, sizeof(char*)); /* ccc */
memset(&err_162, 0, sizeof(_Bool)); /* ccc */
memset(&type2_160, 0, sizeof(struct sType*)); /* eee */
memset(&name_161, 0, sizeof(char*)); /* eee */
memset(&err_162, 0, sizeof(_Bool)); /* eee */
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&name2_163, 0, sizeof(char*));
memset(&right_value161, 0, sizeof(void*));
memset(&type3_164, 0, sizeof(struct sType*));
memset(&n_165, 0, sizeof(int));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
    if(string_operator_equals(buf,"struct")) {
        header_head_141=head;
        type_name_142=(char*)come_increment_ref_count(((char*)(right_value122=parse_word(info))));
        if(right_value122) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0); }
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(map$2charphsClassphp_at(info->classes,type_name_142,((void*)0))==((void*)0)) {
                __dec_obj50=struct_class_143;
                struct_class_143=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value124=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value123=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 352)))),type_name_142,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0))));
                if(__dec_obj50) { come_call_finalizer(sClass_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value123) { come_call_finalizer(sClass_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value124) { come_call_finalizer(sClass_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0); }
            }
            else {
                __dec_obj51=struct_class_143;
                struct_class_143=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value125=sClassp_clone(map$2charphsClassphp_at(info->classes,type_name_142,((void*)0))))));
                if(__dec_obj51) { come_call_finalizer(sClass_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value125) { come_call_finalizer(sClassp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0); }
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 358);
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(right_value128=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value126=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 358)))),(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(type_name_142)))),(struct sClass*)come_increment_ref_count(struct_class_143),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=sStructNobodyNode_finalize;
            _inf_value2->clone=sStructNobodyNode_clone;
            _inf_value2->compile=sStructNobodyNode_compile;
            _inf_value2->sline=sStructNobodyNode_sline;
            _inf_value2->sname=sStructNobodyNode_sname;
            _inf_value2->terminated=sStructNobodyNode_terminated;
            struct sNode* __result96__ = ((struct sNode*)(right_value133=_inf_value2));
            if(struct_class_143) { come_call_finalizer(sClass_finalize,struct_class_143, (void*)0, (void*)0, 0, 0, 0); }
            if(type_name_142) { type_name_142 = come_decrement_ref_count(type_name_142, (void*)0, (void*)0, 0, 0); }
            if(right_value126) { come_call_finalizer(sStructNobodyNode_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value127) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0); }
            if(right_value128) { come_call_finalizer(sStructNobodyNode_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0); }
            return __result96__;
        }
        else {
            if(*info->p==60) {
                list$1charphp_reset(info->generics_type_names);
                info->p++;
                skip_spaces_and_lf(info);
                while((_Bool)1) {
                    T_147=(char*)come_increment_ref_count(((char*)(right_value134=parse_word(info))));
                    if(right_value134) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0); }
                    list$1charphp_push_back(info->generics_type_names,(char*)come_increment_ref_count(T_147));
                    if(*info->p==62) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    else if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"invalid generics struct definition");
                        exit(2);
                    }
                    if(T_147) { T_147 = come_decrement_ref_count(T_147, (void*)0, (void*)0, 0, 0); }
                }
                if(map$2charphsClassphp_at(info->generics_classes,type_name_142,((void*)0))!=((void*)0)) {
                    err_msg(info,"redifined generics struct(%s)",type_name_142);
                    exit(2);
                }
                else {
                    __dec_obj58=generics_class_151;
                    generics_class_151=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value139=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value138=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 392)))),type_name_142,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0))));
                    if(__dec_obj58) { come_call_finalizer(sClass_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value138) { come_call_finalizer(sClass_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value139) { come_call_finalizer(sClass_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(map$2charphsClassphp_at(info->generics_classes,type_name_142,((void*)0))==((void*)0)) {
                    map$2charphsClassphp_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_142),(struct sClass*)come_increment_ref_count(generics_class_151));
                }
                expected_next_character(123,info);
                while((_Bool)1) {
                    parse_sharp_v5(info);
                    multiple_assgin_var4=((struct tuple3$3sTypephcharphbool*)(right_value140=parse_type(info,(_Bool)1,(_Bool)1)));
                    type2_152=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
                    name_153=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                    err_154=multiple_assgin_var4->v3;
                    if(right_value140) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0); }
                    if(!err_154) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(*info->p==44) {
                        list$1tuple2$2charphsTypephphp_push_back(generics_class_151->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value142=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value141=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 412)))),(char*)come_increment_ref_count(name_153),(struct sType*)come_increment_ref_count(type2_152))))));
                        if(right_value142) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_155=(char*)come_increment_ref_count(((char*)(right_value143=parse_word(info))));
                            if(right_value143) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0); }
                            type3_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(type2_152))));
                            if(right_value144) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
                            if(*info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                n_157=0;
                                while(xisdigit(*info->p)) {
                                    n_157=n_157*10+*info->p-48;
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                type3_156->mSizeNum=n_157;
                            }
                            list$1tuple2$2charphsTypephphp_push_back(generics_class_151->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value146=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value145=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 436)))),(char*)come_increment_ref_count(name2_155),(struct sType*)come_increment_ref_count(type3_156))))));
                            if(right_value146) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
                            if(name2_155) { name2_155 = come_decrement_ref_count(name2_155, (void*)0, (void*)0, 0, 0); }
                            if(type3_156) { come_call_finalizer(sType_finalize,type3_156, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephphp_push_back(generics_class_151->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value148=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value147=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 440)))),(char*)come_increment_ref_count(name_153),(struct sType*)come_increment_ref_count(type2_152))))));
                        if(right_value148) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    expected_next_character(59,info);
                    parse_sharp_v5(info);
                    if(*info->p==125) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                    if(type2_152) { come_call_finalizer(sType_finalize,type2_152, (void*)0, (void*)0, 0, 0, 0); }
                    if(name_153) { name_153 = come_decrement_ref_count(name_153, (void*)0, (void*)0, 0, 0); }
                }
                list$1charphp_reset(info->generics_type_names);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 457);
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(right_value150=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value149=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 457)))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=sGenericsStructNode_finalize;
                _inf_value3->clone=sGenericsStructNode_clone;
                _inf_value3->compile=sGenericsStructNode_compile;
                _inf_value3->sline=sGenericsStructNode_sline;
                _inf_value3->sname=sGenericsStructNode_sname;
                _inf_value3->terminated=sGenericsStructNode_terminated;
                struct sNode* __result99__ = ((struct sNode*)(right_value153=_inf_value3));
                if(generics_class_151) { come_call_finalizer(sClass_finalize,generics_class_151, (void*)0, (void*)0, 0, 0, 0); }
                if(type_name_142) { type_name_142 = come_decrement_ref_count(type_name_142, (void*)0, (void*)0, 0, 0); }
                if(right_value149) { come_call_finalizer(sGenericsStructNode_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value150) { come_call_finalizer(sGenericsStructNode_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0); }
                return __result99__;
            }
            else {
                if(map$2charphsClassphp_at(info->classes,type_name_142,((void*)0))==((void*)0)) {
                    __dec_obj60=struct_class_159;
                    struct_class_159=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value155=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value154=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 462)))),type_name_142,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0))));
                    if(__dec_obj60) { come_call_finalizer(sClass_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value154) { come_call_finalizer(sClass_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value155) { come_call_finalizer(sClass_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
                }
                else {
                    __dec_obj61=struct_class_159;
                    struct_class_159=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value156=sClassp_clone(map$2charphsClassphp_at(info->classes,type_name_142,((void*)0))))));
                    if(__dec_obj61) { come_call_finalizer(sClass_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value156) { come_call_finalizer(sClassp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0); }
                }
                expected_next_character(123,info);
                while((_Bool)1) {
                    parse_sharp_v5(info);
                    multiple_assgin_var5=((struct tuple3$3sTypephcharphbool*)(right_value157=parse_type(info,(_Bool)1,(_Bool)1)));
                    type2_160=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                    name_161=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                    err_162=multiple_assgin_var5->v3;
                    if(right_value157) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0); }
                    if(!err_162) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(*info->p==44) {
                        list$1tuple2$2charphsTypephphp_push_back(struct_class_159->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value159=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value158=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 480)))),(char*)come_increment_ref_count(name_161),(struct sType*)come_increment_ref_count(type2_160))))));
                        if(right_value159) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0); }
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_163=(char*)come_increment_ref_count(((char*)(right_value160=parse_word(info))));
                            if(right_value160) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0); }
                            type3_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(type2_160))));
                            if(right_value161) { come_call_finalizer(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0); }
                            if(*info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                n_165=0;
                                while(xisdigit(*info->p)) {
                                    n_165=n_165*10+*info->p-48;
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                type3_164->mSizeNum=n_165;
                            }
                            list$1tuple2$2charphsTypephphp_push_back(struct_class_159->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value163=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value162=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 504)))),(char*)come_increment_ref_count(name2_163),(struct sType*)come_increment_ref_count(type3_164))))));
                            if(right_value163) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0); }
                            if(name2_163) { name2_163 = come_decrement_ref_count(name2_163, (void*)0, (void*)0, 0, 0); }
                            if(type3_164) { come_call_finalizer(sType_finalize,type3_164, (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephphp_push_back(struct_class_159->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value165=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value164=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 508)))),(char*)come_increment_ref_count(name_161),(struct sType*)come_increment_ref_count(type2_160))))));
                        if(right_value165) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    expected_next_character(59,info);
                    parse_sharp_v5(info);
                    if(*info->p==125) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                    if(type2_160) { come_call_finalizer(sType_finalize,type2_160, (void*)0, (void*)0, 0, 0, 0); }
                    if(name_161) { name_161 = come_decrement_ref_count(name_161, (void*)0, (void*)0, 0, 0); }
                }
                list$1charphp_reset(info->generics_type_names);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 526);
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(right_value169=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value166=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 526)))),(char*)come_increment_ref_count(((char*)(right_value167=__builtin_string(type_name_142)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value168=sClass_clone(struct_class_159)))),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=sStructNode_finalize;
                _inf_value4->clone=sStructNode_clone;
                _inf_value4->compile=sStructNode_compile;
                _inf_value4->sline=sStructNode_sline;
                _inf_value4->sname=sStructNode_sname;
                _inf_value4->terminated=sStructNode_terminated;
                struct sNode* __result102__ = ((struct sNode*)(right_value174=_inf_value4));
                if(struct_class_159) { come_call_finalizer(sClass_finalize,struct_class_159, (void*)0, (void*)0, 0, 0, 0); }
                if(type_name_142) { type_name_142 = come_decrement_ref_count(type_name_142, (void*)0, (void*)0, 0, 0); }
                if(right_value166) { come_call_finalizer(sStructNode_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value167) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0); }
                if(right_value168) { come_call_finalizer(sClass_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value169) { come_call_finalizer(sStructNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0); }
                return __result102__;
            }
        }
    }
    struct sNode* __result103__ = ((struct sNode*)(right_value176=top_level_v97((char*)come_increment_ref_count(((char*)(right_value175=__builtin_string(buf)))),head,head_sline,info)));
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1); }
    if(right_value175) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0); }
    return __result103__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                    if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                }
                if(self!=((void*)0)&&self->mClass!=((void*)0)) {
                    if(self->mClass) { come_call_finalizer(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* right_value129;
struct sStructNobodyNode* result_144;
void* right_value130;
char* __dec_obj52;
void* right_value131;
struct sClass* __dec_obj53;
void* right_value132;
char* __dec_obj54;
memset(&right_value129, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct sStructNobodyNode*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sStructNobodyNode* __result94__ = (void*)0;
                    return __result94__;
                }
                result_144=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value129=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 360))));
                if(right_value129) { come_call_finalizer(sStructNobodyNode_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                    __dec_obj52=result_144->mName;
                    result_144->mName=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(self->mName))));
                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                    if(right_value130) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mClass!=((void*)0)) {
                    __dec_obj53=result_144->mClass;
                    result_144->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value131=sClass_clone(self->mClass))));
                    if(__dec_obj53) { come_call_finalizer(sClass_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value131) { come_call_finalizer(sClass_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_144->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj54=result_144->sname;
                    result_144->sname=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(self->sname))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
                    if(right_value132) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0); }
                }
                struct sStructNobodyNode* __result95__ = result_144;
                if(result_144) { come_call_finalizer(sStructNobodyNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 1); }
                return __result95__;
}

static void list$1charphp_reset(struct list$1charph* self){
struct list_item$1charph* it_145;
struct list_item$1charph* prev_it_146;
memset(&it_145, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_146, 0, sizeof(struct list_item$1charph*));
                    it_145=self->head;
                    while(it_145!=((void*)0)) {
                        prev_it_146=it_145;
                        it_145=it_145->next;
                        if(prev_it_146) { come_call_finalizer(list_item$1charphp_finalize,prev_it_146, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                if(self->item) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0); }
                            }
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value135;
struct list_item$1charph* litem_148;
char* __dec_obj55;
void* right_value136;
struct list_item$1charph* litem_149;
char* __dec_obj56;
void* right_value137;
struct list_item$1charph* litem_150;
char* __dec_obj57;
memset(&right_value135, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
memset(&right_value136, 0, sizeof(void*));
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
memset(&right_value137, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_148=((struct list_item$1charph*)(right_value135=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "14struct.c", 371)));
                            litem_148->prev=((void*)0);
                            litem_148->next=((void*)0);
                            __dec_obj55=litem_148->item;
                            litem_148->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_148;
                            self->head=litem_148;
                        }
                        else if(self->len==1) {
                            litem_149=((struct list_item$1charph*)(right_value136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "14struct.c", 381)));
                            litem_149->prev=self->head;
                            litem_149->next=((void*)0);
                            __dec_obj56=litem_149->item;
                            litem_149->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_149;
                            self->head->next=litem_149;
                        }
                        else {
                            litem_150=((struct list_item$1charph*)(right_value137=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "14struct.c", 391)));
                            litem_150->prev=self->tail;
                            litem_150->next=((void*)0);
                            __dec_obj57=litem_150->item;
                            litem_150->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
                            self->tail->next=litem_150;
                            self->tail=litem_150;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* right_value151;
struct sGenericsStructNode* result_158;
void* right_value152;
char* __dec_obj59;
memset(&right_value151, 0, sizeof(void*));
memset(&result_158, 0, sizeof(struct sGenericsStructNode*));
memset(&right_value152, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sGenericsStructNode* __result97__ = (void*)0;
                        return __result97__;
                    }
                    result_158=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value151=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 459))));
                    if(right_value151) { come_call_finalizer(sGenericsStructNode_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)) {
                        result_158->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj59=result_158->sname;
                        result_158->sname=(char*)come_increment_ref_count(((char*)(right_value152=string_clone(self->sname))));
                        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
                        if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sGenericsStructNode* __result98__ = result_158;
                    if(result_158) { come_call_finalizer(sGenericsStructNode_finalize,result_158, (void*)0, (void*)0, 0, 0, 1); }
                    return __result98__;
}

static void sStructNode_finalize(struct sStructNode* self){
                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                        if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
                        if(self->mClass) { come_call_finalizer(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* right_value170;
struct sStructNode* result_166;
void* right_value171;
char* __dec_obj62;
void* right_value172;
struct sClass* __dec_obj63;
void* right_value173;
char* __dec_obj64;
memset(&right_value170, 0, sizeof(void*));
memset(&result_166, 0, sizeof(struct sStructNode*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sStructNode* __result100__ = (void*)0;
                        return __result100__;
                    }
                    result_166=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value170=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 528))));
                    if(right_value170) { come_call_finalizer(sStructNode_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                        __dec_obj62=result_166->mName;
                        result_166->mName=(char*)come_increment_ref_count(((char*)(right_value171=string_clone(self->mName))));
                        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0); }
                        if(right_value171) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0); }
                    }
                    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
                        __dec_obj63=result_166->mClass;
                        result_166->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value172=sClass_clone(self->mClass))));
                        if(__dec_obj63) { come_call_finalizer(sClass_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value172) { come_call_finalizer(sClass_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    if(self!=((void*)0)) {
                        result_166->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj64=result_166->sname;
                        result_166->sname=(char*)come_increment_ref_count(((char*)(right_value173=string_clone(self->sname))));
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
                        if(right_value173) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sStructNode* __result101__ = result_166;
                    if(result_166) { come_call_finalizer(sStructNode_finalize,result_166, (void*)0, (void*)0, 0, 0, 1); }
                    return __result101__;
}

