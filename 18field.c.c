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
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sLoadFieldNode
{
    struct sNode* mLeft;
    char* mName;
    int sline;
    char* sname;
};
struct sStoreArrayNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    int sline;
    char* sname;
};
struct sLoadArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
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

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
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
static int list$1sTypephp_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index);
static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value);
static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, struct sInfo* info);

_Bool sNullCheckNode_terminated();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated();

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info);

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info);

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, struct sInfo* info);

_Bool sStoreArrayNode_terminated();

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int index);
static struct CVALUE* list$1CVALUEphp_item(struct list$1CVALUEph* self, int position, struct CVALUE* default_value);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info);

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info);

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, struct sInfo* info);

_Bool sLoadArrayNode_terminated();

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

static int list$1sNodephp_length(struct list$1sNodeph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static void list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail);
static void list$1sNodephp_reset(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info);

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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






_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
struct sClass* klass_0;
char* class_name_1;
void* right_value30;
struct sType* type2_26;
char* fun_name2_27;
struct sFun* operator_fun_28;
void* right_value31;
char* none_generics_name_29;
void* right_value32;
struct sType* obj_type_30;
void* right_value33;
char* __dec_obj19;
void* right_value34;
char* fun_name3_31;
struct sGenericsFun* generics_fun_34;
void* right_value35;
void* right_value36;
char* __dec_obj20;
int i_38;
void* right_value37;
char* new_fun_name_39;
void* right_value38;
char* __dec_obj21;
_Bool result_40;
void* right_value39;
struct CVALUE* come_value_41;
char* left_value2_42;
void* right_value40;
char* __dec_obj22;
void* right_value41;
char* __dec_obj23;
void* right_value42;
char* __dec_obj24;
char* middle_value2_46;
void* right_value43;
char* __dec_obj25;
void* right_value44;
char* __dec_obj26;
void* right_value45;
char* __dec_obj27;
char* right_value2_47;
void* right_value46;
char* __dec_obj28;
void* right_value47;
char* __dec_obj29;
void* right_value48;
char* __dec_obj30;
void* right_value49;
char* __dec_obj31;
void* right_value50;
struct sType* type_48;
void* right_value51;
char* __dec_obj32;
void* right_value52;
struct sType* __dec_obj33;
memset(&klass_0, 0, sizeof(struct sClass*));
memset(&class_name_1, 0, sizeof(char*));
memset(&right_value30, 0, sizeof(void*));
memset(&type2_26, 0, sizeof(struct sType*));
memset(&fun_name2_27, 0, sizeof(char*)); /* bbb */
memset(&operator_fun_28, 0, sizeof(struct sFun*));
memset(&right_value31, 0, sizeof(void*));
memset(&none_generics_name_29, 0, sizeof(char*));
memset(&right_value32, 0, sizeof(void*));
memset(&obj_type_30, 0, sizeof(struct sType*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&fun_name3_31, 0, sizeof(char*));
memset(&generics_fun_34, 0, sizeof(struct sGenericsFun*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&i_38, 0, sizeof(int)); /* bbb */
memset(&right_value37, 0, sizeof(void*));
memset(&new_fun_name_39, 0, sizeof(char*));
memset(&right_value38, 0, sizeof(void*));
memset(&result_40, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&come_value_41, 0, sizeof(struct CVALUE*));
memset(&left_value2_42, 0, sizeof(char*)); /* bbb */
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&middle_value2_46, 0, sizeof(char*)); /* bbb */
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value2_47, 0, sizeof(char*)); /* bbb */
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&type_48, 0, sizeof(struct sType*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
    klass_0=type->mClass;
    class_name_1=klass_0->mName;
    type2_26=(struct sType*)come_increment_ref_count(((struct sType*)(right_value30=sType_clone(type))));
    if(right_value30) { come_call_finalizer(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
    type2_26->mHeap=(_Bool)0;
    operator_fun_28=((void*)0);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(list$1sTypephp_length(type->mGenericsTypes)>0) {
        none_generics_name_29=(char*)come_increment_ref_count(((char*)(right_value31=get_none_generics_name(type->mClass->mName))));
        if(right_value31) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0); }
        obj_type_30=(struct sType*)come_increment_ref_count(((struct sType*)(right_value32=solve_generics(type,info->generics_type,info))));
        if(right_value32) { come_call_finalizer(sType_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj19=fun_name2_27;
        fun_name2_27=(char*)come_increment_ref_count(((char*)(right_value33=create_method_name(obj_type_30,(_Bool)0,fun_name,info))));
        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
        if(right_value33) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0); }
        fun_name3_31=(char*)come_increment_ref_count(((char*)(right_value34=xsprintf("%s_%s",none_generics_name_29,fun_name))));
        if(right_value34) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0); }
        generics_fun_34=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_31,((void*)0));
        if(generics_fun_34) {
            if(!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value35=__builtin_string(fun_name2_27)))),generics_fun_34,obj_type_30,info)) {
                _Bool __result27__ = (_Bool)0;
                if(none_generics_name_29) { none_generics_name_29 = come_decrement_ref_count(none_generics_name_29, (void*)0, (void*)0, 0, 0); }
                if(obj_type_30) { come_call_finalizer(sType_finalize,obj_type_30, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name3_31) { fun_name3_31 = come_decrement_ref_count(fun_name3_31, (void*)0, (void*)0, 0, 0); }
                return __result27__;
            }
            if(right_value35) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0); }
        }
        operator_fun_28=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_27);
    }
    else {
        __dec_obj20=fun_name2_27;
        fun_name2_27=(char*)come_increment_ref_count(((char*)(right_value36=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
        if(right_value36) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0); }
        for(
        i_38=128-1;
        i_38>=1;
        i_38--
        ){
            new_fun_name_39=(char*)come_increment_ref_count(((char*)(right_value37=xsprintf("%s_v%d",fun_name2_27,i_38))));
            if(right_value37) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0); }
            operator_fun_28=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_39);
            if(operator_fun_28) {
                __dec_obj21=fun_name2_27;
                fun_name2_27=(char*)come_increment_ref_count(((char*)(right_value38=__builtin_string(new_fun_name_39))));
                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                if(right_value38) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0); }
                break;
            }
            if(new_fun_name_39) { new_fun_name_39 = come_decrement_ref_count(new_fun_name_39, (void*)0, (void*)0, 0, 0); }
        }
        if(operator_fun_28==((void*)0)) {
            operator_fun_28=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_27);
        }
    }
    result_40=(_Bool)0;
    if(operator_fun_28&&(list$1sTypephp_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum))) {
        come_value_41=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value39=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 58))));
        if(right_value39) { come_call_finalizer(CVALUE_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0); }
        if(list$1sTypephp_operator_load_element(operator_fun_28->mParamTypes,0)->mHeap&&left_value->type->mHeap) {
            __dec_obj22=left_value->c_value;
            left_value->c_value=(char*)come_increment_ref_count(((char*)(right_value40=increment_ref_count_object(left_value->type,left_value->c_value,info))));
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
            if(right_value40) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0); }
            __dec_obj23=left_value2_42;
            left_value2_42=(char*)come_increment_ref_count(((char*)(right_value41=xsprintf("%s",left_value->c_value))));
            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
            if(right_value41) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0); }
        }
        else {
            __dec_obj24=left_value2_42;
            left_value2_42=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(left_value->c_value))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
            if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
        }
        if(list$1sTypephp_operator_load_element(operator_fun_28->mParamTypes,1)->mHeap&&middle_value->type->mHeap) {
            __dec_obj25=middle_value->c_value;
            middle_value->c_value=(char*)come_increment_ref_count(((char*)(right_value43=increment_ref_count_object(middle_value->type,middle_value->c_value,info))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
            if(right_value43) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0); }
            __dec_obj26=middle_value2_46;
            middle_value2_46=(char*)come_increment_ref_count(((char*)(right_value44=xsprintf("%s",middle_value->c_value))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
            if(right_value44) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0); }
        }
        else {
            __dec_obj27=middle_value2_46;
            middle_value2_46=(char*)come_increment_ref_count(((char*)(right_value45=string_clone(middle_value->c_value))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
            if(right_value45) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0); }
        }
        if(list$1sTypephp_operator_load_element(operator_fun_28->mParamTypes,2)->mHeap&&right_value->type->mHeap) {
            __dec_obj28=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value46=increment_ref_count_object(right_value->type,right_value->c_value,info))));
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
            if(right_value46) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0); }
            __dec_obj29=right_value2_47;
            right_value2_47=(char*)come_increment_ref_count(((char*)(right_value47=xsprintf("%s",right_value->c_value))));
            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
            if(right_value47) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0); }
        }
        else {
            __dec_obj30=right_value2_47;
            right_value2_47=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(right_value->c_value))));
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
            if(right_value48) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0); }
        }
        __dec_obj31=come_value_41->c_value;
        come_value_41->c_value=(char*)come_increment_ref_count(((char*)(right_value49=xsprintf("%s(%s,%s,%s)",fun_name2_27,left_value2_42,middle_value2_46,right_value2_47))));
        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
        if(right_value49) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0); }
        type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sType_clone(operator_fun_28->mResultType))));
        if(right_value50) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
        if(operator_fun_28->mResultType->mHeap) {
            __dec_obj32=come_value_41->c_value;
            come_value_41->c_value=(char*)come_increment_ref_count(((char*)(right_value51=append_object_to_right_values(come_value_41->c_value,(struct sType*)come_increment_ref_count(type_48),info))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
            if(right_value51) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0); }
        }
        __dec_obj33=come_value_41->type;
        come_value_41->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(type_48))));
        if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value52) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
        come_value_41->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_41->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_41));
        result_40=(_Bool)1;
        if(come_value_41) { come_call_finalizer(CVALUE_finalize,come_value_41, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value2_42) { left_value2_42 = come_decrement_ref_count(left_value2_42, (void*)0, (void*)0, 0, 0); }
        if(middle_value2_46) { middle_value2_46 = come_decrement_ref_count(middle_value2_46, (void*)0, (void*)0, 0, 0); }
        if(right_value2_47) { right_value2_47 = come_decrement_ref_count(right_value2_47, (void*)0, (void*)0, 0, 0); }
        if(type_48) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result36__ = result_40;
    if(type2_26) { come_call_finalizer(sType_finalize,type2_26, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_27) { fun_name2_27 = come_decrement_ref_count(fun_name2_27, (void*)0, (void*)0, 0, 0); }
    return __result36__;
}

static struct sType* sType_clone(struct sType* self){
void* right_value0;
struct sType* result_2;
void* right_value3;
struct tuple1$1sTypeph* __dec_obj2;
void* right_value4;
char* __dec_obj3;
void* right_value11;
struct list$1sTypeph* __dec_obj7;
void* right_value19;
struct list$1sNodeph* __dec_obj11;
void* right_value20;
struct list$1sTypeph* __dec_obj12;
void* right_value27;
struct list$1charph* __dec_obj16;
void* right_value28;
struct tuple1$1sTypeph* __dec_obj17;
void* right_value29;
char* __dec_obj18;
memset(&right_value0, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct sType*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sType* __result7__ = (void*)0;
            return __result7__;
        }
        result_2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value0=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "18field.c", 10))));
        if(right_value0) { come_call_finalizer(sType_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)) {
            result_2->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj2=result_2->mNoSolvedGenericsType;
            result_2->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value3=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj2) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value3) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj3=result_2->mGenericsName;
            result_2->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value4=string_clone(self->mGenericsName))));
            if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
            if(right_value4) { right_value4 = come_decrement_ref_count(right_value4, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj7=result_2->mGenericsTypes;
            result_2->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value11=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj7) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value11) { come_call_finalizer(list$1sTypephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj11=result_2->mArrayNum;
            result_2->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value19=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj11) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value19) { come_call_finalizer(list$1sNodephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_2->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj12=result_2->mParamTypes;
            result_2->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj12) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value20) { come_call_finalizer(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj16=result_2->mParamNames;
            result_2->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value27=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj16) { come_call_finalizer(list$1charphp_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value27) { come_call_finalizer(list$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj17=result_2->mResultType;
            result_2->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value28=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj17) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value28) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_2->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)) {
            result_2->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_2->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_2->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_2->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_2->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_2->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_2->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_2->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_2->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_2->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_2->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_2->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_2->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_2->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_2->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_2->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_2->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_2->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_2->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_2->mSizeNum=self->mSizeNum;
        }
        if(self!=((void*)0)) {
            result_2->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_2->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj18=result_2->mOriginalTypeName;
            result_2->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value29=string_clone(self->mOriginalTypeName))));
            if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
            if(right_value29) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_2->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_2->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_2->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_2->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_2->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_2->mComeMemCore=self->mComeMemCore;
        }
        if(self!=((void*)0)) {
            result_2->mInline=self->mInline;
        }
        struct sType* __result21__ = result_2;
        if(result_2) { come_call_finalizer(sType_finalize,result_2, (void*)0, (void*)0, 0, 0, 1); }
        return __result21__;
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
struct list_item$1sTypeph* it_3;
struct list_item$1sTypeph* prev_it_4;
memset(&it_3, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1sTypeph*));
                    it_3=self->head;
                    while(it_3!=((void*)0)) {
                        if(1) {
                            if(it_3->item) { come_call_finalizer(sType_finalize,it_3->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        prev_it_4=it_3;
                        it_3=it_3->next;
                        come_free_object(prev_it_4);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_5;
struct list_item$1sNodeph* prev_it_6;
memset(&it_5, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1sNodeph*));
                    it_5=self->head;
                    while(it_5!=((void*)0)) {
                        if(1) {
                            if(it_5->item) { it_5->item = come_decrement_ref_count(it_5->item, ((struct sNode*)it_5->item)->finalize, ((struct sNode*)it_5->item)->_protocol_obj, 0, 0); } 
                        }
                        prev_it_6=it_5;
                        it_5=it_5->next;
                        come_free_object(prev_it_6);
                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_7;
struct list_item$1charph* prev_it_8;
memset(&it_7, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1charph*));
                    it_7=self->head;
                    while(it_7!=((void*)0)) {
                        if(1) {
                            if(it_7->item) { it_7->item = come_decrement_ref_count(it_7->item, (void*)0, (void*)0, 0, 0); }
                        }
                        prev_it_8=it_7;
                        it_7=it_7->next;
                        come_free_object(prev_it_8);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value1;
struct tuple1$1sTypeph* result_9;
void* right_value2;
struct sType* __dec_obj1;
memset(&right_value1, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value2, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple1$1sTypeph* __result8__ = (void*)0;
                    return __result8__;
                }
                result_9=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value1=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "18field.c", 14))));
                if(right_value1) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj1=result_9->v1;
                    result_9->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value2=sType_clone(self->v1))));
                    if(__dec_obj1) { come_call_finalizer(sType_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value2) { come_call_finalizer(sType_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0); }
                }
                struct tuple1$1sTypeph* __result9__ = result_9;
                if(result_9) { come_call_finalizer(tuple1$1sTypephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1); }
                return __result9__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value5;
