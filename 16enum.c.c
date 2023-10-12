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
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sEnumNode
{
    char* mTypeName;
    struct list$1tuple2$2charphsNodephph* mElements;
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

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephphp_push_back2(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static struct sNode* sNodep_clone(struct sNode* self);
_Bool sEnumNode_terminated();

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info);

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info);

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
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
static void list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

static void sEnumNode_finalize(struct sEnumNode* self);
static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self);
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






struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, struct sInfo* info){
void* right_value0;
char* __dec_obj1;
void* right_value1;
char* __dec_obj2;
void* right_value12;
struct list$1tuple2$2charphsNodephph* __dec_obj8;
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj1=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(info->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    __dec_obj2=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(((char*)(right_value1=__builtin_string(type_name))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
    if(right_value1) { right_value1 = come_decrement_ref_count(right_value1, (void*)0, (void*)0, 1, 0); }
    __dec_obj8=self->mElements;
    self->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value12=list$1tuple2$2charphsNodephphp_clone(elements))));
    if(__dec_obj8) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value12) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0); }
    struct sEnumNode* __result14__ = self;
    if(self) { come_call_finalizer(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(type_name) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1); }
    return __result14__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* right_value2;
void* right_value3;
struct list$1tuple2$2charphsNodephph* result_2;
struct list_item$1tuple2$2charphsNodephph* it_3;
void* right_value11;
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_3, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value11, 0, sizeof(void*));
        if(self==((void*)0)) {
            struct list$1tuple2$2charphsNodephph* __result7__ = ((void*)0);
            return __result7__;
        }
        result_2=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value3=list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value2=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 22))))))));
        if(right_value3) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
        it_3=self->head;
        while(it_3!=((void*)0)) {
            list$1tuple2$2charphsNodephphp_push_back2(result_2,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value11=tuple2$2charphsNodephp_clone(it_3->item)))));
            if(right_value11) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
            it_3=it_3->next;
        }
        struct list$1tuple2$2charphsNodephph* __result13__ = result_2;
        if(result_2) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1); }
        return __result13__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1tuple2$2charphsNodephph* __result8__ = self;
            if(self) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result8__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_0;
struct list_item$1tuple2$2charphsNodephph* prev_it_1;
memset(&it_0, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_1, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_0=self->head;
                while(it_0!=((void*)0)) {
                    if(1) {
                        if(it_0->item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,it_0->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    prev_it_1=it_0;
                    it_0=it_0->next;
                    come_free_object(prev_it_1);
                }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0); }
                            }
                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0); } 
                            }
}

static void list$1tuple2$2charphsNodephphp_push_back2(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* right_value4;
struct list_item$1tuple2$2charphsNodephph* litem_4;
struct tuple2$2charphsNodeph* __dec_obj3;
void* right_value5;
struct list_item$1tuple2$2charphsNodephph* litem_5;
struct tuple2$2charphsNodeph* __dec_obj4;
void* right_value6;
struct list_item$1tuple2$2charphsNodephph* litem_6;
struct tuple2$2charphsNodeph* __dec_obj5;
memset(&right_value4, 0, sizeof(void*));
memset(&litem_4, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value5, 0, sizeof(void*));
memset(&litem_5, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value6, 0, sizeof(void*));
memset(&litem_6, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(self->len==0) {
                    litem_4=((struct list_item$1tuple2$2charphsNodephph*)(right_value4=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "16enum.c", 28)));
                    litem_4->prev=((void*)0);
                    litem_4->next=((void*)0);
                    __dec_obj3=litem_4->item;
                    litem_4->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj3) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_4;
                    self->head=litem_4;
                }
                else if(self->len==1) {
                    litem_5=((struct list_item$1tuple2$2charphsNodephph*)(right_value5=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "16enum.c", 38)));
                    litem_5->prev=self->head;
                    litem_5->next=((void*)0);
                    __dec_obj4=litem_5->item;
                    litem_5->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj4) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_5;
                    self->head->next=litem_5;
                }
                else {
                    litem_6=((struct list_item$1tuple2$2charphsNodephph*)(right_value6=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "16enum.c", 48)));
                    litem_6->prev=self->tail;
                    litem_6->next=((void*)0);
                    __dec_obj5=litem_6->item;
                    litem_6->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj5) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail->next=litem_6;
                    self->tail=litem_6;
                }
                self->len++;
                if(item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* right_value7;
struct tuple2$2charphsNodeph* result_7;
void* right_value8;
char* __dec_obj6;
void* right_value10;
struct sNode* __dec_obj7;
memset(&right_value7, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple2$2charphsNodeph* __result9__ = (void*)0;
                    return __result9__;
                }
                result_7=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value7=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 28))));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj6=result_7->v1;
                    result_7->v1=(char*)come_increment_ref_count(((char*)(right_value8=string_clone(self->v1))));
                    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                    if(right_value8) { right_value8 = come_decrement_ref_count(right_value8, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj7=result_7->v2;
                    result_7->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value10=sNodep_clone(self->v2))));
                    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0); }
                    if(right_value10) { right_value10 = come_decrement_ref_count(right_value10, ((struct sNode*)right_value10)->finalize, ((struct sNode*)right_value10)->_protocol_obj, 1, 0); } 
                }
                struct tuple2$2charphsNodeph* __result12__ = result_7;
                return __result12__;
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value9;
struct sNode* result_8;
memset(&right_value9, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            struct sNode* __result10__ = (void*)0;
                            return __result10__;
                        }
                        result_8=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "16enum.c", 32))));
                        if(self!=((void*)0)&&self->clone!=((void*)0)) {
                            result_8->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(self!=((void*)0)) {
                            result_8->finalize=self->finalize;
                        }
                        if(self!=((void*)0)) {
                            result_8->clone=self->clone;
                        }
                        if(self!=((void*)0)) {
                            result_8->compile=self->compile;
                        }
                        if(self!=((void*)0)) {
                            result_8->sline=self->sline;
                        }
                        if(self!=((void*)0)) {
                            result_8->sname=self->sname;
                        }
                        if(self!=((void*)0)) {
                            result_8->terminated=self->terminated;
                        }
                        struct sNode* __result11__ = result_8;
                        return __result11__;
}

