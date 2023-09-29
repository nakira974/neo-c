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
struct sStoreNode
{
    char* name;
    struct list$1charph* multiple_assign;
    struct sNode* right_value;
    struct sType* type;
    _Bool alloc;
    int sline;
    char* sname;
};
struct sLoadNode
{
    char* name;
    int sline;
    char* sname;
};
struct sFunLoadNode
{
    char* name;
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);

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
static void sStoreNode_finalize(struct sStoreNode* self);
_Bool sStoreNode_terminated();

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index);
static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value);
static struct sType* sTypep_clone(struct sType* self);
static void sTypep_finalize(struct sType* self);
int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info);

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info);

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

static void sLoadNode_finalize(struct sLoadNode* self);
_Bool sLoadNode_terminated();

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info);

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info);

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
_Bool sFunLoadNode_terminated();

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info);

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info);

static void sVar_finalize(struct sVar* self);
static void map$2charphsVarphp_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static void list$1charpp_remove(struct list$1charp* self, char* item);
static void list$1charpp_delete(struct list$1charp* self, int head, int tail);
static void list$1charpp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void sVarp_finalize(struct sVar* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
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






struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info){
void* right_value100;
void* right_value101;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* right_value108;
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value1=come_increment_ref_count(((struct sStoreNode*)(right_value101=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value100=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1))))),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_node),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sStoreNode_finalize;
    _inf_value1->clone=sStoreNode_clone;
    _inf_value1->compile=sStoreNode_compile;
    _inf_value1->sline=sStoreNode_sline;
    _inf_value1->sname=sStoreNode_sname;
    _inf_value1->terminated=sStoreNode_terminated;
    struct sNode* __result53__ = ((struct sNode*)(right_value108=_inf_value1));
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(multiple_assign) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1); }
    if(right_node) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1); } 
    if(right_value100) { come_call_finalizer(sStoreNode_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value101) { come_call_finalizer(sStoreNode_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0); }
    return __result53__;
}

struct sNode* load_var(char* name, struct sInfo* info){
void* right_value120;
void* right_value121;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* right_value125;
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value2=come_increment_ref_count(((struct sLoadNode*)(right_value121=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value120=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1))))),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=sLoadNode_finalize;
    _inf_value2->clone=sLoadNode_clone;
    _inf_value2->compile=sLoadNode_compile;
    _inf_value2->sline=sLoadNode_sline;
    _inf_value2->sname=sLoadNode_sname;
    _inf_value2->terminated=sLoadNode_terminated;
    struct sNode* __result69__ = ((struct sNode*)(right_value125=_inf_value2));
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(right_value120) { come_call_finalizer(sLoadNode_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value121) { come_call_finalizer(sLoadNode_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0); }
    return __result69__;
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool is_type_name_flag_128;
struct sFun* fun_129;
void* right_value153;
char* buf2_130;
struct list$1charph* multiple_assign_131;
void* right_value154;
void* right_value155;
struct list$1charph* __dec_obj87;
void* right_value159;
void* right_value160;
char* buf3_135;
void* right_value161;
void* right_value162;
struct sNode* right_value_136;
void* right_value163;
struct sNode* __dec_obj91;
void* right_value164;
void* right_value165;
void* right_value166;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value173;
void* right_value174;
struct sNode* right_value_138;
void* right_value175;
struct sNode* __dec_obj97;
void* right_value176;
void* right_value177;
void* right_value178;
struct sNode* _inf_value4;
struct sStoreNode* _inf_obj_value4;
void* right_value185;
void* right_value186;
void* right_value187;
void* right_value188;
struct sNode* _inf_value5;
struct sLoadNode* _inf_obj_value5;
void* right_value192;
struct sNode* node_141;
void* right_value193;
struct sNode* __dec_obj105;
void* right_value194;
struct sNode* __dec_obj106;
void* right_value195;
char* word_142;
void* right_value196;
char* __dec_obj107;
_Bool is_type_name_flag_143;
void* right_value197;
struct tuple3$3sTypephcharphbool* multiple_assgin_var1;
struct sType* type_144;
char* name_145;
_Bool err_146;
void* right_value198;
struct sNode* right_value_147;
void* right_value199;
struct sNode* __dec_obj108;
void* right_value200;
void* right_value201;
struct sNode* _inf_value6;
struct sStoreNode* _inf_obj_value6;
void* right_value208;
void* right_value209;
void* right_value210;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* right_value217;
void* right_value218;
memset(&is_type_name_flag_128, 0, sizeof(_Bool)); /* ddd */
memset(&fun_129, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value153, 0, sizeof(void*));
memset(&buf2_130, 0, sizeof(char*)); /* ddd */
memset(&multiple_assign_131, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&buf3_135, 0, sizeof(char*)); /* ddd */
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value_136, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value_138, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&node_141, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&word_142, 0, sizeof(char*)); /* ddd */
memset(&right_value196, 0, sizeof(void*));
memset(&is_type_name_flag_143, 0, sizeof(_Bool)); /* ddd */
memset(&right_value197, 0, sizeof(void*));
memset(&type_144, 0, sizeof(struct sType*)); /* ccc */
memset(&name_145, 0, sizeof(char*)); /* ccc */
memset(&err_146, 0, sizeof(_Bool)); /* ccc */
memset(&type_144, 0, sizeof(struct sType*)); /* eee */
memset(&name_145, 0, sizeof(char*)); /* eee */
memset(&err_146, 0, sizeof(_Bool)); /* eee */
memset(&right_value198, 0, sizeof(void*));
memset(&right_value_147, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
    is_type_name_flag_128=is_type_name(buf,info);
    parse_sharp_v5(info);
    fun_129=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if(charp_operator_equals(buf,"var")) {
        parse_sharp_v5(info);
        buf2_130=(char*)come_increment_ref_count(((char*)(right_value153=parse_word(info))));
        if(right_value153) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0); }
        parse_sharp_v5(info);
        multiple_assign_131=((void*)0);
        if(*info->p==44) {
            __dec_obj87=multiple_assign_131;
            multiple_assign_131=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value155=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value154=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
            if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0); }
            if(right_value155) { come_call_finalizer(list$1charphp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
            list$1charphp_push_back(multiple_assign_131,(char*)come_increment_ref_count(((char*)(right_value159=string_clone(buf2_130)))));
            if(right_value159) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0); }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_135=(char*)come_increment_ref_count(((char*)(right_value160=parse_word(info))));
                if(right_value160) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0); }
                parse_sharp_v5(info);
                list$1charphp_push_back(multiple_assign_131,(char*)come_increment_ref_count(((char*)(right_value161=string_clone(buf3_135)))));
                if(right_value161) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0); }
                if(buf3_135) { buf3_135 = come_decrement_ref_count(buf3_135, (void*)0, (void*)0, 0, 0); }
            }
        }
        parse_sharp_v5(info);
        if(*info->p==61&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            right_value_136=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value162=expression_v13(info))));
            if(right_value162) { right_value162 = come_decrement_ref_count(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0); } 
            parse_sharp_v5(info);
            __dec_obj91=right_value_136;
            right_value_136=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value163=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_136),info))));
            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0); }
            if(right_value163) { right_value163 = come_decrement_ref_count(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0); } 
            parse_sharp_v5(info);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value166=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value164=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1))))),(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string(buf2_130)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_131),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_136),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=sStoreNode_finalize;
            _inf_value3->clone=sStoreNode_clone;
            _inf_value3->compile=sStoreNode_compile;
            _inf_value3->sline=sStoreNode_sline;
            _inf_value3->sname=sStoreNode_sname;
            _inf_value3->terminated=sStoreNode_terminated;
            struct sNode* __result88__ = ((struct sNode*)(right_value173=_inf_value3));
            if(right_value_136) { right_value_136 = come_decrement_ref_count(right_value_136, ((struct sNode*)right_value_136)->finalize, ((struct sNode*)right_value_136)->_protocol_obj, 0, 0); } 
            if(buf2_130) { buf2_130 = come_decrement_ref_count(buf2_130, (void*)0, (void*)0, 0, 0); }
            if(multiple_assign_131) { come_call_finalizer(list$1charphp_finalize,multiple_assign_131, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value164) { come_call_finalizer(sStoreNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value165) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0); }
            if(right_value166) { come_call_finalizer(sStoreNode_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0); }
            return __result88__;
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(2);
        }
        if(buf2_130) { buf2_130 = come_decrement_ref_count(buf2_130, (void*)0, (void*)0, 0, 0); }
        if(multiple_assign_131) { come_call_finalizer(list$1charphp_finalize,multiple_assign_131, (void*)0, (void*)0, 0, 0, 0); }
    }
    else if(!is_type_name_flag_128&&*info->p==61&&*(info->p+1)!=61) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_138=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value174=expression_v13(info))));
        if(right_value174) { right_value174 = come_decrement_ref_count(right_value174, ((struct sNode*)right_value174)->finalize, ((struct sNode*)right_value174)->_protocol_obj, 1, 0); } 
        parse_sharp_v5(info);
        __dec_obj97=right_value_138;
        right_value_138=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_138),info))));
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0); }
        if(right_value175) { right_value175 = come_decrement_ref_count(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0); } 
        parse_sharp_v5(info);
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value4=come_increment_ref_count(((struct sStoreNode*)(right_value178=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value176=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1))))),(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(buf)))),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_138),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=sStoreNode_finalize;
        _inf_value4->clone=sStoreNode_clone;
        _inf_value4->compile=sStoreNode_compile;
        _inf_value4->sline=sStoreNode_sline;
        _inf_value4->sname=sStoreNode_sname;
        _inf_value4->terminated=sStoreNode_terminated;
        struct sNode* __result91__ = ((struct sNode*)(right_value185=_inf_value4));
        if(right_value_138) { right_value_138 = come_decrement_ref_count(right_value_138, ((struct sNode*)right_value_138)->finalize, ((struct sNode*)right_value_138)->_protocol_obj, 0, 0); } 
        if(right_value176) { come_call_finalizer(sStoreNode_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value177) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0); }
        if(right_value178) { come_call_finalizer(sStoreNode_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0); }
        return __result91__;
    }
    else if(!is_type_name_flag_128) {
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value5=come_increment_ref_count(((struct sLoadNode*)(right_value188=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value186=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1))))),(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(buf)))),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=sLoadNode_finalize;
        _inf_value5->clone=sLoadNode_clone;
        _inf_value5->compile=sLoadNode_compile;
        _inf_value5->sline=sLoadNode_sline;
        _inf_value5->sname=sLoadNode_sname;
        _inf_value5->terminated=sLoadNode_terminated;
        node_141=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value192=_inf_value5)));
        if(right_value186) { come_call_finalizer(sLoadNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value187) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0); }
        if(right_value188) { come_call_finalizer(sLoadNode_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value192) { right_value192 = come_decrement_ref_count(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0); } 
        __dec_obj105=node_141;
        node_141=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_141),info))));
        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0); }
        if(right_value193) { right_value193 = come_decrement_ref_count(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0); } 
        __dec_obj106=node_141;
        node_141=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_141),info))));
        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0); }
        if(right_value194) { right_value194 = come_decrement_ref_count(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0); } 
        struct sNode* __result94__ = node_141;
        if(node_141) { node_141 = come_decrement_ref_count(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 1); } 
        return __result94__;
    }
    else {
        info->p=head;
        info->sline=head_sline;
        word_142=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(""))));
        if(right_value195) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0); }
        if(xisalpha(*info->p)||*info->p==95) {
            __dec_obj107=word_142;
            word_142=(char*)come_increment_ref_count(((char*)(right_value196=parse_word(info))));
            if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0); }
            if(right_value196) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0); }
        }
        is_type_name_flag_143=is_type_name(word_142,info);
        info->p=head;
        info->sline=head_sline;
        if(is_type_name_flag_143) {
            parse_sharp_v5(info);
            multiple_assgin_var1=((struct tuple3$3sTypephcharphbool*)(right_value197=parse_type(info,(_Bool)1,(_Bool)1)));
            type_144=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v1);
            name_145=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            err_146=multiple_assgin_var1->v3;
            if(right_value197) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0); }
            if(!err_146) {
                exit(2);
            }
            parse_sharp_v5(info);
            if(*info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_147=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=expression_v13(info))));
                if(right_value198) { right_value198 = come_decrement_ref_count(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0); } 
                parse_sharp_v5(info);
                __dec_obj108=right_value_147;
                right_value_147=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=post_position_operator3_v21((struct sNode*)come_increment_ref_count(right_value_147),info))));
                if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0); }
                if(right_value199) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0); } 
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value6=come_increment_ref_count(((struct sStoreNode*)(right_value201=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value200=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1))))),(char*)come_increment_ref_count(name_145),((void*)0),(struct sType*)come_increment_ref_count(type_144),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_147),info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=sStoreNode_finalize;
                _inf_value6->clone=sStoreNode_clone;
                _inf_value6->compile=sStoreNode_compile;
                _inf_value6->sline=sStoreNode_sline;
                _inf_value6->sname=sStoreNode_sname;
                _inf_value6->terminated=sStoreNode_terminated;
                struct sNode* __result97__ = ((struct sNode*)(right_value208=_inf_value6));
                if(right_value_147) { right_value_147 = come_decrement_ref_count(right_value_147, ((struct sNode*)right_value_147)->finalize, ((struct sNode*)right_value_147)->_protocol_obj, 0, 0); } 
                if(type_144) { come_call_finalizer(sType_finalize,type_144, (void*)0, (void*)0, 0, 0, 0); }
                if(name_145) { name_145 = come_decrement_ref_count(name_145, (void*)0, (void*)0, 0, 0); }
                if(word_142) { word_142 = come_decrement_ref_count(word_142, (void*)0, (void*)0, 0, 0); }
                if(right_value200) { come_call_finalizer(sStoreNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value201) { come_call_finalizer(sStoreNode_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0); }
                return __result97__;
            }
            else {
                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value7=come_increment_ref_count(((struct sStoreNode*)(right_value210=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value209=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1))))),(char*)come_increment_ref_count(name_145),((void*)0),(struct sType*)come_increment_ref_count(type_144),(_Bool)1,((void*)0),info))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=sStoreNode_finalize;
                _inf_value7->clone=sStoreNode_clone;
                _inf_value7->compile=sStoreNode_compile;
                _inf_value7->sline=sStoreNode_sline;
                _inf_value7->sname=sStoreNode_sname;
                _inf_value7->terminated=sStoreNode_terminated;
                struct sNode* __result100__ = ((struct sNode*)(right_value217=_inf_value7));
                if(type_144) { come_call_finalizer(sType_finalize,type_144, (void*)0, (void*)0, 0, 0, 0); }
                if(name_145) { name_145 = come_decrement_ref_count(name_145, (void*)0, (void*)0, 0, 0); }
                if(word_142) { word_142 = come_decrement_ref_count(word_142, (void*)0, (void*)0, 0, 0); }
                if(right_value209) { come_call_finalizer(sStoreNode_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value210) { come_call_finalizer(sStoreNode_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0); }
                return __result100__;
            }
        }
    }
    struct sNode* __result101__ = ((struct sNode*)(right_value218=string_node_v5(buf,head,head_sline,info)));
    return __result101__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* right_value131;
