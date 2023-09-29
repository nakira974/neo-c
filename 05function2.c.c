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
enum { _ISupper=((0)<8?((1<<(0))<<8):((1<<(0))>>8)),_ISlower=((1)<8?((1<<(1))<<8):((1<<(1))>>8)),_ISalpha=((2)<8?((1<<(2))<<8):((1<<(2))>>8)),_ISdigit=((3)<8?((1<<(3))<<8):((1<<(3))>>8)),_ISxdigit=((4)<8?((1<<(4))<<8):((1<<(4))>>8)),_ISspace=((5)<8?((1<<(5))<<8):((1<<(5))>>8)),_ISprint=((6)<8?((1<<(6))<<8):((1<<(6))>>8)),_ISgraph=((7)<8?((1<<(7))<<8):((1<<(7))>>8)),_ISblank=((8)<8?((1<<(8))<<8):((1<<(8))>>8)),_IScntrl=((9)<8?((1<<(9))<<8):((1<<(9))>>8)),_ISpunct=((10)<8?((1<<(10))<<8):((1<<(10))>>8)),_ISalnum=((11)<8?((1<<(11))<<8):((1<<(11))>>8))};
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

void come_call_finzlier(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free);

void come_free_object(void* mem);

void* nccalloc(int nmemb, int size);

void* come_memdup(void* block);

char* __builtin_string(char* str);

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

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);

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

const unsigned short int** __ctype_b_loc();

const int** __ctype_tolower_loc();

const int** __ctype_toupper_loc();

int isalnum(int anonymous_var_name20);

int isalpha(int anonymous_var_name21);

int iscntrl(int anonymous_var_name22);

int isdigit(int anonymous_var_name23);

int islower(int anonymous_var_name24);

int isgraph(int anonymous_var_name25);

int isprint(int anonymous_var_name26);

int ispunct(int anonymous_var_name27);

int isspace(int anonymous_var_name28);

int isupper(int anonymous_var_name29);

int isxdigit(int anonymous_var_name30);

int tolower(int __c);

int toupper(int __c);

int isblank(int anonymous_var_name31);

int isctype(int __c, int __mask);

int isascii(int __c);

int toascii(int __c);

int _toupper(int anonymous_var_name32);

int _tolower(int anonymous_var_name33);

int isalnum_l(int anonymous_var_name34, struct __locale_struct* anonymous_var_name35);

int isalpha_l(int anonymous_var_name36, struct __locale_struct* anonymous_var_name37);

int iscntrl_l(int anonymous_var_name38, struct __locale_struct* anonymous_var_name39);

int isdigit_l(int anonymous_var_name40, struct __locale_struct* anonymous_var_name41);

int islower_l(int anonymous_var_name42, struct __locale_struct* anonymous_var_name43);

int isgraph_l(int anonymous_var_name44, struct __locale_struct* anonymous_var_name45);

int isprint_l(int anonymous_var_name46, struct __locale_struct* anonymous_var_name47);

int ispunct_l(int anonymous_var_name48, struct __locale_struct* anonymous_var_name49);

int isspace_l(int anonymous_var_name50, struct __locale_struct* anonymous_var_name51);

int isupper_l(int anonymous_var_name52, struct __locale_struct* anonymous_var_name53);

int isxdigit_l(int anonymous_var_name54, struct __locale_struct* anonymous_var_name55);

int isblank_l(int anonymous_var_name56, struct __locale_struct* anonymous_var_name57);

int __tolower_l(int __c, struct __locale_struct* __l);

int tolower_l(int __c, struct __locale_struct* __l);

int __toupper_l(int __c, struct __locale_struct* __l);

int toupper_l(int __c, struct __locale_struct* __l);

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
static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
char* parse_attribute(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self);
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
    return __result1__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    unsigned int __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result2__;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
    unsigned long int __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result3__;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
    unsigned short int __result4__ = __x;
    return __result4__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
    unsigned int __result5__ = __x;
    return __result5__;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
    unsigned long int __result6__ = __x;
    return __result6__;
}

// body function






struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* finalizer_366;
void* right_value480;
char* real_fun_name_367;
void* right_value481;
struct sType* type2_368;
struct sClass* klass_369;
void* right_value482;
void* right_value483;
struct buffer* source_370;
struct tuple2$2charphsTypeph* it_372;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* name_374;
struct sType* field_type_375;
char* p_377;
int sline_378;
char* head_379;
struct buffer* source3_380;
struct buffer* __dec_obj105;
void* right_value484;
struct sBlock* block_381;
void* right_value485;
void* right_value486;
struct sType* result_type_382;
void* right_value487;
char* name_383;
void* right_value488;
struct sType* self_type_384;
struct sType* __list_values25___385[1];
void* right_value489;
void* right_value490;
struct list$1sTypeph* param_types_386;
void* right_value491;
char* __list_values26___387[1];
void* right_value492;
void* right_value493;
struct list$1charph* param_names_388;
void* right_value494;
void* right_value495;
struct list$1charph* param_default_parametors_389;
void* right_value496;
void* right_value497;
struct buffer* header_buf_390;
void* right_value498;
int i_391;
struct sType* param_type_392;
char* param_name_396;
void* right_value499;
void* right_value500;
void* right_value501;
void* right_value502;
struct sFun* fun_397;
void* right_value503;
struct sFun* fun2_398;
void* right_value504;
void* right_value505;
void* right_value506;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value510;
struct sNode* node_400;
struct buffer* __dec_obj108;
void* right_value511;
void* right_value512;
memset(&finalizer_366, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value480, 0, sizeof(void*));
memset(&real_fun_name_367, 0, sizeof(char*)); /* ddd */
memset(&right_value481, 0, sizeof(void*));
memset(&type2_368, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_369, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value482, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
memset(&source_370, 0, sizeof(struct buffer*)); /* ddd */
memset(&it_372, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_374, 0, sizeof(char*)); /* ccc */
memset(&field_type_375, 0, sizeof(struct sType*)); /* ccc */
memset(&name_374, 0, sizeof(char*)); /* eee */
memset(&field_type_375, 0, sizeof(struct sType*)); /* eee */
memset(&p_377, 0, sizeof(char*)); /* ddd */
memset(&sline_378, 0, sizeof(int)); /* ddd */
memset(&head_379, 0, sizeof(char*)); /* ddd */
memset(&source3_380, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value484, 0, sizeof(void*));
memset(&block_381, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&result_type_382, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value487, 0, sizeof(void*));
memset(&name_383, 0, sizeof(char*)); /* ddd */
memset(&right_value488, 0, sizeof(void*));
memset(&self_type_384, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value489, 0, sizeof(void*));
memset(&right_value490, 0, sizeof(void*));
memset(&param_types_386, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value491, 0, sizeof(void*));
memset(&right_value492, 0, sizeof(void*));
memset(&right_value493, 0, sizeof(void*));
memset(&param_names_388, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value494, 0, sizeof(void*));
memset(&right_value495, 0, sizeof(void*));
memset(&param_default_parametors_389, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value496, 0, sizeof(void*));
memset(&right_value497, 0, sizeof(void*));
memset(&header_buf_390, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value498, 0, sizeof(void*));
memset(&i_391, 0, sizeof(int)); /* ddd */
memset(&param_type_392, 0, sizeof(struct sType*)); /* ddd */
memset(&param_name_396, 0, sizeof(char*)); /* ddd */
memset(&right_value499, 0, sizeof(void*));
memset(&right_value500, 0, sizeof(void*));
memset(&right_value501, 0, sizeof(void*));
memset(&right_value502, 0, sizeof(void*));
memset(&fun_397, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value503, 0, sizeof(void*));
memset(&fun2_398, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value504, 0, sizeof(void*));
memset(&right_value505, 0, sizeof(void*));
memset(&right_value506, 0, sizeof(void*));
memset(&right_value510, 0, sizeof(void*));
memset(&node_400, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value511, 0, sizeof(void*));
memset(&right_value512, 0, sizeof(void*));
    finalizer_366=((void*)0);
    real_fun_name_367=(char*)come_increment_ref_count(((char*)(right_value480=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value480) { right_value480 = come_decrement_ref_count(right_value480, (void*)0, (void*)0, 1, 0); }
    type2_368=(struct sType*)come_increment_ref_count(((struct sType*)(right_value481=solve_generics(type,type,info))));
    if(right_value481) { come_call_finalizer(sType_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_368;
    klass_369=type->mClass;
    if(type->mPointerNum>0&&klass_369->mStruct) {
        source_370=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value483=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value482=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value482) { come_call_finalizer(buffer_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value483) { come_call_finalizer(buffer_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_370,123);
        klass_369=map$2charphsClassphp_operator_load_element(info->classes,klass_369->mName);
        for(
        it_372=list$1tuple2$2charphsTypephphp_begin((klass_369->mFields));
        !list$1tuple2$2charphsTypephphp_end((klass_369->mFields));
        it_372=list$1tuple2$2charphsTypephphp_next((klass_369->mFields))
        ){
            multiple_assgin_var4=it_372;
            name_374=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
            field_type_375=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
            if(string_operator_equals(type->mClass->mName,field_type_375->mClass->mName)&&type->mPointerNum==field_type_375->mPointerNum&&field_type_375->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_375->mHeap) {
                char source2_376[1024];
                memset(&source2_376, 0, sizeof(source2_376)); /* aaa */
                snprintf(source2_376,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_374,name_374);
                buffer_append_str(source_370,source2_376);
            }
            if(name_374) { name_374 = come_decrement_ref_count(name_374, (void*)0, (void*)0, 0, 0); }
            if(field_type_375) { come_call_finalizer(sType_finalize,field_type_375, (void*)0, (void*)0, 0, 0, 0); }
        }
        buffer_append_char(source_370,125);
        p_377=info->p;
        sline_378=info->sline;
        head_379=info->head;
        source3_380=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj105=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_370);
        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0); }
        info->p=source_370->buf;
        info->head=source_370->buf;
        block_381=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value484=parse_block(info,(_Bool)0))));
        if(right_value484) { come_call_finalizer(sBlock_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0); }
        result_type_382=(struct sType*)come_increment_ref_count(((struct sType*)(right_value486=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value485=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value485) { come_call_finalizer(sType_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value486) { come_call_finalizer(sType_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0); }
        name_383=(char*)come_increment_ref_count(((char*)(right_value487=string_clone(real_fun_name_367))));
        if(right_value487) { right_value487 = come_decrement_ref_count(right_value487, (void*)0, (void*)0, 1, 0); }
        self_type_384=(struct sType*)come_increment_ref_count(((struct sType*)(right_value488=sType_clone(type))));
        if(right_value488) { come_call_finalizer(sType_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0); }
        self_type_384->mHeap=(_Bool)0;
        if(self_type_384->mPointerNum>1) {
            self_type_384->mPointerNum=1;
        }
        {__list_values25___385[0]=come_increment_ref_count(self_type_384);
}        param_types_386=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value490=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value489=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values25___385))));
        if(right_value490) { come_call_finalizer(list$1sTypephp_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values26___387[0]=come_increment_ref_count(((char*)(right_value491=__builtin_string("self"))));
}        param_names_388=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value493=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value492=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values26___387))));
        if(right_value491) { right_value491 = come_decrement_ref_count(right_value491, (void*)0, (void*)0, 1, 0); }
        if(right_value493) { come_call_finalizer(list$1charphp_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_389=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value495=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value494=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value495) { come_call_finalizer(list$1charphp_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_390=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value497=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value496=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value496) { come_call_finalizer(buffer_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value497) { come_call_finalizer(buffer_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_390,((char*)(right_value498=make_come_type_name_string(result_type_382,info))));
        if(right_value498) { right_value498 = come_decrement_ref_count(right_value498, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_390," ");
        buffer_append_str(header_buf_390,real_fun_name_367);
        buffer_append_str(header_buf_390,"(");
        for(
        i_391=0;
        i_391<list$1sTypephp_length(param_types_386);
        i_391++
        ){
            param_type_392=list$1sTypephp_operator_load_element(param_types_386,i_391);
            param_name_396=list$1charphp_operator_load_element(param_names_388,i_391);
            buffer_append_str(header_buf_390,((char*)(right_value499=make_come_type_name_string(param_type_392,info))));
            if(right_value499) { right_value499 = come_decrement_ref_count(right_value499, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_390," ");
            buffer_append_str(header_buf_390,param_name_396);
            if(i_391!=list$1sTypephp_length(param_types_386)-1) {
                buffer_append_str(header_buf_390,",");
            }
        }
        buffer_append_str(header_buf_390,")");
        result_type_382->mStatic=(_Bool)0;
        fun_397=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value502=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value500=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_383),(struct sType*)come_increment_ref_count(result_type_382),(struct list$1sTypeph*)come_increment_ref_count(param_types_386),(struct list$1charph*)come_increment_ref_count(param_names_388),(struct list$1charph*)come_increment_ref_count(param_default_parametors_389),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_381),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value501=buffer_to_string(header_buf_390)))),info))));
        if(right_value500) { come_call_finalizer(sFun_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value501) { right_value501 = come_decrement_ref_count(right_value501, (void*)0, (void*)0, 1, 0); }
        if(right_value502) { come_call_finalizer(sFun_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0); }
        fun2_398=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value503=__builtin_string(fun_name))));
        if(right_value503) { right_value503 = come_decrement_ref_count(right_value503, (void*)0, (void*)0, 1, 0); }
        if(fun2_398==((void*)0)||fun2_398->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value504=string_clone(name_383)))),(struct sFun*)come_increment_ref_count(fun_397));
            if(right_value504) { right_value504 = come_decrement_ref_count(right_value504, (void*)0, (void*)0, 1, 0); }
        }
        finalizer_366=fun_397;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value506=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value505=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_397),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=sFunNode_finalize;
        _inf_value6->clone=sFunNode_clone;
        _inf_value6->compile=sFunNode_compile;
        _inf_value6->sline=sFunNode_sline;
        _inf_value6->sname=sFunNode_sname;
        _inf_value6->terminated=sFunNode_terminated;
        node_400=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value510=_inf_value6)));
        if(right_value505) { come_call_finalizer(sFunNode_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value506) { come_call_finalizer(sFunNode_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value510) { right_value510 = come_decrement_ref_count(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0); } 
        if(!node_400->compile(node_400->_protocol_obj,info)) {
            err_msg(info,"compiling is failed(X)");
            exit(2);
        }
        __dec_obj108=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_380);
        if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0); }
        info->p=p_377;
        info->head=head_379;
        info->sline=sline_378;
        if(source_370) { come_call_finalizer(buffer_finalize,source_370, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_380) { come_call_finalizer(buffer_finalize,source3_380, (void*)0, (void*)0, 0, 0, 0); }
        if(block_381) { come_call_finalizer(sBlock_finalize,block_381, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_382) { come_call_finalizer(sType_finalize,result_type_382, (void*)0, (void*)0, 0, 0, 0); }
        if(name_383) { name_383 = come_decrement_ref_count(name_383, (void*)0, (void*)0, 0, 0); }
        if(self_type_384) { come_call_finalizer(sType_finalize,self_type_384, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_386) { come_call_finalizer(list$1sTypephp_finalize,param_types_386, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_388) { come_call_finalizer(list$1charphp_finalize,param_names_388, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_389) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_389, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_390) { come_call_finalizer(buffer_finalize,header_buf_390, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_397) { come_call_finalizer(sFun_finalize,fun_397, (void*)0, (void*)0, 0, 0, 0); }
        if(node_400) { node_400 = come_decrement_ref_count(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result158__ = ((struct tuple2$2sFunpcharph*)(right_value512=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value511=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1))))),finalizer_366,(char*)come_increment_ref_count(real_fun_name_367))));
    if(real_fun_name_367) { real_fun_name_367 = come_decrement_ref_count(real_fun_name_367, (void*)0, (void*)0, 0, 0); }
    if(type2_368) { come_call_finalizer(sType_finalize,type2_368, (void*)0, (void*)0, 0, 0, 0); }
    return __result158__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* cloner_504;
void* right_value618;
char* real_fun_name_505;
void* right_value619;
struct sType* type2_506;
struct sClass* klass_507;
void* right_value620;
void* right_value621;
struct buffer* source_508;
void* right_value622;
void* right_value623;
char* name_509;
struct tuple2$2charphsTypeph* it_511;
struct tuple2$2charphsTypeph* multiple_assgin_var8;
char* name_512;
struct sType* field_type_513;
struct tuple2$2charphsTypeph* it_515;
struct tuple2$2charphsTypeph* multiple_assgin_var9;
char* name_516;
struct sType* field_type_517;
void* right_value624;
char* p_520;
int sline_521;
struct buffer* source3_522;
char* head_523;
struct buffer* __dec_obj122;
void* right_value625;
struct sBlock* block_524;
void* right_value626;
struct sType* result_type_525;
void* right_value627;
char* name_526;
void* right_value628;
struct sType* self_type_527;
struct sType* __list_values33___528[1];
void* right_value629;
void* right_value630;
struct list$1sTypeph* param_types_529;
void* right_value631;
char* __list_values34___530[1];
void* right_value632;
void* right_value633;
struct list$1charph* param_names_531;
void* right_value634;
void* right_value635;
struct list$1charph* param_default_parametors_532;
void* right_value636;
void* right_value637;
struct buffer* header_buf_533;
void* right_value638;
int i_534;
struct sType* param_type_535;
char* param_name_536;
void* right_value639;
void* right_value640;
void* right_value641;
void* right_value642;
struct sFun* fun_537;
void* right_value643;
struct sFun* fun2_538;
void* right_value644;
void* right_value645;
void* right_value646;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value650;
struct sNode* node_540;
struct buffer* __dec_obj125;
void* right_value651;
void* right_value652;
memset(&cloner_504, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value618, 0, sizeof(void*));
memset(&real_fun_name_505, 0, sizeof(char*)); /* ddd */
memset(&right_value619, 0, sizeof(void*));
memset(&type2_506, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_507, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value620, 0, sizeof(void*));
memset(&right_value621, 0, sizeof(void*));
memset(&source_508, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value622, 0, sizeof(void*));
memset(&right_value623, 0, sizeof(void*));
memset(&name_509, 0, sizeof(char*)); /* ddd */
memset(&it_511, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_512, 0, sizeof(char*)); /* ccc */
memset(&field_type_513, 0, sizeof(struct sType*)); /* ccc */
memset(&name_512, 0, sizeof(char*)); /* eee */
memset(&field_type_513, 0, sizeof(struct sType*)); /* eee */
memset(&it_515, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_516, 0, sizeof(char*)); /* ccc */
memset(&field_type_517, 0, sizeof(struct sType*)); /* ccc */
memset(&name_516, 0, sizeof(char*)); /* eee */
memset(&field_type_517, 0, sizeof(struct sType*)); /* eee */
memset(&right_value624, 0, sizeof(void*));
memset(&p_520, 0, sizeof(char*)); /* ddd */
memset(&sline_521, 0, sizeof(int)); /* ddd */
memset(&source3_522, 0, sizeof(struct buffer*)); /* ddd */
memset(&head_523, 0, sizeof(char*)); /* ddd */
memset(&right_value625, 0, sizeof(void*));
memset(&block_524, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value626, 0, sizeof(void*));
memset(&result_type_525, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value627, 0, sizeof(void*));
memset(&name_526, 0, sizeof(char*)); /* ddd */
memset(&right_value628, 0, sizeof(void*));
memset(&self_type_527, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value629, 0, sizeof(void*));
memset(&right_value630, 0, sizeof(void*));
memset(&param_types_529, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value631, 0, sizeof(void*));
memset(&right_value632, 0, sizeof(void*));
memset(&right_value633, 0, sizeof(void*));
memset(&param_names_531, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value634, 0, sizeof(void*));
memset(&right_value635, 0, sizeof(void*));
memset(&param_default_parametors_532, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value636, 0, sizeof(void*));
memset(&right_value637, 0, sizeof(void*));
memset(&header_buf_533, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value638, 0, sizeof(void*));
memset(&i_534, 0, sizeof(int)); /* ddd */
memset(&param_type_535, 0, sizeof(struct sType*)); /* ddd */
memset(&param_name_536, 0, sizeof(char*)); /* ddd */
memset(&right_value639, 0, sizeof(void*));
memset(&right_value640, 0, sizeof(void*));
memset(&right_value641, 0, sizeof(void*));
memset(&right_value642, 0, sizeof(void*));
memset(&fun_537, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value643, 0, sizeof(void*));
memset(&fun2_538, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value644, 0, sizeof(void*));
memset(&right_value645, 0, sizeof(void*));
memset(&right_value646, 0, sizeof(void*));
memset(&right_value650, 0, sizeof(void*));
memset(&node_540, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value651, 0, sizeof(void*));
memset(&right_value652, 0, sizeof(void*));
    cloner_504=((void*)0);
    real_fun_name_505=(char*)come_increment_ref_count(((char*)(right_value618=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value618) { right_value618 = come_decrement_ref_count(right_value618, (void*)0, (void*)0, 1, 0); }
    type2_506=(struct sType*)come_increment_ref_count(((struct sType*)(right_value619=solve_generics(type,type,info))));
    if(right_value619) { come_call_finalizer(sType_finalize,right_value619, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_506;
    klass_507=type->mClass;
    if(type->mPointerNum>0&&!klass_507->mNumber) {
        source_508=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value621=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value620=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value620) { come_call_finalizer(buffer_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value621) { come_call_finalizer(buffer_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(source_508,"{\n");
        buffer_append_str(source_508,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_508,((char*)(right_value623=xsprintf("var result = new %s;\n",((char*)(right_value622=make_type_name_string(type,(_Bool)0,(_Bool)0,info,(_Bool)1)))))));
        if(right_value622) { right_value622 = come_decrement_ref_count(right_value622, (void*)0, (void*)0, 1, 0); }
        if(right_value623) { right_value623 = come_decrement_ref_count(right_value623, (void*)0, (void*)0, 1, 0); }
        if(klass_507->mProtocol) {
            name_509="_protocol_obj";
            char source2_510[1024];
            memset(&source2_510, 0, sizeof(source2_510)); /* aaa */
            snprintf(source2_510,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_508,source2_510);
            klass_507=map$2charphsClassphp_operator_load_element(info->classes,klass_507->mName);
            for(
            it_511=list$1tuple2$2charphsTypephphp_begin((klass_507->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_507->mFields));
            it_511=list$1tuple2$2charphsTypephphp_next((klass_507->mFields))
            ){
                multiple_assgin_var8=it_511;
                name_512=(char*)come_increment_ref_count(multiple_assgin_var8->v1);
                field_type_513=(struct sType*)come_increment_ref_count(multiple_assgin_var8->v2);
                if(string_operator_equals(type->mClass->mName,field_type_513->mClass->mName)&&type->mPointerNum==field_type_513->mPointerNum&&field_type_513->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_512,"_protocol_obj")) {
                }
                else {
                    char source2_514[1024];
                    memset(&source2_514, 0, sizeof(source2_514)); /* aaa */
                    snprintf(source2_514,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_512,name_512);
                    buffer_append_str(source_508,source2_514);
                }
                if(name_512) { name_512 = come_decrement_ref_count(name_512, (void*)0, (void*)0, 0, 0); }
                if(field_type_513) { come_call_finalizer(sType_finalize,field_type_513, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            klass_507=map$2charphsClassphp_operator_load_element(info->classes,klass_507->mName);
            for(
            it_515=list$1tuple2$2charphsTypephphp_begin((klass_507->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_507->mFields));
            it_515=list$1tuple2$2charphsTypephphp_next((klass_507->mFields))
            ){
                multiple_assgin_var9=it_515;
                name_516=(char*)come_increment_ref_count(multiple_assgin_var9->v1);
                field_type_517=(struct sType*)come_increment_ref_count(multiple_assgin_var9->v2);
                if(string_operator_equals(type->mClass->mName,field_type_517->mClass->mName)&&type->mPointerNum==field_type_517->mPointerNum&&field_type_517->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_517->mHeap) {
                    char source2_518[1024];
                    memset(&source2_518, 0, sizeof(source2_518)); /* aaa */
                    snprintf(source2_518,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_516,name_516,name_516);
                    buffer_append_str(source_508,source2_518);
                }
                else {
                    char source2_519[1024];
                    memset(&source2_519, 0, sizeof(source2_519)); /* aaa */
                    snprintf(source2_519,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_516,name_516);
                    buffer_append_str(source_508,source2_519);
                }
                if(name_516) { name_516 = come_decrement_ref_count(name_516, (void*)0, (void*)0, 0, 0); }
                if(field_type_517) { come_call_finalizer(sType_finalize,field_type_517, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_str(source_508,((char*)(right_value624=xsprintf("return result;"))));
        if(right_value624) { right_value624 = come_decrement_ref_count(right_value624, (void*)0, (void*)0, 1, 0); }
        buffer_append_char(source_508,125);
        p_520=info->p;
        sline_521=info->sline;
        source3_522=(struct buffer*)come_increment_ref_count(info->source);
        head_523=info->head;
        __dec_obj122=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_508);
        if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0); }
        info->p=info->source->buf;
        info->head=info->source->buf;
        block_524=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value625=parse_block(info,(_Bool)0))));
        if(right_value625) { come_call_finalizer(sBlock_finalize,right_value625, (void*)0, (void*)0, 0, 1, 0); }
        result_type_525=(struct sType*)come_increment_ref_count(((struct sType*)(right_value626=sType_clone(type))));
        if(right_value626) { come_call_finalizer(sType_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0); }
        name_526=(char*)come_increment_ref_count(((char*)(right_value627=string_clone(real_fun_name_505))));
        if(right_value627) { right_value627 = come_decrement_ref_count(right_value627, (void*)0, (void*)0, 1, 0); }
        self_type_527=(struct sType*)come_increment_ref_count(((struct sType*)(right_value628=sType_clone(type))));
        if(right_value628) { come_call_finalizer(sType_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0); }
        self_type_527->mHeap=(_Bool)0;
        {__list_values33___528[0]=come_increment_ref_count(self_type_527);
}        param_types_529=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value630=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value629=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values33___528))));
        if(right_value630) { come_call_finalizer(list$1sTypephp_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values34___530[0]=come_increment_ref_count(((char*)(right_value631=__builtin_string("self"))));
}        param_names_531=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value633=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value632=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values34___530))));
        if(right_value631) { right_value631 = come_decrement_ref_count(right_value631, (void*)0, (void*)0, 1, 0); }
        if(right_value633) { come_call_finalizer(list$1charphp_finalize,right_value633, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_532=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value635=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value634=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value635) { come_call_finalizer(list$1charphp_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_533=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value637=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value636=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value636) { come_call_finalizer(buffer_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value637) { come_call_finalizer(buffer_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_533,((char*)(right_value638=make_come_type_name_string(result_type_525,info))));
        if(right_value638) { right_value638 = come_decrement_ref_count(right_value638, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_533," ");
        buffer_append_str(header_buf_533,real_fun_name_505);
        buffer_append_str(header_buf_533,"(");
        for(
        i_534=0;
        i_534<list$1sTypephp_length(param_types_529);
        i_534++
        ){
            param_type_535=list$1sTypephp_operator_load_element(param_types_529,i_534);
            param_name_536=list$1charphp_operator_load_element(param_names_531,i_534);
            buffer_append_str(header_buf_533,((char*)(right_value639=make_come_type_name_string(param_type_535,info))));
            if(right_value639) { right_value639 = come_decrement_ref_count(right_value639, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_533," ");
            buffer_append_str(header_buf_533,param_name_536);
            if(i_534!=list$1sTypephp_length(param_types_529)-1) {
                buffer_append_str(header_buf_533,",");
            }
        }
        buffer_append_str(header_buf_533,")");
        result_type_525->mStatic=(_Bool)0;
        fun_537=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value642=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value640=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_526),(struct sType*)come_increment_ref_count(result_type_525),(struct list$1sTypeph*)come_increment_ref_count(param_types_529),(struct list$1charph*)come_increment_ref_count(param_names_531),(struct list$1charph*)come_increment_ref_count(param_default_parametors_532),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_524),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value641=buffer_to_string(header_buf_533)))),info))));
        if(right_value640) { come_call_finalizer(sFun_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value641) { right_value641 = come_decrement_ref_count(right_value641, (void*)0, (void*)0, 1, 0); }
        if(right_value642) { come_call_finalizer(sFun_finalize,right_value642, (void*)0, (void*)0, 0, 1, 0); }
        fun2_538=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value643=__builtin_string(fun_name))));
        if(right_value643) { right_value643 = come_decrement_ref_count(right_value643, (void*)0, (void*)0, 1, 0); }
        if(fun2_538==((void*)0)||fun2_538->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value644=string_clone(name_526)))),(struct sFun*)come_increment_ref_count(fun_537));
            if(right_value644) { right_value644 = come_decrement_ref_count(right_value644, (void*)0, (void*)0, 1, 0); }
        }
        cloner_504=fun_537;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value646=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value645=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_537),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=sFunNode_finalize;
        _inf_value10->clone=sFunNode_clone;
        _inf_value10->compile=sFunNode_compile;
        _inf_value10->sline=sFunNode_sline;
        _inf_value10->sname=sFunNode_sname;
        _inf_value10->terminated=sFunNode_terminated;
        node_540=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value650=_inf_value10)));
        if(right_value645) { come_call_finalizer(sFunNode_finalize,right_value645, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value646) { come_call_finalizer(sFunNode_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value650) { right_value650 = come_decrement_ref_count(right_value650, ((struct sNode*)right_value650)->finalize, ((struct sNode*)right_value650)->_protocol_obj, 1, 0); } 
        if(!node_540->compile(node_540->_protocol_obj,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj125=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_522);
        if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0); }
        info->p=p_520;
        info->head=head_523;
        info->sline=sline_521;
        if(source_508) { come_call_finalizer(buffer_finalize,source_508, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_522) { come_call_finalizer(buffer_finalize,source3_522, (void*)0, (void*)0, 0, 0, 0); }
        if(block_524) { come_call_finalizer(sBlock_finalize,block_524, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_525) { come_call_finalizer(sType_finalize,result_type_525, (void*)0, (void*)0, 0, 0, 0); }
        if(name_526) { name_526 = come_decrement_ref_count(name_526, (void*)0, (void*)0, 0, 0); }
        if(self_type_527) { come_call_finalizer(sType_finalize,self_type_527, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_529) { come_call_finalizer(list$1sTypephp_finalize,param_types_529, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_531) { come_call_finalizer(list$1charphp_finalize,param_names_531, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_532) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_532, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_533) { come_call_finalizer(buffer_finalize,header_buf_533, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_537) { come_call_finalizer(sFun_finalize,fun_537, (void*)0, (void*)0, 0, 0, 0); }
        if(node_540) { node_540 = come_decrement_ref_count(node_540, ((struct sNode*)node_540)->finalize, ((struct sNode*)node_540)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result171__ = ((struct tuple2$2sFunpcharph*)(right_value652=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value651=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1))))),cloner_504,(char*)come_increment_ref_count(real_fun_name_505))));
    if(real_fun_name_505) { real_fun_name_505 = come_decrement_ref_count(real_fun_name_505, (void*)0, (void*)0, 0, 0); }
    if(type2_506) { come_call_finalizer(sType_finalize,type2_506, (void*)0, (void*)0, 0, 0, 0); }
    return __result171__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* equaler_401;
void* right_value513;
char* real_fun_name_402;
void* right_value514;
struct sType* type2_403;
struct sClass* klass_404;
void* right_value515;
void* right_value516;
struct buffer* source_405;
char* name_406;
struct tuple2$2charphsTypeph* it_408;
struct tuple2$2charphsTypeph* multiple_assgin_var5;
char* name_409;
struct sType* field_type_410;
char* p_412;
int sline_413;
char* head_414;
struct buffer* source3_415;
struct buffer* __dec_obj110;
void* right_value517;
struct sBlock* block_416;
void* right_value518;
void* right_value519;
struct sType* result_type_417;
void* right_value520;
char* name_418;
void* right_value521;
struct sType* left_type_419;
void* right_value522;
struct sType* right_type_420;
struct sType* __list_values27___421[2];
void* right_value523;
void* right_value524;
struct list$1sTypeph* param_types_422;
void* right_value525;
void* right_value526;
char* __list_values28___423[2];
void* right_value527;
void* right_value528;
struct list$1charph* param_names_424;
void* right_value529;
void* right_value530;
struct list$1charph* param_default_parametors_425;
void* right_value531;
void* right_value532;
struct buffer* header_buf_426;
void* right_value533;
int i_427;
struct sType* param_type_428;
char* param_name_429;
void* right_value534;
void* right_value535;
void* right_value536;
void* right_value537;
struct sFun* fun_430;
void* right_value538;
struct sFun* fun2_431;
void* right_value539;
void* right_value540;
void* right_value541;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value545;
struct sNode* node_433;
struct buffer* __dec_obj113;
void* right_value546;
void* right_value547;
memset(&equaler_401, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value513, 0, sizeof(void*));
memset(&real_fun_name_402, 0, sizeof(char*)); /* ddd */
memset(&right_value514, 0, sizeof(void*));
memset(&type2_403, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_404, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value515, 0, sizeof(void*));
memset(&right_value516, 0, sizeof(void*));
memset(&source_405, 0, sizeof(struct buffer*)); /* ddd */
memset(&name_406, 0, sizeof(char*)); /* ddd */
memset(&it_408, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_409, 0, sizeof(char*)); /* ccc */
memset(&field_type_410, 0, sizeof(struct sType*)); /* ccc */
memset(&name_409, 0, sizeof(char*)); /* eee */
memset(&field_type_410, 0, sizeof(struct sType*)); /* eee */
memset(&p_412, 0, sizeof(char*)); /* ddd */
memset(&sline_413, 0, sizeof(int)); /* ddd */
memset(&head_414, 0, sizeof(char*)); /* ddd */
memset(&source3_415, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value517, 0, sizeof(void*));
memset(&block_416, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value518, 0, sizeof(void*));
memset(&right_value519, 0, sizeof(void*));
memset(&result_type_417, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value520, 0, sizeof(void*));
memset(&name_418, 0, sizeof(char*)); /* ddd */
memset(&right_value521, 0, sizeof(void*));
memset(&left_type_419, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value522, 0, sizeof(void*));
memset(&right_type_420, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value523, 0, sizeof(void*));
memset(&right_value524, 0, sizeof(void*));
memset(&param_types_422, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value525, 0, sizeof(void*));
memset(&right_value526, 0, sizeof(void*));
memset(&right_value527, 0, sizeof(void*));
memset(&right_value528, 0, sizeof(void*));
memset(&param_names_424, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value529, 0, sizeof(void*));
memset(&right_value530, 0, sizeof(void*));
memset(&param_default_parametors_425, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value531, 0, sizeof(void*));
memset(&right_value532, 0, sizeof(void*));
memset(&header_buf_426, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value533, 0, sizeof(void*));
memset(&i_427, 0, sizeof(int)); /* ddd */
memset(&param_type_428, 0, sizeof(struct sType*)); /* ddd */
memset(&param_name_429, 0, sizeof(char*)); /* ddd */
memset(&right_value534, 0, sizeof(void*));
memset(&right_value535, 0, sizeof(void*));
memset(&right_value536, 0, sizeof(void*));
memset(&right_value537, 0, sizeof(void*));
memset(&fun_430, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value538, 0, sizeof(void*));
memset(&fun2_431, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value539, 0, sizeof(void*));
memset(&right_value540, 0, sizeof(void*));
memset(&right_value541, 0, sizeof(void*));
memset(&right_value545, 0, sizeof(void*));
memset(&node_433, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value546, 0, sizeof(void*));
memset(&right_value547, 0, sizeof(void*));
    equaler_401=((void*)0);
    real_fun_name_402=(char*)come_increment_ref_count(((char*)(right_value513=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value513) { right_value513 = come_decrement_ref_count(right_value513, (void*)0, (void*)0, 1, 0); }
    type2_403=(struct sType*)come_increment_ref_count(((struct sType*)(right_value514=solve_generics(type,type,info))));
    if(right_value514) { come_call_finalizer(sType_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_403;
    klass_404=type->mClass;
    if(type->mPointerNum>0&&!klass_404->mNumber) {
        source_405=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value516=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value515=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value515) { come_call_finalizer(buffer_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value516) { come_call_finalizer(buffer_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_405,123);
        if(klass_404->mProtocol) {
            name_406="_protocol_obj";
            char source2_407[1024];
            memset(&source2_407, 0, sizeof(source2_407)); /* aaa */
            snprintf(source2_407,1024,"return left.%s.equals(right.%s);\n",name_406,name_406);
            buffer_append_str(source_405,source2_407);
        }
        else {
            klass_404=map$2charphsClassphp_operator_load_element(info->classes,klass_404->mName);
            for(
            it_408=list$1tuple2$2charphsTypephphp_begin((klass_404->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_404->mFields));
            it_408=list$1tuple2$2charphsTypephphp_next((klass_404->mFields))
            ){
                multiple_assgin_var5=it_408;
                name_409=(char*)come_increment_ref_count(multiple_assgin_var5->v1);
                field_type_410=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v2);
                if(string_operator_equals(type->mClass->mName,field_type_410->mClass->mName)&&type->mPointerNum==field_type_410->mPointerNum&&field_type_410->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_411[1024];
                memset(&source2_411, 0, sizeof(source2_411)); /* aaa */
                snprintf(source2_411,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_409,name_409);
                buffer_append_str(source_405,source2_411);
                if(name_409) { name_409 = come_decrement_ref_count(name_409, (void*)0, (void*)0, 0, 0); }
                if(field_type_410) { come_call_finalizer(sType_finalize,field_type_410, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_str(source_405,"return true;");
        buffer_append_char(source_405,125);
        p_412=info->p;
        sline_413=info->sline;
        head_414=info->head;
        source3_415=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj110=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_405);
        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0); }
        info->p=source_405->buf;
        info->head=source_405->buf;
        block_416=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value517=parse_block(info,(_Bool)0))));
        if(right_value517) { come_call_finalizer(sBlock_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0); }
        result_type_417=(struct sType*)come_increment_ref_count(((struct sType*)(right_value519=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value518=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
        if(right_value518) { come_call_finalizer(sType_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value519) { come_call_finalizer(sType_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0); }
        name_418=(char*)come_increment_ref_count(((char*)(right_value520=string_clone(real_fun_name_402))));
        if(right_value520) { right_value520 = come_decrement_ref_count(right_value520, (void*)0, (void*)0, 1, 0); }
        left_type_419=(struct sType*)come_increment_ref_count(((struct sType*)(right_value521=sType_clone(type))));
        if(right_value521) { come_call_finalizer(sType_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0); }
        left_type_419->mHeap=(_Bool)0;
        right_type_420=(struct sType*)come_increment_ref_count(((struct sType*)(right_value522=sType_clone(type))));
        if(right_value522) { come_call_finalizer(sType_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0); }
        right_type_420->mHeap=(_Bool)0;
        {__list_values27___421[0]=come_increment_ref_count(left_type_419);
__list_values27___421[1]=come_increment_ref_count(right_type_420);
}        param_types_422=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value524=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value523=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values27___421))));
        if(right_value524) { come_call_finalizer(list$1sTypephp_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values28___423[0]=come_increment_ref_count(((char*)(right_value525=__builtin_string("left"))));
__list_values28___423[1]=come_increment_ref_count(((char*)(right_value526=__builtin_string("right"))));
}        param_names_424=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value528=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value527=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values28___423))));
        if(right_value525) { right_value525 = come_decrement_ref_count(right_value525, (void*)0, (void*)0, 1, 0); }
        if(right_value526) { right_value526 = come_decrement_ref_count(right_value526, (void*)0, (void*)0, 1, 0); }
        if(right_value528) { come_call_finalizer(list$1charphp_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_425=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value530=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value529=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value530) { come_call_finalizer(list$1charphp_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_426=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value532=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value531=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value531) { come_call_finalizer(buffer_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value532) { come_call_finalizer(buffer_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_426,((char*)(right_value533=make_come_type_name_string(result_type_417,info))));
        if(right_value533) { right_value533 = come_decrement_ref_count(right_value533, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_426," ");
        buffer_append_str(header_buf_426,real_fun_name_402);
        buffer_append_str(header_buf_426,"(");
        for(
        i_427=0;
        i_427<list$1sTypephp_length(param_types_422);
        i_427++
        ){
            param_type_428=list$1sTypephp_operator_load_element(param_types_422,i_427);
            param_name_429=list$1charphp_operator_load_element(param_names_424,i_427);
            buffer_append_str(header_buf_426,((char*)(right_value534=make_come_type_name_string(param_type_428,info))));
            if(right_value534) { right_value534 = come_decrement_ref_count(right_value534, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_426," ");
            buffer_append_str(header_buf_426,param_name_429);
            if(i_427!=list$1sTypephp_length(param_types_422)-1) {
                buffer_append_str(header_buf_426,",");
            }
        }
        buffer_append_str(header_buf_426,")");
        result_type_417->mStatic=(_Bool)0;
        fun_430=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value537=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value535=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_418),(struct sType*)come_increment_ref_count(result_type_417),(struct list$1sTypeph*)come_increment_ref_count(param_types_422),(struct list$1charph*)come_increment_ref_count(param_names_424),(struct list$1charph*)come_increment_ref_count(param_default_parametors_425),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_416),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value536=buffer_to_string(header_buf_426)))),info))));
        if(right_value535) { come_call_finalizer(sFun_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value536) { right_value536 = come_decrement_ref_count(right_value536, (void*)0, (void*)0, 1, 0); }
        if(right_value537) { come_call_finalizer(sFun_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0); }
        fun2_431=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value538=__builtin_string(fun_name))));
        if(right_value538) { right_value538 = come_decrement_ref_count(right_value538, (void*)0, (void*)0, 1, 0); }
        if(fun2_431==((void*)0)||fun2_431->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value539=string_clone(name_418)))),(struct sFun*)come_increment_ref_count(fun_430));
            if(right_value539) { right_value539 = come_decrement_ref_count(right_value539, (void*)0, (void*)0, 1, 0); }
        }
        equaler_401=fun_430;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value541=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value540=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_430),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=sFunNode_finalize;
        _inf_value7->clone=sFunNode_clone;
        _inf_value7->compile=sFunNode_compile;
        _inf_value7->sline=sFunNode_sline;
        _inf_value7->sname=sFunNode_sname;
        _inf_value7->terminated=sFunNode_terminated;
        node_433=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value545=_inf_value7)));
        if(right_value540) { come_call_finalizer(sFunNode_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value541) { come_call_finalizer(sFunNode_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value545) { right_value545 = come_decrement_ref_count(right_value545, ((struct sNode*)right_value545)->finalize, ((struct sNode*)right_value545)->_protocol_obj, 1, 0); } 
        if(!node_433->compile(node_433->_protocol_obj,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj113=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_415);
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0); }
        info->p=p_412;
        info->head=head_414;
        info->sline=sline_413;
        if(source_405) { come_call_finalizer(buffer_finalize,source_405, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_415) { come_call_finalizer(buffer_finalize,source3_415, (void*)0, (void*)0, 0, 0, 0); }
        if(block_416) { come_call_finalizer(sBlock_finalize,block_416, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_417) { come_call_finalizer(sType_finalize,result_type_417, (void*)0, (void*)0, 0, 0, 0); }
        if(name_418) { name_418 = come_decrement_ref_count(name_418, (void*)0, (void*)0, 0, 0); }
        if(left_type_419) { come_call_finalizer(sType_finalize,left_type_419, (void*)0, (void*)0, 0, 0, 0); }
        if(right_type_420) { come_call_finalizer(sType_finalize,right_type_420, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_422) { come_call_finalizer(list$1sTypephp_finalize,param_types_422, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_424) { come_call_finalizer(list$1charphp_finalize,param_names_424, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_425) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_425, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_426) { come_call_finalizer(buffer_finalize,header_buf_426, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_430) { come_call_finalizer(sFun_finalize,fun_430, (void*)0, (void*)0, 0, 0, 0); }
        if(node_433) { node_433 = come_decrement_ref_count(node_433, ((struct sNode*)node_433)->finalize, ((struct sNode*)node_433)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result161__ = ((struct tuple2$2sFunpcharph*)(right_value547=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value546=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1))))),equaler_401,(char*)come_increment_ref_count(real_fun_name_402))));
    if(real_fun_name_402) { real_fun_name_402 = come_decrement_ref_count(real_fun_name_402, (void*)0, (void*)0, 0, 0); }
    if(type2_403) { come_call_finalizer(sType_finalize,type2_403, (void*)0, (void*)0, 0, 0, 0); }
    return __result161__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* equaler_471;
void* right_value583;
char* real_fun_name_472;
void* right_value584;
struct sType* type2_473;
struct sClass* klass_474;
void* right_value585;
void* right_value586;
struct buffer* source_475;
char* name_476;
struct tuple2$2charphsTypeph* it_478;
struct tuple2$2charphsTypeph* multiple_assgin_var7;
char* name_479;
struct sType* field_type_480;
char* p_482;
int sline_483;
char* head_484;
struct buffer* source3_485;
struct buffer* __dec_obj118;
void* right_value587;
struct sBlock* block_486;
void* right_value588;
void* right_value589;
struct sType* result_type_487;
void* right_value590;
char* name_488;
void* right_value591;
struct sType* left_type_489;
void* right_value592;
struct sType* right_type_490;
struct sType* __list_values31___491[2];
void* right_value593;
void* right_value594;
struct list$1sTypeph* param_types_492;
void* right_value595;
void* right_value596;
char* __list_values32___493[2];
void* right_value597;
void* right_value598;
struct list$1charph* param_names_494;
void* right_value599;
void* right_value600;
struct list$1charph* param_default_parametors_495;
void* right_value601;
void* right_value602;
struct buffer* header_buf_496;
void* right_value603;
int i_497;
struct sType* param_type_498;
char* param_name_499;
void* right_value604;
void* right_value605;
void* right_value606;
void* right_value607;
struct sFun* fun_500;
void* right_value608;
struct sFun* fun2_501;
void* right_value609;
void* right_value610;
void* right_value611;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value615;
struct sNode* node_503;
struct buffer* __dec_obj121;
void* right_value616;
void* right_value617;
memset(&equaler_471, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value583, 0, sizeof(void*));
memset(&real_fun_name_472, 0, sizeof(char*)); /* ddd */
memset(&right_value584, 0, sizeof(void*));
memset(&type2_473, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_474, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value585, 0, sizeof(void*));
memset(&right_value586, 0, sizeof(void*));
memset(&source_475, 0, sizeof(struct buffer*)); /* ddd */
memset(&name_476, 0, sizeof(char*)); /* ddd */
memset(&it_478, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_479, 0, sizeof(char*)); /* ccc */
memset(&field_type_480, 0, sizeof(struct sType*)); /* ccc */
memset(&name_479, 0, sizeof(char*)); /* eee */
memset(&field_type_480, 0, sizeof(struct sType*)); /* eee */
memset(&p_482, 0, sizeof(char*)); /* ddd */
memset(&sline_483, 0, sizeof(int)); /* ddd */
memset(&head_484, 0, sizeof(char*)); /* ddd */
memset(&source3_485, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value587, 0, sizeof(void*));
memset(&block_486, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value588, 0, sizeof(void*));
memset(&right_value589, 0, sizeof(void*));
memset(&result_type_487, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value590, 0, sizeof(void*));
memset(&name_488, 0, sizeof(char*)); /* ddd */
memset(&right_value591, 0, sizeof(void*));
memset(&left_type_489, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value592, 0, sizeof(void*));
memset(&right_type_490, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value593, 0, sizeof(void*));
memset(&right_value594, 0, sizeof(void*));
memset(&param_types_492, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value595, 0, sizeof(void*));
memset(&right_value596, 0, sizeof(void*));
memset(&right_value597, 0, sizeof(void*));
memset(&right_value598, 0, sizeof(void*));
memset(&param_names_494, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value599, 0, sizeof(void*));
memset(&right_value600, 0, sizeof(void*));
memset(&param_default_parametors_495, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value601, 0, sizeof(void*));
memset(&right_value602, 0, sizeof(void*));
memset(&header_buf_496, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value603, 0, sizeof(void*));
memset(&i_497, 0, sizeof(int)); /* ddd */
memset(&param_type_498, 0, sizeof(struct sType*)); /* ddd */
memset(&param_name_499, 0, sizeof(char*)); /* ddd */
memset(&right_value604, 0, sizeof(void*));
memset(&right_value605, 0, sizeof(void*));
memset(&right_value606, 0, sizeof(void*));
memset(&right_value607, 0, sizeof(void*));
memset(&fun_500, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value608, 0, sizeof(void*));
memset(&fun2_501, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value609, 0, sizeof(void*));
memset(&right_value610, 0, sizeof(void*));
memset(&right_value611, 0, sizeof(void*));
memset(&right_value615, 0, sizeof(void*));
memset(&node_503, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value616, 0, sizeof(void*));
memset(&right_value617, 0, sizeof(void*));
    equaler_471=((void*)0);
    real_fun_name_472=(char*)come_increment_ref_count(((char*)(right_value583=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value583) { right_value583 = come_decrement_ref_count(right_value583, (void*)0, (void*)0, 1, 0); }
    type2_473=(struct sType*)come_increment_ref_count(((struct sType*)(right_value584=solve_generics(type,type,info))));
    if(right_value584) { come_call_finalizer(sType_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_473;
    klass_474=type->mClass;
    if(type->mPointerNum>0&&!klass_474->mNumber) {
        source_475=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value586=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value585=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value585) { come_call_finalizer(buffer_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value586) { come_call_finalizer(buffer_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_475,123);
        if(klass_474->mProtocol) {
            name_476="_protocol_obj";
            char source2_477[1024];
            memset(&source2_477, 0, sizeof(source2_477)); /* aaa */
            snprintf(source2_477,1024,"return left.%s.equals(right.%s);\n",name_476,name_476);
            buffer_append_str(source_475,source2_477);
        }
        else {
            klass_474=map$2charphsClassphp_operator_load_element(info->classes,klass_474->mName);
            for(
            it_478=list$1tuple2$2charphsTypephphp_begin((klass_474->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_474->mFields));
            it_478=list$1tuple2$2charphsTypephphp_next((klass_474->mFields))
            ){
                multiple_assgin_var7=it_478;
                name_479=(char*)come_increment_ref_count(multiple_assgin_var7->v1);
                field_type_480=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v2);
                if(string_operator_equals(type->mClass->mName,field_type_480->mClass->mName)&&type->mPointerNum==field_type_480->mPointerNum&&field_type_480->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_481[1024];
                memset(&source2_481, 0, sizeof(source2_481)); /* aaa */
                snprintf(source2_481,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_479,name_479);
                buffer_append_str(source_475,source2_481);
                if(name_479) { name_479 = come_decrement_ref_count(name_479, (void*)0, (void*)0, 0, 0); }
                if(field_type_480) { come_call_finalizer(sType_finalize,field_type_480, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_str(source_475,"return true;\n");
        buffer_append_char(source_475,125);
        p_482=info->p;
        sline_483=info->sline;
        head_484=info->head;
        source3_485=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj118=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_475);
        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0); }
        info->p=source_475->buf;
        info->head=source_475->buf;
        block_486=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value587=parse_block(info,(_Bool)0))));
        if(right_value587) { come_call_finalizer(sBlock_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0); }
        result_type_487=(struct sType*)come_increment_ref_count(((struct sType*)(right_value589=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value588=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
        if(right_value588) { come_call_finalizer(sType_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value589) { come_call_finalizer(sType_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0); }
        name_488=(char*)come_increment_ref_count(((char*)(right_value590=string_clone(real_fun_name_472))));
        if(right_value590) { right_value590 = come_decrement_ref_count(right_value590, (void*)0, (void*)0, 1, 0); }
        left_type_489=(struct sType*)come_increment_ref_count(((struct sType*)(right_value591=sType_clone(type))));
        if(right_value591) { come_call_finalizer(sType_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0); }
        left_type_489->mHeap=(_Bool)0;
        right_type_490=(struct sType*)come_increment_ref_count(((struct sType*)(right_value592=sType_clone(type))));
        if(right_value592) { come_call_finalizer(sType_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0); }
        right_type_490->mHeap=(_Bool)0;
        {__list_values31___491[0]=come_increment_ref_count(left_type_489);
__list_values31___491[1]=come_increment_ref_count(right_type_490);
}        param_types_492=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value594=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value593=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values31___491))));
        if(right_value594) { come_call_finalizer(list$1sTypephp_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values32___493[0]=come_increment_ref_count(((char*)(right_value595=__builtin_string("left"))));
__list_values32___493[1]=come_increment_ref_count(((char*)(right_value596=__builtin_string("right"))));
}        param_names_494=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value598=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value597=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values32___493))));
        if(right_value595) { right_value595 = come_decrement_ref_count(right_value595, (void*)0, (void*)0, 1, 0); }
        if(right_value596) { right_value596 = come_decrement_ref_count(right_value596, (void*)0, (void*)0, 1, 0); }
        if(right_value598) { come_call_finalizer(list$1charphp_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_495=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value600=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value599=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value600) { come_call_finalizer(list$1charphp_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_496=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value602=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value601=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value601) { come_call_finalizer(buffer_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value602) { come_call_finalizer(buffer_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_496,((char*)(right_value603=make_come_type_name_string(result_type_487,info))));
        if(right_value603) { right_value603 = come_decrement_ref_count(right_value603, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_496," ");
        buffer_append_str(header_buf_496,real_fun_name_472);
        buffer_append_str(header_buf_496,"(");
        for(
        i_497=0;
        i_497<list$1sTypephp_length(param_types_492);
        i_497++
        ){
            param_type_498=list$1sTypephp_operator_load_element(param_types_492,i_497);
            param_name_499=list$1charphp_operator_load_element(param_names_494,i_497);
            buffer_append_str(header_buf_496,((char*)(right_value604=make_come_type_name_string(param_type_498,info))));
            if(right_value604) { right_value604 = come_decrement_ref_count(right_value604, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_496," ");
            buffer_append_str(header_buf_496,param_name_499);
            if(i_497!=list$1sTypephp_length(param_types_492)-1) {
                buffer_append_str(header_buf_496,",");
            }
        }
        buffer_append_str(header_buf_496,")");
        result_type_487->mStatic=(_Bool)0;
        fun_500=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value607=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value605=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_488),(struct sType*)come_increment_ref_count(result_type_487),(struct list$1sTypeph*)come_increment_ref_count(param_types_492),(struct list$1charph*)come_increment_ref_count(param_names_494),(struct list$1charph*)come_increment_ref_count(param_default_parametors_495),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_486),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value606=buffer_to_string(header_buf_496)))),info))));
        if(right_value605) { come_call_finalizer(sFun_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value606) { right_value606 = come_decrement_ref_count(right_value606, (void*)0, (void*)0, 1, 0); }
        if(right_value607) { come_call_finalizer(sFun_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0); }
        fun2_501=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value608=__builtin_string(fun_name))));
        if(right_value608) { right_value608 = come_decrement_ref_count(right_value608, (void*)0, (void*)0, 1, 0); }
        if(fun2_501==((void*)0)||fun2_501->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value609=string_clone(name_488)))),(struct sFun*)come_increment_ref_count(fun_500));
            if(right_value609) { right_value609 = come_decrement_ref_count(right_value609, (void*)0, (void*)0, 1, 0); }
        }
        equaler_471=fun_500;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value611=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value610=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_500),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=sFunNode_finalize;
        _inf_value9->clone=sFunNode_clone;
        _inf_value9->compile=sFunNode_compile;
        _inf_value9->sline=sFunNode_sline;
        _inf_value9->sname=sFunNode_sname;
        _inf_value9->terminated=sFunNode_terminated;
        node_503=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value615=_inf_value9)));
        if(right_value610) { come_call_finalizer(sFunNode_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value611) { come_call_finalizer(sFunNode_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value615) { right_value615 = come_decrement_ref_count(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0); } 
        if(!node_503->compile(node_503->_protocol_obj,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj121=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_485);
        if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0); }
        info->p=p_482;
        info->head=head_484;
        info->sline=sline_483;
        if(source_475) { come_call_finalizer(buffer_finalize,source_475, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_485) { come_call_finalizer(buffer_finalize,source3_485, (void*)0, (void*)0, 0, 0, 0); }
        if(block_486) { come_call_finalizer(sBlock_finalize,block_486, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_487) { come_call_finalizer(sType_finalize,result_type_487, (void*)0, (void*)0, 0, 0, 0); }
        if(name_488) { name_488 = come_decrement_ref_count(name_488, (void*)0, (void*)0, 0, 0); }
        if(left_type_489) { come_call_finalizer(sType_finalize,left_type_489, (void*)0, (void*)0, 0, 0, 0); }
        if(right_type_490) { come_call_finalizer(sType_finalize,right_type_490, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_492) { come_call_finalizer(list$1sTypephp_finalize,param_types_492, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_494) { come_call_finalizer(list$1charphp_finalize,param_names_494, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_495) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_495, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_496) { come_call_finalizer(buffer_finalize,header_buf_496, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_500) { come_call_finalizer(sFun_finalize,fun_500, (void*)0, (void*)0, 0, 0, 0); }
        if(node_503) { node_503 = come_decrement_ref_count(node_503, ((struct sNode*)node_503)->finalize, ((struct sNode*)node_503)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result168__ = ((struct tuple2$2sFunpcharph*)(right_value617=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value616=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1))))),equaler_471,(char*)come_increment_ref_count(real_fun_name_472))));
    if(real_fun_name_472) { real_fun_name_472 = come_decrement_ref_count(real_fun_name_472, (void*)0, (void*)0, 0, 0); }
    if(type2_473) { come_call_finalizer(sType_finalize,type2_473, (void*)0, (void*)0, 0, 0, 0); }
    return __result168__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
struct sFun* equaler_434;
void* right_value548;
char* real_fun_name_435;
void* right_value549;
struct sType* type2_436;
struct sClass* klass_437;
void* right_value550;
void* right_value551;
struct buffer* source_438;
char* name_439;
int i_442;
struct tuple2$2charphsTypeph* it_443;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* name_444;
struct sType* field_type_445;
char* p_449;
int sline_450;
char* head_451;
struct buffer* source3_452;
struct buffer* __dec_obj114;
void* right_value552;
struct sBlock* block_453;
void* right_value553;
void* right_value554;
struct sType* result_type_454;
void* right_value555;
char* name_455;
void* right_value556;
struct sType* left_type_456;
void* right_value557;
struct sType* right_type_457;
struct sType* __list_values29___458[2];
void* right_value558;
void* right_value559;
struct list$1sTypeph* param_types_459;
void* right_value560;
void* right_value561;
char* __list_values30___460[2];
void* right_value562;
void* right_value563;
struct list$1charph* param_names_461;
void* right_value564;
void* right_value565;
struct list$1charph* param_default_parametors_462;
void* right_value566;
void* right_value567;
struct buffer* header_buf_463;
void* right_value568;
int i_464;
struct sType* param_type_465;
char* param_name_466;
void* right_value569;
void* right_value570;
void* right_value571;
void* right_value572;
struct sFun* fun_467;
void* right_value573;
struct sFun* fun2_468;
void* right_value574;
void* right_value575;
void* right_value576;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value580;
struct sNode* node_470;
struct buffer* __dec_obj117;
void* right_value581;
void* right_value582;
memset(&equaler_434, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value548, 0, sizeof(void*));
memset(&real_fun_name_435, 0, sizeof(char*)); /* ddd */
memset(&right_value549, 0, sizeof(void*));
memset(&type2_436, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_437, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value550, 0, sizeof(void*));
memset(&right_value551, 0, sizeof(void*));
memset(&source_438, 0, sizeof(struct buffer*)); /* ddd */
memset(&name_439, 0, sizeof(char*)); /* ddd */
memset(&i_442, 0, sizeof(int)); /* ddd */
memset(&it_443, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_444, 0, sizeof(char*)); /* ccc */
memset(&field_type_445, 0, sizeof(struct sType*)); /* ccc */
memset(&name_444, 0, sizeof(char*)); /* eee */
memset(&field_type_445, 0, sizeof(struct sType*)); /* eee */
memset(&p_449, 0, sizeof(char*)); /* ddd */
memset(&sline_450, 0, sizeof(int)); /* ddd */
memset(&head_451, 0, sizeof(char*)); /* ddd */
memset(&source3_452, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value552, 0, sizeof(void*));
memset(&block_453, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value553, 0, sizeof(void*));
memset(&right_value554, 0, sizeof(void*));
memset(&result_type_454, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value555, 0, sizeof(void*));
memset(&name_455, 0, sizeof(char*)); /* ddd */
memset(&right_value556, 0, sizeof(void*));
memset(&left_type_456, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value557, 0, sizeof(void*));
memset(&right_type_457, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value558, 0, sizeof(void*));
memset(&right_value559, 0, sizeof(void*));
memset(&param_types_459, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value560, 0, sizeof(void*));
memset(&right_value561, 0, sizeof(void*));
memset(&right_value562, 0, sizeof(void*));
memset(&right_value563, 0, sizeof(void*));
memset(&param_names_461, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value564, 0, sizeof(void*));
memset(&right_value565, 0, sizeof(void*));
memset(&param_default_parametors_462, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value566, 0, sizeof(void*));
memset(&right_value567, 0, sizeof(void*));
memset(&header_buf_463, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value568, 0, sizeof(void*));
memset(&i_464, 0, sizeof(int)); /* ddd */
memset(&param_type_465, 0, sizeof(struct sType*)); /* ddd */
memset(&param_name_466, 0, sizeof(char*)); /* ddd */
memset(&right_value569, 0, sizeof(void*));
memset(&right_value570, 0, sizeof(void*));
memset(&right_value571, 0, sizeof(void*));
memset(&right_value572, 0, sizeof(void*));
memset(&fun_467, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value573, 0, sizeof(void*));
memset(&fun2_468, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value574, 0, sizeof(void*));
memset(&right_value575, 0, sizeof(void*));
memset(&right_value576, 0, sizeof(void*));
memset(&right_value580, 0, sizeof(void*));
memset(&node_470, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value581, 0, sizeof(void*));
memset(&right_value582, 0, sizeof(void*));
    equaler_434=((void*)0);
    real_fun_name_435=(char*)come_increment_ref_count(((char*)(right_value548=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value548) { right_value548 = come_decrement_ref_count(right_value548, (void*)0, (void*)0, 1, 0); }
    type2_436=(struct sType*)come_increment_ref_count(((struct sType*)(right_value549=solve_generics(type,type,info))));
    if(right_value549) { come_call_finalizer(sType_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0); }
    type=type2_436;
    klass_437=type->mClass;
    if(type->mPointerNum>0&&!klass_437->mNumber) {
        source_438=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value551=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value550=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value550) { come_call_finalizer(buffer_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value551) { come_call_finalizer(buffer_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_char(source_438,123);
        if(klass_437->mProtocol) {
            name_439="_protocol_obj";
            char source2_440[1024];
            memset(&source2_440, 0, sizeof(source2_440)); /* aaa */
            snprintf(source2_440,1024,"return !left.%s.equals(right.%s);\n",name_439,name_439);
            buffer_append_str(source_438,source2_440);
        }
        else {
            char source2_441[1024];
            memset(&source2_441, 0, sizeof(source2_441)); /* aaa */
            snprintf(source2_441,1024,"return !(");
            buffer_append_str(source_438,source2_441);
            i_442=0;
            klass_437=map$2charphsClassphp_operator_load_element(info->classes,klass_437->mName);
            for(
            it_443=list$1tuple2$2charphsTypephphp_begin((klass_437->mFields));
            !list$1tuple2$2charphsTypephphp_end((klass_437->mFields));
            it_443=list$1tuple2$2charphsTypephphp_next((klass_437->mFields))
            ){
                multiple_assgin_var6=it_443;
                name_444=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                field_type_445=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                if(string_operator_equals(type->mClass->mName,field_type_445->mClass->mName)&&type->mPointerNum==field_type_445->mPointerNum&&field_type_445->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_446[1024];
                memset(&source2_446, 0, sizeof(source2_446)); /* aaa */
                snprintf(source2_446,1024,"left.%s.equals(right.%s)",name_444,name_444);
                buffer_append_str(source_438,source2_446);
                if(i_442==list$1tuple2$2charphsTypephphp_length(klass_437->mFields)-1) {
                    char source2_447[1024];
                    memset(&source2_447, 0, sizeof(source2_447)); /* aaa */
                    snprintf(source2_447,1024,");");
                    buffer_append_str(source_438,source2_447);
                }
                else {
                    char source2_448[1024];
                    memset(&source2_448, 0, sizeof(source2_448)); /* aaa */
                    snprintf(source2_448,1024," && ");
                    buffer_append_str(source_438,source2_448);
                }
                i_442++;
                if(name_444) { name_444 = come_decrement_ref_count(name_444, (void*)0, (void*)0, 0, 0); }
                if(field_type_445) { come_call_finalizer(sType_finalize,field_type_445, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        buffer_append_char(source_438,125);
        p_449=info->p;
        sline_450=info->sline;
        head_451=info->head;
        source3_452=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj114=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_438);
        if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0); }
        info->p=source_438->buf;
        info->head=source_438->buf;
        block_453=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value552=parse_block(info,(_Bool)0))));
        if(right_value552) { come_call_finalizer(sBlock_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0); }
        result_type_454=(struct sType*)come_increment_ref_count(((struct sType*)(right_value554=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value553=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
        if(right_value553) { come_call_finalizer(sType_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value554) { come_call_finalizer(sType_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0); }
        name_455=(char*)come_increment_ref_count(((char*)(right_value555=string_clone(real_fun_name_435))));
        if(right_value555) { right_value555 = come_decrement_ref_count(right_value555, (void*)0, (void*)0, 1, 0); }
        left_type_456=(struct sType*)come_increment_ref_count(((struct sType*)(right_value556=sType_clone(type))));
        if(right_value556) { come_call_finalizer(sType_finalize,right_value556, (void*)0, (void*)0, 0, 1, 0); }
        left_type_456->mHeap=(_Bool)0;
        right_type_457=(struct sType*)come_increment_ref_count(((struct sType*)(right_value557=sType_clone(type))));
        if(right_value557) { come_call_finalizer(sType_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0); }
        right_type_457->mHeap=(_Bool)0;
        {__list_values29___458[0]=come_increment_ref_count(left_type_456);
__list_values29___458[1]=come_increment_ref_count(right_type_457);
}        param_types_459=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value559=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value558=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values29___458))));
        if(right_value559) { come_call_finalizer(list$1sTypephp_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values30___460[0]=come_increment_ref_count(((char*)(right_value560=__builtin_string("left"))));
__list_values30___460[1]=come_increment_ref_count(((char*)(right_value561=__builtin_string("right"))));
}        param_names_461=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value563=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value562=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values30___460))));
        if(right_value560) { right_value560 = come_decrement_ref_count(right_value560, (void*)0, (void*)0, 1, 0); }
        if(right_value561) { right_value561 = come_decrement_ref_count(right_value561, (void*)0, (void*)0, 1, 0); }
        if(right_value563) { come_call_finalizer(list$1charphp_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_462=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value565=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value564=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value565) { come_call_finalizer(list$1charphp_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0); }
        header_buf_463=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value567=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value566=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value566) { come_call_finalizer(buffer_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value567) { come_call_finalizer(buffer_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(header_buf_463,((char*)(right_value568=make_come_type_name_string(result_type_454,info))));
        if(right_value568) { right_value568 = come_decrement_ref_count(right_value568, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(header_buf_463," ");
        buffer_append_str(header_buf_463,real_fun_name_435);
        buffer_append_str(header_buf_463,"(");
        for(
        i_464=0;
        i_464<list$1sTypephp_length(param_types_459);
        i_464++
        ){
            param_type_465=list$1sTypephp_operator_load_element(param_types_459,i_464);
            param_name_466=list$1charphp_operator_load_element(param_names_461,i_464);
            buffer_append_str(header_buf_463,((char*)(right_value569=make_come_type_name_string(param_type_465,info))));
            if(right_value569) { right_value569 = come_decrement_ref_count(right_value569, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(header_buf_463," ");
            buffer_append_str(header_buf_463,param_name_466);
            if(i_464!=list$1sTypephp_length(param_types_459)-1) {
                buffer_append_str(header_buf_463,",");
            }
        }
        buffer_append_str(header_buf_463,")");
        result_type_454->mStatic=(_Bool)0;
        fun_467=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value572=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value570=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_455),(struct sType*)come_increment_ref_count(result_type_454),(struct list$1sTypeph*)come_increment_ref_count(param_types_459),(struct list$1charph*)come_increment_ref_count(param_names_461),(struct list$1charph*)come_increment_ref_count(param_default_parametors_462),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_453),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value571=buffer_to_string(header_buf_463)))),info))));
        if(right_value570) { come_call_finalizer(sFun_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value571) { right_value571 = come_decrement_ref_count(right_value571, (void*)0, (void*)0, 1, 0); }
        if(right_value572) { come_call_finalizer(sFun_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0); }
        fun2_468=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value573=__builtin_string(fun_name))));
        if(right_value573) { right_value573 = come_decrement_ref_count(right_value573, (void*)0, (void*)0, 1, 0); }
        if(fun2_468==((void*)0)||fun2_468->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value574=string_clone(name_455)))),(struct sFun*)come_increment_ref_count(fun_467));
            if(right_value574) { right_value574 = come_decrement_ref_count(right_value574, (void*)0, (void*)0, 1, 0); }
        }
        equaler_434=fun_467;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value576=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value575=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_467),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=sFunNode_finalize;
        _inf_value8->clone=sFunNode_clone;
        _inf_value8->compile=sFunNode_compile;
        _inf_value8->sline=sFunNode_sline;
        _inf_value8->sname=sFunNode_sname;
        _inf_value8->terminated=sFunNode_terminated;
        node_470=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value580=_inf_value8)));
        if(right_value575) { come_call_finalizer(sFunNode_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value576) { come_call_finalizer(sFunNode_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value580) { right_value580 = come_decrement_ref_count(right_value580, ((struct sNode*)right_value580)->finalize, ((struct sNode*)right_value580)->_protocol_obj, 1, 0); } 
        if(!node_470->compile(node_470->_protocol_obj,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj117=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_452);
        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0); }
        info->p=p_449;
        info->head=head_451;
        info->sline=sline_450;
        if(source_438) { come_call_finalizer(buffer_finalize,source_438, (void*)0, (void*)0, 0, 0, 0); }
        if(source3_452) { come_call_finalizer(buffer_finalize,source3_452, (void*)0, (void*)0, 0, 0, 0); }
        if(block_453) { come_call_finalizer(sBlock_finalize,block_453, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_454) { come_call_finalizer(sType_finalize,result_type_454, (void*)0, (void*)0, 0, 0, 0); }
        if(name_455) { name_455 = come_decrement_ref_count(name_455, (void*)0, (void*)0, 0, 0); }
        if(left_type_456) { come_call_finalizer(sType_finalize,left_type_456, (void*)0, (void*)0, 0, 0, 0); }
        if(right_type_457) { come_call_finalizer(sType_finalize,right_type_457, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_459) { come_call_finalizer(list$1sTypephp_finalize,param_types_459, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_461) { come_call_finalizer(list$1charphp_finalize,param_names_461, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_462) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_462, (void*)0, (void*)0, 0, 0, 0); }
        if(header_buf_463) { come_call_finalizer(buffer_finalize,header_buf_463, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_467) { come_call_finalizer(sFun_finalize,fun_467, (void*)0, (void*)0, 0, 0, 0); }
        if(node_470) { node_470 = come_decrement_ref_count(node_470, ((struct sNode*)node_470)->finalize, ((struct sNode*)node_470)->_protocol_obj, 0, 0); } 
    }
    struct tuple2$2sFunpcharph* __result165__ = ((struct tuple2$2sFunpcharph*)(right_value582=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value581=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1))))),equaler_434,(char*)come_increment_ref_count(real_fun_name_435))));
    if(real_fun_name_435) { real_fun_name_435 = come_decrement_ref_count(real_fun_name_435, (void*)0, (void*)0, 0, 0); }
    if(type2_436) { come_call_finalizer(sType_finalize,type2_436, (void*)0, (void*)0, 0, 0, 0); }
    return __result165__;
}

