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

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index);
static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value);
char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
char* output_function(struct sFun* fun, struct sInfo* info);

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index);
static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value);
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
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int index);
static struct sNode* list$1sNodephp_item(struct list$1sNodeph* self, int position, struct sNode* default_value);
static void va_list_finalize(va_list* self);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
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
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void list$1CVALUEphp_delete(struct list$1CVALUEph* self, int head, int tail);
static void list$1CVALUEphp_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int index);
static struct CVALUE* list$1CVALUEphp_item(struct list$1CVALUEph* self, int position, struct CVALUE* default_value);
static struct CVALUE* CVALUEp_clone(struct CVALUE* self);
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






char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, struct sInfo* info, _Bool no_pointer){
void* right_value0;
void* right_value1;
struct buffer* buf_0;
char* class_name_1;
void* right_value2;
char* result_type_str_2;
int j_3;
struct sType* it_5;
void* right_value3;
char* param_type_str_7;
int i_8;
void* right_value4;
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&buf_0, 0, sizeof(struct buffer*)); /* ddd */
memset(&class_name_1, 0, sizeof(char*)); /* ddd */
memset(&right_value2, 0, sizeof(void*));
memset(&result_type_str_2, 0, sizeof(char*)); /* ddd */
memset(&j_3, 0, sizeof(int)); /* ddd */
memset(&it_5, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value3, 0, sizeof(void*));
memset(&param_type_str_7, 0, sizeof(char*)); /* ddd */
memset(&i_8, 0, sizeof(int)); /* ddd */
memset(&right_value4, 0, sizeof(void*));
    buf_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value0) { come_call_finalizer(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value1) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0); }
    class_name_1=type->mClass->mName;
    if(type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion) {
        buffer_append_str(buf_0,"static ");
    }
    if(type->mConstant) {
        buffer_append_str(buf_0,"const ");
    }
    if(type->mUnsigned) {
        buffer_append_str(buf_0,"unsigned ");
    }
    if(type->mShort) {
        buffer_append_str(buf_0,"short ");
    }
    if(type->mClass->mStruct) {
        if(charp_operator_equals(class_name_1,"__builtin_va_list")) {
            if(in_header) {
                buffer_append_str(buf_0,class_name_1);
            }
            else {
                buffer_append_str(buf_0,"va_list");
            }
        }
        else {
            buffer_append_str(buf_0,"struct ");
            buffer_append_str(buf_0,class_name_1);
        }
    }
    else if(type->mClass->mUnion) {
        buffer_append_str(buf_0,"union ");
        buffer_append_str(buf_0,class_name_1);
    }
    else if(type->mClass->mEnum) {
        buffer_append_str(buf_0,"enum ");
        buffer_append_str(buf_0,class_name_1);
    }
    else if(type->mLongLong) {
        if(charp_operator_equals(class_name_1,"int")) {
            buffer_append_str(buf_0,"long long int");
        }
        else if(charp_operator_equals(class_name_1,"long")) {
            buffer_append_str(buf_0,"long long");
        }
    }
    else if(type->mLong) {
        if(charp_operator_equals(class_name_1,"int")) {
            buffer_append_str(buf_0,"long int");
        }
        else if(charp_operator_equals(class_name_1,"long")) {
            buffer_append_str(buf_0,"long long");
        }
        else if(charp_operator_equals(class_name_1,"double")) {
            buffer_append_str(buf_0,"long double");
        }
    }
    else if(charp_operator_equals(class_name_1,"long")) {
        buffer_append_str(buf_0,"long");
    }
    else if(charp_operator_equals(class_name_1,"bool")) {
        buffer_append_str(buf_0,"_Bool");
    }
    else if(charp_operator_equals(class_name_1,"lambda")) {
        result_type_str_2=(char*)come_increment_ref_count(((char*)(right_value2=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,info,(_Bool)0))));
        if(right_value2) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_0,result_type_str_2);
        buffer_append_str(buf_0," (*)(");
        j_3=0;
        for(
        it_5=list$1sTypephp_begin((type->mParamTypes));
        !list$1sTypephp_end((type->mParamTypes));
        it_5=list$1sTypephp_next((type->mParamTypes))
        ){
            param_type_str_7=(char*)come_increment_ref_count(((char*)(right_value3=make_type_name_string(it_5,in_header,(_Bool)0,info,(_Bool)0))));
            if(right_value3) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(buf_0,param_type_str_7);
            if(j_3!=list$1sTypephp_length(type->mParamTypes)-1) {
                buffer_append_str(buf_0,",");
            }
            j_3++;
            if(param_type_str_7) { param_type_str_7 = come_decrement_ref_count(param_type_str_7, (void*)0, (void*)0, 0, 0); }
        }
        buffer_append_str(buf_0,")");
        if(result_type_str_2) { result_type_str_2 = come_decrement_ref_count(result_type_str_2, (void*)0, (void*)0, 0, 0); }
    }
    else {
        buffer_append_str(buf_0,class_name_1);
    }
    if(type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_1,"lambda")&&!no_pointer) {
        for(
        i_8=0;
        i_8<type->mPointerNum;
        i_8++
        ){
            buffer_append_str(buf_0,"*");
        }
    }
    if(array_cast_pointer&&list$1sNodephp_length(type->mArrayNum)>0&&!no_pointer) {
        buffer_append_str(buf_0,"*");
    }
    if(type->mRestrict) {
        buffer_append_str(buf_0,"restrict");
    }
    char* __result14__ = ((char*)(right_value4=buffer_to_string(buf_0)));
    if(buf_0) { come_call_finalizer(buffer_finalize,buf_0, (void*)0, (void*)0, 0, 0, 0); }
    return __result14__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* right_value5;
void* right_value6;
struct buffer* buf_9;
char* class_name_10;
int i_11;
struct sType* gtype_15;
void* right_value7;
int i_16;
void* right_value8;
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&buf_9, 0, sizeof(struct buffer*)); /* ddd */
memset(&class_name_10, 0, sizeof(char*)); /* ddd */
memset(&i_11, 0, sizeof(int)); /* ddd */
memset(&gtype_15, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value7, 0, sizeof(void*));
memset(&i_16, 0, sizeof(int)); /* ddd */
memset(&right_value8, 0, sizeof(void*));
    buf_9=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value5) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value6) { come_call_finalizer(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
    class_name_10=type->mClass->mName;
    buffer_append_str(buf_9,class_name_10);
    if(list$1sTypephp_length(type->mGenericsTypes)>0) {
        buffer_append_str(buf_9,"<");
        for(
        i_11=0;
        i_11<list$1sTypephp_length(type->mGenericsTypes);
        i_11++
        ){
            gtype_15=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_11);
            buffer_append_str(buf_9,((char*)(right_value7=make_come_type_name_string(gtype_15,info))));
            if(right_value7) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0); }
            if(i_11!=list$1sTypephp_length(type->mGenericsTypes)-1) {
                buffer_append_str(buf_9,",");
            }
        }
        buffer_append_str(buf_9,">");
    }
    if(type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_10,"lambda")) {
        for(
        i_16=0;
        i_16<type->mPointerNum;
        i_16++
        ){
            buffer_append_str(buf_9,"*");
        }
    }
    if(type->mHeap) {
        buffer_append_str(buf_9,"%");
    }
    char* __result18__ = ((char*)(right_value8=buffer_to_string(buf_9)));
    if(buf_9) { come_call_finalizer(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0); }
    return __result18__;
}

void come_init_v3(){
}