_Bool sEnumNode_terminated(){
    _Bool __result15__ = (_Bool)1;
    return __result15__;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info){
char* type_name_9;
struct list$1tuple2$2charphsNodephph* elements_10;
void* right_value13;
void* right_value14;
struct buffer* buf_11;
void* right_value15;
void* right_value16;
int i_12;
struct tuple2$2charphsNodeph* it_14;
struct tuple2$2charphsNodeph* multiple_assgin_var1;
char* name_16;
struct sNode* value_17;
void* right_value17;
struct CVALUE* right_value_18;
void* right_value18;
void* right_value19;
void* right_value20;
void* right_value21;
void* right_value22;
memset(&type_name_9, 0, sizeof(char*));
memset(&elements_10, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&buf_11, 0, sizeof(struct buffer*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&i_12, 0, sizeof(int));
memset(&it_14, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&name_16, 0, sizeof(char*)); /* ccc */
memset(&value_17, 0, sizeof(struct sNode*)); /* ccc */
memset(&name_16, 0, sizeof(char*)); /* eee */
memset(&value_17, 0, sizeof(struct sNode*)); /* eee */
memset(&right_value17, 0, sizeof(void*));
memset(&right_value_18, 0, sizeof(struct CVALUE*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
    type_name_9=(char*)come_increment_ref_count(self->mTypeName);
    elements_10=self->mElements;
    buf_11=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 33))))))));
    if(right_value13) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value14) { come_call_finalizer(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0); }
    if(string_operator_equals(type_name_9,"")) {
        buffer_append_str(buf_11,((char*)(right_value15=xsprintf("enum { ",type_name_9))));
        if(right_value15) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0); }
    }
    else {
        buffer_append_str(buf_11,((char*)(right_value16=xsprintf("enum %s { ",type_name_9))));
        if(right_value16) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0); }
    }
    i_12=0;
    for(
    it_14=list$1tuple2$2charphsNodephphp_begin((elements_10));
    !list$1tuple2$2charphsNodephphp_end((elements_10));
    it_14=list$1tuple2$2charphsNodephphp_next((elements_10))
    ){
        multiple_assgin_var1=it_14;
        name_16=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        value_17=(struct sNode*)come_increment_ref_count(multiple_assgin_var1->v2);
        if(value_17==((void*)0)) {
            buffer_append_str(buf_11,name_16);
        }
        else {
            if(!value_17->compile(value_17->_protocol_obj,info)) {
                _Bool __result21__ = (_Bool)0;
                if(name_16) { name_16 = come_decrement_ref_count(name_16, (void*)0, (void*)0, 0, 0); }
                if(value_17) { value_17 = come_decrement_ref_count(value_17, ((struct sNode*)value_17)->finalize, ((struct sNode*)value_17)->_protocol_obj, 0, 0); } 
                return __result21__;
            }
            right_value_18=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value17=get_value_from_stack(-1,info))));
            if(right_value17) { come_call_finalizer(CVALUE_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0); }
            dec_stack_ptr(1,info);
            add_variable_to_global_table_with_int_value(name_16,(struct sType*)come_increment_ref_count(((struct sType*)(right_value19=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value18=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 57)))),"int",info,(_Bool)0)))),right_value_18->c_value,info);
            if(right_value18) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value19) { come_call_finalizer(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0); }
            buffer_append_str(buf_11,((char*)(right_value20=xsprintf("%s=%s",name_16,right_value_18->c_value))));
            if(right_value20) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0); }
            if(right_value_18) { come_call_finalizer(CVALUE_finalize,right_value_18, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(i_12!=list$1tuple2$2charphsNodephphp_length(elements_10)-1) {
            buffer_append_str(buf_11,",");
        }
        i_12++;
        if(name_16) { name_16 = come_decrement_ref_count(name_16, (void*)0, (void*)0, 0, 0); }
        if(value_17) { value_17 = come_decrement_ref_count(value_17, ((struct sNode*)value_17)->finalize, ((struct sNode*)value_17)->_protocol_obj, 0, 0); } 
    }
    buffer_append_str(buf_11,((char*)(right_value21=xsprintf("};\n",type_name_9))));
    if(right_value21) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0); }
    add_come_code_at_source_head(info,"%s",((char*)(right_value22=buffer_to_string(buf_11))));
    if(right_value22) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0); }
    _Bool __result23__ = (_Bool)1;
    if(type_name_9) { type_name_9 = come_decrement_ref_count(type_name_9, (void*)0, (void*)0, 0, 0); }
    if(buf_11) { come_call_finalizer(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0); }
    return __result23__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* result_13;
