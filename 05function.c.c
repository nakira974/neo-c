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
enum { _ISupper=((0)<8?((1<<(0))<<8):((1<<(0))>>8)),_ISlower=((1)<8?((1<<(1))<<8):((1<<(1))>>8)),_ISalpha=((2)<8?((1<<(2))<<8):((1<<(2))>>8)),_ISdigit=((3)<8?((1<<(3))<<8):((1<<(3))>>8)),_ISxdigit=((4)<8?((1<<(4))<<8):((1<<(4))>>8)),_ISspace=((5)<8?((1<<(5))<<8):((1<<(5))>>8)),_ISprint=((6)<8?((1<<(6))<<8):((1<<(6))>>8)),_ISgraph=((7)<8?((1<<(7))<<8):((1<<(7))>>8)),_ISblank=((8)<8?((1<<(8))<<8):((1<<(8))>>8)),_IScntrl=((9)<8?((1<<(9))<<8):((1<<(9))>>8)),_ISpunct=((10)<8?((1<<(10))<<8):((1<<(10))>>8)),_ISalnum=((11)<8?((1<<(11))<<8):((1<<(11))>>8))};
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

const unsigned short int** __ctype_b_loc();

const int** __ctype_tolower_loc();

const int** __ctype_toupper_loc();

int isalnum(int anonymous_var_name20);

int isalpha(int anonymous_var_name21);

int iscntrl(int anonymous_var_name22);

int isdigit(int anonymous_var_name23);

int islower(int anonymous_var_name24);

int isgraph(int anonymous_var_name25);

int isprint(int anonymous_var_name26);

int ispunct(int anonymous_var_name27);

int isspace(int anonymous_var_name28);

int isupper(int anonymous_var_name29);

int isxdigit(int anonymous_var_name30);

int tolower(int __c);

int toupper(int __c);

int isblank(int anonymous_var_name31);

int isctype(int __c, int __mask);

int isascii(int __c);

int toascii(int __c);

int _toupper(int anonymous_var_name32);

int _tolower(int anonymous_var_name33);

int isalnum_l(int anonymous_var_name34, struct __locale_struct* anonymous_var_name35);

int isalpha_l(int anonymous_var_name36, struct __locale_struct* anonymous_var_name37);

int iscntrl_l(int anonymous_var_name38, struct __locale_struct* anonymous_var_name39);

int isdigit_l(int anonymous_var_name40, struct __locale_struct* anonymous_var_name41);

int islower_l(int anonymous_var_name42, struct __locale_struct* anonymous_var_name43);

int isgraph_l(int anonymous_var_name44, struct __locale_struct* anonymous_var_name45);

int isprint_l(int anonymous_var_name46, struct __locale_struct* anonymous_var_name47);

int ispunct_l(int anonymous_var_name48, struct __locale_struct* anonymous_var_name49);

int isspace_l(int anonymous_var_name50, struct __locale_struct* anonymous_var_name51);

int isupper_l(int anonymous_var_name52, struct __locale_struct* anonymous_var_name53);

int isxdigit_l(int anonymous_var_name54, struct __locale_struct* anonymous_var_name55);

int isblank_l(int anonymous_var_name56, struct __locale_struct* anonymous_var_name57);

int __tolower_l(int __c, struct __locale_struct* __l);

int tolower_l(int __c, struct __locale_struct* __l);

int __toupper_l(int __c, struct __locale_struct* __l);

int toupper_l(int __c, struct __locale_struct* __l);

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
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
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






void come_init_v5(){
}

void come_final_v5(){
}

struct sNode* parse_global_variable(struct sInfo* info){
void* right_value386;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* result_type_312;
char* var_name_313;
_Bool err_314;
struct sNode* right_node_315;
char* array_initializer_316;
void* right_value387;
void* right_value388;
struct buffer* buf_317;
_Bool squort_318;
_Bool dquort_319;
int nest_320;
void* right_value389;
char* __dec_obj172;
void* right_value390;
struct sNode* __dec_obj173;
void* right_value391;
void* right_value392;
struct sNode* _inf_value15;
struct sExternalGlobalVariable* _inf_obj_value15;
void* right_value397;
void* right_value398;
void* right_value399;
struct sNode* _inf_value16;
struct sGlobalVariable* _inf_obj_value16;
void* right_value406;
memset(&right_value386, 0, sizeof(void*));
memset(&result_type_312, 0, sizeof(struct sType*)); /* ccc */
memset(&var_name_313, 0, sizeof(char*)); /* ccc */
memset(&err_314, 0, sizeof(_Bool)); /* ccc */
memset(&result_type_312, 0, sizeof(struct sType*)); /* eee */
memset(&var_name_313, 0, sizeof(char*)); /* eee */
memset(&err_314, 0, sizeof(_Bool)); /* eee */
memset(&right_node_315, 0, sizeof(struct sNode*)); /* ddd */
memset(&array_initializer_316, 0, sizeof(char*)); /* ddd */
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&buf_317, 0, sizeof(struct buffer*)); /* ddd */
memset(&squort_318, 0, sizeof(_Bool)); /* ddd */
memset(&dquort_319, 0, sizeof(_Bool)); /* ddd */
memset(&nest_320, 0, sizeof(int)); /* ddd */
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
    multiple_assgin_var4=((struct tuple3$3sTypephcharphbool*)(right_value386=parse_type(info,(_Bool)1,(_Bool)1)));
    result_type_312=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
    var_name_313=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
    err_314=multiple_assgin_var4->v3;
    if(right_value386) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0); }
    if(!err_314) {
        exit(2);
    }
    right_node_315=((void*)0);
    array_initializer_316=((void*)0);
    if(*info->p==61) {
        info->p++;
        skip_spaces_and_lf(info);
        if(*info->p==123) {
            buf_317=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value388=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value387=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
            if(right_value387) { come_call_finalizer(buffer_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value388) { come_call_finalizer(buffer_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0); }
            buffer_append_char(buf_317,*info->p);
            info->p++;
            squort_318=(_Bool)0;
            dquort_319=(_Bool)0;
            nest_320=1;
            while(1) {
                if(*info->p==0) {
                    err_msg(info,"unexpected source end in array initiailizer");
                    exit(2);
                }
                else if(*info->p==92) {
                    buffer_append_char(buf_317,*info->p);
                    info->p++;
                    buffer_append_char(buf_317,*info->p);
                    info->p++;
                }
                else if(!squort_318&&*info->p==34) {
                    buffer_append_char(buf_317,*info->p);
                    info->p++;
                    dquort_319=!dquort_319;
                }
                else if(!dquort_319&&*info->p==39) {
                    buffer_append_char(buf_317,*info->p);
                    info->p++;
                    squort_318=!squort_318;
                }
                else if(squort_318||dquort_319) {
                    buffer_append_char(buf_317,*info->p);
                    info->p++;
                }
                else if(*info->p==123) {
                    nest_320++;
                    buffer_append_char(buf_317,*info->p);
                    info->p++;
                }
                else if(*info->p==125) {
                    nest_320--;
                    buffer_append_char(buf_317,*info->p);
                    info->p++;
                    if(nest_320==0) {
                        skip_spaces_and_lf(info);
                        break;
                    }
                }
                else {
                    buffer_append_char(buf_317,*info->p);
                    info->p++;
                }
            }
            __dec_obj172=array_initializer_316;
            array_initializer_316=(char*)come_increment_ref_count(((char*)(right_value389=buffer_to_string(buf_317))));
            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0); }
            if(right_value389) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0); }
            if(buf_317) { come_call_finalizer(buffer_finalize,buf_317, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            parse_sharp_v5(info);
            __dec_obj173=right_node_315;
            right_node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=expression_v13(info))));
            if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0); }
            if(right_value390) { right_value390 = come_decrement_ref_count(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0); } 
            parse_sharp_v5(info);
        }
    }
    if(result_type_312->mExtern) {
        if(right_node_315) {
            err_msg(info,"invalid right value");
            exit(2);
        }
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value15=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value392=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value391=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1))))),result_type_312,(char*)come_increment_ref_count(var_name_313),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=sExternalGlobalVariable_finalize;
        _inf_value15->clone=sExternalGlobalVariable_clone;
        _inf_value15->compile=sExternalGlobalVariable_compile;
        _inf_value15->sline=sExternalGlobalVariable_sline;
        _inf_value15->sname=sExternalGlobalVariable_sname;
        _inf_value15->terminated=sExternalGlobalVariable_terminated;
        struct sNode* __result258__ = ((struct sNode*)(right_value397=_inf_value15));
        if(right_value391) { come_call_finalizer(sExternalGlobalVariable_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value392) { come_call_finalizer(sExternalGlobalVariable_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0); }
        return __result258__;
    }
    else {
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value16=come_increment_ref_count(((struct sGlobalVariable*)(right_value399=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value398=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1))))),result_type_312,(char*)come_increment_ref_count(var_name_313),(struct sNode*)come_increment_ref_count(right_node_315),(char*)come_increment_ref_count(array_initializer_316),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=sGlobalVariable_finalize;
        _inf_value16->clone=sGlobalVariable_clone;
        _inf_value16->compile=sGlobalVariable_compile;
        _inf_value16->sline=sGlobalVariable_sline;
        _inf_value16->sname=sGlobalVariable_sname;
        _inf_value16->terminated=sGlobalVariable_terminated;
        struct sNode* __result261__ = ((struct sNode*)(right_value406=_inf_value16));
        if(right_value398) { come_call_finalizer(sGlobalVariable_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value399) { come_call_finalizer(sGlobalVariable_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0); }
        return __result261__;
    }
    struct sNode* __result262__ = (struct sNode*)((void*)0);
    if(result_type_312) { come_call_finalizer(sType_finalize,result_type_312, (void*)0, (void*)0, 0, 0, 0); }
    if(var_name_313) { var_name_313 = come_decrement_ref_count(var_name_313, (void*)0, (void*)0, 0, 0); }
    if(right_node_315) { right_node_315 = come_decrement_ref_count(right_node_315, ((struct sNode*)right_node_315)->finalize, ((struct sNode*)right_node_315)->_protocol_obj, 0, 0); } 
    if(array_initializer_316) { array_initializer_316 = come_decrement_ref_count(array_initializer_316, (void*)0, (void*)0, 0, 0); }
    return __result262__;
}

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info){
    struct sNode* __result264__ = node;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result264__;
}

struct sNode* expression_v5(struct sInfo* info){
void* right_value368;
memset(&right_value368, 0, sizeof(void*));
    struct sNode* __result244__ = ((struct sNode*)(right_value368=expression_node_v99(info)));
    return __result244__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    struct sNode* __result263__ = (struct sNode*)((void*)0);
    if(buf) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1); }
    return __result263__;
}

struct sNode* expression_node_v1(struct sInfo* info){
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    exit(3);
    struct sNode* __result53__ = (struct sNode*)((void*)0);
    return __result53__;
}

