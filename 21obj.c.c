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
struct sNullNodeX
{
    int sline;
    char* sname;
};
struct sNewNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sImplementsNode
{
    struct sNode* obj_exp;
    struct sType* inf_type;
    int sline;
    char* sname;
};
struct sTrueNode
{
    int sline;
    char* sname;
};
struct sFalseNode
{
    int sline;
    char* sname;
};
struct sSizeOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sBorrowNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sCloneNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDummyHeapNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCIncNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCDecNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sIsHeap
{
    struct sType* type;
    int sline;
    char* sname;
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

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info);

static void sNullNodeX_finalize(struct sNullNodeX* self);
_Bool sNullNodeX_terminated();

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info);

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info);

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info);

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info);

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
static void sNewNode_finalize(struct sNewNode* self);
int sNewNode_sline(struct sNewNode* self, struct sInfo* info);

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info);

_Bool sNewNode_terminated();

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static void list$1sNodephp_reset(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);

static void sImplementsNode_finalize(struct sImplementsNode* self);
int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info);

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info);

_Bool sImplementsNode_terminated();

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int index);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_item(struct list$1tuple2$2charphsTypephph* self, int position, struct tuple2$2charphsTypeph* default_value);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);

static void sTrueNode_finalize(struct sTrueNode* self);
int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info);

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info);

_Bool sTrueNode_terminated();

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);

static void sFalseNode_finalize(struct sFalseNode* self);
int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info);

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info);

_Bool sFalseNode_terminated();

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);

static void sSizeOfNode_finalize(struct sSizeOfNode* self);
int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info);

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info);

_Bool sSizeOfNode_terminated();

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);

static void sDeleteNode_finalize(struct sDeleteNode* self);
int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info);

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info);

_Bool sDeleteNode_terminated();

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);

static void sBorrowNode_finalize(struct sBorrowNode* self);
int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info);

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info);

_Bool sBorrowNode_terminated();

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);

static void sCloneNode_finalize(struct sCloneNode* self);
int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info);

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info);

_Bool sCloneNode_terminated();

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info);

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info);

_Bool sDummyHeapNode_terminated();

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);

static void sGCIncNode_finalize(struct sGCIncNode* self);
int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info);

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info);

_Bool sGCIncNode_terminated();

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);

static void sGCDecNode_finalize(struct sGCDecNode* self);
int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info);

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info);

_Bool sGCDecNode_terminated();

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);

static void sIsHeap_finalize(struct sIsHeap* self);
int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info);

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info);

_Bool sIsHeap_terminated();

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self);
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






