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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

static void sStrNode_finalize(struct sStrNode* self);
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

static void sCharNode_finalize(struct sCharNode* self);
_Bool sCharNode_terminated();

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

int sCharNode_sline(struct sCharNode* self, struct sInfo* info);

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info);

static void sWCharNode_finalize(struct sWCharNode* self);
_Bool sWCharNode_terminated();

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info);

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);

static void sWStringNode_finalize(struct sWStringNode* self);
_Bool sWStringNode_terminated();

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info);

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

static void sListNode_finalize(struct sListNode* self);
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

static void sTupleNode_finalize(struct sTupleNode* self);
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

static void sMapNode_finalize(struct sMapNode* self);
_Bool sMapNode_terminated();

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);

static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int index);
static struct sNode* list$1sNodephp_item(struct list$1sNodeph* self, int position, struct sNode* default_value);
int sMapNode_sline(struct sMapNode* self, struct sInfo* info);

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info);

static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
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






struct sNode* expression_node_v98(struct sInfo* info){
int sline_157;
void* right_value229;
void* right_value230;
struct buffer* value_158;
char* p_159;
int sline_160;
int sline2_161;
void* right_value231;
void* right_value232;
void* right_value233;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* right_value237;
int c_163;
int n_164;
int n_165;
unsigned int n_168;
void* right_value238;
void* right_value239;
struct sNode* _inf_value2;
struct sCharNode* _inf_obj_value2;
void* right_value242;
unsigned int c_170;
int n_171;
int n_172;
unsigned int n_175;
unsigned char p2_176;
int size_177;
void* right_value243;
void* right_value244;
struct sNode* _inf_value3;
struct sWCharNode* _inf_obj_value3;
void* right_value247;
int sline_180;
void* right_value248;
void* right_value249;
struct buffer* value_181;
char* p_182;
int sline_183;
int len_184;
int n_185;
unsigned long lont_188;
int n_189;
int sline2_190;
int len_191;
void* right_value250;
unsigned int* wstr_192;
char* str_193;
void* right_value251;
void* right_value252;
struct sNode* _inf_value4;
struct sWStringNode* _inf_obj_value4;
void* right_value256;
char* p_195;
_Bool no_comma_196;
void* right_value257;
struct sNode* node_197;
char* p2_198;
void* right_value258;
void* right_value259;
struct buffer* first_element_source_199;
void* right_value260;
void* right_value261;
struct list$1sNodeph* list_elements_200;
void* right_value262;
void* right_value263;
struct list$1sNodeph* map_keys_201;
void* right_value264;
void* right_value265;
struct list$1sNodeph* map_elements_202;
_Bool no_comma_203;
void* right_value266;
struct sNode* node2_204;
void* right_value267;
void* right_value268;
struct sNode* _inf_value5;
struct sMapNode* _inf_obj_value5;
void* right_value273;
_Bool no_comma_206;
void* right_value274;
struct sNode* node2_207;
void* right_value275;
struct sNode* node3_208;
void* right_value276;
void* right_value277;
struct sNode* _inf_value6;
struct sMapNode* _inf_obj_value6;
void* right_value282;
_Bool no_comma_210;
void* right_value283;
struct sNode* node2_211;
void* right_value284;
void* right_value285;
struct sNode* _inf_value7;
struct sListNode* _inf_obj_value7;
void* right_value289;
void* right_value290;
memset(&sline_157, 0, sizeof(int)); /* ddd */
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&value_158, 0, sizeof(struct buffer*)); /* ddd */
memset(&p_159, 0, sizeof(char*)); /* ddd */
memset(&sline_160, 0, sizeof(int)); /* ddd */
memset(&sline2_161, 0, sizeof(int)); /* ddd */
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&c_163, 0, sizeof(int)); /* bbb */
memset(&n_164, 0, sizeof(int)); /* ddd */
memset(&n_165, 0, sizeof(int)); /* ddd */
memset(&n_168, 0, sizeof(unsigned int)); /* ddd */
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&c_170, 0, sizeof(unsigned int)); /* bbb */
memset(&n_171, 0, sizeof(int)); /* ddd */
memset(&n_172, 0, sizeof(int)); /* ddd */
memset(&n_175, 0, sizeof(unsigned int)); /* ddd */
memset(&p2_176, 0, sizeof(unsigned char)); /* ddd */
memset(&size_177, 0, sizeof(int)); /* bbb */
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&sline_180, 0, sizeof(int)); /* ddd */
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&value_181, 0, sizeof(struct buffer*)); /* ddd */
memset(&p_182, 0, sizeof(char*)); /* ddd */
memset(&sline_183, 0, sizeof(int)); /* ddd */
memset(&len_184, 0, sizeof(int)); /* ddd */
memset(&n_185, 0, sizeof(int)); /* ddd */
memset(&lont_188, 0, sizeof(unsigned long)); /* bbb */
memset(&n_189, 0, sizeof(int)); /* ddd */
memset(&sline2_190, 0, sizeof(int)); /* ddd */
memset(&len_191, 0, sizeof(int)); /* ddd */
memset(&right_value250, 0, sizeof(void*));
memset(&wstr_192, 0, sizeof(unsigned int*)); /* ddd */
memset(&str_193, 0, sizeof(char*)); /* ddd */
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&p_195, 0, sizeof(char*)); /* ddd */
memset(&no_comma_196, 0, sizeof(_Bool)); /* ddd */
memset(&right_value257, 0, sizeof(void*));
memset(&node_197, 0, sizeof(struct sNode*)); /* ddd */
memset(&p2_198, 0, sizeof(char*)); /* ddd */
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&first_element_source_199, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&list_elements_200, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&map_keys_201, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&map_elements_202, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&no_comma_203, 0, sizeof(_Bool)); /* ddd */
memset(&right_value266, 0, sizeof(void*));
memset(&node2_204, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&no_comma_206, 0, sizeof(_Bool)); /* ddd */
memset(&right_value274, 0, sizeof(void*));
memset(&node2_207, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value275, 0, sizeof(void*));
memset(&node3_208, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&no_comma_210, 0, sizeof(_Bool)); /* ddd */
memset(&right_value283, 0, sizeof(void*));
memset(&node2_211, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
    if(*info->p==34) {
        info->p++;
        sline_157=info->sline;
        value_158=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value230=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value229=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value229) { come_call_finalizer(buffer_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value230) { come_call_finalizer(buffer_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0); }
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_159=info->p;
                sline_160=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_159;
                    info->sline=sline_160;
                    break;
                }
            }
            else if(*info->p==92) {
                buffer_append_char(value_158,92);
                info->p++;
                if(*info->p==34) {
                    buffer_append_char(value_158,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_158,*info->p);
                    info->p++;
                }
            }
            else if(*info->p==0) {
                sline2_161=info->sline;
                info->sline=sline_157;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_161;
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_158,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value1=come_increment_ref_count(((struct sStrNode*)(right_value233=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value231=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1))))),(char*)come_increment_ref_count(((char*)(right_value232=buffer_to_string(value_158)))),sline_157,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=sStrNode_finalize;
        _inf_value1->clone=sStrNode_clone;
        _inf_value1->compile=sStrNode_compile;
        _inf_value1->sline=sStrNode_sline;
        _inf_value1->sname=sStrNode_sname;
        _inf_value1->terminated=sStrNode_terminated;
        struct sNode* __result104__ = ((struct sNode*)(right_value237=_inf_value1));
        if(value_158) { come_call_finalizer(buffer_finalize,value_158, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value231) { come_call_finalizer(sStrNode_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value232) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0); }
        if(right_value233) { come_call_finalizer(sStrNode_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0); }
        return __result104__;
    }
    else if(*info->p==39) {
        info->p++;
        if(*info->p==92) {
            info->p++;
            if(xisdigit(*info->p)) {
                n_164=0;
                while(xisdigit(*info->p)) {
                    n_164=n_164*8+*info->p-48;
                    info->p++;
                }
                c_163=n_164;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_163=10;
                    info->p++;
                    break;
                    case 116:
                    c_163=9;
                    info->p++;
                    break;
                    case 114:
                    c_163=13;
                    info->p++;
                    break;
                    case 97:
                    c_163=7;
                    info->p++;
                    break;
                    case 102:
                    c_163=12;
                    info->p++;
                    break;
                    case 118:
                    c_163=11;
                    info->p++;
                    break;
                    case 98:
                    c_163=8;
                    info->p++;
                    break;
                    case 92:
                    c_163=92;
                    info->p++;
                    break;
                    case 48:
                    c_163=0;
                    info->p++;
                    if(xisdigit(*info->p)) {
                        n_165=0;
                        while(xisdigit(*info->p)) {
                            n_165=n_165*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_163=n_165;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_166[128];
                        memset(&buf_166, 0, sizeof(buf_166)); /* aaa */
                        strncpy(buf_166,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_167[2];
                            memset(&buf2_167, 0, sizeof(buf2_167)); /* aaa */
                            buf2_167[0]=*info->p;
                            buf2_167[1]=0;
                            info->p++;
                            strncat(buf_166,buf2_167,128);
                        }
                        n_168=strtoll(buf_166,((void*)0),0);
                        c_163=n_168;
                    }
                    break;
                    default:
                    c_163=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_163=*info->p;
            info->p++;
        }
        if(*info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value2=come_increment_ref_count(((struct sCharNode*)(right_value239=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value238=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1))))),c_163,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=sCharNode_finalize;
            _inf_value2->clone=sCharNode_clone;
            _inf_value2->compile=sCharNode_compile;
            _inf_value2->sline=sCharNode_sline;
            _inf_value2->sname=sCharNode_sname;
            _inf_value2->terminated=sCharNode_terminated;
            struct sNode* __result107__ = ((struct sNode*)(right_value242=_inf_value2));
            if(right_value238) { come_call_finalizer(sCharNode_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value239) { come_call_finalizer(sCharNode_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0); }
            return __result107__;
        }
    }
    else if(*info->p==76&&*(info->p+1)==39) {
        info->p+=2;
        if(*info->p==92) {
            info->p++;
            if(xisdigit(*info->p)) {
                n_171=0;
                while(xisdigit(*info->p)) {
                    n_171=n_171*8+*info->p-48;
                    info->p++;
                }
                c_170=n_171;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_170=10;
                    info->p++;
                    break;
                    case 116:
                    c_170=9;
                    info->p++;
                    break;
                    case 114:
                    c_170=13;
                    info->p++;
                    break;
                    case 97:
                    c_170=7;
                    info->p++;
                    break;
                    case 92:
                    c_170=92;
                    info->p++;
                    break;
                    case 48:
                    c_170=0;
                    info->p++;
                    if(xisdigit(*info->p)) {
                        n_172=0;
                        while(xisdigit(*info->p)) {
                            n_172=n_172*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_170=n_172;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_173[128];
                        memset(&buf_173, 0, sizeof(buf_173)); /* aaa */
                        strncpy(buf_173,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_174[2];
                            memset(&buf2_174, 0, sizeof(buf2_174)); /* aaa */
                            buf2_174[0]=*info->p;
                            buf2_174[1]=0;
                            info->p++;
                            strncat(buf_173,buf2_174,128);
                        }
                        n_175=strtoll(buf_173,((void*)0),0);
                        c_170=n_175;
                    }
                    break;
                    default:
                    c_170=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            p2_176=*(unsigned char*)info->p;
            if(p2_176>127) {
                char str_178[16+1];
                memset(&str_178, 0, sizeof(str_178)); /* aaa */
                size_177=((p2_176&128)>>7)+((p2_176&64)>>6)+((p2_176&32)>>5)+((p2_176&16)>>4);
                if(size_177>16) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_178,info->p,size_177);
                    str_178[size_177]=0;
                    if(mbtowc(&c_170,str_178,size_177)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                        c_170=0;
                    }
                    info->p+=size_177;
                }
            }
            else {
                c_170=*info->p;
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
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value3=come_increment_ref_count(((struct sWCharNode*)(right_value244=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value243=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1))))),c_170,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=sWCharNode_finalize;
            _inf_value3->clone=sWCharNode_clone;
            _inf_value3->compile=sWCharNode_compile;
            _inf_value3->sline=sWCharNode_sline;
            _inf_value3->sname=sWCharNode_sname;
            _inf_value3->terminated=sWCharNode_terminated;
            struct sNode* __result110__ = ((struct sNode*)(right_value247=_inf_value3));
            if(right_value243) { come_call_finalizer(sWCharNode_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value244) { come_call_finalizer(sWCharNode_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0); }
            return __result110__;
        }
    }
    else if(*info->p==76&&*(info->p+1)==34) {
        info->p+=2;
        sline_180=info->sline;
        value_181=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value249=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value248=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value248) { come_call_finalizer(buffer_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value249) { come_call_finalizer(buffer_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0); }
        while(1) {
            if(*info->p==34) {
                info->p++;
                p_182=info->p;
                sline_183=info->sline;
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_182;
                    info->sline=sline_183;
                    break;
                }
            }
            else if(*info->p==92) {
                info->p++;
                if(xisdigit(*info->p)) {
                    len_184=0;
                    n_185=0;
                    while(xisdigit(*info->p)&&len_184<3) {
                        n_185=n_185*8+*info->p-48;
                        info->p++;
                        len_184++;
                    }
                    buffer_append_char(value_181,n_185);
                }
                else if(*info->p==120||*info->p==88) {
                    info->p++;
                    char buf_186[128];
                    memset(&buf_186, 0, sizeof(buf_186)); /* aaa */
                    strncpy(buf_186,"0x",128);
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        char buf2_187[2];
                        memset(&buf2_187, 0, sizeof(buf2_187)); /* aaa */
                        buf2_187[0]=*info->p;
                        buf2_187[1]=0;
                        info->p++;
                        strncat(buf_186,buf2_187,128);
                    }
                    n_189=strtoll(buf_186,((void*)0),0);
                    buffer_append_char(value_181,(char)n_189);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_181,0);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_181,10);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_181,9);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_181,13);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_181,11);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_181,12);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_181,7);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_181,8);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_181,92);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_181,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(*info->p==0) {
                sline2_190=info->sline;
                info->sline=sline_180;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(*info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_181,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_191=value_181->len;
        wstr_192=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value250=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_191+1))))));
        if(right_value250) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0); }
        str_193=value_181->buf;
        if(mbstowcs(wstr_192,str_193,len_191+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_192[len_191]=0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value4=come_increment_ref_count(((struct sWStringNode*)(right_value252=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value251=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1))))),(unsigned int*)come_increment_ref_count(wstr_192),sline_180,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=sWStringNode_finalize;
        _inf_value4->clone=sWStringNode_clone;
        _inf_value4->compile=sWStringNode_compile;
        _inf_value4->sline=sWStringNode_sline;
        _inf_value4->sname=sWStringNode_sname;
        _inf_value4->terminated=sWStringNode_terminated;
        struct sNode* __result113__ = ((struct sNode*)(right_value256=_inf_value4));
        if(value_181) { come_call_finalizer(buffer_finalize,value_181, (void*)0, (void*)0, 0, 0, 0); }
        if(wstr_192) { wstr_192 = come_decrement_ref_count(wstr_192, (void*)0, (void*)0, 0, 0); }
        if(right_value251) { come_call_finalizer(sWStringNode_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value252) { come_call_finalizer(sWStringNode_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0); }
        return __result113__;
    }
    else if(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        p_195=info->p;
        no_comma_196=info->no_comma;
        info->no_comma=(_Bool)1;
        node_197=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value257=expression_v13(info))));
        if(right_value257) { right_value257 = come_decrement_ref_count(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0); } 
        info->no_comma=no_comma_196;
        p2_198=info->p;
        first_element_source_199=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value259=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value258=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value258) { come_call_finalizer(buffer_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value259) { come_call_finalizer(buffer_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append(first_element_source_199,p_195,p2_198-p_195);
        buffer_append_char(first_element_source_199,0);
        list_elements_200=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value261=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value260=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
        if(right_value261) { come_call_finalizer(list$1sNodephp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0); }
        map_keys_201=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value263=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value262=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
        if(right_value263) { come_call_finalizer(list$1sNodephp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0); }
        map_elements_202=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value265=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value264=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
        if(right_value265) { come_call_finalizer(list$1sNodephp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0); }
        if(*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(map_keys_201,(struct sNode*)come_increment_ref_count(node_197));
            no_comma_203=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_204=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=expression_v13(info))));
            if(right_value266) { right_value266 = come_decrement_ref_count(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0); } 
            info->no_comma=no_comma_203;
            list$1sNodephp_push_back(map_elements_202,(struct sNode*)come_increment_ref_count(node2_204));
            if(*info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value5=come_increment_ref_count(((struct sMapNode*)(right_value268=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value267=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1))))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_201),(struct list$1sNodeph*)come_increment_ref_count(map_elements_202),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=sMapNode_finalize;
                _inf_value5->clone=sMapNode_clone;
                _inf_value5->compile=sMapNode_compile;
                _inf_value5->sline=sMapNode_sline;
                _inf_value5->sname=sMapNode_sname;
                _inf_value5->terminated=sMapNode_terminated;
                struct sNode* __result116__ = ((struct sNode*)(right_value273=_inf_value5));
                if(node2_204) { node2_204 = come_decrement_ref_count(node2_204, ((struct sNode*)node2_204)->finalize, ((struct sNode*)node2_204)->_protocol_obj, 0, 0); } 
                if(node_197) { node_197 = come_decrement_ref_count(node_197, ((struct sNode*)node_197)->finalize, ((struct sNode*)node_197)->_protocol_obj, 0, 0); } 
                if(first_element_source_199) { come_call_finalizer(buffer_finalize,first_element_source_199, (void*)0, (void*)0, 0, 0, 0); }
                if(list_elements_200) { come_call_finalizer(list$1sNodephp_finalize,list_elements_200, (void*)0, (void*)0, 0, 0, 0); }
                if(map_keys_201) { come_call_finalizer(list$1sNodephp_finalize,map_keys_201, (void*)0, (void*)0, 0, 0, 0); }
                if(map_elements_202) { come_call_finalizer(list$1sNodephp_finalize,map_elements_202, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value267) { come_call_finalizer(sMapNode_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value268) { come_call_finalizer(sMapNode_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0); }
                return __result116__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_206=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_207=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=expression_v13(info))));
                    if(right_value274) { right_value274 = come_decrement_ref_count(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0); } 
                    info->no_comma=no_comma_206;
                    list$1sNodephp_push_back(map_keys_201,(struct sNode*)come_increment_ref_count(node2_207));
                    expected_next_character(58,info);
                    no_comma_206=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_208=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=expression_v13(info))));
                    if(right_value275) { right_value275 = come_decrement_ref_count(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0); } 
                    info->no_comma=no_comma_206;
                    list$1sNodephp_push_back(map_elements_202,(struct sNode*)come_increment_ref_count(node3_208));
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
                    if(node2_207) { node2_207 = come_decrement_ref_count(node2_207, ((struct sNode*)node2_207)->finalize, ((struct sNode*)node2_207)->_protocol_obj, 0, 0); } 
                    if(node3_208) { node3_208 = come_decrement_ref_count(node3_208, ((struct sNode*)node3_208)->finalize, ((struct sNode*)node3_208)->_protocol_obj, 0, 0); } 
                }
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode));
                _inf_obj_value6=come_increment_ref_count(((struct sMapNode*)(right_value277=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value276=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1))))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_201),(struct list$1sNodeph*)come_increment_ref_count(map_elements_202),info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=sMapNode_finalize;
                _inf_value6->clone=sMapNode_clone;
                _inf_value6->compile=sMapNode_compile;
                _inf_value6->sline=sMapNode_sline;
                _inf_value6->sname=sMapNode_sname;
                _inf_value6->terminated=sMapNode_terminated;
                struct sNode* __result119__ = ((struct sNode*)(right_value282=_inf_value6));
                if(node2_204) { node2_204 = come_decrement_ref_count(node2_204, ((struct sNode*)node2_204)->finalize, ((struct sNode*)node2_204)->_protocol_obj, 0, 0); } 
                if(node_197) { node_197 = come_decrement_ref_count(node_197, ((struct sNode*)node_197)->finalize, ((struct sNode*)node_197)->_protocol_obj, 0, 0); } 
                if(first_element_source_199) { come_call_finalizer(buffer_finalize,first_element_source_199, (void*)0, (void*)0, 0, 0, 0); }
                if(list_elements_200) { come_call_finalizer(list$1sNodephp_finalize,list_elements_200, (void*)0, (void*)0, 0, 0, 0); }
                if(map_keys_201) { come_call_finalizer(list$1sNodephp_finalize,map_keys_201, (void*)0, (void*)0, 0, 0, 0); }
                if(map_elements_202) { come_call_finalizer(list$1sNodephp_finalize,map_elements_202, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value276) { come_call_finalizer(sMapNode_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0); }
                if(right_value277) { come_call_finalizer(sMapNode_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0); }
                return __result119__;
            }
        }
        else if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_200,(struct sNode*)come_increment_ref_count(node_197));
        }
        else if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_200,(struct sNode*)come_increment_ref_count(node_197));
            while((_Bool)1) {
                no_comma_210=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_211=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=expression_v13(info))));
                if(right_value283) { right_value283 = come_decrement_ref_count(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0); } 
                info->no_comma=no_comma_210;
                list$1sNodephp_push_back(list_elements_200,(struct sNode*)come_increment_ref_count(node2_211));
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
                if(node2_211) { node2_211 = come_decrement_ref_count(node2_211, ((struct sNode*)node2_211)->finalize, ((struct sNode*)node2_211)->_protocol_obj, 0, 0); } 
            }
        }
        else {
            err_msg(info,"invalid character(%c)(5)",*info->p);
            exit(2);
        }
        if(list$1sNodephp_length(list_elements_200)>0) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value7=come_increment_ref_count(((struct sListNode*)(right_value285=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value284=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1))))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_200),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=sListNode_finalize;
            _inf_value7->clone=sListNode_clone;
            _inf_value7->compile=sListNode_compile;
            _inf_value7->sline=sListNode_sline;
            _inf_value7->sname=sListNode_sname;
            _inf_value7->terminated=sListNode_terminated;
            struct sNode* __result122__ = ((struct sNode*)(right_value289=_inf_value7));
            if(node_197) { node_197 = come_decrement_ref_count(node_197, ((struct sNode*)node_197)->finalize, ((struct sNode*)node_197)->_protocol_obj, 0, 0); } 
            if(first_element_source_199) { come_call_finalizer(buffer_finalize,first_element_source_199, (void*)0, (void*)0, 0, 0, 0); }
            if(list_elements_200) { come_call_finalizer(list$1sNodephp_finalize,list_elements_200, (void*)0, (void*)0, 0, 0, 0); }
            if(map_keys_201) { come_call_finalizer(list$1sNodephp_finalize,map_keys_201, (void*)0, (void*)0, 0, 0, 0); }
            if(map_elements_202) { come_call_finalizer(list$1sNodephp_finalize,map_elements_202, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value284) { come_call_finalizer(sListNode_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value285) { come_call_finalizer(sListNode_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0); }
            return __result122__;
        }
        else {
        }
    }
    else {
        ((struct sNode*)(right_value290=expression_node_v1(info)));
        if(right_value290) { right_value290 = come_decrement_ref_count(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0); } 
    }
    struct sNode* __result123__ = (struct sNode*)((void*)0);
    return __result123__;
}