void* right_value6;
struct list$1sTypeph* result_10;
struct list_item$1sTypeph* it_11;
void* right_value10;
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value10, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sTypeph* __result10__ = ((void*)0);
                    return __result10__;
                }
                result_10=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value6=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value5=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "18field.c", 18))))))));
                if(right_value6) { come_call_finalizer(list$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
                it_11=self->head;
                while(it_11!=((void*)0)) {
                    list$1sTypephp_push_back2(result_10,(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=sType_clone(it_11->item)))));
                    if(right_value10) { come_call_finalizer(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0); }
                    it_11=it_11->next;
                }
                struct list$1sTypeph* __result12__ = result_10;
                if(result_10) { come_call_finalizer(list$1sTypephp_finalize,result_10, (void*)0, (void*)0, 0, 0, 1); }
                return __result12__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sTypeph* __result11__ = self;
                    if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result11__;
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value7;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj4;
void* right_value8;
struct list_item$1sTypeph* litem_13;
struct sType* __dec_obj5;
void* right_value9;
struct list_item$1sTypeph* litem_14;
struct sType* __dec_obj6;
memset(&right_value7, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value8, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value9, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_12=((struct list_item$1sTypeph*)(right_value7=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "18field.c", 24)));
                            litem_12->prev=((void*)0);
                            litem_12->next=((void*)0);
                            __dec_obj4=litem_12->item;
                            litem_12->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_12;
                            self->head=litem_12;
                        }
                        else if(self->len==1) {
                            litem_13=((struct list_item$1sTypeph*)(right_value8=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "18field.c", 34)));
                            litem_13->prev=self->head;
                            litem_13->next=((void*)0);
                            __dec_obj5=litem_13->item;
                            litem_13->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_13;
                            self->head->next=litem_13;
                        }
                        else {
                            litem_14=((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "18field.c", 44)));
                            litem_14->prev=self->tail;
                            litem_14->next=((void*)0);
                            __dec_obj6=litem_14->item;
                            litem_14->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail->next=litem_14;
                            self->tail=litem_14;
                        }
                        self->len++;
                        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value12;
void* right_value13;
struct list$1sNodeph* result_15;
struct list_item$1sNodeph* it_16;
void* right_value18;
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct list$1sNodeph*));
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sNodeph* __result13__ = ((void*)0);
                    return __result13__;
                }
                result_15=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value13=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value12=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 19))))))));
                if(right_value13) { come_call_finalizer(list$1sNodephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
                it_16=self->head;
                while(it_16!=((void*)0)) {
                    list$1sNodephp_push_back2(result_15,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value18=sNodep_clone(it_16->item)))));
                    if(right_value18) { right_value18 = come_decrement_ref_count(right_value18, ((struct sNode*)right_value18)->finalize, ((struct sNode*)right_value18)->_protocol_obj, 1, 0); } 
                    it_16=it_16->next;
                }
                struct list$1sNodeph* __result17__ = result_15;
                if(result_15) { come_call_finalizer(list$1sNodephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1); }
                return __result17__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sNodeph* __result14__ = self;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result14__;
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value14;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj8;
void* right_value15;
struct list_item$1sNodeph* litem_18;
struct sNode* __dec_obj9;
void* right_value16;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj10;
memset(&right_value14, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value15, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_17=((struct list_item$1sNodeph*)(right_value14=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "18field.c", 25)));
                            litem_17->prev=((void*)0);
                            litem_17->next=((void*)0);
                            __dec_obj8=litem_17->item;
                            litem_17->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0); }
                            self->tail=litem_17;
                            self->head=litem_17;
                        }
                        else if(self->len==1) {
                            litem_18=((struct list_item$1sNodeph*)(right_value15=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "18field.c", 35)));
                            litem_18->prev=self->head;
                            litem_18->next=((void*)0);
                            __dec_obj9=litem_18->item;
                            litem_18->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0); }
                            self->tail=litem_18;
                            self->head->next=litem_18;
                        }
                        else {
                            litem_19=((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "18field.c", 45)));
                            litem_19->prev=self->tail;
                            litem_19->next=((void*)0);
                            __dec_obj10=litem_19->item;
                            litem_19->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0); }
                            self->tail->next=litem_19;
                            self->tail=litem_19;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value17;
struct sNode* result_20;
memset(&right_value17, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            struct sNode* __result15__ = (void*)0;
                            return __result15__;
                        }
                        result_20=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "18field.c", 25))));
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
                        struct sNode* __result16__ = result_20;
                        return __result16__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value21;
void* right_value22;
struct list$1charph* result_21;
struct list_item$1charph* it_22;
void* right_value26;
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct list$1charph*));
memset(&it_22, 0, sizeof(struct list_item$1charph*));
memset(&right_value26, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1charph* __result18__ = ((void*)0);
                    return __result18__;
                }
                result_21=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value22=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value21=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "18field.c", 22))))))));
                if(right_value22) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
                it_22=self->head;
                while(it_22!=((void*)0)) {
                    list$1charphp_push_back2(result_21,(char*)come_increment_ref_count(((char*)(right_value26=string_clone(it_22->item)))));
                    if(right_value26) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0); }
                    it_22=it_22->next;
                }
                struct list$1charph* __result20__ = result_21;
                if(result_21) { come_call_finalizer(list$1charphp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1); }
                return __result20__;
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1charph* __result19__ = self;
                    if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result19__;
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value23;
struct list_item$1charph* litem_23;
char* __dec_obj13;
void* right_value24;
struct list_item$1charph* litem_24;
char* __dec_obj14;
void* right_value25;
struct list_item$1charph* litem_25;
char* __dec_obj15;
memset(&right_value23, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1charph*));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_23=((struct list_item$1charph*)(right_value23=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "18field.c", 28)));
                            litem_23->prev=((void*)0);
                            litem_23->next=((void*)0);
                            __dec_obj13=litem_23->item;
                            litem_23->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_23;
                            self->head=litem_23;
                        }
                        else if(self->len==1) {
                            litem_24=((struct list_item$1charph*)(right_value24=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "18field.c", 38)));
                            litem_24->prev=self->head;
                            litem_24->next=((void*)0);
                            __dec_obj14=litem_24->item;
                            litem_24->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_24;
                            self->head->next=litem_24;
                        }
                        else {
                            litem_25=((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "18field.c", 48)));
                            litem_25->prev=self->tail;
                            litem_25->next=((void*)0);
                            __dec_obj15=litem_25->item;
                            litem_25->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
                            self->tail->next=litem_25;
                            self->tail=litem_25;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
        int __result22__ = self->len;
        return __result22__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
int hash_32;
int it_33;
memset(&hash_32, 0, sizeof(int));
memset(&it_33, 0, sizeof(int));
            hash_32=string_get_hash_key(((char*)key))%self->size;
            it_33=hash_32;
            while((_Bool)1) {
                if(self->item_existance[it_33]) {
                    if(charp_equals(self->keys[it_33],key)) {
                        struct sGenericsFun* __result23__ = self->items[it_33];
                        return __result23__;
                    }
                    it_33++;
                    if(it_33>=self->size) {
                        it_33=0;
                    }
                    else if(it_33==hash_32) {
                        struct sGenericsFun* __result24__ = default_value;
                        return __result24__;
                    }
                }
                else {
                    struct sGenericsFun* __result25__ = default_value;
                    return __result25__;
                }
            }
            struct sGenericsFun* __result26__ = default_value;
            return __result26__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
struct sFun* default_value_35;
memset(&default_value_35, 0, sizeof(struct sFun*)); /* bbb */
            memset(&default_value_35,0,sizeof(struct sFun*));
            struct sFun* __result32__ = map$2charphsFunphp_at(self,key,default_value_35);
            return __result32__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_36;
int it_37;
memset(&hash_36, 0, sizeof(int));
memset(&it_37, 0, sizeof(int));
                hash_36=string_get_hash_key(((char*)key))%self->size;
                it_37=hash_36;
                while((_Bool)1) {
                    if(self->item_existance[it_37]) {
                        if(charp_equals(self->keys[it_37],key)) {
                            struct sFun* __result28__ = self->items[it_37];
                            return __result28__;
                        }
                        it_37++;
                        if(it_37>=self->size) {
                            it_37=0;
                        }
                        else if(it_37==hash_36) {
                            struct sFun* __result29__ = default_value;
                            return __result29__;
                        }
                    }
                    else {
                        struct sFun* __result30__ = default_value;
                        return __result30__;
                    }
                }
                struct sFun* __result31__ = default_value;
                return __result31__;
}