struct sNode* create_object(struct sType* type, struct sInfo* info){
void* right_value49;
void* right_value50;
struct sNode* _inf_value1;
struct sNewNode* _inf_obj_value1;
void* right_value54;
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value1=come_increment_ref_count(((struct sNewNode*)(right_value50=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value49=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1))))),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sNewNode_finalize;
    _inf_value1->clone=sNewNode_clone;
    _inf_value1->compile=sNewNode_compile;
    _inf_value1->sline=sNewNode_sline;
    _inf_value1->sname=sNewNode_sname;
    _inf_value1->terminated=sNewNode_terminated;
    struct sNode* __result40__ = ((struct sNode*)(right_value54=_inf_value1));
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1); }
    if(right_value49) { come_call_finalizer(sNewNode_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value50) { come_call_finalizer(sNewNode_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
    return __result40__;
}

struct sNode* create_true_object(struct sInfo* info){
void* right_value83;
void* right_value84;
struct sNode* _inf_value2;
struct sTrueNode* _inf_obj_value2;
void* right_value87;
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value2=come_increment_ref_count(((struct sTrueNode*)(right_value84=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value83=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1))))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=sTrueNode_finalize;
    _inf_value2->clone=sTrueNode_clone;
    _inf_value2->compile=sTrueNode_compile;
    _inf_value2->sline=sTrueNode_sline;
    _inf_value2->sname=sTrueNode_sname;
    _inf_value2->terminated=sTrueNode_terminated;
    struct sNode* __result58__ = ((struct sNode*)(right_value87=_inf_value2));
    if(right_value83) { come_call_finalizer(sTrueNode_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value84) { come_call_finalizer(sTrueNode_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0); }
    return __result58__;
}

struct sNode* create_false_object(struct sInfo* info){
void* right_value94;
void* right_value95;
struct sNode* _inf_value3;
struct sFalseNode* _inf_obj_value3;
void* right_value98;
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value3=come_increment_ref_count(((struct sFalseNode*)(right_value95=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value94=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1))))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=sFalseNode_finalize;
    _inf_value3->clone=sFalseNode_clone;
    _inf_value3->compile=sFalseNode_compile;
    _inf_value3->sline=sFalseNode_sline;
    _inf_value3->sname=sFalseNode_sname;
    _inf_value3->terminated=sFalseNode_terminated;
    struct sNode* __result66__ = ((struct sNode*)(right_value98=_inf_value3));
    if(right_value94) { come_call_finalizer(sFalseNode_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value95) { come_call_finalizer(sFalseNode_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0); }
    return __result66__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* right_value150;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type_91;
char* name_92;
_Bool err_93;
void* right_value151;
struct sType* inf_type_94;
void* right_value152;
struct sNode* node_95;
void* right_value153;
void* right_value154;
struct sNode* _inf_value4;
struct sImplementsNode* _inf_obj_value4;
void* right_value159;
void* right_value160;
void* right_value161;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* right_value165;
struct sNode* obj_98;
void* right_value166;
char* fun_name_99;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* right_value174;
void* right_value175;
void* right_value176;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* right_value179;
void* right_value180;
void* right_value181;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* right_value184;
void* right_value185;
struct sNode* node_103;
void* right_value186;
void* right_value187;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* right_value191;
void* right_value192;
struct sNode* node_105;
void* right_value193;
void* right_value194;
struct sNode* _inf_value10;
struct sBorrowNode* _inf_obj_value10;
void* right_value198;
void* right_value199;
struct sNode* node_107;
void* right_value200;
void* right_value201;
struct sNode* _inf_value11;
struct sCloneNode* _inf_obj_value11;
void* right_value205;
void* right_value206;
struct sNode* node_109;
void* right_value207;
void* right_value208;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
void* right_value212;
void* right_value213;
struct sNode* node_111;
void* right_value214;
void* right_value215;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
void* right_value219;
void* right_value220;
struct sNode* node_113;
void* right_value221;
void* right_value222;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
void* right_value226;
void* right_value227;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* param_type_115;
char* param_name_116;
_Bool err_117;
void* right_value228;
struct sType* type2_118;
void* right_value229;
void* right_value230;
struct sNode* _inf_value15;
struct sIsHeap* _inf_obj_value15;
void* right_value234;
_Bool is_type_name_flag_120;
char* p_121;
int sline_122;
void* right_value235;
char* word_123;
void* right_value236;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* type_124;
char* name_125;
_Bool err_126;
void* right_value237;
void* right_value238;
struct sNode* _inf_value16;
struct sSizeOfNode* _inf_obj_value16;
void* right_value242;
void* right_value243;
memset(&right_value150, 0, sizeof(void*));
memset(&type_91, 0, sizeof(struct sType*)); /* ccc */
memset(&name_92, 0, sizeof(char*)); /* ccc */
memset(&err_93, 0, sizeof(_Bool)); /* ccc */
memset(&type_91, 0, sizeof(struct sType*)); /* eee */
memset(&name_92, 0, sizeof(char*)); /* eee */
memset(&err_93, 0, sizeof(_Bool)); /* eee */
memset(&right_value151, 0, sizeof(void*));
memset(&inf_type_94, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value152, 0, sizeof(void*));
memset(&node_95, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&obj_98, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value166, 0, sizeof(void*));
memset(&fun_name_99, 0, sizeof(char*)); /* ddd */
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&node_103, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&node_105, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&node_107, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&node_109, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&node_111, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&node_113, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&param_type_115, 0, sizeof(struct sType*)); /* ccc */
memset(&param_name_116, 0, sizeof(char*)); /* ccc */
memset(&err_117, 0, sizeof(_Bool)); /* ccc */
memset(&param_type_115, 0, sizeof(struct sType*)); /* eee */
memset(&param_name_116, 0, sizeof(char*)); /* eee */
memset(&err_117, 0, sizeof(_Bool)); /* eee */
memset(&right_value228, 0, sizeof(void*));
memset(&type2_118, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&is_type_name_flag_120, 0, sizeof(_Bool)); /* ddd */
memset(&p_121, 0, sizeof(char*)); /* ddd */
memset(&sline_122, 0, sizeof(int)); /* ddd */
memset(&right_value235, 0, sizeof(void*));
memset(&word_123, 0, sizeof(char*)); /* ddd */
memset(&right_value236, 0, sizeof(void*));
memset(&type_124, 0, sizeof(struct sType*)); /* ccc */
memset(&name_125, 0, sizeof(char*)); /* ccc */
memset(&err_126, 0, sizeof(_Bool)); /* ccc */
memset(&type_124, 0, sizeof(struct sType*)); /* eee */
memset(&name_125, 0, sizeof(char*)); /* eee */
memset(&err_126, 0, sizeof(_Bool)); /* eee */
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
    if(charp_operator_equals(buf,"new")) {
        multiple_assgin_var3=((struct tuple3$3sTypephcharphbool*)(right_value150=parse_type(info,(_Bool)0,(_Bool)1)));
        type_91=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
        name_92=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
        err_93=multiple_assgin_var3->v3;
        if(right_value150) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0); }
        if(!err_93) {
            exit(2);
        }
        if(*info->p==40) {
            if(type_91->mClass->mProtocol) {
                info->p++;
                skip_spaces_and_lf(info);
                inf_type_94=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(type_91))));
                if(right_value151) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0); }
                node_95=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=expression_v13(info))));
                if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0); } 
                expected_next_character(41,info);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value4=come_increment_ref_count(((struct sImplementsNode*)(right_value154=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value153=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1))))),(struct sNode*)come_increment_ref_count(node_95),(struct sType*)come_increment_ref_count(inf_type_94),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=sImplementsNode_finalize;
                _inf_value4->clone=sImplementsNode_clone;
                _inf_value4->compile=sImplementsNode_compile;
                _inf_value4->sline=sImplementsNode_sline;
                _inf_value4->sname=sImplementsNode_sname;
                _inf_value4->terminated=sImplementsNode_terminated;
                struct sNode* __result115__ = ((struct sNode*)(right_value159=_inf_value4));
                if(inf_type_94) { come_call_finalizer(sType_finalize,inf_type_94, (void*)0, (void*)0, 0, 0, 0); }
                if(node_95) { node_95 = come_decrement_ref_count(node_95, ((struct sNode*)node_95)->finalize, ((struct sNode*)node_95)->_protocol_obj, 0, 0); } 
                if(type_91) { come_call_finalizer(sType_finalize,type_91, (void*)0, (void*)0, 0, 0, 0); }
                if(name_92) { name_92 = come_decrement_ref_count(name_92, (void*)0, (void*)0, 0, 0); }
                if(right_value153) { come_call_finalizer(sImplementsNode_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value154) { come_call_finalizer(sImplementsNode_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0); }
                return __result115__;
            }
            else {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(right_value161=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value160=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1))))),(struct sType*)come_increment_ref_count(type_91),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=sNewNode_finalize;
                _inf_value5->clone=sNewNode_clone;
                _inf_value5->compile=sNewNode_compile;
                _inf_value5->sline=sNewNode_sline;
                _inf_value5->sname=sNewNode_sname;
                _inf_value5->terminated=sNewNode_terminated;
                obj_98=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=_inf_value5)));
                if(right_value160) { come_call_finalizer(sNewNode_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value161) { come_call_finalizer(sNewNode_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value165) { right_value165 = come_decrement_ref_count(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0); } 
                fun_name_99=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string("initialize"))));
                if(right_value166) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0); }
                struct sNode* __result118__ = ((struct sNode*)(right_value168=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNodep_clone(obj_98)))),(char*)come_increment_ref_count(fun_name_99),info)));
                if(obj_98) { obj_98 = come_decrement_ref_count(obj_98, ((struct sNode*)obj_98)->finalize, ((struct sNode*)obj_98)->_protocol_obj, 0, 0); } 
                if(fun_name_99) { fun_name_99 = come_decrement_ref_count(fun_name_99, (void*)0, (void*)0, 0, 0); }
                if(type_91) { come_call_finalizer(sType_finalize,type_91, (void*)0, (void*)0, 0, 0, 0); }
                if(name_92) { name_92 = come_decrement_ref_count(name_92, (void*)0, (void*)0, 0, 0); }
                if(right_value167) { right_value167 = come_decrement_ref_count(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0); } 
                return __result118__;
            }
        }
        else {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(right_value170=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value169=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1))))),(struct sType*)come_increment_ref_count(type_91),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=sNewNode_finalize;
            _inf_value6->clone=sNewNode_clone;
            _inf_value6->compile=sNewNode_compile;
            _inf_value6->sline=sNewNode_sline;
            _inf_value6->sname=sNewNode_sname;
            _inf_value6->terminated=sNewNode_terminated;
            struct sNode* __result121__ = ((struct sNode*)(right_value174=_inf_value6));
            if(type_91) { come_call_finalizer(sType_finalize,type_91, (void*)0, (void*)0, 0, 0, 0); }
            if(name_92) { name_92 = come_decrement_ref_count(name_92, (void*)0, (void*)0, 0, 0); }
            if(right_value169) { come_call_finalizer(sNewNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value170) { come_call_finalizer(sNewNode_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0); }
            return __result121__;
        }
    }
    else if(charp_operator_equals(buf,"true")) {
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(right_value176=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value175=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1))))),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=sTrueNode_finalize;
        _inf_value7->clone=sTrueNode_clone;
        _inf_value7->compile=sTrueNode_compile;
        _inf_value7->sline=sTrueNode_sline;
        _inf_value7->sname=sTrueNode_sname;
        _inf_value7->terminated=sTrueNode_terminated;
        struct sNode* __result124__ = ((struct sNode*)(right_value179=_inf_value7));
        if(right_value175) { come_call_finalizer(sTrueNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value176) { come_call_finalizer(sTrueNode_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0); }
        return __result124__;
    }
    else if(charp_operator_equals(buf,"false")) {
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(right_value181=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value180=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1))))),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=sFalseNode_finalize;
        _inf_value8->clone=sFalseNode_clone;
        _inf_value8->compile=sFalseNode_compile;
        _inf_value8->sline=sFalseNode_sline;
        _inf_value8->sname=sFalseNode_sname;
        _inf_value8->terminated=sFalseNode_terminated;
        struct sNode* __result127__ = ((struct sNode*)(right_value184=_inf_value8));
        if(right_value180) { come_call_finalizer(sFalseNode_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value181) { come_call_finalizer(sFalseNode_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0); }
        return __result127__;
    }
    else if(charp_operator_equals(buf,"delete")) {
        node_103=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=expression_v13(info))));
        if(right_value185) { right_value185 = come_decrement_ref_count(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0); } 
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(right_value187=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value186=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1))))),(struct sNode*)come_increment_ref_count(node_103),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=sDeleteNode_finalize;
        _inf_value9->clone=sDeleteNode_clone;
        _inf_value9->compile=sDeleteNode_compile;
        _inf_value9->sline=sDeleteNode_sline;
        _inf_value9->sname=sDeleteNode_sname;
        _inf_value9->terminated=sDeleteNode_terminated;
        struct sNode* __result130__ = ((struct sNode*)(right_value191=_inf_value9));
        if(node_103) { node_103 = come_decrement_ref_count(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0, 0); } 
        if(right_value186) { come_call_finalizer(sDeleteNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value187) { come_call_finalizer(sDeleteNode_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0); }
        return __result130__;
    }
    else if(charp_operator_equals(buf,"borrow")) {
        node_105=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value192=expression_v13(info))));
        if(right_value192) { right_value192 = come_decrement_ref_count(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0); } 
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value10=come_increment_ref_count(((struct sBorrowNode*)(right_value194=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value193=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1))))),(struct sNode*)come_increment_ref_count(node_105),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=sBorrowNode_finalize;
        _inf_value10->clone=sBorrowNode_clone;
        _inf_value10->compile=sBorrowNode_compile;
        _inf_value10->sline=sBorrowNode_sline;
        _inf_value10->sname=sBorrowNode_sname;
        _inf_value10->terminated=sBorrowNode_terminated;
        struct sNode* __result133__ = ((struct sNode*)(right_value198=_inf_value10));
        if(node_105) { node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0); } 
        if(right_value193) { come_call_finalizer(sBorrowNode_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value194) { come_call_finalizer(sBorrowNode_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0); }
        return __result133__;
    }
    else if(charp_operator_equals(buf,"clone")) {
        node_107=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=expression_v13(info))));
        if(right_value199) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0); } 
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value11=come_increment_ref_count(((struct sCloneNode*)(right_value201=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value200=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1))))),(struct sNode*)come_increment_ref_count(node_107),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=sCloneNode_finalize;
        _inf_value11->clone=sCloneNode_clone;
        _inf_value11->compile=sCloneNode_compile;
        _inf_value11->sline=sCloneNode_sline;
        _inf_value11->sname=sCloneNode_sname;
        _inf_value11->terminated=sCloneNode_terminated;
        struct sNode* __result136__ = ((struct sNode*)(right_value205=_inf_value11));
        if(node_107) { node_107 = come_decrement_ref_count(node_107, ((struct sNode*)node_107)->finalize, ((struct sNode*)node_107)->_protocol_obj, 0, 0); } 
        if(right_value200) { come_call_finalizer(sCloneNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value201) { come_call_finalizer(sCloneNode_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0); }
        return __result136__;
    }
    else if(charp_operator_equals(buf,"dummy_heap")) {
        node_109=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value206=expression_v13(info))));
        if(right_value206) { right_value206 = come_decrement_ref_count(right_value206, ((struct sNode*)right_value206)->finalize, ((struct sNode*)right_value206)->_protocol_obj, 1, 0); } 
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value12=come_increment_ref_count(((struct sDummyHeapNode*)(right_value208=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value207=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1))))),(struct sNode*)come_increment_ref_count(node_109),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=sDummyHeapNode_finalize;
        _inf_value12->clone=sDummyHeapNode_clone;
        _inf_value12->compile=sDummyHeapNode_compile;
        _inf_value12->sline=sDummyHeapNode_sline;
        _inf_value12->sname=sDummyHeapNode_sname;
        _inf_value12->terminated=sDummyHeapNode_terminated;
        struct sNode* __result139__ = ((struct sNode*)(right_value212=_inf_value12));
        if(node_109) { node_109 = come_decrement_ref_count(node_109, ((struct sNode*)node_109)->finalize, ((struct sNode*)node_109)->_protocol_obj, 0, 0); } 
        if(right_value207) { come_call_finalizer(sDummyHeapNode_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value208) { come_call_finalizer(sDummyHeapNode_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0); }
        return __result139__;
    }
    else if(charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_111=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=expression_v13(info))));
        if(right_value213) { right_value213 = come_decrement_ref_count(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0); } 
        expected_next_character(41,info);
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value13=come_increment_ref_count(((struct sGCIncNode*)(right_value215=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value214=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1))))),(struct sNode*)come_increment_ref_count(node_111),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=sGCIncNode_finalize;
        _inf_value13->clone=sGCIncNode_clone;
        _inf_value13->compile=sGCIncNode_compile;
        _inf_value13->sline=sGCIncNode_sline;
        _inf_value13->sname=sGCIncNode_sname;
        _inf_value13->terminated=sGCIncNode_terminated;
        struct sNode* __result142__ = ((struct sNode*)(right_value219=_inf_value13));
        if(node_111) { node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0); } 
        if(right_value214) { come_call_finalizer(sGCIncNode_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value215) { come_call_finalizer(sGCIncNode_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0); }
        return __result142__;
    }
    else if(charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_113=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value220=expression_v13(info))));
        if(right_value220) { right_value220 = come_decrement_ref_count(right_value220, ((struct sNode*)right_value220)->finalize, ((struct sNode*)right_value220)->_protocol_obj, 1, 0); } 
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value14=come_increment_ref_count(((struct sGCDecNode*)(right_value222=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value221=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1))))),(struct sNode*)come_increment_ref_count(node_113),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=sGCDecNode_finalize;
        _inf_value14->clone=sGCDecNode_clone;
        _inf_value14->compile=sGCDecNode_compile;
        _inf_value14->sline=sGCDecNode_sline;
        _inf_value14->sname=sGCDecNode_sname;
        _inf_value14->terminated=sGCDecNode_terminated;
        struct sNode* __result145__ = ((struct sNode*)(right_value226=_inf_value14));
        if(node_113) { node_113 = come_decrement_ref_count(node_113, ((struct sNode*)node_113)->finalize, ((struct sNode*)node_113)->_protocol_obj, 0, 0); } 
        if(right_value221) { come_call_finalizer(sGCDecNode_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value222) { come_call_finalizer(sGCDecNode_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0); }
        return __result145__;
    }
    else if(charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assgin_var4=((struct tuple3$3sTypephcharphbool*)(right_value227=parse_type(info,(_Bool)0,(_Bool)1)));
        param_type_115=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
        param_name_116=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
        err_117=multiple_assgin_var4->v3;
        if(right_value227) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0); }
        if(!err_117) {
            exit(2);
        }
        type2_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=solve_generics(param_type_115,info->generics_type,info))));
        if(right_value228) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0); }
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value15=come_increment_ref_count(((struct sIsHeap*)(right_value230=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value229=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1))))),(struct sType*)come_increment_ref_count(type2_118),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=sIsHeap_finalize;
        _inf_value15->clone=sIsHeap_clone;
        _inf_value15->compile=sIsHeap_compile;
        _inf_value15->sline=sIsHeap_sline;
        _inf_value15->sname=sIsHeap_sname;
        _inf_value15->terminated=sIsHeap_terminated;
        struct sNode* __result148__ = ((struct sNode*)(right_value234=_inf_value15));
        if(param_type_115) { come_call_finalizer(sType_finalize,param_type_115, (void*)0, (void*)0, 0, 0, 0); }
        if(param_name_116) { param_name_116 = come_decrement_ref_count(param_name_116, (void*)0, (void*)0, 0, 0); }
        if(type2_118) { come_call_finalizer(sType_finalize,type2_118, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value229) { come_call_finalizer(sIsHeap_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value230) { come_call_finalizer(sIsHeap_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0); }
        return __result148__;
    }
    else if(charp_operator_equals(buf,"using")) {
        if(memcmp(info->p,"comelang",strlen("comelang"))==0) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)1;
        }
        else if(memcmp(info->p,"c",strlen("c"))==0) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)0;
        }
        else if(memcmp(info->p,"gc",strlen("gc"))==0) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            gGC=(_Bool)1;
        }
        else if(memcmp(info->p,"no-gc",strlen("no-gc"))==0) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            gGC=(_Bool)0;
        }
        else if(memcmp(info->p,"unsafe",strlen("unsafe"))==0) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p,"no-null-check",strlen("no-null-check"))==0) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(charp_operator_equals(buf,"sizeof")) {
        expected_next_character(40,info);
        is_type_name_flag_120=(_Bool)0;
        {
            p_121=info->p;
            sline_122=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_123=(char*)come_increment_ref_count(((char*)(right_value235=parse_word(info))));
                if(right_value235) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0); }
                if(is_type_name(word_123,info)) {
                    is_type_name_flag_120=(_Bool)1;
                }
                if(word_123) { word_123 = come_decrement_ref_count(word_123, (void*)0, (void*)0, 0, 0); }
            }
            info->p=p_121;
            info->sline=sline_122;
        }
        if(is_type_name_flag_120) {
            multiple_assgin_var5=((struct tuple3$3sTypephcharphbool*)(right_value236=parse_type(info,(_Bool)0,(_Bool)1)));
            type_124=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
            name_125=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
            err_126=multiple_assgin_var5->v3;
            if(right_value236) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0); }
            if(!err_126) {
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value16=come_increment_ref_count(((struct sSizeOfNode*)(right_value238=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value237=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1))))),(struct sType*)come_increment_ref_count(type_124),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=sSizeOfNode_finalize;
            _inf_value16->clone=sSizeOfNode_clone;
            _inf_value16->compile=sSizeOfNode_compile;
            _inf_value16->sline=sSizeOfNode_sline;
            _inf_value16->sname=sSizeOfNode_sname;
            _inf_value16->terminated=sSizeOfNode_terminated;
            struct sNode* __result151__ = ((struct sNode*)(right_value242=_inf_value16));
            if(type_124) { come_call_finalizer(sType_finalize,type_124, (void*)0, (void*)0, 0, 0, 0); }
            if(name_125) { name_125 = come_decrement_ref_count(name_125, (void*)0, (void*)0, 0, 0); }
            if(right_value237) { come_call_finalizer(sSizeOfNode_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value238) { come_call_finalizer(sSizeOfNode_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0); }
            return __result151__;
        }
    }
    struct sNode* __result152__ = ((struct sNode*)(right_value243=string_node_v20(buf,head,head_sline,info)));
    return __result152__;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* right_value244;
