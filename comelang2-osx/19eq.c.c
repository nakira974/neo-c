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
struct sPlusPlusNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sMinusMinusNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sPlusEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sMinusEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sMultEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sDivEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sModEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sLShifEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sRShiftEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sXorEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sOrEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sAndEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sExpEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, struct sInfo* info);

static struct sNode* sNodep_clone(struct sNode* self);
static void sPlusPlusNode_finalize(struct sPlusPlusNode* self);
_Bool sPlusPlusNode_terminated();

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info);

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
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_push_back2(struct list$1charph* self, char* item);
static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
int sPlusPlusNode_sline(struct sPlusPlusNode* self, struct sInfo* info);

char* sPlusPlusNode_sname(struct sPlusPlusNode* self, struct sInfo* info);

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, struct sInfo* info);

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self);
_Bool sMinusMinusNode_terminated();

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info);

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info);

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info);

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self);
_Bool sPlusEqualNode_terminated();

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info);

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info);

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info);

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self);
_Bool sMinusEqualNode_terminated();

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info);

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info);

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info);

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sMultEqualNode_finalize(struct sMultEqualNode* self);
_Bool sMultEqualNode_terminated();

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info);

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info);

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info);

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sDivEqualNode_finalize(struct sDivEqualNode* self);
_Bool sDivEqualNode_terminated();

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info);

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info);

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info);

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sModEqualNode_finalize(struct sModEqualNode* self);
_Bool sModEqualNode_terminated();

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info);

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info);

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info);

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self);
_Bool sLShifEqualNode_terminated();

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info);

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info);

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info);

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self);
_Bool sRShiftEqualNode_terminated();

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info);

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info);

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info);

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sXorEqualNode_finalize(struct sXorEqualNode* self);
_Bool sXorEqualNode_terminated();

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info);

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info);

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info);

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sOrEqualNode_finalize(struct sOrEqualNode* self);
_Bool sOrEqualNode_terminated();

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info);

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info);

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info);

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sAndEqualNode_finalize(struct sAndEqualNode* self);
_Bool sAndEqualNode_terminated();

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info);

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info);

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info);

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

static void sExpEqualNode_finalize(struct sExpEqualNode* self);
_Bool sExpEqualNode_terminated();

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info);

int sExpEqualNode_sline(struct sExpEqualNode* self, struct sInfo* info);

char* sExpEqualNode_sname(struct sExpEqualNode* self, struct sInfo* info);

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self);
static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self);
static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self);
static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self);
static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self);
static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self);
static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self);
static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self);
static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self);
static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self);
static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self);
static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self);
static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self);
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






struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info){
void* right_value146;
void* right_value147;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* right_value151;
void* right_value152;
void* right_value153;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* right_value157;
void* right_value158;
struct sNode* right_node_90;
void* right_value159;
void* right_value160;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* right_value165;
void* right_value166;
struct sNode* right_node_92;
void* right_value167;
void* right_value168;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* right_value173;
void* right_value174;
struct sNode* right_node_94;
void* right_value175;
void* right_value176;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* right_value181;
void* right_value182;
struct sNode* right_node_96;
void* right_value183;
void* right_value184;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* right_value189;
void* right_value190;
struct sNode* right_node_98;
void* right_value191;
void* right_value192;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* right_value197;
void* right_value198;
struct sNode* right_node_100;
void* right_value199;
void* right_value200;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* right_value205;
void* right_value206;
struct sNode* right_node_102;
void* right_value207;
void* right_value208;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* right_value213;
void* right_value214;
struct sNode* right_node_104;
void* right_value215;
void* right_value216;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* right_value221;
void* right_value222;
struct sNode* right_node_106;
void* right_value223;
void* right_value224;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* right_value229;
void* right_value230;
struct sNode* right_node_108;
void* right_value231;
void* right_value232;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* right_value237;
void* right_value238;
struct sNode* right_node_110;
void* right_value239;
void* right_value240;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* right_value245;
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_node_90, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_node_92, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_node_94, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_node_96, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_node_98, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_node_100, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_node_102, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_node_104, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_node_106, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_node_108, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_node_110, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
    if(*info->p==43&&*(info->p+1)==43) {
        info->p+=2;
        skip_spaces_and_lf(info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value1=come_increment_ref_count(((struct sPlusPlusNode*)(right_value147=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value146=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1))))),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=sPlusPlusNode_finalize;
        _inf_value1->clone=sPlusPlusNode_clone;
        _inf_value1->compile=sPlusPlusNode_compile;
        _inf_value1->sline=sPlusPlusNode_sline;
        _inf_value1->sname=sPlusPlusNode_sname;
        _inf_value1->terminated=sPlusPlusNode_terminated;
        struct sNode* __result113__ = ((struct sNode*)(right_value151=_inf_value1));
        if(right_value146) { come_call_finalizer(sPlusPlusNode_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value147) { come_call_finalizer(sPlusPlusNode_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result113__;
    }
    else if(*info->p==45&&*(info->p+1)==45) {
        info->p+=2;
        skip_spaces_and_lf(info);
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value2=come_increment_ref_count(((struct sMinusMinusNode*)(right_value153=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value152=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1))))),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=sMinusMinusNode_finalize;
        _inf_value2->clone=sMinusMinusNode_clone;
        _inf_value2->compile=sMinusMinusNode_compile;
        _inf_value2->sline=sMinusMinusNode_sline;
        _inf_value2->sname=sMinusMinusNode_sname;
        _inf_value2->terminated=sMinusMinusNode_terminated;
        struct sNode* __result116__ = ((struct sNode*)(right_value157=_inf_value2));
        if(right_value152) { come_call_finalizer(sMinusMinusNode_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value153) { come_call_finalizer(sMinusMinusNode_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result116__;
    }
    else if(*info->p==43&&*(info->p+1)==61) {
        info->p+=2;
        skip_spaces_and_lf(info);
        right_node_90=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=expression_v13(info))));
        if(right_value158) { right_value158 = come_decrement_ref_count(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0); } 
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value3=come_increment_ref_count(((struct sPlusEqualNode*)(right_value160=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value159=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_90),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=sPlusEqualNode_finalize;
        _inf_value3->clone=sPlusEqualNode_clone;
        _inf_value3->compile=sPlusEqualNode_compile;
        _inf_value3->sline=sPlusEqualNode_sline;
        _inf_value3->sname=sPlusEqualNode_sname;
        _inf_value3->terminated=sPlusEqualNode_terminated;
        struct sNode* __result119__ = ((struct sNode*)(right_value165=_inf_value3));
        if(right_node_90) { right_node_90 = come_decrement_ref_count(right_node_90, ((struct sNode*)right_node_90)->finalize, ((struct sNode*)right_node_90)->_protocol_obj, 0, 0); } 
        if(right_value159) { come_call_finalizer(sPlusEqualNode_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value160) { come_call_finalizer(sPlusEqualNode_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result119__;
    }
    else if(*info->p==45&&*(info->p+1)==61) {
        info->p+=2;
        skip_spaces_and_lf(info);
        right_node_92=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=expression_v13(info))));
        if(right_value166) { right_value166 = come_decrement_ref_count(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0); } 
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value4=come_increment_ref_count(((struct sMinusEqualNode*)(right_value168=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value167=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_92),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=sMinusEqualNode_finalize;
        _inf_value4->clone=sMinusEqualNode_clone;
        _inf_value4->compile=sMinusEqualNode_compile;
        _inf_value4->sline=sMinusEqualNode_sline;
        _inf_value4->sname=sMinusEqualNode_sname;
        _inf_value4->terminated=sMinusEqualNode_terminated;
        struct sNode* __result122__ = ((struct sNode*)(right_value173=_inf_value4));
        if(right_node_92) { right_node_92 = come_decrement_ref_count(right_node_92, ((struct sNode*)right_node_92)->finalize, ((struct sNode*)right_node_92)->_protocol_obj, 0, 0); } 
        if(right_value167) { come_call_finalizer(sMinusEqualNode_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value168) { come_call_finalizer(sMinusEqualNode_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result122__;
    }
    else if(*info->p==42&&*(info->p+1)==61) {
        info->p+=2;
        skip_spaces_and_lf(info);
        right_node_94=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value174=expression_v13(info))));
        if(right_value174) { right_value174 = come_decrement_ref_count(right_value174, ((struct sNode*)right_value174)->finalize, ((struct sNode*)right_value174)->_protocol_obj, 1, 0); } 
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value5=come_increment_ref_count(((struct sMultEqualNode*)(right_value176=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value175=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_94),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=sMultEqualNode_finalize;
        _inf_value5->clone=sMultEqualNode_clone;
        _inf_value5->compile=sMultEqualNode_compile;
        _inf_value5->sline=sMultEqualNode_sline;
        _inf_value5->sname=sMultEqualNode_sname;
        _inf_value5->terminated=sMultEqualNode_terminated;
        struct sNode* __result125__ = ((struct sNode*)(right_value181=_inf_value5));
        if(right_node_94) { right_node_94 = come_decrement_ref_count(right_node_94, ((struct sNode*)right_node_94)->finalize, ((struct sNode*)right_node_94)->_protocol_obj, 0, 0); } 
        if(right_value175) { come_call_finalizer(sMultEqualNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value176) { come_call_finalizer(sMultEqualNode_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result125__;
    }
    else if(*info->p==47&&*(info->p+1)==61) {
        info->p+=2;
        skip_spaces_and_lf(info);
        right_node_96=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=expression_v13(info))));
        if(right_value182) { right_value182 = come_decrement_ref_count(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0); } 
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value6=come_increment_ref_count(((struct sDivEqualNode*)(right_value184=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value183=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_96),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=sDivEqualNode_finalize;
        _inf_value6->clone=sDivEqualNode_clone;
        _inf_value6->compile=sDivEqualNode_compile;
        _inf_value6->sline=sDivEqualNode_sline;
        _inf_value6->sname=sDivEqualNode_sname;
        _inf_value6->terminated=sDivEqualNode_terminated;
        struct sNode* __result128__ = ((struct sNode*)(right_value189=_inf_value6));
        if(right_node_96) { right_node_96 = come_decrement_ref_count(right_node_96, ((struct sNode*)right_node_96)->finalize, ((struct sNode*)right_node_96)->_protocol_obj, 0, 0); } 
        if(right_value183) { come_call_finalizer(sDivEqualNode_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value184) { come_call_finalizer(sDivEqualNode_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result128__;
    }
    else if(*info->p==37&&*(info->p+1)==61) {
        info->p+=2;
        skip_spaces_and_lf(info);
        right_node_98=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value190=expression_v13(info))));
        if(right_value190) { right_value190 = come_decrement_ref_count(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0); } 
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value7=come_increment_ref_count(((struct sModEqualNode*)(right_value192=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value191=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_98),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=sModEqualNode_finalize;
        _inf_value7->clone=sModEqualNode_clone;
        _inf_value7->compile=sModEqualNode_compile;
        _inf_value7->sline=sModEqualNode_sline;
        _inf_value7->sname=sModEqualNode_sname;
        _inf_value7->terminated=sModEqualNode_terminated;
        struct sNode* __result131__ = ((struct sNode*)(right_value197=_inf_value7));
        if(right_node_98) { right_node_98 = come_decrement_ref_count(right_node_98, ((struct sNode*)right_node_98)->finalize, ((struct sNode*)right_node_98)->_protocol_obj, 0, 0); } 
        if(right_value191) { come_call_finalizer(sModEqualNode_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value192) { come_call_finalizer(sModEqualNode_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result131__;
    }
    else if(*info->p==60&&*(info->p+1)==60&&*(info->p+2)==61) {
        info->p+=3;
        skip_spaces_and_lf(info);
        right_node_100=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=expression_v13(info))));
        if(right_value198) { right_value198 = come_decrement_ref_count(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0); } 
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value8=come_increment_ref_count(((struct sLShifEqualNode*)(right_value200=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value199=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_100),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=sLShifEqualNode_finalize;
        _inf_value8->clone=sLShifEqualNode_clone;
        _inf_value8->compile=sLShifEqualNode_compile;
        _inf_value8->sline=sLShifEqualNode_sline;
        _inf_value8->sname=sLShifEqualNode_sname;
        _inf_value8->terminated=sLShifEqualNode_terminated;
        struct sNode* __result134__ = ((struct sNode*)(right_value205=_inf_value8));
        if(right_node_100) { right_node_100 = come_decrement_ref_count(right_node_100, ((struct sNode*)right_node_100)->finalize, ((struct sNode*)right_node_100)->_protocol_obj, 0, 0); } 
        if(right_value199) { come_call_finalizer(sLShifEqualNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value200) { come_call_finalizer(sLShifEqualNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result134__;
    }
    else if(*info->p==62&&*(info->p+1)==62&&*(info->p+2)==61) {
        info->p+=3;
        skip_spaces_and_lf(info);
        right_node_102=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value206=expression_v13(info))));
        if(right_value206) { right_value206 = come_decrement_ref_count(right_value206, ((struct sNode*)right_value206)->finalize, ((struct sNode*)right_value206)->_protocol_obj, 1, 0); } 
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value9=come_increment_ref_count(((struct sRShiftEqualNode*)(right_value208=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value207=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_102),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=sRShiftEqualNode_finalize;
        _inf_value9->clone=sRShiftEqualNode_clone;
        _inf_value9->compile=sRShiftEqualNode_compile;
        _inf_value9->sline=sRShiftEqualNode_sline;
        _inf_value9->sname=sRShiftEqualNode_sname;
        _inf_value9->terminated=sRShiftEqualNode_terminated;
        struct sNode* __result137__ = ((struct sNode*)(right_value213=_inf_value9));
        if(right_node_102) { right_node_102 = come_decrement_ref_count(right_node_102, ((struct sNode*)right_node_102)->finalize, ((struct sNode*)right_node_102)->_protocol_obj, 0, 0); } 
        if(right_value207) { come_call_finalizer(sRShiftEqualNode_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value208) { come_call_finalizer(sRShiftEqualNode_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result137__;
    }
    else if(*info->p==94&&*(info->p+1)==61) {
        info->p+=2;
        skip_spaces_and_lf(info);
        right_node_104=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=expression_v13(info))));
        if(right_value214) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0); } 
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value10=come_increment_ref_count(((struct sXorEqualNode*)(right_value216=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value215=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_104),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=sXorEqualNode_finalize;
        _inf_value10->clone=sXorEqualNode_clone;
        _inf_value10->compile=sXorEqualNode_compile;
        _inf_value10->sline=sXorEqualNode_sline;
        _inf_value10->sname=sXorEqualNode_sname;
        _inf_value10->terminated=sXorEqualNode_terminated;
        struct sNode* __result140__ = ((struct sNode*)(right_value221=_inf_value10));
        if(right_node_104) { right_node_104 = come_decrement_ref_count(right_node_104, ((struct sNode*)right_node_104)->finalize, ((struct sNode*)right_node_104)->_protocol_obj, 0, 0); } 
        if(right_value215) { come_call_finalizer(sXorEqualNode_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value216) { come_call_finalizer(sXorEqualNode_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result140__;
    }
    else if(*info->p==38&&*(info->p+1)==61) {
        info->p+=2;
        skip_spaces_and_lf(info);
        right_node_106=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=expression_v13(info))));
        if(right_value222) { right_value222 = come_decrement_ref_count(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0); } 
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value11=come_increment_ref_count(((struct sAndEqualNode*)(right_value224=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value223=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_106),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=sAndEqualNode_finalize;
        _inf_value11->clone=sAndEqualNode_clone;
        _inf_value11->compile=sAndEqualNode_compile;
        _inf_value11->sline=sAndEqualNode_sline;
        _inf_value11->sname=sAndEqualNode_sname;
        _inf_value11->terminated=sAndEqualNode_terminated;
        struct sNode* __result143__ = ((struct sNode*)(right_value229=_inf_value11));
        if(right_node_106) { right_node_106 = come_decrement_ref_count(right_node_106, ((struct sNode*)right_node_106)->finalize, ((struct sNode*)right_node_106)->_protocol_obj, 0, 0); } 
        if(right_value223) { come_call_finalizer(sAndEqualNode_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value224) { come_call_finalizer(sAndEqualNode_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result143__;
    }
    else if(*info->p==124&&*(info->p+1)==61) {
        info->p+=2;
        skip_spaces_and_lf(info);
        right_node_108=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=expression_v13(info))));
        if(right_value230) { right_value230 = come_decrement_ref_count(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0); } 
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value12=come_increment_ref_count(((struct sOrEqualNode*)(right_value232=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value231=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_108),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=sOrEqualNode_finalize;
        _inf_value12->clone=sOrEqualNode_clone;
        _inf_value12->compile=sOrEqualNode_compile;
        _inf_value12->sline=sOrEqualNode_sline;
        _inf_value12->sname=sOrEqualNode_sname;
        _inf_value12->terminated=sOrEqualNode_terminated;
        struct sNode* __result146__ = ((struct sNode*)(right_value237=_inf_value12));
        if(right_node_108) { right_node_108 = come_decrement_ref_count(right_node_108, ((struct sNode*)right_node_108)->finalize, ((struct sNode*)right_node_108)->_protocol_obj, 0, 0); } 
        if(right_value231) { come_call_finalizer(sOrEqualNode_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value232) { come_call_finalizer(sOrEqualNode_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result146__;
    }
    else if(*info->p==61&&*(info->p+1)!=61) {
        info->p++;
        skip_spaces_and_lf(info);
        right_node_110=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=expression_v13(info))));
        if(right_value238) { right_value238 = come_decrement_ref_count(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0); } 
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value13=come_increment_ref_count(((struct sExpEqualNode*)(right_value240=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value239=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_110),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=sExpEqualNode_finalize;
        _inf_value13->clone=sExpEqualNode_clone;
        _inf_value13->compile=sExpEqualNode_compile;
        _inf_value13->sline=sExpEqualNode_sline;
        _inf_value13->sname=sExpEqualNode_sname;
        _inf_value13->terminated=sExpEqualNode_terminated;
        struct sNode* __result149__ = ((struct sNode*)(right_value245=_inf_value13));
        if(right_node_110) { right_node_110 = come_decrement_ref_count(right_node_110, ((struct sNode*)right_node_110)->finalize, ((struct sNode*)right_node_110)->_protocol_obj, 0, 0); } 
        if(right_value239) { come_call_finalizer(sExpEqualNode_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value240) { come_call_finalizer(sExpEqualNode_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result149__;
    }
    struct sNode* __result150__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result150__;
come_release_malloced_mem();
}

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, struct sInfo* info){
void* right_value0;
char* __dec_obj1;
void* right_value2;
struct sNode* __dec_obj2;
memset(&right_value0, 0, sizeof(void*));
memset(&right_value2, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj1=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(info->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    __dec_obj2=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value2=sNodep_clone(left))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0); }
    if(right_value2) { right_value2 = come_decrement_ref_count(right_value2, ((struct sNode*)right_value2)->finalize, ((struct sNode*)right_value2)->_protocol_obj, 1, 0); } 
    struct sPlusPlusNode* __result9__ = self;
    if(self) { come_call_finalizer(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result9__;
come_release_malloced_mem();
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value1;
struct sNode* result_0;
memset(&right_value1, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sNode*)); /* ddd */
        if(self==(void*)0) {
            struct sNode* __result7__ = (void*)0;
            come_release_malloced_mem();
            return __result7__;
        }
        result_0=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
        if(right_value1) { right_value1 = come_decrement_ref_count(right_value1, ((struct sNode*)right_value1)->finalize, ((struct sNode*)right_value1)->_protocol_obj, 1, 0); } 
        if(self!=((void*)0)&&self->clone!=((void*)0)) {
            result_0->_protocol_obj=self->clone(self->_protocol_obj);
        }
        if(self!=((void*)0)) {
            result_0->finalize=self->finalize;
        }
        if(self!=((void*)0)) {
            result_0->clone=self->clone;
        }
        if(self!=((void*)0)) {
            result_0->compile=self->compile;
        }
        if(self!=((void*)0)) {
            result_0->sline=self->sline;
        }
        if(self!=((void*)0)) {
            result_0->sname=self->sname;
        }
        if(self!=((void*)0)) {
            result_0->terminated=self->terminated;
        }
        struct sNode* __result8__ = result_0;
        if(result_0) { result_0 = come_decrement_ref_count(result_0, ((struct sNode*)result_0)->finalize, ((struct sNode*)result_0)->_protocol_obj, 0, 1); } 
        come_release_malloced_mem();
        return __result8__;
    come_release_malloced_mem();
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sPlusPlusNode_terminated(){
    _Bool __result10__ = (_Bool)0;
    come_release_malloced_mem();
    return __result10__;
come_release_malloced_mem();
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
struct sNode* left_1;
void* right_value3;
struct CVALUE* left_value_2;
void* right_value4;
struct CVALUE* come_value_9;
void* right_value5;
char* __dec_obj3;
void* right_value35;
struct sType* __dec_obj22;
memset(&left_1, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value3, 0, sizeof(void*));
memset(&left_value_2, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value4, 0, sizeof(void*));
memset(&come_value_9, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value5, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
    left_1=self->mLeft;
    if(!left_1->compile(left_1->_protocol_obj,info)) {
        _Bool __result11__ = (_Bool)0;
        come_release_malloced_mem();
        return __result11__;
    }
    left_value_2=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value3=get_value_from_stack(-1,info))));
    if(right_value3) { come_call_finalizer(CVALUE_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_9=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value4=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value4) { come_call_finalizer(CVALUE_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj3=come_value_9->c_value;
    come_value_9->c_value=(char*)come_increment_ref_count(((char*)(right_value5=xsprintf("%s++",left_value_2->c_value))));
    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
    if(right_value5) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0); }
    __dec_obj22=come_value_9->type;
    come_value_9->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=sType_clone(left_value_2->type))));
    if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value35) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
    come_value_9->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_9));
    add_come_last_code(info,"%s;\n",come_value_9->c_value);
    _Bool __result25__ = (_Bool)1;
    if(left_value_2) { come_call_finalizer(CVALUE_finalize,left_value_2, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_9) { come_call_finalizer(CVALUE_finalize,come_value_9, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result25__;
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
                    come_release_malloced_mem();
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
                    come_release_malloced_mem();
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
                    come_release_malloced_mem();
}

static struct sType* sType_clone(struct sType* self){
void* right_value6;
struct sType* result_10;
void* right_value9;
struct tuple1$1sTypeph* __dec_obj5;
void* right_value10;
char* __dec_obj6;
void* right_value17;
struct list$1sTypeph* __dec_obj10;
void* right_value24;
struct list$1sNodeph* __dec_obj14;
void* right_value25;
struct list$1sTypeph* __dec_obj15;
void* right_value32;
struct list$1charph* __dec_obj19;
void* right_value33;
struct tuple1$1sTypeph* __dec_obj20;
void* right_value34;
char* __dec_obj21;
memset(&right_value6, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value9, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sType* __result12__ = (void*)0;
            come_release_malloced_mem();
            return __result12__;
        }
        result_10=(struct sType*)come_increment_ref_count(((struct sType*)(right_value6=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
        if(right_value6) { come_call_finalizer(sType_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)) {
            result_10->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj5=result_10->mNoSolvedGenericsType;
            result_10->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value9=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj5) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value9) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj6=result_10->mGenericsName;
            result_10->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value10=string_clone(self->mGenericsName))));
            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
            if(right_value10) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj10=result_10->mGenericsTypes;
            result_10->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj10) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value17) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj14=result_10->mArrayNum;
            result_10->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj14) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value24) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_10->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj15=result_10->mParamTypes;
            result_10->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value25=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj15) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value25) { come_call_finalizer(list$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj19=result_10->mParamNames;
            result_10->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj19) { come_call_finalizer(list$1charphp_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value32) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj20=result_10->mResultType;
            result_10->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value33=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj20) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value33) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_10->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)) {
            result_10->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_10->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_10->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_10->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_10->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_10->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_10->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_10->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_10->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_10->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_10->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_10->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_10->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_10->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_10->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_10->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_10->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_10->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_10->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_10->mSizeNum=self->mSizeNum;
        }
        if(self!=((void*)0)) {
            result_10->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_10->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj21=result_10->mOriginalTypeName;
            result_10->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value34=string_clone(self->mOriginalTypeName))));
            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
            if(right_value34) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_10->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_10->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_10->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_10->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_10->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_10->mInline=self->mInline;
        }
        struct sType* __result24__ = result_10;
        if(result_10) { come_call_finalizer(sType_finalize,result_10, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result24__;
    come_release_malloced_mem();
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value7;
struct tuple1$1sTypeph* result_11;
void* right_value8;
struct sType* __dec_obj4;
memset(&right_value7, 0, sizeof(void*));
memset(&result_11, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value8, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple1$1sTypeph* __result13__ = (void*)0;
                    come_release_malloced_mem();
                    return __result13__;
                }
                result_11=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value7=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                if(right_value7) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj4=result_11->v1;
                    result_11->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value8=sType_clone(self->v1))));
                    if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value8) { come_call_finalizer(sType_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0); }
                }
                struct tuple1$1sTypeph* __result14__ = result_11;
                if(result_11) { come_call_finalizer(tuple1$1sTypephp_finalize,result_11, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result14__;
            come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value11;
void* right_value12;
struct list$1sTypeph* result_12;
struct list_item$1sTypeph* it_13;
void* right_value16;
memset(&right_value11, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value16, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sTypeph* __result15__ = ((void*)0);
                    come_release_malloced_mem();
                    return __result15__;
                }
                result_12=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value12=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value11=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                if(right_value12) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0); }
                it_13=self->head;
                while(it_13!=((void*)0)) {
                    list$1sTypephp_push_back2(result_12,(struct sType*)come_increment_ref_count(((struct sType*)(right_value16=sType_clone(it_13->item)))));
                    if(right_value16) { come_call_finalizer(sType_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
                    it_13=it_13->next;
                }
                struct list$1sTypeph* __result17__ = result_12;
                if(result_12) { come_call_finalizer(list$1sTypephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result17__;
            come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sTypeph* __result16__ = self;
                    if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result16__;
                come_release_malloced_mem();
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value13;
struct list_item$1sTypeph* litem_14;
struct sType* __dec_obj7;
void* right_value14;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj8;
void* right_value15;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj9;
memset(&right_value13, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value14, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value15, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                        if(self->len==0) {
                            litem_14=((struct list_item$1sTypeph*)(right_value13=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_14->prev=((void*)0);
                            litem_14->next=((void*)0);
                            __dec_obj7=litem_14->item;
                            litem_14->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_14;
                            self->head=litem_14;
                        }
                        else if(self->len==1) {
                            litem_15=((struct list_item$1sTypeph*)(right_value14=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_15->prev=self->head;
                            litem_15->next=((void*)0);
                            __dec_obj8=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_15;
                            self->head->next=litem_15;
                        }
                        else {
                            litem_16=((struct list_item$1sTypeph*)(right_value15=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_16->prev=self->tail;
                            litem_16->next=((void*)0);
                            __dec_obj9=litem_16->item;
                            litem_16->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail->next=litem_16;
                            self->tail=litem_16;
                        }
                        self->len++;
                        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value18;
void* right_value19;
struct list$1sNodeph* result_17;
struct list_item$1sNodeph* it_18;
void* right_value23;
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value23, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sNodeph* __result18__ = ((void*)0);
                    come_release_malloced_mem();
                    return __result18__;
                }
                result_17=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value19=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value18=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                if(right_value19) { come_call_finalizer(list$1sNodephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0); }
                it_18=self->head;
                while(it_18!=((void*)0)) {
                    list$1sNodephp_push_back2(result_17,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value23=sNodep_clone(it_18->item)))));
                    if(right_value23) { right_value23 = come_decrement_ref_count(right_value23, ((struct sNode*)right_value23)->finalize, ((struct sNode*)right_value23)->_protocol_obj, 1, 0); } 
                    it_18=it_18->next;
                }
                struct list$1sNodeph* __result20__ = result_17;
                if(result_17) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result20__;
            come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sNodeph* __result19__ = self;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result19__;
                come_release_malloced_mem();
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value20;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj11;
void* right_value21;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj12;
void* right_value22;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj13;
memset(&right_value20, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value21, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value22, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                        if(self->len==0) {
                            litem_19=((struct list_item$1sNodeph*)(right_value20=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_19->prev=((void*)0);
                            litem_19->next=((void*)0);
                            __dec_obj11=litem_19->item;
                            litem_19->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0); }
                            self->tail=litem_19;
                            self->head=litem_19;
                        }
                        else if(self->len==1) {
                            litem_20=((struct list_item$1sNodeph*)(right_value21=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_20->prev=self->head;
                            litem_20->next=((void*)0);
                            __dec_obj12=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0); }
                            self->tail=litem_20;
                            self->head->next=litem_20;
                        }
                        else {
                            litem_21=((struct list_item$1sNodeph*)(right_value22=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_21->prev=self->tail;
                            litem_21->next=((void*)0);
                            __dec_obj13=litem_21->item;
                            litem_21->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0); }
                            self->tail->next=litem_21;
                            self->tail=litem_21;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
                    come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value26;
void* right_value27;
struct list$1charph* result_22;
struct list_item$1charph* it_23;
void* right_value31;
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&result_22, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_23, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value31, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1charph* __result21__ = ((void*)0);
                    come_release_malloced_mem();
                    return __result21__;
                }
                result_22=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value27=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value26=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                if(right_value27) { come_call_finalizer(list$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0); }
                it_23=self->head;
                while(it_23!=((void*)0)) {
                    list$1charphp_push_back2(result_22,(char*)come_increment_ref_count(((char*)(right_value31=string_clone(it_23->item)))));
                    if(right_value31) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0); }
                    it_23=it_23->next;
                }
                struct list$1charph* __result23__ = result_22;
                if(result_22) { come_call_finalizer(list$1charphp_finalize,result_22, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result23__;
            come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1charph* __result22__ = self;
                    if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result22__;
                come_release_malloced_mem();
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value28;
struct list_item$1charph* litem_24;
char* __dec_obj16;
void* right_value29;
struct list_item$1charph* litem_25;
char* __dec_obj17;
void* right_value30;
struct list_item$1charph* litem_26;
char* __dec_obj18;
memset(&right_value28, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value29, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value30, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*)); /* ddd */
                        if(self->len==0) {
                            litem_24=((struct list_item$1charph*)(right_value28=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_24->prev=((void*)0);
                            litem_24->next=((void*)0);
                            __dec_obj16=litem_24->item;
                            litem_24->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_24;
                            self->head=litem_24;
                        }
                        else if(self->len==1) {
                            litem_25=((struct list_item$1charph*)(right_value29=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_25->prev=self->head;
                            litem_25->next=((void*)0);
                            __dec_obj17=litem_25->item;
                            litem_25->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_25;
                            self->head->next=litem_25;
                        }
                        else {
                            litem_26=((struct list_item$1charph*)(right_value30=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_26->prev=self->tail;
                            litem_26->next=((void*)0);
                            __dec_obj18=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
                            self->tail->next=litem_26;
                            self->tail=litem_26;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
                    come_release_malloced_mem();
}

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* right_value36;
struct list_item$1CVALUEph* litem_27;
struct CVALUE* __dec_obj23;
void* right_value37;
struct list_item$1CVALUEph* litem_28;
struct CVALUE* __dec_obj24;
void* right_value38;
struct list_item$1CVALUEph* litem_29;
struct CVALUE* __dec_obj25;
memset(&right_value36, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value37, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value38, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
        if(self->len==0) {
            litem_27=((struct list_item$1CVALUEph*)(right_value36=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_27->prev=((void*)0);
            litem_27->next=((void*)0);
            __dec_obj23=litem_27->item;
            litem_27->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj23) { come_call_finalizer(CVALUE_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_27;
            self->head=litem_27;
        }
        else if(self->len==1) {
            litem_28=((struct list_item$1CVALUEph*)(right_value37=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_28->prev=self->head;
            litem_28->next=((void*)0);
            __dec_obj24=litem_28->item;
            litem_28->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj24) { come_call_finalizer(CVALUE_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_28;
            self->head->next=litem_28;
        }
        else {
            litem_29=((struct list_item$1CVALUEph*)(right_value38=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_29->prev=self->tail;
            litem_29->next=((void*)0);
            __dec_obj25=litem_29->item;
            litem_29->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj25) { come_call_finalizer(CVALUE_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0); }
            self->tail->next=litem_29;
            self->tail=litem_29;
        }
        self->len++;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
}

int sPlusPlusNode_sline(struct sPlusPlusNode* self, struct sInfo* info){
    int __result26__ = self->sline;
    come_release_malloced_mem();
    return __result26__;
come_release_malloced_mem();
}

char* sPlusPlusNode_sname(struct sPlusPlusNode* self, struct sInfo* info){
void* right_value39;
memset(&right_value39, 0, sizeof(void*));
    char* __result27__ = ((char*)(right_value39=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result27__;
come_release_malloced_mem();
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, struct sInfo* info){
void* right_value40;
char* __dec_obj26;
void* right_value41;
struct sNode* __dec_obj27;
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj26=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value40=__builtin_string(info->sname))));
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
    if(right_value40) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0); }
    __dec_obj27=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNodep_clone(left))));
    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0); }
    if(right_value41) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0); } 
    struct sMinusMinusNode* __result28__ = self;
    if(self) { come_call_finalizer(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result28__;
come_release_malloced_mem();
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sMinusMinusNode_terminated(){
    _Bool __result29__ = (_Bool)0;
    come_release_malloced_mem();
    return __result29__;
come_release_malloced_mem();
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
struct sNode* left_30;
void* right_value42;
struct CVALUE* left_value_31;
void* right_value43;
struct CVALUE* come_value_32;
void* right_value44;
char* __dec_obj28;
void* right_value45;
struct sType* __dec_obj29;
memset(&left_30, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
memset(&left_value_31, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value43, 0, sizeof(void*));
memset(&come_value_32, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
    left_30=self->mLeft;
    if(!left_30->compile(left_30->_protocol_obj,info)) {
        _Bool __result30__ = (_Bool)0;
        come_release_malloced_mem();
        return __result30__;
    }
    left_value_31=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value42=get_value_from_stack(-1,info))));
    if(right_value42) { come_call_finalizer(CVALUE_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_32=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value43=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value43) { come_call_finalizer(CVALUE_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj28=come_value_32->c_value;
    come_value_32->c_value=(char*)come_increment_ref_count(((char*)(right_value44=xsprintf("%s--",left_value_31->c_value))));
    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
    if(right_value44) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0); }
    __dec_obj29=come_value_32->type;
    come_value_32->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=sType_clone(left_value_31->type))));
    if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value45) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0); }
    come_value_32->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_32));
    add_come_last_code(info,"%s;\n",come_value_32->c_value);
    _Bool __result31__ = (_Bool)1;
    if(left_value_31) { come_call_finalizer(CVALUE_finalize,left_value_31, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_32) { come_call_finalizer(CVALUE_finalize,come_value_32, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result31__;
come_release_malloced_mem();
}

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info){
    int __result32__ = self->sline;
    come_release_malloced_mem();
    return __result32__;
come_release_malloced_mem();
}

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info){
void* right_value46;
memset(&right_value46, 0, sizeof(void*));
    char* __result33__ = ((char*)(right_value46=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result33__;
come_release_malloced_mem();
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value47;
char* __dec_obj30;
void* right_value48;
struct sNode* __dec_obj31;
void* right_value49;
struct sNode* __dec_obj32;
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj30=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value47=__builtin_string(info->sname))));
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
    if(right_value47) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0); }
    __dec_obj31=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value48=sNodep_clone(left))));
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0); }
    if(right_value48) { right_value48 = come_decrement_ref_count(right_value48, ((struct sNode*)right_value48)->finalize, ((struct sNode*)right_value48)->_protocol_obj, 1, 0); } 
    __dec_obj32=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=sNodep_clone(right))));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0); }
    if(right_value49) { right_value49 = come_decrement_ref_count(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0); } 
    struct sPlusEqualNode* __result34__ = self;
    if(self) { come_call_finalizer(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result34__;
come_release_malloced_mem();
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sPlusEqualNode_terminated(){
    _Bool __result35__ = (_Bool)0;
    come_release_malloced_mem();
    return __result35__;
come_release_malloced_mem();
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
struct sNode* left_33;
void* right_value50;
struct CVALUE* left_value_34;
struct sNode* right_35;
void* right_value51;
struct CVALUE* right_value_36;
void* right_value52;
struct CVALUE* come_value_37;
void* right_value53;
char* __dec_obj33;
void* right_value54;
struct sType* __dec_obj34;
memset(&left_33, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value50, 0, sizeof(void*));
memset(&left_value_34, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_35, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value51, 0, sizeof(void*));
memset(&right_value_36, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value52, 0, sizeof(void*));
memset(&come_value_37, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
    left_33=self->mLeft;
    if(!left_33->compile(left_33->_protocol_obj,info)) {
        _Bool __result36__ = (_Bool)0;
        come_release_malloced_mem();
        return __result36__;
    }
    left_value_34=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value50=get_value_from_stack(-1,info))));
    if(right_value50) { come_call_finalizer(CVALUE_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_35=self->mRight;
    if(!right_35->compile(right_35->_protocol_obj,info)) {
        _Bool __result37__ = (_Bool)0;
        come_release_malloced_mem();
        return __result37__;
    }
    right_value_36=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value51=get_value_from_stack(-1,info))));
    if(right_value51) { come_call_finalizer(CVALUE_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_37=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value52) { come_call_finalizer(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj33=come_value_37->c_value;
    come_value_37->c_value=(char*)come_increment_ref_count(((char*)(right_value53=xsprintf("%s+=%s",left_value_34->c_value,right_value_36->c_value))));
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0); }
    if(right_value53) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0); }
    __dec_obj34=come_value_37->type;
    come_value_37->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(left_value_34->type))));
    if(__dec_obj34) { come_call_finalizer(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value54) { come_call_finalizer(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0); }
    come_value_37->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_37));
    add_come_last_code(info,"%s;\n",come_value_37->c_value);
    _Bool __result38__ = (_Bool)1;
    if(left_value_34) { come_call_finalizer(CVALUE_finalize,left_value_34, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_36) { come_call_finalizer(CVALUE_finalize,right_value_36, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_37) { come_call_finalizer(CVALUE_finalize,come_value_37, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result38__;
come_release_malloced_mem();
}

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info){
    int __result39__ = self->sline;
    come_release_malloced_mem();
    return __result39__;
come_release_malloced_mem();
}

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info){
void* right_value55;
memset(&right_value55, 0, sizeof(void*));
    char* __result40__ = ((char*)(right_value55=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result40__;
come_release_malloced_mem();
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value56;
char* __dec_obj35;
void* right_value57;
struct sNode* __dec_obj36;
void* right_value58;
struct sNode* __dec_obj37;
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj35=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value56=__builtin_string(info->sname))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
    if(right_value56) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0); }
    __dec_obj36=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value57=sNodep_clone(left))));
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0); }
    if(right_value57) { right_value57 = come_decrement_ref_count(right_value57, ((struct sNode*)right_value57)->finalize, ((struct sNode*)right_value57)->_protocol_obj, 1, 0); } 
    __dec_obj37=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value58=sNodep_clone(right))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0); }
    if(right_value58) { right_value58 = come_decrement_ref_count(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0); } 
    struct sMinusEqualNode* __result41__ = self;
    if(self) { come_call_finalizer(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result41__;
come_release_malloced_mem();
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sMinusEqualNode_terminated(){
    _Bool __result42__ = (_Bool)0;
    come_release_malloced_mem();
    return __result42__;
come_release_malloced_mem();
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
struct sNode* left_38;
void* right_value59;
struct CVALUE* left_value_39;
struct sNode* right_40;
void* right_value60;
struct CVALUE* right_value_41;
void* right_value61;
struct CVALUE* come_value_42;
void* right_value62;
char* __dec_obj38;
void* right_value63;
struct sType* __dec_obj39;
memset(&left_38, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value59, 0, sizeof(void*));
memset(&left_value_39, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_40, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value60, 0, sizeof(void*));
memset(&right_value_41, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value61, 0, sizeof(void*));
memset(&come_value_42, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
    left_38=self->mLeft;
    if(!left_38->compile(left_38->_protocol_obj,info)) {
        _Bool __result43__ = (_Bool)0;
        come_release_malloced_mem();
        return __result43__;
    }
    left_value_39=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value59=get_value_from_stack(-1,info))));
    if(right_value59) { come_call_finalizer(CVALUE_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_40=self->mRight;
    if(!right_40->compile(right_40->_protocol_obj,info)) {
        _Bool __result44__ = (_Bool)0;
        come_release_malloced_mem();
        return __result44__;
    }
    right_value_41=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value60=get_value_from_stack(-1,info))));
    if(right_value60) { come_call_finalizer(CVALUE_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_42=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value61=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value61) { come_call_finalizer(CVALUE_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj38=come_value_42->c_value;
    come_value_42->c_value=(char*)come_increment_ref_count(((char*)(right_value62=xsprintf("%s-=%s",left_value_39->c_value,right_value_41->c_value))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
    if(right_value62) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0); }
    __dec_obj39=come_value_42->type;
    come_value_42->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(left_value_39->type))));
    if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value63) { come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0); }
    come_value_42->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_42));
    add_come_last_code(info,"%s;\n",come_value_42->c_value);
    _Bool __result45__ = (_Bool)1;
    if(left_value_39) { come_call_finalizer(CVALUE_finalize,left_value_39, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_41) { come_call_finalizer(CVALUE_finalize,right_value_41, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_42) { come_call_finalizer(CVALUE_finalize,come_value_42, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result45__;
come_release_malloced_mem();
}

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info){
    int __result46__ = self->sline;
    come_release_malloced_mem();
    return __result46__;
come_release_malloced_mem();
}

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info){
void* right_value64;
memset(&right_value64, 0, sizeof(void*));
    char* __result47__ = ((char*)(right_value64=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result47__;
come_release_malloced_mem();
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value65;
char* __dec_obj40;
void* right_value66;
struct sNode* __dec_obj41;
void* right_value67;
struct sNode* __dec_obj42;
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj40=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value65=__builtin_string(info->sname))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
    if(right_value65) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0); }
    __dec_obj41=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value66=sNodep_clone(left))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0); }
    if(right_value66) { right_value66 = come_decrement_ref_count(right_value66, ((struct sNode*)right_value66)->finalize, ((struct sNode*)right_value66)->_protocol_obj, 1, 0); } 
    __dec_obj42=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=sNodep_clone(right))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0); }
    if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0); } 
    struct sMultEqualNode* __result48__ = self;
    if(self) { come_call_finalizer(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result48__;
come_release_malloced_mem();
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sMultEqualNode_terminated(){
    _Bool __result49__ = (_Bool)0;
    come_release_malloced_mem();
    return __result49__;
come_release_malloced_mem();
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
struct sNode* left_43;
void* right_value68;
struct CVALUE* left_value_44;
struct sNode* right_45;
void* right_value69;
struct CVALUE* right_value_46;
void* right_value70;
struct CVALUE* come_value_47;
void* right_value71;
char* __dec_obj43;
void* right_value72;
struct sType* __dec_obj44;
memset(&left_43, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value68, 0, sizeof(void*));
memset(&left_value_44, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_45, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value69, 0, sizeof(void*));
memset(&right_value_46, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value70, 0, sizeof(void*));
memset(&come_value_47, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
    left_43=self->mLeft;
    if(!left_43->compile(left_43->_protocol_obj,info)) {
        _Bool __result50__ = (_Bool)0;
        come_release_malloced_mem();
        return __result50__;
    }
    left_value_44=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value68=get_value_from_stack(-1,info))));
    if(right_value68) { come_call_finalizer(CVALUE_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_45=self->mRight;
    if(!right_45->compile(right_45->_protocol_obj,info)) {
        _Bool __result51__ = (_Bool)0;
        come_release_malloced_mem();
        return __result51__;
    }
    right_value_46=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value69=get_value_from_stack(-1,info))));
    if(right_value69) { come_call_finalizer(CVALUE_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value70=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value70) { come_call_finalizer(CVALUE_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj43=come_value_47->c_value;
    come_value_47->c_value=(char*)come_increment_ref_count(((char*)(right_value71=xsprintf("%s*=%s",left_value_44->c_value,right_value_46->c_value))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
    if(right_value71) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0); }
    __dec_obj44=come_value_47->type;
    come_value_47->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(left_value_44->type))));
    if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value72) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0); }
    come_value_47->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_47));
    add_come_last_code(info,"%s;\n",come_value_47->c_value);
    _Bool __result52__ = (_Bool)1;
    if(left_value_44) { come_call_finalizer(CVALUE_finalize,left_value_44, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_46) { come_call_finalizer(CVALUE_finalize,right_value_46, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_47) { come_call_finalizer(CVALUE_finalize,come_value_47, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result52__;
come_release_malloced_mem();
}

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info){
    int __result53__ = self->sline;
    come_release_malloced_mem();
    return __result53__;
come_release_malloced_mem();
}

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info){
void* right_value73;
memset(&right_value73, 0, sizeof(void*));
    char* __result54__ = ((char*)(right_value73=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result54__;
come_release_malloced_mem();
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value74;
char* __dec_obj45;
void* right_value75;
struct sNode* __dec_obj46;
void* right_value76;
struct sNode* __dec_obj47;
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value74=__builtin_string(info->sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
    if(right_value74) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0); }
    __dec_obj46=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value75=sNodep_clone(left))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0); }
    if(right_value75) { right_value75 = come_decrement_ref_count(right_value75, ((struct sNode*)right_value75)->finalize, ((struct sNode*)right_value75)->_protocol_obj, 1, 0); } 
    __dec_obj47=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNodep_clone(right))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0); }
    if(right_value76) { right_value76 = come_decrement_ref_count(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0); } 
    struct sDivEqualNode* __result55__ = self;
    if(self) { come_call_finalizer(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result55__;
come_release_malloced_mem();
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sDivEqualNode_terminated(){
    _Bool __result56__ = (_Bool)0;
    come_release_malloced_mem();
    return __result56__;
come_release_malloced_mem();
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
struct sNode* left_48;
void* right_value77;
struct CVALUE* left_value_49;
struct sNode* right_50;
void* right_value78;
struct CVALUE* right_value_51;
void* right_value79;
struct CVALUE* come_value_52;
void* right_value80;
char* __dec_obj48;
void* right_value81;
struct sType* __dec_obj49;
memset(&left_48, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value77, 0, sizeof(void*));
memset(&left_value_49, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_50, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value78, 0, sizeof(void*));
memset(&right_value_51, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value79, 0, sizeof(void*));
memset(&come_value_52, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
    left_48=self->mLeft;
    if(!left_48->compile(left_48->_protocol_obj,info)) {
        _Bool __result57__ = (_Bool)0;
        come_release_malloced_mem();
        return __result57__;
    }
    left_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value77=get_value_from_stack(-1,info))));
    if(right_value77) { come_call_finalizer(CVALUE_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_50=self->mRight;
    if(!right_50->compile(right_50->_protocol_obj,info)) {
        _Bool __result58__ = (_Bool)0;
        come_release_malloced_mem();
        return __result58__;
    }
    right_value_51=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value78=get_value_from_stack(-1,info))));
    if(right_value78) { come_call_finalizer(CVALUE_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value79=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value79) { come_call_finalizer(CVALUE_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj48=come_value_52->c_value;
    come_value_52->c_value=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s/=%s",left_value_49->c_value,right_value_51->c_value))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
    if(right_value80) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0); }
    __dec_obj49=come_value_52->type;
    come_value_52->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(left_value_49->type))));
    if(__dec_obj49) { come_call_finalizer(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value81) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
    come_value_52->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_52));
    add_come_last_code(info,"%s;\n",come_value_52->c_value);
    _Bool __result59__ = (_Bool)1;
    if(left_value_49) { come_call_finalizer(CVALUE_finalize,left_value_49, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_51) { come_call_finalizer(CVALUE_finalize,right_value_51, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_52) { come_call_finalizer(CVALUE_finalize,come_value_52, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result59__;
come_release_malloced_mem();
}

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info){
    int __result60__ = self->sline;
    come_release_malloced_mem();
    return __result60__;
come_release_malloced_mem();
}

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info){
void* right_value82;
memset(&right_value82, 0, sizeof(void*));
    char* __result61__ = ((char*)(right_value82=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result61__;
come_release_malloced_mem();
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value83;
char* __dec_obj50;
void* right_value84;
struct sNode* __dec_obj51;
void* right_value85;
struct sNode* __dec_obj52;
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj50=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string(info->sname))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
    if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
    __dec_obj51=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNodep_clone(left))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0); }
    if(right_value84) { right_value84 = come_decrement_ref_count(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0); } 
    __dec_obj52=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNodep_clone(right))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0); }
    if(right_value85) { right_value85 = come_decrement_ref_count(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0); } 
    struct sModEqualNode* __result62__ = self;
    if(self) { come_call_finalizer(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result62__;
come_release_malloced_mem();
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sModEqualNode_terminated(){
    _Bool __result63__ = (_Bool)0;
    come_release_malloced_mem();
    return __result63__;
come_release_malloced_mem();
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
struct sNode* left_53;
void* right_value86;
struct CVALUE* left_value_54;
struct sNode* right_55;
void* right_value87;
struct CVALUE* right_value_56;
void* right_value88;
struct CVALUE* come_value_57;
void* right_value89;
char* __dec_obj53;
void* right_value90;
struct sType* __dec_obj54;
memset(&left_53, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value86, 0, sizeof(void*));
memset(&left_value_54, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_55, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value87, 0, sizeof(void*));
memset(&right_value_56, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value88, 0, sizeof(void*));
memset(&come_value_57, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
    left_53=self->mLeft;
    if(!left_53->compile(left_53->_protocol_obj,info)) {
        _Bool __result64__ = (_Bool)0;
        come_release_malloced_mem();
        return __result64__;
    }
    left_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value86=get_value_from_stack(-1,info))));
    if(right_value86) { come_call_finalizer(CVALUE_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_55=self->mRight;
    if(!right_55->compile(right_55->_protocol_obj,info)) {
        _Bool __result65__ = (_Bool)0;
        come_release_malloced_mem();
        return __result65__;
    }
    right_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value87=get_value_from_stack(-1,info))));
    if(right_value87) { come_call_finalizer(CVALUE_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value88=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value88) { come_call_finalizer(CVALUE_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj53=come_value_57->c_value;
    come_value_57->c_value=(char*)come_increment_ref_count(((char*)(right_value89=xsprintf("%s%%=%s",left_value_54->c_value,right_value_56->c_value))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
    if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
    __dec_obj54=come_value_57->type;
    come_value_57->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(left_value_54->type))));
    if(__dec_obj54) { come_call_finalizer(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value90) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0); }
    come_value_57->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_57));
    add_come_last_code(info,"%s;\n",come_value_57->c_value);
    _Bool __result66__ = (_Bool)1;
    if(left_value_54) { come_call_finalizer(CVALUE_finalize,left_value_54, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_56) { come_call_finalizer(CVALUE_finalize,right_value_56, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_57) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result66__;
come_release_malloced_mem();
}

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info){
    int __result67__ = self->sline;
    come_release_malloced_mem();
    return __result67__;
come_release_malloced_mem();
}

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info){
void* right_value91;
memset(&right_value91, 0, sizeof(void*));
    char* __result68__ = ((char*)(right_value91=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result68__;
come_release_malloced_mem();
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value92;
char* __dec_obj55;
void* right_value93;
struct sNode* __dec_obj56;
void* right_value94;
struct sNode* __dec_obj57;
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(info->sname))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
    if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
    __dec_obj56=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value93=sNodep_clone(left))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0); }
    if(right_value93) { right_value93 = come_decrement_ref_count(right_value93, ((struct sNode*)right_value93)->finalize, ((struct sNode*)right_value93)->_protocol_obj, 1, 0); } 
    __dec_obj57=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=sNodep_clone(right))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0); }
    if(right_value94) { right_value94 = come_decrement_ref_count(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0); } 
    struct sLShifEqualNode* __result69__ = self;
    if(self) { come_call_finalizer(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result69__;
come_release_malloced_mem();
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sLShifEqualNode_terminated(){
    _Bool __result70__ = (_Bool)0;
    come_release_malloced_mem();
    return __result70__;
come_release_malloced_mem();
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
struct sNode* left_58;
void* right_value95;
struct CVALUE* left_value_59;
struct sNode* right_60;
void* right_value96;
struct CVALUE* right_value_61;
void* right_value97;
struct CVALUE* come_value_62;
void* right_value98;
char* __dec_obj58;
void* right_value99;
struct sType* __dec_obj59;
memset(&left_58, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value95, 0, sizeof(void*));
memset(&left_value_59, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_60, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value96, 0, sizeof(void*));
memset(&right_value_61, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value97, 0, sizeof(void*));
memset(&come_value_62, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
    left_58=self->mLeft;
    if(!left_58->compile(left_58->_protocol_obj,info)) {
        _Bool __result71__ = (_Bool)0;
        come_release_malloced_mem();
        return __result71__;
    }
    left_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value95=get_value_from_stack(-1,info))));
    if(right_value95) { come_call_finalizer(CVALUE_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_60=self->mRight;
    if(!right_60->compile(right_60->_protocol_obj,info)) {
        _Bool __result72__ = (_Bool)0;
        come_release_malloced_mem();
        return __result72__;
    }
    right_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value96=get_value_from_stack(-1,info))));
    if(right_value96) { come_call_finalizer(CVALUE_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value97) { come_call_finalizer(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj58=come_value_62->c_value;
    come_value_62->c_value=(char*)come_increment_ref_count(((char*)(right_value98=xsprintf("%s<<=%s",left_value_59->c_value,right_value_61->c_value))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
    if(right_value98) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0); }
    __dec_obj59=come_value_62->type;
    come_value_62->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(left_value_59->type))));
    if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value99) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0); }
    come_value_62->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_62));
    add_come_last_code(info,"%s;\n",come_value_62->c_value);
    _Bool __result73__ = (_Bool)1;
    if(left_value_59) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_61) { come_call_finalizer(CVALUE_finalize,right_value_61, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_62) { come_call_finalizer(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result73__;
come_release_malloced_mem();
}

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info){
    int __result74__ = self->sline;
    come_release_malloced_mem();
    return __result74__;
come_release_malloced_mem();
}

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info){
void* right_value100;
memset(&right_value100, 0, sizeof(void*));
    char* __result75__ = ((char*)(right_value100=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result75__;
come_release_malloced_mem();
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value101;
char* __dec_obj60;
void* right_value102;
struct sNode* __dec_obj61;
void* right_value103;
struct sNode* __dec_obj62;
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj60=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(info->sname))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
    if(right_value101) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0); }
    __dec_obj61=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=sNodep_clone(left))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0); }
    if(right_value102) { right_value102 = come_decrement_ref_count(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0); } 
    __dec_obj62=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=sNodep_clone(right))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0); }
    if(right_value103) { right_value103 = come_decrement_ref_count(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0); } 
    struct sRShiftEqualNode* __result76__ = self;
    if(self) { come_call_finalizer(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result76__;
come_release_malloced_mem();
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sRShiftEqualNode_terminated(){
    _Bool __result77__ = (_Bool)0;
    come_release_malloced_mem();
    return __result77__;
come_release_malloced_mem();
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
struct sNode* left_63;
void* right_value104;
struct CVALUE* left_value_64;
struct sNode* right_65;
void* right_value105;
struct CVALUE* right_value_66;
void* right_value106;
struct CVALUE* come_value_67;
void* right_value107;
char* __dec_obj63;
void* right_value108;
struct sType* __dec_obj64;
memset(&left_63, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value104, 0, sizeof(void*));
memset(&left_value_64, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_65, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value105, 0, sizeof(void*));
memset(&right_value_66, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value106, 0, sizeof(void*));
memset(&come_value_67, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
    left_63=self->mLeft;
    if(!left_63->compile(left_63->_protocol_obj,info)) {
        _Bool __result78__ = (_Bool)0;
        come_release_malloced_mem();
        return __result78__;
    }
    left_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value104=get_value_from_stack(-1,info))));
    if(right_value104) { come_call_finalizer(CVALUE_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_65=self->mRight;
    if(!right_65->compile(right_65->_protocol_obj,info)) {
        _Bool __result79__ = (_Bool)0;
        come_release_malloced_mem();
        return __result79__;
    }
    right_value_66=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value105=get_value_from_stack(-1,info))));
    if(right_value105) { come_call_finalizer(CVALUE_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value106) { come_call_finalizer(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj63=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value107=xsprintf("%s>>=%s",left_value_64->c_value,right_value_66->c_value))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
    if(right_value107) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0); }
    __dec_obj64=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(left_value_64->type))));
    if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value108) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0); }
    come_value_67->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
    add_come_last_code(info,"%s;\n",come_value_67->c_value);
    _Bool __result80__ = (_Bool)1;
    if(left_value_64) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_66) { come_call_finalizer(CVALUE_finalize,right_value_66, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_67) { come_call_finalizer(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result80__;
come_release_malloced_mem();
}

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info){
    int __result81__ = self->sline;
    come_release_malloced_mem();
    return __result81__;
come_release_malloced_mem();
}

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info){
void* right_value109;
memset(&right_value109, 0, sizeof(void*));
    char* __result82__ = ((char*)(right_value109=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result82__;
come_release_malloced_mem();
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value110;
char* __dec_obj65;
void* right_value111;
struct sNode* __dec_obj66;
void* right_value112;
struct sNode* __dec_obj67;
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value110=__builtin_string(info->sname))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
    if(right_value110) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0); }
    __dec_obj66=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNodep_clone(left))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0); }
    if(right_value111) { right_value111 = come_decrement_ref_count(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0); } 
    __dec_obj67=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNodep_clone(right))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0); }
    if(right_value112) { right_value112 = come_decrement_ref_count(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0); } 
    struct sXorEqualNode* __result83__ = self;
    if(self) { come_call_finalizer(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result83__;
come_release_malloced_mem();
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sXorEqualNode_terminated(){
    _Bool __result84__ = (_Bool)0;
    come_release_malloced_mem();
    return __result84__;
come_release_malloced_mem();
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
struct sNode* left_68;
void* right_value113;
struct CVALUE* left_value_69;
struct sNode* right_70;
void* right_value114;
struct CVALUE* right_value_71;
void* right_value115;
struct CVALUE* come_value_72;
void* right_value116;
char* __dec_obj68;
void* right_value117;
struct sType* __dec_obj69;
memset(&left_68, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value113, 0, sizeof(void*));
memset(&left_value_69, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_70, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value114, 0, sizeof(void*));
memset(&right_value_71, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value115, 0, sizeof(void*));
memset(&come_value_72, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
    left_68=self->mLeft;
    if(!left_68->compile(left_68->_protocol_obj,info)) {
        _Bool __result85__ = (_Bool)0;
        come_release_malloced_mem();
        return __result85__;
    }
    left_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value113=get_value_from_stack(-1,info))));
    if(right_value113) { come_call_finalizer(CVALUE_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_70=self->mRight;
    if(!right_70->compile(right_70->_protocol_obj,info)) {
        _Bool __result86__ = (_Bool)0;
        come_release_malloced_mem();
        return __result86__;
    }
    right_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value114=get_value_from_stack(-1,info))));
    if(right_value114) { come_call_finalizer(CVALUE_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_72=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value115=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value115) { come_call_finalizer(CVALUE_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj68=come_value_72->c_value;
    come_value_72->c_value=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("%s^=%s",left_value_69->c_value,right_value_71->c_value))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0); }
    if(right_value116) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0); }
    __dec_obj69=come_value_72->type;
    come_value_72->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_clone(left_value_69->type))));
    if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value117) { come_call_finalizer(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
    come_value_72->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_72));
    add_come_last_code(info,"%s;\n",come_value_72->c_value);
    _Bool __result87__ = (_Bool)1;
    if(left_value_69) { come_call_finalizer(CVALUE_finalize,left_value_69, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_71) { come_call_finalizer(CVALUE_finalize,right_value_71, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_72) { come_call_finalizer(CVALUE_finalize,come_value_72, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result87__;
come_release_malloced_mem();
}

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info){
    int __result88__ = self->sline;
    come_release_malloced_mem();
    return __result88__;
come_release_malloced_mem();
}

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info){
void* right_value118;
memset(&right_value118, 0, sizeof(void*));
    char* __result89__ = ((char*)(right_value118=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result89__;
come_release_malloced_mem();
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value119;
char* __dec_obj70;
void* right_value120;
struct sNode* __dec_obj71;
void* right_value121;
struct sNode* __dec_obj72;
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj70=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(info->sname))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0); }
    if(right_value119) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0); }
    __dec_obj71=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value120=sNodep_clone(left))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0); }
    if(right_value120) { right_value120 = come_decrement_ref_count(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0); } 
    __dec_obj72=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value121=sNodep_clone(right))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0); }
    if(right_value121) { right_value121 = come_decrement_ref_count(right_value121, ((struct sNode*)right_value121)->finalize, ((struct sNode*)right_value121)->_protocol_obj, 1, 0); } 
    struct sOrEqualNode* __result90__ = self;
    if(self) { come_call_finalizer(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result90__;
come_release_malloced_mem();
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sOrEqualNode_terminated(){
    _Bool __result91__ = (_Bool)0;
    come_release_malloced_mem();
    return __result91__;
come_release_malloced_mem();
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
struct sNode* left_73;
void* right_value122;
struct CVALUE* left_value_74;
struct sNode* right_75;
void* right_value123;
struct CVALUE* right_value_76;
void* right_value124;
struct CVALUE* come_value_77;
void* right_value125;
char* __dec_obj73;
void* right_value126;
struct sType* __dec_obj74;
memset(&left_73, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value122, 0, sizeof(void*));
memset(&left_value_74, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_75, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value123, 0, sizeof(void*));
memset(&right_value_76, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value124, 0, sizeof(void*));
memset(&come_value_77, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
    left_73=self->mLeft;
    if(!left_73->compile(left_73->_protocol_obj,info)) {
        _Bool __result92__ = (_Bool)0;
        come_release_malloced_mem();
        return __result92__;
    }
    left_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))));
    if(right_value122) { come_call_finalizer(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_75=self->mRight;
    if(!right_75->compile(right_75->_protocol_obj,info)) {
        _Bool __result93__ = (_Bool)0;
        come_release_malloced_mem();
        return __result93__;
    }
    right_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=get_value_from_stack(-1,info))));
    if(right_value123) { come_call_finalizer(CVALUE_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value124=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value124) { come_call_finalizer(CVALUE_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj73=come_value_77->c_value;
    come_value_77->c_value=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s|=%s",left_value_74->c_value,right_value_76->c_value))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
    if(right_value125) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0); }
    __dec_obj74=come_value_77->type;
    come_value_77->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(left_value_74->type))));
    if(__dec_obj74) { come_call_finalizer(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value126) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
    come_value_77->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
    add_come_last_code(info,"%s;\n",come_value_77->c_value);
    _Bool __result94__ = (_Bool)1;
    if(left_value_74) { come_call_finalizer(CVALUE_finalize,left_value_74, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_76) { come_call_finalizer(CVALUE_finalize,right_value_76, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_77) { come_call_finalizer(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result94__;
come_release_malloced_mem();
}

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info){
    int __result95__ = self->sline;
    come_release_malloced_mem();
    return __result95__;
come_release_malloced_mem();
}

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info){
void* right_value127;
memset(&right_value127, 0, sizeof(void*));
    char* __result96__ = ((char*)(right_value127=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result96__;
come_release_malloced_mem();
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value128;
char* __dec_obj75;
void* right_value129;
struct sNode* __dec_obj76;
void* right_value130;
struct sNode* __dec_obj77;
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj75=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(info->sname))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
    if(right_value128) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0); }
    __dec_obj76=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNodep_clone(left))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0); }
    if(right_value129) { right_value129 = come_decrement_ref_count(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0); } 
    __dec_obj77=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value130=sNodep_clone(right))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0); }
    if(right_value130) { right_value130 = come_decrement_ref_count(right_value130, ((struct sNode*)right_value130)->finalize, ((struct sNode*)right_value130)->_protocol_obj, 1, 0); } 
    struct sAndEqualNode* __result97__ = self;
    if(self) { come_call_finalizer(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result97__;
come_release_malloced_mem();
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sAndEqualNode_terminated(){
    _Bool __result98__ = (_Bool)0;
    come_release_malloced_mem();
    return __result98__;
come_release_malloced_mem();
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
struct sNode* left_78;
void* right_value131;
struct CVALUE* left_value_79;
struct sNode* right_80;
void* right_value132;
struct CVALUE* right_value_81;
void* right_value133;
struct CVALUE* come_value_82;
void* right_value134;
char* __dec_obj78;
void* right_value135;
struct sType* __dec_obj79;
memset(&left_78, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value131, 0, sizeof(void*));
memset(&left_value_79, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_80, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value132, 0, sizeof(void*));
memset(&right_value_81, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value133, 0, sizeof(void*));
memset(&come_value_82, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
    left_78=self->mLeft;
    if(!left_78->compile(left_78->_protocol_obj,info)) {
        _Bool __result99__ = (_Bool)0;
        come_release_malloced_mem();
        return __result99__;
    }
    left_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=get_value_from_stack(-1,info))));
    if(right_value131) { come_call_finalizer(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_80=self->mRight;
    if(!right_80->compile(right_80->_protocol_obj,info)) {
        _Bool __result100__ = (_Bool)0;
        come_release_malloced_mem();
        return __result100__;
    }
    right_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value132=get_value_from_stack(-1,info))));
    if(right_value132) { come_call_finalizer(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value133=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value133) { come_call_finalizer(CVALUE_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj78=come_value_82->c_value;
    come_value_82->c_value=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s&=%s",left_value_79->c_value,right_value_81->c_value))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0); }
    if(right_value134) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0); }
    __dec_obj79=come_value_82->type;
    come_value_82->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(left_value_79->type))));
    if(__dec_obj79) { come_call_finalizer(sType_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value135) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
    come_value_82->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_82));
    add_come_last_code(info,"%s;\n",come_value_82->c_value);
    _Bool __result101__ = (_Bool)1;
    if(left_value_79) { come_call_finalizer(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_81) { come_call_finalizer(CVALUE_finalize,right_value_81, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_82) { come_call_finalizer(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result101__;
come_release_malloced_mem();
}

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info){
    int __result102__ = self->sline;
    come_release_malloced_mem();
    return __result102__;
come_release_malloced_mem();
}

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info){
void* right_value136;
memset(&right_value136, 0, sizeof(void*));
    char* __result103__ = ((char*)(right_value136=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result103__;
come_release_malloced_mem();
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value137;
char* __dec_obj80;
void* right_value138;
struct sNode* __dec_obj81;
void* right_value139;
struct sNode* __dec_obj82;
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj80=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(info->sname))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0); }
    if(right_value137) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0); }
    __dec_obj81=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=sNodep_clone(left))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0); }
    if(right_value138) { right_value138 = come_decrement_ref_count(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0); } 
    __dec_obj82=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value139=sNodep_clone(right))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0); }
    if(right_value139) { right_value139 = come_decrement_ref_count(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0); } 
    struct sExpEqualNode* __result104__ = self;
    if(self) { come_call_finalizer(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result104__;
come_release_malloced_mem();
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sExpEqualNode_terminated(){
    _Bool __result105__ = (_Bool)0;
    come_release_malloced_mem();
    return __result105__;
come_release_malloced_mem();
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
struct sNode* left_83;
void* right_value140;
struct CVALUE* left_value_84;
struct sNode* right_85;
void* right_value141;
struct CVALUE* right_value_86;
void* right_value142;
struct CVALUE* come_value_87;
void* right_value143;
char* __dec_obj83;
void* right_value144;
struct sType* __dec_obj84;
memset(&left_83, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value140, 0, sizeof(void*));
memset(&left_value_84, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_85, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value141, 0, sizeof(void*));
memset(&right_value_86, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value142, 0, sizeof(void*));
memset(&come_value_87, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
    left_83=self->mLeft;
    if(!left_83->compile(left_83->_protocol_obj,info)) {
        _Bool __result106__ = (_Bool)0;
        come_release_malloced_mem();
        return __result106__;
    }
    left_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=get_value_from_stack(-1,info))));
    if(right_value140) { come_call_finalizer(CVALUE_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_85=self->mRight;
    if(!right_85->compile(right_85->_protocol_obj,info)) {
        _Bool __result107__ = (_Bool)0;
        come_release_malloced_mem();
        return __result107__;
    }
    right_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=get_value_from_stack(-1,info))));
    if(right_value141) { come_call_finalizer(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value142) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj83=come_value_87->c_value;
    come_value_87->c_value=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("%s=%s",left_value_84->c_value,right_value_86->c_value))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0); }
    if(right_value143) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0); }
    __dec_obj84=come_value_87->type;
    come_value_87->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(left_value_84->type))));
    if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value144) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
    come_value_87->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_87));
    add_come_last_code(info,"%s;\n",come_value_87->c_value);
    _Bool __result108__ = (_Bool)1;
    if(left_value_84) { come_call_finalizer(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_86) { come_call_finalizer(CVALUE_finalize,right_value_86, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_87) { come_call_finalizer(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result108__;
come_release_malloced_mem();
}

int sExpEqualNode_sline(struct sExpEqualNode* self, struct sInfo* info){
    int __result109__ = self->sline;
    come_release_malloced_mem();
    return __result109__;
come_release_malloced_mem();
}

char* sExpEqualNode_sname(struct sExpEqualNode* self, struct sInfo* info){
void* right_value145;
memset(&right_value145, 0, sizeof(void*));
    char* __result110__ = ((char*)(right_value145=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result110__;
come_release_malloced_mem();
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
void* right_value148;
struct sPlusPlusNode* result_88;
void* right_value149;
struct sNode* __dec_obj85;
void* right_value150;
char* __dec_obj86;
memset(&right_value148, 0, sizeof(void*));
memset(&result_88, 0, sizeof(struct sPlusPlusNode*)); /* ddd */
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sPlusPlusNode* __result111__ = (void*)0;
                come_release_malloced_mem();
                return __result111__;
            }
            result_88=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value148=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1)))));
            if(right_value148) { come_call_finalizer(sPlusPlusNode_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj85=result_88->mLeft;
                result_88->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value149=sNodep_clone(self->mLeft))));
                if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0); }
                if(right_value149) { right_value149 = come_decrement_ref_count(right_value149, ((struct sNode*)right_value149)->finalize, ((struct sNode*)right_value149)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_88->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj86=result_88->sname;
                result_88->sname=(char*)come_increment_ref_count(((char*)(right_value150=string_clone(self->sname))));
                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
                if(right_value150) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0); }
            }
            struct sPlusPlusNode* __result112__ = result_88;
            if(result_88) { come_call_finalizer(sPlusPlusNode_finalize,result_88, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result112__;
        come_release_malloced_mem();
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
void* right_value154;
struct sMinusMinusNode* result_89;
void* right_value155;
struct sNode* __dec_obj87;
void* right_value156;
char* __dec_obj88;
memset(&right_value154, 0, sizeof(void*));
memset(&result_89, 0, sizeof(struct sMinusMinusNode*)); /* ddd */
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sMinusMinusNode* __result114__ = (void*)0;
                come_release_malloced_mem();
                return __result114__;
            }
            result_89=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value154=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1)))));
            if(right_value154) { come_call_finalizer(sMinusMinusNode_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj87=result_89->mLeft;
                result_89->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=sNodep_clone(self->mLeft))));
                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0); }
                if(right_value155) { right_value155 = come_decrement_ref_count(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_89->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj88=result_89->sname;
                result_89->sname=(char*)come_increment_ref_count(((char*)(right_value156=string_clone(self->sname))));
                if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
                if(right_value156) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0); }
            }
            struct sMinusMinusNode* __result115__ = result_89;
            if(result_89) { come_call_finalizer(sMinusMinusNode_finalize,result_89, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result115__;
        come_release_malloced_mem();
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
void* right_value161;
struct sPlusEqualNode* result_91;
void* right_value162;
struct sNode* __dec_obj89;
void* right_value163;
struct sNode* __dec_obj90;
void* right_value164;
char* __dec_obj91;
memset(&right_value161, 0, sizeof(void*));
memset(&result_91, 0, sizeof(struct sPlusEqualNode*)); /* ddd */
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sPlusEqualNode* __result117__ = (void*)0;
                come_release_malloced_mem();
                return __result117__;
            }
            result_91=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value161=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1)))));
            if(right_value161) { come_call_finalizer(sPlusEqualNode_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj89=result_91->mLeft;
                result_91->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value162=sNodep_clone(self->mLeft))));
                if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0); }
                if(right_value162) { right_value162 = come_decrement_ref_count(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj90=result_91->mRight;
                result_91->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value163=sNodep_clone(self->mRight))));
                if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0); }
                if(right_value163) { right_value163 = come_decrement_ref_count(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_91->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj91=result_91->sname;
                result_91->sname=(char*)come_increment_ref_count(((char*)(right_value164=string_clone(self->sname))));
                if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0); }
                if(right_value164) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0); }
            }
            struct sPlusEqualNode* __result118__ = result_91;
            if(result_91) { come_call_finalizer(sPlusEqualNode_finalize,result_91, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result118__;
        come_release_malloced_mem();
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
void* right_value169;
struct sMinusEqualNode* result_93;
void* right_value170;
struct sNode* __dec_obj92;
void* right_value171;
struct sNode* __dec_obj93;
void* right_value172;
char* __dec_obj94;
memset(&right_value169, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct sMinusEqualNode*)); /* ddd */
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sMinusEqualNode* __result120__ = (void*)0;
                come_release_malloced_mem();
                return __result120__;
            }
            result_93=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value169=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1)))));
            if(right_value169) { come_call_finalizer(sMinusEqualNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj92=result_93->mLeft;
                result_93->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value170=sNodep_clone(self->mLeft))));
                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0); }
                if(right_value170) { right_value170 = come_decrement_ref_count(right_value170, ((struct sNode*)right_value170)->finalize, ((struct sNode*)right_value170)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj93=result_93->mRight;
                result_93->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value171=sNodep_clone(self->mRight))));
                if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0); }
                if(right_value171) { right_value171 = come_decrement_ref_count(right_value171, ((struct sNode*)right_value171)->finalize, ((struct sNode*)right_value171)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_93->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj94=result_93->sname;
                result_93->sname=(char*)come_increment_ref_count(((char*)(right_value172=string_clone(self->sname))));
                if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0); }
                if(right_value172) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0); }
            }
            struct sMinusEqualNode* __result121__ = result_93;
            if(result_93) { come_call_finalizer(sMinusEqualNode_finalize,result_93, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result121__;
        come_release_malloced_mem();
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
void* right_value177;
struct sMultEqualNode* result_95;
void* right_value178;
struct sNode* __dec_obj95;
void* right_value179;
struct sNode* __dec_obj96;
void* right_value180;
char* __dec_obj97;
memset(&right_value177, 0, sizeof(void*));
memset(&result_95, 0, sizeof(struct sMultEqualNode*)); /* ddd */
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sMultEqualNode* __result123__ = (void*)0;
                come_release_malloced_mem();
                return __result123__;
            }
            result_95=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value177=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1)))));
            if(right_value177) { come_call_finalizer(sMultEqualNode_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj95=result_95->mLeft;
                result_95->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNodep_clone(self->mLeft))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0); }
                if(right_value178) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj96=result_95->mRight;
                result_95->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=sNodep_clone(self->mRight))));
                if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0); }
                if(right_value179) { right_value179 = come_decrement_ref_count(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_95->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj97=result_95->sname;
                result_95->sname=(char*)come_increment_ref_count(((char*)(right_value180=string_clone(self->sname))));
                if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0); }
                if(right_value180) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0); }
            }
            struct sMultEqualNode* __result124__ = result_95;
            if(result_95) { come_call_finalizer(sMultEqualNode_finalize,result_95, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result124__;
        come_release_malloced_mem();
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
void* right_value185;
struct sDivEqualNode* result_97;
void* right_value186;
struct sNode* __dec_obj98;
void* right_value187;
struct sNode* __dec_obj99;
void* right_value188;
char* __dec_obj100;
memset(&right_value185, 0, sizeof(void*));
memset(&result_97, 0, sizeof(struct sDivEqualNode*)); /* ddd */
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sDivEqualNode* __result126__ = (void*)0;
                come_release_malloced_mem();
                return __result126__;
            }
            result_97=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value185=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1)))));
            if(right_value185) { come_call_finalizer(sDivEqualNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj98=result_97->mLeft;
                result_97->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=sNodep_clone(self->mLeft))));
                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0); }
                if(right_value186) { right_value186 = come_decrement_ref_count(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj99=result_97->mRight;
                result_97->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=sNodep_clone(self->mRight))));
                if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0); }
                if(right_value187) { right_value187 = come_decrement_ref_count(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_97->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj100=result_97->sname;
                result_97->sname=(char*)come_increment_ref_count(((char*)(right_value188=string_clone(self->sname))));
                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0); }
                if(right_value188) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0); }
            }
            struct sDivEqualNode* __result127__ = result_97;
            if(result_97) { come_call_finalizer(sDivEqualNode_finalize,result_97, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result127__;
        come_release_malloced_mem();
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
void* right_value193;
struct sModEqualNode* result_99;
void* right_value194;
struct sNode* __dec_obj101;
void* right_value195;
struct sNode* __dec_obj102;
void* right_value196;
char* __dec_obj103;
memset(&right_value193, 0, sizeof(void*));
memset(&result_99, 0, sizeof(struct sModEqualNode*)); /* ddd */
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sModEqualNode* __result129__ = (void*)0;
                come_release_malloced_mem();
                return __result129__;
            }
            result_99=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value193=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1)))));
            if(right_value193) { come_call_finalizer(sModEqualNode_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj101=result_99->mLeft;
                result_99->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=sNodep_clone(self->mLeft))));
                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0); }
                if(right_value194) { right_value194 = come_decrement_ref_count(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj102=result_99->mRight;
                result_99->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNodep_clone(self->mRight))));
                if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0); }
                if(right_value195) { right_value195 = come_decrement_ref_count(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_99->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj103=result_99->sname;
                result_99->sname=(char*)come_increment_ref_count(((char*)(right_value196=string_clone(self->sname))));
                if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0); }
                if(right_value196) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0); }
            }
            struct sModEqualNode* __result130__ = result_99;
            if(result_99) { come_call_finalizer(sModEqualNode_finalize,result_99, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result130__;
        come_release_malloced_mem();
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
void* right_value201;
struct sLShifEqualNode* result_101;
void* right_value202;
struct sNode* __dec_obj104;
void* right_value203;
struct sNode* __dec_obj105;
void* right_value204;
char* __dec_obj106;
memset(&right_value201, 0, sizeof(void*));
memset(&result_101, 0, sizeof(struct sLShifEqualNode*)); /* ddd */
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sLShifEqualNode* __result132__ = (void*)0;
                come_release_malloced_mem();
                return __result132__;
            }
            result_101=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value201=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1)))));
            if(right_value201) { come_call_finalizer(sLShifEqualNode_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj104=result_101->mLeft;
                result_101->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value202=sNodep_clone(self->mLeft))));
                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0); }
                if(right_value202) { right_value202 = come_decrement_ref_count(right_value202, ((struct sNode*)right_value202)->finalize, ((struct sNode*)right_value202)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj105=result_101->mRight;
                result_101->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value203=sNodep_clone(self->mRight))));
                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0); }
                if(right_value203) { right_value203 = come_decrement_ref_count(right_value203, ((struct sNode*)right_value203)->finalize, ((struct sNode*)right_value203)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_101->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj106=result_101->sname;
                result_101->sname=(char*)come_increment_ref_count(((char*)(right_value204=string_clone(self->sname))));
                if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0); }
                if(right_value204) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0); }
            }
            struct sLShifEqualNode* __result133__ = result_101;
            if(result_101) { come_call_finalizer(sLShifEqualNode_finalize,result_101, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result133__;
        come_release_malloced_mem();
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
void* right_value209;
struct sRShiftEqualNode* result_103;
void* right_value210;
struct sNode* __dec_obj107;
void* right_value211;
struct sNode* __dec_obj108;
void* right_value212;
char* __dec_obj109;
memset(&right_value209, 0, sizeof(void*));
memset(&result_103, 0, sizeof(struct sRShiftEqualNode*)); /* ddd */
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sRShiftEqualNode* __result135__ = (void*)0;
                come_release_malloced_mem();
                return __result135__;
            }
            result_103=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value209=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1)))));
            if(right_value209) { come_call_finalizer(sRShiftEqualNode_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj107=result_103->mLeft;
                result_103->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value210=sNodep_clone(self->mLeft))));
                if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0); }
                if(right_value210) { right_value210 = come_decrement_ref_count(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj108=result_103->mRight;
                result_103->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value211=sNodep_clone(self->mRight))));
                if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0); }
                if(right_value211) { right_value211 = come_decrement_ref_count(right_value211, ((struct sNode*)right_value211)->finalize, ((struct sNode*)right_value211)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_103->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj109=result_103->sname;
                result_103->sname=(char*)come_increment_ref_count(((char*)(right_value212=string_clone(self->sname))));
                if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0); }
                if(right_value212) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0); }
            }
            struct sRShiftEqualNode* __result136__ = result_103;
            if(result_103) { come_call_finalizer(sRShiftEqualNode_finalize,result_103, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result136__;
        come_release_malloced_mem();
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
void* right_value217;
struct sXorEqualNode* result_105;
void* right_value218;
struct sNode* __dec_obj110;
void* right_value219;
struct sNode* __dec_obj111;
void* right_value220;
char* __dec_obj112;
memset(&right_value217, 0, sizeof(void*));
memset(&result_105, 0, sizeof(struct sXorEqualNode*)); /* ddd */
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sXorEqualNode* __result138__ = (void*)0;
                come_release_malloced_mem();
                return __result138__;
            }
            result_105=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value217=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1)))));
            if(right_value217) { come_call_finalizer(sXorEqualNode_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj110=result_105->mLeft;
                result_105->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNodep_clone(self->mLeft))));
                if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0); }
                if(right_value218) { right_value218 = come_decrement_ref_count(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj111=result_105->mRight;
                result_105->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value219=sNodep_clone(self->mRight))));
                if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0); }
                if(right_value219) { right_value219 = come_decrement_ref_count(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_105->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj112=result_105->sname;
                result_105->sname=(char*)come_increment_ref_count(((char*)(right_value220=string_clone(self->sname))));
                if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0); }
                if(right_value220) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0); }
            }
            struct sXorEqualNode* __result139__ = result_105;
            if(result_105) { come_call_finalizer(sXorEqualNode_finalize,result_105, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result139__;
        come_release_malloced_mem();
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
void* right_value225;
struct sAndEqualNode* result_107;
void* right_value226;
struct sNode* __dec_obj113;
void* right_value227;
struct sNode* __dec_obj114;
void* right_value228;
char* __dec_obj115;
memset(&right_value225, 0, sizeof(void*));
memset(&result_107, 0, sizeof(struct sAndEqualNode*)); /* ddd */
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sAndEqualNode* __result141__ = (void*)0;
                come_release_malloced_mem();
                return __result141__;
            }
            result_107=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value225=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1)))));
            if(right_value225) { come_call_finalizer(sAndEqualNode_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj113=result_107->mLeft;
                result_107->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNodep_clone(self->mLeft))));
                if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0); }
                if(right_value226) { right_value226 = come_decrement_ref_count(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj114=result_107->mRight;
                result_107->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNodep_clone(self->mRight))));
                if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0); }
                if(right_value227) { right_value227 = come_decrement_ref_count(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_107->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj115=result_107->sname;
                result_107->sname=(char*)come_increment_ref_count(((char*)(right_value228=string_clone(self->sname))));
                if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0); }
                if(right_value228) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0); }
            }
            struct sAndEqualNode* __result142__ = result_107;
            if(result_107) { come_call_finalizer(sAndEqualNode_finalize,result_107, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result142__;
        come_release_malloced_mem();
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
void* right_value233;
struct sOrEqualNode* result_109;
void* right_value234;
struct sNode* __dec_obj116;
void* right_value235;
struct sNode* __dec_obj117;
void* right_value236;
char* __dec_obj118;
memset(&right_value233, 0, sizeof(void*));
memset(&result_109, 0, sizeof(struct sOrEqualNode*)); /* ddd */
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sOrEqualNode* __result144__ = (void*)0;
                come_release_malloced_mem();
                return __result144__;
            }
            result_109=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value233=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1)))));
            if(right_value233) { come_call_finalizer(sOrEqualNode_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj116=result_109->mLeft;
                result_109->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=sNodep_clone(self->mLeft))));
                if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0); }
                if(right_value234) { right_value234 = come_decrement_ref_count(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj117=result_109->mRight;
                result_109->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=sNodep_clone(self->mRight))));
                if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0); }
                if(right_value235) { right_value235 = come_decrement_ref_count(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_109->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj118=result_109->sname;
                result_109->sname=(char*)come_increment_ref_count(((char*)(right_value236=string_clone(self->sname))));
                if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0); }
                if(right_value236) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0); }
            }
            struct sOrEqualNode* __result145__ = result_109;
            if(result_109) { come_call_finalizer(sOrEqualNode_finalize,result_109, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result145__;
        come_release_malloced_mem();
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
void* right_value241;
struct sExpEqualNode* result_111;
void* right_value242;
struct sNode* __dec_obj119;
void* right_value243;
struct sNode* __dec_obj120;
void* right_value244;
char* __dec_obj121;
memset(&right_value241, 0, sizeof(void*));
memset(&result_111, 0, sizeof(struct sExpEqualNode*)); /* ddd */
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sExpEqualNode* __result147__ = (void*)0;
                come_release_malloced_mem();
                return __result147__;
            }
            result_111=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value241=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1)))));
            if(right_value241) { come_call_finalizer(sExpEqualNode_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj119=result_111->mLeft;
                result_111->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value242=sNodep_clone(self->mLeft))));
                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0); }
                if(right_value242) { right_value242 = come_decrement_ref_count(right_value242, ((struct sNode*)right_value242)->finalize, ((struct sNode*)right_value242)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                __dec_obj120=result_111->mRight;
                result_111->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value243=sNodep_clone(self->mRight))));
                if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0); }
                if(right_value243) { right_value243 = come_decrement_ref_count(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_111->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj121=result_111->sname;
                result_111->sname=(char*)come_increment_ref_count(((char*)(right_value244=string_clone(self->sname))));
                if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0); }
                if(right_value244) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0); }
            }
            struct sExpEqualNode* __result148__ = result_111;
            if(result_111) { come_call_finalizer(sExpEqualNode_finalize,result_111, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result148__;
        come_release_malloced_mem();
}

