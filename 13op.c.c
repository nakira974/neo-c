// source head
typedef int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned int __u_short;
typedef unsigned int __u_int;
typedef unsigned int __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long int __int64_t;
typedef unsigned int __uint64_t;
typedef char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short int __int_least16_t;
typedef unsigned int __uint_least16_t;
typedef int __int_least32_t;
typedef unsigned int __uint_least32_t;
typedef long int __int_least64_t;
typedef unsigned int __uint_least64_t;
typedef long int __quad_t;
typedef unsigned int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned int __uintmax_t;
typedef unsigned int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned int __ino_t;
typedef unsigned int __ino64_t;
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
typedef unsigned int __rlim_t;
typedef unsigned int __rlim64_t;
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
typedef unsigned int __fsblkcnt_t;
typedef unsigned int __fsblkcnt64_t;
typedef unsigned int __fsfilcnt_t;
typedef unsigned int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned int __syscall_ulong_t;
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
    unsigned int _cur_column;
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
    const unsigned int* __ctype_b;
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
typedef unsigned int u_short;
typedef unsigned int u_int;
typedef unsigned int u_long;
typedef long int quad_t;
typedef unsigned int u_quad_t;
typedef struct anonymous_typeX1 fsid_t;
typedef long int loff_t;
typedef unsigned int ino_t;
typedef unsigned int ino64_t;
typedef unsigned int dev_t;
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
typedef unsigned int ulong;
typedef unsigned int ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char u_int8_t;
typedef unsigned int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned int u_int64_t;
typedef int register_t;
struct anonymous_typeX7
{
    unsigned int __val[(1024/(8*sizeof(unsigned int)))];
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
typedef unsigned int fsblkcnt_t;
typedef unsigned int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned int fsblkcnt64_t;
typedef unsigned int fsfilcnt64_t;
struct anonymous_typeX10
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ9
{
unsigned long int __value64;
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
    unsigned int __pad1;
    unsigned int __pad2;
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
typedef unsigned int __thrd_t;
struct anonymous_typeX11
{
    int __data;
};
typedef struct anonymous_typeX11 __once_flag;
typedef unsigned int pthread_t;
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
    unsigned int __x[3];
    unsigned int __old_x[3];
    unsigned int __c;
    unsigned int __init;
    unsigned long int __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
typedef int (*comparison_fn_t)(const void*,const void*);
typedef int (*__compar_d_fn_t)(const void*,const void*,void*);
typedef void* any;
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
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
extern _Bool gComeDebug;
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
    _Bool mComeMemCore;
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
struct sNullNode
{
    int sline;
    char* sname;
};
struct sAddNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sSubNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sMultNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sDivNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sModNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sLShiftNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sRShiftNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sGtEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sLtEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sLtNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sGtNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sNotEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sEq2Node
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sNotEq2Node
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sAndNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sXOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sAndAndNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sOrOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sCommaNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sConditionalNode
{
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
    int sline;
    char* sname;
};

// header function
void come_heap_init();

void come_heap_final(_Bool check_mem_leak);

void* come_null_check(void* mem, char* sname, int sline);

int remove(const char* __filename);

int rename(const char* __old, const char* __new);

int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);

int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);

int fclose(struct _IO_FILE* __stream);

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char anonymous_var_nameX1[20]);

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

int __uflow(struct _IO_FILE* anonymous_var_nameX2);

int __overflow(struct _IO_FILE* anonymous_var_nameX3, int anonymous_var_nameX4);

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

unsigned int strtoul(const char* __nptr, char** __endptr, int __base);

int strtoq(const char* __nptr, char** __endptr, int __base);

unsigned long int strtouq(const char* __nptr, char** __endptr, int __base);

int strtoll(const char* __nptr, char** __endptr, int __base);

unsigned long int strtoull(const char* __nptr, char** __endptr, int __base);

int strfromd(char* __dest, int __size, const char* __format, double __f);

int strfromf(char* __dest, int __size, const char* __format, float __f);

int strfroml(char* __dest, int __size, const char* __format, long double __f);

int strfromf32(char* __dest, int __size, const char* __format, float __f);

int strfromf64(char* __dest, int __size, const char* __format, double __f);

int strfromf128(char* __dest, int __size, const char* __format, long double __f);

int strfromf32x(char* __dest, int __size, const char* __format, double __f);

int strfromf64x(char* __dest, int __size, const char* __format, long double __f);

long int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

unsigned long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);

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

double erand48(unsigned int __xsubi[3]);

long int lrand48();

long int nrand48(unsigned int __xsubi[3]);

long int mrand48();

long int jrand48(unsigned int __xsubi[3]);

void srand48(long int __seedval);

unsigned int* seed48(unsigned int __seed16v[3]);

void lcong48(unsigned int __param[7]);

int drand48_r(struct drand48_data* __buffer, double* __result);

int erand48_r(unsigned int __xsubi[3], struct drand48_data* __buffer, double* __result);

int lrand48_r(struct drand48_data* __buffer, long int* __result);

int nrand48_r(unsigned int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int mrand48_r(struct drand48_data* __buffer, long int* __result);

int jrand48_r(unsigned int __xsubi[3], struct drand48_data* __buffer, long int* __result);

int srand48_r(long int __seedval, struct drand48_data* __buffer);

int seed48_r(unsigned int __seed16v[3], struct drand48_data* __buffer);

int lcong48_r(unsigned int __param[7], struct drand48_data* __buffer);

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

int getsubopt(char** __optionp, char** __tokens, char** __valuep);

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

void* come_calloc(int count, int size, char* sname, int sline);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free);

void come_free_object(void* mem);

void* come_memdup(void* block, char* sname, int sline);

void int_times(int self, void* parent, void (*block)(void*));

char* __builtin_string(char* str);

_Bool int_equals(int self, int right);

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

unsigned int short_get_hash_key(short short value);

unsigned int long_get_hash_key(long value);

unsigned int char_get_hash_key(char value);

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

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

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

_Bool xisalpha(char c);

char* charp_reverse(char* str);

char* string_reverse(char* str);

int char_compare(char left, char right);

int short_compare(short short left, short short right);

int int_compare(int left, int right);

int long_compare(long left, long right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_if(_Bool self, void* parent, void (*block)(void*));

_Bool bool_equals(_Bool left, _Bool right);

void charp_puts(char* self);

void charp_print(char* self);

void charp_printf(char* self, const char* msg);

int int_printf(int self, const char* msg);

void fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

char char_putc(char self);

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

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table);

void arrange_stack(struct sInfo* info, int top);

int expected_next_character(char c, struct sInfo* info);

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

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

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
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index);
static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value);
static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);

_Bool sNullNode_terminated();

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);

int sNullNode_sline(struct sNullNode* self, struct sInfo* info);

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sAddNode_terminated();

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);

int sAddNode_sline(struct sAddNode* self, struct sInfo* info);

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info);

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sSubNode_terminated();

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);

int sSubNode_sline(struct sSubNode* self, struct sInfo* info);

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info);

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sMultNode_terminated();

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);

int sMultNode_sline(struct sMultNode* self, struct sInfo* info);

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info);

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sDivNode_terminated();

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);

int sDivNode_sline(struct sDivNode* self, struct sInfo* info);

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info);

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sModNode_terminated();

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);

int sModNode_sline(struct sModNode* self, struct sInfo* info);

char* sModNode_sname(struct sModNode* self, struct sInfo* info);

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sLShiftNode_terminated();

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info);

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info);

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sRShiftNode_terminated();

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info);

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info);

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sGtEqNode_terminated();

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info);

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info);

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sLtEqNode_terminated();

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info);

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info);

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sLtNode_terminated();

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);

int sLtNode_sline(struct sLtNode* self, struct sInfo* info);

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info);

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sGtNode_terminated();

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);

int sGtNode_sline(struct sGtNode* self, struct sInfo* info);

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info);

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

int sEqNode_sline(struct sEqNode* self, struct sInfo* info);

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info);

_Bool sEqNode_terminated();

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sNotEqNode_terminated();

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info);

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info);

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sEq2Node_terminated();

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info);

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info);

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info);

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sNotEq2Node_terminated();

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info);

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info);

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sAndNode_terminated();

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);

int sAndNode_sline(struct sAndNode* self, struct sInfo* info);

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info);

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sXOrNode_terminated();

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info);

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info);

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sOrNode_terminated();

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);

int sOrNode_sline(struct sOrNode* self, struct sInfo* info);

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info);

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sAndAndNode_terminated();

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info);

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info);

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sOrOrNode_terminated();

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info);

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info);

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sCommaNode_terminated();

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info);

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info);

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);

_Bool sConditionalNode_terminated();

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info);

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info);

struct sNode* mult_exp(struct sInfo* info);

static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);

static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);

static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);

static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);

static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);

static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);

static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);

static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);

static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);

static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);

static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);

static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
// inline function
static inline unsigned int __bswap_16(unsigned int __bsx){
    unsigned int __result1__ = ((unsigned int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    return __result1__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    unsigned int __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result2__;
}
static inline unsigned int __bswap_64(unsigned int __bsx){
    unsigned int __result3__ = ((((__bsx)&0)>>56)|(((__bsx)&0)>>40)|(((__bsx)&0)>>24)|(((__bsx)&0)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result3__;
}
static inline unsigned int __uint16_identity(unsigned int __x){
    unsigned int __result4__ = __x;
    return __result4__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
    unsigned int __result5__ = __x;
    return __result5__;
}
static inline unsigned int __uint64_identity(unsigned int __x){
    unsigned int __result6__ = __x;
    return __result6__;
}

// body function






_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info){
struct sClass* klass_0;
char* class_name_1;
void* right_value30;
struct sType* type2_26;
struct sFun* operator_fun_27;
char* fun_name2_28;
void* right_value31;
char* none_generics_name_29;
void* right_value32;
struct sType* obj_type_30;
void* right_value33;
char* __dec_obj19;
void* right_value34;
char* fun_name3_31;
struct sGenericsFun* generics_fun_34;
void* right_value35;
void* right_value36;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_38;
char* fun_name_39;
void* right_value37;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun2_40;
char* fun_name2_41;
void* right_value38;
struct tuple2$2sFunpcharph* multiple_assgin_var3;
struct sFun* fun_42;
char* fun_name_43;
void* right_value39;
struct tuple2$2sFunpcharph* multiple_assgin_var4;
struct sFun* fun2_44;
char* fun_name2_45;
void* right_value40;
char* __dec_obj20;
int i_46;
void* right_value41;
char* new_fun_name_47;
void* right_value42;
char* __dec_obj21;
_Bool result_48;
void* right_value43;
struct CVALUE* come_value_49;
char* left_value2_50;
void* right_value44;
char* __dec_obj22;
void* right_value45;
char* __dec_obj23;
void* right_value46;
char* __dec_obj24;
char* right_value2_54;
void* right_value47;
char* __dec_obj25;
void* right_value48;
char* __dec_obj26;
void* right_value49;
char* __dec_obj27;
void* right_value50;
char* __dec_obj28;
void* right_value51;
struct sType* type_55;
void* right_value52;
char* __dec_obj29;
void* right_value53;
struct sType* __dec_obj30;
memset(&klass_0, 0, sizeof(struct sClass*));
memset(&class_name_1, 0, sizeof(char*));
memset(&right_value30, 0, sizeof(void*));
memset(&type2_26, 0, sizeof(struct sType*));
memset(&operator_fun_27, 0, sizeof(struct sFun*));
memset(&fun_name2_28, 0, sizeof(char*)); /* bbb */
memset(&right_value31, 0, sizeof(void*));
memset(&none_generics_name_29, 0, sizeof(char*));
memset(&right_value32, 0, sizeof(void*));
memset(&obj_type_30, 0, sizeof(struct sType*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&fun_name3_31, 0, sizeof(char*));
memset(&generics_fun_34, 0, sizeof(struct sGenericsFun*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&fun_38, 0, sizeof(struct sFun*)); /* ccc */
memset(&fun_name_39, 0, sizeof(char*)); /* ccc */
memset(&fun_38, 0, sizeof(struct sFun*)); /* eee */
memset(&fun_name_39, 0, sizeof(char*)); /* eee */
memset(&right_value37, 0, sizeof(void*));
memset(&fun2_40, 0, sizeof(struct sFun*)); /* ccc */
memset(&fun_name2_41, 0, sizeof(char*)); /* ccc */
memset(&fun2_40, 0, sizeof(struct sFun*)); /* eee */
memset(&fun_name2_41, 0, sizeof(char*)); /* eee */
memset(&right_value38, 0, sizeof(void*));
memset(&fun_42, 0, sizeof(struct sFun*)); /* ccc */
memset(&fun_name_43, 0, sizeof(char*)); /* ccc */
memset(&fun_42, 0, sizeof(struct sFun*)); /* eee */
memset(&fun_name_43, 0, sizeof(char*)); /* eee */
memset(&right_value39, 0, sizeof(void*));
memset(&fun2_44, 0, sizeof(struct sFun*)); /* ccc */
memset(&fun_name2_45, 0, sizeof(char*)); /* ccc */
memset(&fun2_44, 0, sizeof(struct sFun*)); /* eee */
memset(&fun_name2_45, 0, sizeof(char*)); /* eee */
memset(&right_value40, 0, sizeof(void*));
memset(&i_46, 0, sizeof(int)); /* bbb */
memset(&right_value41, 0, sizeof(void*));
memset(&new_fun_name_47, 0, sizeof(char*));
memset(&right_value42, 0, sizeof(void*));
memset(&result_48, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&come_value_49, 0, sizeof(struct CVALUE*));
memset(&left_value2_50, 0, sizeof(char*)); /* bbb */
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value2_54, 0, sizeof(char*)); /* bbb */
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&type_55, 0, sizeof(struct sType*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_0=type->mClass;
    class_name_1=klass_0->mName;
    type2_26=(struct sType*)come_increment_ref_count(((struct sType*)(right_value30=sType_clone(type))));
    if(right_value30) { come_call_finalizer(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
    type2_26->mHeap=(_Bool)0;
    operator_fun_27=((void*)0);
    if(list$1sTypephp_length(type->mGenericsTypes)>0) {
        none_generics_name_29=(char*)come_increment_ref_count(((char*)(right_value31=get_none_generics_name(type->mClass->mName))));
        if(right_value31) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0); }
        obj_type_30=(struct sType*)come_increment_ref_count(((struct sType*)(right_value32=solve_generics(type,info->generics_type,info))));
        if(right_value32) { come_call_finalizer(sType_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj19=fun_name2_28;
        fun_name2_28=(char*)come_increment_ref_count(((char*)(right_value33=create_method_name(obj_type_30,(_Bool)0,fun_name,info))));
        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
        if(right_value33) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0); }
        fun_name3_31=(char*)come_increment_ref_count(((char*)(right_value34=xsprintf("%s_%s",none_generics_name_29,fun_name))));
        if(right_value34) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0); }
        generics_fun_34=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_31,((void*)0));
        if(generics_fun_34) {
            if(!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value35=__builtin_string(fun_name2_28)))),generics_fun_34,obj_type_30,info)) {
                _Bool __result27__ = (_Bool)0;
                if(none_generics_name_29) { none_generics_name_29 = come_decrement_ref_count(none_generics_name_29, (void*)0, (void*)0, 0, 0); }
                if(obj_type_30) { come_call_finalizer(sType_finalize,obj_type_30, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name3_31) { fun_name3_31 = come_decrement_ref_count(fun_name3_31, (void*)0, (void*)0, 0, 0); }
                return __result27__;
            }
            if(right_value35) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0); }
            operator_fun_27=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_28);
        }
        else {
            if(charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assgin_var1=((struct tuple2$2sFunpcharph*)(right_value36=create_equals_automatically(obj_type_30,"equals",info)));
                fun_38=multiple_assgin_var1->v1;
                fun_name_39=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                if(right_value36) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0); }
                multiple_assgin_var2=((struct tuple2$2sFunpcharph*)(right_value37=create_operator_equals_automatically(obj_type_30,"operator_equals",info)));
                fun2_40=multiple_assgin_var2->v1;
                fun_name2_41=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                if(right_value37) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0); }
                operator_fun_27=fun2_40;
                if(fun_name_39) { fun_name_39 = come_decrement_ref_count(fun_name_39, (void*)0, (void*)0, 0, 0); }
                if(fun_name2_41) { fun_name2_41 = come_decrement_ref_count(fun_name2_41, (void*)0, (void*)0, 0, 0); }
            }
            else if(charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assgin_var3=((struct tuple2$2sFunpcharph*)(right_value38=create_equals_automatically(obj_type_30,"not_equals",info)));
                fun_42=multiple_assgin_var3->v1;
                fun_name_43=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
                if(right_value38) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
                multiple_assgin_var4=((struct tuple2$2sFunpcharph*)(right_value39=create_operator_not_equals_automatically(obj_type_30,"operator_not_equals",info)));
                fun2_44=multiple_assgin_var4->v1;
                fun_name2_45=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                if(right_value39) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0); }
                operator_fun_27=fun2_44;
                if(fun_name_43) { fun_name_43 = come_decrement_ref_count(fun_name_43, (void*)0, (void*)0, 0, 0); }
                if(fun_name2_45) { fun_name2_45 = come_decrement_ref_count(fun_name2_45, (void*)0, (void*)0, 0, 0); }
            }
            else {
                operator_fun_27=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_28);
            }
        }
        if(none_generics_name_29) { none_generics_name_29 = come_decrement_ref_count(none_generics_name_29, (void*)0, (void*)0, 0, 0); }
        if(obj_type_30) { come_call_finalizer(sType_finalize,obj_type_30, (void*)0, (void*)0, 0, 0, 0); }
        if(fun_name3_31) { fun_name3_31 = come_decrement_ref_count(fun_name3_31, (void*)0, (void*)0, 0, 0); }
    }
    else {
        __dec_obj20=fun_name2_28;
        fun_name2_28=(char*)come_increment_ref_count(((char*)(right_value40=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
        if(right_value40) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0); }
        for(
        i_46=128-1;
        i_46>=1;
        i_46--
        ){
            new_fun_name_47=(char*)come_increment_ref_count(((char*)(right_value41=xsprintf("%s_v%d",fun_name2_28,i_46))));
            if(right_value41) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0); }
            operator_fun_27=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_47);
            if(operator_fun_27) {
                __dec_obj21=fun_name2_28;
                fun_name2_28=(char*)come_increment_ref_count(((char*)(right_value42=__builtin_string(new_fun_name_47))));
                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
                break;
            }
            if(new_fun_name_47) { new_fun_name_47 = come_decrement_ref_count(new_fun_name_47, (void*)0, (void*)0, 0, 0); }
        }
        if(operator_fun_27==((void*)0)) {
            operator_fun_27=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_28);
        }
    }
    result_48=(_Bool)0;
    if(operator_fun_27&&(list$1sTypephp_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum))) {
        come_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value43=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 75))));
        if(right_value43) { come_call_finalizer(CVALUE_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
        if(list$1sTypephp_operator_load_element(operator_fun_27->mParamTypes,0)->mHeap&&left_value->type->mHeap) {
            __dec_obj22=left_value->c_value;
            left_value->c_value=(char*)come_increment_ref_count(((char*)(right_value44=increment_ref_count_object(left_value->type,left_value->c_value,info))));
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
            if(right_value44) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0); }
            __dec_obj23=left_value2_50;
            left_value2_50=(char*)come_increment_ref_count(((char*)(right_value45=xsprintf("%s",left_value->c_value))));
            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
            if(right_value45) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0); }
        }
        else {
            __dec_obj24=left_value2_50;
            left_value2_50=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(left_value->c_value))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
            if(right_value46) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0); }
        }
        if(list$1sTypephp_operator_load_element(operator_fun_27->mParamTypes,1)->mHeap&&right_value->type->mHeap) {
            __dec_obj25=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value47=increment_ref_count_object(right_value->type,right_value->c_value,info))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
            if(right_value47) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0); }
            __dec_obj26=right_value2_54;
            right_value2_54=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s",right_value->c_value))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
            if(right_value48) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0); }
        }
        else {
            __dec_obj27=right_value2_54;
            right_value2_54=(char*)come_increment_ref_count(((char*)(right_value49=string_clone(right_value->c_value))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
            if(right_value49) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0); }
        }
        __dec_obj28=come_value_49->c_value;
        come_value_49->c_value=(char*)come_increment_ref_count(((char*)(right_value50=xsprintf("%s(%s,%s)",fun_name2_28,left_value2_50,right_value2_54))));
        if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
        if(right_value50) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0); }
        type_55=(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=sType_clone(operator_fun_27->mResultType))));
        if(right_value51) { come_call_finalizer(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0); }
        if(operator_fun_27->mResultType->mHeap) {
            __dec_obj29=come_value_49->c_value;
            come_value_49->c_value=(char*)come_increment_ref_count(((char*)(right_value52=append_object_to_right_values(come_value_49->c_value,(struct sType*)come_increment_ref_count(type_55),info))));
            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0); }
            if(right_value52) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0); }
        }
        __dec_obj30=come_value_49->type;
        come_value_49->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_clone(type_55))));
        if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value53) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0); }
        come_value_49->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_49->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_49));
        result_48=(_Bool)1;
        if(come_value_49) { come_call_finalizer(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value2_50) { left_value2_50 = come_decrement_ref_count(left_value2_50, (void*)0, (void*)0, 0, 0); }
        if(right_value2_54) { right_value2_54 = come_decrement_ref_count(right_value2_54, (void*)0, (void*)0, 0, 0); }
        if(type_55) { come_call_finalizer(sType_finalize,type_55, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result36__ = result_48;
    if(type2_26) { come_call_finalizer(sType_finalize,type2_26, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_28) { fun_name2_28 = come_decrement_ref_count(fun_name2_28, (void*)0, (void*)0, 0, 0); }
    return __result36__;
}

static struct sType* sType_clone(struct sType* self){
void* right_value0;
struct sType* result_2;
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
memset(&result_2, 0, sizeof(struct sType*));
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
        result_2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value0=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 13))));
        if(right_value0) { come_call_finalizer(sType_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)) {
            result_2->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj2=result_2->mNoSolvedGenericsType;
            result_2->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value3=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj2) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value3) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj3=result_2->mGenericsName;
            result_2->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value4=string_clone(self->mGenericsName))));
            if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
            if(right_value4) { right_value4 = come_decrement_ref_count(right_value4, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj7=result_2->mGenericsTypes;
            result_2->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value11=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj7) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value11) { come_call_finalizer(list$1sTypephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj11=result_2->mArrayNum;
            result_2->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value19=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj11) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value19) { come_call_finalizer(list$1sNodephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_2->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj12=result_2->mParamTypes;
            result_2->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj12) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value20) { come_call_finalizer(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj16=result_2->mParamNames;
            result_2->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value27=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj16) { come_call_finalizer(list$1charphp_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value27) { come_call_finalizer(list$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj17=result_2->mResultType;
            result_2->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value28=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj17) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value28) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_2->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)) {
            result_2->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_2->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_2->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_2->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_2->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_2->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_2->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_2->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_2->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_2->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_2->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_2->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_2->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_2->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_2->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_2->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_2->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_2->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_2->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_2->mSizeNum=self->mSizeNum;
        }
        if(self!=((void*)0)) {
            result_2->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_2->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj18=result_2->mOriginalTypeName;
            result_2->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value29=string_clone(self->mOriginalTypeName))));
            if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
            if(right_value29) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_2->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_2->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_2->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_2->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_2->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_2->mComeMemCore=self->mComeMemCore;
        }
        if(self!=((void*)0)) {
            result_2->mInline=self->mInline;
        }
        struct sType* __result21__ = result_2;
        if(result_2) { come_call_finalizer(sType_finalize,result_2, (void*)0, (void*)0, 0, 0, 1); }
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
struct list_item$1sTypeph* it_3;
struct list_item$1sTypeph* prev_it_4;
memset(&it_3, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1sTypeph*));
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
memset(&it_5, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1sNodeph*));
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
memset(&it_7, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1charph*));
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

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value1;
struct tuple1$1sTypeph* result_9;
void* right_value2;
struct sType* __dec_obj1;
memset(&right_value1, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value2, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple1$1sTypeph* __result8__ = (void*)0;
                    return __result8__;
                }
                result_9=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value1=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "13op.c", 17))));
                if(right_value1) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj1=result_9->v1;
                    result_9->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value2=sType_clone(self->v1))));
                    if(__dec_obj1) { come_call_finalizer(sType_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value2) { come_call_finalizer(sType_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0); }
                }
                struct tuple1$1sTypeph* __result9__ = result_9;
                if(result_9) { come_call_finalizer(tuple1$1sTypephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1); }
                return __result9__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value5;
