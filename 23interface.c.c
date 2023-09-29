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
struct sInterfaceNode
{
    char* name;
    struct sClass* klass;
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

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_push_back2(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
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
static void sInterfaceNode_finalize(struct sInterfaceNode* self);
int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info);

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info);

_Bool sInterfaceNode_terminated();

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self);
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
struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void list$1sTypephp_insert(struct list$1sTypeph* self, int position, struct sType* item);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static void list$1charphp_insert(struct list$1charph* self, int position, char* item);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct sClass* sClassp_clone(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self);
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






struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info){
void* right_value87;
char* type_name_106;
struct sClass* klass_107;
void* right_value88;
void* right_value89;
struct sClass* __dec_obj47;
void* right_value93;
struct sClass* __dec_obj50;
void* right_value94;
void* right_value95;
struct sType* voidp_109;
void* right_value99;
void* right_value100;
void* right_value101;
void* right_value102;
void* right_value103;
struct sType* finalizer_113;
void* right_value104;
struct sType* __list_values1___114[1];
void* right_value105;
void* right_value106;
struct list$1sTypeph* __dec_obj56;
void* right_value107;
char* __list_values2___116[1];
void* right_value108;
void* right_value109;
struct list$1charph* __dec_obj57;
void* right_value110;
void* right_value111;
void* right_value112;
void* right_value113;
struct tuple1$1sTypeph* __dec_obj58;
void* right_value114;
void* right_value115;
void* right_value116;
void* right_value117;
void* right_value118;
struct sType* cloner_118;
void* right_value119;
struct sType* __list_values3___119[1];
void* right_value120;
void* right_value121;
struct list$1sTypeph* __dec_obj59;
void* right_value122;
char* __list_values4___120[1];
void* right_value123;
void* right_value124;
struct list$1charph* __dec_obj60;
void* right_value125;
void* right_value126;
void* right_value127;
struct tuple1$1sTypeph* __dec_obj61;
void* right_value128;
void* right_value129;
void* right_value130;
void* right_value131;
struct tuple2$2sTypephcharph* multiple_assgin_var4;
struct sType* type2_121;
char* name_122;
void* right_value132;
void* right_value133;
void* right_value134;
void* right_value135;
void* right_value136;
struct sNode* _inf_value1;
struct sInterfaceNode* _inf_obj_value1;
void* right_value141;
void* right_value142;
void* right_value143;
memset(&right_value87, 0, sizeof(void*));
memset(&type_name_106, 0, sizeof(char*)); /* ddd */
memset(&klass_107, 0, sizeof(struct sClass*)); /* bbb */
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&voidp_109, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&finalizer_113, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&cloner_118, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&type2_121, 0, sizeof(struct sType*)); /* ccc */
memset(&name_122, 0, sizeof(char*)); /* ccc */
memset(&type2_121, 0, sizeof(struct sType*)); /* eee */
memset(&name_122, 0, sizeof(char*)); /* eee */
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
    if(string_operator_equals(buf,"interface")||string_operator_equals(buf,"protocol")) {
        type_name_106=(char*)come_increment_ref_count(((char*)(right_value87=parse_word(info))));
        if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0); }
        if(map$2charphsClassphp_at(info->classes,type_name_106,((void*)0))==((void*)0)) {
            __dec_obj47=klass_107;
            klass_107=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value89=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value88=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),type_name_106,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
            if(right_value88) { come_call_finalizer(sClass_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value89) { come_call_finalizer(sClass_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0); }
        }
        else {
            __dec_obj50=klass_107;
            klass_107=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value93=sClassp_clone(map$2charphsClassphp_at(info->classes,type_name_106,((void*)0))))));
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
            if(right_value93) { come_call_finalizer(sClassp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0); }
        }
        expected_next_character(123,info);
        voidp_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value94=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))));
        if(right_value94) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value95) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0); }
        voidp_109->mPointerNum++;
        list$1tuple2$2charphsTypephphp_push_back(klass_107->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value101=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value99=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string("_protocol_obj")))),(struct sType*)come_increment_ref_count(voidp_109))))));
        if(right_value100) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0); }
        if(right_value101) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0); }
        finalizer_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value102=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"lambda",info,(_Bool)0))));
        if(right_value102) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value103) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values1___114[0]=come_increment_ref_count(((struct sType*)(right_value104=sType_clone(voidp_109))));
}        __dec_obj56=finalizer_113->mParamTypes;
        finalizer_113->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value106=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values1___114))));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
        if(right_value104) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value106) { come_call_finalizer(list$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values2___116[0]=come_increment_ref_count(((char*)(right_value107=__builtin_string("self"))));
}        __dec_obj57=finalizer_113->mParamNames;
        finalizer_113->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values2___116))));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
        if(right_value107) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0); }
        if(right_value109) { come_call_finalizer(list$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0); }
        finalizer_113->mVarArgs=(_Bool)0;
        __dec_obj58=finalizer_113->mResultType;
        finalizer_113->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value113=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1))))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value111=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void",info,(_Bool)0))))))));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
        if(right_value111) { come_call_finalizer(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value112) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value113) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0); }
        list$1tuple2$2charphsTypephphp_push_back(klass_107->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value116=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value114=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string("finalize")))),(struct sType*)come_increment_ref_count(finalizer_113))))));
        if(right_value115) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0); }
        if(right_value116) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
        cloner_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"lambda",info,(_Bool)0))));
        if(right_value117) { come_call_finalizer(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value118) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values3___119[0]=come_increment_ref_count(((struct sType*)(right_value119=sType_clone(voidp_109))));
}        __dec_obj59=cloner_118->mParamTypes;
        cloner_118->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value121=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value120=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))),1,__list_values3___119))));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
        if(right_value119) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value121) { come_call_finalizer(list$1sTypephp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0); }
        {__list_values4___120[0]=come_increment_ref_count(((char*)(right_value122=__builtin_string("self"))));
}        __dec_obj60=cloner_118->mParamNames;
        cloner_118->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),1,__list_values4___120))));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
        if(right_value122) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0); }
        if(right_value124) { come_call_finalizer(list$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0); }
        cloner_118->mVarArgs=(_Bool)0;
        __dec_obj61=cloner_118->mResultType;
        cloner_118->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value127=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1))))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(voidp_109))))))));
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
        if(right_value126) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value127) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0); }
        list$1tuple2$2charphsTypephphp_push_back(klass_107->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value130=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value128=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string("clone")))),(struct sType*)come_increment_ref_count(cloner_118))))));
        if(right_value129) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0); }
        if(right_value130) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0); }
        while((_Bool)1) {
            parse_sharp_v5(info);
            multiple_assgin_var4=((struct tuple2$2sTypephcharph*)(right_value131=parse_interface_function(info)));
            type2_121=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
            name_122=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
            if(right_value131) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
            expected_next_character(59,info);
            list$1tuple2$2charphsTypephphp_push_back(klass_107->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value133=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value132=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(name_122),(struct sType*)come_increment_ref_count(type2_121))))));
            if(right_value133) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0); }
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            if(type2_121) { come_call_finalizer(sType_finalize,type2_121, (void*)0, (void*)0, 0, 0, 0); }
            if(name_122) { name_122 = come_decrement_ref_count(name_122, (void*)0, (void*)0, 0, 0); }
        }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value1=come_increment_ref_count(((struct sInterfaceNode*)(right_value136=sInterfaceNode_initialize((struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value134=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1))))),(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string(type_name_106)))),(struct sClass*)come_increment_ref_count(klass_107),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=sInterfaceNode_finalize;
        _inf_value1->clone=sInterfaceNode_clone;
        _inf_value1->compile=sInterfaceNode_compile;
        _inf_value1->sline=sInterfaceNode_sline;
        _inf_value1->sname=sInterfaceNode_sname;
        _inf_value1->terminated=sInterfaceNode_terminated;
        struct sNode* __result63__ = ((struct sNode*)(right_value141=_inf_value1));
        if(type_name_106) { type_name_106 = come_decrement_ref_count(type_name_106, (void*)0, (void*)0, 0, 0); }
        if(klass_107) { come_call_finalizer(sClass_finalize,klass_107, (void*)0, (void*)0, 0, 0, 0); }
        if(voidp_109) { come_call_finalizer(sType_finalize,voidp_109, (void*)0, (void*)0, 0, 0, 0); }
        if(finalizer_113) { come_call_finalizer(sType_finalize,finalizer_113, (void*)0, (void*)0, 0, 0, 0); }
        if(cloner_118) { come_call_finalizer(sType_finalize,cloner_118, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value134) { come_call_finalizer(sInterfaceNode_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value135) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0); }
        if(right_value136) { come_call_finalizer(sInterfaceNode_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
        return __result63__;
    }
    struct sNode* __result64__ = ((struct sNode*)(right_value143=top_level_v1((char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(buf)))),head,head_sline,info)));
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1); }
    if(right_value142) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0); }
    return __result64__;
}

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* right_value0;
char* __dec_obj1;
void* right_value43;
struct sClass* __dec_obj27;
void* right_value44;
char* __dec_obj28;
memset(&right_value0, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
    __dec_obj1=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(name))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    __dec_obj27=self->klass;
    self->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value43=sClass_clone(klass))));
    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
    if(right_value43) { come_call_finalizer(sClass_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
    self->sline=info->sline;
    __dec_obj28=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value44=__builtin_string(info->sname))));
    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
    if(right_value44) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0); }
    struct sInterfaceNode* __result29__ = self;
    if(self) { come_call_finalizer(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(klass) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1); }
    return __result29__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* right_value1;