void come_final_v3(){
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* right_value94;
void* right_value95;
struct buffer* output_87;
void* right_value96;
void* right_value97;
struct buffer* output2_88;
int i_89;
struct sType* it_90;
char* name_91;
void* right_value98;
char* str_92;
void* right_value99;
void* right_value100;
char* str_93;
void* right_value101;
struct sType* base_result_type_94;
void* right_value102;
void* right_value103;
struct list$1sNodeph* __dec_obj20;
void* right_value104;
char* result_type_str_95;
int i_96;
struct sType* it_97;
char* name_98;
void* right_value105;
char* str_99;
void* right_value106;
struct CVALUE* cvalue_100;
void* right_value107;
void* right_value108;
char* result_type_str_101;
int i_102;
struct sType* it_103;
char* name_104;
void* right_value109;
char* str_105;
void* right_value110;
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&output_87, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&output2_88, 0, sizeof(struct buffer*)); /* ddd */
memset(&i_89, 0, sizeof(int)); /* ddd */
memset(&it_90, 0, sizeof(struct sType*)); /* ddd */
memset(&name_91, 0, sizeof(char*)); /* ddd */
memset(&right_value98, 0, sizeof(void*));
memset(&str_92, 0, sizeof(char*)); /* ddd */
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&str_93, 0, sizeof(char*)); /* ddd */
memset(&right_value101, 0, sizeof(void*));
memset(&base_result_type_94, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&result_type_str_95, 0, sizeof(char*)); /* ddd */
memset(&i_96, 0, sizeof(int)); /* ddd */
memset(&it_97, 0, sizeof(struct sType*)); /* ddd */
memset(&name_98, 0, sizeof(char*)); /* ddd */
memset(&right_value105, 0, sizeof(void*));
memset(&str_99, 0, sizeof(char*)); /* ddd */
memset(&right_value106, 0, sizeof(void*));
memset(&cvalue_100, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&result_type_str_101, 0, sizeof(char*)); /* ddd */
memset(&i_102, 0, sizeof(int)); /* ddd */
memset(&it_103, 0, sizeof(struct sType*)); /* ddd */
memset(&name_104, 0, sizeof(char*)); /* ddd */
memset(&right_value109, 0, sizeof(void*));
memset(&str_105, 0, sizeof(char*)); /* ddd */
memset(&right_value110, 0, sizeof(void*));
    output_87=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value95=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value94=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value94) { come_call_finalizer(buffer_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value95) { come_call_finalizer(buffer_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0); }
    if(fun->mResultType->mResultType) {
        output2_88=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value97=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value96=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value96) { come_call_finalizer(buffer_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value97) { come_call_finalizer(buffer_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(output2_88,fun->mName);
        buffer_append_str(output2_88,"(");
        i_89=0;
        for(
        it_90=list$1sTypephp_begin((fun->mParamTypes));
        !list$1sTypephp_end((fun->mParamTypes));
        it_90=list$1sTypephp_next((fun->mParamTypes))
        ){
            name_91=list$1charphp_operator_load_element(fun->mParamNames,i_89);
            str_92=(char*)come_increment_ref_count(((char*)(right_value98=make_define_var(it_90,name_91,info,(_Bool)0))));
            if(right_value98) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(output2_88,str_92);
            if(i_89!=list$1sTypephp_length(fun->mParamTypes)-1) {
                buffer_append_str(output2_88,", ");
            }
            i_89++;
            if(str_92) { str_92 = come_decrement_ref_count(str_92, (void*)0, (void*)0, 0, 0); }
        }
        buffer_append_str(output2_88,")");
        str_93=(char*)come_increment_ref_count(((char*)(right_value100=make_lambda_type_name_string(fun->mResultType,((char*)(right_value99=buffer_to_string(output2_88))),info))));
        if(right_value99) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0); }
        if(right_value100) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(output_87,str_93);
        buffer_append_str(output_87,";\n");
        if(output2_88) { come_call_finalizer(buffer_finalize,output2_88, (void*)0, (void*)0, 0, 0, 0); }
        if(str_93) { str_93 = come_decrement_ref_count(str_93, (void*)0, (void*)0, 0, 0); }
    }
    else if(list$1sNodephp_length(fun->mResultType->mArrayNum)>0) {
        base_result_type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(fun->mResultType))));
        if(right_value101) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj20=base_result_type_94->mArrayNum;
        base_result_type_94->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value103=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
        if(right_value103) { come_call_finalizer(list$1sNodephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
        result_type_str_95=(char*)come_increment_ref_count(((char*)(right_value104=make_type_name_string(base_result_type_94,(_Bool)1,(_Bool)0,info,(_Bool)0))));
        if(right_value104) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(output_87,result_type_str_95);
        buffer_append_str(output_87," (*");
        buffer_append_str(output_87,fun->mName);
        buffer_append_str(output_87,"(");
        i_96=0;
        for(
        it_97=list$1sTypephp_begin((fun->mParamTypes));
        !list$1sTypephp_end((fun->mParamTypes));
        it_97=list$1sTypephp_next((fun->mParamTypes))
        ){
            name_98=list$1charphp_operator_load_element(fun->mParamNames,i_96);
            str_99=(char*)come_increment_ref_count(((char*)(right_value105=make_define_var(it_97,name_98,info,(_Bool)0))));
            if(right_value105) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(output_87,str_99);
            if(i_96==list$1sTypephp_length(fun->mParamTypes)-1) {
                if(fun->mVarArgs) {
                    buffer_append_str(output_87,", ...");
                }
            }
            else {
                buffer_append_str(output_87,", ");
            }
            i_96++;
            if(str_99) { str_99 = come_decrement_ref_count(str_99, (void*)0, (void*)0, 0, 0); }
        }
        if(!list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0)->compile(list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0)->_protocol_obj,info)) {
            err_msg(info,"invalid array number");
            exit(2);
        }
        cvalue_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=get_value_from_stack(-1,info))));
        if(right_value106) { come_call_finalizer(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        buffer_append_str(output_87,((char*)(right_value107=xsprintf("))[%s];\n",cvalue_100->c_value))));
        if(right_value107) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0); }
        if(base_result_type_94) { come_call_finalizer(sType_finalize,base_result_type_94, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_str_95) { result_type_str_95 = come_decrement_ref_count(result_type_str_95, (void*)0, (void*)0, 0, 0); }
        if(cvalue_100) { come_call_finalizer(CVALUE_finalize,cvalue_100, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        result_type_str_101=(char*)come_increment_ref_count(((char*)(right_value108=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,info,(_Bool)0))));
        if(right_value108) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(output_87,result_type_str_101);
        buffer_append_str(output_87," ");
        buffer_append_str(output_87,fun->mName);
        buffer_append_str(output_87,"(");
        i_102=0;
        for(
        it_103=list$1sTypephp_begin((fun->mParamTypes));
        !list$1sTypephp_end((fun->mParamTypes));
        it_103=list$1sTypephp_next((fun->mParamTypes))
        ){
            name_104=list$1charphp_operator_load_element(fun->mParamNames,i_102);
            str_105=(char*)come_increment_ref_count(((char*)(right_value109=make_define_var(it_103,name_104,info,(_Bool)0))));
            if(right_value109) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(output_87,str_105);
            if(i_102==list$1sTypephp_length(fun->mParamTypes)-1) {
                if(fun->mVarArgs) {
                    buffer_append_str(output_87,", ...");
                }
            }
            else {
                buffer_append_str(output_87,", ");
            }
            i_102++;
            if(str_105) { str_105 = come_decrement_ref_count(str_105, (void*)0, (void*)0, 0, 0); }
        }
        buffer_append_str(output_87,");\n");
        if(result_type_str_101) { result_type_str_101 = come_decrement_ref_count(result_type_str_101, (void*)0, (void*)0, 0, 0); }
    }
    char* __result51__ = ((char*)(right_value110=buffer_to_string(output_87)));
    if(output_87) { come_call_finalizer(buffer_finalize,output_87, (void*)0, (void*)0, 0, 0, 0); }
    return __result51__;
}

int transpile_v3(struct sInfo* info){
void* right_value114;
char* name_111;
void* right_value115;
void* right_value116;
struct sType* result_type_112;
void* right_value117;
void* right_value118;
void* right_value119;
void* right_value120;
struct sType* __list_values1___113[2];
void* right_value124;
void* right_value125;
struct list$1sTypeph* param_types_118;
void* right_value126;
void* right_value127;
char* __list_values2___119[2];
void* right_value131;
void* right_value132;
struct list$1charph* param_names_124;
void* right_value133;
void* right_value134;
struct list$1charph* param_default_parametors_125;
void* right_value135;
void* right_value136;
void* right_value137;
struct sFun* main_fun_126;
void* right_value144;
memset(&right_value114, 0, sizeof(void*));
memset(&name_111, 0, sizeof(char*)); /* ddd */
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&result_type_112, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&param_types_118, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&param_names_124, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&param_default_parametors_125, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&main_fun_126, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value144, 0, sizeof(void*));
    name_111=(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string("main"))));
    if(right_value114) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0); }
    result_type_112=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value115=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
    if(right_value115) { come_call_finalizer(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value116) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
    {__list_values1___113[0]=come_increment_ref_count(((struct sType*)(right_value118=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
__list_values1___113[1]=come_increment_ref_count(((struct sType*)(right_value120=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value119=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char**",info,(_Bool)0))));
}    param_types_118=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value125=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value124=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),2,__list_values1___113))));
    if(right_value117) { come_call_finalizer(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value118) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value119) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value120) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value125) { come_call_finalizer(list$1sTypephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0); }
    {__list_values2___119[0]=come_increment_ref_count(((char*)(right_value126=__builtin_string("argc"))));
__list_values2___119[1]=come_increment_ref_count(((char*)(right_value127=__builtin_string("argv"))));
}    param_names_124=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value132=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value131=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),2,__list_values2___119))));
    if(right_value126) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0); }
    if(right_value127) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0); }
    if(right_value132) { come_call_finalizer(list$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
    param_default_parametors_125=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value133=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(right_value134) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
    main_fun_126=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value137=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value135=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1))))),(char*)come_increment_ref_count(name_111),(struct sType*)come_increment_ref_count(result_type_112),(struct list$1sTypeph*)come_increment_ref_count(param_types_118),(struct list$1charph*)come_increment_ref_count(param_names_124),(struct list$1charph*)come_increment_ref_count(param_default_parametors_125),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string("int main(int argc, char** argv)")))),info))));
    if(right_value135) { come_call_finalizer(sFun_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value136) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0); }
    if(right_value137) { come_call_finalizer(sFun_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(name_111)))),(struct sFun*)come_increment_ref_count(main_fun_126));
    if(right_value144) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0); }
    add_come_code(info,"#include <stdio.h>\n");
    info->come_fun=main_fun_126;
    info->block_level++;
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    add_come_code(info,"return 0;\n");
    info->block_level--;
    int __result68__ = 0;
    if(name_111) { name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0); }
    if(result_type_112) { come_call_finalizer(sType_finalize,result_type_112, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_118) { come_call_finalizer(list$1sTypephp_finalize,param_types_118, (void*)0, (void*)0, 0, 0, 0); }
    if(param_names_124) { come_call_finalizer(list$1charphp_finalize,param_names_124, (void*)0, (void*)0, 0, 0, 0); }
    if(param_default_parametors_125) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_125, (void*)0, (void*)0, 0, 0, 0); }
    if(main_fun_126) { come_call_finalizer(sFun_finalize,main_fun_126, (void*)0, (void*)0, 0, 0, 0); }
    return __result68__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* right_value145;
char* output_file_name_167;
struct _IO_FILE* f_168;
void* right_value146;
char* it_169;
void* right_value147;
struct sFun* it2_171;
void* right_value148;
char* header_172;
char* it_173;
void* right_value149;
struct sFun* it2_174;
void* right_value150;
char* header_175;
void* right_value151;
char* output_176;
void* right_value152;
char* output_177;
char* it_178;
struct sFun* it2_179;
void* right_value153;
char* output_180;
memset(&right_value145, 0, sizeof(void*));
memset(&output_file_name_167, 0, sizeof(char*)); /* ddd */
memset(&f_168, 0, sizeof(struct _IO_FILE*)); /* ddd */
memset(&right_value146, 0, sizeof(void*));
memset(&it_169, 0, sizeof(char*)); /* ddd */
memset(&right_value147, 0, sizeof(void*));
memset(&it2_171, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value148, 0, sizeof(void*));
memset(&header_172, 0, sizeof(char*)); /* ddd */
memset(&it_173, 0, sizeof(char*)); /* ddd */
memset(&right_value149, 0, sizeof(void*));
memset(&it2_174, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value150, 0, sizeof(void*));
memset(&header_175, 0, sizeof(char*)); /* ddd */
memset(&right_value151, 0, sizeof(void*));
memset(&output_176, 0, sizeof(char*)); /* ddd */
memset(&right_value152, 0, sizeof(void*));
memset(&output_177, 0, sizeof(char*)); /* ddd */
memset(&it_178, 0, sizeof(char*)); /* ddd */
memset(&it2_179, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value153, 0, sizeof(void*));
memset(&output_180, 0, sizeof(char*)); /* ddd */
    output_file_name_167=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s.c",info->sname))));
    if(right_value145) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0); }
    f_168=fopen(output_file_name_167,"w");
    fprintf(f_168,"// source head\n");
    fprintf(f_168,"%s\n",((char*)(right_value146=buffer_to_string(info->module->mSourceHead))));
    if(right_value146) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0); }
    fprintf(f_168,"// header function\n");
    for(
    it_169=map$2charphsFunphp_begin((info->funcs));
    !map$2charphsFunphp_end((info->funcs));
    it_169=map$2charphsFunphp_next((info->funcs))
    ){
        it2_171=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value147=__builtin_string(it_169))));
        if(right_value147) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0); }
        header_172=(char*)come_increment_ref_count(((char*)(right_value148=header_function(it2_171,info))));
        if(right_value148) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0); }
        if(it2_171->mStatic&&it2_171->mResultType->mInline) {
        }
        else if(it2_171->mStatic) {
            fprintf(f_168,"static %s",header_172);
        }
        else if(it2_171->mResultType->mInline) {
        }
        else if(charp_operator_not_equals(it_169,"__builtin_va_start")&&charp_operator_not_equals(it_169,"__builtin_va_end")) {
            fprintf(f_168,"%s\n",header_172,it_169);
        }
        if(header_172) { header_172 = come_decrement_ref_count(header_172, (void*)0, (void*)0, 0, 0); }
    }
    fprintf(f_168,"// inline function\n");
    for(
    it_173=map$2charphsFunphp_begin((info->funcs));
    !map$2charphsFunphp_end((info->funcs));
    it_173=map$2charphsFunphp_next((info->funcs))
    ){
        it2_174=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value149=__builtin_string(it_173))));
        if(right_value149) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0); }
        header_175=(char*)come_increment_ref_count(((char*)(right_value150=header_function(it2_174,info))));
        if(right_value150) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0); }
        if(it2_174->mStatic&&it2_174->mResultType->mInline) {
            output_176=(char*)come_increment_ref_count(((char*)(right_value151=output_function(it2_174,info))));
            if(right_value151) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0); }
            fprintf(f_168,"static inline %s",output_176);
            if(output_176) { output_176 = come_decrement_ref_count(output_176, (void*)0, (void*)0, 0, 0); }
        }
        else if(it2_174->mResultType->mInline) {
            output_177=(char*)come_increment_ref_count(((char*)(right_value152=output_function(it2_174,info))));
            if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
            fprintf(f_168,"inline %s",output_177);
            if(output_177) { output_177 = come_decrement_ref_count(output_177, (void*)0, (void*)0, 0, 0); }
        }
        else if(it2_174->mStatic) {
        }
        else if(charp_operator_not_equals(it_173,"__builtin_va_start")&&charp_operator_not_equals(it_173,"__builtin_va_end")) {
        }
        if(header_175) { header_175 = come_decrement_ref_count(header_175, (void*)0, (void*)0, 0, 0); }
    }
    fprintf(f_168,"\n");
    fprintf(f_168,"// body function\n");
    for(
    it_178=map$2charphsFunphp_begin((info->funcs));
    !map$2charphsFunphp_end((info->funcs));
    it_178=map$2charphsFunphp_next((info->funcs))
    ){
        it2_179=map$2charphsFunphp_operator_load_element(info->funcs,it_178);
        if(!it2_179->mExternal) {
            output_180=(char*)come_increment_ref_count(((char*)(right_value153=output_function(it2_179,info))));
            if(right_value153) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0); }
            if(it2_179->mStatic&&it2_179->mResultType->mInline) {
            }
            else if(it2_179->mStatic) {
                fprintf(f_168,"static %s",output_180);
            }
            else if(it2_179->mResultType->mInline) {
            }
            else {
                fprintf(f_168,"%s",output_180);
            }
            fprintf(f_168,"\n");
            if(output_180) { output_180 = come_decrement_ref_count(output_180, (void*)0, (void*)0, 0, 0); }
        }
    }
    fclose(f_168);
    _Bool __result70__ = (_Bool)1;
    if(output_file_name_167) { output_file_name_167 = come_decrement_ref_count(output_file_name_167, (void*)0, (void*)0, 0, 0); }
    return __result70__;
}