struct sNode* expression_node_v99(struct sInfo* info){
void* right_value240;
struct sBlock* block_242;
void* right_value241;
void* right_value242;
struct sNode* _inf_value2;
struct sNormalBlock* _inf_obj_value2;
void* right_value246;
void* right_value247;
struct sNode* node_244;
void* right_value248;
void* right_value249;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* right_value253;
void* right_value254;
struct sNode* node_246;
void* right_value255;
void* right_value256;
struct sNode* _inf_value4;
struct sMinusMinusNode2* _inf_obj_value4;
void* right_value260;
void* right_value261;
struct sNode* node_248;
void* right_value262;
void* right_value263;
struct sNode* _inf_value5;
struct sMinusNode2* _inf_obj_value5;
void* right_value267;
void* right_value268;
struct sNode* node_250;
void* right_value269;
void* right_value270;
struct sNode* _inf_value6;
struct sPlusPlusNode2* _inf_obj_value6;
void* right_value274;
void* right_value275;
struct sNode* node_252;
void* right_value276;
void* right_value277;
struct sNode* _inf_value7;
struct sComplement* _inf_obj_value7;
void* right_value281;
void* right_value282;
struct sNode* node_254;
void* right_value283;
struct sNode* __dec_obj128;
void* right_value284;
struct sNode* node_255;
void* right_value285;
struct sNode* __dec_obj129;
void* right_value286;
struct sNode* node_256;
void* right_value287;
struct sNode* __dec_obj130;
void* right_value288;
struct sNode* node_257;
void* right_value289;
struct sNode* __dec_obj131;
void* right_value290;
void* right_value291;
void* right_value292;
struct sNode* _inf_value8;
struct sReturnNode* _inf_obj_value8;
void* right_value297;
char* head_259;
void* right_value298;
struct sNode* value_260;
char* tail_261;
void* right_value299;
void* right_value300;
void* right_value301;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* right_value306;
void* right_value307;
struct sNode* value_264;
void* right_value308;
void* right_value309;
struct sNode* _inf_value10;
struct sDerefferenceNode* _inf_obj_value10;
void* right_value313;
void* right_value314;
struct sNode* value_266;
void* right_value315;
void* right_value316;
struct sNode* _inf_value11;
struct sRefferenceNode* _inf_obj_value11;
void* right_value320;
void* right_value321;
struct sNode* value_268;
void* right_value322;
void* right_value323;
struct sNode* _inf_value12;
struct sReverseNode* _inf_obj_value12;
void* right_value327;
char* head_270;
int head_sline_271;
char* buf_272;
char* p_273;
int sline_274;
void* right_value328;
char* __dec_obj144;
void* right_value329;
char* __dec_obj145;
_Bool is_type_name__275;
_Bool define_function_pointer_flag_276;
void* right_value330;
_Bool lambda_flag_277;
void* right_value331;
void* right_value332;
char* word2_278;
void* right_value333;
char* __dec_obj146;
void* right_value334;
void* right_value335;
struct sNode* node_279;
void* right_value336;
struct sNode* __dec_obj147;
void* right_value337;
struct sNode* __dec_obj148;
void* right_value338;
struct sNode* node_280;
void* right_value339;
struct sNode* __dec_obj149;
void* right_value340;
struct sNode* node_281;
void* right_value341;
struct sNode* __dec_obj150;
void* right_value342;
struct sNode* __dec_obj151;
void* right_value343;
struct sNode* node_282;
void* right_value344;
struct sNode* __dec_obj152;
_Bool cast_expression_flag_283;
char* p_284;
int sline_285;
void* right_value345;
char* word_286;
void* right_value346;
char* __dec_obj153;
_Bool tuple_expression_flag_287;
char* p_288;
int sline_289;
_Bool no_comma_290;
_Bool no_output_err_291;
_Bool no_output_come_code_292;
void* right_value347;
struct sNode* node_293;
void* right_value348;
void* right_value349;
struct tuple3$3sTypephcharphbool* multiple_assgin_var3;
struct sType* type_294;
char* name_295;
_Bool err_296;
void* right_value350;
struct sNode* node_297;
void* right_value351;
void* right_value352;
struct sNode* _inf_value13;
struct sCastNode* _inf_obj_value13;
void* right_value357;
void* right_value358;
struct sNode* node_299;
void* right_value359;
void* right_value360;
struct sNode* _inf_value14;
struct sParenNode* _inf_obj_value14;
void* right_value364;
struct sNode* __dec_obj159;
void* right_value365;
struct sNode* __dec_obj160;
void* right_value366;
struct sNode* node_301;
void* right_value367;
struct sNode* __dec_obj161;
memset(&right_value240, 0, sizeof(void*));
memset(&block_242, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&node_244, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&node_246, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&node_248, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&node_250, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&node_252, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&node_254, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&node_255, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&node_256, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&node_257, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&head_259, 0, sizeof(char*)); /* ddd */
memset(&right_value298, 0, sizeof(void*));
memset(&value_260, 0, sizeof(struct sNode*)); /* ddd */
memset(&tail_261, 0, sizeof(char*)); /* ddd */
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&value_264, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&value_266, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&value_268, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&head_270, 0, sizeof(char*)); /* ddd */
memset(&head_sline_271, 0, sizeof(int)); /* ddd */
memset(&buf_272, 0, sizeof(char*)); /* bbb */
memset(&p_273, 0, sizeof(char*)); /* ddd */
memset(&sline_274, 0, sizeof(int)); /* ddd */
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&is_type_name__275, 0, sizeof(_Bool)); /* ddd */
memset(&define_function_pointer_flag_276, 0, sizeof(_Bool)); /* ddd */
memset(&right_value330, 0, sizeof(void*));
memset(&lambda_flag_277, 0, sizeof(_Bool)); /* ddd */
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&word2_278, 0, sizeof(char*)); /* ddd */
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&node_279, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&node_280, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&node_281, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&node_282, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value344, 0, sizeof(void*));
memset(&cast_expression_flag_283, 0, sizeof(_Bool)); /* ddd */
memset(&p_284, 0, sizeof(char*)); /* ddd */
memset(&sline_285, 0, sizeof(int)); /* ddd */
memset(&right_value345, 0, sizeof(void*));
memset(&word_286, 0, sizeof(char*)); /* ddd */
memset(&right_value346, 0, sizeof(void*));
memset(&tuple_expression_flag_287, 0, sizeof(_Bool)); /* ddd */
memset(&p_288, 0, sizeof(char*)); /* ddd */
memset(&sline_289, 0, sizeof(int)); /* ddd */
memset(&no_comma_290, 0, sizeof(_Bool)); /* ddd */
memset(&no_output_err_291, 0, sizeof(_Bool)); /* ddd */
memset(&no_output_come_code_292, 0, sizeof(_Bool)); /* ddd */
memset(&right_value347, 0, sizeof(void*));
memset(&node_293, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&type_294, 0, sizeof(struct sType*)); /* ccc */
memset(&name_295, 0, sizeof(char*)); /* ccc */
memset(&err_296, 0, sizeof(_Bool)); /* ccc */
memset(&type_294, 0, sizeof(struct sType*)); /* eee */
memset(&name_295, 0, sizeof(char*)); /* eee */
memset(&err_296, 0, sizeof(_Bool)); /* eee */
memset(&right_value350, 0, sizeof(void*));
memset(&node_297, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&node_299, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&node_301, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value367, 0, sizeof(void*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(*info->p==123) {
        block_242=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value240=parse_block(info,(_Bool)0))));
        if(right_value240) { come_call_finalizer(sBlock_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0); }
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value2=come_increment_ref_count(((struct sNormalBlock*)(right_value242=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value241=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1))))),block_242,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=sNormalBlock_finalize;
        _inf_value2->clone=sNormalBlock_clone;
        _inf_value2->compile=sNormalBlock_compile;
        _inf_value2->sline=sNormalBlock_sline;
        _inf_value2->sname=sNormalBlock_sname;
        _inf_value2->terminated=sNormalBlock_terminated;
        struct sNode* __result195__ = ((struct sNode*)(right_value246=_inf_value2));
        if(block_242) { come_call_finalizer(sBlock_finalize,block_242, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value241) { come_call_finalizer(sNormalBlock_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value242) { come_call_finalizer(sNormalBlock_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0); }
        return __result195__;
    }
    else if(*info->p==33) {
        info->p++;
        skip_spaces_and_lf(info);
        node_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=expression_node_v99(info))));
        if(right_value247) { right_value247 = come_decrement_ref_count(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0); } 
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value3=come_increment_ref_count(((struct sLogicalDenial*)(right_value249=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value248=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1))))),(struct sNode*)come_increment_ref_count(node_244),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=sLogicalDenial_finalize;
        _inf_value3->clone=sLogicalDenial_clone;
        _inf_value3->compile=sLogicalDenial_compile;
        _inf_value3->sline=sLogicalDenial_sline;
        _inf_value3->sname=sLogicalDenial_sname;
        _inf_value3->terminated=sLogicalDenial_terminated;
        struct sNode* __result198__ = ((struct sNode*)(right_value253=_inf_value3));
        if(node_244) { node_244 = come_decrement_ref_count(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 0); } 
        if(right_value248) { come_call_finalizer(sLogicalDenial_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value249) { come_call_finalizer(sLogicalDenial_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0); }
        return __result198__;
    }
    else if(*info->p==45&&*(info->p+1)==45) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=expression_node_v99(info))));
        if(right_value254) { right_value254 = come_decrement_ref_count(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0); } 
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value4=come_increment_ref_count(((struct sMinusMinusNode2*)(right_value256=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value255=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1))))),(struct sNode*)come_increment_ref_count(node_246),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=sMinusMinusNode2_finalize;
        _inf_value4->clone=sMinusMinusNode2_clone;
        _inf_value4->compile=sMinusMinusNode2_compile;
        _inf_value4->sline=sMinusMinusNode2_sline;
        _inf_value4->sname=sMinusMinusNode2_sname;
        _inf_value4->terminated=sMinusMinusNode2_terminated;
        struct sNode* __result201__ = ((struct sNode*)(right_value260=_inf_value4));
        if(node_246) { node_246 = come_decrement_ref_count(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0); } 
        if(right_value255) { come_call_finalizer(sMinusMinusNode2_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value256) { come_call_finalizer(sMinusMinusNode2_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0); }
        return __result201__;
    }
    else if(*info->p==45) {
        info->p++;
        skip_spaces_and_lf(info);
        node_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value261=expression_node_v99(info))));
        if(right_value261) { right_value261 = come_decrement_ref_count(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0); } 
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value5=come_increment_ref_count(((struct sMinusNode2*)(right_value263=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value262=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1))))),(struct sNode*)come_increment_ref_count(node_248),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=sMinusNode2_finalize;
        _inf_value5->clone=sMinusNode2_clone;
        _inf_value5->compile=sMinusNode2_compile;
        _inf_value5->sline=sMinusNode2_sline;
        _inf_value5->sname=sMinusNode2_sname;
        _inf_value5->terminated=sMinusNode2_terminated;
        struct sNode* __result204__ = ((struct sNode*)(right_value267=_inf_value5));
        if(node_248) { node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0); } 
        if(right_value262) { come_call_finalizer(sMinusNode2_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value263) { come_call_finalizer(sMinusNode2_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0); }
        return __result204__;
    }
    else if(*info->p==43&&*(info->p+1)==43) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=expression_node_v99(info))));
        if(right_value268) { right_value268 = come_decrement_ref_count(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0); } 
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value6=come_increment_ref_count(((struct sPlusPlusNode2*)(right_value270=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value269=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1))))),(struct sNode*)come_increment_ref_count(node_250),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=sPlusPlusNode2_finalize;
        _inf_value6->clone=sPlusPlusNode2_clone;
        _inf_value6->compile=sPlusPlusNode2_compile;
        _inf_value6->sline=sPlusPlusNode2_sline;
        _inf_value6->sname=sPlusPlusNode2_sname;
        _inf_value6->terminated=sPlusPlusNode2_terminated;
        struct sNode* __result207__ = ((struct sNode*)(right_value274=_inf_value6));
        if(node_250) { node_250 = come_decrement_ref_count(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0, 0); } 
        if(right_value269) { come_call_finalizer(sPlusPlusNode2_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value270) { come_call_finalizer(sPlusPlusNode2_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0); }
        return __result207__;
    }
    else if(*info->p==126) {
        info->p++;
        skip_spaces_and_lf(info);
        node_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=expression_node_v99(info))));
        if(right_value275) { right_value275 = come_decrement_ref_count(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0); } 
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value7=come_increment_ref_count(((struct sComplement*)(right_value277=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value276=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1))))),(struct sNode*)come_increment_ref_count(node_252),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=sComplement_finalize;
        _inf_value7->clone=sComplement_clone;
        _inf_value7->compile=sComplement_compile;
        _inf_value7->sline=sComplement_sline;
        _inf_value7->sname=sComplement_sname;
        _inf_value7->terminated=sComplement_terminated;
        struct sNode* __result210__ = ((struct sNode*)(right_value281=_inf_value7));
        if(node_252) { node_252 = come_decrement_ref_count(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0); } 
        if(right_value276) { come_call_finalizer(sComplement_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value277) { come_call_finalizer(sComplement_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0); }
        return __result210__;
    }
    else if(*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88)) {
        info->p+=2;
        node_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=get_hex_number((_Bool)0,info))));
        if(right_value282) { right_value282 = come_decrement_ref_count(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0); } 
        __dec_obj128=node_254;
        node_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_254),info))));
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0); }
        if(right_value283) { right_value283 = come_decrement_ref_count(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0); } 
        struct sNode* __result211__ = node_254;
        if(node_254) { node_254 = come_decrement_ref_count(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 1); } 
        return __result211__;
    }
    else if(*info->p==48&&xisdigit(*(info->p+1))) {
        info->p++;
        node_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=get_oct_number(info))));
        if(right_value284) { right_value284 = come_decrement_ref_count(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0); } 
        __dec_obj129=node_255;
        node_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_255),info))));
        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0); }
        if(right_value285) { right_value285 = come_decrement_ref_count(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0); } 
        struct sNode* __result212__ = node_255;
        if(node_255) { node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 1); } 
        return __result212__;
    }
    else if(xisdigit(*info->p)) {
        node_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=get_number((_Bool)0,info))));
        if(right_value286) { right_value286 = come_decrement_ref_count(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0); } 
        __dec_obj130=node_256;
        node_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_256),info))));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0); }
        if(right_value287) { right_value287 = come_decrement_ref_count(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0); } 
        struct sNode* __result213__ = node_256;
        if(node_256) { node_256 = come_decrement_ref_count(node_256, ((struct sNode*)node_256)->finalize, ((struct sNode*)node_256)->_protocol_obj, 0, 1); } 
        return __result213__;
    }
    else if(*info->p==45&&xisdigit(*(info->p+1))) {
        info->p++;
        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value288=get_number((_Bool)1,info))));
        if(right_value288) { right_value288 = come_decrement_ref_count(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0); } 
        __dec_obj131=node_257;
        node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value289=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_257),info))));
        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0); }
        if(right_value289) { right_value289 = come_decrement_ref_count(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0); } 
        struct sNode* __result214__ = node_257;
        if(node_257) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 1); } 
        return __result214__;
    }
    else if(parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(*info->p==59) {
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value8=come_increment_ref_count(((struct sReturnNode*)(right_value292=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value290=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1))))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string("0")))),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=sReturnNode_finalize;
            _inf_value8->clone=sReturnNode_clone;
            _inf_value8->compile=sReturnNode_compile;
            _inf_value8->sline=sReturnNode_sline;
            _inf_value8->sname=sReturnNode_sname;
            _inf_value8->terminated=sReturnNode_terminated;
            struct sNode* __result217__ = ((struct sNode*)(right_value297=_inf_value8));
            if(right_value290) { come_call_finalizer(sReturnNode_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value291) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0); }
            if(right_value292) { come_call_finalizer(sReturnNode_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0); }
            return __result217__;
        }
        else {
            head_259=info->p;
            value_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=expression_v13(info))));
            if(right_value298) { right_value298 = come_decrement_ref_count(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0); } 
            tail_261=info->p;
            char buf_262[tail_261-head_259+1];
            memset(&buf_262, 0, sizeof(buf_262)); /* aaa */
            memcpy(buf_262,head_259,tail_261-head_259);
            buf_262[tail_261-head_259]=0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value9=come_increment_ref_count(((struct sReturnNode*)(right_value301=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value299=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1))))),(struct sNode*)come_increment_ref_count(value_260),(char*)come_increment_ref_count(((char*)(right_value300=__builtin_string(buf_262)))),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=sReturnNode_finalize;
            _inf_value9->clone=sReturnNode_clone;
            _inf_value9->compile=sReturnNode_compile;
            _inf_value9->sline=sReturnNode_sline;
            _inf_value9->sname=sReturnNode_sname;
            _inf_value9->terminated=sReturnNode_terminated;
            struct sNode* __result220__ = ((struct sNode*)(right_value306=_inf_value9));
            if(value_260) { value_260 = come_decrement_ref_count(value_260, ((struct sNode*)value_260)->finalize, ((struct sNode*)value_260)->_protocol_obj, 0, 0); } 
            if(right_value299) { come_call_finalizer(sReturnNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value300) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0); }
            if(right_value301) { come_call_finalizer(sReturnNode_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0); }
            return __result220__;
        }
    }
    else if(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        value_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=expression_node_v99(info))));
        if(right_value307) { right_value307 = come_decrement_ref_count(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0); } 
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value10=come_increment_ref_count(((struct sDerefferenceNode*)(right_value309=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value308=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1))))),(struct sNode*)come_increment_ref_count(value_264),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=sDerefferenceNode_finalize;
        _inf_value10->clone=sDerefferenceNode_clone;
        _inf_value10->compile=sDerefferenceNode_compile;
        _inf_value10->sline=sDerefferenceNode_sline;
        _inf_value10->sname=sDerefferenceNode_sname;
        _inf_value10->terminated=sDerefferenceNode_terminated;
        struct sNode* __result223__ = ((struct sNode*)(right_value313=_inf_value10));
        if(value_264) { value_264 = come_decrement_ref_count(value_264, ((struct sNode*)value_264)->finalize, ((struct sNode*)value_264)->_protocol_obj, 0, 0); } 
        if(right_value308) { come_call_finalizer(sDerefferenceNode_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value309) { come_call_finalizer(sDerefferenceNode_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0); }
        return __result223__;
    }
    else if(*info->p==38) {
        info->p++;
        skip_spaces_and_lf(info);
        value_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=expression_node_v99(info))));
        if(right_value314) { right_value314 = come_decrement_ref_count(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0); } 
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value11=come_increment_ref_count(((struct sRefferenceNode*)(right_value316=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value315=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1))))),(struct sNode*)come_increment_ref_count(value_266),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=sRefferenceNode_finalize;
        _inf_value11->clone=sRefferenceNode_clone;
        _inf_value11->compile=sRefferenceNode_compile;
        _inf_value11->sline=sRefferenceNode_sline;
        _inf_value11->sname=sRefferenceNode_sname;
        _inf_value11->terminated=sRefferenceNode_terminated;
        struct sNode* __result226__ = ((struct sNode*)(right_value320=_inf_value11));
        if(value_266) { value_266 = come_decrement_ref_count(value_266, ((struct sNode*)value_266)->finalize, ((struct sNode*)value_266)->_protocol_obj, 0, 0); } 
        if(right_value315) { come_call_finalizer(sRefferenceNode_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value316) { come_call_finalizer(sRefferenceNode_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0); }
        return __result226__;
    }
    else if(*info->p==33) {
        info->p++;
        skip_spaces_and_lf(info);
        value_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=expression_node_v99(info))));
        if(right_value321) { right_value321 = come_decrement_ref_count(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0); } 
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode));
        _inf_obj_value12=come_increment_ref_count(((struct sReverseNode*)(right_value323=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value322=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1))))),(struct sNode*)come_increment_ref_count(value_268),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=sReverseNode_finalize;
        _inf_value12->clone=sReverseNode_clone;
        _inf_value12->compile=sReverseNode_compile;
        _inf_value12->sline=sReverseNode_sline;
        _inf_value12->sname=sReverseNode_sname;
        _inf_value12->terminated=sReverseNode_terminated;
        struct sNode* __result229__ = ((struct sNode*)(right_value327=_inf_value12));
        if(value_268) { value_268 = come_decrement_ref_count(value_268, ((struct sNode*)value_268)->finalize, ((struct sNode*)value_268)->_protocol_obj, 0, 0); } 
        if(right_value322) { come_call_finalizer(sReverseNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value323) { come_call_finalizer(sReverseNode_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0); }
        return __result229__;
    }
    else if(xisalpha(*info->p)||*info->p==95) {
        head_270=info->p;
        head_sline_271=info->sline;
        {
            p_273=info->p;
            sline_274=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                __dec_obj144=buf_272;
                buf_272=(char*)come_increment_ref_count(((char*)(right_value328=parse_word(info))));
                if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0); }
                if(right_value328) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0); }
            }
            else {
                __dec_obj145=buf_272;
                buf_272=(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string(""))));
                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0); }
                if(right_value329) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0); }
            }
            info->p=p_273;
            info->sline=sline_274;
        }
        is_type_name__275=is_type_name(buf_272,info);
        define_function_pointer_flag_276=(_Bool)0;
        if(string_operator_not_equals(buf_272,"if")&&string_operator_not_equals(buf_272,"while")&&string_operator_not_equals(buf_272,"for")&&string_operator_not_equals(buf_272,"switch")&&string_operator_not_equals(buf_272,"return")&&string_operator_not_equals(buf_272,"sizeof")&&string_operator_not_equals(buf_272,"isheap")&&string_operator_not_equals(buf_272,"gc_inc")&&string_operator_not_equals(buf_272,"gc_dec")&&*info->p==40&&*(info->p+1)!=42) {
            info->no_output_err=(_Bool)1;
            ((struct tuple3$3sTypephcharphbool*)(right_value330=parse_type(info,(_Bool)0,(_Bool)1)));
            if(right_value330) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0); }
            info->no_output_err=(_Bool)0;
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_276=(_Bool)1;
                }
            }
            info->p=head_270;
            info->sline=head_sline_271;
        }
        lambda_flag_277=(_Bool)0;
        if(string_operator_not_equals(buf_272,"if")&&string_operator_not_equals(buf_272,"while")&&string_operator_not_equals(buf_272,"for")&&string_operator_not_equals(buf_272,"switch")&&string_operator_not_equals(buf_272,"return")&&string_operator_not_equals(buf_272,"sizeof")&&string_operator_not_equals(buf_272,"isheap")&&string_operator_not_equals(buf_272,"gc_inc")&&string_operator_not_equals(buf_272,"gc_dec")&&*info->p==40&&*(info->p+1)!=42) {
            info->p=head_270;
            info->sline=head_sline_271;
            info->no_output_err=(_Bool)1;
            ((struct tuple3$3sTypephcharphbool*)(right_value331=parse_type(info,(_Bool)0,(_Bool)1)));
            if(right_value331) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0); }
            if(xisalpha(*info->p)||*info->p==95) {
                word2_278=(char*)come_increment_ref_count(((char*)(right_value332=parse_word(info))));
                if(right_value332) { right_value332 = come_decrement_ref_count(right_value332, (void*)0, (void*)0, 1, 0); }
                if(string_operator_equals(word2_278,"lambda")) {
                    lambda_flag_277=(_Bool)1;
                }
                if(word2_278) { word2_278 = come_decrement_ref_count(word2_278, (void*)0, (void*)0, 0, 0); }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_270;
            info->sline=head_sline_271;
        }
        __dec_obj146=buf_272;
        buf_272=(char*)come_increment_ref_count(((char*)(right_value333=parse_word(info))));
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0); }
        if(right_value333) { right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0); }
        if(lambda_flag_277) {
            info->p=head_270;
            info->sline=head_sline_271;
            struct sNode* __result230__ = ((struct sNode*)(right_value334=parse_function(info)));
            if(buf_272) { buf_272 = come_decrement_ref_count(buf_272, (void*)0, (void*)0, 0, 0); }
            return __result230__;
        }
        else if((string_operator_equals(buf_272,"string")||string_operator_equals(buf_272,"wstring"))&&*info->p==40) {
            node_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=parse_function_call(buf_272,info))));
            if(right_value335) { right_value335 = come_decrement_ref_count(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0); } 
            __dec_obj147=node_279;
            node_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_279),info))));
            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0); }
            if(right_value336) { right_value336 = come_decrement_ref_count(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0); } 
            __dec_obj148=node_279;
            node_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_279),info))));
            if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0); }
            if(right_value337) { right_value337 = come_decrement_ref_count(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0); } 
            struct sNode* __result231__ = node_279;
            if(node_279) { node_279 = come_decrement_ref_count(node_279, ((struct sNode*)node_279)->finalize, ((struct sNode*)node_279)->_protocol_obj, 0, 1); } 
            if(buf_272) { buf_272 = come_decrement_ref_count(buf_272, (void*)0, (void*)0, 0, 0); }
            return __result231__;
        }
        else if(string_operator_equals(buf_272,"sizeof")&&*info->p==40) {
            node_280=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=string_node_v21(buf_272,head_270,head_sline_271,info))));
            if(right_value338) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0); } 
            __dec_obj149=node_280;
            node_280=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_280),info))));
            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0); }
            if(right_value339) { right_value339 = come_decrement_ref_count(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0); } 
            struct sNode* __result232__ = node_280;
            if(node_280) { node_280 = come_decrement_ref_count(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 1); } 
            if(buf_272) { buf_272 = come_decrement_ref_count(buf_272, (void*)0, (void*)0, 0, 0); }
            return __result232__;
        }
        else if(string_operator_not_equals(buf_272,"if")&&string_operator_not_equals(buf_272,"while")&&string_operator_not_equals(buf_272,"for")&&string_operator_not_equals(buf_272,"switch")&&string_operator_not_equals(buf_272,"return")&&string_operator_not_equals(buf_272,"sizeof")&&string_operator_not_equals(buf_272,"isheap")&&string_operator_not_equals(buf_272,"gc_inc")&&string_operator_not_equals(buf_272,"gc_dec")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__275)) {
            node_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=parse_function_call(buf_272,info))));
            if(right_value340) { right_value340 = come_decrement_ref_count(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0); } 
            __dec_obj150=node_281;
            node_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_281),info))));
            if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0); }
            if(right_value341) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0); } 
            __dec_obj151=node_281;
            node_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_281),info))));
            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0); }
            if(right_value342) { right_value342 = come_decrement_ref_count(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0); } 
            struct sNode* __result233__ = node_281;
            if(node_281) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 1); } 
            if(buf_272) { buf_272 = come_decrement_ref_count(buf_272, (void*)0, (void*)0, 0, 0); }
            return __result233__;
        }
        else {
            node_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=string_node_v21(buf_272,head_270,head_sline_271,info))));
            if(right_value343) { right_value343 = come_decrement_ref_count(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0); } 
            __dec_obj152=node_282;
            node_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_282),info))));
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0); }
            if(right_value344) { right_value344 = come_decrement_ref_count(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0); } 
            struct sNode* __result234__ = node_282;
            if(node_282) { node_282 = come_decrement_ref_count(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 1); } 
            if(buf_272) { buf_272 = come_decrement_ref_count(buf_272, (void*)0, (void*)0, 0, 0); }
            return __result234__;
        }
    }
    else if(*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        cast_expression_flag_283=(_Bool)0;
        {
            p_284=info->p;
            sline_285=info->sline;
            word_286=(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string(""))));
            if(right_value345) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0); }
            if(((*__ctype_b_loc())[(int)((*info->p))]&(unsigned short int)((2)<8?((1<<(2))<<8):((1<<(2))>>8)))||*info->p==95) {
                __dec_obj153=word_286;
                word_286=(char*)come_increment_ref_count(((char*)(right_value346=parse_word(info))));
                if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0); }
                if(right_value346) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0); }
            }
            if(is_type_name(word_286,info)) {
                cast_expression_flag_283=(_Bool)1;
            }
            info->p=p_284;
            info->sline=sline_285;
            if(word_286) { word_286 = come_decrement_ref_count(word_286, (void*)0, (void*)0, 0, 0); }
        }
        tuple_expression_flag_287=(_Bool)0;
        {
            p_288=info->p;
            sline_289=info->sline;
            no_comma_290=info->no_comma;
            info->no_comma=(_Bool)1;
            no_output_err_291=info->no_output_err;
            info->no_output_err=(_Bool)1;
            no_output_come_code_292=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            node_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=expression_v13(info))));
            if(right_value347) { right_value347 = come_decrement_ref_count(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0); } 
            info->no_comma=no_comma_290;
            info->no_output_err=no_output_err_291;
            info->no_output_come_code=no_output_come_code_292;
            if(*info->p==44) {
                tuple_expression_flag_287=(_Bool)1;
            }
            info->p=p_288;
            info->sline=sline_289;
            if(node_293) { node_293 = come_decrement_ref_count(node_293, ((struct sNode*)node_293)->finalize, ((struct sNode*)node_293)->_protocol_obj, 0, 0); } 
        }
        if(tuple_expression_flag_287) {
            struct sNode* __result235__ = ((struct sNode*)(right_value348=parse_tuple(info)));
            return __result235__;
        }
        else if(cast_expression_flag_283) {
            parse_sharp_v5(info);
            multiple_assgin_var3=((struct tuple3$3sTypephcharphbool*)(right_value349=parse_type(info,(_Bool)0,(_Bool)1)));
            type_294=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
            name_295=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
            err_296=multiple_assgin_var3->v3;
            if(right_value349) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0); }
            if(!err_296) {
                exit(2);
            }
            parse_sharp_v5(info);
            expected_next_character(41,info);
            node_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=expression_node_v99(info))));
            if(right_value350) { right_value350 = come_decrement_ref_count(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0); } 
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value13=come_increment_ref_count(((struct sCastNode*)(right_value352=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value351=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1))))),type_294,node_297,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=sCastNode_finalize;
            _inf_value13->clone=sCastNode_clone;
            _inf_value13->compile=sCastNode_compile;
            _inf_value13->sline=sCastNode_sline;
            _inf_value13->sname=sCastNode_sname;
            _inf_value13->terminated=sCastNode_terminated;
            struct sNode* __result238__ = ((struct sNode*)(right_value357=_inf_value13));
            if(type_294) { come_call_finalizer(sType_finalize,type_294, (void*)0, (void*)0, 0, 0, 0); }
            if(name_295) { name_295 = come_decrement_ref_count(name_295, (void*)0, (void*)0, 0, 0); }
            if(node_297) { node_297 = come_decrement_ref_count(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 0); } 
            if(right_value351) { come_call_finalizer(sCastNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value352) { come_call_finalizer(sCastNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0); }
            return __result238__;
        }
        else {
            parse_sharp_v5(info);
            node_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=expression_v13(info))));
            if(right_value358) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0); } 
            parse_sharp_v5(info);
            expected_next_character(41,info);
            parse_sharp_v5(info);
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode));
            _inf_obj_value14=come_increment_ref_count(((struct sParenNode*)(right_value360=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value359=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1))))),node_299,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=sParenNode_finalize;
            _inf_value14->clone=sParenNode_clone;
            _inf_value14->compile=sParenNode_compile;
            _inf_value14->sline=sParenNode_sline;
            _inf_value14->sname=sParenNode_sname;
            _inf_value14->terminated=sParenNode_terminated;
            __dec_obj159=node_299;
            node_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=_inf_value14)));
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0); }
            if(right_value359) { come_call_finalizer(sParenNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value360) { come_call_finalizer(sParenNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value364) { right_value364 = come_decrement_ref_count(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0); } 
            __dec_obj160=node_299;
            node_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_299),info))));
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0); }
            if(right_value365) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0); } 
            struct sNode* __result241__ = node_299;
            if(node_299) { node_299 = come_decrement_ref_count(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 1); } 
            return __result241__;
        }
    }
    else {
        node_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=expression_node_v98(info))));
        if(right_value366) { right_value366 = come_decrement_ref_count(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0); } 
        __dec_obj161=node_301;
        node_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_301),info))));
        if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0); }
        if(right_value367) { right_value367 = come_decrement_ref_count(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0); } 
        struct sNode* __result242__ = node_301;
        if(node_301) { node_301 = come_decrement_ref_count(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 1); } 
        return __result242__;
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    struct sNode* __result243__ = (struct sNode*)((void*)0);
    return __result243__;
}

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info){
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(3);
    struct sNode* __result138__ = (struct sNode*)((void*)0);
    return __result138__;
}

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info){
    struct sNode* __result139__ = node;
    if(node) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1); } 
    return __result139__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info){
char* struct_name_309;
void* right_value380;
void* right_value381;
struct buffer* buf_310;
void* right_value382;
char* __dec_obj170;
void* right_value383;
char* __dec_obj171;
int i_311;
void* right_value384;
void* right_value385;
memset(&struct_name_309, 0, sizeof(char*)); /* bbb */
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&buf_310, 0, sizeof(struct buffer*)); /* ddd */
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&i_311, 0, sizeof(int)); /* ddd */
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
    buf_310=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value381=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value380=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    if(right_value380) { come_call_finalizer(buffer_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value381) { come_call_finalizer(buffer_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0); }
    if(string_operator_not_equals(obj_type->mOriginalTypeName,"")&&!obj_type->mNoHeap) {
        __dec_obj170=struct_name_309;
        struct_name_309=(char*)come_increment_ref_count(((char*)(right_value382=__builtin_string(obj_type->mOriginalTypeName))));
        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0); }
        if(right_value382) { right_value382 = come_decrement_ref_count(right_value382, (void*)0, (void*)0, 1, 0); }
    }
    else {
        __dec_obj171=struct_name_309;
        struct_name_309=(char*)come_increment_ref_count(((char*)(right_value383=create_generics_name(obj_type,info))));
        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0); }
        if(right_value383) { right_value383 = come_decrement_ref_count(right_value383, (void*)0, (void*)0, 1, 0); }
        for(
        i_311=0;
        i_311<obj_type->mPointerNum;
        i_311++
        ){
            buffer_append_str(buf_310,"p");
        }
    }
    char* __result255__ = ((char*)(right_value385=xsprintf("%s%s_%s",struct_name_309,((char*)(right_value384=buffer_to_string(buf_310))),fun_name)));
    if(struct_name_309) { struct_name_309 = come_decrement_ref_count(struct_name_309, (void*)0, (void*)0, 0, 0); }
    if(buf_310) { come_call_finalizer(buffer_finalize,buf_310, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value384) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0); }
    return __result255__;
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
    return __result7__;
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
}

int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info){
    int __result8__ = self->sline;
    return __result8__;
}

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info){
void* right_value2;
memset(&right_value2, 0, sizeof(void*));
    char* __result9__ = ((char*)(right_value2=__builtin_string(self->sname)));
    return __result9__;
}