void* right_value6;
struct list$1sTypeph* result_10;
struct list_item$1sTypeph* it_11;
void* right_value10;
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value10, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sTypeph* __result10__ = ((void*)0);
                    return __result10__;
                }
                result_10=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value6=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value5=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "13op.c", 21))))))));
                if(right_value6) { come_call_finalizer(list$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
                it_11=self->head;
                while(it_11!=((void*)0)) {
                    list$1sTypephp_push_back2(result_10,(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=sType_clone(it_11->item)))));
                    if(right_value10) { come_call_finalizer(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0); }
                    it_11=it_11->next;
                }
                struct list$1sTypeph* __result12__ = result_10;
                if(result_10) { come_call_finalizer(list$1sTypephp_finalize,result_10, (void*)0, (void*)0, 0, 0, 1); }
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
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj4;
void* right_value8;
struct list_item$1sTypeph* litem_13;
struct sType* __dec_obj5;
void* right_value9;
struct list_item$1sTypeph* litem_14;
struct sType* __dec_obj6;
memset(&right_value7, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value8, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value9, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_12=((struct list_item$1sTypeph*)(right_value7=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "13op.c", 27)));
                            litem_12->prev=((void*)0);
                            litem_12->next=((void*)0);
                            __dec_obj4=litem_12->item;
                            litem_12->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_12;
                            self->head=litem_12;
                        }
                        else if(self->len==1) {
                            litem_13=((struct list_item$1sTypeph*)(right_value8=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "13op.c", 37)));
                            litem_13->prev=self->head;
                            litem_13->next=((void*)0);
                            __dec_obj5=litem_13->item;
                            litem_13->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail=litem_13;
                            self->head->next=litem_13;
                        }
                        else {
                            litem_14=((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "13op.c", 47)));
                            litem_14->prev=self->tail;
                            litem_14->next=((void*)0);
                            __dec_obj6=litem_14->item;
                            litem_14->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0); }
                            self->tail->next=litem_14;
                            self->tail=litem_14;
                        }
                        self->len++;
                        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value12;
void* right_value13;
struct list$1sNodeph* result_15;
struct list_item$1sNodeph* it_16;
void* right_value18;
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct list$1sNodeph*));
memset(&it_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sNodeph* __result13__ = ((void*)0);
                    return __result13__;
                }
                result_15=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value13=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value12=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "13op.c", 22))))))));
                if(right_value13) { come_call_finalizer(list$1sNodephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
                it_16=self->head;
                while(it_16!=((void*)0)) {
                    list$1sNodephp_push_back2(result_15,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value18=sNodep_clone(it_16->item)))));
                    if(right_value18) { right_value18 = come_decrement_ref_count(right_value18, ((struct sNode*)right_value18)->finalize, ((struct sNode*)right_value18)->_protocol_obj, 1, 0); } 
                    it_16=it_16->next;
                }
                struct list$1sNodeph* __result17__ = result_15;
                if(result_15) { come_call_finalizer(list$1sNodephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1); }
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
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj8;
void* right_value15;
struct list_item$1sNodeph* litem_18;
struct sNode* __dec_obj9;
void* right_value16;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj10;
memset(&right_value14, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value15, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_17=((struct list_item$1sNodeph*)(right_value14=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "13op.c", 28)));
                            litem_17->prev=((void*)0);
                            litem_17->next=((void*)0);
                            __dec_obj8=litem_17->item;
                            litem_17->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0); }
                            self->tail=litem_17;
                            self->head=litem_17;
                        }
                        else if(self->len==1) {
                            litem_18=((struct list_item$1sNodeph*)(right_value15=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "13op.c", 38)));
                            litem_18->prev=self->head;
                            litem_18->next=((void*)0);
                            __dec_obj9=litem_18->item;
                            litem_18->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0); }
                            self->tail=litem_18;
                            self->head->next=litem_18;
                        }
                        else {
                            litem_19=((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "13op.c", 48)));
                            litem_19->prev=self->tail;
                            litem_19->next=((void*)0);
                            __dec_obj10=litem_19->item;
                            litem_19->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0); }
                            self->tail->next=litem_19;
                            self->tail=litem_19;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value17;
struct sNode* result_20;
memset(&right_value17, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            struct sNode* __result15__ = (void*)0;
                            return __result15__;
                        }
                        result_20=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "13op.c", 28))));
                        if(self!=((void*)0)&&self->clone!=((void*)0)) {
                            result_20->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(self!=((void*)0)) {
                            result_20->finalize=self->finalize;
                        }
                        if(self!=((void*)0)) {
                            result_20->clone=self->clone;
                        }
                        if(self!=((void*)0)) {
                            result_20->compile=self->compile;
                        }
                        if(self!=((void*)0)) {
                            result_20->sline=self->sline;
                        }
                        if(self!=((void*)0)) {
                            result_20->sname=self->sname;
                        }
                        if(self!=((void*)0)) {
                            result_20->terminated=self->terminated;
                        }
                        struct sNode* __result16__ = result_20;
                        return __result16__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value21;
void* right_value22;
struct list$1charph* result_21;
struct list_item$1charph* it_22;
void* right_value26;
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&result_21, 0, sizeof(struct list$1charph*));
memset(&it_22, 0, sizeof(struct list_item$1charph*));
memset(&right_value26, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1charph* __result18__ = ((void*)0);
                    return __result18__;
                }
                result_21=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value22=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value21=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "13op.c", 25))))))));
                if(right_value22) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
                it_22=self->head;
                while(it_22!=((void*)0)) {
                    list$1charphp_push_back2(result_21,(char*)come_increment_ref_count(((char*)(right_value26=string_clone(it_22->item)))));
                    if(right_value26) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0); }
                    it_22=it_22->next;
                }
                struct list$1charph* __result20__ = result_21;
                if(result_21) { come_call_finalizer(list$1charphp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1); }
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
struct list_item$1charph* litem_23;
char* __dec_obj13;
void* right_value24;
struct list_item$1charph* litem_24;
char* __dec_obj14;
void* right_value25;
struct list_item$1charph* litem_25;
char* __dec_obj15;
memset(&right_value23, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1charph*));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_23=((struct list_item$1charph*)(right_value23=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "13op.c", 31)));
                            litem_23->prev=((void*)0);
                            litem_23->next=((void*)0);
                            __dec_obj13=litem_23->item;
                            litem_23->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_23;
                            self->head=litem_23;
                        }
                        else if(self->len==1) {
                            litem_24=((struct list_item$1charph*)(right_value24=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "13op.c", 41)));
                            litem_24->prev=self->head;
                            litem_24->next=((void*)0);
                            __dec_obj14=litem_24->item;
                            litem_24->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_24;
                            self->head->next=litem_24;
                        }
                        else {
                            litem_25=((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "13op.c", 51)));
                            litem_25->prev=self->tail;
                            litem_25->next=((void*)0);
                            __dec_obj15=litem_25->item;
                            litem_25->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
                            self->tail->next=litem_25;
                            self->tail=litem_25;
                        }
                        self->len++;
                        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
        int __result22__ = self->len;
        return __result22__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
int hash_32;
int it_33;
memset(&hash_32, 0, sizeof(int));
memset(&it_33, 0, sizeof(int));
            hash_32=string_get_hash_key(((char*)key))%self->size;
            it_33=hash_32;
            while((_Bool)1) {
                if(self->item_existance[it_33]) {
                    if(charp_equals(self->keys[it_33],key)) {
                        struct sGenericsFun* __result23__ = self->items[it_33];
                        return __result23__;
                    }
                    it_33++;
                    if(it_33>=self->size) {
                        it_33=0;
                    }
                    else if(it_33==hash_32) {
                        struct sGenericsFun* __result24__ = default_value;
                        return __result24__;
                    }
                }
                else {
                    struct sGenericsFun* __result25__ = default_value;
                    return __result25__;
                }
            }
            struct sGenericsFun* __result26__ = default_value;
            return __result26__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
struct sFun* default_value_35;
memset(&default_value_35, 0, sizeof(struct sFun*)); /* bbb */
                memset(&default_value_35,0,sizeof(struct sFun*));
                struct sFun* __result32__ = map$2charphsFunphp_at(self,key,default_value_35);
                return __result32__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_36;
int it_37;
memset(&hash_36, 0, sizeof(int));
memset(&it_37, 0, sizeof(int));
                    hash_36=string_get_hash_key(((char*)key))%self->size;
                    it_37=hash_36;
                    while((_Bool)1) {
                        if(self->item_existance[it_37]) {
                            if(charp_equals(self->keys[it_37],key)) {
                                struct sFun* __result28__ = self->items[it_37];
                                return __result28__;
                            }
                            it_37++;
                            if(it_37>=self->size) {
                                it_37=0;
                            }
                            else if(it_37==hash_36) {
                                struct sFun* __result29__ = default_value;
                                return __result29__;
                            }
                        }
                        else {
                            struct sFun* __result30__ = default_value;
                            return __result30__;
                        }
                    }
                    struct sFun* __result31__ = default_value;
                    return __result31__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
                    if(self!=((void*)0)&&self->v2!=((void*)0)) {
                        if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
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

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_51;
memset(&default_value_51, 0, sizeof(struct sType*)); /* bbb */
            memset(&default_value_51,0,sizeof(struct sType*));
            struct sType* __result35__ = list$1sTypephp_item(self,index,default_value_51);
            return __result35__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_52;
int i_53;
memset(&it_52, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_53, 0, sizeof(int));
                if(position<0) {
                    position+=self->len;
                }
                it_52=self->head;
                i_53=0;
                while(it_52!=((void*)0)) {
                    if(position==i_53) {
                        struct sType* __result33__ = it_52->item;
                        return __result33__;
                    }
                    it_52=it_52->next;
                    i_53++;
                }
                struct sType* __result34__ = default_value;
                return __result34__;
}

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* right_value54;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj31;
void* right_value55;
struct list_item$1CVALUEph* litem_57;
struct CVALUE* __dec_obj32;
void* right_value56;
struct list_item$1CVALUEph* litem_58;
struct CVALUE* __dec_obj33;
memset(&right_value54, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value55, 0, sizeof(void*));
memset(&litem_57, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value56, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1CVALUEph*));
            if(self->len==0) {
                litem_56=((struct list_item$1CVALUEph*)(right_value54=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "13op.c", 108)));
                litem_56->prev=((void*)0);
                litem_56->next=((void*)0);
                __dec_obj31=litem_56->item;
                litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj31) { come_call_finalizer(CVALUE_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_56;
                self->head=litem_56;
            }
            else if(self->len==1) {
                litem_57=((struct list_item$1CVALUEph*)(right_value55=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "13op.c", 118)));
                litem_57->prev=self->head;
                litem_57->next=((void*)0);
                __dec_obj32=litem_57->item;
                litem_57->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj32) { come_call_finalizer(CVALUE_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_57;
                self->head->next=litem_57;
            }
            else {
                litem_58=((struct list_item$1CVALUEph*)(right_value56=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "13op.c", 128)));
                litem_58->prev=self->tail;
                litem_58->next=((void*)0);
                __dec_obj33=litem_58->item;
                litem_58->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj33) { come_call_finalizer(CVALUE_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0); }
                self->tail->next=litem_58;
                self->tail=litem_58;
            }
            self->len++;
            if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* right_value57;
char* __dec_obj34;
memset(&right_value57, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj34=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value57=__builtin_string(info->sname))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
    if(right_value57) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0); }
    struct sNullNode* __result37__ = self;
    if(self) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result37__;
}

_Bool sNullNode_terminated(){
    _Bool __result38__ = (_Bool)0;
    return __result38__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* right_value58;
struct CVALUE* come_value_59;
void* right_value59;
char* __dec_obj35;
void* right_value60;
void* right_value61;
struct sType* __dec_obj36;
memset(&right_value58, 0, sizeof(void*));
memset(&come_value_59, 0, sizeof(struct CVALUE*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
    come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value58=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 136))));
    if(right_value58) { come_call_finalizer(CVALUE_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj35=come_value_59->c_value;
    come_value_59->c_value=(char*)come_increment_ref_count(((char*)(right_value59=xsprintf("((void*)0)"))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
    if(right_value59) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0); }
    __dec_obj36=come_value_59->type;
    come_value_59->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value60=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 139)))),"void*",info,(_Bool)0))));
    if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value60) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value61) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
    come_value_59->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_59->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_59));
    _Bool __result39__ = (_Bool)1;
    if(come_value_59) { come_call_finalizer(CVALUE_finalize,come_value_59, (void*)0, (void*)0, 0, 0, 0); }
    return __result39__;
}

int sNullNode_sline(struct sNullNode* self, struct sInfo* info){
    int __result40__ = self->sline;
    return __result40__;
}

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info){
void* right_value62;
memset(&right_value62, 0, sizeof(void*));
    char* __result41__ = ((char*)(right_value62=__builtin_string(self->sname)));
    return __result41__;
}

struct sNode* create_null_object(struct sInfo* info){
void* right_value63;
void* right_value64;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value67;
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 161);
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value64=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value63=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 161)))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sNullNode_finalize;
    _inf_value1->clone=sNullNode_clone;
    _inf_value1->compile=sNullNode_compile;
    _inf_value1->sline=sNullNode_sline;
    _inf_value1->sname=sNullNode_sname;
    _inf_value1->terminated=sNullNode_terminated;
    struct sNode* __result44__ = ((struct sNode*)(right_value67=_inf_value1));
    if(right_value63) { come_call_finalizer(sNullNode_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value64) { come_call_finalizer(sNullNode_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
    return __result44__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value68;
char* __dec_obj38;
void* right_value69;
struct sNode* __dec_obj39;
void* right_value70;
struct sNode* __dec_obj40;
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj38=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value68=__builtin_string(info->sname))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
    if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
    __dec_obj39=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=sNodep_clone(left))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0); }
    if(right_value69) { right_value69 = come_decrement_ref_count(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0); } 
    __dec_obj40=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value70=sNodep_clone(right))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0); }
    if(right_value70) { right_value70 = come_decrement_ref_count(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0); } 
    struct sAddNode* __result45__ = self;
    if(self) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result45__;
}

_Bool sAddNode_terminated(){
    _Bool __result46__ = (_Bool)0;
    return __result46__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_61;
void* right_value71;
struct CVALUE* left_value_62;
struct sNode* right_node_63;
void* right_value72;
struct CVALUE* right_value_64;
struct sType* type_65;
char* fun_name_66;
_Bool calling_fun_67;
void* right_value73;
struct CVALUE* come_value_68;
void* right_value74;
char* __dec_obj41;
void* right_value75;
struct sType* __dec_obj42;
memset(&left_node_61, 0, sizeof(struct sNode*));
memset(&right_value71, 0, sizeof(void*));
memset(&left_value_62, 0, sizeof(struct CVALUE*));
memset(&right_node_63, 0, sizeof(struct sNode*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value_64, 0, sizeof(struct CVALUE*));
memset(&type_65, 0, sizeof(struct sType*));
memset(&fun_name_66, 0, sizeof(char*));
memset(&calling_fun_67, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&come_value_68, 0, sizeof(struct CVALUE*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
    left_node_61=self->mLeft;
    if(!left_node_61->compile(left_node_61->_protocol_obj,info)) {
        _Bool __result47__ = (_Bool)0;
        return __result47__;
    }
    left_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value71=get_value_from_stack(-1,info))));
    if(right_value71) { come_call_finalizer(CVALUE_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_63=self->mRight;
    if(!right_node_63->compile(right_node_63->_protocol_obj,info)) {
        _Bool __result48__ = (_Bool)0;
        return __result48__;
    }
    right_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value72=get_value_from_stack(-1,info))));
    if(right_value72) { come_call_finalizer(CVALUE_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_65=(struct sType*)come_increment_ref_count(left_value_62->type);
    fun_name_66="operator_add";
    calling_fun_67=operator_overload_fun(type_65,fun_name_66,left_value_62,right_value_64,info);
    if(!calling_fun_67) {
        come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value73=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 218))));
        if(right_value73) { come_call_finalizer(CVALUE_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj41=come_value_68->c_value;
        come_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value74=xsprintf("%s+%s",left_value_62->c_value,right_value_64->c_value))));
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
        if(right_value74) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0); }
        __dec_obj42=come_value_68->type;
        come_value_68->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(left_value_62->type))));
        if(__dec_obj42) { come_call_finalizer(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value75) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
        come_value_68->type->mHeap=(_Bool)0;
        come_value_68->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_68->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_68));
        if(come_value_68) { come_call_finalizer(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result49__ = (_Bool)1;
    if(left_value_62) { come_call_finalizer(CVALUE_finalize,left_value_62, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_64) { come_call_finalizer(CVALUE_finalize,right_value_64, (void*)0, (void*)0, 0, 0, 0); }
    if(type_65) { come_call_finalizer(sType_finalize,type_65, (void*)0, (void*)0, 0, 0, 0); }
    return __result49__;
}

int sAddNode_sline(struct sAddNode* self, struct sInfo* info){
    int __result50__ = self->sline;
    return __result50__;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
void* right_value76;
memset(&right_value76, 0, sizeof(void*));
    char* __result51__ = ((char*)(right_value76=__builtin_string(self->sname)));
    return __result51__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value77;
char* __dec_obj43;
void* right_value78;
struct sNode* __dec_obj44;
void* right_value79;
struct sNode* __dec_obj45;
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value77=__builtin_string(info->sname))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
    if(right_value77) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0); }
    __dec_obj44=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value78=sNodep_clone(left))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0); }
    if(right_value78) { right_value78 = come_decrement_ref_count(right_value78, ((struct sNode*)right_value78)->finalize, ((struct sNode*)right_value78)->_protocol_obj, 1, 0); } 
    __dec_obj45=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value79=sNodep_clone(right))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0); }
    if(right_value79) { right_value79 = come_decrement_ref_count(right_value79, ((struct sNode*)right_value79)->finalize, ((struct sNode*)right_value79)->_protocol_obj, 1, 0); } 
    struct sSubNode* __result52__ = self;
    if(self) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result52__;
}

_Bool sSubNode_terminated(){
    _Bool __result53__ = (_Bool)0;
    return __result53__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_69;
void* right_value80;
struct CVALUE* left_value_70;
struct sNode* right_node_71;
void* right_value81;
struct CVALUE* right_value_72;
struct sType* type_73;
char* fun_name_74;
_Bool calling_fun_75;
void* right_value82;
struct CVALUE* come_value_76;
void* right_value83;
char* __dec_obj46;
void* right_value84;
struct sType* __dec_obj47;
memset(&left_node_69, 0, sizeof(struct sNode*));
memset(&right_value80, 0, sizeof(void*));
memset(&left_value_70, 0, sizeof(struct CVALUE*));
memset(&right_node_71, 0, sizeof(struct sNode*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value_72, 0, sizeof(struct CVALUE*));
memset(&type_73, 0, sizeof(struct sType*));
memset(&fun_name_74, 0, sizeof(char*));
memset(&calling_fun_75, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
memset(&come_value_76, 0, sizeof(struct CVALUE*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
    left_node_69=self->mLeft;
    if(!left_node_69->compile(left_node_69->_protocol_obj,info)) {
        _Bool __result54__ = (_Bool)0;
        return __result54__;
    }
    left_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=get_value_from_stack(-1,info))));
    if(right_value80) { come_call_finalizer(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_71=self->mRight;
    if(!right_node_71->compile(right_node_71->_protocol_obj,info)) {
        _Bool __result55__ = (_Bool)0;
        return __result55__;
    }
    right_value_72=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=get_value_from_stack(-1,info))));
    if(right_value81) { come_call_finalizer(CVALUE_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_73=(struct sType*)come_increment_ref_count(left_value_70->type);
    fun_name_74="operator_sub";
    calling_fun_75=operator_overload_fun(type_73,fun_name_74,left_value_70,right_value_72,info);
    if(!calling_fun_75) {
        come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 296))));
        if(right_value82) { come_call_finalizer(CVALUE_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj46=come_value_76->c_value;
        come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("%s-%s",left_value_70->c_value,right_value_72->c_value))));
        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
        if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
        __dec_obj47=come_value_76->type;
        come_value_76->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(left_value_70->type))));
        if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value84) { come_call_finalizer(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0); }
        come_value_76->type->mHeap=(_Bool)0;
        come_value_76->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_76->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
        if(come_value_76) { come_call_finalizer(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result56__ = (_Bool)1;
    if(left_value_70) { come_call_finalizer(CVALUE_finalize,left_value_70, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_72) { come_call_finalizer(CVALUE_finalize,right_value_72, (void*)0, (void*)0, 0, 0, 0); }
    if(type_73) { come_call_finalizer(sType_finalize,type_73, (void*)0, (void*)0, 0, 0, 0); }
    return __result56__;
}

int sSubNode_sline(struct sSubNode* self, struct sInfo* info){
    int __result57__ = self->sline;
    return __result57__;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
void* right_value85;
memset(&right_value85, 0, sizeof(void*));
    char* __result58__ = ((char*)(right_value85=__builtin_string(self->sname)));
    return __result58__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value86;
char* __dec_obj48;
void* right_value87;
struct sNode* __dec_obj49;
void* right_value88;
struct sNode* __dec_obj50;
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value86=__builtin_string(info->sname))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
    if(right_value86) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0); }
    __dec_obj49=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value87=sNodep_clone(left))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0); }
    if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, ((struct sNode*)right_value87)->finalize, ((struct sNode*)right_value87)->_protocol_obj, 1, 0); } 
    __dec_obj50=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=sNodep_clone(right))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0); }
    if(right_value88) { right_value88 = come_decrement_ref_count(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0); } 
    struct sMultNode* __result59__ = self;
    if(self) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result59__;
}

