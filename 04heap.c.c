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
int gRightValueNum;

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
static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index);
static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value);
static struct sType* sTypep_clone(struct sType* self);
static void sTypep_finalize(struct sType* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static void list$1sTypephp_reset(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectphp_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static struct sRightValueObject* list$1sRightValueObjectphp_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectphp_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectphp_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static void list$1sRightValueObjectphp_reset(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
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






_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_142;
struct list$1CVALUEph* stack_saved_143;
struct list$1sRightValueObjectph* right_value_objects_144;
struct sClass* klass_145;
char* class_name_146;
char* fun_name_147;
void* right_value108;
struct sType* type2_148;
struct sFun* cloner_149;
char* fun_name2_150;
void* right_value109;
char* none_generics_name_151;
void* right_value110;
struct sType* obj_type_152;
void* right_value111;
char* __dec_obj59;
void* right_value112;
char* fun_name3_153;
struct sGenericsFun* generics_fun_154;
void* right_value113;
void* right_value114;
char* __dec_obj60;
int i_155;
void* right_value115;
char* new_fun_name_156;
void* right_value116;
char* __dec_obj61;
void* right_value117;
struct tuple2$2sFunpcharph* multiple_assgin_var5;
struct sFun* fun_157;
char* new_fun_name_158;
char* __dec_obj62;
struct list$1sRightValueObjectph* __dec_obj63;
struct list$1CVALUEph* __dec_obj64;
memset(&result_142, 0, sizeof(char*)); /* ddd */
memset(&stack_saved_143, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value_objects_144, 0, sizeof(struct list$1sRightValueObjectph*)); /* ddd */
memset(&klass_145, 0, sizeof(struct sClass*)); /* ddd */
memset(&class_name_146, 0, sizeof(char*)); /* ddd */
memset(&fun_name_147, 0, sizeof(char*)); /* ddd */
memset(&right_value108, 0, sizeof(void*));
memset(&type2_148, 0, sizeof(struct sType*)); /* ddd */
memset(&cloner_149, 0, sizeof(struct sFun*)); /* ddd */
memset(&fun_name2_150, 0, sizeof(char*)); /* bbb */
memset(&right_value109, 0, sizeof(void*));
memset(&none_generics_name_151, 0, sizeof(char*)); /* ddd */
memset(&right_value110, 0, sizeof(void*));
memset(&obj_type_152, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&fun_name3_153, 0, sizeof(char*)); /* ddd */
memset(&generics_fun_154, 0, sizeof(struct sGenericsFun*)); /* ddd */
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&i_155, 0, sizeof(int)); /* bbb */
memset(&right_value115, 0, sizeof(void*));
memset(&new_fun_name_156, 0, sizeof(char*)); /* ddd */
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&fun_157, 0, sizeof(struct sFun*)); /* ccc */
memset(&new_fun_name_158, 0, sizeof(char*)); /* ccc */
memset(&fun_157, 0, sizeof(struct sFun*)); /* eee */
memset(&new_fun_name_158, 0, sizeof(char*)); /* eee */
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_142=((void*)0);
    stack_saved_143=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_144=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    klass_145=type->mClass;
    class_name_146=klass_145->mName;
    fun_name_147="equals";
    type2_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(type))));
    if(right_value108) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0); }
    type2_148->mHeap=(_Bool)0;
    cloner_149=((void*)0);
    if(list$1sTypephp_length(type->mGenericsTypes)>0) {
        none_generics_name_151=(char*)come_increment_ref_count(((char*)(right_value109=get_none_generics_name(type->mClass->mName))));
        if(right_value109) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0); }
        obj_type_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=solve_generics(type,info->generics_type,info))));
        if(right_value110) { come_call_finalizer(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj59=fun_name2_150;
        fun_name2_150=(char*)come_increment_ref_count(((char*)(right_value111=create_method_name(obj_type_152,(_Bool)0,fun_name_147,info))));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
        if(right_value111) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0); }
        fun_name3_153=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("%s_%s",none_generics_name_151,fun_name_147))));
        if(right_value112) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0); }
        generics_fun_154=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_153,((void*)0));
        if(generics_fun_154) {
            if(!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(fun_name2_150)))),generics_fun_154,obj_type_152,info)) {
                _Bool __result67__ = (_Bool)0;
                if(none_generics_name_151) { none_generics_name_151 = come_decrement_ref_count(none_generics_name_151, (void*)0, (void*)0, 0, 0); }
                if(obj_type_152) { come_call_finalizer(sType_finalize,obj_type_152, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name3_153) { fun_name3_153 = come_decrement_ref_count(fun_name3_153, (void*)0, (void*)0, 0, 0); }
                return __result67__;
            }
            if(right_value113) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0); }
        }
        cloner_149=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_150);
        if(none_generics_name_151) { none_generics_name_151 = come_decrement_ref_count(none_generics_name_151, (void*)0, (void*)0, 0, 0); }
        if(obj_type_152) { come_call_finalizer(sType_finalize,obj_type_152, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name3_153) { fun_name3_153 = come_decrement_ref_count(fun_name3_153, (void*)0, (void*)0, 0, 0); }
    }
    else {
        __dec_obj60=fun_name2_150;
        fun_name2_150=(char*)come_increment_ref_count(((char*)(right_value114=create_method_name(type,(_Bool)0,fun_name_147,info))));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
        if(right_value114) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0); }
        for(
        i_155=128-1;
        i_155>=1;
        i_155--
        ){
            new_fun_name_156=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%s_v%d",fun_name2_150,i_155))));
            if(right_value115) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0); }
            cloner_149=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_156);
            if(cloner_149) {
                __dec_obj61=fun_name2_150;
                fun_name2_150=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(new_fun_name_156))));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
                if(right_value116) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0); }
                break;
            }
            if(new_fun_name_156) { new_fun_name_156 = come_decrement_ref_count(new_fun_name_156, (void*)0, (void*)0, 0, 0); }
        }
        if(cloner_149==((void*)0)) {
            cloner_149=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_150);
        }
    }
    if(cloner_149==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&gComelang) {
        multiple_assgin_var5=((struct tuple2$2sFunpcharph*)(right_value117=create_equals_automatically(type,fun_name_147,info)));
        fun_157=multiple_assgin_var5->v1;
        new_fun_name_158=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
        if(right_value117) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj62=fun_name2_150;
        fun_name2_150=(char*)come_increment_ref_count(new_fun_name_158);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0); }
        cloner_149=fun_157;
        if(new_fun_name_158) { new_fun_name_158 = come_decrement_ref_count(new_fun_name_158, (void*)0, (void*)0, 0, 0); }
    }
    __dec_obj63=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_144);
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
    __dec_obj64=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_143);
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
    _Bool __result68__ = (_Bool)1;
    if(result_142) { result_142 = come_decrement_ref_count(result_142, (void*)0, (void*)0, 0, 0); }
    if(stack_saved_143) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_143, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_objects_144) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_144, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_148) { come_call_finalizer(sType_finalize,type2_148, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_150) { fun_name2_150 = come_decrement_ref_count(fun_name2_150, (void*)0, (void*)0, 0, 0); }
    return __result68__;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_159;
struct list$1CVALUEph* stack_saved_160;
struct list$1sRightValueObjectph* right_value_objects_161;
struct sClass* klass_162;
char* class_name_163;
char* fun_name_164;
void* right_value118;
struct sType* type2_165;
struct sFun* cloner_166;
char* fun_name2_167;
void* right_value119;
char* none_generics_name_168;
void* right_value120;
struct sType* obj_type_169;
void* right_value121;
char* __dec_obj65;
void* right_value122;
char* fun_name3_170;
struct sGenericsFun* generics_fun_171;
void* right_value123;
void* right_value124;
char* __dec_obj66;
int i_172;
void* right_value125;
char* new_fun_name_173;
void* right_value126;
char* __dec_obj67;
void* right_value127;
struct tuple2$2sFunpcharph* multiple_assgin_var6;
struct sFun* fun_174;
char* new_fun_name_175;
char* __dec_obj68;
struct list$1sRightValueObjectph* __dec_obj69;
struct list$1CVALUEph* __dec_obj70;
memset(&result_159, 0, sizeof(char*)); /* ddd */
memset(&stack_saved_160, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value_objects_161, 0, sizeof(struct list$1sRightValueObjectph*)); /* ddd */
memset(&klass_162, 0, sizeof(struct sClass*)); /* ddd */
memset(&class_name_163, 0, sizeof(char*)); /* ddd */
memset(&fun_name_164, 0, sizeof(char*)); /* ddd */
memset(&right_value118, 0, sizeof(void*));
memset(&type2_165, 0, sizeof(struct sType*)); /* ddd */
memset(&cloner_166, 0, sizeof(struct sFun*)); /* ddd */
memset(&fun_name2_167, 0, sizeof(char*)); /* bbb */
memset(&right_value119, 0, sizeof(void*));
memset(&none_generics_name_168, 0, sizeof(char*)); /* ddd */
memset(&right_value120, 0, sizeof(void*));
memset(&obj_type_169, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&fun_name3_170, 0, sizeof(char*)); /* ddd */
memset(&generics_fun_171, 0, sizeof(struct sGenericsFun*)); /* ddd */
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&i_172, 0, sizeof(int)); /* bbb */
memset(&right_value125, 0, sizeof(void*));
memset(&new_fun_name_173, 0, sizeof(char*)); /* ddd */
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&fun_174, 0, sizeof(struct sFun*)); /* ccc */
memset(&new_fun_name_175, 0, sizeof(char*)); /* ccc */
memset(&fun_174, 0, sizeof(struct sFun*)); /* eee */
memset(&new_fun_name_175, 0, sizeof(char*)); /* eee */
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_159=((void*)0);
    stack_saved_160=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_161=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    klass_162=type->mClass;
    class_name_163=klass_162->mName;
    fun_name_164="operator_equals";
    type2_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(type))));
    if(right_value118) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0); }
    type2_165->mHeap=(_Bool)0;
    cloner_166=((void*)0);
    if(list$1sTypephp_length(type->mGenericsTypes)>0) {
        none_generics_name_168=(char*)come_increment_ref_count(((char*)(right_value119=get_none_generics_name(type->mClass->mName))));
        if(right_value119) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0); }
        obj_type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=solve_generics(type,info->generics_type,info))));
        if(right_value120) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj65=fun_name2_167;
        fun_name2_167=(char*)come_increment_ref_count(((char*)(right_value121=create_method_name(obj_type_169,(_Bool)0,fun_name_164,info))));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
        if(right_value121) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0); }
        fun_name3_170=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("%s_%s",none_generics_name_168,fun_name_164))));
        if(right_value122) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0); }
        generics_fun_171=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_170,((void*)0));
        if(generics_fun_171) {
            if(!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(fun_name2_167)))),generics_fun_171,obj_type_169,info)) {
                _Bool __result69__ = (_Bool)0;
                if(none_generics_name_168) { none_generics_name_168 = come_decrement_ref_count(none_generics_name_168, (void*)0, (void*)0, 0, 0); }
                if(obj_type_169) { come_call_finalizer(sType_finalize,obj_type_169, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name3_170) { fun_name3_170 = come_decrement_ref_count(fun_name3_170, (void*)0, (void*)0, 0, 0); }
                return __result69__;
            }
            if(right_value123) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0); }
        }
        cloner_166=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_167);
        if(none_generics_name_168) { none_generics_name_168 = come_decrement_ref_count(none_generics_name_168, (void*)0, (void*)0, 0, 0); }
        if(obj_type_169) { come_call_finalizer(sType_finalize,obj_type_169, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name3_170) { fun_name3_170 = come_decrement_ref_count(fun_name3_170, (void*)0, (void*)0, 0, 0); }
    }
    else {
        __dec_obj66=fun_name2_167;
        fun_name2_167=(char*)come_increment_ref_count(((char*)(right_value124=create_method_name(type,(_Bool)0,fun_name_164,info))));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0); }
        if(right_value124) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0); }
        for(
        i_172=128-1;
        i_172>=1;
        i_172--
        ){
            new_fun_name_173=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s_v%d",fun_name2_167,i_172))));
            if(right_value125) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0); }
            cloner_166=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_173);
            if(cloner_166) {
                __dec_obj67=fun_name2_167;
                fun_name2_167=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(new_fun_name_173))));
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0); }
                if(right_value126) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0); }
                break;
            }
            if(new_fun_name_173) { new_fun_name_173 = come_decrement_ref_count(new_fun_name_173, (void*)0, (void*)0, 0, 0); }
        }
        if(cloner_166==((void*)0)) {
            cloner_166=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_167);
        }
    }
    if(cloner_166==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&gComelang) {
        multiple_assgin_var6=((struct tuple2$2sFunpcharph*)(right_value127=create_operator_equals_automatically(type,fun_name_164,info)));
        fun_174=multiple_assgin_var6->v1;
        new_fun_name_175=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
        if(right_value127) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj68=fun_name2_167;
        fun_name2_167=(char*)come_increment_ref_count(new_fun_name_175);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0); }
        cloner_166=fun_174;
        if(new_fun_name_175) { new_fun_name_175 = come_decrement_ref_count(new_fun_name_175, (void*)0, (void*)0, 0, 0); }
    }
    __dec_obj69=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_161);
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0); }
    __dec_obj70=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_160);
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0); }
    _Bool __result70__ = (_Bool)1;
    if(result_159) { result_159 = come_decrement_ref_count(result_159, (void*)0, (void*)0, 0, 0); }
    if(stack_saved_160) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_160, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_objects_161) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_161, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_165) { come_call_finalizer(sType_finalize,type2_165, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_167) { fun_name2_167 = come_decrement_ref_count(fun_name2_167, (void*)0, (void*)0, 0, 0); }
    return __result70__;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_176;
struct list$1CVALUEph* stack_saved_177;
struct list$1sRightValueObjectph* right_value_objects_178;
struct sClass* klass_179;
char* class_name_180;
char* fun_name_181;
void* right_value128;
struct sType* type2_182;
struct sFun* cloner_183;
char* fun_name2_184;
void* right_value129;
char* none_generics_name_185;
void* right_value130;
struct sType* obj_type_186;
void* right_value131;
char* __dec_obj71;
void* right_value132;
char* fun_name3_187;
struct sGenericsFun* generics_fun_188;
void* right_value133;
void* right_value134;
char* __dec_obj72;
int i_189;
void* right_value135;
char* new_fun_name_190;
void* right_value136;
char* __dec_obj73;
void* right_value137;
struct tuple2$2sFunpcharph* multiple_assgin_var7;
struct sFun* fun_191;
char* new_fun_name_192;
char* __dec_obj74;
struct list$1sRightValueObjectph* __dec_obj75;
struct list$1CVALUEph* __dec_obj76;
memset(&result_176, 0, sizeof(char*)); /* ddd */
memset(&stack_saved_177, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value_objects_178, 0, sizeof(struct list$1sRightValueObjectph*)); /* ddd */
memset(&klass_179, 0, sizeof(struct sClass*)); /* ddd */
memset(&class_name_180, 0, sizeof(char*)); /* ddd */
memset(&fun_name_181, 0, sizeof(char*)); /* ddd */
memset(&right_value128, 0, sizeof(void*));
memset(&type2_182, 0, sizeof(struct sType*)); /* ddd */
memset(&cloner_183, 0, sizeof(struct sFun*)); /* ddd */
memset(&fun_name2_184, 0, sizeof(char*)); /* bbb */
memset(&right_value129, 0, sizeof(void*));
memset(&none_generics_name_185, 0, sizeof(char*)); /* ddd */
memset(&right_value130, 0, sizeof(void*));
memset(&obj_type_186, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&fun_name3_187, 0, sizeof(char*)); /* ddd */
memset(&generics_fun_188, 0, sizeof(struct sGenericsFun*)); /* ddd */
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&i_189, 0, sizeof(int)); /* bbb */
memset(&right_value135, 0, sizeof(void*));
memset(&new_fun_name_190, 0, sizeof(char*)); /* ddd */
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&fun_191, 0, sizeof(struct sFun*)); /* ccc */
memset(&new_fun_name_192, 0, sizeof(char*)); /* ccc */
memset(&fun_191, 0, sizeof(struct sFun*)); /* eee */
memset(&new_fun_name_192, 0, sizeof(char*)); /* eee */
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_176=((void*)0);
    stack_saved_177=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_178=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    klass_179=type->mClass;
    class_name_180=klass_179->mName;
    fun_name_181="operator_not_equals";
    type2_182=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(type))));
    if(right_value128) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0); }
    type2_182->mHeap=(_Bool)0;
    cloner_183=((void*)0);
    if(list$1sTypephp_length(type->mGenericsTypes)>0) {
        none_generics_name_185=(char*)come_increment_ref_count(((char*)(right_value129=get_none_generics_name(type->mClass->mName))));
        if(right_value129) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0); }
        obj_type_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=solve_generics(type,info->generics_type,info))));
        if(right_value130) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj71=fun_name2_184;
        fun_name2_184=(char*)come_increment_ref_count(((char*)(right_value131=create_method_name(obj_type_186,(_Bool)0,fun_name_181,info))));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
        if(right_value131) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0); }
        fun_name3_187=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("%s_%s",none_generics_name_185,fun_name_181))));
        if(right_value132) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0); }
        generics_fun_188=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_187,((void*)0));
        if(generics_fun_188) {
            if(!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(fun_name2_184)))),generics_fun_188,obj_type_186,info)) {
                _Bool __result71__ = (_Bool)0;
                if(none_generics_name_185) { none_generics_name_185 = come_decrement_ref_count(none_generics_name_185, (void*)0, (void*)0, 0, 0); }
                if(obj_type_186) { come_call_finalizer(sType_finalize,obj_type_186, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name3_187) { fun_name3_187 = come_decrement_ref_count(fun_name3_187, (void*)0, (void*)0, 0, 0); }
                return __result71__;
            }
            if(right_value133) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0); }
        }
        cloner_183=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_184);
        if(none_generics_name_185) { none_generics_name_185 = come_decrement_ref_count(none_generics_name_185, (void*)0, (void*)0, 0, 0); }
        if(obj_type_186) { come_call_finalizer(sType_finalize,obj_type_186, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name3_187) { fun_name3_187 = come_decrement_ref_count(fun_name3_187, (void*)0, (void*)0, 0, 0); }
    }
    else {
        __dec_obj72=fun_name2_184;
        fun_name2_184=(char*)come_increment_ref_count(((char*)(right_value134=create_method_name(type,(_Bool)0,fun_name_181,info))));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0); }
        if(right_value134) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0); }
        for(
        i_189=128-1;
        i_189>=1;
        i_189--
        ){
            new_fun_name_190=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("%s_v%d",fun_name2_184,i_189))));
            if(right_value135) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0); }
            cloner_183=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_190);
            if(cloner_183) {
                __dec_obj73=fun_name2_184;
                fun_name2_184=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(new_fun_name_190))));
                if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
                if(right_value136) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0); }
                break;
            }
            if(new_fun_name_190) { new_fun_name_190 = come_decrement_ref_count(new_fun_name_190, (void*)0, (void*)0, 0, 0); }
        }
        if(cloner_183==((void*)0)) {
            cloner_183=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_184);
        }
    }
    if(cloner_183==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&gComelang) {
        multiple_assgin_var7=((struct tuple2$2sFunpcharph*)(right_value137=create_operator_not_equals_automatically(type,fun_name_181,info)));
        fun_191=multiple_assgin_var7->v1;
        new_fun_name_192=(char*)come_increment_ref_count(multiple_assgin_var7->v2);
        if(right_value137) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj74=fun_name2_184;
        fun_name2_184=(char*)come_increment_ref_count(new_fun_name_192);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0); }
        cloner_183=fun_191;
        if(new_fun_name_192) { new_fun_name_192 = come_decrement_ref_count(new_fun_name_192, (void*)0, (void*)0, 0, 0); }
    }
    __dec_obj75=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_178);
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
    __dec_obj76=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_177);
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0); }
    _Bool __result72__ = (_Bool)1;
    if(result_176) { result_176 = come_decrement_ref_count(result_176, (void*)0, (void*)0, 0, 0); }
    if(stack_saved_177) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_177, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_objects_178) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_178, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_182) { come_call_finalizer(sType_finalize,type2_182, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_184) { fun_name2_184 = come_decrement_ref_count(fun_name2_184, (void*)0, (void*)0, 0, 0); }
    return __result72__;
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* right_value30;
struct sType* result_24;
struct sClass* klass_25;
void* right_value31;
struct sType* result_type_26;
void* right_value32;
void* right_value33;
struct tuple1$1sTypeph* __dec_obj20;
void* right_value34;
void* right_value35;
struct list$1sTypeph* new_param_types_27;
struct sType* it_29;
void* right_value36;
struct sType* new_param_type_31;
struct list$1sTypeph* __dec_obj24;
int generics_number_35;
struct sClass* klass2_39;
int generics_number2_40;
void* right_value40;
struct list$1sNodeph* array_num_41;
_Bool immutable__42;
int pointer_num_43;
_Bool heap_44;
_Bool no_heap_45;
_Bool no_calling_destructor_46;
void* right_value50;
struct sType* __dec_obj33;
struct list$1sNodeph* __dec_obj34;
struct sType* it_50;
void* right_value51;
struct sType* type_51;
void* right_value52;
void* right_value53;
char* new_name_52;
memset(&right_value30, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_25, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value31, 0, sizeof(void*));
memset(&result_type_26, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&new_param_types_27, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_29, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
memset(&new_param_type_31, 0, sizeof(struct sType*)); /* ddd */
memset(&generics_number_35, 0, sizeof(int)); /* ddd */
memset(&klass2_39, 0, sizeof(struct sClass*)); /* ddd */
memset(&generics_number2_40, 0, sizeof(int)); /* ddd */
memset(&right_value40, 0, sizeof(void*));
memset(&array_num_41, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&immutable__42, 0, sizeof(_Bool)); /* ddd */
memset(&pointer_num_43, 0, sizeof(int)); /* ddd */
memset(&heap_44, 0, sizeof(_Bool)); /* ddd */
memset(&no_heap_45, 0, sizeof(_Bool)); /* ddd */
memset(&no_calling_destructor_46, 0, sizeof(_Bool)); /* ddd */
memset(&right_value50, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value51, 0, sizeof(void*));
memset(&type_51, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&new_name_52, 0, sizeof(char*)); /* ddd */
    result_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value30=sType_clone(type))));
    if(right_value30) { come_call_finalizer(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
    if(generics_type==((void*)0)) {
        struct sType* __result22__ = result_24;
        return __result22__;
    }
    if(list$1sTypephp_length(generics_type->mGenericsTypes)==0) {
        struct sType* __result24__ = result_24;
        return __result24__;
    }
    klass_25=type->mClass;
    if(string_operator_equals(klass_25->mName,"lambda")) {
        result_type_26=(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=solve_generics(type->mResultType->v1,generics_type,info))));
        if(right_value31) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj20=result_24->mResultType;
        result_24->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value33=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value32=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1))))),(struct sType*)come_increment_ref_count(result_type_26)))));
        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
        if(right_value33) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0); }
        new_param_types_27=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
        if(right_value35) { come_call_finalizer(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
        for(
        it_29=list$1sTypephp_begin((type->mParamTypes));
        !list$1sTypephp_end((type->mParamTypes));
        it_29=list$1sTypephp_next((type->mParamTypes))
        ){
            new_param_type_31=(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=solve_generics(it_29,generics_type,info))));
            if(right_value36) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0); }
            list$1sTypephp_push_back(new_param_types_27,(struct sType*)come_increment_ref_count(new_param_type_31));
            if(new_param_type_31) { come_call_finalizer(sType_finalize,new_param_type_31, (void*)0, (void*)0, 0, 0, 0); }
        }
        __dec_obj24=result_24->mParamTypes;
        result_24->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(new_param_types_27);
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
        if(result_type_26) { come_call_finalizer(sType_finalize,result_type_26, (void*)0, (void*)0, 0, 0, 0); }
        if(new_param_types_27) { come_call_finalizer(list$1sTypephp_finalize,new_param_types_27, (void*)0, (void*)0, 0, 0, 0); }
    }
    else if(klass_25->mGenerics) {
        generics_number_35=klass_25->mGenericsNum;
        if(generics_number_35>=list$1sTypephp_length(generics_type->mGenericsTypes)) {
            err_msg(info,"invalid generics parametor number");
            exit(2);
        }
        klass2_39=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_35)->mClass;
        generics_number2_40=klass2_39->mGenericsNum;
        if(generics_number_35!=generics_number2_40) {
            array_num_41=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value40=list$1sNodephp_clone(type->mArrayNum))));
            if(right_value40) { come_call_finalizer(list$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
            immutable__42=type->mImmutable;
            pointer_num_43=type->mPointerNum;
            heap_44=type->mHeap;
            no_heap_45=type->mNoHeap;
            no_calling_destructor_46=type->mNoCallingDestructor;
            __dec_obj33=result_24;
            result_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sTypep_clone(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_35)))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0); }
            if(right_value50) { come_call_finalizer(sTypep_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
            if(heap_44) {
                result_24->mHeap=heap_44;
            }
            if(no_heap_45) {
                result_24->mNoHeap=(_Bool)1;
                result_24->mHeap=(_Bool)0;
            }
            if(no_calling_destructor_46) {
                result_24->mNoCallingDestructor=(_Bool)1;
            }
            if(immutable__42) {
                result_24->mImmutable=immutable__42;
            }
            if(list$1sNodephp_length(array_num_41)>0) {
                __dec_obj34=result_24->mArrayNum;
                result_24->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_41);
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
            }
            if(pointer_num_43>0) {
                result_24->mPointerNum+=pointer_num_43;
            }
            if(array_num_41) { come_call_finalizer(list$1sNodephp_finalize,array_num_41, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
    else {
        list$1sTypephp_reset(result_24->mGenericsTypes);
        for(
        it_50=list$1sTypephp_begin((type->mGenericsTypes));
        !list$1sTypephp_end((type->mGenericsTypes));
        it_50=list$1sTypephp_next((type->mGenericsTypes))
        ){
            type_51=(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=solve_generics(it_50,generics_type,info))));
            if(right_value51) { come_call_finalizer(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0); }
            list$1sTypephp_push_back(result_24->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(type_51)))));
            if(right_value52) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
            if(type_51) { come_call_finalizer(sType_finalize,type_51, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(!output_generics_struct(result_24,generics_type,info)) {
            new_name_52=(char*)come_increment_ref_count(((char*)(right_value53=create_generics_name(type,info))));
            if(right_value53) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0); }
            err_msg(info,"output generics is failed(%s)",new_name_52);
            exit(1);
            if(new_name_52) { new_name_52 = come_decrement_ref_count(new_name_52, (void*)0, (void*)0, 0, 0); }
        }
    }
    struct sType* __result37__ = result_24;
    if(result_24) { come_call_finalizer(sType_finalize,result_24, (void*)0, (void*)0, 0, 0, 1); }
    return __result37__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