_Bool sReturnNode_terminated(){
    _Bool __result10__ = (_Bool)0;
    return __result10__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_0;
void* right_value33;
struct sType* result_type_25;
void* right_value34;
struct sType* result_type2_26;
struct sType* result_type3_27;
int stack_num_before_28;
void* right_value35;
struct sType* result_type4_29;
void* right_value36;
void* right_value37;
struct sNode* obj_node_30;
static int num_result_tuple_31=0;
void* right_value38;
void* right_value39;
void* right_value40;
void* right_value41;
struct sNode* store_node_32;
void* right_value42;
void* right_value43;
struct sNode* load_node_33;
void* right_value44;
struct sNode* right_node_34;
void* right_value45;
void* right_value46;
void* right_value47;
struct sNode* store_field_node1_35;
void* right_value48;
struct sNode* true_node_36;
void* right_value49;
void* right_value50;
void* right_value51;
struct sNode* store_field_node2_37;
void* right_value52;
struct CVALUE* come_value_38;
int right_value_id_39;
void* right_value53;
struct sType* come_value_type_40;
static int num_result_41=0;
void* right_value54;
struct sFun* come_fun_42;
memset(&come_fun_0, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value33, 0, sizeof(void*));
memset(&result_type_25, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value34, 0, sizeof(void*));
memset(&result_type2_26, 0, sizeof(struct sType*)); /* ddd */
memset(&result_type3_27, 0, sizeof(struct sType*)); /* ddd */
memset(&stack_num_before_28, 0, sizeof(int)); /* ddd */
memset(&right_value35, 0, sizeof(void*));
memset(&result_type4_29, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&obj_node_30, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&store_node_32, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&load_node_33, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value44, 0, sizeof(void*));
memset(&right_node_34, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&store_field_node1_35, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value48, 0, sizeof(void*));
memset(&true_node_36, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&store_field_node2_37, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value52, 0, sizeof(void*));
memset(&come_value_38, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value_id_39, 0, sizeof(int)); /* ddd */
memset(&right_value53, 0, sizeof(void*));
memset(&come_value_type_40, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value54, 0, sizeof(void*));
memset(&come_fun_42, 0, sizeof(struct sFun*)); /* ddd */
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
        if(result_type_25->mException) {
            stack_num_before_28=list$1CVALUEphp_length(info->stack);
            result_type4_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=sType_clone(result_type2_26))));
            if(right_value35) { come_call_finalizer(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0); }
            result_type4_29->mPointerNum=0;
            obj_node_30=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value37=create_object((struct sType*)come_increment_ref_count(((struct sType*)(right_value36=sType_clone(result_type4_29)))),info))));
            if(right_value36) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value37) { right_value37 = come_decrement_ref_count(right_value37, ((struct sNode*)right_value37)->finalize, ((struct sNode*)right_value37)->_protocol_obj, 1, 0); } 
            store_node_32=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=store_var((char*)come_increment_ref_count(((char*)(right_value38=xsprintf("result_tuplea%d",++num_result_tuple_31)))),((void*)0),(struct sType*)come_increment_ref_count(((struct sType*)(right_value39=sType_clone(result_type2_26)))),(_Bool)1,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=sNodep_clone(obj_node_30)))),info))));
            if(right_value38) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0); }
            if(right_value39) { come_call_finalizer(sType_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0); }
            if(right_value40) { right_value40 = come_decrement_ref_count(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0); } 
            if(right_value41) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0); } 
            if(!store_node_32->compile(store_node_32->_protocol_obj,info)) {
                _Bool __result27__ = (_Bool)0;
                if(result_type4_29) { come_call_finalizer(sType_finalize,result_type4_29, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_node_30) { obj_node_30 = come_decrement_ref_count(obj_node_30, ((struct sNode*)obj_node_30)->finalize, ((struct sNode*)obj_node_30)->_protocol_obj, 0, 0); } 
                if(store_node_32) { store_node_32 = come_decrement_ref_count(store_node_32, ((struct sNode*)store_node_32)->finalize, ((struct sNode*)store_node_32)->_protocol_obj, 0, 0); } 
                if(result_type_25) { come_call_finalizer(sType_finalize,result_type_25, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type2_26) { come_call_finalizer(sType_finalize,result_type2_26, (void*)0, (void*)0, 0, 0, 0); }
                return __result27__;
            }
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_28);
            free_right_value_objects(info);
            load_node_33=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value43=load_var((char*)come_increment_ref_count(((char*)(right_value42=xsprintf("result_tuplea%d",num_result_tuple_31)))),info))));
            if(right_value42) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0); }
            if(right_value43) { right_value43 = come_decrement_ref_count(right_value43, ((struct sNode*)right_value43)->finalize, ((struct sNode*)right_value43)->_protocol_obj, 1, 0); } 
            right_node_34=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNodep_clone(self->value))));
            if(right_value44) { right_value44 = come_decrement_ref_count(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0); } 
            store_field_node1_35=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value47=store_field(load_node_33,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNodep_clone(right_node_34)))),(char*)come_increment_ref_count(((char*)(right_value46=__builtin_string("v1")))),info))));
            if(right_value45) { right_value45 = come_decrement_ref_count(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0); } 
            if(right_value46) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0); }
            if(right_value47) { right_value47 = come_decrement_ref_count(right_value47, ((struct sNode*)right_value47)->finalize, ((struct sNode*)right_value47)->_protocol_obj, 1, 0); } 
            if(!store_field_node1_35->compile(store_field_node1_35->_protocol_obj,info)) {
                _Bool __result28__ = (_Bool)0;
                if(result_type4_29) { come_call_finalizer(sType_finalize,result_type4_29, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_node_30) { obj_node_30 = come_decrement_ref_count(obj_node_30, ((struct sNode*)obj_node_30)->finalize, ((struct sNode*)obj_node_30)->_protocol_obj, 0, 0); } 
                if(store_node_32) { store_node_32 = come_decrement_ref_count(store_node_32, ((struct sNode*)store_node_32)->finalize, ((struct sNode*)store_node_32)->_protocol_obj, 0, 0); } 
                if(load_node_33) { load_node_33 = come_decrement_ref_count(load_node_33, ((struct sNode*)load_node_33)->finalize, ((struct sNode*)load_node_33)->_protocol_obj, 0, 0); } 
                if(right_node_34) { right_node_34 = come_decrement_ref_count(right_node_34, ((struct sNode*)right_node_34)->finalize, ((struct sNode*)right_node_34)->_protocol_obj, 0, 0); } 
                if(store_field_node1_35) { store_field_node1_35 = come_decrement_ref_count(store_field_node1_35, ((struct sNode*)store_field_node1_35)->finalize, ((struct sNode*)store_field_node1_35)->_protocol_obj, 0, 0); } 
                if(result_type_25) { come_call_finalizer(sType_finalize,result_type_25, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type2_26) { come_call_finalizer(sType_finalize,result_type2_26, (void*)0, (void*)0, 0, 0, 0); }
                return __result28__;
            }
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_28);
            free_right_value_objects(info);
            true_node_36=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value48=create_true_object(info))));
            if(right_value48) { right_value48 = come_decrement_ref_count(right_value48, ((struct sNode*)right_value48)->finalize, ((struct sNode*)right_value48)->_protocol_obj, 1, 0); } 
            store_field_node2_37=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value51=store_field(load_node_33,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=sNodep_clone(true_node_36)))),(char*)come_increment_ref_count(((char*)(right_value50=__builtin_string("v2")))),info))));
            if(right_value49) { right_value49 = come_decrement_ref_count(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0); } 
            if(right_value50) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0); }
            if(right_value51) { right_value51 = come_decrement_ref_count(right_value51, ((struct sNode*)right_value51)->finalize, ((struct sNode*)right_value51)->_protocol_obj, 1, 0); } 
            if(!store_field_node2_37->compile(store_field_node2_37->_protocol_obj,info)) {
                _Bool __result29__ = (_Bool)0;
                if(result_type4_29) { come_call_finalizer(sType_finalize,result_type4_29, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_node_30) { obj_node_30 = come_decrement_ref_count(obj_node_30, ((struct sNode*)obj_node_30)->finalize, ((struct sNode*)obj_node_30)->_protocol_obj, 0, 0); } 
                if(store_node_32) { store_node_32 = come_decrement_ref_count(store_node_32, ((struct sNode*)store_node_32)->finalize, ((struct sNode*)store_node_32)->_protocol_obj, 0, 0); } 
                if(load_node_33) { load_node_33 = come_decrement_ref_count(load_node_33, ((struct sNode*)load_node_33)->finalize, ((struct sNode*)load_node_33)->_protocol_obj, 0, 0); } 
                if(right_node_34) { right_node_34 = come_decrement_ref_count(right_node_34, ((struct sNode*)right_node_34)->finalize, ((struct sNode*)right_node_34)->_protocol_obj, 0, 0); } 
                if(store_field_node1_35) { store_field_node1_35 = come_decrement_ref_count(store_field_node1_35, ((struct sNode*)store_field_node1_35)->finalize, ((struct sNode*)store_field_node1_35)->_protocol_obj, 0, 0); } 
                if(true_node_36) { true_node_36 = come_decrement_ref_count(true_node_36, ((struct sNode*)true_node_36)->finalize, ((struct sNode*)true_node_36)->_protocol_obj, 0, 0); } 
                if(store_field_node2_37) { store_field_node2_37 = come_decrement_ref_count(store_field_node2_37, ((struct sNode*)store_field_node2_37)->finalize, ((struct sNode*)store_field_node2_37)->_protocol_obj, 0, 0); } 
                if(result_type_25) { come_call_finalizer(sType_finalize,result_type_25, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type2_26) { come_call_finalizer(sType_finalize,result_type2_26, (void*)0, (void*)0, 0, 0, 0); }
                return __result29__;
            }
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_28);
            free_right_value_objects(info);
            if(!load_node_33->compile(load_node_33->_protocol_obj,info)) {
                _Bool __result30__ = (_Bool)0;
                if(result_type4_29) { come_call_finalizer(sType_finalize,result_type4_29, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_node_30) { obj_node_30 = come_decrement_ref_count(obj_node_30, ((struct sNode*)obj_node_30)->finalize, ((struct sNode*)obj_node_30)->_protocol_obj, 0, 0); } 
                if(store_node_32) { store_node_32 = come_decrement_ref_count(store_node_32, ((struct sNode*)store_node_32)->finalize, ((struct sNode*)store_node_32)->_protocol_obj, 0, 0); } 
                if(load_node_33) { load_node_33 = come_decrement_ref_count(load_node_33, ((struct sNode*)load_node_33)->finalize, ((struct sNode*)load_node_33)->_protocol_obj, 0, 0); } 
                if(right_node_34) { right_node_34 = come_decrement_ref_count(right_node_34, ((struct sNode*)right_node_34)->finalize, ((struct sNode*)right_node_34)->_protocol_obj, 0, 0); } 
                if(store_field_node1_35) { store_field_node1_35 = come_decrement_ref_count(store_field_node1_35, ((struct sNode*)store_field_node1_35)->finalize, ((struct sNode*)store_field_node1_35)->_protocol_obj, 0, 0); } 
                if(true_node_36) { true_node_36 = come_decrement_ref_count(true_node_36, ((struct sNode*)true_node_36)->finalize, ((struct sNode*)true_node_36)->_protocol_obj, 0, 0); } 
                if(store_field_node2_37) { store_field_node2_37 = come_decrement_ref_count(store_field_node2_37, ((struct sNode*)store_field_node2_37)->finalize, ((struct sNode*)store_field_node2_37)->_protocol_obj, 0, 0); } 
                if(result_type_25) { come_call_finalizer(sType_finalize,result_type_25, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type2_26) { come_call_finalizer(sType_finalize,result_type2_26, (void*)0, (void*)0, 0, 0, 0); }
                return __result30__;
            }
            add_last_code_to_source(info);
            free_right_value_objects(info);
            if(result_type4_29) { come_call_finalizer(sType_finalize,result_type4_29, (void*)0, (void*)0, 0, 0, 0); }
            if(obj_node_30) { obj_node_30 = come_decrement_ref_count(obj_node_30, ((struct sNode*)obj_node_30)->finalize, ((struct sNode*)obj_node_30)->_protocol_obj, 0, 0); } 
            if(store_node_32) { store_node_32 = come_decrement_ref_count(store_node_32, ((struct sNode*)store_node_32)->finalize, ((struct sNode*)store_node_32)->_protocol_obj, 0, 0); } 
            if(load_node_33) { load_node_33 = come_decrement_ref_count(load_node_33, ((struct sNode*)load_node_33)->finalize, ((struct sNode*)load_node_33)->_protocol_obj, 0, 0); } 
            if(right_node_34) { right_node_34 = come_decrement_ref_count(right_node_34, ((struct sNode*)right_node_34)->finalize, ((struct sNode*)right_node_34)->_protocol_obj, 0, 0); } 
            if(store_field_node1_35) { store_field_node1_35 = come_decrement_ref_count(store_field_node1_35, ((struct sNode*)store_field_node1_35)->finalize, ((struct sNode*)store_field_node1_35)->_protocol_obj, 0, 0); } 
            if(true_node_36) { true_node_36 = come_decrement_ref_count(true_node_36, ((struct sNode*)true_node_36)->finalize, ((struct sNode*)true_node_36)->_protocol_obj, 0, 0); } 
            if(store_field_node2_37) { store_field_node2_37 = come_decrement_ref_count(store_field_node2_37, ((struct sNode*)store_field_node2_37)->finalize, ((struct sNode*)store_field_node2_37)->_protocol_obj, 0, 0); } 
        }
        else {
            if(!self->value->compile(self->value->_protocol_obj,info)) {
                _Bool __result31__ = (_Bool)0;
                if(result_type_25) { come_call_finalizer(sType_finalize,result_type_25, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type2_26) { come_call_finalizer(sType_finalize,result_type2_26, (void*)0, (void*)0, 0, 0, 0); }
                return __result31__;
            }
        }
        come_value_38=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=get_value_from_stack(-1,info))));
        if(right_value52) { come_call_finalizer(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0); }
        dec_stack_ptr(1,info);
        if(come_value_38->type->mHeap&&come_value_38->var==((void*)0)) {
            right_value_id_39=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_38->c_value));
            if(right_value_id_39!=-1) {
                remove_object_from_right_values(right_value_id_39,info);
            }
        }
        come_value_type_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=solve_generics(come_value_38->type,info->generics_type,info))));
        if(right_value53) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0); }
        add_come_code(info,"%s __result%d__ = %s;\n",((char*)(right_value54=make_type_name_string(result_type2_26,(_Bool)0,(_Bool)0,info,(_Bool)0))),++num_result_41,come_value_38->c_value);
        if(right_value54) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0); }
        free_objects_on_return(come_fun_0->mBlock,info,come_value_38->var,(_Bool)0);
        free_right_value_objects(info);
        add_come_code(info,"return __result%d__;\n",num_result_41);
        if(result_type_25) { come_call_finalizer(sType_finalize,result_type_25, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type2_26) { come_call_finalizer(sType_finalize,result_type2_26, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_38) { come_call_finalizer(CVALUE_finalize,come_value_38, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_type_40) { come_call_finalizer(sType_finalize,come_value_type_40, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        come_fun_42=info->come_fun;
        free_objects_on_return(come_fun_42->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info);
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    _Bool __result32__ = (_Bool)1;
    return __result32__;
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
                if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
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
                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0); }
                if(right_value14) { come_call_finalizer(list$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj14=result_1->mArrayNum;
                result_1->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value22=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
                if(right_value22) { come_call_finalizer(list$1sNodephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_1->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj15=result_1->mParamTypes;
                result_1->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
                if(right_value23) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj19=result_1->mParamNames;
                result_1->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value30=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0); }
                if(right_value30) { come_call_finalizer(list$1charphp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj20=result_1->mResultType;
                result_1->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value31=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0); }
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
            return __result25__;
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
                        return __result12__;
                    }
                    result_8=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1)))));
                    if(right_value4) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0); }
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        __dec_obj4=result_8->v1;
                        result_8->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value5=sType_clone(self->v1))));
                        if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
                        if(right_value5) { come_call_finalizer(sType_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0); }
                    }
                    struct tuple1$1sTypeph* __result13__ = result_8;
                    if(result_8) { come_call_finalizer(tuple1$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1); }
                    return __result13__;
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
                    return __result16__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1sTypeph* __result15__ = self;
                        if(self) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result15__;
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
                                if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_11;
                                self->head=litem_11;
                            }
                            else if(self->len==1) {
                                litem_12=((struct list_item$1sTypeph*)(right_value11=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_12->prev=self->head;
                                litem_12->next=((void*)0);
                                __dec_obj8=litem_12->item;
                                litem_12->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
                                self->tail=litem_12;
                                self->head->next=litem_12;
                            }
                            else {
                                litem_13=((struct list_item$1sTypeph*)(right_value12=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                                litem_13->prev=self->tail;
                                litem_13->next=((void*)0);
                                __dec_obj9=litem_13->item;
                                litem_13->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0); }
                                self->tail->next=litem_13;
                                self->tail=litem_13;
                            }
                            self->len++;
                            if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
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
                    return __result21__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1sNodeph* __result18__ = self;
                        if(self) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result18__;
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
}

static struct sNode* sNodep_clone(struct sNode* self){
void* right_value20;
struct sNode* result_19;
memset(&right_value20, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct sNode*)); /* ddd */
                            if(self==(void*)0) {
                                struct sNode* __result19__ = (void*)0;
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
                            return __result20__;
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
                    return __result24__;
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        struct list$1charph* __result23__ = self;
                        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                        return __result23__;
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
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
                int __result26__ = self->len;
                return __result26__;
}

static void CVALUE_finalize(struct CVALUE* self){
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
            }
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj22;
void* right_value55;
char* __dec_obj23;
memset(&right_value55, 0, sizeof(void*));
    __dec_obj22=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj23=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(info->sname))));
    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0); }
    if(right_value55) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0); }
    struct sDerefferenceNode* __result33__ = self;
    if(self) { come_call_finalizer(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    return __result33__;
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info){
    int __result34__ = self->sline;
    return __result34__;
}

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info){
void* right_value56;
memset(&right_value56, 0, sizeof(void*));
    char* __result35__ = ((char*)(right_value56=__builtin_string(self->sname)));
    return __result35__;
}

_Bool sDerefferenceNode_terminated(){
    _Bool __result36__ = (_Bool)0;
    return __result36__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
struct sNode* value_43;
void* right_value57;
struct CVALUE* left_value_44;
void* right_value58;
struct CVALUE* come_value_45;
void* right_value59;
char* __dec_obj24;
void* right_value60;
struct sType* __dec_obj25;
memset(&value_43, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value57, 0, sizeof(void*));
memset(&left_value_44, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value58, 0, sizeof(void*));
memset(&come_value_45, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
    value_43=self->value;
    if(!value_43->compile(value_43->_protocol_obj,info)) {
        _Bool __result37__ = (_Bool)0;
        return __result37__;
    }
    left_value_44=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=get_value_from_stack(-1,info))));
    if(right_value57) { come_call_finalizer(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_45=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value58=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value58) { come_call_finalizer(CVALUE_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj24=come_value_45->c_value;
    come_value_45->c_value=(char*)come_increment_ref_count(((char*)(right_value59=xsprintf("*%s",left_value_44->c_value))));
    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0); }
    if(right_value59) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0); }
    __dec_obj25=come_value_45->type;
    come_value_45->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(left_value_44->type))));
    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0); }
    if(right_value60) { come_call_finalizer(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0); }
    come_value_45->type->mPointerNum--;
    come_value_45->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_45->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_45));
    _Bool __result38__ = (_Bool)1;
    if(left_value_44) { come_call_finalizer(CVALUE_finalize,left_value_44, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_45) { come_call_finalizer(CVALUE_finalize,come_value_45, (void*)0, (void*)0, 0, 0, 0); }
    return __result38__;
    _Bool __result39__ = (_Bool)1;
    if(left_value_44) { come_call_finalizer(CVALUE_finalize,left_value_44, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_45) { come_call_finalizer(CVALUE_finalize,come_value_45, (void*)0, (void*)0, 0, 0, 0); }
    return __result39__;
}

static void list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* right_value61;
struct list_item$1CVALUEph* litem_46;
struct CVALUE* __dec_obj26;
void* right_value62;
struct list_item$1CVALUEph* litem_47;
struct CVALUE* __dec_obj27;
void* right_value63;
struct list_item$1CVALUEph* litem_48;
struct CVALUE* __dec_obj28;
memset(&right_value61, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&right_value63, 0, sizeof(void*));
memset(&litem_48, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
        if(self->len==0) {
            litem_46=((struct list_item$1CVALUEph*)(right_value61=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_46->prev=((void*)0);
            litem_46->next=((void*)0);
            __dec_obj26=litem_46->item;
            litem_46->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0); }
            self->tail=litem_46;
            self->head=litem_46;
        }
        else if(self->len==1) {
            litem_47=((struct list_item$1CVALUEph*)(right_value62=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_47->prev=self->head;
            litem_47->next=((void*)0);
            __dec_obj27=litem_47->item;
            litem_47->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0); }
            self->tail=litem_47;
            self->head->next=litem_47;
        }
        else {
            litem_48=((struct list_item$1CVALUEph*)(right_value63=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1))));
            litem_48->prev=self->tail;
            litem_48->next=((void*)0);
            __dec_obj28=litem_48->item;
            litem_48->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0); }
            self->tail->next=litem_48;
            self->tail=litem_48;
        }
        self->len++;
        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj29;
void* right_value64;
char* __dec_obj30;
memset(&right_value64, 0, sizeof(void*));
    __dec_obj29=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj30=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value64=__builtin_string(info->sname))));
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0); }
    if(right_value64) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0); }
    struct sRefferenceNode* __result40__ = self;
    if(self) { come_call_finalizer(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    return __result40__;
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info){
    int __result41__ = self->sline;
    return __result41__;
}

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info){
void* right_value65;
memset(&right_value65, 0, sizeof(void*));
    char* __result42__ = ((char*)(right_value65=__builtin_string(self->sname)));
    return __result42__;
}

_Bool sRefferenceNode_terminated(){
    _Bool __result43__ = (_Bool)0;
    return __result43__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
struct sNode* value_49;
void* right_value66;
struct CVALUE* left_value_50;
void* right_value67;
struct CVALUE* come_value_51;
void* right_value68;
char* __dec_obj31;
void* right_value69;
struct sType* __dec_obj32;
memset(&value_49, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value66, 0, sizeof(void*));
memset(&left_value_50, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value67, 0, sizeof(void*));
memset(&come_value_51, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
    value_49=self->value;
    if(!value_49->compile(value_49->_protocol_obj,info)) {
        _Bool __result44__ = (_Bool)0;
        return __result44__;
    }
    left_value_50=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value66=get_value_from_stack(-1,info))));
    if(right_value66) { come_call_finalizer(CVALUE_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_51=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value67=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value67) { come_call_finalizer(CVALUE_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj31=come_value_51->c_value;
    come_value_51->c_value=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("&%s",left_value_50->c_value))));
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0); }
    if(right_value68) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0); }
    __dec_obj32=come_value_51->type;
    come_value_51->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=sType_clone(left_value_50->type))));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0); }
    if(right_value69) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0); }
    come_value_51->type->mPointerNum--;
    come_value_51->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_51->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_51));
    _Bool __result45__ = (_Bool)1;
    if(left_value_50) { come_call_finalizer(CVALUE_finalize,left_value_50, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_51) { come_call_finalizer(CVALUE_finalize,come_value_51, (void*)0, (void*)0, 0, 0, 0); }
    return __result45__;
    _Bool __result46__ = (_Bool)1;
    if(left_value_50) { come_call_finalizer(CVALUE_finalize,left_value_50, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_51) { come_call_finalizer(CVALUE_finalize,come_value_51, (void*)0, (void*)0, 0, 0, 0); }
    return __result46__;
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj33;
void* right_value70;
char* __dec_obj34;
memset(&right_value70, 0, sizeof(void*));
    __dec_obj33=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj34=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value70=__builtin_string(info->sname))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0); }
    if(right_value70) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0); }
    struct sReverseNode* __result47__ = self;
    if(self) { come_call_finalizer(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    return __result47__;
}

static void sReverseNode_finalize(struct sReverseNode* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info){
    int __result48__ = self->sline;
    return __result48__;
}

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info){
void* right_value71;
memset(&right_value71, 0, sizeof(void*));
    char* __result49__ = ((char*)(right_value71=__builtin_string(self->sname)));
    return __result49__;
}

