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
struct sStrNode
{
    char* value;
    int sline;
    char* sname;
};
struct sCharNode
{
    int value;
    int sline;
    char* sname;
};
struct sWCharNode
{
    unsigned int value;
    int sline;
    char* sname;
};
struct sWStringNode
{
    unsigned int* value;
    int sline;
    char* sname;
};
struct sRegexNode
{
    char* str;
    _Bool global;
    _Bool ignore_case;
    int sline;
    char* sname;
};
struct sListNode
{
    struct list$1sNodeph* list_elements;
    int sline;
    char* sname;
};
struct sTupleNode
{
    struct list$1sNodeph* tuple_elements;
    int sline;
    char* sname;
};
struct sMapNode
{
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

_Bool sStrNode_terminated();

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
int sStrNode_sline(struct sStrNode* self, struct sInfo* info);

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info);

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);

_Bool sCharNode_terminated();

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

int sCharNode_sline(struct sCharNode* self, struct sInfo* info);

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info);

_Bool sWCharNode_terminated();

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info);

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);

_Bool sWStringNode_terminated();

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info);

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info);

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);

_Bool sRegexNode_terminated();

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info);

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

_Bool sListNode_terminated();

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
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
static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int index);
static struct CVALUE* list$1CVALUEphp_item(struct list$1CVALUEph* self, int position, struct CVALUE* default_value);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index);
static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value);
int sListNode_sline(struct sListNode* self, struct sInfo* info);

char* sListNode_sname(struct sListNode* self, struct sInfo* info);

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);

_Bool sTupleNode_terminated();

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
static struct sType* sTypep_clone(struct sType* self);
static void sTypep_finalize(struct sType* self);
static struct CVALUE* CVALUEp_clone(struct CVALUE* self);
static void CVALUEp_finalize(struct CVALUE* self);
int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info);

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info);

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);

_Bool sMapNode_terminated();

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);

static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int index);
static struct sNode* list$1sNodephp_item(struct list$1sNodeph* self, int position, struct sNode* default_value);
int sMapNode_sline(struct sMapNode* self, struct sInfo* info);

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);

static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
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






struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* right_value0;
char* __dec_obj1;
void* right_value1;
char* __dec_obj2;
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
    __dec_obj1=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(value))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    self->sline=sline;
    __dec_obj2=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value1=__builtin_string(info->sname))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
    if(right_value1) { right_value1 = come_decrement_ref_count(right_value1, (void*)0, (void*)0, 1, 0); }
    struct sStrNode* __result7__ = self;
    if(self) { come_call_finalizer(sStrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1); }
    return __result7__;
}

_Bool sStrNode_terminated(){
    _Bool __result8__ = (_Bool)0;
    return __result8__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* right_value2;
struct CVALUE* come_value_0;
void* right_value3;
char* __dec_obj3;
void* right_value4;
void* right_value5;
struct sType* __dec_obj4;
memset(&right_value2, 0, sizeof(void*));
memset(&come_value_0, 0, sizeof(struct CVALUE*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
    come_value_0=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value2=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 27))));
    if(right_value2) { come_call_finalizer(CVALUE_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj3=come_value_0->c_value;
    come_value_0->c_value=(char*)come_increment_ref_count(((char*)(right_value3=xsprintf("\"%s\"",self->value))));
    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
    if(right_value3) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0); }
    __dec_obj4=come_value_0->type;
    come_value_0->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value5=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value4=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 30)))),"char*",info,(_Bool)0))));
    if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value4) { come_call_finalizer(sType_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value5) { come_call_finalizer(sType_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0); }
    come_value_0->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_0));
    add_come_last_code(info,"%s;\n",come_value_0->c_value);
    _Bool __result9__ = (_Bool)1;
    if(come_value_0) { come_call_finalizer(CVALUE_finalize,come_value_0, (void*)0, (void*)0, 0, 0, 0); }
    return __result9__;
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
struct list_item$1sTypeph* it_1;
struct list_item$1sTypeph* prev_it_2;
memset(&it_1, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_2, 0, sizeof(struct list_item$1sTypeph*));
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
memset(&it_3, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1sNodeph*));
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
memset(&it_5, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1charph*));
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

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* right_value6;
struct list_item$1CVALUEph* litem_7;
struct CVALUE* __dec_obj5;
void* right_value7;
struct list_item$1CVALUEph* litem_8;
struct CVALUE* __dec_obj6;
void* right_value8;
struct list_item$1CVALUEph* litem_9;
struct CVALUE* __dec_obj7;
memset(&right_value6, 0, sizeof(void*));
memset(&litem_7, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value7, 0, sizeof(void*));
memset(&litem_8, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value8, 0, sizeof(void*));
memset(&litem_9, 0, sizeof(struct list_item$1CVALUEph*));
        if(self->len==0) {
            litem_7=((struct list_item$1CVALUEph*)(right_value6=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "06str.c", 36)));
            litem_7->prev=((void*)0);
            litem_7->next=((void*)0);
            __dec_obj5=litem_7->item;
            litem_7->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj5) { come_call_finalizer(CVALUE_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_7;
            self->head=litem_7;
        }
        else if(self->len==1) {
            litem_8=((struct list_item$1CVALUEph*)(right_value7=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "06str.c", 46)));
            litem_8->prev=self->head;
            litem_8->next=((void*)0);
            __dec_obj6=litem_8->item;
            litem_8->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj6) { come_call_finalizer(CVALUE_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_8;
            self->head->next=litem_8;
        }
        else {
            litem_9=((struct list_item$1CVALUEph*)(right_value8=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "06str.c", 56)));
            litem_9->prev=self->tail;
            litem_9->next=((void*)0);
            __dec_obj7=litem_9->item;
            litem_9->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj7) { come_call_finalizer(CVALUE_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0); }
            self->tail->next=litem_9;
            self->tail=litem_9;
        }
        self->len++;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

int sStrNode_sline(struct sStrNode* self, struct sInfo* info){
    int __result10__ = self->sline;
    return __result10__;
}

char* sStrNode_sname(struct sStrNode* self, struct sInfo* info){
void* right_value9;
memset(&right_value9, 0, sizeof(void*));
    char* __result11__ = ((char*)(right_value9=__builtin_string(self->sname)));
    return __result11__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* right_value10;
char* __dec_obj8;
memset(&right_value10, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj8=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
    if(right_value10) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0); }
    struct sCharNode* __result12__ = self;
    if(self) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result12__;
}

_Bool sCharNode_terminated(){
    _Bool __result13__ = (_Bool)0;
    return __result13__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* right_value11;
struct CVALUE* come_value_10;
void* right_value12;
char* __dec_obj9;
void* right_value13;
void* right_value14;
struct sType* __dec_obj10;
memset(&right_value11, 0, sizeof(void*));
memset(&come_value_10, 0, sizeof(struct CVALUE*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
    come_value_10=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value11=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 75))));
    if(right_value11) { come_call_finalizer(CVALUE_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj9=come_value_10->c_value;
    come_value_10->c_value=(char*)come_increment_ref_count(((char*)(right_value12=xsprintf("%d",self->value))));
    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0); }
    if(right_value12) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0); }
    __dec_obj10=come_value_10->type;
    come_value_10->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value14=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value13=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 78)))),"char",info,(_Bool)0))));
    if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value13) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value14) { come_call_finalizer(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0); }
    come_value_10->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_10));
    add_come_last_code(info,"%s;\n",come_value_10->c_value);
    _Bool __result14__ = (_Bool)1;
    if(come_value_10) { come_call_finalizer(CVALUE_finalize,come_value_10, (void*)0, (void*)0, 0, 0, 0); }
    return __result14__;
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
    int __result15__ = self->sline;
    return __result15__;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
void* right_value15;
memset(&right_value15, 0, sizeof(void*));
    char* __result16__ = ((char*)(right_value15=__builtin_string(self->sname)));
    return __result16__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
void* right_value16;
char* __dec_obj11;
memset(&right_value16, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj11=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value16=__builtin_string(info->sname))));
    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0); }
    if(right_value16) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0); }
    struct sWCharNode* __result17__ = self;
    if(self) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result17__;
}

_Bool sWCharNode_terminated(){
    _Bool __result18__ = (_Bool)0;
    return __result18__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* right_value17;
struct CVALUE* come_value_11;
void* right_value18;
char* __dec_obj12;
void* right_value19;
void* right_value20;
struct sType* __dec_obj13;
memset(&right_value17, 0, sizeof(void*));
memset(&come_value_11, 0, sizeof(struct CVALUE*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
    come_value_11=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value17=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 122))));
    if(right_value17) { come_call_finalizer(CVALUE_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj12=come_value_11->c_value;
    come_value_11->c_value=(char*)come_increment_ref_count(((char*)(right_value18=xsprintf("L'%lc'",self->value))));
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0); }
    if(right_value18) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0); }
    __dec_obj13=come_value_11->type;
    come_value_11->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value19=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 125)))),"wchar_t",info,(_Bool)0))));
    if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value19) { come_call_finalizer(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value20) { come_call_finalizer(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0); }
    come_value_11->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_11));
    add_come_last_code(info,"%s;\n",come_value_11->c_value);
    _Bool __result19__ = (_Bool)1;
    if(come_value_11) { come_call_finalizer(CVALUE_finalize,come_value_11, (void*)0, (void*)0, 0, 0, 0); }
    return __result19__;
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
    int __result20__ = self->sline;
    return __result20__;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
void* right_value21;
memset(&right_value21, 0, sizeof(void*));
    char* __result21__ = ((char*)(right_value21=__builtin_string(self->sname)));
    return __result21__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
unsigned int* __dec_obj14;
void* right_value22;
char* __dec_obj15;
memset(&right_value22, 0, sizeof(void*));
    __dec_obj14=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
    self->sline=sline;
    __dec_obj15=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value22=__builtin_string(info->sname))));
    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
    if(right_value22) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0); }
    struct sWStringNode* __result22__ = self;
    if(self) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1); }
    return __result22__;
}

_Bool sWStringNode_terminated(){
    _Bool __result23__ = (_Bool)0;
    return __result23__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* right_value23;
struct CVALUE* come_value_12;
void* right_value24;
char* __dec_obj16;
void* right_value25;
void* right_value26;
struct sType* __dec_obj17;
memset(&right_value23, 0, sizeof(void*));
memset(&come_value_12, 0, sizeof(struct CVALUE*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
    come_value_12=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value23=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 169))));
    if(right_value23) { come_call_finalizer(CVALUE_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj16=come_value_12->c_value;
    come_value_12->c_value=(char*)come_increment_ref_count(((char*)(right_value24=xsprintf("L'%ls'",self->value))));
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
    if(right_value24) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0); }
    __dec_obj17=come_value_12->type;
    come_value_12->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value26=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value25=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 172)))),"wchar_t*",info,(_Bool)0))));
    if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value25) { come_call_finalizer(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value26) { come_call_finalizer(sType_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0); }
    come_value_12->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_12));
    add_come_last_code(info,"%s;\n",come_value_12->c_value);
    _Bool __result24__ = (_Bool)1;
    if(come_value_12) { come_call_finalizer(CVALUE_finalize,come_value_12, (void*)0, (void*)0, 0, 0, 0); }
    return __result24__;
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
    int __result25__ = self->sline;
    return __result25__;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
void* right_value27;
memset(&right_value27, 0, sizeof(void*));
    char* __result26__ = ((char*)(right_value27=__builtin_string(self->sname)));
    return __result26__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* right_value28;
char* __dec_obj18;
void* right_value29;
char* __dec_obj19;
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
    __dec_obj18=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value28=__builtin_string(str))));
    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
    if(right_value28) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0); }
    self->global=global;
    self->ignore_case=ignore_case;
    self->sline=sline;
    __dec_obj19=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value29=__builtin_string(info->sname))));
    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
    if(right_value29) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0); }
    struct sRegexNode* __result27__ = self;
    if(self) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(str) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1); }
    return __result27__;
}

_Bool sRegexNode_terminated(){
    _Bool __result28__ = (_Bool)0;
    return __result28__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* right_value30;
struct CVALUE* come_value_13;
void* right_value31;
void* right_value32;
void* right_value33;
void* right_value34;
void* right_value35;
char* __dec_obj20;
void* right_value36;
void* right_value37;
struct sType* __dec_obj21;
void* right_value38;
char* __dec_obj22;
memset(&right_value30, 0, sizeof(void*));
memset(&come_value_13, 0, sizeof(struct CVALUE*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
    come_value_13=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value30=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 221))));
    if(right_value30) { come_call_finalizer(CVALUE_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj20=come_value_13->c_value;
    come_value_13->c_value=(char*)come_increment_ref_count(((char*)(right_value35=xsprintf("\"%s\".to_regex(global:%s, ignore_case:%s)",self->str,self->global?((char*)(right_value31=__builtin_string("true"))):((char*)(right_value32=__builtin_string("false"))),self->ignore_case?((char*)(right_value33=__builtin_string("true"))):((char*)(right_value34=__builtin_string("false")))))));
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
    if(right_value31) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0); }
    if(right_value32) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0); }
    if(right_value33) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0); }
    if(right_value34) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0); }
    if(right_value35) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0); }
    __dec_obj21=come_value_13->type;
    come_value_13->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value36=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 224)))),"come_regex*",info,(_Bool)0))));
    if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value36) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value37) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0); }
    come_value_13->type->mHeap=(_Bool)1;
    come_value_13->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_13));
    add_come_last_code(info,"%s;\n",come_value_13->c_value);
    __dec_obj22=come_value_13->c_value;
    come_value_13->c_value=(char*)come_increment_ref_count(((char*)(right_value38=append_object_to_right_values(come_value_13->c_value,(struct sType*)come_increment_ref_count(come_value_13->type),info))));
    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
    if(right_value38) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0); }
    _Bool __result29__ = (_Bool)1;
    if(come_value_13) { come_call_finalizer(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0); }
    return __result29__;
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
    int __result30__ = self->sline;
    return __result30__;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
void* right_value39;
memset(&right_value39, 0, sizeof(void*));
    char* __result31__ = ((char*)(right_value39=__builtin_string(self->sname)));
    return __result31__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
struct list$1sNodeph* __dec_obj23;
void* right_value40;
char* __dec_obj24;
memset(&right_value40, 0, sizeof(void*));
    __dec_obj23=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    if(__dec_obj23) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value40=__builtin_string(info->sname))));
    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
    if(right_value40) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0); }
    struct sListNode* __result32__ = self;
    if(self) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(list_elements) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1); }
    return __result32__;
}