struct sVarTable* it_197;
struct sVar* var__201;
memset(&it_197, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&var__201, 0, sizeof(struct sVar*)); /* ddd */
    it_197=table;
    while(it_197) {
        var__201=map$2charphsVarphp_operator_load_element(it_197->mVars,name);
        if(var__201) {
            struct sVar* __result80__ = var__201;
            return __result80__;
        }
        it_197=it_197->mParent;
    }
    struct sVar* __result81__ = ((void*)0);
    return __result81__;
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_210;
memset(&it_210, 0, sizeof(struct sVarTable*)); /* ddd */
    it_210=info->lv_table;
    if(it_210==info->come_fun->mBlock->mVarTable) {
        free_objects(it_210,ret_value,info);
    }
    else {
        while(it_210!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_210,ret_value,info);
            it_210=it_210->mParent;
        }
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info){
struct list$1CVALUEph* stack_saved_85;
struct list$1sRightValueObjectph* right_value_objects_86;
void* right_value73;
char* c_value_87;
struct sClass* klass_88;
char* class_name_89;
char* fun_name_90;
void* right_value74;
struct sType* type2_91;
void* right_value75;
char* fun_name2_92;
struct sFun* finalizer_93;
void* right_value76;
char* none_generics_name_97;
void* right_value77;
char* generics_fun_name_98;
struct sGenericsFun* generics_fun_102;
int i_103;
void* right_value78;
char* new_fun_name_104;
void* right_value79;
char* __dec_obj42;
void* right_value80;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_105;
char* new_fun_name_106;
char* __dec_obj43;
void* right_value81;
char* type_name_107;
void* right_value82;
struct tuple2$2charphsTypeph* it_109;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* name_111;
struct sType* field_type_112;
void* right_value83;
char* obj_113;
struct tuple2$2charphsTypeph* it_114;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* name_115;
struct sType* field_type_116;
void* right_value84;
char* obj_117;
void* right_value85;
char* type_name_118;
struct list$1sRightValueObjectph* __dec_obj44;
struct list$1CVALUEph* __dec_obj45;
memset(&stack_saved_85, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value_objects_86, 0, sizeof(struct list$1sRightValueObjectph*)); /* ddd */
memset(&right_value73, 0, sizeof(void*));
memset(&c_value_87, 0, sizeof(char*)); /* ddd */
memset(&klass_88, 0, sizeof(struct sClass*)); /* ddd */
memset(&class_name_89, 0, sizeof(char*)); /* ddd */
memset(&fun_name_90, 0, sizeof(char*)); /* ddd */
memset(&right_value74, 0, sizeof(void*));
memset(&type2_91, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value75, 0, sizeof(void*));
memset(&fun_name2_92, 0, sizeof(char*)); /* ddd */
memset(&finalizer_93, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value76, 0, sizeof(void*));
memset(&none_generics_name_97, 0, sizeof(char*)); /* ddd */
memset(&right_value77, 0, sizeof(void*));
memset(&generics_fun_name_98, 0, sizeof(char*)); /* ddd */
memset(&generics_fun_102, 0, sizeof(struct sGenericsFun*)); /* ddd */
memset(&i_103, 0, sizeof(int)); /* bbb */
memset(&right_value78, 0, sizeof(void*));
memset(&new_fun_name_104, 0, sizeof(char*)); /* ddd */
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&fun_105, 0, sizeof(struct sFun*)); /* ccc */
memset(&new_fun_name_106, 0, sizeof(char*)); /* ccc */
memset(&fun_105, 0, sizeof(struct sFun*)); /* eee */
memset(&new_fun_name_106, 0, sizeof(char*)); /* eee */
memset(&right_value81, 0, sizeof(void*));
memset(&type_name_107, 0, sizeof(char*)); /* ddd */
memset(&right_value82, 0, sizeof(void*));
memset(&it_109, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_111, 0, sizeof(char*)); /* ccc */
memset(&field_type_112, 0, sizeof(struct sType*)); /* ccc */
memset(&name_111, 0, sizeof(char*)); /* eee */
memset(&field_type_112, 0, sizeof(struct sType*)); /* eee */
memset(&right_value83, 0, sizeof(void*));
memset(&obj_113, 0, sizeof(char*)); /* ddd */
memset(&it_114, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_115, 0, sizeof(char*)); /* ccc */
memset(&field_type_116, 0, sizeof(struct sType*)); /* ccc */
memset(&name_115, 0, sizeof(char*)); /* eee */
memset(&field_type_116, 0, sizeof(struct sType*)); /* eee */
memset(&right_value84, 0, sizeof(void*));
memset(&obj_117, 0, sizeof(char*)); /* ddd */
memset(&right_value85, 0, sizeof(void*));
memset(&type_name_118, 0, sizeof(char*)); /* ddd */
    stack_saved_85=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_86=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(type->mPointerNum>0) {
        c_value_87=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(obj))));
        if(right_value73) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0); }
        klass_88=type->mClass;
        class_name_89=klass_88->mName;
        fun_name_90="finalize";
        type2_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(type))));
        if(right_value74) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
        type2_91->mHeap=(_Bool)0;
        fun_name2_92=(char*)come_increment_ref_count(((char*)(right_value75=create_method_name(type,(_Bool)0,fun_name_90,info))));
        if(right_value75) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0); }
        finalizer_93=((void*)0);
        if(list$1sTypephp_length(type->mGenericsTypes)>0) {
            finalizer_93=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_92);
            if(finalizer_93==((void*)0)) {
                none_generics_name_97=(char*)come_increment_ref_count(((char*)(right_value76=get_none_generics_name(type2_91->mClass->mName))));
                if(right_value76) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0); }
                generics_fun_name_98=(char*)come_increment_ref_count(((char*)(right_value77=xsprintf("%s_%s",none_generics_name_97,fun_name_90))));
                if(right_value77) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0); }
                generics_fun_102=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_98);
                if(generics_fun_102) {
                    if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_92),generics_fun_102,type,info)) {
                        fprintf(stderr,"%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_93=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_92);
                }
                if(none_generics_name_97) { none_generics_name_97 = come_decrement_ref_count(none_generics_name_97, (void*)0, (void*)0, 0, 0); }
                if(generics_fun_name_98) { generics_fun_name_98 = come_decrement_ref_count(generics_fun_name_98, (void*)0, (void*)0, 0, 0); }
            }
        }
        else {
            for(
            i_103=128-1;
            i_103>=1;
            i_103--
            ){
                new_fun_name_104=(char*)come_increment_ref_count(((char*)(right_value78=xsprintf("%s_v%d",fun_name2_92,i_103))));
                if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0); }
                finalizer_93=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_104);
                if(finalizer_93) {
                    __dec_obj42=fun_name2_92;
                    fun_name2_92=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(new_fun_name_104))));
                    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
                    if(right_value79) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0); }
                    break;
                }
                if(new_fun_name_104) { new_fun_name_104 = come_decrement_ref_count(new_fun_name_104, (void*)0, (void*)0, 0, 0); }
            }
            if(finalizer_93==((void*)0)) {
                finalizer_93=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_92);
            }
        }
        if(finalizer_93==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&gComelang) {
            multiple_assgin_var1=((struct tuple2$2sFunpcharph*)(right_value80=create_finalizer_automatically(type,fun_name_90,info)));
            fun_105=multiple_assgin_var1->v1;
            new_fun_name_106=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            if(right_value80) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0); }
            __dec_obj43=fun_name2_92;
            fun_name2_92=(char*)come_increment_ref_count(new_fun_name_106);
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
            finalizer_93=fun_105;
            if(new_fun_name_106) { new_fun_name_106 = come_decrement_ref_count(new_fun_name_106, (void*)0, (void*)0, 0, 0); }
        }
        if(finalizer_93!=((void*)0)) {
            if(klass_88->mProtocol&&type->mPointerNum==1) {
                type_name_107=(char*)come_increment_ref_count(((char*)(right_value81=make_type_name_string(type,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                if(right_value81) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0); }
                if(c_value_87) {
                    add_come_code(info,"if(%s) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); }\n",c_value_87,fun_name2_92,c_value_87,type_name_107,c_value_87,type_name_107,c_value_87,type->mAllocaValue,no_decrement,no_free);
                }
                if(type_name_107) { type_name_107 = come_decrement_ref_count(type_name_107, (void*)0, (void*)0, 0, 0); }
            }
            else {
                if(c_value_87) {
                    add_come_code(info,((char*)(right_value82=xsprintf("if(%s) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_87,fun_name2_92,c_value_87,type->mAllocaValue,no_decrement,no_free))));
                    if(right_value82) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0); }
                }
            }
        }
        else {
            if(klass_88->mStruct&&type->mPointerNum==0) {
                for(
                it_109=list$1tuple2$2charphsTypephphp_begin((klass_88->mFields));
                !list$1tuple2$2charphsTypephphp_end((klass_88->mFields));
                it_109=list$1tuple2$2charphsTypephphp_next((klass_88->mFields))
                ){
                    multiple_assgin_var2=it_109;
                    name_111=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
                    field_type_112=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
                    if(field_type_112->mHeap&&field_type_112->mPointerNum>0) {
                        obj_113=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("(%s.%s)",c_value_87,name_111))));
                        if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
                        free_object(field_type_112,obj_113,no_decrement,no_free,info);
                        if(obj_113) { obj_113 = come_decrement_ref_count(obj_113, (void*)0, (void*)0, 0, 0); }
                    }
                    if(name_111) { name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0); }
                    if(field_type_112) { come_call_finalizer(sType_finalize,field_type_112, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else if(klass_88->mStruct&&type->mPointerNum==1) {
                for(
                it_114=list$1tuple2$2charphsTypephphp_begin((klass_88->mFields));
                !list$1tuple2$2charphsTypephphp_end((klass_88->mFields));
                it_114=list$1tuple2$2charphsTypephphp_next((klass_88->mFields))
                ){
                    multiple_assgin_var3=it_114;
                    name_115=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                    field_type_116=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                    if(field_type_116->mHeap&&field_type_116->mPointerNum>0) {
                        obj_117=(char*)come_increment_ref_count(((char*)(right_value84=xsprintf("(%s->%s)",c_value_87,name_115))));
                        if(right_value84) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0); }
                        free_object(field_type_116,obj_117,no_decrement,no_free,info);
                        if(obj_117) { obj_117 = come_decrement_ref_count(obj_117, (void*)0, (void*)0, 0, 0); }
                    }
                    if(name_115) { name_115 = come_decrement_ref_count(name_115, (void*)0, (void*)0, 0, 0); }
                    if(field_type_116) { come_call_finalizer(sType_finalize,field_type_116, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            if(!type->mAllocaValue) {
                if(klass_88->mProtocol&&type->mPointerNum==1) {
                    if(c_value_87) {
                        type_name_118=(char*)come_increment_ref_count(((char*)(right_value85=make_type_name_string(type,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                        if(right_value85) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0); }
                        add_come_code(info,"if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d); } \n",c_value_87,c_value_87,c_value_87,type_name_118,c_value_87,type_name_118,c_value_87,no_decrement,no_free);
                        if(type_name_118) { type_name_118 = come_decrement_ref_count(type_name_118, (void*)0, (void*)0, 0, 0); }
                    }
                }
                else {
                    if(c_value_87) {
                        add_come_code(info,"if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d); }\n",c_value_87,c_value_87,c_value_87,no_decrement,no_free);
                    }
                }
            }
        }
        if(c_value_87) { c_value_87 = come_decrement_ref_count(c_value_87, (void*)0, (void*)0, 0, 0); }
        if(type2_91) { come_call_finalizer(sType_finalize,type2_91, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name2_92) { fun_name2_92 = come_decrement_ref_count(fun_name2_92, (void*)0, (void*)0, 0, 0); }
    }
    __dec_obj44=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_86);
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
    __dec_obj45=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_85);
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
    if(stack_saved_85) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_85, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_objects_86) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_86, (void*)0, (void*)0, 0, 0, 0); }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
char* result_123;
struct sType* result_type_124;
struct list$1CVALUEph* stack_saved_125;
struct list$1sRightValueObjectph* right_value_objects_126;
void* right_value86;
char* c_value_127;
struct sClass* klass_128;
char* class_name_129;
char* fun_name_130;
struct sFun* cloner_131;
char* fun_name2_132;
void* right_value87;
char* none_generics_name_133;
void* right_value88;
struct sType* obj_type_134;
void* right_value89;
char* __dec_obj46;
void* right_value90;
char* fun_name3_135;
struct sGenericsFun* generics_fun_136;
void* right_value91;
void* right_value92;
void* right_value93;
void* right_value94;
void* right_value95;
void* right_value96;
void* right_value97;
char* __dec_obj49;
int i_137;
void* right_value98;
char* new_fun_name_138;
void* right_value99;
char* __dec_obj50;
void* right_value100;
struct tuple2$2sFunpcharph* multiple_assgin_var4;
struct sFun* fun_139;
char* new_fun_name_140;
char* __dec_obj51;
void* right_value101;
char* __dec_obj52;
struct sType* __dec_obj53;
void* right_value102;
struct sType* __dec_obj54;
void* right_value103;
char* type_name_141;
void* right_value104;
char* __dec_obj55;
void* right_value105;
struct sType* __dec_obj56;
struct list$1sRightValueObjectph* __dec_obj57;
struct list$1CVALUEph* __dec_obj58;
void* right_value106;
void* right_value107;
memset(&result_123, 0, sizeof(char*)); /* ddd */
memset(&result_type_124, 0, sizeof(struct sType*)); /* ddd */
memset(&stack_saved_125, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value_objects_126, 0, sizeof(struct list$1sRightValueObjectph*)); /* ddd */
memset(&right_value86, 0, sizeof(void*));
memset(&c_value_127, 0, sizeof(char*)); /* ddd */
memset(&klass_128, 0, sizeof(struct sClass*)); /* ddd */
memset(&class_name_129, 0, sizeof(char*)); /* ddd */
memset(&fun_name_130, 0, sizeof(char*)); /* ddd */
memset(&cloner_131, 0, sizeof(struct sFun*)); /* ddd */
memset(&fun_name2_132, 0, sizeof(char*)); /* bbb */
memset(&right_value87, 0, sizeof(void*));
memset(&none_generics_name_133, 0, sizeof(char*)); /* ddd */
memset(&right_value88, 0, sizeof(void*));
memset(&obj_type_134, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&fun_name3_135, 0, sizeof(char*)); /* ddd */
memset(&generics_fun_136, 0, sizeof(struct sGenericsFun*)); /* ddd */
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&i_137, 0, sizeof(int)); /* bbb */
memset(&right_value98, 0, sizeof(void*));
memset(&new_fun_name_138, 0, sizeof(char*)); /* ddd */
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&fun_139, 0, sizeof(struct sFun*)); /* ccc */
memset(&new_fun_name_140, 0, sizeof(char*)); /* ccc */
memset(&fun_139, 0, sizeof(struct sFun*)); /* eee */
memset(&new_fun_name_140, 0, sizeof(char*)); /* eee */
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&type_name_141, 0, sizeof(char*)); /* ddd */
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_123=((void*)0);
    result_type_124=((void*)0);
    stack_saved_125=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_126=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    c_value_127=(char*)come_increment_ref_count(((char*)(right_value86=__builtin_string(obj))));
    if(right_value86) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0); }
    klass_128=type->mClass;
    class_name_129=klass_128->mName;
    fun_name_130="clone";
    cloner_131=((void*)0);
    if(list$1sTypephp_length(type->mGenericsTypes)>0) {
        none_generics_name_133=(char*)come_increment_ref_count(((char*)(right_value87=get_none_generics_name(type->mClass->mName))));
        if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0); }
        obj_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=solve_generics(type,info->generics_type,info))));
        if(right_value88) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj46=fun_name2_132;
        fun_name2_132=(char*)come_increment_ref_count(((char*)(right_value89=create_method_name(obj_type_134,(_Bool)0,fun_name_130,info))));
        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
        if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
        fun_name3_135=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s_%s",none_generics_name_133,fun_name_130))));
        if(right_value90) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0); }
        generics_fun_136=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_135,((void*)0));
        if(generics_fun_136) {
            if(!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value91=__builtin_string(fun_name2_132)))),generics_fun_136,obj_type_134,info)) {
                struct tuple2$2sTypephcharph* __result65__ = ((struct tuple2$2sTypephcharph*)(right_value96=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value95=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1))))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0)))),(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string("")))))));
                if(none_generics_name_133) { none_generics_name_133 = come_decrement_ref_count(none_generics_name_133, (void*)0, (void*)0, 0, 0); }
                if(obj_type_134) { come_call_finalizer(sType_finalize,obj_type_134, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name3_135) { fun_name3_135 = come_decrement_ref_count(fun_name3_135, (void*)0, (void*)0, 0, 0); }
                if(right_value92) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value93) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value94) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0); }
                return __result65__;
            }
            if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
        }
        cloner_131=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_132);
        if(none_generics_name_133) { none_generics_name_133 = come_decrement_ref_count(none_generics_name_133, (void*)0, (void*)0, 0, 0); }
        if(obj_type_134) { come_call_finalizer(sType_finalize,obj_type_134, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name3_135) { fun_name3_135 = come_decrement_ref_count(fun_name3_135, (void*)0, (void*)0, 0, 0); }
    }
    else {
        __dec_obj49=fun_name2_132;
        fun_name2_132=(char*)come_increment_ref_count(((char*)(right_value97=create_method_name(type,(_Bool)0,fun_name_130,info))));
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
        if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0); }
        for(
        i_137=128-1;
        i_137>=1;
        i_137--
        ){
            new_fun_name_138=(char*)come_increment_ref_count(((char*)(right_value98=xsprintf("%s_v%d",fun_name2_132,i_137))));
            if(right_value98) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0); }
            cloner_131=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_138);
            if(cloner_131) {
                __dec_obj50=fun_name2_132;
                fun_name2_132=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string(new_fun_name_138))));
                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
                if(right_value99) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0); }
                break;
            }
            if(new_fun_name_138) { new_fun_name_138 = come_decrement_ref_count(new_fun_name_138, (void*)0, (void*)0, 0, 0); }
        }
        if(cloner_131==((void*)0)) {
            cloner_131=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_132);
        }
    }
    if(cloner_131==((void*)0)&&!type->mClass->mNumber&&gComelang) {
        multiple_assgin_var4=((struct tuple2$2sFunpcharph*)(right_value100=create_cloner_automatically(type,fun_name_130,info)));
        fun_139=multiple_assgin_var4->v1;
        new_fun_name_140=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
        if(right_value100) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj51=fun_name2_132;
        fun_name2_132=(char*)come_increment_ref_count(new_fun_name_140);
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
        cloner_131=fun_139;
        if(new_fun_name_140) { new_fun_name_140 = come_decrement_ref_count(new_fun_name_140, (void*)0, (void*)0, 0, 0); }
    }
    if(cloner_131!=((void*)0)) {
        __dec_obj52=result_123;
        result_123=(char*)come_increment_ref_count(((char*)(right_value101=xsprintf("%s(%s)",fun_name2_132,c_value_127))));
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
        if(right_value101) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0); }
        __dec_obj53=result_type_124;
        result_type_124=(struct sType*)come_increment_ref_count(cloner_131->mResultType);
        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
        __dec_obj54=result_type_124;
        result_type_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=solve_generics(result_type_124,type,info))));
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
        if(right_value102) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0); }
    }
    else {
        type->mHeap=(_Bool)1;
        type_name_141=(char*)come_increment_ref_count(((char*)(right_value103=make_type_name_string(type,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        if(right_value103) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0); }
        __dec_obj55=result_123;
        result_123=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("(%s)come_memdup(%s)",type_name_141,c_value_127))));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
        if(right_value104) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0); }
        __dec_obj56=result_type_124;
        result_type_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_clone(type))));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
        if(right_value105) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0); }
        if(type_name_141) { type_name_141 = come_decrement_ref_count(type_name_141, (void*)0, (void*)0, 0, 0); }
    }
    __dec_obj57=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_126);
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
    __dec_obj58=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_125);
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
    struct tuple2$2sTypephcharph* __result66__ = ((struct tuple2$2sTypephcharph*)(right_value107=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value106=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1))))),(struct sType*)come_increment_ref_count(result_type_124),(char*)come_increment_ref_count(result_123))));
    if(result_123) { result_123 = come_decrement_ref_count(result_123, (void*)0, (void*)0, 0, 0); }
    if(result_type_124) { come_call_finalizer(sType_finalize,result_type_124, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_125) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_125, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_objects_126) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_126, (void*)0, (void*)0, 0, 0, 0); }
    if(c_value_127) { c_value_127 = come_decrement_ref_count(c_value_127, (void*)0, (void*)0, 0, 0); }
    if(fun_name2_132) { fun_name2_132 = come_decrement_ref_count(fun_name2_132, (void*)0, (void*)0, 0, 0); }
    return __result66__;
}