_Bool sReverseNode_terminated(){
    _Bool __result50__ = (_Bool)0;
    return __result50__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
struct sNode* value_52;
void* right_value72;
struct CVALUE* left_value_53;
void* right_value73;
struct CVALUE* come_value_54;
void* right_value74;
char* __dec_obj35;
void* right_value75;
struct sType* __dec_obj36;
memset(&value_52, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value72, 0, sizeof(void*));
memset(&left_value_53, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value73, 0, sizeof(void*));
memset(&come_value_54, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
    value_52=self->value;
    if(!value_52->compile(value_52->_protocol_obj,info)) {
        _Bool __result51__ = (_Bool)0;
        return __result51__;
    }
    left_value_53=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value72=get_value_from_stack(-1,info))));
    if(right_value72) { come_call_finalizer(CVALUE_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value73=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value73) { come_call_finalizer(CVALUE_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj35=come_value_54->c_value;
    come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value74=xsprintf("!%s",left_value_53->c_value))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0); }
    if(right_value74) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0); }
    __dec_obj36=come_value_54->type;
    come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(left_value_53->type))));
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0); }
    if(right_value75) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0); }
    come_value_54->type->mPointerNum--;
    come_value_54->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_54->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
    _Bool __result52__ = (_Bool)1;
    if(left_value_53) { come_call_finalizer(CVALUE_finalize,left_value_53, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_54) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0); }
    return __result52__;
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* right_value76;
char* __dec_obj37;
void* right_value86;
struct list$1tuple2$2charphsNodephph* __dec_obj43;
void* right_value87;
char* __dec_obj44;
memset(&right_value76, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
    __dec_obj37=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value76=__builtin_string(fun_name))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0); }
    if(right_value76) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0); }
    __dec_obj43=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value86=list$1tuple2$2charphsNodephphp_clone(params))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0); }
    if(right_value86) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0); }
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(info->sname))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0); }
    if(right_value87) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0); }
    struct sFunCallNode* __result59__ = self;
    if(self) { come_call_finalizer(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result59__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* right_value77;
void* right_value78;
struct list$1tuple2$2charphsNodephph* result_57;
struct list_item$1tuple2$2charphsNodephph* it_58;
void* right_value85;
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&result_57, 0, sizeof(struct list$1tuple2$2charphsNodephph*)); /* ddd */
memset(&it_58, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value85, 0, sizeof(void*));
        if(self==((void*)0)) {
            struct list$1tuple2$2charphsNodephph* __result54__ = ((void*)0);
            return __result54__;
        }
        result_57=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value78=list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value77=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1)))))))));
        if(right_value78) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0); }
        it_58=self->head;
        while(it_58!=((void*)0)) {
            list$1tuple2$2charphsNodephphp_push_back2(result_57,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value85=tuple2$2charphsNodephp_clone(it_58->item)))));
            if(right_value85) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0); }
            it_58=it_58->next;
        }
        struct list$1tuple2$2charphsNodephph* __result58__ = result_57;
        if(result_57) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_57, (void*)0, (void*)0, 0, 0, 1); }
        return __result58__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1tuple2$2charphsNodephph* __result55__ = self;
            if(self) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result55__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_55;
struct list_item$1tuple2$2charphsNodephph* prev_it_56;
memset(&it_55, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&prev_it_56, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
                it_55=self->head;
                while(it_55!=((void*)0)) {
                    if(1) {
                        if(it_55->item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,it_55->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    prev_it_56=it_55;
                    it_55=it_55->next;
                    come_free_object(prev_it_56);
                }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0); }
                            }
                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0); } 
                            }
}

static void list$1tuple2$2charphsNodephphp_push_back2(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* right_value79;
struct list_item$1tuple2$2charphsNodephph* litem_59;
struct tuple2$2charphsNodeph* __dec_obj38;
void* right_value80;
struct list_item$1tuple2$2charphsNodephph* litem_60;
struct tuple2$2charphsNodeph* __dec_obj39;
void* right_value81;
struct list_item$1tuple2$2charphsNodephph* litem_61;
struct tuple2$2charphsNodeph* __dec_obj40;
memset(&right_value79, 0, sizeof(void*));
memset(&litem_59, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value80, 0, sizeof(void*));
memset(&litem_60, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value81, 0, sizeof(void*));
memset(&litem_61, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
                if(self->len==0) {
                    litem_59=((struct list_item$1tuple2$2charphsNodephph*)(right_value79=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                    litem_59->prev=((void*)0);
                    litem_59->next=((void*)0);
                    __dec_obj38=litem_59->item;
                    litem_59->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_59;
                    self->head=litem_59;
                }
                else if(self->len==1) {
                    litem_60=((struct list_item$1tuple2$2charphsNodephph*)(right_value80=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                    litem_60->prev=self->head;
                    litem_60->next=((void*)0);
                    __dec_obj39=litem_60->item;
                    litem_60->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_60;
                    self->head->next=litem_60;
                }
                else {
                    litem_61=((struct list_item$1tuple2$2charphsNodephph*)(right_value81=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                    litem_61->prev=self->tail;
                    litem_61->next=((void*)0);
                    __dec_obj40=litem_61->item;
                    litem_61->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_61;
                    self->tail=litem_61;
                }
                self->len++;
                if(item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* right_value82;
struct tuple2$2charphsNodeph* result_62;
void* right_value83;
char* __dec_obj41;
void* right_value84;
struct sNode* __dec_obj42;
memset(&right_value82, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct tuple2$2charphsNodeph*)); /* ddd */
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct tuple2$2charphsNodeph* __result56__ = (void*)0;
                    return __result56__;
                }
                result_62=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value82=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1)))));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj41=result_62->v1;
                    result_62->v1=(char*)come_increment_ref_count(((char*)(right_value83=string_clone(self->v1))));
                    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0); }
                    if(right_value83) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj42=result_62->v2;
                    result_62->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNodep_clone(self->v2))));
                    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0); }
                    if(right_value84) { right_value84 = come_decrement_ref_count(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0); } 
                }
                struct tuple2$2charphsNodeph* __result57__ = result_62;
                return __result57__;
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
}

int sFunCallNode_sline(struct sFunCallNode* self, struct sInfo* info){
    int __result60__ = self->sline;
    return __result60__;
}

char* sFunCallNode_sname(struct sFunCallNode* self, struct sInfo* info){
void* right_value88;
memset(&right_value88, 0, sizeof(void*));
    char* __result61__ = ((char*)(right_value88=__builtin_string(self->sname)));
    return __result61__;
}

_Bool sFunCallNode_terminated(){
    _Bool __result62__ = (_Bool)0;
    return __result62__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_63;
struct list$1tuple2$2charphsNodephph* params_64;
struct sVar* var__65;
struct sType* lambda_type_66;
void* right_value89;
struct sType* result_type_67;
void* right_value90;
void* right_value91;
struct list$1CVALUEph* come_params_70;
int i_71;
struct tuple2$2charphsNodeph* it_73;
struct tuple2$2charphsNodeph* multiple_assgin_var1;
char* label_75;
struct sNode* node_76;
void* right_value92;
struct CVALUE* come_value_77;
void* right_value93;
char* __dec_obj45;
void* right_value94;
void* right_value95;
struct buffer* buf_81;
int j_82;
struct CVALUE* it_84;
void* right_value96;
struct CVALUE* come_value_86;
void* right_value97;
char* __dec_obj46;
void* right_value98;
char* __dec_obj47;
void* right_value99;
struct sType* __dec_obj48;
void* right_value100;
char* __dec_obj49;
char* p_87;
int version_88;
char* p2_89;
int i_91;
void* right_value101;
char* new_fun_name_92;
void* right_value102;
char* __dec_obj50;
void* right_value103;
char* new_fun_name_96;
void* right_value104;
char* __dec_obj51;
int i_97;
void* right_value105;
char* new_fun_name_98;
void* right_value106;
char* __dec_obj52;
struct sFun* fun_99;
void* right_value107;
struct sType* result_type_100;
void* right_value108;
void* right_value109;
struct list$1sTypeph* param_types_101;
struct sType* it_103;
void* right_value110;
struct sType* it2_105;
void* right_value114;
void* right_value115;
struct sType* __dec_obj56;
void* right_value116;
void* right_value117;
struct list$1CVALUEph* come_params_109;
void* right_value118;
void* right_value124;
struct map$2charphCVALUEph* label_params_115;
int i_116;
struct tuple2$2charphsNodeph* it_117;
struct tuple2$2charphsNodeph* multiple_assgin_var2;
char* label_118;
struct sNode* node_119;
void* right_value125;
struct CVALUE* come_value_120;
void* right_value126;
char* __dec_obj58;
void* right_value133;
void* right_value134;
char* default_param_164;
char* param_name_165;
struct CVALUE* come_value_167;
struct buffer* source_168;
char* p_169;
char* head_170;
int sline_171;
void* right_value135;
struct buffer* __dec_obj59;
void* right_value136;
struct sNode* node_172;
struct buffer* __dec_obj60;
void* right_value137;
struct CVALUE* come_value_173;
void* right_value138;
char* __dec_obj61;
char* param_name_174;
struct CVALUE* come_value_175;
void* right_value142;
void* right_value143;
void* right_value144;
struct buffer* buf_179;
int j_180;
struct CVALUE* it_181;
void* right_value145;
struct CVALUE* come_value_182;
void* right_value146;
char* __dec_obj65;
void* right_value147;
char* __dec_obj66;
void* right_value148;
struct sType* __dec_obj67;
memset(&fun_name_63, 0, sizeof(char*)); /* ddd */
memset(&params_64, 0, sizeof(struct list$1tuple2$2charphsNodephph*)); /* ddd */
memset(&var__65, 0, sizeof(struct sVar*)); /* ddd */
memset(&lambda_type_66, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value89, 0, sizeof(void*));
memset(&result_type_67, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&come_params_70, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&i_71, 0, sizeof(int)); /* ddd */
memset(&it_73, 0, sizeof(struct tuple2$2charphsNodeph*)); /* ddd */
memset(&label_75, 0, sizeof(char*)); /* ccc */
memset(&node_76, 0, sizeof(struct sNode*)); /* ccc */
memset(&label_75, 0, sizeof(char*)); /* eee */
memset(&node_76, 0, sizeof(struct sNode*)); /* eee */
memset(&right_value92, 0, sizeof(void*));
memset(&come_value_77, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&buf_81, 0, sizeof(struct buffer*)); /* ddd */
memset(&j_82, 0, sizeof(int)); /* ddd */
memset(&it_84, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value96, 0, sizeof(void*));
memset(&come_value_86, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&p_87, 0, sizeof(char*)); /* ddd */
memset(&version_88, 0, sizeof(int)); /* ddd */
memset(&p2_89, 0, sizeof(char*)); /* ddd */
memset(&i_91, 0, sizeof(int)); /* bbb */
memset(&right_value101, 0, sizeof(void*));
memset(&new_fun_name_92, 0, sizeof(char*)); /* ddd */
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&new_fun_name_96, 0, sizeof(char*)); /* ddd */
memset(&right_value104, 0, sizeof(void*));
memset(&i_97, 0, sizeof(int)); /* ddd */
memset(&right_value105, 0, sizeof(void*));
memset(&new_fun_name_98, 0, sizeof(char*)); /* ddd */
memset(&right_value106, 0, sizeof(void*));
memset(&fun_99, 0, sizeof(struct sFun*)); /* ddd */
memset(&right_value107, 0, sizeof(void*));
memset(&result_type_100, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&param_types_101, 0, sizeof(struct list$1sTypeph*)); /* ddd */
memset(&it_103, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value110, 0, sizeof(void*));
memset(&it2_105, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&come_params_109, 0, sizeof(struct list$1CVALUEph*)); /* ddd */
memset(&right_value118, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&label_params_115, 0, sizeof(struct map$2charphCVALUEph*)); /* ddd */
memset(&i_116, 0, sizeof(int)); /* ddd */
memset(&it_117, 0, sizeof(struct tuple2$2charphsNodeph*)); /* ddd */
memset(&label_118, 0, sizeof(char*)); /* ccc */
memset(&node_119, 0, sizeof(struct sNode*)); /* ccc */
memset(&label_118, 0, sizeof(char*)); /* eee */
memset(&node_119, 0, sizeof(struct sNode*)); /* eee */
memset(&right_value125, 0, sizeof(void*));
memset(&come_value_120, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value126, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&default_param_164, 0, sizeof(char*)); /* ddd */
memset(&param_name_165, 0, sizeof(char*)); /* ddd */
memset(&come_value_167, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&source_168, 0, sizeof(struct buffer*)); /* ddd */
memset(&p_169, 0, sizeof(char*)); /* ddd */
memset(&head_170, 0, sizeof(char*)); /* ddd */
memset(&sline_171, 0, sizeof(int)); /* ddd */
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&node_172, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value137, 0, sizeof(void*));
memset(&come_value_173, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value138, 0, sizeof(void*));
memset(&param_name_174, 0, sizeof(char*)); /* ddd */
memset(&come_value_175, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&buf_179, 0, sizeof(struct buffer*)); /* ddd */
memset(&j_180, 0, sizeof(int)); /* ddd */
memset(&it_181, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value145, 0, sizeof(void*));
memset(&come_value_182, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
    fun_name_63=(char*)come_increment_ref_count(self->fun_name);
    params_64=self->params;
    var__65=get_variable_from_table(info->lv_table,fun_name_63);
    if(var__65) {
        lambda_type_66=var__65->mType;
        result_type_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(lambda_type_66->mResultType->v1))));
        if(right_value89) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0); }
        result_type_67->mStatic=(_Bool)0;
        come_params_70=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value91=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value90=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
        if(right_value91) { come_call_finalizer(list$1CVALUEphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0); }
        if(list$1sTypephp_length(lambda_type_66->mParamTypes)!=list$1tuple2$2charphsNodephphp_length(params_64)&&!lambda_type_66->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_63,list$1sTypephp_length(lambda_type_66->mParamTypes),list$1tuple2$2charphsNodephphp_length(params_64));
            _Bool __result66__ = (_Bool)0;
            if(result_type_67) { come_call_finalizer(sType_finalize,result_type_67, (void*)0, (void*)0, 0, 0, 0); }
            if(come_params_70) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_70, (void*)0, (void*)0, 0, 0, 0); }
            return __result66__;
        }
        i_71=0;
        for(
        it_73=list$1tuple2$2charphsNodephphp_begin((params_64));
        !list$1tuple2$2charphsNodephphp_end((params_64));
        it_73=list$1tuple2$2charphsNodephphp_next((params_64))
        ){
            multiple_assgin_var1=it_73;
            label_75=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
            node_76=(struct sNode*)come_increment_ref_count(multiple_assgin_var1->v2);
            if(!node_76->compile(node_76->_protocol_obj,info)) {
                _Bool __result72__ = (_Bool)0;
                if(label_75) { label_75 = come_decrement_ref_count(label_75, (void*)0, (void*)0, 0, 0); }
                if(node_76) { node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 0); } 
                if(result_type_67) { come_call_finalizer(sType_finalize,result_type_67, (void*)0, (void*)0, 0, 0, 0); }
                if(come_params_70) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_70, (void*)0, (void*)0, 0, 0, 0); }
                return __result72__;
            }
            come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value92=get_value_from_stack(-1,info))));
            if(right_value92) { come_call_finalizer(CVALUE_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0); }
            if(lambda_type_66->mVarArgs&&list$1sTypephp_operator_load_element(lambda_type_66->mParamTypes,i_71)==((void*)0)) {
            }
            else {
                if(list$1sTypephp_operator_load_element(lambda_type_66->mParamTypes,i_71)->mHeap&&come_value_77->type->mHeap) {
                    __dec_obj45=come_value_77->c_value;
                    come_value_77->c_value=(char*)come_increment_ref_count(((char*)(right_value93=increment_ref_count_object(come_value_77->type,come_value_77->c_value,info))));
                    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0); }
                    if(right_value93) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0); }
                }
            }
            list$1CVALUEphp_push_back(come_params_70,(struct CVALUE*)come_increment_ref_count(come_value_77));
            dec_stack_ptr(1,info);
            i_71++;
            if(label_75) { label_75 = come_decrement_ref_count(label_75, (void*)0, (void*)0, 0, 0); }
            if(node_76) { node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 0); } 
            if(come_value_77) { come_call_finalizer(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0); }
        }
        buf_81=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value95=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value94=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value94) { come_call_finalizer(buffer_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value95) { come_call_finalizer(buffer_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(buf_81,var__65->mCValueName);
        buffer_append_str(buf_81,"(");
        j_82=0;
        for(
        it_84=list$1CVALUEphp_begin((come_params_70));
        !list$1CVALUEphp_end((come_params_70));
        it_84=list$1CVALUEphp_next((come_params_70))
        ){
            buffer_append_str(buf_81,it_84->c_value);
            if(j_82!=list$1CVALUEphp_length(come_params_70)-1) {
                buffer_append_str(buf_81,",");
            }
            j_82++;
        }
        buffer_append_str(buf_81,")");
        come_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value96=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value96) { come_call_finalizer(CVALUE_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj46=come_value_86->c_value;
        come_value_86->c_value=(char*)come_increment_ref_count(((char*)(right_value97=buffer_to_string(buf_81))));
        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0); }
        if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0); }
        if(lambda_type_66->mResultType->v1->mHeap) {
            __dec_obj47=come_value_86->c_value;
            come_value_86->c_value=(char*)come_increment_ref_count(((char*)(right_value98=append_object_to_right_values(come_value_86->c_value,(struct sType*)come_increment_ref_count(lambda_type_66->mResultType->v1),info))));
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0); }
            if(right_value98) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0); }
        }
        __dec_obj48=come_value_86->type;
        come_value_86->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_clone(result_type_67))));
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0); }
        if(right_value99) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0); }
        come_value_86->type->mStatic=(_Bool)0;
        come_value_86->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_86->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_86));
        if(result_type_67) { come_call_finalizer(sType_finalize,result_type_67, (void*)0, (void*)0, 0, 0, 0); }
        if(come_params_70) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_70, (void*)0, (void*)0, 0, 0, 0); }
        if(buf_81) { come_call_finalizer(buffer_finalize,buf_81, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_86) { come_call_finalizer(CVALUE_finalize,come_value_86, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(string_operator_equals(fun_name_63,"string")) {
            __dec_obj49=fun_name_63;
            fun_name_63=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string("__builtin_string"))));
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0); }
            if(right_value100) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0); }
        }
        else if(string_operator_equals(fun_name_63,"inherit")) {
            p_87=info->come_fun->mName;
            version_88=0;
            while(*p_87) {
                if(*p_87==95&&*(p_87+1)==118&&xisdigit(*(p_87+2))) {
                    p2_89=p_87+2;
                    version_88=0;
                    while(xisdigit(*p2_89)) {
                        version_88=version_88*10+(*p2_89-48);
                        p2_89++;
                    }
                    break;
                }
                else {
                    p_87++;
                }
            }
            char real_fun_name_90[2048];
            memset(&real_fun_name_90, 0, sizeof(real_fun_name_90)); /* aaa */
            memcpy(real_fun_name_90,info->come_fun->mName,p_87-info->come_fun->mName);
            real_fun_name_90[p_87-info->come_fun->mName]=0;
            for(
            i_91=version_88-1;
            i_91>=1;
            i_91--
            ){
                new_fun_name_92=(char*)come_increment_ref_count(((char*)(right_value101=xsprintf("%s_v%d",real_fun_name_90,i_91))));
                if(right_value101) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0); }
                if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_92)) {
                    __dec_obj50=fun_name_63;
                    fun_name_63=(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string(new_fun_name_92))));
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0); }
                    if(right_value102) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0); }
                    break;
                }
                if(new_fun_name_92) { new_fun_name_92 = come_decrement_ref_count(new_fun_name_92, (void*)0, (void*)0, 0, 0); }
            }
            if(i_91==0) {
                new_fun_name_96=(char*)come_increment_ref_count(((char*)(right_value103=xsprintf("%s",real_fun_name_90))));
                if(right_value103) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0); }
                if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_96)) {
                    __dec_obj51=fun_name_63;
                    fun_name_63=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(new_fun_name_96))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0); }
                    if(right_value104) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0); }
                }
                if(string_operator_equals(fun_name_63,info->come_fun->mName)) {
                    err_msg(info,"invalid inherit");
                    _Bool __result86__ = (_Bool)0;
                    if(new_fun_name_96) { new_fun_name_96 = come_decrement_ref_count(new_fun_name_96, (void*)0, (void*)0, 0, 0); }
                    return __result86__;
                }
            }
        }
        else {
            for(
            i_97=128;
            i_97>=1;
            i_97--
            ){
                new_fun_name_98=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("%s_v%d",fun_name_63,i_97))));
                if(right_value105) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0); }
                if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_98)) {
                    __dec_obj52=fun_name_63;
                    fun_name_63=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(new_fun_name_98))));
                    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0); }
                    if(right_value106) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0); }
                    break;
                }
                if(new_fun_name_98) { new_fun_name_98 = come_decrement_ref_count(new_fun_name_98, (void*)0, (void*)0, 0, 0); }
            }
        }
        fun_99=map$2charphsFunphp_at(info->funcs,fun_name_63,((void*)0));
        if(fun_99==((void*)0)) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_63);
            _Bool __result87__ = (_Bool)0;
            return __result87__;
        }
        result_type_100=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(fun_99->mResultType))));
        if(right_value107) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0); }
        result_type_100->mStatic=(_Bool)0;
        param_types_101=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value109=list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value108=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1)))))))));
        if(right_value109) { come_call_finalizer(list$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0); }
        for(
        it_103=list$1sTypephp_begin((fun_99->mParamTypes));
        !list$1sTypephp_end((fun_99->mParamTypes));
        it_103=list$1sTypephp_next((fun_99->mParamTypes))
        ){
            it2_105=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=solve_generics(it_103,info->generics_type,info))));
            if(right_value110) { come_call_finalizer(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0); }
            list$1sTypephp_push_back(param_types_101,(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(it2_105)))));
            if(right_value114) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
            if(it2_105) { come_call_finalizer(sType_finalize,it2_105, (void*)0, (void*)0, 0, 0, 0); }
        }
        __dec_obj56=result_type_100;
        result_type_100=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=solve_generics(result_type_100,info->generics_type,info))));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0); }
        if(right_value115) { come_call_finalizer(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0); }
        come_params_109=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value117=list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value116=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1)))))))));
        if(right_value117) { come_call_finalizer(list$1CVALUEphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
        label_params_115=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value124=map$2charphCVALUEphp_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value118=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1)))))))));
        if(right_value124) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0); }
        i_116=0;
        for(
        it_117=list$1tuple2$2charphsNodephphp_begin((params_64));
        !list$1tuple2$2charphsNodephphp_end((params_64));
        it_117=list$1tuple2$2charphsNodephphp_next((params_64))
        ){
            multiple_assgin_var2=it_117;
            label_118=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            node_119=(struct sNode*)come_increment_ref_count(multiple_assgin_var2->v2);
            if(!node_119->compile(node_119->_protocol_obj,info)) {
                _Bool __result95__ = (_Bool)0;
                if(label_118) { label_118 = come_decrement_ref_count(label_118, (void*)0, (void*)0, 0, 0); }
                if(node_119) { node_119 = come_decrement_ref_count(node_119, ((struct sNode*)node_119)->finalize, ((struct sNode*)node_119)->_protocol_obj, 0, 0); } 
                if(result_type_100) { come_call_finalizer(sType_finalize,result_type_100, (void*)0, (void*)0, 0, 0, 0); }
                if(param_types_101) { come_call_finalizer(list$1sTypephp_finalize,param_types_101, (void*)0, (void*)0, 0, 0, 0); }
                if(come_params_109) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_109, (void*)0, (void*)0, 0, 0, 0); }
                if(label_params_115) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_115, (void*)0, (void*)0, 0, 0, 0); }
                return __result95__;
            }
            come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=get_value_from_stack(-1,info))));
            if(right_value125) { come_call_finalizer(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0); }
            if(fun_99->mVarArgs&&list$1sTypephp_operator_load_element(fun_99->mParamTypes,i_116)==((void*)0)) {
            }
            else {
                if(i_116<list$1sTypephp_length(fun_99->mParamTypes)&&list$1sTypephp_operator_load_element(param_types_101,i_116)->mHeap&&come_value_120->type->mHeap) {
                    __dec_obj58=come_value_120->c_value;
                    come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value126=increment_ref_count_object(come_value_120->type,come_value_120->c_value,info))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0); }
                    if(right_value126) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0); }
                }
            }
            if(label_118==((void*)0)) {
                list$1CVALUEphp_push_back(come_params_109,(struct CVALUE*)come_increment_ref_count(come_value_120));
                i_116++;
            }
            else {
                map$2charphCVALUEphp_insert(label_params_115,(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(label_118)))),(struct CVALUE*)come_increment_ref_count(come_value_120));
                if(right_value133) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0); }
            }
            dec_stack_ptr(1,info);
            if(label_118) { label_118 = come_decrement_ref_count(label_118, (void*)0, (void*)0, 0, 0); }
            if(node_119) { node_119 = come_decrement_ref_count(node_119, ((struct sNode*)node_119)->finalize, ((struct sNode*)node_119)->_protocol_obj, 0, 0); } 
            if(come_value_120) { come_call_finalizer(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(list$1tuple2$2charphsNodephphp_length(params_64)<list$1sTypephp_length(fun_99->mParamTypes)) {
            for(
            ;            i_116<list$1sTypephp_length(fun_99->mParamTypes);
            i_116++
            ){
                default_param_164=(char*)come_increment_ref_count(((char*)(right_value134=charp_clone(list$1charphp_operator_load_element(fun_99->mParamDefaultParametors,i_116)))));
                if(right_value134) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0); }
                param_name_165=list$1charphp_operator_load_element(fun_99->mParamNames,i_116);
                come_value_167=map$2charphCVALUEphp_operator_load_element(label_params_115,param_name_165);
                if(default_param_164&&string_operator_not_equals(default_param_164,"")) {
                    source_168=(struct buffer*)come_increment_ref_count(info->source);
                    p_169=info->p;
                    head_170=info->head;
                    sline_171=info->sline;
                    __dec_obj59=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value135=string_to_buffer(default_param_164))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0); }
                    if(right_value135) { come_call_finalizer(buffer_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0); }
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_172=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value136=expression_v13(info))));
                    if(right_value136) { right_value136 = come_decrement_ref_count(right_value136, ((struct sNode*)right_value136)->finalize, ((struct sNode*)right_value136)->_protocol_obj, 1, 0); } 
                    if(!node_172->compile(node_172->_protocol_obj,info)) {
                        _Bool __result114__ = (_Bool)0;
                        if(source_168) { come_call_finalizer(buffer_finalize,source_168, (void*)0, (void*)0, 0, 0, 0); }
                        if(node_172) { node_172 = come_decrement_ref_count(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0); } 
                        if(default_param_164) { default_param_164 = come_decrement_ref_count(default_param_164, (void*)0, (void*)0, 0, 0); }
                        if(result_type_100) { come_call_finalizer(sType_finalize,result_type_100, (void*)0, (void*)0, 0, 0, 0); }
                        if(param_types_101) { come_call_finalizer(list$1sTypephp_finalize,param_types_101, (void*)0, (void*)0, 0, 0, 0); }
                        if(come_params_109) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(label_params_115) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_115, (void*)0, (void*)0, 0, 0, 0); }
                        return __result114__;
                    }
                    __dec_obj60=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_168);
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0); }
                    info->p=p_169;
                    info->head=head_170;
                    info->sline=sline_171;
                    come_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
                    if(right_value137) { come_call_finalizer(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
                    if(list$1sTypephp_operator_load_element(param_types_101,i_116)->mHeap&&come_value_173->type->mHeap) {
                        __dec_obj61=come_value_173->c_value;
                        come_value_173->c_value=(char*)come_increment_ref_count(((char*)(right_value138=increment_ref_count_object(come_value_173->type,come_value_173->c_value,info))));
                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0); }
                        if(right_value138) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0); }
                    }
                    list$1CVALUEphp_push_back(come_params_109,(struct CVALUE*)come_increment_ref_count(come_value_173));
                    dec_stack_ptr(1,info);
                    if(source_168) { come_call_finalizer(buffer_finalize,source_168, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_172) { node_172 = come_decrement_ref_count(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0); } 
                    if(come_value_173) { come_call_finalizer(CVALUE_finalize,come_value_173, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(come_value_167==((void*)0)) {
                        err_msg(info,"require parametor(%s)",fun_99->mName);
                        _Bool __result115__ = (_Bool)0;
                        if(default_param_164) { default_param_164 = come_decrement_ref_count(default_param_164, (void*)0, (void*)0, 0, 0); }
                        if(result_type_100) { come_call_finalizer(sType_finalize,result_type_100, (void*)0, (void*)0, 0, 0, 0); }
                        if(param_types_101) { come_call_finalizer(list$1sTypephp_finalize,param_types_101, (void*)0, (void*)0, 0, 0, 0); }
                        if(come_params_109) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_109, (void*)0, (void*)0, 0, 0, 0); }
                        if(label_params_115) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_115, (void*)0, (void*)0, 0, 0, 0); }
                        return __result115__;
                    }
                    else {
                        list$1CVALUEphp_push_back(come_params_109,((void*)0));
                    }
                }
                if(default_param_164) { default_param_164 = come_decrement_ref_count(default_param_164, (void*)0, (void*)0, 0, 0); }
            }
        }
        if(map$2charphCVALUEphp_length(label_params_115)>0) {
            for(
            i_116=0;
            i_116<list$1charphp_length(fun_99->mParamNames);
            i_116++
            ){
                param_name_174=list$1charphp_operator_load_element(fun_99->mParamNames,i_116);
                come_value_175=map$2charphCVALUEphp_operator_load_element(label_params_115,param_name_174);
                if(come_value_175) {
                    list$1CVALUEphp_replace(come_params_109,i_116,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=CVALUE_clone(come_value_175)))));
                    if(right_value142) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0); }
                }
            }
        }
        if(list$1sTypephp_length(fun_99->mParamTypes)!=list$1CVALUEphp_length(come_params_109)&&!fun_99->mVarArgs&&string_operator_not_equals(fun_name_63,"__builtin_va_start")&&string_operator_not_equals(fun_name_63,"__builtin_va_end")) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_63,list$1sTypephp_length(fun_99->mParamTypes),list$1tuple2$2charphsNodephphp_length(params_64));
            _Bool __result120__ = (_Bool)0;
            if(result_type_100) { come_call_finalizer(sType_finalize,result_type_100, (void*)0, (void*)0, 0, 0, 0); }
            if(param_types_101) { come_call_finalizer(list$1sTypephp_finalize,param_types_101, (void*)0, (void*)0, 0, 0, 0); }
            if(come_params_109) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_109, (void*)0, (void*)0, 0, 0, 0); }
            if(label_params_115) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_115, (void*)0, (void*)0, 0, 0, 0); }
            return __result120__;
        }
        buf_179=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value144=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value143=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
        if(right_value143) { come_call_finalizer(buffer_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value144) { come_call_finalizer(buffer_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
        buffer_append_str(buf_179,fun_name_63);
        buffer_append_str(buf_179,"(");
        j_180=0;
        for(
        it_181=list$1CVALUEphp_begin((come_params_109));
        !list$1CVALUEphp_end((come_params_109));
        it_181=list$1CVALUEphp_next((come_params_109))
        ){
            buffer_append_str(buf_179,it_181->c_value);
            if(j_180!=list$1CVALUEphp_length(come_params_109)-1) {
                buffer_append_str(buf_179,",");
            }
            j_180++;
        }
        buffer_append_str(buf_179,")");
        come_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
        if(right_value145) { come_call_finalizer(CVALUE_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
        __dec_obj65=come_value_182->c_value;
        come_value_182->c_value=(char*)come_increment_ref_count(((char*)(right_value146=buffer_to_string(buf_179))));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0); }
        if(right_value146) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0); }
        if(fun_99->mResultType->mHeap) {
            __dec_obj66=come_value_182->c_value;
            come_value_182->c_value=(char*)come_increment_ref_count(((char*)(right_value147=append_object_to_right_values(come_value_182->c_value,(struct sType*)come_increment_ref_count(result_type_100),info))));
            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0); }
            if(right_value147) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0); }
        }
        __dec_obj67=come_value_182->type;
        come_value_182->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(result_type_100))));
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0); }
        if(right_value148) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0); }
        come_value_182->type->mStatic=(_Bool)0;
        come_value_182->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_182->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
        if(result_type_100) { come_call_finalizer(sType_finalize,result_type_100, (void*)0, (void*)0, 0, 0, 0); }
        if(param_types_101) { come_call_finalizer(list$1sTypephp_finalize,param_types_101, (void*)0, (void*)0, 0, 0, 0); }
        if(come_params_109) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_109, (void*)0, (void*)0, 0, 0, 0); }
        if(label_params_115) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_115, (void*)0, (void*)0, 0, 0, 0); }
        if(buf_179) { come_call_finalizer(buffer_finalize,buf_179, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_182) { come_call_finalizer(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0); }
    }
    _Bool __result121__ = (_Bool)1;
    if(fun_name_63) { fun_name_63 = come_decrement_ref_count(fun_name_63, (void*)0, (void*)0, 0, 0); }
    return __result121__;
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1CVALUEph* __result63__ = self;
            if(self) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result63__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_68;
