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
struct sCurrentNode
{
    int sline;
    char* sname;
};
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
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
struct sMethodCallNode
{
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int sline;
    char* sname;
    int method_block_sline;
};
struct map$2charphCVALUEph
{
    char** keys;
    _Bool* item_existance;
    struct CVALUE** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

_Bool sCurrentNode_terminated();

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
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
static int list$1sNodephp_length(struct list$1sNodeph* self);
static void list$1sNodephp_reset(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1tuple2$2charphsTypephphp_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
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
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void list$1charpp_push_back(struct list$1charp* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephphp_push_back2(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info);

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
_Bool sMethodCallNode_terminated();

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index);
static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct map$2charphCVALUEph* map$2charphCVALUEphp_initialize(struct map$2charphCVALUEph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self);
static void CVALUEp_finalize(struct CVALUE* self);
static void map$2charphCVALUEphp_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item);
static void map$2charphCVALUEphp_rehash(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEphp_begin(struct map$2charphCVALUEph* self);
static _Bool map$2charphCVALUEphp_end(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEphp_next(struct map$2charphCVALUEph* self);
static struct CVALUE* map$2charphCVALUEphp_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int index);
static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value);
static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key);
static int map$2charphCVALUEphp_length(struct map$2charphCVALUEph* self);
static int list$1charphp_length(struct list$1charph* self);
static void list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sType* sTypep_clone(struct sType* self);
static void sTypep_finalize(struct sType* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
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






char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info){
void* right_value75;
char* none_generics_name_104;
void* right_value76;
char* fun_name2_105;
void* right_value77;
char* fun_name3_106;
struct sGenericsFun* generics_fun_109;
void* right_value78;
void* right_value79;
memset(&right_value75, 0, sizeof(void*));
memset(&none_generics_name_104, 0, sizeof(char*)); /* ddd */
memset(&right_value76, 0, sizeof(void*));
memset(&fun_name2_105, 0, sizeof(char*)); /* ddd */
memset(&right_value77, 0, sizeof(void*));
memset(&fun_name3_106, 0, sizeof(char*)); /* ddd */
memset(&generics_fun_109, 0, sizeof(struct sGenericsFun*)); /* ddd */
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
    none_generics_name_104=(char*)come_increment_ref_count(((char*)(right_value75=get_none_generics_name(type->mClass->mName))));
    if(right_value75) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0); }
    fun_name2_105=(char*)come_increment_ref_count(((char*)(right_value76=create_method_name(type,(_Bool)0,fun_name,info))));
    if(right_value76) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0); }
    fun_name3_106=(char*)come_increment_ref_count(((char*)(right_value77=xsprintf("%s_%s",none_generics_name_104,fun_name))));
    if(right_value77) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0); }
    generics_fun_109=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_106,((void*)0));
    if(generics_fun_109) {
        if(!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value78=__builtin_string(fun_name2_105)))),generics_fun_109,type,info)) {
            err_msg(info,"%s not found",fun_name3_106);
            char* __result65__ = ((char*)(right_value79=__builtin_string("")));
            return __result65__;
        }
        if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0); }
    }
    char* __result66__ = fun_name2_105;
    if(fun_name) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1); }
    if(none_generics_name_104) { none_generics_name_104 = come_decrement_ref_count(none_generics_name_104, (void*)0, (void*)0, 0, 0); }
    if(fun_name2_105) { fun_name2_105 = come_decrement_ref_count(fun_name2_105, (void*)0, (void*)0, 0, 1); }
    if(fun_name3_106) { fun_name3_106 = come_decrement_ref_count(fun_name3_106, (void*)0, (void*)0, 0, 0); }
    return __result66__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* right_value179;