struct sClass* result_0;
void* right_value2;
char* __dec_obj2;
void* right_value42;
struct list$1tuple2$2charphsTypephph* __dec_obj26;
memset(&right_value1, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value2, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sClass* __result7__ = (void*)0;
            return __result7__;
        }
        result_0=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value1=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1)))));
        if(right_value1) { come_call_finalizer(sClass_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)) {
            result_0->mStruct=self->mStruct;
        }
        if(self!=((void*)0)) {
            result_0->mFloat=self->mFloat;
        }
        if(self!=((void*)0)) {
            result_0->mUnion=self->mUnion;
        }
        if(self!=((void*)0)) {
            result_0->mGenerics=self->mGenerics;
        }
        if(self!=((void*)0)) {
            result_0->mMethodGenerics=self->mMethodGenerics;
        }
        if(self!=((void*)0)) {
            result_0->mEnum=self->mEnum;
        }
        if(self!=((void*)0)) {
            result_0->mProtocol=self->mProtocol;
        }
        if(self!=((void*)0)) {
            result_0->mNumber=self->mNumber;
        }
        if(self!=((void*)0)&&self->mName!=((void*)0)) {
            __dec_obj2=result_0->mName;
            result_0->mName=(char*)come_increment_ref_count(((char*)(right_value2=string_clone(self->mName))));
            if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
            if(right_value2) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_0->mGenericsNum=self->mGenericsNum;
        }
        if(self!=((void*)0)) {
            result_0->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        if(self!=((void*)0)&&self->mFields!=((void*)0)) {
            __dec_obj26=result_0->mFields;
            result_0->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value42=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
            if(right_value42) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_0->mOutputed=self->mOutputed;
        }
        struct sClass* __result28__ = result_0;
        if(result_0) { come_call_finalizer(sClass_finalize,result_0, (void*)0, (void*)0, 0, 0, 1); }
        return __result28__;
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
struct list_item$1tuple2$2charphsTypephph* it_1;
struct list_item$1tuple2$2charphsTypephph* prev_it_8;
memset(&it_1, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&prev_it_8, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
                    it_1=self->head;
                    while(it_1!=((void*)0)) {
                        if(1) {
                            if(it_1->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,it_1->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        prev_it_8=it_1;
                        it_1=it_1->next;
                        come_free_object(prev_it_8);
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

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* right_value3;
void* right_value4;
struct list$1tuple2$2charphsTypephph* result_9;
struct list_item$1tuple2$2charphsTypephph* it_10;
void* right_value41;
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct list$1tuple2$2charphsTypephph*)); /* ddd */
memset(&it_10, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value41, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1tuple2$2charphsTypephph* __result8__ = ((void*)0);
                    return __result8__;
                }
                result_9=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value4=list$1tuple2$2charphsTypephphp_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value3=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1)))))))));
                if(right_value4) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
                it_10=self->head;
                while(it_10!=((void*)0)) {
                    list$1tuple2$2charphsTypephphp_push_back2(result_9,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value41=tuple2$2charphsTypephp_clone(it_10->item)))));
                    if(right_value41) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0); }
                    it_10=it_10->next;
                }
                struct list$1tuple2$2charphsTypephph* __result27__ = result_9;
                if(result_9) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1); }
                return __result27__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_initialize(struct list$1tuple2$2charphsTypephph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1tuple2$2charphsTypephph* __result9__ = self;
                    if(self) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result9__;
}

