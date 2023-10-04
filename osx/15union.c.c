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
struct sUnionNode
{
    struct sType* mType;
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

struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, struct sType* type, struct sInfo* info);

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
static void map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static void list$1charpp_remove(struct list$1charp* self, char* item);
static void list$1charpp_delete(struct list$1charp* self, int head, int tail);
static void list$1charpp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void sTypep_finalize(struct sType* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void list$1charpp_push_back(struct list$1charp* self, char* item);
static void sUnionNode_finalize(struct sUnionNode* self);
_Bool sUnionNode_terminated();

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self);
int sUnionNode_sline(struct sUnionNode* self, struct sInfo* info);

char* sUnionNode_sname(struct sUnionNode* self, struct sInfo* info);

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClassp_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_reset(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void list$1tuple2$2charphsTypephphp_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self);
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






struct sNode* parse_union(char* type_name, struct sInfo* info){
void* right_value50;
void* right_value51;
void* right_value52;
void* right_value53;
struct sType* type_93;
void* right_value54;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* type2_96;
char* name_97;
_Bool err_98;
void* right_value58;
void* right_value59;
void* right_value60;
void* right_value61;
struct sNode* _inf_value1;
struct sUnionNode* _inf_obj_value1;
void* right_value65;
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&type_93, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value54, 0, sizeof(void*));
memset(&type2_96, 0, sizeof(struct sType*)); /* ccc */
memset(&name_97, 0, sizeof(char*)); /* ccc */
memset(&err_98, 0, sizeof(_Bool)); /* ccc */
memset(&type2_96, 0, sizeof(struct sType*)); /* eee */
memset(&name_97, 0, sizeof(char*)); /* eee */
memset(&err_98, 0, sizeof(_Bool)); /* eee */
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value51=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value50=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),type_name,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
    if(right_value50) { come_call_finalizer(sClass_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value51) { come_call_finalizer(sClass_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0); }
    type_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value52=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),type_name,info,(_Bool)0))));
    if(right_value52) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value53) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0); }
    expected_next_character(123,info);
    list$1tuple2$2charphsTypephphp_reset(type_93->mClass->mFields);
    while((_Bool)1) {
        multiple_assgin_var2=((struct tuple3$3sTypephcharphbool*)(right_value54=parse_type(info,(_Bool)1,(_Bool)1)));
        type2_96=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
        name_97=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
        err_98=multiple_assgin_var2->v3;
        if(right_value54) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0); }
        if(!err_98) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(59,info);
        list$1tuple2$2charphsTypephphp_push_back(type_93->mClass->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value59=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value58=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(name_97),(struct sType*)come_increment_ref_count(type2_96))))));
        if(right_value59) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
        if(*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        if(type2_96) { come_call_finalizer(sType_finalize,type2_96, (void*)0, (void*)0, 0, 0, 0); }
        if(name_97) { name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0, 0); }
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value1=come_increment_ref_count(((struct sUnionNode*)(right_value61=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value60=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1))))),(struct sType*)come_increment_ref_count(type_93),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sUnionNode_finalize;
    _inf_value1->clone=sUnionNode_clone;
    _inf_value1->compile=sUnionNode_compile;
    _inf_value1->sline=sUnionNode_sline;
    _inf_value1->sname=sUnionNode_sname;
    _inf_value1->terminated=sUnionNode_terminated;
    struct sNode* __result58__ = ((struct sNode*)(right_value65=_inf_value1));
    if(type_name) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1); }
    if(type_93) { come_call_finalizer(sType_finalize,type_93, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value60) { come_call_finalizer(sUnionNode_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value61) { come_call_finalizer(sUnionNode_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
    come_release_malloced_mem();
    return __result58__;
come_release_malloced_mem();
}

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info){
void* right_value66;
char* type_name_103;
void* right_value67;
void* right_value68;
void* right_value69;
void* right_value70;
struct sType* type_104;
void* right_value71;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type2_105;
char* name_106;
_Bool err_107;
void* right_value72;
void* right_value73;
void* right_value74;
void* right_value75;
struct sNode* _inf_value2;
struct sUnionNode* _inf_obj_value2;
void* right_value79;
void* right_value80;
void* right_value81;
memset(&right_value66, 0, sizeof(void*));
memset(&type_name_103, 0, sizeof(char*)); /* ddd */
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&type_104, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value71, 0, sizeof(void*));
memset(&type2_105, 0, sizeof(struct sType*)); /* ccc */
memset(&name_106, 0, sizeof(char*)); /* ccc */
memset(&err_107, 0, sizeof(_Bool)); /* ccc */
memset(&type2_105, 0, sizeof(struct sType*)); /* eee */
memset(&name_106, 0, sizeof(char*)); /* eee */
memset(&err_107, 0, sizeof(_Bool)); /* eee */
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
    if(string_operator_equals(buf,"union")) {
        type_name_103=(char*)come_increment_ref_count(((char*)(right_value66=parse_word(info))));
        if(right_value66) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0); }
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_103),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value68=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value67=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),type_name_103,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
        if(right_value67) { come_call_finalizer(sClass_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value68) { come_call_finalizer(sClass_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0); }
        type_104=(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value69=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),type_name_103,info,(_Bool)0))));
        if(right_value69) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value70) { come_call_finalizer(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
        expected_next_character(123,info);
        list$1tuple2$2charphsTypephphp_reset(type_104->mClass->mFields);
        while((_Bool)1) {
            multiple_assgin_var3=((struct tuple3$3sTypephcharphbool*)(right_value71=parse_type(info,(_Bool)1,(_Bool)1)));
            type2_105=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
            name_106=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
            err_107=multiple_assgin_var3->v3;
            if(right_value71) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
            if(!err_107) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(59,info);
            list$1tuple2$2charphsTypephphp_push_back(type_104->mClass->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value73=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value72=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(name_106),(struct sType*)come_increment_ref_count(type2_105))))));
            if(right_value73) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0); }
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            if(type2_105) { come_call_finalizer(sType_finalize,type2_105, (void*)0, (void*)0, 0, 0, 0); }
            if(name_106) { name_106 = come_decrement_ref_count(name_106, (void*)0, (void*)0, 0, 0); }
        }
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value2=come_increment_ref_count(((struct sUnionNode*)(right_value75=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value74=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1))))),(struct sType*)come_increment_ref_count(type_104),info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=sUnionNode_finalize;
        _inf_value2->clone=sUnionNode_clone;
        _inf_value2->compile=sUnionNode_compile;
        _inf_value2->sline=sUnionNode_sline;
        _inf_value2->sname=sUnionNode_sname;
        _inf_value2->terminated=sUnionNode_terminated;
        struct sNode* __result61__ = ((struct sNode*)(right_value79=_inf_value2));
        if(type_name_103) { type_name_103 = come_decrement_ref_count(type_name_103, (void*)0, (void*)0, 0, 0); }
        if(type_104) { come_call_finalizer(sType_finalize,type_104, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value74) { come_call_finalizer(sUnionNode_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value75) { come_call_finalizer(sUnionNode_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result61__;
    }
    struct sNode* __result62__ = ((struct sNode*)(right_value81=top_level_v96((char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(buf)))),head,head_sline,info)));
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1); }
    if(right_value80) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0); }
    come_release_malloced_mem();
    return __result62__;