_Bool sListNode_terminated(){
    _Bool __result33__ = (_Bool)0;
    return __result33__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_14;
void* right_value41;
void* right_value42;
struct list$1CVALUEph* params_17;
struct sType* list_element_type_18;
struct sNode* it_20;
void* right_value43;
struct CVALUE* come_value_22;
void* right_value74;
struct sType* __dec_obj43;
void* right_value75;
struct sType* type_values_41;
void* right_value79;
static int list_value_num_45=0;
void* right_value80;
char* var_name_46;
void* right_value81;
struct sVar* var__47;
void* right_value82;
void* right_value83;
void* right_value84;
struct buffer* source_48;
int i_49;
struct CVALUE* it_51;
void* right_value85;
void* right_value86;
void* right_value87;
void* right_value88;
void* right_value89;
struct sType* list_type_56;
void* right_value93;
void* right_value94;
struct sType* obj_type_60;
char* fun_name_61;
void* right_value95;
void* right_value96;
void* right_value97;
char* generics_fun_name_62;
struct sFun* fun_65;
void* right_value98;
struct sType* result_type_66;
struct sType* type_67;
void* right_value99;
struct CVALUE* obj_value_68;
void* right_value100;
void* right_value101;
struct buffer* num_string_69;
void* right_value102;
struct sType* type2_70;
void* right_value103;
char* type_name_71;
void* right_value104;
void* right_value105;
char* __dec_obj50;
void* right_value106;
struct sType* type3_72;
void* right_value107;
struct sType* __dec_obj51;
void* right_value108;
char* __dec_obj52;
void* right_value109;
void* right_value110;
struct list$1CVALUEph* come_params_73;
void* right_value111;
char* __dec_obj53;
void* right_value112;
struct CVALUE* come_value2_77;
void* right_value113;
char* __dec_obj54;
void* right_value114;
struct CVALUE* come_value3_78;
void* right_value115;
char* __dec_obj55;
void* right_value116;
void* right_value117;
struct buffer* buf_79;
int j_80;
struct CVALUE* it_81;
void* right_value118;
struct CVALUE* come_value4_82;
void* right_value119;
char* __dec_obj56;
void* right_value120;
void* right_value121;
char* __dec_obj57;
void* right_value122;
struct sType* __dec_obj58;
void* right_value123;
memset(&list_elements_14, 0, sizeof(struct list$1sNodeph*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&params_17, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_18, 0, sizeof(struct sType*)); /* bbb */
memset(&it_20, 0, sizeof(struct sNode*));
memset(&right_value43, 0, sizeof(void*));
memset(&come_value_22, 0, sizeof(struct CVALUE*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&type_values_41, 0, sizeof(struct sType*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&var_name_46, 0, sizeof(char*));
memset(&right_value81, 0, sizeof(void*));
memset(&var__47, 0, sizeof(struct sVar*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&source_48, 0, sizeof(struct buffer*));
memset(&i_49, 0, sizeof(int));
memset(&it_51, 0, sizeof(struct CVALUE*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&list_type_56, 0, sizeof(struct sType*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&obj_type_60, 0, sizeof(struct sType*));
memset(&fun_name_61, 0, sizeof(char*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&generics_fun_name_62, 0, sizeof(char*));
memset(&fun_65, 0, sizeof(struct sFun*));
memset(&right_value98, 0, sizeof(void*));
memset(&result_type_66, 0, sizeof(struct sType*));
memset(&type_67, 0, sizeof(struct sType*));
memset(&right_value99, 0, sizeof(void*));
memset(&obj_value_68, 0, sizeof(struct CVALUE*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&num_string_69, 0, sizeof(struct buffer*));
memset(&right_value102, 0, sizeof(void*));
memset(&type2_70, 0, sizeof(struct sType*));
memset(&right_value103, 0, sizeof(void*));
memset(&type_name_71, 0, sizeof(char*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&type3_72, 0, sizeof(struct sType*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&come_params_73, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&come_value2_77, 0, sizeof(struct CVALUE*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&come_value3_78, 0, sizeof(struct CVALUE*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&buf_79, 0, sizeof(struct buffer*));
memset(&j_80, 0, sizeof(int));
memset(&it_81, 0, sizeof(struct CVALUE*));
memset(&right_value118, 0, sizeof(void*));
memset(&come_value4_82, 0, sizeof(struct CVALUE*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
    list_elements_14=self->list_elements;
    params_17=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value42=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value41=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 273))))))));
    if(right_value42) { come_call_finalizer(list$1CVALUEphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_20=list$1sNodephp_begin((list_elements_14));
    !list$1sNodephp_end((list_elements_14));
    it_20=list$1sNodephp_next((list_elements_14))
    ){
        if(!it_20->compile(it_20->_protocol_obj,info)) {
            _Bool __result40__ = (_Bool)0;
            return __result40__;
        }
        come_value_22=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value43=get_value_from_stack(-1,info))));
        if(right_value43) { come_call_finalizer(CVALUE_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(params_17,(struct CVALUE*)come_increment_ref_count(come_value_22));
        __dec_obj43=list_element_type_18;
        list_element_type_18=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(come_value_22->type))));
        if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value74) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
    }
    type_values_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(list_element_type_18))));
    if(right_value75) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
    list$1sNodephp_push_back(type_values_41->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value79=create_int_node(list$1CVALUEphp_length(params_17),info)))));
    if(right_value79) { right_value79 = come_decrement_ref_count(right_value79, ((struct sNode*)right_value79)->finalize, ((struct sNode*)right_value79)->_protocol_obj, 1, 0); } 
    type_values_41->mHeap=(_Bool)0;
    var_name_46=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("__list_values%d__",++list_value_num_45))));
    if(right_value80) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0); }
    add_variable_to_table(var_name_46,(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(type_values_41)))),info);
    if(right_value81) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
    var__47=get_variable_from_table(info->lv_table,var_name_46);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value82=make_define_var(type_values_41,var__47->mCValueName,info,(_Bool)0))));
    if(right_value82) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0); }
    source_48=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value84=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 302))))))));
    if(right_value83) { come_call_finalizer(buffer_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value84) { come_call_finalizer(buffer_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(source_48,"{");
    i_49=0;
    for(
    it_51=list$1CVALUEphp_begin((params_17));
    !list$1CVALUEphp_end((params_17));
    it_51=list$1CVALUEphp_next((params_17))
    ){
        if(list_element_type_18->mHeap) {
            buffer_append_str(source_48,((char*)(right_value85=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__47->mCValueName,i_49,list$1CVALUEphp_operator_load_element(params_17,i_49)->c_value))));
            if(right_value85) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0); }
        }
        else {
            buffer_append_str(source_48,((char*)(right_value86=xsprintf("%s[%d]=%s;\n",var__47->mCValueName,i_49,list$1CVALUEphp_operator_load_element(params_17,i_49)->c_value))));
            if(right_value86) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0); }
        }
        i_49++;
    }
    buffer_append_str(source_48,"}");
    add_come_code(info,"%s",((char*)(right_value87=buffer_to_string(source_48))));
    if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0); }
    list_type_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value88=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 321)))),"list",info,(_Bool)0))));
    if(right_value88) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value89) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0); }
    list$1sTypephp_push_back(list_type_56->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(list_element_type_18)))));
    if(right_value93) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0); }
    obj_type_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(list_type_56))));
    if(right_value94) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
    fun_name_61="initialize_with_values";
    generics_fun_name_62=(char*)come_increment_ref_count(((char*)(right_value97=string_to_string(((char*)(right_value96=make_generics_function(obj_type_60,(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string(fun_name_61)))),info)))))));
    if(right_value95) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0); }
    if(right_value96) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0); }
    if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0); }
    fun_65=map$2charphsFunphp_at(info->funcs,generics_fun_name_62,((void*)0));
    if(fun_65==((void*)0)) {
        err_msg(info,"function not found(%s) at method(%s)\n",generics_fun_name_62,info->come_fun->mName);
        _Bool __result69__ = (_Bool)0;
        return __result69__;
    }
    result_type_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(fun_65->mResultType))));
    if(right_value98) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0); }
    result_type_66->mStatic=(_Bool)0;
    type_67=list_type_56;
    obj_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 341))));
    if(right_value99) { come_call_finalizer(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0); }
    num_string_69=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value101=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value100=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 343))))))));
    if(right_value100) { come_call_finalizer(buffer_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value101) { come_call_finalizer(buffer_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(num_string_69,"1");
    type2_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=solve_generics(type_67,type_67,info))));
    if(right_value102) { come_call_finalizer(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0); }
    type_name_71=(char*)come_increment_ref_count(((char*)(right_value103=make_type_name_string(type2_70,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    if(right_value103) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0); }
    __dec_obj50=obj_value_68->c_value;
    obj_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_71,type_name_71,((char*)(right_value104=buffer_to_string(num_string_69))),info->sname,info->sline))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
    if(right_value104) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0); }
    if(right_value105) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0); }
    type3_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(type2_70))));
    if(right_value106) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0); }
    type3_72->mPointerNum++;
    type3_72->mHeap=(_Bool)1;
    type2_70->mHeap=(_Bool)1;
    __dec_obj51=obj_value_68->type;
    obj_value_68->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(type2_70))));
    if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value107) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj52=obj_value_68->c_value;
    obj_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value108=append_object_to_right_values(obj_value_68->c_value,(struct sType*)come_increment_ref_count(type3_72),info))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
    if(right_value108) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0); }
    obj_value_68->type->mPointerNum++;
    obj_value_68->var=((void*)0);
    come_params_73=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value110=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value109=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 362))))))));
    if(right_value110) { come_call_finalizer(list$1CVALUEphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0); }
    if(list$1sTypephp_operator_load_element(fun_65->mParamTypes,0)->mHeap&&obj_value_68->type->mHeap) {
        __dec_obj53=obj_value_68->c_value;
        obj_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value111=increment_ref_count_object(obj_value_68->type,obj_value_68->c_value,info))));
        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
        if(right_value111) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0); }
    }
    list$1CVALUEphp_push_back(come_params_73,(struct CVALUE*)come_increment_ref_count(obj_value_68));
    come_value2_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 369))));
    if(right_value112) { come_call_finalizer(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj54=come_value2_77->c_value;
    come_value2_77->c_value=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("%d",list$1CVALUEphp_length(params_17)))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
    if(right_value113) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0); }
    come_value2_77->type=((void*)0);
    come_value2_77->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_73,(struct CVALUE*)come_increment_ref_count(come_value2_77));
    come_value3_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value114=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 377))));
    if(right_value114) { come_call_finalizer(CVALUE_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj55=come_value3_78->c_value;
    come_value3_78->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%s",var__47->mCValueName))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
    if(right_value115) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0); }
    come_value3_78->type=((void*)0);
    come_value3_78->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_73,(struct CVALUE*)come_increment_ref_count(come_value3_78));
    buf_79=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value117=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value116=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 385))))))));
    if(right_value116) { come_call_finalizer(buffer_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value117) { come_call_finalizer(buffer_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(buf_79,generics_fun_name_62);
    buffer_append_str(buf_79,"(");
    j_80=0;
    for(
    it_81=list$1CVALUEphp_begin((come_params_73));
    !list$1CVALUEphp_end((come_params_73));
    it_81=list$1CVALUEphp_next((come_params_73))
    ){
        buffer_append_str(buf_79,it_81->c_value);
        if(j_80!=list$1CVALUEphp_length(come_params_73)-1) {
            buffer_append_str(buf_79,",");
        }
        j_80++;
    }
    buffer_append_str(buf_79,")");
    come_value4_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 402))));
    if(right_value118) { come_call_finalizer(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj56=come_value4_82->c_value;
    come_value4_82->c_value=(char*)come_increment_ref_count(((char*)(right_value119=buffer_to_string(buf_79))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
    if(right_value119) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0); }
    if(result_type_66->mHeap) {
        __dec_obj57=come_value4_82->c_value;
        come_value4_82->c_value=(char*)come_increment_ref_count(((char*)(right_value121=append_object_to_right_values(((char*)(right_value120=buffer_to_string(buf_79))),(struct sType*)come_increment_ref_count(result_type_66),info))));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
        if(right_value120) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0); }
        if(right_value121) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0); }
    }
    __dec_obj58=come_value4_82->type;
    come_value4_82->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(result_type_66))));
    if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value122) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0); }
    come_value4_82->type->mStatic=(_Bool)0;
    come_value4_82->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value123=buffer_to_string(buf_79))));
    if(right_value123) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0); }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_82));
    _Bool __result73__ = (_Bool)1;
    if(params_17) { come_call_finalizer(list$1CVALUEphp_finalize,params_17, (void*)0, (void*)0, 0, 0, 0); }
    if(list_element_type_18) { come_call_finalizer(sType_finalize,list_element_type_18, (void*)0, (void*)0, 0, 0, 0); }
    if(type_values_41) { come_call_finalizer(sType_finalize,type_values_41, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_46) { var_name_46 = come_decrement_ref_count(var_name_46, (void*)0, (void*)0, 0, 0); }
    if(source_48) { come_call_finalizer(buffer_finalize,source_48, (void*)0, (void*)0, 0, 0, 0); }
    if(list_type_56) { come_call_finalizer(sType_finalize,list_type_56, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_type_60) { come_call_finalizer(sType_finalize,obj_type_60, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_fun_name_62) { generics_fun_name_62 = come_decrement_ref_count(generics_fun_name_62, (void*)0, (void*)0, 0, 0); }
    if(result_type_66) { come_call_finalizer(sType_finalize,result_type_66, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_value_68) { come_call_finalizer(CVALUE_finalize,obj_value_68, (void*)0, (void*)0, 0, 0, 0); }
    if(num_string_69) { come_call_finalizer(buffer_finalize,num_string_69, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_70) { come_call_finalizer(sType_finalize,type2_70, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name_71) { type_name_71 = come_decrement_ref_count(type_name_71, (void*)0, (void*)0, 0, 0); }
    if(type3_72) { come_call_finalizer(sType_finalize,type3_72, (void*)0, (void*)0, 0, 0, 0); }
    if(come_params_73) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_73, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_77) { come_call_finalizer(CVALUE_finalize,come_value2_77, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value3_78) { come_call_finalizer(CVALUE_finalize,come_value3_78, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_79) { come_call_finalizer(buffer_finalize,buf_79, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value4_82) { come_call_finalizer(CVALUE_finalize,come_value4_82, (void*)0, (void*)0, 0, 0, 0); }
    return __result73__;
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1CVALUEph* __result34__ = self;
        if(self) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        return __result34__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_15;
struct list_item$1CVALUEph* prev_it_16;
memset(&it_15, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1CVALUEph*));
            it_15=self->head;
            while(it_15!=((void*)0)) {
                if(1) {
                    if(it_15->item) { come_call_finalizer(CVALUE_finalize,it_15->item, (void*)0, (void*)0, 0, 0, 0); }
                }
                prev_it_16=it_15;
                it_15=it_15->next;
                come_free_object(prev_it_16);
            }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
struct sNode* result_19;
memset(&result_19, 0, sizeof(struct sNode*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sNode* __result35__ = self->it->item;
            return __result35__;
        }
        memset(&result_19,0,sizeof(struct sNode*));
        struct sNode* __result36__ = result_19;
        return __result36__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
        _Bool __result37__ = self->it==((void*)0);
        return __result37__;
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
struct sNode* result_21;
memset(&result_21, 0, sizeof(struct sNode*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sNode* __result38__ = self->it->item;
            return __result38__;
        }
        memset(&result_21,0,sizeof(struct sNode*));
        struct sNode* __result39__ = result_21;
        return __result39__;
}

static struct sType* sType_clone(struct sType* self){
void* right_value44;
struct sType* result_23;
void* right_value47;
struct tuple1$1sTypeph* __dec_obj26;
void* right_value48;
char* __dec_obj27;
void* right_value55;
struct list$1sTypeph* __dec_obj31;
void* right_value63;
struct list$1sNodeph* __dec_obj35;
void* right_value64;
struct list$1sTypeph* __dec_obj36;
void* right_value71;
struct list$1charph* __dec_obj40;
void* right_value72;
struct tuple1$1sTypeph* __dec_obj41;
void* right_value73;
char* __dec_obj42;
memset(&right_value44, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sType* __result41__ = (void*)0;
                return __result41__;
            }
            result_23=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 288))));
            if(right_value44) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_23->mClass=self->mClass;
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                __dec_obj26=result_23->mNoSolvedGenericsType;
                result_23->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value47=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj26) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value47) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                __dec_obj27=result_23->mGenericsName;
                result_23->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(self->mGenericsName))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
                if(right_value48) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                __dec_obj31=result_23->mGenericsTypes;
                result_23->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj31) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value55) { come_call_finalizer(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj35=result_23->mArrayNum;
                result_23->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value63=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj35) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value63) { come_call_finalizer(list$1sNodephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_23->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj36=result_23->mParamTypes;
                result_23->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value64=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj36) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value64) { come_call_finalizer(list$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj40=result_23->mParamNames;
                result_23->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value71=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj40) { come_call_finalizer(list$1charphp_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value71) { come_call_finalizer(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj41=result_23->mResultType;
                result_23->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value72=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj41) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value72) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_23->mVarArgs=self->mVarArgs;
            }
            if(self!=((void*)0)) {
                result_23->mUnsigned=self->mUnsigned;
            }
            if(self!=((void*)0)) {
                result_23->mShort=self->mShort;
            }
            if(self!=((void*)0)) {
                result_23->mLong=self->mLong;
            }
            if(self!=((void*)0)) {
                result_23->mLongLong=self->mLongLong;
            }
            if(self!=((void*)0)) {
                result_23->mConstant=self->mConstant;
            }
            if(self!=((void*)0)) {
                result_23->mRegister=self->mRegister;
            }
            if(self!=((void*)0)) {
                result_23->mVolatile=self->mVolatile;
            }
            if(self!=((void*)0)) {
                result_23->mStatic=self->mStatic;
            }
            if(self!=((void*)0)) {
                result_23->mExtern=self->mExtern;
            }
            if(self!=((void*)0)) {
                result_23->mRestrict=self->mRestrict;
            }
            if(self!=((void*)0)) {
                result_23->mImmutable=self->mImmutable;
            }
            if(self!=((void*)0)) {
                result_23->mHeap=self->mHeap;
            }
            if(self!=((void*)0)) {
                result_23->mDummyHeap=self->mDummyHeap;
            }
            if(self!=((void*)0)) {
                result_23->mNoHeap=self->mNoHeap;
            }
            if(self!=((void*)0)) {
                result_23->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(self!=((void*)0)) {
                result_23->mRefference=self->mRefference;
            }
            if(self!=((void*)0)) {
                result_23->mException=self->mException;
            }
            if(self!=((void*)0)) {
                result_23->mPointerNum=self->mPointerNum;
            }
            if(self!=((void*)0)) {
                result_23->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(self!=((void*)0)) {
                result_23->mSizeNum=self->mSizeNum;
            }
            if(self!=((void*)0)) {
                result_23->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(self!=((void*)0)) {
                result_23->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                __dec_obj42=result_23->mOriginalTypeName;
                result_23->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value73=string_clone(self->mOriginalTypeName))));
                if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
                if(right_value73) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_23->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(self!=((void*)0)) {
                result_23->mFunctionParam=self->mFunctionParam;
            }
            if(self!=((void*)0)) {
                result_23->mAllocaValue=self->mAllocaValue;
            }
            if(self!=((void*)0)) {
                result_23->mGenericsStruct=self->mGenericsStruct;
            }
            if(self!=((void*)0)) {
                result_23->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(self!=((void*)0)) {
                result_23->mComeMemCore=self->mComeMemCore;
            }
            if(self!=((void*)0)) {
                result_23->mInline=self->mInline;
            }
            struct sType* __result55__ = result_23;
            if(result_23) { come_call_finalizer(sType_finalize,result_23, (void*)0, (void*)0, 0, 0, 1); }
            return __result55__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value45;
struct tuple1$1sTypeph* result_24;
void* right_value46;
struct sType* __dec_obj25;
memset(&right_value45, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value46, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct tuple1$1sTypeph* __result42__ = (void*)0;
                        return __result42__;
                    }
                    result_24=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value45=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "06str.c", 292))));
                    if(right_value45) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        __dec_obj25=result_24->v1;
                        result_24->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_clone(self->v1))));
                        if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value46) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    struct tuple1$1sTypeph* __result43__ = result_24;
                    if(result_24) { come_call_finalizer(tuple1$1sTypephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1); }
                    return __result43__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value49;