struct sNode* parse_tuple(struct sInfo* info){
void* right_value291;
void* right_value292;
struct list$1sNodeph* tuple_elements_213;
char* p_214;
_Bool no_comma_215;
void* right_value293;
struct sNode* node_216;
void* right_value294;
void* right_value295;
struct sNode* _inf_value8;
struct sTupleNode* _inf_obj_value8;
void* right_value299;
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&tuple_elements_213, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&p_214, 0, sizeof(char*)); /* ddd */
memset(&no_comma_215, 0, sizeof(_Bool)); /* ddd */
memset(&right_value293, 0, sizeof(void*));
memset(&node_216, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
    tuple_elements_213=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value292=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value291=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
    if(right_value292) { come_call_finalizer(list$1sNodephp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0); }
    while((_Bool)1) {
        p_214=info->p;
        no_comma_215=info->no_comma;
        info->no_comma=(_Bool)1;
        node_216=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=expression_v13(info))));
        if(right_value293) { right_value293 = come_decrement_ref_count(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0); } 
        info->no_comma=no_comma_215;
        list$1sNodephp_push_back(tuple_elements_213,(struct sNode*)come_increment_ref_count(node_216));
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
        if(node_216) { node_216 = come_decrement_ref_count(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0); } 
    }
    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value8=come_increment_ref_count(((struct sTupleNode*)(right_value295=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value294=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1))))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_213),info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=sTupleNode_finalize;
    _inf_value8->clone=sTupleNode_clone;
    _inf_value8->compile=sTupleNode_compile;
    _inf_value8->sline=sTupleNode_sline;
    _inf_value8->sname=sTupleNode_sname;
    _inf_value8->terminated=sTupleNode_terminated;
    struct sNode* __result126__ = ((struct sNode*)(right_value299=_inf_value8));
    if(tuple_elements_213) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_213, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value294) { come_call_finalizer(sTupleNode_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value295) { come_call_finalizer(sTupleNode_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0); }
    return __result126__;
}

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

static void sStrNode_finalize(struct sStrNode* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
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
memset(&come_value_0, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
    come_value_0=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value2=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value2) { come_call_finalizer(CVALUE_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj3=come_value_0->c_value;
    come_value_0->c_value=(char*)come_increment_ref_count(((char*)(right_value3=xsprintf("\"%s\"",self->value))));
    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
    if(right_value3) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0); }
    __dec_obj4=come_value_0->type;
    come_value_0->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value5=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value4=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char*",info,(_Bool)0))));
    if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
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
memset(&litem_7, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value7, 0, sizeof(void*));
memset(&litem_8, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value8, 0, sizeof(void*));
memset(&litem_9, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
        if(self->len==0) {
            litem_7=((struct list_item$1CVALUEph*)(right_value6=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_7->prev=((void*)0);
            litem_7->next=((void*)0);
            __dec_obj5=litem_7->item;
            litem_7->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
            self->tail=litem_7;
            self->head=litem_7;
        }
        else if(self->len==1) {
            litem_8=((struct list_item$1CVALUEph*)(right_value7=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_8->prev=self->head;
            litem_8->next=((void*)0);
            __dec_obj6=litem_8->item;
            litem_8->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
            self->tail=litem_8;
            self->head->next=litem_8;
        }
        else {
            litem_9=((struct list_item$1CVALUEph*)(right_value8=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_9->prev=self->tail;
            litem_9->next=((void*)0);
            __dec_obj7=litem_9->item;
            litem_9->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
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

static void sCharNode_finalize(struct sCharNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
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
memset(&come_value_10, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
    come_value_10=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value11=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value11) { come_call_finalizer(CVALUE_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj9=come_value_10->c_value;
    come_value_10->c_value=(char*)come_increment_ref_count(((char*)(right_value12=xsprintf("%d",self->value))));
    if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0); }
    if(right_value12) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0); }
    __dec_obj10=come_value_10->type;
    come_value_10->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value14=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value13=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"char",info,(_Bool)0))));
    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0); }
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

static void sWCharNode_finalize(struct sWCharNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
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
memset(&come_value_11, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
    come_value_11=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value17=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value17) { come_call_finalizer(CVALUE_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj12=come_value_11->c_value;
    come_value_11->c_value=(char*)come_increment_ref_count(((char*)(right_value18=xsprintf("L'%lc'",self->value))));
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0); }
    if(right_value18) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0); }
    __dec_obj13=come_value_11->type;
    come_value_11->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value19=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"wchar_t",info,(_Bool)0))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0); }
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