come_release_malloced_mem();
}

struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, struct sType* type, struct sInfo* info){
void* right_value0;
char* __dec_obj1;
void* right_value31;
struct sType* __dec_obj20;
void* right_value38;
void* right_value39;
memset(&right_value0, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj1=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(info->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    __dec_obj20=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=sType_clone(type))));
    if(__dec_obj20) { come_call_finalizer(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value31) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value38=__builtin_string(type->mClass->mName)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value39=sType_clone(type)))));
    if(right_value38) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0); }
    if(right_value39) { come_call_finalizer(sType_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0); }
    struct sUnionNode* __result36__ = self;
    if(self) { come_call_finalizer(sUnionNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result36__;
come_release_malloced_mem();
}

static struct sType* sType_clone(struct sType* self){
void* right_value1;
struct sType* result_0;
void* right_value4;
struct tuple1$1sTypeph* __dec_obj3;
void* right_value5;
char* __dec_obj4;
void* right_value12;
struct list$1sTypeph* __dec_obj8;
void* right_value20;
struct list$1sNodeph* __dec_obj12;
void* right_value21;
struct list$1sTypeph* __dec_obj13;
void* right_value28;
struct list$1charph* __dec_obj17;
void* right_value29;
struct tuple1$1sTypeph* __dec_obj18;
void* right_value30;
char* __dec_obj19;
memset(&right_value1, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sType* __result7__ = (void*)0;
            come_release_malloced_mem();
            return __result7__;
        }
        result_0=(struct sType*)come_increment_ref_count(((struct sType*)(right_value1=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
        if(right_value1) { come_call_finalizer(sType_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)) {
            result_0->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj3=result_0->mNoSolvedGenericsType;
            result_0->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj3) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value4) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj4=result_0->mGenericsName;
            result_0->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value5=string_clone(self->mGenericsName))));
            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
            if(right_value5) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj8=result_0->mGenericsTypes;
            result_0->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value12=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj8) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value12) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj12=result_0->mArrayNum;
            result_0->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj12) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value20) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_0->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj13=result_0->mParamTypes;
            result_0->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value21) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj17=result_0->mParamNames;
            result_0->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value28=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj17) { come_call_finalizer(list$1charphp_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value28) { come_call_finalizer(list$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj18=result_0->mResultType;
            result_0->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value29) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_0->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)) {
            result_0->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_0->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_0->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_0->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_0->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_0->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_0->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_0->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_0->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_0->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_0->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_0->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_0->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_0->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_0->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_0->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_0->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_0->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_0->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_0->mSizeNum=self->mSizeNum;
        }
        if(self!=((void*)0)) {
            result_0->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_0->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj19=result_0->mOriginalTypeName;
            result_0->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value30=string_clone(self->mOriginalTypeName))));
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
            if(right_value30) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_0->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_0->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_0->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_0->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_0->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_0->mInline=self->mInline;
        }
        struct sType* __result21__ = result_0;
        if(result_0) { come_call_finalizer(sType_finalize,result_0, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result21__;
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

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value2;
struct tuple1$1sTypeph* result_7;
void* right_value3;
struct sType* __dec_obj2;
memset(&right_value2, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value3, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple1$1sTypeph* __result8__ = (void*)0;
                    come_release_malloced_mem();
                    return __result8__;
                }
                result_7=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value2=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                if(right_value2) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj2=result_7->v1;
                    result_7->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value3=sType_clone(self->v1))));
                    if(__dec_obj2) { come_call_finalizer(sType_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value3) { come_call_finalizer(sType_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
                }
                struct tuple1$1sTypeph* __result9__ = result_7;
                if(result_7) { come_call_finalizer(tuple1$1sTypephp_finalize,result_7, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result9__;
            come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value6;
void* right_value7;
struct list$1sTypeph* result_8;
struct list_item$1sTypeph* it_9;
void* right_value11;
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value11, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sTypeph* __result10__ = ((void*)0);
                    come_release_malloced_mem();
                    return __result10__;
                }
                result_8=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value7=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value6=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                if(right_value7) { come_call_finalizer(list$1sTypephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0); }
                it_9=self->head;
                while(it_9!=((void*)0)) {
                    list$1sTypephp_push_back2(result_8,(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=sType_clone(it_9->item)))));
                    if(right_value11) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
                    it_9=it_9->next;
                }
                struct list$1sTypeph* __result12__ = result_8;
                if(result_8) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result12__;
            come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sTypeph* __result11__ = self;
                    if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result11__;
                come_release_malloced_mem();
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value8;
struct list_item$1sTypeph* litem_10;
struct sType* __dec_obj5;
void* right_value9;
struct list_item$1sTypeph* litem_11;
struct sType* __dec_obj6;
void* right_value10;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj7;
memset(&right_value8, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value9, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value10, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                        if(self->len==0) {
                            litem_10=((struct list_item$1sTypeph*)(right_value8=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_10->prev=((void*)0);
                            litem_10->next=((void*)0);
                            __dec_obj5=litem_10->item;
                            litem_10->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_10;
                            self->head=litem_10;
                        }
                        else if(self->len==1) {
                            litem_11=((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_11->prev=self->head;
                            litem_11->next=((void*)0);
                            __dec_obj6=litem_11->item;
                            litem_11->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_11;
                            self->head->next=litem_11;
                        }
                        else {
                            litem_12=((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_12->prev=self->tail;
                            litem_12->next=((void*)0);
                            __dec_obj7=litem_12->item;
                            litem_12->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail->next=litem_12;
                            self->tail=litem_12;
                        }
                        self->len++;
                        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value13;
void* right_value14;
struct list$1sNodeph* result_13;
struct list_item$1sNodeph* it_14;
void* right_value19;
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value19, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sNodeph* __result13__ = ((void*)0);
                    come_release_malloced_mem();
                    return __result13__;
                }
                result_13=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value13=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                if(right_value14) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0); }
                it_14=self->head;
                while(it_14!=((void*)0)) {
                    list$1sNodephp_push_back2(result_13,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNodep_clone(it_14->item)))));
                    if(right_value19) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0); } 
                    it_14=it_14->next;
                }
                struct list$1sNodeph* __result17__ = result_13;
                if(result_13) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result17__;
            come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sNodeph* __result14__ = self;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result14__;
                come_release_malloced_mem();
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value15;
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj9;
void* right_value16;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj10;
void* right_value17;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj11;
memset(&right_value15, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value16, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value17, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                        if(self->len==0) {
                            litem_15=((struct list_item$1sNodeph*)(right_value15=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj9=litem_15->item;
                            litem_15->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0); }
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else if(self->len==1) {
                            litem_16=((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_16->prev=self->head;
                            litem_16->next=((void*)0);
                            __dec_obj10=litem_16->item;
                            litem_16->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0); }
                            self->tail=litem_16;
                            self->head->next=litem_16;
                        }
                        else {
                            litem_17=((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_17->prev=self->tail;
                            litem_17->next=((void*)0);
                            __dec_obj11=litem_17->item;
                            litem_17->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0); }
                            self->tail->next=litem_17;
                            self->tail=litem_17;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
                    come_release_malloced_mem();
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value18;
struct sNode* result_18;
memset(&right_value18, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sNode*)); /* ddd */
                        if(self==(void*)0) {
                            struct sNode* __result15__ = (void*)0;
                            come_release_malloced_mem();
                            return __result15__;
                        }
                        result_18=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
                        if(self!=((void*)0)&&self->clone!=((void*)0)) {
                            result_18->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(self!=((void*)0)) {
                            result_18->finalize=self->finalize;
                        }
                        if(self!=((void*)0)) {
                            result_18->clone=self->clone;
                        }
                        if(self!=((void*)0)) {
                            result_18->compile=self->compile;
                        }
                        if(self!=((void*)0)) {
                            result_18->sline=self->sline;
                        }
                        if(self!=((void*)0)) {
                            result_18->sname=self->sname;
                        }
                        if(self!=((void*)0)) {
                            result_18->terminated=self->terminated;
                        }
                        struct sNode* __result16__ = result_18;
                        come_release_malloced_mem();
                        return __result16__;
                    come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value22;
void* right_value23;
struct list$1charph* result_19;
struct list_item$1charph* it_20;
void* right_value27;
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_20, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value27, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1charph* __result18__ = ((void*)0);
                    come_release_malloced_mem();
                    return __result18__;
                }
                result_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value22=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                if(right_value23) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0); }
                it_20=self->head;
                while(it_20!=((void*)0)) {
                    list$1charphp_push_back2(result_19,(char*)come_increment_ref_count(((char*)(right_value27=string_clone(it_20->item)))));
                    if(right_value27) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0); }
                    it_20=it_20->next;
                }
                struct list$1charph* __result20__ = result_19;
                if(result_19) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result20__;
            come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1charph* __result19__ = self;
                    if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result19__;
                come_release_malloced_mem();
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value24;
struct list_item$1charph* litem_21;
char* __dec_obj14;
void* right_value25;
struct list_item$1charph* litem_22;
char* __dec_obj15;
void* right_value26;
struct list_item$1charph* litem_23;
char* __dec_obj16;
memset(&right_value24, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value25, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value26, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*)); /* ddd */
                        if(self->len==0) {
                            litem_21=((struct list_item$1charph*)(right_value24=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_21->prev=((void*)0);
                            litem_21->next=((void*)0);
                            __dec_obj14=litem_21->item;
                            litem_21->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_21;
                            self->head=litem_21;
                        }
                        else if(self->len==1) {
                            litem_22=((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_22->prev=self->head;
                            litem_22->next=((void*)0);
                            __dec_obj15=litem_22->item;
                            litem_22->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_22;
                            self->head->next=litem_22;
                        }
                        else {
                            litem_23=((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_23->prev=self->tail;
                            litem_23->next=((void*)0);
                            __dec_obj16=litem_23->item;
                            litem_23->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
                            self->tail->next=litem_23;
                            self->tail=litem_23;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
                    come_release_malloced_mem();
}

static void map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
int hash_39;
int it_40;
_Bool same_key_exist_57;
char* it2_59;
memset(&hash_39, 0, sizeof(int)); /* ddd */
memset(&it_40, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_57, 0, sizeof(_Bool)); /* ddd */
memset(&it2_59, 0, sizeof(char*)); /* ddd */
        if(self->len*2>=self->size) {
            map$2charphsTypephp_rehash(self);
        }
        hash_39=string_get_hash_key(key)%self->size;
        it_40=hash_39;
        while((_Bool)1) {
            if(self->item_existance[it_40]) {
                if(charp_equals(self->keys[it_40],key)) {
                    if(1) {
                        list$1charpp_remove(self->key_list,self->keys[it_40]);
                        if(self->keys[it_40]) { self->keys[it_40] = come_decrement_ref_count(self->keys[it_40], (void*)0, (void*)0, 0, 0); }
                        self->keys[it_40]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charpp_remove(self->key_list,self->keys[it_40]);
                        self->keys[it_40]=key;
                    }
                    if(1) {
                        if(self->items[it_40]) { come_call_finalizer(sTypep_finalize,self->items[it_40], (void*)0, (void*)0, 0, 0, 0); }
                        self->items[it_40]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_40]=item;
                    }
                    break;
                }
                it_40++;
                if(it_40>=self->size) {
                    it_40=0;
                }
                else if(it_40==hash_39) {
                    printf("unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_40]=(_Bool)1;
                if(1) {
                    self->keys[it_40]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_40]=key;
                }
                if(1) {
                    self->items[it_40]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_40]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_57=(_Bool)0;
        for(
        it2_59=list$1charpp_begin(self->key_list);
        !list$1charpp_end(self->key_list);
        it_40=list$1charpp_next(self->key_list)
        ){
            if(charp_equals(it2_59,key)) {
                same_key_exist_57=(_Bool)1;
            }
        }
        if(!same_key_exist_57) {
            list$1charpp_push_back(self->key_list,key);
        }
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
}

static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self){
int size_24;
void* right_value32;
char** keys_25;
void* right_value33;
struct sType** items_26;
void* right_value34;
_Bool* item_existance_27;
int len_28;
char* it_30;
struct sType* default_value_32;
struct sType* it2_35;
int hash_36;
int n_37;
struct sType* default_value_38;
memset(&size_24, 0, sizeof(int)); /* ddd */
memset(&right_value32, 0, sizeof(void*));
memset(&keys_25, 0, sizeof(char**)); /* ddd */
memset(&right_value33, 0, sizeof(void*));
memset(&items_26, 0, sizeof(struct sType**)); /* ddd */
memset(&right_value34, 0, sizeof(void*));
memset(&item_existance_27, 0, sizeof(_Bool*)); /* ddd */
memset(&len_28, 0, sizeof(int)); /* ddd */
memset(&it_30, 0, sizeof(char*)); /* ddd */
memset(&default_value_32, 0, sizeof(struct sType*)); /* bbb */
memset(&it2_35, 0, sizeof(struct sType*)); /* ddd */
memset(&hash_36, 0, sizeof(int)); /* ddd */
memset(&n_37, 0, sizeof(int)); /* ddd */
memset(&default_value_38, 0, sizeof(struct sType*)); /* bbb */
                size_24=self->size*3;
                keys_25=((char**)(right_value32=(char**)come_calloc(1, sizeof(char*)*(1*(size_24)))));
                items_26=((struct sType**)(right_value33=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_24)))));
                item_existance_27=((_Bool*)(right_value34=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_24)))));
                len_28=0;
                for(
                it_30=map$2charphsTypephp_begin(self);
                !map$2charphsTypephp_end(self);
                it_30=map$2charphsTypephp_next(self)
                ){
                    it2_35=map$2charphsTypephp_at(self,it_30,default_value_32);
                    hash_36=charp_get_hash_key(it_30)%size_24;
                    n_37=hash_36;
                    while((_Bool)1) {
                        if(item_existance_27[n_37]) {
                            n_37++;
                            if(n_37>=size_24) {
                                n_37=0;
                            }
                            else if(n_37==hash_36) {
                                printf("unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_27[n_37]=(_Bool)1;
                            keys_25[n_37]=it_30;
                            items_26[n_37]=map$2charphsTypephp_at(self,it_30,default_value_38);
                            len_28++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_25;
                self->items=items_26;
                self->item_existance=item_existance_27;
                self->size=size_24;
                self->len=len_28;
            come_release_malloced_mem();
}

static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self){
char* result_29;
memset(&result_29, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result22__ = self->key_list->it->item;
                        come_release_malloced_mem();
                        return __result22__;
                    }
                    memset(&result_29,0,sizeof(char*));
                    char* __result23__ = result_29;
                    come_release_malloced_mem();
                    return __result23__;
                come_release_malloced_mem();
}

static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self){
                    _Bool __result24__ = self->key_list->it==((void*)0);
                    come_release_malloced_mem();
                    return __result24__;
                come_release_malloced_mem();
}

static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self){
char* result_31;
memset(&result_31, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result25__ = self->key_list->it->item;
                        come_release_malloced_mem();
                        return __result25__;
                    }
                    memset(&result_31,0,sizeof(char*));
                    char* __result26__ = result_31;
                    come_release_malloced_mem();
                    return __result26__;
                come_release_malloced_mem();
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
int hash_33;
int it_34;
memset(&hash_33, 0, sizeof(int)); /* ddd */
memset(&it_34, 0, sizeof(int)); /* ddd */
                        hash_33=string_get_hash_key(((char*)key))%self->size;
                        it_34=hash_33;
                        while((_Bool)1) {
                            if(self->item_existance[it_34]) {
                                if(charp_equals(self->keys[it_34],key)) {
                                    struct sType* __result27__ = self->items[it_34];
                                    come_release_malloced_mem();
                                    return __result27__;
                                }
                                it_34++;
                                if(it_34>=self->size) {
                                    it_34=0;
                                }
                                else if(it_34==hash_33) {
                                    struct sType* __result28__ = default_value;
                                    come_release_malloced_mem();
                                    return __result28__;
                                }
                            }
                            else {
                                struct sType* __result29__ = default_value;
                                come_release_malloced_mem();
                                return __result29__;
                            }
                        }
                        struct sType* __result30__ = default_value;
                        come_release_malloced_mem();
                        return __result30__;
                    come_release_malloced_mem();
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_41;
struct list_item$1charp* it_42;
memset(&it2_41, 0, sizeof(int)); /* ddd */
memset(&it_42, 0, sizeof(struct list_item$1charp*)); /* ddd */
                            it2_41=0;
                            it_42=self->head;
                            while(it_42!=((void*)0)) {
                                if(charp_equals(it_42->item,item)) {
                                    list$1charpp_delete(self,it2_41,it2_41+1);
                                    break;
                                }
                                it2_41++;
                                it_42=it_42->next;
                            }
                        come_release_malloced_mem();
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_43;
struct list_item$1charp* it_46;
int i_47;
struct list_item$1charp* prev_it_48;
struct list_item$1charp* it_49;
int i_50;
struct list_item$1charp* prev_it_51;
struct list_item$1charp* it_52;
struct list_item$1charp* head_prev_it_53;
struct list_item$1charp* tail_it_54;
int i_55;
struct list_item$1charp* prev_it_56;
memset(&tmp_43, 0, sizeof(int)); /* ddd */
memset(&it_46, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_47, 0, sizeof(int)); /* ddd */
memset(&prev_it_48, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_49, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_50, 0, sizeof(int)); /* ddd */
memset(&prev_it_51, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_52, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_53, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_54, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_55, 0, sizeof(int)); /* ddd */
memset(&prev_it_56, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                        if(head<0) {
                                            head+=self->len;
                                        }
                                        if(tail<0) {
                                            tail+=self->len+1;
                                        }
                                        if(head>tail) {
                                            tmp_43=tail;
                                            tail=head;
                                            head=tmp_43;
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
                                            it_46=self->head;
                                            i_47=0;
                                            while(it_46!=((void*)0)) {
                                                if(i_47<tail) {
                                                    prev_it_48=it_46;
                                                    it_46=it_46->next;
                                                    i_47++;
                                                    if(prev_it_48) { come_call_finalizer(list_item$1charpp_finalize,prev_it_48, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else if(i_47==tail) {
                                                    self->head=it_46;
                                                    self->head->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_46=it_46->next;
                                                    i_47++;
                                                }
                                            }
                                        }
                                        else if(tail==self->len) {
                                            it_49=self->head;
                                            i_50=0;
                                            while(it_49!=((void*)0)) {
                                                if(i_50==head) {
                                                    self->tail=it_49->prev;
                                                    self->tail->next=((void*)0);
                                                }
                                                if(i_50>=head) {
                                                    prev_it_51=it_49;
                                                    it_49=it_49->next;
                                                    i_50++;
                                                    if(prev_it_51) { come_call_finalizer(list_item$1charpp_finalize,prev_it_51, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_49=it_49->next;
                                                    i_50++;
                                                }
                                            }
                                        }
                                        else {
                                            it_52=self->head;
                                            head_prev_it_53=((void*)0);
                                            tail_it_54=((void*)0);
                                            i_55=0;
                                            while(it_52!=((void*)0)) {
                                                if(i_55==head) {
                                                    head_prev_it_53=it_52->prev;
                                                }
                                                if(i_55==tail) {
                                                    tail_it_54=it_52;
                                                }
                                                if(i_55>=head&&i_55<tail) {
                                                    prev_it_56=it_52;
                                                    it_52=it_52->next;
                                                    i_55++;
                                                    if(prev_it_56) { come_call_finalizer(list_item$1charpp_finalize,prev_it_56, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_52=it_52->next;
                                                    i_55++;
                                                }
                                            }
                                            if(head_prev_it_53!=((void*)0)) {
                                                head_prev_it_53->next=tail_it_54;
                                            }
                                            if(tail_it_54!=((void*)0)) {
                                                tail_it_54->prev=head_prev_it_53;
                                            }
                                        }
                                    come_release_malloced_mem();
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_44;
struct list_item$1charp* prev_it_45;
memset(&it_44, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_45, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                it_44=self->head;
                                                while(it_44!=((void*)0)) {
                                                    prev_it_45=it_44;
                                                    it_44=it_44->next;
                                                    if(prev_it_45) { come_call_finalizer(list_item$1charpp_finalize,prev_it_45, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                            come_release_malloced_mem();
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
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

static char* list$1charpp_begin(struct list$1charp* self){
char* result_58;
memset(&result_58, 0, sizeof(char*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                char* __result31__ = self->it->item;
                come_release_malloced_mem();
                return __result31__;
            }
            memset(&result_58,0,sizeof(char*));
            char* __result32__ = result_58;
            come_release_malloced_mem();
            return __result32__;
        come_release_malloced_mem();
}

static _Bool list$1charpp_end(struct list$1charp* self){
            _Bool __result33__ = self->it==((void*)0);
            come_release_malloced_mem();
            return __result33__;
        come_release_malloced_mem();
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_60;
memset(&result_60, 0, sizeof(char*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                char* __result34__ = self->it->item;
                come_release_malloced_mem();
                return __result34__;
            }
            memset(&result_60,0,sizeof(char*));
            char* __result35__ = result_60;
            come_release_malloced_mem();
            return __result35__;
        come_release_malloced_mem();
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value35;
struct list_item$1charp* litem_61;
void* right_value36;
struct list_item$1charp* litem_62;
void* right_value37;
struct list_item$1charp* litem_63;
memset(&right_value35, 0, sizeof(void*));
memset(&litem_61, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
memset(&litem_62, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value37, 0, sizeof(void*));
memset(&litem_63, 0, sizeof(struct list_item$1charp*)); /* ddd */
                if(self->len==0) {
                    litem_61=((struct list_item$1charp*)(right_value35=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_61->prev=((void*)0);
                    litem_61->next=((void*)0);
                    litem_61->item=item;
                    self->tail=litem_61;
                    self->head=litem_61;
                }
                else if(self->len==1) {
                    litem_62=((struct list_item$1charp*)(right_value36=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_62->prev=self->head;
                    litem_62->next=((void*)0);
                    litem_62->item=item;
                    self->tail=litem_62;
                    self->head->next=litem_62;
                }
                else {
                    litem_63=((struct list_item$1charp*)(right_value37=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_63->prev=self->tail;
                    litem_63->next=((void*)0);
                    litem_63->item=item;
                    self->tail->next=litem_63;
                    self->tail=litem_63;
                }
                self->len++;
            come_release_malloced_mem();
}

static void sUnionNode_finalize(struct sUnionNode* self){
            if(self!=((void*)0)&&self->mType!=((void*)0)) {
                if(self->mType) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sUnionNode_terminated(){
    _Bool __result37__ = (_Bool)1;
    come_release_malloced_mem();
    return __result37__;
come_release_malloced_mem();
}

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info){
struct sType* type_64;
struct sClass* klass_65;
void* right_value40;
void* right_value41;
struct buffer* buf_66;
void* right_value42;
struct tuple2$2charphsTypeph* it_68;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_70;
struct sType* type_71;
void* right_value43;
void* right_value44;
void* right_value45;
memset(&type_64, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_65, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&buf_66, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_70, 0, sizeof(char*)); /* ccc */
memset(&type_71, 0, sizeof(struct sType*)); /* ccc */
memset(&name_70, 0, sizeof(char*)); /* eee */
memset(&type_71, 0, sizeof(struct sType*)); /* eee */
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
    type_64=self->mType;
    klass_65=type_64->mClass;
    if(!klass_65->mOutputed) {
        klass_65->mOutputed=(_Bool)1;
        buf_66=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value41=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value40) { come_call_finalizer(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value41) { come_call_finalizer(buffer_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(buf_66,((char*)(right_value42=xsprintf("union %s\n{\n",type_64->mClass->mName))));
        if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
        for(
        it_68=list$1tuple2$2charphsTypephphp_begin((klass_65->mFields));
        !list$1tuple2$2charphsTypephphp_end((klass_65->mFields));
        it_68=list$1tuple2$2charphsTypephphp_next((klass_65->mFields))
        ){
            multiple_assgin_var1=it_68;
            name_70=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
            type_71=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
            buffer_append_str(buf_66,((char*)(right_value43=make_define_var(type_71,name_70,info,(_Bool)0))));
            if(right_value43) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(buf_66,";\n");
            if(name_70) { name_70 = come_decrement_ref_count(name_70, (void*)0, (void*)0, 0, 0); }
            if(type_71) { come_call_finalizer(sType_finalize,type_71, (void*)0, (void*)0, 0, 0, 0); }
        }
        buffer_append_str(buf_66,((char*)(right_value44=xsprintf("};\n",type_64->mClass->mName))));
        if(right_value44) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0); }
        add_come_code_at_source_head(info,"%s",((char*)(right_value45=buffer_to_string(buf_66))));
        if(right_value45) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0); }
        if(buf_66) { come_call_finalizer(buffer_finalize,buf_66, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result43__ = (_Bool)1;
    come_release_malloced_mem();
    return __result43__;
come_release_malloced_mem();
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_67;
memset(&result_67, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct tuple2$2charphsTypeph* __result38__ = self->it->item;
                come_release_malloced_mem();
                return __result38__;
            }
            memset(&result_67,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result39__ = result_67;
            come_release_malloced_mem();
            return __result39__;
        come_release_malloced_mem();
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
            _Bool __result40__ = self->it==((void*)0);
            come_release_malloced_mem();
            return __result40__;
        come_release_malloced_mem();
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_69;
memset(&result_69, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct tuple2$2charphsTypeph* __result41__ = self->it->item;
                come_release_malloced_mem();
                return __result41__;
            }
            memset(&result_69,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result42__ = result_69;
            come_release_malloced_mem();
            return __result42__;
        come_release_malloced_mem();
}

int sUnionNode_sline(struct sUnionNode* self, struct sInfo* info){
    int __result44__ = self->sline;
    come_release_malloced_mem();
    return __result44__;
come_release_malloced_mem();
}

char* sUnionNode_sname(struct sUnionNode* self, struct sInfo* info){
void* right_value46;
memset(&right_value46, 0, sizeof(void*));
    char* __result45__ = ((char*)(right_value46=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result45__;
come_release_malloced_mem();
}

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
int hash_87;
int it_88;
_Bool same_key_exist_91;
char* it2_92;
memset(&hash_87, 0, sizeof(int)); /* ddd */
memset(&it_88, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_91, 0, sizeof(_Bool)); /* ddd */
memset(&it2_92, 0, sizeof(char*)); /* ddd */
        if(self->len*2>=self->size) {
            map$2charphsClassphp_rehash(self);
        }
        hash_87=string_get_hash_key(key)%self->size;
        it_88=hash_87;
        while((_Bool)1) {
            if(self->item_existance[it_88]) {
                if(charp_equals(self->keys[it_88],key)) {
                    if(1) {
                        list$1charpp_remove(self->key_list,self->keys[it_88]);
                        if(self->keys[it_88]) { self->keys[it_88] = come_decrement_ref_count(self->keys[it_88], (void*)0, (void*)0, 0, 0); }
                        self->keys[it_88]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charpp_remove(self->key_list,self->keys[it_88]);
                        self->keys[it_88]=key;
                    }
                    if(1) {
                        if(self->items[it_88]) { come_call_finalizer(sClassp_finalize,self->items[it_88], (void*)0, (void*)0, 0, 0, 0); }
                        self->items[it_88]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_88]=item;
                    }
                    break;
                }
                it_88++;
                if(it_88>=self->size) {
                    it_88=0;
                }
                else if(it_88==hash_87) {
                    printf("unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_88]=(_Bool)1;
                if(1) {
                    self->keys[it_88]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_88]=key;
                }
                if(1) {
                    self->items[it_88]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_88]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_91=(_Bool)0;
        for(
        it2_92=list$1charpp_begin(self->key_list);
        !list$1charpp_end(self->key_list);
        it_88=list$1charpp_next(self->key_list)
        ){
            if(charp_equals(it2_92,key)) {
                same_key_exist_91=(_Bool)1;
            }
        }
        if(!same_key_exist_91) {
            list$1charpp_push_back(self->key_list,key);
        }
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
        if(item) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_72;
void* right_value47;
char** keys_73;
void* right_value48;
struct sClass** items_74;
void* right_value49;
_Bool* item_existance_75;
int len_76;
char* it_78;
struct sClass* default_value_80;
struct sClass* it2_83;
int hash_84;
int n_85;
struct sClass* default_value_86;
memset(&size_72, 0, sizeof(int)); /* ddd */
memset(&right_value47, 0, sizeof(void*));
memset(&keys_73, 0, sizeof(char**)); /* ddd */
memset(&right_value48, 0, sizeof(void*));
memset(&items_74, 0, sizeof(struct sClass**)); /* ddd */
memset(&right_value49, 0, sizeof(void*));
memset(&item_existance_75, 0, sizeof(_Bool*)); /* ddd */
memset(&len_76, 0, sizeof(int)); /* ddd */
memset(&it_78, 0, sizeof(char*)); /* ddd */
memset(&default_value_80, 0, sizeof(struct sClass*)); /* bbb */
memset(&it2_83, 0, sizeof(struct sClass*)); /* ddd */
memset(&hash_84, 0, sizeof(int)); /* ddd */
memset(&n_85, 0, sizeof(int)); /* ddd */
memset(&default_value_86, 0, sizeof(struct sClass*)); /* bbb */
                size_72=self->size*3;
                keys_73=((char**)(right_value47=(char**)come_calloc(1, sizeof(char*)*(1*(size_72)))));
                items_74=((struct sClass**)(right_value48=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_72)))));
                item_existance_75=((_Bool*)(right_value49=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_72)))));
                len_76=0;
                for(
                it_78=map$2charphsClassphp_begin(self);
                !map$2charphsClassphp_end(self);
                it_78=map$2charphsClassphp_next(self)
                ){
                    it2_83=map$2charphsClassphp_at(self,it_78,default_value_80);
                    hash_84=charp_get_hash_key(it_78)%size_72;
                    n_85=hash_84;
                    while((_Bool)1) {
                        if(item_existance_75[n_85]) {
                            n_85++;
                            if(n_85>=size_72) {
                                n_85=0;
                            }
                            else if(n_85==hash_84) {
                                printf("unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_75[n_85]=(_Bool)1;
                            keys_73[n_85]=it_78;
                            items_74[n_85]=map$2charphsClassphp_at(self,it_78,default_value_86);
                            len_76++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_73;
                self->items=items_74;
                self->item_existance=item_existance_75;
                self->size=size_72;
                self->len=len_76;
            come_release_malloced_mem();
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
char* result_77;
memset(&result_77, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result46__ = self->key_list->it->item;
                        come_release_malloced_mem();
                        return __result46__;
                    }
                    memset(&result_77,0,sizeof(char*));
                    char* __result47__ = result_77;
                    come_release_malloced_mem();
                    return __result47__;
                come_release_malloced_mem();
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
                    _Bool __result48__ = self->key_list->it==((void*)0);
                    come_release_malloced_mem();
                    return __result48__;
                come_release_malloced_mem();
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
char* result_79;
memset(&result_79, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result49__ = self->key_list->it->item;
                        come_release_malloced_mem();
                        return __result49__;
                    }
                    memset(&result_79,0,sizeof(char*));
                    char* __result50__ = result_79;
                    come_release_malloced_mem();
                    return __result50__;
                come_release_malloced_mem();
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_81;
int it_82;
memset(&hash_81, 0, sizeof(int)); /* ddd */
memset(&it_82, 0, sizeof(int)); /* ddd */
                        hash_81=string_get_hash_key(((char*)key))%self->size;
                        it_82=hash_81;
                        while((_Bool)1) {
                            if(self->item_existance[it_82]) {
                                if(charp_equals(self->keys[it_82],key)) {
                                    struct sClass* __result51__ = self->items[it_82];
                                    come_release_malloced_mem();
                                    return __result51__;
                                }
                                it_82++;
                                if(it_82>=self->size) {
                                    it_82=0;
                                }
                                else if(it_82==hash_81) {
                                    struct sClass* __result52__ = default_value;
                                    come_release_malloced_mem();
                                    return __result52__;
                                }
                            }
                            else {
                                struct sClass* __result53__ = default_value;
                                come_release_malloced_mem();
                                return __result53__;
                            }
                        }
                        struct sClass* __result54__ = default_value;
                        come_release_malloced_mem();
                        return __result54__;
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
struct list_item$1tuple2$2charphsTypephph* it_89;
struct list_item$1tuple2$2charphsTypephph* prev_it_90;
memset(&it_89, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&prev_it_90, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
                                    it_89=self->head;
                                    while(it_89!=((void*)0)) {
                                        if(1) {
                                            if(it_89->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,it_89->item, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        prev_it_90=it_89;
                                        it_89=it_89->next;
                                        come_free_object(prev_it_90);
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

static void sClass_finalize(struct sClass* self){
            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                if(self->mName) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                if(self->mFields) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0); }
            }
        come_release_malloced_mem();
}

static void list$1tuple2$2charphsTypephphp_reset(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_94;
struct list_item$1tuple2$2charphsTypephph* prev_it_95;
memset(&it_94, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&prev_it_95, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
        it_94=self->head;
        while(it_94!=((void*)0)) {
            prev_it_95=it_94;
            it_94=it_94->next;
            if(prev_it_95) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_95, (void*)0, (void*)0, 0, 0, 0); }
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
    come_release_malloced_mem();
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    if(self->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0); }
                }
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

static void list$1tuple2$2charphsTypephphp_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* right_value55;
struct list_item$1tuple2$2charphsTypephph* litem_99;
struct tuple2$2charphsTypeph* __dec_obj21;
void* right_value56;
struct list_item$1tuple2$2charphsTypephph* litem_100;
struct tuple2$2charphsTypeph* __dec_obj22;
void* right_value57;
struct list_item$1tuple2$2charphsTypephph* litem_101;
struct tuple2$2charphsTypeph* __dec_obj23;
memset(&right_value55, 0, sizeof(void*));
memset(&litem_99, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value56, 0, sizeof(void*));
memset(&litem_100, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value57, 0, sizeof(void*));
memset(&litem_101, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
            if(self->len==0) {
                litem_99=((struct list_item$1tuple2$2charphsTypephph*)(right_value55=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                litem_99->prev=((void*)0);
                litem_99->next=((void*)0);
                __dec_obj21=litem_99->item;
                litem_99->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj21) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_99;
                self->head=litem_99;
            }
            else if(self->len==1) {
                litem_100=((struct list_item$1tuple2$2charphsTypephph*)(right_value56=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                litem_100->prev=self->head;
                litem_100->next=((void*)0);
                __dec_obj22=litem_100->item;
                litem_100->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj22) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_100;
                self->head->next=litem_100;
            }
            else {
                litem_101=((struct list_item$1tuple2$2charphsTypephph*)(right_value57=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                litem_101->prev=self->tail;
                litem_101->next=((void*)0);
                __dec_obj23=litem_101->item;
                litem_101->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj23) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0); }
                self->tail->next=litem_101;
                self->tail=litem_101;
            }
            self->len++;
            if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
char* __dec_obj24;
struct sType* __dec_obj25;
            __dec_obj24=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
            __dec_obj25=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0); }
            struct tuple2$2charphsTypeph* __result55__ = self;
            if(self) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
            if(v2) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result55__;
        come_release_malloced_mem();
}

static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self){
void* right_value76;
struct sUnionNode* result_108;
void* right_value77;
struct sType* __dec_obj28;
void* right_value78;
char* __dec_obj29;
memset(&right_value76, 0, sizeof(void*));
memset(&result_108, 0, sizeof(struct sUnionNode*)); /* ddd */
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sUnionNode* __result59__ = (void*)0;
                come_release_malloced_mem();
                return __result59__;
            }
            result_108=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value76=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1)))));
            if(right_value76) { come_call_finalizer(sUnionNode_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mType!=((void*)0)) {
                __dec_obj28=result_108->mType;
                result_108->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(self->mType))));
                if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value77) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_108->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj29=result_108->sname;
                result_108->sname=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(self->sname))));
                if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
                if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0); }
            }
            struct sUnionNode* __result60__ = result_108;
            if(result_108) { come_call_finalizer(sUnionNode_finalize,result_108, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result60__;
        come_release_malloced_mem();
}