_Bool sMultNode_terminated(){
    _Bool __result60__ = (_Bool)0;
    return __result60__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_77;
void* right_value89;
struct CVALUE* left_value_78;
struct sNode* right_node_79;
void* right_value90;
struct CVALUE* right_value_80;
struct sType* type_81;
char* fun_name_82;
_Bool calling_fun_83;
void* right_value91;
struct CVALUE* come_value_84;
void* right_value92;
char* __dec_obj51;
void* right_value93;
struct sType* __dec_obj52;
memset(&left_node_77, 0, sizeof(struct sNode*));
memset(&right_value89, 0, sizeof(void*));
memset(&left_value_78, 0, sizeof(struct CVALUE*));
memset(&right_node_79, 0, sizeof(struct sNode*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value_80, 0, sizeof(struct CVALUE*));
memset(&type_81, 0, sizeof(struct sType*));
memset(&fun_name_82, 0, sizeof(char*));
memset(&calling_fun_83, 0, sizeof(_Bool));
memset(&right_value91, 0, sizeof(void*));
memset(&come_value_84, 0, sizeof(struct CVALUE*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
    left_node_77=self->mLeft;
    if(!left_node_77->compile(left_node_77->_protocol_obj,info)) {
        _Bool __result61__ = (_Bool)0;
        return __result61__;
    }
    left_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=get_value_from_stack(-1,info))));
    if(right_value89) { come_call_finalizer(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_79=self->mRight;
    if(!right_node_79->compile(right_node_79->_protocol_obj,info)) {
        _Bool __result62__ = (_Bool)0;
        return __result62__;
    }
    right_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value90=get_value_from_stack(-1,info))));
    if(right_value90) { come_call_finalizer(CVALUE_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_81=(struct sType*)come_increment_ref_count(left_value_78->type);
    fun_name_82="operator_mult";
    calling_fun_83=operator_overload_fun(type_81,fun_name_82,left_value_78,right_value_80,info);
    if(!calling_fun_83) {
        come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 374))));
        if(right_value91) { come_call_finalizer(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj51=come_value_84->c_value;
        come_value_84->c_value=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("%s*%s",left_value_78->c_value,right_value_80->c_value))));
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
        if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
        __dec_obj52=come_value_84->type;
        come_value_84->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(left_value_78->type))));
        if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value93) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0); }
        come_value_84->type->mHeap=(_Bool)0;
        come_value_84->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_84->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
        if(come_value_84) { come_call_finalizer(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result63__ = (_Bool)1;
    if(left_value_78) { come_call_finalizer(CVALUE_finalize,left_value_78, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_80) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0); }
    if(type_81) { come_call_finalizer(sType_finalize,type_81, (void*)0, (void*)0, 0, 0, 0); }
    return __result63__;
}

int sMultNode_sline(struct sMultNode* self, struct sInfo* info){
    int __result64__ = self->sline;
    return __result64__;
}

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info){
void* right_value94;
memset(&right_value94, 0, sizeof(void*));
    char* __result65__ = ((char*)(right_value94=__builtin_string(self->sname)));
    return __result65__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value95;
char* __dec_obj53;
void* right_value96;
struct sNode* __dec_obj54;
void* right_value97;
struct sNode* __dec_obj55;
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string(info->sname))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
    if(right_value95) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0); }
    __dec_obj54=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNodep_clone(left))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0); }
    if(right_value96) { right_value96 = come_decrement_ref_count(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0); } 
    __dec_obj55=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=sNodep_clone(right))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0); }
    if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0); } 
    struct sDivNode* __result66__ = self;
    if(self) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result66__;
}

_Bool sDivNode_terminated(){
    _Bool __result67__ = (_Bool)0;
    return __result67__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_85;
void* right_value98;
struct CVALUE* left_value_86;
struct sNode* right_node_87;
void* right_value99;
struct CVALUE* right_value_88;
struct sType* type_89;
char* fun_name_90;
_Bool calling_fun_91;
void* right_value100;
struct CVALUE* come_value_92;
void* right_value101;
char* __dec_obj56;
void* right_value102;
struct sType* __dec_obj57;
memset(&left_node_85, 0, sizeof(struct sNode*));
memset(&right_value98, 0, sizeof(void*));
memset(&left_value_86, 0, sizeof(struct CVALUE*));
memset(&right_node_87, 0, sizeof(struct sNode*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value_88, 0, sizeof(struct CVALUE*));
memset(&type_89, 0, sizeof(struct sType*));
memset(&fun_name_90, 0, sizeof(char*));
memset(&calling_fun_91, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
memset(&come_value_92, 0, sizeof(struct CVALUE*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
    left_node_85=self->mLeft;
    if(!left_node_85->compile(left_node_85->_protocol_obj,info)) {
        _Bool __result68__ = (_Bool)0;
        return __result68__;
    }
    left_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=get_value_from_stack(-1,info))));
    if(right_value98) { come_call_finalizer(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_87=self->mRight;
    if(!right_node_87->compile(right_node_87->_protocol_obj,info)) {
        _Bool __result69__ = (_Bool)0;
        return __result69__;
    }
    right_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=get_value_from_stack(-1,info))));
    if(right_value99) { come_call_finalizer(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_89=(struct sType*)come_increment_ref_count(left_value_86->type);
    fun_name_90="operator_div";
    calling_fun_91=operator_overload_fun(type_89,fun_name_90,left_value_86,right_value_88,info);
    if(!calling_fun_91) {
        come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 452))));
        if(right_value100) { come_call_finalizer(CVALUE_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj56=come_value_92->c_value;
        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value101=xsprintf("%s/%s",left_value_86->c_value,right_value_88->c_value))));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
        if(right_value101) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0); }
        __dec_obj57=come_value_92->type;
        come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(left_value_86->type))));
        if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value102) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0); }
        come_value_92->type->mHeap=(_Bool)0;
        come_value_92->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_92->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
        if(come_value_92) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result70__ = (_Bool)1;
    if(left_value_86) { come_call_finalizer(CVALUE_finalize,left_value_86, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_88) { come_call_finalizer(CVALUE_finalize,right_value_88, (void*)0, (void*)0, 0, 0, 0); }
    if(type_89) { come_call_finalizer(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0); }
    return __result70__;
}

int sDivNode_sline(struct sDivNode* self, struct sInfo* info){
    int __result71__ = self->sline;
    return __result71__;
}

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info){
void* right_value103;
memset(&right_value103, 0, sizeof(void*));
    char* __result72__ = ((char*)(right_value103=__builtin_string(self->sname)));
    return __result72__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value104;
char* __dec_obj58;
void* right_value105;
struct sNode* __dec_obj59;
void* right_value106;
struct sNode* __dec_obj60;
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(info->sname))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
    if(right_value104) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0); }
    __dec_obj59=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=sNodep_clone(left))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0); }
    if(right_value105) { right_value105 = come_decrement_ref_count(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0); } 
    __dec_obj60=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=sNodep_clone(right))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0); }
    if(right_value106) { right_value106 = come_decrement_ref_count(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0); } 
    struct sModNode* __result73__ = self;
    if(self) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result73__;
}

_Bool sModNode_terminated(){
    _Bool __result74__ = (_Bool)0;
    return __result74__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_93;
void* right_value107;
struct CVALUE* left_value_94;
struct sNode* right_node_95;
void* right_value108;
struct CVALUE* right_value_96;
struct sType* type_97;
char* fun_name_98;
_Bool calling_fun_99;
void* right_value109;
struct CVALUE* come_value_100;
void* right_value110;
char* __dec_obj61;
void* right_value111;
struct sType* __dec_obj62;
memset(&left_node_93, 0, sizeof(struct sNode*));
memset(&right_value107, 0, sizeof(void*));
memset(&left_value_94, 0, sizeof(struct CVALUE*));
memset(&right_node_95, 0, sizeof(struct sNode*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value_96, 0, sizeof(struct CVALUE*));
memset(&type_97, 0, sizeof(struct sType*));
memset(&fun_name_98, 0, sizeof(char*));
memset(&calling_fun_99, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&come_value_100, 0, sizeof(struct CVALUE*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
    left_node_93=self->mLeft;
    if(!left_node_93->compile(left_node_93->_protocol_obj,info)) {
        _Bool __result75__ = (_Bool)0;
        return __result75__;
    }
    left_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=get_value_from_stack(-1,info))));
    if(right_value107) { come_call_finalizer(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_95=self->mRight;
    if(!right_node_95->compile(right_node_95->_protocol_obj,info)) {
        _Bool __result76__ = (_Bool)0;
        return __result76__;
    }
    right_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
    if(right_value108) { come_call_finalizer(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_97=(struct sType*)come_increment_ref_count(left_value_94->type);
    fun_name_98="operator_mod";
    calling_fun_99=operator_overload_fun(type_97,fun_name_98,left_value_94,right_value_96,info);
    if(!calling_fun_99) {
        come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value109=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 530))));
        if(right_value109) { come_call_finalizer(CVALUE_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj61=come_value_100->c_value;
        come_value_100->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("%s%%%s",left_value_94->c_value,right_value_96->c_value))));
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
        if(right_value110) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0); }
        __dec_obj62=come_value_100->type;
        come_value_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(left_value_94->type))));
        if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value111) { come_call_finalizer(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0); }
        come_value_100->type->mHeap=(_Bool)0;
        come_value_100->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_100->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_100));
        if(come_value_100) { come_call_finalizer(CVALUE_finalize,come_value_100, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result77__ = (_Bool)1;
    if(left_value_94) { come_call_finalizer(CVALUE_finalize,left_value_94, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_96) { come_call_finalizer(CVALUE_finalize,right_value_96, (void*)0, (void*)0, 0, 0, 0); }
    if(type_97) { come_call_finalizer(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0); }
    return __result77__;
}

int sModNode_sline(struct sModNode* self, struct sInfo* info){
    int __result78__ = self->sline;
    return __result78__;
}

char* sModNode_sname(struct sModNode* self, struct sInfo* info){
void* right_value112;
memset(&right_value112, 0, sizeof(void*));
    char* __result79__ = ((char*)(right_value112=__builtin_string(self->sname)));
    return __result79__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value113;
char* __dec_obj63;
void* right_value114;
struct sNode* __dec_obj64;
void* right_value115;
struct sNode* __dec_obj65;
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj63=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(info->sname))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
    if(right_value113) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0); }
    __dec_obj64=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNodep_clone(left))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0); }
    if(right_value114) { right_value114 = come_decrement_ref_count(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0); } 
    __dec_obj65=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNodep_clone(right))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0); }
    if(right_value115) { right_value115 = come_decrement_ref_count(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0); } 
    struct sLShiftNode* __result80__ = self;
    if(self) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result80__;
}

_Bool sLShiftNode_terminated(){
    _Bool __result81__ = (_Bool)0;
    return __result81__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_101;
void* right_value116;
struct CVALUE* left_value_102;
struct sNode* right_node_103;
void* right_value117;
struct CVALUE* right_value_104;
struct sType* type_105;
char* fun_name_106;
_Bool calling_fun_107;
void* right_value118;
struct CVALUE* come_value_108;
void* right_value119;
char* __dec_obj66;
void* right_value120;
struct sType* __dec_obj67;
memset(&left_node_101, 0, sizeof(struct sNode*));
memset(&right_value116, 0, sizeof(void*));
memset(&left_value_102, 0, sizeof(struct CVALUE*));
memset(&right_node_103, 0, sizeof(struct sNode*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value_104, 0, sizeof(struct CVALUE*));
memset(&type_105, 0, sizeof(struct sType*));
memset(&fun_name_106, 0, sizeof(char*));
memset(&calling_fun_107, 0, sizeof(_Bool));
memset(&right_value118, 0, sizeof(void*));
memset(&come_value_108, 0, sizeof(struct CVALUE*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    left_node_101=self->mLeft;
    if(!left_node_101->compile(left_node_101->_protocol_obj,info)) {
        _Bool __result82__ = (_Bool)0;
        return __result82__;
    }
    left_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value116=get_value_from_stack(-1,info))));
    if(right_value116) { come_call_finalizer(CVALUE_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_103=self->mRight;
    if(!right_node_103->compile(right_node_103->_protocol_obj,info)) {
        _Bool __result83__ = (_Bool)0;
        return __result83__;
    }
    right_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))));
    if(right_value117) { come_call_finalizer(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_105=(struct sType*)come_increment_ref_count(left_value_102->type);
    fun_name_106="operator_lshift";
    calling_fun_107=operator_overload_fun(type_105,fun_name_106,left_value_102,right_value_104,info);
    if(!calling_fun_107) {
        come_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 608))));
        if(right_value118) { come_call_finalizer(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj66=come_value_108->c_value;
        come_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("%s<<%s",left_value_102->c_value,right_value_104->c_value))));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0); }
        if(right_value119) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0); }
        __dec_obj67=come_value_108->type;
        come_value_108->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(left_value_102->type))));
        if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value120) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
        come_value_108->type->mHeap=(_Bool)0;
        come_value_108->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_108->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_108));
        if(come_value_108) { come_call_finalizer(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result84__ = (_Bool)1;
    if(left_value_102) { come_call_finalizer(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_104) { come_call_finalizer(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0); }
    if(type_105) { come_call_finalizer(sType_finalize,type_105, (void*)0, (void*)0, 0, 0, 0); }
    return __result84__;
}

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info){
    int __result85__ = self->sline;
    return __result85__;
}

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* right_value121;
memset(&right_value121, 0, sizeof(void*));
    char* __result86__ = ((char*)(right_value121=__builtin_string(self->sname)));
    return __result86__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value122;
char* __dec_obj68;
void* right_value123;
struct sNode* __dec_obj69;
void* right_value124;
struct sNode* __dec_obj70;
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj68=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(info->sname))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0); }
    if(right_value122) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0); }
    __dec_obj69=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value123=sNodep_clone(left))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0); }
    if(right_value123) { right_value123 = come_decrement_ref_count(right_value123, ((struct sNode*)right_value123)->finalize, ((struct sNode*)right_value123)->_protocol_obj, 1, 0); } 
    __dec_obj70=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=sNodep_clone(right))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0); }
    if(right_value124) { right_value124 = come_decrement_ref_count(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0); } 
    struct sRShiftNode* __result87__ = self;
    if(self) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result87__;
}

_Bool sRShiftNode_terminated(){
    _Bool __result88__ = (_Bool)0;
    return __result88__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_109;
void* right_value125;
struct CVALUE* left_value_110;
struct sNode* right_node_111;
void* right_value126;
struct CVALUE* right_value_112;
struct sType* type_113;
char* fun_name_114;
_Bool calling_fun_115;
void* right_value127;
struct CVALUE* come_value_116;
void* right_value128;
char* __dec_obj71;
void* right_value129;
struct sType* __dec_obj72;
memset(&left_node_109, 0, sizeof(struct sNode*));
memset(&right_value125, 0, sizeof(void*));
memset(&left_value_110, 0, sizeof(struct CVALUE*));
memset(&right_node_111, 0, sizeof(struct sNode*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value_112, 0, sizeof(struct CVALUE*));
memset(&type_113, 0, sizeof(struct sType*));
memset(&fun_name_114, 0, sizeof(char*));
memset(&calling_fun_115, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
memset(&come_value_116, 0, sizeof(struct CVALUE*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
    left_node_109=self->mLeft;
    if(!left_node_109->compile(left_node_109->_protocol_obj,info)) {
        _Bool __result89__ = (_Bool)0;
        return __result89__;
    }
    left_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=get_value_from_stack(-1,info))));
    if(right_value125) { come_call_finalizer(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_111=self->mRight;
    if(!right_node_111->compile(right_node_111->_protocol_obj,info)) {
        _Bool __result90__ = (_Bool)0;
        return __result90__;
    }
    right_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value126=get_value_from_stack(-1,info))));
    if(right_value126) { come_call_finalizer(CVALUE_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_113=(struct sType*)come_increment_ref_count(left_value_110->type);
    fun_name_114="operator_rshift";
    calling_fun_115=operator_overload_fun(type_113,fun_name_114,left_value_110,right_value_112,info);
    if(!calling_fun_115) {
        come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 686))));
        if(right_value127) { come_call_finalizer(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj71=come_value_116->c_value;
        come_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("%s>>%s",left_value_110->c_value,right_value_112->c_value))));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
        if(right_value128) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0); }
        __dec_obj72=come_value_116->type;
        come_value_116->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(left_value_110->type))));
        if(__dec_obj72) { come_call_finalizer(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value129) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0); }
        come_value_116->type->mHeap=(_Bool)0;
        come_value_116->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_116->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_116));
        if(come_value_116) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result91__ = (_Bool)1;
    if(left_value_110) { come_call_finalizer(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_112) { come_call_finalizer(CVALUE_finalize,right_value_112, (void*)0, (void*)0, 0, 0, 0); }
    if(type_113) { come_call_finalizer(sType_finalize,type_113, (void*)0, (void*)0, 0, 0, 0); }
    return __result91__;
}

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info){
    int __result92__ = self->sline;
    return __result92__;
}

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* right_value130;
memset(&right_value130, 0, sizeof(void*));
    char* __result93__ = ((char*)(right_value130=__builtin_string(self->sname)));
    return __result93__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value131;
char* __dec_obj73;
void* right_value132;
struct sNode* __dec_obj74;
void* right_value133;
struct sNode* __dec_obj75;
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj73=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string(info->sname))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
    if(right_value131) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0); }
    __dec_obj74=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value132=sNodep_clone(left))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0); }
    if(right_value132) { right_value132 = come_decrement_ref_count(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0); } 
    __dec_obj75=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value133=sNodep_clone(right))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0); }
    if(right_value133) { right_value133 = come_decrement_ref_count(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0); } 
    struct sGtEqNode* __result94__ = self;
    if(self) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result94__;
}

_Bool sGtEqNode_terminated(){
    _Bool __result95__ = (_Bool)0;
    return __result95__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_117;
void* right_value134;
struct CVALUE* left_value_118;
struct sNode* right_node_119;
void* right_value135;
struct CVALUE* right_value_120;
struct sType* type_121;
char* fun_name_122;
_Bool calling_fun_123;
void* right_value136;
struct CVALUE* come_value_124;
void* right_value137;
char* __dec_obj76;
void* right_value138;
struct sType* __dec_obj77;
memset(&left_node_117, 0, sizeof(struct sNode*));
memset(&right_value134, 0, sizeof(void*));
memset(&left_value_118, 0, sizeof(struct CVALUE*));
memset(&right_node_119, 0, sizeof(struct sNode*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value_120, 0, sizeof(struct CVALUE*));
memset(&type_121, 0, sizeof(struct sType*));
memset(&fun_name_122, 0, sizeof(char*));
memset(&calling_fun_123, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
memset(&come_value_124, 0, sizeof(struct CVALUE*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
    left_node_117=self->mLeft;
    if(!left_node_117->compile(left_node_117->_protocol_obj,info)) {
        _Bool __result96__ = (_Bool)0;
        return __result96__;
    }
    left_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=get_value_from_stack(-1,info))));
    if(right_value134) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_119=self->mRight;
    if(!right_node_119->compile(right_node_119->_protocol_obj,info)) {
        _Bool __result97__ = (_Bool)0;
        return __result97__;
    }
    right_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value135=get_value_from_stack(-1,info))));
    if(right_value135) { come_call_finalizer(CVALUE_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_121=(struct sType*)come_increment_ref_count(left_value_118->type);
    fun_name_122="operator_gteq";
    calling_fun_123=operator_overload_fun(type_121,fun_name_122,left_value_118,right_value_120,info);
    if(!calling_fun_123) {
        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 764))));
        if(right_value136) { come_call_finalizer(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj76=come_value_124->c_value;
        come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value137=xsprintf("%s>=%s",left_value_118->c_value,right_value_120->c_value))));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0); }
        if(right_value137) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0); }
        __dec_obj77=come_value_124->type;
        come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(left_value_118->type))));
        if(__dec_obj77) { come_call_finalizer(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value138) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
        come_value_124->type->mHeap=(_Bool)0;
        come_value_124->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_124->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
        if(come_value_124) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result98__ = (_Bool)1;
    if(left_value_118) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_120) { come_call_finalizer(CVALUE_finalize,right_value_120, (void*)0, (void*)0, 0, 0, 0); }
    if(type_121) { come_call_finalizer(sType_finalize,type_121, (void*)0, (void*)0, 0, 0, 0); }
    return __result98__;
}

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info){
    int __result99__ = self->sline;
    return __result99__;
}

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info){
void* right_value139;
memset(&right_value139, 0, sizeof(void*));
    char* __result100__ = ((char*)(right_value139=__builtin_string(self->sname)));
    return __result100__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value140;
char* __dec_obj78;
void* right_value141;
struct sNode* __dec_obj79;
void* right_value142;
struct sNode* __dec_obj80;
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(info->sname))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0); }
    if(right_value140) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0); }
    __dec_obj79=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=sNodep_clone(left))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0); }
    if(right_value141) { right_value141 = come_decrement_ref_count(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0); } 
    __dec_obj80=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=sNodep_clone(right))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0); }
    if(right_value142) { right_value142 = come_decrement_ref_count(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0); } 
    struct sLtEqNode* __result101__ = self;
    if(self) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result101__;
}

_Bool sLtEqNode_terminated(){
    _Bool __result102__ = (_Bool)0;
    return __result102__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_125;
void* right_value143;
struct CVALUE* left_value_126;
struct sNode* right_node_127;
void* right_value144;
struct CVALUE* right_value_128;
struct sType* type_129;
char* fun_name_130;
_Bool calling_fun_131;
void* right_value145;
struct CVALUE* come_value_132;
void* right_value146;
char* __dec_obj81;
void* right_value147;
struct sType* __dec_obj82;
memset(&left_node_125, 0, sizeof(struct sNode*));
memset(&right_value143, 0, sizeof(void*));
memset(&left_value_126, 0, sizeof(struct CVALUE*));
memset(&right_node_127, 0, sizeof(struct sNode*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value_128, 0, sizeof(struct CVALUE*));
memset(&type_129, 0, sizeof(struct sType*));
memset(&fun_name_130, 0, sizeof(char*));
memset(&calling_fun_131, 0, sizeof(_Bool));
memset(&right_value145, 0, sizeof(void*));
memset(&come_value_132, 0, sizeof(struct CVALUE*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
    left_node_125=self->mLeft;
    if(!left_node_125->compile(left_node_125->_protocol_obj,info)) {
        _Bool __result103__ = (_Bool)0;
        return __result103__;
    }
    left_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value143=get_value_from_stack(-1,info))));
    if(right_value143) { come_call_finalizer(CVALUE_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_127=self->mRight;
    if(!right_node_127->compile(right_node_127->_protocol_obj,info)) {
        _Bool __result104__ = (_Bool)0;
        return __result104__;
    }
    right_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=get_value_from_stack(-1,info))));
    if(right_value144) { come_call_finalizer(CVALUE_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_129=(struct sType*)come_increment_ref_count(left_value_126->type);
    fun_name_130="operator_lteq";
    calling_fun_131=operator_overload_fun(type_129,fun_name_130,left_value_126,right_value_128,info);
    if(!calling_fun_131) {
        come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 842))));
        if(right_value145) { come_call_finalizer(CVALUE_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj81=come_value_132->c_value;
        come_value_132->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("%s<=%s",left_value_126->c_value,right_value_128->c_value))));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0); }
        if(right_value146) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0); }
        __dec_obj82=come_value_132->type;
        come_value_132->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(left_value_126->type))));
        if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value147) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0); }
        come_value_132->type->mHeap=(_Bool)0;
        come_value_132->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_132->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
        if(come_value_132) { come_call_finalizer(CVALUE_finalize,come_value_132, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result105__ = (_Bool)1;
    if(left_value_126) { come_call_finalizer(CVALUE_finalize,left_value_126, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_128) { come_call_finalizer(CVALUE_finalize,right_value_128, (void*)0, (void*)0, 0, 0, 0); }
    if(type_129) { come_call_finalizer(sType_finalize,type_129, (void*)0, (void*)0, 0, 0, 0); }
    return __result105__;
}

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info){
    int __result106__ = self->sline;
    return __result106__;
}

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info){
void* right_value148;
memset(&right_value148, 0, sizeof(void*));
    char* __result107__ = ((char*)(right_value148=__builtin_string(self->sname)));
    return __result107__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value149;
char* __dec_obj83;
void* right_value150;
struct sNode* __dec_obj84;
void* right_value151;
struct sNode* __dec_obj85;
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string(info->sname))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0); }
    if(right_value149) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0); }
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value150=sNodep_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0); }
    if(right_value150) { right_value150 = come_decrement_ref_count(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0); } 
    __dec_obj85=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value151=sNodep_clone(right))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0); }
    if(right_value151) { right_value151 = come_decrement_ref_count(right_value151, ((struct sNode*)right_value151)->finalize, ((struct sNode*)right_value151)->_protocol_obj, 1, 0); } 
    struct sLtNode* __result108__ = self;
    if(self) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result108__;
}