void show_type(struct sType* type, struct sInfo* info){
void* right_value9;
memset(&right_value9, 0, sizeof(void*));
    puts(((char*)(right_value9=make_type_name_string(type,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    if(right_value9) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0); }
}

void add_last_code_to_source(struct sInfo* info){
    if(info->no_output_come_code) {
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s",info->module->mLastCode);
        info->module->mLastCode=((void*)0);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s",info->module->mLastCode2);
        info->module->mLastCode2=((void*)0);
    }
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
va_list args_182;
memset(&args_182, 0, sizeof(va_list)); /* bbb */
    if(info->no_output_come_code) {
        return;
    }
    char msg2_181[2048];
    memset(&msg2_181, 0, sizeof(msg2_181)); /* aaa */
    __builtin_va_start(args_182,code);
    vsnprintf(msg2_181,2048,code,args_182);
    __builtin_va_end(args_182);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_181);
    }
    if((&args_182)) { come_call_finalizer(va_list_finalize,(&args_182), (void*)0, (void*)0, 1, 0, 0); }
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
va_list args_184;
memset(&args_184, 0, sizeof(va_list)); /* bbb */
    if(info->no_output_come_code) {
        return;
    }
    char msg2_183[2048];
    memset(&msg2_183, 0, sizeof(msg2_183)); /* aaa */
    __builtin_va_start(args_184,code);
    vsnprintf(msg2_183,2048,code,args_184);
    __builtin_va_end(args_184);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_183);
    }
    if((&args_184)) { come_call_finalizer(va_list_finalize,(&args_184), (void*)0, (void*)0, 1, 0, 0); }
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
va_list args_110;
void* right_value113;
memset(&args_110, 0, sizeof(va_list)); /* bbb */
memset(&right_value113, 0, sizeof(void*));
    if(info->no_output_come_code) {
        return;
    }
    char msg2_109[2048];
    memset(&msg2_109, 0, sizeof(msg2_109)); /* aaa */
    __builtin_va_start(args_110,msg);
    vsnprintf(msg2_109,2048,msg,args_110);
    __builtin_va_end(args_110);
    buffer_append_str(info->module->mSourceHead,((char*)(right_value113=xsprintf("%s",msg2_109))));
    if(right_value113) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0); }
    if((&args_110)) { come_call_finalizer(va_list_finalize,(&args_110), (void*)0, (void*)0, 1, 0, 0); }
}

void add_come_code(struct sInfo* info, const char* msg, ...){
va_list args_107;
int i_108;
void* right_value111;
void* right_value112;
memset(&args_107, 0, sizeof(va_list)); /* bbb */
memset(&i_108, 0, sizeof(int)); /* bbb */
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
    if(info->no_output_come_code) {
        return;
    }
    char msg2_106[2048];
    memset(&msg2_106, 0, sizeof(msg2_106)); /* aaa */
    __builtin_va_start(args_107,msg);
    vsnprintf(msg2_106,2048,msg,args_107);
    __builtin_va_end(args_107);
    if(info->come_fun) {
        for(
        i_108=0;
        i_108<info->block_level;
        i_108++
        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(right_value111=xsprintf("%s",msg2_106))));
        if(right_value111) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0); }
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(right_value112=xsprintf("%s",msg2_106))));
        if(right_value112) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0); }
    }
    if((&args_107)) { come_call_finalizer(va_list_finalize,(&args_107), (void*)0, (void*)0, 1, 0, 0); }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
va_list args_186;
void* right_value156;
char* __dec_obj27;
memset(&args_186, 0, sizeof(va_list)); /* bbb */
memset(&right_value156, 0, sizeof(void*));
    if(info->no_output_come_code) {
        return;
    }
    char msg2_185[2048];
    memset(&msg2_185, 0, sizeof(msg2_185)); /* aaa */
    __builtin_va_start(args_186,msg);
    vsnprintf(msg2_185,2048,msg,args_186);
    __builtin_va_end(args_186);
    __dec_obj27=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("%s",msg2_185))));
    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
    if(right_value156) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0); }
    if((&args_186)) { come_call_finalizer(va_list_finalize,(&args_186), (void*)0, (void*)0, 1, 0, 0); }
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
va_list args_188;
void* right_value157;
char* __dec_obj28;
memset(&args_188, 0, sizeof(va_list)); /* bbb */
memset(&right_value157, 0, sizeof(void*));
    if(info->no_output_come_code) {
        return;
    }
    char msg2_187[2048];
    memset(&msg2_187, 0, sizeof(msg2_187)); /* aaa */
    __builtin_va_start(args_188,msg);
    vsnprintf(msg2_187,2048,msg,args_188);
    __builtin_va_end(args_188);
    __dec_obj28=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%s",msg2_187))));
    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
    if(right_value157) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0); }
    if((&args_188)) { come_call_finalizer(va_list_finalize,(&args_188), (void*)0, (void*)0, 1, 0, 0); }
}

void add_last_code_to_source_without_semicolon(struct sInfo* info){
void* right_value154;
void* right_value155;
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
    if(info->no_output_come_code) {
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s\n",((char*)(right_value154=string_substring(info->module->mLastCode,0,-3))));
        if(right_value154) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0); }
        info->module->mLastCode=((void*)0);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s\n",((char*)(right_value155=string_substring(info->module->mLastCode2,0,-3))));
        if(right_value155) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0); }
        info->module->mLastCode2=((void*)0);
    }
}

void dec_stack_ptr(int value, struct sInfo* info){
    list$1CVALUEphp_delete(info->stack,-value-1,-1);
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* right_value161;
memset(&right_value161, 0, sizeof(void*));
    info->module->mLastCode=((void*)0);
    info->module->mLastCode2=((void*)0);
    struct CVALUE* __result76__ = ((struct CVALUE*)(right_value161=CVALUEp_clone(list$1CVALUEphp_operator_load_element(info->stack,offset))));
    return __result76__;
}

char* make_define_var(struct sType* type, char* name, struct sInfo* info, _Bool in_header){
void* right_value21;
void* right_value22;
struct buffer* buf_22;
void* right_value23;
char* str_23;
void* right_value24;
void* right_value25;
char* type_str_24;
void* right_value26;
char* type_str_25;
struct sNode* it_27;
void* right_value27;
struct CVALUE* cvalue_29;
void* right_value28;
void* right_value29;
char* type_str_36;
void* right_value30;
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&buf_22, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value23, 0, sizeof(void*));
memset(&str_23, 0, sizeof(char*)); /* ddd */
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&type_str_24, 0, sizeof(char*)); /* ddd */
memset(&right_value26, 0, sizeof(void*));
memset(&type_str_25, 0, sizeof(char*)); /* ddd */
memset(&it_27, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value27, 0, sizeof(void*));
memset(&cvalue_29, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&type_str_36, 0, sizeof(char*)); /* ddd */
memset(&right_value30, 0, sizeof(void*));
    buf_22=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value22=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value21) { come_call_finalizer(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value22) { come_call_finalizer(buffer_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
    if(string_operator_equals(type->mClass->mName,"lambda")) {
        str_23=(char*)come_increment_ref_count(((char*)(right_value23=make_lambda_type_name_string(type,name,info))));
        if(right_value23) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_22,str_23);
        if(str_23) { str_23 = come_decrement_ref_count(str_23, (void*)0, (void*)0, 0, 0); }
    }
    else if(type->mSizeNum>0) {
        buffer_append_str(buf_22,"int ");
        buffer_append_str(buf_22,((char*)(right_value24=xsprintf("%s:%d",name,type->mSizeNum))));
        if(right_value24) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0); }
    }
    else if(type->mOmitArrayNum) {
        type_str_24=(char*)come_increment_ref_count(((char*)(right_value25=make_type_name_string(type,in_header,(_Bool)0,info,(_Bool)0))));
        if(right_value25) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_22,type_str_24);
        buffer_append_str(buf_22," ");
        buffer_append_str(buf_22,name);
        buffer_append_str(buf_22,"[]");
        if(type_str_24) { type_str_24 = come_decrement_ref_count(type_str_24, (void*)0, (void*)0, 0, 0); }
    }
    else if(list$1sNodephp_length(type->mArrayNum)>0) {
        type_str_25=(char*)come_increment_ref_count(((char*)(right_value26=make_type_name_string(type,in_header,(_Bool)0,info,(_Bool)0))));
        if(right_value26) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_22,type_str_25);
        buffer_append_str(buf_22," ");
        if(type->mNoArrayPointerNum>0) {
            buffer_append_str(buf_22,"(*");
        }
        buffer_append_str(buf_22,name);
        if(type->mNoArrayPointerNum>0) {
            buffer_append_str(buf_22,")");
        }
        for(
        it_27=list$1sNodephp_begin((type->mArrayNum));
        !list$1sNodephp_end((type->mArrayNum));
        it_27=list$1sNodephp_next((type->mArrayNum))
        ){
            if(!it_27->compile(it_27->_protocol_obj,info)) {
                err_msg(info,"invalid array number");
                exit(2);
            }
            cvalue_29=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value27=get_value_from_stack(-1,info))));
            if(right_value27) { come_call_finalizer(CVALUE_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0); }
            dec_stack_ptr(1,info);
            buffer_append_str(buf_22,((char*)(right_value28=xsprintf("[%s]",cvalue_29->c_value))));
            if(right_value28) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0); }
            if(cvalue_29) { come_call_finalizer(CVALUE_finalize,cvalue_29, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(type_str_25) { type_str_25 = come_decrement_ref_count(type_str_25, (void*)0, (void*)0, 0, 0); }
    }
    else {
        type_str_36=(char*)come_increment_ref_count(((char*)(right_value29=make_type_name_string(type,in_header,(_Bool)0,info,(_Bool)0))));
        if(right_value29) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_22,type_str_36);
        buffer_append_str(buf_22," ");
        if(type->mNoArrayPointerNum>0) {
            buffer_append_str(buf_22,"(*");
        }
        buffer_append_str(buf_22,name);
        if(type->mNoArrayPointerNum>0) {
            buffer_append_str(buf_22,")");
        }
        if(type_str_36) { type_str_36 = come_decrement_ref_count(type_str_36, (void*)0, (void*)0, 0, 0); }
    }
    char* __result27__ = ((char*)(right_value30=buffer_to_string(buf_22)));
    if(buf_22) { come_call_finalizer(buffer_finalize,buf_22, (void*)0, (void*)0, 0, 0, 0); }
    return __result27__;
}