void free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObjectph* right_value_objects_193;
struct sRightValueObject* it_194;
void* right_value138;
struct sType* type_195;
void* right_value139;
struct sType* __dec_obj77;
memset(&right_value_objects_193, 0, sizeof(struct list$1sRightValueObjectph*)); /* ddd */
memset(&it_194, 0, sizeof(struct sRightValueObject*)); /* ddd */
memset(&right_value138, 0, sizeof(void*));
memset(&type_195, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value139, 0, sizeof(void*));
    right_value_objects_193=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    for(
    it_194=list$1sRightValueObjectphp_begin((right_value_objects_193));
    !list$1sRightValueObjectphp_end((right_value_objects_193));
    it_194=list$1sRightValueObjectphp_next((right_value_objects_193))
    ){
        if(it_194&&!it_194->mFreed) {
            if(string_operator_equals(it_194->mFunName,info->come_fun->mName)&&it_194->mBlockLevel==info->block_level) {
                type_195=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(it_194->mType))));
                if(right_value138) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
                __dec_obj77=type_195;
                type_195=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=solve_type(type_195,info->generics_type,info->method_generics_types,info))));
                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0); }
                if(right_value139) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
                free_object(type_195,it_194->mVarName,(_Bool)1,(_Bool)0,info);
                it_194->mFreed=(_Bool)1;
                if(type_195) { come_call_finalizer(sType_finalize,type_195, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
    }
    if(right_value_objects_193) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value_objects_193, (void*)0, (void*)0, 0, 0, 0); }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