memset(&result_13, 0, sizeof(struct tuple2$2charphsNodeph*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct tuple2$2charphsNodeph* __result16__ = self->it->item;
            return __result16__;
        }
        memset(&result_13,0,sizeof(struct tuple2$2charphsNodeph*));
        struct tuple2$2charphsNodeph* __result17__ = result_13;
        return __result17__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
        _Bool __result18__ = self->it==((void*)0);
        return __result18__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* result_15;
memset(&result_15, 0, sizeof(struct tuple2$2charphsNodeph*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct tuple2$2charphsNodeph* __result19__ = self->it->item;
            return __result19__;
        }
        memset(&result_15,0,sizeof(struct tuple2$2charphsNodeph*));
        struct tuple2$2charphsNodeph* __result20__ = result_15;
        return __result20__;
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
struct list_item$1sTypeph* it_19;
struct list_item$1sTypeph* prev_it_20;
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_20, 0, sizeof(struct list_item$1sTypeph*));
                                it_19=self->head;
                                while(it_19!=((void*)0)) {
                                    if(1) {
                                        if(it_19->item) { come_call_finalizer(sType_finalize,it_19->item, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    prev_it_20=it_19;
                                    it_19=it_19->next;
                                    come_free_object(prev_it_20);
                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_21;
struct list_item$1sNodeph* prev_it_22;
memset(&it_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_22, 0, sizeof(struct list_item$1sNodeph*));
                                it_21=self->head;
                                while(it_21!=((void*)0)) {
                                    if(1) {
                                        if(it_21->item) { it_21->item = come_decrement_ref_count(it_21->item, ((struct sNode*)it_21->item)->finalize, ((struct sNode*)it_21->item)->_protocol_obj, 0, 0); } 
                                    }
                                    prev_it_22=it_21;
                                    it_21=it_21->next;
                                    come_free_object(prev_it_22);
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_23;
struct list_item$1charph* prev_it_24;
memset(&it_23, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_24, 0, sizeof(struct list_item$1charph*));
                                it_23=self->head;
                                while(it_23!=((void*)0)) {
                                    if(1) {
                                        if(it_23->item) { it_23->item = come_decrement_ref_count(it_23->item, (void*)0, (void*)0, 0, 0); }
                                    }
                                    prev_it_24=it_23;
                                    it_23=it_23->next;
                                    come_free_object(prev_it_24);
                                }
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
            int __result22__ = self->len;
            return __result22__;
}

int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info){
    int __result24__ = self->sline;
    return __result24__;
}

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info){
void* right_value23;
memset(&right_value23, 0, sizeof(void*));
    char* __result25__ = ((char*)(right_value23=__builtin_string(self->sname)));
    return __result25__;
}

struct sNode* parse_enum(char* type_name, struct sInfo* info){
void* right_value30;
void* right_value31;
void* right_value32;
void* right_value33;
struct list$1tuple2$2charphsNodephph* elements_67;
void* right_value34;
char* element_name_68;
void* right_value35;
struct sNode* element_value_69;
void* right_value39;
void* right_value40;
void* right_value41;
void* right_value42;
void* right_value43;
void* right_value44;
struct sNode* _inf_value1;
struct sEnumNode* _inf_obj_value1;
void* right_value49;
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&elements_67, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value34, 0, sizeof(void*));
memset(&element_name_68, 0, sizeof(char*));
memset(&right_value35, 0, sizeof(void*));
memset(&element_value_69, 0, sizeof(struct sNode*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value31=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value30=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 87)))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1)))));
    if(right_value30) { come_call_finalizer(sClass_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value31) { come_call_finalizer(sClass_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0); }
    expected_next_character(123,info);
    elements_67=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value33=list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value32=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 91))))))));
    if(right_value33) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0); }
    while((_Bool)1) {
        element_name_68=(char*)come_increment_ref_count(((char*)(right_value34=parse_word(info))));
        if(right_value34) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0); }
        if(*info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            element_value_69=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value35=expression_v13(info))));
            if(right_value35) { right_value35 = come_decrement_ref_count(right_value35, ((struct sNode*)right_value35)->finalize, ((struct sNode*)right_value35)->_protocol_obj, 1, 0); } 
            list$1tuple2$2charphsNodephphp_push_back(elements_67,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value40=tuple2$2charphsNodephp_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value39=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 102)))),(char*)come_increment_ref_count(element_name_68),(struct sNode*)come_increment_ref_count(element_value_69))))));
            if(right_value40) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
        }
        else {
            list$1tuple2$2charphsNodephphp_push_back(elements_67,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value42=tuple2$2charphsNodephp_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value41=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 105)))),(char*)come_increment_ref_count(element_name_68),((void*)0))))));
            if(right_value42) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        if(element_name_68) { element_name_68 = come_decrement_ref_count(element_name_68, (void*)0, (void*)0, 0, 0); }
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 120);
    _inf_obj_value1=come_increment_ref_count(((struct sEnumNode*)(right_value44=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value43=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 120)))),(char*)come_increment_ref_count(type_name),elements_67,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sEnumNode_finalize;
    _inf_value1->clone=sEnumNode_clone;
    _inf_value1->compile=sEnumNode_compile;
    _inf_value1->sline=sEnumNode_sline;
    _inf_value1->sname=sEnumNode_sname;
    _inf_value1->terminated=sEnumNode_terminated;
    struct sNode* __result43__ = ((struct sNode*)(right_value49=_inf_value1));
    if(type_name) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1); }
    if(elements_67) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_67, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value43) { come_call_finalizer(sEnumNode_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value44) { come_call_finalizer(sEnumNode_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0); }
    return __result43__;
}

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
int hash_40;
int it_41;
_Bool same_key_exist_60;
char* it2_62;
memset(&hash_40, 0, sizeof(int));
memset(&it_41, 0, sizeof(int));
memset(&same_key_exist_60, 0, sizeof(_Bool));
memset(&it2_62, 0, sizeof(char*));
        if(self->len*10>=self->size) {
            map$2charphsClassphp_rehash(self);
        }
        hash_40=string_get_hash_key(key)%self->size;
        it_41=hash_40;
        while((_Bool)1) {
            if(self->item_existance[it_41]) {
                if(charp_equals(self->keys[it_41],key)) {
                    if(1) {
                        list$1charpp_remove(self->key_list,self->keys[it_41]);
                        if(self->keys[it_41]) { self->keys[it_41] = come_decrement_ref_count(self->keys[it_41], (void*)0, (void*)0, 0, 0); }
                        self->keys[it_41]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charpp_remove(self->key_list,self->keys[it_41]);
                        self->keys[it_41]=key;
                    }
                    if(1) {
                        if(self->items[it_41]) { come_call_finalizer(sClassp_finalize,self->items[it_41], (void*)0, (void*)0, 0, 0, 0); }
                        self->items[it_41]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_41]=item;
                    }
                    break;
                }
                it_41++;
                if(it_41>=self->size) {
                    it_41=0;
                }
                else if(it_41==hash_40) {
                    printf("unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_41]=(_Bool)1;
                if(1) {
                    self->keys[it_41]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_41]=key;
                }
                if(1) {
                    self->items[it_41]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_41]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_60=(_Bool)0;
        for(
        it2_62=list$1charpp_begin(self->key_list);
        !list$1charpp_end(self->key_list);
        it_41=list$1charpp_next(self->key_list)
        ){
            if(charp_equals(it2_62,key)) {
                same_key_exist_60=(_Bool)1;
            }
        }
        if(!same_key_exist_60) {
            list$1charpp_push_back(self->key_list,key);
        }
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
        if(item) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_25;
void* right_value24;
char** keys_26;
void* right_value25;
struct sClass** items_27;
void* right_value26;
_Bool* item_existance_28;
int len_29;
char* it_31;
struct sClass* default_value_33;
struct sClass* it2_36;
int hash_37;
int n_38;
struct sClass* default_value_39;
memset(&size_25, 0, sizeof(int));
memset(&right_value24, 0, sizeof(void*));
memset(&keys_26, 0, sizeof(char**));
memset(&right_value25, 0, sizeof(void*));
memset(&items_27, 0, sizeof(struct sClass**));
memset(&right_value26, 0, sizeof(void*));
memset(&item_existance_28, 0, sizeof(_Bool*));
memset(&len_29, 0, sizeof(int));
memset(&it_31, 0, sizeof(char*));
memset(&default_value_33, 0, sizeof(struct sClass*)); /* bbb */
memset(&it2_36, 0, sizeof(struct sClass*));
memset(&hash_37, 0, sizeof(int));
memset(&n_38, 0, sizeof(int));
memset(&default_value_39, 0, sizeof(struct sClass*)); /* bbb */
                size_25=self->size*10;
                keys_26=((char**)(right_value24=(char**)come_calloc(1, sizeof(char*)*(1*(size_25)), "16enum.c", 91)));
                items_27=((struct sClass**)(right_value25=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_25)), "16enum.c", 92)));
                item_existance_28=((_Bool*)(right_value26=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_25)), "16enum.c", 93)));
                len_29=0;
                for(
                it_31=map$2charphsClassphp_begin(self);
                !map$2charphsClassphp_end(self);
                it_31=map$2charphsClassphp_next(self)
                ){
                    it2_36=map$2charphsClassphp_at(self,it_31,default_value_33);
                    hash_37=charp_get_hash_key(it_31)%size_25;
                    n_38=hash_37;
                    while((_Bool)1) {
                        if(item_existance_28[n_38]) {
                            n_38++;
                            if(n_38>=size_25) {
                                n_38=0;
                            }
                            else if(n_38==hash_37) {
                                printf("unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_28[n_38]=(_Bool)1;
                            keys_26[n_38]=it_31;
                            items_27[n_38]=map$2charphsClassphp_at(self,it_31,default_value_39);
                            len_29++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_26;
                self->items=items_27;
                self->item_existance=item_existance_28;
                self->size=size_25;
                self->len=len_29;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
char* result_30;
memset(&result_30, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result26__ = self->key_list->it->item;
                        return __result26__;
                    }
                    memset(&result_30,0,sizeof(char*));
                    char* __result27__ = result_30;
                    return __result27__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
                    _Bool __result28__ = self->key_list->it==((void*)0);
                    return __result28__;
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
char* result_32;
memset(&result_32, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result29__ = self->key_list->it->item;
                        return __result29__;
                    }
                    memset(&result_32,0,sizeof(char*));
                    char* __result30__ = result_32;
                    return __result30__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_34;
int it_35;
memset(&hash_34, 0, sizeof(int));
memset(&it_35, 0, sizeof(int));
                        hash_34=string_get_hash_key(((char*)key))%self->size;
                        it_35=hash_34;
                        while((_Bool)1) {
                            if(self->item_existance[it_35]) {
                                if(charp_equals(self->keys[it_35],key)) {
                                    struct sClass* __result31__ = self->items[it_35];
                                    return __result31__;
                                }
                                it_35++;
                                if(it_35>=self->size) {
                                    it_35=0;
                                }
                                else if(it_35==hash_34) {
                                    struct sClass* __result32__ = default_value;
                                    return __result32__;
                                }
                            }
                            else {
                                struct sClass* __result33__ = default_value;
                                return __result33__;
                            }
                        }
                        struct sClass* __result34__ = default_value;
                        return __result34__;
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_42;
struct list_item$1charp* it_43;
memset(&it2_42, 0, sizeof(int));
memset(&it_43, 0, sizeof(struct list_item$1charp*));
                            it2_42=0;
                            it_43=self->head;
                            while(it_43!=((void*)0)) {
                                if(charp_equals(it_43->item,item)) {
                                    list$1charpp_delete(self,it2_42,it2_42+1);
                                    break;
                                }
                                it2_42++;
                                it_43=it_43->next;
                            }
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_44;
struct list_item$1charp* it_47;
int i_48;
struct list_item$1charp* prev_it_49;
struct list_item$1charp* it_50;
int i_51;
struct list_item$1charp* prev_it_52;
struct list_item$1charp* it_53;
struct list_item$1charp* head_prev_it_54;
struct list_item$1charp* tail_it_55;
int i_56;
struct list_item$1charp* prev_it_57;
memset(&tmp_44, 0, sizeof(int));
memset(&it_47, 0, sizeof(struct list_item$1charp*));
memset(&i_48, 0, sizeof(int));
memset(&prev_it_49, 0, sizeof(struct list_item$1charp*));
memset(&it_50, 0, sizeof(struct list_item$1charp*));
memset(&i_51, 0, sizeof(int));
memset(&prev_it_52, 0, sizeof(struct list_item$1charp*));
memset(&it_53, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_54, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_55, 0, sizeof(struct list_item$1charp*));
memset(&i_56, 0, sizeof(int));
memset(&prev_it_57, 0, sizeof(struct list_item$1charp*));
                                        if(head<0) {
                                            head+=self->len;
                                        }
                                        if(tail<0) {
                                            tail+=self->len+1;
                                        }
                                        if(head>tail) {
                                            tmp_44=tail;
                                            tail=head;
                                            head=tmp_44;
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
                                            it_47=self->head;
                                            i_48=0;
                                            while(it_47!=((void*)0)) {
                                                if(i_48<tail) {
                                                    prev_it_49=it_47;
                                                    it_47=it_47->next;
                                                    i_48++;
                                                    if(prev_it_49) { come_call_finalizer(list_item$1charpp_finalize,prev_it_49, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else if(i_48==tail) {
                                                    self->head=it_47;
                                                    self->head->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_47=it_47->next;
                                                    i_48++;
                                                }
                                            }
                                        }
                                        else if(tail==self->len) {
                                            it_50=self->head;
                                            i_51=0;
                                            while(it_50!=((void*)0)) {
                                                if(i_51==head) {
                                                    self->tail=it_50->prev;
                                                    self->tail->next=((void*)0);
                                                }
                                                if(i_51>=head) {
                                                    prev_it_52=it_50;
                                                    it_50=it_50->next;
                                                    i_51++;
                                                    if(prev_it_52) { come_call_finalizer(list_item$1charpp_finalize,prev_it_52, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_50=it_50->next;
                                                    i_51++;
                                                }
                                            }
                                        }
                                        else {
                                            it_53=self->head;
                                            head_prev_it_54=((void*)0);
                                            tail_it_55=((void*)0);
                                            i_56=0;
                                            while(it_53!=((void*)0)) {
                                                if(i_56==head) {
                                                    head_prev_it_54=it_53->prev;
                                                }
                                                if(i_56==tail) {
                                                    tail_it_55=it_53;
                                                }
                                                if(i_56>=head&&i_56<tail) {
                                                    prev_it_57=it_53;
                                                    it_53=it_53->next;
                                                    i_56++;
                                                    if(prev_it_57) { come_call_finalizer(list_item$1charpp_finalize,prev_it_57, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_53=it_53->next;
                                                    i_56++;
                                                }
                                            }
                                            if(head_prev_it_54!=((void*)0)) {
                                                head_prev_it_54->next=tail_it_55;
                                            }
                                            if(tail_it_55!=((void*)0)) {
                                                tail_it_55->prev=head_prev_it_54;
                                            }
                                        }
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_45;
struct list_item$1charp* prev_it_46;
memset(&it_45, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_46, 0, sizeof(struct list_item$1charp*));
                                                it_45=self->head;
                                                while(it_45!=((void*)0)) {
                                                    prev_it_46=it_45;
                                                    it_45=it_45->next;
                                                    if(prev_it_46) { come_call_finalizer(list_item$1charpp_finalize,prev_it_46, (void*)0, (void*)0, 0, 0, 0); }
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
struct list_item$1tuple2$2charphsTypephph* it_58;
struct list_item$1tuple2$2charphsTypephph* prev_it_59;
memset(&it_58, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                    it_58=self->head;
                                    while(it_58!=((void*)0)) {
                                        if(1) {
                                            if(it_58->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,it_58->item, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        prev_it_59=it_58;
                                        it_58=it_58->next;
                                        come_free_object(prev_it_59);
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
char* result_61;
memset(&result_61, 0, sizeof(char*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                char* __result35__ = self->it->item;
                return __result35__;
            }
            memset(&result_61,0,sizeof(char*));
            char* __result36__ = result_61;
            return __result36__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
            _Bool __result37__ = self->it==((void*)0);
            return __result37__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_63;
memset(&result_63, 0, sizeof(char*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                char* __result38__ = self->it->item;
                return __result38__;
            }
            memset(&result_63,0,sizeof(char*));
            char* __result39__ = result_63;
            return __result39__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value27;
struct list_item$1charp* litem_64;
void* right_value28;
struct list_item$1charp* litem_65;
void* right_value29;
struct list_item$1charp* litem_66;
memset(&right_value27, 0, sizeof(void*));
memset(&litem_64, 0, sizeof(struct list_item$1charp*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_65, 0, sizeof(struct list_item$1charp*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_66, 0, sizeof(struct list_item$1charp*));
                if(self->len==0) {
                    litem_64=((struct list_item$1charp*)(right_value27=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "16enum.c", 160)));
                    litem_64->prev=((void*)0);
                    litem_64->next=((void*)0);
                    litem_64->item=item;
                    self->tail=litem_64;
                    self->head=litem_64;
                }
                else if(self->len==1) {
                    litem_65=((struct list_item$1charp*)(right_value28=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "16enum.c", 170)));
                    litem_65->prev=self->head;
                    litem_65->next=((void*)0);
                    litem_65->item=item;
                    self->tail=litem_65;
                    self->head->next=litem_65;
                }
                else {
                    litem_66=((struct list_item$1charp*)(right_value29=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "16enum.c", 180)));
                    litem_66->prev=self->tail;
                    litem_66->next=((void*)0);
                    litem_66->item=item;
                    self->tail->next=litem_66;
                    self->tail=litem_66;
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

static void list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* right_value36;
struct list_item$1tuple2$2charphsNodephph* litem_70;
struct tuple2$2charphsNodeph* __dec_obj9;
void* right_value37;
struct list_item$1tuple2$2charphsNodephph* litem_71;
struct tuple2$2charphsNodeph* __dec_obj10;
void* right_value38;
struct list_item$1tuple2$2charphsNodephph* litem_72;
struct tuple2$2charphsNodeph* __dec_obj11;
memset(&right_value36, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(self->len==0) {
                    litem_70=((struct list_item$1tuple2$2charphsNodephph*)(right_value36=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "16enum.c", 104)));
                    litem_70->prev=((void*)0);
                    litem_70->next=((void*)0);
                    __dec_obj9=litem_70->item;
                    litem_70->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj9) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_70;
                    self->head=litem_70;
                }
                else if(self->len==1) {
                    litem_71=((struct list_item$1tuple2$2charphsNodephph*)(right_value37=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "16enum.c", 114)));
                    litem_71->prev=self->head;
                    litem_71->next=((void*)0);
                    __dec_obj10=litem_71->item;
                    litem_71->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj10) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_71;
                    self->head->next=litem_71;
                }
                else {
                    litem_72=((struct list_item$1tuple2$2charphsNodephph*)(right_value38=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "16enum.c", 124)));
                    litem_72->prev=self->tail;
                    litem_72->next=((void*)0);
                    __dec_obj11=litem_72->item;
                    litem_72->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj11) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail->next=litem_72;
                    self->tail=litem_72;
                }
                self->len++;
                if(item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
char* __dec_obj12;
struct sNode* __dec_obj13;
                __dec_obj12=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0); }
                __dec_obj13=self->v2;
                self->v2=(struct sNode*)come_increment_ref_count(v2);
                if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0); }
                struct tuple2$2charphsNodeph* __result40__ = self;
                if(self) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
                if(v2) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1); } 
                return __result40__;
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info){
char* type_name_74;
void* right_value50;
char* __dec_obj17;
void* right_value51;
char* __dec_obj18;
void* right_value52;
void* right_value53;
void* right_value54;
void* right_value55;
struct list$1tuple2$2charphsNodephph* elements_75;
void* right_value56;
char* element_name_76;
_Bool no_comma_77;
void* right_value57;
struct sNode* element_value_78;
void* right_value58;
void* right_value59;
void* right_value60;
void* right_value61;
void* right_value62;
void* right_value63;
struct sNode* _inf_value2;
struct sEnumNode* _inf_obj_value2;
void* right_value68;
void* right_value69;
void* right_value70;
memset(&type_name_74, 0, sizeof(char*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&elements_75, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value56, 0, sizeof(void*));
memset(&element_name_76, 0, sizeof(char*));
memset(&no_comma_77, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&element_value_78, 0, sizeof(struct sNode*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
    if(string_operator_equals(buf,"enum")) {
        type_name_74=((void*)0);
        if(*info->p==123) {
            __dec_obj17=type_name_74;
            type_name_74=(char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(""))));
            if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
            if(right_value50) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0); }
        }
        else {
            __dec_obj18=type_name_74;
            type_name_74=(char*)come_increment_ref_count(((char*)(right_value51=parse_word(info))));
            if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
            if(right_value51) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0); }
            map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_74),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value53=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value52=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 133)))),type_name_74,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1)))));
            if(right_value52) { come_call_finalizer(sClass_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value53) { come_call_finalizer(sClass_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0); }
        }
        expected_next_character(123,info);
        elements_75=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value55=list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value54=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 138))))))));
        if(right_value55) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
        while((_Bool)1) {
            element_name_76=(char*)come_increment_ref_count(((char*)(right_value56=parse_word(info))));
            if(right_value56) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0); }
            if(*info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_77=info->no_comma;
                info->no_comma=(_Bool)1;
                element_value_78=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value57=expression_v13(info))));
                if(right_value57) { right_value57 = come_decrement_ref_count(right_value57, ((struct sNode*)right_value57)->finalize, ((struct sNode*)right_value57)->_protocol_obj, 1, 0); } 
                info->no_comma=no_comma_77;
                list$1tuple2$2charphsNodephphp_push_back(elements_75,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value59=tuple2$2charphsNodephp_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value58=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 153)))),(char*)come_increment_ref_count(element_name_76),(struct sNode*)come_increment_ref_count(element_value_78))))));
                if(right_value59) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
                if(element_value_78) { element_value_78 = come_decrement_ref_count(element_value_78, ((struct sNode*)element_value_78)->finalize, ((struct sNode*)element_value_78)->_protocol_obj, 0, 0); } 
            }
            else {
                list$1tuple2$2charphsNodephphp_push_back(elements_75,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value61=tuple2$2charphsNodephp_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value60=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 156)))),(char*)come_increment_ref_count(element_name_76),((void*)0))))));
                if(right_value61) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            if(element_name_76) { element_name_76 = come_decrement_ref_count(element_name_76, (void*)0, (void*)0, 0, 0); }
        }
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 171);
        _inf_obj_value2=come_increment_ref_count(((struct sEnumNode*)(right_value63=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value62=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 171)))),(char*)come_increment_ref_count(type_name_74),elements_75,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=sEnumNode_finalize;
        _inf_value2->clone=sEnumNode_clone;
        _inf_value2->compile=sEnumNode_compile;
        _inf_value2->sline=sEnumNode_sline;
        _inf_value2->sname=sEnumNode_sname;
        _inf_value2->terminated=sEnumNode_terminated;
        struct sNode* __result46__ = ((struct sNode*)(right_value68=_inf_value2));
        if(type_name_74) { type_name_74 = come_decrement_ref_count(type_name_74, (void*)0, (void*)0, 0, 0); }
        if(elements_75) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,elements_75, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value62) { come_call_finalizer(sEnumNode_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value63) { come_call_finalizer(sEnumNode_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0); }
        return __result46__;
    }
    struct sNode* __result47__ = ((struct sNode*)(right_value70=top_level_v95((char*)come_increment_ref_count(((char*)(right_value69=__builtin_string(buf)))),head,head_sline,info)));
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1); }
    if(right_value69) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0); }
    return __result47__;
}