struct list_item$1CVALUEph* prev_it_69;
memset(&it_68, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&prev_it_69, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
                it_68=self->head;
                while(it_68!=((void*)0)) {
                    if(1) {
                        if(it_68->item) { come_call_finalizer(CVALUE_finalize,it_68->item, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    prev_it_69=it_68;
                    it_68=it_68->next;
                    come_free_object(prev_it_69);
                }
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
            int __result64__ = self->len;
            return __result64__;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
            int __result65__ = self->len;
            return __result65__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* result_72;
memset(&result_72, 0, sizeof(struct tuple2$2charphsNodeph*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct tuple2$2charphsNodeph* __result67__ = self->it->item;
                return __result67__;
            }
            memset(&result_72,0,sizeof(struct tuple2$2charphsNodeph*));
            struct tuple2$2charphsNodeph* __result68__ = result_72;
            return __result68__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
            _Bool __result69__ = self->it==((void*)0);
            return __result69__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* result_74;
memset(&result_74, 0, sizeof(struct tuple2$2charphsNodeph*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct tuple2$2charphsNodeph* __result70__ = self->it->item;
                return __result70__;
            }
            memset(&result_74,0,sizeof(struct tuple2$2charphsNodeph*));
            struct tuple2$2charphsNodeph* __result71__ = result_74;
            return __result71__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int index){
struct sType* default_value_78;
memset(&default_value_78, 0, sizeof(struct sType*)); /* bbb */
                memset(&default_value_78,0,sizeof(struct sType*));
                struct sType* __result75__ = list$1sTypephp_item(self,index,default_value_78);
                return __result75__;
}

static struct sType* list$1sTypephp_item(struct list$1sTypeph* self, int position, struct sType* default_value){
struct list_item$1sTypeph* it_79;
int i_80;
memset(&it_79, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&i_80, 0, sizeof(int)); /* ddd */
                    if(position<0) {
                        position+=self->len;
                    }
                    it_79=self->head;
                    i_80=0;
                    while(it_79!=((void*)0)) {
                        if(position==i_80) {
                            struct sType* __result73__ = it_79->item;
                            return __result73__;
                        }
                        it_79=it_79->next;
                        i_80++;
                    }
                    struct sType* __result74__ = default_value;
                    return __result74__;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
struct CVALUE* result_83;
memset(&result_83, 0, sizeof(struct CVALUE*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct CVALUE* __result76__ = self->it->item;
                return __result76__;
            }
            memset(&result_83,0,sizeof(struct CVALUE*));
            struct CVALUE* __result77__ = result_83;
            return __result77__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
            _Bool __result78__ = self->it==((void*)0);
            return __result78__;
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
struct CVALUE* result_85;
memset(&result_85, 0, sizeof(struct CVALUE*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct CVALUE* __result79__ = self->it->item;
                return __result79__;
            }
            memset(&result_85,0,sizeof(struct CVALUE*));
            struct CVALUE* __result80__ = result_85;
            return __result80__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
struct sFun* default_value_93;
memset(&default_value_93, 0, sizeof(struct sFun*)); /* bbb */
                    memset(&default_value_93,0,sizeof(struct sFun*));
                    struct sFun* __result85__ = map$2charphsFunphp_at(self,key,default_value_93);
                    return __result85__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
int hash_94;
int it_95;
memset(&hash_94, 0, sizeof(int)); /* ddd */
memset(&it_95, 0, sizeof(int)); /* ddd */
                        hash_94=string_get_hash_key(((char*)key))%self->size;
                        it_95=hash_94;
                        while((_Bool)1) {
                            if(self->item_existance[it_95]) {
                                if(charp_equals(self->keys[it_95],key)) {
                                    struct sFun* __result81__ = self->items[it_95];
                                    return __result81__;
                                }
                                it_95++;
                                if(it_95>=self->size) {
                                    it_95=0;
                                }
                                else if(it_95==hash_94) {
                                    struct sFun* __result82__ = default_value;
                                    return __result82__;
                                }
                            }
                            else {
                                struct sFun* __result83__ = default_value;
                                return __result83__;
                            }
                        }
                        struct sFun* __result84__ = default_value;
                        return __result84__;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
struct sType* result_102;
memset(&result_102, 0, sizeof(struct sType*)); /* bbb */
            self->it=self->head;
            if(self->it) {
                struct sType* __result88__ = self->it->item;
                return __result88__;
            }
            memset(&result_102,0,sizeof(struct sType*));
            struct sType* __result89__ = result_102;
            return __result89__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
            _Bool __result90__ = self->it==((void*)0);
            return __result90__;
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
struct sType* result_104;
memset(&result_104, 0, sizeof(struct sType*)); /* bbb */
            self->it=self->it->next;
            if(self->it) {
                struct sType* __result91__ = self->it->item;
                return __result91__;
            }
            memset(&result_104,0,sizeof(struct sType*));
            struct sType* __result92__ = result_104;
            return __result92__;
}

static void list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* right_value111;
struct list_item$1sTypeph* litem_106;
struct sType* __dec_obj53;
void* right_value112;
struct list_item$1sTypeph* litem_107;
struct sType* __dec_obj54;
void* right_value113;
struct list_item$1sTypeph* litem_108;
struct sType* __dec_obj55;
memset(&right_value111, 0, sizeof(void*));
memset(&litem_106, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value112, 0, sizeof(void*));
memset(&litem_107, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
memset(&right_value113, 0, sizeof(void*));
memset(&litem_108, 0, sizeof(struct list_item$1sTypeph*)); /* ddd */
                if(self->len==0) {
                    litem_106=((struct list_item$1sTypeph*)(right_value111=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_106->prev=((void*)0);
                    litem_106->next=((void*)0);
                    __dec_obj53=litem_106->item;
                    litem_106->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_106;
                    self->head=litem_106;
                }
                else if(self->len==1) {
                    litem_107=((struct list_item$1sTypeph*)(right_value112=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_107->prev=self->head;
                    litem_107->next=((void*)0);
                    __dec_obj54=litem_107->item;
                    litem_107->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0); }
                    self->tail=litem_107;
                    self->head->next=litem_107;
                }
                else {
                    litem_108=((struct list_item$1sTypeph*)(right_value113=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1))));
                    litem_108->prev=self->tail;
                    litem_108->next=((void*)0);
                    __dec_obj55=litem_108->item;
                    litem_108->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0); }
                    self->tail->next=litem_108;
                    self->tail=litem_108;
                }
                self->len++;
                if(item) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct map$2charphCVALUEph* map$2charphCVALUEphp_initialize(struct map$2charphCVALUEph* self){
void* right_value119;
void* right_value120;
void* right_value121;
int i_110;
void* right_value122;
void* right_value123;
struct list$1charp* __dec_obj57;
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&i_110, 0, sizeof(int)); /* ddd */
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
            self->keys=((char**)(right_value119=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
            self->items=((struct CVALUE**)(right_value120=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(128)))));
            self->item_existance=((_Bool*)(right_value121=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
            for(
            i_110=0;
            i_110<128;
            i_110++
            ){
                self->item_existance[i_110]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj57=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value123=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value122=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0); }
            if(right_value123) { come_call_finalizer(list$1charpp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0); }
            self->it=0;
            struct map$2charphCVALUEph* __result94__ = self;
            if(self) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            return __result94__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                struct list$1charp* __result93__ = self;
                if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                return __result93__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_111;
struct list_item$1charp* prev_it_112;
memset(&it_111, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_112, 0, sizeof(struct list_item$1charp*)); /* ddd */
                    it_111=self->head;
                    while(it_111!=((void*)0)) {
                        if(0) {
                            if(it_111->item) { it_111->item = come_decrement_ref_count(it_111->item, (void*)0, (void*)0, 0, 0); }
                        }
                        prev_it_112=it_111;
                        it_111=it_111->next;
                        come_free_object(prev_it_112);
                    }
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
int i_113;
int i_114;
memset(&i_113, 0, sizeof(int)); /* ddd */
memset(&i_114, 0, sizeof(int)); /* ddd */
                for(
                i_113=0;
                i_113<self->size;
                i_113++
                ){
                    if(self->item_existance[i_113]) {
                        if(1) {
                            if(self->items[i_113]) { come_call_finalizer(CVALUEp_finalize,self->items[i_113], (void*)0, (void*)0, 0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->items);
                for(
                i_114=0;
                i_114<self->size;
                i_114++
                ){
                    if(self->item_existance[i_114]) {
                        if(1) {
                            if(self->keys[i_114]) { self->keys[i_114] = come_decrement_ref_count(self->keys[i_114], (void*)0, (void*)0, 0, 0); }
                        }
                    }
                }
                come_free_object((char*)self->keys);
                if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
}

static void CVALUEp_finalize(struct CVALUE* self){
                                if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                                    if(self->c_value) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0); }
                                }
                                if(self!=((void*)0)&&self->type!=((void*)0)) {
                                    if(self->type) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void map$2charphCVALUEphp_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
int hash_136;
int it_137;
_Bool same_key_exist_154;
char* it2_156;
memset(&hash_136, 0, sizeof(int)); /* ddd */
memset(&it_137, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_154, 0, sizeof(_Bool)); /* ddd */
memset(&it2_156, 0, sizeof(char*)); /* ddd */
                    if(self->len*2>=self->size) {
                        map$2charphCVALUEphp_rehash(self);
                    }
                    hash_136=string_get_hash_key(key)%self->size;
                    it_137=hash_136;
                    while((_Bool)1) {
                        if(self->item_existance[it_137]) {
                            if(charp_equals(self->keys[it_137],key)) {
                                if(1) {
                                    list$1charpp_remove(self->key_list,self->keys[it_137]);
                                    if(self->keys[it_137]) { self->keys[it_137] = come_decrement_ref_count(self->keys[it_137], (void*)0, (void*)0, 0, 0); }
                                    self->keys[it_137]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    list$1charpp_remove(self->key_list,self->keys[it_137]);
                                    self->keys[it_137]=key;
                                }
                                if(1) {
                                    if(self->items[it_137]) { come_call_finalizer(CVALUEp_finalize,self->items[it_137], (void*)0, (void*)0, 0, 0, 0); }
                                    self->items[it_137]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_137]=item;
                                }
                                break;
                            }
                            it_137++;
                            if(it_137>=self->size) {
                                it_137=0;
                            }
                            else if(it_137==hash_136) {
                                fprintf(stderr,"unexpected error in map.insert\n");
                                exit(2);
                            }
                        }
                        else {
                            self->item_existance[it_137]=(_Bool)1;
                            if(1) {
                                self->keys[it_137]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                self->keys[it_137]=key;
                            }
                            if(1) {
                                self->items[it_137]=(struct CVALUE*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_137]=item;
                            }
                            self->len++;
                            break;
                        }
                    }
                    same_key_exist_154=(_Bool)0;
                    for(
                    it2_156=list$1charpp_begin(self->key_list);
                    !list$1charpp_end(self->key_list);
                    it_137=list$1charpp_next(self->key_list)
                    ){
                        if(charp_equals(it2_156,key)) {
                            same_key_exist_154=(_Bool)1;
                        }
                    }
                    if(!same_key_exist_154) {
                        list$1charpp_push_back(self->key_list,key);
                    }
                    if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                    if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphCVALUEphp_rehash(struct map$2charphCVALUEph* self){
int size_121;
void* right_value127;
char** keys_122;
void* right_value128;
struct CVALUE** items_123;
void* right_value129;
_Bool* item_existance_124;
int len_125;
char* it_127;
struct CVALUE* default_value_129;
struct CVALUE* it2_132;
int hash_133;
int n_134;
struct CVALUE* default_value_135;
memset(&size_121, 0, sizeof(int)); /* ddd */
memset(&right_value127, 0, sizeof(void*));
memset(&keys_122, 0, sizeof(char**)); /* ddd */
memset(&right_value128, 0, sizeof(void*));
memset(&items_123, 0, sizeof(struct CVALUE**)); /* ddd */
memset(&right_value129, 0, sizeof(void*));
memset(&item_existance_124, 0, sizeof(_Bool*)); /* ddd */
memset(&len_125, 0, sizeof(int)); /* ddd */
memset(&it_127, 0, sizeof(char*)); /* ddd */
memset(&default_value_129, 0, sizeof(struct CVALUE*)); /* bbb */
memset(&it2_132, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&hash_133, 0, sizeof(int)); /* ddd */
memset(&n_134, 0, sizeof(int)); /* ddd */
memset(&default_value_135, 0, sizeof(struct CVALUE*)); /* bbb */
                            size_121=self->size*3;
                            keys_122=((char**)(right_value127=(char**)come_calloc(1, sizeof(char*)*(1*(size_121)))));
                            items_123=((struct CVALUE**)(right_value128=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_121)))));
                            item_existance_124=((_Bool*)(right_value129=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_121)))));
                            len_125=0;
                            for(
                            it_127=map$2charphCVALUEphp_begin(self);
                            !map$2charphCVALUEphp_end(self);
                            it_127=map$2charphCVALUEphp_next(self)
                            ){
                                it2_132=map$2charphCVALUEphp_at(self,it_127,default_value_129);
                                hash_133=charp_get_hash_key(it_127)%size_121;
                                n_134=hash_133;
                                while((_Bool)1) {
                                    if(item_existance_124[n_134]) {
                                        n_134++;
                                        if(n_134>=size_121) {
                                            n_134=0;
                                        }
                                        else if(n_134==hash_133) {
                                            fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                            exit(2);
                                        }
                                    }
                                    else {
                                        item_existance_124[n_134]=(_Bool)1;
                                        keys_122[n_134]=it_127;
                                        items_123[n_134]=map$2charphCVALUEphp_at(self,it_127,default_value_135);
                                        len_125++;
                                        break;
                                    }
                                }
                            }
                            come_free_object((char*)self->items);
                            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                            come_free_object((char*)self->keys);
                            self->keys=keys_122;
                            self->items=items_123;
                            self->item_existance=item_existance_124;
                            self->size=size_121;
                            self->len=len_125;
}

static char* map$2charphCVALUEphp_begin(struct map$2charphCVALUEph* self){
char* result_126;
memset(&result_126, 0, sizeof(char*)); /* bbb */
                                self->key_list->it=self->key_list->head;
                                if(self->key_list->it) {
                                    char* __result96__ = self->key_list->it->item;
                                    return __result96__;
                                }
                                memset(&result_126,0,sizeof(char*));
                                char* __result97__ = result_126;
                                return __result97__;
}

static _Bool map$2charphCVALUEphp_end(struct map$2charphCVALUEph* self){
                                _Bool __result98__ = self->key_list->it==((void*)0);
                                return __result98__;
}

static char* map$2charphCVALUEphp_next(struct map$2charphCVALUEph* self){
char* result_128;
memset(&result_128, 0, sizeof(char*)); /* bbb */
                                self->key_list->it=self->key_list->it->next;
                                if(self->key_list->it) {
                                    char* __result99__ = self->key_list->it->item;
                                    return __result99__;
                                }
                                memset(&result_128,0,sizeof(char*));
                                char* __result100__ = result_128;
                                return __result100__;
}

static struct CVALUE* map$2charphCVALUEphp_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
int hash_130;
int it_131;
memset(&hash_130, 0, sizeof(int)); /* ddd */
memset(&it_131, 0, sizeof(int)); /* ddd */
                                    hash_130=string_get_hash_key(((char*)key))%self->size;
                                    it_131=hash_130;
                                    while((_Bool)1) {
                                        if(self->item_existance[it_131]) {
                                            if(charp_equals(self->keys[it_131],key)) {
                                                struct CVALUE* __result101__ = self->items[it_131];
                                                return __result101__;
                                            }
                                            it_131++;
                                            if(it_131>=self->size) {
                                                it_131=0;
                                            }
                                            else if(it_131==hash_130) {
                                                struct CVALUE* __result102__ = default_value;
                                                return __result102__;
                                            }
                                        }
                                        else {
                                            struct CVALUE* __result103__ = default_value;
                                            return __result103__;
                                        }
                                    }
                                    struct CVALUE* __result104__ = default_value;
                                    return __result104__;
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_138;
struct list_item$1charp* it_139;
memset(&it2_138, 0, sizeof(int)); /* ddd */
memset(&it_139, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                        it2_138=0;
                                        it_139=self->head;
                                        while(it_139!=((void*)0)) {
                                            if(charp_equals(it_139->item,item)) {
                                                list$1charpp_delete(self,it2_138,it2_138+1);
                                                break;
                                            }
                                            it2_138++;
                                            it_139=it_139->next;
                                        }
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_140;
struct list_item$1charp* it_143;
int i_144;
struct list_item$1charp* prev_it_145;
struct list_item$1charp* it_146;
int i_147;
struct list_item$1charp* prev_it_148;
struct list_item$1charp* it_149;
struct list_item$1charp* head_prev_it_150;
struct list_item$1charp* tail_it_151;
int i_152;
struct list_item$1charp* prev_it_153;
memset(&tmp_140, 0, sizeof(int)); /* ddd */
memset(&it_143, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_144, 0, sizeof(int)); /* ddd */
memset(&prev_it_145, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_146, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_147, 0, sizeof(int)); /* ddd */
memset(&prev_it_148, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_149, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_150, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_151, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_152, 0, sizeof(int)); /* ddd */
memset(&prev_it_153, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                    if(head<0) {
                                                        head+=self->len;
                                                    }
                                                    if(tail<0) {
                                                        tail+=self->len+1;
                                                    }
                                                    if(head>tail) {
                                                        tmp_140=tail;
                                                        tail=head;
                                                        head=tmp_140;
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
                                                        it_143=self->head;
                                                        i_144=0;
                                                        while(it_143!=((void*)0)) {
                                                            if(i_144<tail) {
                                                                prev_it_145=it_143;
                                                                it_143=it_143->next;
                                                                i_144++;
                                                                if(prev_it_145) { come_call_finalizer(list_item$1charpp_finalize,prev_it_145, (void*)0, (void*)0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else if(i_144==tail) {
                                                                self->head=it_143;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_143=it_143->next;
                                                                i_144++;
                                                            }
                                                        }
                                                    }
                                                    else if(tail==self->len) {
                                                        it_146=self->head;
                                                        i_147=0;
                                                        while(it_146!=((void*)0)) {
                                                            if(i_147==head) {
                                                                self->tail=it_146->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(i_147>=head) {
                                                                prev_it_148=it_146;
                                                                it_146=it_146->next;
                                                                i_147++;
                                                                if(prev_it_148) { come_call_finalizer(list_item$1charpp_finalize,prev_it_148, (void*)0, (void*)0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_146=it_146->next;
                                                                i_147++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_149=self->head;
                                                        head_prev_it_150=((void*)0);
                                                        tail_it_151=((void*)0);
                                                        i_152=0;
                                                        while(it_149!=((void*)0)) {
                                                            if(i_152==head) {
                                                                head_prev_it_150=it_149->prev;
                                                            }
                                                            if(i_152==tail) {
                                                                tail_it_151=it_149;
                                                            }
                                                            if(i_152>=head&&i_152<tail) {
                                                                prev_it_153=it_149;
                                                                it_149=it_149->next;
                                                                i_152++;
                                                                if(prev_it_153) { come_call_finalizer(list_item$1charpp_finalize,prev_it_153, (void*)0, (void*)0, 0, 0, 0); }
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_149=it_149->next;
                                                                i_152++;
                                                            }
                                                        }
                                                        if(head_prev_it_150!=((void*)0)) {
                                                            head_prev_it_150->next=tail_it_151;
                                                        }
                                                        if(tail_it_151!=((void*)0)) {
                                                            tail_it_151->prev=head_prev_it_150;
                                                        }
                                                    }
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_141;
struct list_item$1charp* prev_it_142;
memset(&it_141, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_142, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                            it_141=self->head;
                                                            while(it_141!=((void*)0)) {
                                                                prev_it_142=it_141;
                                                                it_141=it_141->next;
                                                                if(prev_it_142) { come_call_finalizer(list_item$1charpp_finalize,prev_it_142, (void*)0, (void*)0, 0, 0, 0); }
                                                            }
                                                            self->head=((void*)0);
                                                            self->tail=((void*)0);
                                                            self->len=0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static char* list$1charpp_begin(struct list$1charp* self){
char* result_155;
memset(&result_155, 0, sizeof(char*)); /* bbb */
                        self->it=self->head;
                        if(self->it) {
                            char* __result105__ = self->it->item;
                            return __result105__;
                        }
                        memset(&result_155,0,sizeof(char*));
                        char* __result106__ = result_155;
                        return __result106__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
                        _Bool __result107__ = self->it==((void*)0);
                        return __result107__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_157;
memset(&result_157, 0, sizeof(char*)); /* bbb */
                        self->it=self->it->next;
                        if(self->it) {
                            char* __result108__ = self->it->item;
                            return __result108__;
                        }
                        memset(&result_157,0,sizeof(char*));
                        char* __result109__ = result_157;
                        return __result109__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value130;
struct list_item$1charp* litem_158;
void* right_value131;
struct list_item$1charp* litem_159;
void* right_value132;
struct list_item$1charp* litem_160;
memset(&right_value130, 0, sizeof(void*));
memset(&litem_158, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value131, 0, sizeof(void*));
memset(&litem_159, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value132, 0, sizeof(void*));
memset(&litem_160, 0, sizeof(struct list_item$1charp*)); /* ddd */
                            if(self->len==0) {
                                litem_158=((struct list_item$1charp*)(right_value130=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                litem_158->prev=((void*)0);
                                litem_158->next=((void*)0);
                                litem_158->item=item;
                                self->tail=litem_158;
                                self->head=litem_158;
                            }
                            else if(self->len==1) {
                                litem_159=((struct list_item$1charp*)(right_value131=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                litem_159->prev=self->head;
                                litem_159->next=((void*)0);
                                litem_159->item=item;
                                self->tail=litem_159;
                                self->head->next=litem_159;
                            }
                            else {
                                litem_160=((struct list_item$1charp*)(right_value132=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                                litem_160->prev=self->tail;
                                litem_160->next=((void*)0);
                                litem_160->item=item;
                                self->tail->next=litem_160;
                                self->tail=litem_160;
                            }
                            self->len++;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int index){
char* default_value_161;
memset(&default_value_161, 0, sizeof(char*)); /* bbb */
                    memset(&default_value_161,0,sizeof(char*));
                    char* __result112__ = list$1charphp_item(self,index,default_value_161);
                    return __result112__;
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_162;
int i_163;
memset(&it_162, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_163, 0, sizeof(int)); /* ddd */
                        if(position<0) {
                            position+=self->len;
                        }
                        it_162=self->head;
                        i_163=0;
                        while(it_162!=((void*)0)) {
                            if(position==i_163) {
                                char* __result110__ = it_162->item;
                                return __result110__;
                            }
                            it_162=it_162->next;
                            i_163++;
                        }
                        char* __result111__ = default_value;
                        return __result111__;
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
struct CVALUE* default_value_166;
memset(&default_value_166, 0, sizeof(struct CVALUE*)); /* bbb */
                    memset(&default_value_166,0,sizeof(struct CVALUE*));
                    struct CVALUE* __result113__ = map$2charphCVALUEphp_at(self,key,default_value_166);
                    return __result113__;
}

static int map$2charphCVALUEphp_length(struct map$2charphCVALUEph* self){
            int __result116__ = self->len;
            return __result116__;
}

static int list$1charphp_length(struct list$1charph* self){
                int __result117__ = self->len;
                return __result117__;
}

static void list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
struct list_item$1CVALUEph* it_176;
int i_177;
struct CVALUE* __dec_obj62;
memset(&it_176, 0, sizeof(struct list_item$1CVALUEph*)); /* ddd */
memset(&i_177, 0, sizeof(int)); /* ddd */
                        if(position<0) {
                            position+=self->len;
                        }
                        it_176=self->head;
                        i_177=0;
                        while(it_176!=((void*)0)) {
                            if(position==i_177) {
                                __dec_obj62=it_176->item;
                                it_176->item=(struct CVALUE*)come_increment_ref_count(item);
                                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0); }
                                break;
                            }
                            it_176=it_176->next;
                            i_177++;
                        }
                        if(item) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* right_value139;
struct CVALUE* result_178;
void* right_value140;
char* __dec_obj63;
void* right_value141;
struct sType* __dec_obj64;
memset(&right_value139, 0, sizeof(void*));
memset(&result_178, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
                        if(self==(void*)0) {
                            struct CVALUE* __result118__ = (void*)0;
                            return __result118__;
                        }
                        result_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
                        if(right_value139) { come_call_finalizer(CVALUE_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0); }
                        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                            __dec_obj63=result_178->c_value;
                            result_178->c_value=(char*)come_increment_ref_count(((char*)(right_value140=string_clone(self->c_value))));
                            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0); }
                            if(right_value140) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0); }
                        }
                        if(self!=((void*)0)&&self->type!=((void*)0)) {
                            __dec_obj64=result_178->type;
                            result_178->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(self->type))));
                            if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0); }
                            if(right_value141) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0); }
                        }
                        if(self!=((void*)0)) {
                            result_178->var=self->var;
                        }
                        struct CVALUE* __result119__ = result_178;
                        if(result_178) { come_call_finalizer(CVALUE_finalize,result_178, (void*)0, (void*)0, 0, 0, 1); }
                        return __result119__;
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* right_value149;
struct sType* __dec_obj68;
void* right_value150;
struct sNode* __dec_obj69;
void* right_value151;
char* __dec_obj70;
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
    __dec_obj68=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(type))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0); }
    if(right_value149) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj69=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value150=sNodep_clone(left))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0); }
    if(right_value150) { right_value150 = come_decrement_ref_count(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0); } 
    self->sline=info->sline;
    __dec_obj70=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(info->sname))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0); }
    if(right_value151) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0); }
    struct sCastNode* __result122__ = self;
    if(self) { come_call_finalizer(sCastNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result122__;
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
}

int sCastNode_sline(struct sCastNode* self, struct sInfo* info){
    int __result123__ = self->sline;
    return __result123__;
}

char* sCastNode_sname(struct sCastNode* self, struct sInfo* info){
void* right_value152;
memset(&right_value152, 0, sizeof(void*));
    char* __result124__ = ((char*)(right_value152=__builtin_string(self->sname)));
    return __result124__;
}

_Bool sCastNode_terminated(){
    _Bool __result125__ = (_Bool)0;
    return __result125__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
struct sType* type_183;
struct sNode* left_184;
void* right_value153;
struct CVALUE* left_value_185;
void* right_value154;
struct sType* type2_186;
void* right_value155;
struct CVALUE* come_value_187;
void* right_value156;
void* right_value157;
char* __dec_obj71;
void* right_value158;
struct sType* __dec_obj72;
memset(&type_183, 0, sizeof(struct sType*)); /* ddd */
memset(&left_184, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value153, 0, sizeof(void*));
memset(&left_value_185, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value154, 0, sizeof(void*));
memset(&type2_186, 0, sizeof(struct sType*)); /* ddd */
memset(&right_value155, 0, sizeof(void*));
memset(&come_value_187, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
    type_183=self->mType;
    left_184=self->mLeft;
    if(!left_184->compile(left_184->_protocol_obj,info)) {
        _Bool __result126__ = (_Bool)0;
        return __result126__;
    }
    left_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=get_value_from_stack(-1,info))));
    if(right_value153) { come_call_finalizer(CVALUE_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    type2_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=solve_generics(type_183,info->generics_type,info))));
    if(right_value154) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0); }
    come_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value155=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value155) { come_call_finalizer(CVALUE_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj71=come_value_187->c_value;
    come_value_187->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("(%s)%s",((char*)(right_value156=make_type_name_string(type2_186,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_185->c_value))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0); }
    if(right_value156) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0); }
    if(right_value157) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0); }
    __dec_obj72=come_value_187->type;
    come_value_187->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(type2_186))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0); }
    if(right_value158) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0); }
    come_value_187->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_187->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_187));
    _Bool __result127__ = (_Bool)1;
    if(left_value_185) { come_call_finalizer(CVALUE_finalize,left_value_185, (void*)0, (void*)0, 0, 0, 0); }
    if(type2_186) { come_call_finalizer(sType_finalize,type2_186, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_187) { come_call_finalizer(CVALUE_finalize,come_value_187, (void*)0, (void*)0, 0, 0, 0); }
    return __result127__;
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* right_value159;
struct sNode* __dec_obj73;
void* right_value160;
char* __dec_obj74;
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
    __dec_obj73=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=sNodep_clone(left))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0); }
    if(right_value159) { right_value159 = come_decrement_ref_count(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0); } 
    self->sline=info->sline;
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string(info->sname))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0); }
    if(right_value160) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0); }
    struct sParenNode* __result128__ = self;
    if(self) { come_call_finalizer(sParenNode_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result128__;
}

static void sParenNode_finalize(struct sParenNode* self){
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0); } 
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
                }
}