char* it_203;
struct sVar* p_205;
struct sType* type_206;
struct sClass* klass_207;
void* right_value140;
char* c_value_208;
void* right_value141;
struct sType* type2_209;
memset(&it_203, 0, sizeof(char*)); /* ddd */
memset(&p_205, 0, sizeof(struct sVar*)); /* ddd */
memset(&type_206, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_207, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value140, 0, sizeof(void*));
memset(&c_value_208, 0, sizeof(char*)); /* ddd */
memset(&right_value141, 0, sizeof(void*));
memset(&type2_209, 0, sizeof(struct sType*)); /* ddd */
    for(
    it_203=map$2charphsVarphp_begin((table->mVars));
    !map$2charphsVarphp_end((table->mVars));
    it_203=map$2charphsVarphp_next((table->mVars))
    ){
        p_205=map$2charphsVarphp_operator_load_element(table->mVars,it_203);
        type_206=p_205->mType;
        klass_207=type_206->mClass;
        if(ret_value!=((void*)0)&&p_205->mCValueName!=((void*)0)&&string_operator_equals(p_205->mCValueName,ret_value->mCValueName)&&type_206->mHeap) {
            free_object(p_205->mType,p_205->mCValueName,(_Bool)0,(_Bool)1,info);
        }
        else if(type_206->mHeap&&p_205->mCValueName) {
            if(type_206->mFunctionParam) {
                free_object(p_205->mType,p_205->mCValueName,(_Bool)0,(_Bool)1,info);
            }
            else {
                free_object(p_205->mType,p_205->mCValueName,(_Bool)0,(_Bool)0,info);
            }
        }
        else if(klass_207->mStruct&&p_205->mCValueName&&type_206->mAllocaValue&&!type_206->mNoCallingDestructor) {
            c_value_208=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("(&%s)",p_205->mCValueName))));
            if(right_value140) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0); }
            type2_209=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(type_206))));
            if(right_value141) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0); }
            type2_209->mPointerNum++;
            free_object(type2_209,c_value_208,(_Bool)0,(_Bool)0,info);
            if(c_value_208) { c_value_208 = come_decrement_ref_count(c_value_208, (void*)0, (void*)0, 0, 0); }
            if(type2_209) { come_call_finalizer(sType_finalize,type2_209, (void*)0, (void*)0, 0, 0, 0); }
        }
    }
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* right_value56;
void* right_value57;
struct sRightValueObject* new_value_56;
struct sType* __dec_obj36;
void* right_value58;
char* __dec_obj37;
void* right_value59;
char* __dec_obj38;
void* right_value63;
char* buf_60;
void* right_value64;
void* right_value65;
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&new_value_56, 0, sizeof(struct sRightValueObject*)); /* ddd */
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&buf_60, 0, sizeof(char*)); /* ddd */
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
    if(info->no_output_come_code) {
        char* __result41__ = ((char*)(right_value56=__builtin_string("")));
        return __result41__;
    }
    new_value_56=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value57=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1)))));
    if(right_value57) { come_call_finalizer(sRightValueObject_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj36=new_value_56->mType;
    new_value_56->mType=(struct sType*)come_increment_ref_count(type);
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0); }
    new_value_56->mFreed=(_Bool)0;
    new_value_56->mID=gRightValueNum;
    __dec_obj37=new_value_56->mVarName;
    new_value_56->mVarName=(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("right_value%d",gRightValueNum++))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
    if(right_value58) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0); }
    __dec_obj38=new_value_56->mFunName;
    new_value_56->mFunName=(char*)come_increment_ref_count(((char*)(right_value59=string_clone(info->come_fun->mName))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
    if(right_value59) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0); }
    new_value_56->mBlockLevel=info->block_level;
    list$1sRightValueObjectphp_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_56));
    buf_60=(char*)come_increment_ref_count(((char*)(right_value63=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    if(right_value63) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0); }
    add_come_code_at_function_head(info,buf_60);
    add_come_code_at_function_head2(info,"memset(&right_value%d, 0, sizeof(void*));\n",gRightValueNum-1);
    char* __result42__ = ((char*)(right_value65=xsprintf("((%s)(%s=%s))",((char*)(right_value64=make_type_name_string(type,(_Bool)0,(_Bool)1,info,(_Bool)0))),new_value_56->mVarName,obj)));
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1); }
    if(new_value_56) { come_call_finalizer(sRightValueObject_finalize,new_value_56, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_60) { buf_60 = come_decrement_ref_count(buf_60, (void*)0, (void*)0, 0, 0); }
    if(right_value64) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0); }
    return __result42__;
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
struct sRightValueObject* it_196;
memset(&it_196, 0, sizeof(struct sRightValueObject*)); /* ddd */
    for(
    it_196=list$1sRightValueObjectphp_begin((info->right_value_objects));
    !list$1sRightValueObjectphp_end((info->right_value_objects));
    it_196=list$1sRightValueObjectphp_next((info->right_value_objects))
    ){
        if(it_196->mID==right_value_num) {
            _Bool __result73__ = (_Bool)1;
            return __result73__;
        }
    }
    _Bool __result74__ = (_Bool)0;
    return __result74__;
}