static void CVALUE_finalize(struct CVALUE* self){
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_43;
memset(&default_value_43, 0, sizeof(struct sType*)); /* bbb */
            memset(&default_value_43,0,sizeof(struct sType*));
            struct sType* __result35__ = list$1sTypephp_item(self,index,default_value_43);
            return __result35__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_44;
int i_45;
memset(&it_44, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_45, 0, sizeof(int));
                if(position<0) {
                    position+=self->len;
                }
                it_44=self->head;
                i_45=0;
                while(it_44!=((void*)0)) {
                    if(position==i_45) {
                        struct sType* __result33__ = it_44->item;
                        return __result33__;
                    }
                    it_44=it_44->next;
                    i_45++;
                }
                struct sType* __result34__ = default_value;
                return __result34__;
}

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* right_value53;
struct list_item$1CVALUEph* litem_49;
struct CVALUE* __dec_obj34;
void* right_value54;
struct list_item$1CVALUEph* litem_50;
struct CVALUE* __dec_obj35;
void* right_value55;
struct list_item$1CVALUEph* litem_51;
struct CVALUE* __dec_obj36;
memset(&right_value53, 0, sizeof(void*));
memset(&litem_49, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_50, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value55, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1CVALUEph*));
            if(self->len==0) {
                litem_49=((struct list_item$1CVALUEph*)(right_value53=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "18field.c", 99)));
                litem_49->prev=((void*)0);
                litem_49->next=((void*)0);
                __dec_obj34=litem_49->item;
                litem_49->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj34) { come_call_finalizer(CVALUE_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_49;
                self->head=litem_49;
            }
            else if(self->len==1) {
                litem_50=((struct list_item$1CVALUEph*)(right_value54=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "18field.c", 109)));
                litem_50->prev=self->head;
                litem_50->next=((void*)0);
                __dec_obj35=litem_50->item;
                litem_50->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj35) { come_call_finalizer(CVALUE_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_50;
                self->head->next=litem_50;
            }
            else {
                litem_51=((struct list_item$1CVALUEph*)(right_value55=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "18field.c", 119)));
                litem_51->prev=self->tail;
                litem_51->next=((void*)0);
                __dec_obj36=litem_51->item;
                litem_51->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj36) { come_call_finalizer(CVALUE_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0); }
                self->tail->next=litem_51;
                self->tail=litem_51;
            }
            self->len++;
            if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* right_value56;
char* __dec_obj37;
void* right_value57;
struct sNode* __dec_obj38;
void* right_value58;
struct sNode* __dec_obj39;
void* right_value59;
char* __dec_obj40;
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj37=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value56=__builtin_string(info->sname))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
    if(right_value56) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0); }
    __dec_obj38=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value57=sNodep_clone(left))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0); }
    if(right_value57) { right_value57 = come_decrement_ref_count(right_value57, ((struct sNode*)right_value57)->finalize, ((struct sNode*)right_value57)->_protocol_obj, 1, 0); } 
    __dec_obj39=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value58=sNodep_clone(right))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0); }
    if(right_value58) { right_value58 = come_decrement_ref_count(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0); } 
    __dec_obj40=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value59=__builtin_string(name))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
    if(right_value59) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0); }
    struct sStoreFieldNode* __result37__ = self;
    if(self) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    return __result37__;
}

_Bool sStoreFieldNode_terminated(){
    _Bool __result38__ = (_Bool)0;
    return __result38__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_52;
struct sNode* right_53;
void* right_value60;
char* name_54;
void* right_value61;
struct CVALUE* left_value_55;
void* right_value62;
struct CVALUE* right_value_56;
struct sType* right_type_57;
struct sType* left_type_58;
void* right_value63;
struct sType* left_type2_59;
struct sClass* klass_60;
struct sType* field_type_64;
int index_65;
char* child_field_name_66;
struct tuple2$2charphsTypeph* field_68;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_70;
struct sType* field_type2_71;
void* right_value64;
struct sType* __dec_obj41;
void* right_value65;
struct CVALUE* come_value_72;
void* right_value66;
char* c_value_73;
void* right_value67;
char* __dec_obj42;
void* right_value68;
void* right_value69;
char* __dec_obj43;
void* right_value70;
char* __dec_obj44;
void* right_value71;
char* c_value_74;
void* right_value72;
char* __dec_obj45;
void* right_value73;
void* right_value74;
char* __dec_obj46;
void* right_value75;
char* __dec_obj47;
void* right_value76;
char* c_value_75;
void* right_value77;
char* __dec_obj48;
void* right_value78;
void* right_value79;
char* __dec_obj49;
void* right_value80;
char* __dec_obj50;
void* right_value81;
char* c_value_76;
void* right_value82;
char* __dec_obj51;
void* right_value83;
void* right_value84;
char* __dec_obj52;
void* right_value85;
char* __dec_obj53;
int right_value_id_77;
void* right_value86;
void* right_value87;
char* __dec_obj54;
void* right_value88;
char* __dec_obj55;
void* right_value89;
void* right_value90;
char* __dec_obj56;
void* right_value91;
char* __dec_obj57;
void* right_value92;
void* right_value93;
char* __dec_obj58;
void* right_value94;
char* __dec_obj59;
void* right_value95;
void* right_value96;
char* __dec_obj60;
void* right_value97;
char* __dec_obj61;
void* right_value98;
struct sType* __dec_obj62;
memset(&left_52, 0, sizeof(struct sNode*));
memset(&right_53, 0, sizeof(struct sNode*));
memset(&right_value60, 0, sizeof(void*));
memset(&name_54, 0, sizeof(char*));
memset(&right_value61, 0, sizeof(void*));
memset(&left_value_55, 0, sizeof(struct CVALUE*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value_56, 0, sizeof(struct CVALUE*));
memset(&right_type_57, 0, sizeof(struct sType*));
memset(&left_type_58, 0, sizeof(struct sType*));
memset(&right_value63, 0, sizeof(void*));
memset(&left_type2_59, 0, sizeof(struct sType*));
memset(&klass_60, 0, sizeof(struct sClass*));
memset(&field_type_64, 0, sizeof(struct sType*));
memset(&index_65, 0, sizeof(int));
memset(&child_field_name_66, 0, sizeof(char*));
memset(&field_68, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_70, 0, sizeof(char*)); /* ccc */
memset(&field_type2_71, 0, sizeof(struct sType*)); /* ccc */
memset(&field_name_70, 0, sizeof(char*)); /* eee */
memset(&field_type2_71, 0, sizeof(struct sType*)); /* eee */
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&come_value_72, 0, sizeof(struct CVALUE*));
memset(&right_value66, 0, sizeof(void*));
memset(&c_value_73, 0, sizeof(char*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&c_value_74, 0, sizeof(char*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&c_value_75, 0, sizeof(char*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&c_value_76, 0, sizeof(char*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value_id_77, 0, sizeof(int));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
    left_52=self->mLeft;
    right_53=self->mRight;
    name_54=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(self->mName))));
    if(right_value60) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0); }
    if(!left_52->compile(left_52->_protocol_obj,info)) {
        _Bool __result39__ = (_Bool)0;
        return __result39__;
    }
    left_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value61=get_value_from_stack(-1,info))));
    if(right_value61) { come_call_finalizer(CVALUE_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    if(!right_53->compile(right_53->_protocol_obj,info)) {
        _Bool __result40__ = (_Bool)0;
        return __result40__;
    }
    right_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value62=get_value_from_stack(-1,info))));
    if(right_value62) { come_call_finalizer(CVALUE_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_type_57=right_value_56->type;
    left_type_58=left_value_55->type;
    left_type2_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=solve_generics(left_type_58,left_type_58,info))));
    if(right_value63) { come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0); }
    klass_60=left_type2_59->mClass;
    klass_60=map$2charphsClassphp_operator_load_element(info->classes,klass_60->mName);
    field_type_64=((void*)0);
    index_65=0;
    child_field_name_66=((void*)0);
    klass_60=map$2charphsClassphp_operator_load_element(info->classes,klass_60->mName);
    for(
    field_68=list$1tuple2$2charphsTypephphp_begin((klass_60->mFields));
    !list$1tuple2$2charphsTypephphp_end((klass_60->mFields));
    field_68=list$1tuple2$2charphsTypephphp_next((klass_60->mFields))
    ){
        multiple_assgin_var1=field_68;
        field_name_70=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type2_71=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        if(string_operator_equals(field_name_70,name_54)) {
            __dec_obj41=field_type_64;
            field_type_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(field_type2_71))));
            if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value64) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
            break;
        }
        index_65++;
        if(field_name_70) { field_name_70 = come_decrement_ref_count(field_name_70, (void*)0, (void*)0, 0, 0); }
        if(field_type2_71) { come_call_finalizer(sType_finalize,field_type2_71, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(index_65==list$1tuple2$2charphsTypephphp_length(klass_60->mFields)) {
        err_msg(info,"field not found(%s) in %s(1)",name_54,klass_60->mName);
        _Bool __result52__ = (_Bool)0;
        return __result52__;
    }
    come_value_72=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value65=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 181))));
    if(right_value65) { come_call_finalizer(CVALUE_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0); }
    if(field_type_64->mHeap&&!right_type_57->mHeap) {
        if(string_operator_equals(right_type_57->mClass->mName,"void")&&right_type_57->mPointerNum==1) {
        }
        else {
            err_msg(info,"require right value as heap object(%s)",name_54);
            _Bool __result53__ = (_Bool)0;
            return __result53__;
        }
    }
    if(field_type_64->mHeap&&right_type_57->mHeap&&field_type_64->mPointerNum>0&&right_type_57->mPointerNum>0) {
        if(left_value_55->type->mPointerNum==1) {
            if(child_field_name_66) {
                c_value_73=(char*)come_increment_ref_count(((char*)(right_value66=xsprintf("%s->%s.%s",left_value_55->c_value,child_field_name_66,name_54))));
                if(right_value66) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0); }
                decrement_ref_count_object(field_type_64,c_value_73,info);
                __dec_obj42=right_value_56->c_value;
                right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value67=increment_ref_count_object(right_value_56->type,right_value_56->c_value,info))));
                if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
                if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0); }
                if(right_value_56->type->mOriginalTypeName=="any") {
                    __dec_obj43=right_value_56->c_value;
                    right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value69=xsprintf("(%s)%s",((char*)(right_value68=make_type_name_string(field_type_64,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_56->c_value))));
                    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
                    if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
                    if(right_value69) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0); }
                }
                __dec_obj44=come_value_72->c_value;
                come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("%s->%s.%s=%s",left_value_55->c_value,child_field_name_66,name_54,right_value_56->c_value))));
                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
                if(right_value70) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0); }
                if(c_value_73) { c_value_73 = come_decrement_ref_count(c_value_73, (void*)0, (void*)0, 0, 0); }
            }
            else {
                c_value_74=(char*)come_increment_ref_count(((char*)(right_value71=xsprintf("%s->%s",left_value_55->c_value,name_54))));
                if(right_value71) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0); }
                decrement_ref_count_object(field_type_64,c_value_74,info);
                __dec_obj45=right_value_56->c_value;
                right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value72=increment_ref_count_object(right_value_56->type,right_value_56->c_value,info))));
                if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
                if(right_value72) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0); }
                if(right_value_56->type->mOriginalTypeName=="any") {
                    __dec_obj46=right_value_56->c_value;
                    right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value74=xsprintf("(%s)%s",((char*)(right_value73=make_type_name_string(field_type_64,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_56->c_value))));
                    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
                    if(right_value73) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0); }
                    if(right_value74) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0); }
                }
                __dec_obj47=come_value_72->c_value;
                come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value75=xsprintf("%s->%s=%s",left_value_55->c_value,name_54,right_value_56->c_value))));
                if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
                if(right_value75) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0); }
                if(c_value_74) { c_value_74 = come_decrement_ref_count(c_value_74, (void*)0, (void*)0, 0, 0); }
            }
        }
        else if(left_value_55->type->mPointerNum==0) {
            if(child_field_name_66) {
                c_value_75=(char*)come_increment_ref_count(((char*)(right_value76=xsprintf("%s.%s.%s",left_value_55->c_value,child_field_name_66,name_54))));
                if(right_value76) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0); }
                decrement_ref_count_object(field_type_64,c_value_75,info);
                __dec_obj48=right_value_56->c_value;
                right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value77=increment_ref_count_object(right_value_56->type,right_value_56->c_value,info))));
                if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
                if(right_value77) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0); }
                if(right_value_56->type->mOriginalTypeName=="any") {
                    __dec_obj49=right_value_56->c_value;
                    right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value79=xsprintf("(%s)%s",((char*)(right_value78=make_type_name_string(field_type_64,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_56->c_value))));
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
                    if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0); }
                    if(right_value79) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0); }
                }
                __dec_obj50=come_value_72->c_value;
                come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s.%s.%s=%s",left_value_55->c_value,child_field_name_66,name_54,right_value_56->c_value))));
                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
                if(right_value80) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0); }
                if(c_value_75) { c_value_75 = come_decrement_ref_count(c_value_75, (void*)0, (void*)0, 0, 0); }
            }
            else {
                c_value_76=(char*)come_increment_ref_count(((char*)(right_value81=xsprintf("%s.%s",left_value_55->c_value,name_54))));
                if(right_value81) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0); }
                decrement_ref_count_object(field_type_64,c_value_76,info);
                __dec_obj51=right_value_56->c_value;
                right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value82=increment_ref_count_object(right_value_56->type,right_value_56->c_value,info))));
                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
                if(right_value82) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0); }
                if(right_value_56->type->mOriginalTypeName=="any") {
                    __dec_obj52=right_value_56->c_value;
                    right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value84=xsprintf("(%s)%s",((char*)(right_value83=make_type_name_string(field_type_64,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_56->c_value))));
                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                    if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
                    if(right_value84) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0); }
                }
                __dec_obj53=come_value_72->c_value;
                come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%s.%s=%s",left_value_55->c_value,name_54,right_value_56->c_value))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
                if(right_value85) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0); }
                if(c_value_76) { c_value_76 = come_decrement_ref_count(c_value_76, (void*)0, (void*)0, 0, 0); }
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_54,left_value_55->type->mPointerNum);
            _Bool __result54__ = (_Bool)0;
            return __result54__;
        }
        right_value_id_77=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_56->c_value));
        if(right_value_id_77!=-1) {
            remove_object_from_right_values(right_value_id_77,info);
        }
    }
    else {
        if(left_value_55->type->mPointerNum==1) {
            if(child_field_name_66) {
                if(right_value_56->type->mOriginalTypeName=="any") {
                    __dec_obj54=right_value_56->c_value;
                    right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value87=xsprintf("(%s)%s",((char*)(right_value86=make_type_name_string(field_type_64,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_56->c_value))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
                    if(right_value86) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0); }
                    if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0); }
                }
                __dec_obj55=come_value_72->c_value;
                come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s->%s.%s=%s",left_value_55->c_value,child_field_name_66,name_54,right_value_56->c_value))));
                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
                if(right_value88) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0); }
            }
            else {
                if(right_value_56->type->mOriginalTypeName=="any") {
                    __dec_obj56=right_value_56->c_value;
                    right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("(%s)%s",((char*)(right_value89=make_type_name_string(field_type_64,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_56->c_value))));
                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
                    if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
                    if(right_value90) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0); }
                }
                __dec_obj57=come_value_72->c_value;
                come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value91=xsprintf("%s->%s=%s",left_value_55->c_value,name_54,right_value_56->c_value))));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
                if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
            }
        }
        else if(left_value_55->type->mPointerNum==0) {
            if(child_field_name_66) {
                if(right_value_56->type->mOriginalTypeName=="any") {
                    __dec_obj58=right_value_56->c_value;
                    right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("(%s)%s",((char*)(right_value92=make_type_name_string(field_type_64,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_56->c_value))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
                    if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
                    if(right_value93) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0); }
                }
                __dec_obj59=come_value_72->c_value;
                come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value94=xsprintf("%s.%s.%s=%s",left_value_55->c_value,child_field_name_66,name_54,right_value_56->c_value))));
                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
                if(right_value94) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0); }
            }
            else {
                if(right_value_56->type->mOriginalTypeName=="any") {
                    __dec_obj60=right_value_56->c_value;
                    right_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value96=xsprintf("(%s)%s",((char*)(right_value95=make_type_name_string(field_type_64,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_56->c_value))));
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
                    if(right_value95) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0); }
                    if(right_value96) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0); }
                }
                __dec_obj61=come_value_72->c_value;
                come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value97=xsprintf("%s.%s=%s",left_value_55->c_value,name_54,right_value_56->c_value))));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
                if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0); }
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_54,left_value_55->type->mPointerNum);
            _Bool __result55__ = (_Bool)0;
            return __result55__;
        }
    }
    __dec_obj62=come_value_72->type;
    come_value_72->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(field_type_64))));
    if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value98) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0); }
    come_value_72->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_72));
    add_come_last_code(info,"%s;\n",come_value_72->c_value);
    _Bool __result56__ = (_Bool)1;
    if(name_54) { name_54 = come_decrement_ref_count(name_54, (void*)0, (void*)0, 0, 0); }
    if(left_value_55) { come_call_finalizer(CVALUE_finalize,left_value_55, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_56) { come_call_finalizer(CVALUE_finalize,right_value_56, (void*)0, (void*)0, 0, 0, 0); }
    if(left_type2_59) { come_call_finalizer(sType_finalize,left_type2_59, (void*)0, (void*)0, 0, 0, 0); }
    if(field_type_64) { come_call_finalizer(sType_finalize,field_type_64, (void*)0, (void*)0, 0, 0, 0); }
    if(child_field_name_66) { child_field_name_66 = come_decrement_ref_count(child_field_name_66, (void*)0, (void*)0, 0, 0); }
    if(come_value_72) { come_call_finalizer(CVALUE_finalize,come_value_72, (void*)0, (void*)0, 0, 0, 0); }
    return __result56__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
struct sClass* default_value_61;
memset(&default_value_61, 0, sizeof(struct sClass*)); /* bbb */
        memset(&default_value_61,0,sizeof(struct sClass*));
        struct sClass* __result45__ = map$2charphsClassphp_at(self,key,default_value_61);
        return __result45__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_62;
int it_63;
memset(&hash_62, 0, sizeof(int));
memset(&it_63, 0, sizeof(int));
            hash_62=string_get_hash_key(((char*)key))%self->size;
            it_63=hash_62;
            while((_Bool)1) {
                if(self->item_existance[it_63]) {
                    if(charp_equals(self->keys[it_63],key)) {
                        struct sClass* __result41__ = self->items[it_63];
                        return __result41__;
                    }
                    it_63++;
                    if(it_63>=self->size) {
                        it_63=0;
                    }
                    else if(it_63==hash_62) {
                        struct sClass* __result42__ = default_value;
                        return __result42__;
                    }
                }
                else {
                    struct sClass* __result43__ = default_value;
                    return __result43__;
                }
            }
            struct sClass* __result44__ = default_value;
            return __result44__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_67;
memset(&result_67, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct tuple2$2charphsTypeph* __result46__ = self->it->item;
            return __result46__;
        }
        memset(&result_67,0,sizeof(struct tuple2$2charphsTypeph*));
        struct tuple2$2charphsTypeph* __result47__ = result_67;
        return __result47__;
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
        _Bool __result48__ = self->it==((void*)0);
        return __result48__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_69;
memset(&result_69, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct tuple2$2charphsTypeph* __result49__ = self->it->item;
            return __result49__;
        }
        memset(&result_69,0,sizeof(struct tuple2$2charphsTypeph*));
        struct tuple2$2charphsTypeph* __result50__ = result_69;
        return __result50__;
}