struct sVar* self_86;
void* right_value132;
char* __dec_obj77;
void* right_value133;
struct sType* __dec_obj78;
void* right_value134;
char* __dec_obj79;
static int n_87=0;
void* right_value135;
char* __dec_obj80;
void* right_value142;
memset(&right_value131, 0, sizeof(void*));
memset(&self_86, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
    self_86=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value131=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1)))));
    if(right_value131) { come_call_finalizer(sVar_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj77=self_86->mName;
    self_86->mName=(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(name))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0); }
    if(right_value132) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0); }
    __dec_obj78=self_86->mType;
    self_86->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(type))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0); }
    if(right_value133) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0); }
    if(type->mFunctionParam) {
        __dec_obj79=self_86->mCValueName;
        self_86->mCValueName=(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string(name))));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0); }
        if(right_value134) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0); }
    }
    else {
        __dec_obj80=self_86->mCValueName;
        self_86->mCValueName=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("%s_%d",name,n_87++))));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0); }
        if(right_value135) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0); }
    }
    self_86->mBlockLevel=info->block_level;
    self_86->mAllocaValue=(_Bool)0;
    self_86->mFunctionParam=(_Bool)0;
    self_86->mNoFree=(_Bool)0;
    map$2charphsVarphp_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_86));
    if(right_value142) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0); }
    if(self_86) { come_call_finalizer(sVar_finalize,self_86, (void*)0, (void*)0, 0, 0, 0); }
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* right_value143;
struct sVar* self_126;
void* right_value144;
char* __dec_obj81;
void* right_value145;
struct sType* __dec_obj82;
void* right_value146;
char* __dec_obj83;
void* right_value147;
memset(&right_value143, 0, sizeof(void*));
memset(&self_126, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
    self_126=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value143=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1)))));
    if(right_value143) { come_call_finalizer(sVar_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj81=self_126->mName;
    self_126->mName=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(name))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0); }
    if(right_value144) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0); }
    __dec_obj82=self_126->mType;
    self_126->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(type))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0); }
    if(right_value145) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
    self_126->mGlobal=(_Bool)1;
    __dec_obj83=self_126->mCValueName;
    self_126->mCValueName=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(name))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0); }
    if(right_value146) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0); }
    self_126->mBlockLevel=info->block_level;
    self_126->mAllocaValue=(_Bool)0;
    self_126->mFunctionParam=(_Bool)0;
    self_126->mNoFree=(_Bool)0;
    map$2charphsVarphp_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_126));
    if(right_value147) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0); }
    if(self_126) { come_call_finalizer(sVar_finalize,self_126, (void*)0, (void*)0, 0, 0, 0); }
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* right_value148;
struct sVar* self_127;
void* right_value149;
char* __dec_obj84;
void* right_value150;
struct sType* __dec_obj85;
void* right_value151;
char* __dec_obj86;
void* right_value152;
memset(&right_value148, 0, sizeof(void*));
memset(&self_127, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
    self_127=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value148=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1)))));
    if(right_value148) { come_call_finalizer(sVar_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj84=self_127->mName;
    self_127->mName=(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string(name))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0); }
    if(right_value149) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0); }
    __dec_obj85=self_127->mType;
    self_127->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(type))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0); }
    if(right_value150) { come_call_finalizer(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0); }
    self_127->mGlobal=(_Bool)1;
    __dec_obj86=self_127->mCValueName;
    self_127->mCValueName=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(c_value))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
    if(right_value151) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0); }
    self_127->mBlockLevel=info->block_level;
    self_127->mAllocaValue=(_Bool)0;
    self_127->mFunctionParam=(_Bool)0;
    self_127->mNoFree=(_Bool)0;
    map$2charphsVarphp_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_127));
    if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
    if(self_127) { come_call_finalizer(sVar_finalize,self_127, (void*)0, (void*)0, 0, 0, 0); }
}

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* right_value0;
char* __dec_obj1;
void* right_value31;
struct sType* __dec_obj20;
struct sNode* __dec_obj21;
void* right_value32;
struct list$1charph* __dec_obj22;
void* right_value33;
char* __dec_obj23;
memset(&right_value0, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
    __dec_obj1=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(name))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    self->alloc=alloc;
    if(type) {
        __dec_obj20=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=sType_clone(type))));
        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
        if(right_value31) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0); }
    }
    else {
        self->type=((void*)0);
    }
    __dec_obj21=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0); }
    if(multiple_assign) {
        __dec_obj22=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=list$1charphp_clone(multiple_assign))));
        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
        if(right_value32) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0); }
    }
    else {
        self->multiple_assign=((void*)0);
    }
    self->sline=info->sline;
    __dec_obj23=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value33=__builtin_string(info->sname))));
    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
    if(right_value33) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0); }
    struct sStoreNode* __result22__ = self;
    if(self) { come_call_finalizer(sStoreNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(multiple_assign) { come_call_finalizer(list$1charphp_finalize,multiple_assign, (void*)0, (void*)0, 0, 0, 1); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1); }
    if(right_value) { right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1); } 
    return __result22__;
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
                if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
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
                if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
                if(right_value12) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj12=result_0->mArrayNum;
                result_0->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0); }
                if(right_value20) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_0->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj13=result_0->mParamTypes;
                result_0->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
                if(right_value21) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj17=result_0->mParamNames;
                result_0->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value28=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
                if(right_value28) { come_call_finalizer(list$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj18=result_0->mResultType;
                result_0->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
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
void* right_value2;
struct tuple1$1sTypeph* result_7;
void* right_value3;
struct sType* __dec_obj2;
memset(&right_value2, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value3, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct tuple1$1sTypeph* __result8__ = (void*)0;
                        return __result8__;
                    }
                    result_7=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value2=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                    if(right_value2) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        __dec_obj2=result_7->v1;
                        result_7->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value3=sType_clone(self->v1))));
                        if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
                        if(right_value3) { come_call_finalizer(sType_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    struct tuple1$1sTypeph* __result9__ = result_7;
                    if(result_7) { come_call_finalizer(tuple1$1sTypephp_finalize,result_7, (void*)0, (void*)0, 0, 0, 1); }
                    return __result9__;
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
                                if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_10;
                                self->head=litem_10;
                            }
                            else if(self->len==1) {
                                litem_11=((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_11->prev=self->head;
                                litem_11->next=((void*)0);
                                __dec_obj6=litem_11->item;
                                litem_11->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_11;
                                self->head->next=litem_11;
                            }
                            else {
                                litem_12=((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_12->prev=self->tail;
                                litem_12->next=((void*)0);
                                __dec_obj7=litem_12->item;
                                litem_12->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
                                self->tail->next=litem_12;
                                self->tail=litem_12;
                            }
                            self->len++;
                            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
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
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value18;
struct sNode* result_18;
memset(&right_value18, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sNode*)); /* ddd */
                            if(self==(void*)0) {
                                struct sNode* __result15__ = (void*)0;
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
                            return __result16__;
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
}

static void sStoreNode_finalize(struct sStoreNode* self){
                    if(self!=((void*)0)&&self->name!=((void*)0)) {
                        if(self->name) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
                        if(self->multiple_assign) { come_call_finalizer(list$1charphp_finalize,self->multiple_assign, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
                        if(self->right_value) { self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0); } 
                    }
                    if(self!=((void*)0)&&self->type!=((void*)0)) {
                        if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                    }
}

_Bool sStoreNode_terminated(){
    _Bool __result23__ = (_Bool)0;
    return __result23__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
struct sVar* var__27;
void* right_value34;
struct sType* type_28;
void* right_value35;
struct sType* left_type_29;
void* right_value36;
void* right_value37;
void* right_value38;
struct sType* left_type2_30;
void* right_value39;
void* right_value40;
struct CVALUE* come_value_31;
void* right_value41;
char* __dec_obj24;
void* right_value42;
struct sType* __dec_obj25;
void* right_value46;
struct CVALUE* right_value_35;
struct sType* right_type_36;
struct sVar* var__37;
int i_38;
char* it_40;
struct sType* right_type2_45;
void* right_value47;
struct sType* var_type_46;
void* right_value48;
void* right_value49;
struct sType* type_47;
void* right_value50;
struct sType* var_type_48;
void* right_value51;
struct sClass* current_stack_frame_struct_49;
struct sVar* parent_var_50;
void* right_value52;
struct CVALUE* come_value_51;
struct sType* left_type_52;
void* right_value53;
char* c_value_53;
void* right_value54;
char* __dec_obj29;
void* right_value55;
char* __dec_obj30;
int right_value_id_54;
void* right_value56;
char* __dec_obj31;
void* right_value57;
struct sType* __dec_obj32;
static int num_multiple_var_55=0;
void* right_value58;
char* multiple_var_name_56;
void* right_value59;
void* right_value60;
char* __dec_obj33;
int i_57;
char* it_58;
void* right_value70;
struct sType* right_type2_60;
struct sVar* var__61;
void* right_value71;
struct sType* var_type_62;
void* right_value72;
void* right_value73;
struct sType* left_type_63;
void* right_value74;
struct CVALUE* right_value2_64;
void* right_value75;
char* __dec_obj42;
void* right_value76;
struct sType* __dec_obj43;
void* right_value77;
struct CVALUE* come_value_65;
void* right_value78;
char* __dec_obj44;
void* right_value79;
char* __dec_obj45;
int right_value_id_66;
void* right_value80;
char* __dec_obj46;
void* right_value81;
struct sType* __dec_obj47;
void* right_value82;
struct sVar* var__67;
void* right_value83;
struct sType* __dec_obj48;
void* right_value84;
struct sType* left_type_68;
void* right_value85;
struct CVALUE* come_value_69;
void* right_value86;
void* right_value87;
char* __dec_obj49;
void* right_value88;
void* right_value89;
char* __dec_obj50;
void* right_value90;
char* __dec_obj51;
void* right_value91;
char* __dec_obj52;
void* right_value92;
char* __dec_obj53;
void* right_value93;
char* __dec_obj54;
int right_value_id_70;
void* right_value94;
struct sType* __dec_obj55;
void* right_value95;
char* __dec_obj56;
void* right_value96;
struct sType* __dec_obj57;
void* right_value97;
void* right_value98;
memset(&var__27, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value34, 0, sizeof(void*));
memset(&type_28, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value35, 0, sizeof(void*));
memset(&left_type_29, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&left_type2_30, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&come_value_31, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value_35, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_type_36, 0, sizeof(struct sType*)); /* ddd */
memset(&var__37, 0, sizeof(struct sVar*)); /* ddd */
memset(&i_38, 0, sizeof(int)); /* ddd */
memset(&it_40, 0, sizeof(char*)); /* ddd */
memset(&right_type2_45, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value47, 0, sizeof(void*));
memset(&var_type_46, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&type_47, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value50, 0, sizeof(void*));
memset(&var_type_48, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value51, 0, sizeof(void*));
memset(&current_stack_frame_struct_49, 0, sizeof(struct sClass*)); /* ddd */
memset(&parent_var_50, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value52, 0, sizeof(void*));
memset(&come_value_51, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&left_type_52, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value53, 0, sizeof(void*));
memset(&c_value_53, 0, sizeof(char*)); /* ddd */
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value_id_54, 0, sizeof(int)); /* ddd */
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&multiple_var_name_56, 0, sizeof(char*)); /* ddd */
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&i_57, 0, sizeof(int)); /* ddd */
memset(&it_58, 0, sizeof(char*)); /* ddd */
memset(&right_value70, 0, sizeof(void*));
memset(&right_type2_60, 0, sizeof(struct sType*)); /* ddd */
memset(&var__61, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value71, 0, sizeof(void*));
memset(&var_type_62, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&left_type_63, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value74, 0, sizeof(void*));
memset(&right_value2_64, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&come_value_65, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value_id_66, 0, sizeof(int)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&var__67, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&left_type_68, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value85, 0, sizeof(void*));
memset(&come_value_69, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value_id_70, 0, sizeof(int)); /* ddd */
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
    if(self->right_value==((void*)0)) {
        var__27=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        if(var__27) {
            err_msg(info,"Already appended this var name(%s)",self->name);
            _Bool __result29__ = (_Bool)0;
            return __result29__;
        }
        type_28=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=solve_generics(self->type,info->generics_type,info))));
        if(right_value34) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0); }
        add_variable_to_table(self->name,type_28,info);
        var__27=get_variable_from_table(info->lv_table,self->name);
        if(var__27==((void*)0)) {
            var__27=get_variable_from_table(info->gv_table,self->name);
            if(var__27==((void*)0)) {
                err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                _Bool __result30__ = (_Bool)0;
                if(type_28) { come_call_finalizer(sType_finalize,type_28, (void*)0, (void*)0, 0, 0, 0); }
                return __result30__;
            }
        }
        if(var__27->mType==((void*)0)) {
            err_msg(info,"require varible type(%s)\n",self->name);
            _Bool __result31__ = (_Bool)0;
            if(type_28) { come_call_finalizer(sType_finalize,type_28, (void*)0, (void*)0, 0, 0, 0); }
            return __result31__;
        }
        left_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=sType_clone(var__27->mType))));
        if(right_value35) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
        if(list$1sNodephp_length(left_type_29->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(right_value36=make_define_var(left_type_29,var__27->mCValueName,info,(_Bool)0))));
            if(right_value36) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0); }
            if(!left_type_29->mStatic) {
                add_come_code(info,"memset(&%s, 0, sizeof(%s)); /* aaa */\n",var__27->mCValueName,var__27->mCValueName);
            }
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value37=make_define_var(left_type_29,var__27->mCValueName,info,(_Bool)0))));
            if(right_value37) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0); }
            left_type2_30=(struct sType*)come_increment_ref_count(((struct sType*)(right_value38=sType_clone(left_type_29))));
            if(right_value38) { come_call_finalizer(sType_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
            left_type2_30->mStatic=(_Bool)0;
            if(!var__27->mType->mConstant&&!var__27->mType->mStatic) {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s)); /* bbb */\n",var__27->mCValueName,((char*)(right_value39=make_type_name_string(left_type2_30,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                if(right_value39) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0); }
            }
            if(left_type2_30) { come_call_finalizer(sType_finalize,left_type2_30, (void*)0, (void*)0, 0, 0, 0); }
        }
        come_value_31=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value40=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value40) { come_call_finalizer(CVALUE_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj24=come_value_31->c_value;
        come_value_31->c_value=(char*)come_increment_ref_count(((char*)(right_value41=xsprintf("%s",var__27->mCValueName))));
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
        if(right_value41) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0); }
        __dec_obj25=come_value_31->type;
        come_value_31->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value42=sType_clone(left_type_29))));
        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
        if(right_value42) { come_call_finalizer(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
        come_value_31->var=var__27;
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_31));
        if(self->alloc&&!left_type_29->mClass->mNumber&&left_type_29->mPointerNum==0) {
            var__27->mType->mAllocaValue=(_Bool)1;
        }
        if(type_28) { come_call_finalizer(sType_finalize,type_28, (void*)0, (void*)0, 0, 0, 0); }
        if(left_type_29) { come_call_finalizer(sType_finalize,left_type_29, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_31) { come_call_finalizer(CVALUE_finalize,come_value_31, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(!self->right_value->compile(self->right_value->_protocol_obj,info)) {
            _Bool __result33__ = (_Bool)0;
            return __result33__;
        }
        right_value_35=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value46=get_value_from_stack(-1,info))));
        if(right_value46) { come_call_finalizer(CVALUE_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        right_type_36=right_value_35->type;
        if(self->multiple_assign) {
            if(right_type_36->mNoSolvedGenericsType->v1) {
                right_type_36=right_type_36->mNoSolvedGenericsType->v1;
            }
        }
        if(self->alloc) {
            var__37=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
            if(var__37) {
                err_msg(info,"Already appended this var name(%s)",self->name);
                _Bool __result34__ = (_Bool)0;
                if(right_value_35) { come_call_finalizer(CVALUE_finalize,right_value_35, (void*)0, (void*)0, 0, 0, 0); }
                return __result34__;
            }
            if(self->multiple_assign) {
                i_38=0;
                for(
                it_40=list$1charphp_begin((self->multiple_assign));
                !list$1charphp_end((self->multiple_assign));
                it_40=list$1charphp_next((self->multiple_assign))
                ){
                    if(i_38<list$1sTypephp_length(right_type_36->mGenericsTypes)) {
                        right_type2_45=list$1sTypephp_operator_load_element(right_type_36->mGenericsTypes,i_38);
                        add_variable_to_table(it_40,right_type2_45,info);
                        var__37=get_variable_from_table(info->lv_table,it_40);
                        var_type_46=(struct sType*)come_increment_ref_count(((struct sType*)(right_value47=sType_clone(var__37->mType))));
                        if(right_value47) { come_call_finalizer(sType_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0); }
                        var_type_46->mStatic=(_Bool)0;
                        if(!var_type_46->mConstant&&!var_type_46->mStatic) {
                            add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s)); /* ccc */\n",var__37->mCValueName,((char*)(right_value48=make_type_name_string(var_type_46,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                            if(right_value48) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0); }
                        }
                        if(var_type_46) { come_call_finalizer(sType_finalize,var_type_46, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    i_38++;
                }
            }
            else {
                if(self->type==((void*)0)) {
                    add_variable_to_table(self->name,right_type_36,info);
                }
                else {
                    type_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=solve_generics(self->type,info->generics_type,info))));
                    if(right_value49) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0); }
                    add_variable_to_table(self->name,type_47,info);
                    if(type_47) { come_call_finalizer(sType_finalize,type_47, (void*)0, (void*)0, 0, 0, 0); }
                }
                var__37=get_variable_from_table(info->lv_table,self->name);
                var_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sType_clone(var__37->mType))));
                if(right_value50) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
                var_type_48->mStatic=(_Bool)0;
                if(!var__37->mType->mStatic&&!var_type_48->mConstant&&list$1sNodephp_length(var_type_48->mArrayNum)==0) {
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s)); /* ddd */\n",var__37->mCValueName,((char*)(right_value51=make_type_name_string(var_type_48,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                    if(right_value51) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0); }
                }
                if(var_type_48) { come_call_finalizer(sType_finalize,var_type_48, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        current_stack_frame_struct_49=info->current_stack_frame_struct;
        if(current_stack_frame_struct_49) {
            parent_var_50=get_variable_from_table(info->lv_table->mParent,self->name);
            if(parent_var_50!=((void*)0)) {
                come_value_51=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
                if(right_value52) { come_call_finalizer(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
                left_type_52=parent_var_50->mType;
                if(left_type_52->mPointerNum>0&&right_type_36->mPointerNum>0&&right_type_36->mHeap&&left_type_52->mHeap) {
                    c_value_53=(char*)come_increment_ref_count(((char*)(right_value53=xsprintf("*(parent->%s)",parent_var_50->mCValueName))));
                    if(right_value53) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0); }
                    decrement_ref_count_object(parent_var_50->mType,c_value_53,info);
                    __dec_obj29=right_value_35->c_value;
                    right_value_35->c_value=(char*)come_increment_ref_count(((char*)(right_value54=increment_ref_count_object(right_value_35->type,right_value_35->c_value,info))));
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
                    if(right_value54) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0); }
                    __dec_obj30=come_value_51->c_value;
                    come_value_51->c_value=(char*)come_increment_ref_count(((char*)(right_value55=xsprintf("(*(parent->%s))=%s",parent_var_50->mCValueName,right_value_35->c_value))));
                    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
                    if(right_value55) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0); }
                    right_value_id_54=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_35->c_value));
                    if(right_value_id_54!=-1) {
                        remove_object_from_right_values(right_value_id_54,info);
                    }
                    if(c_value_53) { c_value_53 = come_decrement_ref_count(c_value_53, (void*)0, (void*)0, 0, 0); }
                }
                else {
                    __dec_obj31=come_value_51->c_value;
                    come_value_51->c_value=(char*)come_increment_ref_count(((char*)(right_value56=xsprintf("(*(parent->%s))=%s",parent_var_50->mCValueName,right_value_35->c_value))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
                    if(right_value56) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0); }
                }
                __dec_obj32=come_value_51->type;
                come_value_51->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value57=sType_clone(left_type_52))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
                if(right_value57) { come_call_finalizer(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0); }
                come_value_51->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_51->c_value);
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_51));
                _Bool __result44__ = (_Bool)1;
                if(come_value_51) { come_call_finalizer(CVALUE_finalize,come_value_51, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value_35) { come_call_finalizer(CVALUE_finalize,right_value_35, (void*)0, (void*)0, 0, 0, 0); }
                return __result44__;
            }
        }
        if(self->multiple_assign) {
            multiple_var_name_56=(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("multiple_assgin_var%d",++num_multiple_var_55))));
            if(right_value58) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0); }
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value59=make_define_var(right_value_35->type,multiple_var_name_56,info,(_Bool)0))));
            if(right_value59) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0); }
            add_come_code(info,"%s=%s;\n",multiple_var_name_56,right_value_35->c_value);
            __dec_obj33=right_value_35->c_value;
            right_value_35->c_value=(char*)come_increment_ref_count(((char*)(right_value60=string_clone(multiple_var_name_56))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0); }
            if(right_value60) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0); }
            i_57=0;
            for(
            it_58=list$1charphp_begin((self->multiple_assign));
            !list$1charphp_end((self->multiple_assign));
            it_58=list$1charphp_next((self->multiple_assign))
            ){
                if(i_57<list$1sTypephp_length(right_type_36->mGenericsTypes)) {
                    right_type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sTypep_clone(list$1sTypephp_operator_load_element(right_type_36->mGenericsTypes,i_57)))));
                    if(right_value70) { come_call_finalizer(sTypep_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
                    var__61=get_variable_from_table(info->lv_table,it_58);
                    var_type_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(var__61->mType))));
                    if(right_value71) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
                    var_type_62->mStatic=(_Bool)0;
                    if(!var_type_62->mConstant) {
                        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s)); /* eee */\n",var__61->mCValueName,((char*)(right_value72=make_type_name_string(var_type_62,(_Bool)0,(_Bool)0,info,(_Bool)0))));
                        if(right_value72) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0); }
                    }
                    left_type_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(var__61->mType))));
                    if(right_value73) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0); }
                    right_value2_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value74=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
                    if(right_value74) { come_call_finalizer(CVALUE_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
                    __dec_obj42=right_value2_64->c_value;
                    right_value2_64->c_value=(char*)come_increment_ref_count(((char*)(right_value75=xsprintf("%s->v%d",right_value_35->c_value,i_57+1))));
                    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
                    if(right_value75) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0); }
                    __dec_obj43=right_value2_64->type;
                    right_value2_64->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=sType_clone(right_type2_60))));
                    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
                    if(right_value76) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0); }
                    right_value2_64->var=((void*)0);
                    come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value77=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
                    if(right_value77) { come_call_finalizer(CVALUE_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0); }
                    if(right_type2_60->mHeap&&left_type_63->mHeap&&left_type_63->mPointerNum>0&&right_type2_60->mPointerNum>0) {
                        if(self->alloc) {
                            __dec_obj44=right_value2_64->c_value;
                            right_value2_64->c_value=(char*)come_increment_ref_count(((char*)(right_value78=increment_ref_count_object(right_value2_64->type,right_value2_64->c_value,info))));
                            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
                            if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0); }
                            __dec_obj45=come_value_65->c_value;
                            come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value79=xsprintf("%s=%s",var__61->mCValueName,right_value2_64->c_value))));
                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
                            if(right_value79) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0); }
                        }
                        right_value_id_66=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_64->c_value));
                        if(right_value_id_66!=-1) {
                            remove_object_from_right_values(right_value_id_66,info);
                        }
                    }
                    else {
                        __dec_obj46=come_value_65->c_value;
                        come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s=%s",var__61->mCValueName,right_value2_64->c_value))));
                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
                        if(right_value80) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0); }
                    }
                    __dec_obj47=come_value_65->type;
                    come_value_65->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(left_type_63))));
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
                    if(right_value81) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
                    come_value_65->var=var__61;
                    if(self->alloc) {
                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value82=make_define_var(left_type_63,var__61->mCValueName,info,(_Bool)0))));
                        if(right_value82) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0); }
                        add_come_code(info,"%s;\n",come_value_65->c_value);
                    }
                    else {
                        add_come_code(info,"%s;\n",come_value_65->c_value);
                    }
                    if(right_type2_60) { come_call_finalizer(sType_finalize,right_type2_60, (void*)0, (void*)0, 0, 0, 0); }
                    if(var_type_62) { come_call_finalizer(sType_finalize,var_type_62, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_type_63) { come_call_finalizer(sType_finalize,left_type_63, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value2_64) { come_call_finalizer(CVALUE_finalize,right_value2_64, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_65) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0); }
                }
                i_57++;
            }
            if(multiple_var_name_56) { multiple_var_name_56 = come_decrement_ref_count(multiple_var_name_56, (void*)0, (void*)0, 0, 0); }
        }
        else {
            var__67=get_variable_from_table(info->lv_table,self->name);
            if(var__67==((void*)0)) {
                var__67=get_variable_from_table(info->gv_table,self->name);
                if(var__67==((void*)0)) {
                    err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                    _Bool __result47__ = (_Bool)0;
                    if(right_value_35) { come_call_finalizer(CVALUE_finalize,right_value_35, (void*)0, (void*)0, 0, 0, 0); }
                    return __result47__;
                }
            }
            if(var__67->mType==((void*)0)) {
                __dec_obj48=var__67->mType;
                var__67->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(right_type_36))));
                if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
                if(right_value83) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0); }
            }
            left_type_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(var__67->mType))));
            if(right_value84) { come_call_finalizer(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0); }
            come_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
            if(right_value85) { come_call_finalizer(CVALUE_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0); }
            if(var__67->mType->mStatic) {
                add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value86=make_define_var(left_type_68,var__67->mCValueName,info,(_Bool)0))),right_value_35->c_value);
                if(right_value86) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0); }
                __dec_obj49=come_value_69->c_value;
                come_value_69->c_value=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(""))));
                if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
                if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0); }
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
                transpiler_clear_last_code(info);
            }
            else if(var__67->mType->mConstant) {
                add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value88=make_define_var(left_type_68,var__67->mCValueName,info,(_Bool)0))),right_value_35->c_value);
                if(right_value88) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0); }
                __dec_obj50=come_value_69->c_value;
                come_value_69->c_value=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(""))));
                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
                if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
                transpiler_clear_last_code(info);
            }
            else if(right_type_36->mHeap&&left_type_68->mHeap&&left_type_68->mPointerNum>0&&right_type_36->mPointerNum>0) {
                if(self->alloc) {
                    __dec_obj51=right_value_35->c_value;
                    right_value_35->c_value=(char*)come_increment_ref_count(((char*)(right_value90=increment_ref_count_object(right_value_35->type,right_value_35->c_value,info))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
                    if(right_value90) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0); }
                    __dec_obj52=come_value_69->c_value;
                    come_value_69->c_value=(char*)come_increment_ref_count(((char*)(right_value91=xsprintf("%s=%s",var__67->mCValueName,right_value_35->c_value))));
                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                    if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
                }
                else {
                    decrement_ref_count_object(left_type_68,var__67->mCValueName,info);
                    __dec_obj53=right_value_35->c_value;
                    right_value_35->c_value=(char*)come_increment_ref_count(((char*)(right_value92=increment_ref_count_object(right_value_35->type,right_value_35->c_value,info))));
                    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
                    if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
                    __dec_obj54=come_value_69->c_value;
                    come_value_69->c_value=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("%s=%s",var__67->mCValueName,right_value_35->c_value))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
                    if(right_value93) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0); }
                }
                right_value_id_70=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_35->c_value));
                if(right_value_id_70!=-1) {
                    remove_object_from_right_values(right_value_id_70,info);
                }
                __dec_obj55=come_value_69->type;
                come_value_69->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(left_type_68))));
                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
                if(right_value94) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
                come_value_69->var=var__67;
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
                add_come_last_code(info,"%s;\n",come_value_69->c_value);
            }
            else {
                __dec_obj56=come_value_69->c_value;
                come_value_69->c_value=(char*)come_increment_ref_count(((char*)(right_value95=xsprintf("%s=%s",var__67->mCValueName,right_value_35->c_value))));
                if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
                if(right_value95) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0); }
                __dec_obj57=come_value_69->type;
                come_value_69->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(left_type_68))));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
                if(right_value96) { come_call_finalizer(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0); }
                come_value_69->var=var__67;
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
                add_come_last_code(info,"%s;\n",come_value_69->c_value);
            }
            if(self->alloc&&!left_type_68->mConstant&&!left_type_68->mStatic) {
                if(list$1sNodephp_length(left_type_68->mArrayNum)>0) {
                    add_come_code(info,"%s;\n",((char*)(right_value97=make_define_var(left_type_68,var__67->mCValueName,info,(_Bool)0))));
                    if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0); }
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value98=make_define_var(left_type_68,var__67->mCValueName,info,(_Bool)0))));
                    if(right_value98) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0); }
                }
            }
            if(left_type_68) { come_call_finalizer(sType_finalize,left_type_68, (void*)0, (void*)0, 0, 0, 0); }
            if(come_value_69) { come_call_finalizer(CVALUE_finalize,come_value_69, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(right_value_35) { come_call_finalizer(CVALUE_finalize,right_value_35, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result48__ = (_Bool)1;
    return __result48__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
struct sVar* default_value_24;
memset(&default_value_24, 0, sizeof(struct sVar*)); /* bbb */
            memset(&default_value_24,0,sizeof(struct sVar*));
            struct sVar* __result28__ = map$2charphsVarphp_at(self,key,default_value_24);
            return __result28__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
int hash_25;
int it_26;
memset(&hash_25, 0, sizeof(int)); /* ddd */
memset(&it_26, 0, sizeof(int)); /* ddd */
                hash_25=string_get_hash_key(((char*)key))%self->size;
                it_26=hash_25;
                while((_Bool)1) {
                    if(self->item_existance[it_26]) {
                        if(charp_equals(self->keys[it_26],key)) {
                            struct sVar* __result24__ = self->items[it_26];
                            return __result24__;
                        }
                        it_26++;
                        if(it_26>=self->size) {
                            it_26=0;
                        }
                        else if(it_26==hash_25) {
                            struct sVar* __result25__ = default_value;
                            return __result25__;
                        }
                    }
                    else {
                        struct sVar* __result26__ = default_value;
                        return __result26__;
                    }
                }
                struct sVar* __result27__ = default_value;
                return __result27__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
            int __result32__ = self->len;
            return __result32__;
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
void* right_value43;
struct list_item$1CVALUEph* litem_32;
struct CVALUE* __dec_obj26;
void* right_value44;
struct list_item$1CVALUEph* litem_33;
struct CVALUE* __dec_obj27;
void* right_value45;
struct list_item$1CVALUEph* litem_34;
struct CVALUE* __dec_obj28;
memset(&right_value43, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value44, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value45, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
            if(self->len==0) {
                litem_32=((struct list_item$1CVALUEph*)(right_value43=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
                litem_32->prev=((void*)0);
                litem_32->next=((void*)0);
                __dec_obj26=litem_32->item;
                litem_32->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
                self->tail=litem_32;
                self->head=litem_32;
            }
            else if(self->len==1) {
                litem_33=((struct list_item$1CVALUEph*)(right_value44=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
                litem_33->prev=self->head;
                litem_33->next=((void*)0);
                __dec_obj27=litem_33->item;
                litem_33->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
                self->tail=litem_33;
                self->head->next=litem_33;
            }
            else {
                litem_34=((struct list_item$1CVALUEph*)(right_value45=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
                litem_34->prev=self->tail;
                litem_34->next=((void*)0);
                __dec_obj28=litem_34->item;
                litem_34->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
                self->tail->next=litem_34;
                self->tail=litem_34;
            }
            self->len++;
            if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static char* list$1charphp_begin(struct list$1charph* self){
char* result_39;
memset(&result_39, 0, sizeof(char*)); /* bbb */
                    self->it=self->head;
                    if(self->it) {
                        char* __result35__ = self->it->item;
                        return __result35__;
                    }
                    memset(&result_39,0,sizeof(char*));
                    char* __result36__ = result_39;
                    return __result36__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
                    _Bool __result37__ = self->it==((void*)0);
                    return __result37__;
}

static char* list$1charphp_next(struct list$1charph* self){
char* result_41;
memset(&result_41, 0, sizeof(char*)); /* bbb */
                    self->it=self->it->next;
                    if(self->it) {
                        char* __result38__ = self->it->item;
                        return __result38__;
                    }
                    memset(&result_41,0,sizeof(char*));
                    char* __result39__ = result_41;
                    return __result39__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
                        int __result40__ = self->len;
                        return __result40__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_42;
memset(&default_value_42, 0, sizeof(struct sType*)); /* bbb */
                            memset(&default_value_42,0,sizeof(struct sType*));
                            struct sType* __result43__ = list$1sTypephp_item(self,index,default_value_42);
                            return __result43__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_43;
int i_44;
memset(&it_43, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&i_44, 0, sizeof(int)); /* ddd */
                                if(position<0) {
                                    position+=self->len;
                                }
                                it_43=self->head;
                                i_44=0;
                                while(it_43!=((void*)0)) {
                                    if(position==i_44) {
                                        struct sType* __result41__ = it_43->item;
                                        return __result41__;
                                    }
                                    it_43=it_43->next;
                                    i_44++;
                                }
                                struct sType* __result42__ = default_value;
                                return __result42__;
}

static struct sType* sTypep_clone(struct sType* self){
void* right_value61;
struct sType* result_59;
void* right_value62;
struct tuple1$1sTypeph* __dec_obj34;
void* right_value63;
char* __dec_obj35;
void* right_value64;
struct list$1sTypeph* __dec_obj36;
void* right_value65;
struct list$1sNodeph* __dec_obj37;
void* right_value66;
struct list$1sTypeph* __dec_obj38;
void* right_value67;
struct list$1charph* __dec_obj39;
void* right_value68;
struct tuple1$1sTypeph* __dec_obj40;
void* right_value69;
char* __dec_obj41;
memset(&right_value61, 0, sizeof(void*));
memset(&result_59, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct sType* __result45__ = (void*)0;
                            return __result45__;
                        }
                        result_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
                        if(right_value61) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
                        if(self!=((void*)0)) {
                            result_59->mClass=self->mClass;
                        }
                        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                            __dec_obj34=result_59->mNoSolvedGenericsType;
                            result_59->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value62=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
                            if(right_value62) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                            __dec_obj35=result_59->mGenericsName;
                            result_59->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value63=string_clone(self->mGenericsName))));
                            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
                            if(right_value63) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                            __dec_obj36=result_59->mGenericsTypes;
                            result_59->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value64=list$1sTypephp_clone(self->mGenericsTypes))));
                            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0); }
                            if(right_value64) { come_call_finalizer(list$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                            __dec_obj37=result_59->mArrayNum;
                            result_59->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value65=list$1sNodephp_clone(self->mArrayNum))));
                            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
                            if(right_value65) { come_call_finalizer(list$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)) {
                            result_59->mOmitArrayNum=self->mOmitArrayNum;
                        }
                        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                            __dec_obj38=result_59->mParamTypes;
                            result_59->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value66=list$1sTypephp_clone(self->mParamTypes))));
                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
                            if(right_value66) { come_call_finalizer(list$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                            __dec_obj39=result_59->mParamNames;
                            result_59->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value67=list$1charphp_clone(self->mParamNames))));
                            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0); }
                            if(right_value67) { come_call_finalizer(list$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                            __dec_obj40=result_59->mResultType;
                            result_59->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value68=tuple1$1sTypephp_clone(self->mResultType))));
                            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
                            if(right_value68) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)) {
                            result_59->mVarArgs=self->mVarArgs;
                        }
                        if(self!=((void*)0)) {
                            result_59->mUnsigned=self->mUnsigned;
                        }
                        if(self!=((void*)0)) {
                            result_59->mShort=self->mShort;
                        }
                        if(self!=((void*)0)) {
                            result_59->mLong=self->mLong;
                        }
                        if(self!=((void*)0)) {
                            result_59->mLongLong=self->mLongLong;
                        }
                        if(self!=((void*)0)) {
                            result_59->mConstant=self->mConstant;
                        }
                        if(self!=((void*)0)) {
                            result_59->mRegister=self->mRegister;
                        }
                        if(self!=((void*)0)) {
                            result_59->mVolatile=self->mVolatile;
                        }
                        if(self!=((void*)0)) {
                            result_59->mStatic=self->mStatic;
                        }
                        if(self!=((void*)0)) {
                            result_59->mExtern=self->mExtern;
                        }
                        if(self!=((void*)0)) {
                            result_59->mRestrict=self->mRestrict;
                        }
                        if(self!=((void*)0)) {
                            result_59->mImmutable=self->mImmutable;
                        }
                        if(self!=((void*)0)) {
                            result_59->mHeap=self->mHeap;
                        }
                        if(self!=((void*)0)) {
                            result_59->mDummyHeap=self->mDummyHeap;
                        }
                        if(self!=((void*)0)) {
                            result_59->mNoHeap=self->mNoHeap;
                        }
                        if(self!=((void*)0)) {
                            result_59->mNoCallingDestructor=self->mNoCallingDestructor;
                        }
                        if(self!=((void*)0)) {
                            result_59->mRefference=self->mRefference;
                        }
                        if(self!=((void*)0)) {
                            result_59->mException=self->mException;
                        }
                        if(self!=((void*)0)) {
                            result_59->mPointerNum=self->mPointerNum;
                        }
                        if(self!=((void*)0)) {
                            result_59->mNoArrayPointerNum=self->mNoArrayPointerNum;
                        }
                        if(self!=((void*)0)) {
                            result_59->mSizeNum=self->mSizeNum;
                        }
                        if(self!=((void*)0)) {
                            result_59->mDynamicArrayNum=self->mDynamicArrayNum;
                        }
                        if(self!=((void*)0)) {
                            result_59->mTypeOfExpression=self->mTypeOfExpression;
                        }
                        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                            __dec_obj41=result_59->mOriginalTypeName;
                            result_59->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(self->mOriginalTypeName))));
                            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
                            if(right_value69) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0); }
                        }
                        if(self!=((void*)0)) {
                            result_59->mOriginalPointerNum=self->mOriginalPointerNum;
                        }
                        if(self!=((void*)0)) {
                            result_59->mFunctionParam=self->mFunctionParam;
                        }
                        if(self!=((void*)0)) {
                            result_59->mAllocaValue=self->mAllocaValue;
                        }
                        if(self!=((void*)0)) {
                            result_59->mGenericsStruct=self->mGenericsStruct;
                        }
                        if(self!=((void*)0)) {
                            result_59->mSolvedGenericsName=self->mSolvedGenericsName;
                        }
                        if(self!=((void*)0)) {
                            result_59->mInline=self->mInline;
                        }
                        struct sType* __result46__ = result_59;
                        if(result_59) { come_call_finalizer(sType_finalize,result_59, (void*)0, (void*)0, 0, 0, 1); }
                        return __result46__;
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

