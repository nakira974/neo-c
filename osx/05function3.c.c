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
struct sIntNode
{
    int value;
    int sline;
    char* sname;
};
struct sUIntNode
{
    unsigned int value;
    int sline;
    char* sname;
};
struct sLongNode
{
    long value;
    int sline;
    char* sname;
};
struct sULongNode
{
    unsigned long value;
    int sline;
    char* sname;
};
struct sFloatNode
{
    float value;
    int sline;
    char* sname;
};
struct sDoubleNode
{
    double value;
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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);

static void sIntNode_finalize(struct sIntNode* self);
_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
_Bool sIntNode_terminated();

int sIntNode_sline(struct sIntNode* self, struct sInfo* info);

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info);

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info);

static void sUIntNode_finalize(struct sUIntNode* self);
_Bool sUIntNode_terminated();

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info);

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info);

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info);

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long value, struct sInfo* info);

static void sLongNode_finalize(struct sLongNode* self);
_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info);

_Bool sLongNode_terminated();

int sLongNode_sline(struct sLongNode* self, struct sInfo* info);

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info);

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long value, struct sInfo* info);

static void sULongNode_finalize(struct sULongNode* self);
_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info);

_Bool sULongNode_terminated();

int sULongNode_sline(struct sULongNode* self, struct sInfo* info);

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info);

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info);

static void sFloatNode_finalize(struct sFloatNode* self);
_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info);

_Bool sFloatNode_terminated();

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info);

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info);

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info);

static void sDoubleNode_finalize(struct sDoubleNode* self);
_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info);

_Bool sDoubleNode_terminated();

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info);

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info);

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self);
static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self);
static struct sULongNode* sULongNode_clone(struct sULongNode* self);
static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self);
static struct sLongNode* sLongNode_clone(struct sLongNode* self);
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
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