void* right_value50;
struct list$1sTypeph* result_25;
struct list_item$1sTypeph* it_26;
void* right_value54;
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&result_25, 0, sizeof(struct list$1sTypeph*));
memset(&it_26, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value54, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1sTypeph* __result44__ = ((void*)0);
                        return __result44__;
                    }
                    result_25=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value50=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value49=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 296))))))));
                    if(right_value50) { come_call_finalizer(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
                    it_26=self->head;
                    while(it_26!=((void*)0)) {
                        list$1sTypephp_push_back2(result_25,(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(it_26->item)))));
                        if(right_value54) { come_call_finalizer(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0); }
                        it_26=it_26->next;
                    }
                    struct list$1sTypeph* __result46__ = result_25;
                    if(result_25) { come_call_finalizer(list$1sTypephp_finalize,result_25, (void*)0, (void*)0, 0, 0, 1); }
                    return __result46__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1sTypeph* __result45__ = self;
                        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result45__;
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value51;
struct list_item$1sTypeph* litem_27;
struct sType* __dec_obj28;
void* right_value52;
struct list_item$1sTypeph* litem_28;
struct sType* __dec_obj29;
void* right_value53;
struct list_item$1sTypeph* litem_29;
struct sType* __dec_obj30;
memset(&right_value51, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1sTypeph*));
                            if(self->len==0) {
                                litem_27=((struct list_item$1sTypeph*)(right_value51=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "06str.c", 302)));
                                litem_27->prev=((void*)0);
                                litem_27->next=((void*)0);
                                __dec_obj28=litem_27->item;
                                litem_27->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0); }
                                self->tail=litem_27;
                                self->head=litem_27;
                            }
                            else if(self->len==1) {
                                litem_28=((struct list_item$1sTypeph*)(right_value52=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "06str.c", 312)));
                                litem_28->prev=self->head;
                                litem_28->next=((void*)0);
                                __dec_obj29=litem_28->item;
                                litem_28->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0); }
                                self->tail=litem_28;
                                self->head->next=litem_28;
                            }
                            else {
                                litem_29=((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "06str.c", 322)));
                                litem_29->prev=self->tail;
                                litem_29->next=((void*)0);
                                __dec_obj30=litem_29->item;
                                litem_29->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0); }
                                self->tail->next=litem_29;
                                self->tail=litem_29;
                            }
                            self->len++;
                            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value56;
void* right_value57;
struct list$1sNodeph* result_30;
struct list_item$1sNodeph* it_31;
void* right_value62;
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&result_30, 0, sizeof(struct list$1sNodeph*));
memset(&it_31, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value62, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1sNodeph* __result47__ = ((void*)0);
                        return __result47__;
                    }
                    result_30=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value57=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value56=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 297))))))));
                    if(right_value57) { come_call_finalizer(list$1sNodephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0); }
                    it_31=self->head;
                    while(it_31!=((void*)0)) {
                        list$1sNodephp_push_back2(result_30,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value62=sNodep_clone(it_31->item)))));
                        if(right_value62) { right_value62 = come_decrement_ref_count(right_value62, ((struct sNode*)right_value62)->finalize, ((struct sNode*)right_value62)->_protocol_obj, 1, 0); } 
                        it_31=it_31->next;
                    }
                    struct list$1sNodeph* __result51__ = result_30;
                    if(result_30) { come_call_finalizer(list$1sNodephp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1); }
                    return __result51__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1sNodeph* __result48__ = self;
                        if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result48__;
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value58;
struct list_item$1sNodeph* litem_32;
struct sNode* __dec_obj32;
void* right_value59;
struct list_item$1sNodeph* litem_33;
struct sNode* __dec_obj33;
void* right_value60;
struct list_item$1sNodeph* litem_34;
struct sNode* __dec_obj34;
memset(&right_value58, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value59, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value60, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1sNodeph*));
                            if(self->len==0) {
                                litem_32=((struct list_item$1sNodeph*)(right_value58=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "06str.c", 303)));
                                litem_32->prev=((void*)0);
                                litem_32->next=((void*)0);
                                __dec_obj32=litem_32->item;
                                litem_32->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0); }
                                self->tail=litem_32;
                                self->head=litem_32;
                            }
                            else if(self->len==1) {
                                litem_33=((struct list_item$1sNodeph*)(right_value59=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "06str.c", 313)));
                                litem_33->prev=self->head;
                                litem_33->next=((void*)0);
                                __dec_obj33=litem_33->item;
                                litem_33->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0); }
                                self->tail=litem_33;
                                self->head->next=litem_33;
                            }
                            else {
                                litem_34=((struct list_item$1sNodeph*)(right_value60=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "06str.c", 323)));
                                litem_34->prev=self->tail;
                                litem_34->next=((void*)0);
                                __dec_obj34=litem_34->item;
                                litem_34->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0); }
                                self->tail->next=litem_34;
                                self->tail=litem_34;
                            }
                            self->len++;
                            if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value61;
struct sNode* result_35;
memset(&right_value61, 0, sizeof(void*));
memset(&result_35, 0, sizeof(struct sNode*));
                            if(self==(void*)0) {
                                struct sNode* __result49__ = (void*)0;
                                return __result49__;
                            }
                            result_35=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value61=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "06str.c", 303))));
                            if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                result_35->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(self!=((void*)0)) {
                                result_35->finalize=self->finalize;
                            }
                            if(self!=((void*)0)) {
                                result_35->clone=self->clone;
                            }
                            if(self!=((void*)0)) {
                                result_35->compile=self->compile;
                            }
                            if(self!=((void*)0)) {
                                result_35->sline=self->sline;
                            }
                            if(self!=((void*)0)) {
                                result_35->sname=self->sname;
                            }
                            if(self!=((void*)0)) {
                                result_35->terminated=self->terminated;
                            }
                            struct sNode* __result50__ = result_35;
                            return __result50__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value65;
void* right_value66;
struct list$1charph* result_36;
struct list_item$1charph* it_37;
void* right_value70;
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct list$1charph*));
memset(&it_37, 0, sizeof(struct list_item$1charph*));
memset(&right_value70, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1charph* __result52__ = ((void*)0);
                        return __result52__;
                    }
                    result_36=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value66=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value65=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "06str.c", 300))))))));
                    if(right_value66) { come_call_finalizer(list$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0); }
                    it_37=self->head;
                    while(it_37!=((void*)0)) {
                        list$1charphp_push_back2(result_36,(char*)come_increment_ref_count(((char*)(right_value70=string_clone(it_37->item)))));
                        if(right_value70) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0); }
                        it_37=it_37->next;
                    }
                    struct list$1charph* __result54__ = result_36;
                    if(result_36) { come_call_finalizer(list$1charphp_finalize,result_36, (void*)0, (void*)0, 0, 0, 1); }
                    return __result54__;
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1charph* __result53__ = self;
                        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result53__;
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value67;
struct list_item$1charph* litem_38;
char* __dec_obj37;
void* right_value68;
struct list_item$1charph* litem_39;
char* __dec_obj38;
void* right_value69;
struct list_item$1charph* litem_40;
char* __dec_obj39;
memset(&right_value67, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1charph*));
memset(&right_value68, 0, sizeof(void*));
memset(&litem_39, 0, sizeof(struct list_item$1charph*));
memset(&right_value69, 0, sizeof(void*));
memset(&litem_40, 0, sizeof(struct list_item$1charph*));
                            if(self->len==0) {
                                litem_38=((struct list_item$1charph*)(right_value67=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "06str.c", 306)));
                                litem_38->prev=((void*)0);
                                litem_38->next=((void*)0);
                                __dec_obj37=litem_38->item;
                                litem_38->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_38;
                                self->head=litem_38;
                            }
                            else if(self->len==1) {
                                litem_39=((struct list_item$1charph*)(right_value68=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "06str.c", 316)));
                                litem_39->prev=self->head;
                                litem_39->next=((void*)0);
                                __dec_obj38=litem_39->item;
                                litem_39->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_39;
                                self->head->next=litem_39;
                            }
                            else {
                                litem_40=((struct list_item$1charph*)(right_value69=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "06str.c", 326)));
                                litem_40->prev=self->tail;
                                litem_40->next=((void*)0);
                                __dec_obj39=litem_40->item;
                                litem_40->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0); }
                                self->tail->next=litem_40;
                                self->tail=litem_40;
                            }
                            self->len++;
                            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* right_value76;
struct list_item$1sNodeph* litem_42;
struct sNode* __dec_obj44;
void* right_value77;
struct list_item$1sNodeph* litem_43;
struct sNode* __dec_obj45;
void* right_value78;
struct list_item$1sNodeph* litem_44;
struct sNode* __dec_obj46;
memset(&right_value76, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value77, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value78, 0, sizeof(void*));
memset(&litem_44, 0, sizeof(struct list_item$1sNodeph*));
        if(self->len==0) {
            litem_42=((struct list_item$1sNodeph*)(right_value76=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "06str.c", 292)));
            litem_42->prev=((void*)0);
            litem_42->next=((void*)0);
            __dec_obj44=litem_42->item;
            litem_42->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0); }
            self->tail=litem_42;
            self->head=litem_42;
        }
        else if(self->len==1) {
            litem_43=((struct list_item$1sNodeph*)(right_value77=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "06str.c", 302)));
            litem_43->prev=self->head;
            litem_43->next=((void*)0);
            __dec_obj45=litem_43->item;
            litem_43->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0); }
            self->tail=litem_43;
            self->head->next=litem_43;
        }
        else {
            litem_44=((struct list_item$1sNodeph*)(right_value78=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "06str.c", 312)));
            litem_44->prev=self->tail;
            litem_44->next=((void*)0);
            __dec_obj46=litem_44->item;
            litem_44->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0); }
            self->tail->next=litem_44;
            self->tail=litem_44;
        }
        self->len++;
        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
        int __result56__ = self->len;
        return __result56__;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
struct CVALUE* result_50;
memset(&result_50, 0, sizeof(struct CVALUE*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct CVALUE* __result57__ = self->it->item;
            return __result57__;
        }
        memset(&result_50,0,sizeof(struct CVALUE*));
        struct CVALUE* __result58__ = result_50;
        return __result58__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
        _Bool __result59__ = self->it==((void*)0);
        return __result59__;
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
struct CVALUE* result_52;
memset(&result_52, 0, sizeof(struct CVALUE*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct CVALUE* __result60__ = self->it->item;
            return __result60__;
        }
        memset(&result_52,0,sizeof(struct CVALUE*));
        struct CVALUE* __result61__ = result_52;
        return __result61__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int index){
struct CVALUE* default_value_53;
memset(&default_value_53, 0, sizeof(struct CVALUE*)); /* bbb */
                memset(&default_value_53,0,sizeof(struct CVALUE*));
                struct CVALUE* __result64__ = list$1CVALUEphp_item(self,index,default_value_53);
                return __result64__;
}

static struct CVALUE* list$1CVALUEphp_item(struct list$1CVALUEph* self, int position, struct CVALUE* default_value){
struct list_item$1CVALUEph* it_54;
int i_55;
memset(&it_54, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_55, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_54=self->head;
                    i_55=0;
                    while(it_54!=((void*)0)) {
                        if(position==i_55) {
                            struct CVALUE* __result62__ = it_54->item;
                            return __result62__;
                        }
                        it_54=it_54->next;
                        i_55++;
                    }
                    struct CVALUE* __result63__ = default_value;
                    return __result63__;
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value90;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj47;
void* right_value91;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj48;
void* right_value92;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj49;
memset(&right_value90, 0, sizeof(void*));
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value91, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value92, 0, sizeof(void*));
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
        if(self->len==0) {
            litem_57=((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "06str.c", 324)));
            litem_57->prev=((void*)0);
            litem_57->next=((void*)0);
            __dec_obj47=litem_57->item;
            litem_57->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_57;
            self->head=litem_57;
        }
        else if(self->len==1) {
            litem_58=((struct list_item$1sTypeph*)(right_value91=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "06str.c", 334)));
            litem_58->prev=self->head;
            litem_58->next=((void*)0);
            __dec_obj48=litem_58->item;
            litem_58->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_58;
            self->head->next=litem_58;
        }
        else {
            litem_59=((struct list_item$1sTypeph*)(right_value92=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "06str.c", 344)));
            litem_59->prev=self->tail;
            litem_59->next=((void*)0);
            __dec_obj49=litem_59->item;
            litem_59->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj49) { come_call_finalizer(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0); }
            self->tail->next=litem_59;
            self->tail=litem_59;
        }
        self->len++;
        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_63;