int sStoreNode_sline(struct sStoreNode* self, struct sInfo* info){
    int __result49__ = self->sline;
    return __result49__;
}

char* sStoreNode_sname(struct sStoreNode* self, struct sInfo* info){
void* right_value99;
memset(&right_value99, 0, sizeof(void*));
    char* __result50__ = ((char*)(right_value99=__builtin_string(self->sname)));
    return __result50__;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* right_value211;
struct sStoreNode* result_149;
void* right_value212;
char* __dec_obj114;
void* right_value213;
struct list$1charph* __dec_obj115;
void* right_value214;
struct sNode* __dec_obj116;
void* right_value215;
struct sType* __dec_obj117;
void* right_value216;
char* __dec_obj118;
memset(&right_value211, 0, sizeof(void*));
memset(&result_149, 0, sizeof(struct sStoreNode*)); /* ddd */
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sStoreNode* __result98__ = (void*)0;
                        return __result98__;
                    }
                    result_149=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value211=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1)))));
                    if(right_value211) { come_call_finalizer(sStoreNode_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->name!=((void*)0)) {
                        __dec_obj114=result_149->name;
                        result_149->name=(char*)come_increment_ref_count(((char*)(right_value212=string_clone(self->name))));
                        if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0); }
                        if(right_value212) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0); }
                    }
                    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
                        __dec_obj115=result_149->multiple_assign;
                        result_149->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value213=list$1charphp_clone(self->multiple_assign))));
                        if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0); }
                        if(right_value213) { come_call_finalizer(list$1charphp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
                        __dec_obj116=result_149->right_value;
                        result_149->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNodep_clone(self->right_value))));
                        if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0); }
                        if(right_value214) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0); } 
                    }
                    if(self!=((void*)0)&&self->type!=((void*)0)) {
                        __dec_obj117=result_149->type;
                        result_149->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(self->type))));
                        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0); }
                        if(right_value215) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    if(self!=((void*)0)) {
                        result_149->alloc=self->alloc;
                    }
                    if(self!=((void*)0)) {
                        result_149->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj118=result_149->sname;
                        result_149->sname=(char*)come_increment_ref_count(((char*)(right_value216=string_clone(self->sname))));
                        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0); }
                        if(right_value216) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sStoreNode* __result99__ = result_149;
                    if(result_149) { come_call_finalizer(sStoreNode_finalize,result_149, (void*)0, (void*)0, 0, 0, 1); }
                    return __result99__;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* right_value109;
