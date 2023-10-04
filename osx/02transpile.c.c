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
struct dirent
{
    unsigned long int d_ino;
    long int d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};
struct dirent64
{
    unsigned long int d_ino;
    long int d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};
enum { DT_UNKNOWN=0,DT_FIFO=1,DT_CHR=2,DT_DIR=4,DT_BLK=6,DT_REG=8,DT_LNK=10,DT_SOCK=12,DT_WHT=14};
typedef struct __dirstream DIR;
_Bool gComelang;
_Bool gGC;
char* gProgramName;
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};
struct __current_stack1__
{
    struct sInfo* info_200;
    int* argc;
    char*** argv;
    struct buffer** clang_option_173;
    struct list$1charph** files_174;
    struct list$1charph** object_files_175;
    _Bool* output_object_file_176;
    _Bool* output_cpp_file_177;
    _Bool* output_source_file_flag_178;
    char** output_file_name_179;
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

int closedir(struct __dirstream* __dirp);

struct __dirstream* opendir(const char* __name);

struct __dirstream* fdopendir(int __fd);

struct dirent* readdir(struct __dirstream* __dirp);

struct dirent64* readdir64(struct __dirstream* __dirp);

int readdir_r(struct __dirstream* __dirp, struct dirent* __entry, struct dirent** __result);

int readdir64_r(struct __dirstream* __dirp, struct dirent64* __entry, struct dirent64** __result);

void rewinddir(struct __dirstream* __dirp);

void seekdir(struct __dirstream* __dirp, long int __pos);

long int telldir(struct __dirstream* __dirp);

int dirfd(struct __dirstream* __dirp);

int scandir(const char* __dir, struct dirent*** __namelist, int (*__selector)(const struct dirent*), int (*__cmp)(const struct dirent**,const struct dirent**));

int scandir64(const char* __dir, struct dirent64*** __namelist, int (*__selector)(const struct dirent64*), int (*__cmp)(const struct dirent64**,const struct dirent64**));

int scandirat(int __dfd, const char* __dir, struct dirent*** __namelist, int (*__selector)(const struct dirent*), int (*__cmp)(const struct dirent**,const struct dirent**));

int scandirat64(int __dfd, const char* __dir, struct dirent64*** __namelist, int (*__selector)(const struct dirent64*), int (*__cmp)(const struct dirent64**,const struct dirent64**));

int alphasort(const struct dirent** __e1, const struct dirent** __e2);

int alphasort64(const struct dirent64** __e1, const struct dirent64** __e2);

long int getdirentries(int __fd, char* __buf, int __nbytes, long int* __basep);

long int getdirentries64(int __fd, char* __buf, int __nbytes, long int* __basep);

int versionsort(const struct dirent** __e1, const struct dirent** __e2);

int versionsort64(const struct dirent64** __e1, const struct dirent64** __e2);

long int getdents64(int __fd, void* __buffer, int __length);

static void va_list_finalize(va_list* self);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static void sModule_finalize(struct sModule* self);
static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVarp_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_initialize(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sClass_finalize(struct sClass* self);
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sTypep_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNodep_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void list$1charphp_push_back2(struct list$1charph* self, char* item);
static void sTypep_finalize(struct sType* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static void list$1charpp_remove(struct list$1charp* self, char* item);
static void list$1charpp_delete(struct list$1charp* self, int head, int tail);
static void list$1charpp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void list$1charpp_push_back(struct list$1charp* self, char* item);
static void sVar_finalize(struct sVar* self);
static struct sVar* sVarp_clone(struct sVar* self);
static void sFun_finalize(struct sFun* self);
void init_classes(struct sInfo* info);

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static void sClassp_finalize(struct sClass* self);
static void map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static void list$1tuple2$2charphsTypephphp_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
void init_module(struct sInfo* info);

static struct map$2charphsFunph* map$2charphsFunphp_initialize(struct map$2charphsFunph* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void sFunp_finalize(struct sFun* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_initialize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void sGenericsFunp_finalize(struct sGenericsFun* self);
static struct map$2charphsClassph* map$2charphsClassphp_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static struct map$2charphsTypeph* map$2charphsTypephp_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sInfo_finalize(struct sInfo* self);
static int list$1charphp_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int index);
static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value);
void method_block1_02transpilec(struct __current_stack1__* parent);

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






int come_main_v2(int argc, char** argv){
void* right_value215;
void* right_value216;
struct buffer* clang_option_173;
void* right_value217;
void* right_value218;
struct list$1charph* files_174;
void* right_value219;
void* right_value220;
struct list$1charph* object_files_175;
_Bool output_object_file_176;
_Bool output_cpp_file_177;
_Bool output_source_file_flag_178;
char* output_file_name_179;
int i_180;
void* right_value221;
char* __dec_obj77;
void* right_value222;
void* right_value223;
void* right_value224;
char* it_181;
struct sInfo info_182;
void* right_value225;
char* __dec_obj78;
void* right_value226;
char* __dec_obj79;
void* right_value227;
void* right_value233;
struct map$2charphsFunph* __dec_obj81;
void* right_value234;
void* right_value240;
struct map$2charphsGenericsFunph* __dec_obj83;
void* right_value241;
void* right_value247;
struct map$2charphsClassph* __dec_obj85;
void* right_value248;
void* right_value254;
struct map$2charphsTypeph* __dec_obj87;
void* right_value255;
void* right_value256;
struct sModule* __dec_obj88;
void* right_value257;
void* right_value258;
struct list$1sRightValueObjectph* __dec_obj89;
void* right_value259;
void* right_value260;
struct list$1CVALUEph* __dec_obj90;
void* right_value261;
void* right_value262;
struct sVarTable* __dec_obj91;
void* right_value263;
void* right_value264;
struct sVarTable* lv_table_199;
void* right_value265;
void* right_value266;
struct list$1charph* __dec_obj92;
void* right_value267;
void* right_value268;
struct map$2charphsClassph* __dec_obj93;
void* right_value269;
void* right_value270;
void* right_value271;
struct buffer* __dec_obj94;
void* right_value272;
char* __dec_obj95;
struct sInfo info_200;
void* right_value273;
char* __dec_obj96;
void* right_value274;
char* __dec_obj97;
void* right_value275;
char* __dec_obj98;
struct __current_stack1__ __current_stack1__;
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&clang_option_173, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&files_174, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&object_files_175, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&output_object_file_176, 0, sizeof(_Bool)); /* ddd */
memset(&output_cpp_file_177, 0, sizeof(_Bool)); /* ddd */
memset(&output_source_file_flag_178, 0, sizeof(_Bool)); /* ddd */
memset(&output_file_name_179, 0, sizeof(char*)); /* ddd */
memset(&i_180, 0, sizeof(int)); /* ddd */
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&it_181, 0, sizeof(char*)); /* ddd */
memset(&info_182, 0, sizeof(struct sInfo)); /* bbb */
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&lv_table_199, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&info_200, 0, sizeof(struct sInfo)); /* bbb */
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
    gProgramName=argv[0];
    clang_option_173=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value216=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value215=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value215) { come_call_finalizer(buffer_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value216) { come_call_finalizer(buffer_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
    files_174=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value218=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value217=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(right_value218) { come_call_finalizer(list$1charphp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0); }
    object_files_175=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value220=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value219=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(right_value220) { come_call_finalizer(list$1charphp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0); }
    output_object_file_176=(_Bool)0;
    output_cpp_file_177=(_Bool)0;
    output_source_file_flag_178=(_Bool)0;
    output_file_name_179=((void*)0);
    for(
    i_180=1;
    i_180<argc;
    i_180++
    ){
        if(charp_operator_equals(argv[i_180],"-o")&&i_180+1<argc) {
            __dec_obj77=output_file_name_179;
            output_file_name_179=(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(argv[i_180+1]))));
            if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0); }
            if(right_value221) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0); }
            i_180++;
        }
        else if(charp_operator_equals(argv[i_180],"-g")) {
            buffer_append_str(clang_option_173,"-g ");
        }
        else if(charp_operator_equals(argv[i_180],"-s")||charp_operator_equals(argv[i_180],"-S")) {
            output_source_file_flag_178=(_Bool)1;
        }
        else if(charp_operator_equals(argv[i_180],"-c")) {
            output_object_file_176=(_Bool)1;
        }
        else if(charp_operator_equals(argv[i_180],"-E")) {
            output_cpp_file_177=(_Bool)1;
        }
        else if(argv[i_180][0]==45) {
            buffer_append_str(clang_option_173,((char*)(right_value222=charp_operator_add(argv[i_180]," "))));
            if(right_value222) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0); }
        }
        else if(memcmp(argv[i_180]+strlen(argv[i_180])-2,".o",2)==0) {
            list$1charphp_push_back(object_files_175,(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(argv[i_180])))));
            if(right_value223) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0); }
        }
        else {
            list$1charphp_push_back(files_174,(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string(argv[i_180])))));
            if(right_value224) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0); }
        }
    }
    come_init_v5();
    for(
    it_181=list$1charphp_begin((files_174));
    !list$1charphp_end((files_174));
    it_181=list$1charphp_next((files_174))
    ){
        __dec_obj78=info_182.sname;
        info_182.sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(it_181))));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0); }
        if(right_value225) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0); }
        info_182.sline=1;
        info_182.err_num=0;
        __dec_obj79=info_182.clang_option;
        info_182.clang_option=(char*)come_increment_ref_count(((char*)(right_value226=buffer_to_string(clang_option_173))));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0); }
        if(right_value226) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0); }
        info_182.no_output_err=(_Bool)0;
        __dec_obj81=info_182.funcs;
        info_182.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value233=map$2charphsFunphp_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(right_value227=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1)))))))));
        if(__dec_obj81) { come_call_finalizer(map$2charphsFunphp_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value233) { come_call_finalizer(map$2charphsFunphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj83=info_182.generics_funcs;
        info_182.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value240=map$2charphsGenericsFunphp_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(right_value234=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1)))))))));
        if(__dec_obj83) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value240) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj85=info_182.classes;
        info_182.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value247=map$2charphsClassphp_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value241=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1)))))))));
        if(__dec_obj85) { come_call_finalizer(map$2charphsClassphp_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value247) { come_call_finalizer(map$2charphsClassphp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj87=info_182.types;
        info_182.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value254=map$2charphsTypephp_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(right_value248=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1)))))))));
        if(__dec_obj87) { come_call_finalizer(map$2charphsTypephp_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value254) { come_call_finalizer(map$2charphsTypephp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj88=info_182.module;
        info_182.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(right_value256=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(right_value255=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1)))))))));
        if(__dec_obj88) { come_call_finalizer(sModule_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value255) { come_call_finalizer(sModule_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value256) { come_call_finalizer(sModule_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj89=info_182.right_value_objects;
        info_182.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value258=list$1sRightValueObjectphp_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value257=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1)))))))));
        if(__dec_obj89) { come_call_finalizer(list$1sRightValueObjectphp_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value258) { come_call_finalizer(list$1sRightValueObjectphp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj90=info_182.stack;
        info_182.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value260=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value259=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
        if(__dec_obj90) { come_call_finalizer(list$1CVALUEphp_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value260) { come_call_finalizer(list$1CVALUEphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj91=info_182.gv_table;
        info_182.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value262=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value261=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1))))),(_Bool)1,((void*)0)))));
        if(__dec_obj91) { come_call_finalizer(sVarTable_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value261) { come_call_finalizer(sVarTable_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value262) { come_call_finalizer(sVarTable_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0); }
        lv_table_199=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value264=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value263=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1))))),(_Bool)0,((void*)0)))));
        if(right_value263) { come_call_finalizer(sVarTable_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value264) { come_call_finalizer(sVarTable_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0); }
        info_182.lv_table=lv_table_199;
        __dec_obj92=info_182.generics_type_names;
        info_182.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value266=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value265=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
        if(__dec_obj92) { come_call_finalizer(list$1charphp_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value266) { come_call_finalizer(list$1charphp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj93=info_182.generics_classes;
        info_182.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value268=map$2charphsClassphp_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(right_value267=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1)))))))));
        if(__dec_obj93) { come_call_finalizer(map$2charphsClassphp_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value268) { come_call_finalizer(map$2charphsClassphp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0); }
        init_classes(&info_182);
        init_module(&info_182);
        if(!cpp(&info_182)) {
            printf("%s %d: transpile failed\n",info_182.sname,info_182.sline);
            exit(2);
        }
        __dec_obj94=info_182.source;
        info_182.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value271=string_to_buffer(((char*)(right_value270=string_read(((char*)(right_value269=xsprintf("%s.i",it_181))))))))));
        if(__dec_obj94) { come_call_finalizer(buffer_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value269) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0); }
        if(right_value270) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0); }
        if(right_value271) { come_call_finalizer(buffer_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0); }
        info_182.p=info_182.source->buf;
        info_182.head=info_182.source->buf;
        if(output_file_name_179) {
            __dec_obj95=info_182.output_file_name;
            info_182.output_file_name=(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string(output_file_name_179))));
            if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0); }
            if(right_value272) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0); }
        }
        else {
            info_182.output_file_name=((void*)0);
        }
        if(!output_cpp_file_177) {
            transpile_v5(&info_182);
            if(!output_source_file_v3(&info_182)) {
                printf("%s %d: output source file faield\n",info_182.sname,info_182.sline);
                exit(2);
            }
            if(info_182.err_num>0) {
                printf("transpile error. err num %d\n",info_182.err_num);
                exit(2);
            }
            else {
                if(!compile(&info_182,output_object_file_176,object_files_175)) {
                    printf("%s %d: compile faield\n",info_182.sname,info_182.sline);
                    exit(1);
                }
            }
        }
        if((&info_182)) { come_call_finalizer(sInfo_finalize,(&info_182), (void*)0, (void*)0, 1, 0, 0); }
        if(lv_table_199) { come_call_finalizer(sVarTable_finalize,lv_table_199, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(!output_object_file_176&&!output_cpp_file_177&&(list$1charphp_length(files_174)>0||list$1charphp_length(object_files_175)>0)) {
        __dec_obj96=info_200.sname;
        info_200.sname=(char*)come_increment_ref_count(((char*)(right_value273=charp_clone(list$1charphp_operator_load_element(files_174,0)))));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0); }
        if(right_value273) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0); }
        __dec_obj97=info_200.clang_option;
        info_200.clang_option=(char*)come_increment_ref_count(((char*)(right_value274=buffer_to_string(clang_option_173))));
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0); }
        if(right_value274) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0); }
        if(output_file_name_179) {
            __dec_obj98=info_200.output_file_name;
            info_200.output_file_name=(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string(output_file_name_179))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0); }
            if(right_value275) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0); }
        }
        else {
            info_200.output_file_name=((void*)0);
        }
        __current_stack1__.info_200 = &info_200;
        __current_stack1__.argc = &argc;
        __current_stack1__.argv = &argv;
        __current_stack1__.clang_option_173 = &clang_option_173;
        __current_stack1__.files_174 = &files_174;
        __current_stack1__.object_files_175 = &object_files_175;
        __current_stack1__.output_object_file_176 = &output_object_file_176;
        __current_stack1__.output_cpp_file_177 = &output_cpp_file_177;
        __current_stack1__.output_source_file_flag_178 = &output_source_file_flag_178;
        __current_stack1__.output_file_name_179 = &output_file_name_179;
        bool_expect(linker(&info_200,object_files_175),&__current_stack1__,method_block1_02transpilec);
        if((&info_200)) { come_call_finalizer(sInfo_finalize,(&info_200), (void*)0, (void*)0, 1, 0, 0); }
    }
    come_final_v5();
    int __result103__ = 0;
    if(clang_option_173) { come_call_finalizer(buffer_finalize,clang_option_173, (void*)0, (void*)0, 0, 0, 0); }
    if(files_174) { come_call_finalizer(list$1charphp_finalize,files_174, (void*)0, (void*)0, 0, 0, 0); }
    if(object_files_175) { come_call_finalizer(list$1charphp_finalize,object_files_175, (void*)0, (void*)0, 0, 0, 0); }
    if(output_file_name_179) { output_file_name_179 = come_decrement_ref_count(output_file_name_179, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result103__;
come_release_malloced_mem();
}

void come_init_v2(){
    gComelang=(_Bool)0;
    gGC=(_Bool)0;
come_release_malloced_mem();
}

void come_final_v2(){
come_release_malloced_mem();
}

void err_msg(struct sInfo* info, char* msg, ...){
va_list args_1;
memset(&args_1, 0, sizeof(va_list)); /* bbb */
    if(!info->no_output_err) {
        char msg2_0[2048];
        memset(&msg2_0, 0, sizeof(msg2_0)); /* aaa */
        __builtin_va_start(args_1,msg);
        vsnprintf(msg2_0,2048,msg,args_1);
        __builtin_va_end(args_1);
        printf("%s %d: %s\n",info->sname,info->sline,msg2_0);
        info->err_num++;
        if((&args_1)) { come_call_finalizer(va_list_finalize,(&args_1), (void*)0, (void*)0, 1, 0, 0); }
    }
come_release_malloced_mem();
}

int transpile_v2(struct sInfo* info){
    int __result7__ = 0;
    come_release_malloced_mem();
    return __result7__;
come_release_malloced_mem();
}

_Bool output_source_file_v2(struct sInfo* info){
void* right_value0;
char* output_file_name_2;
void* right_value1;
void* right_value2;
memset(&right_value0, 0, sizeof(void*));
memset(&output_file_name_2, 0, sizeof(char*)); /* ddd */
memset(&right_value1, 0, sizeof(void*));
memset(&right_value2, 0, sizeof(void*));
    output_file_name_2=(char*)come_increment_ref_count(((char*)(right_value0=xsprintf("%s.c",info->sname))));
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    string_write(((char*)(right_value1=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_2,(_Bool)0);
    if(right_value1) { right_value1 = come_decrement_ref_count(right_value1, (void*)0, (void*)0, 1, 0); }
    if(right_value2) { right_value2 = come_decrement_ref_count(right_value2, (void*)0, (void*)0, 1, 0); }
    _Bool __result8__ = (_Bool)1;
    if(output_file_name_2) { output_file_name_2 = come_decrement_ref_count(output_file_name_2, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result8__;
come_release_malloced_mem();
}

struct sModule* sModule_initialize(struct sModule* self){
void* right_value30;
void* right_value31;
struct buffer* __dec_obj10;
void* right_value32;
void* right_value33;
struct buffer* __dec_obj11;
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
    __dec_obj10=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value30=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(__dec_obj10) { come_call_finalizer(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value30) { come_call_finalizer(buffer_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value31) { come_call_finalizer(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj11=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value33=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(__dec_obj11) { come_call_finalizer(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value32) { come_call_finalizer(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value33) { come_call_finalizer(buffer_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0); }
    self->mLastCode=((void*)0);
    self->mLastCode2=((void*)0);
    struct sModule* __result20__ = self;
    if(self) { come_call_finalizer(sModule_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result20__;
come_release_malloced_mem();
}

struct sType* sType_initialize(struct sType* self, char* name, struct sInfo* info, _Bool heap){
int pointer_num_41;
char* p_42;
void* right_value41;
void* right_value42;
char* name2_43;
struct sClass* klass_47;
struct sClass* generics_class_48;
void* right_value43;
void* right_value44;
char* __dec_obj14;
void* right_value45;
void* right_value46;
struct tuple1$1sTypeph* __dec_obj16;
void* right_value47;
void* right_value48;
struct list$1sTypeph* __dec_obj17;
void* right_value49;
void* right_value50;
struct list$1sNodeph* __dec_obj18;
void* right_value51;
void* right_value52;
struct list$1sTypeph* __dec_obj19;
void* right_value53;
void* right_value54;
struct list$1charph* __dec_obj20;
void* right_value55;
char* __dec_obj21;
memset(&pointer_num_41, 0, sizeof(int)); /* ddd */
memset(&p_42, 0, sizeof(char*)); /* ddd */
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&name2_43, 0, sizeof(char*)); /* ddd */
memset(&klass_47, 0, sizeof(struct sClass*)); /* ddd */
memset(&generics_class_48, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
    pointer_num_41=0;
    p_42=name;
    while(*p_42) {
        if(xisalpha(*p_42)) {
            p_42++;
        }
        else {
            break;
        }
    }
    while(*p_42==42) {
        pointer_num_41++;
        p_42++;
    }
    name2_43=(char*)come_increment_ref_count(((char*)(right_value42=string_substring(((char*)(right_value41=__builtin_string(name))),0,-pointer_num_41-1))));
    if(right_value41) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0); }
    if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
    klass_47=map$2charphsClassphp_operator_load_element(info->classes,name2_43);
    generics_class_48=map$2charphsClassphp_operator_load_element(info->generics_classes,name2_43);
    if(klass_47==((void*)0)&&generics_class_48==((void*)0)) {
        err_msg(info,"class not found(%s)(1)\n",name2_43);
    }
    if(klass_47) {
        self->mClass=klass_47;
    }
    else {
        self->mClass=((struct sClass*)(right_value43=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))));
        __dec_obj14=self->mClass->mName;
        self->mClass->mName=(char*)come_increment_ref_count(((char*)(right_value44=__builtin_string(name))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
        if(right_value44) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0); }
    }
    __dec_obj16=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value46=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value45=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1))))),((void*)0)))));
    if(__dec_obj16) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value46) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj17=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value48=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value47=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
    if(__dec_obj17) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value48) { come_call_finalizer(list$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj18=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value50=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value49=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
    if(__dec_obj18) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value50) { come_call_finalizer(list$1sNodephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
    self->mOmitArrayNum=(_Bool)0;
    __dec_obj19=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value52=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
    if(__dec_obj19) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value52) { come_call_finalizer(list$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj20=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(__dec_obj20) { come_call_finalizer(list$1charphp_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value54) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0); }
    self->mVarArgs=(_Bool)0;
    self->mResultType=((void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mDummyHeap=(_Bool)0;
    self->mNoHeap=(_Bool)0;
    self->mRefference=(_Bool)0;
    self->mPointerNum=pointer_num_41;
    self->mNoArrayPointerNum=0;
    self->mSizeNum=0;
    self->mDynamicArrayNum=0;
    self->mTypeOfExpression=0;
    __dec_obj21=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(""))));
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
    if(right_value55) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0); }
    self->mOriginalPointerNum=0;
    self->mFunctionParam=(_Bool)0;
    struct sType* __result33__ = self;
    if(self) { come_call_finalizer(sType_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name2_43) { name2_43 = come_decrement_ref_count(name2_43, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result33__;
come_release_malloced_mem();
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* right_value34;
void* right_value40;
struct map$2charphsVarph* __dec_obj13;
static int id_40=0;
memset(&right_value34, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
    __dec_obj13=self->mVars;
    self->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value40=map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value34=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1)))))))));
    if(__dec_obj13) { come_call_finalizer(map$2charphsVarphp_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value40) { come_call_finalizer(map$2charphsVarphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
    self->mGlobal=global;
    self->mParent=parent;
    self->mID=++id_40;
    struct sVarTable* __result23__ = self;
    if(self) { come_call_finalizer(sVarTable_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result23__;
come_release_malloced_mem();
}

void sVarTable_finalize(struct sVarTable* self){
    if(self->mVars) { come_call_finalizer(map$2charphsVarphp_finalize,self->mVars, (void*)0, (void*)0, 0, 0, 0); }
come_release_malloced_mem();
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_){
void* right_value56;
char* __dec_obj22;
void* right_value57;
void* right_value58;
struct list$1tuple2$2charphsTypephph* __dec_obj23;
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    __dec_obj22=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value56=__builtin_string(name))));
    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
    if(right_value56) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0); }
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj23=self->mFields;
    self->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value58=list$1tuple2$2charphsTypephphp_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value57=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1)))))))));
    if(__dec_obj23) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value58) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0); }
    struct sClass* __result35__ = self;
    if(self) { come_call_finalizer(sClass_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result35__;
come_release_malloced_mem();
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, struct sInfo* info){
char* __dec_obj24;
struct sType* __dec_obj25;
struct list$1sTypeph* __dec_obj26;
struct list$1charph* __dec_obj27;
struct list$1charph* __dec_obj28;
void* right_value59;
void* right_value60;
struct sType* __dec_obj29;
struct sType* it_52;
void* right_value103;
char* it_76;
void* right_value104;
void* right_value105;
void* right_value106;
struct tuple1$1sTypeph* __dec_obj59;
void* right_value107;
void* right_value108;
struct buffer* __dec_obj60;
void* right_value109;
void* right_value110;
struct buffer* __dec_obj61;
void* right_value111;
void* right_value112;
struct buffer* __dec_obj62;
void* right_value113;
void* right_value114;
struct buffer* __dec_obj63;
void* right_value136;
struct sBlock* __dec_obj70;
char* __dec_obj71;
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value103, 0, sizeof(void*));
memset(&it_76, 0, sizeof(char*)); /* ddd */
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
memset(&right_value136, 0, sizeof(void*));
    __dec_obj24=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
    __dec_obj25=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj26=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    if(__dec_obj26) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj27=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    if(__dec_obj27) { come_call_finalizer(list$1charphp_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj28=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    if(__dec_obj28) { come_call_finalizer(list$1charphp_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0); }
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    __dec_obj29=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value59=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"lambda",info,(_Bool)0))));
    if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value59) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value60) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_52=list$1sTypephp_begin((param_types));
    !list$1sTypephp_end((param_types));
    it_52=list$1sTypephp_next((param_types))
    ){
        list$1sTypephp_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sTypep_clone(it_52)))));
        if(right_value103) { come_call_finalizer(sTypep_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
    }
    for(
    it_76=list$1charphp_begin((param_names));
    !list$1charphp_end((param_names));
    it_76=list$1charphp_next((param_names))
    ){
        list$1charphp_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(((char*)(right_value104=charp_clone(it_76)))));
        if(right_value104) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0); }
    }
    __dec_obj59=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=tuple1$1sTypephp_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value105=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1))))),(struct sType*)come_increment_ref_count(result_type)))));
    if(__dec_obj59) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value106) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0); }
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj60=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value108=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value107=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(__dec_obj60) { come_call_finalizer(buffer_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value107) { come_call_finalizer(buffer_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value108) { come_call_finalizer(buffer_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj61=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value110=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value109=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(__dec_obj61) { come_call_finalizer(buffer_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value109) { come_call_finalizer(buffer_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value110) { come_call_finalizer(buffer_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj62=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value112=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value111=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(__dec_obj62) { come_call_finalizer(buffer_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value111) { come_call_finalizer(buffer_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value112) { come_call_finalizer(buffer_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj63=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value114=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value113=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(__dec_obj63) { come_call_finalizer(buffer_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value113) { come_call_finalizer(buffer_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value114) { come_call_finalizer(buffer_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj70=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value136=sBlock_clone(block))));
    if(__dec_obj70) { come_call_finalizer(sBlock_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value136) { come_call_finalizer(sBlock_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj71=self->mComeHeader;
    self->mComeHeader=(char*)come_increment_ref_count(come_header);
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
    struct sFun* __result77__ = self;
    if(self) { come_call_finalizer(sFun_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(result_type) { come_call_finalizer(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1); }
    if(param_types) { come_call_finalizer(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1); }
    if(param_names) { come_call_finalizer(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1); }
    if(param_default_parametors) { come_call_finalizer(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1); }
    if(block) { come_call_finalizer(sBlock_finalize,block, (void*)0, (void*)0, 0, 0, 1); }
    if(come_header) { come_header = come_decrement_ref_count(come_header, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result77__;
come_release_malloced_mem();
}

static void va_list_finalize(va_list* self){
        come_release_malloced_mem();
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_3;
char* output_file_name_4;
void* right_value3;
char* __dec_obj1;
void* right_value4;
char* __dec_obj2;
void* right_value5;
void* right_value6;
struct buffer* include_files_5;
struct __dirstream* dir_6;
struct dirent* entry_7;
void* right_value7;
char* ext_8;
void* right_value8;
char* dname_9;
void* right_value9;
void* right_value10;
int rc_11;
void* right_value11;
int rc_13;
int rc_14;
void* right_value12;
void* right_value13;
memset(&input_file_name_3, 0, sizeof(char*)); /* ddd */
memset(&output_file_name_4, 0, sizeof(char*)); /* bbb */
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&include_files_5, 0, sizeof(struct buffer*)); /* ddd */
memset(&dir_6, 0, sizeof(struct __dirstream*)); /* ddd */
memset(&entry_7, 0, sizeof(struct dirent*)); /* bbb */
memset(&right_value7, 0, sizeof(void*));
memset(&ext_8, 0, sizeof(char*)); /* ddd */
memset(&right_value8, 0, sizeof(void*));
memset(&dname_9, 0, sizeof(char*)); /* ddd */
memset(&right_value9, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
memset(&rc_11, 0, sizeof(int)); /* ddd */
memset(&right_value11, 0, sizeof(void*));
memset(&rc_13, 0, sizeof(int)); /* ddd */
memset(&rc_14, 0, sizeof(int)); /* ddd */
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
    input_file_name_3=(char*)come_increment_ref_count(info->sname);
    if(info->output_file_name) {
        __dec_obj1=output_file_name_4;
        output_file_name_4=(char*)come_increment_ref_count(((char*)(right_value3=string_operator_add(info->output_file_name,".i"))));
        if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
        if(right_value3) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0); }
    }
    else {
        __dec_obj2=output_file_name_4;
        output_file_name_4=(char*)come_increment_ref_count(((char*)(right_value4=string_operator_add(info->sname,".i"))));
        if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
        if(right_value4) { right_value4 = come_decrement_ref_count(right_value4, (void*)0, (void*)0, 1, 0); }
    }
    include_files_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value5) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value6) { come_call_finalizer(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
    dir_6=opendir(".");
    if(dir_6==((void*)0)) {
        _Bool __result9__ = (_Bool)0;
        come_release_malloced_mem();
        return __result9__;
    }
    while(entry_7=readdir(dir_6)) {
        ext_8=(char*)come_increment_ref_count(((char*)(right_value7=xextname(entry_7->d_name))));
        if(right_value7) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0); }
        dname_9=(char*)come_increment_ref_count(((char*)(right_value8=xdirname(entry_7->d_name))));
        if(right_value8) { right_value8 = come_decrement_ref_count(right_value8, (void*)0, (void*)0, 1, 0); }
        if(string_operator_equals(ext_8,"ach")&&entry_7->d_name!=((char*)(right_value9=xsprintf("%s.ach",info->sname)))&&string_operator_equals(dname_9,"")) {
            buffer_append_str(include_files_5,((char*)(right_value10=xsprintf("-include %s ",entry_7->d_name))));
            if(right_value10) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0); }
        }
        if(right_value9) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0); }
        if(ext_8) { ext_8 = come_decrement_ref_count(ext_8, (void*)0, (void*)0, 0, 0); }
        if(dname_9) { dname_9 = come_decrement_ref_count(dname_9, (void*)0, (void*)0, 0, 0); }
    }
    closedir(dir_6);
    char cmd_10[1024];
    memset(&cmd_10, 0, sizeof(cmd_10)); /* aaa */
    snprintf(cmd_10,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    rc_11=system(cmd_10);
    if(rc_11==0) {
        char cmd_12[4048];
        memset(&cmd_12, 0, sizeof(cmd_12)); /* aaa */
        snprintf(cmd_12,4048,"/opt/homebrew/opt/llvm/bin/clang-cpp -lang-c -I. -I/usr/local/include -DCOMELANG2 -D__DARWIN_ARM__ -U__GNUC__ %s %s > %s",((char*)(right_value11=buffer_to_string(include_files_5))),input_file_name_3,output_file_name_4);
        if(right_value11) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0); }
        puts(cmd_12);
        rc_13=system(cmd_12);
        if(rc_13!=0) {
            printf("failed to cpp(2) (%s)\n",cmd_12);
            exit(5);
        }
    }
    else {
        rc_14=system(cmd_10);
        if(rc_14!=0) {
            snprintf(cmd_10,1024,"cpp -lang-c -I. -DCOMELANG2 -U__GNUC__ %s %s > %s",((char*)(right_value12=buffer_to_string(include_files_5))),input_file_name_3,output_file_name_4);
            if(right_value12) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0); }
            puts(cmd_10);
            rc_14=system(cmd_10);
            if(rc_14!=0) {
                char cmd_15[1024];
                memset(&cmd_15, 0, sizeof(cmd_15)); /* aaa */
                snprintf(cmd_15,1024,"cpp %s -I. -C %s > %s",((char*)(right_value13=buffer_to_string(include_files_5))),input_file_name_3,output_file_name_4);
                if(right_value13) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0); }
                puts(cmd_15);
                rc_14=system(cmd_15);
                if(rc_14!=0) {
                    printf("failed to cpp(2) (%s)\n",cmd_15);
                    exit(5);
                }
            }
        }
    }
    _Bool __result10__ = (_Bool)1;
    if(input_file_name_3) { input_file_name_3 = come_decrement_ref_count(input_file_name_3, (void*)0, (void*)0, 0, 0); }
    if(output_file_name_4) { output_file_name_4 = come_decrement_ref_count(output_file_name_4, (void*)0, (void*)0, 0, 0); }
    if(include_files_5) { come_call_finalizer(buffer_finalize,include_files_5, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result10__;
come_release_malloced_mem();
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* right_value14;
char* input_file_name_16;
char* output_file_name_17;
void* right_value15;
char* __dec_obj3;
void* right_value16;
char* __dec_obj4;
void* right_value17;
char* command_18;
int rc_19;
void* right_value21;
memset(&right_value14, 0, sizeof(void*));
memset(&input_file_name_16, 0, sizeof(char*)); /* ddd */
memset(&output_file_name_17, 0, sizeof(char*)); /* ddd */
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&command_18, 0, sizeof(char*)); /* ddd */
memset(&rc_19, 0, sizeof(int)); /* ddd */
memset(&right_value21, 0, sizeof(void*));
    input_file_name_16=(char*)come_increment_ref_count(((char*)(right_value14=string_operator_add(info->sname,".c"))));
    if(right_value14) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0); }
    output_file_name_17=((void*)0);
    if(info->output_file_name) {
        __dec_obj3=output_file_name_17;
        output_file_name_17=(char*)come_increment_ref_count(((char*)(right_value15=__builtin_string(info->output_file_name))));
        if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
        if(right_value15) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0); }
    }
    else {
        __dec_obj4=output_file_name_17;
        output_file_name_17=(char*)come_increment_ref_count(((char*)(right_value16=string_operator_add(info->sname,".o"))));
        if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
        if(right_value16) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0); }
    }
    command_18=(char*)come_increment_ref_count(((char*)(right_value17=xsprintf("clang -o %s -c %s %s",output_file_name_17,input_file_name_16,info->clang_option))));
    if(right_value17) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0); }
    puts(command_18);
    rc_19=system(command_18);
    if(rc_19!=0) {
        err_msg(info,"clang is faield");
        _Bool __result11__ = (_Bool)0;
        come_release_malloced_mem();
        return __result11__;
    }
    if(!output_object_file) {
        list$1charphp_push_back(object_files,(char*)come_increment_ref_count(((char*)(right_value21=__builtin_string(output_file_name_17)))));
        if(right_value21) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0); }
    }
    _Bool __result12__ = (_Bool)1;
    if(input_file_name_16) { input_file_name_16 = come_decrement_ref_count(input_file_name_16, (void*)0, (void*)0, 0, 0); }
    if(output_file_name_17) { output_file_name_17 = come_decrement_ref_count(output_file_name_17, (void*)0, (void*)0, 0, 0); }
    if(command_18) { command_18 = come_decrement_ref_count(command_18, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result12__;
come_release_malloced_mem();
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value18;
struct list_item$1charph* litem_20;
char* __dec_obj5;
void* right_value19;
struct list_item$1charph* litem_21;
char* __dec_obj6;
void* right_value20;
struct list_item$1charph* litem_22;
char* __dec_obj7;
memset(&right_value18, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value19, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value20, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*)); /* ddd */
            if(self->len==0) {
                litem_20=((struct list_item$1charph*)(right_value18=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_20->prev=((void*)0);
                litem_20->next=((void*)0);
                __dec_obj5=litem_20->item;
                litem_20->item=(char*)come_increment_ref_count(item);
                if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
                self->tail=litem_20;
                self->head=litem_20;
            }
            else if(self->len==1) {
                litem_21=((struct list_item$1charph*)(right_value19=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_21->prev=self->head;
                litem_21->next=((void*)0);
                __dec_obj6=litem_21->item;
                litem_21->item=(char*)come_increment_ref_count(item);
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                self->tail=litem_21;
                self->head->next=litem_21;
            }
            else {
                litem_22=((struct list_item$1charph*)(right_value20=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_22->prev=self->tail;
                litem_22->next=((void*)0);
                __dec_obj7=litem_22->item;
                litem_22->item=(char*)come_increment_ref_count(item);
                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
                self->tail->next=litem_22;
                self->tail=litem_22;
            }
            self->len++;
            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
        come_release_malloced_mem();
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
char* output_file_name_23;
void* right_value22;
char* __dec_obj8;
void* right_value23;
char* __dec_obj9;
void* right_value24;
void* right_value25;
struct buffer* command_24;
void* right_value26;
char* it_26;
void* right_value27;
void* right_value28;
void* right_value29;
int rc_28;
memset(&output_file_name_23, 0, sizeof(char*)); /* ddd */
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&command_24, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value26, 0, sizeof(void*));
memset(&it_26, 0, sizeof(char*)); /* ddd */
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&rc_28, 0, sizeof(int)); /* ddd */
    output_file_name_23=((void*)0);
    if(info->output_file_name) {
        __dec_obj8=output_file_name_23;
        output_file_name_23=(char*)come_increment_ref_count(((char*)(right_value22=__builtin_string(info->output_file_name))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
        if(right_value22) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0); }
    }
    else {
        __dec_obj9=output_file_name_23;
        output_file_name_23=(char*)come_increment_ref_count(((char*)(right_value23=xnoextname(info->sname))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0); }
        if(right_value23) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0); }
    }
    command_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value24) { come_call_finalizer(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value25) { come_call_finalizer(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(command_24,((char*)(right_value26=xsprintf("clang -o %s %s ",output_file_name_23,info->clang_option))));
    if(right_value26) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0); }
    for(
    it_26=list$1charphp_begin((object_files));
    !list$1charphp_end((object_files));
    it_26=list$1charphp_next((object_files))
    ){
        buffer_append_str(command_24,((char*)(right_value27=xsprintf("%s ",it_26))));
        if(right_value27) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0); }
    }
    buffer_append_str(command_24,"-L/usr/local/lib -lcomelang2 ");
    puts(((char*)(right_value28=buffer_to_string(command_24))));
    if(right_value28) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0); }
    rc_28=system(((char*)(right_value29=buffer_to_string(command_24))));
    if(right_value29) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0); }
    if(rc_28!=0) {
        err_msg(info,"clang is faield");
        _Bool __result18__ = (_Bool)0;
        come_release_malloced_mem();
        return __result18__;
    }
    _Bool __result19__ = (_Bool)1;
    if(output_file_name_23) { output_file_name_23 = come_decrement_ref_count(output_file_name_23, (void*)0, (void*)0, 0, 0); }
    if(command_24) { come_call_finalizer(buffer_finalize,command_24, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result19__;
come_release_malloced_mem();
}

static char* list$1charphp_begin(struct list$1charph* self){
char* result_25;
memset(&result_25, 0, sizeof(char*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            char* __result13__ = self->it->item;
            come_release_malloced_mem();
            return __result13__;
        }
        memset(&result_25,0,sizeof(char*));
        char* __result14__ = result_25;
        come_release_malloced_mem();
        return __result14__;
    come_release_malloced_mem();
}

static _Bool list$1charphp_end(struct list$1charph* self){
        _Bool __result15__ = self->it==((void*)0);
        come_release_malloced_mem();
        return __result15__;
    come_release_malloced_mem();
}

static char* list$1charphp_next(struct list$1charph* self){
char* result_27;
memset(&result_27, 0, sizeof(char*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            char* __result16__ = self->it->item;
            come_release_malloced_mem();
            return __result16__;
        }
        memset(&result_27,0,sizeof(char*));
        char* __result17__ = result_27;
        come_release_malloced_mem();
        return __result17__;
    come_release_malloced_mem();
}

static void sModule_finalize(struct sModule* self){
        if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
            if(self->mSourceHead) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->mSource!=((void*)0)) {
            if(self->mSource) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->mLastCode!=((void*)0)) {
            if(self->mLastCode) { self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0, 0); }
        }
        if(self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
            if(self->mLastCode2) { self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0, 0); }
        }
    come_release_malloced_mem();
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* right_value35;
void* right_value36;
void* right_value37;
int i_29;
void* right_value38;
void* right_value39;
struct list$1charp* __dec_obj12;
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int)); /* ddd */
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
        self->keys=((char**)(right_value35=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
        self->items=((struct sVar**)(right_value36=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)))));
        self->item_existance=((_Bool*)(right_value37=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
        for(
        i_29=0;
        i_29<128;
        i_29++
        ){
            self->item_existance[i_29]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        __dec_obj12=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value39=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value38=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
        if(__dec_obj12) { come_call_finalizer(list$1charpp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value39) { come_call_finalizer(list$1charpp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0); }
        self->it=0;
        struct map$2charphsVarph* __result22__ = self;
        if(self) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result22__;
    come_release_malloced_mem();
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1charp* __result21__ = self;
            if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result21__;
        come_release_malloced_mem();
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_30;
struct list_item$1charp* prev_it_31;
memset(&it_30, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_31, 0, sizeof(struct list_item$1charp*)); /* ddd */
                it_30=self->head;
                while(it_30!=((void*)0)) {
                    if(0) {
                        if(it_30->item) { it_30->item = come_decrement_ref_count(it_30->item, (void*)0, (void*)0, 0, 0); }
                    }
                    prev_it_31=it_30;
                    it_30=it_30->next;
                    come_free_object(prev_it_31);
                }
            come_release_malloced_mem();
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_32;
int i_39;
memset(&i_32, 0, sizeof(int)); /* ddd */
memset(&i_39, 0, sizeof(int)); /* ddd */
            for(
            i_32=0;
            i_32<self->size;
            i_32++
            ){
                if(self->item_existance[i_32]) {
                    if(1) {
                        if(self->items[i_32]) { come_call_finalizer(sVarp_finalize,self->items[i_32], (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_39=0;
            i_39<self->size;
            i_39++
            ){
                if(self->item_existance[i_39]) {
                    if(1) {
                        if(self->keys[i_39]) { self->keys[i_39] = come_decrement_ref_count(self->keys[i_39], (void*)0, (void*)0, 0, 0); }
                    }
                }
            }
            come_free_object((char*)self->keys);
            if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
        come_release_malloced_mem();
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
struct list_item$1sTypeph* it_33;
struct list_item$1sTypeph* prev_it_34;
memset(&it_33, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&prev_it_34, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                                            it_33=self->head;
                                            while(it_33!=((void*)0)) {
                                                if(1) {
                                                    if(it_33->item) { come_call_finalizer(sType_finalize,it_33->item, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                prev_it_34=it_33;
                                                it_33=it_33->next;
                                                come_free_object(prev_it_34);
                                            }
                                        come_release_malloced_mem();
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_35;
struct list_item$1sNodeph* prev_it_36;
memset(&it_35, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&prev_it_36, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                                            it_35=self->head;
                                            while(it_35!=((void*)0)) {
                                                if(1) {
                                                    if(it_35->item) { it_35->item = come_decrement_ref_count(it_35->item, ((struct sNode*)it_35->item)->finalize, ((struct sNode*)it_35->item)->_protocol_obj, 0, 0); } 
                                                }
                                                prev_it_36=it_35;
                                                it_35=it_35->next;
                                                come_free_object(prev_it_36);
                                            }
                                        come_release_malloced_mem();
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_37;
struct list_item$1charph* prev_it_38;
memset(&it_37, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&prev_it_38, 0, sizeof(struct list_item$1charph*)); /* ddd */
                                            it_37=self->head;
                                            while(it_37!=((void*)0)) {
                                                if(1) {
                                                    if(it_37->item) { it_37->item = come_decrement_ref_count(it_37->item, (void*)0, (void*)0, 0, 0); }
                                                }
                                                prev_it_38=it_37;
                                                it_37=it_37->next;
                                                come_free_object(prev_it_38);
                                            }
                                        come_release_malloced_mem();
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
struct sClass* default_value_44;
memset(&default_value_44, 0, sizeof(struct sClass*)); /* bbb */
        memset(&default_value_44,0,sizeof(struct sClass*));
        struct sClass* __result28__ = map$2charphsClassphp_at(self,key,default_value_44);
        come_release_malloced_mem();
        return __result28__;
    come_release_malloced_mem();
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
int hash_45;
int it_46;
memset(&hash_45, 0, sizeof(int)); /* ddd */
memset(&it_46, 0, sizeof(int)); /* ddd */
            hash_45=string_get_hash_key(((char*)key))%self->size;
            it_46=hash_45;
            while((_Bool)1) {
                if(self->item_existance[it_46]) {
                    if(charp_equals(self->keys[it_46],key)) {
                        struct sClass* __result24__ = self->items[it_46];
                        come_release_malloced_mem();
                        return __result24__;
                    }
                    it_46++;
                    if(it_46>=self->size) {
                        it_46=0;
                    }
                    else if(it_46==hash_45) {
                        struct sClass* __result25__ = default_value;
                        come_release_malloced_mem();
                        return __result25__;
                    }
                }
                else {
                    struct sClass* __result26__ = default_value;
                    come_release_malloced_mem();
                    return __result26__;
                }
            }
            struct sClass* __result27__ = default_value;
            come_release_malloced_mem();
            return __result27__;
        come_release_malloced_mem();
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
struct sType* __dec_obj15;
        __dec_obj15=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0); }
        struct tuple1$1sTypeph* __result29__ = self;
        if(self) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        if(v1) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result29__;
    come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1sTypeph* __result30__ = self;
        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result30__;
    come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1sNodeph* __result31__ = self;
        if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result31__;
    come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1charph* __result32__ = self;
        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result32__;
    come_release_malloced_mem();
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_initialize(struct list$1tuple2$2charphsTypephph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1tuple2$2charphsTypephph* __result34__ = self;
        if(self) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result34__;
    come_release_malloced_mem();
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_49;
struct list_item$1tuple2$2charphsTypephph* prev_it_50;
memset(&it_49, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&prev_it_50, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
            it_49=self->head;
            while(it_49!=((void*)0)) {
                if(1) {
                    if(it_49->item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,it_49->item, (void*)0, (void*)0, 0, 0, 0); }
                }
                prev_it_50=it_49;
                it_49=it_49->next;
                come_free_object(prev_it_50);
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

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_51;
memset(&result_51, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sType* __result36__ = self->it->item;
            come_release_malloced_mem();
            return __result36__;
        }
        memset(&result_51,0,sizeof(struct sType*));
        struct sType* __result37__ = result_51;
        come_release_malloced_mem();
        return __result37__;
    come_release_malloced_mem();
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
        _Bool __result38__ = self->it==((void*)0);
        come_release_malloced_mem();
        return __result38__;
    come_release_malloced_mem();
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_53;
memset(&result_53, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sType* __result39__ = self->it->item;
            come_release_malloced_mem();
            return __result39__;
        }
        memset(&result_53,0,sizeof(struct sType*));
        struct sType* __result40__ = result_53;
        come_release_malloced_mem();
        return __result40__;
    come_release_malloced_mem();
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value61;
struct list_item$1sTypeph* litem_54;
struct sType* __dec_obj30;
void* right_value62;
struct list_item$1sTypeph* litem_55;
struct sType* __dec_obj31;
void* right_value63;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj32;
memset(&right_value61, 0, sizeof(void*));
memset(&litem_54, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value63, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
            if(self->len==0) {
                litem_54=((struct list_item$1sTypeph*)(right_value61=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                litem_54->prev=((void*)0);
                litem_54->next=((void*)0);
                __dec_obj30=litem_54->item;
                litem_54->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_54;
                self->head=litem_54;
            }
            else if(self->len==1) {
                litem_55=((struct list_item$1sTypeph*)(right_value62=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                litem_55->prev=self->head;
                litem_55->next=((void*)0);
                __dec_obj31=litem_55->item;
                litem_55->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_55;
                self->head->next=litem_55;
            }
            else {
                litem_56=((struct list_item$1sTypeph*)(right_value63=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                litem_56->prev=self->tail;
                litem_56->next=((void*)0);
                __dec_obj32=litem_56->item;
                litem_56->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0); }
                self->tail->next=litem_56;
                self->tail=litem_56;
            }
            self->len++;
            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
}

static struct sType* sTypep_clone(struct sType* self){
void* right_value64;
struct sType* result_57;
void* right_value95;
struct tuple1$1sTypeph* __dec_obj51;
void* right_value96;
char* __dec_obj52;
void* right_value97;
struct list$1sTypeph* __dec_obj53;
void* right_value98;
struct list$1sNodeph* __dec_obj54;
void* right_value99;
struct list$1sTypeph* __dec_obj55;
void* right_value100;
struct list$1charph* __dec_obj56;
void* right_value101;
struct tuple1$1sTypeph* __dec_obj57;
void* right_value102;
char* __dec_obj58;
memset(&right_value64, 0, sizeof(void*));
memset(&result_57, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sType* __result41__ = (void*)0;
                come_release_malloced_mem();
                return __result41__;
            }
            result_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
            if(right_value64) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_57->mClass=self->mClass;
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                __dec_obj51=result_57->mNoSolvedGenericsType;
                result_57->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj51) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value95) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                __dec_obj52=result_57->mGenericsName;
                result_57->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(self->mGenericsName))));
                if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                if(right_value96) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                __dec_obj53=result_57->mGenericsTypes;
                result_57->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value97=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj53) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value97) { come_call_finalizer(list$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj54=result_57->mArrayNum;
                result_57->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value98=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj54) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value98) { come_call_finalizer(list$1sNodephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_57->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj55=result_57->mParamTypes;
                result_57->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj55) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value99) { come_call_finalizer(list$1sTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj56=result_57->mParamNames;
                result_57->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value100=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj56) { come_call_finalizer(list$1charphp_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value100) { come_call_finalizer(list$1charphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj57=result_57->mResultType;
                result_57->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value101=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj57) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value101) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_57->mVarArgs=self->mVarArgs;
            }
            if(self!=((void*)0)) {
                result_57->mUnsigned=self->mUnsigned;
            }
            if(self!=((void*)0)) {
                result_57->mShort=self->mShort;
            }
            if(self!=((void*)0)) {
                result_57->mLong=self->mLong;
            }
            if(self!=((void*)0)) {
                result_57->mLongLong=self->mLongLong;
            }
            if(self!=((void*)0)) {
                result_57->mConstant=self->mConstant;
            }
            if(self!=((void*)0)) {
                result_57->mRegister=self->mRegister;
            }
            if(self!=((void*)0)) {
                result_57->mVolatile=self->mVolatile;
            }
            if(self!=((void*)0)) {
                result_57->mStatic=self->mStatic;
            }
            if(self!=((void*)0)) {
                result_57->mExtern=self->mExtern;
            }
            if(self!=((void*)0)) {
                result_57->mRestrict=self->mRestrict;
            }
            if(self!=((void*)0)) {
                result_57->mImmutable=self->mImmutable;
            }
            if(self!=((void*)0)) {
                result_57->mHeap=self->mHeap;
            }
            if(self!=((void*)0)) {
                result_57->mDummyHeap=self->mDummyHeap;
            }
            if(self!=((void*)0)) {
                result_57->mNoHeap=self->mNoHeap;
            }
            if(self!=((void*)0)) {
                result_57->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(self!=((void*)0)) {
                result_57->mRefference=self->mRefference;
            }
            if(self!=((void*)0)) {
                result_57->mException=self->mException;
            }
            if(self!=((void*)0)) {
                result_57->mPointerNum=self->mPointerNum;
            }
            if(self!=((void*)0)) {
                result_57->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(self!=((void*)0)) {
                result_57->mSizeNum=self->mSizeNum;
            }
            if(self!=((void*)0)) {
                result_57->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(self!=((void*)0)) {
                result_57->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                __dec_obj58=result_57->mOriginalTypeName;
                result_57->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value102=string_clone(self->mOriginalTypeName))));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
                if(right_value102) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_57->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(self!=((void*)0)) {
                result_57->mFunctionParam=self->mFunctionParam;
            }
            if(self!=((void*)0)) {
                result_57->mAllocaValue=self->mAllocaValue;
            }
            if(self!=((void*)0)) {
                result_57->mGenericsStruct=self->mGenericsStruct;
            }
            if(self!=((void*)0)) {
                result_57->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(self!=((void*)0)) {
                result_57->mInline=self->mInline;
            }
            struct sType* __result54__ = result_57;
            if(result_57) { come_call_finalizer(sType_finalize,result_57, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result54__;
        come_release_malloced_mem();
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value65;
struct tuple1$1sTypeph* result_58;
void* right_value94;
struct sType* __dec_obj50;
memset(&right_value65, 0, sizeof(void*));
memset(&result_58, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value94, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct tuple1$1sTypeph* __result42__ = (void*)0;
                        come_release_malloced_mem();
                        return __result42__;
                    }
                    result_58=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value65=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                    if(right_value65) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        __dec_obj50=result_58->v1;
                        result_58->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(self->v1))));
                        if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value94) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    struct tuple1$1sTypeph* __result53__ = result_58;
                    if(result_58) { come_call_finalizer(tuple1$1sTypephp_finalize,result_58, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result53__;
                come_release_malloced_mem();
}

static struct sType* sType_clone(struct sType* self){
void* right_value66;
struct sType* result_59;
void* right_value67;
struct tuple1$1sTypeph* __dec_obj33;
void* right_value68;
char* __dec_obj34;
void* right_value75;
struct list$1sTypeph* __dec_obj38;
void* right_value83;
struct list$1sNodeph* __dec_obj42;
void* right_value84;
struct list$1sTypeph* __dec_obj43;
void* right_value91;
struct list$1charph* __dec_obj47;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj48;
void* right_value93;
char* __dec_obj49;
memset(&right_value66, 0, sizeof(void*));
memset(&result_59, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
                            if(self==(void*)0) {
                                struct sType* __result43__ = (void*)0;
                                come_release_malloced_mem();
                                return __result43__;
                            }
                            result_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
                            if(right_value66) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0); }
                            if(self!=((void*)0)) {
                                result_59->mClass=self->mClass;
                            }
                            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                                __dec_obj33=result_59->mNoSolvedGenericsType;
                                result_59->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value67=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                if(__dec_obj33) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value67) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                                __dec_obj34=result_59->mGenericsName;
                                result_59->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value68=string_clone(self->mGenericsName))));
                                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
                                if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                                __dec_obj38=result_59->mGenericsTypes;
                                result_59->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value75=list$1sTypephp_clone(self->mGenericsTypes))));
                                if(__dec_obj38) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value75) { come_call_finalizer(list$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                                __dec_obj42=result_59->mArrayNum;
                                result_59->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value83=list$1sNodephp_clone(self->mArrayNum))));
                                if(__dec_obj42) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value83) { come_call_finalizer(list$1sNodephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)) {
                                result_59->mOmitArrayNum=self->mOmitArrayNum;
                            }
                            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                __dec_obj43=result_59->mParamTypes;
                                result_59->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=list$1sTypephp_clone(self->mParamTypes))));
                                if(__dec_obj43) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value84) { come_call_finalizer(list$1sTypephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                __dec_obj47=result_59->mParamNames;
                                result_59->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charphp_clone(self->mParamNames))));
                                if(__dec_obj47) { come_call_finalizer(list$1charphp_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value91) { come_call_finalizer(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                __dec_obj48=result_59->mResultType;
                                result_59->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mResultType))));
                                if(__dec_obj48) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0); }
                                if(right_value92) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0); }
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
                                __dec_obj49=result_59->mOriginalTypeName;
                                result_59->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(self->mOriginalTypeName))));
                                if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
                                if(right_value93) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0); }
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
                            struct sType* __result52__ = result_59;
                            if(result_59) { come_call_finalizer(sType_finalize,result_59, (void*)0, (void*)0, 0, 0, 1); }
                            come_release_malloced_mem();
                            return __result52__;
                        come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value69;