int it_64;
memset(&hash_63, 0, sizeof(int));
memset(&it_64, 0, sizeof(int));
        hash_63=string_get_hash_key(((char*)key))%self->size;
        it_64=hash_63;
        while((_Bool)1) {
            if(self->item_existance[it_64]) {
                if(charp_equals(self->keys[it_64],key)) {
                    struct sFun* __result65__ = self->items[it_64];
                    return __result65__;
                }
                it_64++;
                if(it_64>=self->size) {
                    it_64=0;
                }
                else if(it_64==hash_63) {
                    struct sFun* __result66__ = default_value;
                    return __result66__;
                }
            }
            else {
                struct sFun* __result67__ = default_value;
                return __result67__;
            }
        }
        struct sFun* __result68__ = default_value;
        return __result68__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_74;
memset(&default_value_74, 0, sizeof(struct sType*)); /* bbb */
        memset(&default_value_74,0,sizeof(struct sType*));
        struct sType* __result72__ = list$1sTypephp_item(self,index,default_value_74);
        return __result72__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_75;
int i_76;
memset(&it_75, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_76, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_75=self->head;
            i_76=0;
            while(it_75!=((void*)0)) {
                if(position==i_76) {
                    struct sType* __result70__ = it_75->item;
                    return __result70__;
                }
                it_75=it_75->next;
                i_76++;
            }
            struct sType* __result71__ = default_value;
            return __result71__;
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
    int __result74__ = self->sline;
    return __result74__;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* right_value124;
memset(&right_value124, 0, sizeof(void*));
    char* __result75__ = ((char*)(right_value124=__builtin_string(self->sname)));
    return __result75__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
struct list$1sNodeph* __dec_obj59;
void* right_value125;
char* __dec_obj60;
memset(&right_value125, 0, sizeof(void*));
    __dec_obj59=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    if(__dec_obj59) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj60=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(info->sname))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
    if(right_value125) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0); }
    struct sTupleNode* __result76__ = self;
    if(self) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(tuple_elements) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1); }
    return __result76__;
}

_Bool sTupleNode_terminated(){
    _Bool __result77__ = (_Bool)0;
    return __result77__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_83;
void* right_value126;
void* right_value127;
struct list$1sTypeph* tuple_types_84;
void* right_value128;
void* right_value129;
struct list$1CVALUEph* tuple_values_85;
struct sNode* it_86;
void* right_value130;
struct CVALUE* come_value_87;
void* right_value134;
void* right_value135;
void* right_value136;
void* right_value137;
void* right_value138;
struct sType* type_89;
struct sType* it_91;
void* right_value148;
void* right_value149;
struct CVALUE* obj_value_94;
void* right_value150;
void* right_value151;
struct buffer* num_string_95;
void* right_value152;
struct sType* type2_96;
void* right_value153;
char* type_name_97;
void* right_value154;
void* right_value155;
char* __dec_obj71;
void* right_value156;
struct sType* type3_98;
void* right_value157;
struct sType* __dec_obj72;
void* right_value158;
char* __dec_obj73;
void* right_value159;
struct sType* obj_type_99;
char* fun_name_100;
void* right_value160;
void* right_value161;
void* right_value162;
char* generics_fun_name_101;
struct sFun* fun_102;
void* right_value163;
struct sType* result_type_103;
void* right_value164;
void* right_value165;
struct list$1CVALUEph* come_params_104;
void* right_value166;
char* __dec_obj74;
int i_105;
struct CVALUE* it_106;
void* right_value170;
struct CVALUE* come_value_108;
void* right_value171;
char* __dec_obj77;
void* right_value172;
void* right_value173;
struct buffer* buf_109;
int j_110;
struct CVALUE* it_111;
void* right_value174;
struct CVALUE* come_value2_112;
void* right_value175;
char* __dec_obj78;
void* right_value176;
void* right_value177;
char* __dec_obj79;
void* right_value178;
struct sType* __dec_obj80;
void* right_value179;
memset(&tuple_elements_83, 0, sizeof(struct list$1sNodeph*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&tuple_types_84, 0, sizeof(struct list$1sTypeph*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&tuple_values_85, 0, sizeof(struct list$1CVALUEph*));
memset(&it_86, 0, sizeof(struct sNode*));
memset(&right_value130, 0, sizeof(void*));
memset(&come_value_87, 0, sizeof(struct CVALUE*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&type_89, 0, sizeof(struct sType*));
memset(&it_91, 0, sizeof(struct sType*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&obj_value_94, 0, sizeof(struct CVALUE*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&num_string_95, 0, sizeof(struct buffer*));
memset(&right_value152, 0, sizeof(void*));
memset(&type2_96, 0, sizeof(struct sType*));
memset(&right_value153, 0, sizeof(void*));
memset(&type_name_97, 0, sizeof(char*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&type3_98, 0, sizeof(struct sType*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&obj_type_99, 0, sizeof(struct sType*));
memset(&fun_name_100, 0, sizeof(char*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&generics_fun_name_101, 0, sizeof(char*));
memset(&fun_102, 0, sizeof(struct sFun*));
memset(&right_value163, 0, sizeof(void*));
memset(&result_type_103, 0, sizeof(struct sType*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&come_params_104, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value166, 0, sizeof(void*));
memset(&i_105, 0, sizeof(int));
memset(&it_106, 0, sizeof(struct CVALUE*));
memset(&right_value170, 0, sizeof(void*));
memset(&come_value_108, 0, sizeof(struct CVALUE*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&buf_109, 0, sizeof(struct buffer*));
memset(&j_110, 0, sizeof(int));
memset(&it_111, 0, sizeof(struct CVALUE*));
memset(&right_value174, 0, sizeof(void*));
memset(&come_value2_112, 0, sizeof(struct CVALUE*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
    tuple_elements_83=self->tuple_elements;
    tuple_types_84=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value127=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value126=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 456))))))));
    if(right_value127) { come_call_finalizer(list$1sTypephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0); }
    tuple_values_85=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value129=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value128=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 457))))))));
    if(right_value129) { come_call_finalizer(list$1CVALUEphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_86=list$1sNodephp_begin((tuple_elements_83));
    !list$1sNodephp_end((tuple_elements_83));
    it_86=list$1sNodephp_next((tuple_elements_83))
    ){
        if(!it_86->compile(it_86->_protocol_obj,info)) {
            _Bool __result78__ = (_Bool)0;
            return __result78__;
        }
        come_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
        if(right_value130) { come_call_finalizer(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_85,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=CVALUE_clone(come_value_87)))));
        if(right_value134) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0); }
        list$1sTypephp_push_back(tuple_types_84,(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(come_value_87->type)))));
        if(right_value135) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
        if(come_value_87) { come_call_finalizer(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0); }
    }
    type_89=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value136=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 471)))),((char*)(right_value137=xsprintf("tuple%d",list$1sTypephp_length(tuple_types_84)))),info,(_Bool)0))));
    if(right_value136) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value137) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0); }
    if(right_value138) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_91=list$1sTypephp_begin((tuple_types_84));
    !list$1sTypephp_end((tuple_types_84));
    it_91=list$1sTypephp_next((tuple_types_84))
    ){
        list$1sTypephp_push_back(type_89->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sTypep_clone(it_91)))));
        if(right_value148) { come_call_finalizer(sTypep_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
    }
    obj_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 477))));
    if(right_value149) { come_call_finalizer(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0); }
    num_string_95=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value151=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value150=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 479))))))));
    if(right_value150) { come_call_finalizer(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value151) { come_call_finalizer(buffer_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(num_string_95,"1");
    type2_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=solve_generics(type_89,type_89,info))));
    if(right_value152) { come_call_finalizer(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0); }
    type_name_97=(char*)come_increment_ref_count(((char*)(right_value153=make_type_name_string(type2_96,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    if(right_value153) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0); }
    __dec_obj71=obj_value_94->c_value;
    obj_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_97,type_name_97,((char*)(right_value154=buffer_to_string(num_string_95))),info->sname,info->sline))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
    if(right_value154) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0); }
    if(right_value155) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0); }
    type3_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(type2_96))));
    if(right_value156) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0); }
    type3_98->mPointerNum++;
    type3_98->mHeap=(_Bool)1;
    type2_96->mHeap=(_Bool)1;
    __dec_obj72=obj_value_94->type;
    obj_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(type2_96))));
    if(__dec_obj72) { come_call_finalizer(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value157) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj73=obj_value_94->c_value;
    obj_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value158=append_object_to_right_values(obj_value_94->c_value,(struct sType*)come_increment_ref_count(type3_98),info))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
    if(right_value158) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0); }
    obj_value_94->type->mPointerNum++;
    obj_value_94->var=((void*)0);
    obj_type_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(type2_96))));
    if(right_value159) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0); }
    fun_name_100="initialize";
    generics_fun_name_101=(char*)come_increment_ref_count(((char*)(right_value162=string_to_string(((char*)(right_value161=make_generics_function(obj_type_99,(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string(fun_name_100)))),info)))))));
    if(right_value160) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0); }
    if(right_value161) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0); }
    if(right_value162) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0); }
    fun_102=map$2charphsFunphp_at(info->funcs,generics_fun_name_101,((void*)0));
    if(fun_102==((void*)0)) {
        err_msg(info,"function not found(%s) at method(%s)\n",generics_fun_name_101,info->come_fun->mName);
        _Bool __result89__ = (_Bool)0;
        return __result89__;
    }
    result_type_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(fun_102->mResultType))));
    if(right_value163) { come_call_finalizer(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0); }
    result_type_103->mStatic=(_Bool)0;
    come_params_104=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value165=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value164=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 513))))))));
    if(right_value165) { come_call_finalizer(list$1CVALUEphp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
    if(list$1sTypephp_operator_load_element(fun_102->mParamTypes,0)->mHeap&&obj_value_94->type->mHeap) {
        __dec_obj74=obj_value_94->c_value;
        obj_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value166=increment_ref_count_object(obj_value_94->type,obj_value_94->c_value,info))));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0); }
        if(right_value166) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0); }
    }
    list$1CVALUEphp_push_back(come_params_104,(struct CVALUE*)come_increment_ref_count(obj_value_94));
    i_105=1;
    for(
    it_106=list$1CVALUEphp_begin((tuple_values_85));
    !list$1CVALUEphp_end((tuple_values_85));
    it_106=list$1CVALUEphp_next((tuple_values_85))
    ){
        come_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=CVALUEp_clone(it_106))));
        if(right_value170) { come_call_finalizer(CVALUEp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0); }
        if(list$1sTypephp_operator_load_element(fun_102->mParamTypes,i_105)&&list$1sTypephp_operator_load_element(fun_102->mParamTypes,i_105)->mHeap&&come_value_108->type->mHeap) {
            __dec_obj77=come_value_108->c_value;
            come_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value171=increment_ref_count_object(come_value_108->type,come_value_108->c_value,info))));
            if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0); }
            if(right_value171) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0); }
        }
        list$1CVALUEphp_push_back(come_params_104,(struct CVALUE*)come_increment_ref_count(come_value_108));
        i_105++;
        if(come_value_108) { come_call_finalizer(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0); }
    }
    buf_109=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value172=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 532))))))));
    if(right_value172) { come_call_finalizer(buffer_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value173) { come_call_finalizer(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(buf_109,generics_fun_name_101);
    buffer_append_str(buf_109,"(");
    j_110=0;
    for(
    it_111=list$1CVALUEphp_begin((come_params_104));
    !list$1CVALUEphp_end((come_params_104));
    it_111=list$1CVALUEphp_next((come_params_104))
    ){
        buffer_append_str(buf_109,it_111->c_value);
        if(j_110!=list$1CVALUEphp_length(come_params_104)-1) {
            buffer_append_str(buf_109,",");
        }
        j_110++;
    }
    buffer_append_str(buf_109,")");
    come_value2_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 549))));
    if(right_value174) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj78=come_value2_112->c_value;
    come_value2_112->c_value=(char*)come_increment_ref_count(((char*)(right_value175=buffer_to_string(buf_109))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0); }
    if(right_value175) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0); }
    if(result_type_103->mHeap) {
        __dec_obj79=come_value2_112->c_value;
        come_value2_112->c_value=(char*)come_increment_ref_count(((char*)(right_value177=append_object_to_right_values(((char*)(right_value176=buffer_to_string(buf_109))),(struct sType*)come_increment_ref_count(result_type_103),info))));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0); }
        if(right_value176) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0); }
        if(right_value177) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0); }
    }
    __dec_obj80=come_value2_112->type;
    come_value2_112->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(result_type_103))));
    if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value178) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_112->type->mStatic=(_Bool)0;
    come_value2_112->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value179=buffer_to_string(buf_109))));
    if(right_value179) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0); }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_112));
    _Bool __result92__ = (_Bool)1;
    if(tuple_types_84) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_84, (void*)0, (void*)0, 0, 0, 0); }
    if(tuple_values_85) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_85, (void*)0, (void*)0, 0, 0, 0); }
    if(type_89) { come_call_finalizer(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_value_94) { come_call_finalizer(CVALUE_finalize,obj_value_94, (void*)0, (void*)0, 0, 0, 0); }
    if(num_string_95) { come_call_finalizer(buffer_finalize,num_string_95, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_96) { come_call_finalizer(sType_finalize,type2_96, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name_97) { type_name_97 = come_decrement_ref_count(type_name_97, (void*)0, (void*)0, 0, 0); }
    if(type3_98) { come_call_finalizer(sType_finalize,type3_98, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_type_99) { come_call_finalizer(sType_finalize,obj_type_99, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_fun_name_101) { generics_fun_name_101 = come_decrement_ref_count(generics_fun_name_101, (void*)0, (void*)0, 0, 0); }
    if(result_type_103) { come_call_finalizer(sType_finalize,result_type_103, (void*)0, (void*)0, 0, 0, 0); }
    if(come_params_104) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_104, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_109) { come_call_finalizer(buffer_finalize,buf_109, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_112) { come_call_finalizer(CVALUE_finalize,come_value2_112, (void*)0, (void*)0, 0, 0, 0); }
    return __result92__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* right_value131;
struct CVALUE* result_88;
void* right_value132;
char* __dec_obj61;
void* right_value133;
struct sType* __dec_obj62;
memset(&right_value131, 0, sizeof(void*));
memset(&result_88, 0, sizeof(struct CVALUE*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
            if(self==(void*)0) {
                struct CVALUE* __result79__ = (void*)0;
                return __result79__;
            }
            result_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 469))));
            if(right_value131) { come_call_finalizer(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                __dec_obj61=result_88->c_value;
                result_88->c_value=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(self->c_value))));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
                if(right_value132) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj62=result_88->type;
                result_88->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(self->type))));
                if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value133) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_88->var=self->var;
            }
            struct CVALUE* __result80__ = result_88;
            if(result_88) { come_call_finalizer(CVALUE_finalize,result_88, (void*)0, (void*)0, 0, 0, 1); }
            return __result80__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
        int __result81__ = self->len;
        return __result81__;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_90;
memset(&result_90, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sType* __result82__ = self->it->item;
            return __result82__;
        }
        memset(&result_90,0,sizeof(struct sType*));
        struct sType* __result83__ = result_90;
        return __result83__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
        _Bool __result84__ = self->it==((void*)0);
        return __result84__;
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_92;
memset(&result_92, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sType* __result85__ = self->it->item;
            return __result85__;
        }
        memset(&result_92,0,sizeof(struct sType*));
        struct sType* __result86__ = result_92;
        return __result86__;
}