static void list$1tuple2$2charphsTypephphp_push_back2(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* right_value5;
struct list_item$1tuple2$2charphsTypephph* litem_11;
struct tuple2$2charphsTypeph* __dec_obj3;
void* right_value6;
struct list_item$1tuple2$2charphsTypephph* litem_12;
struct tuple2$2charphsTypeph* __dec_obj4;
void* right_value7;
struct list_item$1tuple2$2charphsTypephph* litem_13;
struct tuple2$2charphsTypeph* __dec_obj5;
memset(&right_value5, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value6, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value7, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
                        if(self->len==0) {
                            litem_11=((struct list_item$1tuple2$2charphsTypephph*)(right_value5=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                            litem_11->prev=((void*)0);
                            litem_11->next=((void*)0);
                            __dec_obj3=litem_11->item;
                            litem_11->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_11;
                            self->head=litem_11;
                        }
                        else if(self->len==1) {
                            litem_12=((struct list_item$1tuple2$2charphsTypephph*)(right_value6=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                            litem_12->prev=self->head;
                            litem_12->next=((void*)0);
                            __dec_obj4=litem_12->item;
                            litem_12->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_12;
                            self->head->next=litem_12;
                        }
                        else {
                            litem_13=((struct list_item$1tuple2$2charphsTypephph*)(right_value7=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                            litem_13->prev=self->tail;
                            litem_13->next=((void*)0);
                            __dec_obj5=litem_13->item;
                            litem_13->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
                            self->tail->next=litem_13;
                            self->tail=litem_13;
                        }
                        self->len++;
                        if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* right_value8;
struct tuple2$2charphsTypeph* result_14;
void* right_value9;
char* __dec_obj6;
void* right_value40;
struct sType* __dec_obj25;
memset(&right_value8, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&right_value9, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct tuple2$2charphsTypeph* __result10__ = (void*)0;
                            return __result10__;
                        }
                        result_14=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value8=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1)))));
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            __dec_obj6=result_14->v1;
                            result_14->v1=(char*)come_increment_ref_count(((char*)(right_value9=string_clone(self->v1))));
                            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                            if(right_value9) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->v2!=((void*)0)) {
                            __dec_obj25=result_14->v2;
                            result_14->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value40=sType_clone(self->v2))));
                            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
                            if(right_value40) { come_call_finalizer(sType_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        struct tuple2$2charphsTypeph* __result26__ = result_14;
                        return __result26__;
}

static struct sType* sType_clone(struct sType* self){
void* right_value10;
struct sType* result_15;
void* right_value13;
struct tuple1$1sTypeph* __dec_obj8;
void* right_value14;
char* __dec_obj9;
void* right_value21;
struct list$1sTypeph* __dec_obj13;
void* right_value29;
struct list$1sNodeph* __dec_obj17;
void* right_value30;
struct list$1sTypeph* __dec_obj18;
void* right_value37;
struct list$1charph* __dec_obj22;
void* right_value38;
struct tuple1$1sTypeph* __dec_obj23;
void* right_value39;
char* __dec_obj24;
memset(&right_value10, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
                                if(self==(void*)0) {
                                    struct sType* __result11__ = (void*)0;
                                    return __result11__;
                                }
                                result_15=(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
                                if(self!=((void*)0)) {
                                    result_15->mClass=self->mClass;
                                }
                                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                                    __dec_obj8=result_15->mNoSolvedGenericsType;
                                    result_15->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
                                    if(right_value13) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
                                }
                                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                                    __dec_obj9=result_15->mGenericsName;
                                    result_15->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value14=string_clone(self->mGenericsName))));
                                    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0); }
                                    if(right_value14) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0); }
                                }
                                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                                    __dec_obj13=result_15->mGenericsTypes;
                                    result_15->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypephp_clone(self->mGenericsTypes))));
                                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
                                    if(right_value21) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0); }
                                }
                                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                                    __dec_obj17=result_15->mArrayNum;
                                    result_15->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value29=list$1sNodephp_clone(self->mArrayNum))));
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
                                    if(right_value29) { come_call_finalizer(list$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0); }
                                }
                                if(self!=((void*)0)) {
                                    result_15->mOmitArrayNum=self->mOmitArrayNum;
                                }
                                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                    __dec_obj18=result_15->mParamTypes;
                                    result_15->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value30=list$1sTypephp_clone(self->mParamTypes))));
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
                                    if(right_value30) { come_call_finalizer(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
                                }
                                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                    __dec_obj22=result_15->mParamNames;
                                    result_15->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value37=list$1charphp_clone(self->mParamNames))));
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
                                    if(right_value37) { come_call_finalizer(list$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0); }
                                }
                                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                    __dec_obj23=result_15->mResultType;
                                    result_15->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value38=tuple1$1sTypephp_clone(self->mResultType))));
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
                                    if(right_value38) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
                                }
                                if(self!=((void*)0)) {
                                    result_15->mVarArgs=self->mVarArgs;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mUnsigned=self->mUnsigned;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mShort=self->mShort;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mLong=self->mLong;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mLongLong=self->mLongLong;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mConstant=self->mConstant;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mRegister=self->mRegister;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mVolatile=self->mVolatile;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mStatic=self->mStatic;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mExtern=self->mExtern;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mRestrict=self->mRestrict;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mImmutable=self->mImmutable;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mHeap=self->mHeap;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mDummyHeap=self->mDummyHeap;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mNoHeap=self->mNoHeap;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mNoCallingDestructor=self->mNoCallingDestructor;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mRefference=self->mRefference;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mException=self->mException;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mPointerNum=self->mPointerNum;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mSizeNum=self->mSizeNum;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mDynamicArrayNum=self->mDynamicArrayNum;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mTypeOfExpression=self->mTypeOfExpression;
                                }
                                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                                    __dec_obj24=result_15->mOriginalTypeName;
                                    result_15->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value39=string_clone(self->mOriginalTypeName))));
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
                                    if(right_value39) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0); }
                                }
                                if(self!=((void*)0)) {
                                    result_15->mOriginalPointerNum=self->mOriginalPointerNum;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mFunctionParam=self->mFunctionParam;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mAllocaValue=self->mAllocaValue;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mGenericsStruct=self->mGenericsStruct;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mSolvedGenericsName=self->mSolvedGenericsName;
                                }
                                if(self!=((void*)0)) {
                                    result_15->mInline=self->mInline;
                                }
                                struct sType* __result25__ = result_15;
                                return __result25__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value11;
struct tuple1$1sTypeph* result_16;
void* right_value12;
struct sType* __dec_obj7;
memset(&right_value11, 0, sizeof(void*));
memset(&result_16, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value12, 0, sizeof(void*));
                                        if(self==(void*)0) {
                                            struct tuple1$1sTypeph* __result12__ = (void*)0;
                                            return __result12__;
                                        }
                                        result_16=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                            __dec_obj7=result_16->v1;
                                            result_16->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(self->v1))));
                                            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
                                            if(right_value12) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0); }
                                        }
                                        struct tuple1$1sTypeph* __result13__ = result_16;
                                        return __result13__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value15;
void* right_value16;
struct list$1sTypeph* result_17;
struct list_item$1sTypeph* it_18;
void* right_value20;
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_18, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value20, 0, sizeof(void*));
                                        if(self==((void*)0)) {
                                            struct list$1sTypeph* __result14__ = ((void*)0);
                                            return __result14__;
                                        }
                                        result_17=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value15=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                                        if(right_value16) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
                                        it_18=self->head;
                                        while(it_18!=((void*)0)) {
                                            list$1sTypephp_push_back2(result_17,(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=sType_clone(it_18->item)))));
                                            if(right_value20) { come_call_finalizer(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0); }
                                            it_18=it_18->next;
                                        }
                                        struct list$1sTypeph* __result16__ = result_17;
                                        if(result_17) { come_call_finalizer(list$1sTypephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 1); }
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
void* right_value17;
struct list_item$1sTypeph* litem_19;
struct sType* __dec_obj10;
void* right_value18;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj11;
void* right_value19;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj12;
memset(&right_value17, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value19, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                                                if(self->len==0) {
                                                    litem_19=((struct list_item$1sTypeph*)(right_value17=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                                    litem_19->prev=((void*)0);
                                                    litem_19->next=((void*)0);
                                                    __dec_obj10=litem_19->item;
                                                    litem_19->item=(struct sType*)come_increment_ref_count(item);
                                                    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0); }
                                                    self->tail=litem_19;
                                                    self->head=litem_19;
                                                }
                                                else if(self->len==1) {
                                                    litem_20=((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                                    litem_20->prev=self->head;
                                                    litem_20->next=((void*)0);
                                                    __dec_obj11=litem_20->item;
                                                    litem_20->item=(struct sType*)come_increment_ref_count(item);
                                                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0); }
                                                    self->tail=litem_20;
                                                    self->head->next=litem_20;
                                                }
                                                else {
                                                    litem_21=((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                                    litem_21->prev=self->tail;
                                                    litem_21->next=((void*)0);
                                                    __dec_obj12=litem_21->item;
                                                    litem_21->item=(struct sType*)come_increment_ref_count(item);
                                                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0); }
                                                    self->tail->next=litem_21;
                                                    self->tail=litem_21;
                                                }
                                                self->len++;
                                                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value22;
void* right_value23;
struct list$1sNodeph* result_22;
struct list_item$1sNodeph* it_23;
void* right_value28;
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&result_22, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_23, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value28, 0, sizeof(void*));
                                        if(self==((void*)0)) {
                                            struct list$1sNodeph* __result17__ = ((void*)0);
                                            return __result17__;
                                        }
                                        result_22=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value22=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                                        if(right_value23) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0); }
                                        it_23=self->head;
                                        while(it_23!=((void*)0)) {
                                            list$1sNodephp_push_back2(result_22,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=sNodep_clone(it_23->item)))));
                                            if(right_value28) { right_value28 = come_decrement_ref_count(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0); } 
                                            it_23=it_23->next;
                                        }
                                        struct list$1sNodeph* __result21__ = result_22;
                                        if(result_22) { come_call_finalizer(list$1sNodephp_finalize,result_22, (void*)0, (void*)0, 0, 0, 1); }
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
void* right_value24;
struct list_item$1sNodeph* litem_24;
struct sNode* __dec_obj14;
void* right_value25;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj15;
void* right_value26;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj16;
memset(&right_value24, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value25, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value26, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                                                if(self->len==0) {
                                                    litem_24=((struct list_item$1sNodeph*)(right_value24=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                                    litem_24->prev=((void*)0);
                                                    litem_24->next=((void*)0);
                                                    __dec_obj14=litem_24->item;
                                                    litem_24->item=(struct sNode*)come_increment_ref_count(item);
                                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0); }
                                                    self->tail=litem_24;
                                                    self->head=litem_24;
                                                }
                                                else if(self->len==1) {
                                                    litem_25=((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                                    litem_25->prev=self->head;
                                                    litem_25->next=((void*)0);
                                                    __dec_obj15=litem_25->item;
                                                    litem_25->item=(struct sNode*)come_increment_ref_count(item);
                                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0); }
                                                    self->tail=litem_25;
                                                    self->head->next=litem_25;
                                                }
                                                else {
                                                    litem_26=((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                                    litem_26->prev=self->tail;
                                                    litem_26->next=((void*)0);
                                                    __dec_obj16=litem_26->item;
                                                    litem_26->item=(struct sNode*)come_increment_ref_count(item);
                                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0); }
                                                    self->tail->next=litem_26;
                                                    self->tail=litem_26;
                                                }
                                                self->len++;
                                                if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value27;
struct sNode* result_27;
memset(&right_value27, 0, sizeof(void*));
memset(&result_27, 0, sizeof(struct sNode*)); /* ddd */
                                                if(self==(void*)0) {
                                                    struct sNode* __result19__ = (void*)0;
                                                    return __result19__;
                                                }
                                                result_27=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
                                                if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                                    result_27->_protocol_obj=self->clone(self->_protocol_obj);
                                                }
                                                if(self!=((void*)0)) {
                                                    result_27->finalize=self->finalize;
                                                }
                                                if(self!=((void*)0)) {
                                                    result_27->clone=self->clone;
                                                }
                                                if(self!=((void*)0)) {
                                                    result_27->compile=self->compile;
                                                }
                                                if(self!=((void*)0)) {
                                                    result_27->sline=self->sline;
                                                }
                                                if(self!=((void*)0)) {
                                                    result_27->sname=self->sname;
                                                }
                                                if(self!=((void*)0)) {
                                                    result_27->terminated=self->terminated;
                                                }
                                                struct sNode* __result20__ = result_27;
                                                return __result20__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value31;