static void sWStringNode_finalize(struct sWStringNode* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
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
memset(&come_value_12, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
    come_value_12=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value23=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value23) { come_call_finalizer(CVALUE_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj16=come_value_12->c_value;
    come_value_12->c_value=(char*)come_increment_ref_count(((char*)(right_value24=xsprintf("L'%ls'",self->value))));
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
    if(right_value24) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0); }
    __dec_obj17=come_value_12->type;
    come_value_12->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value26=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value25=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"wchar_t*",info,(_Bool)0))));
    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
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

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
struct list$1sNodeph* __dec_obj18;
void* right_value28;
char* __dec_obj19;
memset(&right_value28, 0, sizeof(void*));
    __dec_obj18=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
    self->sline=info->sline;
    __dec_obj19=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value28=__builtin_string(info->sname))));
    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
    if(right_value28) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0); }
    struct sListNode* __result27__ = self;
    if(self) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(list_elements) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1); }
    return __result27__;
}

static void sListNode_finalize(struct sListNode* self){
                if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
                    if(self->list_elements) { come_call_finalizer(list$1sNodephp_finalize,self->list_elements, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

_Bool sListNode_terminated(){
    _Bool __result28__ = (_Bool)0;
    return __result28__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_13;
void* right_value29;
void* right_value30;
struct list$1CVALUEph* params_16;
struct sType* list_element_type_17;
struct sNode* it_19;
void* right_value31;
struct CVALUE* come_value_21;
void* right_value62;
struct sType* __dec_obj38;
void* right_value63;
struct sType* type_values_40;
void* right_value67;
static int list_value_num_44=0;
void* right_value68;
char* var_name_45;
struct sVar* var__46;
void* right_value69;
void* right_value70;
void* right_value71;
struct buffer* source_47;
int i_48;
struct CVALUE* it_50;
void* right_value72;
void* right_value73;
void* right_value74;
void* right_value75;
void* right_value76;
struct sType* list_type_55;
void* right_value80;
void* right_value81;
struct sType* obj_type_59;
char* fun_name_60;
void* right_value82;
void* right_value83;
void* right_value84;
char* generics_fun_name_61;
struct sFun* fun_64;
void* right_value85;
struct sType* result_type_65;
struct sType* type_66;
void* right_value86;
struct CVALUE* obj_value_67;
void* right_value87;
void* right_value88;
struct buffer* num_string_68;
void* right_value89;
struct sType* type2_69;
void* right_value90;
char* type_name_70;
void* right_value91;
void* right_value92;
char* __dec_obj45;
void* right_value93;
struct sType* type3_71;
void* right_value94;
struct sType* __dec_obj46;
void* right_value95;
char* __dec_obj47;
void* right_value96;
void* right_value97;
struct list$1CVALUEph* come_params_72;
void* right_value98;
char* __dec_obj48;
void* right_value99;
struct CVALUE* come_value2_76;
void* right_value100;
char* __dec_obj49;
void* right_value101;
struct CVALUE* come_value3_77;
void* right_value102;
char* __dec_obj50;
void* right_value103;
void* right_value104;
struct buffer* buf_78;
int j_79;
struct CVALUE* it_80;
void* right_value105;
struct CVALUE* come_value4_81;
void* right_value106;
char* __dec_obj51;
void* right_value107;
void* right_value108;
char* __dec_obj52;
void* right_value109;
struct sType* __dec_obj53;
void* right_value110;
memset(&list_elements_13, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&params_16, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&list_element_type_17, 0, sizeof(struct sType*)); /* bbb */
memset(&it_19, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value31, 0, sizeof(void*));
memset(&come_value_21, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&type_values_40, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&var_name_45, 0, sizeof(char*)); /* ddd */
memset(&var__46, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&source_47, 0, sizeof(struct buffer*)); /* ddd */
memset(&i_48, 0, sizeof(int)); /* ddd */
memset(&it_50, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&list_type_55, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&obj_type_59, 0, sizeof(struct sType*)); /* ddd */
memset(&fun_name_60, 0, sizeof(char*)); /* ddd */
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&generics_fun_name_61, 0, sizeof(char*)); /* ddd */
memset(&fun_64, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value85, 0, sizeof(void*));
memset(&result_type_65, 0, sizeof(struct sType*)); /* ddd */
memset(&type_66, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value86, 0, sizeof(void*));
memset(&obj_value_67, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&num_string_68, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value89, 0, sizeof(void*));
memset(&type2_69, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value90, 0, sizeof(void*));
memset(&type_name_70, 0, sizeof(char*)); /* ddd */
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&type3_71, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&come_params_72, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&come_value2_76, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&come_value3_77, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&buf_78, 0, sizeof(struct buffer*)); /* ddd */
memset(&j_79, 0, sizeof(int)); /* ddd */
memset(&it_80, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value105, 0, sizeof(void*));
memset(&come_value4_81, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
    list_elements_13=self->list_elements;
    params_16=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value30=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value29=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
    if(right_value30) { come_call_finalizer(list$1CVALUEphp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_19=list$1sNodephp_begin((list_elements_13));
    !list$1sNodephp_end((list_elements_13));
    it_19=list$1sNodephp_next((list_elements_13))
    ){
        if(!it_19->compile(it_19->_protocol_obj,info)) {
            _Bool __result35__ = (_Bool)0;
            return __result35__;
        }
        come_value_21=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value31=get_value_from_stack(-1,info))));
        if(right_value31) { come_call_finalizer(CVALUE_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(params_16,(struct CVALUE*)come_increment_ref_count(come_value_21));
        __dec_obj38=list_element_type_17;
        list_element_type_17=(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(come_value_21->type))));
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
        if(right_value62) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0); }
    }
    type_values_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(list_element_type_17))));
    if(right_value63) { come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0); }
    list$1sNodephp_push_back(type_values_40->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=create_int_node(list$1CVALUEphp_length(params_16),info)))));
    if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0); } 
    type_values_40->mHeap=(_Bool)0;
    var_name_45=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("__list_values%d__",++list_value_num_44))));
    if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
    add_variable_to_table(var_name_45,type_values_40,info);
    var__46=get_variable_from_table(info->lv_table,var_name_45);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value69=make_define_var(type_values_40,var__46->mCValueName,info,(_Bool)0))));
    if(right_value69) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0); }
    source_47=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value71=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value70=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value70) { come_call_finalizer(buffer_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value71) { come_call_finalizer(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(source_47,"{");
    i_48=0;
    for(
    it_50=list$1CVALUEphp_begin((params_16));
    !list$1CVALUEphp_end((params_16));
    it_50=list$1CVALUEphp_next((params_16))
    ){
        if(list_element_type_17->mHeap) {
            buffer_append_str(source_47,((char*)(right_value72=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__46->mCValueName,i_48,list$1CVALUEphp_operator_load_element(params_16,i_48)->c_value))));
            if(right_value72) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0); }
        }
        else {
            buffer_append_str(source_47,((char*)(right_value73=xsprintf("%s[%d]=%s;\n",var__46->mCValueName,i_48,list$1CVALUEphp_operator_load_element(params_16,i_48)->c_value))));
            if(right_value73) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0); }
        }
        i_48++;
    }
    buffer_append_str(source_47,"}");
    add_come_code(info,"%s",((char*)(right_value74=buffer_to_string(source_47))));
    if(right_value74) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0); }
    list_type_55=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value75=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"list",info,(_Bool)0))));
    if(right_value75) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value76) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0); }
    list$1sTypephp_push_back(list_type_55->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(list_element_type_17)))));
    if(right_value80) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0); }
    obj_type_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(list_type_55))));
    if(right_value81) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0); }
    fun_name_60="initialize_with_values";
    generics_fun_name_61=(char*)come_increment_ref_count(((char*)(right_value84=string_to_string(((char*)(right_value83=make_generics_function(obj_type_59,(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(fun_name_60)))),info)))))));
    if(right_value82) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0); }
    if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
    if(right_value84) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0); }
    fun_64=map$2charphsFunphp_at(info->funcs,generics_fun_name_61,((void*)0));
    if(fun_64==((void*)0)) {
        err_msg(info,"function not found(%s) at method(%s)\n",generics_fun_name_61,info->come_fun->mName);
        _Bool __result64__ = (_Bool)0;
        return __result64__;
    }
    result_type_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(fun_64->mResultType))));
    if(right_value85) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0); }
    result_type_65->mStatic=(_Bool)0;
    type_66=list_type_55;
    obj_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value86=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value86) { come_call_finalizer(CVALUE_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0); }
    num_string_68=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value88=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value87) { come_call_finalizer(buffer_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value88) { come_call_finalizer(buffer_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(num_string_68,"1");
    type2_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=solve_generics(type_66,type_66,info))));
    if(right_value89) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0); }
    type_name_70=(char*)come_increment_ref_count(((char*)(right_value90=make_type_name_string(type2_69,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    if(right_value90) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0); }
    __dec_obj45=obj_value_67->c_value;
    obj_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s))",type_name_70,type_name_70,((char*)(right_value91=buffer_to_string(num_string_68)))))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
    if(right_value91) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0); }
    if(right_value92) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0); }
    type3_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(type2_69))));
    if(right_value93) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0); }
    type3_71->mPointerNum++;
    type3_71->mHeap=(_Bool)1;
    type2_69->mHeap=(_Bool)1;
    __dec_obj46=obj_value_67->type;
    obj_value_67->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(type2_69))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
    if(right_value94) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj47=obj_value_67->c_value;
    obj_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value95=append_object_to_right_values(obj_value_67->c_value,(struct sType*)come_increment_ref_count(type3_71),info))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
    if(right_value95) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0); }
    obj_value_67->type->mPointerNum++;
    obj_value_67->var=((void*)0);
    come_params_72=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value97=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value96=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
    if(right_value97) { come_call_finalizer(list$1CVALUEphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0); }
    if(list$1sTypephp_operator_load_element(fun_64->mParamTypes,0)->mHeap&&obj_value_67->type->mHeap) {
        __dec_obj48=obj_value_67->c_value;
        obj_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value98=increment_ref_count_object(obj_value_67->type,obj_value_67->c_value,info))));
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
        if(right_value98) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0); }
    }
    list$1CVALUEphp_push_back(come_params_72,(struct CVALUE*)come_increment_ref_count(obj_value_67));
    come_value2_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value99) { come_call_finalizer(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj49=come_value2_76->c_value;
    come_value2_76->c_value=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%d",list$1CVALUEphp_length(params_16)))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
    if(right_value100) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0); }
    come_value2_76->type=((void*)0);
    come_value2_76->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_72,(struct CVALUE*)come_increment_ref_count(come_value2_76));
    come_value3_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value101=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value101) { come_call_finalizer(CVALUE_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj50=come_value3_77->c_value;
    come_value3_77->c_value=(char*)come_increment_ref_count(((char*)(right_value102=xsprintf("%s",var__46->mCValueName))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
    if(right_value102) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0); }
    come_value3_77->type=((void*)0);
    come_value3_77->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_72,(struct CVALUE*)come_increment_ref_count(come_value3_77));
    buf_78=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value104=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value103=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value103) { come_call_finalizer(buffer_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value104) { come_call_finalizer(buffer_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(buf_78,generics_fun_name_61);
    buffer_append_str(buf_78,"(");
    j_79=0;
    for(
    it_80=list$1CVALUEphp_begin((come_params_72));
    !list$1CVALUEphp_end((come_params_72));
    it_80=list$1CVALUEphp_next((come_params_72))
    ){
        buffer_append_str(buf_78,it_80->c_value);
        if(j_79!=list$1CVALUEphp_length(come_params_72)-1) {
            buffer_append_str(buf_78,",");
        }
        j_79++;
    }
    buffer_append_str(buf_78,")");
    come_value4_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value105=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value105) { come_call_finalizer(CVALUE_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj51=come_value4_81->c_value;
    come_value4_81->c_value=(char*)come_increment_ref_count(((char*)(right_value106=buffer_to_string(buf_78))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
    if(right_value106) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0); }
    if(result_type_65->mHeap) {
        __dec_obj52=come_value4_81->c_value;
        come_value4_81->c_value=(char*)come_increment_ref_count(((char*)(right_value108=append_object_to_right_values(((char*)(right_value107=buffer_to_string(buf_78))),(struct sType*)come_increment_ref_count(result_type_65),info))));
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
        if(right_value107) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0); }
        if(right_value108) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0); }
    }
    __dec_obj53=come_value4_81->type;
    come_value4_81->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(result_type_65))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
    if(right_value109) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0); }
    come_value4_81->type->mStatic=(_Bool)0;
    come_value4_81->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value110=buffer_to_string(buf_78))));
    if(right_value110) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0); }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_81));
    _Bool __result68__ = (_Bool)1;
    if(params_16) { come_call_finalizer(list$1CVALUEphp_finalize,params_16, (void*)0, (void*)0, 0, 0, 0); }
    if(list_element_type_17) { come_call_finalizer(sType_finalize,list_element_type_17, (void*)0, (void*)0, 0, 0, 0); }
    if(type_values_40) { come_call_finalizer(sType_finalize,type_values_40, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_45) { var_name_45 = come_decrement_ref_count(var_name_45, (void*)0, (void*)0, 0, 0); }
    if(source_47) { come_call_finalizer(buffer_finalize,source_47, (void*)0, (void*)0, 0, 0, 0); }
    if(list_type_55) { come_call_finalizer(sType_finalize,list_type_55, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_type_59) { come_call_finalizer(sType_finalize,obj_type_59, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_fun_name_61) { generics_fun_name_61 = come_decrement_ref_count(generics_fun_name_61, (void*)0, (void*)0, 0, 0); }
    if(result_type_65) { come_call_finalizer(sType_finalize,result_type_65, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_value_67) { come_call_finalizer(CVALUE_finalize,obj_value_67, (void*)0, (void*)0, 0, 0, 0); }
    if(num_string_68) { come_call_finalizer(buffer_finalize,num_string_68, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_69) { come_call_finalizer(sType_finalize,type2_69, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name_70) { type_name_70 = come_decrement_ref_count(type_name_70, (void*)0, (void*)0, 0, 0); }
    if(type3_71) { come_call_finalizer(sType_finalize,type3_71, (void*)0, (void*)0, 0, 0, 0); }
    if(come_params_72) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_72, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_76) { come_call_finalizer(CVALUE_finalize,come_value2_76, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value3_77) { come_call_finalizer(CVALUE_finalize,come_value3_77, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_78) { come_call_finalizer(buffer_finalize,buf_78, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value4_81) { come_call_finalizer(CVALUE_finalize,come_value4_81, (void*)0, (void*)0, 0, 0, 0); }
    return __result68__;
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1CVALUEph* __result29__ = self;
        if(self) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        return __result29__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_14;
struct list_item$1CVALUEph* prev_it_15;
memset(&it_14, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&prev_it_15, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
            it_14=self->head;
            while(it_14!=((void*)0)) {
                if(1) {
                    if(it_14->item) { come_call_finalizer(CVALUE_finalize,it_14->item, (void*)0, (void*)0, 0, 0, 0); }
                }
                prev_it_15=it_14;
                it_14=it_14->next;
                come_free_object(prev_it_15);
            }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
struct sNode* result_18;
memset(&result_18, 0, sizeof(struct sNode*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sNode* __result30__ = self->it->item;
            return __result30__;
        }
        memset(&result_18,0,sizeof(struct sNode*));
        struct sNode* __result31__ = result_18;
        return __result31__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
        _Bool __result32__ = self->it==((void*)0);
        return __result32__;
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
struct sNode* result_20;
memset(&result_20, 0, sizeof(struct sNode*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sNode* __result33__ = self->it->item;
            return __result33__;
        }
        memset(&result_20,0,sizeof(struct sNode*));
        struct sNode* __result34__ = result_20;
        return __result34__;
}

static struct sType* sType_clone(struct sType* self){
void* right_value32;
struct sType* result_22;
void* right_value35;
struct tuple1$1sTypeph* __dec_obj21;
void* right_value36;
char* __dec_obj22;
void* right_value43;
struct list$1sTypeph* __dec_obj26;
void* right_value51;
struct list$1sNodeph* __dec_obj30;
void* right_value52;
struct list$1sTypeph* __dec_obj31;
void* right_value59;
struct list$1charph* __dec_obj35;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj36;
void* right_value61;
char* __dec_obj37;
memset(&right_value32, 0, sizeof(void*));
memset(&result_22, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sType* __result36__ = (void*)0;
                return __result36__;
            }
            result_22=(struct sType*)come_increment_ref_count(((struct sType*)(right_value32=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
            if(right_value32) { come_call_finalizer(sType_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_22->mClass=self->mClass;
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                __dec_obj21=result_22->mNoSolvedGenericsType;
                result_22->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value35=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                if(right_value35) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                __dec_obj22=result_22->mGenericsName;
                result_22->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value36=string_clone(self->mGenericsName))));
                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0); }
                if(right_value36) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                __dec_obj26=result_22->mGenericsTypes;
                result_22->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
                if(right_value43) { come_call_finalizer(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj30=result_22->mArrayNum;
                result_22->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value51=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
                if(right_value51) { come_call_finalizer(list$1sNodephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_22->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj31=result_22->mParamTypes;
                result_22->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value52=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
                if(right_value52) { come_call_finalizer(list$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj35=result_22->mParamNames;
                result_22->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value59=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
                if(right_value59) { come_call_finalizer(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj36=result_22->mResultType;
                result_22->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0); }
                if(right_value60) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_22->mVarArgs=self->mVarArgs;
            }
            if(self!=((void*)0)) {
                result_22->mUnsigned=self->mUnsigned;
            }
            if(self!=((void*)0)) {
                result_22->mShort=self->mShort;
            }
            if(self!=((void*)0)) {
                result_22->mLong=self->mLong;
            }
            if(self!=((void*)0)) {
                result_22->mLongLong=self->mLongLong;
            }
            if(self!=((void*)0)) {
                result_22->mConstant=self->mConstant;
            }
            if(self!=((void*)0)) {
                result_22->mRegister=self->mRegister;
            }
            if(self!=((void*)0)) {
                result_22->mVolatile=self->mVolatile;
            }
            if(self!=((void*)0)) {
                result_22->mStatic=self->mStatic;
            }
            if(self!=((void*)0)) {
                result_22->mExtern=self->mExtern;
            }
            if(self!=((void*)0)) {
                result_22->mRestrict=self->mRestrict;
            }
            if(self!=((void*)0)) {
                result_22->mImmutable=self->mImmutable;
            }
            if(self!=((void*)0)) {
                result_22->mHeap=self->mHeap;
            }
            if(self!=((void*)0)) {
                result_22->mDummyHeap=self->mDummyHeap;
            }
            if(self!=((void*)0)) {
                result_22->mNoHeap=self->mNoHeap;
            }
            if(self!=((void*)0)) {
                result_22->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(self!=((void*)0)) {
                result_22->mRefference=self->mRefference;
            }
            if(self!=((void*)0)) {
                result_22->mException=self->mException;
            }
            if(self!=((void*)0)) {
                result_22->mPointerNum=self->mPointerNum;
            }
            if(self!=((void*)0)) {
                result_22->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(self!=((void*)0)) {
                result_22->mSizeNum=self->mSizeNum;
            }
            if(self!=((void*)0)) {
                result_22->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(self!=((void*)0)) {
                result_22->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                __dec_obj37=result_22->mOriginalTypeName;
                result_22->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(self->mOriginalTypeName))));
                if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
                if(right_value61) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_22->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(self!=((void*)0)) {
                result_22->mFunctionParam=self->mFunctionParam;
            }
            if(self!=((void*)0)) {
                result_22->mAllocaValue=self->mAllocaValue;
            }
            if(self!=((void*)0)) {
                result_22->mGenericsStruct=self->mGenericsStruct;
            }
            if(self!=((void*)0)) {
                result_22->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(self!=((void*)0)) {
                result_22->mInline=self->mInline;
            }
            struct sType* __result50__ = result_22;
            if(result_22) { come_call_finalizer(sType_finalize,result_22, (void*)0, (void*)0, 0, 0, 1); }
            return __result50__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value33;
struct tuple1$1sTypeph* result_23;
void* right_value34;
struct sType* __dec_obj20;
memset(&right_value33, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value34, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct tuple1$1sTypeph* __result37__ = (void*)0;
                        return __result37__;
                    }
                    result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value33=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                    if(right_value33) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        __dec_obj20=result_23->v1;
                        result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(self->v1))));
                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
                        if(right_value34) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    struct tuple1$1sTypeph* __result38__ = result_23;
                    if(result_23) { come_call_finalizer(tuple1$1sTypephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1); }
                    return __result38__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value37;
void* right_value38;
struct list$1sTypeph* result_24;
struct list_item$1sTypeph* it_25;
void* right_value42;
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_25, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1sTypeph* __result39__ = ((void*)0);
                        return __result39__;
                    }
                    result_24=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value38=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                    if(right_value38) { come_call_finalizer(list$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0); }
                    it_25=self->head;
                    while(it_25!=((void*)0)) {
                        list$1sTypephp_push_back2(result_24,(struct sType*)come_increment_ref_count(((struct sType*)(right_value42=sType_clone(it_25->item)))));
                        if(right_value42) { come_call_finalizer(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0); }
                        it_25=it_25->next;
                    }
                    struct list$1sTypeph* __result41__ = result_24;
                    if(result_24) { come_call_finalizer(list$1sTypephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1); }
                    return __result41__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1sTypeph* __result40__ = self;
                        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result40__;
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value39;
struct list_item$1sTypeph* litem_26;
struct sType* __dec_obj23;
void* right_value40;
struct list_item$1sTypeph* litem_27;
struct sType* __dec_obj24;
void* right_value41;
struct list_item$1sTypeph* litem_28;
struct sType* __dec_obj25;
memset(&right_value39, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value40, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value41, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                            if(self->len==0) {
                                litem_26=((struct list_item$1sTypeph*)(right_value39=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_26->prev=((void*)0);
                                litem_26->next=((void*)0);
                                __dec_obj23=litem_26->item;
                                litem_26->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_26;
                                self->head=litem_26;
                            }
                            else if(self->len==1) {
                                litem_27=((struct list_item$1sTypeph*)(right_value40=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj24=litem_27->item;
                                litem_27->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=((struct list_item$1sTypeph*)(right_value41=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj25=litem_28->item;
                                litem_28->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                            self->len++;
                            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value44;
void* right_value45;
struct list$1sNodeph* result_29;
struct list_item$1sNodeph* it_30;
void* right_value50;
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_30, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value50, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1sNodeph* __result42__ = ((void*)0);
                        return __result42__;
                    }
                    result_29=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value45=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value44=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                    if(right_value45) { come_call_finalizer(list$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0); }
                    it_30=self->head;
                    while(it_30!=((void*)0)) {
                        list$1sNodephp_push_back2(result_29,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=sNodep_clone(it_30->item)))));
                        if(right_value50) { right_value50 = come_decrement_ref_count(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0); } 
                        it_30=it_30->next;
                    }
                    struct list$1sNodeph* __result46__ = result_29;
                    if(result_29) { come_call_finalizer(list$1sNodephp_finalize,result_29, (void*)0, (void*)0, 0, 0, 1); }
                    return __result46__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1sNodeph* __result43__ = self;
                        if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result43__;
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value46;
struct list_item$1sNodeph* litem_31;
struct sNode* __dec_obj27;
void* right_value47;
struct list_item$1sNodeph* litem_32;
struct sNode* __dec_obj28;
void* right_value48;
struct list_item$1sNodeph* litem_33;
struct sNode* __dec_obj29;
memset(&right_value46, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value47, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value48, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                            if(self->len==0) {
                                litem_31=((struct list_item$1sNodeph*)(right_value46=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                litem_31->prev=((void*)0);
                                litem_31->next=((void*)0);
                                __dec_obj27=litem_31->item;
                                litem_31->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0); }
                                self->tail=litem_31;
                                self->head=litem_31;
                            }
                            else if(self->len==1) {
                                litem_32=((struct list_item$1sNodeph*)(right_value47=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                litem_32->prev=self->head;
                                litem_32->next=((void*)0);
                                __dec_obj28=litem_32->item;
                                litem_32->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0); }
                                self->tail=litem_32;
                                self->head->next=litem_32;
                            }
                            else {
                                litem_33=((struct list_item$1sNodeph*)(right_value48=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                litem_33->prev=self->tail;
                                litem_33->next=((void*)0);
                                __dec_obj29=litem_33->item;
                                litem_33->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0); }
                                self->tail->next=litem_33;
                                self->tail=litem_33;
                            }
                            self->len++;
                            if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value49;
struct sNode* result_34;
memset(&right_value49, 0, sizeof(void*));
memset(&result_34, 0, sizeof(struct sNode*)); /* ddd */
                            if(self==(void*)0) {
                                struct sNode* __result44__ = (void*)0;
                                return __result44__;
                            }
                            result_34=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
                            if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                result_34->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(self!=((void*)0)) {
                                result_34->finalize=self->finalize;
                            }
                            if(self!=((void*)0)) {
                                result_34->clone=self->clone;
                            }
                            if(self!=((void*)0)) {
                                result_34->compile=self->compile;
                            }
                            if(self!=((void*)0)) {
                                result_34->sline=self->sline;
                            }
                            if(self!=((void*)0)) {
                                result_34->sname=self->sname;
                            }
                            if(self!=((void*)0)) {
                                result_34->terminated=self->terminated;
                            }
                            struct sNode* __result45__ = result_34;
                            return __result45__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value53;
void* right_value54;
struct list$1charph* result_35;
struct list_item$1charph* it_36;
void* right_value58;
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&result_35, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_36, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value58, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1charph* __result47__ = ((void*)0);
                        return __result47__;
                    }
                    result_35=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                    if(right_value54) { come_call_finalizer(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0); }
                    it_36=self->head;
                    while(it_36!=((void*)0)) {
                        list$1charphp_push_back2(result_35,(char*)come_increment_ref_count(((char*)(right_value58=string_clone(it_36->item)))));
                        if(right_value58) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0); }
                        it_36=it_36->next;
                    }
                    struct list$1charph* __result49__ = result_35;
                    if(result_35) { come_call_finalizer(list$1charphp_finalize,result_35, (void*)0, (void*)0, 0, 0, 1); }
                    return __result49__;
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1charph* __result48__ = self;
                        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result48__;
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value55;
struct list_item$1charph* litem_37;
char* __dec_obj32;
void* right_value56;
struct list_item$1charph* litem_38;
char* __dec_obj33;
void* right_value57;
struct list_item$1charph* litem_39;
char* __dec_obj34;
memset(&right_value55, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value56, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value57, 0, sizeof(void*));
memset(&litem_39, 0, sizeof(struct list_item$1charph*)); /* ddd */
                            if(self->len==0) {
                                litem_37=((struct list_item$1charph*)(right_value55=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                litem_37->prev=((void*)0);
                                litem_37->next=((void*)0);
                                __dec_obj32=litem_37->item;
                                litem_37->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_37;
                                self->head=litem_37;
                            }
                            else if(self->len==1) {
                                litem_38=((struct list_item$1charph*)(right_value56=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                litem_38->prev=self->head;
                                litem_38->next=((void*)0);
                                __dec_obj33=litem_38->item;
                                litem_38->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_38;
                                self->head->next=litem_38;
                            }
                            else {
                                litem_39=((struct list_item$1charph*)(right_value57=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                litem_39->prev=self->tail;
                                litem_39->next=((void*)0);
                                __dec_obj34=litem_39->item;
                                litem_39->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
                                self->tail->next=litem_39;
                                self->tail=litem_39;
                            }
                            self->len++;
                            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
}

static void list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* right_value64;
struct list_item$1sNodeph* litem_41;
struct sNode* __dec_obj39;
void* right_value65;
struct list_item$1sNodeph* litem_42;
struct sNode* __dec_obj40;
void* right_value66;
struct list_item$1sNodeph* litem_43;
struct sNode* __dec_obj41;
memset(&right_value64, 0, sizeof(void*));
memset(&litem_41, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value65, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value66, 0, sizeof(void*));
memset(&litem_43, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
        if(self->len==0) {
            litem_41=((struct list_item$1sNodeph*)(right_value64=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
            litem_41->prev=((void*)0);
            litem_41->next=((void*)0);
            __dec_obj39=litem_41->item;
            litem_41->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0); }
            self->tail=litem_41;
            self->head=litem_41;
        }
        else if(self->len==1) {
            litem_42=((struct list_item$1sNodeph*)(right_value65=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
            litem_42->prev=self->head;
            litem_42->next=((void*)0);
            __dec_obj40=litem_42->item;
            litem_42->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0); }
            self->tail=litem_42;
            self->head->next=litem_42;
        }
        else {
            litem_43=((struct list_item$1sNodeph*)(right_value66=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
            litem_43->prev=self->tail;
            litem_43->next=((void*)0);
            __dec_obj41=litem_43->item;
            litem_43->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0); }
            self->tail->next=litem_43;
            self->tail=litem_43;
        }
        self->len++;
        if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
        int __result51__ = self->len;
        return __result51__;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
struct CVALUE* result_49;
memset(&result_49, 0, sizeof(struct CVALUE*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct CVALUE* __result52__ = self->it->item;
            return __result52__;
        }
        memset(&result_49,0,sizeof(struct CVALUE*));
        struct CVALUE* __result53__ = result_49;
        return __result53__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
        _Bool __result54__ = self->it==((void*)0);
        return __result54__;
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
struct CVALUE* result_51;
memset(&result_51, 0, sizeof(struct CVALUE*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct CVALUE* __result55__ = self->it->item;
            return __result55__;
        }
        memset(&result_51,0,sizeof(struct CVALUE*));
        struct CVALUE* __result56__ = result_51;
        return __result56__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int index){
struct CVALUE* default_value_52;
memset(&default_value_52, 0, sizeof(struct CVALUE*)); /* bbb */
                memset(&default_value_52,0,sizeof(struct CVALUE*));
                struct CVALUE* __result59__ = list$1CVALUEphp_item(self,index,default_value_52);
                return __result59__;
}

static struct CVALUE* list$1CVALUEphp_item(struct list$1CVALUEph* self, int position, struct CVALUE* default_value){
struct list_item$1CVALUEph* it_53;
int i_54;
memset(&it_53, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&i_54, 0, sizeof(int)); /* ddd */
                    if(position<0) {
                        position+=self->len;
                    }
                    it_53=self->head;
                    i_54=0;
                    while(it_53!=((void*)0)) {
                        if(position==i_54) {
                            struct CVALUE* __result57__ = it_53->item;
                            return __result57__;
                        }
                        it_53=it_53->next;
                        i_54++;
                    }
                    struct CVALUE* __result58__ = default_value;
                    return __result58__;
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value77;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj42;
void* right_value78;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj43;
void* right_value79;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj44;
memset(&right_value77, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value78, 0, sizeof(void*));
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value79, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
        if(self->len==0) {
            litem_56=((struct list_item$1sTypeph*)(right_value77=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
            litem_56->prev=((void*)0);
            litem_56->next=((void*)0);
            __dec_obj42=litem_56->item;
            litem_56->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0); }
            self->tail=litem_56;
            self->head=litem_56;
        }
        else if(self->len==1) {
            litem_57=((struct list_item$1sTypeph*)(right_value78=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
            litem_57->prev=self->head;
            litem_57->next=((void*)0);
            __dec_obj43=litem_57->item;
            litem_57->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
            self->tail=litem_57;
            self->head->next=litem_57;
        }
        else {
            litem_58=((struct list_item$1sTypeph*)(right_value79=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
            litem_58->prev=self->tail;
            litem_58->next=((void*)0);
            __dec_obj44=litem_58->item;
            litem_58->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
            self->tail->next=litem_58;
            self->tail=litem_58;
        }
        self->len++;
        if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_62;
int it_63;
memset(&hash_62, 0, sizeof(int)); /* ddd */
memset(&it_63, 0, sizeof(int)); /* ddd */
        hash_62=string_get_hash_key(((char*)key))%self->size;
        it_63=hash_62;
        while((_Bool)1) {
            if(self->item_existance[it_63]) {
                if(charp_equals(self->keys[it_63],key)) {
                    struct sFun* __result60__ = self->items[it_63];
                    return __result60__;
                }
                it_63++;
                if(it_63>=self->size) {
                    it_63=0;
                }
                else if(it_63==hash_62) {
                    struct sFun* __result61__ = default_value;
                    return __result61__;
                }
            }
            else {
                struct sFun* __result62__ = default_value;
                return __result62__;
            }
        }
        struct sFun* __result63__ = default_value;
        return __result63__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_73;
memset(&default_value_73, 0, sizeof(struct sType*)); /* bbb */
        memset(&default_value_73,0,sizeof(struct sType*));
        struct sType* __result67__ = list$1sTypephp_item(self,index,default_value_73);
        return __result67__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_74;
int i_75;
memset(&it_74, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&i_75, 0, sizeof(int)); /* ddd */
            if(position<0) {
                position+=self->len;
            }
            it_74=self->head;
            i_75=0;
            while(it_74!=((void*)0)) {
                if(position==i_75) {
                    struct sType* __result65__ = it_74->item;
                    return __result65__;
                }
                it_74=it_74->next;
                i_75++;
            }
            struct sType* __result66__ = default_value;
            return __result66__;
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
    int __result69__ = self->sline;
    return __result69__;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* right_value111;
memset(&right_value111, 0, sizeof(void*));
    char* __result70__ = ((char*)(right_value111=__builtin_string(self->sname)));
    return __result70__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
struct list$1sNodeph* __dec_obj54;
void* right_value112;
char* __dec_obj55;
memset(&right_value112, 0, sizeof(void*));
    __dec_obj54=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
    self->sline=info->sline;
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value112=__builtin_string(info->sname))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
    if(right_value112) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0); }
    struct sTupleNode* __result71__ = self;
    if(self) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(tuple_elements) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1); }
    return __result71__;
}

static void sTupleNode_finalize(struct sTupleNode* self){
        if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
            if(self->tuple_elements) { come_call_finalizer(list$1sNodephp_finalize,self->tuple_elements, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
        }
}

_Bool sTupleNode_terminated(){
    _Bool __result72__ = (_Bool)0;
    return __result72__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_82;
void* right_value113;
void* right_value114;
struct list$1sTypeph* tuple_types_83;
void* right_value115;
void* right_value116;
struct list$1CVALUEph* tuple_values_84;
struct sNode* it_85;
void* right_value117;
struct CVALUE* come_value_86;
void* right_value121;
void* right_value122;
void* right_value123;
void* right_value124;
void* right_value125;
struct sType* type_88;
struct sType* it_90;
void* right_value135;
void* right_value136;
struct CVALUE* obj_value_93;
void* right_value137;
void* right_value138;
struct buffer* num_string_94;
void* right_value139;
struct sType* type2_95;
void* right_value140;
char* type_name_96;
void* right_value141;
void* right_value142;
char* __dec_obj66;
void* right_value143;
struct sType* type3_97;
void* right_value144;
struct sType* __dec_obj67;
void* right_value145;
char* __dec_obj68;
void* right_value146;
struct sType* obj_type_98;
char* fun_name_99;
void* right_value147;
void* right_value148;
void* right_value149;
char* generics_fun_name_100;
struct sFun* fun_101;
void* right_value150;
struct sType* result_type_102;
void* right_value151;
void* right_value152;
struct list$1CVALUEph* come_params_103;
void* right_value153;
char* __dec_obj69;
int i_104;
struct CVALUE* it_105;
void* right_value157;
struct CVALUE* come_value_107;
void* right_value158;
char* __dec_obj72;
void* right_value159;
void* right_value160;
struct buffer* buf_108;
int j_109;
struct CVALUE* it_110;
void* right_value161;
struct CVALUE* come_value2_111;
void* right_value162;
char* __dec_obj73;
void* right_value163;
void* right_value164;
char* __dec_obj74;
void* right_value165;
struct sType* __dec_obj75;
void* right_value166;
memset(&tuple_elements_82, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&tuple_types_83, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&tuple_values_84, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&it_85, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value117, 0, sizeof(void*));
memset(&come_value_86, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&type_88, 0, sizeof(struct sType*)); /* ddd */
memset(&it_90, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&obj_value_93, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&num_string_94, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value139, 0, sizeof(void*));
memset(&type2_95, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value140, 0, sizeof(void*));
memset(&type_name_96, 0, sizeof(char*)); /* ddd */
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&type3_97, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&obj_type_98, 0, sizeof(struct sType*)); /* ddd */
memset(&fun_name_99, 0, sizeof(char*)); /* ddd */
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&generics_fun_name_100, 0, sizeof(char*)); /* ddd */
memset(&fun_101, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value150, 0, sizeof(void*));
memset(&result_type_102, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&come_params_103, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value153, 0, sizeof(void*));
memset(&i_104, 0, sizeof(int)); /* ddd */
memset(&it_105, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value157, 0, sizeof(void*));
memset(&come_value_107, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&buf_108, 0, sizeof(struct buffer*)); /* ddd */
memset(&j_109, 0, sizeof(int)); /* ddd */
memset(&it_110, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value161, 0, sizeof(void*));
memset(&come_value2_111, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
    tuple_elements_82=self->tuple_elements;
    tuple_types_83=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value114=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value113=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
    if(right_value114) { come_call_finalizer(list$1sTypephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
    tuple_values_84=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value116=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value115=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
    if(right_value116) { come_call_finalizer(list$1CVALUEphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_85=list$1sNodephp_begin((tuple_elements_82));
    !list$1sNodephp_end((tuple_elements_82));
    it_85=list$1sNodephp_next((tuple_elements_82))
    ){
        if(!it_85->compile(it_85->_protocol_obj,info)) {
            _Bool __result73__ = (_Bool)0;
            return __result73__;
        }
        come_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))));
        if(right_value117) { come_call_finalizer(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_84,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=CVALUE_clone(come_value_86)))));
        if(right_value121) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0); }
        list$1sTypephp_push_back(tuple_types_83,(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(come_value_86->type)))));
        if(right_value122) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0); }
        if(come_value_86) { come_call_finalizer(CVALUE_finalize,come_value_86, (void*)0, (void*)0, 0, 0, 0); }
    }
    type_88=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value123=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),((char*)(right_value124=xsprintf("tuple%d",list$1sTypephp_length(tuple_types_83)))),info,(_Bool)0))));
    if(right_value123) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value124) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0); }
    if(right_value125) { come_call_finalizer(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0); }
    for(
    it_90=list$1sTypephp_begin((tuple_types_83));
    !list$1sTypephp_end((tuple_types_83));
    it_90=list$1sTypephp_next((tuple_types_83))
    ){
        list$1sTypephp_push_back(type_88->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sTypep_clone(it_90)))));
        if(right_value135) { come_call_finalizer(sTypep_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
    }
    obj_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value136) { come_call_finalizer(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
    num_string_94=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value138=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value137=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value137) { come_call_finalizer(buffer_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value138) { come_call_finalizer(buffer_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(num_string_94,"1");
    type2_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=solve_generics(type_88,type_88,info))));
    if(right_value139) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
    type_name_96=(char*)come_increment_ref_count(((char*)(right_value140=make_type_name_string(type2_95,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    if(right_value140) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0); }
    __dec_obj66=obj_value_93->c_value;
    obj_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value142=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s))",type_name_96,type_name_96,((char*)(right_value141=buffer_to_string(num_string_94)))))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0); }
    if(right_value141) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0); }
    if(right_value142) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0); }
    type3_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(type2_95))));
    if(right_value143) { come_call_finalizer(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0); }
    type3_97->mPointerNum++;
    type3_97->mHeap=(_Bool)1;
    type2_95->mHeap=(_Bool)1;
    __dec_obj67=obj_value_93->type;
    obj_value_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(type2_95))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0); }
    if(right_value144) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj68=obj_value_93->c_value;
    obj_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value145=append_object_to_right_values(obj_value_93->c_value,(struct sType*)come_increment_ref_count(type3_97),info))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0); }
    if(right_value145) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0); }
    obj_value_93->type->mPointerNum++;
    obj_value_93->var=((void*)0);
    obj_type_98=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(type2_95))));
    if(right_value146) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
    fun_name_99="initialize";
    generics_fun_name_100=(char*)come_increment_ref_count(((char*)(right_value149=string_to_string(((char*)(right_value148=make_generics_function(obj_type_98,(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(fun_name_99)))),info)))))));
    if(right_value147) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0); }
    if(right_value148) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0); }
    if(right_value149) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0); }
    fun_101=map$2charphsFunphp_at(info->funcs,generics_fun_name_100,((void*)0));
    if(fun_101==((void*)0)) {
        err_msg(info,"function not found(%s) at method(%s)\n",generics_fun_name_100,info->come_fun->mName);
        _Bool __result84__ = (_Bool)0;
        return __result84__;
    }
    result_type_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(fun_101->mResultType))));
    if(right_value150) { come_call_finalizer(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0); }
    result_type_102->mStatic=(_Bool)0;
    come_params_103=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value152=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value151=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
    if(right_value152) { come_call_finalizer(list$1CVALUEphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0); }
    if(list$1sTypephp_operator_load_element(fun_101->mParamTypes,0)->mHeap&&obj_value_93->type->mHeap) {
        __dec_obj69=obj_value_93->c_value;
        obj_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value153=increment_ref_count_object(obj_value_93->type,obj_value_93->c_value,info))));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0); }
        if(right_value153) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0); }
    }
    list$1CVALUEphp_push_back(come_params_103,(struct CVALUE*)come_increment_ref_count(obj_value_93));
    i_104=1;
    for(
    it_105=list$1CVALUEphp_begin((tuple_values_84));
    !list$1CVALUEphp_end((tuple_values_84));
    it_105=list$1CVALUEphp_next((tuple_values_84))
    ){
        come_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=CVALUEp_clone(it_105))));
        if(right_value157) { come_call_finalizer(CVALUEp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0); }
        if(list$1sTypephp_operator_load_element(fun_101->mParamTypes,i_104)&&list$1sTypephp_operator_load_element(fun_101->mParamTypes,i_104)->mHeap&&come_value_107->type->mHeap) {
            __dec_obj72=come_value_107->c_value;
            come_value_107->c_value=(char*)come_increment_ref_count(((char*)(right_value158=increment_ref_count_object(come_value_107->type,come_value_107->c_value,info))));
            if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0); }
            if(right_value158) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0); }
        }
        list$1CVALUEphp_push_back(come_params_103,(struct CVALUE*)come_increment_ref_count(come_value_107));
        i_104++;
        if(come_value_107) { come_call_finalizer(CVALUE_finalize,come_value_107, (void*)0, (void*)0, 0, 0, 0); }
    }
    buf_108=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value159) { come_call_finalizer(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value160) { come_call_finalizer(buffer_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(buf_108,generics_fun_name_100);
    buffer_append_str(buf_108,"(");
    j_109=0;
    for(
    it_110=list$1CVALUEphp_begin((come_params_103));
    !list$1CVALUEphp_end((come_params_103));
    it_110=list$1CVALUEphp_next((come_params_103))
    ){
        buffer_append_str(buf_108,it_110->c_value);
        if(j_109!=list$1CVALUEphp_length(come_params_103)-1) {
            buffer_append_str(buf_108,",");
        }
        j_109++;
    }
    buffer_append_str(buf_108,")");
    come_value2_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value161) { come_call_finalizer(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj73=come_value2_111->c_value;
    come_value2_111->c_value=(char*)come_increment_ref_count(((char*)(right_value162=buffer_to_string(buf_108))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0); }
    if(right_value162) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0); }
    if(result_type_102->mHeap) {
        __dec_obj74=come_value2_111->c_value;
        come_value2_111->c_value=(char*)come_increment_ref_count(((char*)(right_value164=append_object_to_right_values(((char*)(right_value163=buffer_to_string(buf_108))),(struct sType*)come_increment_ref_count(result_type_102),info))));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0); }
        if(right_value163) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0); }
        if(right_value164) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0); }
    }
    __dec_obj75=come_value2_111->type;
    come_value2_111->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(result_type_102))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
    if(right_value165) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_111->type->mStatic=(_Bool)0;
    come_value2_111->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value166=buffer_to_string(buf_108))));
    if(right_value166) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0); }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_111));
    _Bool __result87__ = (_Bool)1;
    if(tuple_types_83) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_83, (void*)0, (void*)0, 0, 0, 0); }
    if(tuple_values_84) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_84, (void*)0, (void*)0, 0, 0, 0); }
    if(type_88) { come_call_finalizer(sType_finalize,type_88, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_value_93) { come_call_finalizer(CVALUE_finalize,obj_value_93, (void*)0, (void*)0, 0, 0, 0); }
    if(num_string_94) { come_call_finalizer(buffer_finalize,num_string_94, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_95) { come_call_finalizer(sType_finalize,type2_95, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name_96) { type_name_96 = come_decrement_ref_count(type_name_96, (void*)0, (void*)0, 0, 0); }
    if(type3_97) { come_call_finalizer(sType_finalize,type3_97, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_type_98) { come_call_finalizer(sType_finalize,obj_type_98, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_fun_name_100) { generics_fun_name_100 = come_decrement_ref_count(generics_fun_name_100, (void*)0, (void*)0, 0, 0); }
    if(result_type_102) { come_call_finalizer(sType_finalize,result_type_102, (void*)0, (void*)0, 0, 0, 0); }
    if(come_params_103) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_103, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_108) { come_call_finalizer(buffer_finalize,buf_108, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_111) { come_call_finalizer(CVALUE_finalize,come_value2_111, (void*)0, (void*)0, 0, 0, 0); }
    return __result87__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* right_value118;
struct CVALUE* result_87;
void* right_value119;
char* __dec_obj56;
void* right_value120;
struct sType* __dec_obj57;
memset(&right_value118, 0, sizeof(void*));
memset(&result_87, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
            if(self==(void*)0) {
                struct CVALUE* __result74__ = (void*)0;
                return __result74__;
            }
            result_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
            if(right_value118) { come_call_finalizer(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                __dec_obj56=result_87->c_value;
                result_87->c_value=(char*)come_increment_ref_count(((char*)(right_value119=string_clone(self->c_value))));
                if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
                if(right_value119) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj57=result_87->type;
                result_87->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(self->type))));
                if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
                if(right_value120) { come_call_finalizer(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_87->var=self->var;
            }
            struct CVALUE* __result75__ = result_87;
            if(result_87) { come_call_finalizer(CVALUE_finalize,result_87, (void*)0, (void*)0, 0, 0, 1); }
            return __result75__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
        int __result76__ = self->len;
        return __result76__;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_89;
memset(&result_89, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct sType* __result77__ = self->it->item;
            return __result77__;
        }
        memset(&result_89,0,sizeof(struct sType*));
        struct sType* __result78__ = result_89;
        return __result78__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
        _Bool __result79__ = self->it==((void*)0);
        return __result79__;
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_91;
memset(&result_91, 0, sizeof(struct sType*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct sType* __result80__ = self->it->item;
            return __result80__;
        }
        memset(&result_91,0,sizeof(struct sType*));
        struct sType* __result81__ = result_91;
        return __result81__;
}

static struct sType* sTypep_clone(struct sType* self){
void* right_value126;
struct sType* result_92;
void* right_value127;
struct tuple1$1sTypeph* __dec_obj58;
void* right_value128;
char* __dec_obj59;
void* right_value129;
struct list$1sTypeph* __dec_obj60;
void* right_value130;
struct list$1sNodeph* __dec_obj61;
void* right_value131;
struct list$1sTypeph* __dec_obj62;
void* right_value132;
struct list$1charph* __dec_obj63;
void* right_value133;
struct tuple1$1sTypeph* __dec_obj64;
void* right_value134;
char* __dec_obj65;
memset(&right_value126, 0, sizeof(void*));
memset(&result_92, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sType* __result82__ = (void*)0;
                return __result82__;
            }
            result_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
            if(right_value126) { come_call_finalizer(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_92->mClass=self->mClass;
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                __dec_obj58=result_92->mNoSolvedGenericsType;
                result_92->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value127=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
                if(right_value127) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                __dec_obj59=result_92->mGenericsName;
                result_92->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value128=string_clone(self->mGenericsName))));
                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
                if(right_value128) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                __dec_obj60=result_92->mGenericsTypes;
                result_92->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value129=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
                if(right_value129) { come_call_finalizer(list$1sTypephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj61=result_92->mArrayNum;
                result_92->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value130=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
                if(right_value130) { come_call_finalizer(list$1sNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_92->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj62=result_92->mParamTypes;
                result_92->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value131=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0); }
                if(right_value131) { come_call_finalizer(list$1sTypephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj63=result_92->mParamNames;
                result_92->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value132=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
                if(right_value132) { come_call_finalizer(list$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj64=result_92->mResultType;
                result_92->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value133=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
                if(right_value133) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_92->mVarArgs=self->mVarArgs;
            }
            if(self!=((void*)0)) {
                result_92->mUnsigned=self->mUnsigned;
            }
            if(self!=((void*)0)) {
                result_92->mShort=self->mShort;
            }
            if(self!=((void*)0)) {
                result_92->mLong=self->mLong;
            }
            if(self!=((void*)0)) {
                result_92->mLongLong=self->mLongLong;
            }
            if(self!=((void*)0)) {
                result_92->mConstant=self->mConstant;
            }
            if(self!=((void*)0)) {
                result_92->mRegister=self->mRegister;
            }
            if(self!=((void*)0)) {
                result_92->mVolatile=self->mVolatile;
            }
            if(self!=((void*)0)) {
                result_92->mStatic=self->mStatic;
            }
            if(self!=((void*)0)) {
                result_92->mExtern=self->mExtern;
            }
            if(self!=((void*)0)) {
                result_92->mRestrict=self->mRestrict;
            }
            if(self!=((void*)0)) {
                result_92->mImmutable=self->mImmutable;
            }
            if(self!=((void*)0)) {
                result_92->mHeap=self->mHeap;
            }
            if(self!=((void*)0)) {
                result_92->mDummyHeap=self->mDummyHeap;
            }
            if(self!=((void*)0)) {
                result_92->mNoHeap=self->mNoHeap;
            }
            if(self!=((void*)0)) {
                result_92->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(self!=((void*)0)) {
                result_92->mRefference=self->mRefference;
            }
            if(self!=((void*)0)) {
                result_92->mException=self->mException;
            }
            if(self!=((void*)0)) {
                result_92->mPointerNum=self->mPointerNum;
            }
            if(self!=((void*)0)) {
                result_92->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(self!=((void*)0)) {
                result_92->mSizeNum=self->mSizeNum;
            }
            if(self!=((void*)0)) {
                result_92->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(self!=((void*)0)) {
                result_92->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                __dec_obj65=result_92->mOriginalTypeName;
                result_92->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value134=string_clone(self->mOriginalTypeName))));
                if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
                if(right_value134) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_92->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(self!=((void*)0)) {
                result_92->mFunctionParam=self->mFunctionParam;
            }
            if(self!=((void*)0)) {
                result_92->mAllocaValue=self->mAllocaValue;
            }
            if(self!=((void*)0)) {
                result_92->mGenericsStruct=self->mGenericsStruct;
            }
            if(self!=((void*)0)) {
                result_92->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(self!=((void*)0)) {
                result_92->mInline=self->mInline;
            }
            struct sType* __result83__ = result_92;
            if(result_92) { come_call_finalizer(sType_finalize,result_92, (void*)0, (void*)0, 0, 0, 1); }
            return __result83__;
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
void* right_value154;
struct CVALUE* result_106;
void* right_value155;
char* __dec_obj70;
void* right_value156;
struct sType* __dec_obj71;
memset(&right_value154, 0, sizeof(void*));
memset(&result_106, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
            if(self==(void*)0) {
                struct CVALUE* __result85__ = (void*)0;
                return __result85__;
            }
            result_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
            if(right_value154) { come_call_finalizer(CVALUE_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                __dec_obj70=result_106->c_value;
                result_106->c_value=(char*)come_increment_ref_count(((char*)(right_value155=string_clone(self->c_value))));
                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0); }
                if(right_value155) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj71=result_106->type;
                result_106->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(self->type))));
                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
                if(right_value156) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_106->var=self->var;
            }
            struct CVALUE* __result86__ = result_106;
            if(result_106) { come_call_finalizer(CVALUE_finalize,result_106, (void*)0, (void*)0, 0, 0, 1); }
            return __result86__;
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
    int __result88__ = self->sline;
    return __result88__;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* right_value167;
memset(&right_value167, 0, sizeof(void*));
    char* __result89__ = ((char*)(right_value167=__builtin_string(self->sname)));
    return __result89__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
struct list$1sNodeph* __dec_obj76;
struct list$1sNodeph* __dec_obj77;
void* right_value168;
char* __dec_obj78;
memset(&right_value168, 0, sizeof(void*));
    __dec_obj76=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0); }
    __dec_obj77=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0); }
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string(info->sname))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0); }
    if(right_value168) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0); }
    struct sMapNode* __result90__ = self;
    if(self) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(map_key_elements) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1); }
    if(map_elements) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1); }
    return __result90__;
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