char* skip_block(struct sInfo* info){
char* head_72;
_Bool dquort_73;
_Bool squort_74;
int sline_75;
int nest_76;
char* tail_77;
void* right_value65;
char* buf_78;
void* right_value66;
memset(&head_72, 0, sizeof(char*)); /* ddd */
memset(&dquort_73, 0, sizeof(_Bool)); /* ddd */
memset(&squort_74, 0, sizeof(_Bool)); /* ddd */
memset(&sline_75, 0, sizeof(int)); /* ddd */
memset(&nest_76, 0, sizeof(int)); /* ddd */
memset(&tail_77, 0, sizeof(char*)); /* ddd */
memset(&right_value65, 0, sizeof(void*));
memset(&buf_78, 0, sizeof(char*)); /* ddd */
memset(&right_value66, 0, sizeof(void*));
    head_72=info->p;
    if(*info->p==123) {
        info->p++;
        dquort_73=(_Bool)0;
        squort_74=(_Bool)0;
        sline_75=0;
        nest_76=0;
        while(1) {
            if(dquort_73) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_75);
                        exit(2);
                    }
                    info->p++;
                }
                else if(*info->p==34) {
                    info->p++;
                    dquort_73=!dquort_73;
                }
                else {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_75);
                        exit(2);
                    }
                }
            }
            else if(squort_74) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_75);
                        exit(2);
                    }
                    info->p++;
                }
                else if(*info->p==39) {
                    info->p++;
                    squort_74=!squort_74;
                }
                else {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_75);
                        exit(2);
                    }
                }
            }
            else if(*info->p==39) {
                sline_75=info->sline;
                info->p++;
                squort_74=!squort_74;
            }
            else if(*info->p==34) {
                sline_75=info->sline;
                info->p++;
                dquort_73=!dquort_73;
            }
            else if(*info->p==35) {
                parse_sharp_v5(info);
            }
            else if(*info->p==123) {
                info->p++;
                nest_76++;
            }
            else if(*info->p==125) {
                info->p++;
                if(nest_76==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_76--;
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
    tail_77=info->p;
    buf_78=(char*)come_increment_ref_count(((char*)(right_value65=(char*)come_calloc(1, sizeof(char)*(1*(tail_77-head_72+1))))));
    if(right_value65) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0); }
    memcpy(buf_78,head_72,tail_77-head_72);
    buf_78[tail_77-head_72]=0;
    char* __result60__ = ((char*)(right_value66=__builtin_string(buf_78)));
    if(buf_78) { buf_78 = come_decrement_ref_count(buf_78, (void*)0, (void*)0, 0, 0); }
    return __result60__;
}

_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_241;
struct sType* type_245;
struct sClass* generics_class_246;
void* right_value327;
_Bool generics_type_name_248;
memset(&klass_241, 0, sizeof(struct sClass*)); /* ddd */
memset(&type_245, 0, sizeof(struct sType*)); /* ddd */
memset(&generics_class_246, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value327, 0, sizeof(void*));
memset(&generics_type_name_248, 0, sizeof(_Bool)); /* ddd */
    klass_241=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_245=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_246=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_248=list$1charphp_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string(buf)))));
    if(right_value327) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0); }
    _Bool __result85__ = generics_class_246||generics_type_name_248||klass_241||type_245||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__extension__");
    return __result85__;
}

