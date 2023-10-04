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
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
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

void skip_paren(struct sInfo* info);

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
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






struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info){
void* right_value5;
void* right_value6;
struct list$1sTypeph* param_types_14;
void* right_value7;
void* right_value8;
struct list$1charph* param_names_15;
void* right_value9;
void* right_value10;
struct list$1charph* param_default_parametors_16;
_Bool var_args_17;
_Bool void_param_18;
char* p_19;
int sline_20;
void* right_value11;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* param_type_21;
char* param_name_22;
_Bool err_23;
void* right_value12;
struct sType* param_type2_24;
void* right_value46;
void* right_value50;
char* p_49;
_Bool no_comma_50;
void* right_value51;
struct sNode* node_51;
char* p2_52;
void* right_value52;
void* right_value53;
void* right_value54;
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&param_types_14, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&param_names_15, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value9, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
memset(&param_default_parametors_16, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&var_args_17, 0, sizeof(_Bool)); /* ddd */
memset(&void_param_18, 0, sizeof(_Bool)); /* ddd */
memset(&p_19, 0, sizeof(char*)); /* ddd */
memset(&sline_20, 0, sizeof(int)); /* ddd */
memset(&right_value11, 0, sizeof(void*));
memset(&param_type_21, 0, sizeof(struct sType*)); /* ccc */
memset(&param_name_22, 0, sizeof(char*)); /* ccc */
memset(&err_23, 0, sizeof(_Bool)); /* ccc */
memset(&param_type_21, 0, sizeof(struct sType*)); /* eee */
memset(&param_name_22, 0, sizeof(char*)); /* eee */
memset(&err_23, 0, sizeof(_Bool)); /* eee */
memset(&right_value12, 0, sizeof(void*));
memset(&param_type2_24, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value46, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&p_49, 0, sizeof(char*)); /* ddd */
memset(&no_comma_50, 0, sizeof(_Bool)); /* ddd */
memset(&right_value51, 0, sizeof(void*));
memset(&node_51, 0, sizeof(struct sNode*)); /* ddd */
memset(&p2_52, 0, sizeof(char*)); /* ddd */
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
    param_types_14=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value6=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value5=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
    if(right_value6) { come_call_finalizer(list$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
    param_names_15=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value8=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value7=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(right_value8) { come_call_finalizer(list$1charphp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0); }
    param_default_parametors_16=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value10=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value9=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(right_value10) { come_call_finalizer(list$1charphp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0); }
    var_args_17=(_Bool)0;
    expected_next_character(40,info);
    void_param_18=(_Bool)0;
    {
        p_19=info->p;
        sline_20=info->sline;
        if(memcmp(info->p,"void",strlen("void"))==0) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                void_param_18=(_Bool)1;
            }
        }
        info->p=p_19;
        info->sline=sline_20;
    }
    if(void_param_18) {
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
            multiple_assgin_var1=((struct tuple3$3sTypephcharphbool*)(right_value11=parse_type(info,(_Bool)1,(_Bool)0)));
            param_type_21=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
            param_name_22=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            err_23=multiple_assgin_var1->v3;
            if(right_value11) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
            if(!err_23) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                exit(2);
            }
            param_type2_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=solve_generics(param_type_21,info->generics_type,info))));
            if(right_value12) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0); }
            param_type2_24->mFunctionParam=(_Bool)1;
            list$1sTypephp_push_back(param_types_14,(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_clone(param_type2_24)))));
            if(right_value46) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0); }
            list$1charphp_push_back(param_names_15,(char*)come_increment_ref_count(((char*)(right_value50=string_clone(param_name_22)))));
            if(right_value50) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0); }
            if(*info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_49=info->p;
                no_comma_50=info->no_comma;
                info->no_comma=(_Bool)1;
                node_51=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value51=expression_v13(info))));
                if(right_value51) { right_value51 = come_decrement_ref_count(right_value51, ((struct sNode*)right_value51)->finalize, ((struct sNode*)right_value51)->_protocol_obj, 1, 0); } 
                info->no_comma=no_comma_50;
                p2_52=info->p;
                char buf_53[p2_52-p_49+1];
                memset(&buf_53, 0, sizeof(buf_53)); /* aaa */
                memcpy(buf_53,p_49,p2_52-p_49);
                buf_53[p2_52-p_49]=0;
                list$1charphp_push_back(param_default_parametors_16,(char*)come_increment_ref_count(((char*)(right_value52=__builtin_string(buf_53)))));
                if(right_value52) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0); }
                if(node_51) { node_51 = come_decrement_ref_count(node_51, ((struct sNode*)node_51)->finalize, ((struct sNode*)node_51)->_protocol_obj, 0, 0); } 
            }
            else {
                list$1charphp_push_back(param_default_parametors_16,((void*)0));
            }
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(parsecmp("...",info)) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_17=(_Bool)1;
                    expected_next_character(41,info);
                    break;
                }
            }
            else if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            if(param_type_21) { come_call_finalizer(sType_finalize,param_type_21, (void*)0, (void*)0, 0, 0, 0); }
            if(param_name_22) { param_name_22 = come_decrement_ref_count(param_name_22, (void*)0, (void*)0, 0, 0); }
            if(param_type2_24) { come_call_finalizer(sType_finalize,param_type2_24, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result33__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value54=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value53=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1))))),(struct list$1sTypeph*)come_increment_ref_count(param_types_14),(struct list$1charph*)come_increment_ref_count(param_names_15),(struct list$1charph*)come_increment_ref_count(param_default_parametors_16),var_args_17)));
    if(param_types_14) { come_call_finalizer(list$1sTypephp_finalize,param_types_14, (void*)0, (void*)0, 0, 0, 0); }
    if(param_names_15) { come_call_finalizer(list$1charphp_finalize,param_names_15, (void*)0, (void*)0, 0, 0, 0); }
    if(param_default_parametors_16) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_16, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result33__;
come_release_malloced_mem();
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct sType* it_6;
memset(&it_6, 0, sizeof(struct sType*)); /* ddd */
    for(
    it_6=list$1sTypephp_begin((type->mGenericsTypes));
    !list$1sTypephp_end((type->mGenericsTypes));
    it_6=list$1sTypephp_next((type->mGenericsTypes))
    ){
        if(is_contained_generics_class(it_6,info)) {
            _Bool __result14__ = (_Bool)1;
            come_release_malloced_mem();
            return __result14__;
        }
    }
    if(type->mClass->mGenerics) {
        _Bool __result15__ = (_Bool)1;
        come_release_malloced_mem();
        return __result15__;
    }
    _Bool __result16__ = (_Bool)0;
    come_release_malloced_mem();
    return __result16__;
come_release_malloced_mem();
}

_Bool parsecmp(char* str, struct sInfo* info){
    _Bool __result7__ = memcmp(info->p,str,strlen(str))==0;
    come_release_malloced_mem();
    return __result7__;
come_release_malloced_mem();
}