static struct sType* sTypep_clone(struct sType* self){
void* right_value139;
struct sType* result_93;
void* right_value140;
struct tuple1$1sTypeph* __dec_obj63;
void* right_value141;
char* __dec_obj64;
void* right_value142;
struct list$1sTypeph* __dec_obj65;
void* right_value143;
struct list$1sNodeph* __dec_obj66;
void* right_value144;
struct list$1sTypeph* __dec_obj67;
void* right_value145;
struct list$1charph* __dec_obj68;
void* right_value146;
struct tuple1$1sTypeph* __dec_obj69;
void* right_value147;
char* __dec_obj70;
memset(&right_value139, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct sType*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sType* __result87__ = (void*)0;
                return __result87__;
            }
            result_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 476))));
            if(right_value139) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_93->mClass=self->mClass;
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                __dec_obj63=result_93->mNoSolvedGenericsType;
                result_93->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value140=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj63) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value140) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                __dec_obj64=result_93->mGenericsName;
                result_93->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value141=string_clone(self->mGenericsName))));
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
                if(right_value141) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                __dec_obj65=result_93->mGenericsTypes;
                result_93->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value142=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj65) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value142) { come_call_finalizer(list$1sTypephp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj66=result_93->mArrayNum;
                result_93->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value143=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj66) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value143) { come_call_finalizer(list$1sNodephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_93->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj67=result_93->mParamTypes;
                result_93->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value144=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj67) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value144) { come_call_finalizer(list$1sTypephp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj68=result_93->mParamNames;
                result_93->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj68) { come_call_finalizer(list$1charphp_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value145) { come_call_finalizer(list$1charphp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj69=result_93->mResultType;
                result_93->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value146=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj69) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value146) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_93->mVarArgs=self->mVarArgs;
            }
            if(self!=((void*)0)) {
                result_93->mUnsigned=self->mUnsigned;
            }
            if(self!=((void*)0)) {
                result_93->mShort=self->mShort;
            }
            if(self!=((void*)0)) {
                result_93->mLong=self->mLong;
            }
            if(self!=((void*)0)) {
                result_93->mLongLong=self->mLongLong;
            }
            if(self!=((void*)0)) {
                result_93->mConstant=self->mConstant;
            }
            if(self!=((void*)0)) {
                result_93->mRegister=self->mRegister;
            }
            if(self!=((void*)0)) {
                result_93->mVolatile=self->mVolatile;
            }
            if(self!=((void*)0)) {
                result_93->mStatic=self->mStatic;
            }
            if(self!=((void*)0)) {
                result_93->mExtern=self->mExtern;
            }
            if(self!=((void*)0)) {
                result_93->mRestrict=self->mRestrict;
            }
            if(self!=((void*)0)) {
                result_93->mImmutable=self->mImmutable;
            }
            if(self!=((void*)0)) {
                result_93->mHeap=self->mHeap;
            }
            if(self!=((void*)0)) {
                result_93->mDummyHeap=self->mDummyHeap;
            }
            if(self!=((void*)0)) {
                result_93->mNoHeap=self->mNoHeap;
            }
            if(self!=((void*)0)) {
                result_93->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(self!=((void*)0)) {
                result_93->mRefference=self->mRefference;
            }
            if(self!=((void*)0)) {
                result_93->mException=self->mException;
            }
            if(self!=((void*)0)) {
                result_93->mPointerNum=self->mPointerNum;
            }
            if(self!=((void*)0)) {
                result_93->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(self!=((void*)0)) {
                result_93->mSizeNum=self->mSizeNum;
            }
            if(self!=((void*)0)) {
                result_93->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(self!=((void*)0)) {
                result_93->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                __dec_obj70=result_93->mOriginalTypeName;
                result_93->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value147=string_clone(self->mOriginalTypeName))));
                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0); }
                if(right_value147) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_93->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(self!=((void*)0)) {
                result_93->mFunctionParam=self->mFunctionParam;
            }
            if(self!=((void*)0)) {
                result_93->mAllocaValue=self->mAllocaValue;
            }
            if(self!=((void*)0)) {
                result_93->mGenericsStruct=self->mGenericsStruct;
            }
            if(self!=((void*)0)) {
                result_93->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(self!=((void*)0)) {
                result_93->mComeMemCore=self->mComeMemCore;
            }
            if(self!=((void*)0)) {
                result_93->mInline=self->mInline;
            }
            struct sType* __result88__ = result_93;
            if(result_93) { come_call_finalizer(sType_finalize,result_93, (void*)0, (void*)0, 0, 0, 1); }
            return __result88__;
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

static struct CVALUE* CVALUEp_clone(struct CVALUE* self){
void* right_value167;
struct CVALUE* result_107;
void* right_value168;
char* __dec_obj75;
void* right_value169;
struct sType* __dec_obj76;
memset(&right_value167, 0, sizeof(void*));
memset(&result_107, 0, sizeof(struct CVALUE*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
            if(self==(void*)0) {
                struct CVALUE* __result90__ = (void*)0;
                return __result90__;
            }
            result_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 524))));
            if(right_value167) { come_call_finalizer(CVALUE_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                __dec_obj75=result_107->c_value;
                result_107->c_value=(char*)come_increment_ref_count(((char*)(right_value168=string_clone(self->c_value))));
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
                if(right_value168) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj76=result_107->type;
                result_107->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(self->type))));
                if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value169) { come_call_finalizer(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_107->var=self->var;
            }
            struct CVALUE* __result91__ = result_107;
            if(result_107) { come_call_finalizer(CVALUE_finalize,result_107, (void*)0, (void*)0, 0, 0, 1); }
            return __result91__;
}

static void CVALUEp_finalize(struct CVALUE* self){
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
            }
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
    int __result93__ = self->sline;
    return __result93__;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* right_value180;
memset(&right_value180, 0, sizeof(void*));
    char* __result94__ = ((char*)(right_value180=__builtin_string(self->sname)));
    return __result94__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
struct list$1sNodeph* __dec_obj81;
struct list$1sNodeph* __dec_obj82;
void* right_value181;
char* __dec_obj83;
memset(&right_value181, 0, sizeof(void*));
    __dec_obj81=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    if(__dec_obj81) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0); }
    __dec_obj82=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    if(__dec_obj82) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(info->sname))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0); }
    if(right_value181) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0); }
    struct sMapNode* __result95__ = self;
    if(self) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(map_key_elements) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1); }
    if(map_elements) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1); }
    return __result95__;
}