_Bool sLtNode_terminated(){
    _Bool __result109__ = (_Bool)0;
    return __result109__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_133;
void* right_value152;
struct CVALUE* left_value_134;
struct sNode* right_node_135;
void* right_value153;
struct CVALUE* right_value_136;
struct sType* type_137;
char* fun_name_138;
_Bool calling_fun_139;
void* right_value154;
struct CVALUE* come_value_140;
void* right_value155;
char* __dec_obj86;
void* right_value156;
struct sType* __dec_obj87;
memset(&left_node_133, 0, sizeof(struct sNode*));
memset(&right_value152, 0, sizeof(void*));
memset(&left_value_134, 0, sizeof(struct CVALUE*));
memset(&right_node_135, 0, sizeof(struct sNode*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value_136, 0, sizeof(struct CVALUE*));
memset(&type_137, 0, sizeof(struct sType*));
memset(&fun_name_138, 0, sizeof(char*));
memset(&calling_fun_139, 0, sizeof(_Bool));
memset(&right_value154, 0, sizeof(void*));
memset(&come_value_140, 0, sizeof(struct CVALUE*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
    left_node_133=self->mLeft;
    if(!left_node_133->compile(left_node_133->_protocol_obj,info)) {
        _Bool __result110__ = (_Bool)0;
        return __result110__;
    }
    left_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=get_value_from_stack(-1,info))));
    if(right_value152) { come_call_finalizer(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_135=self->mRight;
    if(!right_node_135->compile(right_node_135->_protocol_obj,info)) {
        _Bool __result111__ = (_Bool)0;
        return __result111__;
    }
    right_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=get_value_from_stack(-1,info))));
    if(right_value153) { come_call_finalizer(CVALUE_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_137=(struct sType*)come_increment_ref_count(left_value_134->type);
    fun_name_138="operator_lt";
    calling_fun_139=operator_overload_fun(type_137,fun_name_138,left_value_134,right_value_136,info);
    if(!calling_fun_139) {
        come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 920))));
        if(right_value154) { come_call_finalizer(CVALUE_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj86=come_value_140->c_value;
        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s<%s",left_value_134->c_value,right_value_136->c_value))));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
        if(right_value155) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0); }
        __dec_obj87=come_value_140->type;
        come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(left_value_134->type))));
        if(__dec_obj87) { come_call_finalizer(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value156) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0); }
        come_value_140->type->mHeap=(_Bool)0;
        come_value_140->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_140->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
        if(come_value_140) { come_call_finalizer(CVALUE_finalize,come_value_140, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result112__ = (_Bool)1;
    if(left_value_134) { come_call_finalizer(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_136) { come_call_finalizer(CVALUE_finalize,right_value_136, (void*)0, (void*)0, 0, 0, 0); }
    if(type_137) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0); }
    return __result112__;
}

int sLtNode_sline(struct sLtNode* self, struct sInfo* info){
    int __result113__ = self->sline;
    return __result113__;
}

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info){
void* right_value157;
memset(&right_value157, 0, sizeof(void*));
    char* __result114__ = ((char*)(right_value157=__builtin_string(self->sname)));
    return __result114__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value158;
char* __dec_obj88;
void* right_value159;
struct sNode* __dec_obj89;
void* right_value160;
struct sNode* __dec_obj90;
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(info->sname))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
    if(right_value158) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0); }
    __dec_obj89=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=sNodep_clone(left))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0); }
    if(right_value159) { right_value159 = come_decrement_ref_count(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0); } 
    __dec_obj90=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value160=sNodep_clone(right))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0); }
    if(right_value160) { right_value160 = come_decrement_ref_count(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0); } 
    struct sGtNode* __result115__ = self;
    if(self) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result115__;
}

_Bool sGtNode_terminated(){
    _Bool __result116__ = (_Bool)0;
    return __result116__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_141;
void* right_value161;
struct CVALUE* left_value_142;
struct sNode* right_node_143;
void* right_value162;
struct CVALUE* right_value_144;
struct sType* type_145;
char* fun_name_146;
_Bool calling_fun_147;
void* right_value163;
struct CVALUE* come_value_148;
void* right_value164;
char* __dec_obj91;
void* right_value165;
struct sType* __dec_obj92;
memset(&left_node_141, 0, sizeof(struct sNode*));
memset(&right_value161, 0, sizeof(void*));
memset(&left_value_142, 0, sizeof(struct CVALUE*));
memset(&right_node_143, 0, sizeof(struct sNode*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value_144, 0, sizeof(struct CVALUE*));
memset(&type_145, 0, sizeof(struct sType*));
memset(&fun_name_146, 0, sizeof(char*));
memset(&calling_fun_147, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&come_value_148, 0, sizeof(struct CVALUE*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
    left_node_141=self->mLeft;
    if(!left_node_141->compile(left_node_141->_protocol_obj,info)) {
        _Bool __result117__ = (_Bool)0;
        return __result117__;
    }
    left_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=get_value_from_stack(-1,info))));
    if(right_value161) { come_call_finalizer(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_143=self->mRight;
    if(!right_node_143->compile(right_node_143->_protocol_obj,info)) {
        _Bool __result118__ = (_Bool)0;
        return __result118__;
    }
    right_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=get_value_from_stack(-1,info))));
    if(right_value162) { come_call_finalizer(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_145=(struct sType*)come_increment_ref_count(left_value_142->type);
    fun_name_146="operator_gt";
    calling_fun_147=operator_overload_fun(type_145,fun_name_146,left_value_142,right_value_144,info);
    if(!calling_fun_147) {
        come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 998))));
        if(right_value163) { come_call_finalizer(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj91=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("%s>%s",left_value_142->c_value,right_value_144->c_value))));
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0); }
        if(right_value164) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0); }
        __dec_obj92=come_value_148->type;
        come_value_148->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(left_value_142->type))));
        if(__dec_obj92) { come_call_finalizer(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value165) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
        come_value_148->type->mHeap=(_Bool)0;
        come_value_148->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_148->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
        if(come_value_148) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result119__ = (_Bool)1;
    if(left_value_142) { come_call_finalizer(CVALUE_finalize,left_value_142, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_144) { come_call_finalizer(CVALUE_finalize,right_value_144, (void*)0, (void*)0, 0, 0, 0); }
    if(type_145) { come_call_finalizer(sType_finalize,type_145, (void*)0, (void*)0, 0, 0, 0); }
    return __result119__;
}

int sGtNode_sline(struct sGtNode* self, struct sInfo* info){
    int __result120__ = self->sline;
    return __result120__;
}

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info){
void* right_value166;
memset(&right_value166, 0, sizeof(void*));
    char* __result121__ = ((char*)(right_value166=__builtin_string(self->sname)));
    return __result121__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value167;
char* __dec_obj93;
void* right_value168;
struct sNode* __dec_obj94;
void* right_value169;
struct sNode* __dec_obj95;
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj93=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value167=__builtin_string(info->sname))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
    if(right_value167) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0); }
    __dec_obj94=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value168=sNodep_clone(left))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0); }
    if(right_value168) { right_value168 = come_decrement_ref_count(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0); } 
    __dec_obj95=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=sNodep_clone(right))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0); }
    if(right_value169) { right_value169 = come_decrement_ref_count(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0); } 
    struct sEqNode* __result122__ = self;
    if(self) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result122__;
}

int sEqNode_sline(struct sEqNode* self, struct sInfo* info){
    int __result123__ = self->sline;
    return __result123__;
}

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info){
void* right_value170;
memset(&right_value170, 0, sizeof(void*));
    char* __result124__ = ((char*)(right_value170=__builtin_string(self->sname)));
    return __result124__;
}

_Bool sEqNode_terminated(){
    _Bool __result125__ = (_Bool)0;
    return __result125__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_149;
void* right_value171;
struct CVALUE* left_value_150;
struct sNode* right_node_151;
void* right_value172;
struct CVALUE* right_value_152;
void* right_value173;
struct CVALUE* come_value_153;
void* right_value174;
char* __dec_obj96;
void* right_value175;
struct sType* __dec_obj97;
memset(&left_node_149, 0, sizeof(struct sNode*));
memset(&right_value171, 0, sizeof(void*));
memset(&left_value_150, 0, sizeof(struct CVALUE*));
memset(&right_node_151, 0, sizeof(struct sNode*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value_152, 0, sizeof(struct CVALUE*));
memset(&right_value173, 0, sizeof(void*));
memset(&come_value_153, 0, sizeof(struct CVALUE*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
    left_node_149=self->mLeft;
    if(!left_node_149->compile(left_node_149->_protocol_obj,info)) {
        _Bool __result126__ = (_Bool)0;
        return __result126__;
    }
    left_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
    if(right_value171) { come_call_finalizer(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_151=self->mRight;
    if(!right_node_151->compile(right_node_151->_protocol_obj,info)) {
        _Bool __result127__ = (_Bool)0;
        return __result127__;
    }
    right_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=get_value_from_stack(-1,info))));
    if(right_value172) { come_call_finalizer(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1080))));
    if(right_value173) { come_call_finalizer(CVALUE_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj96=come_value_153->c_value;
    come_value_153->c_value=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s==%s",left_value_150->c_value,right_value_152->c_value))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0); }
    if(right_value174) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0); }
    __dec_obj97=come_value_153->type;
    come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(left_value_150->type))));
    if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value175) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0); }
    come_value_153->type->mHeap=(_Bool)0;
    come_value_153->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_153->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
    _Bool __result128__ = (_Bool)1;
    if(left_value_150) { come_call_finalizer(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_152) { come_call_finalizer(CVALUE_finalize,right_value_152, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_153) { come_call_finalizer(CVALUE_finalize,come_value_153, (void*)0, (void*)0, 0, 0, 0); }
    return __result128__;
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value176;
char* __dec_obj98;
void* right_value177;
struct sNode* __dec_obj99;
void* right_value178;
struct sNode* __dec_obj100;
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj98=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(info->sname))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0); }
    if(right_value176) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0); }
    __dec_obj99=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value177=sNodep_clone(left))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0); }
    if(right_value177) { right_value177 = come_decrement_ref_count(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0); } 
    __dec_obj100=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNodep_clone(right))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0); }
    if(right_value178) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0); } 
    struct sNotEqNode* __result129__ = self;
    if(self) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result129__;
}

_Bool sNotEqNode_terminated(){
    _Bool __result130__ = (_Bool)0;
    return __result130__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_154;
void* right_value179;
struct CVALUE* left_value_155;
struct sNode* right_node_156;
void* right_value180;
struct CVALUE* right_value_157;
void* right_value181;
struct CVALUE* come_value_158;
void* right_value182;
char* __dec_obj101;
void* right_value183;
struct sType* __dec_obj102;
memset(&left_node_154, 0, sizeof(struct sNode*));
memset(&right_value179, 0, sizeof(void*));
memset(&left_value_155, 0, sizeof(struct CVALUE*));
memset(&right_node_156, 0, sizeof(struct sNode*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value_157, 0, sizeof(struct CVALUE*));
memset(&right_value181, 0, sizeof(void*));
memset(&come_value_158, 0, sizeof(struct CVALUE*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    left_node_154=self->mLeft;
    if(!left_node_154->compile(left_node_154->_protocol_obj,info)) {
        _Bool __result131__ = (_Bool)0;
        return __result131__;
    }
    left_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value179=get_value_from_stack(-1,info))));
    if(right_value179) { come_call_finalizer(CVALUE_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_156=self->mRight;
    if(!right_node_156->compile(right_node_156->_protocol_obj,info)) {
        _Bool __result132__ = (_Bool)0;
        return __result132__;
    }
    right_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
    if(right_value180) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1141))));
    if(right_value181) { come_call_finalizer(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj101=come_value_158->c_value;
    come_value_158->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s!=%s",left_value_155->c_value,right_value_157->c_value))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0); }
    if(right_value182) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0); }
    __dec_obj102=come_value_158->type;
    come_value_158->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(left_value_155->type))));
    if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value183) { come_call_finalizer(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0); }
    come_value_158->type->mHeap=(_Bool)0;
    come_value_158->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_158->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
    _Bool __result133__ = (_Bool)1;
    if(left_value_155) { come_call_finalizer(CVALUE_finalize,left_value_155, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_157) { come_call_finalizer(CVALUE_finalize,right_value_157, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_158) { come_call_finalizer(CVALUE_finalize,come_value_158, (void*)0, (void*)0, 0, 0, 0); }
    return __result133__;
}

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info){
    int __result134__ = self->sline;
    return __result134__;
}

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info){
void* right_value184;
memset(&right_value184, 0, sizeof(void*));
    char* __result135__ = ((char*)(right_value184=__builtin_string(self->sname)));
    return __result135__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value185;
char* __dec_obj103;
void* right_value186;
struct sNode* __dec_obj104;
void* right_value187;
struct sNode* __dec_obj105;
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj103=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(info->sname))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0); }
    if(right_value185) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0); }
    __dec_obj104=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=sNodep_clone(left))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0); }
    if(right_value186) { right_value186 = come_decrement_ref_count(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0); } 
    __dec_obj105=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=sNodep_clone(right))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0); }
    if(right_value187) { right_value187 = come_decrement_ref_count(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0); } 
    struct sEq2Node* __result136__ = self;
    if(self) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result136__;
}

_Bool sEq2Node_terminated(){
    _Bool __result137__ = (_Bool)0;
    return __result137__;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_159;
void* right_value188;
struct CVALUE* left_value_160;
struct sNode* right_node_161;
void* right_value189;
struct CVALUE* right_value_162;
struct sType* type_163;
char* fun_name_164;
_Bool calling_fun_165;
void* right_value190;
struct CVALUE* come_value_166;
void* right_value191;
char* __dec_obj106;
void* right_value192;
struct sType* __dec_obj107;
memset(&left_node_159, 0, sizeof(struct sNode*));
memset(&right_value188, 0, sizeof(void*));
memset(&left_value_160, 0, sizeof(struct CVALUE*));
memset(&right_node_161, 0, sizeof(struct sNode*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value_162, 0, sizeof(struct CVALUE*));
memset(&type_163, 0, sizeof(struct sType*));
memset(&fun_name_164, 0, sizeof(char*));
memset(&calling_fun_165, 0, sizeof(_Bool));
memset(&right_value190, 0, sizeof(void*));
memset(&come_value_166, 0, sizeof(struct CVALUE*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
    left_node_159=self->mLeft;
    if(!left_node_159->compile(left_node_159->_protocol_obj,info)) {
        _Bool __result138__ = (_Bool)0;
        return __result138__;
    }
    left_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=get_value_from_stack(-1,info))));
    if(right_value188) { come_call_finalizer(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_161=self->mRight;
    if(!right_node_161->compile(right_node_161->_protocol_obj,info)) {
        _Bool __result139__ = (_Bool)0;
        return __result139__;
    }
    right_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=get_value_from_stack(-1,info))));
    if(right_value189) { come_call_finalizer(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_163=(struct sType*)come_increment_ref_count(left_value_160->type);
    fun_name_164="operator_equals";
    calling_fun_165=operator_overload_fun(type_163,fun_name_164,left_value_160,right_value_162,info);
    if(!calling_fun_165) {
        come_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1219))));
        if(right_value190) { come_call_finalizer(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj106=come_value_166->c_value;
        come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("%s==%s",left_value_160->c_value,right_value_162->c_value))));
        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0); }
        if(right_value191) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0); }
        __dec_obj107=come_value_166->type;
        come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(left_value_160->type))));
        if(__dec_obj107) { come_call_finalizer(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value192) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
        come_value_166->type->mHeap=(_Bool)0;
        come_value_166->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_166->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
        if(come_value_166) { come_call_finalizer(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result140__ = (_Bool)1;
    if(left_value_160) { come_call_finalizer(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_162) { come_call_finalizer(CVALUE_finalize,right_value_162, (void*)0, (void*)0, 0, 0, 0); }
    if(type_163) { come_call_finalizer(sType_finalize,type_163, (void*)0, (void*)0, 0, 0, 0); }
    return __result140__;
}

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info){
    int __result141__ = self->sline;
    return __result141__;
}

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info){
void* right_value193;
memset(&right_value193, 0, sizeof(void*));
    char* __result142__ = ((char*)(right_value193=__builtin_string(self->sname)));
    return __result142__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value194;
char* __dec_obj108;
void* right_value195;
struct sNode* __dec_obj109;
void* right_value196;
struct sNode* __dec_obj110;
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj108=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(info->sname))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0); }
    if(right_value194) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0); }
    __dec_obj109=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNodep_clone(left))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0); }
    if(right_value195) { right_value195 = come_decrement_ref_count(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0); } 
    __dec_obj110=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=sNodep_clone(right))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0); }
    if(right_value196) { right_value196 = come_decrement_ref_count(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0); } 
    struct sNotEq2Node* __result143__ = self;
    if(self) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result143__;
}

_Bool sNotEq2Node_terminated(){
    _Bool __result144__ = (_Bool)0;
    return __result144__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_167;
void* right_value197;
struct CVALUE* left_value_168;
struct sNode* right_node_169;
void* right_value198;
struct CVALUE* right_value_170;
struct sType* type_171;
char* fun_name_172;
_Bool calling_fun_173;
void* right_value199;
struct CVALUE* come_value_174;
void* right_value200;
char* __dec_obj111;
void* right_value201;
struct sType* __dec_obj112;
memset(&left_node_167, 0, sizeof(struct sNode*));
memset(&right_value197, 0, sizeof(void*));
memset(&left_value_168, 0, sizeof(struct CVALUE*));
memset(&right_node_169, 0, sizeof(struct sNode*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value_170, 0, sizeof(struct CVALUE*));
memset(&type_171, 0, sizeof(struct sType*));
memset(&fun_name_172, 0, sizeof(char*));
memset(&calling_fun_173, 0, sizeof(_Bool));
memset(&right_value199, 0, sizeof(void*));
memset(&come_value_174, 0, sizeof(struct CVALUE*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
    left_node_167=self->mLeft;
    if(!left_node_167->compile(left_node_167->_protocol_obj,info)) {
        _Bool __result145__ = (_Bool)0;
        return __result145__;
    }
    left_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value197=get_value_from_stack(-1,info))));
    if(right_value197) { come_call_finalizer(CVALUE_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_169=self->mRight;
    if(!right_node_169->compile(right_node_169->_protocol_obj,info)) {
        _Bool __result146__ = (_Bool)0;
        return __result146__;
    }
    right_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))));
    if(right_value198) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_171=(struct sType*)come_increment_ref_count(left_value_168->type);
    fun_name_172="operator_not_equals";
    calling_fun_173=operator_overload_fun(type_171,fun_name_172,left_value_168,right_value_170,info);
    if(!calling_fun_173) {
        come_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1297))));
        if(right_value199) { come_call_finalizer(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj111=come_value_174->c_value;
        come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value200=xsprintf("%s!=%s",left_value_168->c_value,right_value_170->c_value))));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0); }
        if(right_value200) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0); }
        __dec_obj112=come_value_174->type;
        come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(left_value_168->type))));
        if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value201) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0); }
        come_value_174->type->mHeap=(_Bool)0;
        come_value_174->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_174->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
        if(come_value_174) { come_call_finalizer(CVALUE_finalize,come_value_174, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result147__ = (_Bool)1;
    if(left_value_168) { come_call_finalizer(CVALUE_finalize,left_value_168, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_170) { come_call_finalizer(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0); }
    if(type_171) { come_call_finalizer(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0); }
    return __result147__;
}

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info){
    int __result148__ = self->sline;
    return __result148__;
}

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info){
void* right_value202;
memset(&right_value202, 0, sizeof(void*));
    char* __result149__ = ((char*)(right_value202=__builtin_string(self->sname)));
    return __result149__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value203;
char* __dec_obj113;
void* right_value204;
struct sNode* __dec_obj114;
void* right_value205;
struct sNode* __dec_obj115;
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj113=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(info->sname))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0); }
    if(right_value203) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0); }
    __dec_obj114=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNodep_clone(left))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0); }
    if(right_value204) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0); } 
    __dec_obj115=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNodep_clone(right))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0); }
    if(right_value205) { right_value205 = come_decrement_ref_count(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0); } 
    struct sAndNode* __result150__ = self;
    if(self) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result150__;
}

