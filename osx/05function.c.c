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
struct sReturnNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sDerefferenceNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sRefferenceNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sReverseNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sFunCallNode
{
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    int sline;
    char* sname;
};
struct map$2charphCVALUEph
{
    char** keys;
    _Bool* item_existance;
    struct CVALUE** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};
struct sCastNode
{
    struct sType* mType;
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sParenNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sLogicalDenial
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sMinusNode2
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sPlusPlusNode2
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sMinusMinusNode2
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sComplement
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sNormalBlock
{
    struct sBlock* mBlock;
    int sline;
    char* sname;
};
struct sGlobalVariable
{
    struct sType* type;
    char* name;
    struct sNode* right_node;
    int sline;
    char* sname;
    char* array_initializer;
};
struct sExternalGlobalVariable
{
    struct sType* type;
    char* name;
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

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);

static void sReturnNode_finalize(struct sReturnNode* self);
int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info);

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info);

_Bool sReturnNode_terminated();

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);

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
static void CVALUE_finalize(struct CVALUE* self);
struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, struct sInfo* info);

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info);

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info);

_Bool sDerefferenceNode_terminated();

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);

static void sRefferenceNode_finalize(struct sRefferenceNode* self);
int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info);

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info);

_Bool sRefferenceNode_terminated();

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);

static void sReverseNode_finalize(struct sReverseNode* self);
int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info);

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info);

_Bool sReverseNode_terminated();

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephphp_push_back2(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
int sFunCallNode_sline(struct sFunCallNode* self, struct sInfo* info);

char* sFunCallNode_sname(struct sFunCallNode* self, struct sInfo* info);

_Bool sFunCallNode_terminated();

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index);
static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct map$2charphCVALUEph* map$2charphCVALUEphp_initialize(struct map$2charphCVALUEph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self);
static void CVALUEp_finalize(struct CVALUE* self);
static void map$2charphCVALUEphp_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item);
static void map$2charphCVALUEphp_rehash(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEphp_begin(struct map$2charphCVALUEph* self);
static _Bool map$2charphCVALUEphp_end(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEphp_next(struct map$2charphCVALUEph* self);
static struct CVALUE* map$2charphCVALUEphp_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value);
static void list$1charpp_remove(struct list$1charp* self, char* item);
static void list$1charpp_delete(struct list$1charp* self, int head, int tail);
static void list$1charpp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void list$1charpp_push_back(struct list$1charp* self, char* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int index);
static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value);
static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key);
static int map$2charphCVALUEphp_length(struct map$2charphCVALUEph* self);
static int list$1charphp_length(struct list$1charph* self);
static void list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);

static void sCastNode_finalize(struct sCastNode* self);
int sCastNode_sline(struct sCastNode* self, struct sInfo* info);

char* sCastNode_sname(struct sCastNode* self, struct sInfo* info);

_Bool sCastNode_terminated();

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);

static void sParenNode_finalize(struct sParenNode* self);
int sParenNode_sline(struct sParenNode* self, struct sInfo* info);

char* sParenNode_sname(struct sParenNode* self, struct sInfo* info);

_Bool sParenNode_terminated();

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);

struct sNode* parse_function_call(char* fun_name, struct sInfo* info);

static void list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);

static void sLogicalDenial_finalize(struct sLogicalDenial* self);
_Bool sLogicalDenial_terminated();

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);

int sLogicalDenial_sline(struct sLogicalDenial* self, struct sInfo* info);

char* sLogicalDenial_sname(struct sLogicalDenial* self, struct sInfo* info);

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);

static void sMinusNode2_finalize(struct sMinusNode2* self);
_Bool sMinusNode2_terminated();

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);

int sMinusNode2_sline(struct sMinusNode2* self, struct sInfo* info);

char* sMinusNode2_sname(struct sMinusNode2* self, struct sInfo* info);

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
_Bool sPlusPlusNode2_terminated();

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);

int sPlusPlusNode2_sline(struct sPlusPlusNode2* self, struct sInfo* info);

char* sPlusPlusNode2_sname(struct sPlusPlusNode2* self, struct sInfo* info);

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
_Bool sMinusMinusNode2_terminated();

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info);

int sMinusMinusNode2_sline(struct sMinusMinusNode2* self, struct sInfo* info);

char* sMinusMinusNode2_sname(struct sMinusMinusNode2* self, struct sInfo* info);

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info);

static void sComplement_finalize(struct sComplement* self);
_Bool sComplement_terminated();

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);

int sComplement_sline(struct sComplement* self, struct sInfo* info);

char* sComplement_sname(struct sComplement* self, struct sInfo* info);

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info);

static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVarp_finalize(struct sVar* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct sVar* sVarp_clone(struct sVar* self);
static void sNormalBlock_finalize(struct sNormalBlock* self);
_Bool sNormalBlock_terminated();

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info);

int sNormalBlock_sline(struct sNormalBlock* self, struct sInfo* info);

char* sNormalBlock_sname(struct sNormalBlock* self, struct sInfo* info);

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info);

static void sGlobalVariable_finalize(struct sGlobalVariable* self);
int sGlobalVariable_sline(struct sGlobalVariable* self, struct sInfo* info);

char* sGlobalVariable_sname(struct sGlobalVariable* self, struct sInfo* info);

_Bool sGlobalVariable_terminated();

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info);

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct sType* type, char* name, struct sInfo* info);

static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self);
int sExternalGlobalVariable_sline(struct sExternalGlobalVariable* self, struct sInfo* info);

char* sExternalGlobalVariable_sname(struct sExternalGlobalVariable* self, struct sInfo* info);

_Bool sExternalGlobalVariable_terminated();

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info);

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self);
static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self);
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






void come_init_v5(){
come_release_malloced_mem();
}

void come_final_v5(){
come_release_malloced_mem();
}