int expected_next_character(char c, struct sInfo* info){
int* a_71;
memset(&a_71, 0, sizeof(int*)); /* ddd */
    parse_sharp_v5(info);
    if(*info->p!=c) {
        err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
        a_71=(void*)0;
        *a_71=0;
        exit(2);
    }
    info->p++;
    skip_spaces_and_lf(info);
    int __result59__ = 0;
    return __result59__;
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* right_value37;
void* right_value38;
struct list$1sNodeph* __dec_obj25;
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
    __dec_obj25=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value38=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value37=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
    if(right_value38) { come_call_finalizer(list$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
    struct sBlock* __result27__ = self;
    if(self) { come_call_finalizer(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result27__;
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* right_value329;
char* sname_top_250;
int sline_top_251;
struct sFun* funX_252;
void* right_value330;
struct sType* result_type_253;
void* right_value331;
void* right_value332;
struct list$1sTypeph* param_types_254;
struct sType* it_256;
void* right_value333;
struct sType* param_type_258;
void* right_value334;
void* right_value335;
struct list$1charph* param_names_259;
char* p_260;
int sline_261;
char* head_262;
struct buffer* source_263;
void* right_value336;
struct buffer* __dec_obj60;
void* right_value337;
struct sType* generics_type_saved_264;
void* right_value338;
struct sType* __dec_obj61;
void* right_value339;
struct list$1charph* generics_type_names_saved_265;
void* right_value340;
struct list$1charph* __dec_obj62;
void* right_value341;
struct sBlock* block_266;
struct buffer* __dec_obj63;
_Bool var_args_267;
void* right_value342;
void* right_value343;
void* right_value344;
void* right_value345;
void* right_value346;
struct sFun* fun_268;
void* right_value347;
void* right_value348;
void* right_value349;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value389;
struct sNode* node_302;
struct sType* __dec_obj85;
struct list$1charph* __dec_obj86;
void* right_value390;
char* __dec_obj87;
memset(&right_value329, 0, sizeof(void*));
memset(&sname_top_250, 0, sizeof(char*)); /* ddd */
memset(&sline_top_251, 0, sizeof(int)); /* ddd */
memset(&funX_252, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value330, 0, sizeof(void*));
memset(&result_type_253, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&param_types_254, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_256, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value333, 0, sizeof(void*));
memset(&param_type_258, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&param_names_259, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&p_260, 0, sizeof(char*)); /* ddd */
memset(&sline_261, 0, sizeof(int)); /* ddd */
memset(&head_262, 0, sizeof(char*)); /* ddd */
memset(&source_263, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&generics_type_saved_264, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&generics_type_names_saved_265, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&block_266, 0, sizeof(struct sBlock*)); /* ddd */
memset(&var_args_267, 0, sizeof(_Bool)); /* ddd */
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&fun_268, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&node_302, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value390, 0, sizeof(void*));
    sname_top_250=(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string(info->sname))));
    if(right_value329) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0); }
    sline_top_251=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_252=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_252) {
        _Bool __result91__ = (_Bool)1;
        return __result91__;
    }
    result_type_253=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=solve_generics(generics_fun->mResultType,generics_type,info))));
    if(right_value330) { come_call_finalizer(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0); }
    param_types_254=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value332=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value331=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
    if(right_value332) { come_call_finalizer(list$1sTypephp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_256=list$1sTypephp_begin((generics_fun->mParamTypes));
    !list$1sTypephp_end((generics_fun->mParamTypes));
    it_256=list$1sTypephp_next((generics_fun->mParamTypes))
    ){
        param_type_258=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=solve_generics(it_256,generics_type,info))));
        if(right_value333) { come_call_finalizer(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0); }
        param_type_258->mFunctionParam=(_Bool)1;
        list$1sTypephp_push_back(param_types_254,(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=sType_clone(param_type_258)))));
        if(right_value334) { come_call_finalizer(sType_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0); }
        if(param_type_258) { come_call_finalizer(sType_finalize,param_type_258, (void*)0, (void*)0, 0, 0, 0); }
    }
    param_names_259=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value335=list$1charphp_clone(generics_fun->mParamNames))));
    if(right_value335) { come_call_finalizer(list$1charphp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0); }
    p_260=info->p;
    sline_261=generics_fun->mSLine;
    head_262=info->head;
    source_263=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj60=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value336=string_to_buffer(generics_fun->mBlock))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
    if(right_value336) { come_call_finalizer(buffer_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0); }
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_264=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_clone(info->generics_type))));
    if(right_value337) { come_call_finalizer(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj61=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value338=sType_clone(generics_type))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
    if(right_value338) { come_call_finalizer(sType_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0); }
    generics_type_names_saved_265=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value339=list$1charphp_clone(info->generics_type_names))));
    if(right_value339) { come_call_finalizer(list$1charphp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj62=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value340=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0); }
    if(right_value340) { come_call_finalizer(list$1charphp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0); }
    block_266=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value341=parse_block(info,(_Bool)0))));
    if(right_value341) { come_call_finalizer(sBlock_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj63=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_263);
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
    info->p=p_260;
    info->sline=sline_261;
    info->head=head_262;
    result_type_253->mInline=(_Bool)0;
    var_args_267=generics_fun->mVarArgs;
    fun_268=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value346=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value342=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_253),(struct list$1sTypeph*)come_increment_ref_count(param_types_254),(struct list$1charph*)come_increment_ref_count(param_names_259),(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value344=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value343=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))))))),(_Bool)0,var_args_267,(struct sBlock*)come_increment_ref_count(block_266),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string("")))),info))));
    if(right_value342) { come_call_finalizer(sFun_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value344) { come_call_finalizer(list$1charphp_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value345) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0); }
    if(right_value346) { come_call_finalizer(sFun_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value347=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_268));
    if(right_value347) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0); }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value349=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value348=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_268),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sFunNode_finalize;
    _inf_value1->clone=sFunNode_clone;
    _inf_value1->compile=sFunNode_compile;
    _inf_value1->sline=sFunNode_sline;
    _inf_value1->sname=sFunNode_sname;
    _inf_value1->terminated=sFunNode_terminated;
    node_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value389=_inf_value1)));
    if(right_value348) { come_call_finalizer(sFunNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value349) { come_call_finalizer(sFunNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value389) { right_value389 = come_decrement_ref_count(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0); } 
    if(!node_302->compile(node_302->_protocol_obj,info)) {
        _Bool __result120__ = (_Bool)0;
        return __result120__;
    }
    __dec_obj85=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_264);
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0); }
    __dec_obj86=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(generics_type_names_saved_265);
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
    __dec_obj87=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value390=__builtin_string(sname_top_250))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0); }
    if(right_value390) { right_value390 = come_decrement_ref_count(right_value390, (void*)0, (void*)0, 1, 0); }
    info->sline=sline_top_251;
    _Bool __result121__ = (_Bool)1;
    if(fun_name) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1); }
    if(sname_top_250) { sname_top_250 = come_decrement_ref_count(sname_top_250, (void*)0, (void*)0, 0, 0); }
    if(result_type_253) { come_call_finalizer(sType_finalize,result_type_253, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_254) { come_call_finalizer(list$1sTypephp_finalize,param_types_254, (void*)0, (void*)0, 0, 0, 0); }
    if(param_names_259) { come_call_finalizer(list$1charphp_finalize,param_names_259, (void*)0, (void*)0, 0, 0, 0); }
    if(source_263) { come_call_finalizer(buffer_finalize,source_263, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_type_saved_264) { come_call_finalizer(sType_finalize,generics_type_saved_264, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_type_names_saved_265) { come_call_finalizer(list$1charphp_finalize,generics_type_names_saved_265, (void*)0, (void*)0, 0, 0, 0); }
    if(block_266) { come_call_finalizer(sBlock_finalize,block_266, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_268) { come_call_finalizer(sFun_finalize,fun_268, (void*)0, (void*)0, 0, 0, 0); }
    if(node_302) { node_302 = come_decrement_ref_count(node_302, ((struct sNode*)node_302)->finalize, ((struct sNode*)node_302)->_protocol_obj, 0, 0); } 
    return __result121__;
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
    return __result29__;
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
struct list$1sRightValueObjectph* right_value_objects_50;
void* right_value60;
void* right_value61;
struct list$1sRightValueObjectph* __dec_obj45;
int block_level_53;
int i_54;
struct sNode* node_56;
int stack_num_before_58;
int sline_59;
void* right_value62;
char* sname_60;
void* right_value63;
char* __dec_obj46;
void* right_value64;
char* __dec_obj47;
char* it_62;
struct sFun* it2_67;
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
memset(&right_value_objects_50, 0, sizeof(struct list$1sRightValueObjectph*)); /* ddd */
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&block_level_53, 0, sizeof(int)); /* ddd */
memset(&i_54, 0, sizeof(int)); /* bbb */
memset(&node_56, 0, sizeof(struct sNode*)); /* ddd */
memset(&stack_num_before_58, 0, sizeof(int)); /* ddd */
memset(&sline_59, 0, sizeof(int)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&sname_60, 0, sizeof(char*)); /* ddd */
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&it_62, 0, sizeof(char*)); /* ddd */
memset(&it2_67, 0, sizeof(struct sFun*)); /* ddd */
    old_table_38=info->lv_table;
    if(!no_var_table) {
        __dec_obj36=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value49=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value48=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1))))),(_Bool)0,old_table_38))));
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0); }
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
            add_variable_to_table(name_43,type_49,info);
            i_41++;
            if(type_49) { come_call_finalizer(sType_finalize,type_49, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    right_value_objects_50=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    __dec_obj45=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value61=list$1sRightValueObjectphp_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value60=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1)))))))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
    if(right_value61) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
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
            sname_60=(char*)come_increment_ref_count(((char*)(right_value62=__builtin_string(info->sname))));
            if(right_value62) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0); }
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_56->sline(node_56->_protocol_obj);
            __dec_obj46=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value63=node_56->sname(node_56->_protocol_obj))));
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
            if(right_value63) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0); }
            if(!node_56->compile(node_56->_protocol_obj,info)) {
                err_msg(info,"compiling is failed(5)");
                exit(2);
            }
            info->sline=sline_59;
            __dec_obj47=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value64=__builtin_string(sname_60))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
            if(right_value64) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0); }
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_58);
            free_right_value_objects(info);
            if(sname_60) { sname_60 = come_decrement_ref_count(sname_60, (void*)0, (void*)0, 0, 0); }
        }
    }
    if(string_operator_equals(info->come_fun->mName,"main")&&block_level_53==0&&!no_var_table) {
        for(
        it_62=map$2charphsFunphp_begin((info->funcs));
        !map$2charphsFunphp_end((info->funcs));
        it_62=map$2charphsFunphp_next((info->funcs))
        ){
            it2_67=map$2charphsFunphp_operator_load_element(info->funcs,it_62);
            if(memcmp(it_62,"__final_",strlen("__final_"))==0) {
                add_come_code(info,"%s();\n",it_62);
            }
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
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
    int __result58__ = 0;
    if(right_value_objects_50) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_50, (void*)0, (void*)0, 0, 0, 0); }
    return __result58__;
}

void arrange_stack(struct sInfo* info, int top){
int a_68;
int b_69;
int c_70;
memset(&a_68, 0, sizeof(int)); /* ddd */
memset(&b_69, 0, sizeof(int)); /* ddd */
memset(&c_70, 0, sizeof(int)); /* ddd */
    if(list$1CVALUEphp_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEphp_length(info->stack)-top,info);
    }
    if(list$1CVALUEphp_length(info->stack)<top) {
        fprintf(stderr,"%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEphp_length(info->stack),top);
        a_68=0;
        b_69=1;
        c_70=b_69/a_68;
        exit(2);
    }
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_303;
void* right_value391;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* result_type_304;
char* var_name_305;
_Bool err_306;
_Bool method_definition_307;
char* p_308;
int sline_309;
void* right_value392;
void* right_value393;
struct buffer* buf2_310;
char* fun_name_311;
char* base_fun_name_312;
void* right_value394;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* obj_type_313;
char* name_314;
_Bool err_315;
void* right_value395;
void* right_value396;
char* __dec_obj88;
void* right_value397;
void* right_value398;
void* right_value399;
char* __dec_obj89;
void* right_value400;
void* right_value401;
char* __dec_obj90;
void* right_value402;
void* right_value403;
void* right_value404;
char* __dec_obj91;
void* right_value405;
void* right_value406;
char* __dec_obj92;
void* right_value407;
void* right_value408;
char* __dec_obj93;
void* right_value409;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_316;
struct list$1charph* param_names_317;
struct list$1charph* param_default_parametors_318;
_Bool var_args_319;
char* header_tail_320;
void* right_value410;
void* right_value411;
struct buffer* header_buf_321;
int version_322;
int n_323;
void* right_value412;
struct sBlock* block_324;
static int lambda_num_325=0;
void* right_value413;
char* __dec_obj94;
void* right_value414;
void* right_value415;
void* right_value416;
void* right_value417;
struct sFun* fun_326;
void* right_value418;
struct sFun* fun2_327;
void* right_value419;
void* right_value420;
void* right_value421;
struct sNode* _inf_value2;
struct sLambdaNode* _inf_obj_value2;
void* right_value424;
void* right_value425;
char* none_generics_name_329;
void* right_value426;
char* block_330;
void* right_value427;
void* right_value428;
void* right_value429;
struct sGenericsFun* fun_331;
void* right_value430;
char* fun_name3_332;
void* right_value434;
void* right_value435;
struct sBlock* block_352;
_Bool static__353;
void* right_value436;
void* right_value437;
char* new_fun_name_354;
void* right_value438;
char* __dec_obj96;
void* right_value439;
void* right_value440;
void* right_value441;
void* right_value442;
void* right_value443;
struct sFun* fun_355;
void* right_value444;
struct sFun* fun2_356;
void* right_value445;
void* right_value446;
void* right_value447;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* right_value451;
void* right_value452;
char* new_fun_name_358;
void* right_value453;
char* __dec_obj99;
void* right_value454;
void* right_value455;
void* right_value456;
void* right_value457;
struct sFun* fun_359;
void* right_value458;
struct sFun* fun2_360;
void* right_value459;
void* right_value460;
void* right_value461;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value465;
void* right_value466;
char* asm_fun_362;
void* right_value467;
char* __dec_obj102;
void* right_value468;
void* right_value469;
void* right_value470;
void* right_value471;
struct sFun* fun_363;
void* right_value472;
struct sFun* fun2_364;
void* right_value473;
void* right_value474;
void* right_value475;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value479;
memset(&header_head_303, 0, sizeof(char*)); /* ddd */
memset(&right_value391, 0, sizeof(void*));
memset(&result_type_304, 0, sizeof(struct sType*)); /* ccc */
memset(&var_name_305, 0, sizeof(char*)); /* ccc */
memset(&err_306, 0, sizeof(_Bool)); /* ccc */
memset(&result_type_304, 0, sizeof(struct sType*)); /* eee */
memset(&var_name_305, 0, sizeof(char*)); /* eee */
memset(&err_306, 0, sizeof(_Bool)); /* eee */
memset(&method_definition_307, 0, sizeof(_Bool)); /* ddd */
memset(&p_308, 0, sizeof(char*)); /* ddd */
memset(&sline_309, 0, sizeof(int)); /* ddd */
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&buf2_310, 0, sizeof(struct buffer*)); /* ddd */
memset(&fun_name_311, 0, sizeof(char*)); /* bbb */
memset(&base_fun_name_312, 0, sizeof(char*)); /* bbb */
memset(&right_value394, 0, sizeof(void*));
memset(&obj_type_313, 0, sizeof(struct sType*)); /* ccc */
memset(&name_314, 0, sizeof(char*)); /* ccc */
memset(&err_315, 0, sizeof(_Bool)); /* ccc */
memset(&obj_type_313, 0, sizeof(struct sType*)); /* eee */
memset(&name_314, 0, sizeof(char*)); /* eee */
memset(&err_315, 0, sizeof(_Bool)); /* eee */
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&param_types_316, 0, sizeof(struct list$1sTypeph*)); /* ccc */
memset(&param_names_317, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&param_default_parametors_318, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&var_args_319, 0, sizeof(_Bool)); /* ccc */
memset(&param_types_316, 0, sizeof(struct list$1sTypeph*)); /* eee */
memset(&param_names_317, 0, sizeof(struct list$1charph*)); /* eee */
memset(&param_default_parametors_318, 0, sizeof(struct list$1charph*)); /* eee */
memset(&var_args_319, 0, sizeof(_Bool)); /* eee */
memset(&header_tail_320, 0, sizeof(char*)); /* ddd */
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&header_buf_321, 0, sizeof(struct buffer*)); /* ddd */
memset(&version_322, 0, sizeof(int)); /* ddd */
memset(&n_323, 0, sizeof(int)); /* ddd */
memset(&right_value412, 0, sizeof(void*));
memset(&block_324, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&fun_326, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value418, 0, sizeof(void*));
memset(&fun2_327, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
memset(&none_generics_name_329, 0, sizeof(char*)); /* ddd */
memset(&right_value426, 0, sizeof(void*));
memset(&block_330, 0, sizeof(char*)); /* ddd */
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&fun_331, 0, sizeof(struct sGenericsFun*)); /* ddd */
memset(&right_value430, 0, sizeof(void*));
memset(&fun_name3_332, 0, sizeof(char*)); /* ddd */
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&block_352, 0, sizeof(struct sBlock*)); /* ddd */
memset(&static__353, 0, sizeof(_Bool)); /* ddd */
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&new_fun_name_354, 0, sizeof(char*)); /* ddd */
memset(&right_value438, 0, sizeof(void*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&fun_355, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value444, 0, sizeof(void*));
memset(&fun2_356, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_value447, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
memset(&new_fun_name_358, 0, sizeof(char*)); /* ddd */
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&right_value456, 0, sizeof(void*));
memset(&right_value457, 0, sizeof(void*));
memset(&fun_359, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value458, 0, sizeof(void*));
memset(&fun2_360, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value465, 0, sizeof(void*));
memset(&right_value466, 0, sizeof(void*));
memset(&asm_fun_362, 0, sizeof(char*)); /* ddd */
memset(&right_value467, 0, sizeof(void*));
memset(&right_value468, 0, sizeof(void*));
memset(&right_value469, 0, sizeof(void*));
memset(&right_value470, 0, sizeof(void*));
memset(&right_value471, 0, sizeof(void*));
memset(&fun_363, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value472, 0, sizeof(void*));
memset(&fun2_364, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value473, 0, sizeof(void*));
memset(&right_value474, 0, sizeof(void*));
memset(&right_value475, 0, sizeof(void*));
memset(&right_value479, 0, sizeof(void*));
    header_head_303=info->p;
    multiple_assgin_var1=((struct tuple3$3sTypephcharphbool*)(right_value391=parse_type(info,(_Bool)0,(_Bool)1)));
    result_type_304=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
    var_name_305=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
    err_306=multiple_assgin_var1->v3;
    if(right_value391) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0); }
    if(!err_306) {
        exit(2);
    }
    method_definition_307=(_Bool)0;
    {
        p_308=info->p;
        sline_309=info->sline;
        buf2_310=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value393=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value392=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value392) { come_call_finalizer(buffer_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value393) { come_call_finalizer(buffer_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0); }
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_310,*info->p);
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
        if(buffer_length(buf2_310)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_307=(_Bool)1;
        }
        info->p=p_308;
        info->sline=sline_309;
        if(buf2_310) { come_call_finalizer(buffer_finalize,buf2_310, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(method_definition_307) {
        multiple_assgin_var2=((struct tuple3$3sTypephcharphbool*)(right_value394=parse_type(info,(_Bool)0,(_Bool)1)));
        obj_type_313=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
        name_314=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
        err_315=multiple_assgin_var2->v3;
        if(right_value394) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0); }
        if(!err_315) {
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj88=base_fun_name_312;
        base_fun_name_312=(char*)come_increment_ref_count(((char*)(right_value396=string_clone(((char*)(right_value395=parse_word(info)))))));
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
        if(right_value395) { right_value395 = come_decrement_ref_count(right_value395, (void*)0, (void*)0, 1, 0); }
        if(right_value396) { right_value396 = come_decrement_ref_count(right_value396, (void*)0, (void*)0, 1, 0); }
        __dec_obj89=fun_name_311;
        fun_name_311=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(((char*)(right_value398=create_method_name(obj_type_313,(_Bool)0,((char*)(right_value397=__builtin_string(base_fun_name_312))),info)))))));
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0); }
        if(right_value397) { right_value397 = come_decrement_ref_count(right_value397, (void*)0, (void*)0, 1, 0); }
        if(right_value398) { right_value398 = come_decrement_ref_count(right_value398, (void*)0, (void*)0, 1, 0); }
        if(right_value399) { right_value399 = come_decrement_ref_count(right_value399, (void*)0, (void*)0, 1, 0); }
        if(obj_type_313) { come_call_finalizer(sType_finalize,obj_type_313, (void*)0, (void*)0, 0, 0, 0); }
        if(name_314) { name_314 = come_decrement_ref_count(name_314, (void*)0, (void*)0, 0, 0); }
    }
    else if(info->impl_type) {
        __dec_obj90=base_fun_name_312;
        base_fun_name_312=(char*)come_increment_ref_count(((char*)(right_value401=string_clone(((char*)(right_value400=parse_word(info)))))));
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0); }
        if(right_value400) { right_value400 = come_decrement_ref_count(right_value400, (void*)0, (void*)0, 1, 0); }
        if(right_value401) { right_value401 = come_decrement_ref_count(right_value401, (void*)0, (void*)0, 1, 0); }
        __dec_obj91=fun_name_311;
        fun_name_311=(char*)come_increment_ref_count(((char*)(right_value404=string_clone(((char*)(right_value403=create_method_name(info->impl_type,(_Bool)0,((char*)(right_value402=__builtin_string(base_fun_name_312))),info)))))));
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0); }
        if(right_value402) { right_value402 = come_decrement_ref_count(right_value402, (void*)0, (void*)0, 1, 0); }
        if(right_value403) { right_value403 = come_decrement_ref_count(right_value403, (void*)0, (void*)0, 1, 0); }
        if(right_value404) { right_value404 = come_decrement_ref_count(right_value404, (void*)0, (void*)0, 1, 0); }
    }
    else {
        __dec_obj92=fun_name_311;
        fun_name_311=(char*)come_increment_ref_count(((char*)(right_value406=string_clone(((char*)(right_value405=parse_word(info)))))));
        if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0); }
        if(right_value405) { right_value405 = come_decrement_ref_count(right_value405, (void*)0, (void*)0, 1, 0); }
        if(right_value406) { right_value406 = come_decrement_ref_count(right_value406, (void*)0, (void*)0, 1, 0); }
        __dec_obj93=base_fun_name_312;
        base_fun_name_312=(char*)come_increment_ref_count(((char*)(right_value408=string_clone(((char*)(right_value407=__builtin_string(fun_name_311)))))));
        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
        if(right_value407) { right_value407 = come_decrement_ref_count(right_value407, (void*)0, (void*)0, 1, 0); }
        if(right_value408) { right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0); }
    }
    multiple_assgin_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value409=parse_params(info)));
    param_types_316=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
    param_names_317=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
    param_default_parametors_318=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
    var_args_319=multiple_assgin_var3->v4;
    if(right_value409) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0); }
    header_tail_320=info->p;
    header_buf_321=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value411=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value410=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value410) { come_call_finalizer(buffer_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value411) { come_call_finalizer(buffer_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append(header_buf_321,header_head_303,header_tail_320-header_head_303);
    buffer_append_char(header_buf_321,0);
    version_322=0;
    if(memcmp(info->p,"version",strlen("version"))==0) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_323=0;
        while(xisdigit(*info->p)) {
            n_323=n_323*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_322=n_323;
    }
    if(string_operator_equals(base_fun_name_312,"lambda")) {
        block_324=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value412=parse_block(info,(_Bool)0))));
        if(right_value412) { come_call_finalizer(sBlock_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0); }
        lambda_num_325++;
        __dec_obj94=fun_name_311;
        fun_name_311=(char*)come_increment_ref_count(((char*)(right_value413=xsprintf("lambda%d",lambda_num_325))));
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0); }
        if(right_value413) { right_value413 = come_decrement_ref_count(right_value413, (void*)0, (void*)0, 1, 0); }
        result_type_304->mStatic=(_Bool)0;
        fun_326=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value417=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value414=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(((char*)(right_value415=__builtin_string(fun_name_311)))),(struct sType*)come_increment_ref_count(result_type_304),(struct list$1sTypeph*)come_increment_ref_count(param_types_316),(struct list$1charph*)come_increment_ref_count(param_names_317),(struct list$1charph*)come_increment_ref_count(param_default_parametors_318),(_Bool)0,var_args_319,(struct sBlock*)come_increment_ref_count(block_324),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value416=buffer_to_string(header_buf_321)))),info))));
        if(right_value414) { come_call_finalizer(sFun_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value415) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0); }
        if(right_value416) { right_value416 = come_decrement_ref_count(right_value416, (void*)0, (void*)0, 1, 0); }
        if(right_value417) { come_call_finalizer(sFun_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0); }
        fun2_327=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value418=__builtin_string(fun_name_311))));
        if(right_value418) { right_value418 = come_decrement_ref_count(right_value418, (void*)0, (void*)0, 1, 0); }
        if(fun2_327==((void*)0)||fun2_327->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value419=string_clone(fun_name_311)))),(struct sFun*)come_increment_ref_count(fun_326));
            if(right_value419) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0); }
        }
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value2=come_increment_ref_count(((struct sLambdaNode*)(right_value421=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value420=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1))))),fun_326,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=sLambdaNode_finalize;
        _inf_value2->clone=sLambdaNode_clone;
        _inf_value2->compile=sLambdaNode_compile;
        _inf_value2->sline=sLambdaNode_sline;
        _inf_value2->sname=sLambdaNode_sname;
        _inf_value2->terminated=sLambdaNode_terminated;
        struct sNode* __result124__ = ((struct sNode*)(right_value424=_inf_value2));
        if(block_324) { come_call_finalizer(sBlock_finalize,block_324, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_326) { come_call_finalizer(sFun_finalize,fun_326, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value420) { come_call_finalizer(sLambdaNode_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value421) { come_call_finalizer(sLambdaNode_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0); }
        return __result124__;
    }
    else if(info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_329=(char*)come_increment_ref_count(((char*)(right_value425=get_none_generics_name(info->impl_type->mClass->mName))));
        if(right_value425) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0); }
        block_330=(char*)come_increment_ref_count(((char*)(right_value426=skip_block(info))));
        if(right_value426) { right_value426 = come_decrement_ref_count(right_value426, (void*)0, (void*)0, 1, 0); }
        fun_331=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value429=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value427=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1))))),(struct sType*)come_increment_ref_count(info->impl_type),info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value428=__builtin_string(fun_name_311)))),(struct sType*)come_increment_ref_count(result_type_304),(struct list$1sTypeph*)come_increment_ref_count(param_types_316),(struct list$1charph*)come_increment_ref_count(param_names_317),var_args_319,(char*)come_increment_ref_count(block_330),info))));
        if(right_value427) { come_call_finalizer(sGenericsFun_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value428) { right_value428 = come_decrement_ref_count(right_value428, (void*)0, (void*)0, 1, 0); }
        if(right_value429) { come_call_finalizer(sGenericsFun_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0); }
        fun_name3_332=(char*)come_increment_ref_count(((char*)(right_value430=xsprintf("%s_%s",none_generics_name_329,base_fun_name_312))));
        if(right_value430) { right_value430 = come_decrement_ref_count(right_value430, (void*)0, (void*)0, 1, 0); }
        map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value434=__builtin_string(fun_name3_332)))),(struct sGenericsFun*)come_increment_ref_count(fun_331));
        if(right_value434) { right_value434 = come_decrement_ref_count(right_value434, (void*)0, (void*)0, 1, 0); }
        struct sNode* __result135__ = (struct sNode*)((void*)0);
        if(none_generics_name_329) { none_generics_name_329 = come_decrement_ref_count(none_generics_name_329, (void*)0, (void*)0, 0, 0); }
        if(block_330) { block_330 = come_decrement_ref_count(block_330, (void*)0, (void*)0, 0, 0); }
        if(fun_331) { come_call_finalizer(sGenericsFun_finalize,fun_331, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name3_332) { fun_name3_332 = come_decrement_ref_count(fun_name3_332, (void*)0, (void*)0, 0, 0); }
        return __result135__;
    }
    else if(*info->p==123) {
        block_352=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value435=parse_block(info,(_Bool)0))));
        if(right_value435) { come_call_finalizer(sBlock_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0); }
        static__353=(_Bool)0;
        if(result_type_304->mStatic) {
            result_type_304->mStatic=(_Bool)0;
            static__353=(_Bool)1;
        }
        if(version_322>0) {
            new_fun_name_354=(char*)come_increment_ref_count(((char*)(right_value437=xsprintf("%s_v%d",((char*)(right_value436=__builtin_string(fun_name_311))),version_322))));
            if(right_value436) { right_value436 = come_decrement_ref_count(right_value436, (void*)0, (void*)0, 1, 0); }
            if(right_value437) { right_value437 = come_decrement_ref_count(right_value437, (void*)0, (void*)0, 1, 0); }
            __dec_obj96=fun_name_311;
            fun_name_311=(char*)come_increment_ref_count(((char*)(right_value438=__builtin_string(new_fun_name_354))));
            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0); }
            if(right_value438) { right_value438 = come_decrement_ref_count(right_value438, (void*)0, (void*)0, 1, 0); }
            if(new_fun_name_354) { new_fun_name_354 = come_decrement_ref_count(new_fun_name_354, (void*)0, (void*)0, 0, 0); }
        }
        fun_355=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value443=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value439=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(((char*)(right_value440=__builtin_string(fun_name_311)))),(struct sType*)come_increment_ref_count(result_type_304),(struct list$1sTypeph*)come_increment_ref_count(param_types_316),(struct list$1charph*)come_increment_ref_count(param_names_317),(struct list$1charph*)come_increment_ref_count(param_default_parametors_318),(_Bool)0,var_args_319,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value441=sBlock_clone(block_352)))),static__353,(char*)come_increment_ref_count(((char*)(right_value442=buffer_to_string(header_buf_321)))),info))));
        if(right_value439) { come_call_finalizer(sFun_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value440) { right_value440 = come_decrement_ref_count(right_value440, (void*)0, (void*)0, 1, 0); }
        if(right_value441) { come_call_finalizer(sBlock_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value442) { right_value442 = come_decrement_ref_count(right_value442, (void*)0, (void*)0, 1, 0); }
        if(right_value443) { come_call_finalizer(sFun_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0); }
        fun2_356=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value444=__builtin_string(fun_name_311))));
        if(right_value444) { right_value444 = come_decrement_ref_count(right_value444, (void*)0, (void*)0, 1, 0); }
        if(fun2_356==((void*)0)||fun2_356->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value445=string_clone(fun_name_311)))),(struct sFun*)come_increment_ref_count(fun_355));
            if(right_value445) { right_value445 = come_decrement_ref_count(right_value445, (void*)0, (void*)0, 1, 0); }
        }
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(right_value447=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value446=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_355),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=sFunNode_finalize;
        _inf_value3->clone=sFunNode_clone;
        _inf_value3->compile=sFunNode_compile;
        _inf_value3->sline=sFunNode_sline;
        _inf_value3->sname=sFunNode_sname;
        _inf_value3->terminated=sFunNode_terminated;
        struct sNode* __result138__ = ((struct sNode*)(right_value451=_inf_value3));
        if(block_352) { come_call_finalizer(sBlock_finalize,block_352, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_355) { come_call_finalizer(sFun_finalize,fun_355, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value446) { come_call_finalizer(sFunNode_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value447) { come_call_finalizer(sFunNode_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0); }
        return __result138__;
    }
    else if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(version_322>0) {
            new_fun_name_358=(char*)come_increment_ref_count(((char*)(right_value452=xsprintf("%s_v%d",fun_name_311,version_322))));
            if(right_value452) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0); }
            __dec_obj99=fun_name_311;
            fun_name_311=(char*)come_increment_ref_count(((char*)(right_value453=__builtin_string(new_fun_name_358))));
            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0); }
            if(right_value453) { right_value453 = come_decrement_ref_count(right_value453, (void*)0, (void*)0, 1, 0); }
            if(new_fun_name_358) { new_fun_name_358 = come_decrement_ref_count(new_fun_name_358, (void*)0, (void*)0, 0, 0); }
        }
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_304->mStatic=(_Bool)0;
            fun_359=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value457=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value454=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(((char*)(right_value455=__builtin_string(fun_name_311)))),(struct sType*)come_increment_ref_count(result_type_304),(struct list$1sTypeph*)come_increment_ref_count(param_types_316),(struct list$1charph*)come_increment_ref_count(param_names_317),(struct list$1charph*)come_increment_ref_count(param_default_parametors_318),(_Bool)1,var_args_319,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value456=buffer_to_string(header_buf_321)))),info))));
            if(right_value454) { come_call_finalizer(sFun_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value455) { right_value455 = come_decrement_ref_count(right_value455, (void*)0, (void*)0, 1, 0); }
            if(right_value456) { right_value456 = come_decrement_ref_count(right_value456, (void*)0, (void*)0, 1, 0); }
            if(right_value457) { come_call_finalizer(sFun_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0); }
            fun2_360=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value458=__builtin_string(fun_name_311))));
            if(right_value458) { right_value458 = come_decrement_ref_count(right_value458, (void*)0, (void*)0, 1, 0); }
            if(fun2_360==((void*)0)||fun2_360->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value459=string_clone(fun_name_311)))),(struct sFun*)come_increment_ref_count(fun_359));
                if(right_value459) { right_value459 = come_decrement_ref_count(right_value459, (void*)0, (void*)0, 1, 0); }
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value461=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value460=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_359),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=sFunNode_finalize;
            _inf_value4->clone=sFunNode_clone;
            _inf_value4->compile=sFunNode_compile;
            _inf_value4->sline=sFunNode_sline;
            _inf_value4->sname=sFunNode_sname;
            _inf_value4->terminated=sFunNode_terminated;
            struct sNode* __result141__ = ((struct sNode*)(right_value465=_inf_value4));
            if(fun_359) { come_call_finalizer(sFun_finalize,fun_359, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value460) { come_call_finalizer(sFunNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value461) { come_call_finalizer(sFunNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0); }
            return __result141__;
        }
        else {
            asm_fun_362=(char*)come_increment_ref_count(((char*)(right_value466=parse_attribute(info))));
            if(right_value466) { right_value466 = come_decrement_ref_count(right_value466, (void*)0, (void*)0, 1, 0); }
            if(string_operator_not_equals(asm_fun_362,"")) {
                __dec_obj102=fun_name_311;
                fun_name_311=(char*)come_increment_ref_count(((char*)(right_value467=__builtin_string(asm_fun_362))));
                if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0); }
                if(right_value467) { right_value467 = come_decrement_ref_count(right_value467, (void*)0, (void*)0, 1, 0); }
            }
            expected_next_character(59,info);
            result_type_304->mStatic=(_Bool)0;
            fun_363=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value471=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value468=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(((char*)(right_value469=__builtin_string(fun_name_311)))),(struct sType*)come_increment_ref_count(result_type_304),(struct list$1sTypeph*)come_increment_ref_count(param_types_316),(struct list$1charph*)come_increment_ref_count(param_names_317),(struct list$1charph*)come_increment_ref_count(param_default_parametors_318),(_Bool)1,var_args_319,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value470=buffer_to_string(header_buf_321)))),info))));
            if(right_value468) { come_call_finalizer(sFun_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value469) { right_value469 = come_decrement_ref_count(right_value469, (void*)0, (void*)0, 1, 0); }
            if(right_value470) { right_value470 = come_decrement_ref_count(right_value470, (void*)0, (void*)0, 1, 0); }
            if(right_value471) { come_call_finalizer(sFun_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0); }
            fun2_364=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value472=__builtin_string(fun_name_311))));
            if(right_value472) { right_value472 = come_decrement_ref_count(right_value472, (void*)0, (void*)0, 1, 0); }
            if(fun2_364==((void*)0)||fun2_364->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value473=string_clone(fun_name_311)))),(struct sFun*)come_increment_ref_count(fun_363));
                if(right_value473) { right_value473 = come_decrement_ref_count(right_value473, (void*)0, (void*)0, 1, 0); }
            }
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value475=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value474=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1))))),(struct sFun*)come_increment_ref_count(fun_363),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=sFunNode_finalize;
            _inf_value5->clone=sFunNode_clone;
            _inf_value5->compile=sFunNode_compile;
            _inf_value5->sline=sFunNode_sline;
            _inf_value5->sname=sFunNode_sname;
            _inf_value5->terminated=sFunNode_terminated;
            struct sNode* __result144__ = ((struct sNode*)(right_value479=_inf_value5));
            if(asm_fun_362) { asm_fun_362 = come_decrement_ref_count(asm_fun_362, (void*)0, (void*)0, 0, 0); }
            if(fun_363) { come_call_finalizer(sFun_finalize,fun_363, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value474) { come_call_finalizer(sFunNode_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value475) { come_call_finalizer(sFunNode_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0); }
            return __result144__;
        }
    }
    else {
        err_msg(info,"invalid character(%c)(2)\n",*info->p);
        exit(2);
    }
    struct sNode* __result145__ = (struct sNode*)((void*)0);
    if(result_type_304) { come_call_finalizer(sType_finalize,result_type_304, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_305) { var_name_305 = come_decrement_ref_count(var_name_305, (void*)0, (void*)0, 0, 0); }
    if(fun_name_311) { fun_name_311 = come_decrement_ref_count(fun_name_311, (void*)0, (void*)0, 0, 0); }
    if(base_fun_name_312) { base_fun_name_312 = come_decrement_ref_count(base_fun_name_312, (void*)0, (void*)0, 0, 0); }
    if(param_types_316) { come_call_finalizer(list$1sTypephp_finalize,param_types_316, (void*)0, (void*)0, 0, 0, 0); }
    if(param_names_317) { come_call_finalizer(list$1charphp_finalize,param_names_317, (void*)0, (void*)0, 0, 0, 0); }
    if(param_default_parametors_318) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_318, (void*)0, (void*)0, 0, 0, 0); }
    if(header_buf_321) { come_call_finalizer(buffer_finalize,header_buf_321, (void*)0, (void*)0, 0, 0, 0); }
    return __result145__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool is_type_name_flag_229;