int get_right_value_id_from_obj(char* obj){
char* p_54;
int n_55;
memset(&p_54, 0, sizeof(char*)); /* ddd */
memset(&n_55, 0, sizeof(int)); /* ddd */
    p_54=obj;
    if(*p_54==40) {
        p_54++;
        while(*p_54!=41) {
            p_54++;
        }
        p_54++;
        if(*p_54==40) {
            p_54++;
            if(memcmp(p_54,"right_value",strlen("right_value"))==0) {
                p_54+=strlen("right_value");
                if(xisdigit(*p_54)) {
                    n_55=0;
                    while(xisdigit(*p_54)) {
                        n_55=n_55*10+*p_54-48;
                        p_54++;
                    }
                    int __result39__ = n_55;
                    return __result39__;
                }
            }
        }
    }
    int __result40__ = -1;
    if(obj) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1); }
    return __result40__;
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_61;
struct sRightValueObject* it_63;
memset(&i_61, 0, sizeof(int)); /* ddd */
memset(&it_63, 0, sizeof(struct sRightValueObject*)); /* ddd */
    i_61=0;
    for(
    it_63=list$1sRightValueObjectphp_begin((info->right_value_objects));
    !list$1sRightValueObjectphp_end((info->right_value_objects));
    it_63=list$1sRightValueObjectphp_next((info->right_value_objects))
    ){
        if(it_63->mID==right_value_num) {
            break;
        }
        i_61++;
    }
    list$1sRightValueObjectphp_delete(info->right_value_objects,i_61,i_61+1);
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
struct sClass* klass_79;
void* right_value66;
char* type_name_80;
void* right_value67;
memset(&klass_79, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value66, 0, sizeof(void*));
memset(&type_name_80, 0, sizeof(char*)); /* ddd */
memset(&right_value67, 0, sizeof(void*));
    klass_79=type->mClass;
    type_name_80=(char*)come_increment_ref_count(((char*)(right_value66=make_type_name_string(type,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    if(right_value66) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0); }
    char* __result48__ = ((char*)(right_value67=xsprintf("(%s)come_increment_ref_count(%s)",type_name_80,obj)));
    if(type_name_80) { type_name_80 = come_decrement_ref_count(type_name_80, (void*)0, (void*)0, 0, 0); }
    return __result48__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
struct sClass* klass_81;
static int dec_num_82=0;
void* right_value68;
char* name_83;
void* right_value69;
void* right_value70;
char* type_name_84;
void* right_value71;
void* right_value72;
memset(&klass_81, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value68, 0, sizeof(void*));
memset(&name_83, 0, sizeof(char*)); /* ddd */
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&type_name_84, 0, sizeof(char*)); /* ddd */
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
    klass_81=type->mClass;
    name_83=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("__dec_obj%d",++dec_num_82))));
    if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value69=make_define_var(type,name_83,info,(_Bool)0))));
    if(right_value69) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0); }
    add_come_code(info,"%s=%s;\n",name_83,obj);
    if(klass_81->mProtocol&&type->mPointerNum==1) {
        type_name_84=(char*)come_increment_ref_count(((char*)(right_value70=make_type_name_string(type,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        if(right_value70) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0); }
        add_come_last_code2(info,((char*)(right_value71=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0); }\n",name_83,name_83,name_83,type_name_84,name_83,type_name_84,name_83))));
        if(right_value71) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0); }
        if(type_name_84) { type_name_84 = come_decrement_ref_count(type_name_84, (void*)0, (void*)0, 0, 0); }
    }
    else {
        add_come_last_code2(info,((char*)(right_value72=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0,0); }\n",name_83,name_83,name_83))));
        if(right_value72) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0); }
    }
    if(name_83) { name_83 = come_decrement_ref_count(name_83, (void*)0, (void*)0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* right_value0;
struct sType* result_0;
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
memset(&result_0, 0, sizeof(struct sType*)); /* ddd */
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
        result_0=(struct sType*)come_increment_ref_count(((struct sType*)(right_value0=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
        if(right_value0) { come_call_finalizer(sType_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)) {
            result_0->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj2=result_0->mNoSolvedGenericsType;
            result_0->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value3=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
            if(right_value3) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj3=result_0->mGenericsName;
            result_0->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value4=string_clone(self->mGenericsName))));
            if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
            if(right_value4) { right_value4 = come_decrement_ref_count(right_value4, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj7=result_0->mGenericsTypes;
            result_0->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value11=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
            if(right_value11) { come_call_finalizer(list$1sTypephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj11=result_0->mArrayNum;
            result_0->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value19=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0); }
            if(right_value19) { come_call_finalizer(list$1sNodephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_0->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj12=result_0->mParamTypes;
            result_0->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0); }
            if(right_value20) { come_call_finalizer(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj16=result_0->mParamNames;
            result_0->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value27=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
            if(right_value27) { come_call_finalizer(list$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj17=result_0->mResultType;
            result_0->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value28=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
            if(right_value28) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0); }
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
            __dec_obj18=result_0->mOriginalTypeName;
            result_0->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value29=string_clone(self->mOriginalTypeName))));
            if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
            if(right_value29) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0); }
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
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value1;
struct tuple1$1sTypeph* result_7;
void* right_value2;
struct sType* __dec_obj1;
memset(&right_value1, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value2, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple1$1sTypeph* __result8__ = (void*)0;
                    return __result8__;
                }
                result_7=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value1=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                if(right_value1) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj1=result_7->v1;
                    result_7->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value2=sType_clone(self->v1))));
                    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
                    if(right_value2) { come_call_finalizer(sType_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0); }
                }
                struct tuple1$1sTypeph* __result9__ = result_7;
                if(result_7) { come_call_finalizer(tuple1$1sTypephp_finalize,result_7, (void*)0, (void*)0, 0, 0, 1); }
                return __result9__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value5;