void* right_value70;
struct list$1sTypeph* result_60;
struct list_item$1sTypeph* it_61;
void* right_value74;
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&result_60, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_61, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value74, 0, sizeof(void*));
                                    if(self==((void*)0)) {
                                        struct list$1sTypeph* __result44__ = ((void*)0);
                                        come_release_malloced_mem();
                                        return __result44__;
                                    }
                                    result_60=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value70=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value69=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                                    if(right_value70) { come_call_finalizer(list$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
                                    it_61=self->head;
                                    while(it_61!=((void*)0)) {
                                        list$1sTypephp_push_back2(result_60,(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(it_61->item)))));
                                        if(right_value74) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
                                        it_61=it_61->next;
                                    }
                                    struct list$1sTypeph* __result45__ = result_60;
                                    if(result_60) { come_call_finalizer(list$1sTypephp_finalize,result_60, (void*)0, (void*)0, 0, 0, 1); }
                                    come_release_malloced_mem();
                                    return __result45__;
                                come_release_malloced_mem();
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value71;
struct list_item$1sTypeph* litem_62;
struct sType* __dec_obj35;
void* right_value72;
struct list_item$1sTypeph* litem_63;
struct sType* __dec_obj36;
void* right_value73;
struct list_item$1sTypeph* litem_64;
struct sType* __dec_obj37;
memset(&right_value71, 0, sizeof(void*));
memset(&litem_62, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value72, 0, sizeof(void*));
memset(&litem_63, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value73, 0, sizeof(void*));
memset(&litem_64, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                                            if(self->len==0) {
                                                litem_62=((struct list_item$1sTypeph*)(right_value71=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                                litem_62->prev=((void*)0);
                                                litem_62->next=((void*)0);
                                                __dec_obj35=litem_62->item;
                                                litem_62->item=(struct sType*)come_increment_ref_count(item);
                                                if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0); }
                                                self->tail=litem_62;
                                                self->head=litem_62;
                                            }
                                            else if(self->len==1) {
                                                litem_63=((struct list_item$1sTypeph*)(right_value72=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                                litem_63->prev=self->head;
                                                litem_63->next=((void*)0);
                                                __dec_obj36=litem_63->item;
                                                litem_63->item=(struct sType*)come_increment_ref_count(item);
                                                if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0); }
                                                self->tail=litem_63;
                                                self->head->next=litem_63;
                                            }
                                            else {
                                                litem_64=((struct list_item$1sTypeph*)(right_value73=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                                litem_64->prev=self->tail;
                                                litem_64->next=((void*)0);
                                                __dec_obj37=litem_64->item;
                                                litem_64->item=(struct sType*)come_increment_ref_count(item);
                                                if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0); }
                                                self->tail->next=litem_64;
                                                self->tail=litem_64;
                                            }
                                            self->len++;
                                            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                                        come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value76;
void* right_value77;
struct list$1sNodeph* result_65;
struct list_item$1sNodeph* it_66;
void* right_value82;
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_66, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value82, 0, sizeof(void*));
                                    if(self==((void*)0)) {
                                        struct list$1sNodeph* __result46__ = ((void*)0);
                                        come_release_malloced_mem();
                                        return __result46__;
                                    }
                                    result_65=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value77=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value76=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                                    if(right_value77) { come_call_finalizer(list$1sNodephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0); }
                                    it_66=self->head;
                                    while(it_66!=((void*)0)) {
                                        list$1sNodephp_push_back2(result_65,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value82=sNodep_clone(it_66->item)))));
                                        if(right_value82) { right_value82 = come_decrement_ref_count(right_value82, ((struct sNode*)right_value82)->finalize, ((struct sNode*)right_value82)->_protocol_obj, 1, 0); } 
                                        it_66=it_66->next;
                                    }
                                    struct list$1sNodeph* __result49__ = result_65;
                                    if(result_65) { come_call_finalizer(list$1sNodephp_finalize,result_65, (void*)0, (void*)0, 0, 0, 1); }
                                    come_release_malloced_mem();
                                    return __result49__;
                                come_release_malloced_mem();
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value78;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj39;
void* right_value79;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj40;
void* right_value80;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj41;
memset(&right_value78, 0, sizeof(void*));
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value79, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                                            if(self->len==0) {
                                                litem_67=((struct list_item$1sNodeph*)(right_value78=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                                litem_67->prev=((void*)0);
                                                litem_67->next=((void*)0);
                                                __dec_obj39=litem_67->item;
                                                litem_67->item=(struct sNode*)come_increment_ref_count(item);
                                                if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0); }
                                                self->tail=litem_67;
                                                self->head=litem_67;
                                            }
                                            else if(self->len==1) {
                                                litem_68=((struct list_item$1sNodeph*)(right_value79=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                                litem_68->prev=self->head;
                                                litem_68->next=((void*)0);
                                                __dec_obj40=litem_68->item;
                                                litem_68->item=(struct sNode*)come_increment_ref_count(item);
                                                if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0); }
                                                self->tail=litem_68;
                                                self->head->next=litem_68;
                                            }
                                            else {
                                                litem_69=((struct list_item$1sNodeph*)(right_value80=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                                litem_69->prev=self->tail;
                                                litem_69->next=((void*)0);
                                                __dec_obj41=litem_69->item;
                                                litem_69->item=(struct sNode*)come_increment_ref_count(item);
                                                if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0); }
                                                self->tail->next=litem_69;
                                                self->tail=litem_69;
                                            }
                                            self->len++;
                                            if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
                                        come_release_malloced_mem();
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value81;
struct sNode* result_70;
memset(&right_value81, 0, sizeof(void*));
memset(&result_70, 0, sizeof(struct sNode*)); /* ddd */
                                            if(self==(void*)0) {
                                                struct sNode* __result47__ = (void*)0;
                                                come_release_malloced_mem();
                                                return __result47__;
                                            }
                                            result_70=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
                                            if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                                result_70->_protocol_obj=self->clone(self->_protocol_obj);
                                            }
                                            if(self!=((void*)0)) {
                                                result_70->finalize=self->finalize;
                                            }
                                            if(self!=((void*)0)) {
                                                result_70->clone=self->clone;
                                            }
                                            if(self!=((void*)0)) {
                                                result_70->compile=self->compile;
                                            }
                                            if(self!=((void*)0)) {
                                                result_70->sline=self->sline;
                                            }
                                            if(self!=((void*)0)) {
                                                result_70->sname=self->sname;
                                            }
                                            if(self!=((void*)0)) {
                                                result_70->terminated=self->terminated;
                                            }
                                            struct sNode* __result48__ = result_70;
                                            come_release_malloced_mem();
                                            return __result48__;
                                        come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value85;