int sline_230;
_Bool define_function_flag_231;
char* p_232;
_Bool invalid_type_233;
void* right_value318;
char* word_234;
void* right_value319;
char* __dec_obj55;
void* right_value320;
char* __dec_obj56;
void* right_value321;
char* __dec_obj57;
_Bool define_variable_235;
char* p_236;
void* right_value322;
void* right_value323;
void* right_value324;
void* right_value325;
char* buf2_237;
void* right_value326;
memset(&is_type_name_flag_229, 0, sizeof(_Bool)); /* ddd */
memset(&sline_230, 0, sizeof(int)); /* ddd */
memset(&define_function_flag_231, 0, sizeof(_Bool)); /* ddd */
memset(&p_232, 0, sizeof(char*)); /* ddd */
memset(&invalid_type_233, 0, sizeof(_Bool)); /* ddd */
memset(&right_value318, 0, sizeof(void*));
memset(&word_234, 0, sizeof(char*)); /* ddd */
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&define_variable_235, 0, sizeof(_Bool)); /* ddd */
memset(&p_236, 0, sizeof(char*)); /* ddd */
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&buf2_237, 0, sizeof(char*)); /* ddd */
memset(&right_value326, 0, sizeof(void*));
    is_type_name_flag_229=is_type_name(buf,info);
    sline_230=info->sline;
    define_function_flag_231=(_Bool)0;
    if(is_type_name_flag_229) {
        p_232=info->p;
        info->p=head;
        invalid_type_233=(_Bool)0;
        info->no_output_err=(_Bool)1;
        ((struct tuple3$3sTypephcharphbool*)(right_value318=parse_type(info,(_Bool)0,(_Bool)1)));
        if(right_value318) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0); }
        info->no_output_err=(_Bool)0;
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            word_234=((void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj55=word_234;
                word_234=(char*)come_increment_ref_count(((char*)(right_value319=parse_word(info))));
                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
                if(right_value319) { right_value319 = come_decrement_ref_count(right_value319, (void*)0, (void*)0, 1, 0); }
                if(string_operator_equals(word_234,"extern")) {
                    __dec_obj56=word_234;
                    word_234=(char*)come_increment_ref_count(((char*)(right_value320=parse_word(info))));
                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
                    if(right_value320) { right_value320 = come_decrement_ref_count(right_value320, (void*)0, (void*)0, 1, 0); }
                }
            }
            else {
                word_234=((void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_234) {
                if(is_type_name(word_234,info)) {
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
                        __dec_obj57=word_234;
                        word_234=(char*)come_increment_ref_count(((char*)(right_value321=parse_word(info))));
                        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
                        if(right_value321) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0); }
                    }
                }
                if(strlen(word_234)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag_229) {
                        define_function_flag_231=(_Bool)1;
                    }
                }
            }
            if(word_234) { word_234 = come_decrement_ref_count(word_234, (void*)0, (void*)0, 0, 0); }
        }
        info->p=p_232;
        info->sline=sline_230;
    }
    define_variable_235=(_Bool)1;
    if(is_type_name_flag_229) {
        p_236=info->p;
        info->p=head;
        if(!is_type_name_flag_229) {
            define_variable_235=(_Bool)0;
        }
        info->no_output_err=(_Bool)1;
        ((struct tuple3$3sTypephcharphbool*)(right_value322=parse_type(info,(_Bool)0,(_Bool)1)));
        if(right_value322) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0); }
        info->no_output_err=(_Bool)0;
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_235=(_Bool)0;
        }
        else {
            if(!(xisalpha(*info->p)||*info->p==95)) {
                define_variable_235=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(*info->p==40||*info->p==58) {
                define_variable_235=(_Bool)0;
            }
        }
        info->p=p_236;
        info->sline=sline_230;
    }
    else {
        define_variable_235=(_Bool)0;
    }
    if(define_function_flag_231) {
        info->p=head;
        info->sline=sline_230;
        struct sNode* __result70__ = ((struct sNode*)(right_value323=parse_function(info)));
        return __result70__;
    }
    else if(define_variable_235) {
        info->p=head;
        info->sline=sline_230;
        struct sNode* __result71__ = ((struct sNode*)(right_value324=parse_global_variable(info)));
        return __result71__;
    }
    info->p=head;
    info->sline=sline_230;
    buf2_237=(char*)come_increment_ref_count(((char*)(right_value325=parse_word(info))));
    if(right_value325) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0); }
    struct sNode* __result72__ = ((struct sNode*)(right_value326=top_level_v98((char*)come_increment_ref_count(buf2_237),head,head_sline,info)));
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1); }
    if(buf2_237) { buf2_237 = come_decrement_ref_count(buf2_237, (void*)0, (void*)0, 0, 0); }
    return __result72__;
}