void* right_value6;
struct list$1sTypeph* result_8;
struct list_item$1sTypeph* it_9;
void* right_value10;
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value10, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sTypeph* __result10__ = ((void*)0);
                    return __result10__;
                }
                result_8=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value6=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value5=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                if(right_value6) { come_call_finalizer(list$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
                it_9=self->head;
                while(it_9!=((void*)0)) {
                    list$1sTypephp_push_back2(result_8,(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=sType_clone(it_9->item)))));
                    if(right_value10) { come_call_finalizer(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0); }
                    it_9=it_9->next;
                }
                struct list$1sTypeph* __result12__ = result_8;
                if(result_8) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1); }
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
struct list_item$1sTypeph* litem_10;
struct sType* __dec_obj4;
void* right_value8;
struct list_item$1sTypeph* litem_11;
struct sType* __dec_obj5;
void* right_value9;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj6;
memset(&right_value7, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value8, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value9, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                        if(self->len==0) {
                            litem_10=((struct list_item$1sTypeph*)(right_value7=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_10->prev=((void*)0);
                            litem_10->next=((void*)0);
                            __dec_obj4=litem_10->item;
                            litem_10->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_10;
                            self->head=litem_10;
                        }
                        else if(self->len==1) {
                            litem_11=((struct list_item$1sTypeph*)(right_value8=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_11->prev=self->head;
                            litem_11->next=((void*)0);
                            __dec_obj5=litem_11->item;
                            litem_11->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_11;
                            self->head->next=litem_11;
                        }
                        else {
                            litem_12=((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_12->prev=self->tail;
                            litem_12->next=((void*)0);
                            __dec_obj6=litem_12->item;
                            litem_12->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                            self->tail->next=litem_12;
                            self->tail=litem_12;
                        }
                        self->len++;
                        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value12;
void* right_value13;
struct list$1sNodeph* result_13;
struct list_item$1sNodeph* it_14;
void* right_value18;
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sNodeph* __result13__ = ((void*)0);
                    return __result13__;
                }
                result_13=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value13=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value12=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                if(right_value13) { come_call_finalizer(list$1sNodephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
                it_14=self->head;
                while(it_14!=((void*)0)) {
                    list$1sNodephp_push_back2(result_13,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value18=sNodep_clone(it_14->item)))));
                    if(right_value18) { right_value18 = come_decrement_ref_count(right_value18, ((struct sNode*)right_value18)->finalize, ((struct sNode*)right_value18)->_protocol_obj, 1, 0); } 
                    it_14=it_14->next;
                }
                struct list$1sNodeph* __result17__ = result_13;
                if(result_13) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1); }
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
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj8;
void* right_value15;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj9;
void* right_value16;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj10;
memset(&right_value14, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value15, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value16, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                        if(self->len==0) {
                            litem_15=((struct list_item$1sNodeph*)(right_value14=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj8=litem_15->item;
                            litem_15->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0); }
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else if(self->len==1) {
                            litem_16=((struct list_item$1sNodeph*)(right_value15=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_16->prev=self->head;
                            litem_16->next=((void*)0);
                            __dec_obj9=litem_16->item;
                            litem_16->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0); }
                            self->tail=litem_16;
                            self->head->next=litem_16;
                        }
                        else {
                            litem_17=((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_17->prev=self->tail;
                            litem_17->next=((void*)0);
                            __dec_obj10=litem_17->item;
                            litem_17->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0); }
                            self->tail->next=litem_17;
                            self->tail=litem_17;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value17;
struct sNode* result_18;
memset(&right_value17, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sNode*)); /* ddd */
                        if(self==(void*)0) {
                            struct sNode* __result15__ = (void*)0;
                            return __result15__;
                        }
                        result_18=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
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
                        return __result16__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value21;
void* right_value22;
struct list$1charph* result_19;
struct list_item$1charph* it_20;
void* right_value26;
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_20, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value26, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1charph* __result18__ = ((void*)0);
                    return __result18__;
                }
                result_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value22=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value21=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                if(right_value22) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
                it_20=self->head;
                while(it_20!=((void*)0)) {
                    list$1charphp_push_back2(result_19,(char*)come_increment_ref_count(((char*)(right_value26=string_clone(it_20->item)))));
                    if(right_value26) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0); }
                    it_20=it_20->next;
                }
                struct list$1charph* __result20__ = result_19;
                if(result_19) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 1); }
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
struct list_item$1charph* litem_21;
char* __dec_obj13;
void* right_value24;
struct list_item$1charph* litem_22;
char* __dec_obj14;
void* right_value25;
struct list_item$1charph* litem_23;
char* __dec_obj15;
memset(&right_value23, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value24, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value25, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*)); /* ddd */
                        if(self->len==0) {
                            litem_21=((struct list_item$1charph*)(right_value23=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_21->prev=((void*)0);
                            litem_21->next=((void*)0);
                            __dec_obj13=litem_21->item;
                            litem_21->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_21;
                            self->head=litem_21;
                        }
                        else if(self->len==1) {
                            litem_22=((struct list_item$1charph*)(right_value24=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_22->prev=self->head;
                            litem_22->next=((void*)0);
                            __dec_obj14=litem_22->item;
                            litem_22->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_22;
                            self->head->next=litem_22;
                        }
                        else {
                            litem_23=((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_23->prev=self->tail;
                            litem_23->next=((void*)0);
                            __dec_obj15=litem_23->item;
                            litem_23->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
                            self->tail->next=litem_23;
                            self->tail=litem_23;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
        int __result23__ = self->len;
        return __result23__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
struct sType* __dec_obj19;
            __dec_obj19=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
            struct tuple1$1sTypeph* __result25__ = self;
            if(self) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1); }
            return __result25__;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_28;
memset(&result_28, 0, sizeof(struct sType*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct sType* __result26__ = self->it->item;
                return __result26__;
            }
            memset(&result_28,0,sizeof(struct sType*));
            struct sType* __result27__ = result_28;
            return __result27__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
            _Bool __result28__ = self->it==((void*)0);
            return __result28__;
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_30;
memset(&result_30, 0, sizeof(struct sType*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct sType* __result29__ = self->it->item;
                return __result29__;
            }
            memset(&result_30,0,sizeof(struct sType*));
            struct sType* __result30__ = result_30;
            return __result30__;
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value37;
struct list_item$1sTypeph* litem_32;
struct sType* __dec_obj21;
void* right_value38;
struct list_item$1sTypeph* litem_33;
struct sType* __dec_obj22;
void* right_value39;
struct list_item$1sTypeph* litem_34;
struct sType* __dec_obj23;
memset(&right_value37, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value38, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value39, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                if(self->len==0) {
                    litem_32=((struct list_item$1sTypeph*)(right_value37=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_32->prev=((void*)0);
                    litem_32->next=((void*)0);
                    __dec_obj21=litem_32->item;
                    litem_32->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_32;
                    self->head=litem_32;
                }
                else if(self->len==1) {
                    litem_33=((struct list_item$1sTypeph*)(right_value38=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_33->prev=self->head;
                    litem_33->next=((void*)0);
                    __dec_obj22=litem_33->item;
                    litem_33->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_33;
                    self->head->next=litem_33;
                }
                else {
                    litem_34=((struct list_item$1sTypeph*)(right_value39=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_34->prev=self->tail;
                    litem_34->next=((void*)0);
                    __dec_obj23=litem_34->item;
                    litem_34->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_34;
                    self->tail=litem_34;
                }
                self->len++;
                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_36;
memset(&default_value_36, 0, sizeof(struct sType*)); /* bbb */
            memset(&default_value_36,0,sizeof(struct sType*));
            struct sType* __result33__ = list$1sTypephp_item(self,index,default_value_36);
            return __result33__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_37;
int i_38;
memset(&it_37, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&i_38, 0, sizeof(int)); /* ddd */
                if(position<0) {
                    position+=self->len;
                }
                it_37=self->head;
                i_38=0;
                while(it_37!=((void*)0)) {
                    if(position==i_38) {
                        struct sType* __result31__ = it_37->item;
                        return __result31__;
                    }
                    it_37=it_37->next;
                    i_38++;
                }
                struct sType* __result32__ = default_value;
                return __result32__;
}

static struct sType* sTypep_clone(struct sType* self){
void* right_value41;
struct sType* result_47;
void* right_value42;
struct tuple1$1sTypeph* __dec_obj25;
void* right_value43;
char* __dec_obj26;
void* right_value44;
struct list$1sTypeph* __dec_obj27;
void* right_value45;
struct list$1sNodeph* __dec_obj28;
void* right_value46;
struct list$1sTypeph* __dec_obj29;
void* right_value47;
struct list$1charph* __dec_obj30;
void* right_value48;
struct tuple1$1sTypeph* __dec_obj31;
void* right_value49;
char* __dec_obj32;
memset(&right_value41, 0, sizeof(void*));
memset(&result_47, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sType* __result34__ = (void*)0;
                    return __result34__;
                }
                result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value41=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
                if(right_value41) { come_call_finalizer(sType_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_47->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj25=result_47->mNoSolvedGenericsType;
                    result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value42=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
                    if(right_value42) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj26=result_47->mGenericsName;
                    result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mGenericsName))));
                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
                    if(right_value43) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj27=result_47->mGenericsTypes;
                    result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value44=list$1sTypephp_clone(self->mGenericsTypes))));
                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
                    if(right_value44) { come_call_finalizer(list$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj28=result_47->mArrayNum;
                    result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value45=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
                    if(right_value45) { come_call_finalizer(list$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_47->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj29=result_47->mParamTypes;
                    result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value46=list$1sTypephp_clone(self->mParamTypes))));
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
                    if(right_value46) { come_call_finalizer(list$1sTypephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj30=result_47->mParamNames;
                    result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value47=list$1charphp_clone(self->mParamNames))));
                    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
                    if(right_value47) { come_call_finalizer(list$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj31=result_47->mResultType;
                    result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value48=tuple1$1sTypephp_clone(self->mResultType))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
                    if(right_value48) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_47->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)) {
                    result_47->mUnsigned=self->mUnsigned;
                }
                if(self!=((void*)0)) {
                    result_47->mShort=self->mShort;
                }
                if(self!=((void*)0)) {
                    result_47->mLong=self->mLong;
                }
                if(self!=((void*)0)) {
                    result_47->mLongLong=self->mLongLong;
                }
                if(self!=((void*)0)) {
                    result_47->mConstant=self->mConstant;
                }
                if(self!=((void*)0)) {
                    result_47->mRegister=self->mRegister;
                }
                if(self!=((void*)0)) {
                    result_47->mVolatile=self->mVolatile;
                }
                if(self!=((void*)0)) {
                    result_47->mStatic=self->mStatic;
                }
                if(self!=((void*)0)) {
                    result_47->mExtern=self->mExtern;
                }
                if(self!=((void*)0)) {
                    result_47->mRestrict=self->mRestrict;
                }
                if(self!=((void*)0)) {
                    result_47->mImmutable=self->mImmutable;
                }
                if(self!=((void*)0)) {
                    result_47->mHeap=self->mHeap;
                }
                if(self!=((void*)0)) {
                    result_47->mDummyHeap=self->mDummyHeap;
                }
                if(self!=((void*)0)) {
                    result_47->mNoHeap=self->mNoHeap;
                }
                if(self!=((void*)0)) {
                    result_47->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(self!=((void*)0)) {
                    result_47->mRefference=self->mRefference;
                }
                if(self!=((void*)0)) {
                    result_47->mException=self->mException;
                }
                if(self!=((void*)0)) {
                    result_47->mPointerNum=self->mPointerNum;
                }
                if(self!=((void*)0)) {
                    result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(self!=((void*)0)) {
                    result_47->mSizeNum=self->mSizeNum;
                }
                if(self!=((void*)0)) {
                    result_47->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_47->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj32=result_47->mOriginalTypeName;
                    result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value49=string_clone(self->mOriginalTypeName))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
                    if(right_value49) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_47->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(self!=((void*)0)) {
                    result_47->mFunctionParam=self->mFunctionParam;
                }
                if(self!=((void*)0)) {
                    result_47->mAllocaValue=self->mAllocaValue;
                }
                if(self!=((void*)0)) {
                    result_47->mGenericsStruct=self->mGenericsStruct;
                }
                if(self!=((void*)0)) {
                    result_47->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(self!=((void*)0)) {
                    result_47->mInline=self->mInline;
                }
                struct sType* __result35__ = result_47;
                if(result_47) { come_call_finalizer(sType_finalize,result_47, (void*)0, (void*)0, 0, 0, 1); }
                return __result35__;
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

static int list$1sNodephp_length(struct list$1sNodeph* self){
                int __result36__ = self->len;
                return __result36__;
}

static void list$1sTypephp_reset(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_48;
struct list_item$1sTypeph* prev_it_49;
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&prev_it_49, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
            it_48=self->head;
            while(it_48!=((void*)0)) {
                prev_it_49=it_48;
                it_48=it_48->next;
                if(prev_it_49) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_49, (void*)0, (void*)0, 0, 0, 0); }
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

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* right_value54;
struct sType* result_53;
void* right_value55;
struct sType* __dec_obj35;
memset(&right_value54, 0, sizeof(void*));
memset(&result_53, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value55, 0, sizeof(void*));
    result_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(type))));
    if(right_value54) { come_call_finalizer(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0); }
    if(generics_type) {
        __dec_obj35=result_53;
        result_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=solve_generics(result_53,generics_type,info))));
        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
        if(right_value55) { come_call_finalizer(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
    }
    struct sType* __result38__ = result_53;
    if(result_53) { come_call_finalizer(sType_finalize,result_53, (void*)0, (void*)0, 0, 0, 1); }
    return __result38__;
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

static void list$1sRightValueObjectphp_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* right_value60;
struct list_item$1sRightValueObjectph* litem_57;
struct sRightValueObject* __dec_obj39;
void* right_value61;
struct list_item$1sRightValueObjectph* litem_58;
struct sRightValueObject* __dec_obj40;
void* right_value62;
struct list_item$1sRightValueObjectph* litem_59;
struct sRightValueObject* __dec_obj41;
memset(&right_value60, 0, sizeof(void*));
memset(&litem_57, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&right_value61, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&litem_59, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
        if(self->len==0) {
            litem_57=((struct list_item$1sRightValueObjectph*)(right_value60=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1))));
            litem_57->prev=((void*)0);
            litem_57->next=((void*)0);
            __dec_obj39=litem_57->item;
            litem_57->item=(struct sRightValueObject*)come_increment_ref_count(item);
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0); }
            self->tail=litem_57;
            self->head=litem_57;
        }
        else if(self->len==1) {
            litem_58=((struct list_item$1sRightValueObjectph*)(right_value61=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1))));
            litem_58->prev=self->head;
            litem_58->next=((void*)0);
            __dec_obj40=litem_58->item;
            litem_58->item=(struct sRightValueObject*)come_increment_ref_count(item);
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
            self->tail=litem_58;
            self->head->next=litem_58;
        }
        else {
            litem_59=((struct list_item$1sRightValueObjectph*)(right_value62=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1))));
            litem_59->prev=self->tail;
            litem_59->next=((void*)0);
            __dec_obj41=litem_59->item;
            litem_59->item=(struct sRightValueObject*)come_increment_ref_count(item);
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
            self->tail->next=litem_59;
            self->tail=litem_59;
        }
        self->len++;
        if(item) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct sRightValueObject* list$1sRightValueObjectphp_begin(struct list$1sRightValueObjectph* self){
struct sRightValueObject* result_62;
memset(&result_62, 0, sizeof(struct sRightValueObject*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sRightValueObject* __result43__ = self->it->item;
            return __result43__;
        }
        memset(&result_62,0,sizeof(struct sRightValueObject*));
        struct sRightValueObject* __result44__ = result_62;
        return __result44__;
}

static _Bool list$1sRightValueObjectphp_end(struct list$1sRightValueObjectph* self){
        _Bool __result45__ = self->it==((void*)0);
        return __result45__;
}

static struct sRightValueObject* list$1sRightValueObjectphp_next(struct list$1sRightValueObjectph* self){
struct sRightValueObject* result_64;
memset(&result_64, 0, sizeof(struct sRightValueObject*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sRightValueObject* __result46__ = self->it->item;
            return __result46__;
        }
        memset(&result_64,0,sizeof(struct sRightValueObject*));
        struct sRightValueObject* __result47__ = result_64;
        return __result47__;
}

static void list$1sRightValueObjectphp_delete(struct list$1sRightValueObjectph* self, int head, int tail){
int tmp_65;
struct list_item$1sRightValueObjectph* it_68;
int i_69;
struct list_item$1sRightValueObjectph* prev_it_70;
struct list_item$1sRightValueObjectph* it_71;
int i_72;
struct list_item$1sRightValueObjectph* prev_it_73;
struct list_item$1sRightValueObjectph* it_74;
struct list_item$1sRightValueObjectph* head_prev_it_75;
struct list_item$1sRightValueObjectph* tail_it_76;
int i_77;
struct list_item$1sRightValueObjectph* prev_it_78;
memset(&tmp_65, 0, sizeof(int)); /* ddd */
memset(&it_68, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&i_69, 0, sizeof(int)); /* ddd */
memset(&prev_it_70, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&it_71, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&i_72, 0, sizeof(int)); /* ddd */
memset(&prev_it_73, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&it_74, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&head_prev_it_75, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&tail_it_76, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&i_77, 0, sizeof(int)); /* ddd */
memset(&prev_it_78, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
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
            list$1sRightValueObjectphp_reset(self);
        }
        else if(head==0) {
            it_68=self->head;
            i_69=0;
            while(it_68!=((void*)0)) {
                if(i_69<tail) {
                    prev_it_70=it_68;
                    it_68=it_68->next;
                    i_69++;
                    if(prev_it_70) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_70, (void*)0, (void*)0, 0, 0, 0); }
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
                    if(prev_it_73) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_73, (void*)0, (void*)0, 0, 0, 0); }
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
                    if(prev_it_78) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_78, (void*)0, (void*)0, 0, 0, 0); }
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