void* right_value245;
struct sNode* _inf_value17;
struct sNullNodeX* _inf_obj_value17;
void* right_value248;
void* right_value249;
void* right_value250;
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
    if(string_operator_equals(buf,"using")) {
        if(memcmp(info->p,"comelang",strlen("comelang"))==0) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)1;
        }
        else if(memcmp(info->p,"c",strlen("c"))==0) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)0;
        }
        else if(memcmp(info->p,"gc",strlen("gc"))==0) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            gGC=(_Bool)1;
        }
        else if(memcmp(info->p,"no-gc",strlen("no-gc"))==0) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            gGC=(_Bool)0;
        }
        else if(memcmp(info->p,"unsafe",strlen("unsafe"))==0) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p,"no-null-check",strlen("no-null-check"))==0) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value17=come_increment_ref_count(((struct sNullNodeX*)(right_value245=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value244=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1))))),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=sNullNodeX_finalize;
        _inf_value17->clone=sNullNodeX_clone;
        _inf_value17->compile=sNullNodeX_compile;
        _inf_value17->sline=sNullNodeX_sline;
        _inf_value17->sname=sNullNodeX_sname;
        _inf_value17->terminated=sNullNodeX_terminated;
        struct sNode* __result155__ = ((struct sNode*)(right_value248=_inf_value17));
        if(right_value244) { come_call_finalizer(sNullNodeX_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value245) { come_call_finalizer(sNullNodeX_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0); }
        return __result155__;
    }
    struct sNode* __result156__ = ((struct sNode*)(right_value250=top_level_v93((char*)come_increment_ref_count(((char*)(right_value249=__builtin_string(buf)))),head,head_sline,info)));
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1); }
    if(right_value249) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0); }
    return __result156__;
}

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info){
void* right_value251;
struct tuple3$3sTypephcharphbool* multiple_assgin_var6;
struct sType* type3_129;
char* name2_130;
_Bool err_131;
void* right_value252;
struct sType* inf_type_132;
void* right_value253;
void* right_value254;
struct sNode* _inf_value18;
struct sImplementsNode* _inf_obj_value18;
void* right_value259;
void* right_value260;
memset(&right_value251, 0, sizeof(void*));
memset(&type3_129, 0, sizeof(struct sType*)); /* ccc */
memset(&name2_130, 0, sizeof(char*)); /* ccc */
memset(&err_131, 0, sizeof(_Bool)); /* ccc */
memset(&type3_129, 0, sizeof(struct sType*)); /* eee */
memset(&name2_130, 0, sizeof(char*)); /* eee */
memset(&err_131, 0, sizeof(_Bool)); /* eee */
memset(&right_value252, 0, sizeof(void*));
memset(&inf_type_132, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
    if(memcmp(info->p,"implements",strlen("implements"))==0) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assgin_var6=((struct tuple3$3sTypephcharphbool*)(right_value251=parse_type(info,(_Bool)0,(_Bool)1)));
        type3_129=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
        name2_130=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
        err_131=multiple_assgin_var6->v3;
        if(right_value251) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0); }
        if(!err_131) {
            exit(2);
        }
        inf_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(type3_129))));
        if(right_value252) { come_call_finalizer(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0); }
        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value18=come_increment_ref_count(((struct sImplementsNode*)(right_value254=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value253=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1))))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_132),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=sImplementsNode_finalize;
        _inf_value18->clone=sImplementsNode_clone;
        _inf_value18->compile=sImplementsNode_compile;
        _inf_value18->sline=sImplementsNode_sline;
        _inf_value18->sname=sImplementsNode_sname;
        _inf_value18->terminated=sImplementsNode_terminated;
        struct sNode* __result159__ = ((struct sNode*)(right_value259=_inf_value18));
        if(type3_129) { come_call_finalizer(sType_finalize,type3_129, (void*)0, (void*)0, 0, 0, 0); }
        if(name2_130) { name2_130 = come_decrement_ref_count(name2_130, (void*)0, (void*)0, 0, 0); }
        if(inf_type_132) { come_call_finalizer(sType_finalize,inf_type_132, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value253) { come_call_finalizer(sImplementsNode_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value254) { come_call_finalizer(sImplementsNode_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0); }
        return __result159__;
    }
    else if(*info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    struct sNode* __result160__ = ((struct sNode*)(right_value260=post_position_operator3_v20((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result160__;
}

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info){
void* right_value0;
char* __dec_obj1;
memset(&right_value0, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj1=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(info->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    struct sNullNodeX* __result7__ = self;
    if(self) { come_call_finalizer(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result7__;
}

static void sNullNodeX_finalize(struct sNullNodeX* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

_Bool sNullNodeX_terminated(){
    _Bool __result8__ = (_Bool)0;
    return __result8__;
}

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info){
    _Bool __result9__ = (_Bool)1;
    return __result9__;
}

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info){
    int __result10__ = self->sline;
    return __result10__;
}

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info){
void* right_value1;
memset(&right_value1, 0, sizeof(void*));
    char* __result11__ = ((char*)(right_value1=__builtin_string(self->sname)));
    return __result11__;
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* right_value32;
struct sType* __dec_obj20;
void* right_value33;
char* __dec_obj21;
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
    __dec_obj20=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value32=sType_clone(type))));
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
    if(right_value32) { come_call_finalizer(sType_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0); }
    self->sline=info->sline;
    __dec_obj21=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value33=__builtin_string(info->sname))));
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
    if(right_value33) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0); }
    struct sNewNode* __result27__ = self;
    if(self) { come_call_finalizer(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1); }
    return __result27__;
}