_Bool sMapNode_terminated(){
    _Bool __result91__ = (_Bool)0;
    return __result91__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_112;
struct list$1sNodeph* map_elements_113;
void* right_value169;
void* right_value170;
struct list$1CVALUEph* key_params_114;
void* right_value171;
void* right_value172;
struct list$1CVALUEph* element_params_115;
struct sType* map_key_type_116;
struct sType* map_element_type_117;
int i_118;
struct sNode* key_elements_122;
struct sNode* elements_123;
void* right_value173;
struct CVALUE* come_value_124;
void* right_value174;
struct CVALUE* come_value2_125;
void* right_value175;
struct sType* __dec_obj79;
void* right_value176;
struct sType* __dec_obj80;
static int map_value_num_126=0;
void* right_value177;
struct sType* key_type_values_127;
void* right_value178;
void* right_value179;
char* var_name_128;
struct sVar* var__129;
void* right_value180;
void* right_value181;
struct sType* element_type_values_130;
void* right_value182;
void* right_value183;
char* var_name2_131;
struct sVar* var2__132;
void* right_value184;
void* right_value185;
void* right_value186;
struct buffer* source_133;
int i_134;
struct CVALUE* key_param_135;
struct CVALUE* element_param_136;
void* right_value187;
void* right_value188;
void* right_value189;
void* right_value190;
void* right_value191;
void* right_value192;
void* right_value193;
struct sType* map_type_137;
void* right_value194;
void* right_value195;
void* right_value196;
struct sType* obj_type_138;
char* fun_name_139;
void* right_value197;
void* right_value198;
void* right_value199;
char* generics_fun_name_140;
struct sFun* fun_141;
void* right_value200;
struct sType* result_type_142;
struct sType* type_143;
void* right_value201;
struct CVALUE* obj_value_144;
void* right_value202;
void* right_value203;
struct buffer* num_string_145;
void* right_value204;
struct sType* type2_146;
void* right_value205;
char* type_name_147;
void* right_value206;
void* right_value207;
char* __dec_obj81;
void* right_value208;
struct sType* type3_148;
void* right_value209;
struct sType* __dec_obj82;
void* right_value210;
char* __dec_obj83;
void* right_value211;
void* right_value212;
struct list$1CVALUEph* come_params_149;
void* right_value213;
char* __dec_obj84;
void* right_value214;
struct CVALUE* come_value2_150;
void* right_value215;
char* __dec_obj85;
void* right_value216;
struct CVALUE* come_value3_151;
void* right_value217;
char* __dec_obj86;
void* right_value218;
struct CVALUE* come_value4_152;
void* right_value219;
char* __dec_obj87;
void* right_value220;
void* right_value221;
struct buffer* buf_153;
int j_154;
struct CVALUE* it_155;
void* right_value222;
struct CVALUE* come_value5_156;
void* right_value223;
char* __dec_obj88;
void* right_value224;
void* right_value225;
char* __dec_obj89;
void* right_value226;
struct sType* __dec_obj90;
void* right_value227;
memset(&map_key_elements_112, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&map_elements_113, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&key_params_114, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&element_params_115, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&map_key_type_116, 0, sizeof(struct sType*)); /* bbb */
memset(&map_element_type_117, 0, sizeof(struct sType*)); /* bbb */
memset(&i_118, 0, sizeof(int)); /* ddd */
memset(&key_elements_122, 0, sizeof(struct sNode*)); /* ddd */
memset(&elements_123, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value173, 0, sizeof(void*));
memset(&come_value_124, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value174, 0, sizeof(void*));
memset(&come_value2_125, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&key_type_values_127, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&var_name_128, 0, sizeof(char*)); /* ddd */
memset(&var__129, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&element_type_values_130, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&var_name2_131, 0, sizeof(char*)); /* ddd */
memset(&var2__132, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&source_133, 0, sizeof(struct buffer*)); /* ddd */
memset(&i_134, 0, sizeof(int)); /* ddd */
memset(&key_param_135, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&element_param_136, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&map_type_137, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&obj_type_138, 0, sizeof(struct sType*)); /* ddd */
memset(&fun_name_139, 0, sizeof(char*)); /* ddd */
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&generics_fun_name_140, 0, sizeof(char*)); /* ddd */
memset(&fun_141, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value200, 0, sizeof(void*));
memset(&result_type_142, 0, sizeof(struct sType*)); /* ddd */
memset(&type_143, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value201, 0, sizeof(void*));
memset(&obj_value_144, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&num_string_145, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value204, 0, sizeof(void*));
memset(&type2_146, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value205, 0, sizeof(void*));
memset(&type_name_147, 0, sizeof(char*)); /* ddd */
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&type3_148, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&come_params_149, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&come_value2_150, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&come_value3_151, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&come_value4_152, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&buf_153, 0, sizeof(struct buffer*)); /* ddd */
memset(&j_154, 0, sizeof(int)); /* ddd */
memset(&it_155, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value222, 0, sizeof(void*));
memset(&come_value5_156, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    map_key_elements_112=self->map_key_elements;
    map_elements_113=self->map_elements;
    key_params_114=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value170=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value169=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
    if(right_value170) { come_call_finalizer(list$1CVALUEphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0); }
    element_params_115=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value172=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value171=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
    if(right_value172) { come_call_finalizer(list$1CVALUEphp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0); }
    for(
    i_118=0;
    i_118<list$1sNodephp_length(map_key_elements_112);
    i_118++
    ){
        key_elements_122=list$1sNodephp_operator_load_element(map_key_elements_112,i_118);
        elements_123=list$1sNodephp_operator_load_element(map_elements_113,i_118);
        if(!key_elements_122->compile(key_elements_122->_protocol_obj,info)) {
            _Bool __result96__ = (_Bool)0;
            return __result96__;
        }
        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=get_value_from_stack(-1,info))));
        if(right_value173) { come_call_finalizer(CVALUE_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(key_params_114,(struct CVALUE*)come_increment_ref_count(come_value_124));
        if(!elements_123->compile(elements_123->_protocol_obj,info)) {
            _Bool __result97__ = (_Bool)0;
            if(come_value_124) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0); }
            return __result97__;
        }
        come_value2_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))));
        if(right_value174) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(element_params_115,(struct CVALUE*)come_increment_ref_count(come_value2_125));
        __dec_obj79=map_key_type_116;
        map_key_type_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(come_value_124->type))));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0); }
        if(right_value175) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj80=map_element_type_117;
        map_element_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(come_value2_125->type))));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0); }
        if(right_value176) { come_call_finalizer(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0); }
        if(come_value_124) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value2_125) { come_call_finalizer(CVALUE_finalize,come_value2_125, (void*)0, (void*)0, 0, 0, 0); }
    }
    key_type_values_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(map_key_type_116))));
    if(right_value177) { come_call_finalizer(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0); }
    list$1sNodephp_push_back(key_type_values_127->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=create_int_node(list$1CVALUEphp_length(key_params_114),info)))));
    if(right_value178) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0); } 
    key_type_values_127->mHeap=(_Bool)0;
    var_name_128=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("__map_keys%d__",++map_value_num_126))));
    if(right_value179) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0); }
    add_variable_to_table(var_name_128,key_type_values_127,info);
    var__129=get_variable_from_table(info->lv_table,var_name_128);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value180=make_define_var(key_type_values_127,var__129->mCValueName,info,(_Bool)0))));
    if(right_value180) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0); }
    element_type_values_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_clone(map_element_type_117))));
    if(right_value181) { come_call_finalizer(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0); }
    list$1sNodephp_push_back(element_type_values_130->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=create_int_node(list$1CVALUEphp_length(element_params_115),info)))));
    if(right_value182) { right_value182 = come_decrement_ref_count(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0); } 
    element_type_values_130->mHeap=(_Bool)0;
    var_name2_131=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("__map_element%d__",map_value_num_126))));
    if(right_value183) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0); }
    add_variable_to_table(var_name2_131,element_type_values_130,info);
    var2__132=get_variable_from_table(info->lv_table,var_name2_131);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value184=make_define_var(element_type_values_130,var2__132->mCValueName,info,(_Bool)0))));
    if(right_value184) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0); }
    source_133=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value186=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value185=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value185) { come_call_finalizer(buffer_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value186) { come_call_finalizer(buffer_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(source_133,"{");
    for(
    i_134=0;
    i_134<list$1CVALUEphp_length(key_params_114);
    i_134++
    ){
        key_param_135=list$1CVALUEphp_operator_load_element(key_params_114,i_134);
        element_param_136=list$1CVALUEphp_operator_load_element(element_params_115,i_134);
        if(map_key_type_116->mHeap) {
            buffer_append_str(source_133,((char*)(right_value187=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__129->mCValueName,i_134,key_param_135->c_value))));
            if(right_value187) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0); }
        }
        else {
            buffer_append_str(source_133,((char*)(right_value188=xsprintf("%s[%d]=%s;\n",var__129->mCValueName,i_134,key_param_135->c_value))));
            if(right_value188) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0); }
        }
        if(map_element_type_117->mHeap) {
            buffer_append_str(source_133,((char*)(right_value189=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__132->mCValueName,i_134,element_param_136->c_value))));
            if(right_value189) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0); }
        }
        else {
            buffer_append_str(source_133,((char*)(right_value190=xsprintf("%s[%d]=%s;\n",var2__132->mCValueName,i_134,element_param_136->c_value))));
            if(right_value190) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0); }
        }
    }
    buffer_append_str(source_133,"}");
    add_come_code(info,"%s",((char*)(right_value191=buffer_to_string(source_133))));
    if(right_value191) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0); }
    map_type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value192=(struct sType*)come_calloc(1, sizeof(struct sType)*(1))))),"map",info,(_Bool)0))));
    if(right_value192) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value193) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0); }
    list$1sTypephp_push_back(map_type_137->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(map_key_type_116)))));
    if(right_value194) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0); }
    list$1sTypephp_push_back(map_type_137->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(map_element_type_117)))));
    if(right_value195) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0); }
    obj_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(map_type_137))));
    if(right_value196) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0); }
    fun_name_139="initialize_with_values";
    generics_fun_name_140=(char*)come_increment_ref_count(((char*)(right_value199=string_to_string(((char*)(right_value198=make_generics_function(obj_type_138,(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string(fun_name_139)))),info)))))));
    if(right_value197) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0); }
    if(right_value198) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0); }
    if(right_value199) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0); }
    fun_141=map$2charphsFunphp_at(info->funcs,generics_fun_name_140,((void*)0));
    if(fun_141==((void*)0)) {
        err_msg(info,"function not found(%s) at method(%s)\n",generics_fun_name_140,info->come_fun->mName);
        _Bool __result98__ = (_Bool)0;
        return __result98__;
    }
    result_type_142=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_clone(fun_141->mResultType))));
    if(right_value200) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0); }
    result_type_142->mStatic=(_Bool)0;
    type_143=map_type_137;
    obj_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value201) { come_call_finalizer(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0); }
    num_string_145=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value203=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value202=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value202) { come_call_finalizer(buffer_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value203) { come_call_finalizer(buffer_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(num_string_145,"1");
    type2_146=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=solve_generics(type_143,type_143,info))));
    if(right_value204) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0); }
    type_name_147=(char*)come_increment_ref_count(((char*)(right_value205=make_type_name_string(type2_146,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    if(right_value205) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0); }
    __dec_obj81=obj_value_144->c_value;
    obj_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s))",type_name_147,type_name_147,((char*)(right_value206=buffer_to_string(num_string_145)))))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0); }
    if(right_value206) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0); }
    if(right_value207) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0); }
    type3_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(type2_146))));
    if(right_value208) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0); }
    type3_148->mPointerNum++;
    type3_148->mHeap=(_Bool)1;
    type2_146->mHeap=(_Bool)1;
    __dec_obj82=obj_value_144->type;
    obj_value_144->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_clone(type2_146))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0); }
    if(right_value209) { come_call_finalizer(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj83=obj_value_144->c_value;
    obj_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value210=append_object_to_right_values(obj_value_144->c_value,(struct sType*)come_increment_ref_count(type3_148),info))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0); }
    if(right_value210) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0); }
    obj_value_144->type->mPointerNum++;
    obj_value_144->var=((void*)0);
    come_params_149=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value212=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value211=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
    if(right_value212) { come_call_finalizer(list$1CVALUEphp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0); }
    if(list$1sTypephp_operator_load_element(fun_141->mParamTypes,0)->mHeap&&obj_value_144->type->mHeap) {
        __dec_obj84=obj_value_144->c_value;
        obj_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value213=increment_ref_count_object(obj_value_144->type,obj_value_144->c_value,info))));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0); }
        if(right_value213) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0); }
    }
    list$1CVALUEphp_push_back(come_params_149,(struct CVALUE*)come_increment_ref_count(obj_value_144));
    come_value2_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value214) { come_call_finalizer(CVALUE_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj85=come_value2_150->c_value;
    come_value2_150->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%d",list$1CVALUEphp_length(key_params_114)))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0); }
    if(right_value215) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0); }
    come_value2_150->type=((void*)0);
    come_value2_150->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_149,(struct CVALUE*)come_increment_ref_count(come_value2_150));
    come_value3_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value216) { come_call_finalizer(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj86=come_value3_151->c_value;
    come_value3_151->c_value=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("%s",var__129->mCValueName))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
    if(right_value217) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0); }
    come_value3_151->type=((void*)0);
    come_value3_151->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_149,(struct CVALUE*)come_increment_ref_count(come_value3_151));
    come_value4_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value218) { come_call_finalizer(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj87=come_value4_152->c_value;
    come_value4_152->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s",var2__132->mCValueName))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0); }
    if(right_value219) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0); }
    come_value4_152->type=((void*)0);
    come_value4_152->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_149,(struct CVALUE*)come_increment_ref_count(come_value4_152));
    buf_153=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value221=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value220=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value220) { come_call_finalizer(buffer_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value221) { come_call_finalizer(buffer_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0); }
    buffer_append_str(buf_153,generics_fun_name_140);
    buffer_append_str(buf_153,"(");
    j_154=0;
    for(
    it_155=list$1CVALUEphp_begin((come_params_149));
    !list$1CVALUEphp_end((come_params_149));
    it_155=list$1CVALUEphp_next((come_params_149))
    ){
        buffer_append_str(buf_153,it_155->c_value);
        if(j_154!=list$1CVALUEphp_length(come_params_149)-1) {
            buffer_append_str(buf_153,",");
        }
        j_154++;
    }
    buffer_append_str(buf_153,")");
    come_value5_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value222) { come_call_finalizer(CVALUE_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj88=come_value5_156->c_value;
    come_value5_156->c_value=(char*)come_increment_ref_count(((char*)(right_value223=buffer_to_string(buf_153))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
    if(right_value223) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0); }
    if(result_type_142->mHeap) {
        __dec_obj89=come_value5_156->c_value;
        come_value5_156->c_value=(char*)come_increment_ref_count(((char*)(right_value225=append_object_to_right_values(((char*)(right_value224=buffer_to_string(buf_153))),(struct sType*)come_increment_ref_count(result_type_142),info))));
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0); }
        if(right_value224) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0); }
        if(right_value225) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0); }
    }
    __dec_obj90=come_value5_156->type;
    come_value5_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(result_type_142))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0); }
    if(right_value226) { come_call_finalizer(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0); }
    come_value5_156->type->mStatic=(_Bool)0;
    come_value5_156->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value227=buffer_to_string(buf_153))));
    if(right_value227) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0); }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_156));
    _Bool __result99__ = (_Bool)1;
    if(key_params_114) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_114, (void*)0, (void*)0, 0, 0, 0); }
    if(element_params_115) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_115, (void*)0, (void*)0, 0, 0, 0); }
    if(map_key_type_116) { come_call_finalizer(sType_finalize,map_key_type_116, (void*)0, (void*)0, 0, 0, 0); }
    if(map_element_type_117) { come_call_finalizer(sType_finalize,map_element_type_117, (void*)0, (void*)0, 0, 0, 0); }
    if(key_type_values_127) { come_call_finalizer(sType_finalize,key_type_values_127, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_128) { var_name_128 = come_decrement_ref_count(var_name_128, (void*)0, (void*)0, 0, 0); }
    if(element_type_values_130) { come_call_finalizer(sType_finalize,element_type_values_130, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name2_131) { var_name2_131 = come_decrement_ref_count(var_name2_131, (void*)0, (void*)0, 0, 0); }
    if(source_133) { come_call_finalizer(buffer_finalize,source_133, (void*)0, (void*)0, 0, 0, 0); }
    if(map_type_137) { come_call_finalizer(sType_finalize,map_type_137, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_type_138) { come_call_finalizer(sType_finalize,obj_type_138, (void*)0, (void*)0, 0, 0, 0); }
    if(generics_fun_name_140) { generics_fun_name_140 = come_decrement_ref_count(generics_fun_name_140, (void*)0, (void*)0, 0, 0); }
    if(result_type_142) { come_call_finalizer(sType_finalize,result_type_142, (void*)0, (void*)0, 0, 0, 0); }
    if(obj_value_144) { come_call_finalizer(CVALUE_finalize,obj_value_144, (void*)0, (void*)0, 0, 0, 0); }
    if(num_string_145) { come_call_finalizer(buffer_finalize,num_string_145, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_146) { come_call_finalizer(sType_finalize,type2_146, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name_147) { type_name_147 = come_decrement_ref_count(type_name_147, (void*)0, (void*)0, 0, 0); }
    if(type3_148) { come_call_finalizer(sType_finalize,type3_148, (void*)0, (void*)0, 0, 0, 0); }
    if(come_params_149) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_149, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_150) { come_call_finalizer(CVALUE_finalize,come_value2_150, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value3_151) { come_call_finalizer(CVALUE_finalize,come_value3_151, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value4_152) { come_call_finalizer(CVALUE_finalize,come_value4_152, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_153) { come_call_finalizer(buffer_finalize,buf_153, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value5_156) { come_call_finalizer(CVALUE_finalize,come_value5_156, (void*)0, (void*)0, 0, 0, 0); }
    return __result99__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
        int __result92__ = self->len;
        return __result92__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int index){
struct sNode* default_value_119;
memset(&default_value_119, 0, sizeof(struct sNode*)); /* bbb */
            memset(&default_value_119,0,sizeof(struct sNode*));
            struct sNode* __result95__ = list$1sNodephp_item(self,index,default_value_119);
            return __result95__;
}

static struct sNode* list$1sNodephp_item(struct list$1sNodeph* self, int position, struct sNode* default_value){
struct list_item$1sNodeph* it_120;
int i_121;
memset(&it_120, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&i_121, 0, sizeof(int)); /* ddd */
                if(position<0) {
                    position+=self->len;
                }
                it_120=self->head;
                i_121=0;
                while(it_120!=((void*)0)) {
                    if(position==i_121) {
                        struct sNode* __result93__ = it_120->item;
                        return __result93__;
                    }
                    it_120=it_120->next;
                    i_121++;
                }
                struct sNode* __result94__ = default_value;
                return __result94__;
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
    int __result100__ = self->sline;
    return __result100__;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* right_value228;
memset(&right_value228, 0, sizeof(void*));
    char* __result101__ = ((char*)(right_value228=__builtin_string(self->sname)));
    return __result101__;
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* right_value234;
struct sStrNode* result_162;
void* right_value235;
char* __dec_obj91;
void* right_value236;
char* __dec_obj92;
memset(&right_value234, 0, sizeof(void*));
memset(&result_162, 0, sizeof(struct sStrNode*)); /* ddd */
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sStrNode* __result102__ = (void*)0;
                return __result102__;
            }
            result_162=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value234=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1)))));
            if(right_value234) { come_call_finalizer(sStrNode_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj91=result_162->value;
                result_162->value=(char*)come_increment_ref_count(((char*)(right_value235=string_clone(self->value))));
                if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0); }
                if(right_value235) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_162->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj92=result_162->sname;
                result_162->sname=(char*)come_increment_ref_count(((char*)(right_value236=string_clone(self->sname))));
                if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0); }
                if(right_value236) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0); }
            }
            struct sStrNode* __result103__ = result_162;
            if(result_162) { come_call_finalizer(sStrNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 1); }
            return __result103__;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* right_value240;