int sParenNode_sline(struct sParenNode* self, struct sInfo* info){
    int __result129__ = self->sline;
    return __result129__;
}

char* sParenNode_sname(struct sParenNode* self, struct sInfo* info){
void* right_value161;
memset(&right_value161, 0, sizeof(void*));
    char* __result130__ = ((char*)(right_value161=__builtin_string(self->sname)));
    return __result130__;
}

_Bool sParenNode_terminated(){
    _Bool __result131__ = (_Bool)0;
    return __result131__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
struct sNode* left_188;
void* right_value162;
struct CVALUE* left_value_189;
void* right_value163;
struct CVALUE* come_value_190;
void* right_value164;
char* __dec_obj75;
void* right_value165;
struct sType* __dec_obj76;
memset(&left_188, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value162, 0, sizeof(void*));
memset(&left_value_189, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value163, 0, sizeof(void*));
memset(&come_value_190, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
    left_188=self->mLeft;
    if(!left_188->compile(left_188->_protocol_obj,info)) {
        _Bool __result132__ = (_Bool)0;
        return __result132__;
    }
    left_value_189=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=get_value_from_stack(-1,info))));
    if(right_value162) { come_call_finalizer(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value163) { come_call_finalizer(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj75=come_value_190->c_value;
    come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("(%s)",left_value_189->c_value))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0); }
    if(right_value164) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0); }
    __dec_obj76=come_value_190->type;
    come_value_190->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(left_value_189->type))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0); }
    if(right_value165) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0); }
    come_value_190->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_190->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
    _Bool __result133__ = (_Bool)1;
    if(left_value_189) { come_call_finalizer(CVALUE_finalize,left_value_189, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_190) { come_call_finalizer(CVALUE_finalize,come_value_190, (void*)0, (void*)0, 0, 0, 0); }
    return __result133__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* right_value166;
void* right_value167;
struct list$1tuple2$2charphsNodephph* params_191;
char* p_192;
int sline_193;
_Bool err_flag_194;
void* right_value168;
char* label_195;
void* right_value169;
char* __dec_obj77;
_Bool no_comma_196;
void* right_value170;
struct sNode* node_197;
void* right_value171;
struct sNode* __dec_obj78;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value183;
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&params_191, 0, sizeof(struct list$1tuple2$2charphsNodephph*)); /* ddd */
memset(&p_192, 0, sizeof(char*)); /* ddd */
memset(&sline_193, 0, sizeof(int)); /* ddd */
memset(&err_flag_194, 0, sizeof(_Bool)); /* ddd */
memset(&right_value168, 0, sizeof(void*));
memset(&label_195, 0, sizeof(char*)); /* ddd */
memset(&right_value169, 0, sizeof(void*));
memset(&no_comma_196, 0, sizeof(_Bool)); /* ddd */
memset(&right_value170, 0, sizeof(void*));
memset(&node_197, 0, sizeof(struct sNode*)); /* ddd */
memset(&right_value171, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
    expected_next_character(40,info);
    params_191=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value167=list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value166=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1)))))))));
    if(right_value167) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0); }
    while((_Bool)1) {
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_192=info->p;
        sline_193=info->sline;
        err_flag_194=(_Bool)0;
        label_195=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string(""))));
        if(right_value168) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0); }
        if(xisalpha(*info->p)||*info->p==95) {
            __dec_obj77=label_195;
            label_195=(char*)come_increment_ref_count(((char*)(right_value169=parse_word(info))));
            if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0); }
            if(right_value169) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0); }
            err_flag_194=(_Bool)1;
        }
        if(err_flag_194==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            label_195=((void*)0);
            info->p=p_192;
            info->sline=sline_193;
        }
        no_comma_196=info->no_comma;
        info->no_comma=(_Bool)1;
        node_197=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value170=expression_v13(info))));
        if(right_value170) { right_value170 = come_decrement_ref_count(right_value170, ((struct sNode*)right_value170)->finalize, ((struct sNode*)right_value170)->_protocol_obj, 1, 0); } 
        __dec_obj78=node_197;
        node_197=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value171=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_197),info))));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0); }
        if(right_value171) { right_value171 = come_decrement_ref_count(right_value171, ((struct sNode*)right_value171)->finalize, ((struct sNode*)right_value171)->_protocol_obj, 1, 0); } 
        info->no_comma=no_comma_196;
        list$1tuple2$2charphsNodephphp_push_back(params_191,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value176=tuple2$2charphsNodephp_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value175=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1))))),(char*)come_increment_ref_count(label_195),(struct sNode*)come_increment_ref_count(node_197))))));
        if(right_value176) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0); }
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        if(label_195) { label_195 = come_decrement_ref_count(label_195, (void*)0, (void*)0, 0, 0); }
        if(node_197) { node_197 = come_decrement_ref_count(node_197, ((struct sNode*)node_197)->finalize, ((struct sNode*)node_197)->_protocol_obj, 0, 0); } 
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode));
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value178=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value177=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1))))),fun_name,params_191,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sFunCallNode_finalize;
    _inf_value1->clone=sFunCallNode_clone;
    _inf_value1->compile=sFunCallNode_compile;
    _inf_value1->sline=sFunCallNode_sline;
    _inf_value1->sname=sFunCallNode_sname;
    _inf_value1->terminated=sFunCallNode_terminated;
    struct sNode* __result137__ = ((struct sNode*)(right_value183=_inf_value1));
    if(params_191) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_191, (void*)0, (void*)0, 0, 0, 0); }
    if(right_value177) { come_call_finalizer(sFunCallNode_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value178) { come_call_finalizer(sFunCallNode_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0); }
    return __result137__;
}

static void list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* right_value172;
struct list_item$1tuple2$2charphsNodephph* litem_198;
struct tuple2$2charphsNodeph* __dec_obj79;
void* right_value173;
struct list_item$1tuple2$2charphsNodephph* litem_199;
struct tuple2$2charphsNodeph* __dec_obj80;
void* right_value174;
struct list_item$1tuple2$2charphsNodephph* litem_200;
struct tuple2$2charphsNodeph* __dec_obj81;
memset(&right_value172, 0, sizeof(void*));
memset(&litem_198, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value173, 0, sizeof(void*));
memset(&litem_199, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
memset(&right_value174, 0, sizeof(void*));
memset(&litem_200, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*)); /* ddd */
            if(self->len==0) {
                litem_198=((struct list_item$1tuple2$2charphsNodephph*)(right_value172=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                litem_198->prev=((void*)0);
                litem_198->next=((void*)0);
                __dec_obj79=litem_198->item;
                litem_198->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0); }
                self->tail=litem_198;
                self->head=litem_198;
            }
            else if(self->len==1) {
                litem_199=((struct list_item$1tuple2$2charphsNodephph*)(right_value173=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                litem_199->prev=self->head;
                litem_199->next=((void*)0);
                __dec_obj80=litem_199->item;
                litem_199->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0); }
                self->tail=litem_199;
                self->head->next=litem_199;
            }
            else {
                litem_200=((struct list_item$1tuple2$2charphsNodephph*)(right_value174=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1))));
                litem_200->prev=self->tail;
                litem_200->next=((void*)0);
                __dec_obj81=litem_200->item;
                litem_200->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0); }
                self->tail->next=litem_200;
                self->tail=litem_200;
            }
            self->len++;
            if(item) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
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
            struct tuple2$2charphsNodeph* __result134__ = self;
            if(self) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
            if(v2) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1); } 
            return __result134__;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* right_value179;
struct sFunCallNode* result_201;
void* right_value180;
char* __dec_obj84;
void* right_value181;
struct list$1tuple2$2charphsNodephph* __dec_obj85;
void* right_value182;
char* __dec_obj86;
memset(&right_value179, 0, sizeof(void*));
memset(&result_201, 0, sizeof(struct sFunCallNode*)); /* ddd */
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sFunCallNode* __result135__ = (void*)0;
            return __result135__;
        }
        result_201=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value179=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1)))));
        if(right_value179) { come_call_finalizer(sFunCallNode_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
            __dec_obj84=result_201->fun_name;
            result_201->fun_name=(char*)come_increment_ref_count(((char*)(right_value180=string_clone(self->fun_name))));
            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0); }
            if(right_value180) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0); }
        }
        if(self!=((void*)0)&&self->params!=((void*)0)) {
            __dec_obj85=result_201->params;
            result_201->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value181=list$1tuple2$2charphsNodephphp_clone(self->params))));
            if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0); }
            if(right_value181) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)) {
            result_201->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj86=result_201->sname;
            result_201->sname=(char*)come_increment_ref_count(((char*)(right_value182=string_clone(self->sname))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0); }
            if(right_value182) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0); }
        }
        struct sFunCallNode* __result136__ = result_201;
        if(result_201) { come_call_finalizer(sFunCallNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 1); }
        return __result136__;
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj87;
void* right_value184;
char* __dec_obj88;
memset(&right_value184, 0, sizeof(void*));
    __dec_obj87=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string(info->sname))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0); }
    if(right_value184) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0); }
    struct sLogicalDenial* __result140__ = self;
    if(self) { come_call_finalizer(sLogicalDenial_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    return __result140__;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

_Bool sLogicalDenial_terminated(){
    _Bool __result141__ = (_Bool)0;
    return __result141__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* right_value185;
struct CVALUE* come_value_202;
void* right_value186;
struct CVALUE* come_value2_203;
void* right_value187;
char* __dec_obj89;
void* right_value188;
struct sType* __dec_obj90;
memset(&right_value185, 0, sizeof(void*));
memset(&come_value_202, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value186, 0, sizeof(void*));
memset(&come_value2_203, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
    if(!self->value->compile(self->value->_protocol_obj,info)) {
        _Bool __result142__ = (_Bool)0;
        return __result142__;
    }
    come_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=get_value_from_stack(-1,info))));
    if(right_value185) { come_call_finalizer(CVALUE_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value2_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value186) { come_call_finalizer(CVALUE_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj89=come_value2_203->c_value;
    come_value2_203->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("!%s",come_value_202->c_value))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0); }
    if(right_value187) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0); }
    __dec_obj90=come_value2_203->type;
    come_value2_203->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(come_value_202->type))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0); }
    if(right_value188) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_203->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_203));
    add_come_last_code(info,"%s;\n",come_value2_203->c_value);
    _Bool __result143__ = (_Bool)1;
    if(come_value_202) { come_call_finalizer(CVALUE_finalize,come_value_202, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_203) { come_call_finalizer(CVALUE_finalize,come_value2_203, (void*)0, (void*)0, 0, 0, 0); }
    return __result143__;
}

int sLogicalDenial_sline(struct sLogicalDenial* self, struct sInfo* info){
    int __result144__ = self->sline;
    return __result144__;
}