static void sEnumNode_finalize(struct sEnumNode* self){
            if(self!=((void*)0)&&self->mTypeName!=((void*)0)) {
                if(self->mTypeName) { self->mTypeName = come_decrement_ref_count(self->mTypeName, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mElements!=((void*)0)) {
                if(self->mElements) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self->mElements, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self){
void* right_value64;
struct sEnumNode* result_79;
void* right_value65;
char* __dec_obj19;
void* right_value66;
struct list$1tuple2$2charphsNodephph* __dec_obj20;
void* right_value67;
char* __dec_obj21;
memset(&right_value64, 0, sizeof(void*));
memset(&result_79, 0, sizeof(struct sEnumNode*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sEnumNode* __result44__ = (void*)0;
                return __result44__;
            }
            result_79=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value64=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 173))));
            if(right_value64) { come_call_finalizer(sEnumNode_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mTypeName!=((void*)0)) {
                __dec_obj19=result_79->mTypeName;
                result_79->mTypeName=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(self->mTypeName))));
                if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
                if(right_value65) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mElements!=((void*)0)) {
                __dec_obj20=result_79->mElements;
                result_79->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value66=list$1tuple2$2charphsNodephphp_clone(self->mElements))));
                if(__dec_obj20) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value66) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_79->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj21=result_79->sname;
                result_79->sname=(char*)come_increment_ref_count(((char*)(right_value67=string_clone(self->sname))));
                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0); }
            }
            struct sEnumNode* __result45__ = result_79;
            if(result_79) { come_call_finalizer(sEnumNode_finalize,result_79, (void*)0, (void*)0, 0, 0, 1); }
            return __result45__;
}