static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self){
        int __result51__ = self->len;
        return __result51__;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
    int __result57__ = self->sline;
    return __result57__;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* right_value99;
memset(&right_value99, 0, sizeof(void*));
    char* __result58__ = ((char*)(right_value99=__builtin_string(self->sname)));
    return __result58__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, struct sInfo* info){
void* right_value100;
char* __dec_obj63;
void* right_value101;
struct sNode* __dec_obj64;
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj63=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(info->sname))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
    if(right_value100) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0); }
    __dec_obj64=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=sNodep_clone(left))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0); }
    if(right_value101) { right_value101 = come_decrement_ref_count(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0); } 
    struct sNullCheckNode* __result59__ = self;
    if(self) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result59__;
}

_Bool sNullCheckNode_terminated(){
    _Bool __result60__ = (_Bool)0;
    return __result60__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_78;
void* right_value102;
struct CVALUE* left_value_79;
void* right_value103;
struct CVALUE* come_value_80;
void* right_value104;
void* right_value105;
char* __dec_obj65;
void* right_value106;
struct sType* __dec_obj66;
memset(&left_78, 0, sizeof(struct sNode*));
memset(&right_value102, 0, sizeof(void*));
memset(&left_value_79, 0, sizeof(struct CVALUE*));
memset(&right_value103, 0, sizeof(void*));
memset(&come_value_80, 0, sizeof(struct CVALUE*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
    left_78=self->mLeft;
    if(!left_78->compile(left_78->_protocol_obj,info)) {
        _Bool __result61__ = (_Bool)0;
        return __result61__;
    }
    left_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value102=get_value_from_stack(-1,info))));
    if(right_value102) { come_call_finalizer(CVALUE_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value103=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 335))));
    if(right_value103) { come_call_finalizer(CVALUE_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj65=come_value_80->c_value;
    come_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("(%s)come_null_check(%s, \"%s\", %d)",((char*)(right_value104=make_type_name_string(left_value_79->type,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_79->c_value,info->sname,info->sline))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
    if(right_value104) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0); }
    if(right_value105) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0); }
    __dec_obj66=come_value_80->type;
    come_value_80->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(left_value_79->type))));
    if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value106) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0); }
    come_value_80->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_80));
    add_come_last_code(info,"%s;\n",come_value_80->c_value);
    _Bool __result62__ = (_Bool)1;
    if(left_value_79) { come_call_finalizer(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_80) { come_call_finalizer(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0); }
    return __result62__;
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
    int __result63__ = self->sline;
    return __result63__;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* right_value107;
memset(&right_value107, 0, sizeof(void*));
    char* __result64__ = ((char*)(right_value107=__builtin_string(self->sname)));
    return __result64__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* right_value108;
void* right_value109;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value115;
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 360);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value109=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value108=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 360)))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sStoreFieldNode_finalize;
    _inf_value1->clone=sStoreFieldNode_clone;
    _inf_value1->compile=sStoreFieldNode_compile;
    _inf_value1->sline=sStoreFieldNode_sline;
    _inf_value1->sname=sStoreFieldNode_sname;
    _inf_value1->terminated=sStoreFieldNode_terminated;
    struct sNode* __result67__ = ((struct sNode*)(right_value115=_inf_value1));
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(right_value108) { come_call_finalizer(sStoreFieldNode_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value109) { come_call_finalizer(sStoreFieldNode_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0); }
    return __result67__;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* right_value116;
char* __dec_obj71;
void* right_value117;
struct sNode* __dec_obj72;
void* right_value118;
char* __dec_obj73;
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj71=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(info->sname))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
    if(right_value116) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0); }
    __dec_obj72=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNodep_clone(left))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0); }
    if(right_value117) { right_value117 = come_decrement_ref_count(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0); } 
    __dec_obj73=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(name))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
    if(right_value118) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0); }
    struct sLoadFieldNode* __result68__ = self;
    if(self) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    return __result68__;
}