void* right_value180;
struct list$1tuple2$2charphsNodephph* params_242;
void* right_value184;
void* right_value185;
char* p_246;
int sline_247;
_Bool err_flag_248;
void* right_value186;
char* label_249;
void* right_value187;
char* __dec_obj78;
_Bool no_comma_250;
void* right_value188;
struct sNode* node_251;
void* right_value189;
struct sNode* __dec_obj79;
void* right_value190;
void* right_value191;
struct buffer* method_block_252;
int method_block_sline_253;
char* head_254;
void* right_value192;
char* tail_255;
void* right_value193;
void* right_value194;
struct buffer* __dec_obj80;
int len_256;
void* right_value195;
char* mem_257;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value206;
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&params_242, 0, sizeof(struct list$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&p_246, 0, sizeof(char*)); /* ddd */
memset(&sline_247, 0, sizeof(int)); /* ddd */
memset(&err_flag_248, 0, sizeof(_Bool)); /* ddd */
memset(&right_value186, 0, sizeof(void*));
memset(&label_249, 0, sizeof(char*)); /* ddd */
memset(&right_value187, 0, sizeof(void*));
memset(&no_comma_250, 0, sizeof(_Bool)); /* ddd */
memset(&right_value188, 0, sizeof(void*));
memset(&node_251, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&method_block_252, 0, sizeof(struct buffer*)); /* ddd */
memset(&method_block_sline_253, 0, sizeof(int)); /* ddd */
memset(&head_254, 0, sizeof(char*)); /* ddd */
memset(&right_value192, 0, sizeof(void*));
memset(&tail_255, 0, sizeof(char*)); /* ddd */
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&len_256, 0, sizeof(int)); /* ddd */
memset(&right_value195, 0, sizeof(void*));
memset(&mem_257, 0, sizeof(char*)); /* ddd */
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
    params_242=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value180=list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value179=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1)))))))));
    if(right_value180) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0); }
    list$1tuple2$2charphsNodephphp_push_back(params_242,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value185=tuple2$2charphsNodephp_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value184=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1))))),((void*)0),(struct sNode*)come_increment_ref_count(obj))))));
    if(right_value185) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0); }
    if(*info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    if(*info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_246=info->p;
            sline_247=info->sline;
            err_flag_248=(_Bool)0;
            label_249=(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string(""))));
            if(right_value186) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0); }
            if(xisalpha(*info->p)||*info->p==95) {
                __dec_obj78=label_249;
                label_249=(char*)come_increment_ref_count(((char*)(right_value187=parse_word(info))));
                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0); }
                if(right_value187) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0); }
                err_flag_248=(_Bool)1;
            }
            if(err_flag_248==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                label_249=((void*)0);
                info->p=p_246;
                info->sline=sline_247;
            }
            no_comma_250=info->no_comma;
            info->no_comma=(_Bool)1;
            node_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=expression_v13(info))));
            if(right_value188) { right_value188 = come_decrement_ref_count(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0); } 
            __dec_obj79=node_251;
            node_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_251),info))));
            if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0); }
            if(right_value189) { right_value189 = come_decrement_ref_count(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0); } 
            info->no_comma=no_comma_250;
            list$1tuple2$2charphsNodephphp_push_back(params_242,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value191=tuple2$2charphsNodephp_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value190=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1))))),(char*)come_increment_ref_count(label_249),(struct sNode*)come_increment_ref_count(node_251))))));
            if(right_value191) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0); }
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            if(label_249) { label_249 = come_decrement_ref_count(label_249, (void*)0, (void*)0, 0, 0); }
            if(node_251) { node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0); } 
        }
    }
    method_block_252=((void*)0);
    method_block_sline_253=0;
    if(*info->p==123) {
        head_254=info->p;
        method_block_sline_253=info->sline;
        ((char*)(right_value192=skip_block(info)));
        if(right_value192) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0); }
        tail_255=info->p;
        __dec_obj80=method_block_252;
        method_block_252=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value194=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value193=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0); }
        if(right_value193) { come_call_finalizer(buffer_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value194) { come_call_finalizer(buffer_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0); }
        len_256=tail_255-head_254;
        mem_257=(char*)come_increment_ref_count(((char*)(right_value195=(char*)come_calloc(1, sizeof(char)*(1*(len_256+1))))));
        if(right_value195) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0); }
        memcpy(mem_257,head_254,len_256);
        mem_257[len_256]=0;
        buffer_append_str(method_block_252,mem_257);
        buffer_append_str(method_block_252,"\n");
        if(mem_257) { mem_257 = come_decrement_ref_count(mem_257, (void*)0, (void*)0, 0, 0); }
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value199=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value196=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1))))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=sNodep_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value198=list$1tuple2$2charphsNodephphp_clone(params_242)))),method_block_252,method_block_sline_253,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=sMethodCallNode_finalize;
    _inf_value2->clone=sMethodCallNode_clone;
    _inf_value2->compile=sMethodCallNode_compile;
    _inf_value2->sline=sMethodCallNode_sline;
    _inf_value2->sname=sMethodCallNode_sname;
    _inf_value2->terminated=sMethodCallNode_terminated;
    struct sNode* __result137__ = ((struct sNode*)(right_value206=_inf_value2));
    if(obj) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1); } 
    if(fun_name) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1); }
    if(params_242) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_242, (void*)0, (void*)0, 0, 0, 0); }
    if(method_block_252) { come_call_finalizer(buffer_finalize,method_block_252, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value196) { come_call_finalizer(sMethodCallNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value197) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0); } 
    if(right_value198) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value199) { come_call_finalizer(sMethodCallNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0); }
    return __result137__;
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* right_value207;
void* right_value208;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value211;
void* right_value212;
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
    if(charp_operator_equals(buf,"__current__")) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value208=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value207=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1))))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=sCurrentNode_finalize;
        _inf_value3->clone=sCurrentNode_clone;
        _inf_value3->compile=sCurrentNode_compile;
        _inf_value3->sline=sCurrentNode_sline;
        _inf_value3->sname=sCurrentNode_sname;
        _inf_value3->terminated=sCurrentNode_terminated;
        struct sNode* __result140__ = ((struct sNode*)(right_value211=_inf_value3));
        if(right_value207) { come_call_finalizer(sCurrentNode_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value208) { come_call_finalizer(sCurrentNode_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0); }
        return __result140__;
    }
    struct sNode* __result141__ = ((struct sNode*)(right_value212=string_node_v13(buf,head,head_sline,info)));
    return __result141__;
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* right_value213;
memset(&right_value213, 0, sizeof(void*));
    struct sNode* __result142__ = ((struct sNode*)(right_value213=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result142__;
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* right_value0;
char* __dec_obj1;
memset(&right_value0, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj1=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(info->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    struct sCurrentNode* __result7__ = self;
    if(self) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result7__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    int __result8__ = self->sline;
    return __result8__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* right_value1;
memset(&right_value1, 0, sizeof(void*));
    char* __result9__ = ((char*)(right_value1=__builtin_string(self->sname)));
    return __result9__;
}

_Bool sCurrentNode_terminated(){
    _Bool __result10__ = (_Bool)0;
    return __result10__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* right_value2;
char* class_name_0;
void* right_value3;
void* right_value4;
struct sClass* current_stack_1;
struct sVarTable* vtable_10;
char* it_12;
char* key_14;
struct sVar* value_18;
void* right_value35;
struct sType* type2_37;
void* right_value36;
void* right_value37;
struct tuple2$2charphsTypeph* item_38;
void* right_value38;
struct sType* type3_39;
void* right_value39;
void* right_value40;
struct tuple2$2charphsTypeph* item2_42;
static int num_current_stack_86=0;
char* it_87;
char* key_88;
struct sVar* value_89;
void* right_value50;
struct sType* type2_90;
void* right_value51;
void* right_value52;
struct tuple2$2charphsTypeph* item_91;
void* right_value53;
struct CVALUE* come_value_92;
void* right_value54;
char* __dec_obj25;
void* right_value55;
void* right_value56;
struct sType* __dec_obj26;
memset(&right_value2, 0, sizeof(void*));
memset(&class_name_0, 0, sizeof(char*)); /* ddd */
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&current_stack_1, 0, sizeof(struct sClass*)); /* ddd */
memset(&vtable_10, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&it_12, 0, sizeof(char*)); /* ddd */
memset(&key_14, 0, sizeof(char*)); /* ddd */
memset(&value_18, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value35, 0, sizeof(void*));
memset(&type2_37, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&item_38, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&right_value38, 0, sizeof(void*));
memset(&type3_39, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&item2_42, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&it_87, 0, sizeof(char*)); /* ddd */
memset(&key_88, 0, sizeof(char*)); /* ddd */
memset(&value_89, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value50, 0, sizeof(void*));
memset(&type2_90, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&item_91, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&right_value53, 0, sizeof(void*));
memset(&come_value_92, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
    info->current_stack_num++;
    class_name_0=(char*)come_increment_ref_count(((char*)(right_value2=xsprintf("__current_stack%d__",info->current_stack_num))));
    if(right_value2) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0); }
    current_stack_1=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value4=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value3=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),class_name_0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0))));
    if(right_value3) { come_call_finalizer(sClass_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value4) { come_call_finalizer(sClass_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
    vtable_10=info->lv_table;
    while(vtable_10) {
        for(
        it_12=map$2charphsVarphp_begin((vtable_10->mVars));
        !map$2charphsVarphp_end((vtable_10->mVars));
        it_12=map$2charphsVarphp_next((vtable_10->mVars))
        ){
            key_14=it_12;
            value_18=map$2charphsVarphp_operator_load_element(vtable_10->mVars,key_14);
            type2_37=(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=sType_clone(value_18->mType))));
            if(right_value35) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
            type2_37->mPointerNum++;
            item_38=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value37=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value36=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(value_18->mCValueName),(struct sType*)come_increment_ref_count(type2_37)))));
            if(right_value37) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0); }
            if(value_18->mCValueName!=((void*)0)) {
                if(memcmp(value_18->mCValueName,"__list_values",strlen("__list_values"))==0) {
                }
                else if(memcmp(value_18->mCValueName,"__map_keys",strlen("__map_keys"))==0) {
                }
                else if(memcmp(value_18->mCValueName,"__map_element",strlen("__map_element"))==0) {
                }
                else if(list$1sNodephp_length(type2_37->mArrayNum)==1) {
                    type3_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value38=sType_clone(type2_37))));
                    if(right_value38) { come_call_finalizer(sType_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
                    list$1sNodephp_reset(type3_39->mArrayNum);
                    type3_39->mPointerNum++;
                    item2_42=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value40=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value39=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(value_18->mCValueName),(struct sType*)come_increment_ref_count(type3_39)))));
                    if(right_value40) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
                    list$1tuple2$2charphsTypephphp_push_back(current_stack_1->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(item2_42));
                    if(type3_39) { come_call_finalizer(sType_finalize,type3_39, (void*)0, (void*)0, 0, 0, 0); }
                    if(item2_42) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item2_42, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    list$1tuple2$2charphsTypephphp_push_back(current_stack_1->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(item_38));
                }
            }
            if(type2_37) { come_call_finalizer(sType_finalize,type2_37, (void*)0, (void*)0, 0, 0, 0); }
            if(item_38) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_38, (void*)0, (void*)0, 0, 0, 0); }
        }
        vtable_10=vtable_10->mParent;
    }
    output_struct(current_stack_1,info);
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(class_name_0),(struct sClass*)come_increment_ref_count(current_stack_1));
    num_current_stack_86++;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_0,num_current_stack_86);
    vtable_10=info->lv_table;
    while(vtable_10) {
        for(
        it_87=map$2charphsVarphp_begin((vtable_10->mVars));
        !map$2charphsVarphp_end((vtable_10->mVars));
        it_87=map$2charphsVarphp_next((vtable_10->mVars))
        ){
            key_88=it_87;
            value_89=map$2charphsVarphp_operator_load_element(vtable_10->mVars,key_88);
            type2_90=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sType_clone(value_89->mType))));
            if(right_value50) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
            item_91=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value52=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value51=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(value_89->mCValueName),(struct sType*)come_increment_ref_count(type2_90)))));
            if(right_value52) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
            if(value_89->mCValueName!=((void*)0)) {
                if(memcmp(value_89->mCValueName,"__list_values",strlen("__list_values"))==0) {
                }
                else if(memcmp(value_89->mCValueName,"__map_keys",strlen("__map_keys"))==0) {
                }
                else if(memcmp(value_89->mCValueName,"__map_element",strlen("__map_element"))==0) {
                }
                else {
                    if(string_operator_equals(type2_90->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_86,value_89->mCValueName,value_89->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_86,value_89->mCValueName,value_89->mCValueName);
                    }
                }
            }
            if(type2_90) { come_call_finalizer(sType_finalize,type2_90, (void*)0, (void*)0, 0, 0, 0); }
            if(item_91) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_91, (void*)0, (void*)0, 0, 0, 0); }
        }
        vtable_10=vtable_10->mParent;
    }
    come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value53=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value53) { come_call_finalizer(CVALUE_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj25=come_value_92->c_value;
    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value54=xsprintf("&__current_stack%d__",num_current_stack_86))));
    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
    if(right_value54) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0); }
    __dec_obj26=come_value_92->type;
    come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value55=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),class_name_0,info,(_Bool)0))));
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
    if(right_value55) { come_call_finalizer(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value56) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0); }
    come_value_92->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_92->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
    _Bool __result52__ = (_Bool)1;
    if(class_name_0) { class_name_0 = come_decrement_ref_count(class_name_0, (void*)0, (void*)0, 0, 0); }
    if(current_stack_1) { come_call_finalizer(sClass_finalize,current_stack_1, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_92) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0); }
    return __result52__;
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
struct list_item$1tuple2$2charphsTypephph* it_2;
struct list_item$1tuple2$2charphsTypephph* prev_it_9;
memset(&it_2, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&prev_it_9, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
                it_2=self->head;
                while(it_2!=((void*)0)) {
                    if(1) {
                        if(it_2->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,it_2->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    prev_it_9=it_2;
                    it_2=it_2->next;
                    come_free_object(prev_it_9);
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
memset(&it_3, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&prev_it_4, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
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
memset(&it_5, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&prev_it_6, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
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
memset(&it_7, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&prev_it_8, 0, sizeof(struct list_item$1charph*)); /* ddd */
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

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
char* result_11;
memset(&result_11, 0, sizeof(char*)); /* bbb */
            self->key_list->it=self->key_list->head;
            if(self->key_list->it) {
                char* __result11__ = self->key_list->it->item;
                return __result11__;
            }
            memset(&result_11,0,sizeof(char*));
            char* __result12__ = result_11;
            return __result12__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
            _Bool __result13__ = self->key_list->it==((void*)0);
            return __result13__;
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
char* result_13;
memset(&result_13, 0, sizeof(char*)); /* bbb */
            self->key_list->it=self->key_list->it->next;
            if(self->key_list->it) {
                char* __result14__ = self->key_list->it->item;
                return __result14__;
            }
            memset(&result_13,0,sizeof(char*));
            char* __result15__ = result_13;
            return __result15__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
struct sVar* default_value_15;
memset(&default_value_15, 0, sizeof(struct sVar*)); /* bbb */
                memset(&default_value_15,0,sizeof(struct sVar*));
                struct sVar* __result20__ = map$2charphsVarphp_at(self,key,default_value_15);
                return __result20__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
int hash_16;
int it_17;
memset(&hash_16, 0, sizeof(int)); /* ddd */
memset(&it_17, 0, sizeof(int)); /* ddd */
                    hash_16=string_get_hash_key(((char*)key))%self->size;
                    it_17=hash_16;
                    while((_Bool)1) {
                        if(self->item_existance[it_17]) {
                            if(charp_equals(self->keys[it_17],key)) {
                                struct sVar* __result16__ = self->items[it_17];
                                return __result16__;
                            }
                            it_17++;
                            if(it_17>=self->size) {
                                it_17=0;
                            }
                            else if(it_17==hash_16) {
                                struct sVar* __result17__ = default_value;
                                return __result17__;
                            }
                        }
                        else {
                            struct sVar* __result18__ = default_value;
                            return __result18__;
                        }
                    }
                    struct sVar* __result19__ = default_value;
                    return __result19__;
}

static struct sType* sType_clone(struct sType* self){
void* right_value5;
struct sType* result_19;
void* right_value8;
struct tuple1$1sTypeph* __dec_obj3;
void* right_value9;
char* __dec_obj4;
void* right_value16;
struct list$1sTypeph* __dec_obj8;
void* right_value24;
struct list$1sNodeph* __dec_obj12;
void* right_value25;
struct list$1sTypeph* __dec_obj13;
void* right_value32;
struct list$1charph* __dec_obj17;
void* right_value33;
struct tuple1$1sTypeph* __dec_obj18;
void* right_value34;
char* __dec_obj19;
memset(&right_value5, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sType* __result21__ = (void*)0;
                    return __result21__;
                }
                result_19=(struct sType*)come_increment_ref_count(((struct sType*)(right_value5=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
                if(right_value5) { come_call_finalizer(sType_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_19->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj3=result_19->mNoSolvedGenericsType;
                    result_19->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value8=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
                    if(right_value8) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj4=result_19->mGenericsName;
                    result_19->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value9=string_clone(self->mGenericsName))));
                    if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
                    if(right_value9) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj8=result_19->mGenericsTypes;
                    result_19->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
                    if(right_value16) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj12=result_19->mArrayNum;
                    result_19->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0); }
                    if(right_value24) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_19->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj13=result_19->mParamTypes;
                    result_19->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value25=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
                    if(right_value25) { come_call_finalizer(list$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj17=result_19->mParamNames;
                    result_19->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
                    if(right_value32) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj18=result_19->mResultType;
                    result_19->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value33=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
                    if(right_value33) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_19->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)) {
                    result_19->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_19->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_19->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_19->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_19->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_19->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_19->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_19->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_19->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_19->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_19->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_19->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_19->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_19->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_19->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_19->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_19->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_19->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_19->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)) {
                    result_19->mSizeNum=self->mSizeNum;
                }
                if(self!=((void*)0)) {
                    result_19->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_19->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj19=result_19->mOriginalTypeName;
                    result_19->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value34=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
                    if(right_value34) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_19->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_19->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_19->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_19->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_19->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_19->mInline=self->mInline;
                }
                struct sType* __result35__ = result_19;
                if(result_19) { come_call_finalizer(sType_finalize,result_19, (void*)0, (void*)0, 0, 0, 1); }
                return __result35__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value6;
struct tuple1$1sTypeph* result_20;
void* right_value7;
struct sType* __dec_obj2;
memset(&right_value6, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value7, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct tuple1$1sTypeph* __result22__ = (void*)0;
                            return __result22__;
                        }
                        result_20=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value6=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                        if(right_value6) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            __dec_obj2=result_20->v1;
                            result_20->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value7=sType_clone(self->v1))));
                            if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
                            if(right_value7) { come_call_finalizer(sType_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        struct tuple1$1sTypeph* __result23__ = result_20;
                        if(result_20) { come_call_finalizer(tuple1$1sTypephp_finalize,result_20, (void*)0, (void*)0, 0, 0, 1); }
                        return __result23__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value10;
void* right_value11;
struct list$1sTypeph* result_21;
struct list_item$1sTypeph* it_22;
void* right_value15;
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_22, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value15, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1sTypeph* __result24__ = ((void*)0);
                            return __result24__;
                        }
                        result_21=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value11=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value10=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                        if(right_value11) { come_call_finalizer(list$1sTypephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
                        it_22=self->head;
                        while(it_22!=((void*)0)) {
                            list$1sTypephp_push_back2(result_21,(struct sType*)come_increment_ref_count(((struct sType*)(right_value15=sType_clone(it_22->item)))));
                            if(right_value15) { come_call_finalizer(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0); }
                            it_22=it_22->next;
                        }
                        struct list$1sTypeph* __result26__ = result_21;
                        if(result_21) { come_call_finalizer(list$1sTypephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1); }
                        return __result26__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            struct list$1sTypeph* __result25__ = self;
                            if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            return __result25__;
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value12;
struct list_item$1sTypeph* litem_23;
struct sType* __dec_obj5;
void* right_value13;
struct list_item$1sTypeph* litem_24;
struct sType* __dec_obj6;
void* right_value14;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj7;
memset(&right_value12, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value13, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value14, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                                if(self->len==0) {
                                    litem_23=((struct list_item$1sTypeph*)(right_value12=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                    litem_23->prev=((void*)0);
                                    litem_23->next=((void*)0);
                                    __dec_obj5=litem_23->item;
                                    litem_23->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
                                    self->tail=litem_23;
                                    self->head=litem_23;
                                }
                                else if(self->len==1) {
                                    litem_24=((struct list_item$1sTypeph*)(right_value13=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                    litem_24->prev=self->head;
                                    litem_24->next=((void*)0);
                                    __dec_obj6=litem_24->item;
                                    litem_24->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                                    self->tail=litem_24;
                                    self->head->next=litem_24;
                                }
                                else {
                                    litem_25=((struct list_item$1sTypeph*)(right_value14=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                    litem_25->prev=self->tail;
                                    litem_25->next=((void*)0);
                                    __dec_obj7=litem_25->item;
                                    litem_25->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
                                    self->tail->next=litem_25;
                                    self->tail=litem_25;
                                }
                                self->len++;
                                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value17;
void* right_value18;
struct list$1sNodeph* result_26;
struct list_item$1sNodeph* it_27;
void* right_value23;
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_27, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value23, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1sNodeph* __result27__ = ((void*)0);
                            return __result27__;
                        }
                        result_26=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value18=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value17=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                        if(right_value18) { come_call_finalizer(list$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0); }
                        it_27=self->head;
                        while(it_27!=((void*)0)) {
                            list$1sNodephp_push_back2(result_26,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value23=sNodep_clone(it_27->item)))));
                            if(right_value23) { right_value23 = come_decrement_ref_count(right_value23, ((struct sNode*)right_value23)->finalize, ((struct sNode*)right_value23)->_protocol_obj, 1, 0); } 
                            it_27=it_27->next;
                        }
                        struct list$1sNodeph* __result31__ = result_26;
                        if(result_26) { come_call_finalizer(list$1sNodephp_finalize,result_26, (void*)0, (void*)0, 0, 0, 1); }
                        return __result31__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            struct list$1sNodeph* __result28__ = self;
                            if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            return __result28__;
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value19;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj9;
void* right_value20;
struct list_item$1sNodeph* litem_29;
struct sNode* __dec_obj10;
void* right_value21;
struct list_item$1sNodeph* litem_30;
struct sNode* __dec_obj11;
memset(&right_value19, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value20, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value21, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                                if(self->len==0) {
                                    litem_28=((struct list_item$1sNodeph*)(right_value19=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                    litem_28->prev=((void*)0);
                                    litem_28->next=((void*)0);
                                    __dec_obj9=litem_28->item;
                                    litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0); }
                                    self->tail=litem_28;
                                    self->head=litem_28;
                                }
                                else if(self->len==1) {
                                    litem_29=((struct list_item$1sNodeph*)(right_value20=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                    litem_29->prev=self->head;
                                    litem_29->next=((void*)0);
                                    __dec_obj10=litem_29->item;
                                    litem_29->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0); }
                                    self->tail=litem_29;
                                    self->head->next=litem_29;
                                }
                                else {
                                    litem_30=((struct list_item$1sNodeph*)(right_value21=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                    litem_30->prev=self->tail;
                                    litem_30->next=((void*)0);
                                    __dec_obj11=litem_30->item;
                                    litem_30->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0); }
                                    self->tail->next=litem_30;
                                    self->tail=litem_30;
                                }
                                self->len++;
                                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value22;
struct sNode* result_31;
memset(&right_value22, 0, sizeof(void*));
memset(&result_31, 0, sizeof(struct sNode*)); /* ddd */
                                if(self==(void*)0) {
                                    struct sNode* __result29__ = (void*)0;
                                    return __result29__;
                                }
                                result_31=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
                                if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                    result_31->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(self!=((void*)0)) {
                                    result_31->finalize=self->finalize;
                                }
                                if(self!=((void*)0)) {
                                    result_31->clone=self->clone;
                                }
                                if(self!=((void*)0)) {
                                    result_31->compile=self->compile;
                                }
                                if(self!=((void*)0)) {
                                    result_31->sline=self->sline;
                                }
                                if(self!=((void*)0)) {
                                    result_31->sname=self->sname;
                                }
                                if(self!=((void*)0)) {
                                    result_31->terminated=self->terminated;
                                }
                                struct sNode* __result30__ = result_31;
                                return __result30__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value26;
void* right_value27;
struct list$1charph* result_32;
struct list_item$1charph* it_33;
void* right_value31;
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&result_32, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_33, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value31, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1charph* __result32__ = ((void*)0);
                            return __result32__;
                        }
                        result_32=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value27=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value26=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                        if(right_value27) { come_call_finalizer(list$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0); }
                        it_33=self->head;
                        while(it_33!=((void*)0)) {
                            list$1charphp_push_back2(result_32,(char*)come_increment_ref_count(((char*)(right_value31=string_clone(it_33->item)))));
                            if(right_value31) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0); }
                            it_33=it_33->next;
                        }
                        struct list$1charph* __result34__ = result_32;
                        if(result_32) { come_call_finalizer(list$1charphp_finalize,result_32, (void*)0, (void*)0, 0, 0, 1); }
                        return __result34__;
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            struct list$1charph* __result33__ = self;
                            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            return __result33__;
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value28;
struct list_item$1charph* litem_34;
char* __dec_obj14;
void* right_value29;
struct list_item$1charph* litem_35;
char* __dec_obj15;
void* right_value30;
struct list_item$1charph* litem_36;
char* __dec_obj16;
memset(&right_value28, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value29, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value30, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1charph*)); /* ddd */
                                if(self->len==0) {
                                    litem_34=((struct list_item$1charph*)(right_value28=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                    litem_34->prev=((void*)0);
                                    litem_34->next=((void*)0);
                                    __dec_obj14=litem_34->item;
                                    litem_34->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
                                    self->tail=litem_34;
                                    self->head=litem_34;
                                }
                                else if(self->len==1) {
                                    litem_35=((struct list_item$1charph*)(right_value29=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                    litem_35->prev=self->head;
                                    litem_35->next=((void*)0);
                                    __dec_obj15=litem_35->item;
                                    litem_35->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
                                    self->tail=litem_35;
                                    self->head->next=litem_35;
                                }
                                else {
                                    litem_36=((struct list_item$1charph*)(right_value30=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                    litem_36->prev=self->tail;
                                    litem_36->next=((void*)0);
                                    __dec_obj16=litem_36->item;
                                    litem_36->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
                                    self->tail->next=litem_36;
                                    self->tail=litem_36;
                                }
                                self->len++;
                                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
char* __dec_obj20;
struct sType* __dec_obj21;
                __dec_obj20=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
                __dec_obj21=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                struct tuple2$2charphsTypeph* __result36__ = self;
                if(self) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
                if(v2) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1); }
                return __result36__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
                    int __result37__ = self->len;
                    return __result37__;
}

static void list$1sNodephp_reset(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_40;
struct list_item$1sNodeph* prev_it_41;
memset(&it_40, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&prev_it_41, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                        it_40=self->head;
                        while(it_40!=((void*)0)) {
                            prev_it_41=it_40;
                            it_40=it_40->next;
                            if(prev_it_41) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_41, (void*)0, (void*)0, 0, 0, 0); }
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

static void list$1tuple2$2charphsTypephphp_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* right_value41;
struct list_item$1tuple2$2charphsTypephph* litem_43;
struct tuple2$2charphsTypeph* __dec_obj22;
void* right_value42;
struct list_item$1tuple2$2charphsTypephph* litem_44;
struct tuple2$2charphsTypeph* __dec_obj23;
void* right_value43;
struct list_item$1tuple2$2charphsTypephph* litem_45;
struct tuple2$2charphsTypeph* __dec_obj24;
memset(&right_value41, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
memset(&litem_44, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value43, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
                        if(self->len==0) {
                            litem_43=((struct list_item$1tuple2$2charphsTypephph*)(right_value41=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                            litem_43->prev=((void*)0);
                            litem_43->next=((void*)0);
                            __dec_obj22=litem_43->item;
                            litem_43->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_43;
                            self->head=litem_43;
                        }
                        else if(self->len==1) {
                            litem_44=((struct list_item$1tuple2$2charphsTypephph*)(right_value42=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                            litem_44->prev=self->head;
                            litem_44->next=((void*)0);
                            __dec_obj23=litem_44->item;
                            litem_44->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_44;
                            self->head->next=litem_44;
                        }
                        else {
                            litem_45=((struct list_item$1tuple2$2charphsTypephph*)(right_value43=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                            litem_45->prev=self->tail;
                            litem_45->next=((void*)0);
                            __dec_obj24=litem_45->item;
                            litem_45->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
                            self->tail->next=litem_45;
                            self->tail=litem_45;
                        }
                        self->len++;
                        if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
int hash_61;
int it_62;
_Bool same_key_exist_79;
char* it2_81;
memset(&hash_61, 0, sizeof(int)); /* ddd */
memset(&it_62, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_79, 0, sizeof(_Bool)); /* ddd */
memset(&it2_81, 0, sizeof(char*)); /* ddd */
        if(self->len*2>=self->size) {
            map$2charphsClassphp_rehash(self);
        }
        hash_61=string_get_hash_key(key)%self->size;
        it_62=hash_61;
        while((_Bool)1) {
            if(self->item_existance[it_62]) {
                if(charp_equals(self->keys[it_62],key)) {
                    if(1) {
                        list$1charpp_remove(self->key_list,self->keys[it_62]);
                        if(self->keys[it_62]) { self->keys[it_62] = come_decrement_ref_count(self->keys[it_62], (void*)0, (void*)0, 0, 0); }
                        self->keys[it_62]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charpp_remove(self->key_list,self->keys[it_62]);
                        self->keys[it_62]=key;
                    }
                    if(1) {
                        if(self->items[it_62]) { come_call_finalizer(sClassp_finalize,self->items[it_62], (void*)0, (void*)0, 0, 0, 0); }
                        self->items[it_62]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_62]=item;
                    }
                    break;
                }
                it_62++;
                if(it_62>=self->size) {
                    it_62=0;
                }
                else if(it_62==hash_61) {
                    fprintf(stderr,"unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_62]=(_Bool)1;
                if(1) {
                    self->keys[it_62]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_62]=key;
                }
                if(1) {
                    self->items[it_62]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_62]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_79=(_Bool)0;
        for(
        it2_81=list$1charpp_begin(self->key_list);
        !list$1charpp_end(self->key_list);
        it_62=list$1charpp_next(self->key_list)
        ){
            if(charp_equals(it2_81,key)) {
                same_key_exist_79=(_Bool)1;
            }
        }
        if(!same_key_exist_79) {
            list$1charpp_push_back(self->key_list,key);
        }
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
        if(item) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_46;
void* right_value44;
char** keys_47;
void* right_value45;
struct sClass** items_48;
void* right_value46;
_Bool* item_existance_49;
int len_50;
char* it_52;
struct sClass* default_value_54;
struct sClass* it2_57;
int hash_58;
int n_59;
struct sClass* default_value_60;
memset(&size_46, 0, sizeof(int)); /* ddd */
memset(&right_value44, 0, sizeof(void*));
memset(&keys_47, 0, sizeof(char**)); /* ddd */
memset(&right_value45, 0, sizeof(void*));
memset(&items_48, 0, sizeof(struct sClass**)); /* ddd */
memset(&right_value46, 0, sizeof(void*));
memset(&item_existance_49, 0, sizeof(_Bool*)); /* ddd */
memset(&len_50, 0, sizeof(int)); /* ddd */
memset(&it_52, 0, sizeof(char*)); /* ddd */
memset(&default_value_54, 0, sizeof(struct sClass*)); /* bbb */
memset(&it2_57, 0, sizeof(struct sClass*)); /* ddd */
memset(&hash_58, 0, sizeof(int)); /* ddd */
memset(&n_59, 0, sizeof(int)); /* ddd */
memset(&default_value_60, 0, sizeof(struct sClass*)); /* bbb */
                size_46=self->size*3;
                keys_47=((char**)(right_value44=(char**)come_calloc(1, sizeof(char*)*(1*(size_46)))));
                items_48=((struct sClass**)(right_value45=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_46)))));
                item_existance_49=((_Bool*)(right_value46=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_46)))));
                len_50=0;
                for(
                it_52=map$2charphsClassphp_begin(self);
                !map$2charphsClassphp_end(self);
                it_52=map$2charphsClassphp_next(self)
                ){
                    it2_57=map$2charphsClassphp_at(self,it_52,default_value_54);
                    hash_58=charp_get_hash_key(it_52)%size_46;
                    n_59=hash_58;
                    while((_Bool)1) {
                        if(item_existance_49[n_59]) {
                            n_59++;
                            if(n_59>=size_46) {
                                n_59=0;
                            }
                            else if(n_59==hash_58) {
                                fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_49[n_59]=(_Bool)1;
                            keys_47[n_59]=it_52;
                            items_48[n_59]=map$2charphsClassphp_at(self,it_52,default_value_60);
                            len_50++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_47;
                self->items=items_48;
                self->item_existance=item_existance_49;
                self->size=size_46;
                self->len=len_50;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
char* result_51;
memset(&result_51, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result38__ = self->key_list->it->item;
                        return __result38__;
                    }
                    memset(&result_51,0,sizeof(char*));
                    char* __result39__ = result_51;
                    return __result39__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
                    _Bool __result40__ = self->key_list->it==((void*)0);
                    return __result40__;
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
char* result_53;
memset(&result_53, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result41__ = self->key_list->it->item;
                        return __result41__;
                    }
                    memset(&result_53,0,sizeof(char*));
                    char* __result42__ = result_53;
                    return __result42__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_55;
int it_56;
memset(&hash_55, 0, sizeof(int)); /* ddd */
memset(&it_56, 0, sizeof(int)); /* ddd */
                        hash_55=string_get_hash_key(((char*)key))%self->size;
                        it_56=hash_55;
                        while((_Bool)1) {
                            if(self->item_existance[it_56]) {
                                if(charp_equals(self->keys[it_56],key)) {
                                    struct sClass* __result43__ = self->items[it_56];
                                    return __result43__;
                                }
                                it_56++;
                                if(it_56>=self->size) {
                                    it_56=0;
                                }
                                else if(it_56==hash_55) {
                                    struct sClass* __result44__ = default_value;
                                    return __result44__;
                                }
                            }
                            else {
                                struct sClass* __result45__ = default_value;
                                return __result45__;
                            }
                        }
                        struct sClass* __result46__ = default_value;
                        return __result46__;
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_63;
struct list_item$1charp* it_64;
memset(&it2_63, 0, sizeof(int)); /* ddd */
memset(&it_64, 0, sizeof(struct list_item$1charp*)); /* ddd */
                            it2_63=0;
                            it_64=self->head;
                            while(it_64!=((void*)0)) {
                                if(charp_equals(it_64->item,item)) {
                                    list$1charpp_delete(self,it2_63,it2_63+1);
                                    break;
                                }
                                it2_63++;
                                it_64=it_64->next;
                            }
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_65;
struct list_item$1charp* it_68;
int i_69;
struct list_item$1charp* prev_it_70;
struct list_item$1charp* it_71;
int i_72;
struct list_item$1charp* prev_it_73;
struct list_item$1charp* it_74;
struct list_item$1charp* head_prev_it_75;
struct list_item$1charp* tail_it_76;
int i_77;
struct list_item$1charp* prev_it_78;
memset(&tmp_65, 0, sizeof(int)); /* ddd */
memset(&it_68, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_69, 0, sizeof(int)); /* ddd */
memset(&prev_it_70, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_71, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_72, 0, sizeof(int)); /* ddd */
memset(&prev_it_73, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_74, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_75, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_76, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_77, 0, sizeof(int)); /* ddd */
memset(&prev_it_78, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                        if(head<0) {
                                            head+=self->len;
                                        }
                                        if(tail<0) {
                                            tail+=self->len+1;
                                        }
                                        if(head>tail) {
                                            tmp_65=tail;
                                            tail=head;
                                            head=tmp_65;
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
                                            it_68=self->head;
                                            i_69=0;
                                            while(it_68!=((void*)0)) {
                                                if(i_69<tail) {
                                                    prev_it_70=it_68;
                                                    it_68=it_68->next;
                                                    i_69++;
                                                    if(prev_it_70) { come_call_finalizer(list_item$1charpp_finalize,prev_it_70, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else if(i_69==tail) {
                                                    self->head=it_68;
                                                    self->head->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_68=it_68->next;
                                                    i_69++;
                                                }
                                            }
                                        }
                                        else if(tail==self->len) {
                                            it_71=self->head;
                                            i_72=0;
                                            while(it_71!=((void*)0)) {
                                                if(i_72==head) {
                                                    self->tail=it_71->prev;
                                                    self->tail->next=((void*)0);
                                                }
                                                if(i_72>=head) {
                                                    prev_it_73=it_71;
                                                    it_71=it_71->next;
                                                    i_72++;
                                                    if(prev_it_73) { come_call_finalizer(list_item$1charpp_finalize,prev_it_73, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_71=it_71->next;
                                                    i_72++;
                                                }
                                            }
                                        }
                                        else {
                                            it_74=self->head;
                                            head_prev_it_75=((void*)0);
                                            tail_it_76=((void*)0);
                                            i_77=0;
                                            while(it_74!=((void*)0)) {
                                                if(i_77==head) {
                                                    head_prev_it_75=it_74->prev;
                                                }
                                                if(i_77==tail) {
                                                    tail_it_76=it_74;
                                                }
                                                if(i_77>=head&&i_77<tail) {
                                                    prev_it_78=it_74;
                                                    it_74=it_74->next;
                                                    i_77++;
                                                    if(prev_it_78) { come_call_finalizer(list_item$1charpp_finalize,prev_it_78, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_74=it_74->next;
                                                    i_77++;
                                                }
                                            }
                                            if(head_prev_it_75!=((void*)0)) {
                                                head_prev_it_75->next=tail_it_76;
                                            }
                                            if(tail_it_76!=((void*)0)) {
                                                tail_it_76->prev=head_prev_it_75;
                                            }
                                        }
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_66;
struct list_item$1charp* prev_it_67;
memset(&it_66, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_67, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                it_66=self->head;
                                                while(it_66!=((void*)0)) {
                                                    prev_it_67=it_66;
                                                    it_66=it_66->next;
                                                    if(prev_it_67) { come_call_finalizer(list_item$1charpp_finalize,prev_it_67, (void*)0, (void*)0, 0, 0, 0); }
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
char* result_80;
memset(&result_80, 0, sizeof(char*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                char* __result47__ = self->it->item;
                return __result47__;
            }
            memset(&result_80,0,sizeof(char*));
            char* __result48__ = result_80;
            return __result48__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
            _Bool __result49__ = self->it==((void*)0);
            return __result49__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_82;
memset(&result_82, 0, sizeof(char*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                char* __result50__ = self->it->item;
                return __result50__;
            }
            memset(&result_82,0,sizeof(char*));
            char* __result51__ = result_82;
            return __result51__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value47;
struct list_item$1charp* litem_83;
void* right_value48;
struct list_item$1charp* litem_84;
void* right_value49;
struct list_item$1charp* litem_85;
memset(&right_value47, 0, sizeof(void*));
memset(&litem_83, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value48, 0, sizeof(void*));
memset(&litem_84, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value49, 0, sizeof(void*));
memset(&litem_85, 0, sizeof(struct list_item$1charp*)); /* ddd */
                if(self->len==0) {
                    litem_83=((struct list_item$1charp*)(right_value47=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_83->prev=((void*)0);
                    litem_83->next=((void*)0);
                    litem_83->item=item;
                    self->tail=litem_83;
                    self->head=litem_83;
                }
                else if(self->len==1) {
                    litem_84=((struct list_item$1charp*)(right_value48=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_84->prev=self->head;
                    litem_84->next=((void*)0);
                    litem_84->item=item;
                    self->tail=litem_84;
                    self->head->next=litem_84;
                }
                else {
                    litem_85=((struct list_item$1charp*)(right_value49=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_85->prev=self->tail;
                    litem_85->next=((void*)0);
                    litem_85->item=item;
                    self->tail->next=litem_85;
                    self->tail=litem_85;
                }
                self->len++;
}

static void CVALUE_finalize(struct CVALUE* self){
        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
            if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
        }
        if(self!=((void*)0)&&self->type!=((void*)0)) {
            if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* right_value57;
struct list_item$1CVALUEph* litem_93;
struct CVALUE* __dec_obj27;
void* right_value58;
struct list_item$1CVALUEph* litem_94;
struct CVALUE* __dec_obj28;
void* right_value59;
struct list_item$1CVALUEph* litem_95;
struct CVALUE* __dec_obj29;
memset(&right_value57, 0, sizeof(void*));
memset(&litem_93, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value58, 0, sizeof(void*));
memset(&litem_94, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value59, 0, sizeof(void*));
memset(&litem_95, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
        if(self->len==0) {
            litem_93=((struct list_item$1CVALUEph*)(right_value57=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_93->prev=((void*)0);
            litem_93->next=((void*)0);
            __dec_obj27=litem_93->item;
            litem_93->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
            self->tail=litem_93;
            self->head=litem_93;
        }
        else if(self->len==1) {
            litem_94=((struct list_item$1CVALUEph*)(right_value58=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_94->prev=self->head;
            litem_94->next=((void*)0);
            __dec_obj28=litem_94->item;
            litem_94->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
            self->tail=litem_94;
            self->head->next=litem_94;
        }
        else {
            litem_95=((struct list_item$1CVALUEph*)(right_value59=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_95->prev=self->tail;
            litem_95->next=((void*)0);
            __dec_obj29=litem_95->item;
            litem_95->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
            self->tail->next=litem_95;
            self->tail=litem_95;
        }
        self->len++;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* right_value60;
struct sNode* __dec_obj30;
void* right_value61;
char* __dec_obj31;
void* right_value71;
struct list$1tuple2$2charphsNodephph* __dec_obj37;
void* right_value72;
struct buffer* __dec_obj38;
void* right_value73;
char* __dec_obj39;
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
    __dec_obj30=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value60=sNodep_clone(obj))));
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0); }
    if(right_value60) { right_value60 = come_decrement_ref_count(right_value60, ((struct sNode*)right_value60)->finalize, ((struct sNode*)right_value60)->_protocol_obj, 1, 0); } 
    __dec_obj31=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value61=__builtin_string(fun_name))));
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
    if(right_value61) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0); }
    __dec_obj37=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value71=list$1tuple2$2charphsNodephphp_clone(params))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
    if(right_value71) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj38=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value72=buffer_clone(method_block))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
    if(right_value72) { come_call_finalizer(buffer_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0); }
    self->sline=info->sline;
    __dec_obj39=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(info->sname))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0); }
    if(right_value73) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0); }
    self->method_block_sline=method_block_sline;
    struct sMethodCallNode* __result58__ = self;
    if(self) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(obj) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1); } 
    if(params) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1); }
    return __result58__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* right_value62;
void* right_value63;
struct list$1tuple2$2charphsNodephph* result_98;
struct list_item$1tuple2$2charphsNodephph* it_99;
void* right_value70;
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&result_98, 0, sizeof(struct list$1tuple2$2charphsNodephph*)); /* ddd */
memset(&it_99, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value70, 0, sizeof(void*));
        if(self==((void*)0)) {
            struct list$1tuple2$2charphsNodephph* __result53__ = ((void*)0);
            return __result53__;
        }
        result_98=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value63=list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value62=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1)))))))));
        if(right_value63) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0); }
        it_99=self->head;
        while(it_99!=((void*)0)) {
            list$1tuple2$2charphsNodephphp_push_back2(result_98,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value70=tuple2$2charphsNodephp_clone(it_99->item)))));
            if(right_value70) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
            it_99=it_99->next;
        }
        struct list$1tuple2$2charphsNodephph* __result57__ = result_98;
        if(result_98) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_98, (void*)0, (void*)0, 0, 0, 1); }
        return __result57__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1tuple2$2charphsNodephph* __result54__ = self;
            if(self) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result54__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_96;
struct list_item$1tuple2$2charphsNodephph* prev_it_97;
memset(&it_96, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&prev_it_97, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
                it_96=self->head;
                while(it_96!=((void*)0)) {
                    if(1) {
                        if(it_96->item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,it_96->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    prev_it_97=it_96;
                    it_96=it_96->next;
                    come_free_object(prev_it_97);
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
void* right_value64;
struct list_item$1tuple2$2charphsNodephph* litem_100;
struct tuple2$2charphsNodeph* __dec_obj32;
void* right_value65;
struct list_item$1tuple2$2charphsNodephph* litem_101;
struct tuple2$2charphsNodeph* __dec_obj33;
void* right_value66;
struct list_item$1tuple2$2charphsNodephph* litem_102;
struct tuple2$2charphsNodeph* __dec_obj34;
memset(&right_value64, 0, sizeof(void*));
memset(&litem_100, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value65, 0, sizeof(void*));
memset(&litem_101, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value66, 0, sizeof(void*));
memset(&litem_102, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
                if(self->len==0) {
                    litem_100=((struct list_item$1tuple2$2charphsNodephph*)(right_value64=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                    litem_100->prev=((void*)0);
                    litem_100->next=((void*)0);
                    __dec_obj32=litem_100->item;
                    litem_100->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_100;
                    self->head=litem_100;
                }
                else if(self->len==1) {
                    litem_101=((struct list_item$1tuple2$2charphsNodephph*)(right_value65=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                    litem_101->prev=self->head;
                    litem_101->next=((void*)0);
                    __dec_obj33=litem_101->item;
                    litem_101->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_101;
                    self->head->next=litem_101;
                }
                else {
                    litem_102=((struct list_item$1tuple2$2charphsNodephph*)(right_value66=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                    litem_102->prev=self->tail;
                    litem_102->next=((void*)0);
                    __dec_obj34=litem_102->item;
                    litem_102->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_102;
                    self->tail=litem_102;
                }
                self->len++;
                if(item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* right_value67;
struct tuple2$2charphsNodeph* result_103;
void* right_value68;
char* __dec_obj35;
void* right_value69;
struct sNode* __dec_obj36;
memset(&right_value67, 0, sizeof(void*));
memset(&result_103, 0, sizeof(struct tuple2$2charphsNodeph*)); /* ddd */
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple2$2charphsNodeph* __result55__ = (void*)0;
                    return __result55__;
                }
                result_103=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value67=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1)))));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj35=result_103->v1;
                    result_103->v1=(char*)come_increment_ref_count(((char*)(right_value68=string_clone(self->v1))));
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
                    if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj36=result_103->v2;
                    result_103->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=sNodep_clone(self->v2))));
                    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0); }
                    if(right_value69) { right_value69 = come_decrement_ref_count(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0); } 
                }
                struct tuple2$2charphsNodeph* __result56__ = result_103;
                return __result56__;
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
        if(self!=((void*)0)&&self->obj!=((void*)0)) {
            if(self->obj) { self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0); } 
        }
        if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
            if(self->fun_name) { self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0); }
        }
        if(self!=((void*)0)&&self->params!=((void*)0)) {
            if(self->params) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->method_block!=((void*)0)) {
            if(self->method_block) { come_call_finalizer(buffer_finalize,self->method_block, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
        }
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
    int __result59__ = self->sline;
    return __result59__;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* right_value74;
memset(&right_value74, 0, sizeof(void*));
    char* __result60__ = ((char*)(right_value74=__builtin_string(self->sname)));
    return __result60__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
int hash_107;
int it_108;
memset(&hash_107, 0, sizeof(int)); /* ddd */
memset(&it_108, 0, sizeof(int)); /* ddd */
        hash_107=string_get_hash_key(((char*)key))%self->size;
        it_108=hash_107;
        while((_Bool)1) {
            if(self->item_existance[it_108]) {
                if(charp_equals(self->keys[it_108],key)) {
                    struct sGenericsFun* __result61__ = self->items[it_108];
                    return __result61__;
                }
                it_108++;
                if(it_108>=self->size) {
                    it_108=0;
                }
                else if(it_108==hash_107) {
                    struct sGenericsFun* __result62__ = default_value;
                    return __result62__;
                }
            }
            else {
                struct sGenericsFun* __result63__ = default_value;
                return __result63__;
            }
        }
        struct sGenericsFun* __result64__ = default_value;
        return __result64__;
}

_Bool sMethodCallNode_terminated(){
    _Bool __result67__ = (_Bool)0;
    return __result67__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_110;
struct list$1tuple2$2charphsNodephph* params_111;
struct sNode* obj_112;
struct buffer* method_block_113;
int method_block_sline_114;
void* right_value80;
struct CVALUE* obj_value_115;
void* right_value81;
struct sType* obj_type_116;
struct sClass* klass_117;
_Bool calling_dynamic_method_118;
struct sType* lambda_type_119;
struct tuple2$2charphsTypeph* it_121;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_123;
struct sType* field_type_124;
void* right_value82;
struct sType* result_type_125;
void* right_value83;
void* right_value84;
struct list$1CVALUEph* come_params_128;
int i_129;
struct tuple2$2charphsNodeph* it_131;
struct tuple2$2charphsNodeph* multiple_assgin_var2;
char* label_133;
struct sNode* node_134;
void* right_value85;
struct CVALUE* come_value_135;
void* right_value86;
char* __dec_obj40;
void* right_value87;
void* right_value88;
struct buffer* buf_139;
void* right_value89;
int j_140;
struct CVALUE* it_142;
void* right_value90;
char* __dec_obj41;
void* right_value91;
struct CVALUE* come_value2_144;
void* right_value92;
char* __dec_obj42;
void* right_value93;
void* right_value94;
char* __dec_obj43;
void* right_value95;
struct sType* __dec_obj44;
void* right_value96;
void* right_value97;
void* right_value98;
void* right_value99;
char* generics_fun_name_145;
struct sFun* fun_148;
void* right_value100;
struct sType* result_type_149;
void* right_value101;
struct sType* result_type2_150;
void* right_value102;
void* right_value103;
struct list$1sTypeph* param_types_151;
struct sType* it_153;
void* right_value107;
struct sType* it2_158;
void* right_value108;
void* right_value109;
void* right_value110;
struct list$1CVALUEph* come_params_159;
void* right_value111;
void* right_value117;
struct map$2charphCVALUEph* label_params_165;
int i_166;
struct tuple2$2charphsNodeph* it_167;
struct tuple2$2charphsNodeph* multiple_assgin_var3;
char* label_168;
struct sNode* node_169;
void* right_value118;
char* __dec_obj49;
void* right_value119;
struct CVALUE* come_value_170;
void* right_value120;
char* __dec_obj50;
void* right_value124;
void* right_value125;
char* default_param_193;
char* param_name_194;
struct CVALUE* come_value_196;
struct buffer* source_197;
char* p_198;
char* head_199;
int sline_200;
void* right_value126;
struct buffer* __dec_obj51;
void* right_value127;
struct sNode* node_201;
struct buffer* __dec_obj52;
void* right_value128;
struct CVALUE* come_value_202;
void* right_value129;
char* __dec_obj53;
char* param_name_203;
struct CVALUE* come_value_204;
void* right_value133;
void* right_value134;
void* right_value135;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value138;
struct sNode* current_stack_frame_node_209;
void* right_value139;
struct CVALUE* come_value_210;
void* right_value140;
void* right_value141;
struct buffer* method_block2_211;
void* right_value151;
struct sType* method_block_type_213;
void* right_value152;
char* class_name_214;
struct sClass* current_stack_frame_struct_216;
void* right_value153;
struct sType* result_type_217;
struct list$1sTypeph* param_types_218;
struct list$1charph* param_names_219;
char* p_221;
char* p2_222;
void* right_value154;
void* right_value155;
int i_223;
struct sType* it_224;
struct sType* param_type_225;
void* right_value156;
char* param_name_226;
void* right_value157;
void* right_value158;
void* right_value159;
char* param_name_227;
void* right_value160;
void* right_value161;
void* right_value162;
char* param_name_228;
void* right_value163;
void* right_value164;
void* right_value165;
struct buffer* source3_229;
char* p_230;
char* head_231;
int sline_232;
struct buffer* __dec_obj66;
void* right_value166;
struct sNode* node_233;
void* right_value167;
char* method_block_name_234;
void* right_value168;
struct CVALUE* come_value2_235;
struct sFun* fun2_236;
struct sType* method_block_type2_237;
void* right_value169;
char* __dec_obj67;
void* right_value170;
struct sType* __dec_obj68;
struct buffer* __dec_obj69;
void* right_value171;
void* right_value172;
struct buffer* buf_238;
int j_239;
struct CVALUE* it_240;
void* right_value173;
struct CVALUE* come_value2_241;
void* right_value174;
char* __dec_obj70;
void* right_value175;
void* right_value176;
char* __dec_obj71;
void* right_value177;
struct sType* __dec_obj72;
void* right_value178;
memset(&fun_name_110, 0, sizeof(char*)); /* ddd */
memset(&params_111, 0, sizeof(struct list$1tuple2$2charphsNodephph*)); /* ddd */
memset(&obj_112, 0, sizeof(struct sNode*)); /* ddd */
memset(&method_block_113, 0, sizeof(struct buffer*)); /* ddd */
memset(&method_block_sline_114, 0, sizeof(int)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&obj_value_115, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value81, 0, sizeof(void*));
memset(&obj_type_116, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_117, 0, sizeof(struct sClass*)); /* ddd */
memset(&calling_dynamic_method_118, 0, sizeof(_Bool)); /* ddd */
memset(&lambda_type_119, 0, sizeof(struct sType*)); /* ddd */
memset(&it_121, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&field_name_123, 0, sizeof(char*)); /* ccc */
memset(&field_type_124, 0, sizeof(struct sType*)); /* ccc */
memset(&field_name_123, 0, sizeof(char*)); /* eee */
memset(&field_type_124, 0, sizeof(struct sType*)); /* eee */
memset(&right_value82, 0, sizeof(void*));
memset(&result_type_125, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&come_params_128, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&i_129, 0, sizeof(int)); /* ddd */
memset(&it_131, 0, sizeof(struct tuple2$2charphsNodeph*)); /* ddd */
memset(&label_133, 0, sizeof(char*)); /* ccc */
memset(&node_134, 0, sizeof(struct sNode*)); /* ccc */
memset(&label_133, 0, sizeof(char*)); /* eee */
memset(&node_134, 0, sizeof(struct sNode*)); /* eee */
memset(&right_value85, 0, sizeof(void*));
memset(&come_value_135, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&buf_139, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value89, 0, sizeof(void*));
memset(&j_140, 0, sizeof(int)); /* ddd */
memset(&it_142, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&come_value2_144, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&generics_fun_name_145, 0, sizeof(char*)); /* ddd */
memset(&fun_148, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value100, 0, sizeof(void*));
memset(&result_type_149, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value101, 0, sizeof(void*));
memset(&result_type2_150, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&param_types_151, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_153, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value107, 0, sizeof(void*));
memset(&it2_158, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&come_params_159, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value111, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&label_params_165, 0, sizeof(struct map$2charphCVALUEph*)); /* ddd */
memset(&i_166, 0, sizeof(int)); /* ddd */
memset(&it_167, 0, sizeof(struct tuple2$2charphsNodeph*)); /* ddd */
memset(&label_168, 0, sizeof(char*)); /* ccc */
memset(&node_169, 0, sizeof(struct sNode*)); /* ccc */
memset(&label_168, 0, sizeof(char*)); /* eee */
memset(&node_169, 0, sizeof(struct sNode*)); /* eee */
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&come_value_170, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value120, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&default_param_193, 0, sizeof(char*)); /* ddd */
memset(&param_name_194, 0, sizeof(char*)); /* ddd */
memset(&come_value_196, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&source_197, 0, sizeof(struct buffer*)); /* ddd */
memset(&p_198, 0, sizeof(char*)); /* ddd */
memset(&head_199, 0, sizeof(char*)); /* ddd */
memset(&sline_200, 0, sizeof(int)); /* ddd */
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&node_201, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value128, 0, sizeof(void*));
memset(&come_value_202, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value129, 0, sizeof(void*));
memset(&param_name_203, 0, sizeof(char*)); /* ddd */
memset(&come_value_204, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&current_stack_frame_node_209, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value139, 0, sizeof(void*));
memset(&come_value_210, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&method_block2_211, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value151, 0, sizeof(void*));
memset(&method_block_type_213, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value152, 0, sizeof(void*));
memset(&class_name_214, 0, sizeof(char*)); /* ddd */
memset(&current_stack_frame_struct_216, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value153, 0, sizeof(void*));
memset(&result_type_217, 0, sizeof(struct sType*)); /* ddd */
memset(&param_types_218, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&param_names_219, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&p_221, 0, sizeof(char*)); /* ddd */
memset(&p2_222, 0, sizeof(char*)); /* ddd */
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&i_223, 0, sizeof(int)); /* ddd */
memset(&it_224, 0, sizeof(struct sType*)); /* ddd */
memset(&param_type_225, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value156, 0, sizeof(void*));
memset(&param_name_226, 0, sizeof(char*)); /* ddd */
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&param_name_227, 0, sizeof(char*)); /* ddd */
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&param_name_228, 0, sizeof(char*)); /* ddd */
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&source3_229, 0, sizeof(struct buffer*)); /* ddd */
memset(&p_230, 0, sizeof(char*)); /* ddd */
memset(&head_231, 0, sizeof(char*)); /* ddd */
memset(&sline_232, 0, sizeof(int)); /* ddd */
memset(&right_value166, 0, sizeof(void*));
memset(&node_233, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value167, 0, sizeof(void*));
memset(&method_block_name_234, 0, sizeof(char*)); /* ddd */
memset(&right_value168, 0, sizeof(void*));
memset(&come_value2_235, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&fun2_236, 0, sizeof(struct sFun*)); /* ddd */
memset(&method_block_type2_237, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&buf_238, 0, sizeof(struct buffer*)); /* ddd */
memset(&j_239, 0, sizeof(int)); /* ddd */
memset(&it_240, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value173, 0, sizeof(void*));
memset(&come_value2_241, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    fun_name_110=self->fun_name;
    params_111=self->params;
    obj_112=self->obj;
    method_block_113=self->method_block;
    method_block_sline_114=self->method_block_sline;
    if(!obj_112->compile(obj_112->_protocol_obj,info)) {
        _Bool __result68__ = (_Bool)0;
        return __result68__;
    }
    obj_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=get_value_from_stack(-1,info))));
    if(right_value80) { come_call_finalizer(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    obj_type_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(obj_value_115->type))));
    if(right_value81) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
    klass_117=obj_type_116->mClass;
    calling_dynamic_method_118=(_Bool)0;
    lambda_type_119=((void*)0);
    for(
    it_121=list$1tuple2$2charphsTypephphp_begin((klass_117->mFields));
    !list$1tuple2$2charphsTypephphp_end((klass_117->mFields));
    it_121=list$1tuple2$2charphsTypephphp_next((klass_117->mFields))
    ){
        multiple_assgin_var1=it_121;
        field_name_123=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type_124=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        if(string_operator_equals(field_name_123,fun_name_110)&&string_operator_equals(field_type_124->mClass->mName,"lambda")) {
            calling_dynamic_method_118=(_Bool)1;
            lambda_type_119=field_type_124;
            break;
        }
        if(field_name_123) { field_name_123 = come_decrement_ref_count(field_name_123, (void*)0, (void*)0, 0, 0); }
        if(field_type_124) { come_call_finalizer(sType_finalize,field_type_124, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(calling_dynamic_method_118) {
        result_type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_clone(lambda_type_119->mResultType->v1))));
        if(right_value82) { come_call_finalizer(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0); }
        result_type_125->mStatic=(_Bool)0;
        come_params_128=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value84=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value83=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
        if(right_value84) { come_call_finalizer(list$1CVALUEphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0); }
        i_129=0;
        for(
        it_131=list$1tuple2$2charphsNodephphp_begin((params_111));
        !list$1tuple2$2charphsNodephphp_end((params_111));
        it_131=list$1tuple2$2charphsNodephphp_next((params_111))
        ){
            multiple_assgin_var2=it_131;
            label_133=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            node_134=(struct sNode*)come_increment_ref_count(multiple_assgin_var2->v2);
            if(i_129==0) {
                list$1CVALUEphp_push_back(come_params_128,(struct CVALUE*)come_increment_ref_count(obj_value_115));
                i_129++;
            }
            else {
                if(!node_134->compile(node_134->_protocol_obj,info)) {
                    _Bool __result80__ = (_Bool)0;
                    if(label_133) { label_133 = come_decrement_ref_count(label_133, (void*)0, (void*)0, 0, 0); }
                    if(node_134) { node_134 = come_decrement_ref_count(node_134, ((struct sNode*)node_134)->finalize, ((struct sNode*)node_134)->_protocol_obj, 0, 0); } 
                    if(result_type_125) { come_call_finalizer(sType_finalize,result_type_125, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_params_128) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_128, (void*)0, (void*)0, 0, 0, 0); }
                    return __result80__;
                }
                come_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=get_value_from_stack(-1,info))));
                if(right_value85) { come_call_finalizer(CVALUE_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0); }
                if(list$1sTypephp_operator_load_element(lambda_type_119->mParamTypes,i_129-1)->mHeap&&come_value_135->type->mHeap) {
                    __dec_obj40=come_value_135->c_value;
                    come_value_135->c_value=(char*)come_increment_ref_count(((char*)(right_value86=increment_ref_count_object(come_value_135->type,come_value_135->c_value,info))));
                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
                    if(right_value86) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0); }
                }
                list$1CVALUEphp_push_back(come_params_128,(struct CVALUE*)come_increment_ref_count(come_value_135));
                i_129++;
                dec_stack_ptr(1,info);
                if(come_value_135) { come_call_finalizer(CVALUE_finalize,come_value_135, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(label_133) { label_133 = come_decrement_ref_count(label_133, (void*)0, (void*)0, 0, 0); }
            if(node_134) { node_134 = come_decrement_ref_count(node_134, ((struct sNode*)node_134)->finalize, ((struct sNode*)node_134)->_protocol_obj, 0, 0); } 
        }
        buf_139=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value88=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value87) { come_call_finalizer(buffer_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value88) { come_call_finalizer(buffer_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(buf_139,((char*)(right_value89=xsprintf("%s->%s",obj_value_115->c_value,fun_name_110))));
        if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_139,"(");
        j_140=0;
        for(
        it_142=list$1CVALUEphp_begin((come_params_128));
        !list$1CVALUEphp_end((come_params_128));
        it_142=list$1CVALUEphp_next((come_params_128))
        ){
            if(j_140==0) {
                __dec_obj41=it_142->c_value;
                it_142->c_value=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s->_protocol_obj",it_142->c_value))));
                if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
                if(right_value90) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0); }
            }
            buffer_append_str(buf_139,it_142->c_value);
            if(j_140!=list$1CVALUEphp_length(come_params_128)-1) {
                buffer_append_str(buf_139,",");
            }
            j_140++;
        }
        buffer_append_str(buf_139,")");
        come_value2_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value91) { come_call_finalizer(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj42=come_value2_144->c_value;
        come_value2_144->c_value=(char*)come_increment_ref_count(((char*)(right_value92=buffer_to_string(buf_139))));
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
        if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
        if(result_type_125->mHeap) {
            __dec_obj43=come_value2_144->c_value;
            come_value2_144->c_value=(char*)come_increment_ref_count(((char*)(right_value94=append_object_to_right_values(((char*)(right_value93=buffer_to_string(buf_139))),(struct sType*)come_increment_ref_count(result_type_125),info))));
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
            if(right_value93) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0); }
            if(right_value94) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0); }
        }
        __dec_obj44=come_value2_144->type;
        come_value2_144->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(result_type_125))));
        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
        if(right_value95) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0); }
        come_value2_144->type->mStatic=(_Bool)0;
        come_value2_144->var=((void*)0);
        add_come_last_code(info,"%s;\n",((char*)(right_value96=buffer_to_string(buf_139))));
        if(right_value96) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0); }
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_144));
        if(result_type_125) { come_call_finalizer(sType_finalize,result_type_125, (void*)0, (void*)0, 0, 0, 0); }
        if(come_params_128) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_128, (void*)0, (void*)0, 0, 0, 0); }
        if(buf_139) { come_call_finalizer(buffer_finalize,buf_139, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value2_144) { come_call_finalizer(CVALUE_finalize,come_value2_144, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        generics_fun_name_145=(char*)come_increment_ref_count(((char*)(right_value99=string_to_string(((char*)(right_value98=make_generics_function(obj_type_116,(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string(fun_name_110)))),info)))))));
        if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0); }
        if(right_value98) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0); }
        if(right_value99) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0); }
        fun_148=map$2charphsFunphp_at(info->funcs,generics_fun_name_145,((void*)0));
        if(fun_148==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)\n",generics_fun_name_145,info->come_fun->mName);
            _Bool __result94__ = (_Bool)0;
            if(generics_fun_name_145) { generics_fun_name_145 = come_decrement_ref_count(generics_fun_name_145, (void*)0, (void*)0, 0, 0); }
            return __result94__;
        }
        result_type_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(fun_148->mResultType))));
        if(right_value100) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0); }
        result_type_149->mStatic=(_Bool)0;
        result_type2_150=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=solve_generics(result_type_149,info->generics_type,info))));
        if(right_value101) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0); }
        param_types_151=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
        if(right_value103) { come_call_finalizer(list$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
        for(
        it_153=list$1sTypephp_begin((fun_148->mParamTypes));
        !list$1sTypephp_end((fun_148->mParamTypes));
        it_153=list$1sTypephp_next((fun_148->mParamTypes))
        ){
            if(it_153==((void*)0)) {
                list$1sTypephp_push_back(param_types_151,it_153);
            }
            else {
                it2_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=solve_generics(it_153,info->generics_type,info))));
                if(right_value107) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0); }
                list$1sTypephp_push_back(param_types_151,(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(it2_158)))));
                if(right_value108) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0); }
                if(it2_158) { come_call_finalizer(sType_finalize,it2_158, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        come_params_159=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value110=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value109=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
        if(right_value110) { come_call_finalizer(list$1CVALUEphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0); }
        label_params_165=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value117=map$2charphCVALUEphp_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value111=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1)))))))));
        if(right_value117) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
        i_166=0;
        for(
        it_167=list$1tuple2$2charphsNodephphp_begin((params_111));
        !list$1tuple2$2charphsNodephphp_end((params_111));
        it_167=list$1tuple2$2charphsNodephphp_next((params_111))
        ){
            multiple_assgin_var3=it_167;
            label_168=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
            node_169=(struct sNode*)come_increment_ref_count(multiple_assgin_var3->v2);
            if(i_166==0) {
                if(list$1sTypephp_operator_load_element(param_types_151,i_166)->mHeap&&obj_value_115->type->mHeap) {
                    __dec_obj49=obj_value_115->c_value;
                    obj_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value118=increment_ref_count_object(obj_value_115->type,obj_value_115->c_value,info))));
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
                    if(right_value118) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0); }
                }
                list$1CVALUEphp_push_back(come_params_159,(struct CVALUE*)come_increment_ref_count(obj_value_115));
                i_166++;
            }
            else {
                if(!node_169->compile(node_169->_protocol_obj,info)) {
                    _Bool __result102__ = (_Bool)0;
                    if(label_168) { label_168 = come_decrement_ref_count(label_168, (void*)0, (void*)0, 0, 0); }
                    if(node_169) { node_169 = come_decrement_ref_count(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0, 0); } 
                    if(generics_fun_name_145) { generics_fun_name_145 = come_decrement_ref_count(generics_fun_name_145, (void*)0, (void*)0, 0, 0); }
                    if(result_type_149) { come_call_finalizer(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_type2_150) { come_call_finalizer(sType_finalize,result_type2_150, (void*)0, (void*)0, 0, 0, 0); }
                    if(param_types_151) { come_call_finalizer(list$1sTypephp_finalize,param_types_151, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_params_159) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_159, (void*)0, (void*)0, 0, 0, 0); }
                    if(label_params_165) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_165, (void*)0, (void*)0, 0, 0, 0); }
                    return __result102__;
                }
                come_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))));
                if(right_value119) { come_call_finalizer(CVALUE_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0); }
                if(list$1sTypephp_operator_load_element(param_types_151,i_166)&&list$1sTypephp_operator_load_element(param_types_151,i_166)&&list$1sTypephp_operator_load_element(param_types_151,i_166)->mHeap&&come_value_170->type->mHeap) {
                    __dec_obj50=come_value_170->c_value;
                    come_value_170->c_value=(char*)come_increment_ref_count(((char*)(right_value120=increment_ref_count_object(come_value_170->type,come_value_170->c_value,info))));
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
                    if(right_value120) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0); }
                }
                if(label_168==((void*)0)) {
                    list$1CVALUEphp_push_back(come_params_159,(struct CVALUE*)come_increment_ref_count(come_value_170));
                    i_166++;
                }
                else {
                    map$2charphCVALUEphp_insert(label_params_165,(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(label_168)))),(struct CVALUE*)come_increment_ref_count(come_value_170));
                    if(right_value124) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0); }
                }
                dec_stack_ptr(1,info);
                if(come_value_170) { come_call_finalizer(CVALUE_finalize,come_value_170, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(label_168) { label_168 = come_decrement_ref_count(label_168, (void*)0, (void*)0, 0, 0); }
            if(node_169) { node_169 = come_decrement_ref_count(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0, 0); } 
        }
        if(list$1tuple2$2charphsNodephphp_length(params_111)<list$1sTypephp_length(fun_148->mParamTypes)+(method_block_113?-2:0)) {
            for(
            ;            i_166<list$1sTypephp_length(fun_148->mParamTypes)+(method_block_113?-2:0);
            i_166++
            ){
                default_param_193=(char*)come_increment_ref_count(((char*)(right_value125=charp_clone(list$1charphp_operator_load_element(fun_148->mParamDefaultParametors,i_166)))));
                if(right_value125) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0); }
                param_name_194=list$1charphp_operator_load_element(fun_148->mParamNames,i_166);
                come_value_196=map$2charphCVALUEphp_operator_load_element(label_params_165,param_name_194);
                if(default_param_193&&string_operator_not_equals(default_param_193,"")) {
                    source_197=(struct buffer*)come_increment_ref_count(info->source);
                    p_198=info->p;
                    head_199=info->head;
                    sline_200=info->sline;
                    __dec_obj51=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value126=string_to_buffer(default_param_193))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
                    if(right_value126) { come_call_finalizer(buffer_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_201=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=expression_v13(info))));
                    if(right_value127) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0); } 
                    if(!node_201->compile(node_201->_protocol_obj,info)) {
                        _Bool __result118__ = (_Bool)0;
                        if(source_197) { come_call_finalizer(buffer_finalize,source_197, (void*)0, (void*)0, 0, 0, 0); }
                        if(node_201) { node_201 = come_decrement_ref_count(node_201, ((struct sNode*)node_201)->finalize, ((struct sNode*)node_201)->_protocol_obj, 0, 0); } 
                        if(default_param_193) { default_param_193 = come_decrement_ref_count(default_param_193, (void*)0, (void*)0, 0, 0); }
                        if(generics_fun_name_145) { generics_fun_name_145 = come_decrement_ref_count(generics_fun_name_145, (void*)0, (void*)0, 0, 0); }
                        if(result_type_149) { come_call_finalizer(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type2_150) { come_call_finalizer(sType_finalize,result_type2_150, (void*)0, (void*)0, 0, 0, 0); }
                        if(param_types_151) { come_call_finalizer(list$1sTypephp_finalize,param_types_151, (void*)0, (void*)0, 0, 0, 0); }
                        if(come_params_159) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_159, (void*)0, (void*)0, 0, 0, 0); }
                        if(label_params_165) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_165, (void*)0, (void*)0, 0, 0, 0); }
                        return __result118__;
                    }
                    __dec_obj52=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_197);
                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                    info->p=p_198;
                    info->head=head_199;
                    info->sline=sline_200;
                    come_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=get_value_from_stack(-1,info))));
                    if(right_value128) { come_call_finalizer(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0); }
                    if(list$1sTypephp_operator_load_element(param_types_151,i_166)&&list$1sTypephp_operator_load_element(param_types_151,i_166)->mHeap&&come_value_202->type->mHeap) {
                        __dec_obj53=come_value_202->c_value;
                        come_value_202->c_value=(char*)come_increment_ref_count(((char*)(right_value129=increment_ref_count_object(come_value_202->type,come_value_202->c_value,info))));
                        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
                        if(right_value129) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0); }
                    }
                    list$1CVALUEphp_push_back(come_params_159,(struct CVALUE*)come_increment_ref_count(come_value_202));
                    dec_stack_ptr(1,info);
                    if(source_197) { come_call_finalizer(buffer_finalize,source_197, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_201) { node_201 = come_decrement_ref_count(node_201, ((struct sNode*)node_201)->finalize, ((struct sNode*)node_201)->_protocol_obj, 0, 0); } 
                    if(come_value_202) { come_call_finalizer(CVALUE_finalize,come_value_202, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(come_value_196) {
                        list$1CVALUEphp_push_back(come_params_159,((void*)0));
                    }
                    else {
                        err_msg(info,"require parametor(%s)",fun_148->mName);
                        _Bool __result119__ = (_Bool)0;
                        if(default_param_193) { default_param_193 = come_decrement_ref_count(default_param_193, (void*)0, (void*)0, 0, 0); }
                        if(generics_fun_name_145) { generics_fun_name_145 = come_decrement_ref_count(generics_fun_name_145, (void*)0, (void*)0, 0, 0); }
                        if(result_type_149) { come_call_finalizer(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type2_150) { come_call_finalizer(sType_finalize,result_type2_150, (void*)0, (void*)0, 0, 0, 0); }
                        if(param_types_151) { come_call_finalizer(list$1sTypephp_finalize,param_types_151, (void*)0, (void*)0, 0, 0, 0); }
                        if(come_params_159) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_159, (void*)0, (void*)0, 0, 0, 0); }
                        if(label_params_165) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_165, (void*)0, (void*)0, 0, 0, 0); }
                        return __result119__;
                    }
                }
            }
        }
        if(map$2charphCVALUEphp_length(label_params_165)>0) {
            for(
            i_166=0;
            i_166<list$1charphp_length(fun_148->mParamNames)+(method_block_113?-2:0);
            i_166++
            ){
                param_name_203=list$1charphp_operator_load_element(fun_148->mParamNames,i_166);
                come_value_204=map$2charphCVALUEphp_operator_load_element(label_params_165,param_name_203);
                if(come_value_204) {
                    list$1CVALUEphp_replace(come_params_159,i_166,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value133=CVALUE_clone(come_value_204)))));
                    if(right_value133) { come_call_finalizer(CVALUE_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
        }
        if(method_block_113) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value135=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value134=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1))))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=sCurrentNode_finalize;
            _inf_value1->clone=sCurrentNode_clone;
            _inf_value1->compile=sCurrentNode_compile;
            _inf_value1->sline=sCurrentNode_sline;
            _inf_value1->sname=sCurrentNode_sname;
            _inf_value1->terminated=sCurrentNode_terminated;
            current_stack_frame_node_209=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=_inf_value1)));
            if(right_value134) { come_call_finalizer(sCurrentNode_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value135) { come_call_finalizer(sCurrentNode_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value138) { right_value138 = come_decrement_ref_count(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0); } 
            if(!current_stack_frame_node_209->compile(current_stack_frame_node_209->_protocol_obj,info)) {
                _Bool __result126__ = (_Bool)0;
                if(current_stack_frame_node_209) { current_stack_frame_node_209 = come_decrement_ref_count(current_stack_frame_node_209, ((struct sNode*)current_stack_frame_node_209)->finalize, ((struct sNode*)current_stack_frame_node_209)->_protocol_obj, 0, 0); } 
                if(generics_fun_name_145) { generics_fun_name_145 = come_decrement_ref_count(generics_fun_name_145, (void*)0, (void*)0, 0, 0); }
                if(result_type_149) { come_call_finalizer(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type2_150) { come_call_finalizer(sType_finalize,result_type2_150, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_151) { come_call_finalizer(list$1sTypephp_finalize,param_types_151, (void*)0, (void*)0, 0, 0, 0); }
                if(come_params_159) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_159, (void*)0, (void*)0, 0, 0, 0); }
                if(label_params_165) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_165, (void*)0, (void*)0, 0, 0, 0); }
                return __result126__;
            }
            come_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=get_value_from_stack(-1,info))));
            if(right_value139) { come_call_finalizer(CVALUE_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
            list$1CVALUEphp_push_back(come_params_159,(struct CVALUE*)come_increment_ref_count(come_value_210));
            dec_stack_ptr(1,info);
            method_block2_211=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value141=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value140=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
            if(right_value140) { come_call_finalizer(buffer_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value141) { come_call_finalizer(buffer_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0); }
            method_block_type_213=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sTypep_clone(list$1sTypephp_operator_load_element(fun_148->mParamTypes,-1)))));
            if(right_value151) { come_call_finalizer(sTypep_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0); }
            class_name_214=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("__current_stack%d__",info->current_stack_num))));
            if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
            list$1sTypephp_operator_load_element(method_block_type_213->mParamTypes,0)->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_214);
            current_stack_frame_struct_216=info->current_stack_frame_struct;
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_214);
            info->num_method_block++;
            if(string_operator_not_equals(method_block_type_213->mClass->mName,"lambda")) {
                err_msg(info,"This function does not have method block(%s)",fun_name_110);
                _Bool __result130__ = (_Bool)0;
                if(current_stack_frame_node_209) { current_stack_frame_node_209 = come_decrement_ref_count(current_stack_frame_node_209, ((struct sNode*)current_stack_frame_node_209)->finalize, ((struct sNode*)current_stack_frame_node_209)->_protocol_obj, 0, 0); } 
                if(come_value_210) { come_call_finalizer(CVALUE_finalize,come_value_210, (void*)0, (void*)0, 0, 0, 0); }
                if(method_block2_211) { come_call_finalizer(buffer_finalize,method_block2_211, (void*)0, (void*)0, 0, 0, 0); }
                if(method_block_type_213) { come_call_finalizer(sType_finalize,method_block_type_213, (void*)0, (void*)0, 0, 0, 0); }
                if(class_name_214) { class_name_214 = come_decrement_ref_count(class_name_214, (void*)0, (void*)0, 0, 0); }
                if(generics_fun_name_145) { generics_fun_name_145 = come_decrement_ref_count(generics_fun_name_145, (void*)0, (void*)0, 0, 0); }
                if(result_type_149) { come_call_finalizer(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type2_150) { come_call_finalizer(sType_finalize,result_type2_150, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_151) { come_call_finalizer(list$1sTypephp_finalize,param_types_151, (void*)0, (void*)0, 0, 0, 0); }
                if(come_params_159) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_159, (void*)0, (void*)0, 0, 0, 0); }
                if(label_params_165) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_165, (void*)0, (void*)0, 0, 0, 0); }
                return __result130__;
            }
            result_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(method_block_type_213->mResultType->v1))));
            if(right_value153) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0); }
            result_type_217->mStatic=(_Bool)0;
            param_types_218=method_block_type_213->mParamTypes;
            param_names_219=method_block_type_213->mParamNames;
            char all_alhabet_sname_220[4096];
            memset(&all_alhabet_sname_220, 0, sizeof(all_alhabet_sname_220)); /* aaa */
            {
                p_221=info->sname;
                p2_222=all_alhabet_sname_220;
                while(*p_221) {
                    if(xisalnum(*p_221)) {
                        *p2_222++=*p_221++;
                    }
                    else {
                        p_221++;
                    }
                }
                *p2_222=0;
            }
            buffer_append_str(method_block2_211,((char*)(right_value155=xsprintf("%s method_block%d_%s(",((char*)(right_value154=make_type_name_string(result_type_217,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,all_alhabet_sname_220))));
            if(right_value154) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0); }
            if(right_value155) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0); }
            i_223=0;
            for(
            it_224=list$1sTypephp_begin((param_types_218));
            !list$1sTypephp_end((param_types_218));
            it_224=list$1sTypephp_next((param_types_218))
            ){
                param_type_225=it_224;
                if(i_223==0) {
                    param_name_226=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("parent"))));
                    if(right_value156) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0); }
                    buffer_append_str(method_block2_211,((char*)(right_value158=xsprintf("%s",((char*)(right_value157=make_define_var(param_type_225,param_name_226,info,(_Bool)0)))))));
                    if(right_value157) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0); }
                    if(right_value158) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0); }
                    if(param_name_226) { param_name_226 = come_decrement_ref_count(param_name_226, (void*)0, (void*)0, 0, 0); }
                }
                else if(i_223==1) {
                    param_name_227=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("it"))));
                    if(right_value159) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0); }
                    buffer_append_str(method_block2_211,((char*)(right_value161=xsprintf("%s",((char*)(right_value160=make_define_var(param_type_225,param_name_227,info,(_Bool)0)))))));
                    if(right_value160) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0); }
                    if(right_value161) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0); }
                    if(param_name_227) { param_name_227 = come_decrement_ref_count(param_name_227, (void*)0, (void*)0, 0, 0); }
                }
                else {
                    param_name_228=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("it%d",i_223))));
                    if(right_value162) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0); }
                    buffer_append_str(method_block2_211,((char*)(right_value164=xsprintf("%s",((char*)(right_value163=make_define_var(param_type_225,param_name_228,info,(_Bool)0)))))));
                    if(right_value163) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0); }
                    if(right_value164) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0); }
                    if(param_name_228) { param_name_228 = come_decrement_ref_count(param_name_228, (void*)0, (void*)0, 0, 0); }
                }
                if(i_223!=list$1sTypephp_length(param_types_218)-1) {
                    buffer_append_str(method_block2_211,",");
                }
                i_223++;
            }
            buffer_append_str(method_block2_211,")\n");
            buffer_append_str(method_block2_211,((char*)(right_value165=buffer_to_string(method_block_113))));
            if(right_value165) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0); }
            source3_229=(struct buffer*)come_increment_ref_count(info->source);
            p_230=info->p;
            head_231=info->head;
            sline_232=info->sline;
            __dec_obj66=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_211);
            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0); }
            info->p=info->source->buf;
            info->head=info->source->buf;
            info->sline=method_block_sline_114;
            node_233=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=parse_function(info))));
            if(right_value166) { right_value166 = come_decrement_ref_count(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0); } 
            if(!node_233->compile(node_233->_protocol_obj,info)) {
                _Bool __result131__ = (_Bool)0;
                if(current_stack_frame_node_209) { current_stack_frame_node_209 = come_decrement_ref_count(current_stack_frame_node_209, ((struct sNode*)current_stack_frame_node_209)->finalize, ((struct sNode*)current_stack_frame_node_209)->_protocol_obj, 0, 0); } 
                if(come_value_210) { come_call_finalizer(CVALUE_finalize,come_value_210, (void*)0, (void*)0, 0, 0, 0); }
                if(method_block2_211) { come_call_finalizer(buffer_finalize,method_block2_211, (void*)0, (void*)0, 0, 0, 0); }
                if(method_block_type_213) { come_call_finalizer(sType_finalize,method_block_type_213, (void*)0, (void*)0, 0, 0, 0); }
                if(class_name_214) { class_name_214 = come_decrement_ref_count(class_name_214, (void*)0, (void*)0, 0, 0); }
                if(result_type_217) { come_call_finalizer(sType_finalize,result_type_217, (void*)0, (void*)0, 0, 0, 0); }
                if(source3_229) { come_call_finalizer(buffer_finalize,source3_229, (void*)0, (void*)0, 0, 0, 0); }
                if(node_233) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0); } 
                if(generics_fun_name_145) { generics_fun_name_145 = come_decrement_ref_count(generics_fun_name_145, (void*)0, (void*)0, 0, 0); }
                if(result_type_149) { come_call_finalizer(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type2_150) { come_call_finalizer(sType_finalize,result_type2_150, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_151) { come_call_finalizer(list$1sTypephp_finalize,param_types_151, (void*)0, (void*)0, 0, 0, 0); }
                if(come_params_159) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_159, (void*)0, (void*)0, 0, 0, 0); }
                if(label_params_165) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_165, (void*)0, (void*)0, 0, 0, 0); }
                return __result131__;
            }
            method_block_name_234=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("method_block%d_%s",info->num_method_block,all_alhabet_sname_220))));
            if(right_value167) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0); }
            come_value2_235=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
            if(right_value168) { come_call_finalizer(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0); }
            fun2_236=map$2charphsFunphp_at(info->funcs,method_block_name_234,((void*)0));
            if(fun2_236==((void*)0)) {
                err_msg(info,"method block function not found(%s)",method_block_name_234);
                _Bool __result132__ = (_Bool)0;
                if(current_stack_frame_node_209) { current_stack_frame_node_209 = come_decrement_ref_count(current_stack_frame_node_209, ((struct sNode*)current_stack_frame_node_209)->finalize, ((struct sNode*)current_stack_frame_node_209)->_protocol_obj, 0, 0); } 
                if(come_value_210) { come_call_finalizer(CVALUE_finalize,come_value_210, (void*)0, (void*)0, 0, 0, 0); }
                if(method_block2_211) { come_call_finalizer(buffer_finalize,method_block2_211, (void*)0, (void*)0, 0, 0, 0); }
                if(method_block_type_213) { come_call_finalizer(sType_finalize,method_block_type_213, (void*)0, (void*)0, 0, 0, 0); }
                if(class_name_214) { class_name_214 = come_decrement_ref_count(class_name_214, (void*)0, (void*)0, 0, 0); }
                if(result_type_217) { come_call_finalizer(sType_finalize,result_type_217, (void*)0, (void*)0, 0, 0, 0); }
                if(source3_229) { come_call_finalizer(buffer_finalize,source3_229, (void*)0, (void*)0, 0, 0, 0); }
                if(node_233) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0); } 
                if(method_block_name_234) { method_block_name_234 = come_decrement_ref_count(method_block_name_234, (void*)0, (void*)0, 0, 0); }
                if(come_value2_235) { come_call_finalizer(CVALUE_finalize,come_value2_235, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_145) { generics_fun_name_145 = come_decrement_ref_count(generics_fun_name_145, (void*)0, (void*)0, 0, 0); }
                if(result_type_149) { come_call_finalizer(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type2_150) { come_call_finalizer(sType_finalize,result_type2_150, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_151) { come_call_finalizer(list$1sTypephp_finalize,param_types_151, (void*)0, (void*)0, 0, 0, 0); }
                if(come_params_159) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_159, (void*)0, (void*)0, 0, 0, 0); }
                if(label_params_165) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_165, (void*)0, (void*)0, 0, 0, 0); }
                return __result132__;
            }
            method_block_type2_237=fun2_236->mLambdaType;
            __dec_obj67=come_value2_235->c_value;
            come_value2_235->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s",method_block_name_234))));
            if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0); }
            if(right_value169) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0); }
            __dec_obj68=come_value2_235->type;
            come_value2_235->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_clone(method_block_type2_237))));
            if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0); }
            if(right_value170) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0); }
            come_value2_235->var=((void*)0);
            list$1CVALUEphp_push_back(come_params_159,(struct CVALUE*)come_increment_ref_count(come_value2_235));
            __dec_obj69=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_229);
            if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0); }
            info->p=p_230;
            info->head=head_231;
            info->sline=sline_232;
            info->current_stack_frame_struct=current_stack_frame_struct_216;
            if(current_stack_frame_node_209) { current_stack_frame_node_209 = come_decrement_ref_count(current_stack_frame_node_209, ((struct sNode*)current_stack_frame_node_209)->finalize, ((struct sNode*)current_stack_frame_node_209)->_protocol_obj, 0, 0); } 
            if(come_value_210) { come_call_finalizer(CVALUE_finalize,come_value_210, (void*)0, (void*)0, 0, 0, 0); }
            if(method_block2_211) { come_call_finalizer(buffer_finalize,method_block2_211, (void*)0, (void*)0, 0, 0, 0); }
            if(method_block_type_213) { come_call_finalizer(sType_finalize,method_block_type_213, (void*)0, (void*)0, 0, 0, 0); }
            if(class_name_214) { class_name_214 = come_decrement_ref_count(class_name_214, (void*)0, (void*)0, 0, 0); }
            if(result_type_217) { come_call_finalizer(sType_finalize,result_type_217, (void*)0, (void*)0, 0, 0, 0); }
            if(source3_229) { come_call_finalizer(buffer_finalize,source3_229, (void*)0, (void*)0, 0, 0, 0); }
            if(node_233) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0); } 
            if(method_block_name_234) { method_block_name_234 = come_decrement_ref_count(method_block_name_234, (void*)0, (void*)0, 0, 0); }
            if(come_value2_235) { come_call_finalizer(CVALUE_finalize,come_value2_235, (void*)0, (void*)0, 0, 0, 0); }
        }
        buf_238=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value171) { come_call_finalizer(buffer_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value172) { come_call_finalizer(buffer_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(buf_238,generics_fun_name_145);
        buffer_append_str(buf_238,"(");
        j_239=0;
        for(
        it_240=list$1CVALUEphp_begin((come_params_159));
        !list$1CVALUEphp_end((come_params_159));
        it_240=list$1CVALUEphp_next((come_params_159))
        ){
            buffer_append_str(buf_238,it_240->c_value);
            if(j_239!=list$1CVALUEphp_length(come_params_159)-1) {
                buffer_append_str(buf_238,",");
            }
            j_239++;
        }
        buffer_append_str(buf_238,")");
        come_value2_241=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value173) { come_call_finalizer(CVALUE_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj70=come_value2_241->c_value;
        come_value2_241->c_value=(char*)come_increment_ref_count(((char*)(right_value174=buffer_to_string(buf_238))));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0); }
        if(right_value174) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0); }
        if(result_type2_150->mHeap) {
            __dec_obj71=come_value2_241->c_value;
            come_value2_241->c_value=(char*)come_increment_ref_count(((char*)(right_value176=append_object_to_right_values(((char*)(right_value175=buffer_to_string(buf_238))),(struct sType*)come_increment_ref_count(result_type_149),info))));
            if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
            if(right_value175) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0); }
            if(right_value176) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0); }
        }
        __dec_obj72=come_value2_241->type;
        come_value2_241->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(result_type2_150))));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0); }
        if(right_value177) { come_call_finalizer(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0); }
        come_value2_241->type->mStatic=(_Bool)0;
        come_value2_241->var=((void*)0);
        add_come_last_code(info,"%s;\n",((char*)(right_value178=buffer_to_string(buf_238))));
        if(right_value178) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0); }
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_241));
        if(generics_fun_name_145) { generics_fun_name_145 = come_decrement_ref_count(generics_fun_name_145, (void*)0, (void*)0, 0, 0); }
        if(result_type_149) { come_call_finalizer(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type2_150) { come_call_finalizer(sType_finalize,result_type2_150, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_151) { come_call_finalizer(list$1sTypephp_finalize,param_types_151, (void*)0, (void*)0, 0, 0, 0); }
        if(come_params_159) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_159, (void*)0, (void*)0, 0, 0, 0); }
        if(label_params_165) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_165, (void*)0, (void*)0, 0, 0, 0); }
        if(buf_238) { come_call_finalizer(buffer_finalize,buf_238, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value2_241) { come_call_finalizer(CVALUE_finalize,come_value2_241, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result133__ = (_Bool)1;
    if(obj_value_115) { come_call_finalizer(CVALUE_finalize,obj_value_115, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_type_116) { come_call_finalizer(sType_finalize,obj_type_116, (void*)0, (void*)0, 0, 0, 0); }
    return __result133__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_120;
memset(&result_120, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct tuple2$2charphsTypeph* __result69__ = self->it->item;
            return __result69__;
        }
        memset(&result_120,0,sizeof(struct tuple2$2charphsTypeph*));
        struct tuple2$2charphsTypeph* __result70__ = result_120;
        return __result70__;
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
        _Bool __result71__ = self->it==((void*)0);
        return __result71__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_122;
memset(&result_122, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct tuple2$2charphsTypeph* __result72__ = self->it->item;
            return __result72__;
        }
        memset(&result_122,0,sizeof(struct tuple2$2charphsTypeph*));
        struct tuple2$2charphsTypeph* __result73__ = result_122;
        return __result73__;
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1CVALUEph* __result74__ = self;
            if(self) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result74__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_126;
struct list_item$1CVALUEph* prev_it_127;
memset(&it_126, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&prev_it_127, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
                it_126=self->head;
                while(it_126!=((void*)0)) {
                    if(1) {
                        if(it_126->item) { come_call_finalizer(CVALUE_finalize,it_126->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    prev_it_127=it_126;
                    it_126=it_126->next;
                    come_free_object(prev_it_127);
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* result_130;
memset(&result_130, 0, sizeof(struct tuple2$2charphsNodeph*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct tuple2$2charphsNodeph* __result75__ = self->it->item;
                return __result75__;
            }
            memset(&result_130,0,sizeof(struct tuple2$2charphsNodeph*));
            struct tuple2$2charphsNodeph* __result76__ = result_130;
            return __result76__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
            _Bool __result77__ = self->it==((void*)0);
            return __result77__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* result_132;
memset(&result_132, 0, sizeof(struct tuple2$2charphsNodeph*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct tuple2$2charphsNodeph* __result78__ = self->it->item;
                return __result78__;
            }
            memset(&result_132,0,sizeof(struct tuple2$2charphsNodeph*));
            struct tuple2$2charphsNodeph* __result79__ = result_132;
            return __result79__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_136;
memset(&default_value_136, 0, sizeof(struct sType*)); /* bbb */
                    memset(&default_value_136,0,sizeof(struct sType*));
                    struct sType* __result83__ = list$1sTypephp_item(self,index,default_value_136);
                    return __result83__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_137;
int i_138;
memset(&it_137, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&i_138, 0, sizeof(int)); /* ddd */
                        if(position<0) {
                            position+=self->len;
                        }
                        it_137=self->head;
                        i_138=0;
                        while(it_137!=((void*)0)) {
                            if(position==i_138) {
                                struct sType* __result81__ = it_137->item;
                                return __result81__;
                            }
                            it_137=it_137->next;
                            i_138++;
                        }
                        struct sType* __result82__ = default_value;
                        return __result82__;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
struct CVALUE* result_141;
memset(&result_141, 0, sizeof(struct CVALUE*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct CVALUE* __result84__ = self->it->item;
                return __result84__;
            }
            memset(&result_141,0,sizeof(struct CVALUE*));
            struct CVALUE* __result85__ = result_141;
            return __result85__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
            _Bool __result86__ = self->it==((void*)0);
            return __result86__;
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
struct CVALUE* result_143;
memset(&result_143, 0, sizeof(struct CVALUE*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct CVALUE* __result87__ = self->it->item;
                return __result87__;
            }
            memset(&result_143,0,sizeof(struct CVALUE*));
            struct CVALUE* __result88__ = result_143;
            return __result88__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
                int __result89__ = self->len;
                return __result89__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_146;
int it_147;
memset(&hash_146, 0, sizeof(int)); /* ddd */
memset(&it_147, 0, sizeof(int)); /* ddd */
            hash_146=string_get_hash_key(((char*)key))%self->size;
            it_147=hash_146;
            while((_Bool)1) {
                if(self->item_existance[it_147]) {
                    if(charp_equals(self->keys[it_147],key)) {
                        struct sFun* __result90__ = self->items[it_147];
                        return __result90__;
                    }
                    it_147++;
                    if(it_147>=self->size) {
                        it_147=0;
                    }
                    else if(it_147==hash_146) {
                        struct sFun* __result91__ = default_value;
                        return __result91__;
                    }
                }
                else {
                    struct sFun* __result92__ = default_value;
                    return __result92__;
                }
            }
            struct sFun* __result93__ = default_value;
            return __result93__;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_152;
memset(&result_152, 0, sizeof(struct sType*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct sType* __result95__ = self->it->item;
                return __result95__;
            }
            memset(&result_152,0,sizeof(struct sType*));
            struct sType* __result96__ = result_152;
            return __result96__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
            _Bool __result97__ = self->it==((void*)0);
            return __result97__;
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_154;
memset(&result_154, 0, sizeof(struct sType*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct sType* __result98__ = self->it->item;
                return __result98__;
            }
            memset(&result_154,0,sizeof(struct sType*));
            struct sType* __result99__ = result_154;
            return __result99__;
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value104;
struct list_item$1sTypeph* litem_155;
struct sType* __dec_obj45;
void* right_value105;
struct list_item$1sTypeph* litem_156;
struct sType* __dec_obj46;
void* right_value106;
struct list_item$1sTypeph* litem_157;
struct sType* __dec_obj47;
memset(&right_value104, 0, sizeof(void*));
memset(&litem_155, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value105, 0, sizeof(void*));
memset(&litem_156, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value106, 0, sizeof(void*));
memset(&litem_157, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                    if(self->len==0) {
                        litem_155=((struct list_item$1sTypeph*)(right_value104=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                        litem_155->prev=((void*)0);
                        litem_155->next=((void*)0);
                        __dec_obj45=litem_155->item;
                        litem_155->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
                        self->tail=litem_155;
                        self->head=litem_155;
                    }
                    else if(self->len==1) {
                        litem_156=((struct list_item$1sTypeph*)(right_value105=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                        litem_156->prev=self->head;
                        litem_156->next=((void*)0);
                        __dec_obj46=litem_156->item;
                        litem_156->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
                        self->tail=litem_156;
                        self->head->next=litem_156;
                    }
                    else {
                        litem_157=((struct list_item$1sTypeph*)(right_value106=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                        litem_157->prev=self->tail;
                        litem_157->next=((void*)0);
                        __dec_obj47=litem_157->item;
                        litem_157->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
                        self->tail->next=litem_157;
                        self->tail=litem_157;
                    }
                    self->len++;
                    if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct map$2charphCVALUEph* map$2charphCVALUEphp_initialize(struct map$2charphCVALUEph* self){
void* right_value112;
void* right_value113;
void* right_value114;
int i_160;
void* right_value115;
void* right_value116;
struct list$1charp* __dec_obj48;
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&i_160, 0, sizeof(int)); /* ddd */
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
            self->keys=((char**)(right_value112=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
            self->items=((struct CVALUE**)(right_value113=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(128)))));
            self->item_existance=((_Bool*)(right_value114=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
            for(
            i_160=0;
            i_160<128;
            i_160++
            ){
                self->item_existance[i_160]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj48=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value116=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value115=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
            if(right_value116) { come_call_finalizer(list$1charpp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
            self->it=0;
            struct map$2charphCVALUEph* __result101__ = self;
            if(self) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result101__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                struct list$1charp* __result100__ = self;
                if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                return __result100__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_161;
struct list_item$1charp* prev_it_162;
memset(&it_161, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_162, 0, sizeof(struct list_item$1charp*)); /* ddd */
                    it_161=self->head;
                    while(it_161!=((void*)0)) {
                        if(0) {
                            if(it_161->item) { it_161->item = come_decrement_ref_count(it_161->item, (void*)0, (void*)0, 0, 0); }
                        }
                        prev_it_162=it_161;
                        it_161=it_161->next;
                        come_free_object(prev_it_162);
                    }
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
int i_163;
int i_164;
memset(&i_163, 0, sizeof(int)); /* ddd */
memset(&i_164, 0, sizeof(int)); /* ddd */
                for(
                i_163=0;
                i_163<self->size;
                i_163++
                ){
                    if(self->item_existance[i_163]) {
                        if(1) {
                            if(self->items[i_163]) { come_call_finalizer(CVALUEp_finalize,self->items[i_163], (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->items);
                for(
                i_164=0;
                i_164<self->size;
                i_164++
                ){
                    if(self->item_existance[i_164]) {
                        if(1) {
                            if(self->keys[i_164]) { self->keys[i_164] = come_decrement_ref_count(self->keys[i_164], (void*)0, (void*)0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->keys);
                if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
}

static void CVALUEp_finalize(struct CVALUE* self){
                                if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                                    if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->type!=((void*)0)) {
                                    if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void map$2charphCVALUEphp_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
int hash_186;
int it_187;
_Bool same_key_exist_188;
char* it2_189;
memset(&hash_186, 0, sizeof(int)); /* ddd */
memset(&it_187, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_188, 0, sizeof(_Bool)); /* ddd */
memset(&it2_189, 0, sizeof(char*)); /* ddd */
                        if(self->len*2>=self->size) {
                            map$2charphCVALUEphp_rehash(self);
                        }
                        hash_186=string_get_hash_key(key)%self->size;
                        it_187=hash_186;
                        while((_Bool)1) {
                            if(self->item_existance[it_187]) {
                                if(charp_equals(self->keys[it_187],key)) {
                                    if(1) {
                                        list$1charpp_remove(self->key_list,self->keys[it_187]);
                                        if(self->keys[it_187]) { self->keys[it_187] = come_decrement_ref_count(self->keys[it_187], (void*)0, (void*)0, 0, 0); }
                                        self->keys[it_187]=(char*)come_increment_ref_count(key);
                                    }
                                    else {
                                        list$1charpp_remove(self->key_list,self->keys[it_187]);
                                        self->keys[it_187]=key;
                                    }
                                    if(1) {
                                        if(self->items[it_187]) { come_call_finalizer(CVALUEp_finalize,self->items[it_187], (void*)0, (void*)0, 0, 0, 0); }
                                        self->items[it_187]=(struct CVALUE*)come_increment_ref_count(item);
                                    }
                                    else {
                                        self->items[it_187]=item;
                                    }
                                    break;
                                }
                                it_187++;
                                if(it_187>=self->size) {
                                    it_187=0;
                                }
                                else if(it_187==hash_186) {
                                    fprintf(stderr,"unexpected error in map.insert\n");
                                    exit(2);
                                }
                            }
                            else {
                                self->item_existance[it_187]=(_Bool)1;
                                if(1) {
                                    self->keys[it_187]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    self->keys[it_187]=key;
                                }
                                if(1) {
                                    self->items[it_187]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_187]=item;
                                }
                                self->len++;
                                break;
                            }
                        }
                        same_key_exist_188=(_Bool)0;
                        for(
                        it2_189=list$1charpp_begin(self->key_list);
                        !list$1charpp_end(self->key_list);
                        it_187=list$1charpp_next(self->key_list)
                        ){
                            if(charp_equals(it2_189,key)) {
                                same_key_exist_188=(_Bool)1;
                            }
                        }
                        if(!same_key_exist_188) {
                            list$1charpp_push_back(self->key_list,key);
                        }
                        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphCVALUEphp_rehash(struct map$2charphCVALUEph* self){
int size_171;
void* right_value121;
char** keys_172;
void* right_value122;
struct CVALUE** items_173;
void* right_value123;
_Bool* item_existance_174;
int len_175;
char* it_177;
struct CVALUE* default_value_179;
struct CVALUE* it2_182;
int hash_183;
int n_184;
struct CVALUE* default_value_185;
memset(&size_171, 0, sizeof(int)); /* ddd */
memset(&right_value121, 0, sizeof(void*));
memset(&keys_172, 0, sizeof(char**)); /* ddd */
memset(&right_value122, 0, sizeof(void*));
memset(&items_173, 0, sizeof(struct CVALUE**)); /* ddd */
memset(&right_value123, 0, sizeof(void*));
memset(&item_existance_174, 0, sizeof(_Bool*)); /* ddd */
memset(&len_175, 0, sizeof(int)); /* ddd */
memset(&it_177, 0, sizeof(char*)); /* ddd */
memset(&default_value_179, 0, sizeof(struct CVALUE*)); /* bbb */
memset(&it2_182, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&hash_183, 0, sizeof(int)); /* ddd */
memset(&n_184, 0, sizeof(int)); /* ddd */
memset(&default_value_185, 0, sizeof(struct CVALUE*)); /* bbb */
                                size_171=self->size*3;
                                keys_172=((char**)(right_value121=(char**)come_calloc(1, sizeof(char*)*(1*(size_171)))));
                                items_173=((struct CVALUE**)(right_value122=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_171)))));
                                item_existance_174=((_Bool*)(right_value123=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_171)))));
                                len_175=0;
                                for(
                                it_177=map$2charphCVALUEphp_begin(self);
                                !map$2charphCVALUEphp_end(self);
                                it_177=map$2charphCVALUEphp_next(self)
                                ){
                                    it2_182=map$2charphCVALUEphp_at(self,it_177,default_value_179);
                                    hash_183=charp_get_hash_key(it_177)%size_171;
                                    n_184=hash_183;
                                    while((_Bool)1) {
                                        if(item_existance_174[n_184]) {
                                            n_184++;
                                            if(n_184>=size_171) {
                                                n_184=0;
                                            }
                                            else if(n_184==hash_183) {
                                                fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                                exit(2);
                                            }
                                        }
                                        else {
                                            item_existance_174[n_184]=(_Bool)1;
                                            keys_172[n_184]=it_177;
                                            items_173[n_184]=map$2charphCVALUEphp_at(self,it_177,default_value_185);
                                            len_175++;
                                            break;
                                        }
                                    }
                                }
                                come_free_object((char*)self->items);
                                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                                come_free_object((char*)self->keys);
                                self->keys=keys_172;
                                self->items=items_173;
                                self->item_existance=item_existance_174;
                                self->size=size_171;
                                self->len=len_175;
}

static char* map$2charphCVALUEphp_begin(struct map$2charphCVALUEph* self){
char* result_176;
memset(&result_176, 0, sizeof(char*)); /* bbb */
                                    self->key_list->it=self->key_list->head;
                                    if(self->key_list->it) {
                                        char* __result103__ = self->key_list->it->item;
                                        return __result103__;
                                    }
                                    memset(&result_176,0,sizeof(char*));
                                    char* __result104__ = result_176;
                                    return __result104__;
}

static _Bool map$2charphCVALUEphp_end(struct map$2charphCVALUEph* self){
                                    _Bool __result105__ = self->key_list->it==((void*)0);
                                    return __result105__;
}

static char* map$2charphCVALUEphp_next(struct map$2charphCVALUEph* self){
char* result_178;
memset(&result_178, 0, sizeof(char*)); /* bbb */
                                    self->key_list->it=self->key_list->it->next;
                                    if(self->key_list->it) {
                                        char* __result106__ = self->key_list->it->item;
                                        return __result106__;
                                    }
                                    memset(&result_178,0,sizeof(char*));
                                    char* __result107__ = result_178;
                                    return __result107__;
}

static struct CVALUE* map$2charphCVALUEphp_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
int hash_180;
int it_181;
memset(&hash_180, 0, sizeof(int)); /* ddd */
memset(&it_181, 0, sizeof(int)); /* ddd */
                                        hash_180=string_get_hash_key(((char*)key))%self->size;
                                        it_181=hash_180;
                                        while((_Bool)1) {
                                            if(self->item_existance[it_181]) {
                                                if(charp_equals(self->keys[it_181],key)) {
                                                    struct CVALUE* __result108__ = self->items[it_181];
                                                    return __result108__;
                                                }
                                                it_181++;
                                                if(it_181>=self->size) {
                                                    it_181=0;
                                                }
                                                else if(it_181==hash_180) {
                                                    struct CVALUE* __result109__ = default_value;
                                                    return __result109__;
                                                }
                                            }
                                            else {
                                                struct CVALUE* __result110__ = default_value;
                                                return __result110__;
                                            }
                                        }
                                        struct CVALUE* __result111__ = default_value;
                                        return __result111__;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
            int __result112__ = self->len;
            return __result112__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
            int __result113__ = self->len;
            return __result113__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index){
char* default_value_190;
memset(&default_value_190, 0, sizeof(char*)); /* bbb */
                    memset(&default_value_190,0,sizeof(char*));
                    char* __result116__ = list$1charphp_item(self,index,default_value_190);
                    return __result116__;
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_191;
int i_192;
memset(&it_191, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_192, 0, sizeof(int)); /* ddd */
                        if(position<0) {
                            position+=self->len;
                        }
                        it_191=self->head;
                        i_192=0;
                        while(it_191!=((void*)0)) {
                            if(position==i_192) {
                                char* __result114__ = it_191->item;
                                return __result114__;
                            }
                            it_191=it_191->next;
                            i_192++;
                        }
                        char* __result115__ = default_value;
                        return __result115__;
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
struct CVALUE* default_value_195;
memset(&default_value_195, 0, sizeof(struct CVALUE*)); /* bbb */
                    memset(&default_value_195,0,sizeof(struct CVALUE*));
                    struct CVALUE* __result117__ = map$2charphCVALUEphp_at(self,key,default_value_195);
                    return __result117__;
}

static int map$2charphCVALUEphp_length(struct map$2charphCVALUEph* self){
            int __result120__ = self->len;
            return __result120__;
}

static int list$1charphp_length(struct list$1charph* self){
                int __result121__ = self->len;
                return __result121__;
}

static void list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
struct list_item$1CVALUEph* it_205;
int i_206;
struct CVALUE* __dec_obj54;
memset(&it_205, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&i_206, 0, sizeof(int)); /* ddd */
                        if(position<0) {
                            position+=self->len;
                        }
                        it_205=self->head;
                        i_206=0;
                        while(it_205!=((void*)0)) {
                            if(position==i_206) {
                                __dec_obj54=it_205->item;
                                it_205->item=(struct CVALUE*)come_increment_ref_count(item);
                                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
                                break;
                            }
                            it_205=it_205->next;
                            i_206++;
                        }
                        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* right_value130;
struct CVALUE* result_207;
void* right_value131;
char* __dec_obj55;
void* right_value132;
struct sType* __dec_obj56;
memset(&right_value130, 0, sizeof(void*));
memset(&result_207, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct CVALUE* __result122__ = (void*)0;
                            return __result122__;
                        }
                        result_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
                        if(right_value130) { come_call_finalizer(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0); }
                        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                            __dec_obj55=result_207->c_value;
                            result_207->c_value=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(self->c_value))));
                            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
                            if(right_value131) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->type!=((void*)0)) {
                            __dec_obj56=result_207->type;
                            result_207->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(self->type))));
                            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
                            if(right_value132) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)) {
                            result_207->var=self->var;
                        }
                        struct CVALUE* __result123__ = result_207;
                        if(result_207) { come_call_finalizer(CVALUE_finalize,result_207, (void*)0, (void*)0, 0, 0, 1); }
                        return __result123__;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* right_value209;
struct sCurrentNode* result_259;
void* right_value210;
char* __dec_obj86;
memset(&right_value209, 0, sizeof(void*));
memset(&result_259, 0, sizeof(struct sCurrentNode*)); /* ddd */
memset(&right_value210, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sCurrentNode* __result138__ = (void*)0;
                return __result138__;
            }
            result_259=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value209=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1)))));
            if(right_value209) { come_call_finalizer(sCurrentNode_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_259->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj86=result_259->sname;
                result_259->sname=(char*)come_increment_ref_count(((char*)(right_value210=string_clone(self->sname))));
                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
                if(right_value210) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0); }
            }
            struct sCurrentNode* __result139__ = result_259;
            if(result_259) { come_call_finalizer(sCurrentNode_finalize,result_259, (void*)0, (void*)0, 0, 0, 1); }
            return __result139__;
}

static struct sType* sTypep_clone(struct sType* self){
void* right_value142;
struct sType* result_212;
void* right_value143;
struct tuple1$1sTypeph* __dec_obj58;
void* right_value144;
char* __dec_obj59;
void* right_value145;
struct list$1sTypeph* __dec_obj60;
void* right_value146;
struct list$1sNodeph* __dec_obj61;
void* right_value147;
struct list$1sTypeph* __dec_obj62;
void* right_value148;
struct list$1charph* __dec_obj63;
void* right_value149;
struct tuple1$1sTypeph* __dec_obj64;
void* right_value150;
char* __dec_obj65;
memset(&right_value142, 0, sizeof(void*));
memset(&result_212, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sType* __result127__ = (void*)0;
                    return __result127__;
                }
                result_212=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
                if(right_value142) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_212->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj58=result_212->mNoSolvedGenericsType;
                    result_212->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value143=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
                    if(right_value143) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj59=result_212->mGenericsName;
                    result_212->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value144=string_clone(self->mGenericsName))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
                    if(right_value144) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj60=result_212->mGenericsTypes;
                    result_212->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value145=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
                    if(right_value145) { come_call_finalizer(list$1sTypephp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj61=result_212->mArrayNum;
                    result_212->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value146=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
                    if(right_value146) { come_call_finalizer(list$1sNodephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_212->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj62=result_212->mParamTypes;
                    result_212->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value147=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0); }
                    if(right_value147) { come_call_finalizer(list$1sTypephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj63=result_212->mParamNames;
                    result_212->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value148=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
                    if(right_value148) { come_call_finalizer(list$1charphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj64=result_212->mResultType;
                    result_212->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value149=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
                    if(right_value149) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_212->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)) {
                    result_212->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_212->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_212->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_212->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_212->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_212->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_212->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_212->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_212->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_212->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_212->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_212->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_212->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_212->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_212->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_212->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_212->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_212->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_212->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)) {
                    result_212->mSizeNum=self->mSizeNum;
                }
                if(self!=((void*)0)) {
                    result_212->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_212->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj65=result_212->mOriginalTypeName;
                    result_212->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value150=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
                    if(right_value150) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_212->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_212->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_212->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_212->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_212->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_212->mInline=self->mInline;
                }
                struct sType* __result128__ = result_212;
                if(result_212) { come_call_finalizer(sType_finalize,result_212, (void*)0, (void*)0, 0, 0, 1); }
                return __result128__;
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

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
struct sClass* default_value_215;
memset(&default_value_215, 0, sizeof(struct sClass*)); /* bbb */
                memset(&default_value_215,0,sizeof(struct sClass*));
                struct sClass* __result129__ = map$2charphsClassphp_at(self,key,default_value_215);
                return __result129__;
}

static void list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* right_value181;
struct list_item$1tuple2$2charphsNodephph* litem_243;
struct tuple2$2charphsNodeph* __dec_obj73;
void* right_value182;
struct list_item$1tuple2$2charphsNodephph* litem_244;
struct tuple2$2charphsNodeph* __dec_obj74;
void* right_value183;
struct list_item$1tuple2$2charphsNodephph* litem_245;
struct tuple2$2charphsNodeph* __dec_obj75;
memset(&right_value181, 0, sizeof(void*));
memset(&litem_243, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value182, 0, sizeof(void*));
memset(&litem_244, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value183, 0, sizeof(void*));
memset(&litem_245, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
        if(self->len==0) {
            litem_243=((struct list_item$1tuple2$2charphsNodephph*)(right_value181=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
            litem_243->prev=((void*)0);
            litem_243->next=((void*)0);
            __dec_obj73=litem_243->item;
            litem_243->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
            self->tail=litem_243;
            self->head=litem_243;
        }
        else if(self->len==1) {
            litem_244=((struct list_item$1tuple2$2charphsNodephph*)(right_value182=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
            litem_244->prev=self->head;
            litem_244->next=((void*)0);
            __dec_obj74=litem_244->item;
            litem_244->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0); }
            self->tail=litem_244;
            self->head->next=litem_244;
        }
        else {
            litem_245=((struct list_item$1tuple2$2charphsNodephph*)(right_value183=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
            litem_245->prev=self->tail;
            litem_245->next=((void*)0);
            __dec_obj75=litem_245->item;
            litem_245->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
            self->tail->next=litem_245;
            self->tail=litem_245;
        }
        self->len++;
        if(item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
char* __dec_obj76;
struct sNode* __dec_obj77;
        __dec_obj76=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0); }
        __dec_obj77=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0); }
        struct tuple2$2charphsNodeph* __result134__ = self;
        if(self) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
        if(v2) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1); } 
        return __result134__;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* right_value200;
struct sMethodCallNode* result_258;
void* right_value201;
struct sNode* __dec_obj81;
void* right_value202;
char* __dec_obj82;
void* right_value203;
struct list$1tuple2$2charphsNodephph* __dec_obj83;
void* right_value204;
struct buffer* __dec_obj84;
void* right_value205;
char* __dec_obj85;
memset(&right_value200, 0, sizeof(void*));
memset(&result_258, 0, sizeof(struct sMethodCallNode*)); /* ddd */
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sMethodCallNode* __result135__ = (void*)0;
            return __result135__;
        }
        result_258=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value200=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1)))));
        if(right_value200) { come_call_finalizer(sMethodCallNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->obj!=((void*)0)) {
            __dec_obj81=result_258->obj;
            result_258->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value201=sNodep_clone(self->obj))));
            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0); }
            if(right_value201) { right_value201 = come_decrement_ref_count(right_value201, ((struct sNode*)right_value201)->finalize, ((struct sNode*)right_value201)->_protocol_obj, 1, 0); } 
        }
        if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
            __dec_obj82=result_258->fun_name;
            result_258->fun_name=(char*)come_increment_ref_count(((char*)(right_value202=string_clone(self->fun_name))));
            if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0); }
            if(right_value202) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->params!=((void*)0)) {
            __dec_obj83=result_258->params;
            result_258->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value203=list$1tuple2$2charphsNodephphp_clone(self->params))));
            if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0); }
            if(right_value203) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->method_block!=((void*)0)) {
            __dec_obj84=result_258->method_block;
            result_258->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value204=buffer_clone(self->method_block))));
            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0); }
            if(right_value204) { come_call_finalizer(buffer_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_258->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj85=result_258->sname;
            result_258->sname=(char*)come_increment_ref_count(((char*)(right_value205=string_clone(self->sname))));
            if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0); }
            if(right_value205) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_258->method_block_sline=self->method_block_sline;
        }
        struct sMethodCallNode* __result136__ = result_258;
        if(result_258) { come_call_finalizer(sMethodCallNode_finalize,result_258, (void*)0, (void*)0, 0, 0, 1); }
        return __result136__;
}