struct sCharNode* result_169;
void* right_value241;
char* __dec_obj93;
memset(&right_value240, 0, sizeof(void*));
memset(&result_169, 0, sizeof(struct sCharNode*)); /* ddd */
memset(&right_value241, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sCharNode* __result105__ = (void*)0;
                    return __result105__;
                }
                result_169=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value240=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1)))));
                if(right_value240) { come_call_finalizer(sCharNode_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_169->value=self->value;
                }
                if(self!=((void*)0)) {
                    result_169->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj93=result_169->sname;
                    result_169->sname=(char*)come_increment_ref_count(((char*)(right_value241=string_clone(self->sname))));
                    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
                    if(right_value241) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0); }
                }
                struct sCharNode* __result106__ = result_169;
                if(result_169) { come_call_finalizer(sCharNode_finalize,result_169, (void*)0, (void*)0, 0, 0, 1); }
                return __result106__;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* right_value245;
struct sWCharNode* result_179;
void* right_value246;
char* __dec_obj94;
memset(&right_value245, 0, sizeof(void*));
memset(&result_179, 0, sizeof(struct sWCharNode*)); /* ddd */
memset(&right_value246, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sWCharNode* __result108__ = (void*)0;
                    return __result108__;
                }
                result_179=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value245=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1)))));
                if(right_value245) { come_call_finalizer(sWCharNode_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)) {
                    result_179->value=self->value;
                }
                if(self!=((void*)0)) {
                    result_179->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj94=result_179->sname;
                    result_179->sname=(char*)come_increment_ref_count(((char*)(right_value246=string_clone(self->sname))));
                    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0); }
                    if(right_value246) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0); }
                }
                struct sWCharNode* __result109__ = result_179;
                if(result_179) { come_call_finalizer(sWCharNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 1); }
                return __result109__;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* right_value253;