_Bool sLoadFieldNode_terminated(){
    _Bool __result69__ = (_Bool)0;
    return __result69__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_82;
void* right_value119;
char* name_83;
void* right_value120;
struct CVALUE* left_value_84;
struct sType* left_type_85;
void* right_value121;
struct sType* left_type2_86;
struct sClass* klass_87;
struct sType* field_type_88;
int index_89;
char* child_field_name_90;
struct tuple2$2charphsTypeph* field_91;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* field_name_92;
struct sType* field_type2_93;
void* right_value122;
struct sType* __dec_obj74;
int* a_94;
void* right_value123;
struct CVALUE* come_value_95;
void* right_value124;
char* __dec_obj75;
void* right_value125;
char* __dec_obj76;
void* right_value126;
char* __dec_obj77;
void* right_value127;
char* __dec_obj78;
void* right_value128;
struct sType* __dec_obj79;
memset(&left_82, 0, sizeof(struct sNode*));
memset(&right_value119, 0, sizeof(void*));
memset(&name_83, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
memset(&left_value_84, 0, sizeof(struct CVALUE*));
memset(&left_type_85, 0, sizeof(struct sType*));
memset(&right_value121, 0, sizeof(void*));
memset(&left_type2_86, 0, sizeof(struct sType*));
memset(&klass_87, 0, sizeof(struct sClass*));
memset(&field_type_88, 0, sizeof(struct sType*));
memset(&index_89, 0, sizeof(int));
memset(&child_field_name_90, 0, sizeof(char*));
memset(&field_91, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_92, 0, sizeof(char*)); /* ccc */
memset(&field_type2_93, 0, sizeof(struct sType*)); /* ccc */
memset(&field_name_92, 0, sizeof(char*)); /* eee */
memset(&field_type2_93, 0, sizeof(struct sType*)); /* eee */
memset(&right_value122, 0, sizeof(void*));
memset(&a_94, 0, sizeof(int*));
memset(&right_value123, 0, sizeof(void*));
memset(&come_value_95, 0, sizeof(struct CVALUE*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
    left_82=self->mLeft;
    name_83=(char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(self->mName))));
    if(right_value119) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0); }
    if(!left_82->compile(left_82->_protocol_obj,info)) {
        _Bool __result70__ = (_Bool)0;
        return __result70__;
    }
    left_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
    if(right_value120) { come_call_finalizer(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    left_type_85=left_value_84->type;
    left_type2_86=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=solve_generics(left_type_85,left_type_85,info))));
    if(right_value121) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0); }
    klass_87=left_type2_86->mClass;
    klass_87=map$2charphsClassphp_operator_load_element(info->classes,klass_87->mName);
    field_type_88=((void*)0);
    index_89=0;
    child_field_name_90=((void*)0);
    klass_87=map$2charphsClassphp_operator_load_element(info->classes,klass_87->mName);
    for(
    field_91=list$1tuple2$2charphsTypephphp_begin((klass_87->mFields));
    !list$1tuple2$2charphsTypephphp_end((klass_87->mFields));
    field_91=list$1tuple2$2charphsTypephphp_next((klass_87->mFields))
    ){
        multiple_assgin_var2=field_91;
        field_name_92=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
        field_type2_93=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
        if(string_operator_equals(field_name_92,name_83)) {
            __dec_obj74=field_type_88;
            field_type_88=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(field_type2_93))));
            if(__dec_obj74) { come_call_finalizer(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value122) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0); }
            break;
        }
        index_89++;
        if(field_name_92) { field_name_92 = come_decrement_ref_count(field_name_92, (void*)0, (void*)0, 0, 0); }
        if(field_type2_93) { come_call_finalizer(sType_finalize,field_type2_93, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(index_89==list$1tuple2$2charphsTypephphp_length(klass_87->mFields)) {
        err_msg(info,"field not found(%s) in %s(2)",name_83,klass_87->mName);
        a_94=(int*)0;
        *a_94=0;
        _Bool __result71__ = (_Bool)0;
        return __result71__;
    }
    come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 429))));
    if(right_value123) { come_call_finalizer(CVALUE_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0); }
    if(left_value_84->type->mPointerNum>0) {
        if(child_field_name_90) {
            __dec_obj75=come_value_95->c_value;
            come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("%s->%s.%s",left_value_84->c_value,child_field_name_90,name_83))));
            if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
            if(right_value124) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0); }
        }
        else {
            __dec_obj76=come_value_95->c_value;
            come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s->%s",left_value_84->c_value,name_83))));
            if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0); }
            if(right_value125) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0); }
        }
    }
    else {
        if(child_field_name_90) {
            __dec_obj77=come_value_95->c_value;
            come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s.%s.%s",left_value_84->c_value,child_field_name_90,name_83))));
            if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0); }
            if(right_value126) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0); }
        }
        else {
            __dec_obj78=come_value_95->c_value;
            come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("%s.%s",left_value_84->c_value,name_83))));
            if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0); }
            if(right_value127) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0); }
        }
    }
    __dec_obj79=come_value_95->type;
    come_value_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(field_type_88))));
    if(__dec_obj79) { come_call_finalizer(sType_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value128) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0); }
    come_value_95->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_95));
    _Bool __result72__ = (_Bool)1;
    if(name_83) { name_83 = come_decrement_ref_count(name_83, (void*)0, (void*)0, 0, 0); }
    if(left_value_84) { come_call_finalizer(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0); }
    if(left_type2_86) { come_call_finalizer(sType_finalize,left_type2_86, (void*)0, (void*)0, 0, 0, 0); }
    if(field_type_88) { come_call_finalizer(sType_finalize,field_type_88, (void*)0, (void*)0, 0, 0, 0); }
    if(child_field_name_90) { child_field_name_90 = come_decrement_ref_count(child_field_name_90, (void*)0, (void*)0, 0, 0); }
    if(come_value_95) { come_call_finalizer(CVALUE_finalize,come_value_95, (void*)0, (void*)0, 0, 0, 0); }
    return __result72__;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
    int __result73__ = self->sline;
    return __result73__;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* right_value129;
memset(&right_value129, 0, sizeof(void*));
    char* __result74__ = ((char*)(right_value129=__builtin_string(self->sname)));
    return __result74__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, struct sInfo* info){
void* right_value130;
char* __dec_obj80;
void* right_value131;
struct sNode* __dec_obj81;
void* right_value132;
struct sNode* __dec_obj82;
void* right_value133;
struct list$1sNodeph* __dec_obj83;
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj80=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(info->sname))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0); }
    if(right_value130) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0); }
    __dec_obj81=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value131=sNodep_clone(left))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0); }
    if(right_value131) { right_value131 = come_decrement_ref_count(right_value131, ((struct sNode*)right_value131)->finalize, ((struct sNode*)right_value131)->_protocol_obj, 1, 0); } 
    __dec_obj82=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value132=sNodep_clone(right))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0); }
    if(right_value132) { right_value132 = come_decrement_ref_count(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0); } 
    __dec_obj83=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value133=list$1sNodephp_clone(array_num))));
    if(__dec_obj83) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value133) { come_call_finalizer(list$1sNodephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0); }
    struct sStoreArrayNode* __result75__ = self;
    if(self) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    if(array_num) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1); }
    return __result75__;
}