char* __dec_obj63;
void* right_value110;
char* __dec_obj64;
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
    __dec_obj63=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(name))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
    if(right_value109) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0); }
    self->sline=info->sline;
    __dec_obj64=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value110=__builtin_string(info->sname))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
    if(right_value110) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0); }
    struct sLoadNode* __result54__ = self;
    if(self) { come_call_finalizer(sLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    return __result54__;
}

static void sLoadNode_finalize(struct sLoadNode* self){
            if(self!=((void*)0)&&self->name!=((void*)0)) {
                if(self->name) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

_Bool sLoadNode_terminated(){
    _Bool __result55__ = (_Bool)0;
    return __result55__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_72;
struct sVar* parent_var_73;
void* right_value111;
struct CVALUE* come_value_74;
struct sType* type_75;
void* right_value112;
char* __dec_obj65;
void* right_value113;
struct sType* __dec_obj66;
struct sVar* var__76;
struct sFun* fun_80;
void* right_value114;
struct CVALUE* come_value_81;
void* right_value115;
char* __dec_obj67;
struct sType* __dec_obj68;
void* right_value116;
struct CVALUE* come_value_82;
void* right_value117;
char* __dec_obj69;
void* right_value118;
struct sType* __dec_obj70;
memset(&current_stack_frame_struct_72, 0, sizeof(struct sClass*)); /* ddd */
memset(&parent_var_73, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value111, 0, sizeof(void*));
memset(&come_value_74, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&type_75, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&var__76, 0, sizeof(struct sVar*)); /* ddd */
memset(&fun_80, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value114, 0, sizeof(void*));
memset(&come_value_81, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&come_value_82, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
    current_stack_frame_struct_72=info->current_stack_frame_struct;
    if(current_stack_frame_struct_72) {
        parent_var_73=get_variable_from_table(info->lv_table->mParent,self->name);
        if(parent_var_73!=((void*)0)) {
            come_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
            if(right_value111) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0); }
            type_75=parent_var_73->mType;
            __dec_obj65=come_value_74->c_value;
            come_value_74->c_value=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("(*(parent->%s))",parent_var_73->mCValueName))));
            if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
            if(right_value112) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0); }
            __dec_obj66=come_value_74->type;
            come_value_74->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(type_75))));
            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0); }
            if(right_value113) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0); }
            come_value_74->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_74->c_value);
            list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_74));
            _Bool __result56__ = (_Bool)1;
            if(come_value_74) { come_call_finalizer(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0); }
            return __result56__;
        }
    }
    var__76=get_variable_from_table(info->lv_table,self->name);
    if(var__76==((void*)0)) {
        var__76=get_variable_from_table(info->gv_table,self->name);
        if(var__76==((void*)0)) {
            fun_80=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(fun_80) {
                come_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value114=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
                if(right_value114) { come_call_finalizer(CVALUE_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
                __dec_obj67=come_value_81->c_value;
                come_value_81->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%s",fun_80->mName))));
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0); }
                if(right_value115) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0); }
                __dec_obj68=come_value_81->type;
                come_value_81->type=(struct sType*)come_increment_ref_count(fun_80->mLambdaType);
                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0); }
                come_value_81->var=((void*)0);
                list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_81));
                _Bool __result62__ = (_Bool)1;
                if(come_value_81) { come_call_finalizer(CVALUE_finalize,come_value_81, (void*)0, (void*)0, 0, 0, 0); }
                return __result62__;
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                _Bool __result63__ = (_Bool)0;
                return __result63__;
            }
        }
    }
    come_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value116=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value116) { come_call_finalizer(CVALUE_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj69=come_value_82->c_value;
    come_value_82->c_value=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("%s",var__76->mCValueName))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0); }
    if(right_value117) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0); }
    __dec_obj70=come_value_82->type;
    come_value_82->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(var__76->mType))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0); }
    if(right_value118) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0); }
    come_value_82->var=var__76;
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_82));
    _Bool __result64__ = (_Bool)1;
    if(come_value_82) { come_call_finalizer(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0); }
    return __result64__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