struct sWStringNode* result_194;
void* right_value254;
unsigned int* __dec_obj95;
void* right_value255;
char* __dec_obj96;
memset(&right_value253, 0, sizeof(void*));
memset(&result_194, 0, sizeof(struct sWStringNode*)); /* ddd */
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sWStringNode* __result111__ = (void*)0;
                return __result111__;
            }
            result_194=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value253=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1)))));
            if(right_value253) { come_call_finalizer(sWStringNode_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj95=result_194->value;
                result_194->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value254=(unsigned int*)come_memdup(self->value))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0); }
                if(right_value254) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_194->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj96=result_194->sname;
                result_194->sname=(char*)come_increment_ref_count(((char*)(right_value255=string_clone(self->sname))));
                if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0); }
                if(right_value255) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0); }
            }
            struct sWStringNode* __result112__ = result_194;
            if(result_194) { come_call_finalizer(sWStringNode_finalize,result_194, (void*)0, (void*)0, 0, 0, 1); }
            return __result112__;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* right_value278;
struct sMapNode* result_209;
void* right_value279;
struct list$1sNodeph* __dec_obj100;
void* right_value280;
struct list$1sNodeph* __dec_obj101;
void* right_value281;
char* __dec_obj102;
memset(&right_value278, 0, sizeof(void*));
memset(&result_209, 0, sizeof(struct sMapNode*)); /* ddd */
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct sMapNode* __result117__ = (void*)0;
                        return __result117__;
                    }
                    result_209=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value278=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1)))));
                    if(right_value278) { come_call_finalizer(sMapNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
                        __dec_obj100=result_209->map_key_elements;
                        result_209->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value279=list$1sNodephp_clone(self->map_key_elements))));
                        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0); }
                        if(right_value279) { come_call_finalizer(list$1sNodephp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
                        __dec_obj101=result_209->map_elements;
                        result_209->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value280=list$1sNodephp_clone(self->map_elements))));
                        if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0); }
                        if(right_value280) { come_call_finalizer(list$1sNodephp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    if(self!=((void*)0)) {
                        result_209->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj102=result_209->sname;
                        result_209->sname=(char*)come_increment_ref_count(((char*)(right_value281=string_clone(self->sname))));
                        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0); }
                        if(right_value281) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0); }
                    }
                    struct sMapNode* __result118__ = result_209;
                    if(result_209) { come_call_finalizer(sMapNode_finalize,result_209, (void*)0, (void*)0, 0, 0, 1); }
                    return __result118__;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* right_value286;