static struct sType* sType_clone(struct sType* self){
void* right_value2;
struct sType* result_0;
void* right_value5;
struct tuple1$1sTypeph* __dec_obj3;
void* right_value6;
char* __dec_obj4;
void* right_value13;
struct list$1sTypeph* __dec_obj8;
void* right_value21;
struct list$1sNodeph* __dec_obj12;
void* right_value22;
struct list$1sTypeph* __dec_obj13;
void* right_value29;
struct list$1charph* __dec_obj17;
void* right_value30;
struct tuple1$1sTypeph* __dec_obj18;
void* right_value31;
char* __dec_obj19;
memset(&right_value2, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sType* __result12__ = (void*)0;
            return __result12__;
        }
        result_0=(struct sType*)come_increment_ref_count(((struct sType*)(right_value2=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
        if(right_value2) { come_call_finalizer(sType_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)) {
            result_0->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj3=result_0->mNoSolvedGenericsType;
            result_0->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value5=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
            if(right_value5) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj4=result_0->mGenericsName;
            result_0->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value6=string_clone(self->mGenericsName))));
            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
            if(right_value6) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj8=result_0->mGenericsTypes;
            result_0->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value13=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
            if(right_value13) { come_call_finalizer(list$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj12=result_0->mArrayNum;
            result_0->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value21=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0); }
            if(right_value21) { come_call_finalizer(list$1sNodephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_0->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj13=result_0->mParamTypes;
            result_0->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
            if(right_value22) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj17=result_0->mParamNames;
            result_0->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value29=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
            if(right_value29) { come_call_finalizer(list$1charphp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj18=result_0->mResultType;
            result_0->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value30=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
            if(right_value30) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
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
            result_0->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value31=string_clone(self->mOriginalTypeName))));
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
            if(right_value31) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0); }
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
        struct sType* __result26__ = result_0;
        if(result_0) { come_call_finalizer(sType_finalize,result_0, (void*)0, (void*)0, 0, 0, 1); }
        return __result26__;
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
void* right_value3;
struct tuple1$1sTypeph* result_7;
void* right_value4;
struct sType* __dec_obj2;
memset(&right_value3, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value4, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple1$1sTypeph* __result13__ = (void*)0;
                    return __result13__;
                }
                result_7=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value3=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                if(right_value3) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj2=result_7->v1;
                    result_7->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value4=sType_clone(self->v1))));
                    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
                    if(right_value4) { come_call_finalizer(sType_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
                }
                struct tuple1$1sTypeph* __result14__ = result_7;
                if(result_7) { come_call_finalizer(tuple1$1sTypephp_finalize,result_7, (void*)0, (void*)0, 0, 0, 1); }
                return __result14__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value7;
void* right_value8;
struct list$1sTypeph* result_8;
struct list_item$1sTypeph* it_9;
void* right_value12;
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value12, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sTypeph* __result15__ = ((void*)0);
                    return __result15__;
                }
                result_8=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value8=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value7=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                if(right_value8) { come_call_finalizer(list$1sTypephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0); }
                it_9=self->head;
                while(it_9!=((void*)0)) {
                    list$1sTypephp_push_back2(result_8,(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(it_9->item)))));
                    if(right_value12) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0); }
                    it_9=it_9->next;
                }
                struct list$1sTypeph* __result17__ = result_8;
                if(result_8) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1); }
                return __result17__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sTypeph* __result16__ = self;
                    if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result16__;
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value9;
struct list_item$1sTypeph* litem_10;
struct sType* __dec_obj5;
void* right_value10;
struct list_item$1sTypeph* litem_11;
struct sType* __dec_obj6;
void* right_value11;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj7;
memset(&right_value9, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value10, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value11, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                        if(self->len==0) {
                            litem_10=((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_10->prev=((void*)0);
                            litem_10->next=((void*)0);
                            __dec_obj5=litem_10->item;
                            litem_10->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_10;
                            self->head=litem_10;
                        }
                        else if(self->len==1) {
                            litem_11=((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                            litem_11->prev=self->head;
                            litem_11->next=((void*)0);
                            __dec_obj6=litem_11->item;
                            litem_11->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_11;
                            self->head->next=litem_11;
                        }
                        else {
                            litem_12=((struct list_item$1sTypeph*)(right_value11=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
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
void* right_value14;
void* right_value15;
struct list$1sNodeph* result_13;
struct list_item$1sNodeph* it_14;
void* right_value20;
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value20, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1sNodeph* __result18__ = ((void*)0);
                    return __result18__;
                }
                result_13=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                if(right_value15) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0); }
                it_14=self->head;
                while(it_14!=((void*)0)) {
                    list$1sNodephp_push_back2(result_13,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=sNodep_clone(it_14->item)))));
                    if(right_value20) { right_value20 = come_decrement_ref_count(right_value20, ((struct sNode*)right_value20)->finalize, ((struct sNode*)right_value20)->_protocol_obj, 1, 0); } 
                    it_14=it_14->next;
                }
                struct list$1sNodeph* __result22__ = result_13;
                if(result_13) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1); }
                return __result22__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1sNodeph* __result19__ = self;
                    if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result19__;
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value16;
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj9;
void* right_value17;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj10;
void* right_value18;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj11;
memset(&right_value16, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value17, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                        if(self->len==0) {
                            litem_15=((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj9=litem_15->item;
                            litem_15->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0); }
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else if(self->len==1) {
                            litem_16=((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                            litem_16->prev=self->head;
                            litem_16->next=((void*)0);
                            __dec_obj10=litem_16->item;
                            litem_16->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0); }
                            self->tail=litem_16;
                            self->head->next=litem_16;
                        }
                        else {
                            litem_17=((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
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
void* right_value19;
struct sNode* result_18;
memset(&right_value19, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sNode*)); /* ddd */
                        if(self==(void*)0) {
                            struct sNode* __result20__ = (void*)0;
                            return __result20__;
                        }
                        result_18=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
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
                        struct sNode* __result21__ = result_18;
                        return __result21__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value23;
void* right_value24;
struct list$1charph* result_19;
struct list_item$1charph* it_20;
void* right_value28;
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_20, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value28, 0, sizeof(void*));
                if(self==((void*)0)) {
                    struct list$1charph* __result23__ = ((void*)0);
                    return __result23__;
                }
                result_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value24=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                if(right_value24) { come_call_finalizer(list$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0); }
                it_20=self->head;
                while(it_20!=((void*)0)) {
                    list$1charphp_push_back2(result_19,(char*)come_increment_ref_count(((char*)(right_value28=string_clone(it_20->item)))));
                    if(right_value28) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0); }
                    it_20=it_20->next;
                }
                struct list$1charph* __result25__ = result_19;
                if(result_19) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 1); }
                return __result25__;
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    struct list$1charph* __result24__ = self;
                    if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                    return __result24__;
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value25;
struct list_item$1charph* litem_21;
char* __dec_obj14;
void* right_value26;
struct list_item$1charph* litem_22;
char* __dec_obj15;
void* right_value27;
struct list_item$1charph* litem_23;
char* __dec_obj16;
memset(&right_value25, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value26, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value27, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*)); /* ddd */
                        if(self->len==0) {
                            litem_21=((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_21->prev=((void*)0);
                            litem_21->next=((void*)0);
                            __dec_obj14=litem_21->item;
                            litem_21->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_21;
                            self->head=litem_21;
                        }
                        else if(self->len==1) {
                            litem_22=((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                            litem_22->prev=self->head;
                            litem_22->next=((void*)0);
                            __dec_obj15=litem_22->item;
                            litem_22->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
                            self->tail=litem_22;
                            self->head->next=litem_22;
                        }
                        else {
                            litem_23=((struct list_item$1charph*)(right_value27=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
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

static void sNewNode_finalize(struct sNewNode* self){
                if(self!=((void*)0)&&self->type!=((void*)0)) {
                    if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

int sNewNode_sline(struct sNewNode* self, struct sInfo* info){
    int __result28__ = self->sline;
    return __result28__;
}

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info){
void* right_value34;
memset(&right_value34, 0, sizeof(void*));
    char* __result29__ = ((char*)(right_value34=__builtin_string(self->sname)));
    return __result29__;
}

_Bool sNewNode_terminated(){
    _Bool __result30__ = (_Bool)0;
    return __result30__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_24;
void* right_value35;
struct CVALUE* come_value_25;
void* right_value36;
void* right_value37;
struct buffer* num_string_26;
struct sNode* it_28;
void* right_value38;
struct CVALUE* cvalue_30;
void* right_value39;
void* right_value40;
struct sType* type2_31;
void* right_value41;
char* type_name_34;
void* right_value42;
void* right_value43;
char* __dec_obj22;
void* right_value44;
char* __dec_obj23;
void* right_value45;
struct sType* __dec_obj24;
memset(&type_24, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value35, 0, sizeof(void*));
memset(&come_value_25, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&num_string_26, 0, sizeof(struct buffer*)); /* ddd */
memset(&it_28, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value38, 0, sizeof(void*));
memset(&cvalue_30, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&type2_31, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value41, 0, sizeof(void*));
memset(&type_name_34, 0, sizeof(char*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
    type_24=self->type;
    come_value_25=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value35=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value35) { come_call_finalizer(CVALUE_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
    num_string_26=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value36) { come_call_finalizer(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value37) { come_call_finalizer(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(num_string_26,"1");
    for(
    it_28=list$1sNodephp_begin((type_24->mArrayNum));
    !list$1sNodephp_end((type_24->mArrayNum));
    it_28=list$1sNodephp_next((type_24->mArrayNum))
    ){
        if(!it_28->compile(it_28->_protocol_obj,info)) {
            _Bool __result36__ = (_Bool)0;
            return __result36__;
        }
        cvalue_30=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value38=get_value_from_stack(-1,info))));
        if(right_value38) { come_call_finalizer(CVALUE_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        buffer_append_str(num_string_26,((char*)(right_value39=xsprintf("*(%s)",cvalue_30->c_value))));
        if(right_value39) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0); }
        if(cvalue_30) { come_call_finalizer(CVALUE_finalize,cvalue_30, (void*)0, (void*)0, 0, 0, 0); }
    }
    type2_31=(struct sType*)come_increment_ref_count(((struct sType*)(right_value40=solve_generics(type_24,info->generics_type,info))));
    if(right_value40) { come_call_finalizer(sType_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
    list$1sNodephp_reset(type2_31->mArrayNum);
    type_name_34=(char*)come_increment_ref_count(((char*)(right_value41=make_type_name_string(type2_31,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    if(right_value41) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0); }
    __dec_obj22=come_value_25->c_value;
    come_value_25->c_value=(char*)come_increment_ref_count(((char*)(right_value43=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s))",type_name_34,type_name_34,((char*)(right_value42=buffer_to_string(num_string_26)))))));
    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
    if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
    if(right_value43) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0); }
    type2_31->mHeap=(_Bool)1;
    type2_31->mPointerNum++;
    __dec_obj23=come_value_25->c_value;
    come_value_25->c_value=(char*)come_increment_ref_count(((char*)(right_value44=append_object_to_right_values(come_value_25->c_value,(struct sType*)come_increment_ref_count(type2_31),info))));
    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
    if(right_value44) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0); }
    __dec_obj24=come_value_25->type;
    come_value_25->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=sType_clone(type2_31))));
    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
    if(right_value45) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0); }
    come_value_25->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_25->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_25));
    _Bool __result37__ = (_Bool)1;
    if(come_value_25) { come_call_finalizer(CVALUE_finalize,come_value_25, (void*)0, (void*)0, 0, 0, 0); }
    if(num_string_26) { come_call_finalizer(buffer_finalize,num_string_26, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_31) { come_call_finalizer(sType_finalize,type2_31, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name_34) { type_name_34 = come_decrement_ref_count(type_name_34, (void*)0, (void*)0, 0, 0); }
    return __result37__;
}

static void CVALUE_finalize(struct CVALUE* self){
        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
            if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
        }
        if(self!=((void*)0)&&self->type!=((void*)0)) {
            if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
struct sNode* result_27;
memset(&result_27, 0, sizeof(struct sNode*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sNode* __result31__ = self->it->item;
            return __result31__;
        }
        memset(&result_27,0,sizeof(struct sNode*));
        struct sNode* __result32__ = result_27;
        return __result32__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
        _Bool __result33__ = self->it==((void*)0);
        return __result33__;
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
struct sNode* result_29;
memset(&result_29, 0, sizeof(struct sNode*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sNode* __result34__ = self->it->item;
            return __result34__;
        }
        memset(&result_29,0,sizeof(struct sNode*));
        struct sNode* __result35__ = result_29;
        return __result35__;
}

static void list$1sNodephp_reset(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_32;
struct list_item$1sNodeph* prev_it_33;
memset(&it_32, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&prev_it_33, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
        it_32=self->head;
        while(it_32!=((void*)0)) {
            prev_it_33=it_32;
            it_32=it_32->next;
            if(prev_it_33) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_33, (void*)0, (void*)0, 0, 0, 0); }
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    if(self->item) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0); } 
                }
}

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* right_value46;
struct list_item$1CVALUEph* litem_35;
struct CVALUE* __dec_obj25;
void* right_value47;
struct list_item$1CVALUEph* litem_36;
struct CVALUE* __dec_obj26;
void* right_value48;
struct list_item$1CVALUEph* litem_37;
struct CVALUE* __dec_obj27;
memset(&right_value46, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value47, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value48, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
        if(self->len==0) {
            litem_35=((struct list_item$1CVALUEph*)(right_value46=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_35->prev=((void*)0);
            litem_35->next=((void*)0);
            __dec_obj25=litem_35->item;
            litem_35->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
            self->tail=litem_35;
            self->head=litem_35;
        }
        else if(self->len==1) {
            litem_36=((struct list_item$1CVALUEph*)(right_value47=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_36->prev=self->head;
            litem_36->next=((void*)0);
            __dec_obj26=litem_36->item;
            litem_36->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
            self->tail=litem_36;
            self->head->next=litem_36;
        }
        else {
            litem_37=((struct list_item$1CVALUEph*)(right_value48=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_37->prev=self->tail;
            litem_37->next=((void*)0);
            __dec_obj27=litem_37->item;
            litem_37->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
            self->tail->next=litem_37;
            self->tail=litem_37;
        }
        self->len++;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* right_value171;
struct sNewNode* result_100;
void* right_value172;
struct sType* __dec_obj75;
void* right_value173;
char* __dec_obj76;
memset(&right_value171, 0, sizeof(void*));
memset(&result_100, 0, sizeof(struct sNewNode*)); /* ddd */
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sNewNode* __result119__ = (void*)0;
                    return __result119__;
                }
                result_100=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value171=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1)))));
                if(right_value171) { come_call_finalizer(sNewNode_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->type!=((void*)0)) {
                    __dec_obj75=result_100->type;
                    result_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_clone(self->type))));
                    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
                    if(right_value172) { come_call_finalizer(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_100->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj76=result_100->sname;
                    result_100->sname=(char*)come_increment_ref_count(((char*)(right_value173=string_clone(self->sname))));
                    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0); }
                    if(right_value173) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0); }
                }
                struct sNewNode* __result120__ = result_100;
                if(result_100) { come_call_finalizer(sNewNode_finalize,result_100, (void*)0, (void*)0, 0, 0, 1); }
                return __result120__;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* right_value55;
struct sNode* __dec_obj30;
void* right_value56;
struct sType* __dec_obj31;
void* right_value57;
char* __dec_obj32;
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
    __dec_obj30=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNodep_clone(obj_exp))));
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0); }
    if(right_value55) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0); } 
    __dec_obj31=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(inf_type))));
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
    if(right_value56) { come_call_finalizer(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0); }
    self->sline=info->sline;
    __dec_obj32=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value57=__builtin_string(info->sname))));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
    if(right_value57) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0); }
    struct sImplementsNode* __result41__ = self;
    if(self) { come_call_finalizer(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(obj_exp) { obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1); } 
    if(inf_type) { come_call_finalizer(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1); }
    return __result41__;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
            if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
                if(self->obj_exp) { self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
                if(self->inf_type) { come_call_finalizer(sType_finalize,self->inf_type, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info){
    int __result42__ = self->sline;
    return __result42__;
}

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info){
void* right_value58;
memset(&right_value58, 0, sizeof(void*));
    char* __result43__ = ((char*)(right_value58=__builtin_string(self->sname)));
    return __result43__;
}

_Bool sImplementsNode_terminated(){
    _Bool __result44__ = (_Bool)0;
    return __result44__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* right_value59;
struct sNode* obj_exp_39;
void* right_value60;
struct sType* inf_type_40;
void* right_value61;
struct CVALUE* come_value_41;
void* right_value62;
struct sType* type_42;
struct sClass* klass_43;
void* right_value63;
struct CVALUE* come_value2_44;
void* right_value64;
struct sType* type2_45;
void* right_value65;
char* type_name_46;
void* right_value66;
char* type_name2_47;
static int inf_num_48=0;
void* right_value67;
char* buf_49;
void* right_value68;
char* buf2_50;
void* right_value69;
struct sType* typeX_51;
void* right_value70;
void* right_value71;
int i_52;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_56;
struct sType* field_type_57;
void* right_value72;
char* method_name_58;
void* right_value73;
char* __dec_obj33;
void* right_value74;
struct sType* type3_59;
void* right_value75;
struct sType* __dec_obj34;
void* right_value76;
char* __dec_obj35;
memset(&right_value59, 0, sizeof(void*));
memset(&obj_exp_39, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value60, 0, sizeof(void*));
memset(&inf_type_40, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value61, 0, sizeof(void*));
memset(&come_value_41, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&type_42, 0, sizeof(struct sType*)); /* ddd */
memset(&klass_43, 0, sizeof(struct sClass*)); /* ddd */
memset(&right_value63, 0, sizeof(void*));
memset(&come_value2_44, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value64, 0, sizeof(void*));
memset(&type2_45, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value65, 0, sizeof(void*));
memset(&type_name_46, 0, sizeof(char*)); /* ddd */
memset(&right_value66, 0, sizeof(void*));
memset(&type_name2_47, 0, sizeof(char*)); /* ddd */
memset(&right_value67, 0, sizeof(void*));
memset(&buf_49, 0, sizeof(char*)); /* ddd */
memset(&right_value68, 0, sizeof(void*));
memset(&buf2_50, 0, sizeof(char*)); /* ddd */
memset(&right_value69, 0, sizeof(void*));
memset(&typeX_51, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&i_52, 0, sizeof(int)); /* ddd */
memset(&name_56, 0, sizeof(char*)); /* ccc */
memset(&field_type_57, 0, sizeof(struct sType*)); /* ccc */
memset(&name_56, 0, sizeof(char*)); /* eee */
memset(&field_type_57, 0, sizeof(struct sType*)); /* eee */
memset(&right_value72, 0, sizeof(void*));
memset(&method_name_58, 0, sizeof(char*)); /* ddd */
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&type3_59, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
    obj_exp_39=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value59=sNodep_clone(self->obj_exp))));
    if(right_value59) { right_value59 = come_decrement_ref_count(right_value59, ((struct sNode*)right_value59)->finalize, ((struct sNode*)right_value59)->_protocol_obj, 1, 0); } 
    inf_type_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(self->inf_type))));
    if(right_value60) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
    if(!obj_exp_39->compile(obj_exp_39->_protocol_obj,info)) {
        _Bool __result45__ = (_Bool)0;
        return __result45__;
    }
    come_value_41=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value61=get_value_from_stack(-1,info))));
    if(right_value61) { come_call_finalizer(CVALUE_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_42=(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(come_value_41->type))));
    if(right_value62) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0); }
    type_42->mPointerNum--;
    type_42->mHeap=(_Bool)0;
    klass_43=inf_type_40->mClass;
    come_value2_44=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value63=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value63) { come_call_finalizer(CVALUE_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0); }
    type2_45=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(inf_type_40))));
    if(right_value64) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
    type_name_46=(char*)come_increment_ref_count(((char*)(right_value65=make_type_name_string(inf_type_40,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    if(right_value65) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0); }
    type_name2_47=(char*)come_increment_ref_count(((char*)(right_value66=make_type_name_string(type_42,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    if(right_value66) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0); }
    buf_49=(char*)come_increment_ref_count(((char*)(right_value67=xsprintf("%s* _inf_value%d;\n",type_name_46,++inf_num_48))));
    if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0); }
    add_come_code_at_function_head(info,buf_49);
    buf2_50=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("%s* _inf_obj_value%d;\n",type_name2_47,inf_num_48))));
    if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
    add_come_code_at_function_head(info,buf2_50);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s));\n",inf_num_48,type_name_46,type_name_46);
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_48,come_value_41->c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_48,inf_num_48);
    typeX_51=(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=sType_clone(type_42))));
    if(right_value69) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0); }
    typeX_51->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(right_value70=create_finalizer_automatically(typeX_51,"finalize",info)));
    if(right_value70) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
    ((struct tuple2$2sFunpcharph*)(right_value71=create_cloner_automatically(typeX_51,"clone",info)));
    if(right_value71) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
    for(
    i_52=1;
    i_52<list$1tuple2$2charphsTypephphp_length(klass_43->mFields);
    i_52++
    ){
        multiple_assgin_var1=list$1tuple2$2charphsTypephphp_operator_load_element(klass_43->mFields,i_52);
        name_56=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type_57=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        method_name_58=(char*)come_increment_ref_count(((char*)(right_value72=create_method_name(type_42,(_Bool)0,name_56,info))));
        if(right_value72) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0); }
        add_come_code(info,"_inf_value%d->%s=%s;\n",inf_num_48,name_56,method_name_58);
        if(name_56) { name_56 = come_decrement_ref_count(name_56, (void*)0, (void*)0, 0, 0); }
        if(field_type_57) { come_call_finalizer(sType_finalize,field_type_57, (void*)0, (void*)0, 0, 0, 0); }
        if(method_name_58) { method_name_58 = come_decrement_ref_count(method_name_58, (void*)0, (void*)0, 0, 0); }
    }
    __dec_obj33=come_value2_44->c_value;
    come_value2_44->c_value=(char*)come_increment_ref_count(((char*)(right_value73=xsprintf("_inf_value%d",inf_num_48))));
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0); }
    if(right_value73) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0); }
    type3_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(inf_type_40))));
    if(right_value74) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
    type3_59->mPointerNum++;
    type3_59->mHeap=(_Bool)1;
    type2_45->mHeap=(_Bool)1;
    __dec_obj34=come_value2_44->type;
    come_value2_44->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(type2_45))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
    if(right_value75) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj35=come_value2_44->c_value;
    come_value2_44->c_value=(char*)come_increment_ref_count(((char*)(right_value76=append_object_to_right_values(come_value2_44->c_value,(struct sType*)come_increment_ref_count(type3_59),info))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
    if(right_value76) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0); }
    come_value2_44->type->mPointerNum++;
    come_value2_44->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_44->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_44));
    _Bool __result50__ = (_Bool)1;
    if(obj_exp_39) { obj_exp_39 = come_decrement_ref_count(obj_exp_39, ((struct sNode*)obj_exp_39)->finalize, ((struct sNode*)obj_exp_39)->_protocol_obj, 0, 0); } 
    if(inf_type_40) { come_call_finalizer(sType_finalize,inf_type_40, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_41) { come_call_finalizer(CVALUE_finalize,come_value_41, (void*)0, (void*)0, 0, 0, 0); }
    if(type_42) { come_call_finalizer(sType_finalize,type_42, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_44) { come_call_finalizer(CVALUE_finalize,come_value2_44, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_45) { come_call_finalizer(sType_finalize,type2_45, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name_46) { type_name_46 = come_decrement_ref_count(type_name_46, (void*)0, (void*)0, 0, 0); }
    if(type_name2_47) { type_name2_47 = come_decrement_ref_count(type_name2_47, (void*)0, (void*)0, 0, 0); }
    if(buf_49) { buf_49 = come_decrement_ref_count(buf_49, (void*)0, (void*)0, 0, 0); }
    if(buf2_50) { buf2_50 = come_decrement_ref_count(buf2_50, (void*)0, (void*)0, 0, 0); }
    if(typeX_51) { come_call_finalizer(sType_finalize,typeX_51, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_59) { come_call_finalizer(sType_finalize,type3_59, (void*)0, (void*)0, 0, 0, 0); }
    return __result50__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
        if(self!=((void*)0)&&self->v2!=((void*)0)) {
            if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
        }
}

static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self){
        int __result46__ = self->len;
        return __result46__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int index){
struct tuple2$2charphsTypeph* default_value_53;
memset(&default_value_53, 0, sizeof(struct tuple2$2charphsTypeph*)); /* bbb */
            memset(&default_value_53,0,sizeof(struct tuple2$2charphsTypeph*));
            struct tuple2$2charphsTypeph* __result49__ = list$1tuple2$2charphsTypephphp_item(self,index,default_value_53);
            return __result49__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_item(struct list$1tuple2$2charphsTypephph* self, int position, struct tuple2$2charphsTypeph* default_value){
struct list_item$1tuple2$2charphsTypephph* it_54;
int i_55;
memset(&it_54, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*)); /* ddd */
memset(&i_55, 0, sizeof(int)); /* ddd */
                if(position<0) {
                    position+=self->len;
                }
                it_54=self->head;
                i_55=0;
                while(it_54!=((void*)0)) {
                    if(position==i_55) {
                        struct tuple2$2charphsTypeph* __result47__ = it_54->item;
                        return __result47__;
                    }
                    it_54=it_54->next;
                    i_55++;
                }
                struct tuple2$2charphsTypeph* __result48__ = default_value;
                return __result48__;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* right_value77;
char* __dec_obj36;
memset(&right_value77, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj36=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value77=__builtin_string(info->sname))));
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0); }
    if(right_value77) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0); }
    struct sTrueNode* __result51__ = self;
    if(self) { come_call_finalizer(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result51__;
}

static void sTrueNode_finalize(struct sTrueNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info){
    int __result52__ = self->sline;
    return __result52__;
}

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info){
void* right_value78;
memset(&right_value78, 0, sizeof(void*));
    char* __result53__ = ((char*)(right_value78=__builtin_string(self->sname)));
    return __result53__;
}