struct sFun* default_value_77;
memset(&default_value_77, 0, sizeof(struct sFun*)); /* bbb */
                memset(&default_value_77,0,sizeof(struct sFun*));
                struct sFun* __result61__ = map$2charphsFunphp_at(self,key,default_value_77);
                return __result61__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_78;
int it_79;
memset(&hash_78, 0, sizeof(int)); /* ddd */
memset(&it_79, 0, sizeof(int)); /* ddd */
                    hash_78=string_get_hash_key(((char*)key))%self->size;
                    it_79=hash_78;
                    while((_Bool)1) {
                        if(self->item_existance[it_79]) {
                            if(charp_equals(self->keys[it_79],key)) {
                                struct sFun* __result57__ = self->items[it_79];
                                return __result57__;
                            }
                            it_79++;
                            if(it_79>=self->size) {
                                it_79=0;
                            }
                            else if(it_79==hash_78) {
                                struct sFun* __result58__ = default_value;
                                return __result58__;
                            }
                        }
                        else {
                            struct sFun* __result59__ = default_value;
                            return __result59__;
                        }
                    }
                    struct sFun* __result60__ = default_value;
                    return __result60__;
}

int sLoadNode_sline(struct sLoadNode* self, struct sInfo* info){
    int __result65__ = self->sline;
    return __result65__;
}