_Bool sStoreArrayNode_terminated(){
    _Bool __result76__ = (_Bool)0;
    return __result76__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_96;
struct sNode* right_97;
struct list$1sNodeph* array_num_nodes_98;
void* right_value134;
struct CVALUE* left_value_99;
struct sType* left_type_100;
void* right_value135;
void* right_value136;
struct list$1CVALUEph* array_num_103;
struct sNode* it_105;
void* right_value137;
struct CVALUE* c_value_107;
void* right_value138;
struct CVALUE* right_value_108;
struct sType* right_type_109;
struct sClass* klass_110;
void* right_value139;
struct sType* type_111;
void* right_value140;
void* right_value141;
char* __dec_obj84;
char* fun_name_112;
_Bool calling_fun_116;
void* right_value142;
struct CVALUE* come_value_117;
void* right_value143;
void* right_value144;
struct buffer* buf_118;
struct CVALUE* it_120;
void* right_value145;
void* right_value146;
char* left_value_code_122;
void* right_value147;
char* __dec_obj85;
void* right_value148;
char* __dec_obj86;
void* right_value149;
char* __dec_obj87;
void* right_value150;
char* __dec_obj88;
int right_value_id_123;
void* right_value151;
char* __dec_obj89;
void* right_value152;
char* __dec_obj90;
void* right_value153;
struct sType* result_type_124;
void* right_value154;
void* right_value155;
struct list$1sNodeph* __dec_obj91;
struct sType* __dec_obj92;
memset(&left_96, 0, sizeof(struct sNode*));
memset(&right_97, 0, sizeof(struct sNode*));
memset(&array_num_nodes_98, 0, sizeof(struct list$1sNodeph*));
memset(&right_value134, 0, sizeof(void*));
memset(&left_value_99, 0, sizeof(struct CVALUE*));
memset(&left_type_100, 0, sizeof(struct sType*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&array_num_103, 0, sizeof(struct list$1CVALUEph*));
memset(&it_105, 0, sizeof(struct sNode*));
memset(&right_value137, 0, sizeof(void*));
memset(&c_value_107, 0, sizeof(struct CVALUE*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value_108, 0, sizeof(struct CVALUE*));
memset(&right_type_109, 0, sizeof(struct sType*));
memset(&klass_110, 0, sizeof(struct sClass*));
memset(&right_value139, 0, sizeof(void*));
memset(&type_111, 0, sizeof(struct sType*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&fun_name_112, 0, sizeof(char*));
memset(&calling_fun_116, 0, sizeof(_Bool));
memset(&right_value142, 0, sizeof(void*));
memset(&come_value_117, 0, sizeof(struct CVALUE*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&buf_118, 0, sizeof(struct buffer*));
memset(&it_120, 0, sizeof(struct CVALUE*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&left_value_code_122, 0, sizeof(char*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value_id_123, 0, sizeof(int));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&result_type_124, 0, sizeof(struct sType*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
    left_96=self->mLeft;
    right_97=self->mRight;
    array_num_nodes_98=self->mArrayNum;
    if(!left_96->compile(left_96->_protocol_obj,info)) {
        _Bool __result77__ = (_Bool)0;
        return __result77__;
    }
    left_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=get_value_from_stack(-1,info))));
    if(right_value134) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    left_type_100=left_value_99->type;
    array_num_103=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value136=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value135=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 507))))))));
    if(right_value136) { come_call_finalizer(list$1CVALUEphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_105=list$1sNodephp_begin((array_num_nodes_98));
    !list$1sNodephp_end((array_num_nodes_98));
    it_105=list$1sNodephp_next((array_num_nodes_98))
    ){
        if(!it_105->compile(it_105->_protocol_obj,info)) {
            _Bool __result84__ = (_Bool)0;
            return __result84__;
        }
        c_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
        if(right_value137) { come_call_finalizer(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(array_num_103,(struct CVALUE*)come_increment_ref_count(c_value_107));
        if(c_value_107) { come_call_finalizer(CVALUE_finalize,c_value_107, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(!right_97->compile(right_97->_protocol_obj,info)) {
        _Bool __result85__ = (_Bool)0;
        return __result85__;
    }
    right_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=get_value_from_stack(-1,info))));
    if(right_value138) { come_call_finalizer(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_type_109=right_value_108->type;
    klass_110=left_value_99->type->mClass;
    type_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(left_value_99->type))));
    if(right_value139) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value_108->type->mOriginalTypeName=="any") {
        __dec_obj84=right_value_108->c_value;
        right_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("(%s)%s",((char*)(right_value140=make_type_name_string(left_value_99->type,(_Bool)0,(_Bool)0,info,(_Bool)0))),right_value_108->c_value))));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0); }
        if(right_value140) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0); }
        if(right_value141) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0); }
    }
    fun_name_112="operator_store_element";
    calling_fun_116=operator_overload_fun2(type_111,fun_name_112,left_value_99,list$1CVALUEphp_operator_load_element(array_num_103,0),right_value_108,info);
    if(!calling_fun_116) {
        come_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 541))));
        if(right_value142) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
        buf_118=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value144=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value143=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 550))))))));
        if(right_value143) { come_call_finalizer(buffer_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value144) { come_call_finalizer(buffer_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(buf_118,left_value_99->c_value);
        for(
        it_120=list$1CVALUEphp_begin((array_num_103));
        !list$1CVALUEphp_end((array_num_103));
        it_120=list$1CVALUEphp_next((array_num_103))
        ){
            buffer_append_str(buf_118,((char*)(right_value145=xsprintf("[%s]",it_120->c_value))));
            if(right_value145) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0); }
        }
        left_value_code_122=(char*)come_increment_ref_count(((char*)(right_value146=buffer_to_string(buf_118))));
        if(right_value146) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0); }
        if(left_type_100->mHeap&&right_type_109->mHeap&&left_type_100->mPointerNum>0&&right_type_109->mPointerNum>0) {
            if(left_value_99->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_100,left_value_code_122,info);
                __dec_obj85=right_value_108->c_value;
                right_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value147=increment_ref_count_object(right_value_108->type,right_value_108->c_value,info))));
                if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0); }
                if(right_value147) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0); }
                __dec_obj86=come_value_117->c_value;
                come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s=%s",left_value_code_122,right_value_108->c_value))));
                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
                if(right_value148) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0); }
            }
            else if(left_value_99->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_100,left_value_code_122,info);
                __dec_obj87=right_value_108->c_value;
                right_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value149=increment_ref_count_object(right_value_108->type,right_value_108->c_value,info))));
                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0); }
                if(right_value149) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0); }
                __dec_obj88=come_value_117->c_value;
                come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s=%s",left_value_code_122,right_value_108->c_value))));
                if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
                if(right_value150) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0); }
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_122,left_value_99->type->mPointerNum);
                _Bool __result94__ = (_Bool)0;
                if(come_value_117) { come_call_finalizer(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0); }
                if(buf_118) { come_call_finalizer(buffer_finalize,buf_118, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_code_122) { left_value_code_122 = come_decrement_ref_count(left_value_code_122, (void*)0, (void*)0, 0, 0); }
                return __result94__;
            }
            right_value_id_123=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_108->c_value));
            if(right_value_id_123!=-1) {
                remove_object_from_right_values(right_value_id_123,info);
            }
        }
        else {
            if(left_value_99->type->mPointerNum>=1) {
                __dec_obj89=come_value_117->c_value;
                come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("%s=%s",left_value_code_122,right_value_108->c_value))));
                if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0); }
                if(right_value151) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0); }
            }
            else if(left_value_99->type->mPointerNum==0) {
                __dec_obj90=come_value_117->c_value;
                come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s=%s",left_value_code_122,right_value_108->c_value))));
                if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0); }
                if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_122,left_value_99->type->mPointerNum);
                _Bool __result95__ = (_Bool)0;
                if(come_value_117) { come_call_finalizer(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0); }
                if(buf_118) { come_call_finalizer(buffer_finalize,buf_118, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_code_122) { left_value_code_122 = come_decrement_ref_count(left_value_code_122, (void*)0, (void*)0, 0, 0); }
                return __result95__;
            }
        }
        result_type_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(left_type_100))));
        if(right_value153) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj91=result_type_124->mArrayNum;
        result_type_124->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value155=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value154=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 595))))))));
        if(__dec_obj91) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value155) { come_call_finalizer(list$1sNodephp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj92=come_value_117->type;
        come_value_117->type=(struct sType*)come_increment_ref_count(result_type_124);
        if(__dec_obj92) { come_call_finalizer(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0); }
        come_value_117->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
        add_come_last_code(info,"%s;\n",come_value_117->c_value);
        if(come_value_117) { come_call_finalizer(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0); }
        if(buf_118) { come_call_finalizer(buffer_finalize,buf_118, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_code_122) { left_value_code_122 = come_decrement_ref_count(left_value_code_122, (void*)0, (void*)0, 0, 0); }
        if(result_type_124) { come_call_finalizer(sType_finalize,result_type_124, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result96__ = (_Bool)1;
    if(left_value_99) { come_call_finalizer(CVALUE_finalize,left_value_99, (void*)0, (void*)0, 0, 0, 0); }
    if(array_num_103) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_103, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_108) { come_call_finalizer(CVALUE_finalize,right_value_108, (void*)0, (void*)0, 0, 0, 0); }
    if(type_111) { come_call_finalizer(sType_finalize,type_111, (void*)0, (void*)0, 0, 0, 0); }
    return __result96__;
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1CVALUEph* __result78__ = self;
        if(self) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        return __result78__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_101;
struct list_item$1CVALUEph* prev_it_102;
memset(&it_101, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_102, 0, sizeof(struct list_item$1CVALUEph*));
            it_101=self->head;
            while(it_101!=((void*)0)) {
                if(1) {
                    if(it_101->item) { come_call_finalizer(CVALUE_finalize,it_101->item, (void*)0, (void*)0, 0, 0, 0); }
                }
                prev_it_102=it_101;
                it_101=it_101->next;
                come_free_object(prev_it_102);
            }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
struct sNode* result_104;
memset(&result_104, 0, sizeof(struct sNode*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sNode* __result79__ = self->it->item;
            return __result79__;
        }
        memset(&result_104,0,sizeof(struct sNode*));
        struct sNode* __result80__ = result_104;
        return __result80__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
        _Bool __result81__ = self->it==((void*)0);
        return __result81__;
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
struct sNode* result_106;
memset(&result_106, 0, sizeof(struct sNode*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sNode* __result82__ = self->it->item;
            return __result82__;
        }
        memset(&result_106,0,sizeof(struct sNode*));
        struct sNode* __result83__ = result_106;
        return __result83__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int index){
struct CVALUE* default_value_113;
memset(&default_value_113, 0, sizeof(struct CVALUE*)); /* bbb */
        memset(&default_value_113,0,sizeof(struct CVALUE*));
        struct CVALUE* __result88__ = list$1CVALUEphp_item(self,index,default_value_113);
        return __result88__;
}

static struct CVALUE* list$1CVALUEphp_item(struct list$1CVALUEph* self, int position, struct CVALUE* default_value){
struct list_item$1CVALUEph* it_114;
int i_115;
memset(&it_114, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_115, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_114=self->head;
            i_115=0;
            while(it_114!=((void*)0)) {
                if(position==i_115) {
                    struct CVALUE* __result86__ = it_114->item;
                    return __result86__;
                }
                it_114=it_114->next;
                i_115++;
            }
            struct CVALUE* __result87__ = default_value;
            return __result87__;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
struct CVALUE* result_119;
memset(&result_119, 0, sizeof(struct CVALUE*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct CVALUE* __result89__ = self->it->item;
                return __result89__;
            }
            memset(&result_119,0,sizeof(struct CVALUE*));
            struct CVALUE* __result90__ = result_119;
            return __result90__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
            _Bool __result91__ = self->it==((void*)0);
            return __result91__;
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
struct CVALUE* result_121;
memset(&result_121, 0, sizeof(struct CVALUE*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct CVALUE* __result92__ = self->it->item;
                return __result92__;
            }
            memset(&result_121,0,sizeof(struct CVALUE*));
            struct CVALUE* __result93__ = result_121;
            return __result93__;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
    int __result97__ = self->sline;
    return __result97__;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* right_value156;
memset(&right_value156, 0, sizeof(void*));
    char* __result98__ = ((char*)(right_value156=__builtin_string(self->sname)));
    return __result98__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, struct sInfo* info){
void* right_value157;
char* __dec_obj93;
void* right_value158;
struct list$1sNodeph* __dec_obj94;
void* right_value159;
struct sNode* __dec_obj95;
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj93=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(info->sname))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
    if(right_value157) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0); }
    __dec_obj94=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value158=list$1sNodephp_clone(array_num))));
    if(__dec_obj94) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value158) { come_call_finalizer(list$1sNodephp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj95=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=sNodep_clone(left))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0); }
    if(right_value159) { right_value159 = come_decrement_ref_count(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0); } 
    struct sLoadArrayNode* __result99__ = self;
    if(self) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(array_num) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1); }
    return __result99__;
}

_Bool sLoadArrayNode_terminated(){
    _Bool __result100__ = (_Bool)0;
    return __result100__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_125;
struct list$1sNodeph* array_num_nodes_126;
void* right_value160;
struct CVALUE* left_value_127;
struct sType* left_type_128;
void* right_value161;
void* right_value162;
struct list$1CVALUEph* array_num_129;
struct sNode* it_130;
void* right_value163;
struct CVALUE* c_value_131;
void* right_value164;
struct sType* type_132;
char* fun_name_133;
_Bool calling_fun_134;
void* right_value165;
struct CVALUE* come_value_135;
void* right_value166;
void* right_value167;
struct buffer* buf_136;
struct CVALUE* it_137;
void* right_value168;
void* right_value169;
char* left_value_code_138;
void* right_value170;
char* __dec_obj96;
void* right_value171;
struct sType* result_type_139;
void* right_value172;
void* right_value173;
struct list$1sNodeph* __dec_obj97;
int i_140;
struct sType* __dec_obj98;
memset(&left_125, 0, sizeof(struct sNode*));
memset(&array_num_nodes_126, 0, sizeof(struct list$1sNodeph*));
memset(&right_value160, 0, sizeof(void*));
memset(&left_value_127, 0, sizeof(struct CVALUE*));
memset(&left_type_128, 0, sizeof(struct sType*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&array_num_129, 0, sizeof(struct list$1CVALUEph*));
memset(&it_130, 0, sizeof(struct sNode*));
memset(&right_value163, 0, sizeof(void*));
memset(&c_value_131, 0, sizeof(struct CVALUE*));
memset(&right_value164, 0, sizeof(void*));
memset(&type_132, 0, sizeof(struct sType*));
memset(&fun_name_133, 0, sizeof(char*));
memset(&calling_fun_134, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
memset(&come_value_135, 0, sizeof(struct CVALUE*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&buf_136, 0, sizeof(struct buffer*));
memset(&it_137, 0, sizeof(struct CVALUE*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&left_value_code_138, 0, sizeof(char*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&result_type_139, 0, sizeof(struct sType*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&i_140, 0, sizeof(int));
    left_125=self->mLeft;
    array_num_nodes_126=self->mArrayNum;
    if(!left_125->compile(left_125->_protocol_obj,info)) {
        _Bool __result101__ = (_Bool)0;
        return __result101__;
    }
    left_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    if(right_value160) { come_call_finalizer(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    left_type_128=left_value_127->type;
    array_num_129=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value162=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value161=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 657))))))));
    if(right_value162) { come_call_finalizer(list$1CVALUEphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_130=list$1sNodephp_begin((array_num_nodes_126));
    !list$1sNodephp_end((array_num_nodes_126));
    it_130=list$1sNodephp_next((array_num_nodes_126))
    ){
        if(!it_130->compile(it_130->_protocol_obj,info)) {
            _Bool __result102__ = (_Bool)0;
            return __result102__;
        }
        c_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=get_value_from_stack(-1,info))));
        if(right_value163) { come_call_finalizer(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(array_num_129,(struct CVALUE*)come_increment_ref_count(c_value_131));
        if(c_value_131) { come_call_finalizer(CVALUE_finalize,c_value_131, (void*)0, (void*)0, 0, 0, 0); }
    }
    type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(left_value_127->type))));
    if(right_value164) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0); }
    fun_name_133="operator_load_element";
    calling_fun_134=operator_overload_fun(type_132,fun_name_133,left_value_127,list$1CVALUEphp_operator_load_element(array_num_129,0),info);
    if(!calling_fun_134) {
        come_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 676))));
        if(right_value165) { come_call_finalizer(CVALUE_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
        buf_136=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value167=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value166=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 678))))))));
        if(right_value166) { come_call_finalizer(buffer_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value167) { come_call_finalizer(buffer_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(buf_136,left_value_127->c_value);
        for(
        it_137=list$1CVALUEphp_begin((array_num_129));
        !list$1CVALUEphp_end((array_num_129));
        it_137=list$1CVALUEphp_next((array_num_129))
        ){
            buffer_append_str(buf_136,((char*)(right_value168=xsprintf("[%s]",it_137->c_value))));
            if(right_value168) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0); }
        }
        left_value_code_138=(char*)come_increment_ref_count(((char*)(right_value169=buffer_to_string(buf_136))));
        if(right_value169) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0); }
        __dec_obj96=come_value_135->c_value;
        come_value_135->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s",left_value_code_138))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0); }
        if(right_value170) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0); }
        result_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(left_type_128))));
        if(right_value171) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj97=result_type_139->mArrayNum;
        result_type_139->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value173=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value172=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 692))))))));
        if(__dec_obj97) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value173) { come_call_finalizer(list$1sNodephp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0); }
        if(list$1sNodephp_length(result_type_139->mArrayNum)>0) {
            for(
            i_140=0;
            i_140<list$1CVALUEphp_length(array_num_129);
            i_140++
            ){
                list$1sNodephp_delete(result_type_139->mArrayNum,-1,-1);
            }
        }
        else if(result_type_139->mPointerNum>0) {
            result_type_139->mPointerNum-=list$1CVALUEphp_length(array_num_129);
        }
        __dec_obj98=come_value_135->type;
        come_value_135->type=(struct sType*)come_increment_ref_count(result_type_139);
        if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0); }
        come_value_135->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
        add_come_last_code(info,"%s;\n",come_value_135->c_value);
        if(come_value_135) { come_call_finalizer(CVALUE_finalize,come_value_135, (void*)0, (void*)0, 0, 0, 0); }
        if(buf_136) { come_call_finalizer(buffer_finalize,buf_136, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_code_138) { left_value_code_138 = come_decrement_ref_count(left_value_code_138, (void*)0, (void*)0, 0, 0); }
        if(result_type_139) { come_call_finalizer(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result105__ = (_Bool)1;
    if(left_value_127) { come_call_finalizer(CVALUE_finalize,left_value_127, (void*)0, (void*)0, 0, 0, 0); }
    if(array_num_129) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_129, (void*)0, (void*)0, 0, 0, 0); }
    if(type_132) { come_call_finalizer(sType_finalize,type_132, (void*)0, (void*)0, 0, 0, 0); }
    return __result105__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
            int __result103__ = self->len;
            return __result103__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
                int __result104__ = self->len;
                return __result104__;
}