char* parse_word(struct sInfo* info){
void* right_value1;
void* right_value2;
struct buffer* buf_4;
void* right_value3;
void* right_value4;
memset(&right_value1, 0, sizeof(void*));
memset(&right_value2, 0, sizeof(void*));
memset(&buf_4, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
    buf_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
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
        exit(2);
    }
    if(right_value3) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0); }
    char* __result8__ = ((char*)(right_value4=buffer_to_string(buf_4)));
    if(buf_4) { come_call_finalizer(buffer_finalize,buf_4, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result8__;
come_release_malloced_mem();
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
come_release_malloced_mem();
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
char* head_54;
int head_sline_55;
void* right_value55;
char* type_name_56;
void* right_value56;
char* __dec_obj29;
_Bool constant_57;
_Bool static__58;
_Bool volatile__59;
_Bool register__60;
_Bool unsigned__61;
_Bool long__62;
_Bool long_long_63;
_Bool short__64;
_Bool restrict__65;
_Bool struct__66;
_Bool union__67;
_Bool enum__68;
_Bool no_heap_69;
_Bool extern__70;
_Bool inline__71;
_Bool anonymous_type_72;
char* p_73;
int sline_74;
void* right_value57;
void* right_value58;
void* right_value59;
void* right_value60;
char* __dec_obj32;
void* right_value61;
char* __dec_obj33;
char* p_75;
int sline_76;
void* right_value62;
void* right_value63;
char* p_77;
int sline_78;
void* right_value64;
void* right_value65;
void* right_value66;
char* p_79;
int sline_80;
void* right_value67;
void* right_value68;
char* __dec_obj34;
void* right_value69;
char* __dec_obj35;
void* right_value70;
char* __dec_obj36;
char* p_81;
int sline_82;
void* right_value71;
void* right_value72;
void* right_value73;
char* p_83;
int sline_84;
void* right_value74;
void* right_value75;
void* right_value76;
void* right_value77;
char* __dec_obj37;
void* right_value78;
char* __dec_obj38;
char* p_85;
int sline_86;
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
char* p_87;
int sline_88;
void* right_value87;
char* __dec_obj44;
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
void* right_value94;
char* __dec_obj51;
void* right_value95;
char* __dec_obj52;
void* right_value96;
char* __dec_obj53;
char* p_89;
int sline_90;
void* right_value97;
char* __dec_obj54;
void* right_value98;
char* __dec_obj55;
_Bool lambda_flag_91;
char* pX_92;
int slineX_93;
void* right_value99;
struct sType* type_94;
char* var_name_95;
static int anonymous_num_96=0;
void* right_value100;
char* __dec_obj56;
void* right_value101;
struct sNode* node_97;
void* right_value102;
void* right_value103;
void* right_value104;
void* right_value105;
struct sType* __dec_obj57;
void* right_value106;
char* __dec_obj58;
void* right_value107;
struct sNode* node_98;
void* right_value108;
void* right_value109;
void* right_value110;
void* right_value111;
struct sType* __dec_obj59;
void* right_value112;
char* __dec_obj60;
void* right_value113;
struct sNode* node_99;
void* right_value114;
void* right_value115;
void* right_value116;
void* right_value117;
struct sType* __dec_obj61;
void* right_value118;
void* right_value119;
void* right_value120;
char* __dec_obj62;
static int num_anonymous_var_name_100=0;
void* right_value121;
char* __dec_obj63;
struct sType* result_type_101;
void* right_value131;
struct sType* __dec_obj72;
int i_109;
void* right_value132;
void* right_value133;
void* right_value134;
struct sType* __dec_obj73;
void* right_value135;
void* right_value136;
struct sType* __dec_obj74;
void* right_value137;
char* __dec_obj75;
void* right_value138;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var2;
struct list$1sTypeph* param_types_113;
struct list$1charph* param_names_114;
struct list$1charph* param_default_parametors_115;
_Bool var_args_116;
void* right_value139;
void* right_value140;
struct sType* __dec_obj76;
void* right_value141;
void* right_value142;
struct tuple1$1sTypeph* __dec_obj78;
struct list$1sTypeph* __dec_obj79;
struct list$1charph* __dec_obj80;
struct sType* result_type_117;
void* right_value143;
struct sType* __dec_obj81;
int i_118;
void* right_value144;
void* right_value145;
void* right_value146;
struct sType* __dec_obj82;
void* right_value147;
void* right_value148;
struct sType* __dec_obj83;
void* right_value149;
char* __dec_obj84;
static int num_anonymous_var_name_119=0;
void* right_value150;
char* __dec_obj85;
void* right_value151;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_120;
struct list$1charph* param_names_121;
struct list$1charph* param_default_parametors_122;
_Bool var_args_123;
void* right_value152;
void* right_value153;
struct sType* __dec_obj86;
void* right_value154;
void* right_value155;
struct tuple1$1sTypeph* __dec_obj87;
struct list$1sTypeph* __dec_obj88;
struct list$1charph* __dec_obj89;
void* right_value156;
struct sType* __dec_obj90;
void* right_value157;
char* __dec_obj91;
int i_124;
void* right_value158;
void* right_value159;
void* right_value160;
struct sType* __dec_obj92;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
struct sType* __dec_obj93;
void* right_value165;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* generics_type_128;
char* var_name_129;
_Bool err_130;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
struct sType* __dec_obj94;
void* right_value171;
char* new_name_131;
struct sClass* klass_132;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
struct sType* __dec_obj95;
void* right_value182;
void* right_value183;
struct list$1sTypeph* types_173;
void* right_value184;
void* right_value185;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* type2_174;
char* name_175;
_Bool err_176;
void* right_value186;
void* right_value187;
void* right_value188;
int num_tuples_177;
void* right_value189;
void* right_value190;
void* right_value191;
struct sType* __dec_obj96;
struct sType* it_178;
void* right_value192;
void* right_value193;
struct sType* __dec_obj97;
void* right_value194;
char* new_name_179;
void* right_value195;
char* __dec_obj98;
static int num_anonymous_var_name_180=0;
void* right_value196;
char* __dec_obj99;
void* right_value197;
struct sNode* node_181;
void* right_value201;
void* right_value202;
memset(&head_54, 0, sizeof(char*)); /* ddd */
memset(&head_sline_55, 0, sizeof(int)); /* ddd */
memset(&right_value55, 0, sizeof(void*));
memset(&type_name_56, 0, sizeof(char*)); /* ddd */
memset(&right_value56, 0, sizeof(void*));
memset(&constant_57, 0, sizeof(_Bool)); /* ddd */
memset(&static__58, 0, sizeof(_Bool)); /* ddd */
memset(&volatile__59, 0, sizeof(_Bool)); /* ddd */
memset(&register__60, 0, sizeof(_Bool)); /* ddd */
memset(&unsigned__61, 0, sizeof(_Bool)); /* ddd */
memset(&long__62, 0, sizeof(_Bool)); /* ddd */
memset(&long_long_63, 0, sizeof(_Bool)); /* ddd */
memset(&short__64, 0, sizeof(_Bool)); /* ddd */
memset(&restrict__65, 0, sizeof(_Bool)); /* ddd */
memset(&struct__66, 0, sizeof(_Bool)); /* ddd */
memset(&union__67, 0, sizeof(_Bool)); /* ddd */
memset(&enum__68, 0, sizeof(_Bool)); /* ddd */
memset(&no_heap_69, 0, sizeof(_Bool)); /* ddd */
memset(&extern__70, 0, sizeof(_Bool)); /* ddd */
memset(&inline__71, 0, sizeof(_Bool)); /* ddd */
memset(&anonymous_type_72, 0, sizeof(_Bool)); /* ddd */
memset(&p_73, 0, sizeof(char*)); /* ddd */
memset(&sline_74, 0, sizeof(int)); /* ddd */
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&p_75, 0, sizeof(char*)); /* ddd */
memset(&sline_76, 0, sizeof(int)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&p_77, 0, sizeof(char*)); /* ddd */
memset(&sline_78, 0, sizeof(int)); /* ddd */
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&p_79, 0, sizeof(char*)); /* ddd */
memset(&sline_80, 0, sizeof(int)); /* ddd */
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&p_81, 0, sizeof(char*)); /* ddd */
memset(&sline_82, 0, sizeof(int)); /* ddd */
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&p_83, 0, sizeof(char*)); /* ddd */
memset(&sline_84, 0, sizeof(int)); /* ddd */
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&p_85, 0, sizeof(char*)); /* ddd */
memset(&sline_86, 0, sizeof(int)); /* ddd */
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&p_87, 0, sizeof(char*)); /* ddd */
memset(&sline_88, 0, sizeof(int)); /* ddd */
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
memset(&p_89, 0, sizeof(char*)); /* ddd */
memset(&sline_90, 0, sizeof(int)); /* ddd */
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&lambda_flag_91, 0, sizeof(_Bool)); /* ddd */
memset(&pX_92, 0, sizeof(char*)); /* ddd */
memset(&slineX_93, 0, sizeof(int)); /* ddd */
memset(&right_value99, 0, sizeof(void*));
memset(&type_94, 0, sizeof(struct sType*)); /* bbb */
memset(&var_name_95, 0, sizeof(char*)); /* bbb */
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&node_97, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&node_98, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&node_99, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&result_type_101, 0, sizeof(struct sType*)); /* bbb */
memset(&right_value131, 0, sizeof(void*));
memset(&i_109, 0, sizeof(int)); /* ddd */
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&param_types_113, 0, sizeof(struct list$1sTypeph*)); /* ccc */
memset(&param_names_114, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&param_default_parametors_115, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&var_args_116, 0, sizeof(_Bool)); /* ccc */
memset(&param_types_113, 0, sizeof(struct list$1sTypeph*)); /* eee */
memset(&param_names_114, 0, sizeof(struct list$1charph*)); /* eee */
memset(&param_default_parametors_115, 0, sizeof(struct list$1charph*)); /* eee */
memset(&var_args_116, 0, sizeof(_Bool)); /* eee */
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&result_type_117, 0, sizeof(struct sType*)); /* bbb */
memset(&right_value143, 0, sizeof(void*));
memset(&i_118, 0, sizeof(int)); /* ddd */
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&param_types_120, 0, sizeof(struct list$1sTypeph*)); /* ccc */
memset(&param_names_121, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&param_default_parametors_122, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&var_args_123, 0, sizeof(_Bool)); /* ccc */
memset(&param_types_120, 0, sizeof(struct list$1sTypeph*)); /* eee */
memset(&param_names_121, 0, sizeof(struct list$1charph*)); /* eee */
memset(&param_default_parametors_122, 0, sizeof(struct list$1charph*)); /* eee */
memset(&var_args_123, 0, sizeof(_Bool)); /* eee */
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&i_124, 0, sizeof(int)); /* ddd */
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&generics_type_128, 0, sizeof(struct sType*)); /* ccc */
memset(&var_name_129, 0, sizeof(char*)); /* ccc */
memset(&err_130, 0, sizeof(_Bool)); /* ccc */
memset(&generics_type_128, 0, sizeof(struct sType*)); /* eee */
memset(&var_name_129, 0, sizeof(char*)); /* eee */
memset(&err_130, 0, sizeof(_Bool)); /* eee */
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&new_name_131, 0, sizeof(char*)); /* ddd */
memset(&klass_132, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&types_173, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&type2_174, 0, sizeof(struct sType*)); /* ccc */
memset(&name_175, 0, sizeof(char*)); /* ccc */
memset(&err_176, 0, sizeof(_Bool)); /* ccc */
memset(&type2_174, 0, sizeof(struct sType*)); /* eee */
memset(&name_175, 0, sizeof(char*)); /* eee */
memset(&err_176, 0, sizeof(_Bool)); /* eee */
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&num_tuples_177, 0, sizeof(int)); /* ddd */
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&it_178, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&new_name_179, 0, sizeof(char*)); /* ddd */
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&node_181, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
    head_54=info->p;
    head_sline_55=info->sline;
    info->define_struct=(_Bool)0;
    type_name_56=(char*)come_increment_ref_count(((char*)(right_value55=parse_word(info))));
    if(right_value55) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0); }
    if(string_operator_equals(type_name_56,"__extension__")) {
        __dec_obj29=type_name_56;
        type_name_56=(char*)come_increment_ref_count(((char*)(right_value56=parse_word(info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
        if(right_value56) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0); }
    }
    constant_57=(_Bool)0;
    static__58=(_Bool)0;
    volatile__59=(_Bool)0;
    register__60=(_Bool)0;
    unsigned__61=(_Bool)0;
    long__62=(_Bool)0;
    long_long_63=(_Bool)0;
    short__64=(_Bool)0;
    restrict__65=(_Bool)0;
    struct__66=(_Bool)0;
    union__67=(_Bool)0;
    enum__68=(_Bool)0;
    no_heap_69=(_Bool)0;
    extern__70=(_Bool)0;
    inline__71=(_Bool)0;
    anonymous_type_72=(_Bool)0;
    while((_Bool)1) {
        if(string_operator_equals(type_name_56,"struct")) {
            struct__66=(_Bool)1;
            if(*info->p==123) {
                p_73=info->p;
                sline_74=info->sline;
                ((char*)(right_value57=skip_block(info)));
                if(right_value57) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_54;
                    info->sline=head_sline_55;
                    info->define_struct=(_Bool)1;
                    struct tuple3$3sTypephcharphbool* __result35__ = ((struct tuple3$3sTypephcharphbool*)(right_value59=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value58=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_release_malloced_mem();
                    return __result35__;
                }
                else {
                    anonymous_type_72=(_Bool)1;
                    __dec_obj32=type_name_56;
                    type_name_56=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(""))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
                    if(right_value60) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0); }
                    info->p=p_73;
                    info->sline=sline_74;
                    break;
                }
            }
            __dec_obj33=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value61=parse_word(info))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0); }
            if(right_value61) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0); }
            if(*info->p==60) {
                p_75=info->p;
                sline_76=info->sline;
                info->p++;
                skip_spaces_and_lf(info);
                while((_Bool)1) {
                    if(*info->p==62) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p==123) {
                        }
                        else {
                            info->p=p_75;
                            info->sline=sline_76;
                        }
                        break;
                    }
                    else if(*info->p==0) {
                        err_msg(info,"invalid struct definition");
                        struct tuple3$3sTypephcharphbool* __result36__ = ((struct tuple3$3sTypephcharphbool*)(right_value63=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value62=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        come_release_malloced_mem();
                        return __result36__;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            if(*info->p==123) {
                p_77=info->p;
                sline_78=info->sline;
                ((char*)(right_value64=skip_block(info)));
                if(right_value64) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_54;
                    info->sline=head_sline_55;
                    info->define_struct=(_Bool)1;
                    struct tuple3$3sTypephcharphbool* __result37__ = ((struct tuple3$3sTypephcharphbool*)(right_value66=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value65=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_release_malloced_mem();
                    return __result37__;
                }
                else {
                    anonymous_type_72=(_Bool)1;
                    info->p=p_77;
                    info->sline=sline_78;
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name_56,"union")) {
            union__67=(_Bool)1;
            if(*info->p==123) {
                p_79=info->p;
                sline_80=info->sline;
                ((char*)(right_value67=skip_block(info)));
                if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_54;
                    info->sline=head_sline_55;
                    info->define_struct=(_Bool)0;
                    anonymous_type_72=(_Bool)1;
                    __dec_obj34=type_name_56;
                    type_name_56=(char*)come_increment_ref_count(((char*)(right_value68=__builtin_string(""))));
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
                    if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
                    info->p=p_79;
                    info->sline=sline_80;
                    break;
                }
                else {
                    anonymous_type_72=(_Bool)1;
                    __dec_obj35=type_name_56;
                    type_name_56=(char*)come_increment_ref_count(((char*)(right_value69=__builtin_string(""))));
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
                    if(right_value69) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0); }
                    info->p=p_79;
                    info->sline=sline_80;
                    break;
                }
            }
            __dec_obj36=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value70=parse_word(info))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0); }
            if(right_value70) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0); }
            if(*info->p==123) {
                p_81=info->p;
                sline_82=info->sline;
                ((char*)(right_value71=skip_block(info)));
                if(right_value71) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_54;
                    info->sline=head_sline_55;
                    info->define_struct=(_Bool)1;
                    struct tuple3$3sTypephcharphbool* __result38__ = ((struct tuple3$3sTypephcharphbool*)(right_value73=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value72=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_release_malloced_mem();
                    return __result38__;
                }
                else {
                    anonymous_type_72=(_Bool)1;
                    info->p=p_81;
                    info->sline=sline_82;
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name_56,"enum")) {
            enum__68=(_Bool)1;
            if(*info->p==123) {
                p_83=info->p;
                sline_84=info->sline;
                ((char*)(right_value74=skip_block(info)));
                if(right_value74) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_54;
                    info->sline=head_sline_55;
                    info->define_struct=(_Bool)1;
                    struct tuple3$3sTypephcharphbool* __result39__ = ((struct tuple3$3sTypephcharphbool*)(right_value76=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value75=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_release_malloced_mem();
                    return __result39__;
                }
                else {
                    anonymous_type_72=(_Bool)1;
                    __dec_obj37=type_name_56;
                    type_name_56=(char*)come_increment_ref_count(((char*)(right_value77=__builtin_string(""))));
                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
                    if(right_value77) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0); }
                    info->p=p_83;
                    info->sline=sline_84;
                    break;
                }
            }
            __dec_obj38=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value78=parse_word(info))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
            if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0); }
            if(*info->p==123) {
                p_85=info->p;
                sline_86=info->sline;
                ((char*)(right_value79=skip_block(info)));
                if(right_value79) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0); }
                if(*info->p==59) {
                    info->p=head_54;
                    info->sline=head_sline_55;
                    info->define_struct=(_Bool)1;
                    struct tuple3$3sTypephcharphbool* __result40__ = ((struct tuple3$3sTypephcharphbool*)(right_value81=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value80=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_release_malloced_mem();
                    return __result40__;
                }
                else {
                    anonymous_type_72=(_Bool)1;
                    info->p=p_85;
                    info->sline=sline_86;
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name_56,"const")) {
            constant_57=(_Bool)1;
            __dec_obj39=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value82=parse_word(info))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0); }
            if(right_value82) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_56,"static")) {
            static__58=(_Bool)1;
            __dec_obj40=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value83=parse_word(info))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
            if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_56,"extern")) {
            extern__70=(_Bool)1;
            __dec_obj41=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value84=parse_word(info))));
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
            if(right_value84) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_56,"inline")||string_operator_equals(type_name_56,"__inline")) {
            inline__71=(_Bool)1;
            __dec_obj42=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value85=parse_word(info))));
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
            if(right_value85) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_56,"volatile")) {
            volatile__59=(_Bool)1;
            __dec_obj43=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value86=parse_word(info))));
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
            if(right_value86) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_56,"long")) {
            {
                p_87=info->p;
                sline_88=info->sline;
                if(!xisalpha(*info->p)) {
                    info->p=p_87;
                    info->sline=sline_88;
                    __dec_obj44=type_name_56;
                    type_name_56=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string("long"))));
                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
                    if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0); }
                    break;
                }
                else {
                    __dec_obj45=type_name_56;
                    type_name_56=(char*)come_increment_ref_count(((char*)(right_value88=parse_word(info))));
                    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
                    if(right_value88) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0); }
                    if(string_operator_equals(type_name_56,"unsigned")) {
                        __dec_obj46=type_name_56;
                        type_name_56=(char*)come_increment_ref_count(((char*)(right_value89=parse_word(info))));
                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
                        if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
                        if(string_operator_equals(type_name_56,"int")) {
                            break;
                        }
                    }
                    else if(string_operator_equals(type_name_56,"long")) {
                        p_87=info->p;
                        sline_88=info->sline;
                        if(xisalpha(*info->p)) {
                            __dec_obj47=type_name_56;
                            type_name_56=(char*)come_increment_ref_count(((char*)(right_value90=parse_word(info))));
                            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
                            if(right_value90) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0); }
                        }
                        else {
                            break;
                        }
                        if(string_operator_equals(type_name_56,"int")) {
                            break;
                        }
                        else if(!is_type_name(type_name_56,info)) {
                            __dec_obj48=type_name_56;
                            type_name_56=(char*)come_increment_ref_count(((char*)(right_value91=__builtin_string("long"))));
                            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
                            if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
                            info->p=p_87;
                            info->sline=sline_88;
                            break;
                        }
                    }
                    else if(is_type_name(type_name_56,info)) {
                        if(long__62) {
                            long_long_63=(_Bool)1;
                            long__62=(_Bool)0;
                        }
                        else {
                            long__62=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_87;
                        info->sline=sline_88;
                        __dec_obj49=type_name_56;
                        type_name_56=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string("long"))));
                        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
                        if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
                        break;
                    }
                }
            }
        }
        else if(string_operator_equals(type_name_56,"unsigned")) {
            unsigned__61=(_Bool)1;
            __dec_obj50=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value93=parse_word(info))));
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
            if(right_value93) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_56,"signed")) {
            unsigned__61=(_Bool)0;
            __dec_obj51=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value94=parse_word(info))));
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
            if(right_value94) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_56,"register")) {
            register__60=(_Bool)1;
            __dec_obj52=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value95=parse_word(info))));
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
            if(right_value95) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_56,"restrict")) {
            restrict__65=(_Bool)1;
            __dec_obj53=type_name_56;
            type_name_56=(char*)come_increment_ref_count(((char*)(right_value96=parse_word(info))));
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
            if(right_value96) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(type_name_56,"short")) {
            short__64=(_Bool)1;
            if(*info->p==58) {
                break;
            }
            else if(xisalnum(*info->p)) {
                p_89=info->p;
                sline_90=info->sline;
                __dec_obj54=type_name_56;
                type_name_56=(char*)come_increment_ref_count(((char*)(right_value97=parse_word(info))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
                if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0); }
                if(string_operator_equals(type_name_56,"int")) {
                    break;
                }
                else if(string_operator_equals(type_name_56,"short")) {
                    short__64=(_Bool)0;
                    break;
                }
                else if(is_type_name(type_name_56,info)) {
                    info->p=p_89;
                    info->sline=sline_90;
                }
                else {
                    __dec_obj55=type_name_56;
                    type_name_56=(char*)come_increment_ref_count(((char*)(right_value98=__builtin_string("short"))));
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
                    if(right_value98) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0); }
                    info->p=p_89;
                    info->sline=sline_90;
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
    lambda_flag_91=(_Bool)0;
    {
        pX_92=info->p;
        slineX_93=info->sline;
        if(xisalpha(*info->p)) {
            (void)((char*)(right_value99=parse_word(info)));
            if(right_value99) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0); }
            if(*info->p==40&&info->in_typedef) {
                lambda_flag_91=(_Bool)1;
            }
        }
        info->p=pX_92;
        info->sline=slineX_93;
    }
    if(anonymous_type_72&&*info->p==123) {
        if(struct__66) {
            if(string_operator_equals(type_name_56,"")) {
                __dec_obj56=type_name_56;
                type_name_56=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("anonymous_typeX%d",++anonymous_num_96))));
                if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
                if(right_value100) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0); }
            }
            node_97=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=parse_struct((char*)come_increment_ref_count(type_name_56),info))));
            if(right_value101) { right_value101 = come_decrement_ref_count(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0); } 
            if(!info->no_output_err) {
                if(!node_97->compile(node_97->_protocol_obj,info)) {
                    err_msg(info,"parse_struct is failed");
                    struct tuple3$3sTypephcharphbool* __result41__ = ((struct tuple3$3sTypephcharphbool*)(right_value103=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value102=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_97) { node_97 = come_decrement_ref_count(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0); } 
                    come_release_malloced_mem();
                    return __result41__;
                }
            }
            __dec_obj57=type_94;
            type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value104=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),type_name_56,info,(_Bool)0))));
            if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value104) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value105) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0); }
            if(node_97) { node_97 = come_decrement_ref_count(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0); } 
        }
        else if(enum__68) {
            if(string_operator_equals(type_name_56,"")) {
                __dec_obj58=type_name_56;
                type_name_56=(char*)come_increment_ref_count(((char*)(right_value106=xsprintf("anonymous_typeY%d",++anonymous_num_96))));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
                if(right_value106) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0); }
            }
            node_98=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=parse_enum((char*)come_increment_ref_count(type_name_56),info))));
            if(right_value107) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0); } 
            if(!info->no_output_err) {
                if(!node_98->compile(node_98->_protocol_obj,info)) {
                    err_msg(info,"enum compiling is faied");
                    struct tuple3$3sTypephcharphbool* __result42__ = ((struct tuple3$3sTypephcharphbool*)(right_value109=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value108=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_98) { node_98 = come_decrement_ref_count(node_98, ((struct sNode*)node_98)->finalize, ((struct sNode*)node_98)->_protocol_obj, 0, 0); } 
                    come_release_malloced_mem();
                    return __result42__;
                }
            }
            __dec_obj59=type_94;
            type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value110=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),type_name_56,info,(_Bool)0))));
            if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value110) { come_call_finalizer(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value111) { come_call_finalizer(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0); }
            if(node_98) { node_98 = come_decrement_ref_count(node_98, ((struct sNode*)node_98)->finalize, ((struct sNode*)node_98)->_protocol_obj, 0, 0); } 
        }
        else if(union__67) {
            if(string_operator_equals(type_name_56,"")) {
                __dec_obj60=type_name_56;
                type_name_56=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("anonymous_typeZ%d",++anonymous_num_96))));
                if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
                if(right_value112) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0); }
            }
            node_99=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=parse_union((char*)come_increment_ref_count(type_name_56),info))));
            if(right_value113) { right_value113 = come_decrement_ref_count(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0); } 
            if(!info->no_output_err) {
                if(!node_99->compile(node_99->_protocol_obj,info)) {
                    err_msg(info,"union compiling is failed");
                    struct tuple3$3sTypephcharphbool* __result43__ = ((struct tuple3$3sTypephcharphbool*)(right_value115=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value114=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_99) { node_99 = come_decrement_ref_count(node_99, ((struct sNode*)node_99)->finalize, ((struct sNode*)node_99)->_protocol_obj, 0, 0); } 
                    come_release_malloced_mem();
                    return __result43__;
                }
            }
            __dec_obj61=type_94;
            type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value116=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),type_name_56,info,(_Bool)0))));
            if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value116) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value117) { come_call_finalizer(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
            if(node_99) { node_99 = come_decrement_ref_count(node_99, ((struct sNode*)node_99)->finalize, ((struct sNode*)node_99)->_protocol_obj, 0, 0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            struct tuple3$3sTypephcharphbool* __result44__ = ((struct tuple3$3sTypephcharphbool*)(right_value119=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value118=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            come_release_malloced_mem();
            return __result44__;
        }
        if(parse_variable_name) {
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj62=var_name_95;
                var_name_95=(char*)come_increment_ref_count(((char*)(right_value120=parse_word(info))));
                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0); }
                if(right_value120) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0); }
            }
            else {
                num_anonymous_var_name_100++;
                __dec_obj63=var_name_95;
                var_name_95=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("anonymous_var_name%d",num_anonymous_var_name_100))));
                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
                if(right_value121) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0); }
            }
        }
    }
    else if(lambda_flag_91) {
        if(map$2charphsTypephp_operator_load_element(info->types,type_name_56)) {
            __dec_obj72=result_type_101;
            result_type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sTypep_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_56)))));
            if(__dec_obj72) { come_call_finalizer(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value131) { come_call_finalizer(sTypep_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
        }
        else if(list$1charphp_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_56))) {
            for(
            i_109=0;
            i_109<list$1charphp_length(info->generics_type_names);
            i_109++
            ){
                if(charp_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_109),type_name_56)) {
                    __dec_obj73=result_type_101;
                    result_type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value132=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),((char*)(right_value133=xsprintf("generics_type%d",i_109))),info,(_Bool)0))));
                    if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value132) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value133) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0); }
                    if(right_value134) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
        }
        else {
            __dec_obj74=result_type_101;
            result_type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value135=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),type_name_56,info,(_Bool)0))));
            if(__dec_obj74) { come_call_finalizer(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value135) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value136) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
        }
        result_type_101->mConstant=result_type_101->mConstant||constant_57;
        result_type_101->mRegister=register__60;
        result_type_101->mUnsigned=result_type_101->mUnsigned||unsigned__61;
        result_type_101->mVolatile=volatile__59;
        result_type_101->mStatic=result_type_101->mStatic||static__58;
        result_type_101->mExtern=result_type_101->mExtern||extern__70;
        result_type_101->mInline=result_type_101->mInline||inline__71;
        result_type_101->mRestrict=result_type_101->mRestrict||restrict__65;
        result_type_101->mLongLong=result_type_101->mLongLong||long_long_63;
        result_type_101->mLong=result_type_101->mLong||long__62;
        result_type_101->mShort=result_type_101->mShort||short__64;
        __dec_obj75=var_name_95;
        var_name_95=(char*)come_increment_ref_count(((char*)(right_value137=parse_word(info))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
        if(right_value137) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0); }
        multiple_assgin_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value138=parse_params(info)));
        param_types_113=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var2->v1);
        param_names_114=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v2);
        param_default_parametors_115=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v3);
        var_args_116=multiple_assgin_var2->v4;
        if(right_value138) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj76=type_94;
        type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"lambda",info,(_Bool)0))));
        if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value139) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value140) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj78=type_94->mResultType;
        type_94->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value142=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value141=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1))))),(struct sType*)come_increment_ref_count(result_type_101)))));
        if(__dec_obj78) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value142) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj79=type_94->mParamTypes;
        type_94->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_113);
        if(__dec_obj79) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0); }
        __dec_obj80=type_94->mParamNames;
        type_94->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_114);
        if(__dec_obj80) { come_call_finalizer(list$1charphp_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0); }
        type_94->mVarArgs=var_args_116;
        if(result_type_101) { come_call_finalizer(sType_finalize,result_type_101, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_113) { come_call_finalizer(list$1sTypephp_finalize,param_types_113, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_114) { come_call_finalizer(list$1charphp_finalize,param_names_114, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_115) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_115, (void*)0, (void*)0, 0, 0, 0); }
    }
    else if(*info->p==40&&*(info->p+1)==42) {
        info->p++;
        expected_next_character(42,info);
        if(memcmp(info->p,"_Nullable",strlen("_Nullable"))==0) {
            info->p+=strlen("_Nullable");
            skip_spaces_and_lf(info);
        }
        if(map$2charphsTypephp_operator_load_element(info->types,type_name_56)) {
            __dec_obj81=result_type_117;
            result_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sTypep_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_56)))));
            if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value143) { come_call_finalizer(sTypep_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0); }
        }
        else if(list$1charphp_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_56))) {
            for(
            i_118=0;
            i_118<list$1charphp_length(info->generics_type_names);
            i_118++
            ){
                if(charp_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_118),type_name_56)) {
                    __dec_obj82=result_type_117;
                    result_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),((char*)(right_value145=xsprintf("generics_type%d",i_118))),info,(_Bool)0))));
                    if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value144) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value145) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0); }
                    if(right_value146) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
        }
        else {
            __dec_obj83=result_type_117;
            result_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value147=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),type_name_56,info,(_Bool)0))));
            if(__dec_obj83) { come_call_finalizer(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value147) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value148) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
        }
        result_type_117->mConstant=result_type_117->mConstant||constant_57;
        result_type_117->mRegister=register__60;
        result_type_117->mUnsigned=result_type_117->mUnsigned||unsigned__61;
        result_type_117->mVolatile=volatile__59;
        result_type_117->mStatic=result_type_117->mStatic||static__58;
        result_type_117->mExtern=result_type_117->mExtern||extern__70;
        result_type_117->mInline=result_type_117->mInline||inline__71;
        result_type_117->mRestrict=result_type_117->mRestrict||restrict__65;
        result_type_117->mLongLong=result_type_117->mLongLong||long_long_63;
        result_type_117->mLong=result_type_117->mLong||long__62;
        result_type_117->mShort=result_type_117->mShort||short__64;
        if(xisalnum(*info->p)||*info->p==95) {
            __dec_obj84=var_name_95;
            var_name_95=(char*)come_increment_ref_count(((char*)(right_value149=parse_word(info))));
            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0); }
            if(right_value149) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0); }
        }
        else {
            num_anonymous_var_name_119++;
            __dec_obj85=var_name_95;
            var_name_95=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("anonymous_lambda_var_name%d",num_anonymous_var_name_119))));
            if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0); }
            if(right_value150) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0); }
        }
        expected_next_character(41,info);
        multiple_assgin_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value151=parse_params(info)));
        param_types_120=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
        param_names_121=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
        param_default_parametors_122=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
        var_args_123=multiple_assgin_var3->v4;
        if(right_value151) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj86=type_94;
        type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value152=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"lambda",info,(_Bool)0))));
        if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value152) { come_call_finalizer(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value153) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj87=type_94->mResultType;
        type_94->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value155=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value154=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1))))),(struct sType*)come_increment_ref_count(result_type_117)))));
        if(__dec_obj87) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value155) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj88=type_94->mParamTypes;
        type_94->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_120);
        if(__dec_obj88) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0); }
        __dec_obj89=type_94->mParamNames;
        type_94->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_121);
        if(__dec_obj89) { come_call_finalizer(list$1charphp_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0); }
        type_94->mVarArgs=var_args_123;
        if(result_type_117) { come_call_finalizer(sType_finalize,result_type_117, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_120) { come_call_finalizer(list$1sTypephp_finalize,param_types_120, (void*)0, (void*)0, 0, 0, 0); }
        if(param_names_121) { come_call_finalizer(list$1charphp_finalize,param_names_121, (void*)0, (void*)0, 0, 0, 0); }
        if(param_default_parametors_122) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_122, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(map$2charphsTypephp_operator_load_element(info->types,type_name_56)) {
            __dec_obj90=type_94;
            type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sTypep_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_56)))));
            if(__dec_obj90) { come_call_finalizer(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value156) { come_call_finalizer(sTypep_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0); }
            __dec_obj91=type_94->mOriginalTypeName;
            type_94->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(type_name_56))));
            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0); }
            if(right_value157) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0); }
            type_94->mConstant=type_94->mConstant||constant_57;
            type_94->mRegister=register__60;
            type_94->mUnsigned=type_94->mUnsigned||unsigned__61;
            type_94->mVolatile=volatile__59;
            type_94->mStatic=type_94->mStatic||static__58;
            type_94->mExtern=type_94->mExtern||extern__70;
            type_94->mInline=type_94->mInline||inline__71;
            type_94->mRestrict=type_94->mRestrict||restrict__65;
            type_94->mLongLong=type_94->mLongLong||long_long_63;
            type_94->mLong=type_94->mLong||long__62;
            type_94->mShort=type_94->mShort||short__64;
        }
        else if(list$1charphp_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_56))) {
            for(
            i_124=0;
            i_124<list$1charphp_length(info->generics_type_names);
            i_124++
            ){
                if(charp_operator_equals(list$1charphp_operator_load_element(info->generics_type_names,i_124),type_name_56)) {
                    __dec_obj92=type_94;
                    type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value158=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),((char*)(right_value159=xsprintf("generics_type%d",i_124))),info,(_Bool)0))));
                    if(__dec_obj92) { come_call_finalizer(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value158) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value159) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0); }
                    if(right_value160) { come_call_finalizer(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
            type_94->mConstant=type_94->mConstant||constant_57;
            type_94->mRegister=register__60;
            type_94->mUnsigned=type_94->mUnsigned||unsigned__61;
            type_94->mVolatile=volatile__59;
            type_94->mStatic=type_94->mStatic||static__58;
            type_94->mExtern=type_94->mExtern||extern__70;
            type_94->mInline=type_94->mInline||inline__71;
            type_94->mRestrict=type_94->mRestrict||restrict__65;
            type_94->mLongLong=type_94->mLongLong||long_long_63;
            type_94->mLong=type_94->mLong||long__62;
            type_94->mShort=type_94->mShort||short__64;
        }
        else if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_56)==((void*)0)) {
                struct tuple3$3sTypephcharphbool* __result69__ = ((struct tuple3$3sTypephcharphbool*)(right_value162=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value161=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                come_release_malloced_mem();
                return __result69__;
            }
            __dec_obj93=type_94;
            type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),type_name_56,info,(_Bool)0))));
            if(__dec_obj93) { come_call_finalizer(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value163) { come_call_finalizer(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value164) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0); }
            while((_Bool)1) {
                multiple_assgin_var4=((struct tuple3$3sTypephcharphbool*)(right_value165=parse_type(info,(_Bool)0,(_Bool)0)));
                generics_type_128=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
                var_name_129=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                err_130=multiple_assgin_var4->v3;
                if(right_value165) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
                if(!err_130) {
                    struct tuple3$3sTypephcharphbool* __result70__ = ((struct tuple3$3sTypephcharphbool*)(right_value167=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value166=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(generics_type_128) { come_call_finalizer(sType_finalize,generics_type_128, (void*)0, (void*)0, 0, 0, 0); }
                    if(var_name_129) { var_name_129 = come_decrement_ref_count(var_name_129, (void*)0, (void*)0, 0, 0); }
                    come_release_malloced_mem();
                    return __result70__;
                }
                list$1sTypephp_push_back(type_94->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_128));
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
                    struct tuple3$3sTypephcharphbool* __result71__ = ((struct tuple3$3sTypephcharphbool*)(right_value169=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value168=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(generics_type_128) { come_call_finalizer(sType_finalize,generics_type_128, (void*)0, (void*)0, 0, 0, 0); }
                    if(var_name_129) { var_name_129 = come_decrement_ref_count(var_name_129, (void*)0, (void*)0, 0, 0); }
                    come_release_malloced_mem();
                    return __result71__;
                }
            }
            if(is_contained_generics_class(type_94,info)) {
                __dec_obj94=type_94;
                type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=solve_generics(type_94,info->generics_type,info))));
                if(__dec_obj94) { come_call_finalizer(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value170) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0); }
            }
            else {
                if(!output_generics_struct(type_94,type_94,info)) {
                    new_name_131=(char*)come_increment_ref_count(((char*)(right_value171=create_generics_name(type_94,info))));
                    if(right_value171) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0); }
                    err_msg(info,"output generics is failed(%s)",new_name_131);
                    exit(1);
                    if(new_name_131) { new_name_131 = come_decrement_ref_count(new_name_131, (void*)0, (void*)0, 0, 0); }
                }
            }
            type_94->mConstant=type_94->mConstant||constant_57;
            type_94->mRegister=register__60;
            type_94->mUnsigned=type_94->mUnsigned||unsigned__61;
            type_94->mVolatile=volatile__59;
            type_94->mStatic=type_94->mStatic||static__58;
            type_94->mExtern=type_94->mExtern||extern__70;
            type_94->mInline=type_94->mInline||inline__71;
            type_94->mRestrict=type_94->mRestrict||restrict__65;
            type_94->mLongLong=type_94->mLongLong||long_long_63;
            type_94->mLong=type_94->mLong||long__62;
            type_94->mShort=type_94->mShort||short__64;
        }
        else {
            if(struct__66) {
                klass_132=map$2charphsClassphp_operator_load_element(info->classes,type_name_56);
                if(klass_132==((void*)0)&&*info->p!=60) {
                    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_56),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value179=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value178=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),type_name_56,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0)))));
                    if(right_value178) { come_call_finalizer(sClass_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_value179) { come_call_finalizer(sClass_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
            __dec_obj95=type_94;
            type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value180=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),type_name_56,info,(_Bool)0))));
            if(__dec_obj95) { come_call_finalizer(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value180) { come_call_finalizer(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value181) { come_call_finalizer(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0); }
            type_94->mConstant=type_94->mConstant||constant_57;
            type_94->mRegister=register__60;
            type_94->mUnsigned=type_94->mUnsigned||unsigned__61;
            type_94->mVolatile=volatile__59;
            type_94->mStatic=type_94->mStatic||static__58;
            type_94->mExtern=type_94->mExtern||extern__70;
            type_94->mInline=type_94->mInline||inline__71;
            type_94->mRestrict=type_94->mRestrict||restrict__65;
            type_94->mLongLong=type_94->mLongLong||long_long_63;
            type_94->mLong=type_94->mLong||long__62;
            type_94->mShort=type_94->mShort||short__64;
        }
        if(memcmp(info->p,"const ",strlen("const "))==0) {
            info->p+=strlen("const ");
            skip_spaces_and_lf(info);
            type_94->mConstant=(_Bool)1;
        }
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            if(memcmp(info->p,"const ",strlen("const "))==0) {
                info->p+=strlen("const ");
                skip_spaces_and_lf(info);
                type_94->mConstant=(_Bool)1;
            }
            type_94->mPointerNum++;
            if(type_94->mNoSolvedGenericsType->v1) {
                type_94->mNoSolvedGenericsType->v1->mPointerNum++;
            }
        }
        if(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            type_94->mHeap=(_Bool)1;
            if(type_94->mNoSolvedGenericsType->v1) {
                type_94->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
            }
        }
        if(*info->p==38) {
            info->p++;
            skip_spaces_and_lf(info);
            type_94->mNoHeap=(_Bool)1;
            if(type_94->mNoSolvedGenericsType->v1) {
                type_94->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
            }
        }
        if(*info->p==63) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(*info->p==124) {
            info->p++;
            skip_spaces_and_lf(info);
            type_94->mNoCallingDestructor=(_Bool)1;
        }
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            if(memcmp(info->p,"const ",strlen("const "))==0) {
                info->p+=strlen("const ");
                skip_spaces_and_lf(info);
                type_94->mConstant=(_Bool)1;
            }
            type_94->mPointerNum++;
            if(type_94->mNoSolvedGenericsType->v1) {
                type_94->mNoSolvedGenericsType->v1->mPointerNum++;
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
            types_173=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value183=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value182=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
            if(right_value183) { come_call_finalizer(list$1sTypephp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0); }
            list$1sTypephp_push_back(types_173,(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(type_94)))));
            if(right_value184) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0); }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assgin_var5=((struct tuple3$3sTypephcharphbool*)(right_value185=parse_type(info,(_Bool)0,(_Bool)0)));
                type2_174=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                name_175=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                err_176=multiple_assgin_var5->v3;
                if(right_value185) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0); }
                if(!err_176) {
                    struct tuple3$3sTypephcharphbool* __result82__ = ((struct tuple3$3sTypephcharphbool*)(right_value187=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value186=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(type2_174) { come_call_finalizer(sType_finalize,type2_174, (void*)0, (void*)0, 0, 0, 0); }
                    if(name_175) { name_175 = come_decrement_ref_count(name_175, (void*)0, (void*)0, 0, 0); }
                    if(types_173) { come_call_finalizer(list$1sTypephp_finalize,types_173, (void*)0, (void*)0, 0, 0, 0); }
                    come_release_malloced_mem();
                    return __result82__;
                }
                list$1sTypephp_push_back(types_173,(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(type2_174)))));
                if(right_value188) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0); }
                if(type2_174) { come_call_finalizer(sType_finalize,type2_174, (void*)0, (void*)0, 0, 0, 0); }
                if(name_175) { name_175 = come_decrement_ref_count(name_175, (void*)0, (void*)0, 0, 0); }
            }
            num_tuples_177=list$1sTypephp_length(types_173);
            __dec_obj96=type_94;
            type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value189=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),((char*)(right_value190=xsprintf("tuple%d",num_tuples_177))),info,(_Bool)0))));
            if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value189) { come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value190) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0); }
            if(right_value191) { come_call_finalizer(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0); }
            type_94->mPointerNum++;
            type_94->mHeap=(_Bool)1;
            for(
            it_178=list$1sTypephp_begin((types_173));
            !list$1sTypephp_end((types_173));
            it_178=list$1sTypephp_next((types_173))
            ){
                list$1sTypephp_push_back(type_94->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sTypep_clone(it_178)))));
                if(right_value192) { come_call_finalizer(sTypep_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(is_contained_generics_class(type_94,info)) {
                __dec_obj97=type_94;
                type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=solve_generics(type_94,info->generics_type,info))));
                if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value193) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0); }
            }
            else {
                if(!output_generics_struct(type_94,type_94,info)) {
                    new_name_179=(char*)come_increment_ref_count(((char*)(right_value194=create_generics_name(type_94,info))));
                    if(right_value194) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0); }
                    err_msg(info,"output generics is failed(%s)",new_name_179);
                    exit(1);
                    if(new_name_179) { new_name_179 = come_decrement_ref_count(new_name_179, (void*)0, (void*)0, 0, 0); }
                }
            }
            if(types_173) { come_call_finalizer(list$1sTypephp_finalize,types_173, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(parse_variable_name) {
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj98=var_name_95;
                var_name_95=(char*)come_increment_ref_count(((char*)(right_value195=parse_word(info))));
                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0); }
                if(right_value195) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0); }
            }
            else {
                num_anonymous_var_name_180++;
                __dec_obj99=var_name_95;
                var_name_95=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("anonymous_var_name%d",num_anonymous_var_name_180))));
                if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0); }
                if(right_value196) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0); }
            }
        }
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_94->mPointerNum++;
            break;
        }
        node_181=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=expression_v13(info))));
        if(right_value197) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0); } 
        list$1sNodephp_push_back(type_94->mArrayNum,(struct sNode*)come_increment_ref_count(node_181));
        expected_next_character(93,info);
        if(node_181) { node_181 = come_decrement_ref_count(node_181, ((struct sNode*)node_181)->finalize, ((struct sNode*)node_181)->_protocol_obj, 0, 0); } 
    }
    struct tuple3$3sTypephcharphbool* __result84__ = ((struct tuple3$3sTypephcharphbool*)(right_value202=tuple3$3sTypephcharphboolp_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value201=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1))))),(struct sType*)come_increment_ref_count(type_94),(char*)come_increment_ref_count(var_name_95),(_Bool)1)));
    if(type_name_56) { type_name_56 = come_decrement_ref_count(type_name_56, (void*)0, (void*)0, 0, 0); }
    if(type_94) { come_call_finalizer(sType_finalize,type_94, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_95) { var_name_95 = come_decrement_ref_count(var_name_95, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result84__;
come_release_malloced_mem();
}

void parse_sharp_v5(struct sInfo* info){
int line_1;
char* p_3;
void* right_value0;
char* __dec_obj1;
memset(&line_1, 0, sizeof(int)); /* ddd */
memset(&p_3, 0, sizeof(char*)); /* ddd */
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
        if(xisdigit(*info->p)) {
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
come_release_malloced_mem();
}

void skip_paren(struct sInfo* info){
int nest_0;
memset(&nest_0, 0, sizeof(int)); /* ddd */
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
come_release_malloced_mem();
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_5;
memset(&result_5, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sType* __result9__ = self->it->item;
            come_release_malloced_mem();
            return __result9__;
        }
        memset(&result_5,0,sizeof(struct sType*));
        struct sType* __result10__ = result_5;
        come_release_malloced_mem();
        return __result10__;
    come_release_malloced_mem();
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
        _Bool __result11__ = self->it==((void*)0);
        come_release_malloced_mem();
        return __result11__;
    come_release_malloced_mem();
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_7;
memset(&result_7, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sType* __result12__ = self->it->item;
            come_release_malloced_mem();
            return __result12__;
        }
        memset(&result_7,0,sizeof(struct sType*));
        struct sType* __result13__ = result_7;
        come_release_malloced_mem();
        return __result13__;
    come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1sTypeph* __result17__ = self;
        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result17__;
    come_release_malloced_mem();
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_8;
struct list_item$1sTypeph* prev_it_13;
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&prev_it_13, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
            it_8=self->head;
            while(it_8!=((void*)0)) {
                if(1) {
                    if(it_8->item) { come_call_finalizer(sType_finalize,it_8->item, (void*)0, (void*)0, 0, 0, 0); }
                }
                prev_it_13=it_8;
                it_8=it_8->next;
                come_free_object(prev_it_13);
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

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_9;
struct list_item$1sNodeph* prev_it_10;
memset(&it_9, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&prev_it_10, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                                it_9=self->head;
                                while(it_9!=((void*)0)) {
                                    if(1) {
                                        if(it_9->item) { it_9->item = come_decrement_ref_count(it_9->item, ((struct sNode*)it_9->item)->finalize, ((struct sNode*)it_9->item)->_protocol_obj, 0, 0); } 
                                    }
                                    prev_it_10=it_9;
                                    it_9=it_9->next;
                                    come_free_object(prev_it_10);
                                }
                            come_release_malloced_mem();
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_11;
struct list_item$1charph* prev_it_12;
memset(&it_11, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&prev_it_12, 0, sizeof(struct list_item$1charph*)); /* ddd */
                                it_11=self->head;
                                while(it_11!=((void*)0)) {
                                    if(1) {
                                        if(it_11->item) { it_11->item = come_decrement_ref_count(it_11->item, (void*)0, (void*)0, 0, 0); }
                                    }
                                    prev_it_12=it_11;
                                    it_11=it_11->next;
                                    come_free_object(prev_it_12);
                                }
                            come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1charph* __result18__ = self;
        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result18__;
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

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value13;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj2;
void* right_value14;
struct list_item$1sTypeph* litem_26;
struct sType* __dec_obj3;
void* right_value15;
struct list_item$1sTypeph* litem_27;
struct sType* __dec_obj4;
memset(&right_value13, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value14, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value15, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                if(self->len==0) {
                    litem_25=((struct list_item$1sTypeph*)(right_value13=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_25->prev=((void*)0);
                    litem_25->next=((void*)0);
                    __dec_obj2=litem_25->item;
                    litem_25->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj2) { come_call_finalizer(sType_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_25;
                    self->head=litem_25;
                }
                else if(self->len==1) {
                    litem_26=((struct list_item$1sTypeph*)(right_value14=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_26->prev=self->head;
                    litem_26->next=((void*)0);
                    __dec_obj3=litem_26->item;
                    litem_26->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj3) { come_call_finalizer(sType_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_26;
                    self->head->next=litem_26;
                }
                else {
                    litem_27=((struct list_item$1sTypeph*)(right_value15=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_27->prev=self->tail;
                    litem_27->next=((void*)0);
                    __dec_obj4=litem_27->item;
                    litem_27->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail->next=litem_27;
                    self->tail=litem_27;
                }
                self->len++;
                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
}

static struct sType* sType_clone(struct sType* self){
void* right_value16;
struct sType* result_28;
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
memset(&result_28, 0, sizeof(struct sType*)); /* ddd */
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
                    come_release_malloced_mem();
                    return __result19__;
                }
                result_28=(struct sType*)come_increment_ref_count(((struct sType*)(right_value16=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
                if(right_value16) { come_call_finalizer(sType_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_28->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj6=result_28->mNoSolvedGenericsType;
                    result_28->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value19=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj6) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value19) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj7=result_28->mGenericsName;
                    result_28->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value20=string_clone(self->mGenericsName))));
                    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
                    if(right_value20) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj11=result_28->mGenericsTypes;
                    result_28->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value27=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj11) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value27) { come_call_finalizer(list$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj15=result_28->mArrayNum;
                    result_28->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value35=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj15) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value35) { come_call_finalizer(list$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_28->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj16=result_28->mParamTypes;
                    result_28->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value36=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj16) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value36) { come_call_finalizer(list$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj20=result_28->mParamNames;
                    result_28->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value43=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj20) { come_call_finalizer(list$1charphp_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value43) { come_call_finalizer(list$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj21=result_28->mResultType;
                    result_28->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value44=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj21) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value44) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_28->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)) {
                    result_28->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_28->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_28->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_28->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_28->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_28->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_28->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_28->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_28->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_28->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_28->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_28->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_28->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_28->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_28->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_28->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_28->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_28->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_28->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)) {
                    result_28->mSizeNum=self->mSizeNum;
                }
                if(self!=((void*)0)) {
                    result_28->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_28->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj22=result_28->mOriginalTypeName;
                    result_28->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value45=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
                    if(right_value45) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_28->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_28->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_28->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_28->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_28->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_28->mInline=self->mInline;
                }
                struct sType* __result31__ = result_28;
                if(result_28) { come_call_finalizer(sType_finalize,result_28, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result31__;
            come_release_malloced_mem();
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value17;
struct tuple1$1sTypeph* result_29;
void* right_value18;
struct sType* __dec_obj5;
memset(&right_value17, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct tuple1$1sTypeph* __result20__ = (void*)0;
                            come_release_malloced_mem();
                            return __result20__;
                        }
                        result_29=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                        if(right_value17) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0); }
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            __dec_obj5=result_29->v1;
                            result_29->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=sType_clone(self->v1))));
                            if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value18) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        struct tuple1$1sTypeph* __result21__ = result_29;
                        if(result_29) { come_call_finalizer(tuple1$1sTypephp_finalize,result_29, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result21__;
                    come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value21;
void* right_value22;
struct list$1sTypeph* result_30;
struct list_item$1sTypeph* it_31;
void* right_value26;
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&result_30, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_31, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value26, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1sTypeph* __result22__ = ((void*)0);
                            come_release_malloced_mem();
                            return __result22__;
                        }
                        result_30=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                        if(right_value22) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
                        it_31=self->head;
                        while(it_31!=((void*)0)) {
                            list$1sTypephp_push_back2(result_30,(struct sType*)come_increment_ref_count(((struct sType*)(right_value26=sType_clone(it_31->item)))));
                            if(right_value26) { come_call_finalizer(sType_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0); }
                            it_31=it_31->next;
                        }
                        struct list$1sTypeph* __result23__ = result_30;
                        if(result_30) { come_call_finalizer(list$1sTypephp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result23__;
                    come_release_malloced_mem();
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value23;
struct list_item$1sTypeph* litem_32;
struct sType* __dec_obj8;
void* right_value24;
struct list_item$1sTypeph* litem_33;
struct sType* __dec_obj9;
void* right_value25;
struct list_item$1sTypeph* litem_34;
struct sType* __dec_obj10;
memset(&right_value23, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value24, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value25, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                                if(self->len==0) {
                                    litem_32=((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                    litem_32->prev=((void*)0);
                                    litem_32->next=((void*)0);
                                    __dec_obj8=litem_32->item;
                                    litem_32->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0); }
                                    self->tail=litem_32;
                                    self->head=litem_32;
                                }
                                else if(self->len==1) {
                                    litem_33=((struct list_item$1sTypeph*)(right_value24=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                    litem_33->prev=self->head;
                                    litem_33->next=((void*)0);
                                    __dec_obj9=litem_33->item;
                                    litem_33->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0); }
                                    self->tail=litem_33;
                                    self->head->next=litem_33;
                                }
                                else {
                                    litem_34=((struct list_item$1sTypeph*)(right_value25=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                    litem_34->prev=self->tail;
                                    litem_34->next=((void*)0);
                                    __dec_obj10=litem_34->item;
                                    litem_34->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0); }
                                    self->tail->next=litem_34;
                                    self->tail=litem_34;
                                }
                                self->len++;
                                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                            come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value28;
void* right_value29;
struct list$1sNodeph* result_35;
struct list_item$1sNodeph* it_36;
void* right_value34;
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&result_35, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_36, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value34, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1sNodeph* __result24__ = ((void*)0);
                            come_release_malloced_mem();
                            return __result24__;
                        }
                        result_35=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value29=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value28=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                        if(right_value29) { come_call_finalizer(list$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0); }
                        it_36=self->head;
                        while(it_36!=((void*)0)) {
                            list$1sNodephp_push_back2(result_35,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value34=sNodep_clone(it_36->item)))));
                            if(right_value34) { right_value34 = come_decrement_ref_count(right_value34, ((struct sNode*)right_value34)->finalize, ((struct sNode*)right_value34)->_protocol_obj, 1, 0); } 
                            it_36=it_36->next;
                        }
                        struct list$1sNodeph* __result28__ = result_35;
                        if(result_35) { come_call_finalizer(list$1sNodephp_finalize,result_35, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result28__;
                    come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            struct list$1sNodeph* __result25__ = self;
                            if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            come_release_malloced_mem();
                            return __result25__;
                        come_release_malloced_mem();
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value30;
struct list_item$1sNodeph* litem_37;
struct sNode* __dec_obj12;
void* right_value31;
struct list_item$1sNodeph* litem_38;
struct sNode* __dec_obj13;
void* right_value32;
struct list_item$1sNodeph* litem_39;
struct sNode* __dec_obj14;
memset(&right_value30, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value31, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value32, 0, sizeof(void*));
memset(&litem_39, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                                if(self->len==0) {
                                    litem_37=((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                    litem_37->prev=((void*)0);
                                    litem_37->next=((void*)0);
                                    __dec_obj12=litem_37->item;
                                    litem_37->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0); }
                                    self->tail=litem_37;
                                    self->head=litem_37;
                                }
                                else if(self->len==1) {
                                    litem_38=((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                    litem_38->prev=self->head;
                                    litem_38->next=((void*)0);
                                    __dec_obj13=litem_38->item;
                                    litem_38->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0); }
                                    self->tail=litem_38;
                                    self->head->next=litem_38;
                                }
                                else {
                                    litem_39=((struct list_item$1sNodeph*)(right_value32=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                    litem_39->prev=self->tail;
                                    litem_39->next=((void*)0);
                                    __dec_obj14=litem_39->item;
                                    litem_39->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0); }
                                    self->tail->next=litem_39;
                                    self->tail=litem_39;
                                }
                                self->len++;
                                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
                            come_release_malloced_mem();
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value33;
struct sNode* result_40;
memset(&right_value33, 0, sizeof(void*));
memset(&result_40, 0, sizeof(struct sNode*)); /* ddd */
                                if(self==(void*)0) {
                                    struct sNode* __result26__ = (void*)0;
                                    come_release_malloced_mem();
                                    return __result26__;
                                }
                                result_40=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
                                if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                    result_40->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(self!=((void*)0)) {
                                    result_40->finalize=self->finalize;
                                }
                                if(self!=((void*)0)) {
                                    result_40->clone=self->clone;
                                }
                                if(self!=((void*)0)) {
                                    result_40->compile=self->compile;
                                }
                                if(self!=((void*)0)) {
                                    result_40->sline=self->sline;
                                }
                                if(self!=((void*)0)) {
                                    result_40->sname=self->sname;
                                }
                                if(self!=((void*)0)) {
                                    result_40->terminated=self->terminated;
                                }
                                struct sNode* __result27__ = result_40;
                                come_release_malloced_mem();
                                return __result27__;
                            come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value37;
void* right_value38;
struct list$1charph* result_41;
struct list_item$1charph* it_42;
void* right_value42;
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&result_41, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_42, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct list$1charph* __result29__ = ((void*)0);
                            come_release_malloced_mem();
                            return __result29__;
                        }
                        result_41=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value37=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                        if(right_value38) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
                        it_42=self->head;
                        while(it_42!=((void*)0)) {
                            list$1charphp_push_back2(result_41,(char*)come_increment_ref_count(((char*)(right_value42=string_clone(it_42->item)))));
                            if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
                            it_42=it_42->next;
                        }
                        struct list$1charph* __result30__ = result_41;
                        if(result_41) { come_call_finalizer(list$1charphp_finalize,result_41, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result30__;
                    come_release_malloced_mem();
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value39;
struct list_item$1charph* litem_43;
char* __dec_obj17;
void* right_value40;
struct list_item$1charph* litem_44;
char* __dec_obj18;
void* right_value41;
struct list_item$1charph* litem_45;
char* __dec_obj19;
memset(&right_value39, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value40, 0, sizeof(void*));
memset(&litem_44, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value41, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1charph*)); /* ddd */
                                if(self->len==0) {
                                    litem_43=((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                    litem_43->prev=((void*)0);
                                    litem_43->next=((void*)0);
                                    __dec_obj17=litem_43->item;
                                    litem_43->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
                                    self->tail=litem_43;
                                    self->head=litem_43;
                                }
                                else if(self->len==1) {
                                    litem_44=((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                    litem_44->prev=self->head;
                                    litem_44->next=((void*)0);
                                    __dec_obj18=litem_44->item;
                                    litem_44->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
                                    self->tail=litem_44;
                                    self->head->next=litem_44;
                                }
                                else {
                                    litem_45=((struct list_item$1charph*)(right_value41=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                    litem_45->prev=self->tail;
                                    litem_45->next=((void*)0);
                                    __dec_obj19=litem_45->item;
                                    litem_45->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
                                    self->tail->next=litem_45;
                                    self->tail=litem_45;
                                }
                                self->len++;
                                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
                            come_release_malloced_mem();
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value47;
struct list_item$1charph* litem_46;
char* __dec_obj23;
void* right_value48;
struct list_item$1charph* litem_47;
char* __dec_obj24;
void* right_value49;
struct list_item$1charph* litem_48;
char* __dec_obj25;
memset(&right_value47, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value48, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value49, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1charph*)); /* ddd */
                if(self->len==0) {
                    litem_46=((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_46->prev=((void*)0);
                    litem_46->next=((void*)0);
                    __dec_obj23=litem_46->item;
                    litem_46->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_46;
                    self->head=litem_46;
                }
                else if(self->len==1) {
                    litem_47=((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_47->prev=self->head;
                    litem_47->next=((void*)0);
                    __dec_obj24=litem_47->item;
                    litem_47->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_47;
                    self->head->next=litem_47;
                }
                else {
                    litem_48=((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_48->prev=self->tail;
                    litem_48->next=((void*)0);
                    __dec_obj25=litem_48->item;
                    litem_48->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_48;
                    self->tail=litem_48;
                }
                self->len++;
                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
            come_release_malloced_mem();
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
        come_release_malloced_mem();
        return __result32__;
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
                        come_release_malloced_mem();
                        return __result34__;
                    come_release_malloced_mem();
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
struct sType* default_value_102;
memset(&default_value_102, 0, sizeof(struct sType*)); /* bbb */
            memset(&default_value_102,0,sizeof(struct sType*));
            struct sType* __result49__ = map$2charphsTypephp_at(self,key,default_value_102);
            come_release_malloced_mem();
            return __result49__;
        come_release_malloced_mem();
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
int hash_103;
int it_104;
memset(&hash_103, 0, sizeof(int)); /* ddd */
memset(&it_104, 0, sizeof(int)); /* ddd */
                hash_103=string_get_hash_key(((char*)key))%self->size;
                it_104=hash_103;
                while((_Bool)1) {
                    if(self->item_existance[it_104]) {
                        if(charp_equals(self->keys[it_104],key)) {
                            struct sType* __result45__ = self->items[it_104];
                            come_release_malloced_mem();
                            return __result45__;
                        }
                        it_104++;
                        if(it_104>=self->size) {
                            it_104=0;
                        }
                        else if(it_104==hash_103) {
                            struct sType* __result46__ = default_value;
                            come_release_malloced_mem();
                            return __result46__;
                        }
                    }
                    else {
                        struct sType* __result47__ = default_value;
                        come_release_malloced_mem();
                        return __result47__;
                    }
                }
                struct sType* __result48__ = default_value;
                come_release_malloced_mem();
                return __result48__;
            come_release_malloced_mem();
}

static struct sType* sTypep_clone(struct sType* self){
void* right_value122;
struct sType* result_105;
void* right_value123;
struct tuple1$1sTypeph* __dec_obj64;
void* right_value124;
char* __dec_obj65;
void* right_value125;
struct list$1sTypeph* __dec_obj66;
void* right_value126;
struct list$1sNodeph* __dec_obj67;
void* right_value127;
struct list$1sTypeph* __dec_obj68;
void* right_value128;
struct list$1charph* __dec_obj69;
void* right_value129;
struct tuple1$1sTypeph* __dec_obj70;
void* right_value130;
char* __dec_obj71;
memset(&right_value122, 0, sizeof(void*));
memset(&result_105, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sType* __result50__ = (void*)0;
                    come_release_malloced_mem();
                    return __result50__;
                }
                result_105=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
                if(right_value122) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_105->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj64=result_105->mNoSolvedGenericsType;
                    result_105->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value123=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj64) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value123) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj65=result_105->mGenericsName;
                    result_105->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value124=string_clone(self->mGenericsName))));
                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
                    if(right_value124) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj66=result_105->mGenericsTypes;
                    result_105->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value125=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj66) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value125) { come_call_finalizer(list$1sTypephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj67=result_105->mArrayNum;
                    result_105->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value126=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj67) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value126) { come_call_finalizer(list$1sNodephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_105->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj68=result_105->mParamTypes;
                    result_105->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value127=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj68) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value127) { come_call_finalizer(list$1sTypephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj69=result_105->mParamNames;
                    result_105->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value128=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj69) { come_call_finalizer(list$1charphp_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value128) { come_call_finalizer(list$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj70=result_105->mResultType;
                    result_105->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value129=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj70) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value129) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_105->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)) {
                    result_105->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_105->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_105->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_105->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_105->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_105->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_105->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_105->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_105->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_105->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_105->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_105->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_105->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_105->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_105->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_105->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_105->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_105->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_105->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)) {
                    result_105->mSizeNum=self->mSizeNum;
                }
                if(self!=((void*)0)) {
                    result_105->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_105->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj71=result_105->mOriginalTypeName;
                    result_105->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
                    if(right_value130) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_105->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_105->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_105->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_105->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_105->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_105->mInline=self->mInline;
                }
                struct sType* __result51__ = result_105;
                if(result_105) { come_call_finalizer(sType_finalize,result_105, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result51__;
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

static _Bool list$1charphp_contained(struct list$1charph* self, char* item){
char* it_107;
memset(&it_107, 0, sizeof(char*)); /* ddd */
            for(
            it_107=list$1charphp_begin(self);
            !list$1charphp_end(self);
            it_107=list$1charphp_next(self)
            ){
                if(charp_operator_equals(it_107,item)) {
                    _Bool __result57__ = (_Bool)1;
                    come_release_malloced_mem();
                    return __result57__;
                }
            }
            _Bool __result58__ = (_Bool)0;
            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
            come_release_malloced_mem();
            return __result58__;
        come_release_malloced_mem();
}

static char* list$1charphp_begin(struct list$1charph* self){
char* result_106;
memset(&result_106, 0, sizeof(char*)); /* bbb */
                self->it=self->head;
                if(self->it) {
                    char* __result52__ = self->it->item;
                    come_release_malloced_mem();
                    return __result52__;
                }
                memset(&result_106,0,sizeof(char*));
                char* __result53__ = result_106;
                come_release_malloced_mem();
                return __result53__;
            come_release_malloced_mem();
}

static _Bool list$1charphp_end(struct list$1charph* self){
                _Bool __result54__ = self->it==((void*)0);
                come_release_malloced_mem();
                return __result54__;
            come_release_malloced_mem();
}

static char* list$1charphp_next(struct list$1charph* self){
char* result_108;
memset(&result_108, 0, sizeof(char*)); /* bbb */
                self->it=self->it->next;
                if(self->it) {
                    char* __result55__ = self->it->item;
                    come_release_malloced_mem();
                    return __result55__;
                }
                memset(&result_108,0,sizeof(char*));
                char* __result56__ = result_108;
                come_release_malloced_mem();
                return __result56__;
            come_release_malloced_mem();
}

static int list$1charphp_length(struct list$1charph* self){
                int __result59__ = self->len;
                come_release_malloced_mem();
                return __result59__;
            come_release_malloced_mem();
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index){
char* default_value_110;
memset(&default_value_110, 0, sizeof(char*)); /* bbb */
                    memset(&default_value_110,0,sizeof(char*));
                    char* __result62__ = list$1charphp_item(self,index,default_value_110);
                    come_release_malloced_mem();
                    return __result62__;
                come_release_malloced_mem();
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_111;
int i_112;
memset(&it_111, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_112, 0, sizeof(int)); /* ddd */
                        if(position<0) {
                            position+=self->len;
                        }
                        it_111=self->head;
                        i_112=0;
                        while(it_111!=((void*)0)) {
                            if(position==i_112) {
                                char* __result60__ = it_111->item;
                                come_release_malloced_mem();
                                return __result60__;
                            }
                            it_111=it_111->next;
                            i_112++;
                        }
                        char* __result61__ = default_value;
                        come_release_malloced_mem();
                        return __result61__;
                    come_release_malloced_mem();
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
struct sType* __dec_obj77;
            __dec_obj77=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            if(__dec_obj77) { come_call_finalizer(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0); }
            struct tuple1$1sTypeph* __result63__ = self;
            if(self) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result63__;
        come_release_malloced_mem();
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
struct sClass* default_value_125;
memset(&default_value_125, 0, sizeof(struct sClass*)); /* bbb */
                memset(&default_value_125,0,sizeof(struct sClass*));
                struct sClass* __result68__ = map$2charphsClassphp_at(self,key,default_value_125);
                come_release_malloced_mem();
                return __result68__;
            come_release_malloced_mem();
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_126;
int it_127;
memset(&hash_126, 0, sizeof(int)); /* ddd */
memset(&it_127, 0, sizeof(int)); /* ddd */
                    hash_126=string_get_hash_key(((char*)key))%self->size;
                    it_127=hash_126;
                    while((_Bool)1) {
                        if(self->item_existance[it_127]) {
                            if(charp_equals(self->keys[it_127],key)) {
                                struct sClass* __result64__ = self->items[it_127];
                                come_release_malloced_mem();
                                return __result64__;
                            }
                            it_127++;
                            if(it_127>=self->size) {
                                it_127=0;
                            }
                            else if(it_127==hash_126) {
                                struct sClass* __result65__ = default_value;
                                come_release_malloced_mem();
                                return __result65__;
                            }
                        }
                        else {
                            struct sClass* __result66__ = default_value;
                            come_release_malloced_mem();
                            return __result66__;
                        }
                    }
                    struct sClass* __result67__ = default_value;
                    come_release_malloced_mem();
                    return __result67__;
                come_release_malloced_mem();
}

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
int hash_146;
int it_147;
_Bool same_key_exist_166;
char* it2_168;
memset(&hash_146, 0, sizeof(int)); /* ddd */
memset(&it_147, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_166, 0, sizeof(_Bool)); /* ddd */
memset(&it2_168, 0, sizeof(char*)); /* ddd */
                        if(self->len*2>=self->size) {
                            map$2charphsClassphp_rehash(self);
                        }
                        hash_146=string_get_hash_key(key)%self->size;
                        it_147=hash_146;
                        while((_Bool)1) {
                            if(self->item_existance[it_147]) {
                                if(charp_equals(self->keys[it_147],key)) {
                                    if(1) {
                                        list$1charpp_remove(self->key_list,self->keys[it_147]);
                                        if(self->keys[it_147]) { self->keys[it_147] = come_decrement_ref_count(self->keys[it_147], (void*)0, (void*)0, 0, 0); }
                                        self->keys[it_147]=(char*)come_increment_ref_count(key);
                                    }
                                    else {
                                        list$1charpp_remove(self->key_list,self->keys[it_147]);
                                        self->keys[it_147]=key;
                                    }
                                    if(1) {
                                        if(self->items[it_147]) { come_call_finalizer(sClassp_finalize,self->items[it_147], (void*)0, (void*)0, 0, 0, 0); }
                                        self->items[it_147]=(struct sClass*)come_increment_ref_count(item);
                                    }
                                    else {
                                        self->items[it_147]=item;
                                    }
                                    break;
                                }
                                it_147++;
                                if(it_147>=self->size) {
                                    it_147=0;
                                }
                                else if(it_147==hash_146) {
                                    printf("unexpected error in map.insert\n");
                                    exit(2);
                                }
                            }
                            else {
                                self->item_existance[it_147]=(_Bool)1;
                                if(1) {
                                    self->keys[it_147]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    self->keys[it_147]=key;
                                }
                                if(1) {
                                    self->items[it_147]=(struct sClass*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_147]=item;
                                }
                                self->len++;
                                break;
                            }
                        }
                        same_key_exist_166=(_Bool)0;
                        for(
                        it2_168=list$1charpp_begin(self->key_list);
                        !list$1charpp_end(self->key_list);
                        it_147=list$1charpp_next(self->key_list)
                        ){
                            if(charp_equals(it2_168,key)) {
                                same_key_exist_166=(_Bool)1;
                            }
                        }
                        if(!same_key_exist_166) {
                            list$1charpp_push_back(self->key_list,key);
                        }
                        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                        if(item) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_133;
void* right_value172;
char** keys_134;
void* right_value173;
struct sClass** items_135;
void* right_value174;
_Bool* item_existance_136;
int len_137;
char* it_139;
struct sClass* default_value_141;
struct sClass* it2_142;
int hash_143;
int n_144;
struct sClass* default_value_145;
memset(&size_133, 0, sizeof(int)); /* ddd */
memset(&right_value172, 0, sizeof(void*));
memset(&keys_134, 0, sizeof(char**)); /* ddd */
memset(&right_value173, 0, sizeof(void*));
memset(&items_135, 0, sizeof(struct sClass**)); /* ddd */
memset(&right_value174, 0, sizeof(void*));
memset(&item_existance_136, 0, sizeof(_Bool*)); /* ddd */
memset(&len_137, 0, sizeof(int)); /* ddd */
memset(&it_139, 0, sizeof(char*)); /* ddd */
memset(&default_value_141, 0, sizeof(struct sClass*)); /* bbb */
memset(&it2_142, 0, sizeof(struct sClass*)); /* ddd */
memset(&hash_143, 0, sizeof(int)); /* ddd */
memset(&n_144, 0, sizeof(int)); /* ddd */
memset(&default_value_145, 0, sizeof(struct sClass*)); /* bbb */
                                size_133=self->size*3;
                                keys_134=((char**)(right_value172=(char**)come_calloc(1, sizeof(char*)*(1*(size_133)))));
                                items_135=((struct sClass**)(right_value173=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_133)))));
                                item_existance_136=((_Bool*)(right_value174=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_133)))));
                                len_137=0;
                                for(
                                it_139=map$2charphsClassphp_begin(self);
                                !map$2charphsClassphp_end(self);
                                it_139=map$2charphsClassphp_next(self)
                                ){
                                    it2_142=map$2charphsClassphp_at(self,it_139,default_value_141);
                                    hash_143=charp_get_hash_key(it_139)%size_133;
                                    n_144=hash_143;
                                    while((_Bool)1) {
                                        if(item_existance_136[n_144]) {
                                            n_144++;
                                            if(n_144>=size_133) {
                                                n_144=0;
                                            }
                                            else if(n_144==hash_143) {
                                                printf("unexpected error in map.rehash(1)\n");
                                                exit(2);
                                            }
                                        }
                                        else {
                                            item_existance_136[n_144]=(_Bool)1;
                                            keys_134[n_144]=it_139;
                                            items_135[n_144]=map$2charphsClassphp_at(self,it_139,default_value_145);
                                            len_137++;
                                            break;
                                        }
                                    }
                                }
                                come_free_object((char*)self->items);
                                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                                come_free_object((char*)self->keys);
                                self->keys=keys_134;
                                self->items=items_135;
                                self->item_existance=item_existance_136;
                                self->size=size_133;
                                self->len=len_137;
                            come_release_malloced_mem();
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
char* result_138;
memset(&result_138, 0, sizeof(char*)); /* bbb */
                                    self->key_list->it=self->key_list->head;
                                    if(self->key_list->it) {
                                        char* __result72__ = self->key_list->it->item;
                                        come_release_malloced_mem();
                                        return __result72__;
                                    }
                                    memset(&result_138,0,sizeof(char*));
                                    char* __result73__ = result_138;
                                    come_release_malloced_mem();
                                    return __result73__;
                                come_release_malloced_mem();
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
                                    _Bool __result74__ = self->key_list->it==((void*)0);
                                    come_release_malloced_mem();
                                    return __result74__;
                                come_release_malloced_mem();
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
char* result_140;
memset(&result_140, 0, sizeof(char*)); /* bbb */
                                    self->key_list->it=self->key_list->it->next;
                                    if(self->key_list->it) {
                                        char* __result75__ = self->key_list->it->item;
                                        come_release_malloced_mem();
                                        return __result75__;
                                    }
                                    memset(&result_140,0,sizeof(char*));
                                    char* __result76__ = result_140;
                                    come_release_malloced_mem();
                                    return __result76__;
                                come_release_malloced_mem();
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_148;
struct list_item$1charp* it_149;
memset(&it2_148, 0, sizeof(int)); /* ddd */
memset(&it_149, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                            it2_148=0;
                                            it_149=self->head;
                                            while(it_149!=((void*)0)) {
                                                if(charp_equals(it_149->item,item)) {
                                                    list$1charpp_delete(self,it2_148,it2_148+1);
                                                    break;
                                                }
                                                it2_148++;
                                                it_149=it_149->next;
                                            }
                                        come_release_malloced_mem();
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_150;
struct list_item$1charp* it_153;
int i_154;
struct list_item$1charp* prev_it_155;
struct list_item$1charp* it_156;
int i_157;
struct list_item$1charp* prev_it_158;
struct list_item$1charp* it_159;
struct list_item$1charp* head_prev_it_160;
struct list_item$1charp* tail_it_161;
int i_162;
struct list_item$1charp* prev_it_163;
memset(&tmp_150, 0, sizeof(int)); /* ddd */
memset(&it_153, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_154, 0, sizeof(int)); /* ddd */
memset(&prev_it_155, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_156, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_157, 0, sizeof(int)); /* ddd */
memset(&prev_it_158, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_159, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_160, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_161, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_162, 0, sizeof(int)); /* ddd */
memset(&prev_it_163, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                        if(head<0) {
                                                            head+=self->len;
                                                        }
                                                        if(tail<0) {
                                                            tail+=self->len+1;
                                                        }
                                                        if(head>tail) {
                                                            tmp_150=tail;
                                                            tail=head;
                                                            head=tmp_150;
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
                                                            it_153=self->head;
                                                            i_154=0;
                                                            while(it_153!=((void*)0)) {
                                                                if(i_154<tail) {
                                                                    prev_it_155=it_153;
                                                                    it_153=it_153->next;
                                                                    i_154++;
                                                                    if(prev_it_155) { come_call_finalizer(list_item$1charpp_finalize,prev_it_155, (void*)0, (void*)0, 0, 0, 0); }
                                                                    self->len--;
                                                                }
                                                                else if(i_154==tail) {
                                                                    self->head=it_153;
                                                                    self->head->prev=((void*)0);
                                                                    break;
                                                                }
                                                                else {
                                                                    it_153=it_153->next;
                                                                    i_154++;
                                                                }
                                                            }
                                                        }
                                                        else if(tail==self->len) {
                                                            it_156=self->head;
                                                            i_157=0;
                                                            while(it_156!=((void*)0)) {
                                                                if(i_157==head) {
                                                                    self->tail=it_156->prev;
                                                                    self->tail->next=((void*)0);
                                                                }
                                                                if(i_157>=head) {
                                                                    prev_it_158=it_156;
                                                                    it_156=it_156->next;
                                                                    i_157++;
                                                                    if(prev_it_158) { come_call_finalizer(list_item$1charpp_finalize,prev_it_158, (void*)0, (void*)0, 0, 0, 0); }
                                                                    self->len--;
                                                                }
                                                                else {
                                                                    it_156=it_156->next;
                                                                    i_157++;
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            it_159=self->head;
                                                            head_prev_it_160=((void*)0);
                                                            tail_it_161=((void*)0);
                                                            i_162=0;
                                                            while(it_159!=((void*)0)) {
                                                                if(i_162==head) {
                                                                    head_prev_it_160=it_159->prev;
                                                                }
                                                                if(i_162==tail) {
                                                                    tail_it_161=it_159;
                                                                }
                                                                if(i_162>=head&&i_162<tail) {
                                                                    prev_it_163=it_159;
                                                                    it_159=it_159->next;
                                                                    i_162++;
                                                                    if(prev_it_163) { come_call_finalizer(list_item$1charpp_finalize,prev_it_163, (void*)0, (void*)0, 0, 0, 0); }
                                                                    self->len--;
                                                                }
                                                                else {
                                                                    it_159=it_159->next;
                                                                    i_162++;
                                                                }
                                                            }
                                                            if(head_prev_it_160!=((void*)0)) {
                                                                head_prev_it_160->next=tail_it_161;
                                                            }
                                                            if(tail_it_161!=((void*)0)) {
                                                                tail_it_161->prev=head_prev_it_160;
                                                            }
                                                        }
                                                    come_release_malloced_mem();
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_151;
struct list_item$1charp* prev_it_152;
memset(&it_151, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_152, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                                it_151=self->head;
                                                                while(it_151!=((void*)0)) {
                                                                    prev_it_152=it_151;
                                                                    it_151=it_151->next;
                                                                    if(prev_it_152) { come_call_finalizer(list_item$1charpp_finalize,prev_it_152, (void*)0, (void*)0, 0, 0, 0); }
                                                                }
                                                                self->head=((void*)0);
                                                                self->tail=((void*)0);
                                                                self->len=0;
                                                            come_release_malloced_mem();
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
                                                                    come_release_malloced_mem();
}

static void sClassp_finalize(struct sClass* self){
                                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                                            }
                                            if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                                                if(self->mFields) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0); }
                                            }
                                        come_release_malloced_mem();
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_164;
struct list_item$1tuple2$2charphsTypephph* prev_it_165;
memset(&it_164, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&prev_it_165, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
                                                    it_164=self->head;
                                                    while(it_164!=((void*)0)) {
                                                        if(1) {
                                                            if(it_164->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,it_164->item, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        prev_it_165=it_164;
                                                        it_164=it_164->next;
                                                        come_free_object(prev_it_165);
                                                    }
                                                come_release_malloced_mem();
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
                                                                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                                    if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0); }
                                                                }
                                                                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                                                    if(self->v2) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0); }
                                                                }
                                                            come_release_malloced_mem();
}

static char* list$1charpp_begin(struct list$1charp* self){
char* result_167;
memset(&result_167, 0, sizeof(char*)); /* bbb */
                            self->it=self->head;
                            if(self->it) {
                                char* __result77__ = self->it->item;
                                come_release_malloced_mem();
                                return __result77__;
                            }
                            memset(&result_167,0,sizeof(char*));
                            char* __result78__ = result_167;
                            come_release_malloced_mem();
                            return __result78__;
                        come_release_malloced_mem();
}

static _Bool list$1charpp_end(struct list$1charp* self){
                            _Bool __result79__ = self->it==((void*)0);
                            come_release_malloced_mem();
                            return __result79__;
                        come_release_malloced_mem();
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_169;
memset(&result_169, 0, sizeof(char*)); /* bbb */
                            self->it=self->it->next;
                            if(self->it) {
                                char* __result80__ = self->it->item;
                                come_release_malloced_mem();
                                return __result80__;
                            }
                            memset(&result_169,0,sizeof(char*));
                            char* __result81__ = result_169;
                            come_release_malloced_mem();
                            return __result81__;
                        come_release_malloced_mem();
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value175;
struct list_item$1charp* litem_170;
void* right_value176;
struct list_item$1charp* litem_171;
void* right_value177;
struct list_item$1charp* litem_172;
memset(&right_value175, 0, sizeof(void*));
memset(&litem_170, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value176, 0, sizeof(void*));
memset(&litem_171, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value177, 0, sizeof(void*));
memset(&litem_172, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                if(self->len==0) {
                                    litem_170=((struct list_item$1charp*)(right_value175=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                    litem_170->prev=((void*)0);
                                    litem_170->next=((void*)0);
                                    litem_170->item=item;
                                    self->tail=litem_170;
                                    self->head=litem_170;
                                }
                                else if(self->len==1) {
                                    litem_171=((struct list_item$1charp*)(right_value176=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                    litem_171->prev=self->head;
                                    litem_171->next=((void*)0);
                                    litem_171->item=item;
                                    self->tail=litem_171;
                                    self->head->next=litem_171;
                                }
                                else {
                                    litem_172=((struct list_item$1charp*)(right_value177=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                    litem_172->prev=self->tail;
                                    litem_172->next=((void*)0);
                                    litem_172->item=item;
                                    self->tail->next=litem_172;
                                    self->tail=litem_172;
                                }
                                self->len++;
                            come_release_malloced_mem();
}

static void sClass_finalize(struct sClass* self){
                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
                            }
                            if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                                if(self->mFields) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0); }
                            }
                        come_release_malloced_mem();
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
                int __result83__ = self->len;
                come_release_malloced_mem();
                return __result83__;
            come_release_malloced_mem();
}

static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* right_value198;
struct list_item$1sNodeph* litem_182;
struct sNode* __dec_obj100;
void* right_value199;
struct list_item$1sNodeph* litem_183;
struct sNode* __dec_obj101;
void* right_value200;
struct list_item$1sNodeph* litem_184;
struct sNode* __dec_obj102;
memset(&right_value198, 0, sizeof(void*));
memset(&litem_182, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value199, 0, sizeof(void*));
memset(&litem_183, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value200, 0, sizeof(void*));
memset(&litem_184, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
            if(self->len==0) {
                litem_182=((struct list_item$1sNodeph*)(right_value198=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                litem_182->prev=((void*)0);
                litem_182->next=((void*)0);
                __dec_obj100=litem_182->item;
                litem_182->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0); }
                self->tail=litem_182;
                self->head=litem_182;
            }
            else if(self->len==1) {
                litem_183=((struct list_item$1sNodeph*)(right_value199=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                litem_183->prev=self->head;
                litem_183->next=((void*)0);
                __dec_obj101=litem_183->item;
                litem_183->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0); }
                self->tail=litem_183;
                self->head->next=litem_183;
            }
            else {
                litem_184=((struct list_item$1sNodeph*)(right_value200=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                litem_184->prev=self->tail;
                litem_184->next=((void*)0);
                __dec_obj102=litem_184->item;
                litem_184->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0); }
                self->tail->next=litem_184;
                self->tail=litem_184;
            }
            self->len++;
            if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
        come_release_malloced_mem();
}