_Bool sMapNode_terminated(){
    _Bool __result96__ = (_Bool)0;
    return __result96__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_113;
struct list$1sNodeph* map_elements_114;
void* right_value182;
void* right_value183;
struct list$1CVALUEph* key_params_115;
void* right_value184;
void* right_value185;
struct list$1CVALUEph* element_params_116;
struct sType* map_key_type_117;
struct sType* map_element_type_118;
int i_119;
struct sNode* key_elements_123;
struct sNode* elements_124;
void* right_value186;
struct CVALUE* come_value_125;
void* right_value187;
struct CVALUE* come_value2_126;
void* right_value188;
struct sType* __dec_obj84;
void* right_value189;
struct sType* __dec_obj85;
static int map_value_num_127=0;
void* right_value190;
struct sType* key_type_values_128;
void* right_value191;
void* right_value192;
char* var_name_129;
void* right_value193;
struct sVar* var__130;
void* right_value194;
void* right_value195;
struct sType* element_type_values_131;
void* right_value196;
void* right_value197;
char* var_name2_132;
void* right_value198;
struct sVar* var2__133;
void* right_value199;
void* right_value200;
void* right_value201;
struct buffer* source_134;
int i_135;
struct CVALUE* key_param_136;
struct CVALUE* element_param_137;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
struct sType* map_type_138;
void* right_value209;
void* right_value210;
void* right_value211;
struct sType* obj_type_139;
char* fun_name_140;
void* right_value212;
void* right_value213;
void* right_value214;
char* generics_fun_name_141;
struct sFun* fun_142;
void* right_value215;
struct sType* result_type_143;
struct sType* type_144;
void* right_value216;
struct CVALUE* obj_value_145;
void* right_value217;
void* right_value218;
struct buffer* num_string_146;
void* right_value219;
struct sType* type2_147;
void* right_value220;
char* type_name_148;
void* right_value221;
void* right_value222;
char* __dec_obj86;
void* right_value223;
struct sType* type3_149;
void* right_value224;
struct sType* __dec_obj87;
void* right_value225;
char* __dec_obj88;
void* right_value226;
void* right_value227;
struct list$1CVALUEph* come_params_150;
void* right_value228;
char* __dec_obj89;
void* right_value229;
struct CVALUE* come_value2_151;
void* right_value230;
char* __dec_obj90;
void* right_value231;
struct CVALUE* come_value3_152;
void* right_value232;
char* __dec_obj91;
void* right_value233;
struct CVALUE* come_value4_153;
void* right_value234;
char* __dec_obj92;
void* right_value235;
void* right_value236;
struct buffer* buf_154;
int j_155;
struct CVALUE* it_156;
void* right_value237;
struct CVALUE* come_value5_157;
void* right_value238;
char* __dec_obj93;
void* right_value239;
void* right_value240;
char* __dec_obj94;
void* right_value241;
struct sType* __dec_obj95;
void* right_value242;
memset(&map_key_elements_113, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_114, 0, sizeof(struct list$1sNodeph*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&key_params_115, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&element_params_116, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_117, 0, sizeof(struct sType*)); /* bbb */
memset(&map_element_type_118, 0, sizeof(struct sType*)); /* bbb */
memset(&i_119, 0, sizeof(int));
memset(&key_elements_123, 0, sizeof(struct sNode*));
memset(&elements_124, 0, sizeof(struct sNode*));
memset(&right_value186, 0, sizeof(void*));
memset(&come_value_125, 0, sizeof(struct CVALUE*));
memset(&right_value187, 0, sizeof(void*));
memset(&come_value2_126, 0, sizeof(struct CVALUE*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&key_type_values_128, 0, sizeof(struct sType*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&var_name_129, 0, sizeof(char*));
memset(&right_value193, 0, sizeof(void*));
memset(&var__130, 0, sizeof(struct sVar*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&element_type_values_131, 0, sizeof(struct sType*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&var_name2_132, 0, sizeof(char*));
memset(&right_value198, 0, sizeof(void*));
memset(&var2__133, 0, sizeof(struct sVar*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&source_134, 0, sizeof(struct buffer*));
memset(&i_135, 0, sizeof(int));
memset(&key_param_136, 0, sizeof(struct CVALUE*));
memset(&element_param_137, 0, sizeof(struct CVALUE*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&map_type_138, 0, sizeof(struct sType*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&obj_type_139, 0, sizeof(struct sType*));
memset(&fun_name_140, 0, sizeof(char*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&generics_fun_name_141, 0, sizeof(char*));
memset(&fun_142, 0, sizeof(struct sFun*));
memset(&right_value215, 0, sizeof(void*));
memset(&result_type_143, 0, sizeof(struct sType*));
memset(&type_144, 0, sizeof(struct sType*));
memset(&right_value216, 0, sizeof(void*));
memset(&obj_value_145, 0, sizeof(struct CVALUE*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&num_string_146, 0, sizeof(struct buffer*));
memset(&right_value219, 0, sizeof(void*));
memset(&type2_147, 0, sizeof(struct sType*));
memset(&right_value220, 0, sizeof(void*));
memset(&type_name_148, 0, sizeof(char*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&type3_149, 0, sizeof(struct sType*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&come_params_150, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&come_value2_151, 0, sizeof(struct CVALUE*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&come_value3_152, 0, sizeof(struct CVALUE*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&come_value4_153, 0, sizeof(struct CVALUE*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&buf_154, 0, sizeof(struct buffer*));
memset(&j_155, 0, sizeof(int));
memset(&it_156, 0, sizeof(struct CVALUE*));
memset(&right_value237, 0, sizeof(void*));
memset(&come_value5_157, 0, sizeof(struct CVALUE*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
    map_key_elements_113=self->map_key_elements;
    map_elements_114=self->map_elements;
    key_params_115=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value183=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value182=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 607))))))));
    if(right_value183) { come_call_finalizer(list$1CVALUEphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0); }
    element_params_116=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value185=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value184=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 608))))))));
    if(right_value185) { come_call_finalizer(list$1CVALUEphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0); }
    for(
    i_119=0;
    i_119<list$1sNodephp_length(map_key_elements_113);
    i_119++
    ){
        key_elements_123=list$1sNodephp_operator_load_element(map_key_elements_113,i_119);
        elements_124=list$1sNodephp_operator_load_element(map_elements_114,i_119);
        if(!key_elements_123->compile(key_elements_123->_protocol_obj,info)) {
            _Bool __result101__ = (_Bool)0;
            return __result101__;
        }
        come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=get_value_from_stack(-1,info))));
        if(right_value186) { come_call_finalizer(CVALUE_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(key_params_115,(struct CVALUE*)come_increment_ref_count(come_value_125));
        if(!elements_124->compile(elements_124->_protocol_obj,info)) {
            _Bool __result102__ = (_Bool)0;
            if(come_value_125) { come_call_finalizer(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0); }
            return __result102__;
        }
        come_value2_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=get_value_from_stack(-1,info))));
        if(right_value187) { come_call_finalizer(CVALUE_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(element_params_116,(struct CVALUE*)come_increment_ref_count(come_value2_126));
        __dec_obj84=map_key_type_117;
        map_key_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(come_value_125->type))));
        if(__dec_obj84) { come_call_finalizer(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value188) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj85=map_element_type_118;
        map_element_type_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(come_value2_126->type))));
        if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value189) { come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0); }
        if(come_value_125) { come_call_finalizer(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value2_126) { come_call_finalizer(CVALUE_finalize,come_value2_126, (void*)0, (void*)0, 0, 0, 0); }
    }
    key_type_values_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(map_key_type_117))));
    if(right_value190) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0); }
    list$1sNodephp_push_back(key_type_values_128->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value191=create_int_node(list$1CVALUEphp_length(key_params_115),info)))));
    if(right_value191) { right_value191 = come_decrement_ref_count(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0); } 
    key_type_values_128->mHeap=(_Bool)0;
    var_name_129=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("__map_keys%d__",++map_value_num_127))));
    if(right_value192) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0); }
    add_variable_to_table(var_name_129,(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(key_type_values_128)))),info);
    if(right_value193) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0); }
    var__130=get_variable_from_table(info->lv_table,var_name_129);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value194=make_define_var(key_type_values_128,var__130->mCValueName,info,(_Bool)0))));
    if(right_value194) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0); }
    element_type_values_131=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(map_element_type_118))));
    if(right_value195) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0); }
    list$1sNodephp_push_back(element_type_values_131->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=create_int_node(list$1CVALUEphp_length(element_params_116),info)))));
    if(right_value196) { right_value196 = come_decrement_ref_count(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0); } 
    element_type_values_131->mHeap=(_Bool)0;
    var_name2_132=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("__map_element%d__",map_value_num_127))));
    if(right_value197) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0); }
    add_variable_to_table(var_name2_132,(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(element_type_values_131)))),info);
    if(right_value198) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0); }
    var2__133=get_variable_from_table(info->lv_table,var_name2_132);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value199=make_define_var(element_type_values_131,var2__133->mCValueName,info,(_Bool)0))));
    if(right_value199) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0); }
    source_134=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 664))))))));
    if(right_value200) { come_call_finalizer(buffer_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value201) { come_call_finalizer(buffer_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(source_134,"{");
    for(
    i_135=0;
    i_135<list$1CVALUEphp_length(key_params_115);
    i_135++
    ){
        key_param_136=list$1CVALUEphp_operator_load_element(key_params_115,i_135);
        element_param_137=list$1CVALUEphp_operator_load_element(element_params_116,i_135);
        if(map_key_type_117->mHeap) {
            buffer_append_str(source_134,((char*)(right_value202=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__130->mCValueName,i_135,key_param_136->c_value))));
            if(right_value202) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0); }
        }
        else {
            buffer_append_str(source_134,((char*)(right_value203=xsprintf("%s[%d]=%s;\n",var__130->mCValueName,i_135,key_param_136->c_value))));
            if(right_value203) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0); }
        }
        if(map_element_type_118->mHeap) {
            buffer_append_str(source_134,((char*)(right_value204=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__133->mCValueName,i_135,element_param_137->c_value))));
            if(right_value204) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0); }
        }
        else {
            buffer_append_str(source_134,((char*)(right_value205=xsprintf("%s[%d]=%s;\n",var2__133->mCValueName,i_135,element_param_137->c_value))));
            if(right_value205) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0); }
        }
    }
    buffer_append_str(source_134,"}");
    add_come_code(info,"%s",((char*)(right_value206=buffer_to_string(source_134))));
    if(right_value206) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0); }
    map_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value207=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 691)))),"map",info,(_Bool)0))));
    if(right_value207) { come_call_finalizer(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value208) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0); }
    list$1sTypephp_push_back(map_type_138->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_clone(map_key_type_117)))));
    if(right_value209) { come_call_finalizer(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0); }
    list$1sTypephp_push_back(map_type_138->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_clone(map_element_type_118)))));
    if(right_value210) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0); }
    obj_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(map_type_138))));
    if(right_value211) { come_call_finalizer(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0); }
    fun_name_140="initialize_with_values";
    generics_fun_name_141=(char*)come_increment_ref_count(((char*)(right_value214=string_to_string(((char*)(right_value213=make_generics_function(obj_type_139,(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(fun_name_140)))),info)))))));
    if(right_value212) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0); }
    if(right_value213) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0); }
    if(right_value214) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0); }
    fun_142=map$2charphsFunphp_at(info->funcs,generics_fun_name_141,((void*)0));
    if(fun_142==((void*)0)) {
        err_msg(info,"function not found(%s) at method(%s)\n",generics_fun_name_141,info->come_fun->mName);
        _Bool __result103__ = (_Bool)0;
        return __result103__;
    }
    result_type_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(fun_142->mResultType))));
    if(right_value215) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0); }
    result_type_143->mStatic=(_Bool)0;
    type_144=map_type_138;
    obj_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 712))));
    if(right_value216) { come_call_finalizer(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
    num_string_146=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value218=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value217=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 714))))))));
    if(right_value217) { come_call_finalizer(buffer_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value218) { come_call_finalizer(buffer_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(num_string_146,"1");
    type2_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=solve_generics(type_144,type_144,info))));
    if(right_value219) { come_call_finalizer(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0); }
    type_name_148=(char*)come_increment_ref_count(((char*)(right_value220=make_type_name_string(type2_147,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    if(right_value220) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0); }
    __dec_obj86=obj_value_145->c_value;
    obj_value_145->c_value=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_148,type_name_148,((char*)(right_value221=buffer_to_string(num_string_146))),info->sname,info->sline))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
    if(right_value221) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0); }
    if(right_value222) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0); }
    type3_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(type2_147))));
    if(right_value223) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0); }
    type3_149->mPointerNum++;
    type3_149->mHeap=(_Bool)1;
    type2_147->mHeap=(_Bool)1;
    __dec_obj87=obj_value_145->type;
    obj_value_145->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(type2_147))));
    if(__dec_obj87) { come_call_finalizer(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value224) { come_call_finalizer(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj88=obj_value_145->c_value;
    obj_value_145->c_value=(char*)come_increment_ref_count(((char*)(right_value225=append_object_to_right_values(obj_value_145->c_value,(struct sType*)come_increment_ref_count(type3_149),info))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
    if(right_value225) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0); }
    obj_value_145->type->mPointerNum++;
    obj_value_145->var=((void*)0);
    come_params_150=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value227=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value226=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 733))))))));
    if(right_value227) { come_call_finalizer(list$1CVALUEphp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0); }
    if(list$1sTypephp_operator_load_element(fun_142->mParamTypes,0)->mHeap&&obj_value_145->type->mHeap) {
        __dec_obj89=obj_value_145->c_value;
        obj_value_145->c_value=(char*)come_increment_ref_count(((char*)(right_value228=increment_ref_count_object(obj_value_145->type,obj_value_145->c_value,info))));
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0); }
        if(right_value228) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0); }
    }
    list$1CVALUEphp_push_back(come_params_150,(struct CVALUE*)come_increment_ref_count(obj_value_145));
    come_value2_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 740))));
    if(right_value229) { come_call_finalizer(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj90=come_value2_151->c_value;
    come_value2_151->c_value=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("%d",list$1CVALUEphp_length(key_params_115)))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0); }
    if(right_value230) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0); }
    come_value2_151->type=((void*)0);
    come_value2_151->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_150,(struct CVALUE*)come_increment_ref_count(come_value2_151));
    come_value3_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 748))));
    if(right_value231) { come_call_finalizer(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj91=come_value3_152->c_value;
    come_value3_152->c_value=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("%s",var__130->mCValueName))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0); }
    if(right_value232) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0); }
    come_value3_152->type=((void*)0);
    come_value3_152->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_150,(struct CVALUE*)come_increment_ref_count(come_value3_152));
    come_value4_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 756))));
    if(right_value233) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj92=come_value4_153->c_value;
    come_value4_153->c_value=(char*)come_increment_ref_count(((char*)(right_value234=xsprintf("%s",var2__133->mCValueName))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0); }
    if(right_value234) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0); }
    come_value4_153->type=((void*)0);
    come_value4_153->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_150,(struct CVALUE*)come_increment_ref_count(come_value4_153));
    buf_154=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value236=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 764))))))));
    if(right_value235) { come_call_finalizer(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value236) { come_call_finalizer(buffer_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(buf_154,generics_fun_name_141);
    buffer_append_str(buf_154,"(");
    j_155=0;
    for(
    it_156=list$1CVALUEphp_begin((come_params_150));
    !list$1CVALUEphp_end((come_params_150));
    it_156=list$1CVALUEphp_next((come_params_150))
    ){
        buffer_append_str(buf_154,it_156->c_value);
        if(j_155!=list$1CVALUEphp_length(come_params_150)-1) {
            buffer_append_str(buf_154,",");
        }
        j_155++;
    }
    buffer_append_str(buf_154,")");
    come_value5_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 781))));
    if(right_value237) { come_call_finalizer(CVALUE_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj93=come_value5_157->c_value;
    come_value5_157->c_value=(char*)come_increment_ref_count(((char*)(right_value238=buffer_to_string(buf_154))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
    if(right_value238) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0); }
    if(result_type_143->mHeap) {
        __dec_obj94=come_value5_157->c_value;
        come_value5_157->c_value=(char*)come_increment_ref_count(((char*)(right_value240=append_object_to_right_values(((char*)(right_value239=buffer_to_string(buf_154))),(struct sType*)come_increment_ref_count(result_type_143),info))));
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0); }
        if(right_value239) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0); }
        if(right_value240) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0); }
    }
    __dec_obj95=come_value5_157->type;
    come_value5_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_clone(result_type_143))));
    if(__dec_obj95) { come_call_finalizer(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value241) { come_call_finalizer(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0); }
    come_value5_157->type->mStatic=(_Bool)0;
    come_value5_157->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value242=buffer_to_string(buf_154))));
    if(right_value242) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0); }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_157));
    _Bool __result104__ = (_Bool)1;
    if(key_params_115) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_115, (void*)0, (void*)0, 0, 0, 0); }
    if(element_params_116) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_116, (void*)0, (void*)0, 0, 0, 0); }
    if(map_key_type_117) { come_call_finalizer(sType_finalize,map_key_type_117, (void*)0, (void*)0, 0, 0, 0); }
    if(map_element_type_118) { come_call_finalizer(sType_finalize,map_element_type_118, (void*)0, (void*)0, 0, 0, 0); }
    if(key_type_values_128) { come_call_finalizer(sType_finalize,key_type_values_128, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_129) { var_name_129 = come_decrement_ref_count(var_name_129, (void*)0, (void*)0, 0, 0); }
    if(element_type_values_131) { come_call_finalizer(sType_finalize,element_type_values_131, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name2_132) { var_name2_132 = come_decrement_ref_count(var_name2_132, (void*)0, (void*)0, 0, 0); }
    if(source_134) { come_call_finalizer(buffer_finalize,source_134, (void*)0, (void*)0, 0, 0, 0); }
    if(map_type_138) { come_call_finalizer(sType_finalize,map_type_138, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_type_139) { come_call_finalizer(sType_finalize,obj_type_139, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_fun_name_141) { generics_fun_name_141 = come_decrement_ref_count(generics_fun_name_141, (void*)0, (void*)0, 0, 0); }
    if(result_type_143) { come_call_finalizer(sType_finalize,result_type_143, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_value_145) { come_call_finalizer(CVALUE_finalize,obj_value_145, (void*)0, (void*)0, 0, 0, 0); }
    if(num_string_146) { come_call_finalizer(buffer_finalize,num_string_146, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_147) { come_call_finalizer(sType_finalize,type2_147, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name_148) { type_name_148 = come_decrement_ref_count(type_name_148, (void*)0, (void*)0, 0, 0); }
    if(type3_149) { come_call_finalizer(sType_finalize,type3_149, (void*)0, (void*)0, 0, 0, 0); }
    if(come_params_150) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_150, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_151) { come_call_finalizer(CVALUE_finalize,come_value2_151, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value3_152) { come_call_finalizer(CVALUE_finalize,come_value3_152, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value4_153) { come_call_finalizer(CVALUE_finalize,come_value4_153, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_154) { come_call_finalizer(buffer_finalize,buf_154, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value5_157) { come_call_finalizer(CVALUE_finalize,come_value5_157, (void*)0, (void*)0, 0, 0, 0); }
    return __result104__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
        int __result97__ = self->len;
        return __result97__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int index){
struct sNode* default_value_120;
memset(&default_value_120, 0, sizeof(struct sNode*)); /* bbb */
            memset(&default_value_120,0,sizeof(struct sNode*));
            struct sNode* __result100__ = list$1sNodephp_item(self,index,default_value_120);
            return __result100__;
}

static struct sNode* list$1sNodephp_item(struct list$1sNodeph* self, int position, struct sNode* default_value){
struct list_item$1sNodeph* it_121;
int i_122;
memset(&it_121, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_122, 0, sizeof(int));
                if(position<0) {
                    position+=self->len;
                }
                it_121=self->head;
                i_122=0;
                while(it_121!=((void*)0)) {
                    if(position==i_122) {
                        struct sNode* __result98__ = it_121->item;
                        return __result98__;
                    }
                    it_121=it_121->next;
                    i_122++;
                }
                struct sNode* __result99__ = default_value;
                return __result99__;
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
    int __result105__ = self->sline;
    return __result105__;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* right_value243;
memset(&right_value243, 0, sizeof(void*));
    char* __result106__ = ((char*)(right_value243=__builtin_string(self->sname)));
    return __result106__;
}

struct sNode* expression_node_v98(struct sInfo* info){
int sline_158;
void* right_value244;
void* right_value245;
struct buffer* value_159;
char* p_160;
int sline_161;
int sline2_162;
void* right_value246;
void* right_value247;
void* right_value248;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* right_value252;
int sline_164;
void* right_value253;
void* right_value254;
struct buffer* buf_165;
_Bool global_166;
_Bool ignore_case_167;
void* right_value255;
void* right_value256;
void* right_value257;
struct sNode* _inf_value2;
struct sRegexNode* _inf_obj_value2;
void* right_value261;
int c_169;
int n_170;
int n_171;
unsigned long int n_174;
void* right_value262;
void* right_value263;
struct sNode* _inf_value3;
struct sCharNode* _inf_obj_value3;
void* right_value266;
unsigned int c_176;
int n_177;
int n_178;
unsigned long int n_181;
unsigned char p2_182;
int size_183;
void* right_value267;
void* right_value268;
struct sNode* _inf_value4;
struct sWCharNode* _inf_obj_value4;
void* right_value271;
int sline_186;
void* right_value272;
void* right_value273;
struct buffer* value_187;
char* p_188;
int sline_189;
int len_190;
int n_191;
unsigned int lont_194;
int n_195;
int sline2_196;
int len_197;
void* right_value274;
unsigned int* wstr_198;
char* str_199;
void* right_value275;
void* right_value276;
struct sNode* _inf_value5;
struct sWStringNode* _inf_obj_value5;
void* right_value280;
char* p_201;
_Bool no_comma_202;
void* right_value281;
struct sNode* node_203;
char* p2_204;
void* right_value282;
void* right_value283;
struct buffer* first_element_source_205;
void* right_value284;
void* right_value285;
struct list$1sNodeph* list_elements_206;
void* right_value286;
void* right_value287;
struct list$1sNodeph* map_keys_207;
void* right_value288;
void* right_value289;
struct list$1sNodeph* map_elements_208;
_Bool no_comma_209;
void* right_value290;
struct sNode* node2_210;
void* right_value291;
void* right_value292;
struct sNode* _inf_value6;
struct sMapNode* _inf_obj_value6;
void* right_value297;
_Bool no_comma_212;
void* right_value298;
struct sNode* node2_213;
void* right_value299;
struct sNode* node3_214;
void* right_value300;
void* right_value301;
struct sNode* _inf_value7;
struct sMapNode* _inf_obj_value7;
void* right_value306;
_Bool no_comma_216;
void* right_value307;
struct sNode* node2_217;
void* right_value308;
void* right_value309;
struct sNode* _inf_value8;
struct sListNode* _inf_obj_value8;
void* right_value313;
void* right_value314;
memset(&sline_158, 0, sizeof(int));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&value_159, 0, sizeof(struct buffer*));
memset(&p_160, 0, sizeof(char*));
memset(&sline_161, 0, sizeof(int));
memset(&sline2_162, 0, sizeof(int));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&sline_164, 0, sizeof(int));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&buf_165, 0, sizeof(struct buffer*));
memset(&global_166, 0, sizeof(_Bool));
memset(&ignore_case_167, 0, sizeof(_Bool));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&c_169, 0, sizeof(int)); /* bbb */
memset(&n_170, 0, sizeof(int));
memset(&n_171, 0, sizeof(int));
memset(&n_174, 0, sizeof(unsigned long int));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&c_176, 0, sizeof(unsigned int)); /* bbb */
memset(&n_177, 0, sizeof(int));
memset(&n_178, 0, sizeof(int));
memset(&n_181, 0, sizeof(unsigned long int));
memset(&p2_182, 0, sizeof(unsigned char));
memset(&size_183, 0, sizeof(int)); /* bbb */
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&sline_186, 0, sizeof(int));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&value_187, 0, sizeof(struct buffer*));
memset(&p_188, 0, sizeof(char*));
memset(&sline_189, 0, sizeof(int));
memset(&len_190, 0, sizeof(int));
memset(&n_191, 0, sizeof(int));
memset(&lont_194, 0, sizeof(unsigned int)); /* bbb */
memset(&n_195, 0, sizeof(int));
memset(&sline2_196, 0, sizeof(int));
memset(&len_197, 0, sizeof(int));
memset(&right_value274, 0, sizeof(void*));
memset(&wstr_198, 0, sizeof(unsigned int*));
memset(&str_199, 0, sizeof(char*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&p_201, 0, sizeof(char*));
memset(&no_comma_202, 0, sizeof(_Bool));
memset(&right_value281, 0, sizeof(void*));
memset(&node_203, 0, sizeof(struct sNode*));
memset(&p2_204, 0, sizeof(char*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&first_element_source_205, 0, sizeof(struct buffer*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&list_elements_206, 0, sizeof(struct list$1sNodeph*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&map_keys_207, 0, sizeof(struct list$1sNodeph*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&map_elements_208, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_209, 0, sizeof(_Bool));
memset(&right_value290, 0, sizeof(void*));
memset(&node2_210, 0, sizeof(struct sNode*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&no_comma_212, 0, sizeof(_Bool));
memset(&right_value298, 0, sizeof(void*));
memset(&node2_213, 0, sizeof(struct sNode*));
memset(&right_value299, 0, sizeof(void*));
memset(&node3_214, 0, sizeof(struct sNode*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&no_comma_216, 0, sizeof(_Bool));
memset(&right_value307, 0, sizeof(void*));
memset(&node2_217, 0, sizeof(struct sNode*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
    if(*info->p==34) {
        info->p++;
        sline_158=info->sline;
        value_159=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value245=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value244=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 818))))))));
        if(right_value244) { come_call_finalizer(buffer_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value245) { come_call_finalizer(buffer_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0); }
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_160=info->p;
                sline_161=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_160;
                    info->sline=sline_161;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_159,92);
                info->p++;
                if(*info->p==34) {
                    buffer_append_char(value_159,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_159,*info->p);
                    info->p++;
                }
            }
            else if(*info->p==0) {
                sline2_162=info->sline;
                info->sline=sline_158;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_162;
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_159,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 870);
        _inf_obj_value1=come_increment_ref_count(((struct sStrNode*)(right_value248=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value246=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 870)))),(char*)come_increment_ref_count(((char*)(right_value247=buffer_to_string(value_159)))),sline_158,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=sStrNode_finalize;
        _inf_value1->clone=sStrNode_clone;
        _inf_value1->compile=sStrNode_compile;
        _inf_value1->sline=sStrNode_sline;
        _inf_value1->sname=sStrNode_sname;
        _inf_value1->terminated=sStrNode_terminated;
        struct sNode* __result109__ = ((struct sNode*)(right_value252=_inf_value1));
        if(value_159) { come_call_finalizer(buffer_finalize,value_159, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value246) { come_call_finalizer(sStrNode_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value247) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0); }
        if(right_value248) { come_call_finalizer(sStrNode_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0); }
        return __result109__;
    }
    else if(*info->p==47) {
        sline_164=info->sline;
        buf_165=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value254=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value253=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 875))))))));
        if(right_value253) { come_call_finalizer(buffer_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value254) { come_call_finalizer(buffer_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0); }
        while((_Bool)1) {
            if(*info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_165,*info->p);
                info->p++;
            }
            else if(*info->p==47) {
                info->p++;
                break;
            }
            else if(*info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(1);
            }
            else {
                buffer_append_char(buf_165,*info->p);
                info->p++;
            }
        }
        global_166=(_Bool)0;
        ignore_case_167=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(*info->p==103) {
                info->p++;
                global_166=(_Bool)1;
            }
            else if(*info->p==105) {
                info->p++;
                ignore_case_167=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 914);
        _inf_obj_value2=come_increment_ref_count(((struct sRegexNode*)(right_value257=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value255=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 914)))),(char*)come_increment_ref_count(((char*)(right_value256=buffer_to_string(buf_165)))),global_166,ignore_case_167,sline_164,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=sRegexNode_finalize;
        _inf_value2->clone=sRegexNode_clone;
        _inf_value2->compile=sRegexNode_compile;
        _inf_value2->sline=sRegexNode_sline;
        _inf_value2->sname=sRegexNode_sname;
        _inf_value2->terminated=sRegexNode_terminated;
        struct sNode* __result112__ = ((struct sNode*)(right_value261=_inf_value2));
        if(buf_165) { come_call_finalizer(buffer_finalize,buf_165, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value255) { come_call_finalizer(sRegexNode_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value256) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0); }
        if(right_value257) { come_call_finalizer(sRegexNode_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0); }
        return __result112__;
    }
    else if(*info->p==39) {
        info->p++;
        if(*info->p==92) {
            info->p++;
            if(xisdigit(*info->p)) {
                n_170=0;
                while(xisdigit(*info->p)) {
                    n_170=n_170*8+*info->p-48;
                    info->p++;
                }
                c_169=n_170;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_169=10;
                    info->p++;
                    break;
                    case 116:
                    c_169=9;
                    info->p++;
                    break;
                    case 114:
                    c_169=13;
                    info->p++;
                    break;
                    case 97:
                    c_169=7;
                    info->p++;
                    break;
                    case 102:
                    c_169=12;
                    info->p++;
                    break;
                    case 118:
                    c_169=11;
                    info->p++;
                    break;
                    case 98:
                    c_169=8;
                    info->p++;
                    break;
                    case 92:
                    c_169=92;
                    info->p++;
                    break;
                    case 48:
                    c_169=0;
                    info->p++;
                    if(xisdigit(*info->p)) {
                        n_171=0;
                        while(xisdigit(*info->p)) {
                            n_171=n_171*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_169=n_171;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_172[128];
                        memset(&buf_172, 0, sizeof(buf_172)); /* aaa */
                        strncpy(buf_172,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_173[2];
                            memset(&buf2_173, 0, sizeof(buf2_173)); /* aaa */
                            buf2_173[0]=*info->p;
                            buf2_173[1]=0;
                            info->p++;
                            strncat(buf_172,buf2_173,128);
                        }
                        n_174=strtoll(buf_172,((void*)0),0);
                        c_169=n_174;
                    }
                    break;
                    default:
                    c_169=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_169=*info->p;
            info->p++;
        }
        if(*info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1031);
            _inf_obj_value3=come_increment_ref_count(((struct sCharNode*)(right_value263=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value262=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1031)))),c_169,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=sCharNode_finalize;
            _inf_value3->clone=sCharNode_clone;
            _inf_value3->compile=sCharNode_compile;
            _inf_value3->sline=sCharNode_sline;
            _inf_value3->sname=sCharNode_sname;
            _inf_value3->terminated=sCharNode_terminated;
            struct sNode* __result115__ = ((struct sNode*)(right_value266=_inf_value3));
            if(right_value262) { come_call_finalizer(sCharNode_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value263) { come_call_finalizer(sCharNode_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0); }
            return __result115__;
        }
    }
    else if(*info->p==76&&*(info->p+1)==39) {
        info->p+=2;
        if(*info->p==92) {
            info->p++;
            if(xisdigit(*info->p)) {
                n_177=0;
                while(xisdigit(*info->p)) {
                    n_177=n_177*8+*info->p-48;
                    info->p++;
                }
                c_176=n_177;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_176=10;
                    info->p++;
                    break;
                    case 116:
                    c_176=9;
                    info->p++;
                    break;
                    case 114:
                    c_176=13;
                    info->p++;
                    break;
                    case 97:
                    c_176=7;
                    info->p++;
                    break;
                    case 92:
                    c_176=92;
                    info->p++;
                    break;
                    case 48:
                    c_176=0;
                    info->p++;
                    if(xisdigit(*info->p)) {
                        n_178=0;
                        while(xisdigit(*info->p)) {
                            n_178=n_178*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_176=n_178;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_179[128];
                        memset(&buf_179, 0, sizeof(buf_179)); /* aaa */
                        strncpy(buf_179,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_180[2];
                            memset(&buf2_180, 0, sizeof(buf2_180)); /* aaa */
                            buf2_180[0]=*info->p;
                            buf2_180[1]=0;
                            info->p++;
                            strncat(buf_179,buf2_180,128);
                        }
                        n_181=strtoll(buf_179,((void*)0),0);
                        c_176=n_181;
                    }
                    break;
                    default:
                    c_176=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            p2_182=*(unsigned char*)info->p;
            if(p2_182>127) {
                char str_184[16+1];
                memset(&str_184, 0, sizeof(str_184)); /* aaa */
                size_183=((p2_182&128)>>7)+((p2_182&64)>>6)+((p2_182&32)>>5)+((p2_182&16)>>4);
                if(size_183>16) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_184,info->p,size_183);
                    str_184[size_183]=0;
                    if(mbtowc(&c_176,str_184,size_183)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                        c_176=0;
                    }
                    info->p+=size_183;
                }
            }
            else {
                c_176=*info->p;
                info->p++;
            }
        }
        if(*info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1167);
            _inf_obj_value4=come_increment_ref_count(((struct sWCharNode*)(right_value268=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value267=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1167)))),c_176,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=sWCharNode_finalize;
            _inf_value4->clone=sWCharNode_clone;
            _inf_value4->compile=sWCharNode_compile;
            _inf_value4->sline=sWCharNode_sline;
            _inf_value4->sname=sWCharNode_sname;
            _inf_value4->terminated=sWCharNode_terminated;
            struct sNode* __result118__ = ((struct sNode*)(right_value271=_inf_value4));
            if(right_value267) { come_call_finalizer(sWCharNode_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value268) { come_call_finalizer(sWCharNode_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0); }
            return __result118__;
        }
    }
    else if(*info->p==76&&*(info->p+1)==34) {
        info->p+=2;
        sline_186=info->sline;
        value_187=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value273=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value272=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1176))))))));
        if(right_value272) { come_call_finalizer(buffer_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value273) { come_call_finalizer(buffer_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0); }
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_188=info->p;
                sline_189=info->sline;
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_188;
                    info->sline=sline_189;
                    break;
                }
            }
            else if(*info->p==92) {
                info->p++;
                if(xisdigit(*info->p)) {
                    len_190=0;
                    n_191=0;
                    while(xisdigit(*info->p)&&len_190<3) {
                        n_191=n_191*8+*info->p-48;
                        info->p++;
                        len_190++;
                    }
                    buffer_append_char(value_187,n_191);
                }
                else if(*info->p==120||*info->p==88) {
                    info->p++;
                    char buf_192[128];
                    memset(&buf_192, 0, sizeof(buf_192)); /* aaa */
                    strncpy(buf_192,"0x",128);
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        char buf2_193[2];
                        memset(&buf2_193, 0, sizeof(buf2_193)); /* aaa */
                        buf2_193[0]=*info->p;
                        buf2_193[1]=0;
                        info->p++;
                        strncat(buf_192,buf2_193,128);
                    }
                    n_195=strtoll(buf_192,((void*)0),0);
                    buffer_append_char(value_187,(char)n_195);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_187,0);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_187,10);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_187,9);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_187,13);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_187,11);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_187,12);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_187,7);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_187,8);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_187,92);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_187,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                sline2_196=info->sline;
                info->sline=sline_186;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_187,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_197=value_187->len;
        wstr_198=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value274=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_197+1)), "06str.c", 1299))));
        if(right_value274) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0); }
        str_199=value_187->buf;
        if(mbstowcs(wstr_198,str_199,len_197+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_198[len_197]=0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1310);
        _inf_obj_value5=come_increment_ref_count(((struct sWStringNode*)(right_value276=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value275=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1310)))),(unsigned int*)come_increment_ref_count(wstr_198),sline_186,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=sWStringNode_finalize;
        _inf_value5->clone=sWStringNode_clone;
        _inf_value5->compile=sWStringNode_compile;
        _inf_value5->sline=sWStringNode_sline;
        _inf_value5->sname=sWStringNode_sname;
        _inf_value5->terminated=sWStringNode_terminated;
        struct sNode* __result121__ = ((struct sNode*)(right_value280=_inf_value5));
        if(value_187) { come_call_finalizer(buffer_finalize,value_187, (void*)0, (void*)0, 0, 0, 0); }
        if(wstr_198) { wstr_198 = come_decrement_ref_count(wstr_198, (void*)0, (void*)0, 0, 0); }
        if(right_value275) { come_call_finalizer(sWStringNode_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value276) { come_call_finalizer(sWStringNode_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0); }
        return __result121__;
    }
    else if(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        p_201=info->p;
        no_comma_202=info->no_comma;
        info->no_comma=(_Bool)1;
        node_203=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=expression_v13(info))));
        if(right_value281) { right_value281 = come_decrement_ref_count(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0); } 
        info->no_comma=no_comma_202;
        p2_204=info->p;
        first_element_source_205=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value283=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value282=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1327))))))));
        if(right_value282) { come_call_finalizer(buffer_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value283) { come_call_finalizer(buffer_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append(first_element_source_205,p_201,p2_204-p_201);
        buffer_append_char(first_element_source_205,0);
        list_elements_206=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value285=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value284=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1332))))))));
        if(right_value285) { come_call_finalizer(list$1sNodephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0); }
        map_keys_207=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value287=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value286=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1334))))))));
        if(right_value287) { come_call_finalizer(list$1sNodephp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0); }
        map_elements_208=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value289=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value288=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1335))))))));
        if(right_value289) { come_call_finalizer(list$1sNodephp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0); }
        if(*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(map_keys_207,(struct sNode*)come_increment_ref_count(node_203));
            no_comma_209=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_210=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=expression_v13(info))));
            if(right_value290) { right_value290 = come_decrement_ref_count(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0); } 
            info->no_comma=no_comma_209;
            list$1sNodephp_push_back(map_elements_208,(struct sNode*)come_increment_ref_count(node2_210));
            if(*info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1357);
                _inf_obj_value6=come_increment_ref_count(((struct sMapNode*)(right_value292=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value291=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1357)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_207),(struct list$1sNodeph*)come_increment_ref_count(map_elements_208),info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=sMapNode_finalize;
                _inf_value6->clone=sMapNode_clone;
                _inf_value6->compile=sMapNode_compile;
                _inf_value6->sline=sMapNode_sline;
                _inf_value6->sname=sMapNode_sname;
                _inf_value6->terminated=sMapNode_terminated;
                struct sNode* __result124__ = ((struct sNode*)(right_value297=_inf_value6));
                if(node2_210) { node2_210 = come_decrement_ref_count(node2_210, ((struct sNode*)node2_210)->finalize, ((struct sNode*)node2_210)->_protocol_obj, 0, 0); } 
                if(node_203) { node_203 = come_decrement_ref_count(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0); } 
                if(first_element_source_205) { come_call_finalizer(buffer_finalize,first_element_source_205, (void*)0, (void*)0, 0, 0, 0); }
                if(list_elements_206) { come_call_finalizer(list$1sNodephp_finalize,list_elements_206, (void*)0, (void*)0, 0, 0, 0); }
                if(map_keys_207) { come_call_finalizer(list$1sNodephp_finalize,map_keys_207, (void*)0, (void*)0, 0, 0, 0); }
                if(map_elements_208) { come_call_finalizer(list$1sNodephp_finalize,map_elements_208, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value291) { come_call_finalizer(sMapNode_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value292) { come_call_finalizer(sMapNode_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0); }
                return __result124__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_212=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_213=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=expression_v13(info))));
                    if(right_value298) { right_value298 = come_decrement_ref_count(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0); } 
                    info->no_comma=no_comma_212;
                    list$1sNodephp_push_back(map_keys_207,(struct sNode*)come_increment_ref_count(node2_213));
                    expected_next_character(58,info);
                    no_comma_212=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=expression_v13(info))));
                    if(right_value299) { right_value299 = come_decrement_ref_count(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0); } 
                    info->no_comma=no_comma_212;
                    list$1sNodephp_push_back(map_elements_208,(struct sNode*)come_increment_ref_count(node3_214));
                    if(*info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(%c)(3)",*info->p);
                        exit(2);
                    }
                    if(node2_213) { node2_213 = come_decrement_ref_count(node2_213, ((struct sNode*)node2_213)->finalize, ((struct sNode*)node2_213)->_protocol_obj, 0, 0); } 
                    if(node3_214) { node3_214 = come_decrement_ref_count(node3_214, ((struct sNode*)node3_214)->finalize, ((struct sNode*)node3_214)->_protocol_obj, 0, 0); } 
                }
                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1402);
                _inf_obj_value7=come_increment_ref_count(((struct sMapNode*)(right_value301=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value300=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1402)))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_207),(struct list$1sNodeph*)come_increment_ref_count(map_elements_208),info))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=sMapNode_finalize;
                _inf_value7->clone=sMapNode_clone;
                _inf_value7->compile=sMapNode_compile;
                _inf_value7->sline=sMapNode_sline;
                _inf_value7->sname=sMapNode_sname;
                _inf_value7->terminated=sMapNode_terminated;
                struct sNode* __result127__ = ((struct sNode*)(right_value306=_inf_value7));
                if(node2_210) { node2_210 = come_decrement_ref_count(node2_210, ((struct sNode*)node2_210)->finalize, ((struct sNode*)node2_210)->_protocol_obj, 0, 0); } 
                if(node_203) { node_203 = come_decrement_ref_count(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0); } 
                if(first_element_source_205) { come_call_finalizer(buffer_finalize,first_element_source_205, (void*)0, (void*)0, 0, 0, 0); }
                if(list_elements_206) { come_call_finalizer(list$1sNodephp_finalize,list_elements_206, (void*)0, (void*)0, 0, 0, 0); }
                if(map_keys_207) { come_call_finalizer(list$1sNodephp_finalize,map_keys_207, (void*)0, (void*)0, 0, 0, 0); }
                if(map_elements_208) { come_call_finalizer(list$1sNodephp_finalize,map_elements_208, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value300) { come_call_finalizer(sMapNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value301) { come_call_finalizer(sMapNode_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0); }
                return __result127__;
            }
        }
        else if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_206,(struct sNode*)come_increment_ref_count(node_203));
        }
        else if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_206,(struct sNode*)come_increment_ref_count(node_203));
            while((_Bool)1) {
                no_comma_216=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_217=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=expression_v13(info))));
                if(right_value307) { right_value307 = come_decrement_ref_count(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0); } 
                info->no_comma=no_comma_216;
                list$1sNodephp_push_back(list_elements_206,(struct sNode*)come_increment_ref_count(node2_217));
                if(*info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    err_msg(info,"invalid character(%c)(4)",*info->p);
                    exit(2);
                }
                if(node2_217) { node2_217 = come_decrement_ref_count(node2_217, ((struct sNode*)node2_217)->finalize, ((struct sNode*)node2_217)->_protocol_obj, 0, 0); } 
            }
        }
        else {
            err_msg(info,"invalid character(%c)(5)",*info->p);
            exit(2);
        }
        if(list$1sNodephp_length(list_elements_206)>0) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1453);
            _inf_obj_value8=come_increment_ref_count(((struct sListNode*)(right_value309=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value308=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 1453)))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_206),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=sListNode_finalize;
            _inf_value8->clone=sListNode_clone;
            _inf_value8->compile=sListNode_compile;
            _inf_value8->sline=sListNode_sline;
            _inf_value8->sname=sListNode_sname;
            _inf_value8->terminated=sListNode_terminated;
            struct sNode* __result130__ = ((struct sNode*)(right_value313=_inf_value8));
            if(node_203) { node_203 = come_decrement_ref_count(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0); } 
            if(first_element_source_205) { come_call_finalizer(buffer_finalize,first_element_source_205, (void*)0, (void*)0, 0, 0, 0); }
            if(list_elements_206) { come_call_finalizer(list$1sNodephp_finalize,list_elements_206, (void*)0, (void*)0, 0, 0, 0); }
            if(map_keys_207) { come_call_finalizer(list$1sNodephp_finalize,map_keys_207, (void*)0, (void*)0, 0, 0, 0); }
            if(map_elements_208) { come_call_finalizer(list$1sNodephp_finalize,map_elements_208, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value308) { come_call_finalizer(sListNode_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value309) { come_call_finalizer(sListNode_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0); }
            return __result130__;
        }
        else {
        }
    }
    else {
        ((struct sNode*)(right_value314=expression_node_v1(info)));
        if(right_value314) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0); } 
    }
    struct sNode* __result131__ = (struct sNode*)((void*)0);
    return __result131__;
}