void* right_value86;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
void* right_value90;
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_72, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value90, 0, sizeof(void*));
                                    if(self==((void*)0)) {
                                        struct list$1charph* __result50__ = ((void*)0);
                                        come_release_malloced_mem();
                                        return __result50__;
                                    }
                                    result_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value86=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value85=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                                    if(right_value86) { come_call_finalizer(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0); }
                                    it_72=self->head;
                                    while(it_72!=((void*)0)) {
                                        list$1charphp_push_back2(result_71,(char*)come_increment_ref_count(((char*)(right_value90=string_clone(it_72->item)))));
                                        if(right_value90) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0); }
                                        it_72=it_72->next;
                                    }
                                    struct list$1charph* __result51__ = result_71;
                                    if(result_71) { come_call_finalizer(list$1charphp_finalize,result_71, (void*)0, (void*)0, 0, 0, 1); }
                                    come_release_malloced_mem();
                                    return __result51__;
                                come_release_malloced_mem();
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value87;
struct list_item$1charph* litem_73;
char* __dec_obj44;
void* right_value88;
struct list_item$1charph* litem_74;
char* __dec_obj45;
void* right_value89;
struct list_item$1charph* litem_75;
char* __dec_obj46;
memset(&right_value87, 0, sizeof(void*));
memset(&litem_73, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value88, 0, sizeof(void*));
memset(&litem_74, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value89, 0, sizeof(void*));
memset(&litem_75, 0, sizeof(struct list_item$1charph*)); /* ddd */
                                            if(self->len==0) {
                                                litem_73=((struct list_item$1charph*)(right_value87=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                                litem_73->prev=((void*)0);
                                                litem_73->next=((void*)0);
                                                __dec_obj44=litem_73->item;
                                                litem_73->item=(char*)come_increment_ref_count(item);
                                                if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
                                                self->tail=litem_73;
                                                self->head=litem_73;
                                            }
                                            else if(self->len==1) {
                                                litem_74=((struct list_item$1charph*)(right_value88=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                                litem_74->prev=self->head;
                                                litem_74->next=((void*)0);
                                                __dec_obj45=litem_74->item;
                                                litem_74->item=(char*)come_increment_ref_count(item);
                                                if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
                                                self->tail=litem_74;
                                                self->head->next=litem_74;
                                            }
                                            else {
                                                litem_75=((struct list_item$1charph*)(right_value89=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                                litem_75->prev=self->tail;
                                                litem_75->next=((void*)0);
                                                __dec_obj46=litem_75->item;
                                                litem_75->item=(char*)come_increment_ref_count(item);
                                                if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
                                                self->tail->next=litem_75;
                                                self->tail=litem_75;
                                            }
                                            self->len++;
                                            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
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

static struct sBlock* sBlock_clone(struct sBlock* self){
void* right_value115;
struct sBlock* result_77;
void* right_value116;
struct list$1sNodeph* __dec_obj64;
void* right_value135;
struct sVarTable* __dec_obj69;
memset(&right_value115, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value116, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sBlock* __result55__ = (void*)0;
            come_release_malloced_mem();
            return __result55__;
        }
        result_77=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value115=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1)))));
        if(right_value115) { come_call_finalizer(sBlock_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
            __dec_obj64=result_77->mNodes;
            result_77->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value116=list$1sNodephp_clone(self->mNodes))));
            if(__dec_obj64) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value116) { come_call_finalizer(list$1sNodephp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
            __dec_obj69=result_77->mVarTable;
            result_77->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value135=sVarTable_clone(self->mVarTable))));
            if(__dec_obj69) { come_call_finalizer(sVarTable_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value135) { come_call_finalizer(sVarTable_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
        }
        struct sBlock* __result76__ = result_77;
        if(result_77) { come_call_finalizer(sBlock_finalize,result_77, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result76__;
    come_release_malloced_mem();
}

static void sBlock_finalize(struct sBlock* self){
            if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                if(self->mNodes) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                if(self->mVarTable) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0); }
            }
        come_release_malloced_mem();
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* right_value117;
struct sVarTable* result_78;
void* right_value134;
struct map$2charphsVarph* __dec_obj68;
memset(&right_value117, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&right_value134, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sVarTable* __result56__ = (void*)0;
                    come_release_malloced_mem();
                    return __result56__;
                }
                result_78=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value117=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1)))));
                if(right_value117) { come_call_finalizer(sVarTable_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                    __dec_obj68=result_78->mVars;
                    result_78->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value134=map$2charphsVarphp_clone(self->mVars))));
                    if(__dec_obj68) { come_call_finalizer(map$2charphsVarphp_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value134) { come_call_finalizer(map$2charphsVarphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_78->mGlobal=self->mGlobal;
                }
                if(self!=((void*)0)) {
                    result_78->mParent=self->mParent;
                }
                if(self!=((void*)0)) {
                    result_78->mID=self->mID;
                }
                struct sVarTable* __result75__ = result_78;
                if(result_78) { come_call_finalizer(sVarTable_finalize,result_78, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result75__;
            come_release_malloced_mem();
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* right_value118;
void* right_value119;
struct map$2charphsVarph* result_79;
char* it_81;
struct sVar* default_value_83;
struct sVar* it2_86;
void* right_value126;
void* right_value127;
void* right_value132;
void* right_value133;
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&result_79, 0, sizeof(struct map$2charphsVarph*)); /* ddd */
memset(&it_81, 0, sizeof(char*)); /* ddd */
memset(&default_value_83, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_86, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct map$2charphsVarph* __result57__ = ((void*)0);
                            come_release_malloced_mem();
                            return __result57__;
                        }
                        result_79=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value119=map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value118=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1)))))))));
                        if(right_value119) { come_call_finalizer(map$2charphsVarphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0); }
                        for(
                        it_81=map$2charphsVarphp_begin(self);
                        !map$2charphsVarphp_end(self);
                        it_81=map$2charphsVarphp_next(self)
                        ){
                            it2_86=map$2charphsVarphp_at(self,it_81,default_value_83);
                            if(1&&!1) {
                                map$2charphsVarphp_insert2(result_79,(char*)come_increment_ref_count(((char*)(right_value126=charp_clone(it_81)))),it2_86);
                                if(right_value126) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0); }
                            }
                            else if(1&&1) {
                                map$2charphsVarphp_insert2(result_79,(char*)come_increment_ref_count(((char*)(right_value127=charp_clone(it_81)))),(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value132=sVarp_clone(it2_86)))));
                                if(right_value127) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0); }
                                if(right_value132) { come_call_finalizer(sVarp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            else if(!1&&1) {
                                map$2charphsVarphp_insert2(result_79,it_81,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value133=sVarp_clone(it2_86)))));
                                if(right_value133) { come_call_finalizer(sVarp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            else if(!1&&!1) {
                                map$2charphsVarphp_insert2(result_79,it_81,it2_86);
                            }
                        }
                        struct map$2charphsVarph* __result74__ = result_79;
                        if(result_79) { come_call_finalizer(map$2charphsVarphp_finalize,result_79, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result74__;
                    come_release_malloced_mem();
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
char* result_80;
memset(&result_80, 0, sizeof(char*)); /* bbb */
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                char* __result58__ = self->key_list->it->item;
                                come_release_malloced_mem();
                                return __result58__;
                            }
                            memset(&result_80,0,sizeof(char*));
                            char* __result59__ = result_80;
                            come_release_malloced_mem();
                            return __result59__;
                        come_release_malloced_mem();
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
                            _Bool __result60__ = self->key_list->it==((void*)0);
                            come_release_malloced_mem();
                            return __result60__;
                        come_release_malloced_mem();
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
char* result_82;
memset(&result_82, 0, sizeof(char*)); /* bbb */
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                char* __result61__ = self->key_list->it->item;
                                come_release_malloced_mem();
                                return __result61__;
                            }
                            memset(&result_82,0,sizeof(char*));
                            char* __result62__ = result_82;
                            come_release_malloced_mem();
                            return __result62__;
                        come_release_malloced_mem();
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
int hash_84;
int it_85;
memset(&hash_84, 0, sizeof(int)); /* ddd */
memset(&it_85, 0, sizeof(int)); /* ddd */
                                hash_84=string_get_hash_key(((char*)key))%self->size;
                                it_85=hash_84;
                                while((_Bool)1) {
                                    if(self->item_existance[it_85]) {
                                        if(charp_equals(self->keys[it_85],key)) {
                                            struct sVar* __result63__ = self->items[it_85];
                                            come_release_malloced_mem();
                                            return __result63__;
                                        }
                                        it_85++;
                                        if(it_85>=self->size) {
                                            it_85=0;
                                        }
                                        else if(it_85==hash_84) {
                                            struct sVar* __result64__ = default_value;
                                            come_release_malloced_mem();
                                            return __result64__;
                                        }
                                    }
                                    else {
                                        struct sVar* __result65__ = default_value;
                                        come_release_malloced_mem();
                                        return __result65__;
                                    }
                                }
                                struct sVar* __result66__ = default_value;
                                come_release_malloced_mem();
                                return __result66__;
                            come_release_malloced_mem();
}