void* right_value32;
struct list$1charph* result_28;
struct list_item$1charph* it_29;
void* right_value36;
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&result_28, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_29, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
                                        if(self==((void*)0)) {
                                            struct list$1charph* __result22__ = ((void*)0);
                                            return __result22__;
                                        }
                                        result_28=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value31=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                                        if(right_value32) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0); }
                                        it_29=self->head;
                                        while(it_29!=((void*)0)) {
                                            list$1charphp_push_back2(result_28,(char*)come_increment_ref_count(((char*)(right_value36=string_clone(it_29->item)))));
                                            if(right_value36) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0); }
                                            it_29=it_29->next;
                                        }
                                        struct list$1charph* __result24__ = result_28;
                                        if(result_28) { come_call_finalizer(list$1charphp_finalize,result_28, (void*)0, (void*)0, 0, 0, 1); }
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
void* right_value33;
struct list_item$1charph* litem_30;
char* __dec_obj19;
void* right_value34;
struct list_item$1charph* litem_31;
char* __dec_obj20;
void* right_value35;
struct list_item$1charph* litem_32;
char* __dec_obj21;
memset(&right_value33, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value34, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value35, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1charph*)); /* ddd */
                                                if(self->len==0) {
                                                    litem_30=((struct list_item$1charph*)(right_value33=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                                    litem_30->prev=((void*)0);
                                                    litem_30->next=((void*)0);
                                                    __dec_obj19=litem_30->item;
                                                    litem_30->item=(char*)come_increment_ref_count(item);
                                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
                                                    self->tail=litem_30;
                                                    self->head=litem_30;
                                                }
                                                else if(self->len==1) {
                                                    litem_31=((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                                    litem_31->prev=self->head;
                                                    litem_31->next=((void*)0);
                                                    __dec_obj20=litem_31->item;
                                                    litem_31->item=(char*)come_increment_ref_count(item);
                                                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
                                                    self->tail=litem_31;
                                                    self->head->next=litem_31;
                                                }
                                                else {
                                                    litem_32=((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                                    litem_32->prev=self->tail;
                                                    litem_32->next=((void*)0);
                                                    __dec_obj21=litem_32->item;
                                                    litem_32->item=(char*)come_increment_ref_count(item);
                                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                                                    self->tail->next=litem_32;
                                                    self->tail=litem_32;
                                                }
                                                self->len++;
                                                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static void sInterfaceNode_finalize(struct sInterfaceNode* self){
            if(self!=((void*)0)&&self->name!=((void*)0)) {
                if(self->name) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->klass!=((void*)0)) {
                if(self->klass) { come_call_finalizer(sClass_finalize,self->klass, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info){
    int __result30__ = self->sline;
    return __result30__;
}

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info){
void* right_value45;
memset(&right_value45, 0, sizeof(void*));
    char* __result31__ = ((char*)(right_value45=__builtin_string(self->sname)));
    return __result31__;
}

_Bool sInterfaceNode_terminated(){
    _Bool __result32__ = (_Bool)0;
    return __result32__;
}

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info){
void* right_value46;
char* name_33;
struct sClass* klass_34;
void* right_value47;
void* right_value48;
struct buffer* buf_35;
void* right_value49;
struct tuple2$2charphsTypeph* it_37;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_39;
struct sType* type_40;
void* right_value50;
void* right_value51;
void* right_value58;
void* right_value59;
memset(&right_value46, 0, sizeof(void*));
memset(&name_33, 0, sizeof(char*)); /* ddd */
memset(&klass_34, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&buf_35, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value49, 0, sizeof(void*));
memset(&it_37, 0, sizeof(struct tuple2$2charphsTypeph*)); /* ddd */
memset(&name_39, 0, sizeof(char*)); /* ccc */
memset(&type_40, 0, sizeof(struct sType*)); /* ccc */
memset(&name_39, 0, sizeof(char*)); /* eee */
memset(&type_40, 0, sizeof(struct sType*)); /* eee */
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
    name_33=(char*)come_increment_ref_count(((char*)(right_value46=__builtin_string(self->name))));
    if(right_value46) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0); }
    klass_34=self->klass;
    klass_34->mProtocol=(_Bool)1;
    buf_35=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value48=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value47=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value47) { come_call_finalizer(buffer_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value48) { come_call_finalizer(buffer_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(buf_35,((char*)(right_value49=xsprintf("struct %s\n{\n",klass_34->mName))));
    if(right_value49) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0); }
    for(
    it_37=list$1tuple2$2charphsTypephphp_begin((klass_34->mFields));
    !list$1tuple2$2charphsTypephphp_end((klass_34->mFields));
    it_37=list$1tuple2$2charphsTypephphp_next((klass_34->mFields))
    ){
        multiple_assgin_var1=it_37;
        name_39=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        type_40=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        buffer_append_str(buf_35,"    ");
        buffer_append_str(buf_35,((char*)(right_value50=make_define_var(type_40,name_39,info,(_Bool)0))));
        if(right_value50) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0); }
        buffer_append_str(buf_35,";\n");
        if(name_39) { name_39 = come_decrement_ref_count(name_39, (void*)0, (void*)0, 0, 0); }
        if(type_40) { come_call_finalizer(sType_finalize,type_40, (void*)0, (void*)0, 0, 0, 0); }
    }
    buffer_append_str(buf_35,"};\n");
    add_come_code_at_source_head(info,"%s",((char*)(right_value51=buffer_to_string(buf_35))));
    if(right_value51) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value58=__builtin_string(name_33)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value59=sClass_clone(klass_34)))));
    if(right_value58) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0); }
    if(right_value59) { come_call_finalizer(sClass_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
    _Bool __result52__ = (_Bool)1;
    if(name_33) { name_33 = come_decrement_ref_count(name_33, (void*)0, (void*)0, 0, 0); }
    if(buf_35) { come_call_finalizer(buffer_finalize,buf_35, (void*)0, (void*)0, 0, 0, 0); }
    return __result52__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_36;
memset(&result_36, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct tuple2$2charphsTypeph* __result33__ = self->it->item;
            return __result33__;
        }
        memset(&result_36,0,sizeof(struct tuple2$2charphsTypeph*));
        struct tuple2$2charphsTypeph* __result34__ = result_36;
        return __result34__;
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
        _Bool __result35__ = self->it==((void*)0);
        return __result35__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* result_38;
memset(&result_38, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct tuple2$2charphsTypeph* __result36__ = self->it->item;
            return __result36__;
        }
        memset(&result_38,0,sizeof(struct tuple2$2charphsTypeph*));
        struct tuple2$2charphsTypeph* __result37__ = result_38;
        return __result37__;
}

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
int hash_56;
int it_57;
_Bool same_key_exist_74;
char* it2_76;
memset(&hash_56, 0, sizeof(int)); /* ddd */
memset(&it_57, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_74, 0, sizeof(_Bool)); /* ddd */
memset(&it2_76, 0, sizeof(char*)); /* ddd */
        if(self->len*2>=self->size) {
            map$2charphsClassphp_rehash(self);
        }
        hash_56=string_get_hash_key(key)%self->size;
        it_57=hash_56;
        while((_Bool)1) {
            if(self->item_existance[it_57]) {
                if(charp_equals(self->keys[it_57],key)) {
                    if(1) {
                        list$1charpp_remove(self->key_list,self->keys[it_57]);
                        if(self->keys[it_57]) { self->keys[it_57] = come_decrement_ref_count(self->keys[it_57], (void*)0, (void*)0, 0, 0); }
                        self->keys[it_57]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charpp_remove(self->key_list,self->keys[it_57]);
                        self->keys[it_57]=key;
                    }
                    if(1) {
                        if(self->items[it_57]) { come_call_finalizer(sClassp_finalize,self->items[it_57], (void*)0, (void*)0, 0, 0, 0); }
                        self->items[it_57]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_57]=item;
                    }
                    break;
                }
                it_57++;
                if(it_57>=self->size) {
                    it_57=0;
                }
                else if(it_57==hash_56) {
                    fprintf(stderr,"unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_57]=(_Bool)1;
                if(1) {
                    self->keys[it_57]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_57]=key;
                }
                if(1) {
                    self->items[it_57]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_57]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_74=(_Bool)0;
        for(
        it2_76=list$1charpp_begin(self->key_list);
        !list$1charpp_end(self->key_list);
        it_57=list$1charpp_next(self->key_list)
        ){
            if(charp_equals(it2_76,key)) {
                same_key_exist_74=(_Bool)1;
            }
        }
        if(!same_key_exist_74) {
            list$1charpp_push_back(self->key_list,key);
        }
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
        if(item) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_41;
void* right_value52;
char** keys_42;
void* right_value53;
struct sClass** items_43;
void* right_value54;
_Bool* item_existance_44;
int len_45;
char* it_47;
struct sClass* default_value_49;
struct sClass* it2_52;
int hash_53;
int n_54;
struct sClass* default_value_55;
memset(&size_41, 0, sizeof(int)); /* ddd */
memset(&right_value52, 0, sizeof(void*));
memset(&keys_42, 0, sizeof(char**)); /* ddd */
memset(&right_value53, 0, sizeof(void*));
memset(&items_43, 0, sizeof(struct sClass**)); /* ddd */
memset(&right_value54, 0, sizeof(void*));
memset(&item_existance_44, 0, sizeof(_Bool*)); /* ddd */
memset(&len_45, 0, sizeof(int)); /* ddd */
memset(&it_47, 0, sizeof(char*)); /* ddd */
memset(&default_value_49, 0, sizeof(struct sClass*)); /* bbb */
memset(&it2_52, 0, sizeof(struct sClass*)); /* ddd */
memset(&hash_53, 0, sizeof(int)); /* ddd */
memset(&n_54, 0, sizeof(int)); /* ddd */
memset(&default_value_55, 0, sizeof(struct sClass*)); /* bbb */
                size_41=self->size*3;
                keys_42=((char**)(right_value52=(char**)come_calloc(1, sizeof(char*)*(1*(size_41)))));
                items_43=((struct sClass**)(right_value53=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_41)))));
                item_existance_44=((_Bool*)(right_value54=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_41)))));
                len_45=0;
                for(
                it_47=map$2charphsClassphp_begin(self);
                !map$2charphsClassphp_end(self);
                it_47=map$2charphsClassphp_next(self)
                ){
                    it2_52=map$2charphsClassphp_at(self,it_47,default_value_49);
                    hash_53=charp_get_hash_key(it_47)%size_41;
                    n_54=hash_53;
                    while((_Bool)1) {
                        if(item_existance_44[n_54]) {
                            n_54++;
                            if(n_54>=size_41) {
                                n_54=0;
                            }
                            else if(n_54==hash_53) {
                                fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_44[n_54]=(_Bool)1;
                            keys_42[n_54]=it_47;
                            items_43[n_54]=map$2charphsClassphp_at(self,it_47,default_value_55);
                            len_45++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_42;
                self->items=items_43;
                self->item_existance=item_existance_44;
                self->size=size_41;
                self->len=len_45;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
char* result_46;
memset(&result_46, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result38__ = self->key_list->it->item;
                        return __result38__;
                    }
                    memset(&result_46,0,sizeof(char*));
                    char* __result39__ = result_46;
                    return __result39__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
                    _Bool __result40__ = self->key_list->it==((void*)0);
                    return __result40__;
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
char* result_48;
memset(&result_48, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result41__ = self->key_list->it->item;
                        return __result41__;
                    }
                    memset(&result_48,0,sizeof(char*));
                    char* __result42__ = result_48;
                    return __result42__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_50;
int it_51;
memset(&hash_50, 0, sizeof(int)); /* ddd */
memset(&it_51, 0, sizeof(int)); /* ddd */
                        hash_50=string_get_hash_key(((char*)key))%self->size;
                        it_51=hash_50;
                        while((_Bool)1) {
                            if(self->item_existance[it_51]) {
                                if(charp_equals(self->keys[it_51],key)) {
                                    struct sClass* __result43__ = self->items[it_51];
                                    return __result43__;
                                }
                                it_51++;
                                if(it_51>=self->size) {
                                    it_51=0;
                                }
                                else if(it_51==hash_50) {
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
int it2_58;
struct list_item$1charp* it_59;
memset(&it2_58, 0, sizeof(int)); /* ddd */
memset(&it_59, 0, sizeof(struct list_item$1charp*)); /* ddd */
                            it2_58=0;
                            it_59=self->head;
                            while(it_59!=((void*)0)) {
                                if(charp_equals(it_59->item,item)) {
                                    list$1charpp_delete(self,it2_58,it2_58+1);
                                    break;
                                }
                                it2_58++;
                                it_59=it_59->next;
                            }
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_60;
struct list_item$1charp* it_63;
int i_64;
struct list_item$1charp* prev_it_65;
struct list_item$1charp* it_66;
int i_67;
struct list_item$1charp* prev_it_68;
struct list_item$1charp* it_69;
struct list_item$1charp* head_prev_it_70;
struct list_item$1charp* tail_it_71;
int i_72;
struct list_item$1charp* prev_it_73;
memset(&tmp_60, 0, sizeof(int)); /* ddd */
memset(&it_63, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_64, 0, sizeof(int)); /* ddd */
memset(&prev_it_65, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_66, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_67, 0, sizeof(int)); /* ddd */
memset(&prev_it_68, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_69, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_70, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_71, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_72, 0, sizeof(int)); /* ddd */
memset(&prev_it_73, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                        if(head<0) {
                                            head+=self->len;
                                        }
                                        if(tail<0) {
                                            tail+=self->len+1;
                                        }
                                        if(head>tail) {
                                            tmp_60=tail;
                                            tail=head;
                                            head=tmp_60;
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
                                            it_63=self->head;
                                            i_64=0;
                                            while(it_63!=((void*)0)) {
                                                if(i_64<tail) {
                                                    prev_it_65=it_63;
                                                    it_63=it_63->next;
                                                    i_64++;
                                                    if(prev_it_65) { come_call_finalizer(list_item$1charpp_finalize,prev_it_65, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else if(i_64==tail) {
                                                    self->head=it_63;
                                                    self->head->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_63=it_63->next;
                                                    i_64++;
                                                }
                                            }
                                        }
                                        else if(tail==self->len) {
                                            it_66=self->head;
                                            i_67=0;
                                            while(it_66!=((void*)0)) {
                                                if(i_67==head) {
                                                    self->tail=it_66->prev;
                                                    self->tail->next=((void*)0);
                                                }
                                                if(i_67>=head) {
                                                    prev_it_68=it_66;
                                                    it_66=it_66->next;
                                                    i_67++;
                                                    if(prev_it_68) { come_call_finalizer(list_item$1charpp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_66=it_66->next;
                                                    i_67++;
                                                }
                                            }
                                        }
                                        else {
                                            it_69=self->head;
                                            head_prev_it_70=((void*)0);
                                            tail_it_71=((void*)0);
                                            i_72=0;
                                            while(it_69!=((void*)0)) {
                                                if(i_72==head) {
                                                    head_prev_it_70=it_69->prev;
                                                }
                                                if(i_72==tail) {
                                                    tail_it_71=it_69;
                                                }
                                                if(i_72>=head&&i_72<tail) {
                                                    prev_it_73=it_69;
                                                    it_69=it_69->next;
                                                    i_72++;
                                                    if(prev_it_73) { come_call_finalizer(list_item$1charpp_finalize,prev_it_73, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_69=it_69->next;
                                                    i_72++;
                                                }
                                            }
                                            if(head_prev_it_70!=((void*)0)) {
                                                head_prev_it_70->next=tail_it_71;
                                            }
                                            if(tail_it_71!=((void*)0)) {
                                                tail_it_71->prev=head_prev_it_70;
                                            }
                                        }
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_61;
struct list_item$1charp* prev_it_62;
memset(&it_61, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_62, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                it_61=self->head;
                                                while(it_61!=((void*)0)) {
                                                    prev_it_62=it_61;
                                                    it_61=it_61->next;
                                                    if(prev_it_62) { come_call_finalizer(list_item$1charpp_finalize,prev_it_62, (void*)0, (void*)0, 0, 0, 0); }
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
char* result_75;
memset(&result_75, 0, sizeof(char*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                char* __result47__ = self->it->item;
                return __result47__;
            }
            memset(&result_75,0,sizeof(char*));
            char* __result48__ = result_75;
            return __result48__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
            _Bool __result49__ = self->it==((void*)0);
            return __result49__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_77;
memset(&result_77, 0, sizeof(char*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                char* __result50__ = self->it->item;
                return __result50__;
            }
            memset(&result_77,0,sizeof(char*));
            char* __result51__ = result_77;
            return __result51__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value55;
struct list_item$1charp* litem_78;
void* right_value56;
struct list_item$1charp* litem_79;
void* right_value57;
struct list_item$1charp* litem_80;
memset(&right_value55, 0, sizeof(void*));
memset(&litem_78, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value56, 0, sizeof(void*));
memset(&litem_79, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value57, 0, sizeof(void*));
memset(&litem_80, 0, sizeof(struct list_item$1charp*)); /* ddd */
                if(self->len==0) {
                    litem_78=((struct list_item$1charp*)(right_value55=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_78->prev=((void*)0);
                    litem_78->next=((void*)0);
                    litem_78->item=item;
                    self->tail=litem_78;
                    self->head=litem_78;
                }
                else if(self->len==1) {
                    litem_79=((struct list_item$1charp*)(right_value56=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_79->prev=self->head;
                    litem_79->next=((void*)0);
                    litem_79->item=item;
                    self->tail=litem_79;
                    self->head->next=litem_79;
                }
                else {
                    litem_80=((struct list_item$1charp*)(right_value57=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_80->prev=self->tail;
                    litem_80->next=((void*)0);
                    litem_80->item=item;
                    self->tail->next=litem_80;
                    self->tail=litem_80;
                }
                self->len++;
}

struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info){
void* right_value60;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* result_type_81;
char* var_name_82;
_Bool err_83;
void* right_value61;
char* fun_name_84;
void* right_value62;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_85;
struct list$1charph* param_names_86;
struct list$1charph* param_default_parametors_87;
_Bool var_args_88;
void* right_value69;
void* right_value70;
void* right_value77;
void* right_value78;
void* right_value79;
struct sType* type_105;
void* right_value80;
struct list$1sTypeph* __dec_obj41;
void* right_value81;
struct list$1charph* __dec_obj42;
void* right_value82;
void* right_value83;
void* right_value84;
struct tuple1$1sTypeph* __dec_obj44;
void* right_value85;
void* right_value86;
memset(&right_value60, 0, sizeof(void*));
memset(&result_type_81, 0, sizeof(struct sType*)); /* ccc */
memset(&var_name_82, 0, sizeof(char*)); /* ccc */
memset(&err_83, 0, sizeof(_Bool)); /* ccc */
memset(&result_type_81, 0, sizeof(struct sType*)); /* eee */
memset(&var_name_82, 0, sizeof(char*)); /* eee */
memset(&err_83, 0, sizeof(_Bool)); /* eee */
memset(&right_value61, 0, sizeof(void*));
memset(&fun_name_84, 0, sizeof(char*)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&param_types_85, 0, sizeof(struct list$1sTypeph*)); /* ccc */
memset(&param_names_86, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&param_default_parametors_87, 0, sizeof(struct list$1charph*)); /* ccc */
memset(&var_args_88, 0, sizeof(_Bool)); /* ccc */
memset(&param_types_85, 0, sizeof(struct list$1sTypeph*)); /* eee */
memset(&param_names_86, 0, sizeof(struct list$1charph*)); /* eee */
memset(&param_default_parametors_87, 0, sizeof(struct list$1charph*)); /* eee */
memset(&var_args_88, 0, sizeof(_Bool)); /* eee */
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&type_105, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
    multiple_assgin_var2=((struct tuple3$3sTypephcharphbool*)(right_value60=parse_type(info,(_Bool)0,(_Bool)1)));
    result_type_81=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
    var_name_82=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
    err_83=multiple_assgin_var2->v3;
    if(right_value60) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
    if(!err_83) {
        exit(2);
    }
    fun_name_84=(char*)come_increment_ref_count(((char*)(right_value61=parse_word(info))));
    if(right_value61) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0); }
    multiple_assgin_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value62=parse_params(info)));
    param_types_85=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
    param_names_86=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
    param_default_parametors_87=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
    var_args_88=multiple_assgin_var3->v4;
    if(right_value62) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0); }
    list$1sTypephp_insert(param_types_85,0,(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value69=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"void*",info,(_Bool)0)))));
    if(right_value69) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value70) { come_call_finalizer(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
    list$1charphp_insert(param_names_86,0,(char*)come_increment_ref_count(((char*)(right_value77=__builtin_string("self")))));
    if(right_value77) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0); }
    type_105=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value78=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"lambda",info,(_Bool)0))));
    if(right_value78) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value79) { come_call_finalizer(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj41=type_105->mParamTypes;
    type_105->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=list$1sTypephp_clone(param_types_85))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
    if(right_value80) { come_call_finalizer(list$1sTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj42=type_105->mParamNames;
    type_105->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=list$1charphp_clone(param_names_86))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
    if(right_value81) { come_call_finalizer(list$1charphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
    type_105->mVarArgs=var_args_88;
    __dec_obj44=type_105->mResultType;
    type_105->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value84=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value82=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1))))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(result_type_81))))))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
    if(right_value83) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value84) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0); }
    struct tuple2$2sTypephcharph* __result55__ = ((struct tuple2$2sTypephcharph*)(right_value86=tuple2$2sTypephcharphp_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value85=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1))))),(struct sType*)come_increment_ref_count(type_105),(char*)come_increment_ref_count(fun_name_84))));
    if(result_type_81) { come_call_finalizer(sType_finalize,result_type_81, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_82) { var_name_82 = come_decrement_ref_count(var_name_82, (void*)0, (void*)0, 0, 0); }
    if(fun_name_84) { fun_name_84 = come_decrement_ref_count(fun_name_84, (void*)0, (void*)0, 0, 0); }
    if(param_types_85) { come_call_finalizer(list$1sTypephp_finalize,param_types_85, (void*)0, (void*)0, 0, 0, 0); }
    if(param_names_86) { come_call_finalizer(list$1charphp_finalize,param_names_86, (void*)0, (void*)0, 0, 0, 0); }
    if(param_default_parametors_87) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_87, (void*)0, (void*)0, 0, 0, 0); }
    if(type_105) { come_call_finalizer(sType_finalize,type_105, (void*)0, (void*)0, 0, 0, 0); }
    return __result55__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->v2!=((void*)0)) {
            if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
        }
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