_Bool sTrueNode_terminated(){
    _Bool __result54__ = (_Bool)0;
    return __result54__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* right_value79;
struct CVALUE* come_value_60;
void* right_value80;
char* __dec_obj37;
void* right_value81;
void* right_value82;
struct sType* __dec_obj38;
memset(&right_value79, 0, sizeof(void*));
memset(&come_value_60, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
    come_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value79=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value79) { come_call_finalizer(CVALUE_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj37=come_value_60->c_value;
    come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("(_Bool)1"))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
    if(right_value80) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0); }
    __dec_obj38=come_value_60->type;
    come_value_60->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
    if(right_value81) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value82) { come_call_finalizer(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0); }
    come_value_60->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_60->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_60));
    _Bool __result55__ = (_Bool)1;
    if(come_value_60) { come_call_finalizer(CVALUE_finalize,come_value_60, (void*)0, (void*)0, 0, 0, 0); }
    return __result55__;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* right_value177;
struct sTrueNode* result_101;
void* right_value178;
char* __dec_obj77;
memset(&right_value177, 0, sizeof(void*));
memset(&result_101, 0, sizeof(struct sTrueNode*)); /* ddd */
memset(&right_value178, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sTrueNode* __result122__ = (void*)0;
                return __result122__;
            }
            result_101=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value177=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1)))));
            if(right_value177) { come_call_finalizer(sTrueNode_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_101->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj77=result_101->sname;
                result_101->sname=(char*)come_increment_ref_count(((char*)(right_value178=string_clone(self->sname))));
                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0); }
                if(right_value178) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0); }
            }
            struct sTrueNode* __result123__ = result_101;
            if(result_101) { come_call_finalizer(sTrueNode_finalize,result_101, (void*)0, (void*)0, 0, 0, 1); }
            return __result123__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* right_value88;