int transpile_v5(struct sInfo* info){
void* right_value70;
char* name_85;
void* right_value71;
void* right_value72;
struct sType* result_type_86;
void* right_value73;
void* right_value74;
void* right_value75;
void* right_value76;
struct sType* __list_values1___87[2];
void* right_value80;
void* right_value81;
struct list$1sTypeph* param_types_92;
void* right_value82;
void* right_value83;
char* __list_values2___93[2];
void* right_value87;
void* right_value88;
struct list$1charph* param_names_98;
void* right_value89;
void* right_value90;
struct list$1charph* param_default_parametors_99;
void* right_value91;
void* right_value92;
void* right_value93;
struct sFun* main_fun_100;
void* right_value100;
void* right_value101;
char* name_137;
void* right_value102;
void* right_value103;
struct sType* result_type_138;
void* right_value104;
void* right_value105;
struct sType* __list_values3___139[1];
void* right_value106;
void* right_value107;
struct list$1sTypeph* param_types_140;
void* right_value108;
char* __list_values4___141[1];
void* right_value109;
void* right_value110;
struct list$1charph* param_names_142;
void* right_value111;
void* right_value112;
struct list$1charph* param_default_parametors_143;
void* right_value113;
void* right_value114;
void* right_value115;
struct sFun* main_fun_144;
void* right_value116;
void* right_value117;
char* name_145;
void* right_value118;
void* right_value119;
struct sType* result_type_146;
void* right_value120;
void* right_value121;
struct sType* __list_values5___147[1];
void* right_value122;
void* right_value123;
struct list$1sTypeph* param_types_148;
void* right_value124;
char* __list_values6___149[1];
void* right_value125;
void* right_value126;
struct list$1charph* param_names_150;
void* right_value127;
void* right_value128;
struct list$1charph* param_default_parametors_151;
void* right_value129;
void* right_value130;
void* right_value131;
struct sFun* main_fun_152;
void* right_value132;
void* right_value133;
char* name_153;
void* right_value134;
void* right_value135;
struct sType* result_type_154;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
struct sType* __list_values7___155[2];
void* right_value140;
void* right_value141;
struct list$1sTypeph* param_types_156;
void* right_value142;
void* right_value143;
char* __list_values8___157[2];
void* right_value144;
void* right_value145;
struct list$1charph* param_names_158;
void* right_value146;
void* right_value147;
struct list$1charph* param_default_parametors_159;
void* right_value148;
void* right_value149;
void* right_value150;
struct sFun* main_fun_160;
void* right_value151;
void* right_value152;
char* name_161;
void* right_value153;
void* right_value154;
struct sType* result_type_162;
void* right_value155;
void* right_value156;
void* right_value157;
void* right_value158;
struct sType* __list_values9___163[2];
void* right_value159;
void* right_value160;
struct list$1sTypeph* param_types_164;
void* right_value161;
void* right_value162;
char* __list_values10___165[2];
void* right_value163;
void* right_value164;
struct list$1charph* param_names_166;
void* right_value165;
void* right_value166;
struct list$1charph* param_default_parametors_167;
void* right_value167;
void* right_value168;
void* right_value169;
struct sFun* main_fun_168;
void* right_value170;
void* right_value171;
char* name_169;
void* right_value172;
void* right_value173;
struct sType* result_type_170;
void* right_value174;
void* right_value175;
struct sType* __list_values11___171[1];
void* right_value176;
void* right_value177;
struct list$1sTypeph* param_types_172;
void* right_value178;
char* __list_values12___173[1];
void* right_value179;
void* right_value180;
struct list$1charph* param_names_174;
void* right_value181;
void* right_value182;
struct list$1charph* param_default_parametors_175;
void* right_value183;
void* right_value184;
void* right_value185;
struct sFun* main_fun_176;
void* right_value186;
void* right_value187;
char* name_177;
void* right_value188;
void* right_value189;
struct sType* result_type_178;
void* right_value190;
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
struct sType* __list_values13___179[7];
void* right_value204;
void* right_value205;
struct list$1sTypeph* param_types_180;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
char* __list_values14___181[7];
void* right_value213;
void* right_value214;
struct list$1charph* param_names_182;
void* right_value215;
void* right_value216;
struct list$1charph* param_default_parametors_183;
void* right_value217;
void* right_value218;
void* right_value219;
struct sFun* main_fun_184;
void* right_value220;
void* right_value221;
char* name_185;
void* right_value222;
void* right_value223;
struct sType* result_type_186;
void* right_value224;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
void* right_value233;
struct sType* __list_values15___187[5];
void* right_value234;
void* right_value235;
struct list$1sTypeph* param_types_188;
void* right_value236;
void* right_value237;
void* right_value238;
void* right_value239;
void* right_value240;
char* __list_values16___189[5];
void* right_value241;
void* right_value242;
struct list$1charph* param_names_190;
void* right_value243;
void* right_value244;
struct list$1charph* param_default_parametors_191;
void* right_value245;
void* right_value246;
void* right_value247;
struct sFun* main_fun_192;
void* right_value248;
void* right_value249;
char* name_193;
void* right_value250;
void* right_value251;
struct sType* result_type_194;
void* right_value252;
void* right_value253;
struct sType* __list_values17___195[1];
void* right_value254;
void* right_value255;
struct list$1sTypeph* param_types_196;
void* right_value256;
char* __list_values18___197[1];
void* right_value257;
void* right_value258;
struct list$1charph* param_names_198;
void* right_value259;
void* right_value260;
struct list$1charph* param_default_parametors_199;
void* right_value261;
void* right_value262;
void* right_value263;
struct sFun* main_fun_200;
void* right_value264;
void* right_value265;
char* name_201;
void* right_value266;
void* right_value267;
struct sType* result_type_202;
void* right_value268;
void* right_value269;
void* right_value270;
void* right_value271;
struct sType* __list_values19___203[2];
void* right_value272;
void* right_value273;
struct list$1sTypeph* param_types_204;
void* right_value274;
void* right_value275;
char* __list_values20___205[2];
void* right_value276;
void* right_value277;
struct list$1charph* param_names_206;
void* right_value278;
void* right_value279;
struct list$1charph* param_default_parametors_207;
void* right_value280;
void* right_value281;
void* right_value282;
struct sFun* main_fun_208;
void* right_value283;
void* right_value284;
char* name_209;
void* right_value285;
void* right_value286;
struct sType* result_type_210;
void* right_value287;
void* right_value288;
struct sType* __list_values21___211[1];
void* right_value289;
void* right_value290;
struct list$1sTypeph* param_types_212;
void* right_value291;
char* __list_values22___213[1];
void* right_value292;
void* right_value293;
struct list$1charph* param_names_214;
void* right_value294;
void* right_value295;
struct list$1charph* param_default_parametors_215;
void* right_value296;
void* right_value297;
void* right_value298;
struct sFun* main_fun_216;
void* right_value299;
void* right_value300;
char* name_217;
void* right_value301;
void* right_value302;
struct sType* result_type_218;
void* right_value303;
void* right_value304;
struct sType* __list_values23___219[1];
void* right_value305;
void* right_value306;
struct list$1sTypeph* param_types_220;
void* right_value307;
char* __list_values24___221[1];
void* right_value308;
void* right_value309;
struct list$1charph* param_names_222;
void* right_value310;
void* right_value311;
struct list$1charph* param_default_parametors_223;
void* right_value312;
void* right_value313;
void* right_value314;
struct sFun* main_fun_224;
void* right_value315;
char* head_225;
int head_sline_226;
void* right_value316;
char* buf_227;
void* right_value317;
struct sNode* node_228;
memset(&right_value70, 0, sizeof(void*));
memset(&name_85, 0, sizeof(char*)); /* ddd */
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&result_type_86, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&param_types_92, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&param_names_98, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&param_default_parametors_99, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&main_fun_100, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&name_137, 0, sizeof(char*)); /* ddd */
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&result_type_138, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&param_types_140, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&param_names_142, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&param_default_parametors_143, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&main_fun_144, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&name_145, 0, sizeof(char*)); /* ddd */
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&result_type_146, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&param_types_148, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&param_names_150, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&param_default_parametors_151, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&main_fun_152, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&name_153, 0, sizeof(char*)); /* ddd */
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&result_type_154, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&param_types_156, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&param_names_158, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&param_default_parametors_159, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&main_fun_160, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&name_161, 0, sizeof(char*)); /* ddd */
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&result_type_162, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&param_types_164, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&param_names_166, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&param_default_parametors_167, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&main_fun_168, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&name_169, 0, sizeof(char*)); /* ddd */
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&result_type_170, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&param_types_172, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&param_names_174, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&param_default_parametors_175, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&main_fun_176, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&name_177, 0, sizeof(char*)); /* ddd */
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&result_type_178, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value190, 0, sizeof(void*));
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
memset(&param_types_180, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&param_names_182, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&param_default_parametors_183, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&main_fun_184, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&name_185, 0, sizeof(char*)); /* ddd */
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&result_type_186, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value224, 0, sizeof(void*));
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
memset(&param_types_188, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&param_names_190, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&param_default_parametors_191, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&main_fun_192, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&name_193, 0, sizeof(char*)); /* ddd */
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&result_type_194, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&param_types_196, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&param_names_198, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&param_default_parametors_199, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&main_fun_200, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&name_201, 0, sizeof(char*)); /* ddd */
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&result_type_202, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&param_types_204, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&param_names_206, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&param_default_parametors_207, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&main_fun_208, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&name_209, 0, sizeof(char*)); /* ddd */
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&result_type_210, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&param_types_212, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&param_names_214, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&param_default_parametors_215, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&main_fun_216, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&name_217, 0, sizeof(char*)); /* ddd */
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&result_type_218, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&param_types_220, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&param_names_222, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&param_default_parametors_223, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&main_fun_224, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value315, 0, sizeof(void*));
memset(&head_225, 0, sizeof(char*)); /* ddd */
memset(&head_sline_226, 0, sizeof(int)); /* ddd */
memset(&right_value316, 0, sizeof(void*));
memset(&buf_227, 0, sizeof(char*)); /* ddd */
memset(&right_value317, 0, sizeof(void*));
memset(&node_228, 0, sizeof(struct sNode*)); /* ddd */
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_85=(char*)come_increment_ref_count(((char*)(right_value70=__builtin_string("come_calloc"))));
        if(right_value70) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0); }
        result_type_86=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value71=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value71) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value72) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values1___87[0]=come_increment_ref_count(((struct sType*)(right_value74=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value73=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values1___87[1]=come_increment_ref_count(((struct sType*)(right_value76=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value75=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
}        param_types_92=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values1___87))));
        if(right_value73) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value74) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value75) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value76) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value81) { come_call_finalizer(list$1sTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values2___93[0]=come_increment_ref_count(((char*)(right_value82=__builtin_string("count"))));
__list_values2___93[1]=come_increment_ref_count(((char*)(right_value83=__builtin_string("size"))));
}        param_names_98=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value87=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values2___93))));
        if(right_value82) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0); }
        if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
        if(right_value88) { come_call_finalizer(list$1charphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_99=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value90) { come_call_finalizer(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_100=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value93=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value91=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_85),(struct sType*)come_increment_ref_count(result_type_86),(struct list$1sTypeph*)come_increment_ref_count(param_types_92),(struct list$1charph*)come_increment_ref_count(param_names_98),(struct list$1charph*)come_increment_ref_count(param_default_parametors_99),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string("void* come_calloc(int count, int size)")))),info))));
        if(right_value91) { come_call_finalizer(sFun_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
        if(right_value93) { come_call_finalizer(sFun_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(name_85)))),(struct sFun*)come_increment_ref_count(main_fun_100));
        if(right_value100) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0); }
        if(name_85) { name_85 = come_decrement_ref_count(name_85, (void*)0, (void*)0, 0, 0); }
        if(result_type_86) { come_call_finalizer(sType_finalize,result_type_86, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_92) { come_call_finalizer(list$1sTypephp_finalize,param_types_92, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_98) { come_call_finalizer(list$1charphp_finalize,param_names_98, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_99) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_99, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_100) { come_call_finalizer(sFun_finalize,main_fun_100, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_137=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string("come_increment_ref_count"))));
        if(right_value101) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0); }
        result_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value102=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value102) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value103) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values3___139[0]=come_increment_ref_count(((struct sType*)(right_value105=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value104=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
}        param_types_140=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value106=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values3___139))));
        if(right_value104) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value105) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value107) { come_call_finalizer(list$1sTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values4___141[0]=come_increment_ref_count(((char*)(right_value108=__builtin_string("mem"))));
}        param_names_142=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values4___141))));
        if(right_value108) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0); }
        if(right_value110) { come_call_finalizer(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_143=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value112=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value112) { come_call_finalizer(list$1charphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_144=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value115=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value113=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_137),(struct sType*)come_increment_ref_count(result_type_138),(struct list$1sTypeph*)come_increment_ref_count(param_types_140),(struct list$1charph*)come_increment_ref_count(param_names_142),(struct list$1charph*)come_increment_ref_count(param_default_parametors_143),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string("void* come_increment_ref_count(void* mem)")))),info))));
        if(right_value113) { come_call_finalizer(sFun_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value114) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0); }
        if(right_value115) { come_call_finalizer(sFun_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(name_137)))),(struct sFun*)come_increment_ref_count(main_fun_144));
        if(right_value116) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0); }
        if(name_137) { name_137 = come_decrement_ref_count(name_137, (void*)0, (void*)0, 0, 0); }
        if(result_type_138) { come_call_finalizer(sType_finalize,result_type_138, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_140) { come_call_finalizer(list$1sTypephp_finalize,param_types_140, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_142) { come_call_finalizer(list$1charphp_finalize,param_names_142, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_143) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_143, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_144) { come_call_finalizer(sFun_finalize,main_fun_144, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_145=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string("ncfree"))));
        if(right_value117) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0); }
        result_type_146=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value118=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value118) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value119) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values5___147[0]=come_increment_ref_count(((struct sType*)(right_value121=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value120=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
}        param_types_148=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value123=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value122=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values5___147))));
        if(right_value120) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value121) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value123) { come_call_finalizer(list$1sTypephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values6___149[0]=come_increment_ref_count(((char*)(right_value124=__builtin_string("mem"))));
}        param_names_150=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value125=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values6___149))));
        if(right_value124) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0); }
        if(right_value126) { come_call_finalizer(list$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_151=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value128=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value128) { come_call_finalizer(list$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_152=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value131=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value129=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_145),(struct sType*)come_increment_ref_count(result_type_146),(struct list$1sTypeph*)come_increment_ref_count(param_types_148),(struct list$1charph*)come_increment_ref_count(param_names_150),(struct list$1charph*)come_increment_ref_count(param_default_parametors_151),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string("void ncfree(void* mem)")))),info))));
        if(right_value129) { come_call_finalizer(sFun_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value130) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0); }
        if(right_value131) { come_call_finalizer(sFun_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(name_145)))),(struct sFun*)come_increment_ref_count(main_fun_152));
        if(right_value132) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0); }
        if(name_145) { name_145 = come_decrement_ref_count(name_145, (void*)0, (void*)0, 0, 0); }
        if(result_type_146) { come_call_finalizer(sType_finalize,result_type_146, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_148) { come_call_finalizer(list$1sTypephp_finalize,param_types_148, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_150) { come_call_finalizer(list$1charphp_finalize,param_names_150, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_151) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_151, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_152) { come_call_finalizer(sFun_finalize,main_fun_152, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_153=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string("come_calloc"))));
        if(right_value133) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0); }
        result_type_154=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value134=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value134) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value135) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values7___155[0]=come_increment_ref_count(((struct sType*)(right_value137=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value136=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values7___155[1]=come_increment_ref_count(((struct sType*)(right_value139=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value138=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
}        param_types_156=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value141=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value140=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values7___155))));
        if(right_value136) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value137) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value138) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value139) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value141) { come_call_finalizer(list$1sTypephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values8___157[0]=come_increment_ref_count(((char*)(right_value142=__builtin_string("count"))));
__list_values8___157[1]=come_increment_ref_count(((char*)(right_value143=__builtin_string("size"))));
}        param_names_158=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value144=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values8___157))));
        if(right_value142) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0); }
        if(right_value143) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0); }
        if(right_value145) { come_call_finalizer(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_159=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value147=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value146=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value147) { come_call_finalizer(list$1charphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_160=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value150=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value148=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_153),(struct sType*)come_increment_ref_count(result_type_154),(struct list$1sTypeph*)come_increment_ref_count(param_types_156),(struct list$1charph*)come_increment_ref_count(param_names_158),(struct list$1charph*)come_increment_ref_count(param_default_parametors_159),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string("void* come_calloc(int count, int size)")))),info))));
        if(right_value148) { come_call_finalizer(sFun_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value149) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0); }
        if(right_value150) { come_call_finalizer(sFun_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(name_153)))),(struct sFun*)come_increment_ref_count(main_fun_160));
        if(right_value151) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0); }
        if(name_153) { name_153 = come_decrement_ref_count(name_153, (void*)0, (void*)0, 0, 0); }
        if(result_type_154) { come_call_finalizer(sType_finalize,result_type_154, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_156) { come_call_finalizer(list$1sTypephp_finalize,param_types_156, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_158) { come_call_finalizer(list$1charphp_finalize,param_names_158, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_159) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_159, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_160) { come_call_finalizer(sFun_finalize,main_fun_160, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_161=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("come_calloc"))));
        if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
        result_type_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value153=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value153) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value154) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values9___163[0]=come_increment_ref_count(((struct sType*)(right_value156=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values9___163[1]=come_increment_ref_count(((struct sType*)(right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
}        param_types_164=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value160=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value159=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values9___163))));
        if(right_value155) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value156) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value157) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value158) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value160) { come_call_finalizer(list$1sTypephp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values10___165[0]=come_increment_ref_count(((char*)(right_value161=__builtin_string("count"))));
__list_values10___165[1]=come_increment_ref_count(((char*)(right_value162=__builtin_string("size"))));
}        param_names_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value164=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value163=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values10___165))));
        if(right_value161) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0); }
        if(right_value162) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0); }
        if(right_value164) { come_call_finalizer(list$1charphp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_167=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value166=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value165=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value166) { come_call_finalizer(list$1charphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_168=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value169=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value167=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_161),(struct sType*)come_increment_ref_count(result_type_162),(struct list$1sTypeph*)come_increment_ref_count(param_types_164),(struct list$1charph*)come_increment_ref_count(param_names_166),(struct list$1charph*)come_increment_ref_count(param_default_parametors_167),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("void* come_calloc(int count, int size)")))),info))));
        if(right_value167) { come_call_finalizer(sFun_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value168) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0); }
        if(right_value169) { come_call_finalizer(sFun_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(name_161)))),(struct sFun*)come_increment_ref_count(main_fun_168));
        if(right_value170) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0); }
        if(name_161) { name_161 = come_decrement_ref_count(name_161, (void*)0, (void*)0, 0, 0); }
        if(result_type_162) { come_call_finalizer(sType_finalize,result_type_162, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_164) { come_call_finalizer(list$1sTypephp_finalize,param_types_164, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_166) { come_call_finalizer(list$1charphp_finalize,param_names_166, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_167) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_167, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_168) { come_call_finalizer(sFun_finalize,main_fun_168, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_169=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string("come_increment_ref_count"))));
        if(right_value171) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0); }
        result_type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value172=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value172) { come_call_finalizer(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value173) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values11___171[0]=come_increment_ref_count(((struct sType*)(right_value175=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value174=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
}        param_types_172=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value177=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value176=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values11___171))));
        if(right_value174) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value175) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value177) { come_call_finalizer(list$1sTypephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values12___173[0]=come_increment_ref_count(((char*)(right_value178=__builtin_string("mem"))));
}        param_names_174=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value180=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value179=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values12___173))));
        if(right_value178) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0); }
        if(right_value180) { come_call_finalizer(list$1charphp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_175=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value182=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value181=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value182) { come_call_finalizer(list$1charphp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_176=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value185=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value183=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_169),(struct sType*)come_increment_ref_count(result_type_170),(struct list$1sTypeph*)come_increment_ref_count(param_types_172),(struct list$1charph*)come_increment_ref_count(param_names_174),(struct list$1charph*)come_increment_ref_count(param_default_parametors_175),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string("void* come_increment_ref_count(void* mem)")))),info))));
        if(right_value183) { come_call_finalizer(sFun_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value184) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0); }
        if(right_value185) { come_call_finalizer(sFun_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string(name_169)))),(struct sFun*)come_increment_ref_count(main_fun_176));
        if(right_value186) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0); }
        if(name_169) { name_169 = come_decrement_ref_count(name_169, (void*)0, (void*)0, 0, 0); }
        if(result_type_170) { come_call_finalizer(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_172) { come_call_finalizer(list$1sTypephp_finalize,param_types_172, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_174) { come_call_finalizer(list$1charphp_finalize,param_names_174, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_175) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_175, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_176) { come_call_finalizer(sFun_finalize,main_fun_176, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_177=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string("come_call_finzlier"))));
        if(right_value187) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0); }
        result_type_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value188) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value189) { come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values13___179[0]=come_increment_ref_count(((struct sType*)(right_value191=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value190=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values13___179[1]=come_increment_ref_count(((struct sType*)(right_value193=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value192=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values13___179[2]=come_increment_ref_count(((struct sType*)(right_value195=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value194=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values13___179[3]=come_increment_ref_count(((struct sType*)(right_value197=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value196=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values13___179[4]=come_increment_ref_count(((struct sType*)(right_value199=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value198=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values13___179[5]=come_increment_ref_count(((struct sType*)(right_value201=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value200=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values13___179[6]=come_increment_ref_count(((struct sType*)(right_value203=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value202=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
}        param_types_180=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value205=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value204=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),7,__list_values13___179))));
        if(right_value190) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0); }
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
        if(right_value205) { come_call_finalizer(list$1sTypephp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values14___181[0]=come_increment_ref_count(((char*)(right_value206=__builtin_string("fun"))));
__list_values14___181[1]=come_increment_ref_count(((char*)(right_value207=__builtin_string("mem"))));
__list_values14___181[2]=come_increment_ref_count(((char*)(right_value208=__builtin_string("protocol_fun"))));
__list_values14___181[3]=come_increment_ref_count(((char*)(right_value209=__builtin_string("protocol_obj"))));
__list_values14___181[4]=come_increment_ref_count(((char*)(right_value210=__builtin_string("call_finalizer_only"))));
__list_values14___181[5]=come_increment_ref_count(((char*)(right_value211=__builtin_string("no_decrement"))));
__list_values14___181[6]=come_increment_ref_count(((char*)(right_value212=__builtin_string("no_free"))));
}        param_names_182=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value214=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value213=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),7,__list_values14___181))));
        if(right_value206) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0); }
        if(right_value207) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0); }
        if(right_value208) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0); }
        if(right_value209) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0); }
        if(right_value210) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0); }
        if(right_value211) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0); }
        if(right_value212) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0); }
        if(right_value214) { come_call_finalizer(list$1charphp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_183=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value215=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value216) { come_call_finalizer(list$1charphp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_184=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value219=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value217=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_177),(struct sType*)come_increment_ref_count(result_type_178),(struct list$1sTypeph*)come_increment_ref_count(param_types_180),(struct list$1charph*)come_increment_ref_count(param_names_182),(struct list$1charph*)come_increment_ref_count(param_default_parametors_183),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("")))),info))));
        if(right_value217) { come_call_finalizer(sFun_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value218) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0); }
        if(right_value219) { come_call_finalizer(sFun_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(name_177)))),(struct sFun*)come_increment_ref_count(main_fun_184));
        if(right_value220) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0); }
        if(name_177) { name_177 = come_decrement_ref_count(name_177, (void*)0, (void*)0, 0, 0); }
        if(result_type_178) { come_call_finalizer(sType_finalize,result_type_178, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_180) { come_call_finalizer(list$1sTypephp_finalize,param_types_180, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_182) { come_call_finalizer(list$1charphp_finalize,param_names_182, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_183) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_183, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_184) { come_call_finalizer(sFun_finalize,main_fun_184, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_185=(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string("come_decrement_ref_count"))));
        if(right_value221) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0); }
        result_type_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value222=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value222) { come_call_finalizer(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value223) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values15___187[0]=come_increment_ref_count(((struct sType*)(right_value225=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value224=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values15___187[1]=come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values15___187[2]=come_increment_ref_count(((struct sType*)(right_value229=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value228=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
__list_values15___187[3]=come_increment_ref_count(((struct sType*)(right_value231=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
__list_values15___187[4]=come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
}        param_types_188=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value235=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value234=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),5,__list_values15___187))));
        if(right_value224) { come_call_finalizer(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value225) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value226) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value227) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value228) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value229) { come_call_finalizer(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value230) { come_call_finalizer(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value231) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value232) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value233) { come_call_finalizer(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value235) { come_call_finalizer(list$1sTypephp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values16___189[0]=come_increment_ref_count(((char*)(right_value236=__builtin_string("mem"))));
__list_values16___189[1]=come_increment_ref_count(((char*)(right_value237=__builtin_string("protocol_fun"))));
__list_values16___189[2]=come_increment_ref_count(((char*)(right_value238=__builtin_string("protocol_obj"))));
__list_values16___189[3]=come_increment_ref_count(((char*)(right_value239=__builtin_string("no_decrement"))));
__list_values16___189[4]=come_increment_ref_count(((char*)(right_value240=__builtin_string("no_free"))));
}        param_names_190=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value242=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value241=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),5,__list_values16___189))));
        if(right_value236) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0); }
        if(right_value237) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0); }
        if(right_value238) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0); }
        if(right_value239) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0); }
        if(right_value240) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0); }
        if(right_value242) { come_call_finalizer(list$1charphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_191=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value244=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value243=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value244) { come_call_finalizer(list$1charphp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_192=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value247=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value245=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_185),(struct sType*)come_increment_ref_count(result_type_186),(struct list$1sTypeph*)come_increment_ref_count(param_types_188),(struct list$1charph*)come_increment_ref_count(param_names_190),(struct list$1charph*)come_increment_ref_count(param_default_parametors_191),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),info))));
        if(right_value245) { come_call_finalizer(sFun_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value246) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0); }
        if(right_value247) { come_call_finalizer(sFun_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string(name_185)))),(struct sFun*)come_increment_ref_count(main_fun_192));
        if(right_value248) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0); }
        if(name_185) { name_185 = come_decrement_ref_count(name_185, (void*)0, (void*)0, 0, 0); }
        if(result_type_186) { come_call_finalizer(sType_finalize,result_type_186, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_188) { come_call_finalizer(list$1sTypephp_finalize,param_types_188, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_190) { come_call_finalizer(list$1charphp_finalize,param_names_190, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_191) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_191, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_192) { come_call_finalizer(sFun_finalize,main_fun_192, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_193=(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string("come_free_object"))));
        if(right_value249) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0); }
        result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value250) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value251) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values17___195[0]=come_increment_ref_count(((struct sType*)(right_value253=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value252=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
}        param_types_196=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value255=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value254=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values17___195))));
        if(right_value252) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value253) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value255) { come_call_finalizer(list$1sTypephp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values18___197[0]=come_increment_ref_count(((char*)(right_value256=__builtin_string("mem"))));
}        param_names_198=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value258=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value257=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values18___197))));
        if(right_value256) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0); }
        if(right_value258) { come_call_finalizer(list$1charphp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_199=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value260=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value259=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value260) { come_call_finalizer(list$1charphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_200=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value263=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value261=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_193),(struct sType*)come_increment_ref_count(result_type_194),(struct list$1sTypeph*)come_increment_ref_count(param_types_196),(struct list$1charph*)come_increment_ref_count(param_names_198),(struct list$1charph*)come_increment_ref_count(param_default_parametors_199),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("void come_free_object(void* mem)")))),info))));
        if(right_value261) { come_call_finalizer(sFun_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value262) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0); }
        if(right_value263) { come_call_finalizer(sFun_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string(name_193)))),(struct sFun*)come_increment_ref_count(main_fun_200));
        if(right_value264) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0); }
        if(name_193) { name_193 = come_decrement_ref_count(name_193, (void*)0, (void*)0, 0, 0); }
        if(result_type_194) { come_call_finalizer(sType_finalize,result_type_194, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_196) { come_call_finalizer(list$1sTypephp_finalize,param_types_196, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_198) { come_call_finalizer(list$1charphp_finalize,param_names_198, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_199) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_199, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_200) { come_call_finalizer(sFun_finalize,main_fun_200, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_201=(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("nccalloc"))));
        if(right_value265) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0); }
        result_type_202=(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value266) { come_call_finalizer(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value267) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values19___203[0]=come_increment_ref_count(((struct sType*)(right_value269=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value268=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values19___203[1]=come_increment_ref_count(((struct sType*)(right_value271=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value270=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
}        param_types_204=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value273=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value272=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values19___203))));
        if(right_value268) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value269) { come_call_finalizer(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value270) { come_call_finalizer(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value271) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value273) { come_call_finalizer(list$1sTypephp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values20___205[0]=come_increment_ref_count(((char*)(right_value274=__builtin_string("nmemb"))));
__list_values20___205[1]=come_increment_ref_count(((char*)(right_value275=__builtin_string("size"))));
}        param_names_206=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value277=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value276=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values20___205))));
        if(right_value274) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0); }
        if(right_value275) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0); }
        if(right_value277) { come_call_finalizer(list$1charphp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_207=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value279=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value278=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value279) { come_call_finalizer(list$1charphp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_208=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value282=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value280=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_201),(struct sType*)come_increment_ref_count(result_type_202),(struct list$1sTypeph*)come_increment_ref_count(param_types_204),(struct list$1charph*)come_increment_ref_count(param_names_206),(struct list$1charph*)come_increment_ref_count(param_default_parametors_207),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value281=__builtin_string("void* nccalloc(int nmemb, int size)")))),info))));
        if(right_value280) { come_call_finalizer(sFun_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value281) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0); }
        if(right_value282) { come_call_finalizer(sFun_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string(name_201)))),(struct sFun*)come_increment_ref_count(main_fun_208));
        if(right_value283) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0); }
        if(name_201) { name_201 = come_decrement_ref_count(name_201, (void*)0, (void*)0, 0, 0); }
        if(result_type_202) { come_call_finalizer(sType_finalize,result_type_202, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_204) { come_call_finalizer(list$1sTypephp_finalize,param_types_204, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_206) { come_call_finalizer(list$1charphp_finalize,param_names_206, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_207) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_207, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_208) { come_call_finalizer(sFun_finalize,main_fun_208, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_209=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string("come_memdup"))));
        if(right_value284) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0); }
        result_type_210=(struct sType*)come_increment_ref_count(((struct sType*)(right_value286=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value285=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
        if(right_value285) { come_call_finalizer(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value286) { come_call_finalizer(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values21___211[0]=come_increment_ref_count(((struct sType*)(right_value288=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value287=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0))));
}        param_types_212=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value290=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value289=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values21___211))));
        if(right_value287) { come_call_finalizer(sType_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value288) { come_call_finalizer(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value290) { come_call_finalizer(list$1sTypephp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values22___213[0]=come_increment_ref_count(((char*)(right_value291=__builtin_string("block"))));
}        param_names_214=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value293=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value292=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values22___213))));
        if(right_value291) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0); }
        if(right_value293) { come_call_finalizer(list$1charphp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_215=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value295=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value294=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value295) { come_call_finalizer(list$1charphp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_216=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value298=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value296=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_209),(struct sType*)come_increment_ref_count(result_type_210),(struct list$1sTypeph*)come_increment_ref_count(param_types_212),(struct list$1charph*)come_increment_ref_count(param_names_214),(struct list$1charph*)come_increment_ref_count(param_default_parametors_215),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value297=__builtin_string("void* come_memdup(void* block)")))),info))));
        if(right_value296) { come_call_finalizer(sFun_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value297) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0); }
        if(right_value298) { come_call_finalizer(sFun_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value299=__builtin_string(name_209)))),(struct sFun*)come_increment_ref_count(main_fun_216));
        if(right_value299) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0); }
        if(name_209) { name_209 = come_decrement_ref_count(name_209, (void*)0, (void*)0, 0, 0); }
        if(result_type_210) { come_call_finalizer(sType_finalize,result_type_210, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_212) { come_call_finalizer(list$1sTypephp_finalize,param_types_212, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_214) { come_call_finalizer(list$1charphp_finalize,param_names_214, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_215) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_215, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_216) { come_call_finalizer(sFun_finalize,main_fun_216, (void*)0, (void*)0, 0, 0, 0); }
    }
    {
        name_217=(char*)come_increment_ref_count(((char*)(right_value300=__builtin_string("__builtin_string"))));
        if(right_value300) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0); }
        result_type_218=(struct sType*)come_increment_ref_count(((struct sType*)(right_value302=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value301=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char*",info,(_Bool)0))));
        if(right_value301) { come_call_finalizer(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value302) { come_call_finalizer(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values23___219[0]=come_increment_ref_count(((struct sType*)(right_value304=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value303=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char*",info,(_Bool)0))));
}        param_types_220=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value306=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value305=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values23___219))));
        if(right_value303) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value304) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value306) { come_call_finalizer(list$1sTypephp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values24___221[0]=come_increment_ref_count(((char*)(right_value307=__builtin_string("str"))));
}        param_names_222=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value309=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value308=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values24___221))));
        if(right_value307) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0); }
        if(right_value309) { come_call_finalizer(list$1charphp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0); }
        param_default_parametors_223=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value311=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value310=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(right_value311) { come_call_finalizer(list$1charphp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0); }
        main_fun_224=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value314=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value312=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_217),(struct sType*)come_increment_ref_count(result_type_218),(struct list$1sTypeph*)come_increment_ref_count(param_types_220),(struct list$1charph*)come_increment_ref_count(param_names_222),(struct list$1charph*)come_increment_ref_count(param_default_parametors_223),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value313=__builtin_string("char* __builtin_string(char* str)")))),info))));
        if(right_value312) { come_call_finalizer(sFun_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value313) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0); }
        if(right_value314) { come_call_finalizer(sFun_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value315=__builtin_string(name_217)))),(struct sFun*)come_increment_ref_count(main_fun_224));
        if(right_value315) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0); }
        if(name_217) { name_217 = come_decrement_ref_count(name_217, (void*)0, (void*)0, 0, 0); }
        if(result_type_218) { come_call_finalizer(sType_finalize,result_type_218, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_220) { come_call_finalizer(list$1sTypephp_finalize,param_types_220, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_222) { come_call_finalizer(list$1charphp_finalize,param_names_222, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_223) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_223, (void*)0, (void*)0, 0, 0, 0); }
        if(main_fun_224) { come_call_finalizer(sFun_finalize,main_fun_224, (void*)0, (void*)0, 0, 0, 0); }
    }
    while(*info->p) {
        parse_sharp_v5(info);
        head_225=info->p;
        head_sline_226=info->sline;
        buf_227=(char*)come_increment_ref_count(((char*)(right_value316=parse_word(info))));
        if(right_value316) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0); }
        parse_sharp_v5(info);
        node_228=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=top_level_v99((char*)come_increment_ref_count(buf_227),head_225,head_sline_226,info))));
        if(right_value317) { right_value317 = come_decrement_ref_count(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0); } 
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(node_228!=((void*)0)) {
            if(!node_228->compile(node_228->_protocol_obj,info)) {
                err_msg(info,"compiling is faield(X)");
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(buf_227) { buf_227 = come_decrement_ref_count(buf_227, (void*)0, (void*)0, 0, 0); }
        if(node_228) { node_228 = come_decrement_ref_count(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0, 0); } 
    }
    int __result69__ = 0;
    return __result69__;
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
    return __result7__;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
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
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
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
            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
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
            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0); }
            if(right_value14) { come_call_finalizer(list$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj13=result_8->mArrayNum;
            result_8->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value22=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
            if(right_value22) { come_call_finalizer(list$1sNodephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_8->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj14=result_8->mParamTypes;
            result_8->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
            if(right_value23) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj18=result_8->mParamNames;
            result_8->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value30=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
            if(right_value30) { come_call_finalizer(list$1charphp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj19=result_8->mResultType;
            result_8->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value31=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
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
        return __result25__;
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
                    return __result12__;
                }
                result_9=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                if(right_value4) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj3=result_9->v1;
                    result_9->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value5=sType_clone(self->v1))));
                    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
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
memset(&result_10, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_11, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value13, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sTypeph* __result14__ = ((void*)0);
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
                            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_12;
                            self->head=litem_12;
                        }
                        else if(self->len==1) {
                            litem_13=((struct list_item$1sTypeph*)(right_value11=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_13->prev=self->head;
                            litem_13->next=((void*)0);
                            __dec_obj7=litem_13->item;
                            litem_13->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_13;
                            self->head->next=litem_13;
                        }
                        else {
                            litem_14=((struct list_item$1sTypeph*)(right_value12=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_14->prev=self->tail;
                            litem_14->next=((void*)0);
                            __dec_obj8=litem_14->item;
                            litem_14->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
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
memset(&result_15, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value21, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sNodeph* __result17__ = ((void*)0);
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
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value20;
struct sNode* result_20;
memset(&right_value20, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct sNode*)); /* ddd */
                        if(self==(void*)0) {
                            struct sNode* __result19__ = (void*)0;
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
memset(&result_21, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_22, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value29, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1charph* __result22__ = ((void*)0);
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
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
            self->tail=litem_26;
            self->head=litem_26;
        }
        else if(self->len==1) {
            litem_27=((struct list_item$1CVALUEph*)(right_value35=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_27->prev=self->head;
            litem_27->next=((void*)0);
            __dec_obj23=litem_27->item;
            litem_27->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
            self->tail=litem_27;
            self->head->next=litem_27;
        }
        else {
            litem_28=((struct list_item$1CVALUEph*)(right_value36=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_28->prev=self->tail;
            litem_28->next=((void*)0);
            __dec_obj24=litem_28->item;
            litem_28->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
            self->tail->next=litem_28;
            self->tail=litem_28;
        }
        self->len++;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void sBlock_finalize(struct sBlock* self){
        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
            if(self->mNodes) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
            if(self->mVarTable) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0); }
        }
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
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
    if(right_value39) { come_call_finalizer(sType_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj27=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value40=list$1charphp_clone(generics_type_names))));
    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
    if(right_value40) { come_call_finalizer(list$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj28=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
    __dec_obj29=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
    __dec_obj30=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
    __dec_obj31=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
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
    return __result28__;
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
}

static char* list$1charphp_begin(struct list$1charph* self){
char* result_42;
memset(&result_42, 0, sizeof(char*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                char* __result30__ = self->it->item;
                return __result30__;
            }
            memset(&result_42,0,sizeof(char*));
            char* __result31__ = result_42;
            return __result31__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
            _Bool __result32__ = self->it==((void*)0);
            return __result32__;
}

static char* list$1charphp_next(struct list$1charph* self){
char* result_44;
memset(&result_44, 0, sizeof(char*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                char* __result33__ = self->it->item;
                return __result33__;
            }
            memset(&result_44,0,sizeof(char*));
            char* __result34__ = result_44;
            return __result34__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_45;
memset(&default_value_45, 0, sizeof(struct sType*)); /* bbb */
                memset(&default_value_45,0,sizeof(struct sType*));
                struct sType* __result37__ = list$1sTypephp_item(self,index,default_value_45);
                return __result37__;
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
                            return __result35__;
                        }
                        it_46=it_46->next;
                        i_47++;
                    }
                    struct sType* __result36__ = default_value;
                    return __result36__;
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
                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
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
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0); }
                    if(right_value53) { come_call_finalizer(list$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj40=result_48->mArrayNum;
                    result_48->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value54=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
                    if(right_value54) { come_call_finalizer(list$1sNodephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_48->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj41=result_48->mParamTypes;
                    result_48->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
                    if(right_value55) { come_call_finalizer(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj42=result_48->mParamNames;
                    result_48->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value56=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
                    if(right_value56) { come_call_finalizer(list$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj43=result_48->mResultType;
                    result_48->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
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
                return __result39__;
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
        struct list$1sRightValueObjectph* __result40__ = self;
        if(self) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        return __result40__;
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
        int __result41__ = self->len;
        return __result41__;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
struct sNode* result_55;
memset(&result_55, 0, sizeof(struct sNode*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct sNode* __result42__ = self->it->item;
                return __result42__;
            }
            memset(&result_55,0,sizeof(struct sNode*));
            struct sNode* __result43__ = result_55;
            return __result43__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
            _Bool __result44__ = self->it==((void*)0);
            return __result44__;
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
struct sNode* result_57;
memset(&result_57, 0, sizeof(struct sNode*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct sNode* __result45__ = self->it->item;
                return __result45__;
            }
            memset(&result_57,0,sizeof(struct sNode*));
            struct sNode* __result46__ = result_57;
            return __result46__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
                int __result47__ = self->len;
                return __result47__;
}

static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self){
char* result_61;
memset(&result_61, 0, sizeof(char*)); /* bbb */
            self->key_list->it=self->key_list->head;
            if(self->key_list->it) {
                char* __result48__ = self->key_list->it->item;
                return __result48__;
            }
            memset(&result_61,0,sizeof(char*));
            char* __result49__ = result_61;
            return __result49__;
}

static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self){
            _Bool __result50__ = self->key_list->it==((void*)0);
            return __result50__;
}

static char* map$2charphsFunphp_next(struct map$2charphsFunph* self){
char* result_63;
memset(&result_63, 0, sizeof(char*)); /* bbb */
            self->key_list->it=self->key_list->it->next;
            if(self->key_list->it) {
                char* __result51__ = self->key_list->it->item;
                return __result51__;
            }
            memset(&result_63,0,sizeof(char*));
            char* __result52__ = result_63;
            return __result52__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
struct sFun* default_value_64;
memset(&default_value_64, 0, sizeof(struct sFun*)); /* bbb */
                memset(&default_value_64,0,sizeof(struct sFun*));
                struct sFun* __result57__ = map$2charphsFunphp_at(self,key,default_value_64);
                return __result57__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_65;
int it_66;
memset(&hash_65, 0, sizeof(int)); /* ddd */
memset(&it_66, 0, sizeof(int)); /* ddd */
                    hash_65=string_get_hash_key(((char*)key))%self->size;
                    it_66=hash_65;
                    while((_Bool)1) {
                        if(self->item_existance[it_66]) {
                            if(charp_equals(self->keys[it_66],key)) {
                                struct sFun* __result53__ = self->items[it_66];
                                return __result53__;
                            }
                            it_66++;
                            if(it_66>=self->size) {
                                it_66=0;
                            }
                            else if(it_66==hash_65) {
                                struct sFun* __result54__ = default_value;
                                return __result54__;
                            }
                        }
                        else {
                            struct sFun* __result55__ = default_value;
                            return __result55__;
                        }
                    }
                    struct sFun* __result56__ = default_value;
                    return __result56__;
}

char* parse_attribute(struct sInfo* info){
void* right_value67;
void* right_value68;
struct buffer* asm_fun_name_79;
int brace_num_80;
int len_81;
_Bool in_dquort_82;
int brace_num_83;
int brace_num_84;
void* right_value69;
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&asm_fun_name_79, 0, sizeof(struct buffer*)); /* ddd */
memset(&brace_num_80, 0, sizeof(int)); /* ddd */
memset(&len_81, 0, sizeof(int)); /* ddd */
memset(&in_dquort_82, 0, sizeof(_Bool)); /* ddd */
memset(&brace_num_83, 0, sizeof(int)); /* ddd */
memset(&brace_num_84, 0, sizeof(int)); /* ddd */
memset(&right_value69, 0, sizeof(void*));
    asm_fun_name_79=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value68=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value67=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value67) { come_call_finalizer(buffer_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value68) { come_call_finalizer(buffer_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0); }
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
            brace_num_80=0;
            while(*info->p) {
                if(*info->p==40) {
                    info->p++;
                    brace_num_80++;
                }
                else if(*info->p==41) {
                    info->p++;
                    brace_num_80--;
                    if(brace_num_80==0) {
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
            len_81=0;
            in_dquort_82=(_Bool)0;
            brace_num_83=0;
            while(*info->p) {
                if(*info->p==34) {
                    info->p++;
                    in_dquort_82=!in_dquort_82;
                }
                else if(in_dquort_82) {
                    buffer_append_char(asm_fun_name_79,*info->p);
                    info->p++;
                }
                else if(*info->p==40) {
                    info->p++;
                    brace_num_83++;
                }
                else if(*info->p==41) {
                    info->p++;
                    brace_num_83--;
                    if(brace_num_83==0) {
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
            brace_num_84=0;
            while(*info->p) {
                if(*info->p==40) {
                    info->p++;
                    brace_num_84++;
                }
                else if(*info->p==41) {
                    info->p++;
                    brace_num_84--;
                    if(brace_num_84==0) {
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
    char* __result61__ = ((char*)(right_value69=buffer_to_string(asm_fun_name_79)));
    if(asm_fun_name_79) { come_call_finalizer(buffer_finalize,asm_fun_name_79, (void*)0, (void*)0, 0, 0, 0); }
    return __result61__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
int i_88;
memset(&i_88, 0, sizeof(int)); /* ddd */
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_88=0;
            i_88<num_value;
            i_88++
            ){
                list$1sTypephp_push_back(self,values[i_88]);
            }
            struct list$1sTypeph* __result62__ = self;
            if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result62__;
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value77;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj49;
void* right_value78;
struct list_item$1sTypeph* litem_90;
struct sType* __dec_obj50;
void* right_value79;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj51;
memset(&right_value77, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value78, 0, sizeof(void*));
memset(&litem_90, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value79, 0, sizeof(void*));
memset(&litem_91, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                    if(self->len==0) {
                        litem_89=((struct list_item$1sTypeph*)(right_value77=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                        litem_89->prev=((void*)0);
                        litem_89->next=((void*)0);
                        __dec_obj49=litem_89->item;
                        litem_89->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
                        self->tail=litem_89;
                        self->head=litem_89;
                    }
                    else if(self->len==1) {
                        litem_90=((struct list_item$1sTypeph*)(right_value78=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                        litem_90->prev=self->head;
                        litem_90->next=((void*)0);
                        __dec_obj50=litem_90->item;
                        litem_90->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
                        self->tail=litem_90;
                        self->head->next=litem_90;
                    }
                    else {
                        litem_91=((struct list_item$1sTypeph*)(right_value79=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                        litem_91->prev=self->tail;
                        litem_91->next=((void*)0);
                        __dec_obj51=litem_91->item;
                        litem_91->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
                        self->tail->next=litem_91;
                        self->tail=litem_91;
                    }
                    self->len++;
                    if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
int i_94;
memset(&i_94, 0, sizeof(int)); /* ddd */
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_94=0;
            i_94<num_value;
            i_94++
            ){
                list$1charphp_push_back(self,values[i_94]);
            }
            struct list$1charph* __result63__ = self;
            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result63__;
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value84;
struct list_item$1charph* litem_95;
char* __dec_obj52;
void* right_value85;
struct list_item$1charph* litem_96;
char* __dec_obj53;
void* right_value86;
struct list_item$1charph* litem_97;
char* __dec_obj54;
memset(&right_value84, 0, sizeof(void*));
memset(&litem_95, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value85, 0, sizeof(void*));
memset(&litem_96, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value86, 0, sizeof(void*));
memset(&litem_97, 0, sizeof(struct list_item$1charph*)); /* ddd */
                    if(self->len==0) {
                        litem_95=((struct list_item$1charph*)(right_value84=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                        litem_95->prev=((void*)0);
                        litem_95->next=((void*)0);
                        __dec_obj52=litem_95->item;
                        litem_95->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                        self->tail=litem_95;
                        self->head=litem_95;
                    }
                    else if(self->len==1) {
                        litem_96=((struct list_item$1charph*)(right_value85=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                        litem_96->prev=self->head;
                        litem_96->next=((void*)0);
                        __dec_obj53=litem_96->item;
                        litem_96->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
                        self->tail=litem_96;
                        self->head->next=litem_96;
                    }
                    else {
                        litem_97=((struct list_item$1charph*)(right_value86=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                        litem_97->prev=self->tail;
                        litem_97->next=((void*)0);
                        __dec_obj54=litem_97->item;
                        litem_97->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
                        self->tail->next=litem_97;
                        self->tail=litem_97;
                    }
                    self->len++;
                    if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
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

static void map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
int hash_112;
int it_113;
_Bool same_key_exist_130;
char* it2_132;
memset(&hash_112, 0, sizeof(int)); /* ddd */
memset(&it_113, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_130, 0, sizeof(_Bool)); /* ddd */
memset(&it2_132, 0, sizeof(char*)); /* ddd */
            if(self->len*2>=self->size) {
                map$2charphsFunphp_rehash(self);
            }
            hash_112=string_get_hash_key(key)%self->size;
            it_113=hash_112;
            while((_Bool)1) {
                if(self->item_existance[it_113]) {
                    if(charp_equals(self->keys[it_113],key)) {
                        if(1) {
                            list$1charpp_remove(self->key_list,self->keys[it_113]);
                            if(self->keys[it_113]) { self->keys[it_113] = come_decrement_ref_count(self->keys[it_113], (void*)0, (void*)0, 0, 0); }
                            self->keys[it_113]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charpp_remove(self->key_list,self->keys[it_113]);
                            self->keys[it_113]=key;
                        }
                        if(1) {
                            if(self->items[it_113]) { come_call_finalizer(sFunp_finalize,self->items[it_113], (void*)0, (void*)0, 0, 0, 0); }
                            self->items[it_113]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_113]=item;
                        }
                        break;
                    }
                    it_113++;
                    if(it_113>=self->size) {
                        it_113=0;
                    }
                    else if(it_113==hash_112) {
                        fprintf(stderr,"unexpected error in map.insert\n");
                        exit(2);
                    }
                }
                else {
                    self->item_existance[it_113]=(_Bool)1;
                    if(1) {
                        self->keys[it_113]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_113]=key;
                    }
                    if(1) {
                        self->items[it_113]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_113]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_130=(_Bool)0;
            for(
            it2_132=list$1charpp_begin(self->key_list);
            !list$1charpp_end(self->key_list);
            it_113=list$1charpp_next(self->key_list)
            ){
                if(charp_equals(it2_132,key)) {
                    same_key_exist_130=(_Bool)1;
                }
            }
            if(!same_key_exist_130) {
                list$1charpp_push_back(self->key_list,key);
            }
            if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
            if(item) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self){
int size_101;
void* right_value94;
char** keys_102;
void* right_value95;
struct sFun** items_103;
void* right_value96;
_Bool* item_existance_104;
int len_105;
char* it_106;
struct sFun* default_value_107;
struct sFun* it2_108;
int hash_109;
int n_110;
struct sFun* default_value_111;
memset(&size_101, 0, sizeof(int)); /* ddd */
memset(&right_value94, 0, sizeof(void*));
memset(&keys_102, 0, sizeof(char**)); /* ddd */
memset(&right_value95, 0, sizeof(void*));
memset(&items_103, 0, sizeof(struct sFun**)); /* ddd */
memset(&right_value96, 0, sizeof(void*));
memset(&item_existance_104, 0, sizeof(_Bool*)); /* ddd */
memset(&len_105, 0, sizeof(int)); /* ddd */
memset(&it_106, 0, sizeof(char*)); /* ddd */
memset(&default_value_107, 0, sizeof(struct sFun*)); /* bbb */
memset(&it2_108, 0, sizeof(struct sFun*)); /* ddd */
memset(&hash_109, 0, sizeof(int)); /* ddd */
memset(&n_110, 0, sizeof(int)); /* ddd */
memset(&default_value_111, 0, sizeof(struct sFun*)); /* bbb */
                    size_101=self->size*3;
                    keys_102=((char**)(right_value94=(char**)come_calloc(1, sizeof(char*)*(1*(size_101)))));
                    items_103=((struct sFun**)(right_value95=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_101)))));
                    item_existance_104=((_Bool*)(right_value96=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_101)))));
                    len_105=0;
                    for(
                    it_106=map$2charphsFunphp_begin(self);
                    !map$2charphsFunphp_end(self);
                    it_106=map$2charphsFunphp_next(self)
                    ){
                        it2_108=map$2charphsFunphp_at(self,it_106,default_value_107);
                        hash_109=charp_get_hash_key(it_106)%size_101;
                        n_110=hash_109;
                        while((_Bool)1) {
                            if(item_existance_104[n_110]) {
                                n_110++;
                                if(n_110>=size_101) {
                                    n_110=0;
                                }
                                else if(n_110==hash_109) {
                                    fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                    exit(2);
                                }
                            }
                            else {
                                item_existance_104[n_110]=(_Bool)1;
                                keys_102[n_110]=it_106;
                                items_103[n_110]=map$2charphsFunphp_at(self,it_106,default_value_111);
                                len_105++;
                                break;
                            }
                        }
                    }
                    come_free_object((char*)self->items);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                    come_free_object((char*)self->keys);
                    self->keys=keys_102;
                    self->items=items_103;
                    self->item_existance=item_existance_104;
                    self->size=size_101;
                    self->len=len_105;
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_114;
struct list_item$1charp* it_115;
memset(&it2_114, 0, sizeof(int)); /* ddd */
memset(&it_115, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                it2_114=0;
                                it_115=self->head;
                                while(it_115!=((void*)0)) {
                                    if(charp_equals(it_115->item,item)) {
                                        list$1charpp_delete(self,it2_114,it2_114+1);
                                        break;
                                    }
                                    it2_114++;
                                    it_115=it_115->next;
                                }
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_116;
struct list_item$1charp* it_119;
int i_120;
struct list_item$1charp* prev_it_121;
struct list_item$1charp* it_122;
int i_123;
struct list_item$1charp* prev_it_124;
struct list_item$1charp* it_125;
struct list_item$1charp* head_prev_it_126;
struct list_item$1charp* tail_it_127;
int i_128;
struct list_item$1charp* prev_it_129;
memset(&tmp_116, 0, sizeof(int)); /* ddd */
memset(&it_119, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_120, 0, sizeof(int)); /* ddd */
memset(&prev_it_121, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_122, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_123, 0, sizeof(int)); /* ddd */
memset(&prev_it_124, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_125, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_126, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_127, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_128, 0, sizeof(int)); /* ddd */
memset(&prev_it_129, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                            if(head<0) {
                                                head+=self->len;
                                            }
                                            if(tail<0) {
                                                tail+=self->len+1;
                                            }
                                            if(head>tail) {
                                                tmp_116=tail;
                                                tail=head;
                                                head=tmp_116;
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
                                                it_119=self->head;
                                                i_120=0;
                                                while(it_119!=((void*)0)) {
                                                    if(i_120<tail) {
                                                        prev_it_121=it_119;
                                                        it_119=it_119->next;
                                                        i_120++;
                                                        if(prev_it_121) { come_call_finalizer(list_item$1charpp_finalize,prev_it_121, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else if(i_120==tail) {
                                                        self->head=it_119;
                                                        self->head->prev=((void*)0);
                                                        break;
                                                    }
                                                    else {
                                                        it_119=it_119->next;
                                                        i_120++;
                                                    }
                                                }
                                            }
                                            else if(tail==self->len) {
                                                it_122=self->head;
                                                i_123=0;
                                                while(it_122!=((void*)0)) {
                                                    if(i_123==head) {
                                                        self->tail=it_122->prev;
                                                        self->tail->next=((void*)0);
                                                    }
                                                    if(i_123>=head) {
                                                        prev_it_124=it_122;
                                                        it_122=it_122->next;
                                                        i_123++;
                                                        if(prev_it_124) { come_call_finalizer(list_item$1charpp_finalize,prev_it_124, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        it_122=it_122->next;
                                                        i_123++;
                                                    }
                                                }
                                            }
                                            else {
                                                it_125=self->head;
                                                head_prev_it_126=((void*)0);
                                                tail_it_127=((void*)0);
                                                i_128=0;
                                                while(it_125!=((void*)0)) {
                                                    if(i_128==head) {
                                                        head_prev_it_126=it_125->prev;
                                                    }
                                                    if(i_128==tail) {
                                                        tail_it_127=it_125;
                                                    }
                                                    if(i_128>=head&&i_128<tail) {
                                                        prev_it_129=it_125;
                                                        it_125=it_125->next;
                                                        i_128++;
                                                        if(prev_it_129) { come_call_finalizer(list_item$1charpp_finalize,prev_it_129, (void*)0, (void*)0, 0, 0, 0); }
                                                        self->len--;
                                                    }
                                                    else {
                                                        it_125=it_125->next;
                                                        i_128++;
                                                    }
                                                }
                                                if(head_prev_it_126!=((void*)0)) {
                                                    head_prev_it_126->next=tail_it_127;
                                                }
                                                if(tail_it_127!=((void*)0)) {
                                                    tail_it_127->prev=head_prev_it_126;
                                                }
                                            }
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_117;
struct list_item$1charp* prev_it_118;
memset(&it_117, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_118, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                    it_117=self->head;
                                                    while(it_117!=((void*)0)) {
                                                        prev_it_118=it_117;
                                                        it_117=it_117->next;
                                                        if(prev_it_118) { come_call_finalizer(list_item$1charpp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0); }
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
char* result_131;
memset(&result_131, 0, sizeof(char*)); /* bbb */
                self->it=self->head;
                if(self->it) {
                    char* __result64__ = self->it->item;
                    return __result64__;
                }
                memset(&result_131,0,sizeof(char*));
                char* __result65__ = result_131;
                return __result65__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
                _Bool __result66__ = self->it==((void*)0);
                return __result66__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_133;
memset(&result_133, 0, sizeof(char*)); /* bbb */
                self->it=self->it->next;
                if(self->it) {
                    char* __result67__ = self->it->item;
                    return __result67__;
                }
                memset(&result_133,0,sizeof(char*));
                char* __result68__ = result_133;
                return __result68__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value97;
struct list_item$1charp* litem_134;
void* right_value98;
struct list_item$1charp* litem_135;
void* right_value99;
struct list_item$1charp* litem_136;
memset(&right_value97, 0, sizeof(void*));
memset(&litem_134, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value98, 0, sizeof(void*));
memset(&litem_135, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value99, 0, sizeof(void*));
memset(&litem_136, 0, sizeof(struct list_item$1charp*)); /* ddd */
                    if(self->len==0) {
                        litem_134=((struct list_item$1charp*)(right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                        litem_134->prev=((void*)0);
                        litem_134->next=((void*)0);
                        litem_134->item=item;
                        self->tail=litem_134;
                        self->head=litem_134;
                    }
                    else if(self->len==1) {
                        litem_135=((struct list_item$1charp*)(right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                        litem_135->prev=self->head;
                        litem_135->next=((void*)0);
                        litem_135->item=item;
                        self->tail=litem_135;
                        self->head->next=litem_135;
                    }
                    else {
                        litem_136=((struct list_item$1charp*)(right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                        litem_136->prev=self->tail;
                        litem_136->next=((void*)0);
                        litem_136->item=item;
                        self->tail->next=litem_136;
                        self->tail=litem_136;
                    }
                    self->len++;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
            }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
struct sClass* default_value_238;
memset(&default_value_238, 0, sizeof(struct sClass*)); /* bbb */
        memset(&default_value_238,0,sizeof(struct sClass*));
        struct sClass* __result77__ = map$2charphsClassphp_at(self,key,default_value_238);
        return __result77__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_239;
int it_240;
memset(&hash_239, 0, sizeof(int)); /* ddd */
memset(&it_240, 0, sizeof(int)); /* ddd */
            hash_239=string_get_hash_key(((char*)key))%self->size;
            it_240=hash_239;
            while((_Bool)1) {
                if(self->item_existance[it_240]) {
                    if(charp_equals(self->keys[it_240],key)) {
                        struct sClass* __result73__ = self->items[it_240];
                        return __result73__;
                    }
                    it_240++;
                    if(it_240>=self->size) {
                        it_240=0;
                    }
                    else if(it_240==hash_239) {
                        struct sClass* __result74__ = default_value;
                        return __result74__;
                    }
                }
                else {
                    struct sClass* __result75__ = default_value;
                    return __result75__;
                }
            }
            struct sClass* __result76__ = default_value;
            return __result76__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
struct sType* default_value_242;
memset(&default_value_242, 0, sizeof(struct sType*)); /* bbb */
        memset(&default_value_242,0,sizeof(struct sType*));
        struct sType* __result82__ = map$2charphsTypephp_at(self,key,default_value_242);
        return __result82__;
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
int hash_243;
int it_244;
memset(&hash_243, 0, sizeof(int)); /* ddd */
memset(&it_244, 0, sizeof(int)); /* ddd */
            hash_243=string_get_hash_key(((char*)key))%self->size;
            it_244=hash_243;
            while((_Bool)1) {
                if(self->item_existance[it_244]) {
                    if(charp_equals(self->keys[it_244],key)) {
                        struct sType* __result78__ = self->items[it_244];
                        return __result78__;
                    }
                    it_244++;
                    if(it_244>=self->size) {
                        it_244=0;
                    }
                    else if(it_244==hash_243) {
                        struct sType* __result79__ = default_value;
                        return __result79__;
                    }
                }
                else {
                    struct sType* __result80__ = default_value;
                    return __result80__;
                }
            }
            struct sType* __result81__ = default_value;
            return __result81__;
}

static _Bool list$1charphp_contained(struct list$1charph* self, char* item){
char* it_247;
memset(&it_247, 0, sizeof(char*)); /* ddd */
        for(
        it_247=list$1charphp_begin(self);
        !list$1charphp_end(self);
        it_247=list$1charphp_next(self)
        ){
            if(charp_operator_equals(it_247,item)) {
                _Bool __result83__ = (_Bool)1;
                return __result83__;
            }
        }
        _Bool __result84__ = (_Bool)0;
        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
        return __result84__;
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
struct sFun* __dec_obj58;
char* __dec_obj59;
    __dec_obj58=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
    self->sline=info->sline;
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
    struct sFunNode* __result86__ = self;
    if(self) { come_call_finalizer(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(fun) { come_call_finalizer(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1); }
    return __result86__;
}

static void sFunNode_finalize(struct sFunNode* self){
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                if(self->mFun) { come_call_finalizer(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sFunNode_sline(struct sFunNode* self, struct sInfo* info){
    int __result87__ = self->sline;
    return __result87__;
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* right_value328;
memset(&right_value328, 0, sizeof(void*));
    char* __result88__ = ((char*)(right_value328=__builtin_string(self->sname)));
    return __result88__;
}

_Bool sFunNode_terminated(){
    _Bool __result89__ = (_Bool)0;
    return __result89__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_249;
memset(&come_fun_249, 0, sizeof(struct sFun*)); /* ddd */
    come_fun_249=info->come_fun;
    info->come_fun=self->mFun;
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0);
    }
    info->come_fun=come_fun_249;
    _Bool __result90__ = (_Bool)1;
    return __result90__;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_255;
memset(&result_255, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sType* __result92__ = self->it->item;
            return __result92__;
        }
        memset(&result_255,0,sizeof(struct sType*));
        struct sType* __result93__ = result_255;
        return __result93__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
        _Bool __result94__ = self->it==((void*)0);
        return __result94__;
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_257;
memset(&result_257, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sType* __result95__ = self->it->item;
            return __result95__;
        }
        memset(&result_257,0,sizeof(struct sType*));
        struct sType* __result96__ = result_257;
        return __result96__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* right_value647;
struct sFunNode* result_539;
void* right_value648;
struct sFun* __dec_obj123;
void* right_value649;
char* __dec_obj124;
memset(&right_value647, 0, sizeof(void*));
memset(&result_539, 0, sizeof(struct sFunNode*)); /* ddd */
memset(&right_value648, 0, sizeof(void*));
memset(&right_value649, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sFunNode* __result169__ = (void*)0;
                return __result169__;
            }
            result_539=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value647=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1)))));
            if(right_value647) { come_call_finalizer(sFunNode_finalize,right_value647, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mFun!=((void*)0)) {
                __dec_obj123=result_539->mFun;
                result_539->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value648=sFun_clone(self->mFun))));
                if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0); }
                if(right_value648) { come_call_finalizer(sFun_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_539->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj124=result_539->sname;
                result_539->sname=(char*)come_increment_ref_count(((char*)(right_value649=string_clone(self->sname))));
                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0); }
                if(right_value649) { right_value649 = come_decrement_ref_count(right_value649, (void*)0, (void*)0, 1, 0); }
            }
            struct sFunNode* __result170__ = result_539;
            if(result_539) { come_call_finalizer(sFunNode_finalize,result_539, (void*)0, (void*)0, 0, 0, 1); }
            return __result170__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* right_value351;
struct sFun* result_270;
void* right_value352;
char* __dec_obj64;
void* right_value353;
struct sType* __dec_obj65;
void* right_value354;
struct list$1sTypeph* __dec_obj66;
void* right_value355;
struct list$1charph* __dec_obj67;
void* right_value356;
struct list$1charph* __dec_obj68;
void* right_value357;
struct sType* __dec_obj69;
void* right_value381;
struct sBlock* __dec_obj77;
void* right_value382;
struct buffer* __dec_obj78;
void* right_value383;
struct buffer* __dec_obj79;
void* right_value384;
struct buffer* __dec_obj80;
void* right_value385;
struct buffer* __dec_obj81;
void* right_value386;
char* __dec_obj82;
memset(&right_value351, 0, sizeof(void*));
memset(&result_270, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sFun* __result98__ = (void*)0;
                    return __result98__;
                }
                result_270=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value351=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1)))));
                if(right_value351) { come_call_finalizer(sFun_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                    __dec_obj64=result_270->mName;
                    result_270->mName=(char*)come_increment_ref_count(((char*)(right_value352=string_clone(self->mName))));
                    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
                    if(right_value352) { right_value352 = come_decrement_ref_count(right_value352, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj65=result_270->mResultType;
                    result_270->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value353=sType_clone(self->mResultType))));
                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
                    if(right_value353) { come_call_finalizer(sType_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj66=result_270->mParamTypes;
                    result_270->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value354=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0); }
                    if(right_value354) { come_call_finalizer(list$1sTypephp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj67=result_270->mParamNames;
                    result_270->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value355=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0); }
                    if(right_value355) { come_call_finalizer(list$1charphp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                    __dec_obj68=result_270->mParamDefaultParametors;
                    result_270->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value356=list$1charphp_clone(self->mParamDefaultParametors))));
                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0); }
                    if(right_value356) { come_call_finalizer(list$1charphp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                    __dec_obj69=result_270->mLambdaType;
                    result_270->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value357=sType_clone(self->mLambdaType))));
                    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0); }
                    if(right_value357) { come_call_finalizer(sType_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                    __dec_obj77=result_270->mBlock;
                    result_270->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value381=sBlock_clone(self->mBlock))));
                    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0); }
                    if(right_value381) { come_call_finalizer(sBlock_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_270->mExternal=self->mExternal;
                }
                if(self!=((void*)0)) {
                    result_270->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                    __dec_obj78=result_270->mSource;
                    result_270->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value382=buffer_clone(self->mSource))));
                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0); }
                    if(right_value382) { come_call_finalizer(buffer_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                    __dec_obj79=result_270->mSourceHead;
                    result_270->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value383=buffer_clone(self->mSourceHead))));
                    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0); }
                    if(right_value383) { come_call_finalizer(buffer_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                    __dec_obj80=result_270->mSourceHead2;
                    result_270->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value384=buffer_clone(self->mSourceHead2))));
                    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0); }
                    if(right_value384) { come_call_finalizer(buffer_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                    __dec_obj81=result_270->mSourceDefer;
                    result_270->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value385=buffer_clone(self->mSourceDefer))));
                    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0); }
                    if(right_value385) { come_call_finalizer(buffer_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_270->mStatic=self->mStatic;
                }
                if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                    __dec_obj82=result_270->mComeHeader;
                    result_270->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value386=string_clone(self->mComeHeader))));
                    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0); }
                    if(right_value386) { right_value386 = come_decrement_ref_count(right_value386, (void*)0, (void*)0, 1, 0); }
                }
                struct sFun* __result118__ = result_270;
                if(result_270) { come_call_finalizer(sFun_finalize,result_270, (void*)0, (void*)0, 0, 0, 1); }
                return __result118__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* right_value358;
struct sBlock* result_271;
void* right_value359;
struct list$1sNodeph* __dec_obj70;
void* right_value380;
struct sVarTable* __dec_obj76;
memset(&right_value358, 0, sizeof(void*));
memset(&result_271, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value359, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct sBlock* __result99__ = (void*)0;
                            return __result99__;
                        }
                        result_271=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value358=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1)))));
                        if(right_value358) { come_call_finalizer(sBlock_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0); }
                        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                            __dec_obj70=result_271->mNodes;
                            result_271->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value359=list$1sNodephp_clone(self->mNodes))));
                            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0); }
                            if(right_value359) { come_call_finalizer(list$1sNodephp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                            __dec_obj76=result_271->mVarTable;
                            result_271->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value380=sVarTable_clone(self->mVarTable))));
                            if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0); }
                            if(right_value380) { come_call_finalizer(sVarTable_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        struct sBlock* __result117__ = result_271;
                        if(result_271) { come_call_finalizer(sBlock_finalize,result_271, (void*)0, (void*)0, 0, 0, 1); }
                        return __result117__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* right_value360;
struct sVarTable* result_272;
void* right_value379;
struct map$2charphsVarph* __dec_obj75;
memset(&right_value360, 0, sizeof(void*));
memset(&result_272, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&right_value379, 0, sizeof(void*));
                                if(self==(void*)0) {
                                    struct sVarTable* __result100__ = (void*)0;
                                    return __result100__;
                                }
                                result_272=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value360=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1)))));
                                if(right_value360) { come_call_finalizer(sVarTable_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0); }
                                if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                                    __dec_obj75=result_272->mVars;
                                    result_272->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value379=map$2charphsVarphp_clone(self->mVars))));
                                    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
                                    if(right_value379) { come_call_finalizer(map$2charphsVarphp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0); }
                                }
                                if(self!=((void*)0)) {
                                    result_272->mGlobal=self->mGlobal;
                                }
                                if(self!=((void*)0)) {
                                    result_272->mParent=self->mParent;
                                }
                                if(self!=((void*)0)) {
                                    result_272->mID=self->mID;
                                }
                                struct sVarTable* __result116__ = result_272;
                                if(result_272) { come_call_finalizer(sVarTable_finalize,result_272, (void*)0, (void*)0, 0, 0, 1); }
                                return __result116__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* right_value361;