_Bool sAndNode_terminated(){
    _Bool __result151__ = (_Bool)0;
    return __result151__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_175;
void* right_value206;
struct CVALUE* left_value_176;
struct sNode* right_node_177;
void* right_value207;
struct CVALUE* right_value_178;
struct sType* type_179;
char* fun_name_180;
_Bool calling_fun_181;
void* right_value208;
struct CVALUE* come_value_182;
void* right_value209;
char* __dec_obj116;
void* right_value210;
struct sType* __dec_obj117;
memset(&left_node_175, 0, sizeof(struct sNode*));
memset(&right_value206, 0, sizeof(void*));
memset(&left_value_176, 0, sizeof(struct CVALUE*));
memset(&right_node_177, 0, sizeof(struct sNode*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value_178, 0, sizeof(struct CVALUE*));
memset(&type_179, 0, sizeof(struct sType*));
memset(&fun_name_180, 0, sizeof(char*));
memset(&calling_fun_181, 0, sizeof(_Bool));
memset(&right_value208, 0, sizeof(void*));
memset(&come_value_182, 0, sizeof(struct CVALUE*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
    left_node_175=self->mLeft;
    if(!left_node_175->compile(left_node_175->_protocol_obj,info)) {
        _Bool __result152__ = (_Bool)0;
        return __result152__;
    }
    left_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=get_value_from_stack(-1,info))));
    if(right_value206) { come_call_finalizer(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_177=self->mRight;
    if(!right_node_177->compile(right_node_177->_protocol_obj,info)) {
        _Bool __result153__ = (_Bool)0;
        return __result153__;
    }
    right_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=get_value_from_stack(-1,info))));
    if(right_value207) { come_call_finalizer(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_179=(struct sType*)come_increment_ref_count(left_value_176->type);
    fun_name_180="operator_and";
    calling_fun_181=operator_overload_fun(type_179,fun_name_180,left_value_176,right_value_178,info);
    if(!calling_fun_181) {
        come_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1375))));
        if(right_value208) { come_call_finalizer(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj116=come_value_182->c_value;
        come_value_182->c_value=(char*)come_increment_ref_count(((char*)(right_value209=xsprintf("%s&%s",left_value_176->c_value,right_value_178->c_value))));
        if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0); }
        if(right_value209) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0); }
        __dec_obj117=come_value_182->type;
        come_value_182->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_clone(left_value_176->type))));
        if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value210) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0); }
        come_value_182->type->mHeap=(_Bool)0;
        come_value_182->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_182->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
        if(come_value_182) { come_call_finalizer(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result154__ = (_Bool)1;
    if(left_value_176) { come_call_finalizer(CVALUE_finalize,left_value_176, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_178) { come_call_finalizer(CVALUE_finalize,right_value_178, (void*)0, (void*)0, 0, 0, 0); }
    if(type_179) { come_call_finalizer(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0); }
    return __result154__;
}

int sAndNode_sline(struct sAndNode* self, struct sInfo* info){
    int __result155__ = self->sline;
    return __result155__;
}

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info){
void* right_value211;
memset(&right_value211, 0, sizeof(void*));
    char* __result156__ = ((char*)(right_value211=__builtin_string(self->sname)));
    return __result156__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value212;
char* __dec_obj118;
void* right_value213;
struct sNode* __dec_obj119;
void* right_value214;
struct sNode* __dec_obj120;
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj118=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(info->sname))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0); }
    if(right_value212) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0); }
    __dec_obj119=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=sNodep_clone(left))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0); }
    if(right_value213) { right_value213 = come_decrement_ref_count(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0); } 
    __dec_obj120=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNodep_clone(right))));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0); }
    if(right_value214) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0); } 
    struct sXOrNode* __result157__ = self;
    if(self) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result157__;
}

_Bool sXOrNode_terminated(){
    _Bool __result158__ = (_Bool)0;
    return __result158__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_183;
void* right_value215;
struct CVALUE* left_value_184;
struct sNode* right_node_185;
void* right_value216;
struct CVALUE* right_value_186;
struct sType* type_187;
char* fun_name_188;
_Bool calling_fun_189;
void* right_value217;
struct CVALUE* come_value_190;
void* right_value218;
char* __dec_obj121;
void* right_value219;
struct sType* __dec_obj122;
memset(&left_node_183, 0, sizeof(struct sNode*));
memset(&right_value215, 0, sizeof(void*));
memset(&left_value_184, 0, sizeof(struct CVALUE*));
memset(&right_node_185, 0, sizeof(struct sNode*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value_186, 0, sizeof(struct CVALUE*));
memset(&type_187, 0, sizeof(struct sType*));
memset(&fun_name_188, 0, sizeof(char*));
memset(&calling_fun_189, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
memset(&come_value_190, 0, sizeof(struct CVALUE*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
    left_node_183=self->mLeft;
    if(!left_node_183->compile(left_node_183->_protocol_obj,info)) {
        _Bool __result159__ = (_Bool)0;
        return __result159__;
    }
    left_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value215=get_value_from_stack(-1,info))));
    if(right_value215) { come_call_finalizer(CVALUE_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_185=self->mRight;
    if(!right_node_185->compile(right_node_185->_protocol_obj,info)) {
        _Bool __result160__ = (_Bool)0;
        return __result160__;
    }
    right_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=get_value_from_stack(-1,info))));
    if(right_value216) { come_call_finalizer(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_187=(struct sType*)come_increment_ref_count(left_value_184->type);
    fun_name_188="operator_xor";
    calling_fun_189=operator_overload_fun(type_187,fun_name_188,left_value_184,right_value_186,info);
    if(!calling_fun_189) {
        come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1453))));
        if(right_value217) { come_call_finalizer(CVALUE_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj121=come_value_190->c_value;
        come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s^%s",left_value_184->c_value,right_value_186->c_value))));
        if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0); }
        if(right_value218) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0); }
        __dec_obj122=come_value_190->type;
        come_value_190->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(left_value_184->type))));
        if(__dec_obj122) { come_call_finalizer(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value219) { come_call_finalizer(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0); }
        come_value_190->type->mHeap=(_Bool)0;
        come_value_190->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_190->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
        if(come_value_190) { come_call_finalizer(CVALUE_finalize,come_value_190, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result161__ = (_Bool)1;
    if(left_value_184) { come_call_finalizer(CVALUE_finalize,left_value_184, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_186) { come_call_finalizer(CVALUE_finalize,right_value_186, (void*)0, (void*)0, 0, 0, 0); }
    if(type_187) { come_call_finalizer(sType_finalize,type_187, (void*)0, (void*)0, 0, 0, 0); }
    return __result161__;
}

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info){
    int __result162__ = self->sline;
    return __result162__;
}

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info){
void* right_value220;
memset(&right_value220, 0, sizeof(void*));
    char* __result163__ = ((char*)(right_value220=__builtin_string(self->sname)));
    return __result163__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value221;
char* __dec_obj123;
void* right_value222;
struct sNode* __dec_obj124;
void* right_value223;
struct sNode* __dec_obj125;
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj123=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(info->sname))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0); }
    if(right_value221) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0); }
    __dec_obj124=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=sNodep_clone(left))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0); }
    if(right_value222) { right_value222 = come_decrement_ref_count(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0); } 
    __dec_obj125=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=sNodep_clone(right))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0); }
    if(right_value223) { right_value223 = come_decrement_ref_count(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0); } 
    struct sOrNode* __result164__ = self;
    if(self) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result164__;
}

_Bool sOrNode_terminated(){
    _Bool __result165__ = (_Bool)0;
    return __result165__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_191;
void* right_value224;
struct CVALUE* left_value_192;
struct sNode* right_node_193;
void* right_value225;
struct CVALUE* right_value_194;
struct sType* type_195;
char* fun_name_196;
_Bool calling_fun_197;
void* right_value226;
struct CVALUE* come_value_198;
void* right_value227;
char* __dec_obj126;
void* right_value228;
struct sType* __dec_obj127;
memset(&left_node_191, 0, sizeof(struct sNode*));
memset(&right_value224, 0, sizeof(void*));
memset(&left_value_192, 0, sizeof(struct CVALUE*));
memset(&right_node_193, 0, sizeof(struct sNode*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value_194, 0, sizeof(struct CVALUE*));
memset(&type_195, 0, sizeof(struct sType*));
memset(&fun_name_196, 0, sizeof(char*));
memset(&calling_fun_197, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
memset(&come_value_198, 0, sizeof(struct CVALUE*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
    left_node_191=self->mLeft;
    if(!left_node_191->compile(left_node_191->_protocol_obj,info)) {
        _Bool __result166__ = (_Bool)0;
        return __result166__;
    }
    left_value_192=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=get_value_from_stack(-1,info))));
    if(right_value224) { come_call_finalizer(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_193=self->mRight;
    if(!right_node_193->compile(right_node_193->_protocol_obj,info)) {
        _Bool __result167__ = (_Bool)0;
        return __result167__;
    }
    right_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value225=get_value_from_stack(-1,info))));
    if(right_value225) { come_call_finalizer(CVALUE_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_195=(struct sType*)come_increment_ref_count(left_value_192->type);
    fun_name_196="operator_or";
    calling_fun_197=operator_overload_fun(type_195,fun_name_196,left_value_192,right_value_194,info);
    if(!calling_fun_197) {
        come_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value226=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1530))));
        if(right_value226) { come_call_finalizer(CVALUE_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj126=come_value_198->c_value;
        come_value_198->c_value=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("%s|%s",left_value_192->c_value,right_value_194->c_value))));
        if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0); }
        if(right_value227) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0); }
        __dec_obj127=come_value_198->type;
        come_value_198->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(left_value_192->type))));
        if(__dec_obj127) { come_call_finalizer(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value228) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0); }
        come_value_198->type->mHeap=(_Bool)0;
        come_value_198->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_198->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_198));
        if(come_value_198) { come_call_finalizer(CVALUE_finalize,come_value_198, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result168__ = (_Bool)1;
    if(left_value_192) { come_call_finalizer(CVALUE_finalize,left_value_192, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_194) { come_call_finalizer(CVALUE_finalize,right_value_194, (void*)0, (void*)0, 0, 0, 0); }
    if(type_195) { come_call_finalizer(sType_finalize,type_195, (void*)0, (void*)0, 0, 0, 0); }
    return __result168__;
}

int sOrNode_sline(struct sOrNode* self, struct sInfo* info){
    int __result169__ = self->sline;
    return __result169__;
}

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info){
void* right_value229;
memset(&right_value229, 0, sizeof(void*));
    char* __result170__ = ((char*)(right_value229=__builtin_string(self->sname)));
    return __result170__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value230;
char* __dec_obj128;
void* right_value231;
struct sNode* __dec_obj129;
void* right_value232;
struct sNode* __dec_obj130;
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj128=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string(info->sname))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0); }
    if(right_value230) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0); }
    __dec_obj129=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value231=sNodep_clone(left))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0); }
    if(right_value231) { right_value231 = come_decrement_ref_count(right_value231, ((struct sNode*)right_value231)->finalize, ((struct sNode*)right_value231)->_protocol_obj, 1, 0); } 
    __dec_obj130=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=sNodep_clone(right))));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0); }
    if(right_value232) { right_value232 = come_decrement_ref_count(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0); } 
    struct sAndAndNode* __result171__ = self;
    if(self) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result171__;
}

_Bool sAndAndNode_terminated(){
    _Bool __result172__ = (_Bool)0;
    return __result172__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_199;
void* right_value233;
struct CVALUE* left_value_200;
struct sNode* right_node_201;
void* right_value234;
struct CVALUE* right_value_202;
struct sType* type_203;
char* fun_name_204;
_Bool calling_fun_205;
void* right_value235;
struct CVALUE* come_value_206;
void* right_value236;
char* __dec_obj131;
void* right_value237;
struct sType* __dec_obj132;
memset(&left_node_199, 0, sizeof(struct sNode*));
memset(&right_value233, 0, sizeof(void*));
memset(&left_value_200, 0, sizeof(struct CVALUE*));
memset(&right_node_201, 0, sizeof(struct sNode*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value_202, 0, sizeof(struct CVALUE*));
memset(&type_203, 0, sizeof(struct sType*));
memset(&fun_name_204, 0, sizeof(char*));
memset(&calling_fun_205, 0, sizeof(_Bool));
memset(&right_value235, 0, sizeof(void*));
memset(&come_value_206, 0, sizeof(struct CVALUE*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
    left_node_199=self->mLeft;
    if(!left_node_199->compile(left_node_199->_protocol_obj,info)) {
        _Bool __result173__ = (_Bool)0;
        return __result173__;
    }
    left_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))));
    if(right_value233) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_201=self->mRight;
    if(!right_node_201->compile(right_node_201->_protocol_obj,info)) {
        _Bool __result174__ = (_Bool)0;
        return __result174__;
    }
    right_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))));
    if(right_value234) { come_call_finalizer(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_203=(struct sType*)come_increment_ref_count(left_value_200->type);
    fun_name_204="operator_andand";
    calling_fun_205=operator_overload_fun(type_203,fun_name_204,left_value_200,right_value_202,info);
    if(!calling_fun_205) {
        come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1607))));
        if(right_value235) { come_call_finalizer(CVALUE_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj131=come_value_206->c_value;
        come_value_206->c_value=(char*)come_increment_ref_count(((char*)(right_value236=xsprintf("%s&&%s",left_value_200->c_value,right_value_202->c_value))));
        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0); }
        if(right_value236) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0); }
        __dec_obj132=come_value_206->type;
        come_value_206->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(left_value_200->type))));
        if(__dec_obj132) { come_call_finalizer(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value237) { come_call_finalizer(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0); }
        come_value_206->type->mHeap=(_Bool)0;
        come_value_206->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_206->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
        if(come_value_206) { come_call_finalizer(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result175__ = (_Bool)1;
    if(left_value_200) { come_call_finalizer(CVALUE_finalize,left_value_200, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_202) { come_call_finalizer(CVALUE_finalize,right_value_202, (void*)0, (void*)0, 0, 0, 0); }
    if(type_203) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0); }
    return __result175__;
}

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info){
    int __result176__ = self->sline;
    return __result176__;
}

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info){
void* right_value238;
memset(&right_value238, 0, sizeof(void*));
    char* __result177__ = ((char*)(right_value238=__builtin_string(self->sname)));
    return __result177__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value239;
char* __dec_obj133;
void* right_value240;
struct sNode* __dec_obj134;
void* right_value241;
struct sNode* __dec_obj135;
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj133=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(info->sname))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0); }
    if(right_value239) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0); }
    __dec_obj134=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=sNodep_clone(left))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0); }
    if(right_value240) { right_value240 = come_decrement_ref_count(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0); } 
    __dec_obj135=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=sNodep_clone(right))));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0); }
    if(right_value241) { right_value241 = come_decrement_ref_count(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0); } 
    struct sOrOrNode* __result178__ = self;
    if(self) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result178__;
}

_Bool sOrOrNode_terminated(){
    _Bool __result179__ = (_Bool)0;
    return __result179__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_207;
void* right_value242;
struct CVALUE* left_value_208;
struct sNode* right_node_209;
void* right_value243;
struct CVALUE* right_value_210;
struct sType* type_211;
char* fun_name_212;
_Bool calling_fun_213;
void* right_value244;
struct CVALUE* come_value_214;
void* right_value245;
char* __dec_obj136;
void* right_value246;
struct sType* __dec_obj137;
memset(&left_node_207, 0, sizeof(struct sNode*));
memset(&right_value242, 0, sizeof(void*));
memset(&left_value_208, 0, sizeof(struct CVALUE*));
memset(&right_node_209, 0, sizeof(struct sNode*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value_210, 0, sizeof(struct CVALUE*));
memset(&type_211, 0, sizeof(struct sType*));
memset(&fun_name_212, 0, sizeof(char*));
memset(&calling_fun_213, 0, sizeof(_Bool));
memset(&right_value244, 0, sizeof(void*));
memset(&come_value_214, 0, sizeof(struct CVALUE*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
    left_node_207=self->mLeft;
    if(!left_node_207->compile(left_node_207->_protocol_obj,info)) {
        _Bool __result180__ = (_Bool)0;
        return __result180__;
    }
    left_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=get_value_from_stack(-1,info))));
    if(right_value242) { come_call_finalizer(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_209=self->mRight;
    if(!right_node_209->compile(right_node_209->_protocol_obj,info)) {
        _Bool __result181__ = (_Bool)0;
        return __result181__;
    }
    right_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=get_value_from_stack(-1,info))));
    if(right_value243) { come_call_finalizer(CVALUE_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_211=(struct sType*)come_increment_ref_count(left_value_208->type);
    fun_name_212="operator_oror";
    calling_fun_213=operator_overload_fun(type_211,fun_name_212,left_value_208,right_value_210,info);
    if(!calling_fun_213) {
        come_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1684))));
        if(right_value244) { come_call_finalizer(CVALUE_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj136=come_value_214->c_value;
        come_value_214->c_value=(char*)come_increment_ref_count(((char*)(right_value245=xsprintf("%s||%s",left_value_208->c_value,right_value_210->c_value))));
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0); }
        if(right_value245) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0); }
        __dec_obj137=come_value_214->type;
        come_value_214->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_clone(left_value_208->type))));
        if(__dec_obj137) { come_call_finalizer(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value246) { come_call_finalizer(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0); }
        come_value_214->type->mHeap=(_Bool)0;
        come_value_214->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_214->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_214));
        if(come_value_214) { come_call_finalizer(CVALUE_finalize,come_value_214, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result182__ = (_Bool)1;
    if(left_value_208) { come_call_finalizer(CVALUE_finalize,left_value_208, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_210) { come_call_finalizer(CVALUE_finalize,right_value_210, (void*)0, (void*)0, 0, 0, 0); }
    if(type_211) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0); }
    return __result182__;
}

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info){
    int __result183__ = self->sline;
    return __result183__;
}

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info){
void* right_value247;
memset(&right_value247, 0, sizeof(void*));
    char* __result184__ = ((char*)(right_value247=__builtin_string(self->sname)));
    return __result184__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* right_value248;
char* __dec_obj138;
void* right_value249;
struct sNode* __dec_obj139;
void* right_value250;
struct sNode* __dec_obj140;
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj138=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string(info->sname))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0); }
    if(right_value248) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0); }
    __dec_obj139=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=sNodep_clone(left))));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0); }
    if(right_value249) { right_value249 = come_decrement_ref_count(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0); } 
    __dec_obj140=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value250=sNodep_clone(right))));
    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0); }
    if(right_value250) { right_value250 = come_decrement_ref_count(right_value250, ((struct sNode*)right_value250)->finalize, ((struct sNode*)right_value250)->_protocol_obj, 1, 0); } 
    struct sCommaNode* __result185__ = self;
    if(self) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(left) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1); } 
    if(right) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1); } 
    return __result185__;
}

_Bool sCommaNode_terminated(){
    _Bool __result186__ = (_Bool)0;
    return __result186__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_215;
void* right_value251;
struct CVALUE* left_value_216;
struct sNode* right_node_217;
void* right_value252;
struct CVALUE* right_value_218;
void* right_value253;
struct CVALUE* come_value_219;
void* right_value254;
char* __dec_obj141;
void* right_value255;
struct sType* __dec_obj142;
memset(&left_node_215, 0, sizeof(struct sNode*));
memset(&right_value251, 0, sizeof(void*));
memset(&left_value_216, 0, sizeof(struct CVALUE*));
memset(&right_node_217, 0, sizeof(struct sNode*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value_218, 0, sizeof(struct CVALUE*));
memset(&right_value253, 0, sizeof(void*));
memset(&come_value_219, 0, sizeof(struct CVALUE*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
    left_node_215=self->mLeft;
    if(!left_node_215->compile(left_node_215->_protocol_obj,info)) {
        _Bool __result187__ = (_Bool)0;
        return __result187__;
    }
    left_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=get_value_from_stack(-1,info))));
    if(right_value251) { come_call_finalizer(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    right_node_217=self->mRight;
    if(!right_node_217->compile(right_node_217->_protocol_obj,info)) {
        _Bool __result188__ = (_Bool)0;
        return __result188__;
    }
    right_value_218=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))));
    if(right_value252) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_219=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value253=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1756))));
    if(right_value253) { come_call_finalizer(CVALUE_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj141=come_value_219->c_value;
    come_value_219->c_value=(char*)come_increment_ref_count(((char*)(right_value254=xsprintf("%s,%s",left_value_216->c_value,right_value_218->c_value))));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0); }
    if(right_value254) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0); }
    __dec_obj142=come_value_219->type;
    come_value_219->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_clone(left_value_216->type))));
    if(__dec_obj142) { come_call_finalizer(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value255) { come_call_finalizer(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0); }
    come_value_219->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_219->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_219));
    _Bool __result189__ = (_Bool)1;
    if(left_value_216) { come_call_finalizer(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value_218) { come_call_finalizer(CVALUE_finalize,right_value_218, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_219) { come_call_finalizer(CVALUE_finalize,come_value_219, (void*)0, (void*)0, 0, 0, 0); }
    return __result189__;
}

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info){
    int __result190__ = self->sline;
    return __result190__;
}

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info){
void* right_value256;
memset(&right_value256, 0, sizeof(void*));
    char* __result191__ = ((char*)(right_value256=__builtin_string(self->sname)));
    return __result191__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* right_value257;
char* __dec_obj143;
void* right_value258;
struct sNode* __dec_obj144;
void* right_value259;
struct sNode* __dec_obj145;
void* right_value260;
struct sNode* __dec_obj146;
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj143=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string(info->sname))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0); }
    if(right_value257) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0); }
    __dec_obj144=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=sNodep_clone(value1))));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0); }
    if(right_value258) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0); } 
    __dec_obj145=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value259=sNodep_clone(value2))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0); }
    if(right_value259) { right_value259 = come_decrement_ref_count(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0); } 
    __dec_obj146=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value260=sNodep_clone(value3))));
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0); }
    if(right_value260) { right_value260 = come_decrement_ref_count(right_value260, ((struct sNode*)right_value260)->finalize, ((struct sNode*)right_value260)->_protocol_obj, 1, 0); } 
    struct sConditionalNode* __result192__ = self;
    if(self) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value1) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1); } 
    if(value2) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1); } 
    if(value3) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1); } 
    return __result192__;
}

_Bool sConditionalNode_terminated(){
    _Bool __result193__ = (_Bool)0;
    return __result193__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
struct sNode* value1_220;
void* right_value261;
struct CVALUE* value1_value_221;
struct sNode* value2_222;
void* right_value262;
struct CVALUE* value2_value_223;
struct sNode* value3_224;
void* right_value263;
struct CVALUE* value3_value_225;
void* right_value264;
struct CVALUE* come_value_226;
void* right_value265;
char* __dec_obj147;
void* right_value266;
struct sType* __dec_obj148;
memset(&value1_220, 0, sizeof(struct sNode*));
memset(&right_value261, 0, sizeof(void*));
memset(&value1_value_221, 0, sizeof(struct CVALUE*));
memset(&value2_222, 0, sizeof(struct sNode*));
memset(&right_value262, 0, sizeof(void*));
memset(&value2_value_223, 0, sizeof(struct CVALUE*));
memset(&value3_224, 0, sizeof(struct sNode*));
memset(&right_value263, 0, sizeof(void*));
memset(&value3_value_225, 0, sizeof(struct CVALUE*));
memset(&right_value264, 0, sizeof(void*));
memset(&come_value_226, 0, sizeof(struct CVALUE*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
    value1_220=self->mValue1;
    if(!value1_220->compile(value1_220->_protocol_obj,info)) {
        _Bool __result194__ = (_Bool)0;
        return __result194__;
    }
    value1_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))));
    if(right_value261) { come_call_finalizer(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    value2_222=self->mValue2;
    if(!value2_222->compile(value2_222->_protocol_obj,info)) {
        _Bool __result195__ = (_Bool)0;
        return __result195__;
    }
    value2_value_223=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))));
    if(right_value262) { come_call_finalizer(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    value3_224=self->mValue3;
    if(!value3_224->compile(value3_224->_protocol_obj,info)) {
        _Bool __result196__ = (_Bool)0;
        return __result196__;
    }
    value3_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value263=get_value_from_stack(-1,info))));
    if(right_value263) { come_call_finalizer(CVALUE_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_226=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1837))));
    if(right_value264) { come_call_finalizer(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj147=come_value_226->c_value;
    come_value_226->c_value=(char*)come_increment_ref_count(((char*)(right_value265=xsprintf("%s?%s:%s",value1_value_221->c_value,value2_value_223->c_value,value3_value_225->c_value))));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0); }
    if(right_value265) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0); }
    __dec_obj148=come_value_226->type;
    come_value_226->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(value1_value_221->type))));
    if(__dec_obj148) { come_call_finalizer(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value266) { come_call_finalizer(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0); }
    come_value_226->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_226->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_226));
    _Bool __result197__ = (_Bool)1;
    if(value1_value_221) { come_call_finalizer(CVALUE_finalize,value1_value_221, (void*)0, (void*)0, 0, 0, 0); }
    if(value2_value_223) { come_call_finalizer(CVALUE_finalize,value2_value_223, (void*)0, (void*)0, 0, 0, 0); }
    if(value3_value_225) { come_call_finalizer(CVALUE_finalize,value3_value_225, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_226) { come_call_finalizer(CVALUE_finalize,come_value_226, (void*)0, (void*)0, 0, 0, 0); }
    return __result197__;
}

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info){
    int __result198__ = self->sline;
    return __result198__;
}

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info){
void* right_value267;
memset(&right_value267, 0, sizeof(void*));
    char* __result199__ = ((char*)(right_value267=__builtin_string(self->sname)));
    return __result199__;
}