char* __dec_obj40;
memset(&right_value88, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj40=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(info->sname))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
    if(right_value88) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0); }
    struct sFalseNode* __result59__ = self;
    if(self) { come_call_finalizer(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result59__;
}

static void sFalseNode_finalize(struct sFalseNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info){
    int __result60__ = self->sline;
    return __result60__;
}

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info){
void* right_value89;
memset(&right_value89, 0, sizeof(void*));
    char* __result61__ = ((char*)(right_value89=__builtin_string(self->sname)));
    return __result61__;
}

_Bool sFalseNode_terminated(){
    _Bool __result62__ = (_Bool)0;
    return __result62__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* right_value90;
struct CVALUE* come_value_62;
void* right_value91;
char* __dec_obj41;
void* right_value92;
void* right_value93;
struct sType* __dec_obj42;
memset(&right_value90, 0, sizeof(void*));
memset(&come_value_62, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
    come_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value90=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value90) { come_call_finalizer(CVALUE_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj41=come_value_62->c_value;
    come_value_62->c_value=(char*)come_increment_ref_count(((char*)(right_value91=xsprintf("(_Bool)0"))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
    if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
    __dec_obj42=come_value_62->type;
    come_value_62->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"bool",info,(_Bool)0))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
    if(right_value92) { come_call_finalizer(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value93) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0); }
    come_value_62->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_62->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_62));
    _Bool __result63__ = (_Bool)1;
    if(come_value_62) { come_call_finalizer(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0); }
    return __result63__;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* right_value182;
struct sFalseNode* result_102;
void* right_value183;
char* __dec_obj78;
memset(&right_value182, 0, sizeof(void*));
memset(&result_102, 0, sizeof(struct sFalseNode*)); /* ddd */
memset(&right_value183, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sFalseNode* __result125__ = (void*)0;
                return __result125__;
            }
            result_102=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value182=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1)))));
            if(right_value182) { come_call_finalizer(sFalseNode_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_102->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj78=result_102->sname;
                result_102->sname=(char*)come_increment_ref_count(((char*)(right_value183=string_clone(self->sname))));
                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0); }
                if(right_value183) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0); }
            }
            struct sFalseNode* __result126__ = result_102;
            if(result_102) { come_call_finalizer(sFalseNode_finalize,result_102, (void*)0, (void*)0, 0, 0, 1); }
            return __result126__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* right_value99;
struct sType* __dec_obj44;
void* right_value100;
char* __dec_obj45;
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
    __dec_obj44=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(type))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
    if(right_value99) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0); }
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(info->sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
    if(right_value100) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0); }
    struct sSizeOfNode* __result67__ = self;
    if(self) { come_call_finalizer(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1); }
    return __result67__;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
                if(self!=((void*)0)&&self->type!=((void*)0)) {
                    if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info){
    int __result68__ = self->sline;
    return __result68__;
}

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info){
void* right_value101;
memset(&right_value101, 0, sizeof(void*));
    char* __result69__ = ((char*)(right_value101=__builtin_string(self->sname)));
    return __result69__;
}

_Bool sSizeOfNode_terminated(){
    _Bool __result70__ = (_Bool)0;
    return __result70__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_64;
void* right_value102;
struct CVALUE* come_value_65;
void* right_value103;
struct sType* type2_66;
void* right_value104;
char* type_name_67;
void* right_value105;
char* __dec_obj46;
void* right_value106;
void* right_value107;
struct sType* __dec_obj47;
memset(&type_64, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value102, 0, sizeof(void*));
memset(&come_value_65, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value103, 0, sizeof(void*));
memset(&type2_66, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value104, 0, sizeof(void*));
memset(&type_name_67, 0, sizeof(char*)); /* ddd */
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
    type_64=self->type;
    come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value102=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value102) { come_call_finalizer(CVALUE_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0); }
    type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=solve_generics(type_64,info->generics_type,info))));
    if(right_value103) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
    type_name_67=(char*)come_increment_ref_count(((char*)(right_value104=make_type_name_string(type2_66,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    if(right_value104) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0); }
    __dec_obj46=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("sizeof(%s)",type_name_67))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
    if(right_value105) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0); }
    __dec_obj47=come_value_65->type;
    come_value_65->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value106=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"long",info,(_Bool)0))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
    if(right_value106) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value107) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0); }
    come_value_65->type->mUnsigned=(_Bool)1;
    come_value_65->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_65->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
    _Bool __result71__ = (_Bool)1;
    if(come_value_65) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_66) { come_call_finalizer(sType_finalize,type2_66, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name_67) { type_name_67 = come_decrement_ref_count(type_name_67, (void*)0, (void*)0, 0, 0); }
    return __result71__;
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* right_value108;
struct sNode* __dec_obj48;
void* right_value109;
char* __dec_obj49;
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
    __dec_obj48=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value108=sNodep_clone(node))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0); }
    if(right_value108) { right_value108 = come_decrement_ref_count(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0); } 
    self->sline=info->sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(info->sname))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
    if(right_value109) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0); }
    struct sDeleteNode* __result72__ = self;
    if(self) { come_call_finalizer(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result72__;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info){
    int __result73__ = self->sline;
    return __result73__;
}

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info){
void* right_value110;
memset(&right_value110, 0, sizeof(void*));
    char* __result74__ = ((char*)(right_value110=__builtin_string(self->sname)));
    return __result74__;
}

_Bool sDeleteNode_terminated(){
    _Bool __result75__ = (_Bool)0;
    return __result75__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_68;
void* right_value111;
struct CVALUE* come_value_69;
memset(&node_68, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value111, 0, sizeof(void*));
memset(&come_value_69, 0, sizeof(struct CVALUE*)); /* ddd */
    node_68=self->node;
    if(!node_68->compile(node_68->_protocol_obj,info)) {
        _Bool __result76__ = (_Bool)0;
        return __result76__;
    }
    come_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=get_value_from_stack(-1,info))));
    if(right_value111) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    free_object(come_value_69->type,come_value_69->c_value,(_Bool)0,(_Bool)0,info);
    _Bool __result77__ = (_Bool)1;
    if(come_value_69) { come_call_finalizer(CVALUE_finalize,come_value_69, (void*)0, (void*)0, 0, 0, 0); }
    return __result77__;
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* right_value112;
struct sNode* __dec_obj50;
void* right_value113;
char* __dec_obj51;
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
    __dec_obj50=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNodep_clone(node))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0); }
    if(right_value112) { right_value112 = come_decrement_ref_count(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0); } 
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(info->sname))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
    if(right_value113) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0); }
    struct sBorrowNode* __result78__ = self;
    if(self) { come_call_finalizer(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result78__;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info){
    int __result79__ = self->sline;
    return __result79__;
}

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info){
void* right_value114;
memset(&right_value114, 0, sizeof(void*));
    char* __result80__ = ((char*)(right_value114=__builtin_string(self->sname)));
    return __result80__;
}

_Bool sBorrowNode_terminated(){
    _Bool __result81__ = (_Bool)0;
    return __result81__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_70;
void* right_value115;
struct CVALUE* come_value_71;
int right_value_id_72;
memset(&node_70, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value115, 0, sizeof(void*));
memset(&come_value_71, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value_id_72, 0, sizeof(int)); /* ddd */
    node_70=self->node;
    if(!node_70->compile(node_70->_protocol_obj,info)) {
        _Bool __result82__ = (_Bool)0;
        return __result82__;
    }
    come_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value115=get_value_from_stack(-1,info))));
    if(right_value115) { come_call_finalizer(CVALUE_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_71->type->mHeap=(_Bool)0;
    right_value_id_72=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_71->c_value));
    if(right_value_id_72!=-1) {
        remove_object_from_right_values(right_value_id_72,info);
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_71));
    _Bool __result83__ = (_Bool)1;
    if(come_value_71) { come_call_finalizer(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0); }
    return __result83__;
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* right_value116;
struct sNode* __dec_obj52;
void* right_value117;
char* __dec_obj53;
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
    __dec_obj52=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNodep_clone(node))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0); }
    if(right_value116) { right_value116 = come_decrement_ref_count(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0); } 
    self->sline=info->sline;
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(info->sname))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
    if(right_value117) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0); }
    struct sCloneNode* __result84__ = self;
    if(self) { come_call_finalizer(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result84__;
}

static void sCloneNode_finalize(struct sCloneNode* self){
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info){
    int __result85__ = self->sline;
    return __result85__;
}

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info){
void* right_value118;
memset(&right_value118, 0, sizeof(void*));
    char* __result86__ = ((char*)(right_value118=__builtin_string(self->sname)));
    return __result86__;
}