struct sNode* parse_global_variable(struct sInfo* info){
void* right_value371;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* result_type_302;
char* var_name_303;
_Bool err_304;
struct sNode* right_node_305;
char* array_initializer_306;
void* right_value372;
void* right_value373;
struct buffer* buf_307;
_Bool squort_308;
_Bool dquort_309;
int nest_310;
void* right_value374;
char* __dec_obj172;
void* right_value375;
struct sNode* __dec_obj173;
void* right_value376;
void* right_value377;
struct sNode* _inf_value15;
struct sExternalGlobalVariable* _inf_obj_value15;
void* right_value382;
void* right_value383;
void* right_value384;
struct sNode* _inf_value16;
struct sGlobalVariable* _inf_obj_value16;
void* right_value391;
memset(&right_value371, 0, sizeof(void*));
memset(&result_type_302, 0, sizeof(struct sType*)); /* ccc */
memset(&var_name_303, 0, sizeof(char*)); /* ccc */
memset(&err_304, 0, sizeof(_Bool)); /* ccc */
memset(&result_type_302, 0, sizeof(struct sType*)); /* eee */
memset(&var_name_303, 0, sizeof(char*)); /* eee */
memset(&err_304, 0, sizeof(_Bool)); /* eee */
memset(&right_node_305, 0, sizeof(struct sNode*)); /* ddd */
memset(&array_initializer_306, 0, sizeof(char*)); /* ddd */
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&buf_307, 0, sizeof(struct buffer*)); /* ddd */
memset(&squort_308, 0, sizeof(_Bool)); /* ddd */
memset(&dquort_309, 0, sizeof(_Bool)); /* ddd */
memset(&nest_310, 0, sizeof(int)); /* ddd */
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
    multiple_assgin_var4=((struct tuple3$3sTypephcharphbool*)(right_value371=parse_type(info,(_Bool)1,(_Bool)1)));
    result_type_302=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
    var_name_303=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
    err_304=multiple_assgin_var4->v3;
    if(right_value371) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0); }
    if(!err_304) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    right_node_305=((void*)0);
    array_initializer_306=((void*)0);
    if(*info->p==61) {
        info->p++;
        skip_spaces_and_lf(info);
        if(*info->p==123) {
            buf_307=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value373=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value372=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
            if(right_value372) { come_call_finalizer(buffer_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value373) { come_call_finalizer(buffer_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0); }
            buffer_append_char(buf_307,*info->p);
            info->p++;
            squort_308=(_Bool)0;
            dquort_309=(_Bool)0;
            nest_310=1;
            while(1) {
                if(*info->p==0) {
                    err_msg(info,"unexpected source end in array initiailizer");
                    exit(2);
                }
                else if(*info->p==92) {
                    buffer_append_char(buf_307,*info->p);
                    info->p++;
                    buffer_append_char(buf_307,*info->p);
                    info->p++;
                }
                else if(!squort_308&&*info->p==34) {
                    buffer_append_char(buf_307,*info->p);
                    info->p++;
                    dquort_309=!dquort_309;
                }
                else if(!dquort_309&&*info->p==39) {
                    buffer_append_char(buf_307,*info->p);
                    info->p++;
                    squort_308=!squort_308;
                }
                else if(squort_308||dquort_309) {
                    buffer_append_char(buf_307,*info->p);
                    info->p++;
                }
                else if(*info->p==123) {
                    nest_310++;
                    buffer_append_char(buf_307,*info->p);
                    info->p++;
                }
                else if(*info->p==125) {
                    nest_310--;
                    buffer_append_char(buf_307,*info->p);
                    info->p++;
                    if(nest_310==0) {
                        skip_spaces_and_lf(info);
                        break;
                    }
                }
                else {
                    buffer_append_char(buf_307,*info->p);
                    info->p++;
                }
            }
            __dec_obj172=array_initializer_306;
            array_initializer_306=(char*)come_increment_ref_count(((char*)(right_value374=buffer_to_string(buf_307))));
            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0); }
            if(right_value374) { right_value374 = come_decrement_ref_count(right_value374, (void*)0, (void*)0, 1, 0); }
            if(buf_307) { come_call_finalizer(buffer_finalize,buf_307, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            parse_sharp_v5(info);
            __dec_obj173=right_node_305;
            right_node_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=expression_v13(info))));
            if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0); }
            if(right_value375) { right_value375 = come_decrement_ref_count(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0); } 
            parse_sharp_v5(info);
        }
    }
    if(result_type_302->mExtern) {
        if(right_node_305) {
            err_msg(info,"invalid right value");
            exit(2);
        }
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value15=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value377=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value376=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1))))),result_type_302,(char*)come_increment_ref_count(var_name_303),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=sExternalGlobalVariable_finalize;
        _inf_value15->clone=sExternalGlobalVariable_clone;
        _inf_value15->compile=sExternalGlobalVariable_compile;
        _inf_value15->sline=sExternalGlobalVariable_sline;
        _inf_value15->sname=sExternalGlobalVariable_sname;
        _inf_value15->terminated=sExternalGlobalVariable_terminated;
        struct sNode* __result254__ = ((struct sNode*)(right_value382=_inf_value15));
        if(right_value376) { come_call_finalizer(sExternalGlobalVariable_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value377) { come_call_finalizer(sExternalGlobalVariable_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result254__;
    }
    else {
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value16=come_increment_ref_count(((struct sGlobalVariable*)(right_value384=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value383=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1))))),result_type_302,(char*)come_increment_ref_count(var_name_303),(struct sNode*)come_increment_ref_count(right_node_305),(char*)come_increment_ref_count(array_initializer_306),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=sGlobalVariable_finalize;
        _inf_value16->clone=sGlobalVariable_clone;
        _inf_value16->compile=sGlobalVariable_compile;
        _inf_value16->sline=sGlobalVariable_sline;
        _inf_value16->sname=sGlobalVariable_sname;
        _inf_value16->terminated=sGlobalVariable_terminated;
        struct sNode* __result257__ = ((struct sNode*)(right_value391=_inf_value16));
        if(right_value383) { come_call_finalizer(sGlobalVariable_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value384) { come_call_finalizer(sGlobalVariable_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result257__;
    }
    struct sNode* __result258__ = (struct sNode*)((void*)0);
    if(result_type_302) { come_call_finalizer(sType_finalize,result_type_302, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_303) { var_name_303 = come_decrement_ref_count(var_name_303, (void*)0, (void*)0, 0, 0); }
    if(right_node_305) { right_node_305 = come_decrement_ref_count(right_node_305, ((struct sNode*)right_node_305)->finalize, ((struct sNode*)right_node_305)->_protocol_obj, 0, 0); } 
    if(array_initializer_306) { array_initializer_306 = come_decrement_ref_count(array_initializer_306, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result258__;
come_release_malloced_mem();
}

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info){
    struct sNode* __result260__ = node;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result260__;
come_release_malloced_mem();
}

struct sNode* expression_v5(struct sInfo* info){
void* right_value351;
memset(&right_value351, 0, sizeof(void*));
    struct sNode* __result240__ = ((struct sNode*)(right_value351=expression_node_v99(info)));
    come_release_malloced_mem();
    return __result240__;
come_release_malloced_mem();
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    struct sNode* __result259__ = (struct sNode*)((void*)0);
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result259__;
come_release_malloced_mem();
}

struct sNode* expression_node_v1(struct sInfo* info){
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    exit(3);
    struct sNode* __result48__ = (struct sNode*)((void*)0);
    come_release_malloced_mem();
    return __result48__;
come_release_malloced_mem();
}

struct sNode* expression_node_v99(struct sInfo* info){
void* right_value223;
struct sBlock* block_232;
void* right_value224;
void* right_value225;
struct sNode* _inf_value2;
struct sNormalBlock* _inf_obj_value2;
void* right_value229;
void* right_value230;
struct sNode* node_234;
void* right_value231;
void* right_value232;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* right_value236;
void* right_value237;
struct sNode* node_236;
void* right_value238;
void* right_value239;
struct sNode* _inf_value4;
struct sMinusMinusNode2* _inf_obj_value4;
void* right_value243;
void* right_value244;
struct sNode* node_238;
void* right_value245;
void* right_value246;
struct sNode* _inf_value5;
struct sMinusNode2* _inf_obj_value5;
void* right_value250;
void* right_value251;
struct sNode* node_240;
void* right_value252;
void* right_value253;
struct sNode* _inf_value6;
struct sPlusPlusNode2* _inf_obj_value6;
void* right_value257;
void* right_value258;
struct sNode* node_242;
void* right_value259;
void* right_value260;
struct sNode* _inf_value7;
struct sComplement* _inf_obj_value7;
void* right_value264;
void* right_value265;
struct sNode* node_244;
void* right_value266;
struct sNode* __dec_obj128;
void* right_value267;
struct sNode* node_245;
void* right_value268;
struct sNode* __dec_obj129;
void* right_value269;
struct sNode* node_246;
void* right_value270;
struct sNode* __dec_obj130;
void* right_value271;
struct sNode* node_247;
void* right_value272;
struct sNode* __dec_obj131;
void* right_value273;
void* right_value274;
void* right_value275;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* right_value280;
char* head_249;
void* right_value281;
struct sNode* value_250;
char* tail_251;
void* right_value282;
void* right_value283;
void* right_value284;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* right_value289;
void* right_value290;
struct sNode* value_254;
void* right_value291;
void* right_value292;
struct sNode* _inf_value10;
struct sDerefferenceNode* _inf_obj_value10;
void* right_value296;
void* right_value297;
struct sNode* value_256;
void* right_value298;
void* right_value299;
struct sNode* _inf_value11;
struct sRefferenceNode* _inf_obj_value11;
void* right_value303;
void* right_value304;
struct sNode* value_258;
void* right_value305;
void* right_value306;
struct sNode* _inf_value12;
struct sReverseNode* _inf_obj_value12;
void* right_value310;
char* head_260;
int head_sline_261;
char* buf_262;
char* p_263;
int sline_264;
void* right_value311;
char* __dec_obj144;
void* right_value312;
char* __dec_obj145;
_Bool is_type_name__265;
_Bool define_function_pointer_flag_266;
void* right_value313;
_Bool lambda_flag_267;
void* right_value314;
void* right_value315;
char* word2_268;
void* right_value316;
char* __dec_obj146;
void* right_value317;
void* right_value318;
struct sNode* node_269;
void* right_value319;
struct sNode* __dec_obj147;
void* right_value320;
struct sNode* __dec_obj148;
void* right_value321;
struct sNode* node_270;
void* right_value322;
struct sNode* __dec_obj149;
void* right_value323;
struct sNode* node_271;
void* right_value324;
struct sNode* __dec_obj150;
void* right_value325;
struct sNode* __dec_obj151;
void* right_value326;
struct sNode* node_272;
void* right_value327;
struct sNode* __dec_obj152;
_Bool cast_expression_flag_273;
char* p_274;
int sline_275;
void* right_value328;
char* word_276;
void* right_value329;
char* __dec_obj153;
_Bool tuple_expression_flag_277;
char* p_278;
int sline_279;
_Bool no_comma_280;
_Bool no_output_err_281;
_Bool no_output_come_code_282;
void* right_value330;
struct sNode* node_283;
void* right_value331;
void* right_value332;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type_284;
char* name_285;
_Bool err_286;
void* right_value333;
struct sNode* node_287;
void* right_value334;
void* right_value335;
struct sNode* _inf_value13;
struct sCastNode* _inf_obj_value13;
void* right_value340;
void* right_value341;
struct sNode* node_289;
void* right_value342;
void* right_value343;
struct sNode* _inf_value14;
struct sParenNode* _inf_obj_value14;
void* right_value347;
struct sNode* __dec_obj159;
void* right_value348;
struct sNode* __dec_obj160;
void* right_value349;
struct sNode* node_291;
void* right_value350;
struct sNode* __dec_obj161;
memset(&right_value223, 0, sizeof(void*));
memset(&block_232, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&node_234, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&node_236, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&node_238, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&node_240, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&node_242, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&node_244, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&node_245, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&node_246, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&node_247, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&head_249, 0, sizeof(char*)); /* ddd */
memset(&right_value281, 0, sizeof(void*));
memset(&value_250, 0, sizeof(struct sNode*)); /* ddd */
memset(&tail_251, 0, sizeof(char*)); /* ddd */
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&value_254, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&value_256, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&value_258, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&head_260, 0, sizeof(char*)); /* ddd */
memset(&head_sline_261, 0, sizeof(int)); /* ddd */
memset(&buf_262, 0, sizeof(char*)); /* bbb */
memset(&p_263, 0, sizeof(char*)); /* ddd */
memset(&sline_264, 0, sizeof(int)); /* ddd */
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&is_type_name__265, 0, sizeof(_Bool)); /* ddd */
memset(&define_function_pointer_flag_266, 0, sizeof(_Bool)); /* ddd */
memset(&right_value313, 0, sizeof(void*));
memset(&lambda_flag_267, 0, sizeof(_Bool)); /* ddd */
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&word2_268, 0, sizeof(char*)); /* ddd */
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&node_269, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&node_270, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&node_271, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&node_272, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value327, 0, sizeof(void*));
memset(&cast_expression_flag_273, 0, sizeof(_Bool)); /* ddd */
memset(&p_274, 0, sizeof(char*)); /* ddd */
memset(&sline_275, 0, sizeof(int)); /* ddd */
memset(&right_value328, 0, sizeof(void*));
memset(&word_276, 0, sizeof(char*)); /* ddd */
memset(&right_value329, 0, sizeof(void*));
memset(&tuple_expression_flag_277, 0, sizeof(_Bool)); /* ddd */
memset(&p_278, 0, sizeof(char*)); /* ddd */
memset(&sline_279, 0, sizeof(int)); /* ddd */
memset(&no_comma_280, 0, sizeof(_Bool)); /* ddd */
memset(&no_output_err_281, 0, sizeof(_Bool)); /* ddd */
memset(&no_output_come_code_282, 0, sizeof(_Bool)); /* ddd */
memset(&right_value330, 0, sizeof(void*));
memset(&node_283, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&type_284, 0, sizeof(struct sType*)); /* ccc */
memset(&name_285, 0, sizeof(char*)); /* ccc */
memset(&err_286, 0, sizeof(_Bool)); /* ccc */
memset(&type_284, 0, sizeof(struct sType*)); /* eee */
memset(&name_285, 0, sizeof(char*)); /* eee */
memset(&err_286, 0, sizeof(_Bool)); /* eee */
memset(&right_value333, 0, sizeof(void*));
memset(&node_287, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&node_289, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&node_291, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value350, 0, sizeof(void*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(*info->p==123) {
        block_232=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value223=parse_block(info,(_Bool)0))));
        if(right_value223) { come_call_finalizer(sBlock_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0); }
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value2=come_increment_ref_count(((struct sNormalBlock*)(right_value225=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value224=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1))))),block_232,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=sNormalBlock_finalize;
        _inf_value2->clone=sNormalBlock_clone;
        _inf_value2->compile=sNormalBlock_compile;
        _inf_value2->sline=sNormalBlock_sline;
        _inf_value2->sname=sNormalBlock_sname;
        _inf_value2->terminated=sNormalBlock_terminated;
        struct sNode* __result191__ = ((struct sNode*)(right_value229=_inf_value2));
        if(block_232) { come_call_finalizer(sBlock_finalize,block_232, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value224) { come_call_finalizer(sNormalBlock_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value225) { come_call_finalizer(sNormalBlock_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result191__;
    }
    else if(*info->p==33) {
        info->p++;
        skip_spaces_and_lf(info);
        node_234=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=expression_node_v99(info))));
        if(right_value230) { right_value230 = come_decrement_ref_count(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0); } 
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value3=come_increment_ref_count(((struct sLogicalDenial*)(right_value232=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value231=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1))))),(struct sNode*)come_increment_ref_count(node_234),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=sLogicalDenial_finalize;
        _inf_value3->clone=sLogicalDenial_clone;
        _inf_value3->compile=sLogicalDenial_compile;
        _inf_value3->sline=sLogicalDenial_sline;
        _inf_value3->sname=sLogicalDenial_sname;
        _inf_value3->terminated=sLogicalDenial_terminated;
        struct sNode* __result194__ = ((struct sNode*)(right_value236=_inf_value3));
        if(node_234) { node_234 = come_decrement_ref_count(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0); } 
        if(right_value231) { come_call_finalizer(sLogicalDenial_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value232) { come_call_finalizer(sLogicalDenial_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result194__;
    }
    else if(*info->p==45&&*(info->p+1)==45) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=expression_node_v99(info))));
        if(right_value237) { right_value237 = come_decrement_ref_count(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0); } 
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value4=come_increment_ref_count(((struct sMinusMinusNode2*)(right_value239=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value238=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1))))),(struct sNode*)come_increment_ref_count(node_236),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=sMinusMinusNode2_finalize;
        _inf_value4->clone=sMinusMinusNode2_clone;
        _inf_value4->compile=sMinusMinusNode2_compile;
        _inf_value4->sline=sMinusMinusNode2_sline;
        _inf_value4->sname=sMinusMinusNode2_sname;
        _inf_value4->terminated=sMinusMinusNode2_terminated;
        struct sNode* __result197__ = ((struct sNode*)(right_value243=_inf_value4));
        if(node_236) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0); } 
        if(right_value238) { come_call_finalizer(sMinusMinusNode2_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value239) { come_call_finalizer(sMinusMinusNode2_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result197__;
    }
    else if(*info->p==45) {
        info->p++;
        skip_spaces_and_lf(info);
        node_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=expression_node_v99(info))));
        if(right_value244) { right_value244 = come_decrement_ref_count(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0); } 
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value5=come_increment_ref_count(((struct sMinusNode2*)(right_value246=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value245=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1))))),(struct sNode*)come_increment_ref_count(node_238),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=sMinusNode2_finalize;
        _inf_value5->clone=sMinusNode2_clone;
        _inf_value5->compile=sMinusNode2_compile;
        _inf_value5->sline=sMinusNode2_sline;
        _inf_value5->sname=sMinusNode2_sname;
        _inf_value5->terminated=sMinusNode2_terminated;
        struct sNode* __result200__ = ((struct sNode*)(right_value250=_inf_value5));
        if(node_238) { node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0); } 
        if(right_value245) { come_call_finalizer(sMinusNode2_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value246) { come_call_finalizer(sMinusNode2_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result200__;
    }
    else if(*info->p==43&&*(info->p+1)==43) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value251=expression_node_v99(info))));
        if(right_value251) { right_value251 = come_decrement_ref_count(right_value251, ((struct sNode*)right_value251)->finalize, ((struct sNode*)right_value251)->_protocol_obj, 1, 0); } 
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value6=come_increment_ref_count(((struct sPlusPlusNode2*)(right_value253=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value252=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1))))),(struct sNode*)come_increment_ref_count(node_240),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=sPlusPlusNode2_finalize;
        _inf_value6->clone=sPlusPlusNode2_clone;
        _inf_value6->compile=sPlusPlusNode2_compile;
        _inf_value6->sline=sPlusPlusNode2_sline;
        _inf_value6->sname=sPlusPlusNode2_sname;
        _inf_value6->terminated=sPlusPlusNode2_terminated;
        struct sNode* __result203__ = ((struct sNode*)(right_value257=_inf_value6));
        if(node_240) { node_240 = come_decrement_ref_count(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0, 0); } 
        if(right_value252) { come_call_finalizer(sPlusPlusNode2_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value253) { come_call_finalizer(sPlusPlusNode2_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result203__;
    }
    else if(*info->p==126) {
        info->p++;
        skip_spaces_and_lf(info);
        node_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=expression_node_v99(info))));
        if(right_value258) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0); } 
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value7=come_increment_ref_count(((struct sComplement*)(right_value260=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value259=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1))))),(struct sNode*)come_increment_ref_count(node_242),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=sComplement_finalize;
        _inf_value7->clone=sComplement_clone;
        _inf_value7->compile=sComplement_compile;
        _inf_value7->sline=sComplement_sline;
        _inf_value7->sname=sComplement_sname;
        _inf_value7->terminated=sComplement_terminated;
        struct sNode* __result206__ = ((struct sNode*)(right_value264=_inf_value7));
        if(node_242) { node_242 = come_decrement_ref_count(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 0); } 
        if(right_value259) { come_call_finalizer(sComplement_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value260) { come_call_finalizer(sComplement_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result206__;
    }
    else if(*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88)) {
        info->p+=2;
        node_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=get_hex_number((_Bool)0,info))));
        if(right_value265) { right_value265 = come_decrement_ref_count(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0); } 
        __dec_obj128=node_244;
        node_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_244),info))));
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0); }
        if(right_value266) { right_value266 = come_decrement_ref_count(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0); } 
        struct sNode* __result207__ = node_244;
        if(node_244) { node_244 = come_decrement_ref_count(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 1); } 
        come_release_malloced_mem();
        return __result207__;
    }
    else if(*info->p==48&&xisdigit(*(info->p+1))) {
        info->p++;
        node_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=get_oct_number(info))));
        if(right_value267) { right_value267 = come_decrement_ref_count(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0); } 
        __dec_obj129=node_245;
        node_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_245),info))));
        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0); }
        if(right_value268) { right_value268 = come_decrement_ref_count(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0); } 
        struct sNode* __result208__ = node_245;
        if(node_245) { node_245 = come_decrement_ref_count(node_245, ((struct sNode*)node_245)->finalize, ((struct sNode*)node_245)->_protocol_obj, 0, 1); } 
        come_release_malloced_mem();
        return __result208__;
    }
    else if(xisdigit(*info->p)) {
        node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=get_number((_Bool)0,info))));
        if(right_value269) { right_value269 = come_decrement_ref_count(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0); } 
        __dec_obj130=node_246;
        node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_246),info))));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0); }
        if(right_value270) { right_value270 = come_decrement_ref_count(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0); } 
        struct sNode* __result209__ = node_246;
        if(node_246) { node_246 = come_decrement_ref_count(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 1); } 
        come_release_malloced_mem();
        return __result209__;
    }
    else if(*info->p==45&&xisdigit(*(info->p+1))) {
        info->p++;
        node_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=get_number((_Bool)1,info))));
        if(right_value271) { right_value271 = come_decrement_ref_count(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0); } 
        __dec_obj131=node_247;
        node_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value272=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_247),info))));
        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0); }
        if(right_value272) { right_value272 = come_decrement_ref_count(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0); } 
        struct sNode* __result210__ = node_247;
        if(node_247) { node_247 = come_decrement_ref_count(node_247, ((struct sNode*)node_247)->finalize, ((struct sNode*)node_247)->_protocol_obj, 0, 1); } 
        come_release_malloced_mem();
        return __result210__;
    }
    else if(parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(*info->p==59) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value8=come_increment_ref_count(((struct sReturnNode*)(right_value275=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value273=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1))))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value274=__builtin_string("0")))),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=sReturnNode_finalize;
            _inf_value8->clone=sReturnNode_clone;
            _inf_value8->compile=sReturnNode_compile;
            _inf_value8->sline=sReturnNode_sline;
            _inf_value8->sname=sReturnNode_sname;
            _inf_value8->terminated=sReturnNode_terminated;
            struct sNode* __result213__ = ((struct sNode*)(right_value280=_inf_value8));
            if(right_value273) { come_call_finalizer(sReturnNode_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value274) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0); }
            if(right_value275) { come_call_finalizer(sReturnNode_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result213__;
        }
        else {
            head_249=info->p;
            value_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=expression_v13(info))));
            if(right_value281) { right_value281 = come_decrement_ref_count(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0); } 
            tail_251=info->p;
            char buf_252[tail_251-head_249+1];
            memset(&buf_252, 0, sizeof(buf_252)); /* aaa */
            memcpy(buf_252,head_249,tail_251-head_249);
            buf_252[tail_251-head_249]=0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value9=come_increment_ref_count(((struct sReturnNode*)(right_value284=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value282=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1))))),(struct sNode*)come_increment_ref_count(value_250),(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string(buf_252)))),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=sReturnNode_finalize;
            _inf_value9->clone=sReturnNode_clone;
            _inf_value9->compile=sReturnNode_compile;
            _inf_value9->sline=sReturnNode_sline;
            _inf_value9->sname=sReturnNode_sname;
            _inf_value9->terminated=sReturnNode_terminated;
            struct sNode* __result216__ = ((struct sNode*)(right_value289=_inf_value9));
            if(value_250) { value_250 = come_decrement_ref_count(value_250, ((struct sNode*)value_250)->finalize, ((struct sNode*)value_250)->_protocol_obj, 0, 0); } 
            if(right_value282) { come_call_finalizer(sReturnNode_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value283) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0); }
            if(right_value284) { come_call_finalizer(sReturnNode_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result216__;
        }
    }
    else if(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        value_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=expression_node_v99(info))));
        if(right_value290) { right_value290 = come_decrement_ref_count(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0); } 
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value10=come_increment_ref_count(((struct sDerefferenceNode*)(right_value292=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value291=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1))))),(struct sNode*)come_increment_ref_count(value_254),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=sDerefferenceNode_finalize;
        _inf_value10->clone=sDerefferenceNode_clone;
        _inf_value10->compile=sDerefferenceNode_compile;
        _inf_value10->sline=sDerefferenceNode_sline;
        _inf_value10->sname=sDerefferenceNode_sname;
        _inf_value10->terminated=sDerefferenceNode_terminated;
        struct sNode* __result219__ = ((struct sNode*)(right_value296=_inf_value10));
        if(value_254) { value_254 = come_decrement_ref_count(value_254, ((struct sNode*)value_254)->finalize, ((struct sNode*)value_254)->_protocol_obj, 0, 0); } 
        if(right_value291) { come_call_finalizer(sDerefferenceNode_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value292) { come_call_finalizer(sDerefferenceNode_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result219__;
    }
    else if(*info->p==38) {
        info->p++;
        skip_spaces_and_lf(info);
        value_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=expression_node_v99(info))));
        if(right_value297) { right_value297 = come_decrement_ref_count(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0); } 
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value11=come_increment_ref_count(((struct sRefferenceNode*)(right_value299=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value298=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1))))),(struct sNode*)come_increment_ref_count(value_256),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=sRefferenceNode_finalize;
        _inf_value11->clone=sRefferenceNode_clone;
        _inf_value11->compile=sRefferenceNode_compile;
        _inf_value11->sline=sRefferenceNode_sline;
        _inf_value11->sname=sRefferenceNode_sname;
        _inf_value11->terminated=sRefferenceNode_terminated;
        struct sNode* __result222__ = ((struct sNode*)(right_value303=_inf_value11));
        if(value_256) { value_256 = come_decrement_ref_count(value_256, ((struct sNode*)value_256)->finalize, ((struct sNode*)value_256)->_protocol_obj, 0, 0); } 
        if(right_value298) { come_call_finalizer(sRefferenceNode_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value299) { come_call_finalizer(sRefferenceNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result222__;
    }
    else if(*info->p==33) {
        info->p++;
        skip_spaces_and_lf(info);
        value_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=expression_node_v99(info))));
        if(right_value304) { right_value304 = come_decrement_ref_count(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0); } 
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value12=come_increment_ref_count(((struct sReverseNode*)(right_value306=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value305=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1))))),(struct sNode*)come_increment_ref_count(value_258),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=sReverseNode_finalize;
        _inf_value12->clone=sReverseNode_clone;
        _inf_value12->compile=sReverseNode_compile;
        _inf_value12->sline=sReverseNode_sline;
        _inf_value12->sname=sReverseNode_sname;
        _inf_value12->terminated=sReverseNode_terminated;
        struct sNode* __result225__ = ((struct sNode*)(right_value310=_inf_value12));
        if(value_258) { value_258 = come_decrement_ref_count(value_258, ((struct sNode*)value_258)->finalize, ((struct sNode*)value_258)->_protocol_obj, 0, 0); } 
        if(right_value305) { come_call_finalizer(sReverseNode_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value306) { come_call_finalizer(sReverseNode_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0); }
        come_release_malloced_mem();
        return __result225__;
    }
    else if(xisalpha(*info->p)||*info->p==95) {
        head_260=info->p;
        head_sline_261=info->sline;
        {
            p_263=info->p;
            sline_264=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                __dec_obj144=buf_262;
                buf_262=(char*)come_increment_ref_count(((char*)(right_value311=parse_word(info))));
                if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0); }
                if(right_value311) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0); }
            }
            else {
                __dec_obj145=buf_262;
                buf_262=(char*)come_increment_ref_count(((char*)(right_value312=__builtin_string(""))));
                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0); }
                if(right_value312) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0); }
            }
            info->p=p_263;
            info->sline=sline_264;
        }
        is_type_name__265=is_type_name(buf_262,info);
        define_function_pointer_flag_266=(_Bool)0;
        if(string_operator_not_equals(buf_262,"if")&&string_operator_not_equals(buf_262,"while")&&string_operator_not_equals(buf_262,"for")&&string_operator_not_equals(buf_262,"switch")&&string_operator_not_equals(buf_262,"return")&&string_operator_not_equals(buf_262,"sizeof")&&string_operator_not_equals(buf_262,"isheap")&&string_operator_not_equals(buf_262,"gc_inc")&&string_operator_not_equals(buf_262,"gc_dec")&&*info->p==40&&*(info->p+1)!=42) {
            info->no_output_err=(_Bool)1;
            ((struct tuple3$3sTypephcharphbool*)(right_value313=parse_type(info,(_Bool)0,(_Bool)1)));
            if(right_value313) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0); }
            info->no_output_err=(_Bool)0;
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_266=(_Bool)1;
                }
            }
            info->p=head_260;
            info->sline=head_sline_261;
        }
        lambda_flag_267=(_Bool)0;
        if(string_operator_not_equals(buf_262,"if")&&string_operator_not_equals(buf_262,"while")&&string_operator_not_equals(buf_262,"for")&&string_operator_not_equals(buf_262,"switch")&&string_operator_not_equals(buf_262,"return")&&string_operator_not_equals(buf_262,"sizeof")&&string_operator_not_equals(buf_262,"isheap")&&string_operator_not_equals(buf_262,"gc_inc")&&string_operator_not_equals(buf_262,"gc_dec")&&*info->p==40&&*(info->p+1)!=42) {
            info->p=head_260;
            info->sline=head_sline_261;
            info->no_output_err=(_Bool)1;
            ((struct tuple3$3sTypephcharphbool*)(right_value314=parse_type(info,(_Bool)0,(_Bool)1)));
            if(right_value314) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0); }
            if(xisalpha(*info->p)||*info->p==95) {
                word2_268=(char*)come_increment_ref_count(((char*)(right_value315=parse_word(info))));
                if(right_value315) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0); }
                if(string_operator_equals(word2_268,"lambda")) {
                    lambda_flag_267=(_Bool)1;
                }
                if(word2_268) { word2_268 = come_decrement_ref_count(word2_268, (void*)0, (void*)0, 0, 0); }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_260;
            info->sline=head_sline_261;
        }
        __dec_obj146=buf_262;
        buf_262=(char*)come_increment_ref_count(((char*)(right_value316=parse_word(info))));
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0); }
        if(right_value316) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0); }
        if(lambda_flag_267) {
            info->p=head_260;
            info->sline=head_sline_261;
            struct sNode* __result226__ = ((struct sNode*)(right_value317=parse_function(info)));
            if(buf_262) { buf_262 = come_decrement_ref_count(buf_262, (void*)0, (void*)0, 0, 0); }
            come_release_malloced_mem();
            return __result226__;
        }
        else if((string_operator_equals(buf_262,"string")||string_operator_equals(buf_262,"wstring"))&&*info->p==40) {
            node_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=parse_function_call(buf_262,info))));
            if(right_value318) { right_value318 = come_decrement_ref_count(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0); } 
            __dec_obj147=node_269;
            node_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_269),info))));
            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0); }
            if(right_value319) { right_value319 = come_decrement_ref_count(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0); } 
            __dec_obj148=node_269;
            node_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_269),info))));
            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0); }
            if(right_value320) { right_value320 = come_decrement_ref_count(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0); } 
            struct sNode* __result227__ = node_269;
            if(node_269) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 1); } 
            if(buf_262) { buf_262 = come_decrement_ref_count(buf_262, (void*)0, (void*)0, 0, 0); }
            come_release_malloced_mem();
            return __result227__;
        }
        else if(string_operator_equals(buf_262,"sizeof")&&*info->p==40) {
            node_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=string_node_v21(buf_262,head_260,head_sline_261,info))));
            if(right_value321) { right_value321 = come_decrement_ref_count(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0); } 
            __dec_obj149=node_270;
            node_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_270),info))));
            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0); }
            if(right_value322) { right_value322 = come_decrement_ref_count(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0); } 
            struct sNode* __result228__ = node_270;
            if(node_270) { node_270 = come_decrement_ref_count(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 1); } 
            if(buf_262) { buf_262 = come_decrement_ref_count(buf_262, (void*)0, (void*)0, 0, 0); }
            come_release_malloced_mem();
            return __result228__;
        }
        else if(string_operator_not_equals(buf_262,"if")&&string_operator_not_equals(buf_262,"while")&&string_operator_not_equals(buf_262,"for")&&string_operator_not_equals(buf_262,"switch")&&string_operator_not_equals(buf_262,"return")&&string_operator_not_equals(buf_262,"sizeof")&&string_operator_not_equals(buf_262,"isheap")&&string_operator_not_equals(buf_262,"gc_inc")&&string_operator_not_equals(buf_262,"gc_dec")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__265)) {
            node_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=parse_function_call(buf_262,info))));
            if(right_value323) { right_value323 = come_decrement_ref_count(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0); } 
            __dec_obj150=node_271;
            node_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_271),info))));
            if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0); }
            if(right_value324) { right_value324 = come_decrement_ref_count(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0); } 
            __dec_obj151=node_271;
            node_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_271),info))));
            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0); }
            if(right_value325) { right_value325 = come_decrement_ref_count(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0); } 
            struct sNode* __result229__ = node_271;
            if(node_271) { node_271 = come_decrement_ref_count(node_271, ((struct sNode*)node_271)->finalize, ((struct sNode*)node_271)->_protocol_obj, 0, 1); } 
            if(buf_262) { buf_262 = come_decrement_ref_count(buf_262, (void*)0, (void*)0, 0, 0); }
            come_release_malloced_mem();
            return __result229__;
        }
        else {
            node_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=string_node_v21(buf_262,head_260,head_sline_261,info))));
            if(right_value326) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0); } 
            __dec_obj152=node_272;
            node_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_272),info))));
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0); }
            if(right_value327) { right_value327 = come_decrement_ref_count(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0); } 
            struct sNode* __result230__ = node_272;
            if(node_272) { node_272 = come_decrement_ref_count(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 1); } 
            if(buf_262) { buf_262 = come_decrement_ref_count(buf_262, (void*)0, (void*)0, 0, 0); }
            come_release_malloced_mem();
            return __result230__;
        }
    }
    else if(*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        cast_expression_flag_273=(_Bool)0;
        {
            p_274=info->p;
            sline_275=info->sline;
            word_276=(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string(""))));
            if(right_value328) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0); }
            if(xisalpha(*info->p)||*info->p==95) {
                __dec_obj153=word_276;
                word_276=(char*)come_increment_ref_count(((char*)(right_value329=parse_word(info))));
                if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0); }
                if(right_value329) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0); }
            }
            if(is_type_name(word_276,info)) {
                cast_expression_flag_273=(_Bool)1;
            }
            info->p=p_274;
            info->sline=sline_275;
            if(word_276) { word_276 = come_decrement_ref_count(word_276, (void*)0, (void*)0, 0, 0); }
        }
        tuple_expression_flag_277=(_Bool)0;
        {
            p_278=info->p;
            sline_279=info->sline;
            no_comma_280=info->no_comma;
            info->no_comma=(_Bool)1;
            no_output_err_281=info->no_output_err;
            info->no_output_err=(_Bool)1;
            no_output_come_code_282=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            node_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value330=expression_v13(info))));
            if(right_value330) { right_value330 = come_decrement_ref_count(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0); } 
            info->no_comma=no_comma_280;
            info->no_output_err=no_output_err_281;
            info->no_output_come_code=no_output_come_code_282;
            if(*info->p==44) {
                tuple_expression_flag_277=(_Bool)1;
            }
            info->p=p_278;
            info->sline=sline_279;
            if(node_283) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0); } 
        }
        if(tuple_expression_flag_277) {
            struct sNode* __result231__ = ((struct sNode*)(right_value331=parse_tuple(info)));
            come_release_malloced_mem();
            return __result231__;
        }
        else if(cast_expression_flag_273) {
            parse_sharp_v5(info);
            multiple_assgin_var3=((struct tuple3$3sTypephcharphbool*)(right_value332=parse_type(info,(_Bool)0,(_Bool)1)));
            type_284=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
            name_285=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
            err_286=multiple_assgin_var3->v3;
            if(right_value332) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0); }
            if(!err_286) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            expected_next_character(41,info);
            node_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=expression_node_v99(info))));
            if(right_value333) { right_value333 = come_decrement_ref_count(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0); } 
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value13=come_increment_ref_count(((struct sCastNode*)(right_value335=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value334=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1))))),type_284,node_287,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=sCastNode_finalize;
            _inf_value13->clone=sCastNode_clone;
            _inf_value13->compile=sCastNode_compile;
            _inf_value13->sline=sCastNode_sline;
            _inf_value13->sname=sCastNode_sname;
            _inf_value13->terminated=sCastNode_terminated;
            struct sNode* __result234__ = ((struct sNode*)(right_value340=_inf_value13));
            if(type_284) { come_call_finalizer(sType_finalize,type_284, (void*)0, (void*)0, 0, 0, 0); }
            if(name_285) { name_285 = come_decrement_ref_count(name_285, (void*)0, (void*)0, 0, 0); }
            if(node_287) { node_287 = come_decrement_ref_count(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0); } 
            if(right_value334) { come_call_finalizer(sCastNode_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value335) { come_call_finalizer(sCastNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0); }
            come_release_malloced_mem();
            return __result234__;
        }
        else {
            parse_sharp_v5(info);
            node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=expression_v13(info))));
            if(right_value341) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0); } 
            parse_sharp_v5(info);
            expected_next_character(41,info);
            parse_sharp_v5(info);
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value14=come_increment_ref_count(((struct sParenNode*)(right_value343=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value342=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1))))),node_289,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=sParenNode_finalize;
            _inf_value14->clone=sParenNode_clone;
            _inf_value14->compile=sParenNode_compile;
            _inf_value14->sline=sParenNode_sline;
            _inf_value14->sname=sParenNode_sname;
            _inf_value14->terminated=sParenNode_terminated;
            __dec_obj159=node_289;
            node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=_inf_value14)));
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0); }
            if(right_value342) { come_call_finalizer(sParenNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value343) { come_call_finalizer(sParenNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value347) { right_value347 = come_decrement_ref_count(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0); } 
            __dec_obj160=node_289;
            node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_289),info))));
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0); }
            if(right_value348) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0); } 
            struct sNode* __result237__ = node_289;
            if(node_289) { node_289 = come_decrement_ref_count(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 1); } 
            come_release_malloced_mem();
            return __result237__;
        }
    }
    else {
        node_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=expression_node_v98(info))));
        if(right_value349) { right_value349 = come_decrement_ref_count(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0); } 
        __dec_obj161=node_291;
        node_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_291),info))));
        if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0); }
        if(right_value350) { right_value350 = come_decrement_ref_count(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0); } 
        struct sNode* __result238__ = node_291;
        if(node_291) { node_291 = come_decrement_ref_count(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0, 1); } 
        come_release_malloced_mem();
        return __result238__;
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    struct sNode* __result239__ = (struct sNode*)((void*)0);
    come_release_malloced_mem();
    return __result239__;