static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
int hash_98;
int it_99;
_Bool same_key_exist_116;
char* it2_118;
memset(&hash_98, 0, sizeof(int)); /* ddd */
memset(&it_99, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_116, 0, sizeof(_Bool)); /* ddd */
memset(&it2_118, 0, sizeof(char*)); /* ddd */
                                    if(self->len*2>=self->size) {
                                        map$2charphsVarphp_rehash(self);
                                    }
                                    hash_98=string_get_hash_key(key)%self->size;
                                    it_99=hash_98;
                                    while((_Bool)1) {
                                        if(self->item_existance[it_99]) {
                                            if(charp_equals(self->keys[it_99],key)) {
                                                if(1) {
                                                    if(self->keys[it_99]) { self->keys[it_99] = come_decrement_ref_count(self->keys[it_99], (void*)0, (void*)0, 0, 0); }
                                                    list$1charpp_remove(self->key_list,self->keys[it_99]);
                                                    self->keys[it_99]=(char*)come_increment_ref_count(key);
                                                }
                                                else {
                                                    list$1charpp_remove(self->key_list,self->keys[it_99]);
                                                    self->keys[it_99]=key;
                                                }
                                                if(1) {
                                                    if(self->items[it_99]) { come_call_finalizer(sVarp_finalize,self->items[it_99], (void*)0, (void*)0, 0, 0, 0); }
                                                    self->items[it_99]=(struct sVar*)come_increment_ref_count(item);
                                                }
                                                else {
                                                    self->items[it_99]=item;
                                                }
                                                break;
                                            }
                                            it_99++;
                                            if(it_99>=self->size) {
                                                it_99=0;
                                            }
                                            else if(it_99==hash_98) {
                                                printf("unexpected error in map.insert\n");
                                                exit(2);
                                            }
                                        }
                                        else {
                                            self->item_existance[it_99]=(_Bool)1;
                                            if(1) {
                                                self->keys[it_99]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                self->keys[it_99]=key;
                                            }
                                            if(1) {
                                                self->items[it_99]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_99]=item;
                                            }
                                            self->len++;
                                            break;
                                        }
                                    }
                                    same_key_exist_116=(_Bool)0;
                                    for(
                                    it2_118=list$1charpp_begin(self->key_list);
                                    !list$1charpp_end(self->key_list);
                                    it_99=list$1charpp_next(self->key_list)
                                    ){
                                        if(charp_equals(it2_118,key)) {
                                            same_key_exist_116=(_Bool)1;
                                        }
                                    }
                                    if(!same_key_exist_116) {
                                        list$1charpp_push_back(self->key_list,key);
                                    }
                                    if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                                    if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                                come_release_malloced_mem();
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_87;
void* right_value120;
char** keys_88;
void* right_value121;
struct sVar** items_89;
void* right_value122;
_Bool* item_existance_90;
int len_91;
char* it_92;
struct sVar* default_value_93;
struct sVar* it2_94;
int hash_95;
int n_96;
struct sVar* default_value_97;
memset(&size_87, 0, sizeof(int)); /* ddd */
memset(&right_value120, 0, sizeof(void*));
memset(&keys_88, 0, sizeof(char**)); /* ddd */
memset(&right_value121, 0, sizeof(void*));
memset(&items_89, 0, sizeof(struct sVar**)); /* ddd */
memset(&right_value122, 0, sizeof(void*));
memset(&item_existance_90, 0, sizeof(_Bool*)); /* ddd */
memset(&len_91, 0, sizeof(int)); /* ddd */
memset(&it_92, 0, sizeof(char*)); /* ddd */
memset(&default_value_93, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_94, 0, sizeof(struct sVar*)); /* ddd */
memset(&hash_95, 0, sizeof(int)); /* ddd */
memset(&n_96, 0, sizeof(int)); /* ddd */
memset(&default_value_97, 0, sizeof(struct sVar*)); /* bbb */
                                            size_87=self->size*3;
                                            keys_88=((char**)(right_value120=(char**)come_calloc(1, sizeof(char*)*(1*(size_87)))));
                                            items_89=((struct sVar**)(right_value121=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_87)))));
                                            item_existance_90=((_Bool*)(right_value122=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_87)))));
                                            len_91=0;
                                            for(
                                            it_92=map$2charphsVarphp_begin(self);
                                            !map$2charphsVarphp_end(self);
                                            it_92=map$2charphsVarphp_next(self)
                                            ){
                                                it2_94=map$2charphsVarphp_at(self,it_92,default_value_93);
                                                hash_95=charp_get_hash_key(it_92)%size_87;
                                                n_96=hash_95;
                                                while((_Bool)1) {
                                                    if(item_existance_90[n_96]) {
                                                        n_96++;
                                                        if(n_96>=size_87) {
                                                            n_96=0;
                                                        }
                                                        else if(n_96==hash_95) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            exit(2);
                                                        }
                                                    }
                                                    else {
                                                        item_existance_90[n_96]=(_Bool)1;
                                                        keys_88[n_96]=it_92;
                                                        items_89[n_96]=map$2charphsVarphp_at(self,it_92,default_value_97);
                                                        len_91++;
                                                        break;
                                                    }
                                                }
                                            }
                                            come_free_object((char*)self->items);
                                            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                                            come_free_object((char*)self->keys);
                                            self->keys=keys_88;
                                            self->items=items_89;
                                            self->item_existance=item_existance_90;
                                            self->size=size_87;
                                            self->len=len_91;
                                        come_release_malloced_mem();
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_100;
struct list_item$1charp* it_101;
memset(&it2_100, 0, sizeof(int)); /* ddd */
memset(&it_101, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                        it2_100=0;
                                                        it_101=self->head;
                                                        while(it_101!=((void*)0)) {
                                                            if(charp_equals(it_101->item,item)) {
                                                                list$1charpp_delete(self,it2_100,it2_100+1);
                                                                break;
                                                            }
                                                            it2_100++;
                                                            it_101=it_101->next;
                                                        }
                                                    come_release_malloced_mem();
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_102;
struct list_item$1charp* it_105;
int i_106;
struct list_item$1charp* prev_it_107;
struct list_item$1charp* it_108;
int i_109;
struct list_item$1charp* prev_it_110;
struct list_item$1charp* it_111;
struct list_item$1charp* head_prev_it_112;
struct list_item$1charp* tail_it_113;
int i_114;
struct list_item$1charp* prev_it_115;
memset(&tmp_102, 0, sizeof(int)); /* ddd */
memset(&it_105, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_106, 0, sizeof(int)); /* ddd */
memset(&prev_it_107, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_108, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_109, 0, sizeof(int)); /* ddd */
memset(&prev_it_110, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_111, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_112, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_113, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_114, 0, sizeof(int)); /* ddd */
memset(&prev_it_115, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                                    if(head<0) {
                                                                        head+=self->len;
                                                                    }
                                                                    if(tail<0) {
                                                                        tail+=self->len+1;
                                                                    }
                                                                    if(head>tail) {
                                                                        tmp_102=tail;
                                                                        tail=head;
                                                                        head=tmp_102;
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
                                                                        it_105=self->head;
                                                                        i_106=0;
                                                                        while(it_105!=((void*)0)) {
                                                                            if(i_106<tail) {
                                                                                prev_it_107=it_105;
                                                                                it_105=it_105->next;
                                                                                i_106++;
                                                                                if(prev_it_107) { come_call_finalizer(list_item$1charpp_finalize,prev_it_107, (void*)0, (void*)0, 0, 0, 0); }
                                                                                self->len--;
                                                                            }
                                                                            else if(i_106==tail) {
                                                                                self->head=it_105;
                                                                                self->head->prev=((void*)0);
                                                                                break;
                                                                            }
                                                                            else {
                                                                                it_105=it_105->next;
                                                                                i_106++;
                                                                            }
                                                                        }
                                                                    }
                                                                    else if(tail==self->len) {
                                                                        it_108=self->head;
                                                                        i_109=0;
                                                                        while(it_108!=((void*)0)) {
                                                                            if(i_109==head) {
                                                                                self->tail=it_108->prev;
                                                                                self->tail->next=((void*)0);
                                                                            }
                                                                            if(i_109>=head) {
                                                                                prev_it_110=it_108;
                                                                                it_108=it_108->next;
                                                                                i_109++;
                                                                                if(prev_it_110) { come_call_finalizer(list_item$1charpp_finalize,prev_it_110, (void*)0, (void*)0, 0, 0, 0); }
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                it_108=it_108->next;
                                                                                i_109++;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        it_111=self->head;
                                                                        head_prev_it_112=((void*)0);
                                                                        tail_it_113=((void*)0);
                                                                        i_114=0;
                                                                        while(it_111!=((void*)0)) {
                                                                            if(i_114==head) {
                                                                                head_prev_it_112=it_111->prev;
                                                                            }
                                                                            if(i_114==tail) {
                                                                                tail_it_113=it_111;
                                                                            }
                                                                            if(i_114>=head&&i_114<tail) {
                                                                                prev_it_115=it_111;
                                                                                it_111=it_111->next;
                                                                                i_114++;
                                                                                if(prev_it_115) { come_call_finalizer(list_item$1charpp_finalize,prev_it_115, (void*)0, (void*)0, 0, 0, 0); }
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                it_111=it_111->next;
                                                                                i_114++;
                                                                            }
                                                                        }
                                                                        if(head_prev_it_112!=((void*)0)) {
                                                                            head_prev_it_112->next=tail_it_113;
                                                                        }
                                                                        if(tail_it_113!=((void*)0)) {
                                                                            tail_it_113->prev=head_prev_it_112;
                                                                        }
                                                                    }
                                                                come_release_malloced_mem();
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_103;
struct list_item$1charp* prev_it_104;
memset(&it_103, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_104, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                                            it_103=self->head;
                                                                            while(it_103!=((void*)0)) {
                                                                                prev_it_104=it_103;
                                                                                it_103=it_103->next;
                                                                                if(prev_it_104) { come_call_finalizer(list_item$1charpp_finalize,prev_it_104, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
                                                                            self->head=((void*)0);
                                                                            self->tail=((void*)0);
                                                                            self->len=0;
                                                                        come_release_malloced_mem();
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
                                                                                come_release_malloced_mem();
}

static char* list$1charpp_begin(struct list$1charp* self){
char* result_117;
memset(&result_117, 0, sizeof(char*)); /* bbb */
                                        self->it=self->head;
                                        if(self->it) {
                                            char* __result67__ = self->it->item;
                                            come_release_malloced_mem();
                                            return __result67__;
                                        }
                                        memset(&result_117,0,sizeof(char*));
                                        char* __result68__ = result_117;
                                        come_release_malloced_mem();
                                        return __result68__;
                                    come_release_malloced_mem();
}

static _Bool list$1charpp_end(struct list$1charp* self){
                                        _Bool __result69__ = self->it==((void*)0);
                                        come_release_malloced_mem();
                                        return __result69__;
                                    come_release_malloced_mem();
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_119;
memset(&result_119, 0, sizeof(char*)); /* bbb */
                                        self->it=self->it->next;
                                        if(self->it) {
                                            char* __result70__ = self->it->item;
                                            come_release_malloced_mem();
                                            return __result70__;
                                        }
                                        memset(&result_119,0,sizeof(char*));
                                        char* __result71__ = result_119;
                                        come_release_malloced_mem();
                                        return __result71__;
                                    come_release_malloced_mem();
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value123;
struct list_item$1charp* litem_120;
void* right_value124;
struct list_item$1charp* litem_121;
void* right_value125;
struct list_item$1charp* litem_122;
memset(&right_value123, 0, sizeof(void*));
memset(&litem_120, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value124, 0, sizeof(void*));
memset(&litem_121, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value125, 0, sizeof(void*));
memset(&litem_122, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                            if(self->len==0) {
                                                litem_120=((struct list_item$1charp*)(right_value123=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                                litem_120->prev=((void*)0);
                                                litem_120->next=((void*)0);
                                                litem_120->item=item;
                                                self->tail=litem_120;
                                                self->head=litem_120;
                                            }
                                            else if(self->len==1) {
                                                litem_121=((struct list_item$1charp*)(right_value124=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                                litem_121->prev=self->head;
                                                litem_121->next=((void*)0);
                                                litem_121->item=item;
                                                self->tail=litem_121;
                                                self->head->next=litem_121;
                                            }
                                            else {
                                                litem_122=((struct list_item$1charp*)(right_value125=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                                litem_122->prev=self->tail;
                                                litem_122->next=((void*)0);
                                                litem_122->item=item;
                                                self->tail->next=litem_122;
                                                self->tail=litem_122;
                                            }
                                            self->len++;
                                        come_release_malloced_mem();
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
                                    come_release_malloced_mem();
}

static struct sVar* sVarp_clone(struct sVar* self){
void* right_value128;
struct sVar* result_123;
void* right_value129;
char* __dec_obj65;
void* right_value130;
char* __dec_obj66;
void* right_value131;
struct sType* __dec_obj67;
memset(&right_value128, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
                                    if(self==(void*)0) {
                                        struct sVar* __result72__ = (void*)0;
                                        come_release_malloced_mem();
                                        return __result72__;
                                    }
                                    result_123=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value128=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1)))));
                                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                        __dec_obj65=result_123->mName;
                                        result_123->mName=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(self->mName))));
                                        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
                                        if(right_value129) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0); }
                                    }
                                    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                        __dec_obj66=result_123->mCValueName;
                                        result_123->mCValueName=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(self->mCValueName))));
                                        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0); }
                                        if(right_value130) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0); }
                                    }
                                    if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                        __dec_obj67=result_123->mType;
                                        result_123->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(self->mType))));
                                        if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0); }
                                        if(right_value131) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
                                    }
                                    if(self!=((void*)0)) {
                                        result_123->mBlockLevel=self->mBlockLevel;
                                    }
                                    if(self!=((void*)0)) {
                                        result_123->mGlobal=self->mGlobal;
                                    }
                                    if(self!=((void*)0)) {
                                        result_123->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(self!=((void*)0)) {
                                        result_123->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(self!=((void*)0)) {
                                        result_123->mNoFree=self->mNoFree;
                                    }
                                    struct sVar* __result73__ = result_123;
                                    come_release_malloced_mem();
                                    return __result73__;
                                come_release_malloced_mem();
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
    come_release_malloced_mem();
}

void init_classes(struct sInfo* info){
void* right_value140;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
void* right_value145;
void* right_value146;
void* right_value147;
void* right_value148;
void* right_value149;
void* right_value150;
void* right_value151;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
void* right_value156;
void* right_value157;
void* right_value158;
void* right_value159;
void* right_value160;
void* right_value161;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
int i_141;
void* right_value173;
char* generics_type_142;
void* right_value174;
void* right_value175;
int rc_144;
void* right_value176;
char* type_name_145;
void* right_value177;
void* right_value178;
struct sType* type_146;
void* right_value182;
void* right_value183;
void* right_value184;
void* right_value185;
struct sClass* klass_166;
void* right_value189;
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
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&i_141, 0, sizeof(int)); /* ddd */
memset(&right_value173, 0, sizeof(void*));
memset(&generics_type_142, 0, sizeof(char*)); /* ddd */
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&rc_144, 0, sizeof(int)); /* ddd */
memset(&right_value176, 0, sizeof(void*));
memset(&type_name_145, 0, sizeof(char*)); /* ddd */
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&type_146, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&klass_166, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value189, 0, sizeof(void*));
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
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value142=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value141=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
    if(right_value140) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0); }
    if(right_value141) { come_call_finalizer(sClass_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value142) { come_call_finalizer(sClass_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value145=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value144=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
    if(right_value143) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0); }
    if(right_value144) { come_call_finalizer(sClass_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value145) { come_call_finalizer(sClass_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value148=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value147=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
    if(right_value146) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0); }
    if(right_value147) { come_call_finalizer(sClass_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value148) { come_call_finalizer(sClass_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value151=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value150=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
    if(right_value149) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0); }
    if(right_value150) { come_call_finalizer(sClass_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value151) { come_call_finalizer(sClass_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value154=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value153=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
    if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
    if(right_value153) { come_call_finalizer(sClass_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value154) { come_call_finalizer(sClass_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value157=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value156=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
    if(right_value155) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0); }
    if(right_value156) { come_call_finalizer(sClass_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value157) { come_call_finalizer(sClass_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value160=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value159=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
    if(right_value158) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0); }
    if(right_value159) { come_call_finalizer(sClass_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value160) { come_call_finalizer(sClass_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value163=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value162=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0)))));
    if(right_value161) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0); }
    if(right_value162) { come_call_finalizer(sClass_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value163) { come_call_finalizer(sClass_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value166=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value165=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0)))));
    if(right_value164) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0); }
    if(right_value165) { come_call_finalizer(sClass_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value166) { come_call_finalizer(sClass_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value167=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value169=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value168=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
    if(right_value167) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0); }
    if(right_value168) { come_call_finalizer(sClass_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value169) { come_call_finalizer(sClass_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0); }
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value172=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value171=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0)))));
    if(right_value170) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0); }
    if(right_value171) { come_call_finalizer(sClass_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value172) { come_call_finalizer(sClass_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0); }
    for(
    i_141=0;
    i_141<12;
    i_141++
    ){
        generics_type_142=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("generics_type%d",i_141))));
        if(right_value173) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0); }
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(generics_type_142),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value175=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value174=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),generics_type_142,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_141,-1,(_Bool)0)))));
        if(right_value174) { come_call_finalizer(sClass_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value175) { come_call_finalizer(sClass_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0); }
        if(generics_type_142) { generics_type_142 = come_decrement_ref_count(generics_type_142, (void*)0, (void*)0, 0, 0); }
    }
    char cmd_143[1024];
    memset(&cmd_143, 0, sizeof(cmd_143)); /* aaa */
    snprintf(cmd_143,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    rc_144=system(cmd_143);
    if(rc_144==0) {
        type_name_145=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string("__builtin_va_list"))));
        if(right_value176) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0); }
        type_146=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value177=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char*",info,(_Bool)0))));
        if(right_value177) { come_call_finalizer(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value178) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(type_name_145)))),(struct sType*)come_increment_ref_count(type_146));
        if(right_value182) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0); }
        add_come_code_at_source_head(info,"typedef %s;\n",((char*)(right_value183=make_define_var(type_146,type_name_145,info,(_Bool)1))));
        if(right_value183) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0); }
        if(type_name_145) { type_name_145 = come_decrement_ref_count(type_name_145, (void*)0, (void*)0, 0, 0); }
        if(type_146) { come_call_finalizer(sType_finalize,type_146, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        klass_166=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value185=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value184=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1))))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0))));
        if(right_value184) { come_call_finalizer(sClass_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value185) { come_call_finalizer(sClass_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0); }
        list$1tuple2$2charphsTypephphp_push_back(klass_166->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value193=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value189=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value191=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char*",info,(_Bool)0)))))))));
        if(right_value190) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0); }
        if(right_value191) { come_call_finalizer(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value192) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value193) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0); }
        list$1tuple2$2charphsTypephphp_push_back(klass_166->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value198=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value194=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value196=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char*",info,(_Bool)0)))))))));
        if(right_value195) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0); }
        if(right_value196) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value197) { come_call_finalizer(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value198) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0); }
        list$1tuple2$2charphsTypephphp_push_back(klass_166->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value203=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value199=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char*",info,(_Bool)0)))))))));
        if(right_value200) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0); }
        if(right_value201) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value202) { come_call_finalizer(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value203) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0); }
        list$1tuple2$2charphsTypephphp_push_back(klass_166->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value208=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value204=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value206=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0)))))))));
        if(right_value205) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0); }
        if(right_value206) { come_call_finalizer(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value207) { come_call_finalizer(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value208) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0); }
        list$1tuple2$2charphsTypephphp_push_back(klass_166->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value213=tuple2$2charphsTypephp_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value209=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0)))))))));
        if(right_value210) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0); }
        if(right_value211) { come_call_finalizer(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value212) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value213) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0); }
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(klass_166));
        if(right_value214) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0); }
        if(klass_166) { come_call_finalizer(sClass_finalize,klass_166, (void*)0, (void*)0, 0, 0, 0); }
    }