static void list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
int tmp_141;
struct list_item$1sNodeph* it_144;
int i_145;
struct list_item$1sNodeph* prev_it_146;
struct list_item$1sNodeph* it_147;
int i_148;
struct list_item$1sNodeph* prev_it_149;
struct list_item$1sNodeph* it_150;
struct list_item$1sNodeph* head_prev_it_151;
struct list_item$1sNodeph* tail_it_152;
int i_153;
struct list_item$1sNodeph* prev_it_154;
memset(&tmp_141, 0, sizeof(int));
memset(&it_144, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_145, 0, sizeof(int));
memset(&prev_it_146, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_147, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_148, 0, sizeof(int));
memset(&prev_it_149, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_150, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_151, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_152, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_153, 0, sizeof(int));
memset(&prev_it_154, 0, sizeof(struct list_item$1sNodeph*));
                    if(head<0) {
                        head+=self->len;
                    }
                    if(tail<0) {
                        tail+=self->len+1;
                    }
                    if(head>tail) {
                        tmp_141=tail;
                        tail=head;
                        head=tmp_141;
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
                        list$1sNodephp_reset(self);
                    }
                    else if(head==0) {
                        it_144=self->head;
                        i_145=0;
                        while(it_144!=((void*)0)) {
                            if(i_145<tail) {
                                prev_it_146=it_144;
                                it_144=it_144->next;
                                i_145++;
                                if(prev_it_146) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_146, (void*)0, (void*)0, 0, 0, 0); }
                                self->len--;
                            }
                            else if(i_145==tail) {
                                self->head=it_144;
                                self->head->prev=((void*)0);
                                break;
                            }
                            else {
                                it_144=it_144->next;
                                i_145++;
                            }
                        }
                    }
                    else if(tail==self->len) {
                        it_147=self->head;
                        i_148=0;
                        while(it_147!=((void*)0)) {
                            if(i_148==head) {
                                self->tail=it_147->prev;
                                self->tail->next=((void*)0);
                            }
                            if(i_148>=head) {
                                prev_it_149=it_147;
                                it_147=it_147->next;
                                i_148++;
                                if(prev_it_149) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_149, (void*)0, (void*)0, 0, 0, 0); }
                                self->len--;
                            }
                            else {
                                it_147=it_147->next;
                                i_148++;
                            }
                        }
                    }
                    else {
                        it_150=self->head;
                        head_prev_it_151=((void*)0);
                        tail_it_152=((void*)0);
                        i_153=0;
                        while(it_150!=((void*)0)) {
                            if(i_153==head) {
                                head_prev_it_151=it_150->prev;
                            }
                            if(i_153==tail) {
                                tail_it_152=it_150;
                            }
                            if(i_153>=head&&i_153<tail) {
                                prev_it_154=it_150;
                                it_150=it_150->next;
                                i_153++;
                                if(prev_it_154) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_154, (void*)0, (void*)0, 0, 0, 0); }
                                self->len--;
                            }
                            else {
                                it_150=it_150->next;
                                i_153++;
                            }
                        }
                        if(head_prev_it_151!=((void*)0)) {
                            head_prev_it_151->next=tail_it_152;
                        }
                        if(tail_it_152!=((void*)0)) {
                            tail_it_152->prev=head_prev_it_151;
                        }
                    }
}

static void list$1sNodephp_reset(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_142;
struct list_item$1sNodeph* prev_it_143;
memset(&it_142, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_143, 0, sizeof(struct list_item$1sNodeph*));
                            it_142=self->head;
                            while(it_142!=((void*)0)) {
                                prev_it_143=it_142;
                                it_142=it_142->next;
                                if(prev_it_143) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_143, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                                        if(self->item) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0); } 
                                    }
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
    int __result106__ = self->sline;
    return __result106__;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* right_value174;
memset(&right_value174, 0, sizeof(void*));
    char* __result107__ = ((char*)(right_value174=__builtin_string(self->sname)));
    return __result107__;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
    struct sNode* __result108__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result108__;
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
    err_msg(info,"parse_method_call is failed");
    exit(2);
    struct sNode* __result109__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1); } 
    if(fun_name) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1); }
    return __result109__;
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* right_value175;
void* right_value176;
struct list$1sNodeph* array_num_155;
void* right_value177;
struct sNode* node_156;
void* right_value181;
struct sNode* right_node_160;
void* right_value182;
void* right_value183;
struct sNode* _inf_value2;
struct sStoreArrayNode* _inf_obj_value2;
void* right_value189;
struct sNode* __dec_obj106;
void* right_value190;
void* right_value191;
struct sNode* _inf_value3;
struct sLoadArrayNode* _inf_obj_value3;
void* right_value196;
struct sNode* __dec_obj110;
void* right_value197;
void* right_value198;
struct sNode* _inf_value4;
struct sNullCheckNode* _inf_obj_value4;
void* right_value202;
struct sNode* __dec_obj113;
void* right_value203;
char* field_name_164;
void* right_value204;
struct sNode* right_node_165;
void* right_value205;
void* right_value206;
struct sNode* _inf_value5;
struct sStoreFieldNode* _inf_obj_value5;
void* right_value212;
struct sNode* __dec_obj118;
void* right_value213;
void* right_value214;
struct sNode* __dec_obj119;
void* right_value215;
void* right_value216;
struct sNode* _inf_value6;
struct sLoadFieldNode* _inf_obj_value6;
void* right_value221;
struct sNode* __dec_obj123;
void* right_value222;
struct sNode* node2_168;
struct sNode* __dec_obj124;
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&array_num_155, 0, sizeof(struct list$1sNodeph*));
memset(&right_value177, 0, sizeof(void*));
memset(&node_156, 0, sizeof(struct sNode*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_node_160, 0, sizeof(struct sNode*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&field_name_164, 0, sizeof(char*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_node_165, 0, sizeof(struct sNode*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&node2_168, 0, sizeof(struct sNode*));
    while((_Bool)1) {
        if(*info->p==91) {
            array_num_155=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value176=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value175=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 741))))))));
            if(right_value176) { come_call_finalizer(list$1sNodephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0); }
            while(1) {
                if(*info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_156=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value177=expression_v13(info))));
                    if(right_value177) { right_value177 = come_decrement_ref_count(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0); } 
                    list$1sNodephp_push_back(array_num_155,(struct sNode*)come_increment_ref_count(node_156));
                    if(*info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"require ] character");
                        exit(2);
                    }
                    if(node_156) { node_156 = come_decrement_ref_count(node_156, ((struct sNode*)node_156)->finalize, ((struct sNode*)node_156)->_protocol_obj, 0, 0); } 
                }
                else {
                    break;
                }
            }
            if(*info->p==61&&*(info->p+1)!=61) {
                info->p++;
                skip_spaces_and_lf(info);
                right_node_160=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value181=expression_v13(info))));
                if(right_value181) { right_value181 = come_decrement_ref_count(right_value181, ((struct sNode*)right_value181)->finalize, ((struct sNode*)right_value181)->_protocol_obj, 1, 0); } 
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 771);
                _inf_obj_value2=come_increment_ref_count(((struct sStoreArrayNode*)(right_value183=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value182=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 771)))),node,(struct sNode*)come_increment_ref_count(right_node_160),(struct list$1sNodeph*)come_increment_ref_count(array_num_155),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=sStoreArrayNode_finalize;
                _inf_value2->clone=sStoreArrayNode_clone;
                _inf_value2->compile=sStoreArrayNode_compile;
                _inf_value2->sline=sStoreArrayNode_sline;
                _inf_value2->sname=sStoreArrayNode_sname;
                _inf_value2->terminated=sStoreArrayNode_terminated;
                __dec_obj106=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=_inf_value2)));
                if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0); }
                if(right_value182) { come_call_finalizer(sStoreArrayNode_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value183) { come_call_finalizer(sStoreArrayNode_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value189) { right_value189 = come_decrement_ref_count(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0); } 
            }
            else {
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 774);
                _inf_obj_value3=come_increment_ref_count(((struct sLoadArrayNode*)(right_value191=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value190=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 774)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_155),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=sLoadArrayNode_finalize;
                _inf_value3->clone=sLoadArrayNode_clone;
                _inf_value3->compile=sLoadArrayNode_compile;
                _inf_value3->sline=sLoadArrayNode_sline;
                _inf_value3->sname=sLoadArrayNode_sname;
                _inf_value3->terminated=sLoadArrayNode_terminated;
                __dec_obj110=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=_inf_value3)));
                if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0); }
                if(right_value190) { come_call_finalizer(sLoadArrayNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value191) { come_call_finalizer(sLoadArrayNode_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value196) { right_value196 = come_decrement_ref_count(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0); } 
            }
        }
        else if(*info->p==33&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 781);
            _inf_obj_value4=come_increment_ref_count(((struct sNullCheckNode*)(right_value198=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value197=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 781)))),node,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=sNullCheckNode_finalize;
            _inf_value4->clone=sNullCheckNode_clone;
            _inf_value4->compile=sNullCheckNode_compile;
            _inf_value4->sline=sNullCheckNode_sline;
            _inf_value4->sname=sNullCheckNode_sname;
            _inf_value4->terminated=sNullCheckNode_terminated;
            __dec_obj113=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value202=_inf_value4)));
            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0); }
            if(right_value197) { come_call_finalizer(sNullCheckNode_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value198) { come_call_finalizer(sNullCheckNode_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value202) { right_value202 = come_decrement_ref_count(right_value202, ((struct sNode*)right_value202)->finalize, ((struct sNode*)right_value202)->_protocol_obj, 1, 0); } 
        }
        else if(*info->p==46||(*info->p==45&&*(info->p+1)==62)) {
            if(*info->p==46) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            field_name_164=(char*)come_increment_ref_count(((char*)(right_value203=parse_word(info))));
            if(right_value203) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0); }
            if(*info->p==61&&*(info->p+1)!=61) {
                info->p++;
                skip_spaces_and_lf(info);
                right_node_165=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=expression_v13(info))));
                if(right_value204) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0); } 
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 802);
                _inf_obj_value5=come_increment_ref_count(((struct sStoreFieldNode*)(right_value206=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value205=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 802)))),node,(struct sNode*)come_increment_ref_count(right_node_165),(char*)come_increment_ref_count(field_name_164),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=sStoreFieldNode_finalize;
                _inf_value5->clone=sStoreFieldNode_clone;
                _inf_value5->compile=sStoreFieldNode_compile;
                _inf_value5->sline=sStoreFieldNode_sline;
                _inf_value5->sname=sStoreFieldNode_sname;
                _inf_value5->terminated=sStoreFieldNode_terminated;
                __dec_obj118=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value212=_inf_value5)));
                if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0); }
                if(right_value205) { come_call_finalizer(sStoreFieldNode_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value206) { come_call_finalizer(sStoreFieldNode_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value212) { right_value212 = come_decrement_ref_count(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0); } 
            }
            else if(*info->p==40||*info->p==123||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40)) {
                __dec_obj119=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=sNodep_clone(node)))),(char*)come_increment_ref_count(field_name_164),info))));
                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0); }
                if(right_value213) { right_value213 = come_decrement_ref_count(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0); } 
                if(right_value214) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0); } 
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 808);
                _inf_obj_value6=come_increment_ref_count(((struct sLoadFieldNode*)(right_value216=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value215=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 808)))),node,(char*)come_increment_ref_count(field_name_164),info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=sLoadFieldNode_finalize;
                _inf_value6->clone=sLoadFieldNode_clone;
                _inf_value6->compile=sLoadFieldNode_compile;
                _inf_value6->sline=sLoadFieldNode_sline;
                _inf_value6->sname=sLoadFieldNode_sname;
                _inf_value6->terminated=sLoadFieldNode_terminated;
                __dec_obj123=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value221=_inf_value6)));
                if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0); }
                if(right_value215) { come_call_finalizer(sLoadFieldNode_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value216) { come_call_finalizer(sLoadFieldNode_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value221) { right_value221 = come_decrement_ref_count(right_value221, ((struct sNode*)right_value221)->finalize, ((struct sNode*)right_value221)->_protocol_obj, 1, 0); } 
            }
        }
        else {
            node2_168=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
            if(right_value222) { right_value222 = come_decrement_ref_count(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0); } 
            if(node2_168==((void*)0)) {
                break;
            }
            __dec_obj124=node;
            node=(struct sNode*)come_increment_ref_count(node2_168);
            if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0); }
            if(node2_168) { node2_168 = come_decrement_ref_count(node2_168, ((struct sNode*)node2_168)->finalize, ((struct sNode*)node2_168)->_protocol_obj, 0, 0); } 
        }
    }
    struct sNode* __result120__ = node;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result120__;
}