char* make_come_define_var(struct sType* type, char* name, struct sInfo* info){
void* right_value31;
void* right_value32;
struct buffer* buf_37;
void* right_value33;
char* str_38;
void* right_value34;
void* right_value35;
char* type_str_39;
void* right_value36;
char* type_str_40;
struct sNode* it_41;
void* right_value37;
struct CVALUE* cvalue_42;
void* right_value38;
void* right_value39;
char* type_str_43;
void* right_value40;
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&buf_37, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value33, 0, sizeof(void*));
memset(&str_38, 0, sizeof(char*)); /* ddd */
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&type_str_39, 0, sizeof(char*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
memset(&type_str_40, 0, sizeof(char*)); /* ddd */
memset(&it_41, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value37, 0, sizeof(void*));
memset(&cvalue_42, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&type_str_43, 0, sizeof(char*)); /* ddd */
memset(&right_value40, 0, sizeof(void*));
    buf_37=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value31) { come_call_finalizer(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value32) { come_call_finalizer(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0); }
    if(string_operator_equals(type->mClass->mName,"lambda")) {
        str_38=(char*)come_increment_ref_count(((char*)(right_value33=make_lambda_type_name_string(type,name,info))));
        if(right_value33) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_37,str_38);
        if(str_38) { str_38 = come_decrement_ref_count(str_38, (void*)0, (void*)0, 0, 0); }
    }
    else if(type->mSizeNum>0) {
        buffer_append_str(buf_37,"int ");
        buffer_append_str(buf_37,((char*)(right_value34=xsprintf("%s:%d",name,type->mSizeNum))));
        if(right_value34) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0); }
    }
    else if(type->mOmitArrayNum) {
        type_str_39=(char*)come_increment_ref_count(((char*)(right_value35=make_come_type_name_string(type,info))));
        if(right_value35) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_37,type_str_39);
        buffer_append_str(buf_37," ");
        buffer_append_str(buf_37,name);
        buffer_append_str(buf_37,"[]");
        if(type_str_39) { type_str_39 = come_decrement_ref_count(type_str_39, (void*)0, (void*)0, 0, 0); }
    }
    else if(list$1sNodephp_length(type->mArrayNum)>0) {
        type_str_40=(char*)come_increment_ref_count(((char*)(right_value36=make_come_type_name_string(type,info))));
        if(right_value36) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_37,type_str_40);
        buffer_append_str(buf_37," ");
        if(type->mNoArrayPointerNum>0) {
            buffer_append_str(buf_37,"(*");
        }
        buffer_append_str(buf_37,name);
        if(type->mNoArrayPointerNum>0) {
            buffer_append_str(buf_37,")");
        }
        for(
        it_41=list$1sNodephp_begin((type->mArrayNum));
        !list$1sNodephp_end((type->mArrayNum));
        it_41=list$1sNodephp_next((type->mArrayNum))
        ){
            if(!it_41->compile(it_41->_protocol_obj,info)) {
                err_msg(info,"invalid array number");
                exit(2);
            }
            cvalue_42=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value37=get_value_from_stack(-1,info))));
            if(right_value37) { come_call_finalizer(CVALUE_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0); }
            dec_stack_ptr(1,info);
            buffer_append_str(buf_37,((char*)(right_value38=xsprintf("[%s]",cvalue_42->c_value))));
            if(right_value38) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0); }
            if(cvalue_42) { come_call_finalizer(CVALUE_finalize,cvalue_42, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(type_str_40) { type_str_40 = come_decrement_ref_count(type_str_40, (void*)0, (void*)0, 0, 0); }
    }
    else {
        type_str_43=(char*)come_increment_ref_count(((char*)(right_value39=make_come_type_name_string(type,info))));
        if(right_value39) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_37,type_str_43);
        buffer_append_str(buf_37," ");
        if(type->mNoArrayPointerNum>0) {
            buffer_append_str(buf_37,"(*");
        }
        buffer_append_str(buf_37,name);
        if(type->mNoArrayPointerNum>0) {
            buffer_append_str(buf_37,")");
        }
        if(type_str_43) { type_str_43 = come_decrement_ref_count(type_str_43, (void*)0, (void*)0, 0, 0); }
    }
    char* __result28__ = ((char*)(right_value40=buffer_to_string(buf_37)));
    if(buf_37) { come_call_finalizer(buffer_finalize,buf_37, (void*)0, (void*)0, 0, 0, 0); }
    return __result28__;
}