static void sStrNode_finalize(struct sStrNode* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* right_value249;
struct sStrNode* result_163;
void* right_value250;
char* __dec_obj96;
void* right_value251;
char* __dec_obj97;
memset(&right_value249, 0, sizeof(void*));
memset(&result_163, 0, sizeof(struct sStrNode*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sStrNode* __result107__ = (void*)0;
                return __result107__;
            }
            result_163=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value249=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 872))));
            if(right_value249) { come_call_finalizer(sStrNode_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj96=result_163->value;
                result_163->value=(char*)come_increment_ref_count(((char*)(right_value250=string_clone(self->value))));
                if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0); }
                if(right_value250) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_163->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj97=result_163->sname;
                result_163->sname=(char*)come_increment_ref_count(((char*)(right_value251=string_clone(self->sname))));
                if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0); }
                if(right_value251) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0); }
            }
            struct sStrNode* __result108__ = result_163;
            if(result_163) { come_call_finalizer(sStrNode_finalize,result_163, (void*)0, (void*)0, 0, 0, 1); }
            return __result108__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
            if(self!=((void*)0)&&self->str!=((void*)0)) {
                if(self->str) { self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* right_value258;
struct sRegexNode* result_168;
void* right_value259;
char* __dec_obj98;
void* right_value260;
char* __dec_obj99;
memset(&right_value258, 0, sizeof(void*));
memset(&result_168, 0, sizeof(struct sRegexNode*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sRegexNode* __result110__ = (void*)0;
                return __result110__;
            }
            result_168=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value258=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 916))));
            if(right_value258) { come_call_finalizer(sRegexNode_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->str!=((void*)0)) {
                __dec_obj98=result_168->str;
                result_168->str=(char*)come_increment_ref_count(((char*)(right_value259=string_clone(self->str))));
                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0); }
                if(right_value259) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_168->global=self->global;
            }
            if(self!=((void*)0)) {
                result_168->ignore_case=self->ignore_case;
            }
            if(self!=((void*)0)) {
                result_168->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj99=result_168->sname;
                result_168->sname=(char*)come_increment_ref_count(((char*)(right_value260=string_clone(self->sname))));
                if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0); }
                if(right_value260) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0); }
            }
            struct sRegexNode* __result111__ = result_168;
            if(result_168) { come_call_finalizer(sRegexNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 1); }
            return __result111__;
}