char* sLoadNode_sname(struct sLoadNode* self, struct sInfo* info){
void* right_value119;
memset(&right_value119, 0, sizeof(void*));
    char* __result66__ = ((char*)(right_value119=__builtin_string(self->sname)));
    return __result66__;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* right_value189;
struct sLoadNode* result_140;
void* right_value190;
char* __dec_obj103;
void* right_value191;
char* __dec_obj104;
memset(&right_value189, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct sLoadNode*)); /* ddd */
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sLoadNode* __result92__ = (void*)0;
                return __result92__;
            }
            result_140=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value189=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1)))));
            if(right_value189) { come_call_finalizer(sLoadNode_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->name!=((void*)0)) {
                __dec_obj103=result_140->name;
                result_140->name=(char*)come_increment_ref_count(((char*)(right_value190=string_clone(self->name))));
                if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0); }
                if(right_value190) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_140->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj104=result_140->sname;
                result_140->sname=(char*)come_increment_ref_count(((char*)(right_value191=string_clone(self->sname))));
                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0); }
                if(right_value191) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0); }
            }
            struct sLoadNode* __result93__ = result_140;
            if(result_140) { come_call_finalizer(sLoadNode_finalize,result_140, (void*)0, (void*)0, 0, 0, 1); }
            return __result93__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* right_value126;