struct sListNode* result_212;
void* right_value287;
struct list$1sNodeph* __dec_obj103;
void* right_value288;
char* __dec_obj104;
memset(&right_value286, 0, sizeof(void*));
memset(&result_212, 0, sizeof(struct sListNode*)); /* ddd */
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sListNode* __result120__ = (void*)0;
                    return __result120__;
                }
                result_212=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value286=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1)))));
                if(right_value286) { come_call_finalizer(sListNode_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
                    __dec_obj103=result_212->list_elements;
                    result_212->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value287=list$1sNodephp_clone(self->list_elements))));
                    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0); }
                    if(right_value287) { come_call_finalizer(list$1sNodephp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_212->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj104=result_212->sname;
                    result_212->sname=(char*)come_increment_ref_count(((char*)(right_value288=string_clone(self->sname))));
                    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0); }
                    if(right_value288) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0); }
                }
                struct sListNode* __result121__ = result_212;
                if(result_212) { come_call_finalizer(sListNode_finalize,result_212, (void*)0, (void*)0, 0, 0, 1); }
                return __result121__;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* right_value296;
struct sTupleNode* result_217;
void* right_value297;
struct list$1sNodeph* __dec_obj105;
void* right_value298;
char* __dec_obj106;
memset(&right_value296, 0, sizeof(void*));
memset(&result_217, 0, sizeof(struct sTupleNode*)); /* ddd */
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sTupleNode* __result124__ = (void*)0;
            return __result124__;
        }
        result_217=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value296=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1)))));
        if(right_value296) { come_call_finalizer(sTupleNode_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
            __dec_obj105=result_217->tuple_elements;
            result_217->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value297=list$1sNodephp_clone(self->tuple_elements))));
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0); }
            if(right_value297) { come_call_finalizer(list$1sNodephp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_217->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj106=result_217->sname;
            result_217->sname=(char*)come_increment_ref_count(((char*)(right_value298=string_clone(self->sname))));
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0); }
            if(right_value298) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0); }
        }
        struct sTupleNode* __result125__ = result_217;
        if(result_217) { come_call_finalizer(sTupleNode_finalize,result_217, (void*)0, (void*)0, 0, 0, 1); }
        return __result125__;
}