come_release_malloced_mem();
}

static void map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
int hash_137;
int it_138;
_Bool same_key_exist_139;
char* it2_140;
memset(&hash_137, 0, sizeof(int)); /* ddd */
memset(&it_138, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_139, 0, sizeof(_Bool)); /* ddd */
memset(&it2_140, 0, sizeof(char*)); /* ddd */
        if(self->len*2>=self->size) {
            map$2charphsClassphp_rehash(self);
        }
        hash_137=string_get_hash_key(key)%self->size;
        it_138=hash_137;
        while((_Bool)1) {
            if(self->item_existance[it_138]) {
                if(charp_equals(self->keys[it_138],key)) {
                    if(1) {
                        list$1charpp_remove(self->key_list,self->keys[it_138]);
                        if(self->keys[it_138]) { self->keys[it_138] = come_decrement_ref_count(self->keys[it_138], (void*)0, (void*)0, 0, 0); }
                        self->keys[it_138]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charpp_remove(self->key_list,self->keys[it_138]);
                        self->keys[it_138]=key;
                    }
                    if(1) {
                        if(self->items[it_138]) { come_call_finalizer(sClassp_finalize,self->items[it_138], (void*)0, (void*)0, 0, 0, 0); }
                        self->items[it_138]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_138]=item;
                    }
                    break;
                }
                it_138++;
                if(it_138>=self->size) {
                    it_138=0;
                }
                else if(it_138==hash_137) {
                    printf("unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_138]=(_Bool)1;
                if(1) {
                    self->keys[it_138]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_138]=key;
                }
                if(1) {
                    self->items[it_138]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_138]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_139=(_Bool)0;
        for(
        it2_140=list$1charpp_begin(self->key_list);
        !list$1charpp_end(self->key_list);
        it_138=list$1charpp_next(self->key_list)
        ){
            if(charp_equals(it2_140,key)) {
                same_key_exist_139=(_Bool)1;
            }
        }
        if(!same_key_exist_139) {
            list$1charpp_push_back(self->key_list,key);
        }
        if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
        if(item) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_124;
void* right_value137;
char** keys_125;
void* right_value138;
struct sClass** items_126;
void* right_value139;
_Bool* item_existance_127;
int len_128;
char* it_130;
struct sClass* default_value_132;
struct sClass* it2_133;
int hash_134;
int n_135;
struct sClass* default_value_136;
memset(&size_124, 0, sizeof(int)); /* ddd */
memset(&right_value137, 0, sizeof(void*));
memset(&keys_125, 0, sizeof(char**)); /* ddd */
memset(&right_value138, 0, sizeof(void*));
memset(&items_126, 0, sizeof(struct sClass**)); /* ddd */
memset(&right_value139, 0, sizeof(void*));
memset(&item_existance_127, 0, sizeof(_Bool*)); /* ddd */
memset(&len_128, 0, sizeof(int)); /* ddd */
memset(&it_130, 0, sizeof(char*)); /* ddd */
memset(&default_value_132, 0, sizeof(struct sClass*)); /* bbb */
memset(&it2_133, 0, sizeof(struct sClass*)); /* ddd */
memset(&hash_134, 0, sizeof(int)); /* ddd */
memset(&n_135, 0, sizeof(int)); /* ddd */
memset(&default_value_136, 0, sizeof(struct sClass*)); /* bbb */
                size_124=self->size*3;
                keys_125=((char**)(right_value137=(char**)come_calloc(1, sizeof(char*)*(1*(size_124)))));
                items_126=((struct sClass**)(right_value138=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_124)))));
                item_existance_127=((_Bool*)(right_value139=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_124)))));
                len_128=0;
                for(
                it_130=map$2charphsClassphp_begin(self);
                !map$2charphsClassphp_end(self);
                it_130=map$2charphsClassphp_next(self)
                ){
                    it2_133=map$2charphsClassphp_at(self,it_130,default_value_132);
                    hash_134=charp_get_hash_key(it_130)%size_124;
                    n_135=hash_134;
                    while((_Bool)1) {
                        if(item_existance_127[n_135]) {
                            n_135++;
                            if(n_135>=size_124) {
                                n_135=0;
                            }
                            else if(n_135==hash_134) {
                                printf("unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_127[n_135]=(_Bool)1;
                            keys_125[n_135]=it_130;
                            items_126[n_135]=map$2charphsClassphp_at(self,it_130,default_value_136);
                            len_128++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                come_free_object((char*)self->keys);
                self->keys=keys_125;
                self->items=items_126;
                self->item_existance=item_existance_127;
                self->size=size_124;
                self->len=len_128;
            come_release_malloced_mem();
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
char* result_129;
memset(&result_129, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result78__ = self->key_list->it->item;
                        come_release_malloced_mem();
                        return __result78__;
                    }
                    memset(&result_129,0,sizeof(char*));
                    char* __result79__ = result_129;
                    come_release_malloced_mem();
                    return __result79__;
                come_release_malloced_mem();
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
                    _Bool __result80__ = self->key_list->it==((void*)0);
                    come_release_malloced_mem();
                    return __result80__;
                come_release_malloced_mem();
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
char* result_131;
memset(&result_131, 0, sizeof(char*)); /* bbb */
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result81__ = self->key_list->it->item;
                        come_release_malloced_mem();
                        return __result81__;
                    }
                    memset(&result_131,0,sizeof(char*));
                    char* __result82__ = result_131;
                    come_release_malloced_mem();
                    return __result82__;
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

static void map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
int hash_162;
int it_163;
_Bool same_key_exist_164;
char* it2_165;
memset(&hash_162, 0, sizeof(int)); /* ddd */
memset(&it_163, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_164, 0, sizeof(_Bool)); /* ddd */
memset(&it2_165, 0, sizeof(char*)); /* ddd */
            if(self->len*2>=self->size) {
                map$2charphsTypephp_rehash(self);
            }
            hash_162=string_get_hash_key(key)%self->size;
            it_163=hash_162;
            while((_Bool)1) {
                if(self->item_existance[it_163]) {
                    if(charp_equals(self->keys[it_163],key)) {
                        if(1) {
                            list$1charpp_remove(self->key_list,self->keys[it_163]);
                            if(self->keys[it_163]) { self->keys[it_163] = come_decrement_ref_count(self->keys[it_163], (void*)0, (void*)0, 0, 0); }
                            self->keys[it_163]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charpp_remove(self->key_list,self->keys[it_163]);
                            self->keys[it_163]=key;
                        }
                        if(1) {
                            if(self->items[it_163]) { come_call_finalizer(sTypep_finalize,self->items[it_163], (void*)0, (void*)0, 0, 0, 0); }
                            self->items[it_163]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_163]=item;
                        }
                        break;
                    }
                    it_163++;
                    if(it_163>=self->size) {
                        it_163=0;
                    }
                    else if(it_163==hash_162) {
                        printf("unexpected error in map.insert\n");
                        exit(2);
                    }
                }
                else {
                    self->item_existance[it_163]=(_Bool)1;
                    if(1) {
                        self->keys[it_163]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_163]=key;
                    }
                    if(1) {
                        self->items[it_163]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_163]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_164=(_Bool)0;
            for(
            it2_165=list$1charpp_begin(self->key_list);
            !list$1charpp_end(self->key_list);
            it_163=list$1charpp_next(self->key_list)
            ){
                if(charp_equals(it2_165,key)) {
                    same_key_exist_164=(_Bool)1;
                }
            }
            if(!same_key_exist_164) {
                list$1charpp_push_back(self->key_list,key);
            }
            if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
}

static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self){
int size_147;
void* right_value179;
char** keys_148;
void* right_value180;
struct sType** items_149;
void* right_value181;
_Bool* item_existance_150;
int len_151;
char* it_153;
struct sType* default_value_155;
struct sType* it2_158;
int hash_159;
int n_160;
struct sType* default_value_161;
memset(&size_147, 0, sizeof(int)); /* ddd */
memset(&right_value179, 0, sizeof(void*));
memset(&keys_148, 0, sizeof(char**)); /* ddd */
memset(&right_value180, 0, sizeof(void*));
memset(&items_149, 0, sizeof(struct sType**)); /* ddd */
memset(&right_value181, 0, sizeof(void*));
memset(&item_existance_150, 0, sizeof(_Bool*)); /* ddd */
memset(&len_151, 0, sizeof(int)); /* ddd */
memset(&it_153, 0, sizeof(char*)); /* ddd */
memset(&default_value_155, 0, sizeof(struct sType*)); /* bbb */
memset(&it2_158, 0, sizeof(struct sType*)); /* ddd */
memset(&hash_159, 0, sizeof(int)); /* ddd */
memset(&n_160, 0, sizeof(int)); /* ddd */
memset(&default_value_161, 0, sizeof(struct sType*)); /* bbb */
                    size_147=self->size*3;
                    keys_148=((char**)(right_value179=(char**)come_calloc(1, sizeof(char*)*(1*(size_147)))));
                    items_149=((struct sType**)(right_value180=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_147)))));
                    item_existance_150=((_Bool*)(right_value181=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_147)))));
                    len_151=0;
                    for(
                    it_153=map$2charphsTypephp_begin(self);
                    !map$2charphsTypephp_end(self);
                    it_153=map$2charphsTypephp_next(self)
                    ){
                        it2_158=map$2charphsTypephp_at(self,it_153,default_value_155);
                        hash_159=charp_get_hash_key(it_153)%size_147;
                        n_160=hash_159;
                        while((_Bool)1) {
                            if(item_existance_150[n_160]) {
                                n_160++;
                                if(n_160>=size_147) {
                                    n_160=0;
                                }
                                else if(n_160==hash_159) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    exit(2);
                                }
                            }
                            else {
                                item_existance_150[n_160]=(_Bool)1;
                                keys_148[n_160]=it_153;
                                items_149[n_160]=map$2charphsTypephp_at(self,it_153,default_value_161);
                                len_151++;
                                break;
                            }
                        }
                    }
                    come_free_object((char*)self->items);
                    if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                    come_free_object((char*)self->keys);
                    self->keys=keys_148;
                    self->items=items_149;
                    self->item_existance=item_existance_150;
                    self->size=size_147;
                    self->len=len_151;
                come_release_malloced_mem();
}