char* __dec_obj73;
void* right_value127;
char* __dec_obj74;
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
    __dec_obj73=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(name))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
    if(right_value126) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0); }
    self->sline=info->sline;
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(info->sname))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0); }
    if(right_value127) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0); }
    struct sFunLoadNode* __result70__ = self;
    if(self) { come_call_finalizer(sFunLoadNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    return __result70__;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
        if(self!=((void*)0)&&self->name!=((void*)0)) {
            if(self->name) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0); }
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
        }
}

_Bool sFunLoadNode_terminated(){
    _Bool __result71__ = (_Bool)0;
    return __result71__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
struct sFun* fun_84;
void* right_value128;
struct CVALUE* come_value_85;
void* right_value129;
char* __dec_obj75;
struct sType* __dec_obj76;
memset(&fun_84, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value128, 0, sizeof(void*));
memset(&come_value_85, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value129, 0, sizeof(void*));
    fun_84=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(fun_84==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        _Bool __result72__ = (_Bool)0;
        return __result72__;
    }
    else {
        come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value128) { come_call_finalizer(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj75=come_value_85->c_value;
        come_value_85->c_value=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("%s",fun_84->mName))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
        if(right_value129) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0); }
        __dec_obj76=come_value_85->type;
        come_value_85->type=(struct sType*)come_increment_ref_count(fun_84->mLambdaType);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0); }
        come_value_85->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_85));
        if(come_value_85) { come_call_finalizer(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result73__ = (_Bool)1;
    return __result73__;
}

int sFunLoadNode_sline(struct sFunLoadNode* self, struct sInfo* info){
    int __result74__ = self->sline;
    return __result74__;
}

char* sFunLoadNode_sname(struct sFunLoadNode* self, struct sInfo* info){
void* right_value130;
memset(&right_value130, 0, sizeof(void*));
    char* __result75__ = ((char*)(right_value130=__builtin_string(self->sname)));
    return __result75__;
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

static void map$2charphsVarphp_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
int hash_101;
int it_102;
_Bool same_key_exist_119;
char* it2_121;
memset(&hash_101, 0, sizeof(int)); /* ddd */
memset(&it_102, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_119, 0, sizeof(_Bool)); /* ddd */
memset(&it2_121, 0, sizeof(char*)); /* ddd */
        if(self->len*2>=self->size) {
            map$2charphsVarphp_rehash(self);
        }
        hash_101=string_get_hash_key(key)%self->size;
        it_102=hash_101;
        while((_Bool)1) {
            if(self->item_existance[it_102]) {
                if(charp_equals(self->keys[it_102],key)) {
                    if(1) {
                        list$1charpp_remove(self->key_list,self->keys[it_102]);
                        if(self->keys[it_102]) { self->keys[it_102] = come_decrement_ref_count(self->keys[it_102], (void*)0, (void*)0, 0, 0); }
                        self->keys[it_102]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charpp_remove(self->key_list,self->keys[it_102]);
                        self->keys[it_102]=key;
                    }
                    if(1) {
                        if(self->items[it_102]) { come_call_finalizer(sVarp_finalize,self->items[it_102], (void*)0, (void*)0, 0, 0, 0); }
                        self->items[it_102]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_102]=item;
                    }
                    break;
                }
                it_102++;
                if(it_102>=self->size) {
                    it_102=0;
                }
                else if(it_102==hash_101) {
                    fprintf(stderr,"unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_102]=(_Bool)1;
                if(1) {
                    self->keys[it_102]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_102]=key;
                }
                if(1) {
                    self->items[it_102]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_102]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_119=(_Bool)0;
        for(
        it2_121=list$1charpp_begin(self->key_list);
        !list$1charpp_end(self->key_list);
        it_102=list$1charpp_next(self->key_list)
        ){
            if(charp_equals(it2_121,key)) {
                same_key_exist_119=(_Bool)1;
            }
        }
        if(!same_key_exist_119) {
            list$1charpp_push_back(self->key_list,key);
        }
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
        if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_88;
void* right_value136;
char** keys_89;
void* right_value137;
struct sVar** items_90;
void* right_value138;
_Bool* item_existance_91;
int len_92;
char* it_94;
struct sVar* default_value_96;
struct sVar* it2_97;
int hash_98;
int n_99;
struct sVar* default_value_100;
memset(&size_88, 0, sizeof(int)); /* ddd */
memset(&right_value136, 0, sizeof(void*));
memset(&keys_89, 0, sizeof(char**)); /* ddd */
memset(&right_value137, 0, sizeof(void*));
memset(&items_90, 0, sizeof(struct sVar**)); /* ddd */
memset(&right_value138, 0, sizeof(void*));
memset(&item_existance_91, 0, sizeof(_Bool*)); /* ddd */
memset(&len_92, 0, sizeof(int)); /* ddd */
memset(&it_94, 0, sizeof(char*)); /* ddd */
memset(&default_value_96, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_97, 0, sizeof(struct sVar*)); /* ddd */
memset(&hash_98, 0, sizeof(int)); /* ddd */
memset(&n_99, 0, sizeof(int)); /* ddd */
memset(&default_value_100, 0, sizeof(struct sVar*)); /* bbb */
                size_88=self->size*3;
                keys_89=((char**)(right_value136=(char**)come_calloc(1, sizeof(char*)*(1*(size_88)))));
                items_90=((struct sVar**)(right_value137=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_88)))));
                item_existance_91=((_Bool*)(right_value138=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_88)))));
                len_92=0;
                for(
                it_94=map$2charphsVarphp_begin(self);
                !map$2charphsVarphp_end(self);
                it_94=map$2charphsVarphp_next(self)
                ){
                    it2_97=map$2charphsVarphp_at(self,it_94,default_value_96);
                    hash_98=charp_get_hash_key(it_94)%size_88;
                    n_99=hash_98;
                    while((_Bool)1) {
                        if(item_existance_91[n_99]) {
                            n_99++;
                            if(n_99>=size_88) {
                                n_99=0;
                            }
                            else if(n_99==hash_98) {
                                fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_91[n_99]=(_Bool)1;
                            keys_89[n_99]=it_94;
                            items_90[n_99]=map$2charphsVarphp_at(self,it_94,default_value_100);
                            len_92++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_89;
                self->items=items_90;
                self->item_existance=item_existance_91;
                self->size=size_88;
                self->len=len_92;
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
char* result_93;
memset(&result_93, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result76__ = self->key_list->it->item;
                        return __result76__;
                    }
                    memset(&result_93,0,sizeof(char*));
                    char* __result77__ = result_93;
                    return __result77__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
                    _Bool __result78__ = self->key_list->it==((void*)0);
                    return __result78__;
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
char* result_95;
memset(&result_95, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result79__ = self->key_list->it->item;
                        return __result79__;
                    }
                    memset(&result_95,0,sizeof(char*));
                    char* __result80__ = result_95;
                    return __result80__;
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_103;
struct list_item$1charp* it_104;
memset(&it2_103, 0, sizeof(int)); /* ddd */
memset(&it_104, 0, sizeof(struct list_item$1charp*)); /* ddd */
                            it2_103=0;
                            it_104=self->head;
                            while(it_104!=((void*)0)) {
                                if(charp_equals(it_104->item,item)) {
                                    list$1charpp_delete(self,it2_103,it2_103+1);
                                    break;
                                }
                                it2_103++;
                                it_104=it_104->next;
                            }
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_105;
struct list_item$1charp* it_108;
int i_109;
struct list_item$1charp* prev_it_110;
struct list_item$1charp* it_111;
int i_112;
struct list_item$1charp* prev_it_113;
struct list_item$1charp* it_114;
struct list_item$1charp* head_prev_it_115;
struct list_item$1charp* tail_it_116;
int i_117;
struct list_item$1charp* prev_it_118;
memset(&tmp_105, 0, sizeof(int)); /* ddd */
memset(&it_108, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_109, 0, sizeof(int)); /* ddd */
memset(&prev_it_110, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_111, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_112, 0, sizeof(int)); /* ddd */
memset(&prev_it_113, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_114, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_115, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_116, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_117, 0, sizeof(int)); /* ddd */
memset(&prev_it_118, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                        if(head<0) {
                                            head+=self->len;
                                        }
                                        if(tail<0) {
                                            tail+=self->len+1;
                                        }
                                        if(head>tail) {
                                            tmp_105=tail;
                                            tail=head;
                                            head=tmp_105;
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
                                            it_108=self->head;
                                            i_109=0;
                                            while(it_108!=((void*)0)) {
                                                if(i_109<tail) {
                                                    prev_it_110=it_108;
                                                    it_108=it_108->next;
                                                    i_109++;
                                                    if(prev_it_110) { come_call_finalizer(list_item$1charpp_finalize,prev_it_110, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else if(i_109==tail) {
                                                    self->head=it_108;
                                                    self->head->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_108=it_108->next;
                                                    i_109++;
                                                }
                                            }
                                        }
                                        else if(tail==self->len) {
                                            it_111=self->head;
                                            i_112=0;
                                            while(it_111!=((void*)0)) {
                                                if(i_112==head) {
                                                    self->tail=it_111->prev;
                                                    self->tail->next=((void*)0);
                                                }
                                                if(i_112>=head) {
                                                    prev_it_113=it_111;
                                                    it_111=it_111->next;
                                                    i_112++;
                                                    if(prev_it_113) { come_call_finalizer(list_item$1charpp_finalize,prev_it_113, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_111=it_111->next;
                                                    i_112++;
                                                }
                                            }
                                        }
                                        else {
                                            it_114=self->head;
                                            head_prev_it_115=((void*)0);
                                            tail_it_116=((void*)0);
                                            i_117=0;
                                            while(it_114!=((void*)0)) {
                                                if(i_117==head) {
                                                    head_prev_it_115=it_114->prev;
                                                }
                                                if(i_117==tail) {
                                                    tail_it_116=it_114;
                                                }
                                                if(i_117>=head&&i_117<tail) {
                                                    prev_it_118=it_114;
                                                    it_114=it_114->next;
                                                    i_117++;
                                                    if(prev_it_118) { come_call_finalizer(list_item$1charpp_finalize,prev_it_118, (void*)0, (void*)0, 0, 0, 0); }
                                                    self->len--;
                                                }
                                                else {
                                                    it_114=it_114->next;
                                                    i_117++;
                                                }
                                            }
                                            if(head_prev_it_115!=((void*)0)) {
                                                head_prev_it_115->next=tail_it_116;
                                            }
                                            if(tail_it_116!=((void*)0)) {
                                                tail_it_116->prev=head_prev_it_115;
                                            }
                                        }
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_106;
struct list_item$1charp* prev_it_107;
memset(&it_106, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_107, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                it_106=self->head;
                                                while(it_106!=((void*)0)) {
                                                    prev_it_107=it_106;
                                                    it_106=it_106->next;
                                                    if(prev_it_107) { come_call_finalizer(list_item$1charpp_finalize,prev_it_107, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
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

static char* list$1charpp_begin(struct list$1charp* self){
char* result_120;
memset(&result_120, 0, sizeof(char*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                char* __result81__ = self->it->item;
                return __result81__;
            }
            memset(&result_120,0,sizeof(char*));
            char* __result82__ = result_120;
            return __result82__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
            _Bool __result83__ = self->it==((void*)0);
            return __result83__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_122;
memset(&result_122, 0, sizeof(char*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                char* __result84__ = self->it->item;
                return __result84__;
            }
            memset(&result_122,0,sizeof(char*));
            char* __result85__ = result_122;
            return __result85__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value139;
struct list_item$1charp* litem_123;
void* right_value140;
struct list_item$1charp* litem_124;
void* right_value141;
struct list_item$1charp* litem_125;
memset(&right_value139, 0, sizeof(void*));
memset(&litem_123, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value140, 0, sizeof(void*));
memset(&litem_124, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value141, 0, sizeof(void*));
memset(&litem_125, 0, sizeof(struct list_item$1charp*)); /* ddd */
                if(self->len==0) {
                    litem_123=((struct list_item$1charp*)(right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_123->prev=((void*)0);
                    litem_123->next=((void*)0);
                    litem_123->item=item;
                    self->tail=litem_123;
                    self->head=litem_123;
                }
                else if(self->len==1) {
                    litem_124=((struct list_item$1charp*)(right_value140=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_124->prev=self->head;
                    litem_124->next=((void*)0);
                    litem_124->item=item;
                    self->tail=litem_124;
                    self->head->next=litem_124;
                }
                else {
                    litem_125=((struct list_item$1charp*)(right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_125->prev=self->tail;
                    litem_125->next=((void*)0);
                    litem_125->item=item;
                    self->tail->next=litem_125;
                    self->tail=litem_125;
                }
                self->len++;
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value156;
struct list_item$1charph* litem_132;
char* __dec_obj88;
void* right_value157;
struct list_item$1charph* litem_133;
char* __dec_obj89;
void* right_value158;
struct list_item$1charph* litem_134;
char* __dec_obj90;
memset(&right_value156, 0, sizeof(void*));
memset(&litem_132, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value157, 0, sizeof(void*));
memset(&litem_133, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value158, 0, sizeof(void*));
memset(&litem_134, 0, sizeof(struct list_item$1charph*)); /* ddd */
                if(self->len==0) {
                    litem_132=((struct list_item$1charph*)(right_value156=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_132->prev=((void*)0);
                    litem_132->next=((void*)0);
                    __dec_obj88=litem_132->item;
                    litem_132->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_132;
                    self->head=litem_132;
                }
                else if(self->len==1) {
                    litem_133=((struct list_item$1charph*)(right_value157=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_133->prev=self->head;
                    litem_133->next=((void*)0);
                    __dec_obj89=litem_133->item;
                    litem_133->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_133;
                    self->head->next=litem_133;
                }
                else {
                    litem_134=((struct list_item$1charph*)(right_value158=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_134->prev=self->tail;
                    litem_134->next=((void*)0);
                    __dec_obj90=litem_134->item;
                    litem_134->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_134;
                    self->tail=litem_134;
                }
                self->len++;
                if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
                }
}