static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* right_value178;
struct list_item$1sNodeph* litem_157;
struct sNode* __dec_obj99;
void* right_value179;
struct list_item$1sNodeph* litem_158;
struct sNode* __dec_obj100;
void* right_value180;
struct list_item$1sNodeph* litem_159;
struct sNode* __dec_obj101;
memset(&right_value178, 0, sizeof(void*));
memset(&litem_157, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value179, 0, sizeof(void*));
memset(&litem_158, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value180, 0, sizeof(void*));
memset(&litem_159, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_157=((struct list_item$1sNodeph*)(right_value178=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "18field.c", 751)));
                            litem_157->prev=((void*)0);
                            litem_157->next=((void*)0);
                            __dec_obj99=litem_157->item;
                            litem_157->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0); }
                            self->tail=litem_157;
                            self->head=litem_157;
                        }
                        else if(self->len==1) {
                            litem_158=((struct list_item$1sNodeph*)(right_value179=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "18field.c", 761)));
                            litem_158->prev=self->head;
                            litem_158->next=((void*)0);
                            __dec_obj100=litem_158->item;
                            litem_158->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0); }
                            self->tail=litem_158;
                            self->head->next=litem_158;
                        }
                        else {
                            litem_159=((struct list_item$1sNodeph*)(right_value180=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "18field.c", 771)));
                            litem_159->prev=self->tail;
                            litem_159->next=((void*)0);
                            __dec_obj101=litem_159->item;
                            litem_159->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0); }
                            self->tail->next=litem_159;
                            self->tail=litem_159;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                    }
                    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                        if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                    }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* right_value184;
struct sStoreArrayNode* result_161;
void* right_value185;
struct sNode* __dec_obj102;
void* right_value186;
struct sNode* __dec_obj103;
void* right_value187;
struct list$1sNodeph* __dec_obj104;
void* right_value188;
char* __dec_obj105;
memset(&right_value184, 0, sizeof(void*));
memset(&result_161, 0, sizeof(struct sStoreArrayNode*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sStoreArrayNode* __result110__ = (void*)0;
                        return __result110__;
                    }
                    result_161=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value184=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 773))));
                    if(right_value184) { come_call_finalizer(sStoreArrayNode_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        __dec_obj102=result_161->mLeft;
                        result_161->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=sNodep_clone(self->mLeft))));
                        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0); }
                        if(right_value185) { right_value185 = come_decrement_ref_count(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        __dec_obj103=result_161->mRight;
                        result_161->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=sNodep_clone(self->mRight))));
                        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0); }
                        if(right_value186) { right_value186 = come_decrement_ref_count(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0); } 
                    }
                    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                        __dec_obj104=result_161->mArrayNum;
                        result_161->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value187=list$1sNodephp_clone(self->mArrayNum))));
                        if(__dec_obj104) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value187) { come_call_finalizer(list$1sNodephp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    if(self!=((void*)0)) {
                        result_161->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj105=result_161->sname;
                        result_161->sname=(char*)come_increment_ref_count(((char*)(right_value188=string_clone(self->sname))));
                        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0); }
                        if(right_value188) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sStoreArrayNode* __result111__ = result_161;
                    if(result_161) { come_call_finalizer(sStoreArrayNode_finalize,result_161, (void*)0, (void*)0, 0, 0, 1); }
                    return __result111__;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                    }
                    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                        if(self->mArrayNum) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                    }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* right_value192;
struct sLoadArrayNode* result_162;
void* right_value193;
struct sNode* __dec_obj107;
void* right_value194;
struct list$1sNodeph* __dec_obj108;
void* right_value195;
char* __dec_obj109;
memset(&right_value192, 0, sizeof(void*));
memset(&result_162, 0, sizeof(struct sLoadArrayNode*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sLoadArrayNode* __result112__ = (void*)0;
                        return __result112__;
                    }
                    result_162=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value192=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 776))));
                    if(right_value192) { come_call_finalizer(sLoadArrayNode_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        __dec_obj107=result_162->mLeft;
                        result_162->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=sNodep_clone(self->mLeft))));
                        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0); }
                        if(right_value193) { right_value193 = come_decrement_ref_count(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0); } 
                    }
                    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                        __dec_obj108=result_162->mArrayNum;
                        result_162->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value194=list$1sNodephp_clone(self->mArrayNum))));
                        if(__dec_obj108) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value194) { come_call_finalizer(list$1sNodephp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    if(self!=((void*)0)) {
                        result_162->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj109=result_162->sname;
                        result_162->sname=(char*)come_increment_ref_count(((char*)(right_value195=string_clone(self->sname))));
                        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0); }
                        if(right_value195) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sLoadArrayNode* __result113__ = result_162;
                    if(result_162) { come_call_finalizer(sLoadArrayNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 1); }
                    return __result113__;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* right_value199;
struct sNullCheckNode* result_163;
void* right_value200;
struct sNode* __dec_obj111;
void* right_value201;
char* __dec_obj112;
memset(&right_value199, 0, sizeof(void*));
memset(&result_163, 0, sizeof(struct sNullCheckNode*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sNullCheckNode* __result114__ = (void*)0;
                    return __result114__;
                }
                result_163=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value199=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 783))));
                if(right_value199) { come_call_finalizer(sNullCheckNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj111=result_163->mLeft;
                    result_163->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value200=sNodep_clone(self->mLeft))));
                    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0); }
                    if(right_value200) { right_value200 = come_decrement_ref_count(right_value200, ((struct sNode*)right_value200)->finalize, ((struct sNode*)right_value200)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_163->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj112=result_163->sname;
                    result_163->sname=(char*)come_increment_ref_count(((char*)(right_value201=string_clone(self->sname))));
                    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0); }
                    if(right_value201) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0); }
                }
                struct sNullCheckNode* __result115__ = result_163;
                if(result_163) { come_call_finalizer(sNullCheckNode_finalize,result_163, (void*)0, (void*)0, 0, 0, 1); }
                return __result115__;
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                    }
                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                        if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* right_value207;
struct sStoreFieldNode* result_166;
void* right_value208;
struct sNode* __dec_obj114;
void* right_value209;
struct sNode* __dec_obj115;
void* right_value210;
char* __dec_obj116;
void* right_value211;
char* __dec_obj117;
memset(&right_value207, 0, sizeof(void*));
memset(&result_166, 0, sizeof(struct sStoreFieldNode*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sStoreFieldNode* __result116__ = (void*)0;
                        return __result116__;
                    }
                    result_166=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value207=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 804))));
                    if(right_value207) { come_call_finalizer(sStoreFieldNode_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        __dec_obj114=result_166->mLeft;
                        result_166->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNodep_clone(self->mLeft))));
                        if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0); }
                        if(right_value208) { right_value208 = come_decrement_ref_count(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        __dec_obj115=result_166->mRight;
                        result_166->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=sNodep_clone(self->mRight))));
                        if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0); }
                        if(right_value209) { right_value209 = come_decrement_ref_count(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0); } 
                    }
                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                        __dec_obj116=result_166->mName;
                        result_166->mName=(char*)come_increment_ref_count(((char*)(right_value210=string_clone(self->mName))));
                        if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0); }
                        if(right_value210) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0); }
                    }
                    if(self!=((void*)0)) {
                        result_166->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj117=result_166->sname;
                        result_166->sname=(char*)come_increment_ref_count(((char*)(right_value211=string_clone(self->sname))));
                        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0); }
                        if(right_value211) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sStoreFieldNode* __result117__ = result_166;
                    if(result_166) { come_call_finalizer(sStoreFieldNode_finalize,result_166, (void*)0, (void*)0, 0, 0, 1); }
                    return __result117__;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                    }
                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                        if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                    }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* right_value217;
struct sLoadFieldNode* result_167;
void* right_value218;
struct sNode* __dec_obj120;
void* right_value219;
char* __dec_obj121;
void* right_value220;
char* __dec_obj122;
memset(&right_value217, 0, sizeof(void*));
memset(&result_167, 0, sizeof(struct sLoadFieldNode*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sLoadFieldNode* __result118__ = (void*)0;
                        return __result118__;
                    }
                    result_167=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value217=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 810))));
                    if(right_value217) { come_call_finalizer(sLoadFieldNode_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        __dec_obj120=result_167->mLeft;
                        result_167->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNodep_clone(self->mLeft))));
                        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0); }
                        if(right_value218) { right_value218 = come_decrement_ref_count(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0); } 
                    }
                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                        __dec_obj121=result_167->mName;
                        result_167->mName=(char*)come_increment_ref_count(((char*)(right_value219=string_clone(self->mName))));
                        if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0); }
                        if(right_value219) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0); }
                    }
                    if(self!=((void*)0)) {
                        result_167->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj122=result_167->sname;
                        result_167->sname=(char*)come_increment_ref_count(((char*)(right_value220=string_clone(self->sname))));
                        if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0); }
                        if(right_value220) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sLoadFieldNode* __result119__ = result_167;
                    if(result_167) { come_call_finalizer(sLoadFieldNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 1); }
                    return __result119__;
}