come_release_malloced_mem();
}

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info){
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(3);
    struct sNode* __result134__ = (struct sNode*)((void*)0);
    come_release_malloced_mem();
    return __result134__;
come_release_malloced_mem();
}

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info){
    struct sNode* __result135__ = node;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result135__;
come_release_malloced_mem();
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info){
char* struct_name_299;
void* right_value365;
void* right_value366;
struct buffer* buf_300;
void* right_value367;
char* __dec_obj170;
void* right_value368;
char* __dec_obj171;
int i_301;
void* right_value369;
void* right_value370;
memset(&struct_name_299, 0, sizeof(char*)); /* bbb */
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&buf_300, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&i_301, 0, sizeof(int)); /* ddd */
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
    buf_300=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value365=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value365) { come_call_finalizer(buffer_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value366) { come_call_finalizer(buffer_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0); }
    if(string_operator_not_equals(obj_type->mOriginalTypeName,"")&&!obj_type->mNoHeap) {
        __dec_obj170=struct_name_299;
        struct_name_299=(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string(obj_type->mOriginalTypeName))));
        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0); }
        if(right_value367) { right_value367 = come_decrement_ref_count(right_value367, (void*)0, (void*)0, 1, 0); }
    }
    else {
        __dec_obj171=struct_name_299;
        struct_name_299=(char*)come_increment_ref_count(((char*)(right_value368=create_generics_name(obj_type,info))));
        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0); }
        if(right_value368) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0); }
        for(
        i_301=0;
        i_301<obj_type->mPointerNum;
        i_301++
        ){
            buffer_append_str(buf_300,"p");
        }
    }
    char* __result251__ = ((char*)(right_value370=xsprintf("%s%s_%s",struct_name_299,((char*)(right_value369=buffer_to_string(buf_300))),fun_name)));
    if(struct_name_299) { struct_name_299 = come_decrement_ref_count(struct_name_299, (void*)0, (void*)0, 0, 0); }
    if(buf_300) { come_call_finalizer(buffer_finalize,buf_300, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value369) { right_value369 = come_decrement_ref_count(right_value369, (void*)0, (void*)0, 1, 0); }
    come_release_malloced_mem();
    return __result251__;
come_release_malloced_mem();
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
struct sNode* __dec_obj1;
void* right_value0;
char* __dec_obj2;
void* right_value1;
char* __dec_obj3;
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
    __dec_obj1=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0); }
    __dec_obj2=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value0=string_clone(value_source))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    self->sline=info->sline;
    __dec_obj3=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value1=__builtin_string(info->sname))));
    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
    if(right_value1) { right_value1 = come_decrement_ref_count(right_value1, (void*)0, (void*)0, 1, 0); }
    struct sReturnNode* __result7__ = self;
    if(self) { come_call_finalizer(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    if(value_source) { value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result7__;
come_release_malloced_mem();
}

static void sReturnNode_finalize(struct sReturnNode* self){
                if(self!=((void*)0)&&self->value!=((void*)0)) {
                    if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->value_source!=((void*)0)) {
                    if(self->value_source) { self->value_source = come_decrement_ref_count(self->value_source, (void*)0, (void*)0, 0, 0); }
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
            come_release_malloced_mem();
}

int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info){
    int __result8__ = self->sline;
    come_release_malloced_mem();
    return __result8__;
come_release_malloced_mem();
}

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info){
void* right_value2;
memset(&right_value2, 0, sizeof(void*));
    char* __result9__ = ((char*)(right_value2=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result9__;
come_release_malloced_mem();
}

_Bool sReturnNode_terminated(){
    _Bool __result10__ = (_Bool)0;
    come_release_malloced_mem();
    return __result10__;
come_release_malloced_mem();
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_0;
void* right_value33;
struct sType* result_type_25;
void* right_value34;
struct sType* result_type2_26;
struct sType* result_type3_27;
void* right_value35;
struct CVALUE* come_value_28;
int right_value_id_29;
void* right_value36;
struct sType* come_value_type_30;
static int num_result_31=0;
void* right_value37;
struct sFun* come_fun_32;
memset(&come_fun_0, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value33, 0, sizeof(void*));
memset(&result_type_25, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value34, 0, sizeof(void*));
memset(&result_type2_26, 0, sizeof(struct sType*)); /* ddd */
memset(&result_type3_27, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value35, 0, sizeof(void*));
memset(&come_value_28, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value_id_29, 0, sizeof(int)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
memset(&come_value_type_30, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value37, 0, sizeof(void*));
memset(&come_fun_32, 0, sizeof(struct sFun*)); /* ddd */
    if(self->value) {
        come_fun_0=info->come_fun;
        result_type_25=(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(come_fun_0->mResultType))));
        if(right_value33) { come_call_finalizer(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0); }
        result_type2_26=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=solve_generics(result_type_25,info->generics_type,info))));
        if(right_value34) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0); }
        result_type3_27=result_type2_26->mNoSolvedGenericsType->v1;
        if(result_type2_26->mNoSolvedGenericsType->v1) {
            result_type3_27=result_type2_26->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_27=result_type2_26;
        }
        if(!self->value->compile(self->value->_protocol_obj,info)) {
            _Bool __result26__ = (_Bool)0;
            if(result_type_25) { come_call_finalizer(sType_finalize,result_type_25, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type2_26) { come_call_finalizer(sType_finalize,result_type2_26, (void*)0, (void*)0, 0, 0, 0); }
            come_release_malloced_mem();
            return __result26__;
        }
        come_value_28=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value35=get_value_from_stack(-1,info))));
        if(right_value35) { come_call_finalizer(CVALUE_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        if(come_value_28->type->mHeap&&come_value_28->var==((void*)0)) {
            right_value_id_29=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_28->c_value));
            if(right_value_id_29!=-1) {
                remove_object_from_right_values(right_value_id_29,info);
            }
        }
        come_value_type_30=(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=solve_generics(come_value_28->type,info->generics_type,info))));
        if(right_value36) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0); }
        add_come_code(info,"%s __result%d__ = %s;\n",((char*)(right_value37=make_type_name_string(result_type2_26,(_Bool)0,(_Bool)0,info,(_Bool)0))),++num_result_31,come_value_28->c_value);
        if(right_value37) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0); }
        free_objects_on_return(come_fun_0->mBlock,info,come_value_28->var,(_Bool)0);
        free_right_value_objects(info);
        if(string_operator_not_equals(info->come_fun->mName,"come_release_malloced_mem")) {
            add_come_code(info,"come_release_malloced_mem();\n");
        }
        if(string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"come_heap_pool_final();\n");
        }
        add_come_code(info,"return __result%d__;\n",num_result_31);
        if(result_type_25) { come_call_finalizer(sType_finalize,result_type_25, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type2_26) { come_call_finalizer(sType_finalize,result_type2_26, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_28) { come_call_finalizer(CVALUE_finalize,come_value_28, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_type_30) { come_call_finalizer(sType_finalize,come_value_type_30, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        come_fun_32=info->come_fun;
        free_objects_on_return(come_fun_32->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info);
        if(string_operator_not_equals(info->come_fun->mName,"come_release_malloced_mem")) {
            add_come_code(info,"come_release_malloced_mem();\n");
        }
        if(string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"come_heap_pool_final();\n");
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    _Bool __result27__ = (_Bool)1;
    come_release_malloced_mem();
    return __result27__;
come_release_malloced_mem();
}

static struct sType* sType_clone(struct sType* self){
void* right_value3;
struct sType* result_1;
void* right_value6;
struct tuple1$1sTypeph* __dec_obj5;
void* right_value7;
char* __dec_obj6;
void* right_value14;
struct list$1sTypeph* __dec_obj10;
void* right_value22;
struct list$1sNodeph* __dec_obj14;
void* right_value23;
struct list$1sTypeph* __dec_obj15;
void* right_value30;
struct list$1charph* __dec_obj19;
void* right_value31;
struct tuple1$1sTypeph* __dec_obj20;
void* right_value32;
char* __dec_obj21;
memset(&right_value3, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sType* __result11__ = (void*)0;
                come_release_malloced_mem();
                return __result11__;
            }
            result_1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value3=(struct sType*)come_calloc(1, sizeof(struct sType)*(1)))));
            if(right_value3) { come_call_finalizer(sType_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)) {
                result_1->mClass=self->mClass;
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                __dec_obj5=result_1->mNoSolvedGenericsType;
                result_1->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value6=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj5) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value6) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                __dec_obj6=result_1->mGenericsName;
                result_1->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value7=string_clone(self->mGenericsName))));
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
                if(right_value7) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                __dec_obj10=result_1->mGenericsTypes;
                result_1->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value14=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj10) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value14) { come_call_finalizer(list$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj14=result_1->mArrayNum;
                result_1->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value22=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj14) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value22) { come_call_finalizer(list$1sNodephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_1->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj15=result_1->mParamTypes;
                result_1->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj15) { come_call_finalizer(list$1sTypephp_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value23) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj19=result_1->mParamNames;
                result_1->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value30=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj19) { come_call_finalizer(list$1charphp_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value30) { come_call_finalizer(list$1charphp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj20=result_1->mResultType;
                result_1->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value31=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj20) { come_call_finalizer(tuple1$1sTypephp_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value31) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_1->mVarArgs=self->mVarArgs;
            }
            if(self!=((void*)0)) {
                result_1->mUnsigned=self->mUnsigned;
            }
            if(self!=((void*)0)) {
                result_1->mShort=self->mShort;
            }
            if(self!=((void*)0)) {
                result_1->mLong=self->mLong;
            }
            if(self!=((void*)0)) {
                result_1->mLongLong=self->mLongLong;
            }
            if(self!=((void*)0)) {
                result_1->mConstant=self->mConstant;
            }
            if(self!=((void*)0)) {
                result_1->mRegister=self->mRegister;
            }
            if(self!=((void*)0)) {
                result_1->mVolatile=self->mVolatile;
            }
            if(self!=((void*)0)) {
                result_1->mStatic=self->mStatic;
            }
            if(self!=((void*)0)) {
                result_1->mExtern=self->mExtern;
            }
            if(self!=((void*)0)) {
                result_1->mRestrict=self->mRestrict;
            }
            if(self!=((void*)0)) {
                result_1->mImmutable=self->mImmutable;
            }
            if(self!=((void*)0)) {
                result_1->mHeap=self->mHeap;
            }
            if(self!=((void*)0)) {
                result_1->mDummyHeap=self->mDummyHeap;
            }
            if(self!=((void*)0)) {
                result_1->mNoHeap=self->mNoHeap;
            }
            if(self!=((void*)0)) {
                result_1->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(self!=((void*)0)) {
                result_1->mRefference=self->mRefference;
            }
            if(self!=((void*)0)) {
                result_1->mException=self->mException;
            }
            if(self!=((void*)0)) {
                result_1->mPointerNum=self->mPointerNum;
            }
            if(self!=((void*)0)) {
                result_1->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(self!=((void*)0)) {
                result_1->mSizeNum=self->mSizeNum;
            }
            if(self!=((void*)0)) {
                result_1->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(self!=((void*)0)) {
                result_1->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                __dec_obj21=result_1->mOriginalTypeName;
                result_1->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value32=string_clone(self->mOriginalTypeName))));
                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0); }
                if(right_value32) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_1->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(self!=((void*)0)) {
                result_1->mFunctionParam=self->mFunctionParam;
            }
            if(self!=((void*)0)) {
                result_1->mAllocaValue=self->mAllocaValue;
            }
            if(self!=((void*)0)) {
                result_1->mGenericsStruct=self->mGenericsStruct;
            }
            if(self!=((void*)0)) {
                result_1->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(self!=((void*)0)) {
                result_1->mInline=self->mInline;
            }
            struct sType* __result25__ = result_1;
            if(result_1) { come_call_finalizer(sType_finalize,result_1, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result25__;
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
                    come_release_malloced_mem();
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
                    come_release_malloced_mem();
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
                    come_release_malloced_mem();
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* right_value4;
struct tuple1$1sTypeph* result_8;
void* right_value5;
struct sType* __dec_obj4;
memset(&right_value4, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct tuple1$1sTypeph*)); /* ddd */
memset(&right_value5, 0, sizeof(void*));
                    if(self==(void*)0) {
                        struct tuple1$1sTypeph* __result12__ = (void*)0;
                        come_release_malloced_mem();
                        return __result12__;
                    }
                    result_8=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                    if(right_value4) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        __dec_obj4=result_8->v1;
                        result_8->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value5=sType_clone(self->v1))));
                        if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0); }
                        if(right_value5) { come_call_finalizer(sType_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    struct tuple1$1sTypeph* __result13__ = result_8;
                    if(result_8) { come_call_finalizer(tuple1$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result13__;
                come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* right_value8;
void* right_value9;
struct list$1sTypeph* result_9;
struct list_item$1sTypeph* it_10;
void* right_value13;
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_10, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value13, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1sTypeph* __result14__ = ((void*)0);
                        come_release_malloced_mem();
                        return __result14__;
                    }
                    result_9=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value9=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value8=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
                    if(right_value9) { come_call_finalizer(list$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0); }
                    it_10=self->head;
                    while(it_10!=((void*)0)) {
                        list$1sTypephp_push_back2(result_9,(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_clone(it_10->item)))));
                        if(right_value13) { come_call_finalizer(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0); }
                        it_10=it_10->next;
                    }
                    struct list$1sTypeph* __result16__ = result_9;
                    if(result_9) { come_call_finalizer(list$1sTypephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result16__;
                come_release_malloced_mem();
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1sTypeph* __result15__ = self;
                        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result15__;
                    come_release_malloced_mem();
}

static void list$1sTypephp_push_back2(struct list$1sTypeph* self, struct sType* item){
void* right_value10;
struct list_item$1sTypeph* litem_11;
struct sType* __dec_obj7;
void* right_value11;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj8;
void* right_value12;
struct list_item$1sTypeph* litem_13;
struct sType* __dec_obj9;
memset(&right_value10, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value11, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value12, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                            if(self->len==0) {
                                litem_11=((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_11->prev=((void*)0);
                                litem_11->next=((void*)0);
                                __dec_obj7=litem_11->item;
                                litem_11->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0); }
                                self->tail=litem_11;
                                self->head=litem_11;
                            }
                            else if(self->len==1) {
                                litem_12=((struct list_item$1sTypeph*)(right_value11=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_12->prev=self->head;
                                litem_12->next=((void*)0);
                                __dec_obj8=litem_12->item;
                                litem_12->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0); }
                                self->tail=litem_12;
                                self->head->next=litem_12;
                            }
                            else {
                                litem_13=((struct list_item$1sTypeph*)(right_value12=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_13->prev=self->tail;
                                litem_13->next=((void*)0);
                                __dec_obj9=litem_13->item;
                                litem_13->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0); }
                                self->tail->next=litem_13;
                                self->tail=litem_13;
                            }
                            self->len++;
                            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* right_value15;
void* right_value16;
struct list$1sNodeph* result_14;
struct list_item$1sNodeph* it_15;
void* right_value21;
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct list$1sNodeph*)); /* ddd */
memset(&it_15, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value21, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1sNodeph* __result17__ = ((void*)0);
                        come_release_malloced_mem();
                        return __result17__;
                    }
                    result_14=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value16=list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1)))))))));
                    if(right_value16) { come_call_finalizer(list$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
                    it_15=self->head;
                    while(it_15!=((void*)0)) {
                        list$1sNodephp_push_back2(result_14,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value21=sNodep_clone(it_15->item)))));
                        if(right_value21) { right_value21 = come_decrement_ref_count(right_value21, ((struct sNode*)right_value21)->finalize, ((struct sNode*)right_value21)->_protocol_obj, 1, 0); } 
                        it_15=it_15->next;
                    }
                    struct list$1sNodeph* __result21__ = result_14;
                    if(result_14) { come_call_finalizer(list$1sNodephp_finalize,result_14, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result21__;
                come_release_malloced_mem();
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1sNodeph* __result18__ = self;
                        if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result18__;
                    come_release_malloced_mem();
}

static void list$1sNodephp_push_back2(struct list$1sNodeph* self, struct sNode* item){
void* right_value17;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj11;
void* right_value18;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj12;
void* right_value19;
struct list_item$1sNodeph* litem_18;
struct sNode* __dec_obj13;
memset(&right_value17, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
memset(&right_value19, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1sNodeph*)); /* ddd */
                            if(self->len==0) {
                                litem_16=((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                litem_16->prev=((void*)0);
                                litem_16->next=((void*)0);
                                __dec_obj11=litem_16->item;
                                litem_16->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0); }
                                self->tail=litem_16;
                                self->head=litem_16;
                            }
                            else if(self->len==1) {
                                litem_17=((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                litem_17->prev=self->head;
                                litem_17->next=((void*)0);
                                __dec_obj12=litem_17->item;
                                litem_17->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0); }
                                self->tail=litem_17;
                                self->head->next=litem_17;
                            }
                            else {
                                litem_18=((struct list_item$1sNodeph*)(right_value19=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1))));
                                litem_18->prev=self->tail;
                                litem_18->next=((void*)0);
                                __dec_obj13=litem_18->item;
                                litem_18->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0); }
                                self->tail->next=litem_18;
                                self->tail=litem_18;
                            }
                            self->len++;
                            if(item) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1); } 
                        come_release_malloced_mem();
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value20;
struct sNode* result_19;
memset(&right_value20, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct sNode*)); /* ddd */
                            if(self==(void*)0) {
                                struct sNode* __result19__ = (void*)0;
                                come_release_malloced_mem();
                                return __result19__;
                            }
                            result_19=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1)))));
                            if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                result_19->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(self!=((void*)0)) {
                                result_19->finalize=self->finalize;
                            }
                            if(self!=((void*)0)) {
                                result_19->clone=self->clone;
                            }
                            if(self!=((void*)0)) {
                                result_19->compile=self->compile;
                            }
                            if(self!=((void*)0)) {
                                result_19->sline=self->sline;
                            }
                            if(self!=((void*)0)) {
                                result_19->sname=self->sname;
                            }
                            if(self!=((void*)0)) {
                                result_19->terminated=self->terminated;
                            }
                            struct sNode* __result20__ = result_19;
                            come_release_malloced_mem();
                            return __result20__;
                        come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* right_value24;
void* right_value25;
struct list$1charph* result_20;
struct list_item$1charph* it_21;
void* right_value29;
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&it_21, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value29, 0, sizeof(void*));
                    if(self==((void*)0)) {
                        struct list$1charph* __result22__ = ((void*)0);
                        come_release_malloced_mem();
                        return __result22__;
                    }
                    result_20=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value25=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value24=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
                    if(right_value25) { come_call_finalizer(list$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0); }
                    it_21=self->head;
                    while(it_21!=((void*)0)) {
                        list$1charphp_push_back2(result_20,(char*)come_increment_ref_count(((char*)(right_value29=string_clone(it_21->item)))));
                        if(right_value29) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0); }
                        it_21=it_21->next;
                    }
                    struct list$1charph* __result24__ = result_20;
                    if(result_20) { come_call_finalizer(list$1charphp_finalize,result_20, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
                    return __result24__;
                come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1charph* __result23__ = self;
                        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result23__;
                    come_release_malloced_mem();
}

static void list$1charphp_push_back2(struct list$1charph* self, char* item){
void* right_value26;
struct list_item$1charph* litem_22;
char* __dec_obj16;
void* right_value27;
struct list_item$1charph* litem_23;
char* __dec_obj17;
void* right_value28;
struct list_item$1charph* litem_24;
char* __dec_obj18;
memset(&right_value26, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value27, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value28, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1charph*)); /* ddd */
                            if(self->len==0) {
                                litem_22=((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                litem_22->prev=((void*)0);
                                litem_22->next=((void*)0);
                                __dec_obj16=litem_22->item;
                                litem_22->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_22;
                                self->head=litem_22;
                            }
                            else if(self->len==1) {
                                litem_23=((struct list_item$1charph*)(right_value27=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                litem_23->prev=self->head;
                                litem_23->next=((void*)0);
                                __dec_obj17=litem_23->item;
                                litem_23->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_23;
                                self->head->next=litem_23;
                            }
                            else {
                                litem_24=((struct list_item$1charph*)(right_value28=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                                litem_24->prev=self->tail;
                                litem_24->next=((void*)0);
                                __dec_obj18=litem_24->item;
                                litem_24->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
                                self->tail->next=litem_24;
                                self->tail=litem_24;
                            }
                            self->len++;
                            if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
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

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj22;
void* right_value38;
char* __dec_obj23;
memset(&right_value38, 0, sizeof(void*));
    __dec_obj22=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj23=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value38=__builtin_string(info->sname))));
    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
    if(right_value38) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0); }
    struct sDerefferenceNode* __result28__ = self;
    if(self) { come_call_finalizer(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result28__;
come_release_malloced_mem();
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info){
    int __result29__ = self->sline;
    come_release_malloced_mem();
    return __result29__;
come_release_malloced_mem();
}

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info){
void* right_value39;
memset(&right_value39, 0, sizeof(void*));
    char* __result30__ = ((char*)(right_value39=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result30__;
come_release_malloced_mem();
}

_Bool sDerefferenceNode_terminated(){
    _Bool __result31__ = (_Bool)0;
    come_release_malloced_mem();
    return __result31__;
come_release_malloced_mem();
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
struct sNode* value_33;
void* right_value40;
struct CVALUE* left_value_34;
void* right_value41;
struct CVALUE* come_value_35;
void* right_value42;
char* __dec_obj24;
void* right_value43;
struct sType* __dec_obj25;
memset(&value_33, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value40, 0, sizeof(void*));
memset(&left_value_34, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value41, 0, sizeof(void*));
memset(&come_value_35, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
    value_33=self->value;
    if(!value_33->compile(value_33->_protocol_obj,info)) {
        _Bool __result32__ = (_Bool)0;
        come_release_malloced_mem();
        return __result32__;
    }
    left_value_34=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value40=get_value_from_stack(-1,info))));
    if(right_value40) { come_call_finalizer(CVALUE_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_35=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value41=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value41) { come_call_finalizer(CVALUE_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj24=come_value_35->c_value;
    come_value_35->c_value=(char*)come_increment_ref_count(((char*)(right_value42=xsprintf("*%s",left_value_34->c_value))));
    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
    if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
    __dec_obj25=come_value_35->type;
    come_value_35->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value43=sType_clone(left_value_34->type))));
    if(__dec_obj25) { come_call_finalizer(sType_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value43) { come_call_finalizer(sType_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
    come_value_35->type->mPointerNum--;
    come_value_35->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_35->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_35));
    _Bool __result33__ = (_Bool)1;
    if(left_value_34) { come_call_finalizer(CVALUE_finalize,left_value_34, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_35) { come_call_finalizer(CVALUE_finalize,come_value_35, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result33__;
    _Bool __result34__ = (_Bool)1;
    if(left_value_34) { come_call_finalizer(CVALUE_finalize,left_value_34, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_35) { come_call_finalizer(CVALUE_finalize,come_value_35, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result34__;
come_release_malloced_mem();
}

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* right_value44;
struct list_item$1CVALUEph* litem_36;
struct CVALUE* __dec_obj26;
void* right_value45;
struct list_item$1CVALUEph* litem_37;
struct CVALUE* __dec_obj27;
void* right_value46;
struct list_item$1CVALUEph* litem_38;
struct CVALUE* __dec_obj28;
memset(&right_value44, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value45, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value46, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
        if(self->len==0) {
            litem_36=((struct list_item$1CVALUEph*)(right_value44=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_36->prev=((void*)0);
            litem_36->next=((void*)0);
            __dec_obj26=litem_36->item;
            litem_36->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj26) { come_call_finalizer(CVALUE_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_36;
            self->head=litem_36;
        }
        else if(self->len==1) {
            litem_37=((struct list_item$1CVALUEph*)(right_value45=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_37->prev=self->head;
            litem_37->next=((void*)0);
            __dec_obj27=litem_37->item;
            litem_37->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj27) { come_call_finalizer(CVALUE_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0); }
            self->tail=litem_37;
            self->head->next=litem_37;
        }
        else {
            litem_38=((struct list_item$1CVALUEph*)(right_value46=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_38->prev=self->tail;
            litem_38->next=((void*)0);
            __dec_obj28=litem_38->item;
            litem_38->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj28) { come_call_finalizer(CVALUE_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0); }
            self->tail->next=litem_38;
            self->tail=litem_38;
        }
        self->len++;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj29;
void* right_value47;
char* __dec_obj30;
memset(&right_value47, 0, sizeof(void*));
    __dec_obj29=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj30=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value47=__builtin_string(info->sname))));
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
    if(right_value47) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0); }
    struct sRefferenceNode* __result35__ = self;
    if(self) { come_call_finalizer(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result35__;
come_release_malloced_mem();
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info){
    int __result36__ = self->sline;
    come_release_malloced_mem();
    return __result36__;
come_release_malloced_mem();
}

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info){
void* right_value48;
memset(&right_value48, 0, sizeof(void*));
    char* __result37__ = ((char*)(right_value48=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result37__;
come_release_malloced_mem();
}

_Bool sRefferenceNode_terminated(){
    _Bool __result38__ = (_Bool)0;
    come_release_malloced_mem();
    return __result38__;
come_release_malloced_mem();
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
struct sNode* value_39;
void* right_value49;
struct CVALUE* left_value_40;
void* right_value50;
struct CVALUE* come_value_41;
void* right_value51;
char* __dec_obj31;
void* right_value52;
struct sType* __dec_obj32;
memset(&value_39, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value49, 0, sizeof(void*));
memset(&left_value_40, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value50, 0, sizeof(void*));
memset(&come_value_41, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
    value_39=self->value;
    if(!value_39->compile(value_39->_protocol_obj,info)) {
        _Bool __result39__ = (_Bool)0;
        come_release_malloced_mem();
        return __result39__;
    }
    left_value_40=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value49=get_value_from_stack(-1,info))));
    if(right_value49) { come_call_finalizer(CVALUE_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_41=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value50=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value50) { come_call_finalizer(CVALUE_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj31=come_value_41->c_value;
    come_value_41->c_value=(char*)come_increment_ref_count(((char*)(right_value51=xsprintf("&%s",left_value_40->c_value))));
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
    if(right_value51) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0); }
    __dec_obj32=come_value_41->type;
    come_value_41->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(left_value_40->type))));
    if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value52) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
    come_value_41->type->mPointerNum--;
    come_value_41->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_41->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_41));
    _Bool __result40__ = (_Bool)1;
    if(left_value_40) { come_call_finalizer(CVALUE_finalize,left_value_40, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_41) { come_call_finalizer(CVALUE_finalize,come_value_41, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result40__;
    _Bool __result41__ = (_Bool)1;
    if(left_value_40) { come_call_finalizer(CVALUE_finalize,left_value_40, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_41) { come_call_finalizer(CVALUE_finalize,come_value_41, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result41__;
come_release_malloced_mem();
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj33;
void* right_value53;
char* __dec_obj34;
memset(&right_value53, 0, sizeof(void*));
    __dec_obj33=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj34=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value53=__builtin_string(info->sname))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
    if(right_value53) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0); }
    struct sReverseNode* __result42__ = self;
    if(self) { come_call_finalizer(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result42__;
come_release_malloced_mem();
}

static void sReverseNode_finalize(struct sReverseNode* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info){
    int __result43__ = self->sline;
    come_release_malloced_mem();
    return __result43__;
come_release_malloced_mem();
}

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info){
void* right_value54;
memset(&right_value54, 0, sizeof(void*));
    char* __result44__ = ((char*)(right_value54=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result44__;
come_release_malloced_mem();
}

_Bool sReverseNode_terminated(){
    _Bool __result45__ = (_Bool)0;
    come_release_malloced_mem();
    return __result45__;
come_release_malloced_mem();
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
struct sNode* value_42;
void* right_value55;
struct CVALUE* left_value_43;
void* right_value56;
struct CVALUE* come_value_44;
void* right_value57;
char* __dec_obj35;
void* right_value58;
struct sType* __dec_obj36;
memset(&value_42, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value55, 0, sizeof(void*));
memset(&left_value_43, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value56, 0, sizeof(void*));
memset(&come_value_44, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
    value_42=self->value;
    if(!value_42->compile(value_42->_protocol_obj,info)) {
        _Bool __result46__ = (_Bool)0;
        come_release_malloced_mem();
        return __result46__;
    }
    left_value_43=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value55=get_value_from_stack(-1,info))));
    if(right_value55) { come_call_finalizer(CVALUE_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_44=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value56=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value56) { come_call_finalizer(CVALUE_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj35=come_value_44->c_value;
    come_value_44->c_value=(char*)come_increment_ref_count(((char*)(right_value57=xsprintf("!%s",left_value_43->c_value))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
    if(right_value57) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0); }
    __dec_obj36=come_value_44->type;
    come_value_44->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(left_value_43->type))));
    if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value58) { come_call_finalizer(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0); }
    come_value_44->type->mPointerNum--;
    come_value_44->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_44->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_44));
    _Bool __result47__ = (_Bool)1;
    if(left_value_43) { come_call_finalizer(CVALUE_finalize,left_value_43, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_44) { come_call_finalizer(CVALUE_finalize,come_value_44, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result47__;
come_release_malloced_mem();
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* right_value59;
char* __dec_obj37;
void* right_value69;
struct list$1tuple2$2charphsNodephph* __dec_obj43;
void* right_value70;
char* __dec_obj44;
memset(&right_value59, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
    __dec_obj37=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value59=__builtin_string(fun_name))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
    if(right_value59) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0); }
    __dec_obj43=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value69=list$1tuple2$2charphsNodephphp_clone(params))));
    if(__dec_obj43) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value69) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0); }
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value70=__builtin_string(info->sname))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
    if(right_value70) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0); }
    struct sFunCallNode* __result54__ = self;
    if(self) { come_call_finalizer(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result54__;
come_release_malloced_mem();
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* right_value60;
void* right_value61;
struct list$1tuple2$2charphsNodephph* result_47;
struct list_item$1tuple2$2charphsNodephph* it_48;
void* right_value68;
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&result_47, 0, sizeof(struct list$1tuple2$2charphsNodephph*)); /* ddd */
memset(&it_48, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value68, 0, sizeof(void*));
        if(self==((void*)0)) {
            struct list$1tuple2$2charphsNodephph* __result49__ = ((void*)0);
            come_release_malloced_mem();
            return __result49__;
        }
        result_47=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value61=list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value60=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1)))))))));
        if(right_value61) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0); }
        it_48=self->head;
        while(it_48!=((void*)0)) {
            list$1tuple2$2charphsNodephphp_push_back2(result_47,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value68=tuple2$2charphsNodephp_clone(it_48->item)))));
            if(right_value68) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0); }
            it_48=it_48->next;
        }
        struct list$1tuple2$2charphsNodephph* __result53__ = result_47;
        if(result_47) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_47, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result53__;
    come_release_malloced_mem();
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1tuple2$2charphsNodephph* __result50__ = self;
            if(self) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result50__;
        come_release_malloced_mem();
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_45;
struct list_item$1tuple2$2charphsNodephph* prev_it_46;
memset(&it_45, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&prev_it_46, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
                it_45=self->head;
                while(it_45!=((void*)0)) {
                    if(1) {
                        if(it_45->item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,it_45->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    prev_it_46=it_45;
                    it_45=it_45->next;
                    come_free_object(prev_it_46);
                }
            come_release_malloced_mem();
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0); }
                            }
                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0); } 
                            }
                        come_release_malloced_mem();
}