static void list$1sRightValueObjectphp_reset(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_66;
struct list_item$1sRightValueObjectph* prev_it_67;
memset(&it_66, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&prev_it_67, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
                it_66=self->head;
                while(it_66!=((void*)0)) {
                    prev_it_67=it_66;
                    it_66=it_66->next;
                    if(prev_it_67) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_67, (void*)0, (void*)0, 0, 0, 0); }
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            if(self->item) { come_call_finalizer(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
struct sFun* default_value_94;
memset(&default_value_94, 0, sizeof(struct sFun*)); /* bbb */
                memset(&default_value_94,0,sizeof(struct sFun*));
                struct sFun* __result53__ = map$2charphsFunphp_at(self,key,default_value_94);
                return __result53__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_95;
int it_96;
memset(&hash_95, 0, sizeof(int)); /* ddd */
memset(&it_96, 0, sizeof(int)); /* ddd */
                    hash_95=string_get_hash_key(((char*)key))%self->size;
                    it_96=hash_95;
                    while((_Bool)1) {
                        if(self->item_existance[it_96]) {
                            if(charp_equals(self->keys[it_96],key)) {
                                struct sFun* __result49__ = self->items[it_96];
                                return __result49__;
                            }
                            it_96++;
                            if(it_96>=self->size) {
                                it_96=0;
                            }
                            else if(it_96==hash_95) {
                                struct sFun* __result50__ = default_value;
                                return __result50__;
                            }
                        }
                        else {
                            struct sFun* __result51__ = default_value;
                            return __result51__;
                        }
                    }
                    struct sFun* __result52__ = default_value;
                    return __result52__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
struct sGenericsFun* default_value_99;
memset(&default_value_99, 0, sizeof(struct sGenericsFun*)); /* bbb */
                    memset(&default_value_99,0,sizeof(struct sGenericsFun*));
                    struct sGenericsFun* __result58__ = map$2charphsGenericsFunphp_at(self,key,default_value_99);
                    return __result58__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
int hash_100;
int it_101;
memset(&hash_100, 0, sizeof(int)); /* ddd */
memset(&it_101, 0, sizeof(int)); /* ddd */
                        hash_100=string_get_hash_key(((char*)key))%self->size;
                        it_101=hash_100;
                        while((_Bool)1) {
                            if(self->item_existance[it_101]) {
                                if(charp_equals(self->keys[it_101],key)) {
                                    struct sGenericsFun* __result54__ = self->items[it_101];
                                    return __result54__;
                                }
                                it_101++;
                                if(it_101>=self->size) {
                                    it_101=0;
                                }
                                else if(it_101==hash_100) {
                                    struct sGenericsFun* __result55__ = default_value;
                                    return __result55__;
                                }
                            }
                            else {
                                struct sGenericsFun* __result56__ = default_value;
                                return __result56__;
                            }
                        }
                        struct sGenericsFun* __result57__ = default_value;
                        return __result57__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_108;
memset(&result_108, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
                    self->it=self->head;
                    if(self->it) {
                        struct tuple2$2charphsTypeph* __result59__ = self->it->item;
                        return __result59__;
                    }
                    memset(&result_108,0,sizeof(struct tuple2$2charphsTypeph*));
                    struct tuple2$2charphsTypeph* __result60__ = result_108;
                    return __result60__;
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
                    _Bool __result61__ = self->it==((void*)0);
                    return __result61__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_110;
memset(&result_110, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
                    self->it=self->it->next;
                    if(self->it) {
                        struct tuple2$2charphsTypeph* __result62__ = self->it->item;
                        return __result62__;
                    }
                    memset(&result_110,0,sizeof(struct tuple2$2charphsTypeph*));
                    struct tuple2$2charphsTypeph* __result63__ = result_110;
                    return __result63__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_119;
struct list_item$1CVALUEph* prev_it_120;
memset(&it_119, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&prev_it_120, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
        it_119=self->head;
        while(it_119!=((void*)0)) {
            if(1) {
                if(it_119->item) { come_call_finalizer(CVALUE_finalize,it_119->item, (void*)0, (void*)0, 0, 0, 0); }
            }
            prev_it_120=it_119;
            it_119=it_119->next;
            come_free_object(prev_it_120);
        }
}

static void CVALUE_finalize(struct CVALUE* self){
                    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                        if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->type!=((void*)0)) {
                        if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_121;
struct list_item$1sRightValueObjectph* prev_it_122;
memset(&it_121, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&prev_it_122, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
        it_121=self->head;
        while(it_121!=((void*)0)) {
            if(1) {
                if(it_121->item) { come_call_finalizer(sRightValueObject_finalize,it_121->item, (void*)0, (void*)0, 0, 0, 0); }
            }
            prev_it_122=it_121;
            it_121=it_121->next;
            come_free_object(prev_it_122);
        }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
struct sType* __dec_obj47;
char* __dec_obj48;
                    __dec_obj47=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
                    __dec_obj48=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
                    struct tuple2$2sTypephcharph* __result64__ = self;
                    if(self) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1); }
                    if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1); }
                    return __result64__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(self!=((void*)0)&&self->v2!=((void*)0)) {
                            if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
                        }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
struct sVar* default_value_198;
memset(&default_value_198, 0, sizeof(struct sVar*)); /* bbb */
            memset(&default_value_198,0,sizeof(struct sVar*));
            struct sVar* __result79__ = map$2charphsVarphp_at(self,key,default_value_198);
            return __result79__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
int hash_199;
int it_200;
memset(&hash_199, 0, sizeof(int)); /* ddd */
memset(&it_200, 0, sizeof(int)); /* ddd */
                hash_199=string_get_hash_key(((char*)key))%self->size;
                it_200=hash_199;
                while((_Bool)1) {
                    if(self->item_existance[it_200]) {
                        if(charp_equals(self->keys[it_200],key)) {
                            struct sVar* __result75__ = self->items[it_200];
                            return __result75__;
                        }
                        it_200++;
                        if(it_200>=self->size) {
                            it_200=0;
                        }
                        else if(it_200==hash_199) {
                            struct sVar* __result76__ = default_value;
                            return __result76__;
                        }
                    }
                    else {
                        struct sVar* __result77__ = default_value;
                        return __result77__;
                    }
                }
                struct sVar* __result78__ = default_value;
                return __result78__;
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
char* result_202;
memset(&result_202, 0, sizeof(char*)); /* bbb */
        self->key_list->it=self->key_list->head;
        if(self->key_list->it) {
            char* __result82__ = self->key_list->it->item;
            return __result82__;
        }
        memset(&result_202,0,sizeof(char*));
        char* __result83__ = result_202;
        return __result83__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
        _Bool __result84__ = self->key_list->it==((void*)0);
        return __result84__;
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
char* result_204;
memset(&result_204, 0, sizeof(char*)); /* bbb */
        self->key_list->it=self->key_list->it->next;
        if(self->key_list->it) {
            char* __result85__ = self->key_list->it->item;
            return __result85__;
        }
        memset(&result_204,0,sizeof(char*));
        char* __result86__ = result_204;
        return __result86__;
}

