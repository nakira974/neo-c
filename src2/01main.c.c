/* source head */
struct __builtin_va_list
{
    char* v1;
    char* v2;
    char* v3;
    int v4;
    int v5;
};
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
struct _IO_FILE;typedef struct _IO_FILE __FILE;
struct _IO_FILE;typedef struct _IO_FILE FILE;
struct _IO_FILE;struct _IO_marker;struct _IO_codecvt;struct _IO_wide_data;typedef void _IO_lock_t;
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
struct obstack;struct __locale_struct
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
struct list_item$p$char$ph
{
    char* item;
    struct list_item$p$char$ph* prev;
    struct list_item$p$char$ph* next;
};
struct list$$char$ph
{
    struct list_item$p$char$ph* head;
    struct list_item$p$char$ph* tail;
    int len;
    struct list_item$p$char$ph* it;
};
struct list$ph$char$ph
{
    struct list_item$p$char$ph* head;
    struct list_item$p$char$ph* tail;
    int len;
    struct list_item$p$char$ph* it;
};
struct list$p$char$ph
{
    struct list_item$p$char$ph* head;
    struct list_item$p$char$ph* tail;
    int len;
    struct list_item$p$char$ph* it;
};
struct list_item$$char$ph
{
    char* item;
    struct list_item$p$char$ph* prev;
    struct list_item$p$char$ph* next;
};
struct list_item$$char$ph$$char$ph
{
    char* item;
    struct list_item$p$char$ph* prev;
    struct list_item$p$char$ph* next;
};
extern _Bool gComelang;
extern _Bool gGC;
struct sType;struct tuple2$$char$phsType$ph
{
    char* v1;
    struct sType* v2;
};
struct list_item$p$tuple2$$char$phsType$ph
{
    struct tuple2$$char$phsType$ph* item;
    struct list_item$p$tuple2$$char$phsType$ph* prev;
    struct list_item$p$tuple2$$char$phsType$ph* next;
};
struct list$$tuple2$$char$phsType$ph
{
    struct list_item$p$tuple2$$char$phsType$ph* head;
    struct list_item$p$tuple2$$char$phsType$ph* tail;
    int len;
    struct list_item$p$tuple2$$char$phsType$ph* it;
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
    struct list$$tuple2$$char$phsType$ph* mFields;
    _Bool mOutputed;
};
struct sInfo;struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
};
struct list_item$p$sType$ph
{
    struct sType* item;
    struct list_item$p$sType$ph* prev;
    struct list_item$p$sType$ph* next;
};
struct list$$sType$ph
{
    struct list_item$p$sType$ph* head;
    struct list_item$p$sType$ph* tail;
    int len;
    struct list_item$p$sType$ph* it;
};
struct list_item$p$sNode$ph
{
    struct sNode* item;
    struct list_item$p$sNode$ph* prev;
    struct list_item$p$sNode$ph* next;
};
struct list$$sNode$ph
{
    struct list_item$p$sNode$ph* head;
    struct list_item$p$sNode$ph* tail;
    int len;
    struct list_item$p$sNode$ph* it;
};
struct tuple1$$sType$ph
{
    struct sType* v1;
};
struct sType
{
    struct sClass* mClass;
    char* mGenericsName;
    struct list$$sType$ph* mGenericsTypes;
    struct list$$sNode$ph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$$sType$ph* mParamTypes;
    struct list$$char$ph* mParamNames;
    struct tuple1$$sType$ph* mResultType;
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
struct sVar;struct CVALUE
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
struct sVarTable;struct sBlock;struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$$sType$ph* mParamTypes;
    struct list$$char$ph* mParamNames;
    struct list$$char$ph* mParamDefaultParametors;
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
    struct list$$char$ph* mGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$$sType$ph* mParamTypes;
    struct list$$char$ph* mParamNames;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
};
struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
};
struct sVarTable;struct list_item$p$char$p
{
    char* item;
    struct list_item$p$char$p* prev;
    struct list_item$p$char$p* next;
};
struct list$ph$char$p
{
    struct list_item$p$char$p* head;
    struct list_item$p$char$p* tail;
    int len;
    struct list_item$p$char$p* it;
};
struct map$$char$phsVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$ph$char$p* key_list;
    int it;
};
struct sVarTable
{
    struct map$$char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct sBlock
{
    struct list$$sNode$ph* mNodes;
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
struct map$$char$phsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$ph$char$p* key_list;
    int it;
};
struct map$$char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$ph$char$p* key_list;
    int it;
};
struct map$$char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$ph$char$p* key_list;
    int it;
};
struct map$$char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$ph$char$p* key_list;
    int it;
};
struct list_item$p$sRightValueObject$ph
{
    struct sRightValueObject* item;
    struct list_item$p$sRightValueObject$ph* prev;
    struct list_item$p$sRightValueObject$ph* next;
};
struct list$$sRightValueObject$ph
{
    struct list_item$p$sRightValueObject$ph* head;
    struct list_item$p$sRightValueObject$ph* tail;
    int len;
    struct list_item$p$sRightValueObject$ph* it;
};
struct list_item$p$CVALUE$ph
{
    struct CVALUE* item;
    struct list_item$p$CVALUE$ph* prev;
    struct list_item$p$CVALUE$ph* next;
};
struct list$$CVALUE$ph
{
    struct list_item$p$CVALUE$ph* head;
    struct list_item$p$CVALUE$ph* tail;
    int len;
    struct list_item$p$CVALUE$ph* it;
};
struct sInfo
{
    char* p;
    char* head;
    struct buffer* source;
    char* sname;
    int sline;
    int err_num;
    char* clang_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    struct sFun* come_fun;
    int block_level;
    struct map$$char$phsFun$ph* funcs;
    struct map$$char$phsGenericsFun$ph* generics_funcs;
    struct map$$char$phsClass$ph* classes;
    struct map$$char$phsType$ph* types;
    struct map$$char$phsClass$ph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$$sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$$sType$ph* method_generics_types;
    struct list$$CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool last_statment_is_return;
    struct list$$char$ph* generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$$sType$ph* param_types;
    struct list$$char$ph* param_names;
    _Bool define_struct;
    _Bool in_typedef;
};
struct tuple2$ph$int$bool$
{
    int v1;
    _Bool v2;
};
struct tuple2$ph$sType$phbool$
{
    struct sType* v1;
    _Bool v2;
};
struct tuple2$ph$sNode$phbool$
{
    struct sNode* v1;
    _Bool v2;
};
struct tuple5$ph$list$$sType$phlist$$char$phlist$$char$phbool$bool$
{
    struct list$$sType$ph* v1;
    struct list$$char$ph* v2;
    struct list$$char$ph* v3;
    _Bool v4;
    _Bool v5;
};
struct tuple3$ph$sFun$pchar$phbool$
{
    struct sFun* v1;
    char* v2;
    _Bool v3;
};
struct tuple2$ph$char$phbool$
{
    char* v1;
    _Bool v2;
};
struct tuple2$$sType$phchar$ph
{
    struct sType* v1;
    char* v2;
};
struct tuple2$ph$tuple2$$sType$phchar$phbool$
{
    struct tuple2$$sType$phchar$ph* v1;
    _Bool v2;
};
struct tuple2$ph$sBlock$phbool$
{
    struct sBlock* v1;
    _Bool v2;
};