struct sNode* get_number(_Bool minus, struct sInfo* info){
const int buf_size_15=128;
char* p2_17;
char c_18;
void* right_value39;
void* right_value40;
struct sNode* _inf_value1;
struct sFloatNode* _inf_obj_value1;
void* right_value43;
void* right_value44;
void* right_value45;
struct sNode* _inf_value2;
struct sDoubleNode* _inf_obj_value2;
void* right_value48;
void* right_value49;
void* right_value50;
struct sNode* _inf_value3;
struct sDoubleNode* _inf_obj_value3;
void* right_value53;
unsigned long lont_22;
int value2_23;
void* right_value54;
void* right_value55;
struct sNode* _inf_value4;
struct sULongNode* _inf_obj_value4;
void* right_value58;
unsigned long lont_25;
int value_26;
void* right_value59;
void* right_value60;
struct sNode* _inf_value5;
struct sULongNode* _inf_obj_value5;
void* right_value63;
unsigned int value_28;
void* right_value64;
void* right_value65;
struct sNode* _inf_value6;
struct sUIntNode* _inf_obj_value6;
void* right_value68;
unsigned int value_30;
void* right_value69;
void* right_value70;
struct sNode* _inf_value7;
struct sLongNode* _inf_obj_value7;
void* right_value73;
unsigned int value_32;
void* right_value74;
void* right_value75;
struct sNode* _inf_value8;
struct sULongNode* _inf_obj_value8;
void* right_value78;
unsigned int value_34;
void* right_value79;
void* right_value80;
struct sNode* _inf_value9;
struct sLongNode* _inf_obj_value9;
void* right_value83;
unsigned long lont_36;
int value_37;
void* right_value84;
void* right_value85;
struct sNode* _inf_value10;
struct sIntNode* _inf_obj_value10;
void* right_value88;
memset(&p2_17, 0, sizeof(char*)); /* ddd */
memset(&c_18, 0, sizeof(char)); /* ddd */
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&lont_22, 0, sizeof(unsigned long)); /* bbb */
memset(&value2_23, 0, sizeof(int)); /* ddd */
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&lont_25, 0, sizeof(unsigned long)); /* bbb */
memset(&value_26, 0, sizeof(int)); /* ddd */
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&value_28, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&value_30, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&value_32, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&value_34, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&lont_36, 0, sizeof(unsigned long)); /* bbb */
memset(&value_37, 0, sizeof(int)); /* ddd */
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
    char buf_16[128+1];
    memset(&buf_16, 0, sizeof(buf_16)); /* aaa */
    p2_17=buf_16;
    if(minus) {
        *p2_17=45;
        p2_17++;
    }
    if(xisdigit(*info->p)) {
        while(xisdigit(*info->p)||*info->p==95) {
            if(*info->p==95) {
                info->p++;
            }
            else {
                *p2_17++=*info->p;
                info->p++;
            }
            if(p2_17-buf_16>=buf_size_15) {
                err_msg(info,"overflow node of number");
                exit(1);
            }
        }
        *p2_17=0;
        skip_spaces_and_lf(info);
        c_18=*(info->p+1);
        if(*info->p==46&&xisdigit(c_18)) {
            *p2_17++=*info->p;
            if(p2_17-buf_16>=buf_size_15) {
                err_msg(info,"overflow node of number");
                exit(1);
            }
            info->p++;
            skip_spaces_and_lf(info);
            while(xisdigit(*info->p)||*info->p==95) {
                if(*info->p==95) {
                    info->p++;
                }
                else {
                    *p2_17++=*info->p;
                    info->p++;
                }
                if(p2_17-buf_16>=buf_size_15) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
            }
            if(*info->p==101) {
                *p2_17++=*info->p;
                info->p++;
                if(p2_17-buf_16>=buf_size_15) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
                if(*info->p==43) {
                    *p2_17++=*info->p;
                    info->p++;
                    if(p2_17-buf_16>=buf_size_15) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
                else if(*info->p==45) {
                    *p2_17++=*info->p;
                    info->p++;
                    if(p2_17-buf_16>=buf_size_15) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
                else {
                    err_msg(info,"invalid float value");
                    exit(2);
                }
                while(xisdigit(*info->p)||*info->p==95) {
                    if(*info->p==95) {
                        info->p++;
                    }
                    else {
                        *p2_17++=*info->p;
                        info->p++;
                    }
                    if(p2_17-buf_16>=buf_size_15) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
            }
            *p2_17=0;
            skip_spaces_and_lf(info);
            if(*info->p==102||*info->p==70) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value1=come_increment_ref_count(((struct sFloatNode*)(right_value40=sFloatNode_initialize((struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value39=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1))))),strtof(buf_16,((void*)0)),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=sFloatNode_finalize;
                _inf_value1->clone=sFloatNode_clone;
                _inf_value1->compile=sFloatNode_compile;
                _inf_value1->sline=sFloatNode_sline;
                _inf_value1->sname=sFloatNode_sname;
                _inf_value1->terminated=sFloatNode_terminated;
                struct sNode* __result39__ = ((struct sNode*)(right_value43=_inf_value1));
                if(right_value39) { come_call_finalizer(sFloatNode_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value40) { come_call_finalizer(sFloatNode_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result39__;
            }
            else if(*info->p==108||*info->p==76) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value2=come_increment_ref_count(((struct sDoubleNode*)(right_value45=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value44=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1))))),strtod(buf_16,((void*)0)),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=sDoubleNode_finalize;
                _inf_value2->clone=sDoubleNode_clone;
                _inf_value2->compile=sDoubleNode_compile;
                _inf_value2->sline=sDoubleNode_sline;
                _inf_value2->sname=sDoubleNode_sname;
                _inf_value2->terminated=sDoubleNode_terminated;
                struct sNode* __result42__ = ((struct sNode*)(right_value48=_inf_value2));
                if(right_value44) { come_call_finalizer(sDoubleNode_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value45) { come_call_finalizer(sDoubleNode_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result42__;
            }
            else {
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value3=come_increment_ref_count(((struct sDoubleNode*)(right_value50=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value49=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1))))),strtod(buf_16,((void*)0)),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=sDoubleNode_finalize;
                _inf_value3->clone=sDoubleNode_clone;
                _inf_value3->compile=sDoubleNode_compile;
                _inf_value3->sline=sDoubleNode_sline;
                _inf_value3->sname=sDoubleNode_sname;
                _inf_value3->terminated=sDoubleNode_terminated;
                struct sNode* __result45__ = ((struct sNode*)(right_value53=_inf_value3));
                if(right_value49) { come_call_finalizer(sDoubleNode_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value50) { come_call_finalizer(sDoubleNode_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result45__;
            }
        }
        else if(*info->p==117||*info->p==85) {
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==76||*info->p==108) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==76||*info->p==108) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value2_23=strtoull(buf_16,((void*)0),0);
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                    _inf_obj_value4=come_increment_ref_count(((struct sULongNode*)(right_value55=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value54=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),value2_23,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=sULongNode_finalize;
                    _inf_value4->clone=sULongNode_clone;
                    _inf_value4->compile=sULongNode_compile;
                    _inf_value4->sline=sULongNode_sline;
                    _inf_value4->sname=sULongNode_sname;
                    _inf_value4->terminated=sULongNode_terminated;
                    struct sNode* __result48__ = ((struct sNode*)(right_value58=_inf_value4));
                    if(right_value54) { come_call_finalizer(sULongNode_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value55) { come_call_finalizer(sULongNode_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
                    come_release_malloced_mem();
                    return __result48__;
                }
                else {
                    value_26=strtoull(buf_16,((void*)0),0);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                    _inf_obj_value5=come_increment_ref_count(((struct sULongNode*)(right_value60=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value59=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),value_26,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=sULongNode_finalize;
                    _inf_value5->clone=sULongNode_clone;
                    _inf_value5->compile=sULongNode_compile;
                    _inf_value5->sline=sULongNode_sline;
                    _inf_value5->sname=sULongNode_sname;
                    _inf_value5->terminated=sULongNode_terminated;
                    struct sNode* __result51__ = ((struct sNode*)(right_value63=_inf_value5));
                    if(right_value59) { come_call_finalizer(sULongNode_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value60) { come_call_finalizer(sULongNode_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
                    come_release_malloced_mem();
                    return __result51__;
                }
            }
            else {
                value_28=strtoul(buf_16,((void*)0),0);
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value6=come_increment_ref_count(((struct sUIntNode*)(right_value65=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value64=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1))))),value_28,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=sUIntNode_finalize;
                _inf_value6->clone=sUIntNode_clone;
                _inf_value6->compile=sUIntNode_compile;
                _inf_value6->sline=sUIntNode_sline;
                _inf_value6->sname=sUIntNode_sname;
                _inf_value6->terminated=sUIntNode_terminated;
                struct sNode* __result54__ = ((struct sNode*)(right_value68=_inf_value6));
                if(right_value64) { come_call_finalizer(sUIntNode_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value65) { come_call_finalizer(sUIntNode_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result54__;
            }
        }
        else if(*info->p==76||*info->p==108) {
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==76||*info->p==108) {
                info->p++;
                skip_spaces_and_lf(info);
                value_30=strtoull(buf_16,((void*)0),0);
                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value7=come_increment_ref_count(((struct sLongNode*)(right_value70=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value69=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1))))),value_30,info))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=sLongNode_finalize;
                _inf_value7->clone=sLongNode_clone;
                _inf_value7->compile=sLongNode_compile;
                _inf_value7->sline=sLongNode_sline;
                _inf_value7->sname=sLongNode_sname;
                _inf_value7->terminated=sLongNode_terminated;
                struct sNode* __result57__ = ((struct sNode*)(right_value73=_inf_value7));
                if(right_value69) { come_call_finalizer(sLongNode_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value70) { come_call_finalizer(sLongNode_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result57__;
            }
            else if(*info->p==85||*info->p==117) {
                info->p++;
                skip_spaces_and_lf(info);
                value_32=strtoull(buf_16,((void*)0),0);
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value8=come_increment_ref_count(((struct sULongNode*)(right_value75=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value74=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),value_32,info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=sULongNode_finalize;
                _inf_value8->clone=sULongNode_clone;
                _inf_value8->compile=sULongNode_compile;
                _inf_value8->sline=sULongNode_sline;
                _inf_value8->sname=sULongNode_sname;
                _inf_value8->terminated=sULongNode_terminated;
                struct sNode* __result60__ = ((struct sNode*)(right_value78=_inf_value8));
                if(right_value74) { come_call_finalizer(sULongNode_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value75) { come_call_finalizer(sULongNode_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result60__;
            }
            else {
                value_34=strtoull(buf_16,((void*)0),0);
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value9=come_increment_ref_count(((struct sLongNode*)(right_value80=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value79=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1))))),value_34,info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=sLongNode_finalize;
                _inf_value9->clone=sLongNode_clone;
                _inf_value9->compile=sLongNode_compile;
                _inf_value9->sline=sLongNode_sline;
                _inf_value9->sname=sLongNode_sname;
                _inf_value9->terminated=sLongNode_terminated;
                struct sNode* __result63__ = ((struct sNode*)(right_value83=_inf_value9));
                if(right_value79) { come_call_finalizer(sLongNode_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value80) { come_call_finalizer(sLongNode_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result63__;
            }
        }
        else {
            value_37=strtoll(buf_16,((void*)0),0);
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value10=come_increment_ref_count(((struct sIntNode*)(right_value85=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value84=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1))))),value_37,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=sIntNode_finalize;
            _inf_value10->clone=sIntNode_clone;
            _inf_value10->compile=sIntNode_compile;
            _inf_value10->sline=sIntNode_sline;
            _inf_value10->sname=sIntNode_sname;
            _inf_value10->terminated=sIntNode_terminated;
            struct sNode* __result66__ = ((struct sNode*)(right_value88=_inf_value10));
            if(right_value84) { come_call_finalizer(sIntNode_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value85) { come_call_finalizer(sIntNode_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result66__;
        }
    }
    else {
        err_msg(info,"require digits after + or -");
        exit(2);
    }
    struct sNode* __result67__ = (struct sNode*)((void*)0);
    come_release_malloced_mem();
    return __result67__;
come_release_malloced_mem();
}

struct sNode* get_oct_number(struct sInfo* info){
int buf_size_64;
char* p_66;
unsigned int value_67;
void* right_value164;
void* right_value165;
struct sNode* _inf_value26;
struct sULongNode* _inf_obj_value26;
void* right_value168;
unsigned int value_69;
void* right_value169;
void* right_value170;
struct sNode* _inf_value27;
struct sULongNode* _inf_obj_value27;
void* right_value173;
unsigned int value_71;
void* right_value174;
void* right_value175;
struct sNode* _inf_value28;
struct sUIntNode* _inf_obj_value28;
void* right_value178;
unsigned int value_73;
void* right_value179;
void* right_value180;
struct sNode* _inf_value29;
struct sLongNode* _inf_obj_value29;
void* right_value183;
unsigned int value_75;
void* right_value184;
void* right_value185;
struct sNode* _inf_value30;
struct sULongNode* _inf_obj_value30;
void* right_value188;
unsigned int value_77;
void* right_value189;
void* right_value190;
struct sNode* _inf_value31;
struct sLongNode* _inf_obj_value31;
void* right_value193;
unsigned int value_79;
void* right_value194;
void* right_value195;
struct sNode* _inf_value32;
struct sIntNode* _inf_obj_value32;
void* right_value198;
memset(&buf_size_64, 0, sizeof(int)); /* ddd */
memset(&p_66, 0, sizeof(char*)); /* ddd */
memset(&value_67, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&value_69, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&value_71, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&value_73, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&value_75, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&value_77, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&value_79, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
    buf_size_64=128;
    char buf_65[128+1];
    memset(&buf_65, 0, sizeof(buf_65)); /* aaa */
    p_66=buf_65;
    *p_66++=48;
    while((*info->p>=48&&*info->p<=55)||*info->p==95) {
        if(*info->p==95) {
            info->p++;
        }
        else {
            *p_66=*info->p;
            p_66++;
            info->p++;
        }
        if(p_66-buf_65>=buf_size_64-1) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_66=0;
    skip_spaces_and_lf(info);
    if(*info->p==117||*info->p==85) {
        info->p++;
        skip_spaces_and_lf(info);
        if(*info->p==76||*info->p==108) {
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==76||*info->p==108) {
                info->p++;
                skip_spaces_and_lf(info);
                value_67=strtoull(buf_65,((void*)0),0);
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value26=come_increment_ref_count(((struct sULongNode*)(right_value165=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value164=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),value_67,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=sULongNode_finalize;
                _inf_value26->clone=sULongNode_clone;
                _inf_value26->compile=sULongNode_compile;
                _inf_value26->sline=sULongNode_sline;
                _inf_value26->sname=sULongNode_sname;
                _inf_value26->terminated=sULongNode_terminated;
                struct sNode* __result116__ = ((struct sNode*)(right_value168=_inf_value26));
                if(right_value164) { come_call_finalizer(sULongNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value165) { come_call_finalizer(sULongNode_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result116__;
            }
            else {
                value_69=strtoull(buf_65,((void*)0),0);
                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value27=come_increment_ref_count(((struct sULongNode*)(right_value170=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value169=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),value_69,info))));
                _inf_value27->_protocol_obj=_inf_obj_value27;
                _inf_value27->finalize=sULongNode_finalize;
                _inf_value27->clone=sULongNode_clone;
                _inf_value27->compile=sULongNode_compile;
                _inf_value27->sline=sULongNode_sline;
                _inf_value27->sname=sULongNode_sname;
                _inf_value27->terminated=sULongNode_terminated;
                struct sNode* __result119__ = ((struct sNode*)(right_value173=_inf_value27));
                if(right_value169) { come_call_finalizer(sULongNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value170) { come_call_finalizer(sULongNode_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result119__;
            }
        }
        else {
            value_71=strtoul(buf_65,((void*)0),0);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value28=come_increment_ref_count(((struct sUIntNode*)(right_value175=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value174=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1))))),value_71,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=sUIntNode_finalize;
            _inf_value28->clone=sUIntNode_clone;
            _inf_value28->compile=sUIntNode_compile;
            _inf_value28->sline=sUIntNode_sline;
            _inf_value28->sname=sUIntNode_sname;
            _inf_value28->terminated=sUIntNode_terminated;
            struct sNode* __result122__ = ((struct sNode*)(right_value178=_inf_value28));
            if(right_value174) { come_call_finalizer(sUIntNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value175) { come_call_finalizer(sUIntNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result122__;
        }
    }
    else if(*info->p==76||*info->p==108) {
        info->p++;
        skip_spaces_and_lf(info);
        if(*info->p==76||*info->p==108) {
            info->p++;
            skip_spaces_and_lf(info);
            value_73=strtoull(buf_65,((void*)0),0);
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value29=come_increment_ref_count(((struct sLongNode*)(right_value180=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value179=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1))))),value_73,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=sLongNode_finalize;
            _inf_value29->clone=sLongNode_clone;
            _inf_value29->compile=sLongNode_compile;
            _inf_value29->sline=sLongNode_sline;
            _inf_value29->sname=sLongNode_sname;
            _inf_value29->terminated=sLongNode_terminated;
            struct sNode* __result125__ = ((struct sNode*)(right_value183=_inf_value29));
            if(right_value179) { come_call_finalizer(sLongNode_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value180) { come_call_finalizer(sLongNode_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result125__;
        }
        else if(*info->p==85||*info->p==117) {
            info->p++;
            skip_spaces_and_lf(info);
            value_75=strtoull(buf_65,((void*)0),0);
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value30=come_increment_ref_count(((struct sULongNode*)(right_value185=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value184=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),value_75,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=sULongNode_finalize;
            _inf_value30->clone=sULongNode_clone;
            _inf_value30->compile=sULongNode_compile;
            _inf_value30->sline=sULongNode_sline;
            _inf_value30->sname=sULongNode_sname;
            _inf_value30->terminated=sULongNode_terminated;
            struct sNode* __result128__ = ((struct sNode*)(right_value188=_inf_value30));
            if(right_value184) { come_call_finalizer(sULongNode_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value185) { come_call_finalizer(sULongNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result128__;
        }
        else {
            value_77=strtoull(buf_65,((void*)0),0);
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value31=come_increment_ref_count(((struct sLongNode*)(right_value190=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value189=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1))))),value_77,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=sLongNode_finalize;
            _inf_value31->clone=sLongNode_clone;
            _inf_value31->compile=sLongNode_compile;
            _inf_value31->sline=sLongNode_sline;
            _inf_value31->sname=sLongNode_sname;
            _inf_value31->terminated=sLongNode_terminated;
            struct sNode* __result131__ = ((struct sNode*)(right_value193=_inf_value31));
            if(right_value189) { come_call_finalizer(sLongNode_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value190) { come_call_finalizer(sLongNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result131__;
        }
    }
    else {
        value_79=strtoull(buf_65,((void*)0),0);
        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value32=come_increment_ref_count(((struct sIntNode*)(right_value195=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value194=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1))))),value_79,info))));
        _inf_value32->_protocol_obj=_inf_obj_value32;
        _inf_value32->finalize=sIntNode_finalize;
        _inf_value32->clone=sIntNode_clone;
        _inf_value32->compile=sIntNode_compile;
        _inf_value32->sline=sIntNode_sline;
        _inf_value32->sname=sIntNode_sname;
        _inf_value32->terminated=sIntNode_terminated;
        struct sNode* __result134__ = ((struct sNode*)(right_value198=_inf_value32));
        if(right_value194) { come_call_finalizer(sIntNode_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value195) { come_call_finalizer(sIntNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result134__;
    }
    struct sNode* __result135__ = (struct sNode*)((void*)0);
    come_release_malloced_mem();
    return __result135__;
come_release_malloced_mem();
}

struct sNode* get_hex_number(_Bool minus, struct sInfo* info){
int buf_size_40;
char* p_42;
unsigned int value_43;
void* right_value94;
void* right_value95;
struct sNode* _inf_value12;
struct sULongNode* _inf_obj_value12;
void* right_value98;
void* right_value99;
void* right_value100;
struct sNode* _inf_value13;
struct sULongNode* _inf_obj_value13;
void* right_value103;
unsigned int value_46;
void* right_value104;
void* right_value105;
struct sNode* _inf_value14;
struct sULongNode* _inf_obj_value14;
void* right_value108;
void* right_value109;
void* right_value110;
struct sNode* _inf_value15;
struct sULongNode* _inf_obj_value15;
void* right_value113;
unsigned int value_49;
void* right_value114;
void* right_value115;
struct sNode* _inf_value16;
struct sUIntNode* _inf_obj_value16;
void* right_value118;
void* right_value119;
void* right_value120;
struct sNode* _inf_value17;
struct sUIntNode* _inf_obj_value17;
void* right_value123;
unsigned int value_52;
void* right_value124;
void* right_value125;
struct sNode* _inf_value18;
struct sLongNode* _inf_obj_value18;
void* right_value128;
void* right_value129;
void* right_value130;
struct sNode* _inf_value19;
struct sLongNode* _inf_obj_value19;
void* right_value133;
unsigned int value_55;
void* right_value134;
void* right_value135;
struct sNode* _inf_value20;
struct sULongNode* _inf_obj_value20;
void* right_value138;
void* right_value139;
void* right_value140;
struct sNode* _inf_value21;
struct sULongNode* _inf_obj_value21;
void* right_value143;
unsigned int value_58;
void* right_value144;
void* right_value145;
struct sNode* _inf_value22;
struct sLongNode* _inf_obj_value22;
void* right_value148;
void* right_value149;
void* right_value150;
struct sNode* _inf_value23;
struct sLongNode* _inf_obj_value23;
void* right_value153;
unsigned int value_61;
void* right_value154;
void* right_value155;
struct sNode* _inf_value24;
struct sIntNode* _inf_obj_value24;
void* right_value158;
void* right_value159;
void* right_value160;
struct sNode* _inf_value25;
struct sIntNode* _inf_obj_value25;
void* right_value163;
memset(&buf_size_40, 0, sizeof(int)); /* ddd */
memset(&p_42, 0, sizeof(char*)); /* ddd */
memset(&value_43, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&value_46, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&value_49, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&value_52, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&value_55, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&value_58, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&value_61, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
    buf_size_40=128;
    char buf_41[128+1];
    memset(&buf_41, 0, sizeof(buf_41)); /* aaa */
    p_42=buf_41;
    *p_42++=48;
    *p_42++=120;
    while((*info->p>=48&&*info->p<=57)||(*info->p>=97&&*info->p<=102)||(*info->p>=65&&*info->p<=70)||*info->p==95) {
        if(*info->p==95) {
            info->p++;
        }
        else {
            *p_42++=*info->p;
            info->p++;
        }
        if(p_42-buf_41>=buf_size_40-1) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_42=0;
    skip_spaces_and_lf(info);
    if(*info->p==117||*info->p==85) {
        info->p++;
        skip_spaces_and_lf(info);
        if(*info->p==76||*info->p==108) {
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==76||*info->p==108) {
                info->p++;
                skip_spaces_and_lf(info);
                value_43=strtoull(buf_41,((void*)0),0);
                if(minus) {
                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                    _inf_obj_value12=come_increment_ref_count(((struct sULongNode*)(right_value95=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value94=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),-value_43,info))));
                    _inf_value12->_protocol_obj=_inf_obj_value12;
                    _inf_value12->finalize=sULongNode_finalize;
                    _inf_value12->clone=sULongNode_clone;
                    _inf_value12->compile=sULongNode_compile;
                    _inf_value12->sline=sULongNode_sline;
                    _inf_value12->sname=sULongNode_sname;
                    _inf_value12->terminated=sULongNode_terminated;
                    struct sNode* __result73__ = ((struct sNode*)(right_value98=_inf_value12));
                    if(right_value94) { come_call_finalizer(sULongNode_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value95) { come_call_finalizer(sULongNode_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0); }
                    come_release_malloced_mem();
                    return __result73__;
                }
                else {
                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                    _inf_obj_value13=come_increment_ref_count(((struct sULongNode*)(right_value100=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value99=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),value_43,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=sULongNode_finalize;
                    _inf_value13->clone=sULongNode_clone;
                    _inf_value13->compile=sULongNode_compile;
                    _inf_value13->sline=sULongNode_sline;
                    _inf_value13->sname=sULongNode_sname;
                    _inf_value13->terminated=sULongNode_terminated;
                    struct sNode* __result76__ = ((struct sNode*)(right_value103=_inf_value13));
                    if(right_value99) { come_call_finalizer(sULongNode_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value100) { come_call_finalizer(sULongNode_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0); }
                    come_release_malloced_mem();
                    return __result76__;
                }
            }
            else {
                value_46=strtoull(buf_41,((void*)0),0);
                if(minus) {
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                    _inf_obj_value14=come_increment_ref_count(((struct sULongNode*)(right_value105=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value104=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),-value_46,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=sULongNode_finalize;
                    _inf_value14->clone=sULongNode_clone;
                    _inf_value14->compile=sULongNode_compile;
                    _inf_value14->sline=sULongNode_sline;
                    _inf_value14->sname=sULongNode_sname;
                    _inf_value14->terminated=sULongNode_terminated;
                    struct sNode* __result79__ = ((struct sNode*)(right_value108=_inf_value14));
                    if(right_value104) { come_call_finalizer(sULongNode_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value105) { come_call_finalizer(sULongNode_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0); }
                    come_release_malloced_mem();
                    return __result79__;
                }
                else {
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                    _inf_obj_value15=come_increment_ref_count(((struct sULongNode*)(right_value110=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value109=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),value_46,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=sULongNode_finalize;
                    _inf_value15->clone=sULongNode_clone;
                    _inf_value15->compile=sULongNode_compile;
                    _inf_value15->sline=sULongNode_sline;
                    _inf_value15->sname=sULongNode_sname;
                    _inf_value15->terminated=sULongNode_terminated;
                    struct sNode* __result82__ = ((struct sNode*)(right_value113=_inf_value15));
                    if(right_value109) { come_call_finalizer(sULongNode_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value110) { come_call_finalizer(sULongNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0); }
                    come_release_malloced_mem();
                    return __result82__;
                }
            }
        }
        else {
            value_49=strtoull(buf_41,((void*)0),0);
            if(minus) {
                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value16=come_increment_ref_count(((struct sUIntNode*)(right_value115=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value114=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1))))),-value_49,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=sUIntNode_finalize;
                _inf_value16->clone=sUIntNode_clone;
                _inf_value16->compile=sUIntNode_compile;
                _inf_value16->sline=sUIntNode_sline;
                _inf_value16->sname=sUIntNode_sname;
                _inf_value16->terminated=sUIntNode_terminated;
                struct sNode* __result85__ = ((struct sNode*)(right_value118=_inf_value16));
                if(right_value114) { come_call_finalizer(sUIntNode_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value115) { come_call_finalizer(sUIntNode_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result85__;
            }
            else {
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value17=come_increment_ref_count(((struct sUIntNode*)(right_value120=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value119=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1))))),value_49,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=sUIntNode_finalize;
                _inf_value17->clone=sUIntNode_clone;
                _inf_value17->compile=sUIntNode_compile;
                _inf_value17->sline=sUIntNode_sline;
                _inf_value17->sname=sUIntNode_sname;
                _inf_value17->terminated=sUIntNode_terminated;
                struct sNode* __result88__ = ((struct sNode*)(right_value123=_inf_value17));
                if(right_value119) { come_call_finalizer(sUIntNode_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value120) { come_call_finalizer(sUIntNode_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result88__;
            }
        }
    }
    else if(*info->p==76||*info->p==108) {
        info->p++;
        skip_spaces_and_lf(info);
        if(*info->p==76||*info->p==108) {
            info->p++;
            skip_spaces_and_lf(info);
            value_52=strtoull(buf_41,((void*)0),0);
            if(minus) {
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value18=come_increment_ref_count(((struct sLongNode*)(right_value125=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value124=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1))))),-value_52,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=sLongNode_finalize;
                _inf_value18->clone=sLongNode_clone;
                _inf_value18->compile=sLongNode_compile;
                _inf_value18->sline=sLongNode_sline;
                _inf_value18->sname=sLongNode_sname;
                _inf_value18->terminated=sLongNode_terminated;
                struct sNode* __result91__ = ((struct sNode*)(right_value128=_inf_value18));
                if(right_value124) { come_call_finalizer(sLongNode_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value125) { come_call_finalizer(sLongNode_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result91__;
            }
            else {
                _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value19=come_increment_ref_count(((struct sLongNode*)(right_value130=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value129=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1))))),value_52,info))));
                _inf_value19->_protocol_obj=_inf_obj_value19;
                _inf_value19->finalize=sLongNode_finalize;
                _inf_value19->clone=sLongNode_clone;
                _inf_value19->compile=sLongNode_compile;
                _inf_value19->sline=sLongNode_sline;
                _inf_value19->sname=sLongNode_sname;
                _inf_value19->terminated=sLongNode_terminated;
                struct sNode* __result94__ = ((struct sNode*)(right_value133=_inf_value19));
                if(right_value129) { come_call_finalizer(sLongNode_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value130) { come_call_finalizer(sLongNode_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result94__;
            }
        }
        else if(*info->p==85||*info->p==117) {
            info->p++;
            skip_spaces_and_lf(info);
            value_55=strtoull(buf_41,((void*)0),0);
            if(minus) {
                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value20=come_increment_ref_count(((struct sULongNode*)(right_value135=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value134=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),-value_55,info))));
                _inf_value20->_protocol_obj=_inf_obj_value20;
                _inf_value20->finalize=sULongNode_finalize;
                _inf_value20->clone=sULongNode_clone;
                _inf_value20->compile=sULongNode_compile;
                _inf_value20->sline=sULongNode_sline;
                _inf_value20->sname=sULongNode_sname;
                _inf_value20->terminated=sULongNode_terminated;
                struct sNode* __result97__ = ((struct sNode*)(right_value138=_inf_value20));
                if(right_value134) { come_call_finalizer(sULongNode_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value135) { come_call_finalizer(sULongNode_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result97__;
            }
            else {
                _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value21=come_increment_ref_count(((struct sULongNode*)(right_value140=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value139=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1))))),value_55,info))));
                _inf_value21->_protocol_obj=_inf_obj_value21;
                _inf_value21->finalize=sULongNode_finalize;
                _inf_value21->clone=sULongNode_clone;
                _inf_value21->compile=sULongNode_compile;
                _inf_value21->sline=sULongNode_sline;
                _inf_value21->sname=sULongNode_sname;
                _inf_value21->terminated=sULongNode_terminated;
                struct sNode* __result100__ = ((struct sNode*)(right_value143=_inf_value21));
                if(right_value139) { come_call_finalizer(sULongNode_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value140) { come_call_finalizer(sULongNode_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result100__;
            }
        }
        else {
            value_58=strtoull(buf_41,((void*)0),0);
            if(minus) {
                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value22=come_increment_ref_count(((struct sLongNode*)(right_value145=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value144=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1))))),-value_58,info))));
                _inf_value22->_protocol_obj=_inf_obj_value22;
                _inf_value22->finalize=sLongNode_finalize;
                _inf_value22->clone=sLongNode_clone;
                _inf_value22->compile=sLongNode_compile;
                _inf_value22->sline=sLongNode_sline;
                _inf_value22->sname=sLongNode_sname;
                _inf_value22->terminated=sLongNode_terminated;
                struct sNode* __result103__ = ((struct sNode*)(right_value148=_inf_value22));
                if(right_value144) { come_call_finalizer(sLongNode_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value145) { come_call_finalizer(sLongNode_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result103__;
            }
            else {
                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value23=come_increment_ref_count(((struct sLongNode*)(right_value150=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value149=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1))))),value_58,info))));
                _inf_value23->_protocol_obj=_inf_obj_value23;
                _inf_value23->finalize=sLongNode_finalize;
                _inf_value23->clone=sLongNode_clone;
                _inf_value23->compile=sLongNode_compile;
                _inf_value23->sline=sLongNode_sline;
                _inf_value23->sname=sLongNode_sname;
                _inf_value23->terminated=sLongNode_terminated;
                struct sNode* __result106__ = ((struct sNode*)(right_value153=_inf_value23));
                if(right_value149) { come_call_finalizer(sLongNode_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value150) { come_call_finalizer(sLongNode_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0); }
                come_release_malloced_mem();
                return __result106__;
            }
        }
    }
    else {
        value_61=strtoll(buf_41,((void*)0),0);
        if(minus) {
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value24=come_increment_ref_count(((struct sIntNode*)(right_value155=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value154=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1))))),-value_61,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=sIntNode_finalize;
            _inf_value24->clone=sIntNode_clone;
            _inf_value24->compile=sIntNode_compile;
            _inf_value24->sline=sIntNode_sline;
            _inf_value24->sname=sIntNode_sname;
            _inf_value24->terminated=sIntNode_terminated;
            struct sNode* __result109__ = ((struct sNode*)(right_value158=_inf_value24));
            if(right_value154) { come_call_finalizer(sIntNode_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value155) { come_call_finalizer(sIntNode_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result109__;
        }
        else {
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value25=come_increment_ref_count(((struct sIntNode*)(right_value160=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value159=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1))))),value_61,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=sIntNode_finalize;
            _inf_value25->clone=sIntNode_clone;
            _inf_value25->compile=sIntNode_compile;
            _inf_value25->sline=sIntNode_sline;
            _inf_value25->sname=sIntNode_sname;
            _inf_value25->terminated=sIntNode_terminated;
            struct sNode* __result112__ = ((struct sNode*)(right_value163=_inf_value25));
            if(right_value159) { come_call_finalizer(sIntNode_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value160) { come_call_finalizer(sIntNode_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result112__;
        }
    }
    struct sNode* __result113__ = (struct sNode*)((void*)0);
    come_release_malloced_mem();
    return __result113__;
come_release_malloced_mem();
}

struct sNode* create_int_node(int value, struct sInfo* info){
void* right_value89;
void* right_value90;
struct sNode* _inf_value11;
struct sIntNode* _inf_obj_value11;
void* right_value93;
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value11=come_increment_ref_count(((struct sIntNode*)(right_value90=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value89=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1))))),value,info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=sIntNode_finalize;
    _inf_value11->clone=sIntNode_clone;
    _inf_value11->compile=sIntNode_compile;
    _inf_value11->sline=sIntNode_sline;
    _inf_value11->sname=sIntNode_sname;
    _inf_value11->terminated=sIntNode_terminated;
    struct sNode* __result70__ = ((struct sNode*)(right_value93=_inf_value11));
    if(right_value89) { come_call_finalizer(sIntNode_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value90) { come_call_finalizer(sIntNode_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0); }
    come_release_malloced_mem();
    return __result70__;
come_release_malloced_mem();
}

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
void* right_value0;
char* __dec_obj1;
memset(&right_value0, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj1=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(info->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    struct sIntNode* __result7__ = self;
    if(self) { come_call_finalizer(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result7__;
come_release_malloced_mem();
}

static void sIntNode_finalize(struct sIntNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
void* right_value1;
struct CVALUE* come_value_0;
void* right_value2;
char* __dec_obj2;
void* right_value3;
void* right_value4;
struct sType* __dec_obj3;
memset(&right_value1, 0, sizeof(void*));
memset(&come_value_0, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value2, 0, sizeof(void*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
    come_value_0=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value1=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value1) { come_call_finalizer(CVALUE_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj2=come_value_0->c_value;
    come_value_0->c_value=(char*)come_increment_ref_count(((char*)(right_value2=xsprintf("%d",self->value))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
    if(right_value2) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0); }
    __dec_obj3=come_value_0->type;
    come_value_0->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value4=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value3=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
    if(__dec_obj3) { come_call_finalizer(sType_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value3) { come_call_finalizer(sType_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value4) { come_call_finalizer(sType_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
    come_value_0->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_0));
    add_come_last_code(info,"%s;\n",come_value_0->c_value);
    _Bool __result8__ = (_Bool)1;
    if(come_value_0) { come_call_finalizer(CVALUE_finalize,come_value_0, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result8__;
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
struct list_item$1sTypeph* it_1;
struct list_item$1sTypeph* prev_it_2;
memset(&it_1, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&prev_it_2, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                        it_1=self->head;
                        while(it_1!=((void*)0)) {
                            if(1) {
                                if(it_1->item) { come_call_finalizer(sType_finalize,it_1->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            prev_it_2=it_1;
                            it_1=it_1->next;
                            come_free_object(prev_it_2);
                        }
                    come_release_malloced_mem();
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_3;
struct list_item$1sNodeph* prev_it_4;
memset(&it_3, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&prev_it_4, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                        it_3=self->head;
                        while(it_3!=((void*)0)) {
                            if(1) {
                                if(it_3->item) { it_3->item = come_decrement_ref_count(it_3->item, ((struct sNode*)it_3->item)->finalize, ((struct sNode*)it_3->item)->_protocol_obj, 0, 0); } 
                            }
                            prev_it_4=it_3;
                            it_3=it_3->next;
                            come_free_object(prev_it_4);
                        }
                    come_release_malloced_mem();
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_5;
struct list_item$1charph* prev_it_6;
memset(&it_5, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&prev_it_6, 0, sizeof(struct list_item$1charph*)); /* ddd */
                        it_5=self->head;
                        while(it_5!=((void*)0)) {
                            if(1) {
                                if(it_5->item) { it_5->item = come_decrement_ref_count(it_5->item, (void*)0, (void*)0, 0, 0); }
                            }
                            prev_it_6=it_5;
                            it_5=it_5->next;
                            come_free_object(prev_it_6);
                        }
                    come_release_malloced_mem();
}

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* right_value5;
struct list_item$1CVALUEph* litem_7;
struct CVALUE* __dec_obj4;
void* right_value6;
struct list_item$1CVALUEph* litem_8;
struct CVALUE* __dec_obj5;
void* right_value7;
struct list_item$1CVALUEph* litem_9;
struct CVALUE* __dec_obj6;
memset(&right_value5, 0, sizeof(void*));
memset(&litem_7, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value6, 0, sizeof(void*));
memset(&litem_8, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value7, 0, sizeof(void*));
memset(&litem_9, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
        if(self->len==0) {
            litem_7=((struct list_item$1CVALUEph*)(right_value5=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_7->prev=((void*)0);
            litem_7->next=((void*)0);
            __dec_obj4=litem_7->item;
            litem_7->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj4) { come_call_finalizer(CVALUE_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_7;
            self->head=litem_7;
        }
        else if(self->len==1) {
            litem_8=((struct list_item$1CVALUEph*)(right_value6=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_8->prev=self->head;
            litem_8->next=((void*)0);
            __dec_obj5=litem_8->item;
            litem_8->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj5) { come_call_finalizer(CVALUE_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_8;
            self->head->next=litem_8;
        }
        else {
            litem_9=((struct list_item$1CVALUEph*)(right_value7=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_9->prev=self->tail;
            litem_9->next=((void*)0);
            __dec_obj6=litem_9->item;
            litem_9->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj6) { come_call_finalizer(CVALUE_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0); }
            self->tail->next=litem_9;
            self->tail=litem_9;
        }
        self->len++;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
}

_Bool sIntNode_terminated(){
    _Bool __result9__ = (_Bool)0;
    come_release_malloced_mem();
    return __result9__;
come_release_malloced_mem();
}

int sIntNode_sline(struct sIntNode* self, struct sInfo* info){
    int __result10__ = self->sline;
    come_release_malloced_mem();
    return __result10__;
come_release_malloced_mem();
}

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info){
void* right_value8;
memset(&right_value8, 0, sizeof(void*));
    char* __result11__ = ((char*)(right_value8=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result11__;
come_release_malloced_mem();
}

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info){
void* right_value9;
char* __dec_obj7;
memset(&right_value9, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj7=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value9=__builtin_string(info->sname))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
    if(right_value9) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0); }
    struct sUIntNode* __result12__ = self;
    if(self) { come_call_finalizer(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result12__;
come_release_malloced_mem();
}

static void sUIntNode_finalize(struct sUIntNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
            come_release_malloced_mem();
}

_Bool sUIntNode_terminated(){
    _Bool __result13__ = (_Bool)0;
    come_release_malloced_mem();
    return __result13__;
come_release_malloced_mem();
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info){
void* right_value10;
struct CVALUE* come_value_10;
void* right_value11;
char* __dec_obj8;
void* right_value12;
void* right_value13;
struct sType* __dec_obj9;
memset(&right_value10, 0, sizeof(void*));
memset(&come_value_10, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value11, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
    come_value_10=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value10=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value10) { come_call_finalizer(CVALUE_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj8=come_value_10->c_value;
    come_value_10->c_value=(char*)come_increment_ref_count(((char*)(right_value11=xsprintf("%u",self->value))));
    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
    if(right_value11) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0); }
    __dec_obj9=come_value_10->type;
    come_value_10->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value12=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value12) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value13) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
    come_value_10->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_10));
    add_come_last_code(info,"%s;\n",come_value_10->c_value);
    _Bool __result14__ = (_Bool)1;
    if(come_value_10) { come_call_finalizer(CVALUE_finalize,come_value_10, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result14__;
come_release_malloced_mem();
}

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info){
    int __result15__ = self->sline;
    come_release_malloced_mem();
    return __result15__;
come_release_malloced_mem();
}

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info){
void* right_value14;
memset(&right_value14, 0, sizeof(void*));
    char* __result16__ = ((char*)(right_value14=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result16__;
come_release_malloced_mem();
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long value, struct sInfo* info){
void* right_value15;
char* __dec_obj10;
memset(&right_value15, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj10=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value15=__builtin_string(info->sname))));
    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0); }
    if(right_value15) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0); }
    struct sLongNode* __result17__ = self;
    if(self) { come_call_finalizer(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result17__;
come_release_malloced_mem();
}

static void sLongNode_finalize(struct sLongNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
            come_release_malloced_mem();
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info){
void* right_value16;
struct CVALUE* come_value_11;
void* right_value17;
char* __dec_obj11;
void* right_value18;
void* right_value19;
struct sType* __dec_obj12;
memset(&right_value16, 0, sizeof(void*));
memset(&come_value_11, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
    come_value_11=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value16=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value16) { come_call_finalizer(CVALUE_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj11=come_value_11->c_value;
    come_value_11->c_value=(char*)come_increment_ref_count(((char*)(right_value17=xsprintf("%ld",self->value))));
    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0); }
    if(right_value17) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0); }
    __dec_obj12=come_value_11->type;
    come_value_11->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value19=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value18=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"long",info,(_Bool)0))));
    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value18) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value19) { come_call_finalizer(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0); }
    come_value_11->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_11));
    add_come_last_code(info,"%s;\n",come_value_11->c_value);
    _Bool __result18__ = (_Bool)1;
    if(come_value_11) { come_call_finalizer(CVALUE_finalize,come_value_11, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result18__;
come_release_malloced_mem();
}

_Bool sLongNode_terminated(){
    _Bool __result19__ = (_Bool)0;
    come_release_malloced_mem();
    return __result19__;
come_release_malloced_mem();
}

int sLongNode_sline(struct sLongNode* self, struct sInfo* info){
    int __result20__ = self->sline;
    come_release_malloced_mem();
    return __result20__;
come_release_malloced_mem();
}

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info){
void* right_value20;
memset(&right_value20, 0, sizeof(void*));
    char* __result21__ = ((char*)(right_value20=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result21__;
come_release_malloced_mem();
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long value, struct sInfo* info){
void* right_value21;
char* __dec_obj13;
memset(&right_value21, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj13=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value21=__builtin_string(info->sname))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
    if(right_value21) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0); }
    struct sULongNode* __result22__ = self;
    if(self) { come_call_finalizer(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result22__;
come_release_malloced_mem();
}

static void sULongNode_finalize(struct sULongNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
            come_release_malloced_mem();
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info){
void* right_value22;
struct CVALUE* come_value_12;
void* right_value23;
char* __dec_obj14;
void* right_value24;
void* right_value25;
struct sType* __dec_obj15;
memset(&right_value22, 0, sizeof(void*));
memset(&come_value_12, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
    come_value_12=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value22=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value22) { come_call_finalizer(CVALUE_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj14=come_value_12->c_value;
    come_value_12->c_value=(char*)come_increment_ref_count(((char*)(right_value23=xsprintf("%lu",self->value))));
    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
    if(right_value23) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0); }
    __dec_obj15=come_value_12->type;
    come_value_12->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value24=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"long",info,(_Bool)0))));
    if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value24) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value25) { come_call_finalizer(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0); }
    come_value_12->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_12));
    add_come_last_code(info,"%s;\n",come_value_12->c_value);
    _Bool __result23__ = (_Bool)1;
    if(come_value_12) { come_call_finalizer(CVALUE_finalize,come_value_12, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result23__;
come_release_malloced_mem();
}

_Bool sULongNode_terminated(){
    _Bool __result24__ = (_Bool)0;
    come_release_malloced_mem();
    return __result24__;
come_release_malloced_mem();
}

int sULongNode_sline(struct sULongNode* self, struct sInfo* info){
    int __result25__ = self->sline;
    come_release_malloced_mem();
    return __result25__;
come_release_malloced_mem();
}

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info){
void* right_value26;
memset(&right_value26, 0, sizeof(void*));
    char* __result26__ = ((char*)(right_value26=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result26__;
come_release_malloced_mem();
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info){
void* right_value27;
char* __dec_obj16;
memset(&right_value27, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj16=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value27=__builtin_string(info->sname))));
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
    if(right_value27) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0); }
    struct sFloatNode* __result27__ = self;
    if(self) { come_call_finalizer(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result27__;
come_release_malloced_mem();
}

static void sFloatNode_finalize(struct sFloatNode* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                    }
                come_release_malloced_mem();
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info){
void* right_value28;
struct CVALUE* come_value_13;
void* right_value29;
char* __dec_obj17;
void* right_value30;
void* right_value31;
struct sType* __dec_obj18;
memset(&right_value28, 0, sizeof(void*));
memset(&come_value_13, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
    come_value_13=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value28=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value28) { come_call_finalizer(CVALUE_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj17=come_value_13->c_value;
    come_value_13->c_value=(char*)come_increment_ref_count(((char*)(right_value29=xsprintf("%f",self->value))));
    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
    if(right_value29) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0); }
    __dec_obj18=come_value_13->type;
    come_value_13->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value30=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"float",info,(_Bool)0))));
    if(__dec_obj18) { come_call_finalizer(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value30) { come_call_finalizer(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value31) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0); }
    come_value_13->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_13));
    add_come_last_code(info,"%s;\n",come_value_13->c_value);
    _Bool __result28__ = (_Bool)1;
    if(come_value_13) { come_call_finalizer(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result28__;
come_release_malloced_mem();
}

_Bool sFloatNode_terminated(){
    _Bool __result29__ = (_Bool)0;
    come_release_malloced_mem();
    return __result29__;
come_release_malloced_mem();
}

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info){
    int __result30__ = self->sline;
    come_release_malloced_mem();
    return __result30__;
come_release_malloced_mem();
}

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info){
void* right_value32;
memset(&right_value32, 0, sizeof(void*));
    char* __result31__ = ((char*)(right_value32=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result31__;
come_release_malloced_mem();
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info){
void* right_value33;
char* __dec_obj19;
memset(&right_value33, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj19=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value33=__builtin_string(info->sname))));
    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
    if(right_value33) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0); }
    struct sDoubleNode* __result32__ = self;
    if(self) { come_call_finalizer(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result32__;
come_release_malloced_mem();
}

static void sDoubleNode_finalize(struct sDoubleNode* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                    }
                come_release_malloced_mem();
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info){
void* right_value34;
struct CVALUE* come_value_14;
void* right_value35;
char* __dec_obj20;
void* right_value36;
void* right_value37;
struct sType* __dec_obj21;
memset(&right_value34, 0, sizeof(void*));
memset(&come_value_14, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
    come_value_14=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value34=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value34) { come_call_finalizer(CVALUE_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj20=come_value_14->c_value;
    come_value_14->c_value=(char*)come_increment_ref_count(((char*)(right_value35=xsprintf("%lf",self->value))));
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
    if(right_value35) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0); }
    __dec_obj21=come_value_14->type;
    come_value_14->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value36=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"double",info,(_Bool)0))));
    if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value36) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value37) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0); }
    come_value_14->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_14));
    add_come_last_code(info,"%s;\n",come_value_14->c_value);
    _Bool __result33__ = (_Bool)1;
    if(come_value_14) { come_call_finalizer(CVALUE_finalize,come_value_14, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result33__;
come_release_malloced_mem();
}

_Bool sDoubleNode_terminated(){
    _Bool __result34__ = (_Bool)0;
    come_release_malloced_mem();
    return __result34__;
come_release_malloced_mem();
}

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info){
    int __result35__ = self->sline;
    come_release_malloced_mem();
    return __result35__;
come_release_malloced_mem();
}

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info){
void* right_value38;
memset(&right_value38, 0, sizeof(void*));
    char* __result36__ = ((char*)(right_value38=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result36__;
come_release_malloced_mem();
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self){
void* right_value41;
struct sFloatNode* result_19;
void* right_value42;
char* __dec_obj22;
memset(&right_value41, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct sFloatNode*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sFloatNode* __result37__ = (void*)0;
                        come_release_malloced_mem();
                        return __result37__;
                    }
                    result_19=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value41=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1)))));
                    if(right_value41) { come_call_finalizer(sFloatNode_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)) {
                        result_19->value=self->value;
                    }
                    if(self!=((void*)0)) {
                        result_19->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj22=result_19->sname;
                        result_19->sname=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(self->sname))));
                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
                        if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sFloatNode* __result38__ = result_19;
                    if(result_19) { come_call_finalizer(sFloatNode_finalize,result_19, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result38__;
                come_release_malloced_mem();
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self){
void* right_value51;
struct sDoubleNode* result_21;
void* right_value52;
char* __dec_obj24;
memset(&right_value51, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct sDoubleNode*)); /* ddd */
memset(&right_value52, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sDoubleNode* __result43__ = (void*)0;
                        come_release_malloced_mem();
                        return __result43__;
                    }
                    result_21=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value51=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1)))));
                    if(right_value51) { come_call_finalizer(sDoubleNode_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)) {
                        result_21->value=self->value;
                    }
                    if(self!=((void*)0)) {
                        result_21->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj24=result_21->sname;
                        result_21->sname=(char*)come_increment_ref_count(((char*)(right_value52=string_clone(self->sname))));
                        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
                        if(right_value52) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sDoubleNode* __result44__ = result_21;
                    if(result_21) { come_call_finalizer(sDoubleNode_finalize,result_21, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result44__;
                come_release_malloced_mem();
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self){
void* right_value186;
struct sULongNode* result_76;
void* right_value187;
char* __dec_obj51;
memset(&right_value186, 0, sizeof(void*));
memset(&result_76, 0, sizeof(struct sULongNode*)); /* ddd */
memset(&right_value187, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sULongNode* __result126__ = (void*)0;
                    come_release_malloced_mem();
                    return __result126__;
                }
                result_76=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value186=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1)))));
                if(right_value186) { come_call_finalizer(sULongNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_76->value=self->value;
                }
                if(self!=((void*)0)) {
                    result_76->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj51=result_76->sname;
                    result_76->sname=(char*)come_increment_ref_count(((char*)(right_value187=string_clone(self->sname))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
                    if(right_value187) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0); }
                }
                struct sULongNode* __result127__ = result_76;
                if(result_76) { come_call_finalizer(sULongNode_finalize,result_76, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result127__;
            come_release_malloced_mem();
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self){
void* right_value176;
struct sUIntNode* result_72;
void* right_value177;
char* __dec_obj49;
memset(&right_value176, 0, sizeof(void*));
memset(&result_72, 0, sizeof(struct sUIntNode*)); /* ddd */
memset(&right_value177, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sUIntNode* __result120__ = (void*)0;
                    come_release_malloced_mem();
                    return __result120__;
                }
                result_72=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value176=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1)))));
                if(right_value176) { come_call_finalizer(sUIntNode_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_72->value=self->value;
                }
                if(self!=((void*)0)) {
                    result_72->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj49=result_72->sname;
                    result_72->sname=(char*)come_increment_ref_count(((char*)(right_value177=string_clone(self->sname))));
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
                    if(right_value177) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0); }
                }
                struct sUIntNode* __result121__ = result_72;
                if(result_72) { come_call_finalizer(sUIntNode_finalize,result_72, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result121__;
            come_release_malloced_mem();
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self){
void* right_value191;
struct sLongNode* result_78;
void* right_value192;
char* __dec_obj52;
memset(&right_value191, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct sLongNode*)); /* ddd */
memset(&right_value192, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sLongNode* __result129__ = (void*)0;
                    come_release_malloced_mem();
                    return __result129__;
                }
                result_78=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value191=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1)))));
                if(right_value191) { come_call_finalizer(sLongNode_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_78->value=self->value;
                }
                if(self!=((void*)0)) {
                    result_78->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj52=result_78->sname;
                    result_78->sname=(char*)come_increment_ref_count(((char*)(right_value192=string_clone(self->sname))));
                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                    if(right_value192) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0); }
                }
                struct sLongNode* __result130__ = result_78;
                if(result_78) { come_call_finalizer(sLongNode_finalize,result_78, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result130__;
            come_release_malloced_mem();
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
void* right_value196;
struct sIntNode* result_80;
void* right_value197;
char* __dec_obj53;
memset(&right_value196, 0, sizeof(void*));
memset(&result_80, 0, sizeof(struct sIntNode*)); /* ddd */
memset(&right_value197, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sIntNode* __result132__ = (void*)0;
                come_release_malloced_mem();
                return __result132__;
            }
            result_80=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value196=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1)))));
            if(right_value196) { come_call_finalizer(sIntNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_80->value=self->value;
            }
            if(self!=((void*)0)) {
                result_80->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj53=result_80->sname;
                result_80->sname=(char*)come_increment_ref_count(((char*)(right_value197=string_clone(self->sname))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
                if(right_value197) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0); }
            }
            struct sIntNode* __result133__ = result_80;
            if(result_80) { come_call_finalizer(sIntNode_finalize,result_80, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result133__;
        come_release_malloced_mem();
}