static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self){
char* result_152;
memset(&result_152, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            char* __result83__ = self->key_list->it->item;
                            come_release_malloced_mem();
                            return __result83__;
                        }
                        memset(&result_152,0,sizeof(char*));
                        char* __result84__ = result_152;
                        come_release_malloced_mem();
                        return __result84__;
                    come_release_malloced_mem();
}

static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self){
                        _Bool __result85__ = self->key_list->it==((void*)0);
                        come_release_malloced_mem();
                        return __result85__;
                    come_release_malloced_mem();
}

static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self){
char* result_154;
memset(&result_154, 0, sizeof(char*)); /* bbb */
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            char* __result86__ = self->key_list->it->item;
                            come_release_malloced_mem();
                            return __result86__;
                        }
                        memset(&result_154,0,sizeof(char*));
                        char* __result87__ = result_154;
                        come_release_malloced_mem();
                        return __result87__;
                    come_release_malloced_mem();
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
int hash_156;
int it_157;
memset(&hash_156, 0, sizeof(int)); /* ddd */
memset(&it_157, 0, sizeof(int)); /* ddd */
                            hash_156=string_get_hash_key(((char*)key))%self->size;
                            it_157=hash_156;
                            while((_Bool)1) {
                                if(self->item_existance[it_157]) {
                                    if(charp_equals(self->keys[it_157],key)) {
                                        struct sType* __result88__ = self->items[it_157];
                                        come_release_malloced_mem();
                                        return __result88__;
                                    }
                                    it_157++;
                                    if(it_157>=self->size) {
                                        it_157=0;
                                    }
                                    else if(it_157==hash_156) {
                                        struct sType* __result89__ = default_value;
                                        come_release_malloced_mem();
                                        return __result89__;
                                    }
                                }
                                else {
                                    struct sType* __result90__ = default_value;
                                    come_release_malloced_mem();
                                    return __result90__;
                                }
                            }
                            struct sType* __result91__ = default_value;
                            come_release_malloced_mem();
                            return __result91__;
                        come_release_malloced_mem();
}