_Bool sCloneNode_terminated(){
    _Bool __result87__ = (_Bool)0;
    return __result87__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_73;
void* right_value119;
struct CVALUE* left_value_74;
void* right_value120;
struct sType* left_type_75;
void* right_value121;
struct CVALUE* come_value_76;
void* right_value122;
struct tuple2$2sTypephcharph* multiple_assgin_var2;
struct sType* result_type_77;
char* c_value_78;
char* __dec_obj54;
void* right_value123;
struct sType* __dec_obj55;
void* right_value124;
char* __dec_obj56;
memset(&node_73, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value119, 0, sizeof(void*));
memset(&left_value_74, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value120, 0, sizeof(void*));
memset(&left_type_75, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value121, 0, sizeof(void*));
memset(&come_value_76, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value122, 0, sizeof(void*));
memset(&result_type_77, 0, sizeof(struct sType*)); /* ccc */
memset(&c_value_78, 0, sizeof(char*)); /* ccc */
memset(&result_type_77, 0, sizeof(struct sType*)); /* eee */
memset(&c_value_78, 0, sizeof(char*)); /* eee */
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
    node_73=self->node;
    if(!node_73->compile(node_73->_protocol_obj,info)) {
        _Bool __result88__ = (_Bool)0;
        return __result88__;
    }
    left_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))));
    if(right_value119) { come_call_finalizer(CVALUE_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    left_type_75=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(left_value_74->type))));
    if(right_value120) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
    come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value121) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0); }
    multiple_assgin_var2=((struct tuple2$2sTypephcharph*)(right_value122=clone_object(left_type_75,left_value_74->c_value,info)));
    result_type_77=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
    c_value_78=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
    if(right_value122) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj54=come_value_76->c_value;
    come_value_76->c_value=(char*)come_increment_ref_count(c_value_78);
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
    __dec_obj55=come_value_76->type;
    come_value_76->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(result_type_77))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
    if(right_value123) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0); }
    come_value_76->var=((void*)0);
    if(left_type_75->mClass->mStruct) {
        come_value_76->type->mHeap=(_Bool)1;
    }
    if(come_value_76->type->mHeap) {
        __dec_obj56=come_value_76->c_value;
        come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value124=append_object_to_right_values(come_value_76->c_value,(struct sType*)come_increment_ref_count(left_type_75),info))));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
        if(right_value124) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0); }
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
    _Bool __result89__ = (_Bool)1;
    if(left_value_74) { come_call_finalizer(CVALUE_finalize,left_value_74, (void*)0, (void*)0, 0, 0, 0); }
    if(left_type_75) { come_call_finalizer(sType_finalize,left_type_75, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_76) { come_call_finalizer(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_77) { come_call_finalizer(sType_finalize,result_type_77, (void*)0, (void*)0, 0, 0, 0); }
    if(c_value_78) { c_value_78 = come_decrement_ref_count(c_value_78, (void*)0, (void*)0, 0, 0); }
    return __result89__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->v2!=((void*)0)) {
            if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
        }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* right_value125;
struct sNode* __dec_obj57;
void* right_value126;
char* __dec_obj58;
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
    __dec_obj57=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNodep_clone(node))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0); }
    if(right_value125) { right_value125 = come_decrement_ref_count(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0); } 
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(info->sname))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
    if(right_value126) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0); }
    struct sDummyHeapNode* __result90__ = self;
    if(self) { come_call_finalizer(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result90__;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info){
    int __result91__ = self->sline;
    return __result91__;
}

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info){
void* right_value127;
memset(&right_value127, 0, sizeof(void*));
    char* __result92__ = ((char*)(right_value127=__builtin_string(self->sname)));
    return __result92__;
}

_Bool sDummyHeapNode_terminated(){
    _Bool __result93__ = (_Bool)0;
    return __result93__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_79;
void* right_value128;
struct CVALUE* come_value_80;
memset(&node_79, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value128, 0, sizeof(void*));
memset(&come_value_80, 0, sizeof(struct CVALUE*)); /* ddd */
    node_79=self->node;
    if(!node_79->compile(node_79->_protocol_obj,info)) {
        _Bool __result94__ = (_Bool)0;
        return __result94__;
    }
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=get_value_from_stack(-1,info))));
    if(right_value128) { come_call_finalizer(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_80->type->mHeap=(_Bool)1;
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_80));
    _Bool __result95__ = (_Bool)1;
    if(come_value_80) { come_call_finalizer(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0); }
    return __result95__;
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* right_value129;
struct sNode* __dec_obj59;
void* right_value130;
char* __dec_obj60;
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
    __dec_obj59=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNodep_clone(node))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0); }
    if(right_value129) { right_value129 = come_decrement_ref_count(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0); } 
    self->sline=info->sline;
    __dec_obj60=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(info->sname))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
    if(right_value130) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0); }
    struct sGCIncNode* __result96__ = self;
    if(self) { come_call_finalizer(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result96__;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info){
    int __result97__ = self->sline;
    return __result97__;
}

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info){
void* right_value131;
memset(&right_value131, 0, sizeof(void*));
    char* __result98__ = ((char*)(right_value131=__builtin_string(self->sname)));
    return __result98__;
}

_Bool sGCIncNode_terminated(){
    _Bool __result99__ = (_Bool)0;
    return __result99__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_81;
void* right_value132;
struct CVALUE* come_value_82;
struct sType* type_83;
void* right_value133;
char* type_name_84;
void* right_value134;
char* __dec_obj61;
memset(&node_81, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value132, 0, sizeof(void*));
memset(&come_value_82, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&type_83, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value133, 0, sizeof(void*));
memset(&type_name_84, 0, sizeof(char*)); /* ddd */
memset(&right_value134, 0, sizeof(void*));
    node_81=self->node;
    if(!node_81->compile(node_81->_protocol_obj,info)) {
        _Bool __result100__ = (_Bool)0;
        return __result100__;
    }
    come_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value132=get_value_from_stack(-1,info))));
    if(right_value132) { come_call_finalizer(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_83=come_value_82->type;
    if(come_value_82->type->mHeap) {
        type_name_84=(char*)come_increment_ref_count(((char*)(right_value133=make_type_name_string(type_83,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        if(right_value133) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0); }
        __dec_obj61=come_value_82->c_value;
        come_value_82->c_value=(char*)come_increment_ref_count(((char*)(right_value134=increment_ref_count_object(come_value_82->type,come_value_82->c_value,info))));
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
        if(right_value134) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0); }
        if(type_name_84) { type_name_84 = come_decrement_ref_count(type_name_84, (void*)0, (void*)0, 0, 0); }
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_82));
    _Bool __result101__ = (_Bool)1;
    if(come_value_82) { come_call_finalizer(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0); }
    return __result101__;
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* right_value135;
struct sNode* __dec_obj62;
void* right_value136;
char* __dec_obj63;
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
    __dec_obj62=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value135=sNodep_clone(node))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0); }
    if(right_value135) { right_value135 = come_decrement_ref_count(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0); } 
    self->sline=info->sline;
    __dec_obj63=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(info->sname))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
    if(right_value136) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0); }
    struct sGCDecNode* __result102__ = self;
    if(self) { come_call_finalizer(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result102__;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                if(self->node) { self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info){
    int __result103__ = self->sline;
    return __result103__;
}

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info){
void* right_value137;
memset(&right_value137, 0, sizeof(void*));
    char* __result104__ = ((char*)(right_value137=__builtin_string(self->sname)));
    return __result104__;
}

_Bool sGCDecNode_terminated(){
    _Bool __result105__ = (_Bool)0;
    return __result105__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_85;
void* right_value138;
struct CVALUE* come_value_86;
struct sType* type_87;
memset(&node_85, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value138, 0, sizeof(void*));
memset(&come_value_86, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&type_87, 0, sizeof(struct sType*)); /* ddd */
    node_85=self->node;
    if(!node_85->compile(node_85->_protocol_obj,info)) {
        _Bool __result106__ = (_Bool)0;
        return __result106__;
    }
    come_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=get_value_from_stack(-1,info))));
    if(right_value138) { come_call_finalizer(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type_87=come_value_86->type;
    decrement_ref_count_object(type_87,come_value_86->c_value,info);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_86));
    _Bool __result107__ = (_Bool)1;
    if(come_value_86) { come_call_finalizer(CVALUE_finalize,come_value_86, (void*)0, (void*)0, 0, 0, 0); }
    return __result107__;
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* right_value139;
struct sType* __dec_obj64;
void* right_value140;
char* __dec_obj65;
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
    __dec_obj64=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(type))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
    if(right_value139) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
    self->sline=info->sline;
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(info->sname))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
    if(right_value140) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0); }
    struct sIsHeap* __result108__ = self;
    if(self) { come_call_finalizer(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(type) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1); }
    return __result108__;
}

static void sIsHeap_finalize(struct sIsHeap* self){
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info){
    int __result109__ = self->sline;
    return __result109__;
}

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info){
void* right_value141;
memset(&right_value141, 0, sizeof(void*));
    char* __result110__ = ((char*)(right_value141=__builtin_string(self->sname)));
    return __result110__;
}