char* sLogicalDenial_sname(struct sLogicalDenial* self, struct sInfo* info){
void* right_value189;
memset(&right_value189, 0, sizeof(void*));
    char* __result145__ = ((char*)(right_value189=__builtin_string(self->sname)));
    return __result145__;
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj91;
void* right_value190;
char* __dec_obj92;
memset(&right_value190, 0, sizeof(void*));
    __dec_obj91=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(info->sname))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0); }
    if(right_value190) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0); }
    struct sMinusNode2* __result146__ = self;
    if(self) { come_call_finalizer(sMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    return __result146__;
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

_Bool sMinusNode2_terminated(){
    _Bool __result147__ = (_Bool)0;
    return __result147__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* right_value191;
struct CVALUE* come_value_204;
void* right_value192;
struct CVALUE* come_value2_205;
void* right_value193;
char* __dec_obj93;
void* right_value194;
struct sType* __dec_obj94;
memset(&right_value191, 0, sizeof(void*));
memset(&come_value_204, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value192, 0, sizeof(void*));
memset(&come_value2_205, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
    if(!self->value->compile(self->value->_protocol_obj,info)) {
        _Bool __result148__ = (_Bool)0;
        return __result148__;
    }
    come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=get_value_from_stack(-1,info))));
    if(right_value191) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value2_205=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value192) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj93=come_value2_205->c_value;
    come_value2_205->c_value=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("-%s",come_value_204->c_value))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0); }
    if(right_value193) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0); }
    __dec_obj94=come_value2_205->type;
    come_value2_205->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(come_value_204->type))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0); }
    if(right_value194) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_205->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_205));
    add_come_last_code(info,"%s;\n",come_value2_205->c_value);
    _Bool __result149__ = (_Bool)1;
    if(come_value_204) { come_call_finalizer(CVALUE_finalize,come_value_204, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_205) { come_call_finalizer(CVALUE_finalize,come_value2_205, (void*)0, (void*)0, 0, 0, 0); }
    return __result149__;
}

int sMinusNode2_sline(struct sMinusNode2* self, struct sInfo* info){
    int __result150__ = self->sline;
    return __result150__;
}

char* sMinusNode2_sname(struct sMinusNode2* self, struct sInfo* info){
void* right_value195;
memset(&right_value195, 0, sizeof(void*));
    char* __result151__ = ((char*)(right_value195=__builtin_string(self->sname)));
    return __result151__;
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj95;
void* right_value196;
char* __dec_obj96;
memset(&right_value196, 0, sizeof(void*));
    __dec_obj95=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(info->sname))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0); }
    if(right_value196) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0); }
    struct sPlusPlusNode2* __result152__ = self;
    if(self) { come_call_finalizer(sPlusPlusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    return __result152__;
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

_Bool sPlusPlusNode2_terminated(){
    _Bool __result153__ = (_Bool)0;
    return __result153__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* right_value197;
struct CVALUE* come_value_206;
void* right_value198;
struct CVALUE* come_value2_207;
void* right_value199;
char* __dec_obj97;
void* right_value200;
struct sType* __dec_obj98;
memset(&right_value197, 0, sizeof(void*));
memset(&come_value_206, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value198, 0, sizeof(void*));
memset(&come_value2_207, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
    if(!self->value->compile(self->value->_protocol_obj,info)) {
        _Bool __result154__ = (_Bool)0;
        return __result154__;
    }
    come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value197=get_value_from_stack(-1,info))));
    if(right_value197) { come_call_finalizer(CVALUE_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value2_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value198) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj97=come_value2_207->c_value;
    come_value2_207->c_value=(char*)come_increment_ref_count(((char*)(right_value199=xsprintf("++%s",come_value_206->c_value))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0); }
    if(right_value199) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0); }
    __dec_obj98=come_value2_207->type;
    come_value2_207->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_clone(come_value_206->type))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0); }
    if(right_value200) { come_call_finalizer(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_207->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_207));
    add_come_last_code(info,"%s;\n",come_value2_207->c_value);
    _Bool __result155__ = (_Bool)1;
    if(come_value_206) { come_call_finalizer(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_207) { come_call_finalizer(CVALUE_finalize,come_value2_207, (void*)0, (void*)0, 0, 0, 0); }
    return __result155__;
}

int sPlusPlusNode2_sline(struct sPlusPlusNode2* self, struct sInfo* info){
    int __result156__ = self->sline;
    return __result156__;
}

char* sPlusPlusNode2_sname(struct sPlusPlusNode2* self, struct sInfo* info){
void* right_value201;
memset(&right_value201, 0, sizeof(void*));
    char* __result157__ = ((char*)(right_value201=__builtin_string(self->sname)));
    return __result157__;
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj99;
void* right_value202;
char* __dec_obj100;
memset(&right_value202, 0, sizeof(void*));
    __dec_obj99=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj100=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string(info->sname))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0); }
    if(right_value202) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0); }
    struct sMinusMinusNode2* __result158__ = self;
    if(self) { come_call_finalizer(sMinusMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    return __result158__;
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

_Bool sMinusMinusNode2_terminated(){
    _Bool __result159__ = (_Bool)0;
    return __result159__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* right_value203;
struct CVALUE* come_value_208;
void* right_value204;
struct CVALUE* come_value2_209;
void* right_value205;
char* __dec_obj101;
void* right_value206;
struct sType* __dec_obj102;
memset(&right_value203, 0, sizeof(void*));
memset(&come_value_208, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value204, 0, sizeof(void*));
memset(&come_value2_209, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
    if(!self->value->compile(self->value->_protocol_obj,info)) {
        _Bool __result160__ = (_Bool)0;
        return __result160__;
    }
    come_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))));
    if(right_value203) { come_call_finalizer(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value2_209=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value204) { come_call_finalizer(CVALUE_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj101=come_value2_209->c_value;
    come_value2_209->c_value=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("--%s",come_value_208->c_value))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0); }
    if(right_value205) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0); }
    __dec_obj102=come_value2_209->type;
    come_value2_209->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(come_value_208->type))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0); }
    if(right_value206) { come_call_finalizer(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_209->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_209));
    add_come_last_code(info,"%s;\n",come_value2_209->c_value);
    _Bool __result161__ = (_Bool)1;
    if(come_value_208) { come_call_finalizer(CVALUE_finalize,come_value_208, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_209) { come_call_finalizer(CVALUE_finalize,come_value2_209, (void*)0, (void*)0, 0, 0, 0); }
    return __result161__;
}

int sMinusMinusNode2_sline(struct sMinusMinusNode2* self, struct sInfo* info){
    int __result162__ = self->sline;
    return __result162__;
}

char* sMinusMinusNode2_sname(struct sMinusMinusNode2* self, struct sInfo* info){
void* right_value207;
memset(&right_value207, 0, sizeof(void*));
    char* __result163__ = ((char*)(right_value207=__builtin_string(self->sname)));
    return __result163__;
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
struct sNode* __dec_obj103;
void* right_value208;
char* __dec_obj104;
memset(&right_value208, 0, sizeof(void*));
    __dec_obj103=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0); }
    self->sline=info->sline;
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(info->sname))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0); }
    if(right_value208) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0); }
    struct sComplement* __result164__ = self;
    if(self) { come_call_finalizer(sComplement_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(value) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1); } 
    return __result164__;
}

static void sComplement_finalize(struct sComplement* self){
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                if(self->value) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0); } 
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

_Bool sComplement_terminated(){
    _Bool __result165__ = (_Bool)0;
    return __result165__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* right_value209;
struct CVALUE* come_value_210;
void* right_value210;
struct CVALUE* come_value2_211;
void* right_value211;
char* __dec_obj105;
void* right_value212;
struct sType* __dec_obj106;
memset(&right_value209, 0, sizeof(void*));
memset(&come_value_210, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value210, 0, sizeof(void*));
memset(&come_value2_211, 0, sizeof(struct CVALUE*)); /* ddd */
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
    if(!self->value->compile(self->value->_protocol_obj,info)) {
        _Bool __result166__ = (_Bool)0;
        return __result166__;
    }
    come_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
    if(right_value209) { come_call_finalizer(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0); }
    dec_stack_ptr(1,info);
    come_value2_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1)))));
    if(right_value210) { come_call_finalizer(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj105=come_value2_211->c_value;
    come_value2_211->c_value=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("~%s",come_value_210->c_value))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0); }
    if(right_value211) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0); }
    __dec_obj106=come_value2_211->type;
    come_value2_211->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(come_value_210->type))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0); }
    if(right_value212) { come_call_finalizer(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0); }
    come_value2_211->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_211));
    add_come_last_code(info,"%s;\n",come_value2_211->c_value);
    _Bool __result167__ = (_Bool)1;
    if(come_value_210) { come_call_finalizer(CVALUE_finalize,come_value_210, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value2_211) { come_call_finalizer(CVALUE_finalize,come_value2_211, (void*)0, (void*)0, 0, 0, 0); }
    return __result167__;
}

int sComplement_sline(struct sComplement* self, struct sInfo* info){
    int __result168__ = self->sline;
    return __result168__;
}

char* sComplement_sname(struct sComplement* self, struct sInfo* info){
void* right_value213;
memset(&right_value213, 0, sizeof(void*));
    char* __result169__ = ((char*)(right_value213=__builtin_string(self->sname)));
    return __result169__;
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* right_value214;
char* __dec_obj107;
void* right_value238;
struct sBlock* __dec_obj115;
memset(&right_value214, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj107=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string(info->sname))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0); }
    if(right_value214) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0); }
    __dec_obj115=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value238=sBlock_clone(block))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0); }
    if(right_value238) { come_call_finalizer(sBlock_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0); }
    struct sNormalBlock* __result188__ = self;
    if(self) { come_call_finalizer(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    return __result188__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* right_value215;
struct sBlock* result_212;
void* right_value216;
struct list$1sNodeph* __dec_obj108;
void* right_value237;
struct sVarTable* __dec_obj114;
memset(&right_value215, 0, sizeof(void*));
memset(&result_212, 0, sizeof(struct sBlock*)); /* ddd */
memset(&right_value216, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
        if(self==(void*)0) {
            struct sBlock* __result170__ = (void*)0;
            return __result170__;
        }
        result_212=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value215=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1)))));
        if(right_value215) { come_call_finalizer(sBlock_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
            __dec_obj108=result_212->mNodes;
            result_212->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value216=list$1sNodephp_clone(self->mNodes))));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0); }
            if(right_value216) { come_call_finalizer(list$1sNodephp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0); }
        }
        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
            __dec_obj114=result_212->mVarTable;
            result_212->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value237=sVarTable_clone(self->mVarTable))));
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0); }
            if(right_value237) { come_call_finalizer(sVarTable_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0); }
        }
        struct sBlock* __result187__ = result_212;
        if(result_212) { come_call_finalizer(sBlock_finalize,result_212, (void*)0, (void*)0, 0, 0, 1); }
        return __result187__;
}

static void sBlock_finalize(struct sBlock* self){
            if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                if(self->mNodes) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                if(self->mVarTable) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* right_value217;
struct sVarTable* result_213;
void* right_value236;
struct map$2charphsVarph* __dec_obj113;
memset(&right_value217, 0, sizeof(void*));
memset(&result_213, 0, sizeof(struct sVarTable*)); /* ddd */
memset(&right_value236, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sVarTable* __result171__ = (void*)0;
                    return __result171__;
                }
                result_213=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value217=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1)))));
                if(right_value217) { come_call_finalizer(sVarTable_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                    __dec_obj113=result_213->mVars;
                    result_213->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value236=map$2charphsVarphp_clone(self->mVars))));
                    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0); }
                    if(right_value236) { come_call_finalizer(map$2charphsVarphp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_213->mGlobal=self->mGlobal;
                }
                if(self!=((void*)0)) {
                    result_213->mParent=self->mParent;
                }
                if(self!=((void*)0)) {
                    result_213->mID=self->mID;
                }
                struct sVarTable* __result186__ = result_213;
                if(result_213) { come_call_finalizer(sVarTable_finalize,result_213, (void*)0, (void*)0, 0, 0, 1); }
                return __result186__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* right_value218;
void* right_value224;
struct map$2charphsVarph* result_217;
char* it_219;
struct sVar* default_value_221;
struct sVar* it2_224;
void* right_value228;
void* right_value229;
void* right_value234;
void* right_value235;
memset(&right_value218, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&result_217, 0, sizeof(struct map$2charphsVarph*)); /* ddd */
memset(&it_219, 0, sizeof(char*)); /* ddd */
memset(&default_value_221, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_224, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
                        if(self==((void*)0)) {
                            struct map$2charphsVarph* __result172__ = ((void*)0);
                            return __result172__;
                        }
                        result_217=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value224=map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value218=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1)))))))));
                        if(right_value224) { come_call_finalizer(map$2charphsVarphp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0); }
                        for(
                        it_219=map$2charphsVarphp_begin(self);
                        !map$2charphsVarphp_end(self);
                        it_219=map$2charphsVarphp_next(self)
                        ){
                            it2_224=map$2charphsVarphp_at(self,it_219,default_value_221);
                            if(1&&!1) {
                                map$2charphsVarphp_insert2(result_217,(char*)come_increment_ref_count(((char*)(right_value228=charp_clone(it_219)))),it2_224);
                                if(right_value228) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0); }
                            }
                            else if(1&&1) {
                                map$2charphsVarphp_insert2(result_217,(char*)come_increment_ref_count(((char*)(right_value229=charp_clone(it_219)))),(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value234=sVarp_clone(it2_224)))));
                                if(right_value229) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0); }
                                if(right_value234) { come_call_finalizer(sVarp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            else if(!1&&1) {
                                map$2charphsVarphp_insert2(result_217,it_219,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value235=sVarp_clone(it2_224)))));
                                if(right_value235) { come_call_finalizer(sVarp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0); }
                            }
                            else if(!1&&!1) {
                                map$2charphsVarphp_insert2(result_217,it_219,it2_224);
                            }
                        }
                        struct map$2charphsVarph* __result185__ = result_217;
                        if(result_217) { come_call_finalizer(map$2charphsVarphp_finalize,result_217, (void*)0, (void*)0, 0, 0, 1); }
                        return __result185__;
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* right_value219;
void* right_value220;
void* right_value221;
int i_214;
void* right_value222;
void* right_value223;
struct list$1charp* __dec_obj109;
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&i_214, 0, sizeof(int)); /* ddd */
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
                            self->keys=((char**)(right_value219=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
                            self->items=((struct sVar**)(right_value220=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)))));
                            self->item_existance=((_Bool*)(right_value221=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
                            for(
                            i_214=0;
                            i_214<128;
                            i_214++
                            ){
                                self->item_existance[i_214]=(_Bool)0;
                            }
                            self->size=128;
                            self->len=0;
                            __dec_obj109=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value223=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value222=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
                            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0); }
                            if(right_value223) { come_call_finalizer(list$1charpp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0); }
                            self->it=0;
                            struct map$2charphsVarph* __result173__ = self;
                            if(self) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
                            return __result173__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_215;
int i_216;
memset(&i_215, 0, sizeof(int)); /* ddd */
memset(&i_216, 0, sizeof(int)); /* ddd */
                                for(
                                i_215=0;
                                i_215<self->size;
                                i_215++
                                ){
                                    if(self->item_existance[i_215]) {
                                        if(1) {
                                            if(self->items[i_215]) { come_call_finalizer(sVarp_finalize,self->items[i_215], (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                    }
                                }
                                come_free_object((char*)self->items);
                                for(
                                i_216=0;
                                i_216<self->size;
                                i_216++
                                ){
                                    if(self->item_existance[i_216]) {
                                        if(1) {
                                            if(self->keys[i_216]) { self->keys[i_216] = come_decrement_ref_count(self->keys[i_216], (void*)0, (void*)0, 0, 0); }
                                        }
                                    }
                                }
                                come_free_object((char*)self->keys);
                                if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
                                if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
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

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
char* result_218;
memset(&result_218, 0, sizeof(char*)); /* bbb */
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                char* __result174__ = self->key_list->it->item;
                                return __result174__;
                            }
                            memset(&result_218,0,sizeof(char*));
                            char* __result175__ = result_218;
                            return __result175__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
                            _Bool __result176__ = self->key_list->it==((void*)0);
                            return __result176__;
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
char* result_220;
memset(&result_220, 0, sizeof(char*)); /* bbb */
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                char* __result177__ = self->key_list->it->item;
                                return __result177__;
                            }
                            memset(&result_220,0,sizeof(char*));
                            char* __result178__ = result_220;
                            return __result178__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
int hash_222;
int it_223;
memset(&hash_222, 0, sizeof(int)); /* ddd */
memset(&it_223, 0, sizeof(int)); /* ddd */
                                hash_222=string_get_hash_key(((char*)key))%self->size;
                                it_223=hash_222;
                                while((_Bool)1) {
                                    if(self->item_existance[it_223]) {
                                        if(charp_equals(self->keys[it_223],key)) {
                                            struct sVar* __result179__ = self->items[it_223];
                                            return __result179__;
                                        }
                                        it_223++;
                                        if(it_223>=self->size) {
                                            it_223=0;
                                        }
                                        else if(it_223==hash_222) {
                                            struct sVar* __result180__ = default_value;
                                            return __result180__;
                                        }
                                    }
                                    else {
                                        struct sVar* __result181__ = default_value;
                                        return __result181__;
                                    }
                                }
                                struct sVar* __result182__ = default_value;
                                return __result182__;
}

static void map$2charphsVarphp_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
int hash_236;
int it_237;
_Bool same_key_exist_238;
char* it2_239;
memset(&hash_236, 0, sizeof(int)); /* ddd */
memset(&it_237, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_238, 0, sizeof(_Bool)); /* ddd */
memset(&it2_239, 0, sizeof(char*)); /* ddd */
                                    if(self->len*2>=self->size) {
                                        map$2charphsVarphp_rehash(self);
                                    }
                                    hash_236=string_get_hash_key(key)%self->size;
                                    it_237=hash_236;
                                    while((_Bool)1) {
                                        if(self->item_existance[it_237]) {
                                            if(charp_equals(self->keys[it_237],key)) {
                                                if(1) {
                                                    if(self->keys[it_237]) { self->keys[it_237] = come_decrement_ref_count(self->keys[it_237], (void*)0, (void*)0, 0, 0); }
                                                    list$1charpp_remove(self->key_list,self->keys[it_237]);
                                                    self->keys[it_237]=(char*)come_increment_ref_count(key);
                                                }
                                                else {
                                                    list$1charpp_remove(self->key_list,self->keys[it_237]);
                                                    self->keys[it_237]=key;
                                                }
                                                if(1) {
                                                    if(self->items[it_237]) { come_call_finalizer(sVarp_finalize,self->items[it_237], (void*)0, (void*)0, 0, 0, 0); }
                                                    self->items[it_237]=(struct sVar*)come_increment_ref_count(item);
                                                }
                                                else {
                                                    self->items[it_237]=item;
                                                }
                                                break;
                                            }
                                            it_237++;
                                            if(it_237>=self->size) {
                                                it_237=0;
                                            }
                                            else if(it_237==hash_236) {
                                                fprintf(stderr,"unexpected error in map.insert\n");
                                                exit(2);
                                            }
                                        }
                                        else {
                                            self->item_existance[it_237]=(_Bool)1;
                                            if(1) {
                                                self->keys[it_237]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                self->keys[it_237]=key;
                                            }
                                            if(1) {
                                                self->items[it_237]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_237]=item;
                                            }
                                            self->len++;
                                            break;
                                        }
                                    }
                                    same_key_exist_238=(_Bool)0;
                                    for(
                                    it2_239=list$1charpp_begin(self->key_list);
                                    !list$1charpp_end(self->key_list);
                                    it_237=list$1charpp_next(self->key_list)
                                    ){
                                        if(charp_equals(it2_239,key)) {
                                            same_key_exist_238=(_Bool)1;
                                        }
                                    }
                                    if(!same_key_exist_238) {
                                        list$1charpp_push_back(self->key_list,key);
                                    }
                                    if(key) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1); }
                                    if(item) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1); }
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_225;
void* right_value225;
char** keys_226;
void* right_value226;
struct sVar** items_227;
void* right_value227;
_Bool* item_existance_228;
int len_229;
char* it_230;
struct sVar* default_value_231;
struct sVar* it2_232;
int hash_233;
int n_234;
struct sVar* default_value_235;
memset(&size_225, 0, sizeof(int)); /* ddd */
memset(&right_value225, 0, sizeof(void*));
memset(&keys_226, 0, sizeof(char**)); /* ddd */
memset(&right_value226, 0, sizeof(void*));
memset(&items_227, 0, sizeof(struct sVar**)); /* ddd */
memset(&right_value227, 0, sizeof(void*));
memset(&item_existance_228, 0, sizeof(_Bool*)); /* ddd */
memset(&len_229, 0, sizeof(int)); /* ddd */
memset(&it_230, 0, sizeof(char*)); /* ddd */
memset(&default_value_231, 0, sizeof(struct sVar*)); /* bbb */
memset(&it2_232, 0, sizeof(struct sVar*)); /* ddd */
memset(&hash_233, 0, sizeof(int)); /* ddd */
memset(&n_234, 0, sizeof(int)); /* ddd */
memset(&default_value_235, 0, sizeof(struct sVar*)); /* bbb */
                                            size_225=self->size*3;
                                            keys_226=((char**)(right_value225=(char**)come_calloc(1, sizeof(char*)*(1*(size_225)))));
                                            items_227=((struct sVar**)(right_value226=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_225)))));
                                            item_existance_228=((_Bool*)(right_value227=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_225)))));
                                            len_229=0;
                                            for(
                                            it_230=map$2charphsVarphp_begin(self);
                                            !map$2charphsVarphp_end(self);
                                            it_230=map$2charphsVarphp_next(self)
                                            ){
                                                it2_232=map$2charphsVarphp_at(self,it_230,default_value_231);
                                                hash_233=charp_get_hash_key(it_230)%size_225;
                                                n_234=hash_233;
                                                while((_Bool)1) {
                                                    if(item_existance_228[n_234]) {
                                                        n_234++;
                                                        if(n_234>=size_225) {
                                                            n_234=0;
                                                        }
                                                        else if(n_234==hash_233) {
                                                            fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                                            exit(2);
                                                        }
                                                    }
                                                    else {
                                                        item_existance_228[n_234]=(_Bool)1;
                                                        keys_226[n_234]=it_230;
                                                        items_227[n_234]=map$2charphsVarphp_at(self,it_230,default_value_235);
                                                        len_229++;
                                                        break;
                                                    }
                                                }
                                            }
                                            come_free_object((char*)self->items);
                                            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                                            come_free_object((char*)self->keys);
                                            self->keys=keys_226;
                                            self->items=items_227;
                                            self->item_existance=item_existance_228;
                                            self->size=size_225;
                                            self->len=len_229;
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

static struct sVar* sVarp_clone(struct sVar* self){
void* right_value230;
struct sVar* result_240;
void* right_value231;
char* __dec_obj110;
void* right_value232;
char* __dec_obj111;
void* right_value233;
struct sType* __dec_obj112;
memset(&right_value230, 0, sizeof(void*));
memset(&result_240, 0, sizeof(struct sVar*)); /* ddd */
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
                                    if(self==(void*)0) {
                                        struct sVar* __result183__ = (void*)0;
                                        return __result183__;
                                    }
                                    result_240=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value230=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1)))));
                                    if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                        __dec_obj110=result_240->mName;
                                        result_240->mName=(char*)come_increment_ref_count(((char*)(right_value231=string_clone(self->mName))));
                                        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0); }
                                        if(right_value231) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0); }
                                    }
                                    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                        __dec_obj111=result_240->mCValueName;
                                        result_240->mCValueName=(char*)come_increment_ref_count(((char*)(right_value232=string_clone(self->mCValueName))));
                                        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0); }
                                        if(right_value232) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0); }
                                    }
                                    if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                        __dec_obj112=result_240->mType;
                                        result_240->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(self->mType))));
                                        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0); }
                                        if(right_value233) { come_call_finalizer(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0); }
                                    }
                                    if(self!=((void*)0)) {
                                        result_240->mBlockLevel=self->mBlockLevel;
                                    }
                                    if(self!=((void*)0)) {
                                        result_240->mGlobal=self->mGlobal;
                                    }
                                    if(self!=((void*)0)) {
                                        result_240->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(self!=((void*)0)) {
                                        result_240->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(self!=((void*)0)) {
                                        result_240->mNoFree=self->mNoFree;
                                    }
                                    struct sVar* __result184__ = result_240;
                                    return __result184__;
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                if(self->mBlock) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                if(self->sname) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0); }
            }
}