/* header function */
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(struct _IO_FILE* __stream);
struct _IO_FILE* tmpfile();
struct _IO_FILE* tmpfile64();
char* tmpnam(char anonymous_var_name3[20]);
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
int __uflow(struct _IO_FILE* anonymous_var_name4);
int __overflow(struct _IO_FILE* anonymous_var_name5, int anonymous_var_name6);
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
static void ncfree(void* mem);
static void* come_calloc(int count, int size);
static void* come_increment_ref_count(void* mem);
static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free);
static void come_free_object(void* mem);
static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free);
static void* nccalloc(int nmemb, int size);
static void* come_memdup(void* block);
static void va_list_finalize(va_list* self);
static struct list$ph$char$ph* list$$char$phphcharph_initialize(struct list$ph$char$ph* self);
static void list$ph$char$phphcharph_finalize(struct list$p$char$ph* self);
static void list$$char$phphcharph_finalize(struct list$p$char$ph* self);
static void list$$char$phphcharph_push_back(struct list$p$char$ph* self, char* item);
static void FILE_finalize(struct _IO_FILE* self);
int come_main_v1(int argc, char** argv);
int come_main_v2(int argc, char** argv);
void come_init_v2();
void come_final_v2();
void err_msg(struct sInfo* info, char* msg, ...);
struct tuple2$ph$int$bool$* transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, struct sInfo* info, _Bool heap);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$$sType$ph* param_types, struct list$$char$ph* param_names, struct list$$char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, struct sInfo* info);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, struct sInfo* info, _Bool no_pointer);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
void come_init_v3();
void come_final_v3();
char* header_function(struct sFun* fun, struct sInfo* info);
struct tuple2$ph$int$bool$* transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_without_semicolon(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, struct sInfo* info, _Bool in_header);
char* make_come_define_var(struct sType* type, char* name, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
struct tuple2$ph$sType$phbool$* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, char* ret_value, _Bool top_block);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info);
char* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info);
void free_objects(struct sVarTable* table, char* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
_Bool is_right_values(int right_value_num, struct sInfo* info);
int get_right_value_id_from_obj(char* obj);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* post_position_operator3_v5(struct sNode* node, struct sInfo* info);
struct tuple5$ph$list$$sType$phlist$$char$phlist$$char$phbool$bool$* parse_params(struct sInfo* info);
struct tuple3$ph$sFun$pchar$phbool$* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple3$ph$sFun$pchar$phbool$* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple3$ph$sFun$pchar$phbool$* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple3$ph$sFun$pchar$phbool$* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple3$ph$sFun$pchar$phbool$* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$ph$char$phbool$* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
struct tuple2$ph$char$phbool$* parse_word(struct sInfo* info, _Bool no_check_err);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple2$ph$int$bool$* expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple2$ph$tuple2$$sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);
struct tuple2$ph$sBlock$phbool$* parse_block(struct sInfo* info, _Bool no_block_level);
struct tuple2$ph$int$bool$* transpile_block(struct sBlock* block, struct list$$sType$ph* param_types, struct list$$char$ph* param_names, struct sInfo* info, _Bool no_var_table);
void arrange_stack(struct sInfo* info, int top);
struct tuple2$ph$sNode$phbool$* parse_function(struct sInfo* info);
struct tuple2$ph$sNode$phbool$* expression_v5(struct sInfo* info);
struct tuple2$ph$sNode$phbool$* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* expression_node_v1(struct sInfo* info);
struct tuple2$ph$sNode$phbool$* expression_node_v99(struct sInfo* info);
struct tuple2$ph$int$bool$* transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
struct tuple2$ph$sNode$phbool$* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* post_position_operator_v5(struct sNode* node, struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* expression_node_v98(struct sInfo* info);
struct tuple2$ph$sNode$phbool$* parse_tuple(struct sInfo* info);
struct tuple2$ph$sNode$phbool$* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* expression_v13(struct sInfo* info);
struct tuple2$ph$sNode$phbool$* post_op_v13(struct sNode* node, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* parse_struct(char* type_name, struct sInfo* info);
char* get_none_generics_name(char* class_name);
struct tuple2$ph$sNode$phbool$* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sInfo* info);
void output_struct(struct sClass* klass, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* parse_union(char* type_name, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* parse_enum(char* type_name, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* post_position_operator_v18(struct sNode* node, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* post_position_operator2_v18(struct sNode* node, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* post_position_operator2_v19(struct sNode* node, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* post_position_operator3_v20(struct sNode* node, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* post_position_operator3_v21(struct sNode* node, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph$sNode$phbool$* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
int main(int argc, char** argv);
/* inline function */
static inline unsigned short int __bswap_16(unsigned short int __bsx){
    unsigned short int __result__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    return __result__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    unsigned int __result__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result__;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
    unsigned long int __result__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result__;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
    unsigned short int __result__ = __x;
    return __result__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
    unsigned int __result__ = __x;
    return __result__;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
    unsigned long int __result__ = __x;
    return __result__;
}
static inline void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}
static inline void int_times(int self, void* parent, void (*block)(void*)){
int i_20;
memset(&i_20, 0, sizeof(int));
    for(
    i_20=0;
    i_20<self;
    i_20++
    ){
        block(parent);
    }
}
static inline char* __builtin_string(char* str){
int len_21;
void* right_value0;
char* result_22;
memset(&len_21, 0, sizeof(int));
memset(&result_22, 0, sizeof(char*));
    len_21=strlen(str)+1;
    result_22=(char*)come_increment_ref_count((char**)(right_value0=(char**)come_calloc(1, sizeof(char*)*1*len_21)));
    right_value0 = come_decrement_ref_count(right_value0, 1, 0);
    strncpy(result_22,str,len_21);
    char* __result__ = result_22;
    result_22 = come_decrement_ref_count(result_22, 0, 1);
    return __result__;
}
static inline _Bool int_equals(int self, int right){
    int __result__ = self==right;
    return __result__;
}
static inline _Bool bool_equals(_Bool self, _Bool right){
    _Bool __result__ = self==right;
    return __result__;
}
static inline _Bool char_equals(char self, char right){
    char __result__ = self==right;
    return __result__;
}
static inline _Bool short_equals(short short self, short short right){
    short short __result__ = self==right;
    return __result__;
}
static inline _Bool long_equals(long self, long right){
    long __result__ = self==right;
    return __result__;
}
static inline _Bool string_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline _Bool string_operator_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline _Bool charp_operator_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline _Bool charp_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline char* charp_operator_add(char* self, char* right){
int len_23;
void* right_value1;
char* result_24;
memset(&len_23, 0, sizeof(int));
memset(&result_24, 0, sizeof(char*));
    len_23=strlen(self)+strlen(right);
    result_24=(char*)come_increment_ref_count((char**)(right_value1=(char**)come_calloc(1, sizeof(char*)*1*len_23+1)));
    right_value1 = come_decrement_ref_count(right_value1, 1, 0);
    strncpy(result_24,self,len_23+1);
    strncat(result_24,right,len_23+1);
    char* __result__ = result_24;
    result_24 = come_decrement_ref_count(result_24, 0, 1);
    return __result__;
}
static inline unsigned int int_get_hash_key(int value){
    int __result__ = value;
    return __result__;
}
static inline unsigned int bool_get_hash_key(_Bool value){
    unsigned int __result__ = (int_get_hash_key(((int)value)));
    return __result__;
}
static inline unsigned int string_get_hash_key(char* value){
int result_25;
char* p_26;
memset(&result_25, 0, sizeof(int));
memset(&p_26, 0, sizeof(char*));
    result_25=0;
    p_26=value;
    while(*p_26) {
        result_25+=(*p_26);
        p_26++;
    }
    int __result__ = result_25;
    return __result__;
}
static inline unsigned int charp_get_hash_key(char* value){
void* right_value2;
    unsigned int __result__ = string_get_hash_key((char*)(right_value2=__builtin_string(value)));
    right_value2 = come_decrement_ref_count(right_value2, 1, 0);
    return __result__;
}
static inline int int_clone(int self){
    int __result__ = self;
    return __result__;
}
static inline char* charp_clone(char* self){
    char* __result__ = self;
    return __result__;
}
static inline char* string_clone(char* self){
void* right_value3;
    char* __result__ = (char*)(right_value3=__builtin_string(self));
    return __result__;
}
static inline int long_clone(long self){
    long __result__ = self;
    return __result__;
}
static inline short int short_clone(short short self){
    short short __result__ = self;
    return __result__;
}
static inline char char_clone(char self){
    char __result__ = self;
    return __result__;
}
static inline double double_clone(double self){
    double __result__ = self;
    return __result__;
}
static inline float float_clone(float self){
    float __result__ = self;
    return __result__;
}
static inline void buffer_finalize(struct buffer* self){
    if(self&&self->buf) {
        self->buf = come_decrement_ref_count(self->buf, 0, 0);
    }
}
static inline struct buffer* buffer_initialize(struct buffer* self){
void* right_value4;
    self->size=128;
    if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
    self->buf=(char*)come_increment_ref_count((char**)(right_value4=(char**)come_calloc(1, sizeof(char*)*1*self->size)));
    right_value4 = come_decrement_ref_count(right_value4, 1, 0);
    self->buf[0]=0;
    self->len=0;
    struct buffer* __result__ = self;
    call_finalizer(buffer_finalize,self,0, 0, 1);
    return __result__;
}
static inline struct buffer* buffer_clone(struct buffer* self){
void* right_value5;
struct buffer* result_27;
void* right_value6;
memset(&result_27, 0, sizeof(struct buffer*));
    if(self==((void*)0)) {
        void* __result__ = ((void*)0);
        return __result__;
    }
    result_27=(struct buffer*)come_increment_ref_count((struct buffer*)(right_value5=(struct buffer*)come_calloc(1, sizeof(struct buffer)*1)));
    call_finalizer(buffer_finalize,right_value5,0, 1, 0);
    result_27->size=self->size;
    if(result_27->buf) {(char*)come_decrement_ref_count(result_27->buf,0,0); }
    result_27->buf=(char*)come_increment_ref_count((char**)(right_value6=(char**)come_calloc(1, sizeof(char*)*1*self->size)));
    right_value6 = come_decrement_ref_count(right_value6, 1, 0);
    result_27->len=self->len;
    memcpy(result_27->buf,self->buf,self->len);
    struct buffer* __result__ = result_27;
    call_finalizer(buffer_finalize,result_27,0, 0, 1);
    return __result__;
}
static inline int buffer_length(struct buffer* self){
    int __result__ = self->len;
    return __result__;
}
static inline void buffer_reset(struct buffer* self){
    self->buf[0]=0;
    self->len=0;
}
static inline void buffer_append(struct buffer* self, char* mem, int size){
char* old_buf_28;
int old_len_29;
int new_size_30;
void* right_value7;
memset(&old_buf_28, 0, sizeof(char*));
memset(&old_len_29, 0, sizeof(int));
memset(&new_size_30, 0, sizeof(int));
    if(self->len+size+1+1>=self->size) {
        old_buf_28=(char*)come_increment_ref_count(come_memdup(self->buf));
        old_len_29=self->len;
        new_size_30=(self->size+size+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count((char**)(right_value7=(char**)come_calloc(1, sizeof(char*)*1*new_size_30)));
        right_value7 = come_decrement_ref_count(right_value7, 1, 0);
        memcpy(self->buf,old_buf_28,old_len_29);
        self->buf[old_len_29]=0;
        self->size=new_size_30;
        old_buf_28 = come_decrement_ref_count(old_buf_28, 0, 0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
}
static inline void buffer_append_char(struct buffer* self, char c){
int new_size_31;
void* right_value8;
memset(&new_size_31, 0, sizeof(int));
    if(self->len+1+1+1>=self->size) {
        new_size_31=(self->size+10+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count((char**)(right_value8=(char**)come_calloc(1, sizeof(char*)*1*new_size_31)));
        right_value8 = come_decrement_ref_count(right_value8, 1, 0);
        self->size=new_size_31;
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
}
static inline void buffer_append_str(struct buffer* self, char* str){
    buffer_append(self,str,strlen(str));
}
static inline void buffer_append_nullterminated_str(struct buffer* self, char* str){
    buffer_append(self,str,strlen(str));
    buffer_append_char(self,0);
}
static inline char* buffer_to_string(struct buffer* self){
void* right_value9;
    char* __result__ = (char*)(right_value9=__builtin_string(self->buf));
    return __result__;
}
static inline void buffer_append_int(struct buffer* self, int value){
    buffer_append(self,(char*)&value,sizeof(int));
}
static inline void buffer_append_long(struct buffer* self, long value){
    buffer_append(self,(char*)&value,sizeof(long));
}
static inline void buffer_append_short(struct buffer* self, short short value){
    buffer_append(self,(char*)&value,sizeof(short short));
}
static inline void buffer_alignment(struct buffer* self){
int len_32;
int new_size_33;
void* right_value10;
int i_34;
memset(&len_32, 0, sizeof(int));
memset(&new_size_33, 0, sizeof(int));
memset(&i_34, 0, sizeof(int));
    len_32=self->len;
    len_32=(len_32+3)&~3;
    if(len_32>=self->size) {
        new_size_33=(self->size+1+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count((char**)(right_value10=(char**)come_calloc(1, sizeof(char*)*1*new_size_33)));
        right_value10 = come_decrement_ref_count(right_value10, 1, 0);
        self->size=new_size_33;
    }
    for(
    i_34=self->len;
    i_34<len_32;
    i_34++
    ){
        self->buf[i_34]=0;
    }
    self->len=len_32;
}
static inline int buffer_compare(struct buffer* left, struct buffer* right){
    int __result__ = strcmp(left->buf,right->buf);
    return __result__;
}
static inline struct buffer* string_to_buffer(char* self){
void* right_value11;
void* right_value12;
struct buffer* result_35;
memset(&result_35, 0, sizeof(struct buffer*));
    result_35=(struct buffer*)come_increment_ref_count((struct buffer*)(right_value12=buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)(right_value11=(struct buffer*)come_calloc(1, sizeof(struct buffer)*1))))));
    call_finalizer(buffer_finalize,right_value11,0, 1, 0);
    call_finalizer(buffer_finalize,right_value12,0, 1, 0);
    buffer_append_str(result_35,self);
    struct buffer* __result__ = result_35;
    call_finalizer(buffer_finalize,result_35,0, 0, 1);
    return __result__;
}
static inline char* xsprintf(char* msg, ...){
va_list args_36;
char* result_37;
int len_38;
void* right_value13;
char* result2_39;
memset(&args_36, 0, sizeof(va_list));
memset(&result_37, 0, sizeof(char*));
memset(&len_38, 0, sizeof(int));
memset(&result2_39, 0, sizeof(char*));
    __builtin_va_start(args_36,msg);
    len_38=vasprintf(&result_37,msg,args_36);
    __builtin_va_end(args_36);
    if(len_38<0) {
        fprintf(stderr,"vasprintf can't get heap memory.(msg %s)\n",msg);
        exit(2);
    }
    result2_39=(char*)come_increment_ref_count((char*)(right_value13=__builtin_string(result_37)));
    right_value13 = come_decrement_ref_count(right_value13, 1, 0);
    free(result_37);
    char* __result__ = result2_39;
    call_finalizer(va_list_finalize,(&args_36),1, 0, 0);
    result2_39 = come_decrement_ref_count(result2_39, 0, 1);
    return __result__;
}
inline struct list$$char$ph* FILE_readlines(struct _IO_FILE* f){
void* right_value14;
    struct list$$char$ph* __result__ = (struct list$$char$ph*)(right_value14=FILE_readlines(f));
    return __result__;
}
static inline void FILE_fclose(struct _IO_FILE* f){
    FILE_fclose(f);
}
static inline char* FILE_read(struct _IO_FILE* f){
void* right_value21;
void* right_value22;
struct buffer* buf_49;
char buf2_50[8192];
int size_51;
void* right_value23;
memset(&buf_49, 0, sizeof(struct buffer*));
memset(&buf2_50, 0, sizeof(char));
memset(&size_51, 0, sizeof(int));
    buf_49=(struct buffer*)come_increment_ref_count((struct buffer*)(right_value22=buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)(right_value21=(struct buffer*)come_calloc(1, sizeof(struct buffer)*1))))));
    call_finalizer(buffer_finalize,right_value21,0, 1, 0);
    call_finalizer(buffer_finalize,right_value22,0, 1, 0);
    while(1) {
        size_51=fread(buf2_50,1,8192,f);
        buffer_append(buf_49,buf2_50,size_51);
        if(size_51<8192) {
            break;
        }
    }
    char* __result__ = (char*)(right_value23=buffer_to_string(buf_49));
    call_finalizer(buffer_finalize,buf_49,0, 0, 0);
    return __result__;
}
static inline struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
char msg2_55[1024];
va_list args_56;
memset(&msg2_55, 0, sizeof(char));
memset(&args_56, 0, sizeof(va_list));
    __builtin_va_start(args_56,msg);
    vsnprintf(msg2_55,1024,msg,args_56);
    __builtin_va_end(args_56);
    (void)fprintf(f,"%s",msg2_55);
    struct _IO_FILE* __result__ = f;
    call_finalizer(va_list_finalize,(&args_56),1, 0, 0);
    return __result__;
}
inline char* string_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_59;
void* right_value27;
memset(&f_59, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_59=fopen(file_name,"a");
    }
    else {
        f_59=fopen(file_name,"w");
    }
    FILE_fprintf(f_59,"%s",self);
    FILE_fclose(f_59);
    char* __result__ = (char*)(right_value27=__builtin_string(self));
    call_finalizer(FILE_finalize,(&f_59),1, 0, 0);
    return __result__;
}
inline char* charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_60;
void* right_value28;
memset(&f_60, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_60=fopen(file_name,"a");
    }
    else {
        f_60=fopen(file_name,"w");
    }
    FILE_fprintf(f_60,"%s",self);
    FILE_fclose(f_60);
    char* __result__ = (char*)(right_value28=__builtin_string(self));
    call_finalizer(FILE_finalize,(&f_60),1, 0, 0);
    return __result__;
}
static inline int string_length(char* str){
    int __result__ = strlen(str);
    return __result__;
}
static inline int charp_length(char* str){
    int __result__ = strlen(str);
    return __result__;
}
static inline char* string_reverse(char* str){
int len_61;
void* right_value29;
char* result_62;
int i_63;
memset(&len_61, 0, sizeof(int));
memset(&result_62, 0, sizeof(char*));
memset(&i_63, 0, sizeof(int));
    len_61=strlen(str);
    result_62=(char*)come_increment_ref_count((char**)(right_value29=(char**)come_calloc(1, sizeof(char*)*1*len_61+1)));
    right_value29 = come_decrement_ref_count(right_value29, 1, 0);
    for(
    i_63=0;
    i_63<len_61;
    i_63++
    ){
        result_62[i_63]=str[len_61-i_63-1];
    }
    result_62[len_61]=0;
    char* __result__ = result_62;
    result_62 = come_decrement_ref_count(result_62, 0, 1);
    return __result__;
}
static inline char* charp_reverse(char* str){
int len_64;
void* right_value30;
char* result_65;
int i_66;
memset(&len_64, 0, sizeof(int));
memset(&result_65, 0, sizeof(char*));
memset(&i_66, 0, sizeof(int));
    len_64=strlen(str);
    result_65=(char*)come_increment_ref_count((char**)(right_value30=(char**)come_calloc(1, sizeof(char*)*1*len_64+1)));
    right_value30 = come_decrement_ref_count(right_value30, 1, 0);
    for(
    i_66=0;
    i_66<len_64;
    i_66++
    ){
        result_65[i_66]=str[len_64-i_66-1];
    }
    result_65[len_64]=0;
    char* __result__ = result_65;
    result_65 = come_decrement_ref_count(result_65, 0, 1);
    return __result__;
}
static inline char* charp_substring(char* str, int head, int tail){
void* right_value31;
int len_67;
void* right_value32;
void* right_value33;
void* right_value34;
void* right_value35;
void* right_value36;
char* result_68;
memset(&len_67, 0, sizeof(int));
memset(&result_68, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result__ = (char*)(right_value31=__builtin_string(""));
        return __result__;
    }
    len_67=strlen(str);
    if(head<0) {
        head+=len_67;
    }
    if(tail<0) {
        tail+=len_67+1;
    }
    if(head>tail) {
        char* __result__ = (char*)(right_value33=string_reverse((char*)(right_value32=charp_substring(str,tail,head))));
        right_value32 = come_decrement_ref_count(right_value32, 1, 0);
        return __result__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_67) {
        tail=len_67;
    }
    if(head==tail) {
        char* __result__ = (char*)(right_value34=__builtin_string(""));
        return __result__;
    }
    if(tail-head+1<1) {
        char* __result__ = (char*)(right_value35=__builtin_string(""));
        return __result__;
    }
    result_68=(char*)come_increment_ref_count((char**)(right_value36=(char**)come_calloc(1, sizeof(char*)*1*tail-head+1)));
    right_value36 = come_decrement_ref_count(right_value36, 1, 0);
    memcpy(result_68,str+head,tail-head);
    result_68[tail-head]=0;
    char* __result__ = result_68;
    result_68 = come_decrement_ref_count(result_68, 0, 1);
    return __result__;
}
static inline char* string_substring(char* str, int head, int tail){
void* right_value37;
int len_69;
void* right_value38;
void* right_value39;
void* right_value40;
void* right_value41;
void* right_value42;
char* result_70;
memset(&len_69, 0, sizeof(int));
memset(&result_70, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result__ = (char*)(right_value37=__builtin_string(""));
        return __result__;
    }
    len_69=strlen(str);
    if(head<0) {
        head+=len_69;
    }
    if(tail<0) {
        tail+=len_69+1;
    }
    if(head>tail) {
        char* __result__ = (char*)(right_value39=string_reverse((char*)(right_value38=charp_substring(str,tail,head))));
        right_value38 = come_decrement_ref_count(right_value38, 1, 0);
        return __result__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_69) {
        tail=len_69;
    }
    if(head==tail) {
        char* __result__ = (char*)(right_value40=__builtin_string(""));
        return __result__;
    }
    if(tail-head+1<1) {
        char* __result__ = (char*)(right_value41=__builtin_string(""));
        return __result__;
    }
    result_70=(char*)come_increment_ref_count((char**)(right_value42=(char**)come_calloc(1, sizeof(char*)*1*tail-head+1)));
    right_value42 = come_decrement_ref_count(right_value42, 1, 0);
    memcpy(result_70,str+head,tail-head);
    result_70[tail-head]=0;
    char* __result__ = result_70;
    result_70 = come_decrement_ref_count(result_70, 0, 1);
    return __result__;
}
static inline char* string_chomp(char* str){
void* right_value43;
char* result_71;
void* right_value44;
memset(&result_71, 0, sizeof(char*));
    result_71=(char*)come_increment_ref_count((char*)(right_value43=__builtin_string(str)));
    right_value43 = come_decrement_ref_count(right_value43, 1, 0);
    if(result_71[string_length(result_71)-1]==10) {
        char* __result__ = (char*)(right_value44=string_substring(result_71,0,-2));
        return __result__;
    }
    char* __result__ = result_71;
    result_71 = come_decrement_ref_count(result_71, 0, 1);
    return __result__;
}
static inline char* charp_chomp(char* str){
void* right_value45;
char* result_72;
void* right_value46;
memset(&result_72, 0, sizeof(char*));
    result_72=(char*)come_increment_ref_count((char*)(right_value45=__builtin_string(str)));
    right_value45 = come_decrement_ref_count(right_value45, 1, 0);
    if(result_72[string_length(result_72)-1]==10) {
        char* __result__ = (char*)(right_value46=string_substring(result_72,0,-2));
        return __result__;
    }
    char* __result__ = result_72;
    result_72 = come_decrement_ref_count(result_72, 0, 1);
    return __result__;
}
static inline char* xbasename(char* path){
char* p_73;
void* right_value47;
void* right_value48;
void* right_value49;
memset(&p_73, 0, sizeof(char*));
    p_73=path+strlen(path);
    while(p_73>=path) {
        if(*p_73==47) {
            break;
        }
        else {
            p_73--;
        }
    }
    if(p_73<path) {
        char* __result__ = (char*)(right_value47=__builtin_string(path));
        return __result__;
    }
    else {
        char* __result__ = (char*)(right_value48=__builtin_string(p_73+1));
        return __result__;
    }
    char* __result__ = (char*)(right_value49=__builtin_string(""));
    return __result__;
}
static inline char* xdirname(char* path){
void* right_value50;
void* right_value51;
    char* __result__ = (char*)(right_value51=__builtin_string(dirname((char*)(right_value50=__builtin_string(path)))));
    right_value50 = come_decrement_ref_count(right_value50, 1, 0);
    return __result__;
}
static inline char* xnoextname(char* path){
void* right_value52;
char* path2_74;
char* p_75;
void* right_value53;
void* right_value54;
void* right_value55;
memset(&path2_74, 0, sizeof(char*));
memset(&p_75, 0, sizeof(char*));
    path2_74=(char*)come_increment_ref_count((char*)(right_value52=xbasename(path)));
    right_value52 = come_decrement_ref_count(right_value52, 1, 0);
    p_75=path2_74+strlen(path2_74);
    while(p_75>=path2_74) {
        if(*p_75==46) {
            break;
        }
        else {
            p_75--;
        }
    }
    if(p_75<path2_74) {
        char* __result__ = (char*)(right_value53=__builtin_string(path2_74));
        return __result__;
    }
    else {
        char* __result__ = (char*)(right_value54=string_substring(path2_74,0,p_75-path2_74));
        return __result__;
    }
    char* __result__ = (char*)(right_value55=__builtin_string(""));
    path2_74 = come_decrement_ref_count(path2_74, 0, 0);
    return __result__;
}
static inline char* xextname(char* path){
char* p_76;
void* right_value56;
void* right_value57;
void* right_value58;
memset(&p_76, 0, sizeof(char*));
    p_76=path+strlen(path);
    while(p_76>=path) {
        if(*p_76==46) {
            break;
        }
        else {
            p_76--;
        }
    }
    if(p_76<path) {
        char* __result__ = (char*)(right_value56=__builtin_string(path));
        return __result__;
    }
    else {
        char* __result__ = (char*)(right_value57=__builtin_string(p_76+1));
        return __result__;
    }
    char* __result__ = (char*)(right_value58=__builtin_string(""));
    return __result__;
}
static inline char* xrealpath(char* path){
char* result_77;
void* right_value59;
char* result2_78;
memset(&result_77, 0, sizeof(char*));
memset(&result2_78, 0, sizeof(char*));
    result_77=realpath(path,((void*)0));
    result2_78=(char*)come_increment_ref_count((char*)(right_value59=__builtin_string(result_77)));
    right_value59 = come_decrement_ref_count(right_value59, 1, 0);
    free(result_77);
    char* __result__ = result2_78;
    result2_78 = come_decrement_ref_count(result2_78, 0, 1);
    return __result__;
}
static inline _Bool xiswalpha(unsigned int c){
_Bool result_79;
memset(&result_79, 0, sizeof(_Bool));
    result_79=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result__ = result_79;
    return __result__;
}
static inline _Bool xiswblank(unsigned int c){
    unsigned int __result__ = c==32||c==9;
    return __result__;
}
static inline _Bool xiswdigit(unsigned int c){
    unsigned int __result__ = (c>=48&&c<=57);
    return __result__;
}
static inline _Bool xiswalnum(unsigned int c){
    _Bool __result__ = xiswalpha(c)||xiswdigit(c);
    return __result__;
}
static inline _Bool xisalpha(char c){
_Bool result_80;
memset(&result_80, 0, sizeof(_Bool));
    result_80=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result__ = result_80;
    return __result__;
}
static inline _Bool xisblank(char c){
    char __result__ = c==32||c==9;
    return __result__;
}
static inline _Bool xisdigit(char c){
    char __result__ = (c>=48&&c<=57);
    return __result__;
}
static inline _Bool xisalnum(char c){
    _Bool __result__ = xisalpha(c)||xisdigit(c);
    return __result__;
}
static inline _Bool xisascii(char c){
_Bool result_81;
memset(&result_81, 0, sizeof(_Bool));
    result_81=(c>=32&&c<=126);
    _Bool __result__ = result_81;
    return __result__;
}
static inline _Bool xiswascii(unsigned int c){
_Bool result_82;
memset(&result_82, 0, sizeof(_Bool));
    result_82=(c>=32&&c<=126);
    _Bool __result__ = result_82;
    return __result__;
}

/* body function */







static void ncfree(void* mem){
    if(mem) {
        free(mem);
    }
}

static void* come_calloc(int count, int size){
char* mem_0;
int* ref_count_1;
long* size2_2;
memset(&mem_0, 0, sizeof(char*));
memset(&ref_count_1, 0, sizeof(int*));
memset(&size2_2, 0, sizeof(long*));
    mem_0=calloc(1,sizeof(int)+sizeof(long)+count*size);
    ref_count_1=(int*)mem_0;
    size2_2=(long*)(mem_0+sizeof(int));
    *size2_2=size*count+sizeof(long)+sizeof(int);
    char* __result__ = mem_0+sizeof(int)+sizeof(long);
    return __result__;
}

static void* come_increment_ref_count(void* mem){
int* ref_count_3;
memset(&ref_count_3, 0, sizeof(int*));
    if(mem==((void*)0)) {
        void* __result__ = mem;
        return __result__;
    }
    ref_count_3=(int*)((char*)mem-sizeof(int)-sizeof(long));
    (*ref_count_3)++;
    void* __result__ = mem;
    return __result__;
}

static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free){
int* ref_count_4;
int count_5;
memset(&ref_count_4, 0, sizeof(int*));
memset(&count_5, 0, sizeof(int));
    if(mem==((void*)0)) {
        void* __result__ = ((void*)0);
        return __result__;
    }
    ref_count_4=(int*)((char*)mem-sizeof(int)-sizeof(long));
    if(!no_decrement) {
        (*ref_count_4)--;
    }
    count_5=*ref_count_4;
    if(!no_free&&count_5<=0) {
        ncfree(ref_count_4);
        void* __result__ = ((void*)0);
        return __result__;
    }
    void* __result__ = mem;
    return __result__;
}

static void come_free_object(void* mem){
int* ref_count_6;
memset(&ref_count_6, 0, sizeof(int*));
    if(mem==((void*)0)) {
        return;
    }
    ref_count_6=(int*)((char*)mem-sizeof(int)-sizeof(long));
    ncfree(ref_count_6);
}

static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free){
void (*finalizer_7)(void*);
int* ref_count_8;
int count_9;
void (*finalizer_10)(void*);
memset(&finalizer_7, 0, sizeof(void (*)(void*)));
memset(&ref_count_8, 0, sizeof(int*));
memset(&count_9, 0, sizeof(int));
memset(&finalizer_10, 0, sizeof(void (*)(void*)));
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            finalizer_7=fun;
            finalizer_7(mem);
        }
    }
    else {
        ref_count_8=(int*)((char*)mem-sizeof(int)-sizeof(long));
        if(!no_decrement) {
            (*ref_count_8)--;
        }
        count_9=*ref_count_8;
        if(!no_free&&count_9<=0) {
            if(mem) {
                if(fun) {
                    finalizer_10=fun;
                    finalizer_10(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

static void* nccalloc(int nmemb, int size){
void* result_11;
memset(&result_11, 0, sizeof(void*));
    result_11=calloc(nmemb,size);
    void* __result__ = result_11;
    return __result__;
}

static void* come_memdup(void* block){
char* mem_12;
long* size_p_13;
int size_14;
void* ret_15;
int* ref_count_16;
char* p_17;
char* p2_18;
long* size_p2_19;
memset(&mem_12, 0, sizeof(char*));
memset(&size_p_13, 0, sizeof(long*));
memset(&size_14, 0, sizeof(int));
memset(&ret_15, 0, sizeof(void*));
memset(&ref_count_16, 0, sizeof(int*));
memset(&p_17, 0, sizeof(char*));
memset(&p2_18, 0, sizeof(char*));
memset(&size_p2_19, 0, sizeof(long*));
    if(!block) {
        void* __result__ = ((void*)0);
        return __result__;
    }
    mem_12=(char*)block-sizeof(int)-sizeof(long);
    size_p_13=(long*)(mem_12+sizeof(int));
    size_14=*size_p_13;
    ret_15=calloc(1,size_14);
    ref_count_16=ret_15;
    if(ret_15) {
        p_17=ret_15;
        p2_18=mem_12;
        while(p_17-(char*)ret_15<size_14) {
            *p_17=*p2_18;
            p_17++;
            p2_18++;
        }
    }
    size_p2_19=(long*)((char*)ret_15+sizeof(int));
    *size_p2_19=size_14;
    char* __result__ = (char*)ret_15+sizeof(int)+sizeof(long);
    return __result__;
}










































static void va_list_finalize(va_list* self){
}



static struct list$ph$char$ph* list$$char$phphcharph_initialize(struct list$ph$char$ph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$ph$char$ph* __result__ = self;
        call_finalizer(list$ph$char$phphcharph_finalize,self,0, 0, 1);
        return __result__;
}

static void list$ph$char$phphcharph_finalize(struct list$p$char$ph* self){
struct list_item$$char$ph* it_40;
struct list_item$$char$ph* prev_it_41;
memset(&it_40, 0, sizeof(struct list_item$$char$ph*));
memset(&prev_it_41, 0, sizeof(struct list_item$$char$ph*));
            it_40=self->head;
            while(it_40!=((void*)0)) {
                if(1) {
                    it_40->item = come_decrement_ref_count(it_40->item, 0, 0);
                }
                prev_it_41=it_40;
                it_40=it_40->next;
                come_free_object(prev_it_41);
            }
}

static void list$$char$phphcharph_finalize(struct list$p$char$ph* self){
struct list_item$$char$ph$$char$ph* it_43;
struct list_item$$char$ph$$char$ph* prev_it_44;
memset(&it_43, 0, sizeof(struct list_item$$char$ph$$char$ph*));
memset(&prev_it_44, 0, sizeof(struct list_item$$char$ph$$char$ph*));
        it_43=self->head;
        while(it_43!=((void*)0)) {
            if(1) {
                it_43->item = come_decrement_ref_count(it_43->item, 0, 0);
            }
            prev_it_44=it_43;
            it_43=it_43->next;
            come_free_object(prev_it_44);
        }
}

static void list$$char$phphcharph_push_back(struct list$p$char$ph* self, char* item){
void* right_value17;
struct list_item$$char$ph$$char$ph* litem_46;
void* right_value18;
struct list_item$$char$ph$$char$ph* litem_47;
void* right_value19;
struct list_item$$char$ph$$char$ph* litem_48;
memset(&litem_46, 0, sizeof(struct list_item$$char$ph$$char$ph*));
memset(&litem_47, 0, sizeof(struct list_item$$char$ph$$char$ph*));
memset(&litem_48, 0, sizeof(struct list_item$$char$ph$$char$ph*));
            if(self->len==0) {
                litem_46=(struct list_item$$char$ph$$char$ph*)(right_value17=(struct list_item$$char$ph$$char$ph*)come_calloc(1, sizeof(struct list_item$$char$ph$$char$ph)*1));
                litem_46->prev=((void*)0);
                litem_46->next=((void*)0);
                if(litem_46->item) {(char*)come_decrement_ref_count(litem_46->item,0,0); }
                litem_46->item=(char*)come_increment_ref_count(item);
                self->tail=litem_46;
                self->head=litem_46;
            }
            else if(self->len==1) {
                litem_47=(struct list_item$$char$ph$$char$ph*)(right_value18=(struct list_item$$char$ph$$char$ph*)come_calloc(1, sizeof(struct list_item$$char$ph$$char$ph)*1));
                litem_47->prev=self->head;
                litem_47->next=((void*)0);
                if(litem_47->item) {(char*)come_decrement_ref_count(litem_47->item,0,0); }
                litem_47->item=(char*)come_increment_ref_count(item);
                self->tail=litem_47;
                self->head->next=litem_47;
            }
            else {
                litem_48=(struct list_item$$char$ph$$char$ph*)(right_value19=(struct list_item$$char$ph$$char$ph*)come_calloc(1, sizeof(struct list_item$$char$ph$$char$ph)*1));
                litem_48->prev=self->tail;
                litem_48->next=((void*)0);
                if(litem_48->item) {(char*)come_decrement_ref_count(litem_48->item,0,0); }
                litem_48->item=(char*)come_increment_ref_count(item);
                self->tail->next=litem_48;
                self->tail=litem_48;
            }
            self->len++;
            item = come_decrement_ref_count(item, 0, 1);
}




static void FILE_finalize(struct _IO_FILE* self){
}

























int come_main_v1(int argc, char** argv){
    puts("HELLO COMELANG");
    int __result__ = 0;
    return __result__;
}

int main(int argc, char** argv){
    int __result__ = come_main_v2(argc,argv);
    return __result__;
}