static void list$1tuple2$2charphsNodephphp_push_back2(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* right_value62;
struct list_item$1tuple2$2charphsNodephph* litem_49;
struct tuple2$2charphsNodeph* __dec_obj38;
void* right_value63;
struct list_item$1tuple2$2charphsNodephph* litem_50;
struct tuple2$2charphsNodeph* __dec_obj39;
void* right_value64;
struct list_item$1tuple2$2charphsNodephph* litem_51;
struct tuple2$2charphsNodeph* __dec_obj40;
memset(&right_value62, 0, sizeof(void*));
memset(&litem_49, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value63, 0, sizeof(void*));
memset(&litem_50, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value64, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
                if(self->len==0) {
                    litem_49=((struct list_item$1tuple2$2charphsNodephph*)(right_value62=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                    litem_49->prev=((void*)0);
                    litem_49->next=((void*)0);
                    __dec_obj38=litem_49->item;
                    litem_49->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj38) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_49;
                    self->head=litem_49;
                }
                else if(self->len==1) {
                    litem_50=((struct list_item$1tuple2$2charphsNodephph*)(right_value63=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                    litem_50->prev=self->head;
                    litem_50->next=((void*)0);
                    __dec_obj39=litem_50->item;
                    litem_50->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj39) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_50;
                    self->head->next=litem_50;
                }
                else {
                    litem_51=((struct list_item$1tuple2$2charphsNodephph*)(right_value64=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                    litem_51->prev=self->tail;
                    litem_51->next=((void*)0);
                    __dec_obj40=litem_51->item;
                    litem_51->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj40) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail->next=litem_51;
                    self->tail=litem_51;
                }
                self->len++;
                if(item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* right_value65;
struct tuple2$2charphsNodeph* result_52;
void* right_value66;
char* __dec_obj41;
void* right_value67;
struct sNode* __dec_obj42;
memset(&right_value65, 0, sizeof(void*));
memset(&result_52, 0, sizeof(struct tuple2$2charphsNodeph*)); /* ddd */
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple2$2charphsNodeph* __result51__ = (void*)0;
                    come_release_malloced_mem();
                    return __result51__;
                }
                result_52=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value65=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1)))));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj41=result_52->v1;
                    result_52->v1=(char*)come_increment_ref_count(((char*)(right_value66=string_clone(self->v1))));
                    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
                    if(right_value66) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj42=result_52->v2;
                    result_52->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=sNodep_clone(self->v2))));
                    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0); }
                    if(right_value67) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0); } 
                }
                struct tuple2$2charphsNodeph* __result52__ = result_52;
                come_release_malloced_mem();
                return __result52__;
            come_release_malloced_mem();
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
        if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
            if(self->fun_name) { self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0); }
        }
        if(self!=((void*)0)&&self->params!=((void*)0)) {
            if(self->params) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
        }
    come_release_malloced_mem();
}

int sFunCallNode_sline(struct sFunCallNode* self, struct sInfo* info){
    int __result55__ = self->sline;
    come_release_malloced_mem();
    return __result55__;
come_release_malloced_mem();
}