struct sNode* mult_exp(struct sInfo* info){
void* right_value268;
struct sNode* node_227;
void* right_value269;
struct sNode* right_228;
void* right_value270;
void* right_value271;
struct sNode* _inf_value2;
struct sMultNode* _inf_obj_value2;
void* right_value276;
void* right_value277;
struct sNode* right_230;
void* right_value278;
void* right_value279;
struct sNode* _inf_value3;
struct sDivNode* _inf_obj_value3;
void* right_value284;
void* right_value285;
struct sNode* right_232;
void* right_value286;
void* right_value287;
struct sNode* _inf_value4;
struct sModNode* _inf_obj_value4;
void* right_value292;
memset(&right_value268, 0, sizeof(void*));
memset(&node_227, 0, sizeof(struct sNode*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_228, 0, sizeof(struct sNode*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_230, 0, sizeof(struct sNode*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_232, 0, sizeof(struct sNode*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
    node_227=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=expression_node_v99(info))));
    if(right_value268) { right_value268 = come_decrement_ref_count(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(!node_227->terminated(node_227->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_228=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=mult_exp(info))));
            if(right_value269) { right_value269 = come_decrement_ref_count(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0); } 
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1873);
            _inf_obj_value2=come_increment_ref_count(((struct sMultNode*)(right_value271=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value270=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1873)))),(struct sNode*)come_increment_ref_count(node_227),(struct sNode*)come_increment_ref_count(right_228),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=sMultNode_finalize;
            _inf_value2->clone=sMultNode_clone;
            _inf_value2->compile=sMultNode_compile;
            _inf_value2->sline=sMultNode_sline;
            _inf_value2->sname=sMultNode_sname;
            _inf_value2->terminated=sMultNode_terminated;
            struct sNode* __result202__ = ((struct sNode*)(right_value276=_inf_value2));
            if(right_228) { right_228 = come_decrement_ref_count(right_228, ((struct sNode*)right_228)->finalize, ((struct sNode*)right_228)->_protocol_obj, 0, 0); } 
            if(right_value270) { come_call_finalizer(sMultNode_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value271) { come_call_finalizer(sMultNode_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0); }
            return __result202__;
        }
        else if(*info->p==47&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_230=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=mult_exp(info))));
            if(right_value277) { right_value277 = come_decrement_ref_count(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0); } 
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1881);
            _inf_obj_value3=come_increment_ref_count(((struct sDivNode*)(right_value279=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value278=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1881)))),(struct sNode*)come_increment_ref_count(node_227),(struct sNode*)come_increment_ref_count(right_230),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=sDivNode_finalize;
            _inf_value3->clone=sDivNode_clone;
            _inf_value3->compile=sDivNode_compile;
            _inf_value3->sline=sDivNode_sline;
            _inf_value3->sname=sDivNode_sname;
            _inf_value3->terminated=sDivNode_terminated;
            struct sNode* __result205__ = ((struct sNode*)(right_value284=_inf_value3));
            if(right_230) { right_230 = come_decrement_ref_count(right_230, ((struct sNode*)right_230)->finalize, ((struct sNode*)right_230)->_protocol_obj, 0, 0); } 
            if(right_value278) { come_call_finalizer(sDivNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value279) { come_call_finalizer(sDivNode_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0); }
            return __result205__;
        }
        else if(*info->p==37&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_232=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=expression_node_v99(info))));
            if(right_value285) { right_value285 = come_decrement_ref_count(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0); } 
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1889);
            _inf_obj_value4=come_increment_ref_count(((struct sModNode*)(right_value287=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value286=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1889)))),(struct sNode*)come_increment_ref_count(node_227),(struct sNode*)come_increment_ref_count(right_232),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=sModNode_finalize;
            _inf_value4->clone=sModNode_clone;
            _inf_value4->compile=sModNode_compile;
            _inf_value4->sline=sModNode_sline;
            _inf_value4->sname=sModNode_sname;
            _inf_value4->terminated=sModNode_terminated;
            struct sNode* __result208__ = ((struct sNode*)(right_value292=_inf_value4));
            if(right_232) { right_232 = come_decrement_ref_count(right_232, ((struct sNode*)right_232)->finalize, ((struct sNode*)right_232)->_protocol_obj, 0, 0); } 
            if(right_value286) { come_call_finalizer(sModNode_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value287) { come_call_finalizer(sModNode_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0); }
            return __result208__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result209__ = node_227;
    if(node_227) { node_227 = come_decrement_ref_count(node_227, ((struct sNode*)node_227)->finalize, ((struct sNode*)node_227)->_protocol_obj, 0, 1); } 
    return __result209__;
}

static void sMultNode_finalize(struct sMultNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* right_value272;
struct sMultNode* result_229;
void* right_value273;
struct sNode* __dec_obj149;
void* right_value274;
struct sNode* __dec_obj150;
void* right_value275;
char* __dec_obj151;
memset(&right_value272, 0, sizeof(void*));
memset(&result_229, 0, sizeof(struct sMultNode*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sMultNode* __result200__ = (void*)0;
                    return __result200__;
                }
                result_229=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value272=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1875))));
                if(right_value272) { come_call_finalizer(sMultNode_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj149=result_229->mLeft;
                    result_229->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value273=sNodep_clone(self->mLeft))));
                    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0); }
                    if(right_value273) { right_value273 = come_decrement_ref_count(right_value273, ((struct sNode*)right_value273)->finalize, ((struct sNode*)right_value273)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj150=result_229->mRight;
                    result_229->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=sNodep_clone(self->mRight))));
                    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0); }
                    if(right_value274) { right_value274 = come_decrement_ref_count(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_229->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj151=result_229->sname;
                    result_229->sname=(char*)come_increment_ref_count(((char*)(right_value275=string_clone(self->sname))));
                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0); }
                    if(right_value275) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0); }
                }
                struct sMultNode* __result201__ = result_229;
                if(result_229) { come_call_finalizer(sMultNode_finalize,result_229, (void*)0, (void*)0, 0, 0, 1); }
                return __result201__;
}

static void sDivNode_finalize(struct sDivNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* right_value280;
struct sDivNode* result_231;
void* right_value281;
struct sNode* __dec_obj152;
void* right_value282;
struct sNode* __dec_obj153;
void* right_value283;
char* __dec_obj154;
memset(&right_value280, 0, sizeof(void*));
memset(&result_231, 0, sizeof(struct sDivNode*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sDivNode* __result203__ = (void*)0;
                    return __result203__;
                }
                result_231=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value280=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1883))));
                if(right_value280) { come_call_finalizer(sDivNode_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj152=result_231->mLeft;
                    result_231->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=sNodep_clone(self->mLeft))));
                    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0); }
                    if(right_value281) { right_value281 = come_decrement_ref_count(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj153=result_231->mRight;
                    result_231->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=sNodep_clone(self->mRight))));
                    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0); }
                    if(right_value282) { right_value282 = come_decrement_ref_count(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_231->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj154=result_231->sname;
                    result_231->sname=(char*)come_increment_ref_count(((char*)(right_value283=string_clone(self->sname))));
                    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0); }
                    if(right_value283) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0); }
                }
                struct sDivNode* __result204__ = result_231;
                if(result_231) { come_call_finalizer(sDivNode_finalize,result_231, (void*)0, (void*)0, 0, 0, 1); }
                return __result204__;
}

static void sModNode_finalize(struct sModNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* right_value288;
struct sModNode* result_233;
void* right_value289;
struct sNode* __dec_obj155;
void* right_value290;
struct sNode* __dec_obj156;
void* right_value291;
char* __dec_obj157;
memset(&right_value288, 0, sizeof(void*));
memset(&result_233, 0, sizeof(struct sModNode*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sModNode* __result206__ = (void*)0;
                    return __result206__;
                }
                result_233=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value288=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1891))));
                if(right_value288) { come_call_finalizer(sModNode_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj155=result_233->mLeft;
                    result_233->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value289=sNodep_clone(self->mLeft))));
                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0); }
                    if(right_value289) { right_value289 = come_decrement_ref_count(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj156=result_233->mRight;
                    result_233->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=sNodep_clone(self->mRight))));
                    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0); }
                    if(right_value290) { right_value290 = come_decrement_ref_count(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_233->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj157=result_233->sname;
                    result_233->sname=(char*)come_increment_ref_count(((char*)(right_value291=string_clone(self->sname))));
                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0); }
                    if(right_value291) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0); }
                }
                struct sModNode* __result207__ = result_233;
                if(result_233) { come_call_finalizer(sModNode_finalize,result_233, (void*)0, (void*)0, 0, 0, 1); }
                return __result207__;
}

struct sNode* add_exp(struct sInfo* info){
void* right_value293;
struct sNode* node_234;
void* right_value294;
struct sNode* right_235;
void* right_value295;
void* right_value296;
struct sNode* _inf_value5;
struct sAddNode* _inf_obj_value5;
void* right_value301;
void* right_value302;
struct sNode* right_237;
void* right_value303;
void* right_value304;
struct sNode* _inf_value6;
struct sSubNode* _inf_obj_value6;
void* right_value309;
memset(&right_value293, 0, sizeof(void*));
memset(&node_234, 0, sizeof(struct sNode*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_235, 0, sizeof(struct sNode*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_237, 0, sizeof(struct sNode*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
    node_234=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=mult_exp(info))));
    if(right_value293) { right_value293 = come_decrement_ref_count(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            skip_spaces_and_lf(info);
            right_235=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=add_exp(info))));
            if(right_value294) { right_value294 = come_decrement_ref_count(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0); } 
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1915);
            _inf_obj_value5=come_increment_ref_count(((struct sAddNode*)(right_value296=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value295=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1915)))),(struct sNode*)come_increment_ref_count(node_234),(struct sNode*)come_increment_ref_count(right_235),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=sAddNode_finalize;
            _inf_value5->clone=sAddNode_clone;
            _inf_value5->compile=sAddNode_compile;
            _inf_value5->sline=sAddNode_sline;
            _inf_value5->sname=sAddNode_sname;
            _inf_value5->terminated=sAddNode_terminated;
            struct sNode* __result212__ = ((struct sNode*)(right_value301=_inf_value5));
            if(right_235) { right_235 = come_decrement_ref_count(right_235, ((struct sNode*)right_235)->finalize, ((struct sNode*)right_235)->_protocol_obj, 0, 0); } 
            if(right_value295) { come_call_finalizer(sAddNode_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value296) { come_call_finalizer(sAddNode_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0); }
            return __result212__;
        }
        else if(*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            right_237=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=add_exp(info))));
            if(right_value302) { right_value302 = come_decrement_ref_count(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0); } 
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1924);
            _inf_obj_value6=come_increment_ref_count(((struct sSubNode*)(right_value304=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value303=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1924)))),(struct sNode*)come_increment_ref_count(node_234),(struct sNode*)come_increment_ref_count(right_237),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=sSubNode_finalize;
            _inf_value6->clone=sSubNode_clone;
            _inf_value6->compile=sSubNode_compile;
            _inf_value6->sline=sSubNode_sline;
            _inf_value6->sname=sSubNode_sname;
            _inf_value6->terminated=sSubNode_terminated;
            struct sNode* __result215__ = ((struct sNode*)(right_value309=_inf_value6));
            if(right_237) { right_237 = come_decrement_ref_count(right_237, ((struct sNode*)right_237)->finalize, ((struct sNode*)right_237)->_protocol_obj, 0, 0); } 
            if(right_value303) { come_call_finalizer(sSubNode_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value304) { come_call_finalizer(sSubNode_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0); }
            return __result215__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result216__ = node_234;
    if(node_234) { node_234 = come_decrement_ref_count(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 1); } 
    return __result216__;
}

static void sAddNode_finalize(struct sAddNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* right_value297;
struct sAddNode* result_236;
void* right_value298;
struct sNode* __dec_obj158;
void* right_value299;
struct sNode* __dec_obj159;
void* right_value300;
char* __dec_obj160;
memset(&right_value297, 0, sizeof(void*));
memset(&result_236, 0, sizeof(struct sAddNode*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sAddNode* __result210__ = (void*)0;
                    return __result210__;
                }
                result_236=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value297=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1917))));
                if(right_value297) { come_call_finalizer(sAddNode_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj158=result_236->mLeft;
                    result_236->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=sNodep_clone(self->mLeft))));
                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0); }
                    if(right_value298) { right_value298 = come_decrement_ref_count(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj159=result_236->mRight;
                    result_236->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=sNodep_clone(self->mRight))));
                    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0); }
                    if(right_value299) { right_value299 = come_decrement_ref_count(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_236->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj160=result_236->sname;
                    result_236->sname=(char*)come_increment_ref_count(((char*)(right_value300=string_clone(self->sname))));
                    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0); }
                    if(right_value300) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0); }
                }
                struct sAddNode* __result211__ = result_236;
                if(result_236) { come_call_finalizer(sAddNode_finalize,result_236, (void*)0, (void*)0, 0, 0, 1); }
                return __result211__;
}

static void sSubNode_finalize(struct sSubNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* right_value305;
struct sSubNode* result_238;
void* right_value306;
struct sNode* __dec_obj161;
void* right_value307;
struct sNode* __dec_obj162;
void* right_value308;
char* __dec_obj163;
memset(&right_value305, 0, sizeof(void*));
memset(&result_238, 0, sizeof(struct sSubNode*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sSubNode* __result213__ = (void*)0;
                    return __result213__;
                }
                result_238=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value305=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1926))));
                if(right_value305) { come_call_finalizer(sSubNode_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj161=result_238->mLeft;
                    result_238->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=sNodep_clone(self->mLeft))));
                    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0); }
                    if(right_value306) { right_value306 = come_decrement_ref_count(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj162=result_238->mRight;
                    result_238->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNodep_clone(self->mRight))));
                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0); }
                    if(right_value307) { right_value307 = come_decrement_ref_count(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_238->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj163=result_238->sname;
                    result_238->sname=(char*)come_increment_ref_count(((char*)(right_value308=string_clone(self->sname))));
                    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0); }
                    if(right_value308) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0); }
                }
                struct sSubNode* __result214__ = result_238;
                if(result_238) { come_call_finalizer(sSubNode_finalize,result_238, (void*)0, (void*)0, 0, 0, 1); }
                return __result214__;
}

struct sNode* shift_exp(struct sInfo* info){
void* right_value310;
struct sNode* node_239;
void* right_value311;
struct sNode* right_240;
void* right_value312;
void* right_value313;
struct sNode* _inf_value7;
struct sLShiftNode* _inf_obj_value7;
void* right_value318;
void* right_value319;
struct sNode* right_242;
void* right_value320;
void* right_value321;
struct sNode* _inf_value8;
struct sRShiftNode* _inf_obj_value8;
void* right_value326;
memset(&right_value310, 0, sizeof(void*));
memset(&node_239, 0, sizeof(struct sNode*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_240, 0, sizeof(struct sNode*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_242, 0, sizeof(struct sNode*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_239=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=add_exp(info))));
    if(right_value310) { right_value310 = come_decrement_ref_count(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=shift_exp(info))));
            if(right_value311) { right_value311 = come_decrement_ref_count(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0); } 
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1951);
            _inf_obj_value7=come_increment_ref_count(((struct sLShiftNode*)(right_value313=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value312=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1951)))),(struct sNode*)come_increment_ref_count(node_239),(struct sNode*)come_increment_ref_count(right_240),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=sLShiftNode_finalize;
            _inf_value7->clone=sLShiftNode_clone;
            _inf_value7->compile=sLShiftNode_compile;
            _inf_value7->sline=sLShiftNode_sline;
            _inf_value7->sname=sLShiftNode_sname;
            _inf_value7->terminated=sLShiftNode_terminated;
            struct sNode* __result219__ = ((struct sNode*)(right_value318=_inf_value7));
            if(right_240) { right_240 = come_decrement_ref_count(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0); } 
            if(right_value312) { come_call_finalizer(sLShiftNode_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value313) { come_call_finalizer(sLShiftNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0); }
            return __result219__;
        }
        else if(*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=shift_exp(info))));
            if(right_value319) { right_value319 = come_decrement_ref_count(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0); } 
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1959);
            _inf_obj_value8=come_increment_ref_count(((struct sRShiftNode*)(right_value321=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value320=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1959)))),(struct sNode*)come_increment_ref_count(node_239),(struct sNode*)come_increment_ref_count(right_242),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=sRShiftNode_finalize;
            _inf_value8->clone=sRShiftNode_clone;
            _inf_value8->compile=sRShiftNode_compile;
            _inf_value8->sline=sRShiftNode_sline;
            _inf_value8->sname=sRShiftNode_sname;
            _inf_value8->terminated=sRShiftNode_terminated;
            struct sNode* __result222__ = ((struct sNode*)(right_value326=_inf_value8));
            if(right_242) { right_242 = come_decrement_ref_count(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0); } 
            if(right_value320) { come_call_finalizer(sRShiftNode_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value321) { come_call_finalizer(sRShiftNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0); }
            return __result222__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result223__ = node_239;
    if(node_239) { node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 1); } 
    return __result223__;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* right_value314;
struct sLShiftNode* result_241;
void* right_value315;
struct sNode* __dec_obj164;
void* right_value316;
struct sNode* __dec_obj165;
void* right_value317;
char* __dec_obj166;
memset(&right_value314, 0, sizeof(void*));
memset(&result_241, 0, sizeof(struct sLShiftNode*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sLShiftNode* __result217__ = (void*)0;
                    return __result217__;
                }
                result_241=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value314=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1953))));
                if(right_value314) { come_call_finalizer(sLShiftNode_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj164=result_241->mLeft;
                    result_241->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNodep_clone(self->mLeft))));
                    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0); }
                    if(right_value315) { right_value315 = come_decrement_ref_count(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj165=result_241->mRight;
                    result_241->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=sNodep_clone(self->mRight))));
                    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0); }
                    if(right_value316) { right_value316 = come_decrement_ref_count(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_241->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj166=result_241->sname;
                    result_241->sname=(char*)come_increment_ref_count(((char*)(right_value317=string_clone(self->sname))));
                    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0); }
                    if(right_value317) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0); }
                }
                struct sLShiftNode* __result218__ = result_241;
                if(result_241) { come_call_finalizer(sLShiftNode_finalize,result_241, (void*)0, (void*)0, 0, 0, 1); }
                return __result218__;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* right_value322;
struct sRShiftNode* result_243;
void* right_value323;
struct sNode* __dec_obj167;
void* right_value324;
struct sNode* __dec_obj168;
void* right_value325;
char* __dec_obj169;
memset(&right_value322, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct sRShiftNode*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sRShiftNode* __result220__ = (void*)0;
                    return __result220__;
                }
                result_243=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value322=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1961))));
                if(right_value322) { come_call_finalizer(sRShiftNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj167=result_243->mLeft;
                    result_243->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=sNodep_clone(self->mLeft))));
                    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0); }
                    if(right_value323) { right_value323 = come_decrement_ref_count(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj168=result_243->mRight;
                    result_243->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=sNodep_clone(self->mRight))));
                    if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0); }
                    if(right_value324) { right_value324 = come_decrement_ref_count(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_243->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj169=result_243->sname;
                    result_243->sname=(char*)come_increment_ref_count(((char*)(right_value325=string_clone(self->sname))));
                    if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0); }
                    if(right_value325) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0); }
                }
                struct sRShiftNode* __result221__ = result_243;
                if(result_243) { come_call_finalizer(sRShiftNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 1); }
                return __result221__;
}