static void list$1sTypephp_insert(struct list$1sTypeph* self, int position, struct sType* item){
void* right_value66;
struct list_item$1sTypeph* litem_92;
struct sType* __dec_obj32;
void* right_value67;
struct list_item$1sTypeph* litem_93;
struct sType* __dec_obj33;
struct list_item$1sTypeph* it_94;
int i_95;
void* right_value68;
struct list_item$1sTypeph* litem_96;
struct sType* __dec_obj34;
memset(&right_value66, 0, sizeof(void*));
memset(&litem_92, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value67, 0, sizeof(void*));
memset(&litem_93, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&it_94, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&i_95, 0, sizeof(int)); /* ddd */
memset(&right_value68, 0, sizeof(void*));
memset(&litem_96, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$1sTypephp_push_back(self,(struct sType*)come_increment_ref_count(item));
            return;
        }
        if(position==0) {
            litem_92=((struct list_item$1sTypeph*)(right_value66=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
            litem_92->prev=((void*)0);
            litem_92->next=self->head;
            __dec_obj32=litem_92->item;
            litem_92->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
            self->head->prev=litem_92;
            self->head=litem_92;
            self->len++;
        }
        else if(self->len==1) {
            litem_93=((struct list_item$1sTypeph*)(right_value67=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
            litem_93->prev=self->head;
            litem_93->next=self->tail;
            __dec_obj33=litem_93->item;
            litem_93->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0); }
            self->tail->prev=litem_93;
            self->head->next=litem_93;
            self->len++;
        }
        else {
            it_94=self->head;
            i_95=0;
            while(it_94!=((void*)0)) {
                if(position==i_95) {
                    litem_96=((struct list_item$1sTypeph*)(right_value68=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_96->prev=it_94->prev;
                    litem_96->next=it_94;
                    __dec_obj34=litem_96->item;
                    litem_96->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
                    it_94->prev->next=litem_96;
                    it_94->prev=litem_96;
                    self->len++;
                }
                it_94=it_94->next;
                i_95++;
            }
        }
        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value63;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj29;
void* right_value64;
struct list_item$1sTypeph* litem_90;
struct sType* __dec_obj30;
void* right_value65;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj31;
memset(&right_value63, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value64, 0, sizeof(void*));
memset(&litem_90, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value65, 0, sizeof(void*));
memset(&litem_91, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                if(self->len==0) {
                    litem_89=((struct list_item$1sTypeph*)(right_value63=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_89->prev=((void*)0);
                    litem_89->next=((void*)0);
                    __dec_obj29=litem_89->item;
                    litem_89->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_89;
                    self->head=litem_89;
                }
                else if(self->len==1) {
                    litem_90=((struct list_item$1sTypeph*)(right_value64=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_90->prev=self->head;
                    litem_90->next=((void*)0);
                    __dec_obj30=litem_90->item;
                    litem_90->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_90;
                    self->head->next=litem_90;
                }
                else {
                    litem_91=((struct list_item$1sTypeph*)(right_value65=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_91->prev=self->tail;
                    litem_91->next=((void*)0);
                    __dec_obj31=litem_91->item;
                    litem_91->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_91;
                    self->tail=litem_91;
                }
                self->len++;
                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void list$1charphp_insert(struct list$1charph* self, int position, char* item){
void* right_value74;
struct list_item$1charph* litem_100;
char* __dec_obj38;
void* right_value75;
struct list_item$1charph* litem_101;
char* __dec_obj39;
struct list_item$1charph* it_102;
int i_103;
void* right_value76;
struct list_item$1charph* litem_104;
char* __dec_obj40;
memset(&right_value74, 0, sizeof(void*));
memset(&litem_100, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value75, 0, sizeof(void*));
memset(&litem_101, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&it_102, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_103, 0, sizeof(int)); /* ddd */
memset(&right_value76, 0, sizeof(void*));
memset(&litem_104, 0, sizeof(struct list_item$1charph*)); /* ddd */
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$1charphp_push_back(self,(char*)come_increment_ref_count(item));
            return;
        }
        if(position==0) {
            litem_100=((struct list_item$1charph*)(right_value74=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_100->prev=((void*)0);
            litem_100->next=self->head;
            __dec_obj38=litem_100->item;
            litem_100->item=(char*)come_increment_ref_count(item);
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
            self->head->prev=litem_100;
            self->head=litem_100;
            self->len++;
        }
        else if(self->len==1) {
            litem_101=((struct list_item$1charph*)(right_value75=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_101->prev=self->head;
            litem_101->next=self->tail;
            __dec_obj39=litem_101->item;
            litem_101->item=(char*)come_increment_ref_count(item);
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0); }
            self->tail->prev=litem_101;
            self->head->next=litem_101;
            self->len++;
        }
        else {
            it_102=self->head;
            i_103=0;
            while(it_102!=((void*)0)) {
                if(position==i_103) {
                    litem_104=((struct list_item$1charph*)(right_value76=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_104->prev=it_102->prev;
                    litem_104->next=it_102;
                    __dec_obj40=litem_104->item;
                    litem_104->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
                    it_102->prev->next=litem_104;
                    it_102->prev=litem_104;
                    self->len++;
                }
                it_102=it_102->next;
                i_103++;
            }
        }
        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value71;
struct list_item$1charph* litem_97;
char* __dec_obj35;
void* right_value72;
struct list_item$1charph* litem_98;
char* __dec_obj36;
void* right_value73;
struct list_item$1charph* litem_99;
char* __dec_obj37;
memset(&right_value71, 0, sizeof(void*));
memset(&litem_97, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value72, 0, sizeof(void*));
memset(&litem_98, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value73, 0, sizeof(void*));
memset(&litem_99, 0, sizeof(struct list_item$1charph*)); /* ddd */
                if(self->len==0) {
                    litem_97=((struct list_item$1charph*)(right_value71=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_97->prev=((void*)0);
                    litem_97->next=((void*)0);
                    __dec_obj35=litem_97->item;
                    litem_97->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_97;
                    self->head=litem_97;
                }
                else if(self->len==1) {
                    litem_98=((struct list_item$1charph*)(right_value72=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_98->prev=self->head;
                    litem_98->next=((void*)0);
                    __dec_obj36=litem_98->item;
                    litem_98->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_98;
                    self->head->next=litem_98;
                }
                else {
                    litem_99=((struct list_item$1charph*)(right_value73=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_99->prev=self->tail;
                    litem_99->next=((void*)0);
                    __dec_obj37=litem_99->item;
                    litem_99->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_99;
                    self->tail=litem_99;
                }
                self->len++;
                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
struct sType* __dec_obj43;
        __dec_obj43=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
        struct tuple1$1sTypeph* __result53__ = self;
        if(self) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1); }
        return __result53__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
struct sType* __dec_obj45;
char* __dec_obj46;
        __dec_obj45=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
        __dec_obj46=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
        struct tuple2$2sTypephcharph* __result54__ = self;
        if(self) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1); }
        if(v2) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1); }
        return __result54__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
            }
}

static struct sClass* sClassp_clone(struct sClass* self){
void* right_value90;
struct sClass* result_108;
void* right_value91;
char* __dec_obj48;
void* right_value92;
struct list$1tuple2$2charphsTypephph* __dec_obj49;
memset(&right_value90, 0, sizeof(void*));
memset(&result_108, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sClass* __result56__ = (void*)0;
                    return __result56__;
                }
                result_108=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value90=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1)))));
                if(right_value90) { come_call_finalizer(sClass_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_108->mStruct=self->mStruct;
                }
                if(self!=((void*)0)) {
                    result_108->mFloat=self->mFloat;
                }
                if(self!=((void*)0)) {
                    result_108->mUnion=self->mUnion;
                }
                if(self!=((void*)0)) {
                    result_108->mGenerics=self->mGenerics;
                }
                if(self!=((void*)0)) {
                    result_108->mMethodGenerics=self->mMethodGenerics;
                }
                if(self!=((void*)0)) {
                    result_108->mEnum=self->mEnum;
                }
                if(self!=((void*)0)) {
                    result_108->mProtocol=self->mProtocol;
                }
                if(self!=((void*)0)) {
                    result_108->mNumber=self->mNumber;
                }
                if(self!=((void*)0)&&self->mName!=((void*)0)) {
                    __dec_obj48=result_108->mName;
                    result_108->mName=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->mName))));
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
                    if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_108->mGenericsNum=self->mGenericsNum;
                }
                if(self!=((void*)0)) {
                    result_108->mMethodGenericsNum=self->mMethodGenericsNum;
                }
                if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                    __dec_obj49=result_108->mFields;
                    result_108->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value92=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
                    if(right_value92) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_108->mOutputed=self->mOutputed;
                }
                struct sClass* __result57__ = result_108;
                if(result_108) { come_call_finalizer(sClass_finalize,result_108, (void*)0, (void*)0, 0, 0, 1); }
                return __result57__;
}

static void list$1tuple2$2charphsTypephphp_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* right_value96;
struct list_item$1tuple2$2charphsTypephph* litem_110;
struct tuple2$2charphsTypeph* __dec_obj51;
void* right_value97;
struct list_item$1tuple2$2charphsTypephph* litem_111;
struct tuple2$2charphsTypeph* __dec_obj52;
void* right_value98;
struct list_item$1tuple2$2charphsTypephph* litem_112;
struct tuple2$2charphsTypeph* __dec_obj53;
memset(&right_value96, 0, sizeof(void*));
memset(&litem_110, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value97, 0, sizeof(void*));
memset(&litem_111, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value98, 0, sizeof(void*));
memset(&litem_112, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
            if(self->len==0) {
                litem_110=((struct list_item$1tuple2$2charphsTypephph*)(right_value96=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                litem_110->prev=((void*)0);
                litem_110->next=((void*)0);
                __dec_obj51=litem_110->item;
                litem_110->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
                self->tail=litem_110;
                self->head=litem_110;
            }
            else if(self->len==1) {
                litem_111=((struct list_item$1tuple2$2charphsTypephph*)(right_value97=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                litem_111->prev=self->head;
                litem_111->next=((void*)0);
                __dec_obj52=litem_111->item;
                litem_111->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                self->tail=litem_111;
                self->head->next=litem_111;
            }
            else {
                litem_112=((struct list_item$1tuple2$2charphsTypephph*)(right_value98=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                litem_112->prev=self->tail;
                litem_112->next=((void*)0);
                __dec_obj53=litem_112->item;
                litem_112->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
                self->tail->next=litem_112;
                self->tail=litem_112;
            }
            self->len++;
            if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
char* __dec_obj54;
struct sType* __dec_obj55;
            __dec_obj54=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
            __dec_obj55=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
            struct tuple2$2charphsTypeph* __result58__ = self;
            if(self) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
            if(v2) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1); }
            return __result58__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
int i_115;
memset(&i_115, 0, sizeof(int)); /* ddd */
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_115=0;
            i_115<num_value;
            i_115++
            ){
                list$1sTypephp_push_back(self,values[i_115]);
            }
            struct list$1sTypeph* __result59__ = self;
            if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result59__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
int i_117;
memset(&i_117, 0, sizeof(int)); /* ddd */
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(
            i_117=0;
            i_117<num_value;
            i_117++
            ){
                list$1charphp_push_back(self,values[i_117]);
            }
            struct list$1charph* __result60__ = self;
            if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result60__;
}

static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self){
void* right_value137;
struct sInterfaceNode* result_123;
void* right_value138;
char* __dec_obj62;
void* right_value139;
struct sClass* __dec_obj63;
void* right_value140;
char* __dec_obj64;
memset(&right_value137, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct sInterfaceNode*)); /* ddd */
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sInterfaceNode* __result61__ = (void*)0;
                return __result61__;
            }
            result_123=(struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value137=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1)))));
            if(right_value137) { come_call_finalizer(sInterfaceNode_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->name!=((void*)0)) {
                __dec_obj62=result_123->name;
                result_123->name=(char*)come_increment_ref_count(((char*)(right_value138=string_clone(self->name))));
                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0); }
                if(right_value138) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->klass!=((void*)0)) {
                __dec_obj63=result_123->klass;
                result_123->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value139=sClass_clone(self->klass))));
                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
                if(right_value139) { come_call_finalizer(sClass_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_123->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj64=result_123->sname;
                result_123->sname=(char*)come_increment_ref_count(((char*)(right_value140=string_clone(self->sname))));
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
                if(right_value140) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0); }
            }
            struct sInterfaceNode* __result62__ = result_123;
            if(result_123) { come_call_finalizer(sInterfaceNode_finalize,result_123, (void*)0, (void*)0, 0, 0, 1); }
            return __result62__;
}