void* right_value367;
struct map$2charphsVarph* result_278;
char* it_280;
struct sVar* default_value_282;
struct sVar* it2_285;
void* right_value371;
void* right_value372;
void* right_value377;
void* right_value378;
memset(&right_value361, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&result_278, 0, sizeof(struct map$2charphsVarph*)); /* ddd */
memset(&it_280, 0, sizeof(char*)); /* ddd */
memset(&default_value_282, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_285, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
                                        if(self==((void*)0)) {
                                            struct map$2charphsVarph* __result101__ = ((void*)0);
                                            return __result101__;
                                        }
                                        result_278=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value367=map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value361=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1)))))))));
                                        if(right_value367) { come_call_finalizer(map$2charphsVarphp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0); }
                                        for(
                                        it_280=map$2charphsVarphp_begin(self);
                                        !map$2charphsVarphp_end(self);
                                        it_280=map$2charphsVarphp_next(self)
                                        ){
                                            it2_285=map$2charphsVarphp_at(self,it_280,default_value_282);
                                            if(1&&!1) {
                                                map$2charphsVarphp_insert2(result_278,(char*)come_increment_ref_count(((char*)(right_value371=charp_clone(it_280)))),it2_285);
                                                if(right_value371) { right_value371 = come_decrement_ref_count(right_value371, (void*)0, (void*)0, 1, 0); }
                                            }
                                            else if(1&&1) {
                                                map$2charphsVarphp_insert2(result_278,(char*)come_increment_ref_count(((char*)(right_value372=charp_clone(it_280)))),(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value377=sVarp_clone(it2_285)))));
                                                if(right_value372) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0); }
                                                if(right_value377) { come_call_finalizer(sVarp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            else if(!1&&1) {
                                                map$2charphsVarphp_insert2(result_278,it_280,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value378=sVarp_clone(it2_285)))));
                                                if(right_value378) { come_call_finalizer(sVarp_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0); }
                                            }
                                            else if(!1&&!1) {
                                                map$2charphsVarphp_insert2(result_278,it_280,it2_285);
                                            }
                                        }
                                        struct map$2charphsVarph* __result115__ = result_278;
                                        if(result_278) { come_call_finalizer(map$2charphsVarphp_finalize,result_278, (void*)0, (void*)0, 0, 0, 1); }
                                        return __result115__;
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* right_value362;
void* right_value363;
void* right_value364;
int i_273;
void* right_value365;
void* right_value366;
struct list$1charp* __dec_obj71;
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&i_273, 0, sizeof(int)); /* ddd */
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
                                            self->keys=((char**)(right_value362=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
                                            self->items=((struct sVar**)(right_value363=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)))));
                                            self->item_existance=((_Bool*)(right_value364=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
                                            for(
                                            i_273=0;
                                            i_273<128;
                                            i_273++
                                            ){
                                                self->item_existance[i_273]=(_Bool)0;
                                            }
                                            self->size=128;
                                            self->len=0;
                                            __dec_obj71=self->key_list;
                                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value366=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value365=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
                                            if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
                                            if(right_value366) { come_call_finalizer(list$1charpp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0); }
                                            self->it=0;
                                            struct map$2charphsVarph* __result103__ = self;
                                            if(self) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                                            return __result103__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                struct list$1charp* __result102__ = self;
                                                if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                                                return __result102__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_274;
struct list_item$1charp* prev_it_275;
memset(&it_274, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_275, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                    it_274=self->head;
                                                    while(it_274!=((void*)0)) {
                                                        if(0) {
                                                            if(it_274->item) { it_274->item = come_decrement_ref_count(it_274->item, (void*)0, (void*)0, 0, 0); }
                                                        }
                                                        prev_it_275=it_274;
                                                        it_274=it_274->next;
                                                        come_free_object(prev_it_275);
                                                    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_276;
int i_277;
memset(&i_276, 0, sizeof(int)); /* ddd */
memset(&i_277, 0, sizeof(int)); /* ddd */
                                                for(
                                                i_276=0;
                                                i_276<self->size;
                                                i_276++
                                                ){
                                                    if(self->item_existance[i_276]) {
                                                        if(1) {
                                                            if(self->items[i_276]) { come_call_finalizer(sVarp_finalize,self->items[i_276], (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                    }
                                                }
                                                come_free_object((char*)self->items);
                                                for(
                                                i_277=0;
                                                i_277<self->size;
                                                i_277++
                                                ){
                                                    if(self->item_existance[i_277]) {
                                                        if(1) {
                                                            if(self->keys[i_277]) { self->keys[i_277] = come_decrement_ref_count(self->keys[i_277], (void*)0, (void*)0, 0, 0); }
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
char* result_279;
memset(&result_279, 0, sizeof(char*)); /* bbb */
                                            self->key_list->it=self->key_list->head;
                                            if(self->key_list->it) {
                                                char* __result104__ = self->key_list->it->item;
                                                return __result104__;
                                            }
                                            memset(&result_279,0,sizeof(char*));
                                            char* __result105__ = result_279;
                                            return __result105__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
                                            _Bool __result106__ = self->key_list->it==((void*)0);
                                            return __result106__;
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
char* result_281;
memset(&result_281, 0, sizeof(char*)); /* bbb */
                                            self->key_list->it=self->key_list->it->next;
                                            if(self->key_list->it) {
                                                char* __result107__ = self->key_list->it->item;
                                                return __result107__;
                                            }
                                            memset(&result_281,0,sizeof(char*));
                                            char* __result108__ = result_281;
                                            return __result108__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
int hash_283;
int it_284;
memset(&hash_283, 0, sizeof(int)); /* ddd */
memset(&it_284, 0, sizeof(int)); /* ddd */
                                                hash_283=string_get_hash_key(((char*)key))%self->size;
                                                it_284=hash_283;
                                                while((_Bool)1) {
                                                    if(self->item_existance[it_284]) {
                                                        if(charp_equals(self->keys[it_284],key)) {
                                                            struct sVar* __result109__ = self->items[it_284];
                                                            return __result109__;
                                                        }
                                                        it_284++;
                                                        if(it_284>=self->size) {
                                                            it_284=0;
                                                        }
                                                        else if(it_284==hash_283) {
                                                            struct sVar* __result110__ = default_value;
                                                            return __result110__;
                                                        }
                                                    }
                                                    else {
                                                        struct sVar* __result111__ = default_value;
                                                        return __result111__;
                                                    }
                                                }
                                                struct sVar* __result112__ = default_value;
                                                return __result112__;
}

static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
int hash_297;
int it_298;
_Bool same_key_exist_299;
char* it2_300;
memset(&hash_297, 0, sizeof(int)); /* ddd */
memset(&it_298, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_299, 0, sizeof(_Bool)); /* ddd */
memset(&it2_300, 0, sizeof(char*)); /* ddd */
                                                    if(self->len*2>=self->size) {
                                                        map$2charphsVarphp_rehash(self);
                                                    }
                                                    hash_297=string_get_hash_key(key)%self->size;
                                                    it_298=hash_297;
                                                    while((_Bool)1) {
                                                        if(self->item_existance[it_298]) {
                                                            if(charp_equals(self->keys[it_298],key)) {
                                                                if(1) {
                                                                    if(self->keys[it_298]) { self->keys[it_298] = come_decrement_ref_count(self->keys[it_298], (void*)0, (void*)0, 0, 0); }
                                                                    list$1charpp_remove(self->key_list,self->keys[it_298]);
                                                                    self->keys[it_298]=(char*)come_increment_ref_count(key);
                                                                }
                                                                else {
                                                                    list$1charpp_remove(self->key_list,self->keys[it_298]);
                                                                    self->keys[it_298]=key;
                                                                }
                                                                if(1) {
                                                                    if(self->items[it_298]) { come_call_finalizer(sVarp_finalize,self->items[it_298], (void*)0, (void*)0, 0, 0, 0); }
                                                                    self->items[it_298]=(struct sVar*)come_increment_ref_count(item);
                                                                }
                                                                else {
                                                                    self->items[it_298]=item;
                                                                }
                                                                break;
                                                            }
                                                            it_298++;
                                                            if(it_298>=self->size) {
                                                                it_298=0;
                                                            }
                                                            else if(it_298==hash_297) {
                                                                fprintf(stderr,"unexpected error in map.insert\n");
                                                                exit(2);
                                                            }
                                                        }
                                                        else {
                                                            self->item_existance[it_298]=(_Bool)1;
                                                            if(1) {
                                                                self->keys[it_298]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                self->keys[it_298]=key;
                                                            }
                                                            if(1) {
                                                                self->items[it_298]=(struct sVar*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                self->items[it_298]=item;
                                                            }
                                                            self->len++;
                                                            break;
                                                        }
                                                    }
                                                    same_key_exist_299=(_Bool)0;
                                                    for(
                                                    it2_300=list$1charpp_begin(self->key_list);
                                                    !list$1charpp_end(self->key_list);
                                                    it_298=list$1charpp_next(self->key_list)
                                                    ){
                                                        if(charp_equals(it2_300,key)) {
                                                            same_key_exist_299=(_Bool)1;
                                                        }
                                                    }
                                                    if(!same_key_exist_299) {
                                                        list$1charpp_push_back(self->key_list,key);
                                                    }
                                                    if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                                                    if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_286;
void* right_value368;
char** keys_287;
void* right_value369;
struct sVar** items_288;
void* right_value370;
_Bool* item_existance_289;
int len_290;
char* it_291;
struct sVar* default_value_292;
struct sVar* it2_293;
int hash_294;
int n_295;
struct sVar* default_value_296;
memset(&size_286, 0, sizeof(int)); /* ddd */
memset(&right_value368, 0, sizeof(void*));
memset(&keys_287, 0, sizeof(char**)); /* ddd */
memset(&right_value369, 0, sizeof(void*));
memset(&items_288, 0, sizeof(struct sVar**)); /* ddd */
memset(&right_value370, 0, sizeof(void*));
memset(&item_existance_289, 0, sizeof(_Bool*)); /* ddd */
memset(&len_290, 0, sizeof(int)); /* ddd */
memset(&it_291, 0, sizeof(char*)); /* ddd */
memset(&default_value_292, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_293, 0, sizeof(struct sVar*)); /* ddd */
memset(&hash_294, 0, sizeof(int)); /* ddd */
memset(&n_295, 0, sizeof(int)); /* ddd */
memset(&default_value_296, 0, sizeof(struct sVar*)); /* bbb */
                                                            size_286=self->size*3;
                                                            keys_287=((char**)(right_value368=(char**)come_calloc(1, sizeof(char*)*(1*(size_286)))));
                                                            items_288=((struct sVar**)(right_value369=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_286)))));
                                                            item_existance_289=((_Bool*)(right_value370=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_286)))));
                                                            len_290=0;
                                                            for(
                                                            it_291=map$2charphsVarphp_begin(self);
                                                            !map$2charphsVarphp_end(self);
                                                            it_291=map$2charphsVarphp_next(self)
                                                            ){
                                                                it2_293=map$2charphsVarphp_at(self,it_291,default_value_292);
                                                                hash_294=charp_get_hash_key(it_291)%size_286;
                                                                n_295=hash_294;
                                                                while((_Bool)1) {
                                                                    if(item_existance_289[n_295]) {
                                                                        n_295++;
                                                                        if(n_295>=size_286) {
                                                                            n_295=0;
                                                                        }
                                                                        else if(n_295==hash_294) {
                                                                            fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                                                            exit(2);
                                                                        }
                                                                    }
                                                                    else {
                                                                        item_existance_289[n_295]=(_Bool)1;
                                                                        keys_287[n_295]=it_291;
                                                                        items_288[n_295]=map$2charphsVarphp_at(self,it_291,default_value_296);
                                                                        len_290++;
                                                                        break;
                                                                    }
                                                                }
                                                            }
                                                            come_free_object((char*)self->items);
                                                            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                                                            come_free_object((char*)self->keys);
                                                            self->keys=keys_287;
                                                            self->items=items_288;
                                                            self->item_existance=item_existance_289;
                                                            self->size=size_286;
                                                            self->len=len_290;
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
void* right_value373;
struct sVar* result_301;
void* right_value374;
char* __dec_obj72;
void* right_value375;
char* __dec_obj73;
void* right_value376;
struct sType* __dec_obj74;
memset(&right_value373, 0, sizeof(void*));
memset(&result_301, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
                                                    if(self==(void*)0) {
                                                        struct sVar* __result113__ = (void*)0;
                                                        return __result113__;
                                                    }
                                                    result_301=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value373=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1)))));
                                                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                        __dec_obj72=result_301->mName;
                                                        result_301->mName=(char*)come_increment_ref_count(((char*)(right_value374=string_clone(self->mName))));
                                                        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0); }
                                                        if(right_value374) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0); }
                                                    }
                                                    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                                        __dec_obj73=result_301->mCValueName;
                                                        result_301->mCValueName=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(self->mCValueName))));
                                                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
                                                        if(right_value375) { right_value375 = come_decrement_ref_count(right_value375, (void*)0, (void*)0, 1, 0); }
                                                    }
                                                    if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                                        __dec_obj74=result_301->mType;
                                                        result_301->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value376=sType_clone(self->mType))));
                                                        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0); }
                                                        if(right_value376) { come_call_finalizer(sType_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0); }
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_301->mBlockLevel=self->mBlockLevel;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_301->mGlobal=self->mGlobal;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_301->mAllocaValue=self->mAllocaValue;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_301->mFunctionParam=self->mFunctionParam;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_301->mNoFree=self->mNoFree;
                                                    }
                                                    struct sVar* __result114__ = result_301;
                                                    return __result114__;
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

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* right_value422;
struct sLambdaNode* result_328;
void* right_value423;
char* __dec_obj95;
memset(&right_value422, 0, sizeof(void*));
memset(&result_328, 0, sizeof(struct sLambdaNode*)); /* ddd */
memset(&right_value423, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sLambdaNode* __result122__ = (void*)0;
                return __result122__;
            }
            result_328=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value422=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1)))));
            if(right_value422) { come_call_finalizer(sLambdaNode_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_328->mFun=self->mFun;
            }
            if(self!=((void*)0)) {
                result_328->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj95=result_328->sname;
                result_328->sname=(char*)come_increment_ref_count(((char*)(right_value423=string_clone(self->sname))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0); }
                if(right_value423) { right_value423 = come_decrement_ref_count(right_value423, (void*)0, (void*)0, 1, 0); }
            }
            struct sLambdaNode* __result123__ = result_328;
            if(result_328) { come_call_finalizer(sLambdaNode_finalize,result_328, (void*)0, (void*)0, 0, 0, 1); }
            return __result123__;
}