_Bool sNormalBlock_terminated(){
    _Bool __result189__ = (_Bool)1;
    return __result189__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
struct sBlock* block_241;
memset(&block_241, 0, sizeof(struct sBlock*)); /* ddd */
    block_241=self->mBlock;
    add_come_code(info,"{\n");
    transpile_block(block_241,((void*)0),((void*)0),info,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    _Bool __result190__ = (_Bool)1;
    return __result190__;
}

int sNormalBlock_sline(struct sNormalBlock* self, struct sInfo* info){
    int __result191__ = self->sline;
    return __result191__;
}

char* sNormalBlock_sname(struct sNormalBlock* self, struct sInfo* info){
void* right_value239;
memset(&right_value239, 0, sizeof(void*));
    char* __result192__ = ((char*)(right_value239=__builtin_string(self->sname)));
    return __result192__;
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* right_value243;
struct sNormalBlock* result_243;
void* right_value244;
struct sBlock* __dec_obj116;
void* right_value245;
char* __dec_obj117;
memset(&right_value243, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct sNormalBlock*)); /* ddd */
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sNormalBlock* __result193__ = (void*)0;
                return __result193__;
            }
            result_243=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value243=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1)))));
            if(right_value243) { come_call_finalizer(sNormalBlock_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                __dec_obj116=result_243->mBlock;
                result_243->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value244=sBlock_clone(self->mBlock))));
                if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0); }
                if(right_value244) { come_call_finalizer(sBlock_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_243->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj117=result_243->sname;
                result_243->sname=(char*)come_increment_ref_count(((char*)(right_value245=string_clone(self->sname))));
                if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0); }
                if(right_value245) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0); }
            }
            struct sNormalBlock* __result194__ = result_243;
            if(result_243) { come_call_finalizer(sNormalBlock_finalize,result_243, (void*)0, (void*)0, 0, 0, 1); }
            return __result194__;
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* right_value250;
struct sLogicalDenial* result_245;
void* right_value251;
struct sNode* __dec_obj118;
void* right_value252;
char* __dec_obj119;
memset(&right_value250, 0, sizeof(void*));
memset(&result_245, 0, sizeof(struct sLogicalDenial*)); /* ddd */
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sLogicalDenial* __result196__ = (void*)0;
                return __result196__;
            }
            result_245=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value250=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1)))));
            if(right_value250) { come_call_finalizer(sLogicalDenial_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj118=result_245->value;
                result_245->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value251=sNodep_clone(self->value))));
                if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0); }
                if(right_value251) { right_value251 = come_decrement_ref_count(right_value251, ((struct sNode*)right_value251)->finalize, ((struct sNode*)right_value251)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_245->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj119=result_245->sname;
                result_245->sname=(char*)come_increment_ref_count(((char*)(right_value252=string_clone(self->sname))));
                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0); }
                if(right_value252) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0); }
            }
            struct sLogicalDenial* __result197__ = result_245;
            if(result_245) { come_call_finalizer(sLogicalDenial_finalize,result_245, (void*)0, (void*)0, 0, 0, 1); }
            return __result197__;
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* right_value257;
struct sMinusMinusNode2* result_247;
void* right_value258;
struct sNode* __dec_obj120;
void* right_value259;
char* __dec_obj121;
memset(&right_value257, 0, sizeof(void*));
memset(&result_247, 0, sizeof(struct sMinusMinusNode2*)); /* ddd */
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sMinusMinusNode2* __result199__ = (void*)0;
                return __result199__;
            }
            result_247=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value257=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1)))));
            if(right_value257) { come_call_finalizer(sMinusMinusNode2_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj120=result_247->value;
                result_247->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=sNodep_clone(self->value))));
                if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0); }
                if(right_value258) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_247->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj121=result_247->sname;
                result_247->sname=(char*)come_increment_ref_count(((char*)(right_value259=string_clone(self->sname))));
                if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0); }
                if(right_value259) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0); }
            }
            struct sMinusMinusNode2* __result200__ = result_247;
            if(result_247) { come_call_finalizer(sMinusMinusNode2_finalize,result_247, (void*)0, (void*)0, 0, 0, 1); }
            return __result200__;
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* right_value264;
struct sMinusNode2* result_249;
void* right_value265;
struct sNode* __dec_obj122;
void* right_value266;
char* __dec_obj123;
memset(&right_value264, 0, sizeof(void*));
memset(&result_249, 0, sizeof(struct sMinusNode2*)); /* ddd */
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sMinusNode2* __result202__ = (void*)0;
                return __result202__;
            }
            result_249=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value264=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1)))));
            if(right_value264) { come_call_finalizer(sMinusNode2_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj122=result_249->value;
                result_249->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNodep_clone(self->value))));
                if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0); }
                if(right_value265) { right_value265 = come_decrement_ref_count(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_249->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj123=result_249->sname;
                result_249->sname=(char*)come_increment_ref_count(((char*)(right_value266=string_clone(self->sname))));
                if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0); }
                if(right_value266) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0); }
            }
            struct sMinusNode2* __result203__ = result_249;
            if(result_249) { come_call_finalizer(sMinusNode2_finalize,result_249, (void*)0, (void*)0, 0, 0, 1); }
            return __result203__;
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* right_value271;
struct sPlusPlusNode2* result_251;
void* right_value272;
struct sNode* __dec_obj124;
void* right_value273;
char* __dec_obj125;
memset(&right_value271, 0, sizeof(void*));
memset(&result_251, 0, sizeof(struct sPlusPlusNode2*)); /* ddd */
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sPlusPlusNode2* __result205__ = (void*)0;
                return __result205__;
            }
            result_251=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value271=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1)))));
            if(right_value271) { come_call_finalizer(sPlusPlusNode2_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj124=result_251->value;
                result_251->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value272=sNodep_clone(self->value))));
                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0); }
                if(right_value272) { right_value272 = come_decrement_ref_count(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_251->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj125=result_251->sname;
                result_251->sname=(char*)come_increment_ref_count(((char*)(right_value273=string_clone(self->sname))));
                if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0); }
                if(right_value273) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0); }
            }
            struct sPlusPlusNode2* __result206__ = result_251;
            if(result_251) { come_call_finalizer(sPlusPlusNode2_finalize,result_251, (void*)0, (void*)0, 0, 0, 1); }
            return __result206__;
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* right_value278;
struct sComplement* result_253;
void* right_value279;
struct sNode* __dec_obj126;
void* right_value280;
char* __dec_obj127;
memset(&right_value278, 0, sizeof(void*));
memset(&result_253, 0, sizeof(struct sComplement*)); /* ddd */
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sComplement* __result208__ = (void*)0;
                return __result208__;
            }
            result_253=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value278=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1)))));
            if(right_value278) { come_call_finalizer(sComplement_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj126=result_253->value;
                result_253->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=sNodep_clone(self->value))));
                if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0); }
                if(right_value279) { right_value279 = come_decrement_ref_count(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_253->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj127=result_253->sname;
                result_253->sname=(char*)come_increment_ref_count(((char*)(right_value280=string_clone(self->sname))));
                if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0); }
                if(right_value280) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0); }
            }
            struct sComplement* __result209__ = result_253;
            if(result_253) { come_call_finalizer(sComplement_finalize,result_253, (void*)0, (void*)0, 0, 0, 1); }
            return __result209__;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* right_value302;
struct sReturnNode* result_263;
void* right_value303;
struct sNode* __dec_obj135;
void* right_value304;
char* __dec_obj136;
void* right_value305;
char* __dec_obj137;
memset(&right_value302, 0, sizeof(void*));
memset(&result_263, 0, sizeof(struct sReturnNode*)); /* ddd */
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sReturnNode* __result218__ = (void*)0;
                    return __result218__;
                }
                result_263=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value302=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1)))));
                if(right_value302) { come_call_finalizer(sReturnNode_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->value!=((void*)0)) {
                    __dec_obj135=result_263->value;
                    result_263->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=sNodep_clone(self->value))));
                    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0); }
                    if(right_value303) { right_value303 = come_decrement_ref_count(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)&&self->value_source!=((void*)0)) {
                    __dec_obj136=result_263->value_source;
                    result_263->value_source=(char*)come_increment_ref_count(((char*)(right_value304=string_clone(self->value_source))));
                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0); }
                    if(right_value304) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0); }
                }
                if(self!=((void*)0)) {
                    result_263->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj137=result_263->sname;
                    result_263->sname=(char*)come_increment_ref_count(((char*)(right_value305=string_clone(self->sname))));
                    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0); }
                    if(right_value305) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0); }
                }
                struct sReturnNode* __result219__ = result_263;
                if(result_263) { come_call_finalizer(sReturnNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 1); }
                return __result219__;
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* right_value310;
struct sDerefferenceNode* result_265;
void* right_value311;
struct sNode* __dec_obj138;
void* right_value312;
char* __dec_obj139;
memset(&right_value310, 0, sizeof(void*));
memset(&result_265, 0, sizeof(struct sDerefferenceNode*)); /* ddd */
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sDerefferenceNode* __result221__ = (void*)0;
                return __result221__;
            }
            result_265=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value310=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1)))));
            if(right_value310) { come_call_finalizer(sDerefferenceNode_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj138=result_265->value;
                result_265->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=sNodep_clone(self->value))));
                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0); }
                if(right_value311) { right_value311 = come_decrement_ref_count(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_265->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj139=result_265->sname;
                result_265->sname=(char*)come_increment_ref_count(((char*)(right_value312=string_clone(self->sname))));
                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0); }
                if(right_value312) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0); }
            }
            struct sDerefferenceNode* __result222__ = result_265;
            if(result_265) { come_call_finalizer(sDerefferenceNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 1); }
            return __result222__;
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* right_value317;
struct sRefferenceNode* result_267;
void* right_value318;
struct sNode* __dec_obj140;
void* right_value319;
char* __dec_obj141;
memset(&right_value317, 0, sizeof(void*));
memset(&result_267, 0, sizeof(struct sRefferenceNode*)); /* ddd */
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sRefferenceNode* __result224__ = (void*)0;
                return __result224__;
            }
            result_267=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value317=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1)))));
            if(right_value317) { come_call_finalizer(sRefferenceNode_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj140=result_267->value;
                result_267->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=sNodep_clone(self->value))));
                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0); }
                if(right_value318) { right_value318 = come_decrement_ref_count(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_267->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj141=result_267->sname;
                result_267->sname=(char*)come_increment_ref_count(((char*)(right_value319=string_clone(self->sname))));
                if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0); }
                if(right_value319) { right_value319 = come_decrement_ref_count(right_value319, (void*)0, (void*)0, 1, 0); }
            }
            struct sRefferenceNode* __result225__ = result_267;
            if(result_267) { come_call_finalizer(sRefferenceNode_finalize,result_267, (void*)0, (void*)0, 0, 0, 1); }
            return __result225__;
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* right_value324;
struct sReverseNode* result_269;
void* right_value325;
struct sNode* __dec_obj142;
void* right_value326;
char* __dec_obj143;
memset(&right_value324, 0, sizeof(void*));
memset(&result_269, 0, sizeof(struct sReverseNode*)); /* ddd */
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sReverseNode* __result227__ = (void*)0;
                return __result227__;
            }
            result_269=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value324=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1)))));
            if(right_value324) { come_call_finalizer(sReverseNode_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->value!=((void*)0)) {
                __dec_obj142=result_269->value;
                result_269->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=sNodep_clone(self->value))));
                if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0); }
                if(right_value325) { right_value325 = come_decrement_ref_count(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_269->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj143=result_269->sname;
                result_269->sname=(char*)come_increment_ref_count(((char*)(right_value326=string_clone(self->sname))));
                if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0); }
                if(right_value326) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0); }
            }
            struct sReverseNode* __result228__ = result_269;
            if(result_269) { come_call_finalizer(sReverseNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 1); }
            return __result228__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    if(self->v1) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    if(self->v2) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0); }
                }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* right_value353;
struct sCastNode* result_298;
void* right_value354;
struct sType* __dec_obj154;
void* right_value355;
struct sNode* __dec_obj155;
void* right_value356;
char* __dec_obj156;
memset(&right_value353, 0, sizeof(void*));
memset(&result_298, 0, sizeof(struct sCastNode*)); /* ddd */
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sCastNode* __result236__ = (void*)0;
                    return __result236__;
                }
                result_298=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value353=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1)))));
                if(right_value353) { come_call_finalizer(sCastNode_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mType!=((void*)0)) {
                    __dec_obj154=result_298->mType;
                    result_298->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value354=sType_clone(self->mType))));
                    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0); }
                    if(right_value354) { come_call_finalizer(sType_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0); }
                }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj155=result_298->mLeft;
                    result_298->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=sNodep_clone(self->mLeft))));
                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0); }
                    if(right_value355) { right_value355 = come_decrement_ref_count(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_298->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj156=result_298->sname;
                    result_298->sname=(char*)come_increment_ref_count(((char*)(right_value356=string_clone(self->sname))));
                    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0); }
                    if(right_value356) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0); }
                }
                struct sCastNode* __result237__ = result_298;
                if(result_298) { come_call_finalizer(sCastNode_finalize,result_298, (void*)0, (void*)0, 0, 0, 1); }
                return __result237__;
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* right_value361;
struct sParenNode* result_300;
void* right_value362;
struct sNode* __dec_obj157;
void* right_value363;
char* __dec_obj158;
memset(&right_value361, 0, sizeof(void*));
memset(&result_300, 0, sizeof(struct sParenNode*)); /* ddd */
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
                if(self==(void*)0) {
                    struct sParenNode* __result239__ = (void*)0;
                    return __result239__;
                }
                result_300=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value361=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1)))));
                if(right_value361) { come_call_finalizer(sParenNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0); }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj157=result_300->mLeft;
                    result_300->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=sNodep_clone(self->mLeft))));
                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0); }
                    if(right_value362) { right_value362 = come_decrement_ref_count(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0); } 
                }
                if(self!=((void*)0)) {
                    result_300->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj158=result_300->sname;
                    result_300->sname=(char*)come_increment_ref_count(((char*)(right_value363=string_clone(self->sname))));
                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0); }
                    if(right_value363) { right_value363 = come_decrement_ref_count(right_value363, (void*)0, (void*)0, 1, 0); }
                }
                struct sParenNode* __result240__ = result_300;
                if(result_300) { come_call_finalizer(sParenNode_finalize,result_300, (void*)0, (void*)0, 0, 0, 1); }
                return __result240__;
}

struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
char* __dec_obj162;
void* right_value369;
struct sType* __dec_obj163;
void* right_value370;
char* __dec_obj164;
struct sNode* __dec_obj165;
char* __dec_obj166;
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj162=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0); }
    __dec_obj163=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value369=sType_clone(type))));
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0); }
    if(right_value369) { come_call_finalizer(sType_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj164=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value370=__builtin_string(name))));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0); }
    if(right_value370) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0); }
    __dec_obj165=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0); }
    __dec_obj166=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0); }
    struct sGlobalVariable* __result245__ = self;
    if(self) { come_call_finalizer(sGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    if(right_node) { right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1); } 
    if(array_initializer) { array_initializer = come_decrement_ref_count(array_initializer, (void*)0, (void*)0, 0, 1); }
    return __result245__;
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
}

int sGlobalVariable_sline(struct sGlobalVariable* self, struct sInfo* info){
    int __result246__ = self->sline;
    return __result246__;
}

char* sGlobalVariable_sname(struct sGlobalVariable* self, struct sInfo* info){
void* right_value371;
memset(&right_value371, 0, sizeof(void*));
    char* __result247__ = ((char*)(right_value371=__builtin_string(self->sname)));
    return __result247__;
}

_Bool sGlobalVariable_terminated(){
    _Bool __result248__ = (_Bool)0;
    return __result248__;
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
struct sType* type_302;
char* name_303;
struct sNode* right_node_304;
char* array_initializer_305;
void* right_value372;
void* right_value373;
void* right_value374;
char* name2_306;
void* right_value375;
memset(&type_302, 0, sizeof(struct sType*)); /* ddd */
memset(&name_303, 0, sizeof(char*)); /* ddd */
memset(&right_node_304, 0, sizeof(struct sNode*)); /* ddd */
memset(&array_initializer_305, 0, sizeof(char*)); /* ddd */
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&name2_306, 0, sizeof(char*)); /* ddd */
memset(&right_value375, 0, sizeof(void*));
    type_302=self->type;
    name_303=(char*)come_increment_ref_count(self->name);
    right_node_304=self->right_node;
    array_initializer_305=(char*)come_increment_ref_count(self->array_initializer);
    add_variable_to_global_table(name_303,type_302,info);
    if(array_initializer_305) {
        add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value372=make_define_var(type_302,name_303,info,(_Bool)0))),array_initializer_305);
        if(right_value372) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0); }
    }
    else if(right_node_304) {
        add_come_code_at_source_head(info,"%s;\n",((char*)(right_value373=make_define_var(type_302,name_303,info,(_Bool)0))));
        if(right_value373) { right_value373 = come_decrement_ref_count(right_value373, (void*)0, (void*)0, 1, 0); }
        name2_306=((char*)(right_value374=__builtin_string(name_303)));
    }
    else {
        add_come_code_at_source_head(info,"%s;\n",((char*)(right_value375=make_define_var(type_302,name_303,info,(_Bool)0))));
        if(right_value375) { right_value375 = come_decrement_ref_count(right_value375, (void*)0, (void*)0, 1, 0); }
    }
    _Bool __result249__ = (_Bool)1;
    if(name_303) { name_303 = come_decrement_ref_count(name_303, (void*)0, (void*)0, 0, 0); }
    if(array_initializer_305) { array_initializer_305 = come_decrement_ref_count(array_initializer_305, (void*)0, (void*)0, 0, 0); }
    return __result249__;
}

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct sType* type, char* name, struct sInfo* info){
void* right_value376;
struct sType* __dec_obj167;
void* right_value377;
char* __dec_obj168;
char* __dec_obj169;
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
    __dec_obj167=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value376=sType_clone(type))));
    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0); }
    if(right_value376) { come_call_finalizer(sType_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj168=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value377=__builtin_string(name))));
    if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0); }
    if(right_value377) { right_value377 = come_decrement_ref_count(right_value377, (void*)0, (void*)0, 1, 0); }
    self->sline=info->sline;
    __dec_obj169=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0); }
    struct sExternalGlobalVariable* __result250__ = self;
    if(self) { come_call_finalizer(sExternalGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    if(name) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1); }
    return __result250__;
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
}

int sExternalGlobalVariable_sline(struct sExternalGlobalVariable* self, struct sInfo* info){
    int __result251__ = self->sline;
    return __result251__;
}

char* sExternalGlobalVariable_sname(struct sExternalGlobalVariable* self, struct sInfo* info){
void* right_value378;
memset(&right_value378, 0, sizeof(void*));
    char* __result252__ = ((char*)(right_value378=__builtin_string(self->sname)));
    return __result252__;
}

_Bool sExternalGlobalVariable_terminated(){
    _Bool __result253__ = (_Bool)0;
    return __result253__;
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
struct sType* type_307;
char* name_308;
void* right_value379;
memset(&type_307, 0, sizeof(struct sType*)); /* ddd */
memset(&name_308, 0, sizeof(char*)); /* ddd */
memset(&right_value379, 0, sizeof(void*));
    type_307=self->type;
    name_308=(char*)come_increment_ref_count(self->name);
    add_variable_to_global_table(name_308,type_307,info);
    add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value379=make_define_var(type_307,name_308,info,(_Bool)0))));
    if(right_value379) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0); }
    _Bool __result254__ = (_Bool)1;
    if(name_308) { name_308 = come_decrement_ref_count(name_308, (void*)0, (void*)0, 0, 0); }
    return __result254__;
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
void* right_value393;
struct sExternalGlobalVariable* result_321;
void* right_value394;
struct sType* __dec_obj174;
void* right_value395;
char* __dec_obj175;
void* right_value396;
char* __dec_obj176;
memset(&right_value393, 0, sizeof(void*));
memset(&result_321, 0, sizeof(struct sExternalGlobalVariable*)); /* ddd */
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sExternalGlobalVariable* __result256__ = (void*)0;
                return __result256__;
            }
            result_321=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value393=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1)))));
            if(right_value393) { come_call_finalizer(sExternalGlobalVariable_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj174=result_321->type;
                result_321->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value394=sType_clone(self->type))));
                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0); }
                if(right_value394) { come_call_finalizer(sType_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->name!=((void*)0)) {
                __dec_obj175=result_321->name;
                result_321->name=(char*)come_increment_ref_count(((char*)(right_value395=string_clone(self->name))));
                if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0); }
                if(right_value395) { right_value395 = come_decrement_ref_count(right_value395, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)) {
                result_321->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj176=result_321->sname;
                result_321->sname=(char*)come_increment_ref_count(((char*)(right_value396=string_clone(self->sname))));
                if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0); }
                if(right_value396) { right_value396 = come_decrement_ref_count(right_value396, (void*)0, (void*)0, 1, 0); }
            }
            struct sExternalGlobalVariable* __result257__ = result_321;
            if(result_321) { come_call_finalizer(sExternalGlobalVariable_finalize,result_321, (void*)0, (void*)0, 0, 0, 1); }
            return __result257__;
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
void* right_value400;
struct sGlobalVariable* result_322;
void* right_value401;
struct sType* __dec_obj177;
void* right_value402;
char* __dec_obj178;
void* right_value403;
struct sNode* __dec_obj179;
void* right_value404;
char* __dec_obj180;
void* right_value405;
char* __dec_obj181;
memset(&right_value400, 0, sizeof(void*));
memset(&result_322, 0, sizeof(struct sGlobalVariable*)); /* ddd */
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
            if(self==(void*)0) {
                struct sGlobalVariable* __result259__ = (void*)0;
                return __result259__;
            }
            result_322=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value400=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1)))));
            if(right_value400) { come_call_finalizer(sGlobalVariable_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0); }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj177=result_322->type;
                result_322->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value401=sType_clone(self->type))));
                if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0); }
                if(right_value401) { come_call_finalizer(sType_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0); }
            }
            if(self!=((void*)0)&&self->name!=((void*)0)) {
                __dec_obj178=result_322->name;
                result_322->name=(char*)come_increment_ref_count(((char*)(right_value402=string_clone(self->name))));
                if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0); }
                if(right_value402) { right_value402 = come_decrement_ref_count(right_value402, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->right_node!=((void*)0)) {
                __dec_obj179=result_322->right_node;
                result_322->right_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=sNodep_clone(self->right_node))));
                if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0); }
                if(right_value403) { right_value403 = come_decrement_ref_count(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0); } 
            }
            if(self!=((void*)0)) {
                result_322->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj180=result_322->sname;
                result_322->sname=(char*)come_increment_ref_count(((char*)(right_value404=string_clone(self->sname))));
                if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0); }
                if(right_value404) { right_value404 = come_decrement_ref_count(right_value404, (void*)0, (void*)0, 1, 0); }
            }
            if(self!=((void*)0)&&self->array_initializer!=((void*)0)) {
                __dec_obj181=result_322->array_initializer;
                result_322->array_initializer=(char*)come_increment_ref_count(((char*)(right_value405=string_clone(self->array_initializer))));
                if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0); }
                if(right_value405) { right_value405 = come_decrement_ref_count(right_value405, (void*)0, (void*)0, 1, 0); }
            }
            struct sGlobalVariable* __result260__ = result_322;
            if(result_322) { come_call_finalizer(sGlobalVariable_finalize,result_322, (void*)0, (void*)0, 0, 0, 1); }
            return __result260__;
}

