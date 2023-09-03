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
typedef __builtin_va_list va_list;
typedef long int off_t;
typedef long int ssize_t;
typedef struct _G_fpos_t fpos_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long double _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
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
typedef long int suseconds_t;
typedef long int __fd_mask;
struct anonymous_typeX8
{
    long int __fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX8 fd_set;
typedef long int fd_mask;
typedef int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
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
typedef char* string;
struct buffer
{
    char* buf;
    int len;
    int size;
};
extern _Bool gComelang;
extern _Bool gGC;
struct sType;struct tuple2$_char$ph_sType$ph
{
    char* v1;
    struct sType* v2;
};
struct list_item$p_tuple2$_char$ph_sType$ph
{
    struct tuple2$_char$ph_sType$ph* item;
    struct list_item$p_tuple2$_char$ph_sType$ph* prev;
    struct list_item$p_tuple2$_char$ph_sType$ph* next;
};
struct list$_tuple2$_char$ph_sType$ph
{
    struct list_item$p_tuple2$_char$ph_sType$ph* head;
    struct list_item$p_tuple2$_char$ph_sType$ph* tail;
    int len;
    struct list_item$p_tuple2$_char$ph_sType$ph* it;
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
    struct list$_tuple2$_char$ph_sType$ph* mFields;
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
struct list_item$p_sType$ph
{
    struct sType* item;
    struct list_item$p_sType$ph* prev;
    struct list_item$p_sType$ph* next;
};
struct list$_sType$ph
{
    struct list_item$p_sType$ph* head;
    struct list_item$p_sType$ph* tail;
    int len;
    struct list_item$p_sType$ph* it;
};
struct list_item$p_sNode$ph
{
    struct sNode* item;
    struct list_item$p_sNode$ph* prev;
    struct list_item$p_sNode$ph* next;
};
struct list$_sNode$ph
{
    struct list_item$p_sNode$ph* head;
    struct list_item$p_sNode$ph* tail;
    int len;
    struct list_item$p_sNode$ph* it;
};
struct list_item$p_char$ph
{
    char* item;
    struct list_item$p_char$ph* prev;
    struct list_item$p_char$ph* next;
};
struct list$_char$ph
{
    struct list_item$p_char$ph* head;
    struct list_item$p_char$ph* tail;
    int len;
    struct list_item$p_char$ph* it;
};
struct tuple1$_sType$ph
{
    struct sType* v1;
};
struct sType
{
    struct sClass* mClass;
    char* mGenericsName;
    struct list$_sType$ph* mGenericsTypes;
    struct list$_sNode$ph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$_sType$ph* mParamTypes;
    struct list$_char$ph* mParamNames;
    struct tuple1$_sType$ph* mResultType;
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
    struct list$_sType$ph* mParamTypes;
    struct list$_char$ph* mParamNames;
    struct list$_char$ph* mParamDefaultParametors;
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
    struct list$_char$ph* mGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$_sType$ph* mParamTypes;
    struct list$_char$ph* mParamNames;
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
struct sVarTable;struct list_item$p_char$p
{
    char* item;
    struct list_item$p_char$p* prev;
    struct list_item$p_char$p* next;
};
struct list$ph_char$p
{
    struct list_item$p_char$p* head;
    struct list_item$p_char$p* tail;
    int len;
    struct list_item$p_char$p* it;
};
struct map$_char$ph_sVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct sVarTable
{
    struct map$_char$ph_sVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct sBlock
{
    struct list$_sNode$ph* mNodes;
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
struct map$_char$ph_sFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct map$_char$ph_sGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct map$_char$ph_sClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct map$_char$ph_sType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct list_item$p_sRightValueObject$ph
{
    struct sRightValueObject* item;
    struct list_item$p_sRightValueObject$ph* prev;
    struct list_item$p_sRightValueObject$ph* next;
};
struct list$_sRightValueObject$ph
{
    struct list_item$p_sRightValueObject$ph* head;
    struct list_item$p_sRightValueObject$ph* tail;
    int len;
    struct list_item$p_sRightValueObject$ph* it;
};
struct list_item$p_CVALUE$ph
{
    struct CVALUE* item;
    struct list_item$p_CVALUE$ph* prev;
    struct list_item$p_CVALUE$ph* next;
};
struct list$_CVALUE$ph
{
    struct list_item$p_CVALUE$ph* head;
    struct list_item$p_CVALUE$ph* tail;
    int len;
    struct list_item$p_CVALUE$ph* it;
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
    struct map$_char$ph_sFun$ph* funcs;
    struct map$_char$ph_sGenericsFun$ph* generics_funcs;
    struct map$_char$ph_sClass$ph* classes;
    struct map$_char$ph_sType$ph* types;
    struct map$_char$ph_sClass$ph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$_sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$_sType$ph* method_generics_types;
    struct list$_CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool last_statment_is_return;
    struct list$_char$ph* generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$_sType$ph* param_types;
    struct list$_char$ph* param_names;
    _Bool define_struct;
};
struct tuple2$ph_int$_bool$
{
    int v1;
    _Bool v2;
};
struct tuple2$ph_sType$ph_bool$
{
    struct sType* v1;
    _Bool v2;
};
struct tuple5$ph_list$_sType$ph_list$_char$ph_list$_char$ph_bool$_bool$
{
    struct list$_sType$ph* v1;
    struct list$_char$ph* v2;
    struct list$_char$ph* v3;
    _Bool v4;
    _Bool v5;
};
struct tuple3$ph_sFun$p_char$ph_bool$
{
    struct sFun* v1;
    char* v2;
    _Bool v3;
};
struct tuple2$ph_char$ph_bool$
{
    char* v1;
    _Bool v2;
};
struct tuple2$_sType$ph_char$ph
{
    struct sType* v1;
    char* v2;
};
struct tuple2$ph_tuple2$_sType$ph_char$ph_bool$
{
    struct tuple2$_sType$ph_char$ph* v1;
    _Bool v2;
};
struct tuple2$ph_sBlock$ph_bool$
{
    struct sBlock* v1;
    _Bool v2;
};
struct tuple2$ph_sNode$ph_bool$
{
    struct sNode* v1;
    _Bool v2;
};

/* header function */
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int fclose(struct _IO_FILE* __stream);
struct _IO_FILE* tmpfile();
char* tmpnam(char anonymous_var_name1[20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx);
int fflush(struct _IO_FILE* __stream);
int fflush_unlocked(struct _IO_FILE* __stream);
struct _IO_FILE* fopen(const char* __filename, const char* __modes);
struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fdopen(int __fd, const char* __modes);
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
long int __getdelim(char** __lineptr, int* __n, int __delimiter, struct _IO_FILE* __stream);
long int getdelim(char** __lineptr, int* __n, int __delimiter, struct _IO_FILE* __stream);
long int getline(char** __lineptr, int* __n, struct _IO_FILE* __stream);
int fputs(const char* __s, struct _IO_FILE* __stream);
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE* __stream);
int fread(void* __ptr, int __size, int __n, struct _IO_FILE* __stream);
int fwrite(const void* __ptr, int __size, int __n, struct _IO_FILE* __s);
int fread_unlocked(void* __ptr, int __size, int __n, struct _IO_FILE* __stream);
int fwrite_unlocked(const void* __ptr, int __size, int __n, struct _IO_FILE* __stream);
int fseek(struct _IO_FILE* __stream, long int __off, int __whence);
long int ftell(struct _IO_FILE* __stream);
void rewind(struct _IO_FILE* __stream);
int fseeko(struct _IO_FILE* __stream, long int __off, int __whence);
long int ftello(struct _IO_FILE* __stream);
int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);
int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);
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
int strcspn(const char* __s, const char* __reject);
int strspn(const char* __s, const char* __accept);
char* strpbrk(const char* __s, const char* __accept);
char* strstr(const char* __haystack, const char* __needle);
char* strtok(char* __s, const char* __delim);
char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strtok_r(char* __s, const char* __delim, char** __save_ptr);
int strlen(const char* __s);
int strnlen(const char* __string, int __maxlen);
char* strerror(int __errnum);
int __xpg_strerror_r(int __errnum, char* __buf, int __buflen);
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
char* __stpcpy(char* __dest, const char* __src);
char* stpcpy(char* __dest, const char* __src);
char* __stpncpy(char* __dest, const char* __src, int __n);
char* stpncpy(char* __dest, const char* __src, int __n);
int __ctype_get_mb_cur_max();
double atof(const char* __nptr);
int atoi(const char* __nptr);
long int atol(const char* __nptr);
int atoll(const char* __nptr);
double strtod(const char* __nptr, char** __endptr);
float strtof(const char* __nptr, char** __endptr);
long double strtold(const char* __nptr, char** __endptr);
long int strtol(const char* __nptr, char** __endptr, int __base);
unsigned long int strtoul(const char* __nptr, char** __endptr, int __base);
int strtoq(const char* __nptr, char** __endptr, int __base);
unsigned int strtouq(const char* __nptr, char** __endptr, int __base);
int strtoll(const char* __nptr, char** __endptr, int __base);
unsigned int strtoull(const char* __nptr, char** __endptr, int __base);
char* l64a(long int __n);
long int a64l(const char* __s);
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
int putenv(char* __string);
int setenv(const char* __name, const char* __value, int __replace);
int unsetenv(const char* __name);
int clearenv();
char* mktemp(char* __template);
int mkstemp(char* __template);
int mkstemps(char* __template, int __suffixlen);
char* mkdtemp(char* __template);
int system(const char* __command);
char* realpath(const char* __name, char* __resolved);
void* bsearch(const void* __key, const void* __base, int __nmemb, int __size, int (*__compar)(const void*,const void*));
void qsort(void* __base, int __nmemb, int __size, int (*__compar)(const void*,const void*));
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
int getloadavg(double* __loadavg, int __nelem);
static inline void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}
static void ncfree(void* mem);
static void* come_calloc(int count, int size);
static void* come_increment_ref_count(void* mem);
static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free);
static void come_free_object(void* mem);
static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free);
static void* nccalloc(int nmemb, int size);
static void* come_memdup(void* block);
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
int come_main_v1(int argc, char** argv);
int come_main_v2(int argc, char** argv);
void come_init_v2();
void come_final_v2();
void err_msg(struct sInfo* info, char* msg, ...);
struct tuple2$ph_int$_bool$* transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, struct sInfo* info, _Bool heap);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$_sType$ph* param_types, struct list$_char$ph* param_names, struct list$_char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, struct sInfo* info);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, struct sInfo* info, _Bool no_pointer);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
void come_init_v3();
void come_final_v3();
char* header_function(struct sFun* fun, struct sInfo* info);
struct tuple2$ph_int$_bool$* transpile_v3(struct sInfo* info);
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
struct tuple2$ph_sType$ph_bool$* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
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
struct tuple5$ph_list$_sType$ph_list$_char$ph_list$_char$ph_bool$_bool$* parse_params(struct sInfo* info);
struct tuple3$ph_sFun$p_char$ph_bool$* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple3$ph_sFun$p_char$ph_bool$* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple3$ph_sFun$p_char$ph_bool$* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple3$ph_sFun$p_char$ph_bool$* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple3$ph_sFun$p_char$ph_bool$* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$ph_char$ph_bool$* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
struct tuple2$ph_char$ph_bool$* parse_word(struct sInfo* info, _Bool no_check_err);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple2$ph_int$_bool$* expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple2$ph_tuple2$_sType$ph_char$ph_bool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);
struct tuple2$ph_sBlock$ph_bool$* parse_block(struct sInfo* info, _Bool no_block_level);
struct tuple2$ph_int$_bool$* transpile_block(struct sBlock* block, struct list$_sType$ph* param_types, struct list$_char$ph* param_names, struct sInfo* info, _Bool no_var_table);
void arrange_stack(struct sInfo* info, int top);
struct tuple2$ph_sNode$ph_bool$* parse_function(struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* expression_v5(struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* expression_node_v1(struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* expression_node_v99(struct sInfo* info);
struct tuple2$ph_int$_bool$* transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* post_position_operator_v5(struct sNode* node, struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* expression_node_v98(struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* parse_tuple(struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* expression_v13(struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* post_op_v13(struct sNode* node, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* parse_struct(char* type_name, struct sInfo* info);
char* get_none_generics_name(char* class_name);
struct tuple2$ph_sNode$ph_bool$* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sInfo* info);
void output_struct(struct sClass* klass, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* parse_union(char* type_name, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* parse_enum(char* type_name, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* post_position_operator_v18(struct sNode* node, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* post_position_operator2_v18(struct sNode* node, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* post_position_operator2_v19(struct sNode* node, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* post_position_operator3(struct sNode* node, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct tuple2$ph_sNode$ph_bool$* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
int main(int argc, char** argv);

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
memset(&finalizer_7, 0, sizeof(void (*)()));
memset(&ref_count_8, 0, sizeof(int*));
memset(&count_9, 0, sizeof(int));
memset(&finalizer_10, 0, sizeof(void (*)()));
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









































int come_main_v1(int argc, char** argv){
    puts("HELLO COMELANG");
    int __result__ = 0;
    return __result__;
}

int main(int argc, char** argv){
    int __result__ = come_main_v2(argc,argv);
    return __result__;
}