static void list$1tuple2$2charphsTypephphp_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* right_value186;
struct list_item$1tuple2$2charphsTypephph* litem_167;
struct tuple2$2charphsTypeph* __dec_obj72;
void* right_value187;
struct list_item$1tuple2$2charphsTypephph* litem_168;
struct tuple2$2charphsTypeph* __dec_obj73;
void* right_value188;
struct list_item$1tuple2$2charphsTypephph* litem_169;
struct tuple2$2charphsTypeph* __dec_obj74;
memset(&right_value186, 0, sizeof(void*));
memset(&litem_167, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value187, 0, sizeof(void*));
memset(&litem_168, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&right_value188, 0, sizeof(void*));
memset(&litem_169, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
            if(self->len==0) {
                litem_167=((struct list_item$1tuple2$2charphsTypephph*)(right_value186=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                litem_167->prev=((void*)0);
                litem_167->next=((void*)0);
                __dec_obj72=litem_167->item;
                litem_167->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj72) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_167;
                self->head=litem_167;
            }
            else if(self->len==1) {
                litem_168=((struct list_item$1tuple2$2charphsTypephph*)(right_value187=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                litem_168->prev=self->head;
                litem_168->next=((void*)0);
                __dec_obj73=litem_168->item;
                litem_168->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj73) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_168;
                self->head->next=litem_168;
            }
            else {
                litem_169=((struct list_item$1tuple2$2charphsTypephph*)(right_value188=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1))));
                litem_169->prev=self->tail;
                litem_169->next=((void*)0);
                __dec_obj74=litem_169->item;
                litem_169->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj74) { come_call_finalizer(tuple2$2charphsTypephp_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0); }
                self->tail->next=litem_169;
                self->tail=litem_169;
            }
            self->len++;
            if(item) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