char* sFunCallNode_sname(struct sFunCallNode* self, struct sInfo* info){
void* right_value71;
memset(&right_value71, 0, sizeof(void*));
    char* __result56__ = ((char*)(right_value71=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result56__;
come_release_malloced_mem();
}

_Bool sFunCallNode_terminated(){
    _Bool __result57__ = (_Bool)0;
    come_release_malloced_mem();
    return __result57__;
come_release_malloced_mem();
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_53;
struct list$1tuple2$2charphsNodephph* params_54;
struct sVar* var__55;
struct sType* lambda_type_56;
void* right_value72;
struct sType* result_type_57;
void* right_value73;
void* right_value74;
struct list$1CVALUEph* come_params_60;
int i_61;
struct tuple2$2charphsNodeph* it_63;
struct tuple2$2charphsNodeph* multiple_assgin_var1;
char* label_65;
struct sNode* node_66;
void* right_value75;
struct CVALUE* come_value_67;
void* right_value76;
char* __dec_obj45;
void* right_value77;
void* right_value78;
struct buffer* buf_71;
int j_72;
struct CVALUE* it_74;
void* right_value79;
struct CVALUE* come_value_76;
void* right_value80;
char* __dec_obj46;
void* right_value81;
char* __dec_obj47;
void* right_value82;
struct sType* __dec_obj48;
void* right_value83;
char* __dec_obj49;
char* p_77;
int version_78;
char* p2_79;
int i_81;
void* right_value84;
char* new_fun_name_82;
void* right_value85;
char* __dec_obj50;
void* right_value86;
char* new_fun_name_86;
void* right_value87;
char* __dec_obj51;
int i_87;
void* right_value88;
char* new_fun_name_88;
void* right_value89;
char* __dec_obj52;
struct sFun* fun_89;
void* right_value90;
struct sType* result_type_90;
void* right_value91;
void* right_value92;
struct list$1sTypeph* param_types_91;
struct sType* it_93;
void* right_value93;
struct sType* it2_95;
void* right_value97;
void* right_value98;
struct sType* __dec_obj56;
void* right_value99;
void* right_value100;
struct list$1CVALUEph* come_params_99;
void* right_value101;
void* right_value107;
struct map$2charphCVALUEph* label_params_105;
int i_106;
struct tuple2$2charphsNodeph* it_107;
struct tuple2$2charphsNodeph* multiple_assgin_var2;
char* label_108;
struct sNode* node_109;
void* right_value108;
struct CVALUE* come_value_110;
void* right_value109;
char* __dec_obj58;
void* right_value116;
void* right_value117;
char* default_param_154;
char* param_name_155;
struct CVALUE* come_value_157;
struct buffer* source_158;
char* p_159;
char* head_160;
int sline_161;
void* right_value118;
struct buffer* __dec_obj59;
void* right_value119;
struct sNode* node_162;
struct buffer* __dec_obj60;
void* right_value120;
struct CVALUE* come_value_163;
void* right_value121;
char* __dec_obj61;
char* param_name_164;
struct CVALUE* come_value_165;
void* right_value125;
void* right_value126;
void* right_value127;
struct buffer* buf_169;
int j_170;
struct CVALUE* it_171;
void* right_value128;
struct CVALUE* come_value_172;
void* right_value129;
char* __dec_obj65;
void* right_value130;
char* __dec_obj66;
void* right_value131;
struct sType* __dec_obj67;
memset(&fun_name_53, 0, sizeof(char*)); /* ddd */
memset(&params_54, 0, sizeof(struct list$1tuple2$2charphsNodephph*)); /* ddd */
memset(&var__55, 0, sizeof(struct sVar*)); /* ddd */
memset(&lambda_type_56, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value72, 0, sizeof(void*));
memset(&result_type_57, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&come_params_60, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&i_61, 0, sizeof(int)); /* ddd */
memset(&it_63, 0, sizeof(struct tuple2$2charphsNodeph*)); /* ddd */
memset(&label_65, 0, sizeof(char*)); /* ccc */
memset(&node_66, 0, sizeof(struct sNode*)); /* ccc */
memset(&label_65, 0, sizeof(char*)); /* eee */
memset(&node_66, 0, sizeof(struct sNode*)); /* eee */
memset(&right_value75, 0, sizeof(void*));
memset(&come_value_67, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&buf_71, 0, sizeof(struct buffer*)); /* ddd */
memset(&j_72, 0, sizeof(int)); /* ddd */
memset(&it_74, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value79, 0, sizeof(void*));
memset(&come_value_76, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&p_77, 0, sizeof(char*)); /* ddd */
memset(&version_78, 0, sizeof(int)); /* ddd */
memset(&p2_79, 0, sizeof(char*)); /* ddd */
memset(&i_81, 0, sizeof(int)); /* bbb */
memset(&right_value84, 0, sizeof(void*));
memset(&new_fun_name_82, 0, sizeof(char*)); /* ddd */
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&new_fun_name_86, 0, sizeof(char*)); /* ddd */
memset(&right_value87, 0, sizeof(void*));
memset(&i_87, 0, sizeof(int)); /* ddd */
memset(&right_value88, 0, sizeof(void*));
memset(&new_fun_name_88, 0, sizeof(char*)); /* ddd */
memset(&right_value89, 0, sizeof(void*));
memset(&fun_89, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value90, 0, sizeof(void*));
memset(&result_type_90, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&param_types_91, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_93, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value93, 0, sizeof(void*));
memset(&it2_95, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&come_params_99, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value101, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&label_params_105, 0, sizeof(struct map$2charphCVALUEph*)); /* ddd */
memset(&i_106, 0, sizeof(int)); /* ddd */
memset(&it_107, 0, sizeof(struct tuple2$2charphsNodeph*)); /* ddd */
memset(&label_108, 0, sizeof(char*)); /* ccc */
memset(&node_109, 0, sizeof(struct sNode*)); /* ccc */
memset(&label_108, 0, sizeof(char*)); /* eee */
memset(&node_109, 0, sizeof(struct sNode*)); /* eee */
memset(&right_value108, 0, sizeof(void*));
memset(&come_value_110, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value109, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&default_param_154, 0, sizeof(char*)); /* ddd */
memset(&param_name_155, 0, sizeof(char*)); /* ddd */
memset(&come_value_157, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&source_158, 0, sizeof(struct buffer*)); /* ddd */
memset(&p_159, 0, sizeof(char*)); /* ddd */
memset(&head_160, 0, sizeof(char*)); /* ddd */
memset(&sline_161, 0, sizeof(int)); /* ddd */
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&node_162, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value120, 0, sizeof(void*));
memset(&come_value_163, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value121, 0, sizeof(void*));
memset(&param_name_164, 0, sizeof(char*)); /* ddd */
memset(&come_value_165, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&buf_169, 0, sizeof(struct buffer*)); /* ddd */
memset(&j_170, 0, sizeof(int)); /* ddd */
memset(&it_171, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value128, 0, sizeof(void*));
memset(&come_value_172, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
    fun_name_53=(char*)come_increment_ref_count(self->fun_name);
    params_54=self->params;
    var__55=get_variable_from_table(info->lv_table,fun_name_53);
    if(var__55) {
        lambda_type_56=var__55->mType;
        result_type_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(lambda_type_56->mResultType->v1))));
        if(right_value72) { come_call_finalizer(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0); }
        result_type_57->mStatic=(_Bool)0;
        come_params_60=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value74=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value73=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
        if(right_value74) { come_call_finalizer(list$1CVALUEphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0); }
        if(list$1sTypephp_length(lambda_type_56->mParamTypes)!=list$1tuple2$2charphsNodephphp_length(params_54)&&!lambda_type_56->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_53,list$1sTypephp_length(lambda_type_56->mParamTypes),list$1tuple2$2charphsNodephphp_length(params_54));
            _Bool __result61__ = (_Bool)0;
            if(result_type_57) { come_call_finalizer(sType_finalize,result_type_57, (void*)0, (void*)0, 0, 0, 0); }
            if(come_params_60) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_60, (void*)0, (void*)0, 0, 0, 0); }
            come_release_malloced_mem();
            return __result61__;
        }
        i_61=0;
        for(
        it_63=list$1tuple2$2charphsNodephphp_begin((params_54));
        !list$1tuple2$2charphsNodephphp_end((params_54));
        it_63=list$1tuple2$2charphsNodephphp_next((params_54))
        ){
            multiple_assgin_var1=it_63;
            label_65=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
            node_66=(struct sNode*)come_increment_ref_count(multiple_assgin_var1->v2);
            if(!node_66->compile(node_66->_protocol_obj,info)) {
                _Bool __result67__ = (_Bool)0;
                if(label_65) { label_65 = come_decrement_ref_count(label_65, (void*)0, (void*)0, 0, 0); }
                if(node_66) { node_66 = come_decrement_ref_count(node_66, ((struct sNode*)node_66)->finalize, ((struct sNode*)node_66)->_protocol_obj, 0, 0); } 
                if(result_type_57) { come_call_finalizer(sType_finalize,result_type_57, (void*)0, (void*)0, 0, 0, 0); }
                if(come_params_60) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_60, (void*)0, (void*)0, 0, 0, 0); }
                come_release_malloced_mem();
                return __result67__;
            }
            come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value75=get_value_from_stack(-1,info))));
            if(right_value75) { come_call_finalizer(CVALUE_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
            if(lambda_type_56->mVarArgs&&list$1sTypephp_operator_load_element(lambda_type_56->mParamTypes,i_61)==((void*)0)) {
            }
            else {
                if(list$1sTypephp_operator_load_element(lambda_type_56->mParamTypes,i_61)->mHeap&&come_value_67->type->mHeap) {
                    __dec_obj45=come_value_67->c_value;
                    come_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value76=increment_ref_count_object(come_value_67->type,come_value_67->c_value,info))));
                    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
                    if(right_value76) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0); }
                }
            }
            list$1CVALUEphp_push_back(come_params_60,(struct CVALUE*)come_increment_ref_count(come_value_67));
            dec_stack_ptr(1,info);
            i_61++;
            if(label_65) { label_65 = come_decrement_ref_count(label_65, (void*)0, (void*)0, 0, 0); }
            if(node_66) { node_66 = come_decrement_ref_count(node_66, ((struct sNode*)node_66)->finalize, ((struct sNode*)node_66)->_protocol_obj, 0, 0); } 
            if(come_value_67) { come_call_finalizer(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0); }
        }
        buf_71=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value78=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value77=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value77) { come_call_finalizer(buffer_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value78) { come_call_finalizer(buffer_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(buf_71,var__55->mCValueName);
        buffer_append_str(buf_71,"(");
        j_72=0;
        for(
        it_74=list$1CVALUEphp_begin((come_params_60));
        !list$1CVALUEphp_end((come_params_60));
        it_74=list$1CVALUEphp_next((come_params_60))
        ){
            buffer_append_str(buf_71,it_74->c_value);
            if(j_72!=list$1CVALUEphp_length(come_params_60)-1) {
                buffer_append_str(buf_71,",");
            }
            j_72++;
        }
        buffer_append_str(buf_71,")");
        come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value79=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value79) { come_call_finalizer(CVALUE_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj46=come_value_76->c_value;
        come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value80=buffer_to_string(buf_71))));
        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
        if(right_value80) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0); }
        if(lambda_type_56->mResultType->v1->mHeap) {
            __dec_obj47=come_value_76->c_value;
            come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value81=append_object_to_right_values(come_value_76->c_value,(struct sType*)come_increment_ref_count(lambda_type_56->mResultType->v1),info))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
            if(right_value81) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0); }
        }
        __dec_obj48=come_value_76->type;
        come_value_76->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_clone(result_type_57))));
        if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value82) { come_call_finalizer(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0); }
        come_value_76->type->mStatic=(_Bool)0;
        come_value_76->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_76->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
        if(result_type_57) { come_call_finalizer(sType_finalize,result_type_57, (void*)0, (void*)0, 0, 0, 0); }
        if(come_params_60) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_60, (void*)0, (void*)0, 0, 0, 0); }
        if(buf_71) { come_call_finalizer(buffer_finalize,buf_71, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_76) { come_call_finalizer(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(string_operator_equals(fun_name_53,"string")) {
            __dec_obj49=fun_name_53;
            fun_name_53=(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string("__builtin_string"))));
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
            if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(fun_name_53,"inherit")) {
            p_77=info->come_fun->mName;
            version_78=0;
            while(*p_77) {
                if(*p_77==95&&*(p_77+1)==118&&xisdigit(*(p_77+2))) {
                    p2_79=p_77+2;
                    version_78=0;
                    while(xisdigit(*p2_79)) {
                        version_78=version_78*10+(*p2_79-48);
                        p2_79++;
                    }
                    break;
                }
                else {
                    p_77++;
                }
            }
            char real_fun_name_80[2048];
            memset(&real_fun_name_80, 0, sizeof(real_fun_name_80)); /* aaa */
            memcpy(real_fun_name_80,info->come_fun->mName,p_77-info->come_fun->mName);
            real_fun_name_80[p_77-info->come_fun->mName]=0;
            for(
            i_81=version_78-1;
            i_81>=1;
            i_81--
            ){
                new_fun_name_82=(char*)come_increment_ref_count(((char*)(right_value84=xsprintf("%s_v%d",real_fun_name_80,i_81))));
                if(right_value84) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0); }
                if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_82)) {
                    __dec_obj50=fun_name_53;
                    fun_name_53=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(new_fun_name_82))));
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
                    if(right_value85) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0); }
                    break;
                }
                if(new_fun_name_82) { new_fun_name_82 = come_decrement_ref_count(new_fun_name_82, (void*)0, (void*)0, 0, 0); }
            }
            if(i_81==0) {
                new_fun_name_86=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("%s",real_fun_name_80))));
                if(right_value86) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0); }
                if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_86)) {
                    __dec_obj51=fun_name_53;
                    fun_name_53=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(new_fun_name_86))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
                    if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0); }
                }
                if(string_operator_equals(fun_name_53,info->come_fun->mName)) {
                    err_msg(info,"invalid inherit");
                    _Bool __result82__ = (_Bool)0;
                    if(new_fun_name_86) { new_fun_name_86 = come_decrement_ref_count(new_fun_name_86, (void*)0, (void*)0, 0, 0); }
                    come_release_malloced_mem();
                    return __result82__;
                }
            }
        }
        else {
            for(
            i_87=128;
            i_87>=1;
            i_87--
            ){
                new_fun_name_88=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s_v%d",fun_name_53,i_87))));
                if(right_value88) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0); }
                if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_88)) {
                    __dec_obj52=fun_name_53;
                    fun_name_53=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(new_fun_name_88))));
                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                    if(right_value89) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0); }
                    break;
                }
                if(new_fun_name_88) { new_fun_name_88 = come_decrement_ref_count(new_fun_name_88, (void*)0, (void*)0, 0, 0); }
            }
        }
        fun_89=map$2charphsFunphp_at(info->funcs,fun_name_53,((void*)0));
        if(fun_89==((void*)0)) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_53);
            _Bool __result83__ = (_Bool)0;
            come_release_malloced_mem();
            return __result83__;
        }
        result_type_90=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(fun_89->mResultType))));
        if(right_value90) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0); }
        result_type_90->mStatic=(_Bool)0;
        param_types_91=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value91=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
        if(right_value92) { come_call_finalizer(list$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0); }
        for(
        it_93=list$1sTypephp_begin((fun_89->mParamTypes));
        !list$1sTypephp_end((fun_89->mParamTypes));
        it_93=list$1sTypephp_next((fun_89->mParamTypes))
        ){
            it2_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=solve_generics(it_93,info->generics_type,info))));
            if(right_value93) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0); }
            list$1sTypephp_push_back(param_types_91,(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(it2_95)))));
            if(right_value97) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0); }
            if(it2_95) { come_call_finalizer(sType_finalize,it2_95, (void*)0, (void*)0, 0, 0, 0); }
        }
        __dec_obj56=result_type_90;
        result_type_90=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=solve_generics(result_type_90,info->generics_type,info))));
        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value98) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0); }
        come_params_99=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value100=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value99=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
        if(right_value100) { come_call_finalizer(list$1CVALUEphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0); }
        label_params_105=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value107=map$2charphCVALUEphp_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value101=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1)))))))));
        if(right_value107) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0); }
        i_106=0;
        for(
        it_107=list$1tuple2$2charphsNodephphp_begin((params_54));
        !list$1tuple2$2charphsNodephphp_end((params_54));
        it_107=list$1tuple2$2charphsNodephphp_next((params_54))
        ){
            multiple_assgin_var2=it_107;
            label_108=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            node_109=(struct sNode*)come_increment_ref_count(multiple_assgin_var2->v2);
            if(!node_109->compile(node_109->_protocol_obj,info)) {
                _Bool __result91__ = (_Bool)0;
                if(label_108) { label_108 = come_decrement_ref_count(label_108, (void*)0, (void*)0, 0, 0); }
                if(node_109) { node_109 = come_decrement_ref_count(node_109, ((struct sNode*)node_109)->finalize, ((struct sNode*)node_109)->_protocol_obj, 0, 0); } 
                if(result_type_90) { come_call_finalizer(sType_finalize,result_type_90, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_91) { come_call_finalizer(list$1sTypephp_finalize,param_types_91, (void*)0, (void*)0, 0, 0, 0); }
                if(come_params_99) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_99, (void*)0, (void*)0, 0, 0, 0); }
                if(label_params_105) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_105, (void*)0, (void*)0, 0, 0, 0); }
                come_release_malloced_mem();
                return __result91__;
            }
            come_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
            if(right_value108) { come_call_finalizer(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0); }
            if(fun_89->mVarArgs&&list$1sTypephp_operator_load_element(fun_89->mParamTypes,i_106)==((void*)0)) {
            }
            else {
                if(i_106<list$1sTypephp_length(fun_89->mParamTypes)&&list$1sTypephp_operator_load_element(param_types_91,i_106)->mHeap&&come_value_110->type->mHeap) {
                    __dec_obj58=come_value_110->c_value;
                    come_value_110->c_value=(char*)come_increment_ref_count(((char*)(right_value109=increment_ref_count_object(come_value_110->type,come_value_110->c_value,info))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
                    if(right_value109) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0); }
                }
            }
            if(label_108==((void*)0)) {
                list$1CVALUEphp_push_back(come_params_99,(struct CVALUE*)come_increment_ref_count(come_value_110));
                i_106++;
            }
            else {
                map$2charphCVALUEphp_insert(label_params_105,(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(label_108)))),(struct CVALUE*)come_increment_ref_count(come_value_110));
                if(right_value116) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0); }
            }
            dec_stack_ptr(1,info);
            if(label_108) { label_108 = come_decrement_ref_count(label_108, (void*)0, (void*)0, 0, 0); }
            if(node_109) { node_109 = come_decrement_ref_count(node_109, ((struct sNode*)node_109)->finalize, ((struct sNode*)node_109)->_protocol_obj, 0, 0); } 
            if(come_value_110) { come_call_finalizer(CVALUE_finalize,come_value_110, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(list$1tuple2$2charphsNodephphp_length(params_54)<list$1sTypephp_length(fun_89->mParamTypes)) {
            for(
            ;            i_106<list$1sTypephp_length(fun_89->mParamTypes);
            i_106++
            ){
                default_param_154=(char*)come_increment_ref_count(((char*)(right_value117=charp_clone(list$1charphp_operator_load_element(fun_89->mParamDefaultParametors,i_106)))));
                if(right_value117) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0); }
                param_name_155=list$1charphp_operator_load_element(fun_89->mParamNames,i_106);
                come_value_157=map$2charphCVALUEphp_operator_load_element(label_params_105,param_name_155);
                if(default_param_154&&string_operator_not_equals(default_param_154,"")) {
                    source_158=(struct buffer*)come_increment_ref_count(info->source);
                    p_159=info->p;
                    head_160=info->head;
                    sline_161=info->sline;
                    __dec_obj59=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value118=string_to_buffer(default_param_154))));
                    if(__dec_obj59) { come_call_finalizer(buffer_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value118) { come_call_finalizer(buffer_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0); }
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_162=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=expression_v13(info))));
                    if(right_value119) { right_value119 = come_decrement_ref_count(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0); } 
                    if(!node_162->compile(node_162->_protocol_obj,info)) {
                        _Bool __result110__ = (_Bool)0;
                        if(source_158) { come_call_finalizer(buffer_finalize,source_158, (void*)0, (void*)0, 0, 0, 0); }
                        if(node_162) { node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0, 0); } 
                        if(default_param_154) { default_param_154 = come_decrement_ref_count(default_param_154, (void*)0, (void*)0, 0, 0); }
                        if(result_type_90) { come_call_finalizer(sType_finalize,result_type_90, (void*)0, (void*)0, 0, 0, 0); }
                        if(param_types_91) { come_call_finalizer(list$1sTypephp_finalize,param_types_91, (void*)0, (void*)0, 0, 0, 0); }
                        if(come_params_99) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_99, (void*)0, (void*)0, 0, 0, 0); }
                        if(label_params_105) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_105, (void*)0, (void*)0, 0, 0, 0); }
                        come_release_malloced_mem();
                        return __result110__;
                    }
                    __dec_obj60=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_158);
                    if(__dec_obj60) { come_call_finalizer(buffer_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0); }
                    info->p=p_159;
                    info->head=head_160;
                    info->sline=sline_161;
                    come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
                    if(right_value120) { come_call_finalizer(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
                    if(list$1sTypephp_operator_load_element(param_types_91,i_106)->mHeap&&come_value_163->type->mHeap) {
                        __dec_obj61=come_value_163->c_value;
                        come_value_163->c_value=(char*)come_increment_ref_count(((char*)(right_value121=increment_ref_count_object(come_value_163->type,come_value_163->c_value,info))));
                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
                        if(right_value121) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0); }
                    }
                    list$1CVALUEphp_push_back(come_params_99,(struct CVALUE*)come_increment_ref_count(come_value_163));
                    dec_stack_ptr(1,info);
                    if(source_158) { come_call_finalizer(buffer_finalize,source_158, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_162) { node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0, 0); } 
                    if(come_value_163) { come_call_finalizer(CVALUE_finalize,come_value_163, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(come_value_157==((void*)0)) {
                        err_msg(info,"require parametor(%s)",fun_89->mName);
                        _Bool __result111__ = (_Bool)0;
                        if(default_param_154) { default_param_154 = come_decrement_ref_count(default_param_154, (void*)0, (void*)0, 0, 0); }
                        if(result_type_90) { come_call_finalizer(sType_finalize,result_type_90, (void*)0, (void*)0, 0, 0, 0); }
                        if(param_types_91) { come_call_finalizer(list$1sTypephp_finalize,param_types_91, (void*)0, (void*)0, 0, 0, 0); }
                        if(come_params_99) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_99, (void*)0, (void*)0, 0, 0, 0); }
                        if(label_params_105) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_105, (void*)0, (void*)0, 0, 0, 0); }
                        come_release_malloced_mem();
                        return __result111__;
                    }
                    else {
                        list$1CVALUEphp_push_back(come_params_99,((void*)0));
                    }
                }
                if(default_param_154) { default_param_154 = come_decrement_ref_count(default_param_154, (void*)0, (void*)0, 0, 0); }
            }
        }
        if(map$2charphCVALUEphp_length(label_params_105)>0) {
            for(
            i_106=0;
            i_106<list$1charphp_length(fun_89->mParamNames);
            i_106++
            ){
                param_name_164=list$1charphp_operator_load_element(fun_89->mParamNames,i_106);
                come_value_165=map$2charphCVALUEphp_operator_load_element(label_params_105,param_name_164);
                if(come_value_165) {
                    list$1CVALUEphp_replace(come_params_99,i_106,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=CVALUE_clone(come_value_165)))));
                    if(right_value125) { come_call_finalizer(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
        }
        if(list$1sTypephp_length(fun_89->mParamTypes)!=list$1CVALUEphp_length(come_params_99)&&!fun_89->mVarArgs&&string_operator_not_equals(fun_name_53,"__builtin_va_start")&&string_operator_not_equals(fun_name_53,"__builtin_va_end")) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_53,list$1sTypephp_length(fun_89->mParamTypes),list$1tuple2$2charphsNodephphp_length(params_54));
            _Bool __result116__ = (_Bool)0;
            if(result_type_90) { come_call_finalizer(sType_finalize,result_type_90, (void*)0, (void*)0, 0, 0, 0); }
            if(param_types_91) { come_call_finalizer(list$1sTypephp_finalize,param_types_91, (void*)0, (void*)0, 0, 0, 0); }
            if(come_params_99) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_99, (void*)0, (void*)0, 0, 0, 0); }
            if(label_params_105) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_105, (void*)0, (void*)0, 0, 0, 0); }
            come_release_malloced_mem();
            return __result116__;
        }
        buf_169=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value127=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value126=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value126) { come_call_finalizer(buffer_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value127) { come_call_finalizer(buffer_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(buf_169,fun_name_53);
        buffer_append_str(buf_169,"(");
        j_170=0;
        for(
        it_171=list$1CVALUEphp_begin((come_params_99));
        !list$1CVALUEphp_end((come_params_99));
        it_171=list$1CVALUEphp_next((come_params_99))
        ){
            buffer_append_str(buf_169,it_171->c_value);
            if(j_170!=list$1CVALUEphp_length(come_params_99)-1) {
                buffer_append_str(buf_169,",");
            }
            j_170++;
        }
        buffer_append_str(buf_169,")");
        come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value128) { come_call_finalizer(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj65=come_value_172->c_value;
        come_value_172->c_value=(char*)come_increment_ref_count(((char*)(right_value129=buffer_to_string(buf_169))));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
        if(right_value129) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0); }
        if(fun_89->mResultType->mHeap) {
            __dec_obj66=come_value_172->c_value;
            come_value_172->c_value=(char*)come_increment_ref_count(((char*)(right_value130=append_object_to_right_values(come_value_172->c_value,(struct sType*)come_increment_ref_count(result_type_90),info))));
            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0); }
            if(right_value130) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0); }
        }
        __dec_obj67=come_value_172->type;
        come_value_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(result_type_90))));
        if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value131) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0); }
        come_value_172->type->mStatic=(_Bool)0;
        come_value_172->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_172->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
        if(result_type_90) { come_call_finalizer(sType_finalize,result_type_90, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_91) { come_call_finalizer(list$1sTypephp_finalize,param_types_91, (void*)0, (void*)0, 0, 0, 0); }
        if(come_params_99) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_99, (void*)0, (void*)0, 0, 0, 0); }
        if(label_params_105) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_105, (void*)0, (void*)0, 0, 0, 0); }
        if(buf_169) { come_call_finalizer(buffer_finalize,buf_169, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_172) { come_call_finalizer(CVALUE_finalize,come_value_172, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result117__ = (_Bool)1;
    if(fun_name_53) { fun_name_53 = come_decrement_ref_count(fun_name_53, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result117__;
come_release_malloced_mem();
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1CVALUEph* __result58__ = self;
            if(self) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result58__;
        come_release_malloced_mem();
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_58;
struct list_item$1CVALUEph* prev_it_59;
memset(&it_58, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&prev_it_59, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
                it_58=self->head;
                while(it_58!=((void*)0)) {
                    if(1) {
                        if(it_58->item) { come_call_finalizer(CVALUE_finalize,it_58->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    prev_it_59=it_58;
                    it_58=it_58->next;
                    come_free_object(prev_it_59);
                }
            come_release_malloced_mem();
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
            int __result59__ = self->len;
            come_release_malloced_mem();
            return __result59__;
        come_release_malloced_mem();
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
            int __result60__ = self->len;
            come_release_malloced_mem();
            return __result60__;
        come_release_malloced_mem();
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* result_62;
memset(&result_62, 0, sizeof(struct tuple2$2charphsNodeph*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct tuple2$2charphsNodeph* __result62__ = self->it->item;
                come_release_malloced_mem();
                return __result62__;
            }
            memset(&result_62,0,sizeof(struct tuple2$2charphsNodeph*));
            struct tuple2$2charphsNodeph* __result63__ = result_62;
            come_release_malloced_mem();
            return __result63__;
        come_release_malloced_mem();
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
            _Bool __result64__ = self->it==((void*)0);
            come_release_malloced_mem();
            return __result64__;
        come_release_malloced_mem();
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* result_64;
memset(&result_64, 0, sizeof(struct tuple2$2charphsNodeph*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct tuple2$2charphsNodeph* __result65__ = self->it->item;
                come_release_malloced_mem();
                return __result65__;
            }
            memset(&result_64,0,sizeof(struct tuple2$2charphsNodeph*));
            struct tuple2$2charphsNodeph* __result66__ = result_64;
            come_release_malloced_mem();
            return __result66__;
        come_release_malloced_mem();
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_68;
memset(&default_value_68, 0, sizeof(struct sType*)); /* bbb */
                memset(&default_value_68,0,sizeof(struct sType*));
                struct sType* __result70__ = list$1sTypephp_item(self,index,default_value_68);
                come_release_malloced_mem();
                return __result70__;
            come_release_malloced_mem();
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_69;
int i_70;
memset(&it_69, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&i_70, 0, sizeof(int)); /* ddd */
                    if(position<0) {
                        position+=self->len;
                    }
                    it_69=self->head;
                    i_70=0;
                    while(it_69!=((void*)0)) {
                        if(position==i_70) {
                            struct sType* __result68__ = it_69->item;
                            come_release_malloced_mem();
                            return __result68__;
                        }
                        it_69=it_69->next;
                        i_70++;
                    }
                    struct sType* __result69__ = default_value;
                    come_release_malloced_mem();
                    return __result69__;
                come_release_malloced_mem();
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
struct CVALUE* result_73;
memset(&result_73, 0, sizeof(struct CVALUE*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct CVALUE* __result71__ = self->it->item;
                come_release_malloced_mem();
                return __result71__;
            }
            memset(&result_73,0,sizeof(struct CVALUE*));
            struct CVALUE* __result72__ = result_73;
            come_release_malloced_mem();
            return __result72__;
        come_release_malloced_mem();
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
            _Bool __result73__ = self->it==((void*)0);
            come_release_malloced_mem();
            return __result73__;
        come_release_malloced_mem();
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
struct CVALUE* result_75;
memset(&result_75, 0, sizeof(struct CVALUE*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct CVALUE* __result74__ = self->it->item;
                come_release_malloced_mem();
                return __result74__;
            }
            memset(&result_75,0,sizeof(struct CVALUE*));
            struct CVALUE* __result75__ = result_75;
            come_release_malloced_mem();
            return __result75__;
        come_release_malloced_mem();
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
                int __result76__ = self->len;
                come_release_malloced_mem();
                return __result76__;
            come_release_malloced_mem();
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
struct sFun* default_value_83;
memset(&default_value_83, 0, sizeof(struct sFun*)); /* bbb */
                    memset(&default_value_83,0,sizeof(struct sFun*));
                    struct sFun* __result81__ = map$2charphsFunphp_at(self,key,default_value_83);
                    come_release_malloced_mem();
                    return __result81__;
                come_release_malloced_mem();
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_84;
int it_85;
memset(&hash_84, 0, sizeof(int)); /* ddd */
memset(&it_85, 0, sizeof(int)); /* ddd */
                        hash_84=string_get_hash_key(((char*)key))%self->size;
                        it_85=hash_84;
                        while((_Bool)1) {
                            if(self->item_existance[it_85]) {
                                if(charp_equals(self->keys[it_85],key)) {
                                    struct sFun* __result77__ = self->items[it_85];
                                    come_release_malloced_mem();
                                    return __result77__;
                                }
                                it_85++;
                                if(it_85>=self->size) {
                                    it_85=0;
                                }
                                else if(it_85==hash_84) {
                                    struct sFun* __result78__ = default_value;
                                    come_release_malloced_mem();
                                    return __result78__;
                                }
                            }
                            else {
                                struct sFun* __result79__ = default_value;
                                come_release_malloced_mem();
                                return __result79__;
                            }
                        }
                        struct sFun* __result80__ = default_value;
                        come_release_malloced_mem();
                        return __result80__;
                    come_release_malloced_mem();
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_92;
memset(&result_92, 0, sizeof(struct sType*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct sType* __result84__ = self->it->item;
                come_release_malloced_mem();
                return __result84__;
            }
            memset(&result_92,0,sizeof(struct sType*));
            struct sType* __result85__ = result_92;
            come_release_malloced_mem();
            return __result85__;
        come_release_malloced_mem();
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
            _Bool __result86__ = self->it==((void*)0);
            come_release_malloced_mem();
            return __result86__;
        come_release_malloced_mem();
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_94;
memset(&result_94, 0, sizeof(struct sType*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct sType* __result87__ = self->it->item;
                come_release_malloced_mem();
                return __result87__;
            }
            memset(&result_94,0,sizeof(struct sType*));
            struct sType* __result88__ = result_94;
            come_release_malloced_mem();
            return __result88__;
        come_release_malloced_mem();
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value94;
struct list_item$1sTypeph* litem_96;
struct sType* __dec_obj53;
void* right_value95;
struct list_item$1sTypeph* litem_97;
struct sType* __dec_obj54;
void* right_value96;
struct list_item$1sTypeph* litem_98;
struct sType* __dec_obj55;
memset(&right_value94, 0, sizeof(void*));
memset(&litem_96, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value95, 0, sizeof(void*));
memset(&litem_97, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value96, 0, sizeof(void*));
memset(&litem_98, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                if(self->len==0) {
                    litem_96=((struct list_item$1sTypeph*)(right_value94=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_96->prev=((void*)0);
                    litem_96->next=((void*)0);
                    __dec_obj53=litem_96->item;
                    litem_96->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_96;
                    self->head=litem_96;
                }
                else if(self->len==1) {
                    litem_97=((struct list_item$1sTypeph*)(right_value95=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_97->prev=self->head;
                    litem_97->next=((void*)0);
                    __dec_obj54=litem_97->item;
                    litem_97->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj54) { come_call_finalizer(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail=litem_97;
                    self->head->next=litem_97;
                }
                else {
                    litem_98=((struct list_item$1sTypeph*)(right_value96=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_98->prev=self->tail;
                    litem_98->next=((void*)0);
                    __dec_obj55=litem_98->item;
                    litem_98->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0); }
                    self->tail->next=litem_98;
                    self->tail=litem_98;
                }
                self->len++;
                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
}

static struct map$2charphCVALUEph* map$2charphCVALUEphp_initialize(struct map$2charphCVALUEph* self){
void* right_value102;
void* right_value103;
void* right_value104;
int i_100;
void* right_value105;
void* right_value106;
struct list$1charp* __dec_obj57;
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&i_100, 0, sizeof(int)); /* ddd */
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
            self->keys=((char**)(right_value102=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
            self->items=((struct CVALUE**)(right_value103=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(128)))));
            self->item_existance=((_Bool*)(right_value104=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
            for(
            i_100=0;
            i_100<128;
            i_100++
            ){
                self->item_existance[i_100]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj57=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value106=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value105=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            if(__dec_obj57) { come_call_finalizer(list$1charpp_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value106) { come_call_finalizer(list$1charpp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0); }
            self->it=0;
            struct map$2charphCVALUEph* __result90__ = self;
            if(self) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result90__;
        come_release_malloced_mem();
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                struct list$1charp* __result89__ = self;
                if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result89__;
            come_release_malloced_mem();
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_101;
struct list_item$1charp* prev_it_102;
memset(&it_101, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_102, 0, sizeof(struct list_item$1charp*)); /* ddd */
                    it_101=self->head;
                    while(it_101!=((void*)0)) {
                        if(0) {
                            if(it_101->item) { it_101->item = come_decrement_ref_count(it_101->item, (void*)0, (void*)0, 0, 0); }
                        }
                        prev_it_102=it_101;
                        it_101=it_101->next;
                        come_free_object(prev_it_102);
                    }
                come_release_malloced_mem();
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
int i_103;
int i_104;
memset(&i_103, 0, sizeof(int)); /* ddd */
memset(&i_104, 0, sizeof(int)); /* ddd */
                for(
                i_103=0;
                i_103<self->size;
                i_103++
                ){
                    if(self->item_existance[i_103]) {
                        if(1) {
                            if(self->items[i_103]) { come_call_finalizer(CVALUEp_finalize,self->items[i_103], (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->items);
                for(
                i_104=0;
                i_104<self->size;
                i_104++
                ){
                    if(self->item_existance[i_104]) {
                        if(1) {
                            if(self->keys[i_104]) { self->keys[i_104] = come_decrement_ref_count(self->keys[i_104], (void*)0, (void*)0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->keys);
                if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
            come_release_malloced_mem();
}

static void CVALUEp_finalize(struct CVALUE* self){
                                if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                                    if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->type!=((void*)0)) {
                                    if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
                                }
                            come_release_malloced_mem();
}

static void map$2charphCVALUEphp_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
int hash_126;
int it_127;
_Bool same_key_exist_144;
char* it2_146;
memset(&hash_126, 0, sizeof(int)); /* ddd */
memset(&it_127, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_144, 0, sizeof(_Bool)); /* ddd */
memset(&it2_146, 0, sizeof(char*)); /* ddd */
                    if(self->len*2>=self->size) {
                        map$2charphCVALUEphp_rehash(self);
                    }
                    hash_126=string_get_hash_key(key)%self->size;
                    it_127=hash_126;
                    while((_Bool)1) {
                        if(self->item_existance[it_127]) {
                            if(charp_equals(self->keys[it_127],key)) {
                                if(1) {
                                    list$1charpp_remove(self->key_list,self->keys[it_127]);
                                    if(self->keys[it_127]) { self->keys[it_127] = come_decrement_ref_count(self->keys[it_127], (void*)0, (void*)0, 0, 0); }
                                    self->keys[it_127]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    list$1charpp_remove(self->key_list,self->keys[it_127]);
                                    self->keys[it_127]=key;
                                }
                                if(1) {
                                    if(self->items[it_127]) { come_call_finalizer(CVALUEp_finalize,self->items[it_127], (void*)0, (void*)0, 0, 0, 0); }
                                    self->items[it_127]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_127]=item;
                                }
                                break;
                            }
                            it_127++;
                            if(it_127>=self->size) {
                                it_127=0;
                            }
                            else if(it_127==hash_126) {
                                printf("unexpected error in map.insert\n");
                                exit(2);
                            }
                        }
                        else {
                            self->item_existance[it_127]=(_Bool)1;
                            if(1) {
                                self->keys[it_127]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                self->keys[it_127]=key;
                            }
                            if(1) {
                                self->items[it_127]=(struct CVALUE*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_127]=item;
                            }
                            self->len++;
                            break;
                        }
                    }
                    same_key_exist_144=(_Bool)0;
                    for(
                    it2_146=list$1charpp_begin(self->key_list);
                    !list$1charpp_end(self->key_list);
                    it_127=list$1charpp_next(self->key_list)
                    ){
                        if(charp_equals(it2_146,key)) {
                            same_key_exist_144=(_Bool)1;
                        }
                    }
                    if(!same_key_exist_144) {
                        list$1charpp_push_back(self->key_list,key);
                    }
                    if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                    if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
}

static void map$2charphCVALUEphp_rehash(struct map$2charphCVALUEph* self){
int size_111;
void* right_value110;
char** keys_112;
void* right_value111;
struct CVALUE** items_113;
void* right_value112;
_Bool* item_existance_114;
int len_115;
char* it_117;
struct CVALUE* default_value_119;
struct CVALUE* it2_122;
int hash_123;
int n_124;
struct CVALUE* default_value_125;
memset(&size_111, 0, sizeof(int)); /* ddd */
memset(&right_value110, 0, sizeof(void*));
memset(&keys_112, 0, sizeof(char**)); /* ddd */
memset(&right_value111, 0, sizeof(void*));
memset(&items_113, 0, sizeof(struct CVALUE**)); /* ddd */
memset(&right_value112, 0, sizeof(void*));
memset(&item_existance_114, 0, sizeof(_Bool*)); /* ddd */
memset(&len_115, 0, sizeof(int)); /* ddd */
memset(&it_117, 0, sizeof(char*)); /* ddd */
memset(&default_value_119, 0, sizeof(struct CVALUE*)); /* bbb */
memset(&it2_122, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&hash_123, 0, sizeof(int)); /* ddd */
memset(&n_124, 0, sizeof(int)); /* ddd */
memset(&default_value_125, 0, sizeof(struct CVALUE*)); /* bbb */
                            size_111=self->size*3;
                            keys_112=((char**)(right_value110=(char**)come_calloc(1, sizeof(char*)*(1*(size_111)))));
                            items_113=((struct CVALUE**)(right_value111=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_111)))));
                            item_existance_114=((_Bool*)(right_value112=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_111)))));
                            len_115=0;
                            for(
                            it_117=map$2charphCVALUEphp_begin(self);
                            !map$2charphCVALUEphp_end(self);
                            it_117=map$2charphCVALUEphp_next(self)
                            ){
                                it2_122=map$2charphCVALUEphp_at(self,it_117,default_value_119);
                                hash_123=charp_get_hash_key(it_117)%size_111;
                                n_124=hash_123;
                                while((_Bool)1) {
                                    if(item_existance_114[n_124]) {
                                        n_124++;
                                        if(n_124>=size_111) {
                                            n_124=0;
                                        }
                                        else if(n_124==hash_123) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            exit(2);
                                        }
                                    }
                                    else {
                                        item_existance_114[n_124]=(_Bool)1;
                                        keys_112[n_124]=it_117;
                                        items_113[n_124]=map$2charphCVALUEphp_at(self,it_117,default_value_125);
                                        len_115++;
                                        break;
                                    }
                                }
                            }
                            come_free_object((char*)self->items);
                            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                            come_free_object((char*)self->keys);
                            self->keys=keys_112;
                            self->items=items_113;
                            self->item_existance=item_existance_114;
                            self->size=size_111;
                            self->len=len_115;
                        come_release_malloced_mem();
}

static char* map$2charphCVALUEphp_begin(struct map$2charphCVALUEph* self){
char* result_116;
memset(&result_116, 0, sizeof(char*)); /* bbb */
                                self->key_list->it=self->key_list->head;
                                if(self->key_list->it) {
                                    char* __result92__ = self->key_list->it->item;
                                    come_release_malloced_mem();
                                    return __result92__;
                                }
                                memset(&result_116,0,sizeof(char*));
                                char* __result93__ = result_116;
                                come_release_malloced_mem();
                                return __result93__;
                            come_release_malloced_mem();
}

static _Bool map$2charphCVALUEphp_end(struct map$2charphCVALUEph* self){
                                _Bool __result94__ = self->key_list->it==((void*)0);
                                come_release_malloced_mem();
                                return __result94__;
                            come_release_malloced_mem();
}

static char* map$2charphCVALUEphp_next(struct map$2charphCVALUEph* self){
char* result_118;
memset(&result_118, 0, sizeof(char*)); /* bbb */
                                self->key_list->it=self->key_list->it->next;
                                if(self->key_list->it) {
                                    char* __result95__ = self->key_list->it->item;
                                    come_release_malloced_mem();
                                    return __result95__;
                                }
                                memset(&result_118,0,sizeof(char*));
                                char* __result96__ = result_118;
                                come_release_malloced_mem();
                                return __result96__;
                            come_release_malloced_mem();
}

static struct CVALUE* map$2charphCVALUEphp_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
int hash_120;
int it_121;
memset(&hash_120, 0, sizeof(int)); /* ddd */
memset(&it_121, 0, sizeof(int)); /* ddd */
                                    hash_120=string_get_hash_key(((char*)key))%self->size;
                                    it_121=hash_120;
                                    while((_Bool)1) {
                                        if(self->item_existance[it_121]) {
                                            if(charp_equals(self->keys[it_121],key)) {
                                                struct CVALUE* __result97__ = self->items[it_121];
                                                come_release_malloced_mem();
                                                return __result97__;
                                            }
                                            it_121++;
                                            if(it_121>=self->size) {
                                                it_121=0;
                                            }
                                            else if(it_121==hash_120) {
                                                struct CVALUE* __result98__ = default_value;
                                                come_release_malloced_mem();
                                                return __result98__;
                                            }
                                        }
                                        else {
                                            struct CVALUE* __result99__ = default_value;
                                            come_release_malloced_mem();
                                            return __result99__;
                                        }
                                    }
                                    struct CVALUE* __result100__ = default_value;
                                    come_release_malloced_mem();
                                    return __result100__;
                                come_release_malloced_mem();
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_128;
struct list_item$1charp* it_129;
memset(&it2_128, 0, sizeof(int)); /* ddd */
memset(&it_129, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                        it2_128=0;
                                        it_129=self->head;
                                        while(it_129!=((void*)0)) {
                                            if(charp_equals(it_129->item,item)) {
                                                list$1charpp_delete(self,it2_128,it2_128+1);
                                                break;
                                            }
                                            it2_128++;
                                            it_129=it_129->next;
                                        }
                                    come_release_malloced_mem();
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_130;
struct list_item$1charp* it_133;
int i_134;
struct list_item$1charp* prev_it_135;
struct list_item$1charp* it_136;
int i_137;
struct list_item$1charp* prev_it_138;
struct list_item$1charp* it_139;
struct list_item$1charp* head_prev_it_140;
struct list_item$1charp* tail_it_141;
int i_142;
struct list_item$1charp* prev_it_143;
memset(&tmp_130, 0, sizeof(int)); /* ddd */
memset(&it_133, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_134, 0, sizeof(int)); /* ddd */
memset(&prev_it_135, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_136, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_137, 0, sizeof(int)); /* ddd */
memset(&prev_it_138, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_139, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_140, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_141, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_142, 0, sizeof(int)); /* ddd */
memset(&prev_it_143, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                    if(head<0) {
                                                        head+=self->len;
                                                    }
                                                    if(tail<0) {
                                                        tail+=self->len+1;
                                                    }
                                                    if(head>tail) {
                                                        tmp_130=tail;
                                                        tail=head;
                                                        head=tmp_130;
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
                                                        it_133=self->head;
                                                        i_134=0;
                                                        while(it_133!=((void*)0)) {
                                                            if(i_134<tail) {
                                                                prev_it_135=it_133;
                                                                it_133=it_133->next;
                                                                i_134++;
                                                                if(prev_it_135) { come_call_finalizer(list_item$1charpp_finalize,prev_it_135, (void*)0, (void*)0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else if(i_134==tail) {
                                                                self->head=it_133;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_133=it_133->next;
                                                                i_134++;
                                                            }
                                                        }
                                                    }
                                                    else if(tail==self->len) {
                                                        it_136=self->head;
                                                        i_137=0;
                                                        while(it_136!=((void*)0)) {
                                                            if(i_137==head) {
                                                                self->tail=it_136->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(i_137>=head) {
                                                                prev_it_138=it_136;
                                                                it_136=it_136->next;
                                                                i_137++;
                                                                if(prev_it_138) { come_call_finalizer(list_item$1charpp_finalize,prev_it_138, (void*)0, (void*)0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_136=it_136->next;
                                                                i_137++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_139=self->head;
                                                        head_prev_it_140=((void*)0);
                                                        tail_it_141=((void*)0);
                                                        i_142=0;
                                                        while(it_139!=((void*)0)) {
                                                            if(i_142==head) {
                                                                head_prev_it_140=it_139->prev;
                                                            }
                                                            if(i_142==tail) {
                                                                tail_it_141=it_139;
                                                            }
                                                            if(i_142>=head&&i_142<tail) {
                                                                prev_it_143=it_139;
                                                                it_139=it_139->next;
                                                                i_142++;
                                                                if(prev_it_143) { come_call_finalizer(list_item$1charpp_finalize,prev_it_143, (void*)0, (void*)0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_139=it_139->next;
                                                                i_142++;
                                                            }
                                                        }
                                                        if(head_prev_it_140!=((void*)0)) {
                                                            head_prev_it_140->next=tail_it_141;
                                                        }
                                                        if(tail_it_141!=((void*)0)) {
                                                            tail_it_141->prev=head_prev_it_140;
                                                        }
                                                    }
                                                come_release_malloced_mem();
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_131;
struct list_item$1charp* prev_it_132;
memset(&it_131, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_132, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                            it_131=self->head;
                                                            while(it_131!=((void*)0)) {
                                                                prev_it_132=it_131;
                                                                it_131=it_131->next;
                                                                if(prev_it_132) { come_call_finalizer(list_item$1charpp_finalize,prev_it_132, (void*)0, (void*)0, 0, 0, 0); }
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
char* result_145;
memset(&result_145, 0, sizeof(char*)); /* bbb */
                        self->it=self->head;
                        if(self->it) {
                            char* __result101__ = self->it->item;
                            come_release_malloced_mem();
                            return __result101__;
                        }
                        memset(&result_145,0,sizeof(char*));
                        char* __result102__ = result_145;
                        come_release_malloced_mem();
                        return __result102__;
                    come_release_malloced_mem();
}

static _Bool list$1charpp_end(struct list$1charp* self){
                        _Bool __result103__ = self->it==((void*)0);
                        come_release_malloced_mem();
                        return __result103__;
                    come_release_malloced_mem();
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_147;
memset(&result_147, 0, sizeof(char*)); /* bbb */
                        self->it=self->it->next;
                        if(self->it) {
                            char* __result104__ = self->it->item;
                            come_release_malloced_mem();
                            return __result104__;
                        }
                        memset(&result_147,0,sizeof(char*));
                        char* __result105__ = result_147;
                        come_release_malloced_mem();
                        return __result105__;
                    come_release_malloced_mem();
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value113;
struct list_item$1charp* litem_148;
void* right_value114;
struct list_item$1charp* litem_149;
void* right_value115;
struct list_item$1charp* litem_150;
memset(&right_value113, 0, sizeof(void*));
memset(&litem_148, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value114, 0, sizeof(void*));
memset(&litem_149, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value115, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1charp*)); /* ddd */
                            if(self->len==0) {
                                litem_148=((struct list_item$1charp*)(right_value113=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                litem_148->prev=((void*)0);
                                litem_148->next=((void*)0);
                                litem_148->item=item;
                                self->tail=litem_148;
                                self->head=litem_148;
                            }
                            else if(self->len==1) {
                                litem_149=((struct list_item$1charp*)(right_value114=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                litem_149->prev=self->head;
                                litem_149->next=((void*)0);
                                litem_149->item=item;
                                self->tail=litem_149;
                                self->head->next=litem_149;
                            }
                            else {
                                litem_150=((struct list_item$1charp*)(right_value115=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                litem_150->prev=self->tail;
                                litem_150->next=((void*)0);
                                litem_150->item=item;
                                self->tail->next=litem_150;
                                self->tail=litem_150;
                            }
                            self->len++;
                        come_release_malloced_mem();
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index){
char* default_value_151;
memset(&default_value_151, 0, sizeof(char*)); /* bbb */
                    memset(&default_value_151,0,sizeof(char*));
                    char* __result108__ = list$1charphp_item(self,index,default_value_151);
                    come_release_malloced_mem();
                    return __result108__;
                come_release_malloced_mem();
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_152;
int i_153;
memset(&it_152, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_153, 0, sizeof(int)); /* ddd */
                        if(position<0) {
                            position+=self->len;
                        }
                        it_152=self->head;
                        i_153=0;
                        while(it_152!=((void*)0)) {
                            if(position==i_153) {
                                char* __result106__ = it_152->item;
                                come_release_malloced_mem();
                                return __result106__;
                            }
                            it_152=it_152->next;
                            i_153++;
                        }
                        char* __result107__ = default_value;
                        come_release_malloced_mem();
                        return __result107__;
                    come_release_malloced_mem();
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
struct CVALUE* default_value_156;
memset(&default_value_156, 0, sizeof(struct CVALUE*)); /* bbb */
                    memset(&default_value_156,0,sizeof(struct CVALUE*));
                    struct CVALUE* __result109__ = map$2charphCVALUEphp_at(self,key,default_value_156);
                    come_release_malloced_mem();
                    return __result109__;
                come_release_malloced_mem();
}

static int map$2charphCVALUEphp_length(struct map$2charphCVALUEph* self){
            int __result112__ = self->len;
            come_release_malloced_mem();
            return __result112__;
        come_release_malloced_mem();
}

static int list$1charphp_length(struct list$1charph* self){
                int __result113__ = self->len;
                come_release_malloced_mem();
                return __result113__;
            come_release_malloced_mem();
}

static void list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
struct list_item$1CVALUEph* it_166;
int i_167;
struct CVALUE* __dec_obj62;
memset(&it_166, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&i_167, 0, sizeof(int)); /* ddd */
                        if(position<0) {
                            position+=self->len;
                        }
                        if(position>=self->len) {
                            list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            come_release_malloced_mem();
                            return;
                        }
                        it_166=self->head;
                        i_167=0;
                        while(it_166!=((void*)0)) {
                            if(position==i_167) {
                                __dec_obj62=it_166->item;
                                it_166->item=(struct CVALUE*)come_increment_ref_count(item);
                                if(__dec_obj62) { come_call_finalizer(CVALUE_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0); }
                                break;
                            }
                            it_166=it_166->next;
                            i_167++;
                        }
                        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                    come_release_malloced_mem();
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* right_value122;
struct CVALUE* result_168;
void* right_value123;
char* __dec_obj63;
void* right_value124;
struct sType* __dec_obj64;
memset(&right_value122, 0, sizeof(void*));
memset(&result_168, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct CVALUE* __result114__ = (void*)0;
                            come_release_malloced_mem();
                            return __result114__;
                        }
                        result_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
                        if(right_value122) { come_call_finalizer(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0); }
                        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                            __dec_obj63=result_168->c_value;
                            result_168->c_value=(char*)come_increment_ref_count(((char*)(right_value123=string_clone(self->c_value))));
                            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
                            if(right_value123) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->type!=((void*)0)) {
                            __dec_obj64=result_168->type;
                            result_168->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(self->type))));
                            if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value124) { come_call_finalizer(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)) {
                            result_168->var=self->var;
                        }
                        struct CVALUE* __result115__ = result_168;
                        if(result_168) { come_call_finalizer(CVALUE_finalize,result_168, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result115__;
                    come_release_malloced_mem();
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* right_value132;
struct sType* __dec_obj68;
void* right_value133;
struct sNode* __dec_obj69;
void* right_value134;
char* __dec_obj70;
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
    __dec_obj68=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type))));
    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value132) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj69=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value133=sNodep_clone(left))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0); }
    if(right_value133) { right_value133 = come_decrement_ref_count(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0); } 
    self->sline=info->sline;
    __dec_obj70=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string(info->sname))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0); }
    if(right_value134) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0); }
    struct sCastNode* __result118__ = self;
    if(self) { come_call_finalizer(sCastNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result118__;
come_release_malloced_mem();
}

static void sCastNode_finalize(struct sCastNode* self){
                if(self!=((void*)0)&&self->mType!=((void*)0)) {
                    if(self->mType) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
            come_release_malloced_mem();
}

int sCastNode_sline(struct sCastNode* self, struct sInfo* info){
    int __result119__ = self->sline;
    come_release_malloced_mem();
    return __result119__;
come_release_malloced_mem();
}

char* sCastNode_sname(struct sCastNode* self, struct sInfo* info){
void* right_value135;
memset(&right_value135, 0, sizeof(void*));
    char* __result120__ = ((char*)(right_value135=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result120__;
come_release_malloced_mem();
}

_Bool sCastNode_terminated(){
    _Bool __result121__ = (_Bool)0;
    come_release_malloced_mem();
    return __result121__;
come_release_malloced_mem();
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
struct sType* type_173;
struct sNode* left_174;
void* right_value136;
struct CVALUE* left_value_175;
void* right_value137;
struct sType* type2_176;
void* right_value138;
struct CVALUE* come_value_177;
void* right_value139;
void* right_value140;
char* __dec_obj71;
void* right_value141;
struct sType* __dec_obj72;
memset(&type_173, 0, sizeof(struct sType*)); /* ddd */
memset(&left_174, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value136, 0, sizeof(void*));
memset(&left_value_175, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value137, 0, sizeof(void*));
memset(&type2_176, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value138, 0, sizeof(void*));
memset(&come_value_177, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
    type_173=self->mType;
    left_174=self->mLeft;
    if(!left_174->compile(left_174->_protocol_obj,info)) {
        _Bool __result122__ = (_Bool)0;
        come_release_malloced_mem();
        return __result122__;
    }
    left_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=get_value_from_stack(-1,info))));
    if(right_value136) { come_call_finalizer(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type2_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=solve_generics(type_173,info->generics_type,info))));
    if(right_value137) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
    come_value_177=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value138) { come_call_finalizer(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj71=come_value_177->c_value;
    come_value_177->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("(%s)%s",((char*)(right_value139=make_type_name_string(type2_176,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_175->c_value))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
    if(right_value139) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0); }
    if(right_value140) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0); }
    __dec_obj72=come_value_177->type;
    come_value_177->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(type2_176))));
    if(__dec_obj72) { come_call_finalizer(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value141) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0); }
    come_value_177->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_177->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_177));
    _Bool __result123__ = (_Bool)1;
    if(left_value_175) { come_call_finalizer(CVALUE_finalize,left_value_175, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_176) { come_call_finalizer(sType_finalize,type2_176, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_177) { come_call_finalizer(CVALUE_finalize,come_value_177, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result123__;
come_release_malloced_mem();
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* right_value142;
struct sNode* __dec_obj73;
void* right_value143;
char* __dec_obj74;
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
    __dec_obj73=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=sNodep_clone(left))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0); }
    if(right_value142) { right_value142 = come_decrement_ref_count(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0); } 
    self->sline=info->sline;
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(info->sname))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0); }
    if(right_value143) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0); }
    struct sParenNode* __result124__ = self;
    if(self) { come_call_finalizer(sParenNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result124__;
come_release_malloced_mem();
}

static void sParenNode_finalize(struct sParenNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
            come_release_malloced_mem();
}

int sParenNode_sline(struct sParenNode* self, struct sInfo* info){
    int __result125__ = self->sline;
    come_release_malloced_mem();
    return __result125__;
come_release_malloced_mem();
}

char* sParenNode_sname(struct sParenNode* self, struct sInfo* info){
void* right_value144;
memset(&right_value144, 0, sizeof(void*));
    char* __result126__ = ((char*)(right_value144=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result126__;
come_release_malloced_mem();
}

_Bool sParenNode_terminated(){
    _Bool __result127__ = (_Bool)0;
    come_release_malloced_mem();
    return __result127__;
come_release_malloced_mem();
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
struct sNode* left_178;
void* right_value145;
struct CVALUE* left_value_179;
void* right_value146;
struct CVALUE* come_value_180;
void* right_value147;
char* __dec_obj75;
void* right_value148;
struct sType* __dec_obj76;
memset(&left_178, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value145, 0, sizeof(void*));
memset(&left_value_179, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value146, 0, sizeof(void*));
memset(&come_value_180, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
    left_178=self->mLeft;
    if(!left_178->compile(left_178->_protocol_obj,info)) {
        _Bool __result128__ = (_Bool)0;
        come_release_malloced_mem();
        return __result128__;
    }
    left_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=get_value_from_stack(-1,info))));
    if(right_value145) { come_call_finalizer(CVALUE_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value146) { come_call_finalizer(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj75=come_value_180->c_value;
    come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("(%s)",left_value_179->c_value))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
    if(right_value147) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0); }
    __dec_obj76=come_value_180->type;
    come_value_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(left_value_179->type))));
    if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value148) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
    come_value_180->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_180->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
    _Bool __result129__ = (_Bool)1;
    if(left_value_179) { come_call_finalizer(CVALUE_finalize,left_value_179, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_180) { come_call_finalizer(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result129__;
come_release_malloced_mem();
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* right_value149;
void* right_value150;
struct list$1tuple2$2charphsNodephph* params_181;
char* p_182;
int sline_183;
_Bool err_flag_184;
void* right_value151;
char* label_185;
void* right_value152;
char* __dec_obj77;
_Bool no_comma_186;
void* right_value153;
struct sNode* node_187;
void* right_value154;
struct sNode* __dec_obj78;
void* right_value158;
void* right_value159;
void* right_value160;
void* right_value161;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value166;
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&params_181, 0, sizeof(struct list$1tuple2$2charphsNodephph*)); /* ddd */
memset(&p_182, 0, sizeof(char*)); /* ddd */
memset(&sline_183, 0, sizeof(int)); /* ddd */
memset(&err_flag_184, 0, sizeof(_Bool)); /* ddd */
memset(&right_value151, 0, sizeof(void*));
memset(&label_185, 0, sizeof(char*)); /* ddd */
memset(&right_value152, 0, sizeof(void*));
memset(&no_comma_186, 0, sizeof(_Bool)); /* ddd */
memset(&right_value153, 0, sizeof(void*));
memset(&node_187, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value154, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
    expected_next_character(40,info);
    params_181=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value150=list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value149=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1)))))))));
    if(right_value150) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0); }
    while((_Bool)1) {
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_182=info->p;
        sline_183=info->sline;
        err_flag_184=(_Bool)0;
        label_185=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(""))));
        if(right_value151) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0); }
        if(xisalpha(*info->p)||*info->p==95) {
            __dec_obj77=label_185;
            label_185=(char*)come_increment_ref_count(((char*)(right_value152=parse_word(info))));
            if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0); }
            if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
            err_flag_184=(_Bool)1;
        }
        if(err_flag_184==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            label_185=((void*)0);
            info->p=p_182;
            info->sline=sline_183;
        }
        no_comma_186=info->no_comma;
        info->no_comma=(_Bool)1;
        node_187=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=expression_v13(info))));
        if(right_value153) { right_value153 = come_decrement_ref_count(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0); } 
        __dec_obj78=node_187;
        node_187=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_187),info))));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0); }
        if(right_value154) { right_value154 = come_decrement_ref_count(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0); } 
        info->no_comma=no_comma_186;
        list$1tuple2$2charphsNodephphp_push_back(params_181,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value159=tuple2$2charphsNodephp_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value158=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1))))),(char*)come_increment_ref_count(label_185),(struct sNode*)come_increment_ref_count(node_187))))));
        if(right_value159) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0); }
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        if(label_185) { label_185 = come_decrement_ref_count(label_185, (void*)0, (void*)0, 0, 0); }
        if(node_187) { node_187 = come_decrement_ref_count(node_187, ((struct sNode*)node_187)->finalize, ((struct sNode*)node_187)->_protocol_obj, 0, 0); } 
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value161=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value160=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1))))),fun_name,params_181,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sFunCallNode_finalize;
    _inf_value1->clone=sFunCallNode_clone;
    _inf_value1->compile=sFunCallNode_compile;
    _inf_value1->sline=sFunCallNode_sline;
    _inf_value1->sname=sFunCallNode_sname;
    _inf_value1->terminated=sFunCallNode_terminated;
    struct sNode* __result133__ = ((struct sNode*)(right_value166=_inf_value1));
    if(params_181) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_181, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value160) { come_call_finalizer(sFunCallNode_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value161) { come_call_finalizer(sFunCallNode_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0); }
    come_release_malloced_mem();
    return __result133__;
come_release_malloced_mem();
}