struct sNode* comparison_exp(struct sInfo* info){
void* right_value327;
struct sNode* node_244;
void* right_value328;
struct sNode* right_245;
void* right_value329;
void* right_value330;
struct sNode* _inf_value9;
struct sGtEqNode* _inf_obj_value9;
void* right_value335;
void* right_value336;
struct sNode* right_247;
void* right_value337;
void* right_value338;
struct sNode* _inf_value10;
struct sLtEqNode* _inf_obj_value10;
void* right_value343;
void* right_value344;
struct sNode* right_249;
void* right_value345;
void* right_value346;
struct sNode* _inf_value11;
struct sGtNode* _inf_obj_value11;
void* right_value351;
void* right_value352;
struct sNode* right_251;
void* right_value353;
void* right_value354;
struct sNode* _inf_value12;
struct sLtNode* _inf_obj_value12;
void* right_value359;
memset(&right_value327, 0, sizeof(void*));
memset(&node_244, 0, sizeof(struct sNode*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_245, 0, sizeof(struct sNode*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_247, 0, sizeof(struct sNode*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_249, 0, sizeof(struct sNode*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_251, 0, sizeof(struct sNode*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=shift_exp(info))));
    if(right_value327) { right_value327 = come_decrement_ref_count(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=shift_exp(info))));
            if(right_value328) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0); } 
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1986);
            _inf_obj_value9=come_increment_ref_count(((struct sGtEqNode*)(right_value330=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value329=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1986)))),(struct sNode*)come_increment_ref_count(node_244),(struct sNode*)come_increment_ref_count(right_245),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=sGtEqNode_finalize;
            _inf_value9->clone=sGtEqNode_clone;
            _inf_value9->compile=sGtEqNode_compile;
            _inf_value9->sline=sGtEqNode_sline;
            _inf_value9->sname=sGtEqNode_sname;
            _inf_value9->terminated=sGtEqNode_terminated;
            struct sNode* __result226__ = ((struct sNode*)(right_value335=_inf_value9));
            if(right_245) { right_245 = come_decrement_ref_count(right_245, ((struct sNode*)right_245)->finalize, ((struct sNode*)right_245)->_protocol_obj, 0, 0); } 
            if(right_value329) { come_call_finalizer(sGtEqNode_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value330) { come_call_finalizer(sGtEqNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0); }
            return __result226__;
        }
        else if(*info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=shift_exp(info))));
            if(right_value336) { right_value336 = come_decrement_ref_count(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0); } 
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1994);
            _inf_obj_value10=come_increment_ref_count(((struct sLtEqNode*)(right_value338=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value337=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1994)))),(struct sNode*)come_increment_ref_count(node_244),(struct sNode*)come_increment_ref_count(right_247),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=sLtEqNode_finalize;
            _inf_value10->clone=sLtEqNode_clone;
            _inf_value10->compile=sLtEqNode_compile;
            _inf_value10->sline=sLtEqNode_sline;
            _inf_value10->sname=sLtEqNode_sname;
            _inf_value10->terminated=sLtEqNode_terminated;
            struct sNode* __result229__ = ((struct sNode*)(right_value343=_inf_value10));
            if(right_247) { right_247 = come_decrement_ref_count(right_247, ((struct sNode*)right_247)->finalize, ((struct sNode*)right_247)->_protocol_obj, 0, 0); } 
            if(right_value337) { come_call_finalizer(sLtEqNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value338) { come_call_finalizer(sLtEqNode_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0); }
            return __result229__;
        }
        else if(*info->p==62&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            right_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=shift_exp(info))));
            if(right_value344) { right_value344 = come_decrement_ref_count(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0); } 
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2002);
            _inf_obj_value11=come_increment_ref_count(((struct sGtNode*)(right_value346=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value345=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2002)))),(struct sNode*)come_increment_ref_count(node_244),(struct sNode*)come_increment_ref_count(right_249),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=sGtNode_finalize;
            _inf_value11->clone=sGtNode_clone;
            _inf_value11->compile=sGtNode_compile;
            _inf_value11->sline=sGtNode_sline;
            _inf_value11->sname=sGtNode_sname;
            _inf_value11->terminated=sGtNode_terminated;
            struct sNode* __result232__ = ((struct sNode*)(right_value351=_inf_value11));
            if(right_249) { right_249 = come_decrement_ref_count(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0); } 
            if(right_value345) { come_call_finalizer(sGtNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value346) { come_call_finalizer(sGtNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0); }
            return __result232__;
        }
        else if(*info->p==60&&*(info->p+1)!=60) {
            info->p++;
            skip_spaces_and_lf(info);
            right_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=shift_exp(info))));
            if(right_value352) { right_value352 = come_decrement_ref_count(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0); } 
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2010);
            _inf_obj_value12=come_increment_ref_count(((struct sLtNode*)(right_value354=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value353=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2010)))),(struct sNode*)come_increment_ref_count(node_244),(struct sNode*)come_increment_ref_count(right_251),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=sLtNode_finalize;
            _inf_value12->clone=sLtNode_clone;
            _inf_value12->compile=sLtNode_compile;
            _inf_value12->sline=sLtNode_sline;
            _inf_value12->sname=sLtNode_sname;
            _inf_value12->terminated=sLtNode_terminated;
            struct sNode* __result235__ = ((struct sNode*)(right_value359=_inf_value12));
            if(right_251) { right_251 = come_decrement_ref_count(right_251, ((struct sNode*)right_251)->finalize, ((struct sNode*)right_251)->_protocol_obj, 0, 0); } 
            if(right_value353) { come_call_finalizer(sLtNode_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value354) { come_call_finalizer(sLtNode_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0); }
            return __result235__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result236__ = node_244;
    if(node_244) { node_244 = come_decrement_ref_count(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 1); } 
    return __result236__;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* right_value331;
struct sGtEqNode* result_246;
void* right_value332;
struct sNode* __dec_obj170;
void* right_value333;
struct sNode* __dec_obj171;
void* right_value334;
char* __dec_obj172;
memset(&right_value331, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct sGtEqNode*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sGtEqNode* __result224__ = (void*)0;
                    return __result224__;
                }
                result_246=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value331=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1988))));
                if(right_value331) { come_call_finalizer(sGtEqNode_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj170=result_246->mLeft;
                    result_246->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=sNodep_clone(self->mLeft))));
                    if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0); }
                    if(right_value332) { right_value332 = come_decrement_ref_count(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj171=result_246->mRight;
                    result_246->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=sNodep_clone(self->mRight))));
                    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0); }
                    if(right_value333) { right_value333 = come_decrement_ref_count(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_246->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj172=result_246->sname;
                    result_246->sname=(char*)come_increment_ref_count(((char*)(right_value334=string_clone(self->sname))));
                    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0); }
                    if(right_value334) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0); }
                }
                struct sGtEqNode* __result225__ = result_246;
                if(result_246) { come_call_finalizer(sGtEqNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 1); }
                return __result225__;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* right_value339;
struct sLtEqNode* result_248;
void* right_value340;
struct sNode* __dec_obj173;
void* right_value341;
struct sNode* __dec_obj174;
void* right_value342;
char* __dec_obj175;
memset(&right_value339, 0, sizeof(void*));
memset(&result_248, 0, sizeof(struct sLtEqNode*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sLtEqNode* __result227__ = (void*)0;
                    return __result227__;
                }
                result_248=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value339=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1996))));
                if(right_value339) { come_call_finalizer(sLtEqNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj173=result_248->mLeft;
                    result_248->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=sNodep_clone(self->mLeft))));
                    if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0); }
                    if(right_value340) { right_value340 = come_decrement_ref_count(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj174=result_248->mRight;
                    result_248->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=sNodep_clone(self->mRight))));
                    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0); }
                    if(right_value341) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_248->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj175=result_248->sname;
                    result_248->sname=(char*)come_increment_ref_count(((char*)(right_value342=string_clone(self->sname))));
                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0); }
                    if(right_value342) { right_value342 = come_decrement_ref_count(right_value342, (void*)0, (void*)0, 1, 0); }
                }
                struct sLtEqNode* __result228__ = result_248;
                if(result_248) { come_call_finalizer(sLtEqNode_finalize,result_248, (void*)0, (void*)0, 0, 0, 1); }
                return __result228__;
}

static void sGtNode_finalize(struct sGtNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* right_value347;
struct sGtNode* result_250;
void* right_value348;
struct sNode* __dec_obj176;
void* right_value349;
struct sNode* __dec_obj177;
void* right_value350;
char* __dec_obj178;
memset(&right_value347, 0, sizeof(void*));
memset(&result_250, 0, sizeof(struct sGtNode*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sGtNode* __result230__ = (void*)0;
                    return __result230__;
                }
                result_250=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value347=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2004))));
                if(right_value347) { come_call_finalizer(sGtNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj176=result_250->mLeft;
                    result_250->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=sNodep_clone(self->mLeft))));
                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0); }
                    if(right_value348) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj177=result_250->mRight;
                    result_250->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=sNodep_clone(self->mRight))));
                    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0); }
                    if(right_value349) { right_value349 = come_decrement_ref_count(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_250->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj178=result_250->sname;
                    result_250->sname=(char*)come_increment_ref_count(((char*)(right_value350=string_clone(self->sname))));
                    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0); }
                    if(right_value350) { right_value350 = come_decrement_ref_count(right_value350, (void*)0, (void*)0, 1, 0); }
                }
                struct sGtNode* __result231__ = result_250;
                if(result_250) { come_call_finalizer(sGtNode_finalize,result_250, (void*)0, (void*)0, 0, 0, 1); }
                return __result231__;
}

static void sLtNode_finalize(struct sLtNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* right_value355;
struct sLtNode* result_252;
void* right_value356;
struct sNode* __dec_obj179;
void* right_value357;
struct sNode* __dec_obj180;
void* right_value358;
char* __dec_obj181;
memset(&right_value355, 0, sizeof(void*));
memset(&result_252, 0, sizeof(struct sLtNode*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sLtNode* __result233__ = (void*)0;
                    return __result233__;
                }
                result_252=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value355=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2012))));
                if(right_value355) { come_call_finalizer(sLtNode_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj179=result_252->mLeft;
                    result_252->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=sNodep_clone(self->mLeft))));
                    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0); }
                    if(right_value356) { right_value356 = come_decrement_ref_count(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj180=result_252->mRight;
                    result_252->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=sNodep_clone(self->mRight))));
                    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0); }
                    if(right_value357) { right_value357 = come_decrement_ref_count(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_252->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj181=result_252->sname;
                    result_252->sname=(char*)come_increment_ref_count(((char*)(right_value358=string_clone(self->sname))));
                    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0); }
                    if(right_value358) { right_value358 = come_decrement_ref_count(right_value358, (void*)0, (void*)0, 1, 0); }
                }
                struct sLtNode* __result234__ = result_252;
                if(result_252) { come_call_finalizer(sLtNode_finalize,result_252, (void*)0, (void*)0, 0, 0, 1); }
                return __result234__;
}

struct sNode* eq_exp(struct sInfo* info){
void* right_value360;
struct sNode* node_253;
void* right_value361;
struct sNode* right_254;
void* right_value362;
void* right_value363;
struct sNode* _inf_value13;
struct sEq2Node* _inf_obj_value13;
void* right_value368;
void* right_value369;
struct sNode* right_256;
void* right_value370;
void* right_value371;
struct sNode* _inf_value14;
struct sEqNode* _inf_obj_value14;
void* right_value376;
void* right_value377;
struct sNode* right_258;
void* right_value378;
void* right_value379;
struct sNode* _inf_value15;
struct sNotEq2Node* _inf_obj_value15;
void* right_value384;
void* right_value385;
struct sNode* right_260;
void* right_value386;
void* right_value387;
struct sNode* _inf_value16;
struct sNotEqNode* _inf_obj_value16;
void* right_value392;
memset(&right_value360, 0, sizeof(void*));
memset(&node_253, 0, sizeof(struct sNode*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_254, 0, sizeof(struct sNode*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_256, 0, sizeof(struct sNode*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_258, 0, sizeof(struct sNode*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_260, 0, sizeof(struct sNode*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=comparison_exp(info))));
    if(right_value360) { right_value360 = come_decrement_ref_count(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=eq_exp(info))));
            if(right_value361) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0); } 
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2037);
            _inf_obj_value13=come_increment_ref_count(((struct sEq2Node*)(right_value363=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value362=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2037)))),(struct sNode*)come_increment_ref_count(node_253),(struct sNode*)come_increment_ref_count(right_254),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=sEq2Node_finalize;
            _inf_value13->clone=sEq2Node_clone;
            _inf_value13->compile=sEq2Node_compile;
            _inf_value13->sline=sEq2Node_sline;
            _inf_value13->sname=sEq2Node_sname;
            _inf_value13->terminated=sEq2Node_terminated;
            struct sNode* __result239__ = ((struct sNode*)(right_value368=_inf_value13));
            if(right_254) { right_254 = come_decrement_ref_count(right_254, ((struct sNode*)right_254)->finalize, ((struct sNode*)right_254)->_protocol_obj, 0, 0); } 
            if(right_value362) { come_call_finalizer(sEq2Node_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value363) { come_call_finalizer(sEq2Node_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0); }
            return __result239__;
        }
        else if(*info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=eq_exp(info))));
            if(right_value369) { right_value369 = come_decrement_ref_count(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0); } 
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2045);
            _inf_obj_value14=come_increment_ref_count(((struct sEqNode*)(right_value371=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value370=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2045)))),(struct sNode*)come_increment_ref_count(node_253),(struct sNode*)come_increment_ref_count(right_256),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=sEqNode_finalize;
            _inf_value14->clone=sEqNode_clone;
            _inf_value14->compile=sEqNode_compile;
            _inf_value14->sline=sEqNode_sline;
            _inf_value14->sname=sEqNode_sname;
            _inf_value14->terminated=sEqNode_terminated;
            struct sNode* __result242__ = ((struct sNode*)(right_value376=_inf_value14));
            if(right_256) { right_256 = come_decrement_ref_count(right_256, ((struct sNode*)right_256)->finalize, ((struct sNode*)right_256)->_protocol_obj, 0, 0); } 
            if(right_value370) { come_call_finalizer(sEqNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value371) { come_call_finalizer(sEqNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0); }
            return __result242__;
        }
        else if(*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=eq_exp(info))));
            if(right_value377) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0); } 
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2053);
            _inf_obj_value15=come_increment_ref_count(((struct sNotEq2Node*)(right_value379=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value378=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2053)))),(struct sNode*)come_increment_ref_count(node_253),(struct sNode*)come_increment_ref_count(right_258),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=sNotEq2Node_finalize;
            _inf_value15->clone=sNotEq2Node_clone;
            _inf_value15->compile=sNotEq2Node_compile;
            _inf_value15->sline=sNotEq2Node_sline;
            _inf_value15->sname=sNotEq2Node_sname;
            _inf_value15->terminated=sNotEq2Node_terminated;
            struct sNode* __result245__ = ((struct sNode*)(right_value384=_inf_value15));
            if(right_258) { right_258 = come_decrement_ref_count(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0); } 
            if(right_value378) { come_call_finalizer(sNotEq2Node_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value379) { come_call_finalizer(sNotEq2Node_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0); }
            return __result245__;
        }
        else if(*info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=eq_exp(info))));
            if(right_value385) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0); } 
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2061);
            _inf_obj_value16=come_increment_ref_count(((struct sNotEqNode*)(right_value387=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value386=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2061)))),(struct sNode*)come_increment_ref_count(node_253),(struct sNode*)come_increment_ref_count(right_260),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=sNotEqNode_finalize;
            _inf_value16->clone=sNotEqNode_clone;
            _inf_value16->compile=sNotEqNode_compile;
            _inf_value16->sline=sNotEqNode_sline;
            _inf_value16->sname=sNotEqNode_sname;
            _inf_value16->terminated=sNotEqNode_terminated;
            struct sNode* __result248__ = ((struct sNode*)(right_value392=_inf_value16));
            if(right_260) { right_260 = come_decrement_ref_count(right_260, ((struct sNode*)right_260)->finalize, ((struct sNode*)right_260)->_protocol_obj, 0, 0); } 
            if(right_value386) { come_call_finalizer(sNotEqNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value387) { come_call_finalizer(sNotEqNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0); }
            return __result248__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result249__ = node_253;
    if(node_253) { node_253 = come_decrement_ref_count(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 1); } 
    return __result249__;
}

static void sEq2Node_finalize(struct sEq2Node* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* right_value364;
struct sEq2Node* result_255;
void* right_value365;
struct sNode* __dec_obj182;
void* right_value366;
struct sNode* __dec_obj183;
void* right_value367;
char* __dec_obj184;
memset(&right_value364, 0, sizeof(void*));
memset(&result_255, 0, sizeof(struct sEq2Node*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sEq2Node* __result237__ = (void*)0;
                    return __result237__;
                }
                result_255=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value364=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2039))));
                if(right_value364) { come_call_finalizer(sEq2Node_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj182=result_255->mLeft;
                    result_255->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=sNodep_clone(self->mLeft))));
                    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0); }
                    if(right_value365) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj183=result_255->mRight;
                    result_255->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=sNodep_clone(self->mRight))));
                    if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0); }
                    if(right_value366) { right_value366 = come_decrement_ref_count(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_255->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj184=result_255->sname;
                    result_255->sname=(char*)come_increment_ref_count(((char*)(right_value367=string_clone(self->sname))));
                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0); }
                    if(right_value367) { right_value367 = come_decrement_ref_count(right_value367, (void*)0, (void*)0, 1, 0); }
                }
                struct sEq2Node* __result238__ = result_255;
                if(result_255) { come_call_finalizer(sEq2Node_finalize,result_255, (void*)0, (void*)0, 0, 0, 1); }
                return __result238__;
}

static void sEqNode_finalize(struct sEqNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* right_value372;
struct sEqNode* result_257;
void* right_value373;
struct sNode* __dec_obj185;
void* right_value374;
struct sNode* __dec_obj186;
void* right_value375;
char* __dec_obj187;
memset(&right_value372, 0, sizeof(void*));
memset(&result_257, 0, sizeof(struct sEqNode*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sEqNode* __result240__ = (void*)0;
                    return __result240__;
                }
                result_257=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value372=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2047))));
                if(right_value372) { come_call_finalizer(sEqNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj185=result_257->mLeft;
                    result_257->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=sNodep_clone(self->mLeft))));
                    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0); }
                    if(right_value373) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj186=result_257->mRight;
                    result_257->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=sNodep_clone(self->mRight))));
                    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0); }
                    if(right_value374) { right_value374 = come_decrement_ref_count(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_257->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj187=result_257->sname;
                    result_257->sname=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(self->sname))));
                    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0); }
                    if(right_value375) { right_value375 = come_decrement_ref_count(right_value375, (void*)0, (void*)0, 1, 0); }
                }
                struct sEqNode* __result241__ = result_257;
                if(result_257) { come_call_finalizer(sEqNode_finalize,result_257, (void*)0, (void*)0, 0, 0, 1); }
                return __result241__;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* right_value380;
struct sNotEq2Node* result_259;
void* right_value381;
struct sNode* __dec_obj188;
void* right_value382;
struct sNode* __dec_obj189;
void* right_value383;
char* __dec_obj190;
memset(&right_value380, 0, sizeof(void*));
memset(&result_259, 0, sizeof(struct sNotEq2Node*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sNotEq2Node* __result243__ = (void*)0;
                    return __result243__;
                }
                result_259=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value380=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2055))));
                if(right_value380) { come_call_finalizer(sNotEq2Node_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj188=result_259->mLeft;
                    result_259->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=sNodep_clone(self->mLeft))));
                    if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0); }
                    if(right_value381) { right_value381 = come_decrement_ref_count(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj189=result_259->mRight;
                    result_259->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=sNodep_clone(self->mRight))));
                    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0); }
                    if(right_value382) { right_value382 = come_decrement_ref_count(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_259->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj190=result_259->sname;
                    result_259->sname=(char*)come_increment_ref_count(((char*)(right_value383=string_clone(self->sname))));
                    if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0); }
                    if(right_value383) { right_value383 = come_decrement_ref_count(right_value383, (void*)0, (void*)0, 1, 0); }
                }
                struct sNotEq2Node* __result244__ = result_259;
                if(result_259) { come_call_finalizer(sNotEq2Node_finalize,result_259, (void*)0, (void*)0, 0, 0, 1); }
                return __result244__;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* right_value388;
struct sNotEqNode* result_261;
void* right_value389;
struct sNode* __dec_obj191;
void* right_value390;
struct sNode* __dec_obj192;
void* right_value391;
char* __dec_obj193;
memset(&right_value388, 0, sizeof(void*));
memset(&result_261, 0, sizeof(struct sNotEqNode*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sNotEqNode* __result246__ = (void*)0;
                    return __result246__;
                }
                result_261=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value388=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2063))));
                if(right_value388) { come_call_finalizer(sNotEqNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj191=result_261->mLeft;
                    result_261->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value389=sNodep_clone(self->mLeft))));
                    if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0); }
                    if(right_value389) { right_value389 = come_decrement_ref_count(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj192=result_261->mRight;
                    result_261->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=sNodep_clone(self->mRight))));
                    if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0); }
                    if(right_value390) { right_value390 = come_decrement_ref_count(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_261->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj193=result_261->sname;
                    result_261->sname=(char*)come_increment_ref_count(((char*)(right_value391=string_clone(self->sname))));
                    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0); }
                    if(right_value391) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0); }
                }
                struct sNotEqNode* __result247__ = result_261;
                if(result_261) { come_call_finalizer(sNotEqNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 1); }
                return __result247__;
}

struct sNode* and_exp(struct sInfo* info){
void* right_value393;
struct sNode* node_262;
void* right_value394;
struct sNode* right_263;
void* right_value395;
void* right_value396;
struct sNode* _inf_value17;
struct sAndNode* _inf_obj_value17;
void* right_value401;
memset(&right_value393, 0, sizeof(void*));
memset(&node_262, 0, sizeof(struct sNode*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_263, 0, sizeof(struct sNode*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=eq_exp(info))));
    if(right_value393) { right_value393 = come_decrement_ref_count(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=and_exp(info))));
            if(right_value394) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0); } 
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2088);
            _inf_obj_value17=come_increment_ref_count(((struct sAndNode*)(right_value396=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value395=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2088)))),(struct sNode*)come_increment_ref_count(node_262),(struct sNode*)come_increment_ref_count(right_263),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=sAndNode_finalize;
            _inf_value17->clone=sAndNode_clone;
            _inf_value17->compile=sAndNode_compile;
            _inf_value17->sline=sAndNode_sline;
            _inf_value17->sname=sAndNode_sname;
            _inf_value17->terminated=sAndNode_terminated;
            struct sNode* __result252__ = ((struct sNode*)(right_value401=_inf_value17));
            if(right_263) { right_263 = come_decrement_ref_count(right_263, ((struct sNode*)right_263)->finalize, ((struct sNode*)right_263)->_protocol_obj, 0, 0); } 
            if(right_value395) { come_call_finalizer(sAndNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value396) { come_call_finalizer(sAndNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0); }
            return __result252__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result253__ = node_262;
    if(node_262) { node_262 = come_decrement_ref_count(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0, 1); } 
    return __result253__;
}

static void sAndNode_finalize(struct sAndNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* right_value397;
struct sAndNode* result_264;
void* right_value398;
struct sNode* __dec_obj194;
void* right_value399;
struct sNode* __dec_obj195;
void* right_value400;
char* __dec_obj196;
memset(&right_value397, 0, sizeof(void*));
memset(&result_264, 0, sizeof(struct sAndNode*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sAndNode* __result250__ = (void*)0;
                    return __result250__;
                }
                result_264=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value397=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2090))));
                if(right_value397) { come_call_finalizer(sAndNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj194=result_264->mLeft;
                    result_264->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNodep_clone(self->mLeft))));
                    if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0); }
                    if(right_value398) { right_value398 = come_decrement_ref_count(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj195=result_264->mRight;
                    result_264->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=sNodep_clone(self->mRight))));
                    if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0); }
                    if(right_value399) { right_value399 = come_decrement_ref_count(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_264->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj196=result_264->sname;
                    result_264->sname=(char*)come_increment_ref_count(((char*)(right_value400=string_clone(self->sname))));
                    if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0); }
                    if(right_value400) { right_value400 = come_decrement_ref_count(right_value400, (void*)0, (void*)0, 1, 0); }
                }
                struct sAndNode* __result251__ = result_264;
                if(result_264) { come_call_finalizer(sAndNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 1); }
                return __result251__;
}

struct sNode* xor_exp(struct sInfo* info){
void* right_value402;
struct sNode* node_265;
void* right_value403;
struct sNode* right_266;
void* right_value404;
void* right_value405;
struct sNode* _inf_value18;
struct sXOrNode* _inf_obj_value18;
void* right_value410;
memset(&right_value402, 0, sizeof(void*));
memset(&node_265, 0, sizeof(struct sNode*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_266, 0, sizeof(struct sNode*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=and_exp(info))));
    if(right_value402) { right_value402 = come_decrement_ref_count(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==94&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=xor_exp(info))));
            if(right_value403) { right_value403 = come_decrement_ref_count(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0); } 
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2115);
            _inf_obj_value18=come_increment_ref_count(((struct sXOrNode*)(right_value405=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value404=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2115)))),(struct sNode*)come_increment_ref_count(node_265),(struct sNode*)come_increment_ref_count(right_266),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=sXOrNode_finalize;
            _inf_value18->clone=sXOrNode_clone;
            _inf_value18->compile=sXOrNode_compile;
            _inf_value18->sline=sXOrNode_sline;
            _inf_value18->sname=sXOrNode_sname;
            _inf_value18->terminated=sXOrNode_terminated;
            struct sNode* __result256__ = ((struct sNode*)(right_value410=_inf_value18));
            if(right_266) { right_266 = come_decrement_ref_count(right_266, ((struct sNode*)right_266)->finalize, ((struct sNode*)right_266)->_protocol_obj, 0, 0); } 
            if(right_value404) { come_call_finalizer(sXOrNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value405) { come_call_finalizer(sXOrNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0); }
            return __result256__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result257__ = node_265;
    if(node_265) { node_265 = come_decrement_ref_count(node_265, ((struct sNode*)node_265)->finalize, ((struct sNode*)node_265)->_protocol_obj, 0, 1); } 
    return __result257__;
}