static int list$1charphp_length(struct list$1charph* self){
        int __result125__ = self->len;
        return __result125__;
}

static void map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
int hash_348;
int it_349;
_Bool same_key_exist_350;
char* it2_351;
memset(&hash_348, 0, sizeof(int)); /* ddd */
memset(&it_349, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_350, 0, sizeof(_Bool)); /* ddd */
memset(&it2_351, 0, sizeof(char*)); /* ddd */
            if(self->len*2>=self->size) {
                map$2charphsGenericsFunphp_rehash(self);
            }
            hash_348=string_get_hash_key(key)%self->size;
            it_349=hash_348;
            while((_Bool)1) {
                if(self->item_existance[it_349]) {
                    if(charp_equals(self->keys[it_349],key)) {
                        if(1) {
                            list$1charpp_remove(self->key_list,self->keys[it_349]);
                            if(self->keys[it_349]) { self->keys[it_349] = come_decrement_ref_count(self->keys[it_349], (void*)0, (void*)0, 0, 0); }
                            self->keys[it_349]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charpp_remove(self->key_list,self->keys[it_349]);
                            self->keys[it_349]=key;
                        }
                        if(1) {
                            if(self->items[it_349]) { come_call_finalizer(sGenericsFunp_finalize,self->items[it_349], (void*)0, (void*)0, 0, 0, 0); }
                            self->items[it_349]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_349]=item;
                        }
                        break;
                    }
                    it_349++;
                    if(it_349>=self->size) {
                        it_349=0;
                    }
                    else if(it_349==hash_348) {
                        fprintf(stderr,"unexpected error in map.insert\n");
                        exit(2);
                    }
                }
                else {
                    self->item_existance[it_349]=(_Bool)1;
                    if(1) {
                        self->keys[it_349]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_349]=key;
                    }
                    if(1) {
                        self->items[it_349]=(struct sGenericsFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_349]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_350=(_Bool)0;
            for(
            it2_351=list$1charpp_begin(self->key_list);
            !list$1charpp_end(self->key_list);
            it_349=list$1charpp_next(self->key_list)
            ){
                if(charp_equals(it2_351,key)) {
                    same_key_exist_350=(_Bool)1;
                }
            }
            if(!same_key_exist_350) {
                list$1charpp_push_back(self->key_list,key);
            }
            if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
            if(item) { come_call_finalizer(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self){
int size_333;
void* right_value431;
char** keys_334;
void* right_value432;
struct sGenericsFun** items_335;
void* right_value433;
_Bool* item_existance_336;
int len_337;
char* it_339;
struct sGenericsFun* default_value_341;
struct sGenericsFun* it2_344;
int hash_345;
int n_346;
struct sGenericsFun* default_value_347;
memset(&size_333, 0, sizeof(int)); /* ddd */
memset(&right_value431, 0, sizeof(void*));
memset(&keys_334, 0, sizeof(char**)); /* ddd */
memset(&right_value432, 0, sizeof(void*));
memset(&items_335, 0, sizeof(struct sGenericsFun**)); /* ddd */
memset(&right_value433, 0, sizeof(void*));
memset(&item_existance_336, 0, sizeof(_Bool*)); /* ddd */
memset(&len_337, 0, sizeof(int)); /* ddd */
memset(&it_339, 0, sizeof(char*)); /* ddd */
memset(&default_value_341, 0, sizeof(struct sGenericsFun*)); /* bbb */
memset(&it2_344, 0, sizeof(struct sGenericsFun*)); /* ddd */
memset(&hash_345, 0, sizeof(int)); /* ddd */
memset(&n_346, 0, sizeof(int)); /* ddd */
memset(&default_value_347, 0, sizeof(struct sGenericsFun*)); /* bbb */
                    size_333=self->size*3;
                    keys_334=((char**)(right_value431=(char**)come_calloc(1, sizeof(char*)*(1*(size_333)))));
                    items_335=((struct sGenericsFun**)(right_value432=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_333)))));
                    item_existance_336=((_Bool*)(right_value433=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_333)))));
                    len_337=0;
                    for(
                    it_339=map$2charphsGenericsFunphp_begin(self);
                    !map$2charphsGenericsFunphp_end(self);
                    it_339=map$2charphsGenericsFunphp_next(self)
                    ){
                        it2_344=map$2charphsGenericsFunphp_at(self,it_339,default_value_341);
                        hash_345=charp_get_hash_key(it_339)%size_333;
                        n_346=hash_345;
                        while((_Bool)1) {
                            if(item_existance_336[n_346]) {
                                n_346++;
                                if(n_346>=size_333) {
                                    n_346=0;
                                }
                                else if(n_346==hash_345) {
                                    fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                    exit(2);
                                }
                            }
                            else {
                                item_existance_336[n_346]=(_Bool)1;
                                keys_334[n_346]=it_339;
                                items_335[n_346]=map$2charphsGenericsFunphp_at(self,it_339,default_value_347);
                                len_337++;
                                break;
                            }
                        }
                    }
                    come_free_object((char*)self->items);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                    come_free_object((char*)self->keys);
                    self->keys=keys_334;
                    self->items=items_335;
                    self->item_existance=item_existance_336;
                    self->size=size_333;
                    self->len=len_337;
}

static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self){
char* result_338;
memset(&result_338, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            char* __result126__ = self->key_list->it->item;
                            return __result126__;
                        }
                        memset(&result_338,0,sizeof(char*));
                        char* __result127__ = result_338;
                        return __result127__;
}

static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self){
                        _Bool __result128__ = self->key_list->it==((void*)0);
                        return __result128__;
}

static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self){
char* result_340;
memset(&result_340, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            char* __result129__ = self->key_list->it->item;
                            return __result129__;
                        }
                        memset(&result_340,0,sizeof(char*));
                        char* __result130__ = result_340;
                        return __result130__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
int hash_342;
int it_343;
memset(&hash_342, 0, sizeof(int)); /* ddd */
memset(&it_343, 0, sizeof(int)); /* ddd */
                            hash_342=string_get_hash_key(((char*)key))%self->size;
                            it_343=hash_342;
                            while((_Bool)1) {
                                if(self->item_existance[it_343]) {
                                    if(charp_equals(self->keys[it_343],key)) {
                                        struct sGenericsFun* __result131__ = self->items[it_343];
                                        return __result131__;
                                    }
                                    it_343++;
                                    if(it_343>=self->size) {
                                        it_343=0;
                                    }
                                    else if(it_343==hash_342) {
                                        struct sGenericsFun* __result132__ = default_value;
                                        return __result132__;
                                    }
                                }
                                else {
                                    struct sGenericsFun* __result133__ = default_value;
                                    return __result133__;
                                }
                            }
                            struct sGenericsFun* __result134__ = default_value;
                            return __result134__;
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

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_371;
memset(&result_371, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct tuple2$2charphsTypeph* __result146__ = self->it->item;
                return __result146__;
            }
            memset(&result_371,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result147__ = result_371;
            return __result147__;
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
            _Bool __result148__ = self->it==((void*)0);
            return __result148__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_373;
memset(&result_373, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct tuple2$2charphsTypeph* __result149__ = self->it->item;
                return __result149__;
            }
            memset(&result_373,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result150__ = result_373;
            return __result150__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
            int __result151__ = self->len;
            return __result151__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index){
char* default_value_393;
memset(&default_value_393, 0, sizeof(char*)); /* bbb */
                memset(&default_value_393,0,sizeof(char*));
                char* __result154__ = list$1charphp_item(self,index,default_value_393);
                return __result154__;
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_394;
int i_395;
memset(&it_394, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_395, 0, sizeof(int)); /* ddd */
                    if(position<0) {
                        position+=self->len;
                    }
                    it_394=self->head;
                    i_395=0;
                    while(it_394!=((void*)0)) {
                        if(position==i_395) {
                            char* __result152__ = it_394->item;
                            return __result152__;
                        }
                        it_394=it_394->next;
                        i_395++;
                    }
                    char* __result153__ = default_value;
                    return __result153__;
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
        return __result157__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
            }
}

static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self){
                    int __result162__ = self->len;
                    return __result162__;
}