static void list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* right_value155;
struct list_item$1tuple2$2charphsNodephph* litem_188;
struct tuple2$2charphsNodeph* __dec_obj79;
void* right_value156;
struct list_item$1tuple2$2charphsNodephph* litem_189;
struct tuple2$2charphsNodeph* __dec_obj80;
void* right_value157;
struct list_item$1tuple2$2charphsNodephph* litem_190;
struct tuple2$2charphsNodeph* __dec_obj81;
memset(&right_value155, 0, sizeof(void*));
memset(&litem_188, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value156, 0, sizeof(void*));
memset(&litem_189, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value157, 0, sizeof(void*));
memset(&litem_190, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
            if(self->len==0) {
                litem_188=((struct list_item$1tuple2$2charphsNodephph*)(right_value155=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                litem_188->prev=((void*)0);
                litem_188->next=((void*)0);
                __dec_obj79=litem_188->item;
                litem_188->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj79) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_188;
                self->head=litem_188;
            }
            else if(self->len==1) {
                litem_189=((struct list_item$1tuple2$2charphsNodephph*)(right_value156=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                litem_189->prev=self->head;
                litem_189->next=((void*)0);
                __dec_obj80=litem_189->item;
                litem_189->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj80) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0); }
                self->tail=litem_189;
                self->head->next=litem_189;
            }
            else {
                litem_190=((struct list_item$1tuple2$2charphsNodephph*)(right_value157=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                litem_190->prev=self->tail;
                litem_190->next=((void*)0);
                __dec_obj81=litem_190->item;
                litem_190->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj81) { come_call_finalizer(tuple2$2charphsNodephp_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0); }
                self->tail->next=litem_190;
                self->tail=litem_190;
            }
            self->len++;
            if(item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
char* __dec_obj82;
struct sNode* __dec_obj83;
            __dec_obj82=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0); }
            __dec_obj83=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0); }
            struct tuple2$2charphsNodeph* __result130__ = self;
            if(self) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
            if(v2) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1); } 
            come_release_malloced_mem();
            return __result130__;
        come_release_malloced_mem();
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* right_value162;
struct sFunCallNode* result_191;
void* right_value163;
char* __dec_obj84;
void* right_value164;
struct list$1tuple2$2charphsNodephph* __dec_obj85;
void* right_value165;
char* __dec_obj86;
memset(&right_value162, 0, sizeof(void*));
memset(&result_191, 0, sizeof(struct sFunCallNode*)); /* ddd */
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sFunCallNode* __result131__ = (void*)0;
            come_release_malloced_mem();
            return __result131__;
        }
        result_191=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value162=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1)))));
        if(right_value162) { come_call_finalizer(sFunCallNode_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
            __dec_obj84=result_191->fun_name;
            result_191->fun_name=(char*)come_increment_ref_count(((char*)(right_value163=string_clone(self->fun_name))));
            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0); }
            if(right_value163) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->params!=((void*)0)) {
            __dec_obj85=result_191->params;
            result_191->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value164=list$1tuple2$2charphsNodephphp_clone(self->params))));
            if(__dec_obj85) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value164) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_191->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj86=result_191->sname;
            result_191->sname=(char*)come_increment_ref_count(((char*)(right_value165=string_clone(self->sname))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
            if(right_value165) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0); }
        }
        struct sFunCallNode* __result132__ = result_191;
        if(result_191) { come_call_finalizer(sFunCallNode_finalize,result_191, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result132__;
    come_release_malloced_mem();
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj87;
void* right_value167;
char* __dec_obj88;
memset(&right_value167, 0, sizeof(void*));
    __dec_obj87=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value167=__builtin_string(info->sname))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
    if(right_value167) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0); }
    struct sLogicalDenial* __result136__ = self;
    if(self) { come_call_finalizer(sLogicalDenial_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result136__;
come_release_malloced_mem();
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sLogicalDenial_terminated(){
    _Bool __result137__ = (_Bool)0;
    come_release_malloced_mem();
    return __result137__;
come_release_malloced_mem();
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* right_value168;
struct CVALUE* come_value_192;
void* right_value169;
struct CVALUE* come_value2_193;
void* right_value170;
char* __dec_obj89;
void* right_value171;
struct sType* __dec_obj90;
memset(&right_value168, 0, sizeof(void*));
memset(&come_value_192, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value169, 0, sizeof(void*));
memset(&come_value2_193, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
    if(!self->value->compile(self->value->_protocol_obj,info)) {
        _Bool __result138__ = (_Bool)0;
        come_release_malloced_mem();
        return __result138__;
    }
    come_value_192=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=get_value_from_stack(-1,info))));
    if(right_value168) { come_call_finalizer(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value2_193=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value169) { come_call_finalizer(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj89=come_value2_193->c_value;
    come_value2_193->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("!%s",come_value_192->c_value))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0); }
    if(right_value170) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0); }
    __dec_obj90=come_value2_193->type;
    come_value2_193->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(come_value_192->type))));
    if(__dec_obj90) { come_call_finalizer(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value171) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_193->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_193));
    add_come_last_code(info,"%s;\n",come_value2_193->c_value);
    _Bool __result139__ = (_Bool)1;
    if(come_value_192) { come_call_finalizer(CVALUE_finalize,come_value_192, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_193) { come_call_finalizer(CVALUE_finalize,come_value2_193, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result139__;
come_release_malloced_mem();
}

int sLogicalDenial_sline(struct sLogicalDenial* self, struct sInfo* info){
    int __result140__ = self->sline;
    come_release_malloced_mem();
    return __result140__;
come_release_malloced_mem();
}

char* sLogicalDenial_sname(struct sLogicalDenial* self, struct sInfo* info){
void* right_value172;
memset(&right_value172, 0, sizeof(void*));
    char* __result141__ = ((char*)(right_value172=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result141__;
come_release_malloced_mem();
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj91;
void* right_value173;
char* __dec_obj92;
memset(&right_value173, 0, sizeof(void*));
    __dec_obj91=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(info->sname))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0); }
    if(right_value173) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0); }
    struct sMinusNode2* __result142__ = self;
    if(self) { come_call_finalizer(sMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result142__;
come_release_malloced_mem();
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sMinusNode2_terminated(){
    _Bool __result143__ = (_Bool)0;
    come_release_malloced_mem();
    return __result143__;
come_release_malloced_mem();
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* right_value174;
struct CVALUE* come_value_194;
void* right_value175;
struct CVALUE* come_value2_195;
void* right_value176;
char* __dec_obj93;
void* right_value177;
struct sType* __dec_obj94;
memset(&right_value174, 0, sizeof(void*));
memset(&come_value_194, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value175, 0, sizeof(void*));
memset(&come_value2_195, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
    if(!self->value->compile(self->value->_protocol_obj,info)) {
        _Bool __result144__ = (_Bool)0;
        come_release_malloced_mem();
        return __result144__;
    }
    come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))));
    if(right_value174) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value2_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value175=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value175) { come_call_finalizer(CVALUE_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj93=come_value2_195->c_value;
    come_value2_195->c_value=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("-%s",come_value_194->c_value))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
    if(right_value176) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0); }
    __dec_obj94=come_value2_195->type;
    come_value2_195->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(come_value_194->type))));
    if(__dec_obj94) { come_call_finalizer(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value177) { come_call_finalizer(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_195->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_195));
    add_come_last_code(info,"%s;\n",come_value2_195->c_value);
    _Bool __result145__ = (_Bool)1;
    if(come_value_194) { come_call_finalizer(CVALUE_finalize,come_value_194, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_195) { come_call_finalizer(CVALUE_finalize,come_value2_195, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result145__;
come_release_malloced_mem();
}

int sMinusNode2_sline(struct sMinusNode2* self, struct sInfo* info){
    int __result146__ = self->sline;
    come_release_malloced_mem();
    return __result146__;
come_release_malloced_mem();
}

char* sMinusNode2_sname(struct sMinusNode2* self, struct sInfo* info){
void* right_value178;
memset(&right_value178, 0, sizeof(void*));
    char* __result147__ = ((char*)(right_value178=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result147__;
come_release_malloced_mem();
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj95;
void* right_value179;
char* __dec_obj96;
memset(&right_value179, 0, sizeof(void*));
    __dec_obj95=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(info->sname))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0); }
    if(right_value179) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0); }
    struct sPlusPlusNode2* __result148__ = self;
    if(self) { come_call_finalizer(sPlusPlusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result148__;
come_release_malloced_mem();
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sPlusPlusNode2_terminated(){
    _Bool __result149__ = (_Bool)0;
    come_release_malloced_mem();
    return __result149__;
come_release_malloced_mem();
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* right_value180;
struct CVALUE* come_value_196;
void* right_value181;
struct CVALUE* come_value2_197;
void* right_value182;
char* __dec_obj97;
void* right_value183;
struct sType* __dec_obj98;
memset(&right_value180, 0, sizeof(void*));
memset(&come_value_196, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value181, 0, sizeof(void*));
memset(&come_value2_197, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    if(!self->value->compile(self->value->_protocol_obj,info)) {
        _Bool __result150__ = (_Bool)0;
        come_release_malloced_mem();
        return __result150__;
    }
    come_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
    if(right_value180) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value2_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value181) { come_call_finalizer(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj97=come_value2_197->c_value;
    come_value2_197->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("++%s",come_value_196->c_value))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0); }
    if(right_value182) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0); }
    __dec_obj98=come_value2_197->type;
    come_value2_197->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(come_value_196->type))));
    if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value183) { come_call_finalizer(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_197->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_197));
    add_come_last_code(info,"%s;\n",come_value2_197->c_value);
    _Bool __result151__ = (_Bool)1;
    if(come_value_196) { come_call_finalizer(CVALUE_finalize,come_value_196, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_197) { come_call_finalizer(CVALUE_finalize,come_value2_197, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result151__;
come_release_malloced_mem();
}

int sPlusPlusNode2_sline(struct sPlusPlusNode2* self, struct sInfo* info){
    int __result152__ = self->sline;
    come_release_malloced_mem();
    return __result152__;
come_release_malloced_mem();
}

char* sPlusPlusNode2_sname(struct sPlusPlusNode2* self, struct sInfo* info){
void* right_value184;
memset(&right_value184, 0, sizeof(void*));
    char* __result153__ = ((char*)(right_value184=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result153__;
come_release_malloced_mem();
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj99;
void* right_value185;
char* __dec_obj100;
memset(&right_value185, 0, sizeof(void*));
    __dec_obj99=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj100=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(info->sname))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0); }
    if(right_value185) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0); }
    struct sMinusMinusNode2* __result154__ = self;
    if(self) { come_call_finalizer(sMinusMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result154__;
come_release_malloced_mem();
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sMinusMinusNode2_terminated(){
    _Bool __result155__ = (_Bool)0;
    come_release_malloced_mem();
    return __result155__;
come_release_malloced_mem();
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* right_value186;
struct CVALUE* come_value_198;
void* right_value187;
struct CVALUE* come_value2_199;
void* right_value188;
char* __dec_obj101;
void* right_value189;
struct sType* __dec_obj102;
memset(&right_value186, 0, sizeof(void*));
memset(&come_value_198, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value187, 0, sizeof(void*));
memset(&come_value2_199, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
    if(!self->value->compile(self->value->_protocol_obj,info)) {
        _Bool __result156__ = (_Bool)0;
        come_release_malloced_mem();
        return __result156__;
    }
    come_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=get_value_from_stack(-1,info))));
    if(right_value186) { come_call_finalizer(CVALUE_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value2_199=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value187) { come_call_finalizer(CVALUE_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj101=come_value2_199->c_value;
    come_value2_199->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("--%s",come_value_198->c_value))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0); }
    if(right_value188) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0); }
    __dec_obj102=come_value2_199->type;
    come_value2_199->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(come_value_198->type))));
    if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value189) { come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_199->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_199));
    add_come_last_code(info,"%s;\n",come_value2_199->c_value);
    _Bool __result157__ = (_Bool)1;
    if(come_value_198) { come_call_finalizer(CVALUE_finalize,come_value_198, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_199) { come_call_finalizer(CVALUE_finalize,come_value2_199, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result157__;
come_release_malloced_mem();
}

int sMinusMinusNode2_sline(struct sMinusMinusNode2* self, struct sInfo* info){
    int __result158__ = self->sline;
    come_release_malloced_mem();
    return __result158__;
come_release_malloced_mem();
}

char* sMinusMinusNode2_sname(struct sMinusMinusNode2* self, struct sInfo* info){
void* right_value190;
memset(&right_value190, 0, sizeof(void*));
    char* __result159__ = ((char*)(right_value190=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result159__;
come_release_malloced_mem();
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj103;
void* right_value191;
char* __dec_obj104;
memset(&right_value191, 0, sizeof(void*));
    __dec_obj103=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string(info->sname))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0); }
    if(right_value191) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0); }
    struct sComplement* __result160__ = self;
    if(self) { come_call_finalizer(sComplement_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
    return __result160__;
come_release_malloced_mem();
}

static void sComplement_finalize(struct sComplement* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sComplement_terminated(){
    _Bool __result161__ = (_Bool)0;
    come_release_malloced_mem();
    return __result161__;
come_release_malloced_mem();
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* right_value192;
struct CVALUE* come_value_200;
void* right_value193;
struct CVALUE* come_value2_201;
void* right_value194;
char* __dec_obj105;
void* right_value195;
struct sType* __dec_obj106;
memset(&right_value192, 0, sizeof(void*));
memset(&come_value_200, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value193, 0, sizeof(void*));
memset(&come_value2_201, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
    if(!self->value->compile(self->value->_protocol_obj,info)) {
        _Bool __result162__ = (_Bool)0;
        come_release_malloced_mem();
        return __result162__;
    }
    come_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=get_value_from_stack(-1,info))));
    if(right_value192) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value2_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value193=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value193) { come_call_finalizer(CVALUE_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj105=come_value2_201->c_value;
    come_value2_201->c_value=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("~%s",come_value_200->c_value))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0); }
    if(right_value194) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0); }
    __dec_obj106=come_value2_201->type;
    come_value2_201->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(come_value_200->type))));
    if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value195) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_201->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_201));
    add_come_last_code(info,"%s;\n",come_value2_201->c_value);
    _Bool __result163__ = (_Bool)1;
    if(come_value_200) { come_call_finalizer(CVALUE_finalize,come_value_200, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_201) { come_call_finalizer(CVALUE_finalize,come_value2_201, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    return __result163__;
come_release_malloced_mem();
}

int sComplement_sline(struct sComplement* self, struct sInfo* info){
    int __result164__ = self->sline;
    come_release_malloced_mem();
    return __result164__;
come_release_malloced_mem();
}

char* sComplement_sname(struct sComplement* self, struct sInfo* info){
void* right_value196;
memset(&right_value196, 0, sizeof(void*));
    char* __result165__ = ((char*)(right_value196=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result165__;
come_release_malloced_mem();
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* right_value197;
char* __dec_obj107;
void* right_value221;
struct sBlock* __dec_obj115;
memset(&right_value197, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj107=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string(info->sname))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0); }
    if(right_value197) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0); }
    __dec_obj115=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value221=sBlock_clone(block))));
    if(__dec_obj115) { come_call_finalizer(sBlock_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value221) { come_call_finalizer(sBlock_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0); }
    struct sNormalBlock* __result184__ = self;
    if(self) { come_call_finalizer(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result184__;
come_release_malloced_mem();
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* right_value198;
struct sBlock* result_202;
void* right_value199;
struct list$1sNodeph* __dec_obj108;
void* right_value220;
struct sVarTable* __dec_obj114;
memset(&right_value198, 0, sizeof(void*));
memset(&result_202, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value199, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sBlock* __result166__ = (void*)0;
            come_release_malloced_mem();
            return __result166__;
        }
        result_202=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value198=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1)))));
        if(right_value198) { come_call_finalizer(sBlock_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
            __dec_obj108=result_202->mNodes;
            result_202->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value199=list$1sNodephp_clone(self->mNodes))));
            if(__dec_obj108) { come_call_finalizer(list$1sNodephp_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value199) { come_call_finalizer(list$1sNodephp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
            __dec_obj114=result_202->mVarTable;
            result_202->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value220=sVarTable_clone(self->mVarTable))));
            if(__dec_obj114) { come_call_finalizer(sVarTable_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value220) { come_call_finalizer(sVarTable_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0); }
        }
        struct sBlock* __result183__ = result_202;
        if(result_202) { come_call_finalizer(sBlock_finalize,result_202, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result183__;
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
void* right_value200;
struct sVarTable* result_203;
void* right_value219;
struct map$2charphsVarph* __dec_obj113;
memset(&right_value200, 0, sizeof(void*));
memset(&result_203, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&right_value219, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sVarTable* __result167__ = (void*)0;
                    come_release_malloced_mem();
                    return __result167__;
                }
                result_203=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value200=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1)))));
                if(right_value200) { come_call_finalizer(sVarTable_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                    __dec_obj113=result_203->mVars;
                    result_203->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value219=map$2charphsVarphp_clone(self->mVars))));
                    if(__dec_obj113) { come_call_finalizer(map$2charphsVarphp_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value219) { come_call_finalizer(map$2charphsVarphp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_203->mGlobal=self->mGlobal;
                }
                if(self!=((void*)0)) {
                    result_203->mParent=self->mParent;
                }
                if(self!=((void*)0)) {
                    result_203->mID=self->mID;
                }
                struct sVarTable* __result182__ = result_203;
                if(result_203) { come_call_finalizer(sVarTable_finalize,result_203, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result182__;
            come_release_malloced_mem();
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* right_value201;
void* right_value207;
struct map$2charphsVarph* result_207;
char* it_209;
struct sVar* default_value_211;
struct sVar* it2_214;
void* right_value211;
void* right_value212;
void* right_value217;
void* right_value218;
memset(&right_value201, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&result_207, 0, sizeof(struct map$2charphsVarph*)); /* ddd */
memset(&it_209, 0, sizeof(char*)); /* ddd */
memset(&default_value_211, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_214, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct map$2charphsVarph* __result168__ = ((void*)0);
                            come_release_malloced_mem();
                            return __result168__;
                        }
                        result_207=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value207=map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value201=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1)))))))));
                        if(right_value207) { come_call_finalizer(map$2charphsVarphp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0); }
                        for(
                        it_209=map$2charphsVarphp_begin(self);
                        !map$2charphsVarphp_end(self);
                        it_209=map$2charphsVarphp_next(self)
                        ){
                            it2_214=map$2charphsVarphp_at(self,it_209,default_value_211);
                            if(1&&!1) {
                                map$2charphsVarphp_insert2(result_207,(char*)come_increment_ref_count(((char*)(right_value211=charp_clone(it_209)))),it2_214);
                                if(right_value211) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0); }
                            }
                            else if(1&&1) {
                                map$2charphsVarphp_insert2(result_207,(char*)come_increment_ref_count(((char*)(right_value212=charp_clone(it_209)))),(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value217=sVarp_clone(it2_214)))));
                                if(right_value212) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0); }
                                if(right_value217) { come_call_finalizer(sVarp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            else if(!1&&1) {
                                map$2charphsVarphp_insert2(result_207,it_209,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value218=sVarp_clone(it2_214)))));
                                if(right_value218) { come_call_finalizer(sVarp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            else if(!1&&!1) {
                                map$2charphsVarphp_insert2(result_207,it_209,it2_214);
                            }
                        }
                        struct map$2charphsVarph* __result181__ = result_207;
                        if(result_207) { come_call_finalizer(map$2charphsVarphp_finalize,result_207, (void*)0, (void*)0, 0, 0, 1); }
                        come_release_malloced_mem();
                        return __result181__;
                    come_release_malloced_mem();
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* right_value202;
void* right_value203;
void* right_value204;
int i_204;
void* right_value205;
void* right_value206;
struct list$1charp* __dec_obj109;
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&i_204, 0, sizeof(int)); /* ddd */
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
                            self->keys=((char**)(right_value202=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
                            self->items=((struct sVar**)(right_value203=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)))));
                            self->item_existance=((_Bool*)(right_value204=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
                            for(
                            i_204=0;
                            i_204<128;
                            i_204++
                            ){
                                self->item_existance[i_204]=(_Bool)0;
                            }
                            self->size=128;
                            self->len=0;
                            __dec_obj109=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value206=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value205=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
                            if(__dec_obj109) { come_call_finalizer(list$1charpp_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0); }
                            if(right_value206) { come_call_finalizer(list$1charpp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0); }
                            self->it=0;
                            struct map$2charphsVarph* __result169__ = self;
                            if(self) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            come_release_malloced_mem();
                            return __result169__;
                        come_release_malloced_mem();
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_205;
int i_206;
memset(&i_205, 0, sizeof(int)); /* ddd */
memset(&i_206, 0, sizeof(int)); /* ddd */
                                for(
                                i_205=0;
                                i_205<self->size;
                                i_205++
                                ){
                                    if(self->item_existance[i_205]) {
                                        if(1) {
                                            if(self->items[i_205]) { come_call_finalizer(sVarp_finalize,self->items[i_205], (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                    }
                                }
                                come_free_object((char*)self->items);
                                for(
                                i_206=0;
                                i_206<self->size;
                                i_206++
                                ){
                                    if(self->item_existance[i_206]) {
                                        if(1) {
                                            if(self->keys[i_206]) { self->keys[i_206] = come_decrement_ref_count(self->keys[i_206], (void*)0, (void*)0, 0, 0); }
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

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
char* result_208;
memset(&result_208, 0, sizeof(char*)); /* bbb */
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                char* __result170__ = self->key_list->it->item;
                                come_release_malloced_mem();
                                return __result170__;
                            }
                            memset(&result_208,0,sizeof(char*));
                            char* __result171__ = result_208;
                            come_release_malloced_mem();
                            return __result171__;
                        come_release_malloced_mem();
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
                            _Bool __result172__ = self->key_list->it==((void*)0);
                            come_release_malloced_mem();
                            return __result172__;
                        come_release_malloced_mem();
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
char* result_210;
memset(&result_210, 0, sizeof(char*)); /* bbb */
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                char* __result173__ = self->key_list->it->item;
                                come_release_malloced_mem();
                                return __result173__;
                            }
                            memset(&result_210,0,sizeof(char*));
                            char* __result174__ = result_210;
                            come_release_malloced_mem();
                            return __result174__;
                        come_release_malloced_mem();
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
int hash_212;
int it_213;
memset(&hash_212, 0, sizeof(int)); /* ddd */
memset(&it_213, 0, sizeof(int)); /* ddd */
                                hash_212=string_get_hash_key(((char*)key))%self->size;
                                it_213=hash_212;
                                while((_Bool)1) {
                                    if(self->item_existance[it_213]) {
                                        if(charp_equals(self->keys[it_213],key)) {
                                            struct sVar* __result175__ = self->items[it_213];
                                            come_release_malloced_mem();
                                            return __result175__;
                                        }
                                        it_213++;
                                        if(it_213>=self->size) {
                                            it_213=0;
                                        }
                                        else if(it_213==hash_212) {
                                            struct sVar* __result176__ = default_value;
                                            come_release_malloced_mem();
                                            return __result176__;
                                        }
                                    }
                                    else {
                                        struct sVar* __result177__ = default_value;
                                        come_release_malloced_mem();
                                        return __result177__;
                                    }
                                }
                                struct sVar* __result178__ = default_value;
                                come_release_malloced_mem();
                                return __result178__;
                            come_release_malloced_mem();
}

static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
int hash_226;
int it_227;
_Bool same_key_exist_228;
char* it2_229;
memset(&hash_226, 0, sizeof(int)); /* ddd */
memset(&it_227, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_228, 0, sizeof(_Bool)); /* ddd */
memset(&it2_229, 0, sizeof(char*)); /* ddd */
                                    if(self->len*2>=self->size) {
                                        map$2charphsVarphp_rehash(self);
                                    }
                                    hash_226=string_get_hash_key(key)%self->size;
                                    it_227=hash_226;
                                    while((_Bool)1) {
                                        if(self->item_existance[it_227]) {
                                            if(charp_equals(self->keys[it_227],key)) {
                                                if(1) {
                                                    if(self->keys[it_227]) { self->keys[it_227] = come_decrement_ref_count(self->keys[it_227], (void*)0, (void*)0, 0, 0); }
                                                    list$1charpp_remove(self->key_list,self->keys[it_227]);
                                                    self->keys[it_227]=(char*)come_increment_ref_count(key);
                                                }
                                                else {
                                                    list$1charpp_remove(self->key_list,self->keys[it_227]);
                                                    self->keys[it_227]=key;
                                                }
                                                if(1) {
                                                    if(self->items[it_227]) { come_call_finalizer(sVarp_finalize,self->items[it_227], (void*)0, (void*)0, 0, 0, 0); }
                                                    self->items[it_227]=(struct sVar*)come_increment_ref_count(item);
                                                }
                                                else {
                                                    self->items[it_227]=item;
                                                }
                                                break;
                                            }
                                            it_227++;
                                            if(it_227>=self->size) {
                                                it_227=0;
                                            }
                                            else if(it_227==hash_226) {
                                                printf("unexpected error in map.insert\n");
                                                exit(2);
                                            }
                                        }
                                        else {
                                            self->item_existance[it_227]=(_Bool)1;
                                            if(1) {
                                                self->keys[it_227]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                self->keys[it_227]=key;
                                            }
                                            if(1) {
                                                self->items[it_227]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_227]=item;
                                            }
                                            self->len++;
                                            break;
                                        }
                                    }
                                    same_key_exist_228=(_Bool)0;
                                    for(
                                    it2_229=list$1charpp_begin(self->key_list);
                                    !list$1charpp_end(self->key_list);
                                    it_227=list$1charpp_next(self->key_list)
                                    ){
                                        if(charp_equals(it2_229,key)) {
                                            same_key_exist_228=(_Bool)1;
                                        }
                                    }
                                    if(!same_key_exist_228) {
                                        list$1charpp_push_back(self->key_list,key);
                                    }
                                    if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                                    if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
                                come_release_malloced_mem();
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_215;
void* right_value208;
char** keys_216;
void* right_value209;
struct sVar** items_217;
void* right_value210;
_Bool* item_existance_218;
int len_219;
char* it_220;
struct sVar* default_value_221;
struct sVar* it2_222;
int hash_223;
int n_224;
struct sVar* default_value_225;
memset(&size_215, 0, sizeof(int)); /* ddd */
memset(&right_value208, 0, sizeof(void*));
memset(&keys_216, 0, sizeof(char**)); /* ddd */
memset(&right_value209, 0, sizeof(void*));
memset(&items_217, 0, sizeof(struct sVar**)); /* ddd */
memset(&right_value210, 0, sizeof(void*));
memset(&item_existance_218, 0, sizeof(_Bool*)); /* ddd */
memset(&len_219, 0, sizeof(int)); /* ddd */
memset(&it_220, 0, sizeof(char*)); /* ddd */
memset(&default_value_221, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_222, 0, sizeof(struct sVar*)); /* ddd */
memset(&hash_223, 0, sizeof(int)); /* ddd */
memset(&n_224, 0, sizeof(int)); /* ddd */
memset(&default_value_225, 0, sizeof(struct sVar*)); /* bbb */
                                            size_215=self->size*3;
                                            keys_216=((char**)(right_value208=(char**)come_calloc(1, sizeof(char*)*(1*(size_215)))));
                                            items_217=((struct sVar**)(right_value209=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_215)))));
                                            item_existance_218=((_Bool*)(right_value210=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_215)))));
                                            len_219=0;
                                            for(
                                            it_220=map$2charphsVarphp_begin(self);
                                            !map$2charphsVarphp_end(self);
                                            it_220=map$2charphsVarphp_next(self)
                                            ){
                                                it2_222=map$2charphsVarphp_at(self,it_220,default_value_221);
                                                hash_223=charp_get_hash_key(it_220)%size_215;
                                                n_224=hash_223;
                                                while((_Bool)1) {
                                                    if(item_existance_218[n_224]) {
                                                        n_224++;
                                                        if(n_224>=size_215) {
                                                            n_224=0;
                                                        }
                                                        else if(n_224==hash_223) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            exit(2);
                                                        }
                                                    }
                                                    else {
                                                        item_existance_218[n_224]=(_Bool)1;
                                                        keys_216[n_224]=it_220;
                                                        items_217[n_224]=map$2charphsVarphp_at(self,it_220,default_value_225);
                                                        len_219++;
                                                        break;
                                                    }
                                                }
                                            }
                                            come_free_object((char*)self->items);
                                            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                                            come_free_object((char*)self->keys);
                                            self->keys=keys_216;
                                            self->items=items_217;
                                            self->item_existance=item_existance_218;
                                            self->size=size_215;
                                            self->len=len_219;
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
void* right_value213;
struct sVar* result_230;
void* right_value214;
char* __dec_obj110;
void* right_value215;
char* __dec_obj111;
void* right_value216;
struct sType* __dec_obj112;
memset(&right_value213, 0, sizeof(void*));
memset(&result_230, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
                                    if(self==(void*)0) {
                                        struct sVar* __result179__ = (void*)0;
                                        come_release_malloced_mem();
                                        return __result179__;
                                    }
                                    result_230=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value213=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1)))));
                                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                        __dec_obj110=result_230->mName;
                                        result_230->mName=(char*)come_increment_ref_count(((char*)(right_value214=string_clone(self->mName))));
                                        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0); }
                                        if(right_value214) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0); }
                                    }
                                    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                        __dec_obj111=result_230->mCValueName;
                                        result_230->mCValueName=(char*)come_increment_ref_count(((char*)(right_value215=string_clone(self->mCValueName))));
                                        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0); }
                                        if(right_value215) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0); }
                                    }
                                    if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                        __dec_obj112=result_230->mType;
                                        result_230->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(self->mType))));
                                        if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0); }
                                        if(right_value216) { come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
                                    }
                                    if(self!=((void*)0)) {
                                        result_230->mBlockLevel=self->mBlockLevel;
                                    }
                                    if(self!=((void*)0)) {
                                        result_230->mGlobal=self->mGlobal;
                                    }
                                    if(self!=((void*)0)) {
                                        result_230->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(self!=((void*)0)) {
                                        result_230->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(self!=((void*)0)) {
                                        result_230->mNoFree=self->mNoFree;
                                    }
                                    struct sVar* __result180__ = result_230;
                                    come_release_malloced_mem();
                                    return __result180__;
                                come_release_malloced_mem();
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                if(self->mBlock) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

_Bool sNormalBlock_terminated(){
    _Bool __result185__ = (_Bool)1;
    come_release_malloced_mem();
    return __result185__;
come_release_malloced_mem();
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
struct sBlock* block_231;
memset(&block_231, 0, sizeof(struct sBlock*)); /* ddd */
    block_231=self->mBlock;
    add_come_code(info,"{\n");
    transpile_block(block_231,((void*)0),((void*)0),info,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    _Bool __result186__ = (_Bool)1;
    come_release_malloced_mem();
    return __result186__;
come_release_malloced_mem();
}

int sNormalBlock_sline(struct sNormalBlock* self, struct sInfo* info){
    int __result187__ = self->sline;
    come_release_malloced_mem();
    return __result187__;
come_release_malloced_mem();
}

char* sNormalBlock_sname(struct sNormalBlock* self, struct sInfo* info){
void* right_value222;
memset(&right_value222, 0, sizeof(void*));
    char* __result188__ = ((char*)(right_value222=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result188__;
come_release_malloced_mem();
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* right_value226;
struct sNormalBlock* result_233;
void* right_value227;
struct sBlock* __dec_obj116;
void* right_value228;
char* __dec_obj117;
memset(&right_value226, 0, sizeof(void*));
memset(&result_233, 0, sizeof(struct sNormalBlock*)); /* ddd */
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sNormalBlock* __result189__ = (void*)0;
                come_release_malloced_mem();
                return __result189__;
            }
            result_233=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value226=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1)))));
            if(right_value226) { come_call_finalizer(sNormalBlock_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                __dec_obj116=result_233->mBlock;
                result_233->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value227=sBlock_clone(self->mBlock))));
                if(__dec_obj116) { come_call_finalizer(sBlock_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value227) { come_call_finalizer(sBlock_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_233->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj117=result_233->sname;
                result_233->sname=(char*)come_increment_ref_count(((char*)(right_value228=string_clone(self->sname))));
                if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0); }
                if(right_value228) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0); }
            }
            struct sNormalBlock* __result190__ = result_233;
            if(result_233) { come_call_finalizer(sNormalBlock_finalize,result_233, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result190__;
        come_release_malloced_mem();
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* right_value233;
struct sLogicalDenial* result_235;
void* right_value234;
struct sNode* __dec_obj118;
void* right_value235;
char* __dec_obj119;
memset(&right_value233, 0, sizeof(void*));
memset(&result_235, 0, sizeof(struct sLogicalDenial*)); /* ddd */
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sLogicalDenial* __result192__ = (void*)0;
                come_release_malloced_mem();
                return __result192__;
            }
            result_235=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value233=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1)))));
            if(right_value233) { come_call_finalizer(sLogicalDenial_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj118=result_235->value;
                result_235->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=sNodep_clone(self->value))));
                if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0); }
                if(right_value234) { right_value234 = come_decrement_ref_count(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_235->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj119=result_235->sname;
                result_235->sname=(char*)come_increment_ref_count(((char*)(right_value235=string_clone(self->sname))));
                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0); }
                if(right_value235) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0); }
            }
            struct sLogicalDenial* __result193__ = result_235;
            if(result_235) { come_call_finalizer(sLogicalDenial_finalize,result_235, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result193__;
        come_release_malloced_mem();
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* right_value240;
struct sMinusMinusNode2* result_237;
void* right_value241;
struct sNode* __dec_obj120;
void* right_value242;
char* __dec_obj121;
memset(&right_value240, 0, sizeof(void*));
memset(&result_237, 0, sizeof(struct sMinusMinusNode2*)); /* ddd */
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sMinusMinusNode2* __result195__ = (void*)0;
                come_release_malloced_mem();
                return __result195__;
            }
            result_237=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value240=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1)))));
            if(right_value240) { come_call_finalizer(sMinusMinusNode2_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj120=result_237->value;
                result_237->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=sNodep_clone(self->value))));
                if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0); }
                if(right_value241) { right_value241 = come_decrement_ref_count(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_237->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj121=result_237->sname;
                result_237->sname=(char*)come_increment_ref_count(((char*)(right_value242=string_clone(self->sname))));
                if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0); }
                if(right_value242) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0); }
            }
            struct sMinusMinusNode2* __result196__ = result_237;
            if(result_237) { come_call_finalizer(sMinusMinusNode2_finalize,result_237, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result196__;
        come_release_malloced_mem();
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* right_value247;
struct sMinusNode2* result_239;
void* right_value248;
struct sNode* __dec_obj122;
void* right_value249;
char* __dec_obj123;
memset(&right_value247, 0, sizeof(void*));
memset(&result_239, 0, sizeof(struct sMinusNode2*)); /* ddd */
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sMinusNode2* __result198__ = (void*)0;
                come_release_malloced_mem();
                return __result198__;
            }
            result_239=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value247=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1)))));
            if(right_value247) { come_call_finalizer(sMinusNode2_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj122=result_239->value;
                result_239->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=sNodep_clone(self->value))));
                if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0); }
                if(right_value248) { right_value248 = come_decrement_ref_count(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_239->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj123=result_239->sname;
                result_239->sname=(char*)come_increment_ref_count(((char*)(right_value249=string_clone(self->sname))));
                if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0); }
                if(right_value249) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0); }
            }
            struct sMinusNode2* __result199__ = result_239;
            if(result_239) { come_call_finalizer(sMinusNode2_finalize,result_239, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result199__;
        come_release_malloced_mem();
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* right_value254;
struct sPlusPlusNode2* result_241;
void* right_value255;
struct sNode* __dec_obj124;
void* right_value256;
char* __dec_obj125;
memset(&right_value254, 0, sizeof(void*));
memset(&result_241, 0, sizeof(struct sPlusPlusNode2*)); /* ddd */
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sPlusPlusNode2* __result201__ = (void*)0;
                come_release_malloced_mem();
                return __result201__;
            }
            result_241=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value254=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1)))));
            if(right_value254) { come_call_finalizer(sPlusPlusNode2_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj124=result_241->value;
                result_241->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=sNodep_clone(self->value))));
                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0); }
                if(right_value255) { right_value255 = come_decrement_ref_count(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_241->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj125=result_241->sname;
                result_241->sname=(char*)come_increment_ref_count(((char*)(right_value256=string_clone(self->sname))));
                if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0); }
                if(right_value256) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0); }
            }
            struct sPlusPlusNode2* __result202__ = result_241;
            if(result_241) { come_call_finalizer(sPlusPlusNode2_finalize,result_241, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result202__;
        come_release_malloced_mem();
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* right_value261;
struct sComplement* result_243;
void* right_value262;
struct sNode* __dec_obj126;
void* right_value263;
char* __dec_obj127;
memset(&right_value261, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct sComplement*)); /* ddd */
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sComplement* __result204__ = (void*)0;
                come_release_malloced_mem();
                return __result204__;
            }
            result_243=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value261=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1)))));
            if(right_value261) { come_call_finalizer(sComplement_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj126=result_243->value;
                result_243->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=sNodep_clone(self->value))));
                if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0); }
                if(right_value262) { right_value262 = come_decrement_ref_count(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_243->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj127=result_243->sname;
                result_243->sname=(char*)come_increment_ref_count(((char*)(right_value263=string_clone(self->sname))));
                if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0); }
                if(right_value263) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0); }
            }
            struct sComplement* __result205__ = result_243;
            if(result_243) { come_call_finalizer(sComplement_finalize,result_243, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result205__;
        come_release_malloced_mem();
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* right_value285;
struct sReturnNode* result_253;
void* right_value286;
struct sNode* __dec_obj135;
void* right_value287;
char* __dec_obj136;
void* right_value288;
char* __dec_obj137;
memset(&right_value285, 0, sizeof(void*));
memset(&result_253, 0, sizeof(struct sReturnNode*)); /* ddd */
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sReturnNode* __result214__ = (void*)0;
                    come_release_malloced_mem();
                    return __result214__;
                }
                result_253=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value285=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1)))));
                if(right_value285) { come_call_finalizer(sReturnNode_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->value!=((void*)0)) {
                    __dec_obj135=result_253->value;
                    result_253->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNodep_clone(self->value))));
                    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0); }
                    if(right_value286) { right_value286 = come_decrement_ref_count(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->value_source!=((void*)0)) {
                    __dec_obj136=result_253->value_source;
                    result_253->value_source=(char*)come_increment_ref_count(((char*)(right_value287=string_clone(self->value_source))));
                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0); }
                    if(right_value287) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_253->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj137=result_253->sname;
                    result_253->sname=(char*)come_increment_ref_count(((char*)(right_value288=string_clone(self->sname))));
                    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0); }
                    if(right_value288) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0); }
                }
                struct sReturnNode* __result215__ = result_253;
                if(result_253) { come_call_finalizer(sReturnNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result215__;
            come_release_malloced_mem();
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* right_value293;
struct sDerefferenceNode* result_255;
void* right_value294;
struct sNode* __dec_obj138;
void* right_value295;
char* __dec_obj139;
memset(&right_value293, 0, sizeof(void*));
memset(&result_255, 0, sizeof(struct sDerefferenceNode*)); /* ddd */
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sDerefferenceNode* __result217__ = (void*)0;
                come_release_malloced_mem();
                return __result217__;
            }
            result_255=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value293=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1)))));
            if(right_value293) { come_call_finalizer(sDerefferenceNode_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj138=result_255->value;
                result_255->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNodep_clone(self->value))));
                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0); }
                if(right_value294) { right_value294 = come_decrement_ref_count(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_255->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj139=result_255->sname;
                result_255->sname=(char*)come_increment_ref_count(((char*)(right_value295=string_clone(self->sname))));
                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0); }
                if(right_value295) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0); }
            }
            struct sDerefferenceNode* __result218__ = result_255;
            if(result_255) { come_call_finalizer(sDerefferenceNode_finalize,result_255, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result218__;
        come_release_malloced_mem();
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* right_value300;
struct sRefferenceNode* result_257;
void* right_value301;
struct sNode* __dec_obj140;
void* right_value302;
char* __dec_obj141;
memset(&right_value300, 0, sizeof(void*));
memset(&result_257, 0, sizeof(struct sRefferenceNode*)); /* ddd */
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sRefferenceNode* __result220__ = (void*)0;
                come_release_malloced_mem();
                return __result220__;
            }
            result_257=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value300=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1)))));
            if(right_value300) { come_call_finalizer(sRefferenceNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj140=result_257->value;
                result_257->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=sNodep_clone(self->value))));
                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0); }
                if(right_value301) { right_value301 = come_decrement_ref_count(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_257->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj141=result_257->sname;
                result_257->sname=(char*)come_increment_ref_count(((char*)(right_value302=string_clone(self->sname))));
                if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0); }
                if(right_value302) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0); }
            }
            struct sRefferenceNode* __result221__ = result_257;
            if(result_257) { come_call_finalizer(sRefferenceNode_finalize,result_257, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result221__;
        come_release_malloced_mem();
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* right_value307;
struct sReverseNode* result_259;
void* right_value308;
struct sNode* __dec_obj142;
void* right_value309;
char* __dec_obj143;
memset(&right_value307, 0, sizeof(void*));
memset(&result_259, 0, sizeof(struct sReverseNode*)); /* ddd */
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sReverseNode* __result223__ = (void*)0;
                come_release_malloced_mem();
                return __result223__;
            }
            result_259=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value307=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1)))));
            if(right_value307) { come_call_finalizer(sReverseNode_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj142=result_259->value;
                result_259->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNodep_clone(self->value))));
                if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0); }
                if(right_value308) { right_value308 = come_decrement_ref_count(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_259->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj143=result_259->sname;
                result_259->sname=(char*)come_increment_ref_count(((char*)(right_value309=string_clone(self->sname))));
                if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0); }
                if(right_value309) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0); }
            }
            struct sReverseNode* __result224__ = result_259;
            if(result_259) { come_call_finalizer(sReverseNode_finalize,result_259, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result224__;
        come_release_malloced_mem();
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
                }
            come_release_malloced_mem();
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* right_value336;
struct sCastNode* result_288;
void* right_value337;
struct sType* __dec_obj154;
void* right_value338;
struct sNode* __dec_obj155;
void* right_value339;
char* __dec_obj156;
memset(&right_value336, 0, sizeof(void*));
memset(&result_288, 0, sizeof(struct sCastNode*)); /* ddd */
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sCastNode* __result232__ = (void*)0;
                    come_release_malloced_mem();
                    return __result232__;
                }
                result_288=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value336=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1)))));
                if(right_value336) { come_call_finalizer(sCastNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mType!=((void*)0)) {
                    __dec_obj154=result_288->mType;
                    result_288->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_clone(self->mType))));
                    if(__dec_obj154) { come_call_finalizer(sType_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0); }
                    if(right_value337) { come_call_finalizer(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj155=result_288->mLeft;
                    result_288->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=sNodep_clone(self->mLeft))));
                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0); }
                    if(right_value338) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_288->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj156=result_288->sname;
                    result_288->sname=(char*)come_increment_ref_count(((char*)(right_value339=string_clone(self->sname))));
                    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0); }
                    if(right_value339) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0); }
                }
                struct sCastNode* __result233__ = result_288;
                if(result_288) { come_call_finalizer(sCastNode_finalize,result_288, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result233__;
            come_release_malloced_mem();
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* right_value344;
struct sParenNode* result_290;
void* right_value345;
struct sNode* __dec_obj157;
void* right_value346;
char* __dec_obj158;
memset(&right_value344, 0, sizeof(void*));
memset(&result_290, 0, sizeof(struct sParenNode*)); /* ddd */
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sParenNode* __result235__ = (void*)0;
                    come_release_malloced_mem();
                    return __result235__;
                }
                result_290=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value344=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1)))));
                if(right_value344) { come_call_finalizer(sParenNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj157=result_290->mLeft;
                    result_290->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=sNodep_clone(self->mLeft))));
                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0); }
                    if(right_value345) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_290->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj158=result_290->sname;
                    result_290->sname=(char*)come_increment_ref_count(((char*)(right_value346=string_clone(self->sname))));
                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0); }
                    if(right_value346) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0); }
                }
                struct sParenNode* __result236__ = result_290;
                if(result_290) { come_call_finalizer(sParenNode_finalize,result_290, (void*)0, (void*)0, 0, 0, 1); }
                come_release_malloced_mem();
                return __result236__;
            come_release_malloced_mem();
}

struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
char* __dec_obj162;
void* right_value352;
struct sType* __dec_obj163;
void* right_value353;
char* __dec_obj164;
struct sNode* __dec_obj165;
char* __dec_obj166;
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj162=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0); }
    __dec_obj163=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value352=sType_clone(type))));
    if(__dec_obj163) { come_call_finalizer(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value352) { come_call_finalizer(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj164=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value353=__builtin_string(name))));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0); }
    if(right_value353) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0); }
    __dec_obj165=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0); }
    __dec_obj166=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0); }
    struct sGlobalVariable* __result241__ = self;
    if(self) { come_call_finalizer(sGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(right_node) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1); } 
    if(array_initializer) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result241__;
come_release_malloced_mem();
}

static void sGlobalVariable_finalize(struct sGlobalVariable* self){
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->name!=((void*)0)) {
                if(self->name) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->right_node!=((void*)0)) {
                if(self->right_node) { self->right_node = come_decrement_ref_count(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->array_initializer!=((void*)0)) {
                if(self->array_initializer) { self->array_initializer = come_decrement_ref_count(self->array_initializer, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

int sGlobalVariable_sline(struct sGlobalVariable* self, struct sInfo* info){
    int __result242__ = self->sline;
    come_release_malloced_mem();
    return __result242__;
come_release_malloced_mem();
}

char* sGlobalVariable_sname(struct sGlobalVariable* self, struct sInfo* info){
void* right_value354;
memset(&right_value354, 0, sizeof(void*));
    char* __result243__ = ((char*)(right_value354=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result243__;
come_release_malloced_mem();
}

_Bool sGlobalVariable_terminated(){
    _Bool __result244__ = (_Bool)0;
    come_release_malloced_mem();
    return __result244__;
come_release_malloced_mem();
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
struct sType* type_292;
char* name_293;
struct sNode* right_node_294;
char* array_initializer_295;
void* right_value355;
void* right_value356;
void* right_value357;
void* right_value358;
char* name2_296;
void* right_value359;
memset(&type_292, 0, sizeof(struct sType*)); /* ddd */
memset(&name_293, 0, sizeof(char*)); /* ddd */
memset(&right_node_294, 0, sizeof(struct sNode*)); /* ddd */
memset(&array_initializer_295, 0, sizeof(char*)); /* ddd */
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&name2_296, 0, sizeof(char*)); /* ddd */
memset(&right_value359, 0, sizeof(void*));
    type_292=self->type;
    name_293=(char*)come_increment_ref_count(self->name);
    right_node_294=self->right_node;
    array_initializer_295=(char*)come_increment_ref_count(self->array_initializer);
    add_variable_to_global_table(name_293,(struct sType*)come_increment_ref_count(((struct sType*)(right_value355=sType_clone(type_292)))),info);
    if(right_value355) { come_call_finalizer(sType_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0); }
    if(array_initializer_295) {
        add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value356=make_define_var(type_292,name_293,info,(_Bool)0))),array_initializer_295);
        if(right_value356) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0); }
    }
    else if(right_node_294) {
        add_come_code_at_source_head(info,"%s;\n",((char*)(right_value357=make_define_var(type_292,name_293,info,(_Bool)0))));
        if(right_value357) { right_value357 = come_decrement_ref_count(right_value357, (void*)0, (void*)0, 1, 0); }
        name2_296=((char*)(right_value358=__builtin_string(name_293)));
    }
    else {
        add_come_code_at_source_head(info,"%s;\n",((char*)(right_value359=make_define_var(type_292,name_293,info,(_Bool)0))));
        if(right_value359) { right_value359 = come_decrement_ref_count(right_value359, (void*)0, (void*)0, 1, 0); }
    }
    _Bool __result245__ = (_Bool)1;
    if(name_293) { name_293 = come_decrement_ref_count(name_293, (void*)0, (void*)0, 0, 0); }
    if(array_initializer_295) { array_initializer_295 = come_decrement_ref_count(array_initializer_295, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result245__;
come_release_malloced_mem();
}

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct sType* type, char* name, struct sInfo* info){
void* right_value360;
struct sType* __dec_obj167;
void* right_value361;
char* __dec_obj168;
char* __dec_obj169;
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
    __dec_obj167=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value360=sType_clone(type))));
    if(__dec_obj167) { come_call_finalizer(sType_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value360) { come_call_finalizer(sType_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj168=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value361=__builtin_string(name))));
    if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0); }
    if(right_value361) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0); }
    self->sline=info->sline;
    __dec_obj169=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0); }
    struct sExternalGlobalVariable* __result246__ = self;
    if(self) { come_call_finalizer(sExternalGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result246__;
come_release_malloced_mem();
}

static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self){
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->name!=((void*)0)) {
                if(self->name) { self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

int sExternalGlobalVariable_sline(struct sExternalGlobalVariable* self, struct sInfo* info){
    int __result247__ = self->sline;
    come_release_malloced_mem();
    return __result247__;
come_release_malloced_mem();
}

char* sExternalGlobalVariable_sname(struct sExternalGlobalVariable* self, struct sInfo* info){
void* right_value362;
memset(&right_value362, 0, sizeof(void*));
    char* __result248__ = ((char*)(right_value362=__builtin_string(self->sname)));
    come_release_malloced_mem();
    return __result248__;
come_release_malloced_mem();
}

_Bool sExternalGlobalVariable_terminated(){
    _Bool __result249__ = (_Bool)0;
    come_release_malloced_mem();
    return __result249__;
come_release_malloced_mem();
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
struct sType* type_297;
char* name_298;
void* right_value363;
void* right_value364;
memset(&type_297, 0, sizeof(struct sType*)); /* ddd */
memset(&name_298, 0, sizeof(char*)); /* ddd */
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
    type_297=self->type;
    name_298=(char*)come_increment_ref_count(self->name);
    add_variable_to_global_table(name_298,(struct sType*)come_increment_ref_count(((struct sType*)(right_value363=sType_clone(type_297)))),info);
    if(right_value363) { come_call_finalizer(sType_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0); }
    add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value364=make_define_var(type_297,name_298,info,(_Bool)0))));
    if(right_value364) { right_value364 = come_decrement_ref_count(right_value364, (void*)0, (void*)0, 1, 0); }
    _Bool __result250__ = (_Bool)1;
    if(name_298) { name_298 = come_decrement_ref_count(name_298, (void*)0, (void*)0, 0, 0); }
    come_release_malloced_mem();
    return __result250__;