_Bool sIsHeap_terminated(){
    _Bool __result111__ = (_Bool)0;
    return __result111__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_88;
void* right_value142;
struct CVALUE* come_value_89;
void* right_value143;
char* __dec_obj66;
void* right_value144;
void* right_value145;
struct sType* __dec_obj67;
void* right_value146;
struct CVALUE* come_value_90;
void* right_value147;
char* __dec_obj68;
void* right_value148;
void* right_value149;
struct sType* __dec_obj69;
memset(&node_88, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value142, 0, sizeof(void*));
memset(&come_value_89, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&come_value_90, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
    node_88=self->type;
    if(self->type->mHeap) {
        come_value_89=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value142) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj66=come_value_89->c_value;
        come_value_89->c_value=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("1"))));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0); }
        if(right_value143) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0); }
        __dec_obj67=come_value_89->type;
        come_value_89->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0); }
        if(right_value144) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value145) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
        come_value_89->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_89));
        add_come_last_code(info,"%s;\n",come_value_89->c_value);
        if(come_value_89) { come_call_finalizer(CVALUE_finalize,come_value_89, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        come_value_90=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value146) { come_call_finalizer(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj68=come_value_90->c_value;
        come_value_90->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("0"))));
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0); }
        if(right_value147) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0); }
        __dec_obj69=come_value_90->type;
        come_value_90->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value148=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"int",info,(_Bool)0))));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0); }
        if(right_value148) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value149) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0); }
        come_value_90->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_90));
        add_come_last_code(info,"%s;\n",come_value_90->c_value);
        if(come_value_90) { come_call_finalizer(CVALUE_finalize,come_value_90, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result112__ = (_Bool)1;
    return __result112__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* right_value255;
struct sImplementsNode* result_133;
void* right_value256;
struct sNode* __dec_obj96;
void* right_value257;
struct sType* __dec_obj97;
void* right_value258;
char* __dec_obj98;
memset(&right_value255, 0, sizeof(void*));
memset(&result_133, 0, sizeof(struct sImplementsNode*)); /* ddd */
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sImplementsNode* __result157__ = (void*)0;
                return __result157__;
            }
            result_133=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value255=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1)))));
            if(right_value255) { come_call_finalizer(sImplementsNode_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
                __dec_obj96=result_133->obj_exp;
                result_133->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=sNodep_clone(self->obj_exp))));
                if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0); }
                if(right_value256) { right_value256 = come_decrement_ref_count(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
                __dec_obj97=result_133->inf_type;
                result_133->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(self->inf_type))));
                if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0); }
                if(right_value257) { come_call_finalizer(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_133->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj98=result_133->sname;
                result_133->sname=(char*)come_increment_ref_count(((char*)(right_value258=string_clone(self->sname))));
                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0); }
                if(right_value258) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0); }
            }
            struct sImplementsNode* __result158__ = result_133;
            if(result_133) { come_call_finalizer(sImplementsNode_finalize,result_133, (void*)0, (void*)0, 0, 0, 1); }
            return __result158__;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* right_value188;
struct sDeleteNode* result_104;
void* right_value189;
struct sNode* __dec_obj79;
void* right_value190;
char* __dec_obj80;
memset(&right_value188, 0, sizeof(void*));
memset(&result_104, 0, sizeof(struct sDeleteNode*)); /* ddd */
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sDeleteNode* __result128__ = (void*)0;
                return __result128__;
            }
            result_104=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value188=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1)))));
            if(right_value188) { come_call_finalizer(sDeleteNode_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                __dec_obj79=result_104->node;
                result_104->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=sNodep_clone(self->node))));
                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0); }
                if(right_value189) { right_value189 = come_decrement_ref_count(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_104->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj80=result_104->sname;
                result_104->sname=(char*)come_increment_ref_count(((char*)(right_value190=string_clone(self->sname))));
                if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0); }
                if(right_value190) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0); }
            }
            struct sDeleteNode* __result129__ = result_104;
            if(result_104) { come_call_finalizer(sDeleteNode_finalize,result_104, (void*)0, (void*)0, 0, 0, 1); }
            return __result129__;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* right_value195;
struct sBorrowNode* result_106;
void* right_value196;
struct sNode* __dec_obj81;
void* right_value197;
char* __dec_obj82;
memset(&right_value195, 0, sizeof(void*));
memset(&result_106, 0, sizeof(struct sBorrowNode*)); /* ddd */
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sBorrowNode* __result131__ = (void*)0;
                return __result131__;
            }
            result_106=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value195=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1)))));
            if(right_value195) { come_call_finalizer(sBorrowNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                __dec_obj81=result_106->node;
                result_106->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=sNodep_clone(self->node))));
                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0); }
                if(right_value196) { right_value196 = come_decrement_ref_count(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_106->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj82=result_106->sname;
                result_106->sname=(char*)come_increment_ref_count(((char*)(right_value197=string_clone(self->sname))));
                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0); }
                if(right_value197) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0); }
            }
            struct sBorrowNode* __result132__ = result_106;
            if(result_106) { come_call_finalizer(sBorrowNode_finalize,result_106, (void*)0, (void*)0, 0, 0, 1); }
            return __result132__;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* right_value202;
struct sCloneNode* result_108;
void* right_value203;
struct sNode* __dec_obj83;
void* right_value204;
char* __dec_obj84;
memset(&right_value202, 0, sizeof(void*));
memset(&result_108, 0, sizeof(struct sCloneNode*)); /* ddd */
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sCloneNode* __result134__ = (void*)0;
                return __result134__;
            }
            result_108=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value202=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1)))));
            if(right_value202) { come_call_finalizer(sCloneNode_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                __dec_obj83=result_108->node;
                result_108->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value203=sNodep_clone(self->node))));
                if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0); }
                if(right_value203) { right_value203 = come_decrement_ref_count(right_value203, ((struct sNode*)right_value203)->finalize, ((struct sNode*)right_value203)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_108->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj84=result_108->sname;
                result_108->sname=(char*)come_increment_ref_count(((char*)(right_value204=string_clone(self->sname))));
                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0); }
                if(right_value204) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0); }
            }
            struct sCloneNode* __result135__ = result_108;
            if(result_108) { come_call_finalizer(sCloneNode_finalize,result_108, (void*)0, (void*)0, 0, 0, 1); }
            return __result135__;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* right_value209;
struct sDummyHeapNode* result_110;
void* right_value210;
struct sNode* __dec_obj85;
void* right_value211;
char* __dec_obj86;
memset(&right_value209, 0, sizeof(void*));
memset(&result_110, 0, sizeof(struct sDummyHeapNode*)); /* ddd */
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sDummyHeapNode* __result137__ = (void*)0;
                return __result137__;
            }
            result_110=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value209=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1)))));
            if(right_value209) { come_call_finalizer(sDummyHeapNode_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                __dec_obj85=result_110->node;
                result_110->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value210=sNodep_clone(self->node))));
                if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0); }
                if(right_value210) { right_value210 = come_decrement_ref_count(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_110->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj86=result_110->sname;
                result_110->sname=(char*)come_increment_ref_count(((char*)(right_value211=string_clone(self->sname))));
                if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
                if(right_value211) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0); }
            }
            struct sDummyHeapNode* __result138__ = result_110;
            if(result_110) { come_call_finalizer(sDummyHeapNode_finalize,result_110, (void*)0, (void*)0, 0, 0, 1); }
            return __result138__;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* right_value216;
struct sGCIncNode* result_112;
void* right_value217;
struct sNode* __dec_obj87;
void* right_value218;
char* __dec_obj88;
memset(&right_value216, 0, sizeof(void*));
memset(&result_112, 0, sizeof(struct sGCIncNode*)); /* ddd */
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sGCIncNode* __result140__ = (void*)0;
                return __result140__;
            }
            result_112=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value216=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1)))));
            if(right_value216) { come_call_finalizer(sGCIncNode_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                __dec_obj87=result_112->node;
                result_112->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNodep_clone(self->node))));
                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0); }
                if(right_value217) { right_value217 = come_decrement_ref_count(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_112->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj88=result_112->sname;
                result_112->sname=(char*)come_increment_ref_count(((char*)(right_value218=string_clone(self->sname))));
                if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
                if(right_value218) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0); }
            }
            struct sGCIncNode* __result141__ = result_112;
            if(result_112) { come_call_finalizer(sGCIncNode_finalize,result_112, (void*)0, (void*)0, 0, 0, 1); }
            return __result141__;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* right_value223;
struct sGCDecNode* result_114;
void* right_value224;
struct sNode* __dec_obj89;
void* right_value225;
char* __dec_obj90;
memset(&right_value223, 0, sizeof(void*));
memset(&result_114, 0, sizeof(struct sGCDecNode*)); /* ddd */
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sGCDecNode* __result143__ = (void*)0;
                return __result143__;
            }
            result_114=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value223=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1)))));
            if(right_value223) { come_call_finalizer(sGCDecNode_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                __dec_obj89=result_114->node;
                result_114->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=sNodep_clone(self->node))));
                if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0); }
                if(right_value224) { right_value224 = come_decrement_ref_count(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_114->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj90=result_114->sname;
                result_114->sname=(char*)come_increment_ref_count(((char*)(right_value225=string_clone(self->sname))));
                if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0); }
                if(right_value225) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0); }
            }
            struct sGCDecNode* __result144__ = result_114;
            if(result_114) { come_call_finalizer(sGCDecNode_finalize,result_114, (void*)0, (void*)0, 0, 0, 1); }
            return __result144__;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* right_value231;
struct sIsHeap* result_119;
void* right_value232;
struct sType* __dec_obj91;
void* right_value233;
char* __dec_obj92;
memset(&right_value231, 0, sizeof(void*));
memset(&result_119, 0, sizeof(struct sIsHeap*)); /* ddd */
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sIsHeap* __result146__ = (void*)0;
                return __result146__;
            }
            result_119=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value231=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1)))));
            if(right_value231) { come_call_finalizer(sIsHeap_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj91=result_119->type;
                result_119->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(self->type))));
                if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0); }
                if(right_value232) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_119->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj92=result_119->sname;
                result_119->sname=(char*)come_increment_ref_count(((char*)(right_value233=string_clone(self->sname))));
                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0); }
                if(right_value233) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0); }
            }
            struct sIsHeap* __result147__ = result_119;
            if(result_119) { come_call_finalizer(sIsHeap_finalize,result_119, (void*)0, (void*)0, 0, 0, 1); }
            return __result147__;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* right_value239;
struct sSizeOfNode* result_127;
void* right_value240;
struct sType* __dec_obj93;
void* right_value241;
char* __dec_obj94;
memset(&right_value239, 0, sizeof(void*));
memset(&result_127, 0, sizeof(struct sSizeOfNode*)); /* ddd */
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sSizeOfNode* __result149__ = (void*)0;
                    return __result149__;
                }
                result_127=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value239=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1)))));
                if(right_value239) { come_call_finalizer(sSizeOfNode_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->type!=((void*)0)) {
                    __dec_obj93=result_127->type;
                    result_127->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(self->type))));
                    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
                    if(right_value240) { come_call_finalizer(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_127->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj94=result_127->sname;
                    result_127->sname=(char*)come_increment_ref_count(((char*)(right_value241=string_clone(self->sname))));
                    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0); }
                    if(right_value241) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0); }
                }
                struct sSizeOfNode* __result150__ = result_127;
                if(result_127) { come_call_finalizer(sSizeOfNode_finalize,result_127, (void*)0, (void*)0, 0, 0, 1); }
                return __result150__;
}

static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self){
void* right_value246;
struct sNullNodeX* result_128;
void* right_value247;
char* __dec_obj95;
memset(&right_value246, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct sNullNodeX*)); /* ddd */
memset(&right_value247, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sNullNodeX* __result153__ = (void*)0;
                return __result153__;
            }
            result_128=(struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value246=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1)))));
            if(right_value246) { come_call_finalizer(sNullNodeX_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_128->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj95=result_128->sname;
                result_128->sname=(char*)come_increment_ref_count(((char*)(right_value247=string_clone(self->sname))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0); }
                if(right_value247) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0); }
            }
            struct sNullNodeX* __result154__ = result_128;
            if(result_128) { come_call_finalizer(sNullNodeX_finalize,result_128, (void*)0, (void*)0, 0, 0, 1); }
            return __result154__;
}