static void sCharNode_finalize(struct sCharNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* right_value264;
struct sCharNode* result_175;
void* right_value265;
char* __dec_obj100;
memset(&right_value264, 0, sizeof(void*));
memset(&result_175, 0, sizeof(struct sCharNode*));
memset(&right_value265, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sCharNode* __result113__ = (void*)0;
                    return __result113__;
                }
                result_175=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value264=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1033))));
                if(right_value264) { come_call_finalizer(sCharNode_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_175->value=self->value;
                }
                if(self!=((void*)0)) {
                    result_175->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj100=result_175->sname;
                    result_175->sname=(char*)come_increment_ref_count(((char*)(right_value265=string_clone(self->sname))));
                    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0); }
                    if(right_value265) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0); }
                }
                struct sCharNode* __result114__ = result_175;
                if(result_175) { come_call_finalizer(sCharNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 1); }
                return __result114__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* right_value269;
struct sWCharNode* result_185;
void* right_value270;
char* __dec_obj101;
memset(&right_value269, 0, sizeof(void*));
memset(&result_185, 0, sizeof(struct sWCharNode*));
memset(&right_value270, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sWCharNode* __result116__ = (void*)0;
                    return __result116__;
                }
                result_185=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value269=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1169))));
                if(right_value269) { come_call_finalizer(sWCharNode_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_185->value=self->value;
                }
                if(self!=((void*)0)) {
                    result_185->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj101=result_185->sname;
                    result_185->sname=(char*)come_increment_ref_count(((char*)(right_value270=string_clone(self->sname))));
                    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0); }
                    if(right_value270) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0); }
                }
                struct sWCharNode* __result117__ = result_185;
                if(result_185) { come_call_finalizer(sWCharNode_finalize,result_185, (void*)0, (void*)0, 0, 0, 1); }
                return __result117__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* right_value277;
struct sWStringNode* result_200;
void* right_value278;
unsigned int* __dec_obj102;
void* right_value279;
char* __dec_obj103;
memset(&right_value277, 0, sizeof(void*));
memset(&result_200, 0, sizeof(struct sWStringNode*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sWStringNode* __result119__ = (void*)0;
                return __result119__;
            }
            result_200=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value277=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1312))));
            if(right_value277) { come_call_finalizer(sWStringNode_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj102=result_200->value;
                result_200->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value278=(unsigned int*)come_memdup(self->value, "06str.c", 1313))));
                if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0); }
                if(right_value278) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_200->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj103=result_200->sname;
                result_200->sname=(char*)come_increment_ref_count(((char*)(right_value279=string_clone(self->sname))));
                if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0); }
                if(right_value279) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0); }
            }
            struct sWStringNode* __result120__ = result_200;
            if(result_200) { come_call_finalizer(sWStringNode_finalize,result_200, (void*)0, (void*)0, 0, 0, 1); }
            return __result120__;
}

static void sMapNode_finalize(struct sMapNode* self){
                    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
                        if(self->map_key_elements) { come_call_finalizer(list$1sNodephp_finalize,self->map_key_elements, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
                        if(self->map_elements) { come_call_finalizer(list$1sNodephp_finalize,self->map_elements, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                    }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* right_value302;
struct sMapNode* result_215;
void* right_value303;
struct list$1sNodeph* __dec_obj107;
void* right_value304;
struct list$1sNodeph* __dec_obj108;
void* right_value305;
char* __dec_obj109;
memset(&right_value302, 0, sizeof(void*));
memset(&result_215, 0, sizeof(struct sMapNode*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sMapNode* __result125__ = (void*)0;
                        return __result125__;
                    }
                    result_215=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value302=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1404))));
                    if(right_value302) { come_call_finalizer(sMapNode_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
                        __dec_obj107=result_215->map_key_elements;
                        result_215->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value303=list$1sNodephp_clone(self->map_key_elements))));
                        if(__dec_obj107) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value303) { come_call_finalizer(list$1sNodephp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
                        __dec_obj108=result_215->map_elements;
                        result_215->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value304=list$1sNodephp_clone(self->map_elements))));
                        if(__dec_obj108) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value304) { come_call_finalizer(list$1sNodephp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    if(self!=((void*)0)) {
                        result_215->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj109=result_215->sname;
                        result_215->sname=(char*)come_increment_ref_count(((char*)(right_value305=string_clone(self->sname))));
                        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0); }
                        if(right_value305) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sMapNode* __result126__ = result_215;
                    if(result_215) { come_call_finalizer(sMapNode_finalize,result_215, (void*)0, (void*)0, 0, 0, 1); }
                    return __result126__;
}

static void sListNode_finalize(struct sListNode* self){
                if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
                    if(self->list_elements) { come_call_finalizer(list$1sNodephp_finalize,self->list_elements, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* right_value310;
struct sListNode* result_218;
void* right_value311;
struct list$1sNodeph* __dec_obj110;
void* right_value312;
char* __dec_obj111;
memset(&right_value310, 0, sizeof(void*));
memset(&result_218, 0, sizeof(struct sListNode*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sListNode* __result128__ = (void*)0;
                    return __result128__;
                }
                result_218=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value310=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 1455))));
                if(right_value310) { come_call_finalizer(sListNode_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
                    __dec_obj110=result_218->list_elements;
                    result_218->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value311=list$1sNodephp_clone(self->list_elements))));
                    if(__dec_obj110) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value311) { come_call_finalizer(list$1sNodephp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_218->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj111=result_218->sname;
                    result_218->sname=(char*)come_increment_ref_count(((char*)(right_value312=string_clone(self->sname))));
                    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0); }
                    if(right_value312) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0); }
                }
                struct sListNode* __result129__ = result_218;
                if(result_218) { come_call_finalizer(sListNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 1); }
                return __result129__;
}

struct sNode* parse_tuple(struct sInfo* info){
void* right_value315;
void* right_value316;
struct list$1sNodeph* tuple_elements_219;
char* p_220;
_Bool no_comma_221;
void* right_value317;
struct sNode* node_222;
void* right_value318;
void* right_value319;
struct sNode* _inf_value9;
struct sTupleNode* _inf_obj_value9;
void* right_value323;
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&tuple_elements_219, 0, sizeof(struct list$1sNodeph*));
memset(&p_220, 0, sizeof(char*));
memset(&no_comma_221, 0, sizeof(_Bool));
memset(&right_value317, 0, sizeof(void*));
memset(&node_222, 0, sizeof(struct sNode*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
    tuple_elements_219=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value316=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value315=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1467))))))));
    if(right_value316) { come_call_finalizer(list$1sNodephp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0); }
    while((_Bool)1) {
        p_220=info->p;
        no_comma_221=info->no_comma;
        info->no_comma=(_Bool)1;
        node_222=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=expression_v13(info))));
        if(right_value317) { right_value317 = come_decrement_ref_count(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0); } 
        info->no_comma=no_comma_221;
        list$1sNodephp_push_back(tuple_elements_219,(struct sNode*)come_increment_ref_count(node_222));
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        else {
            err_msg(info,"invalid character(%c) in tuple expression",*info->p);
            exit(2);
        }
        if(node_222) { node_222 = come_decrement_ref_count(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0, 0); } 
    }
    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1495);
    _inf_obj_value9=come_increment_ref_count(((struct sTupleNode*)(right_value319=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value318=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 1495)))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_219),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=sTupleNode_finalize;
    _inf_value9->clone=sTupleNode_clone;
    _inf_value9->compile=sTupleNode_compile;
    _inf_value9->sline=sTupleNode_sline;
    _inf_value9->sname=sTupleNode_sname;
    _inf_value9->terminated=sTupleNode_terminated;
    struct sNode* __result134__ = ((struct sNode*)(right_value323=_inf_value9));
    if(tuple_elements_219) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_219, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value318) { come_call_finalizer(sTupleNode_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value319) { come_call_finalizer(sTupleNode_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0); }
    return __result134__;
}

static void sTupleNode_finalize(struct sTupleNode* self){
        if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
            if(self->tuple_elements) { come_call_finalizer(list$1sNodephp_finalize,self->tuple_elements, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* right_value320;
struct sTupleNode* result_223;
void* right_value321;
struct list$1sNodeph* __dec_obj112;
void* right_value322;
char* __dec_obj113;
memset(&right_value320, 0, sizeof(void*));
memset(&result_223, 0, sizeof(struct sTupleNode*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sTupleNode* __result132__ = (void*)0;
            return __result132__;
        }
        result_223=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value320=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 1497))));
        if(right_value320) { come_call_finalizer(sTupleNode_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
            __dec_obj112=result_223->tuple_elements;
            result_223->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value321=list$1sNodephp_clone(self->tuple_elements))));
            if(__dec_obj112) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value321) { come_call_finalizer(list$1sNodephp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_223->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj113=result_223->sname;
            result_223->sname=(char*)come_increment_ref_count(((char*)(right_value322=string_clone(self->sname))));
            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0); }
            if(right_value322) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0); }
        }
        struct sTupleNode* __result133__ = result_223;
        if(result_223) { come_call_finalizer(sTupleNode_finalize,result_223, (void*)0, (void*)0, 0, 0, 1); }
        return __result133__;
}