come_release_malloced_mem();
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
void* right_value378;
struct sExternalGlobalVariable* result_311;
void* right_value379;
struct sType* __dec_obj174;
void* right_value380;
char* __dec_obj175;
void* right_value381;
char* __dec_obj176;
memset(&right_value378, 0, sizeof(void*));
memset(&result_311, 0, sizeof(struct sExternalGlobalVariable*)); /* ddd */
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sExternalGlobalVariable* __result252__ = (void*)0;
                come_release_malloced_mem();
                return __result252__;
            }
            result_311=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value378=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1)))));
            if(right_value378) { come_call_finalizer(sExternalGlobalVariable_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj174=result_311->type;
                result_311->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value379=sType_clone(self->type))));
                if(__dec_obj174) { come_call_finalizer(sType_finalize,__dec_obj174, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value379) { come_call_finalizer(sType_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->name!=((void*)0)) {
                __dec_obj175=result_311->name;
                result_311->name=(char*)come_increment_ref_count(((char*)(right_value380=string_clone(self->name))));
                if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0); }
                if(right_value380) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_311->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj176=result_311->sname;
                result_311->sname=(char*)come_increment_ref_count(((char*)(right_value381=string_clone(self->sname))));
                if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0); }
                if(right_value381) { right_value381 = come_decrement_ref_count(right_value381, (void*)0, (void*)0, 1, 0); }
            }
            struct sExternalGlobalVariable* __result253__ = result_311;
            if(result_311) { come_call_finalizer(sExternalGlobalVariable_finalize,result_311, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result253__;
        come_release_malloced_mem();
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
void* right_value385;
struct sGlobalVariable* result_312;
void* right_value386;
struct sType* __dec_obj177;
void* right_value387;
char* __dec_obj178;
void* right_value388;
struct sNode* __dec_obj179;
void* right_value389;
char* __dec_obj180;
void* right_value390;
char* __dec_obj181;
memset(&right_value385, 0, sizeof(void*));
memset(&result_312, 0, sizeof(struct sGlobalVariable*)); /* ddd */
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sGlobalVariable* __result255__ = (void*)0;
                come_release_malloced_mem();
                return __result255__;
            }
            result_312=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value385=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1)))));
            if(right_value385) { come_call_finalizer(sGlobalVariable_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj177=result_312->type;
                result_312->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value386=sType_clone(self->type))));
                if(__dec_obj177) { come_call_finalizer(sType_finalize,__dec_obj177, (void*)0, (void*)0, 0, 0, 0); }
                if(right_value386) { come_call_finalizer(sType_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->name!=((void*)0)) {
                __dec_obj178=result_312->name;
                result_312->name=(char*)come_increment_ref_count(((char*)(right_value387=string_clone(self->name))));
                if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0); }
                if(right_value387) { right_value387 = come_decrement_ref_count(right_value387, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->right_node!=((void*)0)) {
                __dec_obj179=result_312->right_node;
                result_312->right_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=sNodep_clone(self->right_node))));
                if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0); }
                if(right_value388) { right_value388 = come_decrement_ref_count(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_312->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj180=result_312->sname;
                result_312->sname=(char*)come_increment_ref_count(((char*)(right_value389=string_clone(self->sname))));
                if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0); }
                if(right_value389) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->array_initializer!=((void*)0)) {
                __dec_obj181=result_312->array_initializer;
                result_312->array_initializer=(char*)come_increment_ref_count(((char*)(right_value390=string_clone(self->array_initializer))));
                if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0); }
                if(right_value390) { right_value390 = come_decrement_ref_count(right_value390, (void*)0, (void*)0, 1, 0); }
            }
            struct sGlobalVariable* __result256__ = result_312;
            if(result_312) { come_call_finalizer(sGlobalVariable_finalize,result_312, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result256__;
        come_release_malloced_mem();
}