char* __dec_obj75;
struct sType* __dec_obj76;
            __dec_obj75=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
            __dec_obj76=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0); }
            struct tuple2$2charphsTypeph* __result92__ = self;
            if(self) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
            if(v2) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result92__;
        come_release_malloced_mem();
}

void init_module(struct sInfo* info){
char* p_171;
char* p2_172;
memset(&p_171, 0, sizeof(char*)); /* ddd */
memset(&p2_172, 0, sizeof(char*)); /* ddd */
    char fname_170[4096];
    memset(&fname_170, 0, sizeof(fname_170)); /* aaa */
    p_171=info->sname;
    p2_172=fname_170;
    while(*p_171) {
        if(xisalpha(*p_171)) {
            *p2_172++=*p_171++;
        }
        else {
            *p2_172++=95;
            p_171++;
        }
    }
    *p2_172=0;
come_release_malloced_mem();
}

static struct map$2charphsFunph* map$2charphsFunphp_initialize(struct map$2charphsFunph* self){
void* right_value228;
void* right_value229;
void* right_value230;
int i_183;
void* right_value231;
void* right_value232;
struct list$1charp* __dec_obj80;
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&i_183, 0, sizeof(int)); /* ddd */
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
            self->keys=((char**)(right_value228=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
            self->items=((struct sFun**)(right_value229=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)))));
            self->item_existance=((_Bool*)(right_value230=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
            for(
            i_183=0;
            i_183<128;
            i_183++
            ){
                self->item_existance[i_183]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj80=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value232=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value231=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            if(__dec_obj80) { come_call_finalizer(list$1charpp_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value232) { come_call_finalizer(list$1charpp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0); }
            self->it=0;
            struct map$2charphsFunph* __result93__ = self;
            if(self) { come_call_finalizer(map$2charphsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result93__;
        come_release_malloced_mem();
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
int i_184;
int i_185;
memset(&i_184, 0, sizeof(int)); /* ddd */
memset(&i_185, 0, sizeof(int)); /* ddd */
                for(
                i_184=0;
                i_184<self->size;
                i_184++
                ){
                    if(self->item_existance[i_184]) {
                        if(1) {
                            if(self->items[i_184]) { come_call_finalizer(sFunp_finalize,self->items[i_184], (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->items);
                for(
                i_185=0;
                i_185<self->size;
                i_185++
                ){
                    if(self->item_existance[i_185]) {
                        if(1) {
                            if(self->keys[i_185]) { self->keys[i_185] = come_decrement_ref_count(self->keys[i_185], (void*)0, (void*)0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->keys);
                if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
            come_release_malloced_mem();
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
                            come_release_malloced_mem();
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_initialize(struct map$2charphsGenericsFunph* self){
void* right_value235;
void* right_value236;
void* right_value237;
int i_186;
void* right_value238;
void* right_value239;
struct list$1charp* __dec_obj82;
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&i_186, 0, sizeof(int)); /* ddd */
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
            self->keys=((char**)(right_value235=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
            self->items=((struct sGenericsFun**)(right_value236=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)))));
            self->item_existance=((_Bool*)(right_value237=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
            for(
            i_186=0;
            i_186<128;
            i_186++
            ){
                self->item_existance[i_186]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj82=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value239=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value238=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            if(__dec_obj82) { come_call_finalizer(list$1charpp_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value239) { come_call_finalizer(list$1charpp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0); }
            self->it=0;
            struct map$2charphsGenericsFunph* __result94__ = self;
            if(self) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result94__;
        come_release_malloced_mem();
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
int i_187;
int i_188;
memset(&i_187, 0, sizeof(int)); /* ddd */
memset(&i_188, 0, sizeof(int)); /* ddd */
                for(
                i_187=0;
                i_187<self->size;
                i_187++
                ){
                    if(self->item_existance[i_187]) {
                        if(1) {
                            if(self->items[i_187]) { come_call_finalizer(sGenericsFunp_finalize,self->items[i_187], (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->items);
                for(
                i_188=0;
                i_188<self->size;
                i_188++
                ){
                    if(self->item_existance[i_188]) {
                        if(1) {
                            if(self->keys[i_188]) { self->keys[i_188] = come_decrement_ref_count(self->keys[i_188], (void*)0, (void*)0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->keys);
                if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
            come_release_malloced_mem();
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
                            come_release_malloced_mem();
}

static struct map$2charphsClassph* map$2charphsClassphp_initialize(struct map$2charphsClassph* self){
void* right_value242;
void* right_value243;
void* right_value244;
int i_189;
void* right_value245;
void* right_value246;
struct list$1charp* __dec_obj84;
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&i_189, 0, sizeof(int)); /* ddd */
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
            self->keys=((char**)(right_value242=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
            self->items=((struct sClass**)(right_value243=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)))));
            self->item_existance=((_Bool*)(right_value244=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
            for(
            i_189=0;
            i_189<128;
            i_189++
            ){
                self->item_existance[i_189]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj84=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value246=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value245=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            if(__dec_obj84) { come_call_finalizer(list$1charpp_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value246) { come_call_finalizer(list$1charpp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0); }
            self->it=0;
            struct map$2charphsClassph* __result95__ = self;
            if(self) { come_call_finalizer(map$2charphsClassphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result95__;
        come_release_malloced_mem();
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
int i_190;
int i_191;
memset(&i_190, 0, sizeof(int)); /* ddd */
memset(&i_191, 0, sizeof(int)); /* ddd */
                for(
                i_190=0;
                i_190<self->size;
                i_190++
                ){
                    if(self->item_existance[i_190]) {
                        if(1) {
                            if(self->items[i_190]) { come_call_finalizer(sClassp_finalize,self->items[i_190], (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->items);
                for(
                i_191=0;
                i_191<self->size;
                i_191++
                ){
                    if(self->item_existance[i_191]) {
                        if(1) {
                            if(self->keys[i_191]) { self->keys[i_191] = come_decrement_ref_count(self->keys[i_191], (void*)0, (void*)0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->keys);
                if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
            come_release_malloced_mem();
}

static struct map$2charphsTypeph* map$2charphsTypephp_initialize(struct map$2charphsTypeph* self){
void* right_value249;
void* right_value250;
void* right_value251;
int i_192;
void* right_value252;
void* right_value253;
struct list$1charp* __dec_obj86;
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&i_192, 0, sizeof(int)); /* ddd */
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
            self->keys=((char**)(right_value249=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
            self->items=((struct sType**)(right_value250=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)))));
            self->item_existance=((_Bool*)(right_value251=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
            for(
            i_192=0;
            i_192<128;
            i_192++
            ){
                self->item_existance[i_192]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj86=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value253=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value252=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            if(__dec_obj86) { come_call_finalizer(list$1charpp_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value253) { come_call_finalizer(list$1charpp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0); }
            self->it=0;
            struct map$2charphsTypeph* __result96__ = self;
            if(self) { come_call_finalizer(map$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result96__;
        come_release_malloced_mem();
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
int i_193;
int i_194;
memset(&i_193, 0, sizeof(int)); /* ddd */
memset(&i_194, 0, sizeof(int)); /* ddd */
                for(
                i_193=0;
                i_193<self->size;
                i_193++
                ){
                    if(self->item_existance[i_193]) {
                        if(1) {
                            if(self->items[i_193]) { come_call_finalizer(sTypep_finalize,self->items[i_193], (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->items);
                for(
                i_194=0;
                i_194<self->size;
                i_194++
                ){
                    if(self->item_existance[i_194]) {
                        if(1) {
                            if(self->keys[i_194]) { self->keys[i_194] = come_decrement_ref_count(self->keys[i_194], (void*)0, (void*)0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->keys);
                if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
            come_release_malloced_mem();
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_initialize(struct list$1sRightValueObjectph* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1sRightValueObjectph* __result97__ = self;
            if(self) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result97__;
        come_release_malloced_mem();
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_195;
struct list_item$1sRightValueObjectph* prev_it_196;
memset(&it_195, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
memset(&prev_it_196, 0, sizeof(struct list_item$1sRightValueObjectph*)); /* ddd */
                it_195=self->head;
                while(it_195!=((void*)0)) {
                    if(1) {
                        if(it_195->item) { come_call_finalizer(sRightValueObject_finalize,it_195->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    prev_it_196=it_195;
                    it_195=it_195->next;
                    come_free_object(prev_it_196);
                }
            come_release_malloced_mem();
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
                        come_release_malloced_mem();
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1CVALUEph* __result98__ = self;
            if(self) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result98__;
        come_release_malloced_mem();
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_197;
struct list_item$1CVALUEph* prev_it_198;
memset(&it_197, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&prev_it_198, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
                it_197=self->head;
                while(it_197!=((void*)0)) {
                    if(1) {
                        if(it_197->item) { come_call_finalizer(CVALUE_finalize,it_197->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    prev_it_198=it_197;
                    it_197=it_197->next;
                    come_free_object(prev_it_198);
                }
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

static void sInfo_finalize(struct sInfo* self){
            if(self!=((void*)0)&&self->source!=((void*)0)) {
                if(self->source) { come_call_finalizer(buffer_finalize,self->source, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->err_line!=((void*)0)) {
                if(self->err_line) { self->err_line = come_decrement_ref_count(self->err_line, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->clang_option!=((void*)0)) {
                if(self->clang_option) { self->clang_option = come_decrement_ref_count(self->clang_option, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->funcs!=((void*)0)) {
                if(self->funcs) { come_call_finalizer(map$2charphsFunphp_finalize,self->funcs, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
                if(self->generics_funcs) { come_call_finalizer(map$2charphsGenericsFunphp_finalize,self->generics_funcs, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->classes!=((void*)0)) {
                if(self->classes) { come_call_finalizer(map$2charphsClassphp_finalize,self->classes, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->types!=((void*)0)) {
                if(self->types) { come_call_finalizer(map$2charphsTypephp_finalize,self->types, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->generics_classes!=((void*)0)) {
                if(self->generics_classes) { come_call_finalizer(map$2charphsClassphp_finalize,self->generics_classes, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->module!=((void*)0)) {
                if(self->module) { come_call_finalizer(sModule_finalize,self->module, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
                if(self->right_value_objects) { come_call_finalizer(list$1sRightValueObjectphp_finalize,self->right_value_objects, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->generics_type!=((void*)0)) {
                if(self->generics_type) { come_call_finalizer(sType_finalize,self->generics_type, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
                if(self->method_generics_types) { come_call_finalizer(list$1sTypephp_finalize,self->method_generics_types, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->stack!=((void*)0)) {
                if(self->stack) { come_call_finalizer(list$1CVALUEphp_finalize,self->stack, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
                if(self->come_function_result_type) { come_call_finalizer(sType_finalize,self->come_function_result_type, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->gv_table!=((void*)0)) {
                if(self->gv_table) { come_call_finalizer(sVarTable_finalize,self->gv_table, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
                if(self->generics_type_names) { come_call_finalizer(list$1charphp_finalize,self->generics_type_names, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->impl_type!=((void*)0)) {
                if(self->impl_type) { come_call_finalizer(sType_finalize,self->impl_type, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->output_file_name!=((void*)0)) {
                if(self->output_file_name) { self->output_file_name = come_decrement_ref_count(self->output_file_name, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

static int list$1charphp_length(struct list$1charph* self){
        int __result99__ = self->len;
        come_release_malloced_mem();
        return __result99__;
    come_release_malloced_mem();
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index){
char* default_value_201;
memset(&default_value_201, 0, sizeof(char*)); /* bbb */
            memset(&default_value_201,0,sizeof(char*));
            char* __result102__ = list$1charphp_item(self,index,default_value_201);
            come_release_malloced_mem();
            return __result102__;
        come_release_malloced_mem();
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_202;
int i_203;
memset(&it_202, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_203, 0, sizeof(int)); /* ddd */
                if(position<0) {
                    position+=self->len;
                }
                it_202=self->head;
                i_203=0;
                while(it_202!=((void*)0)) {
                    if(position==i_203) {
                        char* __result100__ = it_202->item;
                        come_release_malloced_mem();
                        return __result100__;
                    }
                    it_202=it_202->next;
                    i_203++;
                }
                char* __result101__ = default_value;
                come_release_malloced_mem();
                return __result101__;
            come_release_malloced_mem();
}

void method_block1_02transpilec(struct __current_stack1__* parent){
            printf("%s %d: linker faield\n",(*(parent->info_200)).sname,(*(parent->info_200)).sline);
            exit(1);
        come_release_malloced_mem();
}