void transpiler_clear_last_code(struct sInfo* info){
    info->module->mLastCode=((void*)0);
    info->module->mLastCode2=((void*)0);
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_4;
memset(&result_4, 0, sizeof(struct sType*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct sType* __result7__ = self->it->item;
                return __result7__;
            }
            memset(&result_4,0,sizeof(struct sType*));
            struct sType* __result8__ = result_4;
            return __result8__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
            _Bool __result9__ = self->it==((void*)0);
            return __result9__;
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_6;
memset(&result_6, 0, sizeof(struct sType*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct sType* __result10__ = self->it->item;
                return __result10__;
            }
            memset(&result_6,0,sizeof(struct sType*));
            struct sType* __result11__ = result_6;
            return __result11__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
                int __result12__ = self->len;
                return __result12__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
        int __result13__ = self->len;
        return __result13__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_12;
memset(&default_value_12, 0, sizeof(struct sType*)); /* bbb */
                memset(&default_value_12,0,sizeof(struct sType*));
                struct sType* __result17__ = list$1sTypephp_item(self,index,default_value_12);
                return __result17__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_13;
int i_14;
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&i_14, 0, sizeof(int)); /* ddd */
                    if(position<0) {
                        position+=self->len;
                    }
                    it_13=self->head;
                    i_14=0;
                    while(it_13!=((void*)0)) {
                        if(position==i_14) {
                            struct sType* __result15__ = it_13->item;
                            return __result15__;
                        }
                        it_13=it_13->next;
                        i_14++;
                    }
                    struct sType* __result16__ = default_value;
                    return __result16__;
}

char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* right_value10;
void* right_value11;
struct buffer* buf_17;
void* right_value12;
int i_18;
struct sType* it_19;
void* right_value13;
void* right_value14;
void* right_value15;
void* right_value16;
void* right_value17;
int i_20;
struct sType* it_21;
void* right_value18;
void* right_value19;
void* right_value20;
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&buf_17, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value12, 0, sizeof(void*));
memset(&i_18, 0, sizeof(int)); /* ddd */
memset(&it_19, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&i_20, 0, sizeof(int)); /* ddd */
memset(&it_21, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
    buf_17=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value10) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value11) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
    if(type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda")) {
        buffer_append_str(buf_17,((char*)(right_value12=xsprintf("(*%s)(",var_name))));
        if(right_value12) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0); }
        i_18=0;
        for(
        it_19=list$1sTypephp_begin((type->mParamTypes));
        !list$1sTypephp_end((type->mParamTypes));
        it_19=list$1sTypephp_next((type->mParamTypes))
        ){
            buffer_append_str(buf_17,((char*)(right_value13=make_type_name_string(it_19,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            if(right_value13) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0); }
            if(i_18!=list$1sTypephp_length(type->mParamTypes)-1) {
                buffer_append_str(buf_17,",");
            }
            i_18++;
        }
        buffer_append_str(buf_17,")");
        char* __result19__ = ((char*)(right_value15=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value14=buffer_to_string(buf_17))),info)));
        if(right_value14) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0); }
        return __result19__;
    }
    else {
        buffer_append_str(buf_17,((char*)(right_value17=xsprintf("%s (*%s)(",((char*)(right_value16=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_name))));
        if(right_value16) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0); }
        if(right_value17) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0); }
        i_20=0;
        for(
        it_21=list$1sTypephp_begin((type->mParamTypes));
        !list$1sTypephp_end((type->mParamTypes));
        it_21=list$1sTypephp_next((type->mParamTypes))
        ){
            buffer_append_str(buf_17,((char*)(right_value18=make_type_name_string(it_21,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            if(right_value18) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0); }
            if(i_20!=list$1sTypephp_length(type->mParamTypes)-1) {
                buffer_append_str(buf_17,",");
            }
            i_20++;
        }
        buffer_append_str(buf_17,")");
        char* __result20__ = ((char*)(right_value19=buffer_to_string(buf_17)));
        return __result20__;
    }
    char* __result21__ = ((char*)(right_value20=buffer_to_string(buf_17)));
    if(buf_17) { come_call_finalizer(buffer_finalize,buf_17, (void*)0, (void*)0, 0, 0, 0); }
    return __result21__;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
struct sNode* result_26;
memset(&result_26, 0, sizeof(struct sNode*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct sNode* __result22__ = self->it->item;
                return __result22__;
            }
            memset(&result_26,0,sizeof(struct sNode*));
            struct sNode* __result23__ = result_26;
            return __result23__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
            _Bool __result24__ = self->it==((void*)0);
            return __result24__;
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
struct sNode* result_28;
memset(&result_28, 0, sizeof(struct sNode*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct sNode* __result25__ = self->it->item;
                return __result25__;
            }
            memset(&result_28,0,sizeof(struct sNode*));
            struct sNode* __result26__ = result_28;
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
struct list_item$1sTypeph* it_30;
struct list_item$1sTypeph* prev_it_31;
memset(&it_30, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&prev_it_31, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                                it_30=self->head;
                                while(it_30!=((void*)0)) {
                                    if(1) {
                                        if(it_30->item) { come_call_finalizer(sType_finalize,it_30->item, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    prev_it_31=it_30;
                                    it_30=it_30->next;
                                    come_free_object(prev_it_31);
                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_32;
struct list_item$1sNodeph* prev_it_33;
memset(&it_32, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&prev_it_33, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                                it_32=self->head;
                                while(it_32!=((void*)0)) {
                                    if(1) {
                                        if(it_32->item) { it_32->item = come_decrement_ref_count(it_32->item, ((struct sNode*)it_32->item)->finalize, ((struct sNode*)it_32->item)->_protocol_obj, 0, 0); } 
                                    }
                                    prev_it_33=it_32;
                                    it_32=it_32->next;
                                    come_free_object(prev_it_33);
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_34;
struct list_item$1charph* prev_it_35;
memset(&it_34, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&prev_it_35, 0, sizeof(struct list_item$1charph*)); /* ddd */
                                it_34=self->head;
                                while(it_34!=((void*)0)) {
                                    if(1) {
                                        if(it_34->item) { it_34->item = come_decrement_ref_count(it_34->item, (void*)0, (void*)0, 0, 0); }
                                    }
                                    prev_it_35=it_34;
                                    it_34=it_34->next;
                                    come_free_object(prev_it_35);
                                }
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* right_value41;
void* right_value42;
struct buffer* output_44;
void* right_value43;
void* right_value44;
struct buffer* output2_45;
int i_46;
struct sType* it_47;
char* name_51;
void* right_value45;
char* str_52;
void* right_value46;
void* right_value47;
char* str_53;
void* right_value48;
void* right_value79;
struct sType* base_result_type_72;
void* right_value80;
void* right_value81;
struct list$1sNodeph* __dec_obj19;
void* right_value82;
char* result_type_str_73;
int i_74;
struct sType* it_75;
char* name_76;
void* right_value83;
char* str_77;
void* right_value84;
struct CVALUE* cvalue_81;
void* right_value85;
void* right_value86;
void* right_value87;
char* result_type_str_82;
int i_83;
struct sType* it_84;
char* name_85;
void* right_value88;
char* str_86;
void* right_value89;
void* right_value90;
void* right_value91;
void* right_value92;
void* right_value93;
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&output_44, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&output2_45, 0, sizeof(struct buffer*)); /* ddd */
memset(&i_46, 0, sizeof(int)); /* ddd */
memset(&it_47, 0, sizeof(struct sType*)); /* ddd */
memset(&name_51, 0, sizeof(char*)); /* ddd */
memset(&right_value45, 0, sizeof(void*));
memset(&str_52, 0, sizeof(char*)); /* ddd */
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&str_53, 0, sizeof(char*)); /* ddd */
memset(&right_value48, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&base_result_type_72, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&result_type_str_73, 0, sizeof(char*)); /* ddd */
memset(&i_74, 0, sizeof(int)); /* ddd */
memset(&it_75, 0, sizeof(struct sType*)); /* ddd */
memset(&name_76, 0, sizeof(char*)); /* ddd */
memset(&right_value83, 0, sizeof(void*));
memset(&str_77, 0, sizeof(char*)); /* ddd */
memset(&right_value84, 0, sizeof(void*));
memset(&cvalue_81, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&result_type_str_82, 0, sizeof(char*)); /* ddd */
memset(&i_83, 0, sizeof(int)); /* ddd */
memset(&it_84, 0, sizeof(struct sType*)); /* ddd */
memset(&name_85, 0, sizeof(char*)); /* ddd */
memset(&right_value88, 0, sizeof(void*));
memset(&str_86, 0, sizeof(char*)); /* ddd */
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
    output_44=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value42=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value41=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value41) { come_call_finalizer(buffer_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value42) { come_call_finalizer(buffer_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
    if(fun->mResultType->mResultType) {
        output2_45=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value43) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value44) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(output2_45,fun->mName);
        buffer_append_str(output2_45,"(");
        i_46=0;
        for(
        it_47=list$1sTypephp_begin((fun->mParamTypes));
        !list$1sTypephp_end((fun->mParamTypes));
        it_47=list$1sTypephp_next((fun->mParamTypes))
        ){
            name_51=list$1charphp_operator_load_element(fun->mParamNames,i_46);
            str_52=(char*)come_increment_ref_count(((char*)(right_value45=make_define_var(it_47,name_51,info,(_Bool)0))));
            if(right_value45) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(output2_45,str_52);
            if(i_46==list$1sTypephp_length(fun->mParamTypes)-1) {
                if(fun->mVarArgs) {
                    buffer_append_str(output2_45,", ...");
                }
            }
            else {
                buffer_append_str(output2_45,", ");
            }
            i_46++;
            if(str_52) { str_52 = come_decrement_ref_count(str_52, (void*)0, (void*)0, 0, 0); }
        }
        buffer_append_str(output2_45,")");
        str_53=(char*)come_increment_ref_count(((char*)(right_value47=make_lambda_type_name_string(fun->mResultType,((char*)(right_value46=buffer_to_string(output2_45))),info))));
        if(right_value46) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0); }
        if(right_value47) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(output_44,str_53);
        buffer_append_str(output_44,")");
        buffer_append_str(info->module->mSourceHead,((char*)(right_value48=buffer_to_string(output_44))));
        if(right_value48) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(info->module->mSourceHead,";\n");
        if(output2_45) { come_call_finalizer(buffer_finalize,output2_45, (void*)0, (void*)0, 0, 0, 0); }
        if(str_53) { str_53 = come_decrement_ref_count(str_53, (void*)0, (void*)0, 0, 0); }
    }
    else if(list$1sNodephp_length(fun->mResultType->mArrayNum)>0) {
        base_result_type_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(fun->mResultType))));
        if(right_value79) { come_call_finalizer(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj19=base_result_type_72->mArrayNum;
        base_result_type_72->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value81=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value80=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
        if(right_value81) { come_call_finalizer(list$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
        result_type_str_73=(char*)come_increment_ref_count(((char*)(right_value82=make_type_name_string(base_result_type_72,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        if(right_value82) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(output_44,result_type_str_73);
        buffer_append_str(output_44," (*");
        buffer_append_str(output_44,fun->mName);
        buffer_append_str(output_44,"(");
        i_74=0;
        for(
        it_75=list$1sTypephp_begin((fun->mParamTypes));
        !list$1sTypephp_end((fun->mParamTypes));
        it_75=list$1sTypephp_next((fun->mParamTypes))
        ){
            name_76=list$1charphp_operator_load_element(fun->mParamNames,i_74);
            str_77=(char*)come_increment_ref_count(((char*)(right_value83=make_define_var(it_75,name_76,((void*)0),(_Bool)0))));
            if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(output_44,str_77);
            if(i_74==list$1sTypephp_length(fun->mParamTypes)-1) {
                if(fun->mVarArgs) {
                    buffer_append_str(output_44,", ...");
                }
            }
            else {
                buffer_append_str(output_44,", ");
            }
            i_74++;
            if(str_77) { str_77 = come_decrement_ref_count(str_77, (void*)0, (void*)0, 0, 0); }
        }
        if(!list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0)->compile(list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0)->_protocol_obj,info)) {
            err_msg(info,"invalid array number");
            exit(2);
        }
        cvalue_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=get_value_from_stack(-1,info))));
        if(right_value84) { come_call_finalizer(CVALUE_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        buffer_append_str(output_44,((char*)(right_value85=xsprintf("))[%s]",cvalue_81->c_value))));
        if(right_value85) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(info->module->mSourceHead,((char*)(right_value86=buffer_to_string(output_44))));
        if(right_value86) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(info->module->mSourceHead,";\n");
        if(base_result_type_72) { come_call_finalizer(sType_finalize,base_result_type_72, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_str_73) { result_type_str_73 = come_decrement_ref_count(result_type_str_73, (void*)0, (void*)0, 0, 0); }
        if(cvalue_81) { come_call_finalizer(CVALUE_finalize,cvalue_81, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        result_type_str_82=(char*)come_increment_ref_count(((char*)(right_value87=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(output_44,result_type_str_82);
        buffer_append_str(output_44," ");
        buffer_append_str(output_44,fun->mName);
        buffer_append_str(output_44,"(");
        i_83=0;
        for(
        it_84=list$1sTypephp_begin((fun->mParamTypes));
        !list$1sTypephp_end((fun->mParamTypes));
        it_84=list$1sTypephp_next((fun->mParamTypes))
        ){
            name_85=list$1charphp_operator_load_element(fun->mParamNames,i_83);
            str_86=(char*)come_increment_ref_count(((char*)(right_value88=make_define_var(it_84,name_85,info,(_Bool)0))));
            if(right_value88) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0); }
            buffer_append_str(output_44,str_86);
            if(i_83==list$1sTypephp_length(fun->mParamTypes)-1) {
                if(fun->mVarArgs) {
                    buffer_append_str(output_44,", ...");
                }
            }
            else {
                buffer_append_str(output_44,", ");
            }
            i_83++;
            if(str_86) { str_86 = come_decrement_ref_count(str_86, (void*)0, (void*)0, 0, 0); }
        }
        buffer_append_str(output_44,")");
        buffer_append_str(info->module->mSourceHead,((char*)(right_value89=buffer_to_string(output_44))));
        if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(info->module->mSourceHead,";\n");
        if(result_type_str_82) { result_type_str_82 = come_decrement_ref_count(result_type_str_82, (void*)0, (void*)0, 0, 0); }
    }
    buffer_append_str(output_44,"{\n");
    buffer_append_str(output_44,((char*)(right_value90=buffer_to_string(fun->mSourceHead))));
    if(right_value90) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0); }
    buffer_append_str(output_44,((char*)(right_value91=buffer_to_string(fun->mSourceHead2))));
    if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
    buffer_append_str(output_44,((char*)(right_value92=buffer_to_string(fun->mSource))));
    if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
    buffer_append_str(output_44,"}\n");
    char* __result50__ = ((char*)(right_value93=buffer_to_string(output_44)));
    if(output_44) { come_call_finalizer(buffer_finalize,output_44, (void*)0, (void*)0, 0, 0, 0); }
    return __result50__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index){
char* default_value_48;
memset(&default_value_48, 0, sizeof(char*)); /* bbb */
                memset(&default_value_48,0,sizeof(char*));
                char* __result31__ = list$1charphp_item(self,index,default_value_48);
                return __result31__;
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_49;
int i_50;
memset(&it_49, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_50, 0, sizeof(int)); /* ddd */
                    if(position<0) {
                        position+=self->len;
                    }
                    it_49=self->head;
                    i_50=0;
                    while(it_49!=((void*)0)) {
                        if(position==i_50) {
                            char* __result29__ = it_49->item;
                            return __result29__;
                        }
                        it_49=it_49->next;
                        i_50++;
                    }
                    char* __result30__ = default_value;
                    return __result30__;
}

static struct sType* sType_clone(struct sType* self){
void* right_value49;
struct sType* result_54;
void* right_value52;
struct tuple1$1sTypeph* __dec_obj2;
void* right_value53;
char* __dec_obj3;
void* right_value60;
struct list$1sTypeph* __dec_obj7;
void* right_value68;
struct list$1sNodeph* __dec_obj11;
void* right_value69;
struct list$1sTypeph* __dec_obj12;
void* right_value76;
struct list$1charph* __dec_obj16;
void* right_value77;
struct tuple1$1sTypeph* __dec_obj17;
void* right_value78;
char* __dec_obj18;
memset(&right_value49, 0, sizeof(void*));
memset(&result_54, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sType* __result32__ = (void*)0;
                return __result32__;
            }
            result_54=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
            if(right_value49) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_54->mClass=self->mClass;
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                __dec_obj2=result_54->mNoSolvedGenericsType;
                result_54->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value52=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
                if(right_value52) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                __dec_obj3=result_54->mGenericsName;
                result_54->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value53=string_clone(self->mGenericsName))));
                if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
                if(right_value53) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                __dec_obj7=result_54->mGenericsTypes;
                result_54->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value60=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
                if(right_value60) { come_call_finalizer(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj11=result_54->mArrayNum;
                result_54->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value68=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0); }
                if(right_value68) { come_call_finalizer(list$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_54->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj12=result_54->mParamTypes;
                result_54->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value69=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0); }
                if(right_value69) { come_call_finalizer(list$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj16=result_54->mParamNames;
                result_54->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
                if(right_value76) { come_call_finalizer(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj17=result_54->mResultType;
                result_54->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value77=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
                if(right_value77) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_54->mVarArgs=self->mVarArgs;
            }
            if(self!=((void*)0)) {
                result_54->mUnsigned=self->mUnsigned;
            }
            if(self!=((void*)0)) {
                result_54->mShort=self->mShort;
            }
            if(self!=((void*)0)) {
                result_54->mLong=self->mLong;
            }
            if(self!=((void*)0)) {
                result_54->mLongLong=self->mLongLong;
            }
            if(self!=((void*)0)) {
                result_54->mConstant=self->mConstant;
            }
            if(self!=((void*)0)) {
                result_54->mRegister=self->mRegister;
            }
            if(self!=((void*)0)) {
                result_54->mVolatile=self->mVolatile;
            }
            if(self!=((void*)0)) {
                result_54->mStatic=self->mStatic;
            }
            if(self!=((void*)0)) {
                result_54->mExtern=self->mExtern;
            }
            if(self!=((void*)0)) {
                result_54->mRestrict=self->mRestrict;
            }
            if(self!=((void*)0)) {
                result_54->mImmutable=self->mImmutable;
            }
            if(self!=((void*)0)) {
                result_54->mHeap=self->mHeap;
            }
            if(self!=((void*)0)) {
                result_54->mDummyHeap=self->mDummyHeap;
            }
            if(self!=((void*)0)) {
                result_54->mNoHeap=self->mNoHeap;
            }
            if(self!=((void*)0)) {
                result_54->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(self!=((void*)0)) {
                result_54->mRefference=self->mRefference;
            }
            if(self!=((void*)0)) {
                result_54->mException=self->mException;
            }
            if(self!=((void*)0)) {
                result_54->mPointerNum=self->mPointerNum;
            }
            if(self!=((void*)0)) {
                result_54->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(self!=((void*)0)) {
                result_54->mSizeNum=self->mSizeNum;
            }
            if(self!=((void*)0)) {
                result_54->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(self!=((void*)0)) {
                result_54->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                __dec_obj18=result_54->mOriginalTypeName;
                result_54->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(self->mOriginalTypeName))));
                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
                if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_54->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(self!=((void*)0)) {
                result_54->mFunctionParam=self->mFunctionParam;
            }
            if(self!=((void*)0)) {
                result_54->mAllocaValue=self->mAllocaValue;
            }
            if(self!=((void*)0)) {
                result_54->mGenericsStruct=self->mGenericsStruct;
            }
            if(self!=((void*)0)) {
                result_54->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(self!=((void*)0)) {
                result_54->mInline=self->mInline;
            }
            struct sType* __result46__ = result_54;
            if(result_54) { come_call_finalizer(sType_finalize,result_54, (void*)0, (void*)0, 0, 0, 1); }
            return __result46__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value50;
struct tuple1$1sTypeph* result_55;
void* right_value51;
struct sType* __dec_obj1;
memset(&right_value50, 0, sizeof(void*));
memset(&result_55, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value51, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct tuple1$1sTypeph* __result33__ = (void*)0;
                        return __result33__;
                    }
                    result_55=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value50=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                    if(right_value50) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        __dec_obj1=result_55->v1;
                        result_55->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=sType_clone(self->v1))));
                        if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
                        if(right_value51) { come_call_finalizer(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    struct tuple1$1sTypeph* __result34__ = result_55;
                    if(result_55) { come_call_finalizer(tuple1$1sTypephp_finalize,result_55, (void*)0, (void*)0, 0, 0, 1); }
                    return __result34__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value54;
void* right_value55;
struct list$1sTypeph* result_56;
struct list_item$1sTypeph* it_57;
void* right_value59;
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&result_56, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_57, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value59, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1sTypeph* __result35__ = ((void*)0);
                        return __result35__;
                    }
                    result_56=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value54=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                    if(right_value55) { come_call_finalizer(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
                    it_57=self->head;
                    while(it_57!=((void*)0)) {
                        list$1sTypephp_push_back2(result_56,(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(it_57->item)))));
                        if(right_value59) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
                        it_57=it_57->next;
                    }
                    struct list$1sTypeph* __result37__ = result_56;
                    if(result_56) { come_call_finalizer(list$1sTypephp_finalize,result_56, (void*)0, (void*)0, 0, 0, 1); }
                    return __result37__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1sTypeph* __result36__ = self;
                        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result36__;
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value56;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj4;
void* right_value57;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj5;
void* right_value58;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj6;
memset(&right_value56, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value57, 0, sizeof(void*));
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value58, 0, sizeof(void*));
memset(&litem_60, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                            if(self->len==0) {
                                litem_58=((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_58->prev=((void*)0);
                                litem_58->next=((void*)0);
                                __dec_obj4=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_58;
                                self->head=litem_58;
                            }
                            else if(self->len==1) {
                                litem_59=((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_59->prev=self->head;
                                litem_59->next=((void*)0);
                                __dec_obj5=litem_59->item;
                                litem_59->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_59;
                                self->head->next=litem_59;
                            }
                            else {
                                litem_60=((struct list_item$1sTypeph*)(right_value58=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_60->prev=self->tail;
                                litem_60->next=((void*)0);
                                __dec_obj6=litem_60->item;
                                litem_60->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                                self->tail->next=litem_60;
                                self->tail=litem_60;
                            }
                            self->len++;
                            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value61;
void* right_value62;
struct list$1sNodeph* result_61;
struct list_item$1sNodeph* it_62;
void* right_value67;
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&result_61, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_62, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value67, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1sNodeph* __result38__ = ((void*)0);
                        return __result38__;
                    }
                    result_61=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value62=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value61=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                    if(right_value62) { come_call_finalizer(list$1sNodephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0); }
                    it_62=self->head;
                    while(it_62!=((void*)0)) {
                        list$1sNodephp_push_back2(result_61,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=sNodep_clone(it_62->item)))));
                        if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0); } 
                        it_62=it_62->next;
                    }
                    struct list$1sNodeph* __result42__ = result_61;
                    if(result_61) { come_call_finalizer(list$1sNodephp_finalize,result_61, (void*)0, (void*)0, 0, 0, 1); }
                    return __result42__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1sNodeph* __result39__ = self;
                        if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result39__;
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value63;
struct list_item$1sNodeph* litem_63;
struct sNode* __dec_obj8;
void* right_value64;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj9;
void* right_value65;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj10;
memset(&right_value63, 0, sizeof(void*));
memset(&litem_63, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value64, 0, sizeof(void*));
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value65, 0, sizeof(void*));
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                            if(self->len==0) {
                                litem_63=((struct list_item$1sNodeph*)(right_value63=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                litem_63->prev=((void*)0);
                                litem_63->next=((void*)0);
                                __dec_obj8=litem_63->item;
                                litem_63->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0); }
                                self->tail=litem_63;
                                self->head=litem_63;
                            }
                            else if(self->len==1) {
                                litem_64=((struct list_item$1sNodeph*)(right_value64=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                litem_64->prev=self->head;
                                litem_64->next=((void*)0);
                                __dec_obj9=litem_64->item;
                                litem_64->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0); }
                                self->tail=litem_64;
                                self->head->next=litem_64;
                            }
                            else {
                                litem_65=((struct list_item$1sNodeph*)(right_value65=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                litem_65->prev=self->tail;
                                litem_65->next=((void*)0);
                                __dec_obj10=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0); }
                                self->tail->next=litem_65;
                                self->tail=litem_65;
                            }
                            self->len++;
                            if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value66;
struct sNode* result_66;
memset(&right_value66, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct sNode*)); /* ddd */
                            if(self==(void*)0) {
                                struct sNode* __result40__ = (void*)0;
                                return __result40__;
                            }
                            result_66=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value66=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
                            if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                result_66->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(self!=((void*)0)) {
                                result_66->finalize=self->finalize;
                            }
                            if(self!=((void*)0)) {
                                result_66->clone=self->clone;
                            }
                            if(self!=((void*)0)) {
                                result_66->compile=self->compile;
                            }
                            if(self!=((void*)0)) {
                                result_66->sline=self->sline;
                            }
                            if(self!=((void*)0)) {
                                result_66->sname=self->sname;
                            }
                            if(self!=((void*)0)) {
                                result_66->terminated=self->terminated;
                            }
                            struct sNode* __result41__ = result_66;
                            return __result41__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value70;
void* right_value71;
struct list$1charph* result_67;
struct list_item$1charph* it_68;
void* right_value75;
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_68, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value75, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1charph* __result43__ = ((void*)0);
                        return __result43__;
                    }
                    result_67=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value71=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value70=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                    if(right_value71) { come_call_finalizer(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
                    it_68=self->head;
                    while(it_68!=((void*)0)) {
                        list$1charphp_push_back2(result_67,(char*)come_increment_ref_count(((char*)(right_value75=string_clone(it_68->item)))));
                        if(right_value75) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0); }
                        it_68=it_68->next;
                    }
                    struct list$1charph* __result45__ = result_67;
                    if(result_67) { come_call_finalizer(list$1charphp_finalize,result_67, (void*)0, (void*)0, 0, 0, 1); }
                    return __result45__;
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1charph* __result44__ = self;
                        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result44__;
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value72;
struct list_item$1charph* litem_69;
char* __dec_obj13;
void* right_value73;
struct list_item$1charph* litem_70;
char* __dec_obj14;
void* right_value74;
struct list_item$1charph* litem_71;
char* __dec_obj15;
memset(&right_value72, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value73, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value74, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1charph*)); /* ddd */
                            if(self->len==0) {
                                litem_69=((struct list_item$1charph*)(right_value72=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                litem_69->prev=((void*)0);
                                litem_69->next=((void*)0);
                                __dec_obj13=litem_69->item;
                                litem_69->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_69;
                                self->head=litem_69;
                            }
                            else if(self->len==1) {
                                litem_70=((struct list_item$1charph*)(right_value73=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                litem_70->prev=self->head;
                                litem_70->next=((void*)0);
                                __dec_obj14=litem_70->item;
                                litem_70->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_70;
                                self->head->next=litem_70;
                            }
                            else {
                                litem_71=((struct list_item$1charph*)(right_value74=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                litem_71->prev=self->tail;
                                litem_71->next=((void*)0);
                                __dec_obj15=litem_71->item;
                                litem_71->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
                                self->tail->next=litem_71;
                                self->tail=litem_71;
                            }
                            self->len++;
                            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int index){
struct sNode* default_value_78;
memset(&default_value_78, 0, sizeof(struct sNode*)); /* bbb */
            memset(&default_value_78,0,sizeof(struct sNode*));
            struct sNode* __result49__ = list$1sNodephp_item(self,index,default_value_78);
            return __result49__;
}

static struct sNode* list$1sNodephp_item(struct list$1sNodeph* self, int position, struct sNode* default_value){
struct list_item$1sNodeph* it_79;
int i_80;
memset(&it_79, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&i_80, 0, sizeof(int)); /* ddd */
                if(position<0) {
                    position+=self->len;
                }
                it_79=self->head;
                i_80=0;
                while(it_79!=((void*)0)) {
                    if(position==i_80) {
                        struct sNode* __result47__ = it_79->item;
                        return __result47__;
                    }
                    it_79=it_79->next;
                    i_80++;
                }
                struct sNode* __result48__ = default_value;
                return __result48__;
}

static void va_list_finalize(va_list* self){
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
int i_114;
memset(&i_114, 0, sizeof(int)); /* ddd */
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_114=0;
        i_114<num_value;
        i_114++
        ){
            list$1sTypephp_push_back(self,values[i_114]);
        }
        struct list$1sTypeph* __result52__ = self;
        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        return __result52__;
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value121;
struct list_item$1sTypeph* litem_115;
struct sType* __dec_obj21;
void* right_value122;
struct list_item$1sTypeph* litem_116;
struct sType* __dec_obj22;
void* right_value123;
struct list_item$1sTypeph* litem_117;
struct sType* __dec_obj23;
memset(&right_value121, 0, sizeof(void*));
memset(&litem_115, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value122, 0, sizeof(void*));
memset(&litem_116, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value123, 0, sizeof(void*));
memset(&litem_117, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                if(self->len==0) {
                    litem_115=((struct list_item$1sTypeph*)(right_value121=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_115->prev=((void*)0);
                    litem_115->next=((void*)0);
                    __dec_obj21=litem_115->item;
                    litem_115->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_115;
                    self->head=litem_115;
                }
                else if(self->len==1) {
                    litem_116=((struct list_item$1sTypeph*)(right_value122=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_116->prev=self->head;
                    litem_116->next=((void*)0);
                    __dec_obj22=litem_116->item;
                    litem_116->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_116;
                    self->head->next=litem_116;
                }
                else {
                    litem_117=((struct list_item$1sTypeph*)(right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_117->prev=self->tail;
                    litem_117->next=((void*)0);
                    __dec_obj23=litem_117->item;
                    litem_117->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_117;
                    self->tail=litem_117;
                }
                self->len++;
                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
int i_120;
memset(&i_120, 0, sizeof(int)); /* ddd */
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_120=0;
        i_120<num_value;
        i_120++
        ){
            list$1charphp_push_back(self,values[i_120]);
        }
        struct list$1charph* __result53__ = self;
        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        return __result53__;
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value128;
struct list_item$1charph* litem_121;
char* __dec_obj24;
void* right_value129;
struct list_item$1charph* litem_122;
char* __dec_obj25;
void* right_value130;
struct list_item$1charph* litem_123;
char* __dec_obj26;
memset(&right_value128, 0, sizeof(void*));
memset(&litem_121, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value129, 0, sizeof(void*));
memset(&litem_122, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value130, 0, sizeof(void*));
memset(&litem_123, 0, sizeof(struct list_item$1charph*)); /* ddd */
                if(self->len==0) {
                    litem_121=((struct list_item$1charph*)(right_value128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_121->prev=((void*)0);
                    litem_121->next=((void*)0);
                    __dec_obj24=litem_121->item;
                    litem_121->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_121;
                    self->head=litem_121;
                }
                else if(self->len==1) {
                    litem_122=((struct list_item$1charph*)(right_value129=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_122->prev=self->head;
                    litem_122->next=((void*)0);
                    __dec_obj25=litem_122->item;
                    litem_122->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_122;
                    self->head->next=litem_122;
                }
                else {
                    litem_123=((struct list_item$1charph*)(right_value130=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_123->prev=self->tail;
                    litem_123->next=((void*)0);
                    __dec_obj26=litem_123->item;
                    litem_123->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_123;
                    self->tail=litem_123;
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

static void sBlock_finalize(struct sBlock* self){
                if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                    if(self->mNodes) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                    if(self->mVarTable) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
int hash_142;
int it_143;
_Bool same_key_exist_160;
char* it2_162;
memset(&hash_142, 0, sizeof(int)); /* ddd */
memset(&it_143, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_160, 0, sizeof(_Bool)); /* ddd */
memset(&it2_162, 0, sizeof(char*)); /* ddd */
        if(self->len*2>=self->size) {
            map$2charphsFunphp_rehash(self);
        }
        hash_142=string_get_hash_key(key)%self->size;
        it_143=hash_142;
        while((_Bool)1) {
            if(self->item_existance[it_143]) {
                if(charp_equals(self->keys[it_143],key)) {
                    if(1) {
                        list$1charpp_remove(self->key_list,self->keys[it_143]);
                        if(self->keys[it_143]) { self->keys[it_143] = come_decrement_ref_count(self->keys[it_143], (void*)0, (void*)0, 0, 0); }
                        self->keys[it_143]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charpp_remove(self->key_list,self->keys[it_143]);
                        self->keys[it_143]=key;
                    }
                    if(1) {
                        if(self->items[it_143]) { come_call_finalizer(sFunp_finalize,self->items[it_143], (void*)0, (void*)0, 0, 0, 0); }
                        self->items[it_143]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_143]=item;
                    }
                    break;
                }
                it_143++;
                if(it_143>=self->size) {
                    it_143=0;
                }
                else if(it_143==hash_142) {
                    fprintf(stderr,"unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_143]=(_Bool)1;
                if(1) {
                    self->keys[it_143]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_143]=key;
                }
                if(1) {
                    self->items[it_143]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_143]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_160=(_Bool)0;
        for(
        it2_162=list$1charpp_begin(self->key_list);
        !list$1charpp_end(self->key_list);
        it_143=list$1charpp_next(self->key_list)
        ){
            if(charp_equals(it2_162,key)) {
                same_key_exist_160=(_Bool)1;
            }
        }
        if(!same_key_exist_160) {
            list$1charpp_push_back(self->key_list,key);
        }
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
        if(item) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self){
int size_127;
void* right_value138;
char** keys_128;
void* right_value139;
struct sFun** items_129;
void* right_value140;
_Bool* item_existance_130;
int len_131;
char* it_133;
struct sFun* default_value_135;
struct sFun* it2_138;
int hash_139;
int n_140;
struct sFun* default_value_141;
memset(&size_127, 0, sizeof(int)); /* ddd */
memset(&right_value138, 0, sizeof(void*));
memset(&keys_128, 0, sizeof(char**)); /* ddd */
memset(&right_value139, 0, sizeof(void*));
memset(&items_129, 0, sizeof(struct sFun**)); /* ddd */
memset(&right_value140, 0, sizeof(void*));
memset(&item_existance_130, 0, sizeof(_Bool*)); /* ddd */
memset(&len_131, 0, sizeof(int)); /* ddd */
memset(&it_133, 0, sizeof(char*)); /* ddd */
memset(&default_value_135, 0, sizeof(struct sFun*)); /* bbb */
memset(&it2_138, 0, sizeof(struct sFun*)); /* ddd */
memset(&hash_139, 0, sizeof(int)); /* ddd */
memset(&n_140, 0, sizeof(int)); /* ddd */
memset(&default_value_141, 0, sizeof(struct sFun*)); /* bbb */
                size_127=self->size*3;
                keys_128=((char**)(right_value138=(char**)come_calloc(1, sizeof(char*)*(1*(size_127)))));
                items_129=((struct sFun**)(right_value139=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_127)))));
                item_existance_130=((_Bool*)(right_value140=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_127)))));
                len_131=0;
                for(
                it_133=map$2charphsFunphp_begin(self);
                !map$2charphsFunphp_end(self);
                it_133=map$2charphsFunphp_next(self)
                ){
                    it2_138=map$2charphsFunphp_at(self,it_133,default_value_135);
                    hash_139=charp_get_hash_key(it_133)%size_127;
                    n_140=hash_139;
                    while((_Bool)1) {
                        if(item_existance_130[n_140]) {
                            n_140++;
                            if(n_140>=size_127) {
                                n_140=0;
                            }
                            else if(n_140==hash_139) {
                                fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_130[n_140]=(_Bool)1;
                            keys_128[n_140]=it_133;
                            items_129[n_140]=map$2charphsFunphp_at(self,it_133,default_value_141);
                            len_131++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_128;
                self->items=items_129;
                self->item_existance=item_existance_130;
                self->size=size_127;
                self->len=len_131;
}

static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self){
char* result_132;
memset(&result_132, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result54__ = self->key_list->it->item;
                        return __result54__;
                    }
                    memset(&result_132,0,sizeof(char*));
                    char* __result55__ = result_132;
                    return __result55__;
}

static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self){
                    _Bool __result56__ = self->key_list->it==((void*)0);
                    return __result56__;
}

static char* map$2charphsFunphp_next(struct map$2charphsFunph* self){
char* result_134;
memset(&result_134, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result57__ = self->key_list->it->item;
                        return __result57__;
                    }
                    memset(&result_134,0,sizeof(char*));
                    char* __result58__ = result_134;
                    return __result58__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_136;
int it_137;
memset(&hash_136, 0, sizeof(int)); /* ddd */
memset(&it_137, 0, sizeof(int)); /* ddd */
                        hash_136=string_get_hash_key(((char*)key))%self->size;
                        it_137=hash_136;
                        while((_Bool)1) {
                            if(self->item_existance[it_137]) {
                                if(charp_equals(self->keys[it_137],key)) {
                                    struct sFun* __result59__ = self->items[it_137];
                                    return __result59__;
                                }
                                it_137++;
                                if(it_137>=self->size) {
                                    it_137=0;
                                }
                                else if(it_137==hash_136) {
                                    struct sFun* __result60__ = default_value;
                                    return __result60__;
                                }
                            }
                            else {
                                struct sFun* __result61__ = default_value;
                                return __result61__;
                            }
                        }
                        struct sFun* __result62__ = default_value;
                        return __result62__;
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_144;
struct list_item$1charp* it_145;
memset(&it2_144, 0, sizeof(int)); /* ddd */
memset(&it_145, 0, sizeof(struct list_item$1charp*)); /* ddd */
                            it2_144=0;
                            it_145=self->head;
                            while(it_145!=((void*)0)) {
                                if(charp_equals(it_145->item,item)) {
                                    list$1charpp_delete(self,it2_144,it2_144+1);
                                    break;
                                }
                                it2_144++;
                                it_145=it_145->next;
                            }
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_146;
struct list_item$1charp* it_149;
int i_150;
struct list_item$1charp* prev_it_151;
struct list_item$1charp* it_152;
int i_153;
struct list_item$1charp* prev_it_154;
struct list_item$1charp* it_155;
struct list_item$1charp* head_prev_it_156;
struct list_item$1charp* tail_it_157;
int i_158;
struct list_item$1charp* prev_it_159;
memset(&tmp_146, 0, sizeof(int)); /* ddd */
memset(&it_149, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_150, 0, sizeof(int)); /* ddd */
memset(&prev_it_151, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_152, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_153, 0, sizeof(int)); /* ddd */
memset(&prev_it_154, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_155, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_156, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_157, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_158, 0, sizeof(int)); /* ddd */
memset(&prev_it_159, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                        if(head<0) {
                                            head+=self->len;
                                        }
                                        if(tail<0) {
                                            tail+=self->len+1;
                                        }
                                        if(head>tail) {
                                            tmp_146=tail;
                                            tail=head;
                                            head=tmp_146;
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
                                            it_149=self->head;
                                            i_150=0;
                                            while(it_149!=((void*)0)) {
                                                if(i_150<tail) {
                                                    prev_it_151=it_149;
                                                    it_149=it_149->next;
                                                    i_150++;
                                                    if(prev_it_151) { come_call_finalizer(list_item$1charpp_finalize,prev_it_151, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else if(i_150==tail) {
                                                    self->head=it_149;
                                                    self->head->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_149=it_149->next;
                                                    i_150++;
                                                }
                                            }
                                        }
                                        else if(tail==self->len) {
                                            it_152=self->head;
                                            i_153=0;
                                            while(it_152!=((void*)0)) {
                                                if(i_153==head) {
                                                    self->tail=it_152->prev;
                                                    self->tail->next=((void*)0);
                                                }
                                                if(i_153>=head) {
                                                    prev_it_154=it_152;
                                                    it_152=it_152->next;
                                                    i_153++;
                                                    if(prev_it_154) { come_call_finalizer(list_item$1charpp_finalize,prev_it_154, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_152=it_152->next;
                                                    i_153++;
                                                }
                                            }
                                        }
                                        else {
                                            it_155=self->head;
                                            head_prev_it_156=((void*)0);
                                            tail_it_157=((void*)0);
                                            i_158=0;
                                            while(it_155!=((void*)0)) {
                                                if(i_158==head) {
                                                    head_prev_it_156=it_155->prev;
                                                }
                                                if(i_158==tail) {
                                                    tail_it_157=it_155;
                                                }
                                                if(i_158>=head&&i_158<tail) {
                                                    prev_it_159=it_155;
                                                    it_155=it_155->next;
                                                    i_158++;
                                                    if(prev_it_159) { come_call_finalizer(list_item$1charpp_finalize,prev_it_159, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_155=it_155->next;
                                                    i_158++;
                                                }
                                            }
                                            if(head_prev_it_156!=((void*)0)) {
                                                head_prev_it_156->next=tail_it_157;
                                            }
                                            if(tail_it_157!=((void*)0)) {
                                                tail_it_157->prev=head_prev_it_156;
                                            }
                                        }
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_147;
struct list_item$1charp* prev_it_148;
memset(&it_147, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_148, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                it_147=self->head;
                                                while(it_147!=((void*)0)) {
                                                    prev_it_148=it_147;
                                                    it_147=it_147->next;
                                                    if(prev_it_148) { come_call_finalizer(list_item$1charpp_finalize,prev_it_148, (void*)0, (void*)0, 0, 0, 0); }
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
char* result_161;
memset(&result_161, 0, sizeof(char*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                char* __result63__ = self->it->item;
                return __result63__;
            }
            memset(&result_161,0,sizeof(char*));
            char* __result64__ = result_161;
            return __result64__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
            _Bool __result65__ = self->it==((void*)0);
            return __result65__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_163;
memset(&result_163, 0, sizeof(char*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                char* __result66__ = self->it->item;
                return __result66__;
            }
            memset(&result_163,0,sizeof(char*));
            char* __result67__ = result_163;
            return __result67__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value141;
struct list_item$1charp* litem_164;
void* right_value142;
struct list_item$1charp* litem_165;
void* right_value143;
struct list_item$1charp* litem_166;
memset(&right_value141, 0, sizeof(void*));
memset(&litem_164, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value142, 0, sizeof(void*));
memset(&litem_165, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value143, 0, sizeof(void*));
memset(&litem_166, 0, sizeof(struct list_item$1charp*)); /* ddd */
                if(self->len==0) {
                    litem_164=((struct list_item$1charp*)(right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_164->prev=((void*)0);
                    litem_164->next=((void*)0);
                    litem_164->item=item;
                    self->tail=litem_164;
                    self->head=litem_164;
                }
                else if(self->len==1) {
                    litem_165=((struct list_item$1charp*)(right_value142=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_165->prev=self->head;
                    litem_165->next=((void*)0);
                    litem_165->item=item;
                    self->tail=litem_165;
                    self->head->next=litem_165;
                }
                else {
                    litem_166=((struct list_item$1charp*)(right_value143=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_166->prev=self->tail;
                    litem_166->next=((void*)0);
                    litem_166->item=item;
                    self->tail->next=litem_166;
                    self->tail=litem_166;
                }
                self->len++;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
struct sFun* default_value_170;
memset(&default_value_170, 0, sizeof(struct sFun*)); /* bbb */
            memset(&default_value_170,0,sizeof(struct sFun*));
            struct sFun* __result69__ = map$2charphsFunphp_at(self,key,default_value_170);
            return __result69__;
}

static void list$1CVALUEphp_delete(struct list$1CVALUEph* self, int head, int tail){
int tmp_189;
struct list_item$1CVALUEph* it_192;
int i_193;
struct list_item$1CVALUEph* prev_it_194;
struct list_item$1CVALUEph* it_195;
int i_196;
struct list_item$1CVALUEph* prev_it_197;
struct list_item$1CVALUEph* it_198;
struct list_item$1CVALUEph* head_prev_it_199;
struct list_item$1CVALUEph* tail_it_200;
int i_201;
struct list_item$1CVALUEph* prev_it_202;
memset(&tmp_189, 0, sizeof(int)); /* ddd */
memset(&it_192, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&i_193, 0, sizeof(int)); /* ddd */
memset(&prev_it_194, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&it_195, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&i_196, 0, sizeof(int)); /* ddd */
memset(&prev_it_197, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&it_198, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&head_prev_it_199, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&tail_it_200, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&i_201, 0, sizeof(int)); /* ddd */
memset(&prev_it_202, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_189=tail;
            tail=head;
            head=tmp_189;
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
            list$1CVALUEphp_reset(self);
        }
        else if(head==0) {
            it_192=self->head;
            i_193=0;
            while(it_192!=((void*)0)) {
                if(i_193<tail) {
                    prev_it_194=it_192;
                    it_192=it_192->next;
                    i_193++;
                    if(prev_it_194) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_194, (void*)0, (void*)0, 0, 0, 0); }
                    self->len--;
                }
                else if(i_193==tail) {
                    self->head=it_192;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_192=it_192->next;
                    i_193++;
                }
            }
        }
        else if(tail==self->len) {
            it_195=self->head;
            i_196=0;
            while(it_195!=((void*)0)) {
                if(i_196==head) {
                    self->tail=it_195->prev;
                    self->tail->next=((void*)0);
                }
                if(i_196>=head) {
                    prev_it_197=it_195;
                    it_195=it_195->next;
                    i_196++;
                    if(prev_it_197) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_197, (void*)0, (void*)0, 0, 0, 0); }
                    self->len--;
                }
                else {
                    it_195=it_195->next;
                    i_196++;
                }
            }
        }
        else {
            it_198=self->head;
            head_prev_it_199=((void*)0);
            tail_it_200=((void*)0);
            i_201=0;
            while(it_198!=((void*)0)) {
                if(i_201==head) {
                    head_prev_it_199=it_198->prev;
                }
                if(i_201==tail) {
                    tail_it_200=it_198;
                }
                if(i_201>=head&&i_201<tail) {
                    prev_it_202=it_198;
                    it_198=it_198->next;
                    i_201++;
                    if(prev_it_202) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_202, (void*)0, (void*)0, 0, 0, 0); }
                    self->len--;
                }
                else {
                    it_198=it_198->next;
                    i_201++;
                }
            }
            if(head_prev_it_199!=((void*)0)) {
                head_prev_it_199->next=tail_it_200;
            }
            if(tail_it_200!=((void*)0)) {
                tail_it_200->prev=head_prev_it_199;
            }
        }
}

static void list$1CVALUEphp_reset(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_190;
struct list_item$1CVALUEph* prev_it_191;
memset(&it_190, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&prev_it_191, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
                it_190=self->head;
                while(it_190!=((void*)0)) {
                    prev_it_191=it_190;
                    it_190=it_190->next;
                    if(prev_it_191) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_191, (void*)0, (void*)0, 0, 0, 0); }
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            if(self->item) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int index){
struct CVALUE* default_value_203;
memset(&default_value_203, 0, sizeof(struct CVALUE*)); /* bbb */
        memset(&default_value_203,0,sizeof(struct CVALUE*));
        struct CVALUE* __result73__ = list$1CVALUEphp_item(self,index,default_value_203);
        return __result73__;
}

static struct CVALUE* list$1CVALUEphp_item(struct list$1CVALUEph* self, int position, struct CVALUE* default_value){
struct list_item$1CVALUEph* it_204;
int i_205;
memset(&it_204, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&i_205, 0, sizeof(int)); /* ddd */
            if(position<0) {
                position+=self->len;
            }
            it_204=self->head;
            i_205=0;
            while(it_204!=((void*)0)) {
                if(position==i_205) {
                    struct CVALUE* __result71__ = it_204->item;
                    return __result71__;
                }
                it_204=it_204->next;
                i_205++;
            }
            struct CVALUE* __result72__ = default_value;
            return __result72__;
}

static struct CVALUE* CVALUEp_clone(struct CVALUE* self){
void* right_value158;
struct CVALUE* result_206;
void* right_value159;
char* __dec_obj29;
void* right_value160;
struct sType* __dec_obj30;
memset(&right_value158, 0, sizeof(void*));
memset(&result_206, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
        if(self==(void*)0) {
            struct CVALUE* __result74__ = (void*)0;
            return __result74__;
        }
        result_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value158) { come_call_finalizer(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
            __dec_obj29=result_206->c_value;
            result_206->c_value=(char*)come_increment_ref_count(((char*)(right_value159=string_clone(self->c_value))));
            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
            if(right_value159) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->type!=((void*)0)) {
            __dec_obj30=result_206->type;
            result_206->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(self->type))));
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
            if(right_value160) { come_call_finalizer(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_206->var=self->var;
        }
        struct CVALUE* __result75__ = result_206;
        if(result_206) { come_call_finalizer(CVALUE_finalize,result_206, (void*)0, (void*)0, 0, 0, 1); }
        return __result75__;
}