static void sXOrNode_finalize(struct sXOrNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* right_value406;
struct sXOrNode* result_267;
void* right_value407;
struct sNode* __dec_obj197;
void* right_value408;
struct sNode* __dec_obj198;
void* right_value409;
char* __dec_obj199;
memset(&right_value406, 0, sizeof(void*));
memset(&result_267, 0, sizeof(struct sXOrNode*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sXOrNode* __result254__ = (void*)0;
                    return __result254__;
                }
                result_267=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value406=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2117))));
                if(right_value406) { come_call_finalizer(sXOrNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj197=result_267->mLeft;
                    result_267->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNodep_clone(self->mLeft))));
                    if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0); }
                    if(right_value407) { right_value407 = come_decrement_ref_count(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj198=result_267->mRight;
                    result_267->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=sNodep_clone(self->mRight))));
                    if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0); }
                    if(right_value408) { right_value408 = come_decrement_ref_count(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_267->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj199=result_267->sname;
                    result_267->sname=(char*)come_increment_ref_count(((char*)(right_value409=string_clone(self->sname))));
                    if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0); }
                    if(right_value409) { right_value409 = come_decrement_ref_count(right_value409, (void*)0, (void*)0, 1, 0); }
                }
                struct sXOrNode* __result255__ = result_267;
                if(result_267) { come_call_finalizer(sXOrNode_finalize,result_267, (void*)0, (void*)0, 0, 0, 1); }
                return __result255__;
}

struct sNode* or_exp(struct sInfo* info){
void* right_value411;
struct sNode* node_268;
void* right_value412;
struct sNode* right_269;
void* right_value413;
void* right_value414;
struct sNode* _inf_value19;
struct sOrNode* _inf_obj_value19;
void* right_value419;
memset(&right_value411, 0, sizeof(void*));
memset(&node_268, 0, sizeof(struct sNode*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_269, 0, sizeof(struct sNode*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=xor_exp(info))));
    if(right_value411) { right_value411 = come_decrement_ref_count(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            skip_spaces_and_lf(info);
            right_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=or_exp(info))));
            if(right_value412) { right_value412 = come_decrement_ref_count(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0); } 
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2142);
            _inf_obj_value19=come_increment_ref_count(((struct sOrNode*)(right_value414=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value413=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2142)))),(struct sNode*)come_increment_ref_count(node_268),(struct sNode*)come_increment_ref_count(right_269),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=sOrNode_finalize;
            _inf_value19->clone=sOrNode_clone;
            _inf_value19->compile=sOrNode_compile;
            _inf_value19->sline=sOrNode_sline;
            _inf_value19->sname=sOrNode_sname;
            _inf_value19->terminated=sOrNode_terminated;
            struct sNode* __result260__ = ((struct sNode*)(right_value419=_inf_value19));
            if(right_269) { right_269 = come_decrement_ref_count(right_269, ((struct sNode*)right_269)->finalize, ((struct sNode*)right_269)->_protocol_obj, 0, 0); } 
            if(right_value413) { come_call_finalizer(sOrNode_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value414) { come_call_finalizer(sOrNode_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0); }
            return __result260__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result261__ = node_268;
    if(node_268) { node_268 = come_decrement_ref_count(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0, 1); } 
    return __result261__;
}

static void sOrNode_finalize(struct sOrNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* right_value415;
struct sOrNode* result_270;
void* right_value416;
struct sNode* __dec_obj200;
void* right_value417;
struct sNode* __dec_obj201;
void* right_value418;
char* __dec_obj202;
memset(&right_value415, 0, sizeof(void*));
memset(&result_270, 0, sizeof(struct sOrNode*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sOrNode* __result258__ = (void*)0;
                    return __result258__;
                }
                result_270=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value415=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2144))));
                if(right_value415) { come_call_finalizer(sOrNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj200=result_270->mLeft;
                    result_270->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=sNodep_clone(self->mLeft))));
                    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0); }
                    if(right_value416) { right_value416 = come_decrement_ref_count(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj201=result_270->mRight;
                    result_270->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=sNodep_clone(self->mRight))));
                    if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0); }
                    if(right_value417) { right_value417 = come_decrement_ref_count(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_270->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj202=result_270->sname;
                    result_270->sname=(char*)come_increment_ref_count(((char*)(right_value418=string_clone(self->sname))));
                    if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0,0); }
                    if(right_value418) { right_value418 = come_decrement_ref_count(right_value418, (void*)0, (void*)0, 1, 0); }
                }
                struct sOrNode* __result259__ = result_270;
                if(result_270) { come_call_finalizer(sOrNode_finalize,result_270, (void*)0, (void*)0, 0, 0, 1); }
                return __result259__;
}

struct sNode* andand_exp(struct sInfo* info){
void* right_value420;
struct sNode* node_271;
void* right_value421;
struct sNode* right_272;
void* right_value422;
void* right_value423;
struct sNode* _inf_value20;
struct sAndAndNode* _inf_obj_value20;
void* right_value428;
memset(&right_value420, 0, sizeof(void*));
memset(&node_271, 0, sizeof(struct sNode*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_272, 0, sizeof(struct sNode*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value420=or_exp(info))));
    if(right_value420) { right_value420 = come_decrement_ref_count(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=andand_exp(info))));
            if(right_value421) { right_value421 = come_decrement_ref_count(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0); } 
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2169);
            _inf_obj_value20=come_increment_ref_count(((struct sAndAndNode*)(right_value423=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value422=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2169)))),(struct sNode*)come_increment_ref_count(node_271),(struct sNode*)come_increment_ref_count(right_272),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=sAndAndNode_finalize;
            _inf_value20->clone=sAndAndNode_clone;
            _inf_value20->compile=sAndAndNode_compile;
            _inf_value20->sline=sAndAndNode_sline;
            _inf_value20->sname=sAndAndNode_sname;
            _inf_value20->terminated=sAndAndNode_terminated;
            struct sNode* __result264__ = ((struct sNode*)(right_value428=_inf_value20));
            if(right_272) { right_272 = come_decrement_ref_count(right_272, ((struct sNode*)right_272)->finalize, ((struct sNode*)right_272)->_protocol_obj, 0, 0); } 
            if(right_value422) { come_call_finalizer(sAndAndNode_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value423) { come_call_finalizer(sAndAndNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0); }
            return __result264__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result265__ = node_271;
    if(node_271) { node_271 = come_decrement_ref_count(node_271, ((struct sNode*)node_271)->finalize, ((struct sNode*)node_271)->_protocol_obj, 0, 1); } 
    return __result265__;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* right_value424;
struct sAndAndNode* result_273;
void* right_value425;
struct sNode* __dec_obj203;
void* right_value426;
struct sNode* __dec_obj204;
void* right_value427;
char* __dec_obj205;
memset(&right_value424, 0, sizeof(void*));
memset(&result_273, 0, sizeof(struct sAndAndNode*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sAndAndNode* __result262__ = (void*)0;
                    return __result262__;
                }
                result_273=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value424=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2171))));
                if(right_value424) { come_call_finalizer(sAndAndNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj203=result_273->mLeft;
                    result_273->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=sNodep_clone(self->mLeft))));
                    if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0); }
                    if(right_value425) { right_value425 = come_decrement_ref_count(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj204=result_273->mRight;
                    result_273->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=sNodep_clone(self->mRight))));
                    if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0); }
                    if(right_value426) { right_value426 = come_decrement_ref_count(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_273->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj205=result_273->sname;
                    result_273->sname=(char*)come_increment_ref_count(((char*)(right_value427=string_clone(self->sname))));
                    if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0); }
                    if(right_value427) { right_value427 = come_decrement_ref_count(right_value427, (void*)0, (void*)0, 1, 0); }
                }
                struct sAndAndNode* __result263__ = result_273;
                if(result_273) { come_call_finalizer(sAndAndNode_finalize,result_273, (void*)0, (void*)0, 0, 0, 1); }
                return __result263__;
}

struct sNode* oror_exp(struct sInfo* info){
void* right_value429;
struct sNode* node_274;
void* right_value430;
struct sNode* right_275;
void* right_value431;
void* right_value432;
struct sNode* _inf_value21;
struct sOrOrNode* _inf_obj_value21;
void* right_value437;
memset(&right_value429, 0, sizeof(void*));
memset(&node_274, 0, sizeof(struct sNode*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_275, 0, sizeof(struct sNode*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value429=andand_exp(info))));
    if(right_value429) { right_value429 = come_decrement_ref_count(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=oror_exp(info))));
            if(right_value430) { right_value430 = come_decrement_ref_count(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0); } 
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2196);
            _inf_obj_value21=come_increment_ref_count(((struct sOrOrNode*)(right_value432=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value431=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2196)))),(struct sNode*)come_increment_ref_count(node_274),(struct sNode*)come_increment_ref_count(right_275),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=sOrOrNode_finalize;
            _inf_value21->clone=sOrOrNode_clone;
            _inf_value21->compile=sOrOrNode_compile;
            _inf_value21->sline=sOrOrNode_sline;
            _inf_value21->sname=sOrOrNode_sname;
            _inf_value21->terminated=sOrOrNode_terminated;
            struct sNode* __result268__ = ((struct sNode*)(right_value437=_inf_value21));
            if(right_275) { right_275 = come_decrement_ref_count(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0); } 
            if(right_value431) { come_call_finalizer(sOrOrNode_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value432) { come_call_finalizer(sOrOrNode_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0); }
            return __result268__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result269__ = node_274;
    if(node_274) { node_274 = come_decrement_ref_count(node_274, ((struct sNode*)node_274)->finalize, ((struct sNode*)node_274)->_protocol_obj, 0, 1); } 
    return __result269__;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* right_value433;
struct sOrOrNode* result_276;
void* right_value434;
struct sNode* __dec_obj206;
void* right_value435;
struct sNode* __dec_obj207;
void* right_value436;
char* __dec_obj208;
memset(&right_value433, 0, sizeof(void*));
memset(&result_276, 0, sizeof(struct sOrOrNode*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&right_value436, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sOrOrNode* __result266__ = (void*)0;
                    return __result266__;
                }
                result_276=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value433=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2198))));
                if(right_value433) { come_call_finalizer(sOrOrNode_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj206=result_276->mLeft;
                    result_276->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNodep_clone(self->mLeft))));
                    if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0); }
                    if(right_value434) { right_value434 = come_decrement_ref_count(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj207=result_276->mRight;
                    result_276->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value435=sNodep_clone(self->mRight))));
                    if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0); }
                    if(right_value435) { right_value435 = come_decrement_ref_count(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_276->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj208=result_276->sname;
                    result_276->sname=(char*)come_increment_ref_count(((char*)(right_value436=string_clone(self->sname))));
                    if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0); }
                    if(right_value436) { right_value436 = come_decrement_ref_count(right_value436, (void*)0, (void*)0, 1, 0); }
                }
                struct sOrOrNode* __result267__ = result_276;
                if(result_276) { come_call_finalizer(sOrOrNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 1); }
                return __result267__;
}

struct sNode* comma_exp(struct sInfo* info){
void* right_value438;
struct sNode* node_277;
void* right_value439;
struct sNode* node2_278;
void* right_value440;
void* right_value441;
struct sNode* _inf_value22;
struct sCommaNode* _inf_obj_value22;
void* right_value446;
memset(&right_value438, 0, sizeof(void*));
memset(&node_277, 0, sizeof(struct sNode*));
memset(&right_value439, 0, sizeof(void*));
memset(&node2_278, 0, sizeof(struct sNode*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=oror_exp(info))));
    if(right_value438) { right_value438 = come_decrement_ref_count(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(!info->no_comma&&*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=oror_exp(info))));
            if(right_value439) { right_value439 = come_decrement_ref_count(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0); } 
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2223);
            _inf_obj_value22=come_increment_ref_count(((struct sCommaNode*)(right_value441=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value440=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2223)))),(struct sNode*)come_increment_ref_count(node_277),(struct sNode*)come_increment_ref_count(node2_278),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=sCommaNode_finalize;
            _inf_value22->clone=sCommaNode_clone;
            _inf_value22->compile=sCommaNode_compile;
            _inf_value22->sline=sCommaNode_sline;
            _inf_value22->sname=sCommaNode_sname;
            _inf_value22->terminated=sCommaNode_terminated;
            struct sNode* __result272__ = ((struct sNode*)(right_value446=_inf_value22));
            if(node2_278) { node2_278 = come_decrement_ref_count(node2_278, ((struct sNode*)node2_278)->finalize, ((struct sNode*)node2_278)->_protocol_obj, 0, 0); } 
            if(right_value440) { come_call_finalizer(sCommaNode_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value441) { come_call_finalizer(sCommaNode_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0); }
            return __result272__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result273__ = node_277;
    if(node_277) { node_277 = come_decrement_ref_count(node_277, ((struct sNode*)node_277)->finalize, ((struct sNode*)node_277)->_protocol_obj, 0, 1); } 
    return __result273__;
}

static void sCommaNode_finalize(struct sCommaNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* right_value442;
struct sCommaNode* result_279;
void* right_value443;
struct sNode* __dec_obj209;
void* right_value444;
struct sNode* __dec_obj210;
void* right_value445;
char* __dec_obj211;
memset(&right_value442, 0, sizeof(void*));
memset(&result_279, 0, sizeof(struct sCommaNode*));
memset(&right_value443, 0, sizeof(void*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sCommaNode* __result270__ = (void*)0;
                    return __result270__;
                }
                result_279=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value442=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2225))));
                if(right_value442) { come_call_finalizer(sCommaNode_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj209=result_279->mLeft;
                    result_279->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=sNodep_clone(self->mLeft))));
                    if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0); }
                    if(right_value443) { right_value443 = come_decrement_ref_count(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj210=result_279->mRight;
                    result_279->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=sNodep_clone(self->mRight))));
                    if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0); }
                    if(right_value444) { right_value444 = come_decrement_ref_count(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_279->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj211=result_279->sname;
                    result_279->sname=(char*)come_increment_ref_count(((char*)(right_value445=string_clone(self->sname))));
                    if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0); }
                    if(right_value445) { right_value445 = come_decrement_ref_count(right_value445, (void*)0, (void*)0, 1, 0); }
                }
                struct sCommaNode* __result271__ = result_279;
                if(result_279) { come_call_finalizer(sCommaNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 1); }
                return __result271__;
}

struct sNode* conditional_exp(struct sInfo* info){
void* right_value447;
struct sNode* node_280;
struct sNode* value1_281;
void* right_value448;
void* right_value449;
struct sNode* _inf_value23;
struct sNullNode* _inf_obj_value23;
void* right_value452;
struct sNode* __dec_obj213;
void* right_value453;
struct sNode* __dec_obj214;
void* right_value454;
struct sNode* value2_283;
void* right_value455;
void* right_value456;
struct sNode* _inf_value24;
struct sConditionalNode* _inf_obj_value24;
void* right_value462;
memset(&right_value447, 0, sizeof(void*));
memset(&node_280, 0, sizeof(struct sNode*));
memset(&value1_281, 0, sizeof(struct sNode*)); /* bbb */
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
memset(&value2_283, 0, sizeof(struct sNode*));
memset(&right_value455, 0, sizeof(void*));
memset(&right_value456, 0, sizeof(void*));
memset(&right_value462, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_280=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=comma_exp(info))));
    if(right_value447) { right_value447 = come_decrement_ref_count(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==63) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(*info->p==58) {
                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2252);
                _inf_obj_value23=come_increment_ref_count(((struct sNullNode*)(right_value449=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value448=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2252)))),info))));
                _inf_value23->_protocol_obj=_inf_obj_value23;
                _inf_value23->finalize=sNullNode_finalize;
                _inf_value23->clone=sNullNode_clone;
                _inf_value23->compile=sNullNode_compile;
                _inf_value23->sline=sNullNode_sline;
                _inf_value23->sname=sNullNode_sname;
                _inf_value23->terminated=sNullNode_terminated;
                __dec_obj213=value1_281;
                value1_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value452=_inf_value23)));
                if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0); }
                if(right_value448) { come_call_finalizer(sNullNode_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value449) { come_call_finalizer(sNullNode_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value452) { right_value452 = come_decrement_ref_count(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0); } 
            }
            else {
                __dec_obj214=value1_281;
                value1_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value453=comma_exp(info))));
                if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0); }
                if(right_value453) { right_value453 = come_decrement_ref_count(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0); } 
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=comma_exp(info))));
            if(right_value454) { right_value454 = come_decrement_ref_count(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0); } 
            parse_sharp_v5(info);
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2266);
            _inf_obj_value24=come_increment_ref_count(((struct sConditionalNode*)(right_value456=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value455=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2266)))),(struct sNode*)come_increment_ref_count(node_280),(struct sNode*)come_increment_ref_count(value1_281),(struct sNode*)come_increment_ref_count(value2_283),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=sConditionalNode_finalize;
            _inf_value24->clone=sConditionalNode_clone;
            _inf_value24->compile=sConditionalNode_compile;
            _inf_value24->sline=sConditionalNode_sline;
            _inf_value24->sname=sConditionalNode_sname;
            _inf_value24->terminated=sConditionalNode_terminated;
            struct sNode* __result278__ = ((struct sNode*)(right_value462=_inf_value24));
            if(value1_281) { value1_281 = come_decrement_ref_count(value1_281, ((struct sNode*)value1_281)->finalize, ((struct sNode*)value1_281)->_protocol_obj, 0, 0); } 
            if(value2_283) { value2_283 = come_decrement_ref_count(value2_283, ((struct sNode*)value2_283)->finalize, ((struct sNode*)value2_283)->_protocol_obj, 0, 0); } 
            if(right_value455) { come_call_finalizer(sConditionalNode_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value456) { come_call_finalizer(sConditionalNode_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0); }
            return __result278__;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    struct sNode* __result279__ = node_280;
    if(node_280) { node_280 = come_decrement_ref_count(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 1); } 
    return __result279__;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
                if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
                    if(self->mValue1) { self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
                    if(self->mValue2) { self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
                    if(self->mValue3) { self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* right_value457;
struct sConditionalNode* result_284;
void* right_value458;
struct sNode* __dec_obj215;
void* right_value459;
struct sNode* __dec_obj216;
void* right_value460;
struct sNode* __dec_obj217;
void* right_value461;
char* __dec_obj218;
memset(&right_value457, 0, sizeof(void*));
memset(&result_284, 0, sizeof(struct sConditionalNode*));
memset(&right_value458, 0, sizeof(void*));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value461, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sConditionalNode* __result276__ = (void*)0;
                    return __result276__;
                }
                result_284=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value457=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2268))));
                if(right_value457) { come_call_finalizer(sConditionalNode_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
                    __dec_obj215=result_284->mValue1;
                    result_284->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=sNodep_clone(self->mValue1))));
                    if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0); }
                    if(right_value458) { right_value458 = come_decrement_ref_count(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
                    __dec_obj216=result_284->mValue2;
                    result_284->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value459=sNodep_clone(self->mValue2))));
                    if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0); }
                    if(right_value459) { right_value459 = come_decrement_ref_count(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
                    __dec_obj217=result_284->mValue3;
                    result_284->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value460=sNodep_clone(self->mValue3))));
                    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0); }
                    if(right_value460) { right_value460 = come_decrement_ref_count(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_284->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj218=result_284->sname;
                    result_284->sname=(char*)come_increment_ref_count(((char*)(right_value461=string_clone(self->sname))));
                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0); }
                    if(right_value461) { right_value461 = come_decrement_ref_count(right_value461, (void*)0, (void*)0, 1, 0); }
                }
                struct sConditionalNode* __result277__ = result_284;
                if(result_284) { come_call_finalizer(sConditionalNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 1); }
                return __result277__;
}

struct sNode* expression_v13(struct sInfo* info){
void* right_value463;
struct sNode* node_285;
memset(&right_value463, 0, sizeof(void*));
memset(&node_285, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value463=conditional_exp(info))));
    if(right_value463) { right_value463 = come_decrement_ref_count(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0); } 
    struct sNode* __result280__ = node_285;
    if(node_285) { node_285 = come_decrement_ref_count(node_285, ((struct sNode*)node_285)->finalize, ((struct sNode*)node_285)->_protocol_obj, 0, 1); } 
    return __result280__;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* right_value464;
void* right_value465;
struct sNode* _inf_value25;
struct sNullNode* _inf_obj_value25;
void* right_value468;
void* right_value469;
memset(&right_value464, 0, sizeof(void*));
memset(&right_value465, 0, sizeof(void*));
memset(&right_value468, 0, sizeof(void*));
memset(&right_value469, 0, sizeof(void*));
    if(charp_operator_equals(buf,"null")) {
        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2290);
        _inf_obj_value25=come_increment_ref_count(((struct sNullNode*)(right_value465=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value464=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2290)))),info))));
        _inf_value25->_protocol_obj=_inf_obj_value25;
        _inf_value25->finalize=sNullNode_finalize;
        _inf_value25->clone=sNullNode_clone;
        _inf_value25->compile=sNullNode_compile;
        _inf_value25->sline=sNullNode_sline;
        _inf_value25->sname=sNullNode_sname;
        _inf_value25->terminated=sNullNode_terminated;
        struct sNode* __result283__ = ((struct sNode*)(right_value468=_inf_value25));
        if(right_value464) { come_call_finalizer(sNullNode_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value465) { come_call_finalizer(sNullNode_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0); }
        return __result283__;
    }
    struct sNode* __result284__ = ((struct sNode*)(right_value469=string_node_v12(buf,head,head_sline,info)));
    return __result284__;
}

static void sNullNode_finalize(struct sNullNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* right_value466;
struct sNullNode* result_286;
void* right_value467;
char* __dec_obj219;
memset(&right_value466, 0, sizeof(void*));
memset(&result_286, 0, sizeof(struct sNullNode*));
memset(&right_value467, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sNullNode* __result281__ = (void*)0;
                return __result281__;
            }
            result_286=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value466=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2292))));
            if(right_value466) { come_call_finalizer(sNullNode_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_286->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj219=result_286->sname;
                result_286->sname=(char*)come_increment_ref_count(((char*)(right_value467=string_clone(self->sname))));
                if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0); }
                if(right_value467) { right_value467 = come_decrement_ref_count(right_value467, (void*)0, (void*)0, 1, 0); }
            }
            struct sNullNode* __result282__ = result_286;
            if(result_286) { come_call_finalizer(sNullNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 1); }
            return __result282__;
}

