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
struct sData
{
    char* a;
};
struct IA
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    int (*fun)(void*,int,int);
};
struct sDataA
{
    int a;
    int b;
};
struct tuple2$ph_int$_bool$
{
    int v1;
    _Bool v2;
};
struct tuple2$_int$_bool$
{
    int v1;
    _Bool v2;
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
struct list_item$p_int$
{
    int item;
    struct list_item$p_int$* prev;
    struct list_item$p_int$* next;
};
struct list$_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct tuple1$_int$
{
    int v1;
};
struct tuple1$_char$ph
{
    char* v1;
};
struct tuple2$_char$ph_int$
{
    char* v1;
    int v2;
};
struct list_item$p_IA$ph
{
    struct IA* item;
    struct list_item$p_IA$ph* prev;
    struct list_item$p_IA$ph* next;
};
struct list$_IA$ph
{
    struct list_item$p_IA$ph* head;
    struct list_item$p_IA$ph* tail;
    int len;
    struct list_item$p_IA$ph* it;
};
struct __current_stack1__
{
    char** p_39;
    void** p2_40;
    int* count_41;
    int* size2_42;
    char** mem2_43;
    int* b_44;
    int** a_45;
    int* a2_46;
    char** ax_49;
    char** str_53;
    struct sData** data_54;
    int** axyz_55;
    int** xxx_56;
    int** yyy_57;
    int** zzz_58;
    int* bzyz_59;
    int** azyz_60;
    int* n_61;
};
struct list$ph_char$ph
{
    struct list_item$p_char$ph* head;
    struct list_item$p_char$ph* tail;
    int len;
    struct list_item$p_char$ph* it;
};
struct list$p_char$ph
{
    struct list_item$p_char$ph* head;
    struct list_item$p_char$ph* tail;
    int len;
    struct list_item$p_char$ph* it;
};
struct list_item$_char$ph
{
    char* item;
    struct list_item$p_char$ph* prev;
    struct list_item$p_char$ph* next;
};
struct list_item$_char$ph$_char$ph
{
    char* item;
    struct list_item$p_char$ph* prev;
    struct list_item$p_char$ph* next;
};
struct list$ph_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct list$p_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct list_item$_int$
{
    int item;
    struct list_item$p_int$* prev;
    struct list_item$p_int$* next;
};
struct list_item$_int$$_int$
{
    int item;
    struct list_item$p_int$* prev;
    struct list_item$p_int$* next;
};
struct __current_stack2__
{
    char** p_39;
    void** p2_40;
    int* count_41;
    int* size2_42;
    char** mem2_43;
    int* b_44;
    int** a_45;
    int* a2_46;
    char** ax_49;
    char** str_53;
    struct sData** data_54;
    int** axyz_55;
    int** xxx_56;
    int** yyy_57;
    int** zzz_58;
    int* bzyz_59;
    int** azyz_60;
    int* n_61;
    struct list$_char$ph** liX_64;
    struct list$_int$** liX2_75;
    int* aX_84;
};
struct __current_stack3__
{
    char** p_39;
    void** p2_40;
    int* count_41;
    int* size2_42;
    char** mem2_43;
    int* b_44;
    int** a_45;
    int* a2_46;
    char** ax_49;
    char** str_53;
    struct sData** data_54;
    int** axyz_55;
    int** xxx_56;
    int** yyy_57;
    int** zzz_58;
    int* bzyz_59;
    int** azyz_60;
    int* n_61;
    struct list$_char$ph** liX_64;
    struct list$_int$** liX2_75;
    int* aX_84;
    int* aXYZY_88;
    struct list$_char$ph** li_89;
    struct list$_int$** li2_91;
    int* aXL_93;
};
struct list$p_int$$p_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct list$p_char$ph$p_char$ph
{
    struct list_item$p_char$ph* head;
    struct list_item$p_char$ph* tail;
    int len;
    struct list_item$p_char$ph* it;
};
struct list$_int$$_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct list$ph_int$$ph_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct __current_stack4__
{
    char** p_39;
    void** p2_40;
    int* count_41;
    int* size2_42;
    char** mem2_43;
    int* b_44;
    int** a_45;
    int* a2_46;
    char** ax_49;
    char** str_53;
    struct sData** data_54;
    int** axyz_55;
    int** xxx_56;
    int** yyy_57;
    int** zzz_58;
    int* bzyz_59;
    int** azyz_60;
    int* n_61;
    struct list$_char$ph** liX_64;
    struct list$_int$** liX2_75;
    int* aX_84;
    int* aXYZY_88;
    struct list$_char$ph** li_89;
    struct list$_int$** li2_91;
    int* aXL_93;
    struct list$ph_char$ph** li3_130;
    struct list$ph_int$** li4_138;
    struct list$ph_int$** li5_142;
    struct list$ph_int$** li6_147;
    int** axyzX_158;
    char** strXYXY_159;
    struct list$_int$** liZ_160;
};
struct __current_stack5__
{
    char** p_39;
    void** p2_40;
    int* count_41;
    int* size2_42;
    char** mem2_43;
    int* b_44;
    int** a_45;
    int* a2_46;
    char** ax_49;
    char** str_53;
    struct sData** data_54;
    int** axyz_55;
    int** xxx_56;
    int** yyy_57;
    int** zzz_58;
    int* bzyz_59;
    int** azyz_60;
    int* n_61;
    struct list$_char$ph** liX_64;
    struct list$_int$** liX2_75;
    int* aX_84;
    int* aXYZY_88;
    struct list$_char$ph** li_89;
    struct list$_int$** li2_91;
    int* aXL_93;
    struct list$ph_char$ph** li3_130;
    struct list$ph_int$** li4_138;
    struct list$ph_int$** li5_142;
    struct list$ph_int$** li6_147;
    int** axyzX_158;
    char** strXYXY_159;
    struct list$_int$** liZ_160;
    struct list$_int$** liZ2_166;
    struct list$_int$** __list_value1___169;
    struct list$_int$** __list_value2___170;
    struct list$_int$** __list_value3___171;
};
struct list_item$p_char$p
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
struct map$_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct map$ph_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct list$_char$p
{
    struct list_item$p_char$p* head;
    struct list_item$p_char$p* tail;
    int len;
    struct list_item$p_char$p* it;
};
struct list$p_char$p
{
    struct list_item$p_char$p* head;
    struct list_item$p_char$p* tail;
    int len;
    struct list_item$p_char$p* it;
};
struct list_item$_char$p
{
    char* item;
    struct list_item$p_char$p* prev;
    struct list_item$p_char$p* next;
};
struct list_item$_char$p$_char$p
{
    char* item;
    struct list_item$p_char$p* prev;
    struct list_item$p_char$p* next;
};
struct list$ph_char$p$ph_char$p
{
    struct list_item$p_char$p* head;
    struct list_item$p_char$p* tail;
    int len;
    struct list_item$p_char$p* it;
};
struct map$p_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct map$p_char$p_int$$p_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct map$_char$p_int$$_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct list$_char$p$_char$p
{
    struct list_item$p_char$p* head;
    struct list_item$p_char$p* tail;
    int len;
    struct list_item$p_char$p* it;
};
struct map$ph_char$p_int$$ph_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct tuple1$ph_int$
{
    int v1;
};
struct tuple1$ph_char$ph
{
    char* v1;
};
struct tuple1$ph_char$ph$p_char$ph
{
    char* v1;
};
struct tuple2$ph_char$ph_int$
{
    char* v1;
    int v2;
};
struct tuple2$ph_char$ph_int$$p_char$ph_int$
{
    char* v1;
    int v2;
};
struct tuple2$_char$p_int$
{
    char* v1;
    int v2;
};
struct tuple2$ph_char$p_int$
{
    char* v1;
    int v2;
};
struct list$ph_IA$ph
{
    struct list_item$p_IA$ph* head;
    struct list_item$p_IA$ph* tail;
    int len;
    struct list_item$p_IA$ph* it;
};
struct list$p_IA$ph
{
    struct list_item$p_IA$ph* head;
    struct list_item$p_IA$ph* tail;
    int len;
    struct list_item$p_IA$ph* it;
};
struct list_item$_IA$ph
{
    struct IA* item;
    struct list_item$p_IA$ph* prev;
    struct list_item$p_IA$ph* next;
};
struct list_item$_IA$ph$_IA$ph
{
    struct IA* item;
    struct list_item$p_IA$ph* prev;
    struct list_item$p_IA$ph* next;
};
struct tuple3$_int$_int$_bool$
{
    int v1;
    int v2;
    _Bool v3;
};
struct tuple3$ph_int$_int$_bool$
{
    int v1;
    int v2;
    _Bool v3;
};
struct tuple2$p_int$_bool$
{
    int v1;
    _Bool v2;
};
struct __current_stack6__
{
    char** p_39;
    void** p2_40;
    int* count_41;
    int* size2_42;
    char** mem2_43;
    int* b_44;
    int** a_45;
    int* a2_46;
    char** ax_49;
    char** str_53;
    struct sData** data_54;
    int** axyz_55;
    int** xxx_56;
    int** yyy_57;
    int** zzz_58;
    int* bzyz_59;
    int** azyz_60;
    int* n_61;
    struct list$_char$ph** liX_64;
    struct list$_int$** liX2_75;
    int* aX_84;
    int* aXYZY_88;
    struct list$_char$ph** li_89;
    struct list$_int$** li2_91;
    int* aXL_93;
    struct list$ph_char$ph** li3_130;
    struct list$ph_int$** li4_138;
    struct list$ph_int$** li5_142;
    struct list$ph_int$** li6_147;
    int** axyzX_158;
    char** strXYXY_159;
    struct list$_int$** liZ_160;
    struct list$_int$** liZ2_166;
    struct list$_int$** __list_value1___169;
    struct list$_int$** __list_value2___170;
    struct list$_int$** __list_value3___171;
    struct map$_char$p_int$** __map_value1___183;
    struct map$_char$p_int$** __map_value2___210;
    struct map$_char$p_int$** __map_value3___221;
    struct map$_char$p_int$** m1_222;
    struct map$_char$p_int$** m2_239;
    struct tuple1$_int$** tt1_240;
    struct tuple1$_char$ph** tt2_241;
    struct tuple1$_char$ph** tt3_243;
    struct tuple1$_int$** ttt1_244;
    struct tuple1$_char$ph** ttt2_245;
    struct tuple1$_char$ph** ttt3_246;
    struct tuple2$ph_char$ph_int$** __tuple_value2___247;
    struct tuple2$_char$ph_int$** t4_248;
    struct tuple2$ph_char$p_int$** __tuple_value3___249;
    struct tuple2$ph_char$p_int$** __tuple_value4___250;
    struct tuple2$ph_char$p_int$** __tuple_value5___251;
    struct tuple2$ph_char$p_int$** __tuple_value6___252;
    struct IA** ia_254;
    struct list$_IA$ph** liIA_257;
    struct tuple3$ph_int$_int$_bool$** __tuple_value7___269;
    int* aZZZ_270;
    int* bZZZ_271;
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
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int intp_fun(int* self);
struct sDataA* sDataA_initialize(struct sDataA* self, int a, int b);
static void sDataA_finalize(struct sDataA* self);
int sDataA_fun(struct sDataA* self, int a, int b);
void fun_default_parametor(int x, int y);
struct tuple2$ph_int$_bool$* fun_exception(int x, int y);
static struct tuple2$ph_int$_bool$* tuple2$_int$_bool$phintbool_initialize(struct tuple2$ph_int$_bool$* self, int v1, _Bool v2);
static void tuple2$ph_int$_bool$phintbool_finalize(struct tuple2$ph_int$_bool$* self);
static void tuple2$_int$_bool$phintbool_finalize(struct tuple2$_int$_bool$* self);
int main();
static void sData_finalize(struct sData* self);
void method_block1(struct __current_stack1__* parent);
static struct list$ph_char$ph* list$_char$phphcharph_initialize(struct list$ph_char$ph* self);
static void list$ph_char$phphcharph_finalize(struct list$p_char$ph* self);
static void list$_char$phphcharph_finalize(struct list$p_char$ph* self);
static void list$_char$phphcharph_push_back(struct list$p_char$ph* self, char* item);
static char* list$_char$phphcharph_begin(struct list$p_char$ph* self);
static _Bool list$_char$phphcharph_end(struct list$p_char$ph* self);
static char* list$_char$phphcharph_next(struct list$p_char$ph* self);
static struct list$ph_int$* list$_int$phint_initialize(struct list$ph_int$* self);
static void list$ph_int$phint_finalize(struct list$p_int$* self);
static void list$_int$phint_finalize(struct list$p_int$* self);
static void list$_int$phint_push_back(struct list$p_int$* self, int item);
static int list$_int$phint_begin(struct list$p_int$* self);
static _Bool list$_int$phint_end(struct list$p_int$* self);
static int list$_int$phint_next(struct list$p_int$* self);
static void list$_int$phint_each(struct list$p_int$* self, void* parent, void (*block)(void*,int,int,_Bool*));
void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3);
void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3);
static int list$_int$phint_item(struct list$p_int$* self, int position, int default_value);
static void list$_int$phint_insert(struct list$p_int$* self, int position, int item);
static void list$p_int$$p_int$pint_push_back(struct list$p_int$* self, int item);
static void list$_char$phphcharph_insert(struct list$p_char$ph* self, int position, char* item);
static void list$p_char$ph$p_char$phpcharph_push_back(struct list$p_char$ph* self, char* item);
static char* list$_char$phphcharph_item(struct list$p_char$ph* self, int position, char* default_value);
static void list$_char$phphcharph_reset(struct list$p_char$ph* self);
static void list_item$_char$ph$_char$phpcharph_finalize(struct list_item$_char$ph$_char$ph* self);
static int list$_char$phphcharph_length(struct list$p_char$ph* self);
static void list$_int$phint_delete(struct list$p_int$* self, int head, int tail);
static void list$p_int$$p_int$pint_reset(struct list$p_int$* self);
static void list_item$_int$$_int$pint_finalize(struct list_item$_int$$_int$* self);
static void list$ph_char$phphcharph_push_back(struct list$p_char$ph* self, char* item);
static void list$ph_char$phphcharph_replace(struct list$p_char$ph* self, int position, char* item);
static char* list$ph_char$phphcharph_item(struct list$p_char$ph* self, int position, char* default_value);
static void list$ph_int$phint_push_back(struct list$p_int$* self, int item);
static _Bool list$ph_int$phint_equals(struct list$p_int$* left, struct list$p_int$* right);
static int list$ph_int$phint_find(struct list$p_int$* self, int item, int default_value);
static struct list$ph_int$* list$ph_int$phint_sublist(struct list$p_int$* self, int begin, int tail);
static struct list$ph_int$* list$_int$$_int$phint_initialize(struct list$ph_int$* self);
static void list$_int$$_int$phint_finalize(struct list$p_int$* self);
static void list$ph_int$$ph_int$phint_finalize(struct list$p_int$* self);
static void list$_int$$_int$phint_push_back(struct list$p_int$* self, int item);
void method_block4(struct __current_stack4__* parent, int it, int it2, _Bool* it3);
static void list$_int$phint_operator_store_element(struct list$p_int$* self, int position, int item);
static void list$p_int$$p_int$pint_replace(struct list$p_int$* self, int position, int item);
static int list$_int$phint_operator_load_element(struct list$p_int$* self, int index);
static int list$p_int$$p_int$pint_item(struct list$p_int$* self, int position, int default_value);
static _Bool list$_int$phint_operator_equals(struct list$p_int$* self, struct list$p_int$* right);
static _Bool list$p_int$$p_int$pint_equals(struct list$p_int$* left, struct list$p_int$* right);
void method_block5(struct __current_stack5__* parent, int it, int it2, _Bool* it3);
static struct map$ph_char$p_int$* map$_char$p_int$phcharpint_initialize(struct map$ph_char$p_int$* self);
static struct list$ph_char$p* list$_char$pphcharp_initialize(struct list$ph_char$p* self);
static void list$ph_char$pphcharp_finalize(struct list$p_char$p* self);
static void list$_char$pphcharp_finalize(struct list$p_char$p* self);
static void list$ph_char$p$ph_char$pphcharp_finalize(struct list$p_char$p* self);
static void map$ph_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self);
static void list$ph_char$ppcharp_finalize(struct list$p_char$p* self);
static void map$_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self);
static void map$_char$p_int$phcharpint_insert(struct map$p_char$p_int$* self, char* key, int item);
static void map$p_char$p_int$$p_char$p_int$pcharpint_rehash(struct map$p_char$p_int$* self);
static char* map$p_char$p_int$$p_char$p_int$pcharpint_begin(struct map$p_char$p_int$* self);
static _Bool map$p_char$p_int$$p_char$p_int$pcharpint_end(struct map$p_char$p_int$* self);
static char* map$p_char$p_int$$p_char$p_int$pcharpint_next(struct map$p_char$p_int$* self);
static int map$p_char$p_int$$p_char$p_int$pcharpint_at(struct map$p_char$p_int$* self, char* key, int default_value);
static char* list$ph_char$p$ph_char$pphcharp_begin(struct list$p_char$p* self);
static _Bool list$ph_char$p$ph_char$pphcharp_end(struct list$p_char$p* self);
static char* list$ph_char$p$ph_char$pphcharp_next(struct list$p_char$p* self);
static void list$ph_char$p$ph_char$pphcharp_push_back(struct list$p_char$p* self, char* item);
static _Bool map$_char$p_int$phcharpint_operator_equals(struct map$p_char$p_int$* left, struct map$p_char$p_int$* right);
static _Bool map$p_char$p_int$$p_char$p_int$pcharpint_equals(struct map$p_char$p_int$* left, struct map$p_char$p_int$* right);
static char* list$ph_char$p$ph_char$pphcharp_item(struct list$p_char$p* self, int position, char* default_value);
static int map$_char$p_int$phcharpint_operator_load_element(struct map$p_char$p_int$* self, char* key);
static struct map$ph_char$p_int$* map$_char$p_int$phcharpint_clone(struct map$p_char$p_int$* self);
static struct map$ph_char$p_int$* map$_char$p_int$$_char$p_int$phcharpint_initialize(struct map$ph_char$p_int$* self);
static struct list$ph_char$p* list$_char$p$_char$pphcharp_initialize(struct list$ph_char$p* self);
static void list$_char$p$_char$pphcharp_finalize(struct list$p_char$p* self);
static void map$_char$p_int$$_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self);
static void map$ph_char$p_int$$ph_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self);
static void map$ph_char$p_int$$ph_char$p_int$phcharpint_insert2(struct map$p_char$p_int$* self, char* key, int item);
static struct tuple1$ph_int$* tuple1$_int$phint_initialize(struct tuple1$ph_int$* self, int v1);
static void tuple1$ph_int$phint_finalize(struct tuple1$ph_int$* self);
static void tuple1$_int$phint_finalize(struct tuple1$_int$* self);
static struct tuple1$ph_char$ph* tuple1$_char$phphcharph_initialize(struct tuple1$ph_char$ph* self, char* v1);
static void tuple1$ph_char$phphcharph_finalize(struct tuple1$ph_char$ph* self);
static void tuple1$_char$phphcharph_finalize(struct tuple1$_char$ph* self);
static struct tuple1$_char$ph* tuple1$_char$phphcharph_clone(struct tuple1$_char$ph* self);
static void tuple1$_char$phph_finalize(struct tuple1$_char$ph* self);
static _Bool tuple1$_char$phphcharph_equals(struct tuple1$_char$ph* left, struct tuple1$_char$ph* right);
static _Bool tuple1$_char$phphcharph_operator_equals(struct tuple1$_char$ph* left, struct tuple1$_char$ph* right);
static struct tuple2$ph_char$ph_int$* tuple2$_char$ph_int$phcharphint_initialize(struct tuple2$ph_char$ph_int$* self, char* v1, int v2);
static void tuple2$ph_char$ph_int$phcharphint_finalize(struct tuple2$ph_char$ph_int$* self);
static void tuple2$_char$ph_int$phcharphint_finalize(struct tuple2$_char$ph_int$* self);
static struct tuple2$ph_char$p_int$* tuple2$_char$p_int$phcharpint_initialize(struct tuple2$ph_char$p_int$* self, char* v1, int v2);
static void tuple2$ph_char$p_int$phcharpint_finalize(struct tuple2$ph_char$p_int$* self);
static void tuple2$_char$p_int$phcharpint_finalize(struct tuple2$_char$p_int$* self);
static _Bool tuple2$ph_char$p_int$phcharpint_equals(struct tuple2$ph_char$p_int$* left, struct tuple2$ph_char$p_int$* right);
static _Bool tuple2$ph_char$p_int$phcharpint_operator_equals(struct tuple2$ph_char$p_int$* left, struct tuple2$ph_char$p_int$* right);
static _Bool tuple2$ph_char$p_int$phcharpint_operator_not_equals(struct tuple2$ph_char$p_int$* left, struct tuple2$ph_char$p_int$* right);
static struct sDataA* sDataA_clone(struct sDataA* self);
static struct list$ph_IA$ph* list$_IA$phphIAph_initialize(struct list$ph_IA$ph* self);
static void list$ph_IA$phphIAph_finalize(struct list$p_IA$ph* self);
static void list$_IA$phphIAph_finalize(struct list$p_IA$ph* self);
static void list$_IA$phphIAph_push_back(struct list$p_IA$ph* self, struct IA* item);
static struct IA* list$_IA$phphIAph_begin(struct list$p_IA$ph* self);
static _Bool list$_IA$phphIAph_end(struct list$p_IA$ph* self);
static struct IA* list$_IA$phphIAph_next(struct list$p_IA$ph* self);
static struct tuple3$ph_int$_int$_bool$* tuple3$_int$_int$_bool$phintintbool_initialize(struct tuple3$ph_int$_int$_bool$* self, int v1, int v2, _Bool v3);
static void tuple3$ph_int$_int$_bool$phintintbool_finalize(struct tuple3$ph_int$_int$_bool$* self);
static void tuple3$_int$_int$_bool$phintintbool_finalize(struct tuple3$_int$_int$_bool$* self);
static int tuple2$ph_int$_bool$phintbool_catch(struct tuple2$p_int$_bool$* self, void* parent, void (*block)(void*));
void method_block6(struct __current_stack6__* parent);
static _Bool list$_char$phphcharph_operator_equals(struct list$p_char$ph* self, struct list$p_char$ph* right);
static _Bool list$p_char$ph$p_char$phpcharph_equals(struct list$p_char$ph* left, struct list$p_char$ph* right);

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









































int* funHeap(int x, int y){
void* right_value13;
int* result_36;
memset(&result_36, 0, sizeof(int*));
    result_36=(int*)come_increment_ref_count((int*)(right_value13=(int*)come_calloc(1, sizeof(int)*1)));
    right_value13 = come_decrement_ref_count(right_value13, 1, 0);
    *result_36=x+y;
    int* __result__ = result_36;
    result_36 = come_decrement_ref_count(result_36, 0, 1);
    return __result__;
}

int funHeap2(int* x, int* y){
    int __result__ = *x+*y;
    x = come_decrement_ref_count(x, 0, 1);
    y = come_decrement_ref_count(y, 0, 1);
    return __result__;
}

int intp_fun(int* self){
    int __result__ = *self;
    return __result__;
}

struct sDataA* sDataA_initialize(struct sDataA* self, int a, int b){
    self->a=a;
    self->b=b;
    struct sDataA* __result__ = self;
    call_finalizer(sDataA_finalize,self,0, 0, 1);
    return __result__;
}

static void sDataA_finalize(struct sDataA* self){
}

int sDataA_fun(struct sDataA* self, int a, int b){
    int __result__ = self->a+self->b+a+b;
    return __result__;
}

void fun_default_parametor(int x, int y){
    xassert("default parametor",x==1&&y==2);
}

struct tuple2$ph_int$_bool$* fun_exception(int x, int y){
void* right_value14;
void* right_value15;
struct tuple2$ph_int$_bool$* __tuple_value1___37;
memset(&__tuple_value1___37, 0, sizeof(struct tuple2$ph_int$_bool$*));
    __tuple_value1___37=(struct tuple2$ph_int$_bool$*)come_increment_ref_count((struct tuple2$ph_int$_bool$*)(right_value15=tuple2$_int$_bool$phintbool_initialize((struct tuple2$_int$_bool$*)come_increment_ref_count((struct tuple2$_int$_bool$*)(right_value14=(struct tuple2$_int$_bool$*)come_calloc(1, sizeof(struct tuple2$_int$_bool$)*1))),x+y,(_Bool)1)));
    call_finalizer(tuple2$_int$_bool$phintbool_finalize,right_value14,0, 1, 0);
    call_finalizer(tuple2$ph_int$_bool$phintbool_finalize,right_value15,0, 1, 0);
    struct tuple2$ph_int$_bool$* __result__ = __tuple_value1___37;
    call_finalizer(tuple2$ph_int$_bool$phintbool_finalize,__tuple_value1___37,0, 0, 1);
    return __result__;
}

static struct tuple2$ph_int$_bool$* tuple2$_int$_bool$phintbool_initialize(struct tuple2$ph_int$_bool$* self, int v1, _Bool v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$ph_int$_bool$* __result__ = self;
        call_finalizer(tuple2$ph_int$_bool$phintbool_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple2$ph_int$_bool$phintbool_finalize(struct tuple2$ph_int$_bool$* self){
}

static void tuple2$_int$_bool$phintbool_finalize(struct tuple2$_int$_bool$* self){
}

int main(){
void* right_value16;
char* a_38;
char* p_39;
void* p2_40;
int count_41;
int size2_42;
char* mem2_43;
int b_44;
int* a_45;
int a2_46;
int b_47;
int n_48;
void* right_value17;
char* ax_49;
void* right_value18;
char* a_50;
char* b_51;
struct sData data_52;
void* right_value19;
char* str_53;
void* right_value20;
struct sData* data_54;
void* right_value21;
void* right_value22;
void* right_value23;
int* axyz_55;
void* right_value24;
int* xxx_56;
void* right_value25;
int* yyy_57;
void* right_value26;
int* zzz_58;
void* right_value27;
int bzyz_59;
int* azyz_60;
int n_61;
struct __current_stack1__ __current_stack1__;
void* right_value28;
void* right_value29;
struct list$_char$ph* liX_64;
void* right_value33;
void* right_value34;
void* right_value35;
char* it_71;
void* right_value36;
void* right_value37;
struct list$_int$* liX2_75;
int it_82;
int aX_84;
struct __current_stack2__ __current_stack2__;
int aXYZY_88;
void* right_value41;
void* right_value42;
struct list$_char$ph* li_89;
void* right_value43;
void* right_value44;
void* right_value45;
char* it_90;
void* right_value46;
void* right_value47;
struct list$_int$* li2_91;
int it_92;
int aXL_93;
struct __current_stack3__ __current_stack3__;
void* right_value60;
void* right_value61;
void* right_value62;
struct list$ph_char$ph* li3_130;
void* right_value66;
void* right_value67;
void* right_value68;
void* right_value69;
void* right_value70;
void* right_value71;
struct list$ph_int$* li4_138;
void* right_value75;
void* right_value76;
struct list$ph_int$* li5_142;
void* right_value77;
void* right_value78;
struct list$ph_int$* li6_147;
void* right_value84;
int* axyzX_158;
void* right_value85;
void* right_value86;
void* right_value87;
void* right_value88;
void* right_value89;
char* strXYXY_159;
void* right_value90;
void* right_value91;
struct list$_int$* liZ_160;
struct __current_stack4__ __current_stack4__;
void* right_value92;
void* right_value93;
struct list$_int$* liZ2_166;
void* right_value94;
void* right_value95;
struct list$_int$* __list_value1___169;
void* right_value96;
void* right_value97;
struct list$_int$* __list_value2___170;
void* right_value98;
void* right_value99;
struct list$_int$* __list_value3___171;
struct __current_stack5__ __current_stack5__;
void* right_value100;
void* right_value106;
struct map$_char$p_int$* __map_value1___183;
void* right_value113;
void* right_value114;
struct map$_char$p_int$* __map_value2___210;
void* right_value115;
void* right_value116;
struct map$_char$p_int$* __map_value3___221;
struct map$_char$p_int$* m1_222;
struct map$_char$p_int$* m2_239;
void* right_value124;
void* right_value125;
struct tuple1$_int$* tt1_240;
void* right_value126;
void* right_value127;
void* right_value128;
struct tuple1$_char$ph* tt2_241;
void* right_value129;
struct tuple1$_char$ph* tt3_243;
void* right_value131;
void* right_value132;
struct tuple1$_int$* ttt1_244;
void* right_value133;
void* right_value134;
void* right_value135;
struct tuple1$_char$ph* ttt2_245;
void* right_value136;
struct tuple1$_char$ph* ttt3_246;
void* right_value137;
void* right_value138;
void* right_value139;
struct tuple2$ph_char$ph_int$* __tuple_value2___247;
struct tuple2$_char$ph_int$* t4_248;
void* right_value140;
void* right_value141;
void* right_value142;
struct tuple2$ph_char$p_int$* __tuple_value3___249;
void* right_value143;
void* right_value144;
struct tuple2$ph_char$p_int$* __tuple_value4___250;
void* right_value145;
void* right_value146;
struct tuple2$ph_char$p_int$* __tuple_value5___251;
void* right_value147;
void* right_value148;
struct tuple2$ph_char$p_int$* __tuple_value6___252;
void* right_value149;
void* right_value150;
struct IA* _inf_value1;
struct sDataA* _inf_obj_value1;
void* right_value152;
struct IA** _inf_valueX1;
struct IA* ia_254;
void* right_value153;
void* right_value154;
struct list$_IA$ph* liIA_257;
void* right_value158;
void* right_value159;
struct IA* _inf_value2;
struct sDataA* _inf_obj_value2;
void* right_value161;
struct IA** _inf_valueX5;
void* right_value162;
void* right_value163;
struct IA* _inf_value3;
struct sDataA* _inf_obj_value3;
void* right_value165;
struct IA** _inf_valueX6;
void* right_value166;
void* right_value167;
struct IA* _inf_value4;
struct sDataA* _inf_obj_value4;
void* right_value169;
struct IA** _inf_valueX7;
struct IA* it_267;
void* right_value170;
void* right_value171;
struct tuple3$ph_int$_int$_bool$* __tuple_value7___269;
int aZZZ_270;
int bZZZ_271;
void* right_value172;
struct __current_stack6__ __current_stack6__;
int xZZZZZZZZ_272;
void* right_value173;
void* right_value174;
struct list$_char$ph* li_str_273;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
struct list$_char$ph* __list_value4___274;
void* right_value180;
void* right_value181;
void* right_value182;
memset(&a_38, 0, sizeof(char*));
memset(&p_39, 0, sizeof(char*));
memset(&p2_40, 0, sizeof(void*));
memset(&count_41, 0, sizeof(int));
memset(&size2_42, 0, sizeof(int));
memset(&mem2_43, 0, sizeof(char*));
memset(&b_44, 0, sizeof(int));
memset(&a_45, 0, sizeof(int*));
memset(&a2_46, 0, sizeof(int));
memset(&b_47, 0, sizeof(int));
memset(&n_48, 0, sizeof(int));
memset(&ax_49, 0, sizeof(char*));
memset(&a_50, 0, sizeof(char*));
memset(&b_51, 0, sizeof(char*));
memset(&data_52, 0, sizeof(struct sData));
memset(&str_53, 0, sizeof(char*));
memset(&data_54, 0, sizeof(struct sData*));
memset(&axyz_55, 0, sizeof(int*));
memset(&xxx_56, 0, sizeof(int*));
memset(&yyy_57, 0, sizeof(int*));
memset(&zzz_58, 0, sizeof(int*));
memset(&bzyz_59, 0, sizeof(int));
memset(&azyz_60, 0, sizeof(int*));
memset(&n_61, 0, sizeof(int));
memset(&liX_64, 0, sizeof(struct list$_char$ph*));
memset(&it_71, 0, sizeof(char*));
memset(&liX2_75, 0, sizeof(struct list$_int$*));
memset(&it_82, 0, sizeof(int));
memset(&aX_84, 0, sizeof(int));
memset(&aXYZY_88, 0, sizeof(int));
memset(&li_89, 0, sizeof(struct list$_char$ph*));
memset(&it_90, 0, sizeof(char*));
memset(&li2_91, 0, sizeof(struct list$_int$*));
memset(&it_92, 0, sizeof(int));
memset(&aXL_93, 0, sizeof(int));
memset(&li3_130, 0, sizeof(struct list$ph_char$ph*));
memset(&li4_138, 0, sizeof(struct list$ph_int$*));
memset(&li5_142, 0, sizeof(struct list$ph_int$*));
memset(&li6_147, 0, sizeof(struct list$ph_int$*));
memset(&axyzX_158, 0, sizeof(int*));
memset(&strXYXY_159, 0, sizeof(char*));
memset(&liZ_160, 0, sizeof(struct list$_int$*));
memset(&liZ2_166, 0, sizeof(struct list$_int$*));
memset(&__list_value1___169, 0, sizeof(struct list$_int$*));
memset(&__list_value2___170, 0, sizeof(struct list$_int$*));
memset(&__list_value3___171, 0, sizeof(struct list$_int$*));
memset(&__map_value1___183, 0, sizeof(struct map$_char$p_int$*));
memset(&__map_value2___210, 0, sizeof(struct map$_char$p_int$*));
memset(&__map_value3___221, 0, sizeof(struct map$_char$p_int$*));
memset(&m1_222, 0, sizeof(struct map$_char$p_int$*));
memset(&m2_239, 0, sizeof(struct map$_char$p_int$*));
memset(&tt1_240, 0, sizeof(struct tuple1$_int$*));
memset(&tt2_241, 0, sizeof(struct tuple1$_char$ph*));
memset(&tt3_243, 0, sizeof(struct tuple1$_char$ph*));
memset(&ttt1_244, 0, sizeof(struct tuple1$_int$*));
memset(&ttt2_245, 0, sizeof(struct tuple1$_char$ph*));
memset(&ttt3_246, 0, sizeof(struct tuple1$_char$ph*));
memset(&__tuple_value2___247, 0, sizeof(struct tuple2$ph_char$ph_int$*));
memset(&t4_248, 0, sizeof(struct tuple2$_char$ph_int$*));
memset(&__tuple_value3___249, 0, sizeof(struct tuple2$ph_char$p_int$*));
memset(&__tuple_value4___250, 0, sizeof(struct tuple2$ph_char$p_int$*));
memset(&__tuple_value5___251, 0, sizeof(struct tuple2$ph_char$p_int$*));
memset(&__tuple_value6___252, 0, sizeof(struct tuple2$ph_char$p_int$*));
memset(&ia_254, 0, sizeof(struct IA*));
memset(&liIA_257, 0, sizeof(struct list$_IA$ph*));
memset(&it_267, 0, sizeof(struct IA*));
memset(&__tuple_value7___269, 0, sizeof(struct tuple3$ph_int$_int$_bool$*));
memset(&aZZZ_270, 0, sizeof(int));
memset(&aZZZ_270, 0, sizeof(int));
memset(&aZZZ_270, 0, sizeof(int));
memset(&bZZZ_271, 0, sizeof(int));
memset(&xZZZZZZZZ_272, 0, sizeof(int));
memset(&li_str_273, 0, sizeof(struct list$_char$ph*));
memset(&__list_value4___274, 0, sizeof(struct list$_char$ph*));
    if(1) {
        a_38=(char*)come_increment_ref_count((char**)(right_value16=(char**)come_calloc(1, sizeof(char*)*1*128)));
        right_value16 = come_decrement_ref_count(right_value16, 1, 0);
        a_38 = come_decrement_ref_count(a_38, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_39="ABC";
    p2_40="ABC";
    printf("%s\n",(char*)p2_40);
    printf("%c\n",*p_39);
    count_41=0;
    size2_42=1;
    mem2_43=calloc(1,sizeof(int)+sizeof(long)+count_41*size2_42);
    free(mem2_43);
    a_45=&b_44;
    (*a_45)=123;
    a2_46=123;
    if((_Bool)1) {
        b_47=234;
        n_48=0;
        while(n_48<3) {
            printf("a %d\n",a2_46);
            printf("b %d\n",b_47);
            n_48++;
        }
    }
    ax_49=(char*)come_increment_ref_count((char**)(right_value17=(char**)come_calloc(1, sizeof(char*)*1*128)));
    right_value17 = come_decrement_ref_count(right_value17, 1, 0);
    if(1) {
        a_50=(char*)come_increment_ref_count((char**)(right_value18=(char**)come_calloc(1, sizeof(char*)*1*128)));
        right_value18 = come_decrement_ref_count(right_value18, 1, 0);
        b_51=(char*)come_increment_ref_count(a_50);
        if(data_52.a) {(char*)come_decrement_ref_count(data_52.a,0,0); }
        data_52.a=(char*)come_increment_ref_count(a_50);
        a_50 = come_decrement_ref_count(a_50, 0, 0);
        b_51 = come_decrement_ref_count(b_51, 0, 0);
        call_finalizer(sData_finalize,(&data_52),1, 0, 0);
    }
    str_53=(char*)come_increment_ref_count((char**)(right_value19=(char**)come_calloc(1, sizeof(char*)*1*128)));
    right_value19 = come_decrement_ref_count(right_value19, 1, 0);
    strncpy(str_53,"ABC",128);
    data_54=(struct sData*)come_increment_ref_count((struct sData*)(right_value20=(struct sData*)come_calloc(1, sizeof(struct sData)*1)));
    call_finalizer(sData_finalize,right_value20,0, 1, 0);
    if(data_54->a) {(char*)come_decrement_ref_count(data_54->a,0,0); }
    data_54->a=(char*)come_increment_ref_count(str_53);
    puts(data_54->a);
    (int*)(right_value21=funHeap(7,7));
    right_value21 = come_decrement_ref_count(right_value21, 1, 0);
    xassert("right value test",*(int*)(right_value22=funHeap(3,4))==7);
    right_value22 = come_decrement_ref_count(right_value22, 1, 0);
    axyz_55=(int*)come_increment_ref_count((int*)(right_value23=funHeap(1,2)));
    right_value23 = come_decrement_ref_count(right_value23, 1, 0);
    xassert("variable test",*axyz_55==3);
    xxx_56=(int*)come_increment_ref_count((int*)(right_value24=(int*)come_calloc(1, sizeof(int)*1)));
    right_value24 = come_decrement_ref_count(right_value24, 1, 0);
    *xxx_56=1;
    yyy_57=(int*)come_increment_ref_count((int*)(right_value25=(int*)come_calloc(1, sizeof(int)*1)));
    right_value25 = come_decrement_ref_count(right_value25, 1, 0);
    *yyy_57=2;
    xassert("heap",funHeap2((int*)come_increment_ref_count(xxx_56),(int*)come_increment_ref_count(yyy_57))==3);
    zzz_58=(int*)come_increment_ref_count((int*)(right_value26=(int*)come_calloc(1, sizeof(int)*1)));
    right_value26 = come_decrement_ref_count(right_value26, 1, 0);
    (int*)(right_value27=(int*)come_calloc(1, sizeof(int)*1));
    right_value27 = come_decrement_ref_count(right_value27, 1, 0);
    bzyz_59=123;
    azyz_60=&bzyz_59;
    xassert("impl",intp_fun(azyz_60)==123);
    n_61=0;
    __current_stack1__.p_39 = &p_39;
    __current_stack1__.p2_40 = &p2_40;
    __current_stack1__.count_41 = &count_41;
    __current_stack1__.size2_42 = &size2_42;
    __current_stack1__.mem2_43 = &mem2_43;
    __current_stack1__.b_44 = &b_44;
    __current_stack1__.a_45 = &a_45;
    __current_stack1__.a2_46 = &a2_46;
    __current_stack1__.ax_49 = &ax_49;
    __current_stack1__.str_53 = &str_53;
    __current_stack1__.data_54 = &data_54;
    __current_stack1__.axyz_55 = &axyz_55;
    __current_stack1__.xxx_56 = &xxx_56;
    __current_stack1__.yyy_57 = &yyy_57;
    __current_stack1__.zzz_58 = &zzz_58;
    __current_stack1__.bzyz_59 = &bzyz_59;
    __current_stack1__.azyz_60 = &azyz_60;
    __current_stack1__.n_61 = &n_61;
    int_times(3,&__current_stack1__,method_block1);
    liX_64=(struct list$ph_char$ph*)come_increment_ref_count((struct list$ph_char$ph*)(right_value29=list$_char$phphcharph_initialize((struct list$_char$ph*)come_increment_ref_count((struct list$_char$ph*)(right_value28=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value28,0, 1, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,right_value29,0, 1, 0);
    list$_char$phphcharph_push_back(liX_64,(char*)come_increment_ref_count((char*)(right_value33=__builtin_string("ABC"))));
    right_value33 = come_decrement_ref_count(right_value33, 1, 0);
    list$_char$phphcharph_push_back(liX_64,(char*)come_increment_ref_count((char*)(right_value34=__builtin_string("DEF"))));
    right_value34 = come_decrement_ref_count(right_value34, 1, 0);
    list$_char$phphcharph_push_back(liX_64,(char*)come_increment_ref_count((char*)(right_value35=__builtin_string("GHI"))));
    right_value35 = come_decrement_ref_count(right_value35, 1, 0);
    for(
    it_71=list$_char$phphcharph_begin((liX_64));
    !list$_char$phphcharph_end((liX_64));
    it_71=list$_char$phphcharph_next((liX_64))
    ){
        printf("%s\n",it_71);
    }
    liX2_75=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value37=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value36=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value36,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value37,0, 1, 0);
    list$_int$phint_push_back(liX2_75,1);
    list$_int$phint_push_back(liX2_75,2);
    list$_int$phint_push_back(liX2_75,3);
    for(
    it_82=list$_int$phint_begin((liX2_75));
    !list$_int$phint_end((liX2_75));
    it_82=list$_int$phint_next((liX2_75))
    ){
        printf("%d\n",it_82);
    }
    aX_84=123;
    __current_stack2__.p_39 = &p_39;
    __current_stack2__.p2_40 = &p2_40;
    __current_stack2__.count_41 = &count_41;
    __current_stack2__.size2_42 = &size2_42;
    __current_stack2__.mem2_43 = &mem2_43;
    __current_stack2__.b_44 = &b_44;
    __current_stack2__.a_45 = &a_45;
    __current_stack2__.a2_46 = &a2_46;
    __current_stack2__.ax_49 = &ax_49;
    __current_stack2__.str_53 = &str_53;
    __current_stack2__.data_54 = &data_54;
    __current_stack2__.axyz_55 = &axyz_55;
    __current_stack2__.xxx_56 = &xxx_56;
    __current_stack2__.yyy_57 = &yyy_57;
    __current_stack2__.zzz_58 = &zzz_58;
    __current_stack2__.bzyz_59 = &bzyz_59;
    __current_stack2__.azyz_60 = &azyz_60;
    __current_stack2__.n_61 = &n_61;
    __current_stack2__.liX_64 = &liX_64;
    __current_stack2__.liX2_75 = &liX2_75;
    __current_stack2__.aX_84 = &aX_84;
    list$_int$phint_each(liX2_75,&__current_stack2__,method_block2);
    xassert("method_block test",aX_84==2);
    xassert("var initialize test",aXYZY_88==0);
    li_89=(struct list$ph_char$ph*)come_increment_ref_count((struct list$ph_char$ph*)(right_value42=list$_char$phphcharph_initialize((struct list$_char$ph*)come_increment_ref_count((struct list$_char$ph*)(right_value41=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value41,0, 1, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,right_value42,0, 1, 0);
    list$_char$phphcharph_push_back(li_89,(char*)come_increment_ref_count((char*)(right_value43=__builtin_string("ABC"))));
    right_value43 = come_decrement_ref_count(right_value43, 1, 0);
    list$_char$phphcharph_push_back(li_89,(char*)come_increment_ref_count((char*)(right_value44=__builtin_string("DEF"))));
    right_value44 = come_decrement_ref_count(right_value44, 1, 0);
    list$_char$phphcharph_push_back(li_89,(char*)come_increment_ref_count((char*)(right_value45=__builtin_string("GHI"))));
    right_value45 = come_decrement_ref_count(right_value45, 1, 0);
    for(
    it_90=list$_char$phphcharph_begin((li_89));
    !list$_char$phphcharph_end((li_89));
    it_90=list$_char$phphcharph_next((li_89))
    ){
        printf("%s\n",it_90);
    }
    li2_91=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value47=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value46=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value46,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value47,0, 1, 0);
    list$_int$phint_push_back(li2_91,1);
    list$_int$phint_push_back(li2_91,2);
    list$_int$phint_push_back(li2_91,3);
    for(
    it_92=list$_int$phint_begin((li2_91));
    !list$_int$phint_end((li2_91));
    it_92=list$_int$phint_next((li2_91))
    ){
        printf("%d\n",it_92);
    }
    aXL_93=123;
    __current_stack3__.p_39 = &p_39;
    __current_stack3__.p2_40 = &p2_40;
    __current_stack3__.count_41 = &count_41;
    __current_stack3__.size2_42 = &size2_42;
    __current_stack3__.mem2_43 = &mem2_43;
    __current_stack3__.b_44 = &b_44;
    __current_stack3__.a_45 = &a_45;
    __current_stack3__.a2_46 = &a2_46;
    __current_stack3__.ax_49 = &ax_49;
    __current_stack3__.str_53 = &str_53;
    __current_stack3__.data_54 = &data_54;
    __current_stack3__.axyz_55 = &axyz_55;
    __current_stack3__.xxx_56 = &xxx_56;
    __current_stack3__.yyy_57 = &yyy_57;
    __current_stack3__.zzz_58 = &zzz_58;
    __current_stack3__.bzyz_59 = &bzyz_59;
    __current_stack3__.azyz_60 = &azyz_60;
    __current_stack3__.n_61 = &n_61;
    __current_stack3__.liX_64 = &liX_64;
    __current_stack3__.liX2_75 = &liX2_75;
    __current_stack3__.aX_84 = &aX_84;
    __current_stack3__.aXYZY_88 = &aXYZY_88;
    __current_stack3__.li_89 = &li_89;
    __current_stack3__.li2_91 = &li2_91;
    __current_stack3__.aXL_93 = &aXL_93;
    list$_int$phint_each(li2_91,&__current_stack3__,method_block3);
    xassert("var of method block",aXL_93==2);
    xassert("list::item",list$_int$phint_item(li2_91,0,-1)==1);
    list$_int$phint_insert(li2_91,1,5);
    xassert("list::insert",list$_int$phint_item(li2_91,0,-1)==1&&list$_int$phint_item(li2_91,1,-1)==5&&list$_int$phint_item(li2_91,2,-1)==2&&list$_int$phint_item(li2_91,3,-1)==3);
    list$_char$phphcharph_insert(li_89,1,(char*)come_increment_ref_count((char*)(right_value60=__builtin_string("GGG"))));
    right_value60 = come_decrement_ref_count(right_value60, 1, 0);
    xassert("list::insert",strcmp(list$_char$phphcharph_item(li_89,0,-1),"ABC")==0&&strcmp(list$_char$phphcharph_item(li_89,1,-1),"GGG")==0&&strcmp(list$_char$phphcharph_item(li_89,2,-1),"DEF")==0&&strcmp(list$_char$phphcharph_item(li_89,3,-1),"GHI")==0);
    list$_char$phphcharph_reset(li_89);
    xassert("list::reset",list$_char$phphcharph_length(li_89)==0);
    list$_int$phint_delete(li2_91,0,1);
    xassert("list::delete",list$_int$phint_item(li2_91,0,-1)==5&&list$_int$phint_item(li2_91,1,-1)==2&&list$_int$phint_item(li2_91,2,-1)==3);
    li3_130=(struct list$ph_char$ph*)come_increment_ref_count((struct list$ph_char$ph*)(right_value62=list$_char$phphcharph_initialize((struct list$_char$ph*)come_increment_ref_count((struct list$_char$ph*)(right_value61=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value61,0, 1, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,right_value62,0, 1, 0);
    list$ph_char$phphcharph_push_back(li3_130,(char*)come_increment_ref_count((char*)(right_value66=__builtin_string("AAA"))));
    right_value66 = come_decrement_ref_count(right_value66, 1, 0);
    list$ph_char$phphcharph_push_back(li3_130,(char*)come_increment_ref_count((char*)(right_value67=__builtin_string("BBB"))));
    right_value67 = come_decrement_ref_count(right_value67, 1, 0);
    list$ph_char$phphcharph_push_back(li3_130,(char*)come_increment_ref_count((char*)(right_value68=__builtin_string("CCC"))));
    right_value68 = come_decrement_ref_count(right_value68, 1, 0);
    list$ph_char$phphcharph_replace(li3_130,0,(char*)come_increment_ref_count((char*)(right_value69=__builtin_string("ABC"))));
    right_value69 = come_decrement_ref_count(right_value69, 1, 0);
    xassert("list::replace",strcmp(list$ph_char$phphcharph_item(li3_130,0,((void*)0)),"ABC")==0&&strcmp(list$ph_char$phphcharph_item(li3_130,1,((void*)0)),"BBB")==0&&strcmp(list$ph_char$phphcharph_item(li3_130,2,((void*)0)),"CCC")==0);
    li4_138=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value71=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value70=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value70,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value71,0, 1, 0);
    list$ph_int$phint_push_back(li4_138,1);
    list$ph_int$phint_push_back(li4_138,3);
    list$ph_int$phint_push_back(li4_138,5);
    li5_142=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value76=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value75=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value75,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value76,0, 1, 0);
    list$ph_int$phint_push_back(li5_142,1);
    list$ph_int$phint_push_back(li5_142,3);
    list$ph_int$phint_push_back(li5_142,5);
    xassert("list::equals",list$ph_int$phint_equals(li4_138,li5_142));
    xassert("list::find",list$ph_int$phint_find(li4_138,5,-1)==2);
    li6_147=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value78=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value77=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value77,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value78,0, 1, 0);
    list$ph_int$phint_push_back(li6_147,3);
    list$ph_int$phint_push_back(li6_147,5);
    xassert("list::sublist",list$ph_int$phint_equals((struct list$ph_int$*)(right_value84=list$ph_int$phint_sublist(li5_142,1,-1)),li6_147));
    call_finalizer(list$ph_int$phint_finalize,right_value84,0, 1, 0);
    if(axyzX_158) {(int*)come_decrement_ref_count(axyzX_158,0,0); }
    axyzX_158=(int*)come_increment_ref_count((int*)(right_value85=(int*)come_calloc(1, sizeof(int)*1)));
    right_value85 = come_decrement_ref_count(right_value85, 1, 0);
    if(axyzX_158) {(int*)come_decrement_ref_count(axyzX_158,0,0); }
    axyzX_158=(int*)come_increment_ref_count((int*)(right_value86=(int*)come_calloc(1, sizeof(int)*1)));
    right_value86 = come_decrement_ref_count(right_value86, 1, 0);
    xassert("operator equals",string_operator_equals((char*)(right_value87=__builtin_string("AAA")),(char*)(right_value88=__builtin_string("AAA"))));
    right_value87 = come_decrement_ref_count(right_value87, 1, 0);
    right_value88 = come_decrement_ref_count(right_value88, 1, 0);
    xassert("operator test",string_operator_equals((char*)(right_value89=charp_operator_add("AAA","BBB")),"AAABBB"));
    right_value89 = come_decrement_ref_count(right_value89, 1, 0);
    strXYXY_159="ABC";
    xassert("operator test",*(strXYXY_159+1)==66);
    liZ_160=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value91=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value90=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value90,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value91,0, 1, 0);
    list$_int$phint_push_back(liZ_160,1);
    list$_int$phint_push_back(liZ_160,2);
    list$_int$phint_push_back(liZ_160,3);
    __current_stack4__.p_39 = &p_39;
    __current_stack4__.p2_40 = &p2_40;
    __current_stack4__.count_41 = &count_41;
    __current_stack4__.size2_42 = &size2_42;
    __current_stack4__.mem2_43 = &mem2_43;
    __current_stack4__.b_44 = &b_44;
    __current_stack4__.a_45 = &a_45;
    __current_stack4__.a2_46 = &a2_46;
    __current_stack4__.ax_49 = &ax_49;
    __current_stack4__.str_53 = &str_53;
    __current_stack4__.data_54 = &data_54;
    __current_stack4__.axyz_55 = &axyz_55;
    __current_stack4__.xxx_56 = &xxx_56;
    __current_stack4__.yyy_57 = &yyy_57;
    __current_stack4__.zzz_58 = &zzz_58;
    __current_stack4__.bzyz_59 = &bzyz_59;
    __current_stack4__.azyz_60 = &azyz_60;
    __current_stack4__.n_61 = &n_61;
    __current_stack4__.liX_64 = &liX_64;
    __current_stack4__.liX2_75 = &liX2_75;
    __current_stack4__.aX_84 = &aX_84;
    __current_stack4__.aXYZY_88 = &aXYZY_88;
    __current_stack4__.li_89 = &li_89;
    __current_stack4__.li2_91 = &li2_91;
    __current_stack4__.aXL_93 = &aXL_93;
    __current_stack4__.li3_130 = &li3_130;
    __current_stack4__.li4_138 = &li4_138;
    __current_stack4__.li5_142 = &li5_142;
    __current_stack4__.li6_147 = &li6_147;
    __current_stack4__.axyzX_158 = &axyzX_158;
    __current_stack4__.strXYXY_159 = &strXYXY_159;
    __current_stack4__.liZ_160 = &liZ_160;
    list$_int$phint_each(liZ_160,&__current_stack4__,method_block4);
    list$_int$phint_operator_store_element(liZ_160,0,777);
    printf("liZ[0] %d\n",list$_int$phint_operator_load_element(liZ_160,0));
    liZ2_166=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value93=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value92=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value92,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value93,0, 1, 0);
    list$_int$phint_push_back(liZ2_166,777);
    list$_int$phint_push_back(liZ2_166,2);
    list$_int$phint_push_back(liZ2_166,3);
    xassert("list equals",list$_int$phint_operator_equals(liZ_160,liZ2_166));
    __list_value1___169=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value95=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value94=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value94,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value95,0, 1, 0);
    list$_int$phint_push_back(__list_value1___169,1);
    list$_int$phint_push_back(__list_value1___169,2);
    list$_int$phint_push_back(__list_value1___169,3);
    __list_value2___170=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value97=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value96=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value96,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value97,0, 1, 0);
    list$_int$phint_push_back(__list_value2___170,1);
    list$_int$phint_push_back(__list_value2___170,2);
    list$_int$phint_push_back(__list_value2___170,3);
    xassert("list equals test",list$_int$phint_operator_equals(__list_value1___169,__list_value2___170));
    __list_value3___171=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value99=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value98=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value98,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value99,0, 1, 0);
    list$_int$phint_push_back(__list_value3___171,1);
    list$_int$phint_push_back(__list_value3___171,2);
    list$_int$phint_push_back(__list_value3___171,3);
    list$_int$phint_push_back(__list_value3___171,4);
    list$_int$phint_push_back(__list_value3___171,5);
    __current_stack5__.p_39 = &p_39;
    __current_stack5__.p2_40 = &p2_40;
    __current_stack5__.count_41 = &count_41;
    __current_stack5__.size2_42 = &size2_42;
    __current_stack5__.mem2_43 = &mem2_43;
    __current_stack5__.b_44 = &b_44;
    __current_stack5__.a_45 = &a_45;
    __current_stack5__.a2_46 = &a2_46;
    __current_stack5__.ax_49 = &ax_49;
    __current_stack5__.str_53 = &str_53;
    __current_stack5__.data_54 = &data_54;
    __current_stack5__.axyz_55 = &axyz_55;
    __current_stack5__.xxx_56 = &xxx_56;
    __current_stack5__.yyy_57 = &yyy_57;
    __current_stack5__.zzz_58 = &zzz_58;
    __current_stack5__.bzyz_59 = &bzyz_59;
    __current_stack5__.azyz_60 = &azyz_60;
    __current_stack5__.n_61 = &n_61;
    __current_stack5__.liX_64 = &liX_64;
    __current_stack5__.liX2_75 = &liX2_75;
    __current_stack5__.aX_84 = &aX_84;
    __current_stack5__.aXYZY_88 = &aXYZY_88;
    __current_stack5__.li_89 = &li_89;
    __current_stack5__.li2_91 = &li2_91;
    __current_stack5__.aXL_93 = &aXL_93;
    __current_stack5__.li3_130 = &li3_130;
    __current_stack5__.li4_138 = &li4_138;
    __current_stack5__.li5_142 = &li5_142;
    __current_stack5__.li6_147 = &li6_147;
    __current_stack5__.axyzX_158 = &axyzX_158;
    __current_stack5__.strXYXY_159 = &strXYXY_159;
    __current_stack5__.liZ_160 = &liZ_160;
    __current_stack5__.liZ2_166 = &liZ2_166;
    __current_stack5__.__list_value1___169 = &__list_value1___169;
    __current_stack5__.__list_value2___170 = &__list_value2___170;
    __current_stack5__.__list_value3___171 = &__list_value3___171;
    list$_int$phint_each(__list_value3___171,&__current_stack5__,method_block5);
    __map_value1___183=(struct map$ph_char$p_int$*)come_increment_ref_count((struct map$ph_char$p_int$*)(right_value106=map$_char$p_int$phcharpint_initialize((struct map$_char$p_int$*)come_increment_ref_count((struct map$_char$p_int$*)(right_value100=(struct map$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$)*1))))));
    call_finalizer(map$_char$p_int$phcharpint_finalize,right_value100,0, 1, 0);
    call_finalizer(map$ph_char$p_int$phcharpint_finalize,right_value106,0, 1, 0);
    map$_char$p_int$phcharpint_insert(__map_value1___183,"AAA",1);
    map$_char$p_int$phcharpint_insert(__map_value1___183,"BBB",2);
    __map_value2___210=(struct map$ph_char$p_int$*)come_increment_ref_count((struct map$ph_char$p_int$*)(right_value114=map$_char$p_int$phcharpint_initialize((struct map$_char$p_int$*)come_increment_ref_count((struct map$_char$p_int$*)(right_value113=(struct map$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$)*1))))));
    call_finalizer(map$_char$p_int$phcharpint_finalize,right_value113,0, 1, 0);
    call_finalizer(map$ph_char$p_int$phcharpint_finalize,right_value114,0, 1, 0);
    map$_char$p_int$phcharpint_insert(__map_value2___210,"AAA",1);
    map$_char$p_int$phcharpint_insert(__map_value2___210,"BBB",2);
    xassert("map equals",map$_char$p_int$phcharpint_operator_equals(__map_value1___183,__map_value2___210));
    __map_value3___221=(struct map$ph_char$p_int$*)come_increment_ref_count((struct map$ph_char$p_int$*)(right_value116=map$_char$p_int$phcharpint_initialize((struct map$_char$p_int$*)come_increment_ref_count((struct map$_char$p_int$*)(right_value115=(struct map$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$)*1))))));
    call_finalizer(map$_char$p_int$phcharpint_finalize,right_value115,0, 1, 0);
    call_finalizer(map$ph_char$p_int$phcharpint_finalize,right_value116,0, 1, 0);
    map$_char$p_int$phcharpint_insert(__map_value3___221,"AAA",1);
    map$_char$p_int$phcharpint_insert(__map_value3___221,"BBB",2);
    m1_222=(struct map$_char$p_int$*)come_increment_ref_count(__map_value3___221);
    printf("%d %d\n",map$_char$p_int$phcharpint_operator_load_element(m1_222,"AAA"),map$_char$p_int$phcharpint_operator_load_element(m1_222,"BBB"));
    m2_239=(struct map$_char$p_int$*)come_increment_ref_count(map$_char$p_int$phcharpint_clone(m1_222));
    printf("%d %d\n",map$_char$p_int$phcharpint_operator_load_element(m2_239,"AAA"),map$_char$p_int$phcharpint_operator_load_element(m2_239,"BBB"));
    xassert("map clone",map$_char$p_int$phcharpint_operator_equals(m1_222,m2_239));
    tt1_240=(struct tuple1$ph_int$*)come_increment_ref_count((struct tuple1$ph_int$*)(right_value125=tuple1$_int$phint_initialize((struct tuple1$_int$*)come_increment_ref_count((struct tuple1$_int$*)(right_value124=(struct tuple1$_int$*)come_calloc(1, sizeof(struct tuple1$_int$)*1))),1)));
    call_finalizer(tuple1$_int$phint_finalize,right_value124,0, 1, 0);
    call_finalizer(tuple1$ph_int$phint_finalize,right_value125,0, 1, 0);
    tt1_240->v1=111;
    printf("%d\n",tt1_240->v1);
    tt2_241=(struct tuple1$ph_char$ph*)come_increment_ref_count((struct tuple1$ph_char$ph*)(right_value128=tuple1$_char$phphcharph_initialize((struct tuple1$_char$ph*)come_increment_ref_count((struct tuple1$_char$ph*)(right_value126=(struct tuple1$_char$ph*)come_calloc(1, sizeof(struct tuple1$_char$ph)*1))),(char*)come_increment_ref_count((char*)(right_value127=__builtin_string("ABC"))))));
    call_finalizer(tuple1$_char$phphcharph_finalize,right_value126,0, 1, 0);
    right_value127 = come_decrement_ref_count(right_value127, 1, 0);
    call_finalizer(tuple1$ph_char$phphcharph_finalize,right_value128,0, 1, 0);
    if(tt2_241->v1) {(char*)come_decrement_ref_count(tt2_241->v1,0,0); }
    tt2_241->v1=(char*)come_increment_ref_count((char*)(right_value129=__builtin_string("DEF")));
    right_value129 = come_decrement_ref_count(right_value129, 1, 0);
    printf("%s\n",tt2_241->v1);
    tt3_243=(struct tuple1$_char$ph*)come_increment_ref_count(tuple1$_char$phphcharph_clone(tt2_241));
    printf("(%s)\n",tt3_243->v1);
    ttt1_244=(struct tuple1$ph_int$*)come_increment_ref_count((struct tuple1$ph_int$*)(right_value132=tuple1$_int$phint_initialize((struct tuple1$_int$*)come_increment_ref_count((struct tuple1$_int$*)(right_value131=(struct tuple1$_int$*)come_calloc(1, sizeof(struct tuple1$_int$)*1))),1)));
    call_finalizer(tuple1$_int$phint_finalize,right_value131,0, 1, 0);
    call_finalizer(tuple1$ph_int$phint_finalize,right_value132,0, 1, 0);
    ttt1_244->v1=111;
    printf("%d\n",ttt1_244->v1);
    ttt2_245=(struct tuple1$ph_char$ph*)come_increment_ref_count((struct tuple1$ph_char$ph*)(right_value135=tuple1$_char$phphcharph_initialize((struct tuple1$_char$ph*)come_increment_ref_count((struct tuple1$_char$ph*)(right_value133=(struct tuple1$_char$ph*)come_calloc(1, sizeof(struct tuple1$_char$ph)*1))),(char*)come_increment_ref_count((char*)(right_value134=__builtin_string("ABC"))))));
    call_finalizer(tuple1$_char$phphcharph_finalize,right_value133,0, 1, 0);
    right_value134 = come_decrement_ref_count(right_value134, 1, 0);
    call_finalizer(tuple1$ph_char$phphcharph_finalize,right_value135,0, 1, 0);
    if(ttt2_245->v1) {(char*)come_decrement_ref_count(ttt2_245->v1,0,0); }
    ttt2_245->v1=(char*)come_increment_ref_count((char*)(right_value136=__builtin_string("DEF")));
    right_value136 = come_decrement_ref_count(right_value136, 1, 0);
    printf("%s\n",ttt2_245->v1);
    ttt3_246=(struct tuple1$_char$ph*)come_increment_ref_count(tuple1$_char$phphcharph_clone(ttt2_245));
    printf("(%s)\n",ttt3_246->v1);
    xassert("tuple test",tuple1$_char$phphcharph_operator_equals(ttt2_245,ttt3_246));
    __tuple_value2___247=(struct tuple2$ph_char$ph_int$*)come_increment_ref_count((struct tuple2$ph_char$ph_int$*)(right_value139=tuple2$_char$ph_int$phcharphint_initialize((struct tuple2$_char$ph_int$*)come_increment_ref_count((struct tuple2$_char$ph_int$*)(right_value137=(struct tuple2$_char$ph_int$*)come_calloc(1, sizeof(struct tuple2$_char$ph_int$)*1))),(char*)come_increment_ref_count((char*)(right_value138=__builtin_string("ABC"))),5)));
    call_finalizer(tuple2$_char$ph_int$phcharphint_finalize,right_value137,0, 1, 0);
    right_value138 = come_decrement_ref_count(right_value138, 1, 0);
    call_finalizer(tuple2$ph_char$ph_int$phcharphint_finalize,right_value139,0, 1, 0);
    t4_248=(struct tuple2$ph_char$ph_int$*)come_increment_ref_count(__tuple_value2___247);
    xassert("tuple test",string_operator_equals(t4_248->v1,(char*)(right_value140=__builtin_string("ABC")))&&t4_248->v2==5);
    right_value140 = come_decrement_ref_count(right_value140, 1, 0);
    __tuple_value3___249=(struct tuple2$ph_char$p_int$*)come_increment_ref_count((struct tuple2$ph_char$p_int$*)(right_value142=tuple2$_char$p_int$phcharpint_initialize((struct tuple2$_char$p_int$*)come_increment_ref_count((struct tuple2$_char$p_int$*)(right_value141=(struct tuple2$_char$p_int$*)come_calloc(1, sizeof(struct tuple2$_char$p_int$)*1))),"AAA",7)));
    call_finalizer(tuple2$_char$p_int$phcharpint_finalize,right_value141,0, 1, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,right_value142,0, 1, 0);
    __tuple_value4___250=(struct tuple2$ph_char$p_int$*)come_increment_ref_count((struct tuple2$ph_char$p_int$*)(right_value144=tuple2$_char$p_int$phcharpint_initialize((struct tuple2$_char$p_int$*)come_increment_ref_count((struct tuple2$_char$p_int$*)(right_value143=(struct tuple2$_char$p_int$*)come_calloc(1, sizeof(struct tuple2$_char$p_int$)*1))),"AAA",7)));
    call_finalizer(tuple2$_char$p_int$phcharpint_finalize,right_value143,0, 1, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,right_value144,0, 1, 0);
    xassert("tuple testX",tuple2$ph_char$p_int$phcharpint_operator_equals(__tuple_value3___249,__tuple_value4___250));
    __tuple_value5___251=(struct tuple2$ph_char$p_int$*)come_increment_ref_count((struct tuple2$ph_char$p_int$*)(right_value146=tuple2$_char$p_int$phcharpint_initialize((struct tuple2$_char$p_int$*)come_increment_ref_count((struct tuple2$_char$p_int$*)(right_value145=(struct tuple2$_char$p_int$*)come_calloc(1, sizeof(struct tuple2$_char$p_int$)*1))),"AAA",8)));
    call_finalizer(tuple2$_char$p_int$phcharpint_finalize,right_value145,0, 1, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,right_value146,0, 1, 0);
    __tuple_value6___252=(struct tuple2$ph_char$p_int$*)come_increment_ref_count((struct tuple2$ph_char$p_int$*)(right_value148=tuple2$_char$p_int$phcharpint_initialize((struct tuple2$_char$p_int$*)come_increment_ref_count((struct tuple2$_char$p_int$*)(right_value147=(struct tuple2$_char$p_int$*)come_calloc(1, sizeof(struct tuple2$_char$p_int$)*1))),"AAA",7)));
    call_finalizer(tuple2$_char$p_int$phcharpint_finalize,right_value147,0, 1, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,right_value148,0, 1, 0);
    xassert("tuple testX",tuple2$ph_char$p_int$phcharpint_operator_not_equals(__tuple_value5___251,__tuple_value6___252));
    _inf_value1=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value1=(struct sDataA*)(right_value150=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value149=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*1))),111,222));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sDataA_finalize;
    _inf_value1->clone=sDataA_clone;
    _inf_value1->fun=sDataA_fun;
    _inf_valueX1=(struct IA*)come_increment_ref_count((struct IA*)(right_value152=_inf_value1));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value152=_inf_value1))->_protocol_obj);
    ia_254=_inf_valueX1;
    call_finalizer(sDataA_finalize,right_value149,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value150,0, 1, 0);
    call_finalizer(((struct IA*)right_value152)->finalize, ((struct IA*)right_value152)->_protocol_obj,0, 1, 0);
    right_value152 = come_decrement_ref_count(right_value152, 1, 0);
    printf("%d\n",ia_254->fun(ia_254->_protocol_obj,0,0));
    liIA_257=(struct list$ph_IA$ph*)come_increment_ref_count((struct list$ph_IA$ph*)(right_value154=list$_IA$phphIAph_initialize((struct list$_IA$ph*)come_increment_ref_count((struct list$_IA$ph*)(right_value153=(struct list$_IA$ph*)come_calloc(1, sizeof(struct list$_IA$ph)*1))))));
    call_finalizer(list$_IA$phphIAph_finalize,right_value153,0, 1, 0);
    call_finalizer(list$ph_IA$phphIAph_finalize,right_value154,0, 1, 0);
    _inf_value2=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value2=(struct sDataA*)(right_value159=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value158=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*1))),1,1));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=sDataA_finalize;
    _inf_value2->clone=sDataA_clone;
    _inf_value2->fun=sDataA_fun;
    _inf_valueX5=(struct IA*)come_increment_ref_count((struct IA*)(right_value161=_inf_value2));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value161=_inf_value2))->_protocol_obj);
    list$_IA$phphIAph_push_back(liIA_257,_inf_valueX5);
    call_finalizer(sDataA_finalize,right_value158,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value159,0, 1, 0);
    call_finalizer(((struct IA*)right_value161)->finalize, ((struct IA*)right_value161)->_protocol_obj,0, 1, 0);
    right_value161 = come_decrement_ref_count(right_value161, 1, 0);
    _inf_value3=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value3=(struct sDataA*)(right_value163=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value162=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*1))),2,2));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=sDataA_finalize;
    _inf_value3->clone=sDataA_clone;
    _inf_value3->fun=sDataA_fun;
    _inf_valueX6=(struct IA*)come_increment_ref_count((struct IA*)(right_value165=_inf_value3));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value165=_inf_value3))->_protocol_obj);
    list$_IA$phphIAph_push_back(liIA_257,_inf_valueX6);
    call_finalizer(sDataA_finalize,right_value162,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value163,0, 1, 0);
    call_finalizer(((struct IA*)right_value165)->finalize, ((struct IA*)right_value165)->_protocol_obj,0, 1, 0);
    right_value165 = come_decrement_ref_count(right_value165, 1, 0);
    _inf_value4=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value4=(struct sDataA*)(right_value167=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value166=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*1))),3,3));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=sDataA_finalize;
    _inf_value4->clone=sDataA_clone;
    _inf_value4->fun=sDataA_fun;
    _inf_valueX7=(struct IA*)come_increment_ref_count((struct IA*)(right_value169=_inf_value4));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value169=_inf_value4))->_protocol_obj);
    list$_IA$phphIAph_push_back(liIA_257,_inf_valueX7);
    call_finalizer(sDataA_finalize,right_value166,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value167,0, 1, 0);
    call_finalizer(((struct IA*)right_value169)->finalize, ((struct IA*)right_value169)->_protocol_obj,0, 1, 0);
    right_value169 = come_decrement_ref_count(right_value169, 1, 0);
    for(
    it_267=list$_IA$phphIAph_begin((liIA_257));
    !list$_IA$phphIAph_end((liIA_257));
    it_267=list$_IA$phphIAph_next((liIA_257))
    ){
        printf("%d\n",it_267->fun(it_267->_protocol_obj,0,0));
    }
    __tuple_value7___269=(struct tuple3$ph_int$_int$_bool$*)come_increment_ref_count((struct tuple3$ph_int$_int$_bool$*)(right_value171=tuple3$_int$_int$_bool$phintintbool_initialize((struct tuple3$_int$_int$_bool$*)come_increment_ref_count((struct tuple3$_int$_int$_bool$*)(right_value170=(struct tuple3$_int$_int$_bool$*)come_calloc(1, sizeof(struct tuple3$_int$_int$_bool$)*1))),1,2,(_Bool)0)));
    call_finalizer(tuple3$_int$_int$_bool$phintintbool_finalize,right_value170,0, 1, 0);
    call_finalizer(tuple3$ph_int$_int$_bool$phintintbool_finalize,right_value171,0, 1, 0);
    aZZZ_270=__tuple_value7___269->v1;
    bZZZ_271=__tuple_value7___269->v2;
    xassert("tuple test",aZZZ_270==1&&bZZZ_271==2);
    fun_default_parametor(1,2);
    __current_stack6__.p_39 = &p_39;
    __current_stack6__.p2_40 = &p2_40;
    __current_stack6__.count_41 = &count_41;
    __current_stack6__.size2_42 = &size2_42;
    __current_stack6__.mem2_43 = &mem2_43;
    __current_stack6__.b_44 = &b_44;
    __current_stack6__.a_45 = &a_45;
    __current_stack6__.a2_46 = &a2_46;
    __current_stack6__.ax_49 = &ax_49;
    __current_stack6__.str_53 = &str_53;
    __current_stack6__.data_54 = &data_54;
    __current_stack6__.axyz_55 = &axyz_55;
    __current_stack6__.xxx_56 = &xxx_56;
    __current_stack6__.yyy_57 = &yyy_57;
    __current_stack6__.zzz_58 = &zzz_58;
    __current_stack6__.bzyz_59 = &bzyz_59;
    __current_stack6__.azyz_60 = &azyz_60;
    __current_stack6__.n_61 = &n_61;
    __current_stack6__.liX_64 = &liX_64;
    __current_stack6__.liX2_75 = &liX2_75;
    __current_stack6__.aX_84 = &aX_84;
    __current_stack6__.aXYZY_88 = &aXYZY_88;
    __current_stack6__.li_89 = &li_89;
    __current_stack6__.li2_91 = &li2_91;
    __current_stack6__.aXL_93 = &aXL_93;
    __current_stack6__.li3_130 = &li3_130;
    __current_stack6__.li4_138 = &li4_138;
    __current_stack6__.li5_142 = &li5_142;
    __current_stack6__.li6_147 = &li6_147;
    __current_stack6__.axyzX_158 = &axyzX_158;
    __current_stack6__.strXYXY_159 = &strXYXY_159;
    __current_stack6__.liZ_160 = &liZ_160;
    __current_stack6__.liZ2_166 = &liZ2_166;
    __current_stack6__.__list_value1___169 = &__list_value1___169;
    __current_stack6__.__list_value2___170 = &__list_value2___170;
    __current_stack6__.__list_value3___171 = &__list_value3___171;
    __current_stack6__.__map_value1___183 = &__map_value1___183;
    __current_stack6__.__map_value2___210 = &__map_value2___210;
    __current_stack6__.__map_value3___221 = &__map_value3___221;
    __current_stack6__.m1_222 = &m1_222;
    __current_stack6__.m2_239 = &m2_239;
    __current_stack6__.tt1_240 = &tt1_240;
    __current_stack6__.tt2_241 = &tt2_241;
    __current_stack6__.tt3_243 = &tt3_243;
    __current_stack6__.ttt1_244 = &ttt1_244;
    __current_stack6__.ttt2_245 = &ttt2_245;
    __current_stack6__.ttt3_246 = &ttt3_246;
    __current_stack6__.__tuple_value2___247 = &__tuple_value2___247;
    __current_stack6__.t4_248 = &t4_248;
    __current_stack6__.__tuple_value3___249 = &__tuple_value3___249;
    __current_stack6__.__tuple_value4___250 = &__tuple_value4___250;
    __current_stack6__.__tuple_value5___251 = &__tuple_value5___251;
    __current_stack6__.__tuple_value6___252 = &__tuple_value6___252;
    __current_stack6__.ia_254 = &ia_254;
    __current_stack6__.liIA_257 = &liIA_257;
    __current_stack6__.__tuple_value7___269 = &__tuple_value7___269;
    __current_stack6__.aZZZ_270 = &aZZZ_270;
    __current_stack6__.bZZZ_271 = &bZZZ_271;
    xZZZZZZZZ_272=tuple2$ph_int$_bool$phintbool_catch((struct tuple2$ph_int$_bool$*)(right_value172=fun_exception(1,2)),&__current_stack6__,method_block6);
    call_finalizer(tuple2$ph_int$_bool$phintbool_finalize,right_value172,0, 1, 0);
    xassert("exception test",xZZZZZZZZ_272==3);
    li_str_273=(struct list$ph_char$ph*)come_increment_ref_count((struct list$ph_char$ph*)(right_value174=list$_char$phphcharph_initialize((struct list$_char$ph*)come_increment_ref_count((struct list$_char$ph*)(right_value173=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value173,0, 1, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,right_value174,0, 1, 0);
    list$_char$phphcharph_push_back(li_str_273,(char*)come_increment_ref_count((char*)(right_value175=__builtin_string("AAA"))));
    right_value175 = come_decrement_ref_count(right_value175, 1, 0);
    list$_char$phphcharph_push_back(li_str_273,(char*)come_increment_ref_count((char*)(right_value176=__builtin_string("BBB"))));
    right_value176 = come_decrement_ref_count(right_value176, 1, 0);
    list$_char$phphcharph_push_back(li_str_273,(char*)come_increment_ref_count((char*)(right_value177=__builtin_string("CCC"))));
    right_value177 = come_decrement_ref_count(right_value177, 1, 0);
    __list_value4___274=(struct list$ph_char$ph*)come_increment_ref_count((struct list$ph_char$ph*)(right_value179=list$_char$phphcharph_initialize((struct list$_char$ph*)come_increment_ref_count((struct list$_char$ph*)(right_value178=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value178,0, 1, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,right_value179,0, 1, 0);
    list$_char$phphcharph_push_back(__list_value4___274,(char*)come_increment_ref_count((char*)(right_value180=__builtin_string("AAA"))));
    right_value180 = come_decrement_ref_count(right_value180, 1, 0);
    list$_char$phphcharph_push_back(__list_value4___274,(char*)come_increment_ref_count((char*)(right_value181=__builtin_string("BBB"))));
    right_value181 = come_decrement_ref_count(right_value181, 1, 0);
    list$_char$phphcharph_push_back(__list_value4___274,(char*)come_increment_ref_count((char*)(right_value182=__builtin_string("CCC"))));
    right_value182 = come_decrement_ref_count(right_value182, 1, 0);
    xassert("list test",list$_char$phphcharph_operator_equals(li_str_273,__list_value4___274));
    int __result__ = 0;
    ax_49 = come_decrement_ref_count(ax_49, 0, 0);
    str_53 = come_decrement_ref_count(str_53, 0, 0);
    call_finalizer(sData_finalize,data_54,0, 0, 0);
    axyz_55 = come_decrement_ref_count(axyz_55, 0, 0);
    xxx_56 = come_decrement_ref_count(xxx_56, 0, 0);
    yyy_57 = come_decrement_ref_count(yyy_57, 0, 0);
    zzz_58 = come_decrement_ref_count(zzz_58, 0, 0);
    call_finalizer(list$_char$phphcharph_finalize,liX_64,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,liX2_75,0, 0, 0);
    call_finalizer(list$_char$phphcharph_finalize,li_89,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,li2_91,0, 0, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,li3_130,0, 0, 0);
    call_finalizer(list$ph_int$phint_finalize,li4_138,0, 0, 0);
    call_finalizer(list$ph_int$phint_finalize,li5_142,0, 0, 0);
    call_finalizer(list$ph_int$phint_finalize,li6_147,0, 0, 0);
    axyzX_158 = come_decrement_ref_count(axyzX_158, 0, 0);
    call_finalizer(list$_int$phint_finalize,liZ_160,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,liZ2_166,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,__list_value1___169,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,__list_value2___170,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,__list_value3___171,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,__map_value1___183,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,__map_value2___210,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,__map_value3___221,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,m1_222,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,m2_239,0, 0, 0);
    call_finalizer(tuple1$_int$phint_finalize,tt1_240,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,tt2_241,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,tt3_243,0, 0, 0);
    call_finalizer(tuple1$_int$phint_finalize,ttt1_244,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,ttt2_245,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,ttt3_246,0, 0, 0);
    call_finalizer(tuple2$ph_char$ph_int$phcharphint_finalize,__tuple_value2___247,0, 0, 0);
    call_finalizer(tuple2$_char$ph_int$phcharphint_finalize,t4_248,0, 0, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,__tuple_value3___249,0, 0, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,__tuple_value4___250,0, 0, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,__tuple_value5___251,0, 0, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,__tuple_value6___252,0, 0, 0);
    call_finalizer(((struct IA*)ia_254)->finalize, ((struct IA*)ia_254)->_protocol_obj,0, 0, 0);
    ia_254 = come_decrement_ref_count(ia_254, 0, 0);
    call_finalizer(list$_IA$phphIAph_finalize,liIA_257,0, 0, 0);
    call_finalizer(tuple3$ph_int$_int$_bool$phintintbool_finalize,__tuple_value7___269,0, 0, 0);
    call_finalizer(list$_char$phphcharph_finalize,li_str_273,0, 0, 0);
    call_finalizer(list$_char$phphcharph_finalize,__list_value4___274,0, 0, 0);
    return __result__;
}

static void sData_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_61)));
        (*(parent->n_61))++;
}

static struct list$ph_char$ph* list$_char$phphcharph_initialize(struct list$ph_char$ph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$ph_char$ph* __result__ = self;
        call_finalizer(list$ph_char$phphcharph_finalize,self,0, 0, 1);
        return __result__;
}

static void list$ph_char$phphcharph_finalize(struct list$p_char$ph* self){
struct list_item$_char$ph* it_62;
struct list_item$_char$ph* prev_it_63;
memset(&it_62, 0, sizeof(struct list_item$_char$ph*));
memset(&prev_it_63, 0, sizeof(struct list_item$_char$ph*));
            it_62=self->head;
            while(it_62!=((void*)0)) {
                if(1) {
                    it_62->item = come_decrement_ref_count(it_62->item, 0, 0);
                }
                prev_it_63=it_62;
                it_62=it_62->next;
                come_free_object(prev_it_63);
            }
}

static void list$_char$phphcharph_finalize(struct list$p_char$ph* self){
struct list_item$_char$ph$_char$ph* it_65;
struct list_item$_char$ph$_char$ph* prev_it_66;
memset(&it_65, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&prev_it_66, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        it_65=self->head;
        while(it_65!=((void*)0)) {
            if(1) {
                it_65->item = come_decrement_ref_count(it_65->item, 0, 0);
            }
            prev_it_66=it_65;
            it_65=it_65->next;
            come_free_object(prev_it_66);
        }
}

static void list$_char$phphcharph_push_back(struct list$p_char$ph* self, char* item){
void* right_value30;
struct list_item$_char$ph$_char$ph* litem_67;
void* right_value31;
struct list_item$_char$ph$_char$ph* litem_68;
void* right_value32;
struct list_item$_char$ph$_char$ph* litem_69;
memset(&litem_67, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_68, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_69, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        if(self->len==0) {
            litem_67=(struct list_item$_char$ph$_char$ph*)(right_value30=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_67->prev=((void*)0);
            litem_67->next=((void*)0);
            if(litem_67->item) {(char*)come_decrement_ref_count(litem_67->item,0,0); }
            litem_67->item=(char*)come_increment_ref_count(item);
            self->tail=litem_67;
            self->head=litem_67;
        }
        else if(self->len==1) {
            litem_68=(struct list_item$_char$ph$_char$ph*)(right_value31=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_68->prev=self->head;
            litem_68->next=((void*)0);
            if(litem_68->item) {(char*)come_decrement_ref_count(litem_68->item,0,0); }
            litem_68->item=(char*)come_increment_ref_count(item);
            self->tail=litem_68;
            self->head->next=litem_68;
        }
        else {
            litem_69=(struct list_item$_char$ph$_char$ph*)(right_value32=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_69->prev=self->tail;
            litem_69->next=((void*)0);
            if(litem_69->item) {(char*)come_decrement_ref_count(litem_69->item,0,0); }
            litem_69->item=(char*)come_increment_ref_count(item);
            self->tail->next=litem_69;
            self->tail=litem_69;
        }
        self->len++;
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$_char$phphcharph_begin(struct list$p_char$ph* self){
char* result_70;
memset(&result_70, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_70,0,sizeof(char*));
        char* __result__ = result_70;
        return __result__;
}

static _Bool list$_char$phphcharph_end(struct list$p_char$ph* self){
        struct list_item$p_char$ph* __result__ = self->it==((void*)0);
        return __result__;
}

static char* list$_char$phphcharph_next(struct list$p_char$ph* self){
char* result_72;
memset(&result_72, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_72,0,sizeof(char*));
        char* __result__ = result_72;
        return __result__;
}

static struct list$ph_int$* list$_int$phint_initialize(struct list$ph_int$* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$ph_int$* __result__ = self;
        call_finalizer(list$ph_int$phint_finalize,self,0, 0, 1);
        return __result__;
}

static void list$ph_int$phint_finalize(struct list$p_int$* self){
struct list_item$_int$* it_73;
struct list_item$_int$* prev_it_74;
memset(&it_73, 0, sizeof(struct list_item$_int$*));
memset(&prev_it_74, 0, sizeof(struct list_item$_int$*));
            it_73=self->head;
            while(it_73!=((void*)0)) {
                if(0) {
                }
                prev_it_74=it_73;
                it_73=it_73->next;
                come_free_object(prev_it_74);
            }
}

static void list$_int$phint_finalize(struct list$p_int$* self){
struct list_item$_int$$_int$* it_76;
struct list_item$_int$$_int$* prev_it_77;
memset(&it_76, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_77, 0, sizeof(struct list_item$_int$$_int$*));
        it_76=self->head;
        while(it_76!=((void*)0)) {
            if(0) {
            }
            prev_it_77=it_76;
            it_76=it_76->next;
            come_free_object(prev_it_77);
        }
}

static void list$_int$phint_push_back(struct list$p_int$* self, int item){
void* right_value38;
struct list_item$_int$$_int$* litem_78;
void* right_value39;
struct list_item$_int$$_int$* litem_79;
void* right_value40;
struct list_item$_int$$_int$* litem_80;
memset(&litem_78, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_79, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_80, 0, sizeof(struct list_item$_int$$_int$*));
        if(self->len==0) {
            litem_78=(struct list_item$_int$$_int$*)(right_value38=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_78->prev=((void*)0);
            litem_78->next=((void*)0);
            litem_78->item=item;
            self->tail=litem_78;
            self->head=litem_78;
        }
        else if(self->len==1) {
            litem_79=(struct list_item$_int$$_int$*)(right_value39=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_79->prev=self->head;
            litem_79->next=((void*)0);
            litem_79->item=item;
            self->tail=litem_79;
            self->head->next=litem_79;
        }
        else {
            litem_80=(struct list_item$_int$$_int$*)(right_value40=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_80->prev=self->tail;
            litem_80->next=((void*)0);
            litem_80->item=item;
            self->tail->next=litem_80;
            self->tail=litem_80;
        }
        self->len++;
}

static int list$_int$phint_begin(struct list$p_int$* self){
int result_81;
memset(&result_81, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_81,0,sizeof(int));
        int __result__ = result_81;
        return __result__;
}

static _Bool list$_int$phint_end(struct list$p_int$* self){
        struct list_item$p_int$* __result__ = self->it==((void*)0);
        return __result__;
}

static int list$_int$phint_next(struct list$p_int$* self){
int result_83;
memset(&result_83, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_83,0,sizeof(int));
        int __result__ = result_83;
        return __result__;
}

static void list$_int$phint_each(struct list$p_int$* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item$_int$$_int$* it_85;
int i_86;
_Bool end_flag_87;
memset(&it_85, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_86, 0, sizeof(int));
memset(&end_flag_87, 0, sizeof(_Bool));
        it_85=self->head;
        i_86=0;
        while(it_85!=((void*)0)) {
            end_flag_87=(_Bool)0;
            block(parent,it_85->item,i_86,&end_flag_87);
            if(end_flag_87==(_Bool)1) {
                break;
            }
            it_85=it_85->next;
            i_86++;
        }
}

void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_84)));
        (*(parent->aX_84))=2;
}

void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_93)));
        (*(parent->aXL_93))=2;
}

static int list$_int$phint_item(struct list$p_int$* self, int position, int default_value){
struct list_item$_int$$_int$* it_94;
int i_95;
memset(&it_94, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_95, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_94=self->head;
        i_95=0;
        while(it_94!=((void*)0)) {
            if(position==i_95) {
                int __result__ = it_94->item;
                return __result__;
            }
            it_94=it_94->next;
            i_95++;
        }
        int __result__ = default_value;
        return __result__;
}

static void list$_int$phint_insert(struct list$p_int$* self, int position, int item){
void* right_value51;
struct list_item$_int$$_int$* litem_99;
void* right_value52;
struct list_item$_int$$_int$* litem_100;
struct list_item$_int$$_int$* it_101;
int i_102;
void* right_value53;
struct list_item$_int$$_int$* litem_103;
memset(&litem_99, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_100, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it_101, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_102, 0, sizeof(int));
memset(&litem_103, 0, sizeof(struct list_item$_int$$_int$*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$p_int$$p_int$pint_push_back(self,item);
            return;
        }
        if(position==0) {
            litem_99=(struct list_item$_int$$_int$*)(right_value51=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_99->prev=((void*)0);
            litem_99->next=self->head;
            litem_99->item=item;
            self->head->prev=litem_99;
            self->head=litem_99;
            self->len++;
        }
        else if(self->len==1) {
            litem_100=(struct list_item$_int$$_int$*)(right_value52=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_100->prev=self->head;
            litem_100->next=self->tail;
            litem_100->item=item;
            self->tail->prev=litem_100;
            self->head->next=litem_100;
            self->len++;
        }
        else {
            it_101=self->head;
            i_102=0;
            while(it_101!=((void*)0)) {
                if(position==i_102) {
                    litem_103=(struct list_item$_int$$_int$*)(right_value53=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_103->prev=it_101->prev;
                    litem_103->next=it_101;
                    litem_103->item=item;
                    it_101->prev->next=litem_103;
                    it_101->prev=litem_103;
                    self->len++;
                }
                it_101=it_101->next;
                i_102++;
            }
        }
}

static void list$p_int$$p_int$pint_push_back(struct list$p_int$* self, int item){
void* right_value48;
struct list_item$_int$$_int$* litem_96;
void* right_value49;
struct list_item$_int$$_int$* litem_97;
void* right_value50;
struct list_item$_int$$_int$* litem_98;
memset(&litem_96, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_97, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_98, 0, sizeof(struct list_item$_int$$_int$*));
                if(self->len==0) {
                    litem_96=(struct list_item$_int$$_int$*)(right_value48=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_96->prev=((void*)0);
                    litem_96->next=((void*)0);
                    litem_96->item=item;
                    self->tail=litem_96;
                    self->head=litem_96;
                }
                else if(self->len==1) {
                    litem_97=(struct list_item$_int$$_int$*)(right_value49=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_97->prev=self->head;
                    litem_97->next=((void*)0);
                    litem_97->item=item;
                    self->tail=litem_97;
                    self->head->next=litem_97;
                }
                else {
                    litem_98=(struct list_item$_int$$_int$*)(right_value50=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_98->prev=self->tail;
                    litem_98->next=((void*)0);
                    litem_98->item=item;
                    self->tail->next=litem_98;
                    self->tail=litem_98;
                }
                self->len++;
}

static void list$_char$phphcharph_insert(struct list$p_char$ph* self, int position, char* item){
void* right_value57;
struct list_item$_char$ph$_char$ph* litem_107;
void* right_value58;
struct list_item$_char$ph$_char$ph* litem_108;
struct list_item$_char$ph$_char$ph* it_109;
int i_110;
void* right_value59;
struct list_item$_char$ph$_char$ph* litem_111;
memset(&litem_107, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_108, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&it_109, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_110, 0, sizeof(int));
memset(&litem_111, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$p_char$ph$p_char$phpcharph_push_back(self,(char*)come_increment_ref_count(item));
            return;
        }
        if(position==0) {
            litem_107=(struct list_item$_char$ph$_char$ph*)(right_value57=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_107->prev=((void*)0);
            litem_107->next=self->head;
            if(litem_107->item) {(char*)come_decrement_ref_count(litem_107->item,0,0); }
            litem_107->item=(char*)come_increment_ref_count(item);
            self->head->prev=litem_107;
            self->head=litem_107;
            self->len++;
        }
        else if(self->len==1) {
            litem_108=(struct list_item$_char$ph$_char$ph*)(right_value58=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_108->prev=self->head;
            litem_108->next=self->tail;
            if(litem_108->item) {(char*)come_decrement_ref_count(litem_108->item,0,0); }
            litem_108->item=(char*)come_increment_ref_count(item);
            self->tail->prev=litem_108;
            self->head->next=litem_108;
            self->len++;
        }
        else {
            it_109=self->head;
            i_110=0;
            while(it_109!=((void*)0)) {
                if(position==i_110) {
                    litem_111=(struct list_item$_char$ph$_char$ph*)(right_value59=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_111->prev=it_109->prev;
                    litem_111->next=it_109;
                    if(litem_111->item) {(char*)come_decrement_ref_count(litem_111->item,0,0); }
                    litem_111->item=(char*)come_increment_ref_count(item);
                    it_109->prev->next=litem_111;
                    it_109->prev=litem_111;
                    self->len++;
                }
                it_109=it_109->next;
                i_110++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static void list$p_char$ph$p_char$phpcharph_push_back(struct list$p_char$ph* self, char* item){
void* right_value54;
struct list_item$_char$ph$_char$ph* litem_104;
void* right_value55;
struct list_item$_char$ph$_char$ph* litem_105;
void* right_value56;
struct list_item$_char$ph$_char$ph* litem_106;
memset(&litem_104, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_105, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_106, 0, sizeof(struct list_item$_char$ph$_char$ph*));
                if(self->len==0) {
                    litem_104=(struct list_item$_char$ph$_char$ph*)(right_value54=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_104->prev=((void*)0);
                    litem_104->next=((void*)0);
                    if(litem_104->item) {(char*)come_decrement_ref_count(litem_104->item,0,0); }
                    litem_104->item=(char*)come_increment_ref_count(item);
                    self->tail=litem_104;
                    self->head=litem_104;
                }
                else if(self->len==1) {
                    litem_105=(struct list_item$_char$ph$_char$ph*)(right_value55=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_105->prev=self->head;
                    litem_105->next=((void*)0);
                    if(litem_105->item) {(char*)come_decrement_ref_count(litem_105->item,0,0); }
                    litem_105->item=(char*)come_increment_ref_count(item);
                    self->tail=litem_105;
                    self->head->next=litem_105;
                }
                else {
                    litem_106=(struct list_item$_char$ph$_char$ph*)(right_value56=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_106->prev=self->tail;
                    litem_106->next=((void*)0);
                    if(litem_106->item) {(char*)come_decrement_ref_count(litem_106->item,0,0); }
                    litem_106->item=(char*)come_increment_ref_count(item);
                    self->tail->next=litem_106;
                    self->tail=litem_106;
                }
                self->len++;
                item = come_decrement_ref_count(item, 0, 1);
}

static char* list$_char$phphcharph_item(struct list$p_char$ph* self, int position, char* default_value){
struct list_item$_char$ph$_char$ph* it_112;
int i_113;
memset(&it_112, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_113, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_112=self->head;
        i_113=0;
        while(it_112!=((void*)0)) {
            if(position==i_113) {
                char* __result__ = it_112->item;
                return __result__;
            }
            it_112=it_112->next;
            i_113++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list$_char$phphcharph_reset(struct list$p_char$ph* self){
struct list_item$_char$ph$_char$ph* it_114;
struct list_item$_char$ph$_char$ph* prev_it_115;
memset(&it_114, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&prev_it_115, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        it_114=self->head;
        while(it_114!=((void*)0)) {
            prev_it_115=it_114;
            it_114=it_114->next;
            call_finalizer(list_item$_char$ph$_char$phpcharph_finalize,prev_it_115,0, 0, 0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
}

static void list_item$_char$ph$_char$phpcharph_finalize(struct list_item$_char$ph$_char$ph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    self->item = come_decrement_ref_count(self->item, 0, 0);
                }
}

static int list$_char$phphcharph_length(struct list$p_char$ph* self){
        int __result__ = self->len;
        return __result__;
}

static void list$_int$phint_delete(struct list$p_int$* self, int head, int tail){
int tmp_116;
struct list_item$_int$$_int$* it_119;
int i_120;
struct list_item$_int$$_int$* prev_it_121;
struct list_item$_int$$_int$* it_122;
int i_123;
struct list_item$_int$$_int$* prev_it_124;
struct list_item$_int$$_int$* it_125;
struct list_item$_int$$_int$* head_prev_it_126;
struct list_item$_int$$_int$* tail_it_127;
int i_128;
struct list_item$_int$$_int$* prev_it_129;
memset(&tmp_116, 0, sizeof(int));
memset(&it_119, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_120, 0, sizeof(int));
memset(&prev_it_121, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it_122, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_123, 0, sizeof(int));
memset(&prev_it_124, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it_125, 0, sizeof(struct list_item$_int$$_int$*));
memset(&head_prev_it_126, 0, sizeof(struct list_item$_int$$_int$*));
memset(&tail_it_127, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_128, 0, sizeof(int));
memset(&prev_it_129, 0, sizeof(struct list_item$_int$$_int$*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_116=tail;
            tail=head;
            head=tmp_116;
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
            list$p_int$$p_int$pint_reset(self);
        }
        else if(head==0) {
            it_119=self->head;
            i_120=0;
            while(it_119!=((void*)0)) {
                if(i_120<tail) {
                    prev_it_121=it_119;
                    it_119=it_119->next;
                    i_120++;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_121,0, 0, 0);
                    self->len--;
                }
                else if(i_120==tail) {
                    self->head=it_119;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_119=it_119->next;
                    i_120++;
                }
            }
        }
        else if(tail==self->len) {
            it_122=self->head;
            i_123=0;
            while(it_122!=((void*)0)) {
                if(i_123==head) {
                    self->tail=it_122->prev;
                    self->tail->next=((void*)0);
                }
                if(i_123>=head) {
                    prev_it_124=it_122;
                    it_122=it_122->next;
                    i_123++;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_124,0, 0, 0);
                    self->len--;
                }
                else {
                    it_122=it_122->next;
                    i_123++;
                }
            }
        }
        else {
            it_125=self->head;
            head_prev_it_126=((void*)0);
            tail_it_127=((void*)0);
            i_128=0;
            while(it_125!=((void*)0)) {
                if(i_128==head) {
                    head_prev_it_126=it_125->prev;
                }
                if(i_128==tail) {
                    tail_it_127=it_125;
                }
                if(i_128>=head&&i_128<tail) {
                    prev_it_129=it_125;
                    it_125=it_125->next;
                    i_128++;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_129,0, 0, 0);
                    self->len--;
                }
                else {
                    it_125=it_125->next;
                    i_128++;
                }
            }
            if(head_prev_it_126!=((void*)0)) {
                head_prev_it_126->next=tail_it_127;
            }
            if(tail_it_127!=((void*)0)) {
                tail_it_127->prev=head_prev_it_126;
            }
        }
}

static void list$p_int$$p_int$pint_reset(struct list$p_int$* self){
struct list_item$_int$$_int$* it_117;
struct list_item$_int$$_int$* prev_it_118;
memset(&it_117, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_118, 0, sizeof(struct list_item$_int$$_int$*));
                it_117=self->head;
                while(it_117!=((void*)0)) {
                    prev_it_118=it_117;
                    it_117=it_117->next;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_118,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$_int$$_int$pint_finalize(struct list_item$_int$$_int$* self){
}

static void list$ph_char$phphcharph_push_back(struct list$p_char$ph* self, char* item){
void* right_value63;
struct list_item$_char$ph$_char$ph* litem_131;
void* right_value64;
struct list_item$_char$ph$_char$ph* litem_132;
void* right_value65;
struct list_item$_char$ph$_char$ph* litem_133;
memset(&litem_131, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_132, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_133, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        if(self->len==0) {
            litem_131=(struct list_item$_char$ph$_char$ph*)(right_value63=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_131->prev=((void*)0);
            litem_131->next=((void*)0);
            if(litem_131->item) {(char*)come_decrement_ref_count(litem_131->item,0,0); }
            litem_131->item=(char*)come_increment_ref_count(item);
            self->tail=litem_131;
            self->head=litem_131;
        }
        else if(self->len==1) {
            litem_132=(struct list_item$_char$ph$_char$ph*)(right_value64=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_132->prev=self->head;
            litem_132->next=((void*)0);
            if(litem_132->item) {(char*)come_decrement_ref_count(litem_132->item,0,0); }
            litem_132->item=(char*)come_increment_ref_count(item);
            self->tail=litem_132;
            self->head->next=litem_132;
        }
        else {
            litem_133=(struct list_item$_char$ph$_char$ph*)(right_value65=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_133->prev=self->tail;
            litem_133->next=((void*)0);
            if(litem_133->item) {(char*)come_decrement_ref_count(litem_133->item,0,0); }
            litem_133->item=(char*)come_increment_ref_count(item);
            self->tail->next=litem_133;
            self->tail=litem_133;
        }
        self->len++;
        item = come_decrement_ref_count(item, 0, 1);
}

static void list$ph_char$phphcharph_replace(struct list$p_char$ph* self, int position, char* item){
struct list_item$_char$ph$_char$ph* it_134;
int i_135;
memset(&it_134, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_135, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_134=self->head;
        i_135=0;
        while(it_134!=((void*)0)) {
            if(position==i_135) {
                if(it_134->item) {(char*)come_decrement_ref_count(it_134->item,0,0); }
                it_134->item=(char*)come_increment_ref_count(item);
                break;
            }
            it_134=it_134->next;
            i_135++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$ph_char$phphcharph_item(struct list$p_char$ph* self, int position, char* default_value){
struct list_item$_char$ph$_char$ph* it_136;
int i_137;
memset(&it_136, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_137, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_136=self->head;
        i_137=0;
        while(it_136!=((void*)0)) {
            if(position==i_137) {
                char* __result__ = it_136->item;
                return __result__;
            }
            it_136=it_136->next;
            i_137++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list$ph_int$phint_push_back(struct list$p_int$* self, int item){
void* right_value72;
struct list_item$_int$$_int$* litem_139;
void* right_value73;
struct list_item$_int$$_int$* litem_140;
void* right_value74;
struct list_item$_int$$_int$* litem_141;
memset(&litem_139, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_140, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_141, 0, sizeof(struct list_item$_int$$_int$*));
        if(self->len==0) {
            litem_139=(struct list_item$_int$$_int$*)(right_value72=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_139->prev=((void*)0);
            litem_139->next=((void*)0);
            litem_139->item=item;
            self->tail=litem_139;
            self->head=litem_139;
        }
        else if(self->len==1) {
            litem_140=(struct list_item$_int$$_int$*)(right_value73=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_140->prev=self->head;
            litem_140->next=((void*)0);
            litem_140->item=item;
            self->tail=litem_140;
            self->head->next=litem_140;
        }
        else {
            litem_141=(struct list_item$_int$$_int$*)(right_value74=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_141->prev=self->tail;
            litem_141->next=((void*)0);
            litem_141->item=item;
            self->tail->next=litem_141;
            self->tail=litem_141;
        }
        self->len++;
}

static _Bool list$ph_int$phint_equals(struct list$p_int$* left, struct list$p_int$* right){
struct list_item$_int$$_int$* it_143;
struct list_item$_int$$_int$* it2_144;
memset(&it_143, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it2_144, 0, sizeof(struct list_item$_int$$_int$*));
        if(left->len!=right->len) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        it_143=left->head;
        it2_144=right->head;
        while(it_143!=((void*)0)) {
            if(!int_equals(it_143->item,it2_144->item)) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_143=it_143->next;
            it2_144=it2_144->next;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static int list$ph_int$phint_find(struct list$p_int$* self, int item, int default_value){
int it2_145;
struct list_item$_int$$_int$* it_146;
memset(&it2_145, 0, sizeof(int));
memset(&it_146, 0, sizeof(struct list_item$_int$$_int$*));
        it2_145=0;
        it_146=self->head;
        while(it_146!=((void*)0)) {
            if(int_equals(it_146->item,item)) {
                int __result__ = it2_145;
                return __result__;
            }
            it2_145++;
            it_146=it_146->next;
        }
        int __result__ = default_value;
        return __result__;
}

static struct list$ph_int$* list$ph_int$phint_sublist(struct list$p_int$* self, int begin, int tail){
void* right_value79;
void* right_value80;
struct list$_int$$_int$* result_148;
struct list_item$_int$$_int$* it_153;
int i_154;
memset(&result_148, 0, sizeof(struct list$_int$$_int$*));
memset(&it_153, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_154, 0, sizeof(int));
        result_148=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value80=list$_int$$_int$phint_initialize((struct list$_int$$_int$*)come_increment_ref_count((struct list$_int$$_int$*)(right_value79=(struct list$_int$$_int$*)come_calloc(1, sizeof(struct list$_int$$_int$)*1))))));
        call_finalizer(list$_int$$_int$phint_finalize,right_value79,0, 1, 0);
        call_finalizer(list$ph_int$$ph_int$phint_finalize,right_value80,0, 1, 0);
        if(begin<0) {
            begin+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(begin<0) {
            begin=0;
        }
        if(tail>=self->len) {
            tail=self->len;
        }
        it_153=self->head;
        i_154=0;
        while(it_153!=((void*)0)) {
            if(i_154>=begin&&i_154<tail) {
                list$_int$$_int$phint_push_back(result_148,it_153->item);
            }
            it_153=it_153->next;
            i_154++;
        }
        struct list$_int$$_int$* __result__ = result_148;
        call_finalizer(list$_int$$_int$phint_finalize,result_148,0, 0, 1);
        return __result__;
}

static struct list$ph_int$* list$_int$$_int$phint_initialize(struct list$ph_int$* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$ph_int$* __result__ = self;
            call_finalizer(list$ph_int$phint_finalize,self,0, 0, 1);
            return __result__;
}

static void list$_int$$_int$phint_finalize(struct list$p_int$* self){
struct list_item$_int$$_int$* it_149;
struct list_item$_int$$_int$* prev_it_150;
memset(&it_149, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_150, 0, sizeof(struct list_item$_int$$_int$*));
            it_149=self->head;
            while(it_149!=((void*)0)) {
                if(0) {
                }
                prev_it_150=it_149;
                it_149=it_149->next;
                come_free_object(prev_it_150);
            }
}

static void list$ph_int$$ph_int$phint_finalize(struct list$p_int$* self){
struct list_item$_int$$_int$* it_151;
struct list_item$_int$$_int$* prev_it_152;
memset(&it_151, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_152, 0, sizeof(struct list_item$_int$$_int$*));
            it_151=self->head;
            while(it_151!=((void*)0)) {
                if(0) {
                }
                prev_it_152=it_151;
                it_151=it_151->next;
                come_free_object(prev_it_152);
            }
}

static void list$_int$$_int$phint_push_back(struct list$p_int$* self, int item){
void* right_value81;
struct list_item$_int$$_int$* litem_155;
void* right_value82;
struct list_item$_int$$_int$* litem_156;
void* right_value83;
struct list_item$_int$$_int$* litem_157;
memset(&litem_155, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_156, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_157, 0, sizeof(struct list_item$_int$$_int$*));
                    if(self->len==0) {
                        litem_155=(struct list_item$_int$$_int$*)(right_value81=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                        litem_155->prev=((void*)0);
                        litem_155->next=((void*)0);
                        litem_155->item=item;
                        self->tail=litem_155;
                        self->head=litem_155;
                    }
                    else if(self->len==1) {
                        litem_156=(struct list_item$_int$$_int$*)(right_value82=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                        litem_156->prev=self->head;
                        litem_156->next=((void*)0);
                        litem_156->item=item;
                        self->tail=litem_156;
                        self->head->next=litem_156;
                    }
                    else {
                        litem_157=(struct list_item$_int$$_int$*)(right_value83=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                        litem_157->prev=self->tail;
                        litem_157->next=((void*)0);
                        litem_157->item=item;
                        self->tail->next=litem_157;
                        self->tail=litem_157;
                    }
                    self->len++;
}

void method_block4(struct __current_stack4__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static void list$_int$phint_operator_store_element(struct list$p_int$* self, int position, int item){
        list$p_int$$p_int$pint_replace(self,position,item);
}

static void list$p_int$$p_int$pint_replace(struct list$p_int$* self, int position, int item){
struct list_item$_int$$_int$* it_161;
int i_162;
memset(&it_161, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_162, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_161=self->head;
            i_162=0;
            while(it_161!=((void*)0)) {
                if(position==i_162) {
                    it_161->item=item;
                    break;
                }
                it_161=it_161->next;
                i_162++;
            }
}

static int list$_int$phint_operator_load_element(struct list$p_int$* self, int index){
int default_value_163;
memset(&default_value_163, 0, sizeof(int));
        memset(&default_value_163,0,sizeof(int));
        int __result__ = list$p_int$$p_int$pint_item(self,index,default_value_163);
        return __result__;
}

static int list$p_int$$p_int$pint_item(struct list$p_int$* self, int position, int default_value){
struct list_item$_int$$_int$* it_164;
int i_165;
memset(&it_164, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_165, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_164=self->head;
            i_165=0;
            while(it_164!=((void*)0)) {
                if(position==i_165) {
                    int __result__ = it_164->item;
                    return __result__;
                }
                it_164=it_164->next;
                i_165++;
            }
            int __result__ = default_value;
            return __result__;
}

static _Bool list$_int$phint_operator_equals(struct list$p_int$* self, struct list$p_int$* right){
        _Bool __result__ = list$p_int$$p_int$pint_equals(self,right);
        return __result__;
}

static _Bool list$p_int$$p_int$pint_equals(struct list$p_int$* left, struct list$p_int$* right){
struct list_item$_int$$_int$* it_167;
struct list_item$_int$$_int$* it2_168;
memset(&it_167, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it2_168, 0, sizeof(struct list_item$_int$$_int$*));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_167=left->head;
            it2_168=right->head;
            while(it_167!=((void*)0)) {
                if(!int_equals(it_167->item,it2_168->item)) {
                    _Bool __result__ = (_Bool)0;
                    return __result__;
                }
                it_167=it_167->next;
                it2_168=it2_168->next;
            }
            _Bool __result__ = (_Bool)1;
            return __result__;
}

void method_block5(struct __current_stack5__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static struct map$ph_char$p_int$* map$_char$p_int$phcharpint_initialize(struct map$ph_char$p_int$* self){
void* right_value101;
void* right_value102;
void* right_value103;
int i_172;
void* right_value104;
void* right_value105;
memset(&i_172, 0, sizeof(int));
        self->keys=(char***)(right_value101=(char***)come_calloc(1, sizeof(char**)*1*128));
        self->items=(int**)(right_value102=(int**)come_calloc(1, sizeof(int*)*1*128));
        self->item_existance=(_Bool**)(right_value103=(_Bool**)come_calloc(1, sizeof(_Bool*)*1*128));
        for(
        i_172=0;
        i_172<128;
        i_172++
        ){
            self->item_existance[i_172]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        if(self->key_list) {(struct list$ph_char$p*)come_decrement_ref_count(self->key_list,0,0); }
        self->key_list=(struct list$ph_char$p*)come_increment_ref_count((struct list$ph_char$p*)(right_value105=list$_char$pphcharp_initialize((struct list$_char$p*)come_increment_ref_count((struct list$_char$p*)(right_value104=(struct list$_char$p*)come_calloc(1, sizeof(struct list$_char$p)*1))))));
        call_finalizer(list$_char$pphcharp_finalize,right_value104,0, 1, 0);
        call_finalizer(list$ph_char$p$ph_char$pphcharp_finalize,right_value105,0, 1, 0);
        self->it=0;
        struct map$ph_char$p_int$* __result__ = self;
        call_finalizer(map$ph_char$p_int$phcharpint_finalize,self,0, 0, 1);
        return __result__;
}

static struct list$ph_char$p* list$_char$pphcharp_initialize(struct list$ph_char$p* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$ph_char$p* __result__ = self;
            call_finalizer(list$ph_char$pphcharp_finalize,self,0, 0, 1);
            return __result__;
}

static void list$ph_char$pphcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p* it_173;
struct list_item$_char$p* prev_it_174;
memset(&it_173, 0, sizeof(struct list_item$_char$p*));
memset(&prev_it_174, 0, sizeof(struct list_item$_char$p*));
                it_173=self->head;
                while(it_173!=((void*)0)) {
                    if(0) {
                        it_173->item = come_decrement_ref_count(it_173->item, 0, 0);
                    }
                    prev_it_174=it_173;
                    it_173=it_173->next;
                    come_free_object(prev_it_174);
                }
}

static void list$_char$pphcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p$_char$p* it_175;
struct list_item$_char$p$_char$p* prev_it_176;
memset(&it_175, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_176, 0, sizeof(struct list_item$_char$p$_char$p*));
            it_175=self->head;
            while(it_175!=((void*)0)) {
                if(0) {
                    it_175->item = come_decrement_ref_count(it_175->item, 0, 0);
                }
                prev_it_176=it_175;
                it_175=it_175->next;
                come_free_object(prev_it_176);
            }
}

static void list$ph_char$p$ph_char$pphcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p$_char$p* it_177;
struct list_item$_char$p$_char$p* prev_it_178;
memset(&it_177, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_178, 0, sizeof(struct list_item$_char$p$_char$p*));
            it_177=self->head;
            while(it_177!=((void*)0)) {
                if(0) {
                    it_177->item = come_decrement_ref_count(it_177->item, 0, 0);
                }
                prev_it_178=it_177;
                it_177=it_177->next;
                come_free_object(prev_it_178);
            }
}

static void map$ph_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_179;
int i_180;
memset(&i_179, 0, sizeof(int));
memset(&i_180, 0, sizeof(int));
            for(
            i_179=0;
            i_179<self->size;
            i_179++
            ){
                if(self->item_existance[i_179]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_180=0;
            i_180<self->size;
            i_180++
            ){
                if(self->item_existance[i_180]) {
                    if(0) {
                        self->keys[i_180] = come_decrement_ref_count(self->keys[i_180], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void list$ph_char$ppcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p$_char$p* it_181;
struct list_item$_char$p$_char$p* prev_it_182;
memset(&it_181, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_182, 0, sizeof(struct list_item$_char$p$_char$p*));
                it_181=self->head;
                while(it_181!=((void*)0)) {
                    if(0) {
                        it_181->item = come_decrement_ref_count(it_181->item, 0, 0);
                    }
                    prev_it_182=it_181;
                    it_181=it_181->next;
                    come_free_object(prev_it_182);
                }
}

static void map$_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_184;
int i_185;
memset(&i_184, 0, sizeof(int));
memset(&i_185, 0, sizeof(int));
        for(
        i_184=0;
        i_184<self->size;
        i_184++
        ){
            if(self->item_existance[i_184]) {
                if(0) {
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
                if(0) {
                    self->keys[i_185] = come_decrement_ref_count(self->keys[i_185], 0, 0);
                }
            }
        }
        come_free_object((char*)self->keys);
        call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
        self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$_char$p_int$phcharpint_insert(struct map$p_char$p_int$* self, char* key, int item){
int hash_201;
int it_202;
_Bool same_key_exist_203;
char* it2_205;
memset(&hash_201, 0, sizeof(int));
memset(&it_202, 0, sizeof(int));
memset(&same_key_exist_203, 0, sizeof(_Bool));
memset(&it2_205, 0, sizeof(char*));
        if(self->len*2>=self->size) {
            map$p_char$p_int$$p_char$p_int$pcharpint_rehash(self);
        }
        hash_201=charp_get_hash_key(key)%self->size;
        it_202=hash_201;
        while((_Bool)1) {
            if(self->item_existance[it_202]) {
                if(charp_equals(self->keys[it_202],key)) {
                    if(0) {
                        self->keys[it_202] = come_decrement_ref_count(self->keys[it_202], 0, 0);
                        self->keys[it_202]=key;
                    }
                    else {
                        self->keys[it_202]=key;
                    }
                    if(0) {
                        self->items[it_202]=item;
                    }
                    else {
                        self->items[it_202]=item;
                    }
                    break;
                }
                it_202++;
                if(it_202>=self->size) {
                    it_202=0;
                }
                else if(it_202==hash_201) {
                    fprintf(stderr,"unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_202]=(_Bool)1;
                if(0) {
                    self->keys[it_202] = come_decrement_ref_count(self->keys[it_202], 0, 0);
                    self->keys[it_202]=key;
                }
                else {
                    self->keys[it_202]=key;
                }
                if(0) {
                    self->items[it_202]=item;
                }
                else {
                    self->items[it_202]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_203=(_Bool)0;
        for(
        it2_205=list$ph_char$p$ph_char$pphcharp_begin((self->key_list));
        !list$ph_char$p$ph_char$pphcharp_end((self->key_list));
        it2_205=list$ph_char$p$ph_char$pphcharp_next((self->key_list))
        ){
            if(charp_equals(it2_205,key)) {
                same_key_exist_203=(_Bool)1;
            }
        }
        if(!same_key_exist_203) {
            list$ph_char$p$ph_char$pphcharp_push_back(self->key_list,key);
        }
}

static void map$p_char$p_int$$p_char$p_int$pcharpint_rehash(struct map$p_char$p_int$* self){
int size_186;
void* right_value107;
char** keys_187;
void* right_value108;
int* items_188;
void* right_value109;
_Bool* item_existance_189;
int len_190;
char* it_192;
int default_value_194;
int it2_197;
int hash_198;
int n_199;
int default_value_200;
memset(&size_186, 0, sizeof(int));
memset(&keys_187, 0, sizeof(char**));
memset(&items_188, 0, sizeof(int*));
memset(&item_existance_189, 0, sizeof(_Bool*));
memset(&len_190, 0, sizeof(int));
memset(&it_192, 0, sizeof(char*));
memset(&default_value_194, 0, sizeof(int));
memset(&it2_197, 0, sizeof(int));
memset(&hash_198, 0, sizeof(int));
memset(&n_199, 0, sizeof(int));
memset(&default_value_200, 0, sizeof(int));
                size_186=self->size*3;
                keys_187=(char***)(right_value107=(char***)come_calloc(1, sizeof(char**)*1*size_186));
                items_188=(int**)(right_value108=(int**)come_calloc(1, sizeof(int*)*1*size_186));
                item_existance_189=(_Bool**)(right_value109=(_Bool**)come_calloc(1, sizeof(_Bool*)*1*size_186));
                len_190=0;
                for(
                it_192=map$p_char$p_int$$p_char$p_int$pcharpint_begin(self);
                !map$p_char$p_int$$p_char$p_int$pcharpint_end(self);
                it_192=map$p_char$p_int$$p_char$p_int$pcharpint_next(self)
                ){
                    it2_197=map$p_char$p_int$$p_char$p_int$pcharpint_at(self,it_192,default_value_194);
                    hash_198=charp_get_hash_key(it_192)%size_186;
                    n_199=hash_198;
                    while((_Bool)1) {
                        if(item_existance_189[n_199]) {
                            n_199++;
                            if(n_199>=size_186) {
                                n_199=0;
                            }
                            else if(n_199==hash_198) {
                                fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_189[n_199]=(_Bool)1;
                            keys_187[n_199]=it_192;
                            items_188[n_199]=map$p_char$p_int$$p_char$p_int$pcharpint_at(self,it_192,default_value_200);
                            len_190++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
                come_free_object((char*)self->keys);
                self->keys=keys_187;
                self->items=items_188;
                self->item_existance=item_existance_189;
                self->size=size_186;
                self->len=len_190;
}

static char* map$p_char$p_int$$p_char$p_int$pcharpint_begin(struct map$p_char$p_int$* self){
char* result_191;
memset(&result_191, 0, sizeof(char*));
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result__ = self->key_list->it->item;
                        return __result__;
                    }
                    memset(&result_191,0,sizeof(char*));
                    char* __result__ = result_191;
                    return __result__;
}

static _Bool map$p_char$p_int$$p_char$p_int$pcharpint_end(struct map$p_char$p_int$* self){
                    struct list_item$p_char$p* __result__ = self->key_list->it==((void*)0);
                    return __result__;
}

static char* map$p_char$p_int$$p_char$p_int$pcharpint_next(struct map$p_char$p_int$* self){
char* result_193;
memset(&result_193, 0, sizeof(char*));
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result__ = self->key_list->it->item;
                        return __result__;
                    }
                    memset(&result_193,0,sizeof(char*));
                    char* __result__ = result_193;
                    return __result__;
}

static int map$p_char$p_int$$p_char$p_int$pcharpint_at(struct map$p_char$p_int$* self, char* key, int default_value){
int hash_195;
int it_196;
memset(&hash_195, 0, sizeof(int));
memset(&it_196, 0, sizeof(int));
                        hash_195=charp_get_hash_key(((char*)key))%self->size;
                        it_196=hash_195;
                        while((_Bool)1) {
                            if(self->item_existance[it_196]) {
                                if(charp_equals(self->keys[it_196],key)) {
                                    int __result__ = self->items[it_196];
                                    return __result__;
                                }
                                it_196++;
                                if(it_196>=self->size) {
                                    it_196=0;
                                }
                                else if(it_196==hash_195) {
                                    int __result__ = default_value;
                                    return __result__;
                                }
                            }
                            else {
                                int __result__ = default_value;
                                return __result__;
                            }
                        }
                        int __result__ = default_value;
                        return __result__;
}

static char* list$ph_char$p$ph_char$pphcharp_begin(struct list$p_char$p* self){
char* result_204;
memset(&result_204, 0, sizeof(char*));
            self->it=self->head;
            if(self->it) {
                char* __result__ = self->it->item;
                return __result__;
            }
            memset(&result_204,0,sizeof(char*));
            char* __result__ = result_204;
            return __result__;
}

static _Bool list$ph_char$p$ph_char$pphcharp_end(struct list$p_char$p* self){
            struct list_item$p_char$p* __result__ = self->it==((void*)0);
            return __result__;
}

static char* list$ph_char$p$ph_char$pphcharp_next(struct list$p_char$p* self){
char* result_206;
memset(&result_206, 0, sizeof(char*));
            self->it=self->it->next;
            if(self->it) {
                char* __result__ = self->it->item;
                return __result__;
            }
            memset(&result_206,0,sizeof(char*));
            char* __result__ = result_206;
            return __result__;
}

static void list$ph_char$p$ph_char$pphcharp_push_back(struct list$p_char$p* self, char* item){
void* right_value110;
struct list_item$_char$p$_char$p* litem_207;
void* right_value111;
struct list_item$_char$p$_char$p* litem_208;
void* right_value112;
struct list_item$_char$p$_char$p* litem_209;
memset(&litem_207, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&litem_208, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&litem_209, 0, sizeof(struct list_item$_char$p$_char$p*));
                if(self->len==0) {
                    litem_207=(struct list_item$_char$p$_char$p*)(right_value110=(struct list_item$_char$p$_char$p*)come_calloc(1, sizeof(struct list_item$_char$p$_char$p)*1));
                    litem_207->prev=((void*)0);
                    litem_207->next=((void*)0);
                    litem_207->item=item;
                    self->tail=litem_207;
                    self->head=litem_207;
                }
                else if(self->len==1) {
                    litem_208=(struct list_item$_char$p$_char$p*)(right_value111=(struct list_item$_char$p$_char$p*)come_calloc(1, sizeof(struct list_item$_char$p$_char$p)*1));
                    litem_208->prev=self->head;
                    litem_208->next=((void*)0);
                    litem_208->item=item;
                    self->tail=litem_208;
                    self->head->next=litem_208;
                }
                else {
                    litem_209=(struct list_item$_char$p$_char$p*)(right_value112=(struct list_item$_char$p$_char$p*)come_calloc(1, sizeof(struct list_item$_char$p$_char$p)*1));
                    litem_209->prev=self->tail;
                    litem_209->next=((void*)0);
                    litem_209->item=item;
                    self->tail->next=litem_209;
                    self->tail=litem_209;
                }
                self->len++;
}

static _Bool map$_char$p_int$phcharpint_operator_equals(struct map$p_char$p_int$* left, struct map$p_char$p_int$* right){
        _Bool __result__ = map$p_char$p_int$$p_char$p_int$pcharpint_equals(left,right);
        return __result__;
}

static _Bool map$p_char$p_int$$p_char$p_int$pcharpint_equals(struct map$p_char$p_int$* left, struct map$p_char$p_int$* right){
int n_211;
_Bool result_212;
char* it_213;
char* default_value_214;
char* it2_217;
int default_value2_218;
int item_219;
int item2_220;
memset(&n_211, 0, sizeof(int));
memset(&result_212, 0, sizeof(_Bool));
memset(&it_213, 0, sizeof(char*));
memset(&default_value_214, 0, sizeof(char*));
memset(&it2_217, 0, sizeof(char*));
memset(&default_value2_218, 0, sizeof(int));
memset(&item_219, 0, sizeof(int));
memset(&item2_220, 0, sizeof(int));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            n_211=0;
            result_212=(_Bool)1;
            for(
            it_213=list$ph_char$p$ph_char$pphcharp_begin((left->key_list));
            !list$ph_char$p$ph_char$pphcharp_end((left->key_list));
            it_213=list$ph_char$p$ph_char$pphcharp_next((left->key_list))
            ){
                it2_217=list$ph_char$p$ph_char$pphcharp_item(right->key_list,n_211,default_value_214);
                if(charp_equals(it_213,it2_217)) {
                    item_219=map$p_char$p_int$$p_char$p_int$pcharpint_at(left,it_213,default_value2_218);
                    item2_220=map$p_char$p_int$$p_char$p_int$pcharpint_at(left,it2_217,default_value2_218);
                    if(!int_equals(item_219,item2_220)) {
                        result_212=(_Bool)0;
                    }
                }
                else {
                    result_212=(_Bool)0;
                }
                n_211++;
            }
            _Bool __result__ = result_212;
            return __result__;
}

static char* list$ph_char$p$ph_char$pphcharp_item(struct list$p_char$p* self, int position, char* default_value){
struct list_item$_char$p$_char$p* it_215;
int i_216;
memset(&it_215, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&i_216, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_215=self->head;
                    i_216=0;
                    while(it_215!=((void*)0)) {
                        if(position==i_216) {
                            char* __result__ = it_215->item;
                            return __result__;
                        }
                        it_215=it_215->next;
                        i_216++;
                    }
                    char* __result__ = default_value;
                    return __result__;
}

static int map$_char$p_int$phcharpint_operator_load_element(struct map$p_char$p_int$* self, char* key){
int default_value_223;
memset(&default_value_223, 0, sizeof(int));
        memset(&default_value_223,0,sizeof(int));
        int __result__ = map$p_char$p_int$$p_char$p_int$pcharpint_at(self,key,default_value_223);
        return __result__;
}

static struct map$ph_char$p_int$* map$_char$p_int$phcharpint_clone(struct map$p_char$p_int$* self){
void* right_value117;
void* right_value123;
struct map$ph_char$p_int$* result_227;
char* it_232;
int default_value_233;
int it2_234;
memset(&result_227, 0, sizeof(struct map$ph_char$p_int$*));
memset(&it_232, 0, sizeof(char*));
memset(&default_value_233, 0, sizeof(int));
memset(&it2_234, 0, sizeof(int));
        if(self==((void*)0)) {
            void* __result__ = ((void*)0);
            return __result__;
        }
        result_227=(struct map$ph_char$p_int$*)come_increment_ref_count((struct map$ph_char$p_int$*)(right_value123=map$_char$p_int$$_char$p_int$phcharpint_initialize((struct map$_char$p_int$$_char$p_int$*)come_increment_ref_count((struct map$_char$p_int$$_char$p_int$*)(right_value117=(struct map$_char$p_int$$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$$_char$p_int$)*1))))));
        call_finalizer(map$_char$p_int$$_char$p_int$phcharpint_finalize,right_value117,0, 1, 0);
        call_finalizer(map$ph_char$p_int$$ph_char$p_int$phcharpint_finalize,right_value123,0, 1, 0);
        for(
        it_232=map$p_char$p_int$$p_char$p_int$pcharpint_begin(self);
        !map$p_char$p_int$$p_char$p_int$pcharpint_end(self);
        it_232=map$p_char$p_int$$p_char$p_int$pcharpint_next(self)
        ){
            it2_234=map$p_char$p_int$$p_char$p_int$pcharpint_at(self,it_232,default_value_233);
            map$ph_char$p_int$$ph_char$p_int$phcharpint_insert2(result_227,charp_clone(it_232),int_clone(it2_234));
        }
        struct map$ph_char$p_int$* __result__ = result_227;
        call_finalizer(map$ph_char$p_int$phcharpint_finalize,result_227,0, 0, 1);
        return __result__;
}

static struct map$ph_char$p_int$* map$_char$p_int$$_char$p_int$phcharpint_initialize(struct map$ph_char$p_int$* self){
void* right_value118;
void* right_value119;
void* right_value120;
int i_224;
void* right_value121;
void* right_value122;
memset(&i_224, 0, sizeof(int));
            self->keys=(char***)(right_value118=(char***)come_calloc(1, sizeof(char**)*1*128));
            self->items=(int**)(right_value119=(int**)come_calloc(1, sizeof(int*)*1*128));
            self->item_existance=(_Bool**)(right_value120=(_Bool**)come_calloc(1, sizeof(_Bool*)*1*128));
            for(
            i_224=0;
            i_224<128;
            i_224++
            ){
                self->item_existance[i_224]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            if(self->key_list) {(struct list$ph_char$p*)come_decrement_ref_count(self->key_list,0,0); }
            self->key_list=(struct list$ph_char$p*)come_increment_ref_count((struct list$ph_char$p*)(right_value122=list$_char$p$_char$pphcharp_initialize((struct list$_char$p$_char$p*)come_increment_ref_count((struct list$_char$p$_char$p*)(right_value121=(struct list$_char$p$_char$p*)come_calloc(1, sizeof(struct list$_char$p$_char$p)*1))))));
            call_finalizer(list$_char$p$_char$pphcharp_finalize,right_value121,0, 1, 0);
            call_finalizer(list$ph_char$p$ph_char$pphcharp_finalize,right_value122,0, 1, 0);
            self->it=0;
            struct map$ph_char$p_int$* __result__ = self;
            call_finalizer(map$ph_char$p_int$phcharpint_finalize,self,0, 0, 1);
            return __result__;
}

static struct list$ph_char$p* list$_char$p$_char$pphcharp_initialize(struct list$ph_char$p* self){
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                struct list$ph_char$p* __result__ = self;
                call_finalizer(list$ph_char$pphcharp_finalize,self,0, 0, 1);
                return __result__;
}

static void list$_char$p$_char$pphcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p$_char$p* it_225;
struct list_item$_char$p$_char$p* prev_it_226;
memset(&it_225, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_226, 0, sizeof(struct list_item$_char$p$_char$p*));
                it_225=self->head;
                while(it_225!=((void*)0)) {
                    if(0) {
                        it_225->item = come_decrement_ref_count(it_225->item, 0, 0);
                    }
                    prev_it_226=it_225;
                    it_225=it_225->next;
                    come_free_object(prev_it_226);
                }
}

static void map$_char$p_int$$_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_228;
int i_229;
memset(&i_228, 0, sizeof(int));
memset(&i_229, 0, sizeof(int));
            for(
            i_228=0;
            i_228<self->size;
            i_228++
            ){
                if(self->item_existance[i_228]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_229=0;
            i_229<self->size;
            i_229++
            ){
                if(self->item_existance[i_229]) {
                    if(0) {
                        self->keys[i_229] = come_decrement_ref_count(self->keys[i_229], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$ph_char$p_int$$ph_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_230;
int i_231;
memset(&i_230, 0, sizeof(int));
memset(&i_231, 0, sizeof(int));
            for(
            i_230=0;
            i_230<self->size;
            i_230++
            ){
                if(self->item_existance[i_230]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_231=0;
            i_231<self->size;
            i_231++
            ){
                if(self->item_existance[i_231]) {
                    if(0) {
                        self->keys[i_231] = come_decrement_ref_count(self->keys[i_231], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$ph_char$p_int$$ph_char$p_int$phcharpint_insert2(struct map$p_char$p_int$* self, char* key, int item){
int hash_235;
int it_236;
_Bool same_key_exist_237;
char* it2_238;
memset(&hash_235, 0, sizeof(int));
memset(&it_236, 0, sizeof(int));
memset(&same_key_exist_237, 0, sizeof(_Bool));
memset(&it2_238, 0, sizeof(char*));
                if(self->len*2>=self->size) {
                    map$p_char$p_int$$p_char$p_int$pcharpint_rehash(self);
                }
                hash_235=charp_get_hash_key(key)%self->size;
                it_236=hash_235;
                while((_Bool)1) {
                    if(self->item_existance[it_236]) {
                        if(charp_equals(self->keys[it_236],key)) {
                            if(0) {
                                self->keys[it_236] = come_decrement_ref_count(self->keys[it_236], 0, 0);
                                self->keys[it_236]=key;
                            }
                            else {
                                self->keys[it_236]=key;
                            }
                            if(0) {
                                self->items[it_236]=item;
                            }
                            else {
                                self->items[it_236]=item;
                            }
                            break;
                        }
                        it_236++;
                        if(it_236>=self->size) {
                            it_236=0;
                        }
                        else if(it_236==hash_235) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_236]=(_Bool)1;
                        if(0) {
                            self->keys[it_236] = come_decrement_ref_count(self->keys[it_236], 0, 0);
                            self->keys[it_236]=key;
                        }
                        else {
                            self->keys[it_236]=key;
                        }
                        if(0) {
                            self->items[it_236]=item;
                        }
                        else {
                            self->items[it_236]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_237=(_Bool)0;
                for(
                it2_238=list$ph_char$p$ph_char$pphcharp_begin((self->key_list));
                !list$ph_char$p$ph_char$pphcharp_end((self->key_list));
                it2_238=list$ph_char$p$ph_char$pphcharp_next((self->key_list))
                ){
                    if(charp_equals(it2_238,key)) {
                        same_key_exist_237=(_Bool)1;
                    }
                }
                if(!same_key_exist_237) {
                    list$ph_char$p$ph_char$pphcharp_push_back(self->key_list,key);
                }
}

static struct tuple1$ph_int$* tuple1$_int$phint_initialize(struct tuple1$ph_int$* self, int v1){
        self->v1=v1;
        struct tuple1$ph_int$* __result__ = self;
        call_finalizer(tuple1$ph_int$phint_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple1$ph_int$phint_finalize(struct tuple1$ph_int$* self){
}

static void tuple1$_int$phint_finalize(struct tuple1$_int$* self){
}

static struct tuple1$ph_char$ph* tuple1$_char$phphcharph_initialize(struct tuple1$ph_char$ph* self, char* v1){
        if(self->v1) {(char*)come_decrement_ref_count(self->v1,0,0); }
        self->v1=(char*)come_increment_ref_count(v1);
        struct tuple1$ph_char$ph* __result__ = self;
        call_finalizer(tuple1$ph_char$phphcharph_finalize,self,0, 0, 1);
        v1 = come_decrement_ref_count(v1, 0, 1);
        return __result__;
}

static void tuple1$ph_char$phphcharph_finalize(struct tuple1$ph_char$ph* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static void tuple1$_char$phphcharph_finalize(struct tuple1$_char$ph* self){
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            self->v1 = come_decrement_ref_count(self->v1, 0, 0);
        }
}

static struct tuple1$_char$ph* tuple1$_char$phphcharph_clone(struct tuple1$_char$ph* self){
void* right_value130;
struct tuple1$_char$ph* result_242;
memset(&result_242, 0, sizeof(struct tuple1$_char$ph*));
        result_242=(struct tuple1$_char$ph*)come_increment_ref_count((struct tuple1$_char$ph*)(right_value130=(struct tuple1$_char$ph*)come_calloc(1, sizeof(struct tuple1$_char$ph)*1)));
        call_finalizer(tuple1$_char$phph_finalize,right_value130,0, 1, 0);
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            if(result_242->v1) {(char*)come_decrement_ref_count(result_242->v1,0,0); }
            result_242->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        }
        struct tuple1$_char$ph* __result__ = result_242;
        call_finalizer(tuple1$_char$phph_finalize,result_242,0, 0, 1);
        return __result__;
}

static void tuple1$_char$phph_finalize(struct tuple1$_char$ph* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static _Bool tuple1$_char$phphcharph_equals(struct tuple1$_char$ph* left, struct tuple1$_char$ph* right){
        if(!string_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static _Bool tuple1$_char$phphcharph_operator_equals(struct tuple1$_char$ph* left, struct tuple1$_char$ph* right){
        if(!string_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static struct tuple2$ph_char$ph_int$* tuple2$_char$ph_int$phcharphint_initialize(struct tuple2$ph_char$ph_int$* self, char* v1, int v2){
        if(self->v1) {(char*)come_decrement_ref_count(self->v1,0,0); }
        self->v1=(char*)come_increment_ref_count(v1);
        self->v2=v2;
        struct tuple2$ph_char$ph_int$* __result__ = self;
        call_finalizer(tuple2$ph_char$ph_int$phcharphint_finalize,self,0, 0, 1);
        v1 = come_decrement_ref_count(v1, 0, 1);
        return __result__;
}

static void tuple2$ph_char$ph_int$phcharphint_finalize(struct tuple2$ph_char$ph_int$* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static void tuple2$_char$ph_int$phcharphint_finalize(struct tuple2$_char$ph_int$* self){
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            self->v1 = come_decrement_ref_count(self->v1, 0, 0);
        }
}

static struct tuple2$ph_char$p_int$* tuple2$_char$p_int$phcharpint_initialize(struct tuple2$ph_char$p_int$* self, char* v1, int v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$ph_char$p_int$* __result__ = self;
        call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple2$ph_char$p_int$phcharpint_finalize(struct tuple2$ph_char$p_int$* self){
}

static void tuple2$_char$p_int$phcharpint_finalize(struct tuple2$_char$p_int$* self){
}

static _Bool tuple2$ph_char$p_int$phcharpint_equals(struct tuple2$ph_char$p_int$* left, struct tuple2$ph_char$p_int$* right){
        if(!charp_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        if(!int_equals(left->v2,right->v2)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static _Bool tuple2$ph_char$p_int$phcharpint_operator_equals(struct tuple2$ph_char$p_int$* left, struct tuple2$ph_char$p_int$* right){
        if(!charp_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        if(!int_equals(left->v2,right->v2)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static _Bool tuple2$ph_char$p_int$phcharpint_operator_not_equals(struct tuple2$ph_char$p_int$* left, struct tuple2$ph_char$p_int$* right){
        _Bool __result__ = !(charp_equals(left->v1,right->v1)&&int_equals(left->v2,right->v2));
        return __result__;
}

static struct sDataA* sDataA_clone(struct sDataA* self){
void* right_value168;
struct sDataA* result_265;
memset(&result_265, 0, sizeof(struct sDataA*));
        result_265=(struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value168=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*1)));
        call_finalizer(sDataA_finalize,right_value168,0, 1, 0);
        struct sDataA* __result__ = result_265;
        call_finalizer(sDataA_finalize,result_265,0, 0, 1);
        return __result__;
}

static struct list$ph_IA$ph* list$_IA$phphIAph_initialize(struct list$ph_IA$ph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$ph_IA$ph* __result__ = self;
        call_finalizer(list$ph_IA$phphIAph_finalize,self,0, 0, 1);
        return __result__;
}

static void list$ph_IA$phphIAph_finalize(struct list$p_IA$ph* self){
struct list_item$_IA$ph* it_255;
struct list_item$_IA$ph* prev_it_256;
memset(&it_255, 0, sizeof(struct list_item$_IA$ph*));
memset(&prev_it_256, 0, sizeof(struct list_item$_IA$ph*));
            it_255=self->head;
            while(it_255!=((void*)0)) {
                if(1) {
                    call_finalizer(((struct IA*)it_255->item)->finalize, ((struct IA*)it_255->item)->_protocol_obj,0, 0, 0);
                    it_255->item = come_decrement_ref_count(it_255->item, 0, 0);
                }
                prev_it_256=it_255;
                it_255=it_255->next;
                come_free_object(prev_it_256);
            }
}

static void list$_IA$phphIAph_finalize(struct list$p_IA$ph* self){
struct list_item$_IA$ph$_IA$ph* it_258;
struct list_item$_IA$ph$_IA$ph* prev_it_259;
memset(&it_258, 0, sizeof(struct list_item$_IA$ph$_IA$ph*));
memset(&prev_it_259, 0, sizeof(struct list_item$_IA$ph$_IA$ph*));
        it_258=self->head;
        while(it_258!=((void*)0)) {
            if(1) {
                call_finalizer(((struct IA*)it_258->item)->finalize, ((struct IA*)it_258->item)->_protocol_obj,0, 0, 0);
                it_258->item = come_decrement_ref_count(it_258->item, 0, 0);
            }
            prev_it_259=it_258;
            it_258=it_258->next;
            come_free_object(prev_it_259);
        }
}

static void list$_IA$phphIAph_push_back(struct list$p_IA$ph* self, struct IA* item){
void* right_value155;
struct list_item$_IA$ph$_IA$ph* litem_260;
struct IA** _inf_valueX2;
void* right_value156;
struct list_item$_IA$ph$_IA$ph* litem_261;
struct IA** _inf_valueX3;
void* right_value157;
struct list_item$_IA$ph$_IA$ph* litem_262;
struct IA** _inf_valueX4;
memset(&litem_260, 0, sizeof(struct list_item$_IA$ph$_IA$ph*));
memset(&litem_261, 0, sizeof(struct list_item$_IA$ph$_IA$ph*));
memset(&litem_262, 0, sizeof(struct list_item$_IA$ph$_IA$ph*));
        if(self->len==0) {
            litem_260=(struct list_item$_IA$ph$_IA$ph*)(right_value155=(struct list_item$_IA$ph$_IA$ph*)come_calloc(1, sizeof(struct list_item$_IA$ph$_IA$ph)*1));
            litem_260->prev=((void*)0);
            litem_260->next=((void*)0);
            if(litem_260->item) {(struct IA*)come_decrement_ref_count(litem_260->item,0,0), come_decrement_ref_count(((struct IA*)litem_260->item)->_protocol_obj,0,0); }
            _inf_valueX2=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_260->item=_inf_valueX2;
            self->tail=litem_260;
            self->head=litem_260;
        }
        else if(self->len==1) {
            litem_261=(struct list_item$_IA$ph$_IA$ph*)(right_value156=(struct list_item$_IA$ph$_IA$ph*)come_calloc(1, sizeof(struct list_item$_IA$ph$_IA$ph)*1));
            litem_261->prev=self->head;
            litem_261->next=((void*)0);
            if(litem_261->item) {(struct IA*)come_decrement_ref_count(litem_261->item,0,0), come_decrement_ref_count(((struct IA*)litem_261->item)->_protocol_obj,0,0); }
            _inf_valueX3=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_261->item=_inf_valueX3;
            self->tail=litem_261;
            self->head->next=litem_261;
        }
        else {
            litem_262=(struct list_item$_IA$ph$_IA$ph*)(right_value157=(struct list_item$_IA$ph$_IA$ph*)come_calloc(1, sizeof(struct list_item$_IA$ph$_IA$ph)*1));
            litem_262->prev=self->tail;
            litem_262->next=((void*)0);
            if(litem_262->item) {(struct IA*)come_decrement_ref_count(litem_262->item,0,0), come_decrement_ref_count(((struct IA*)litem_262->item)->_protocol_obj,0,0); }
            _inf_valueX4=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_262->item=_inf_valueX4;
            self->tail->next=litem_262;
            self->tail=litem_262;
        }
        self->len++;
        call_finalizer(((struct IA*)item)->finalize, ((struct IA*)item)->_protocol_obj,0, 0, 1);
        item = come_decrement_ref_count(item, 0, 1);
}

static struct IA* list$_IA$phphIAph_begin(struct list$p_IA$ph* self){
struct IA* result_266;
memset(&result_266, 0, sizeof(struct IA*));
        self->it=self->head;
        if(self->it) {
            struct IA* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_266,0,sizeof(struct IA*));
        struct IA* __result__ = result_266;
        return __result__;
}

static _Bool list$_IA$phphIAph_end(struct list$p_IA$ph* self){
        struct list_item$p_IA$ph* __result__ = self->it==((void*)0);
        return __result__;
}

static struct IA* list$_IA$phphIAph_next(struct list$p_IA$ph* self){
struct IA* result_268;
memset(&result_268, 0, sizeof(struct IA*));
        self->it=self->it->next;
        if(self->it) {
            struct IA* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_268,0,sizeof(struct IA*));
        struct IA* __result__ = result_268;
        return __result__;
}

static struct tuple3$ph_int$_int$_bool$* tuple3$_int$_int$_bool$phintintbool_initialize(struct tuple3$ph_int$_int$_bool$* self, int v1, int v2, _Bool v3){
        self->v1=v1;
        self->v2=v2;
        self->v3=v3;
        struct tuple3$ph_int$_int$_bool$* __result__ = self;
        call_finalizer(tuple3$ph_int$_int$_bool$phintintbool_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple3$ph_int$_int$_bool$phintintbool_finalize(struct tuple3$ph_int$_int$_bool$* self){
}

static void tuple3$_int$_int$_bool$phintintbool_finalize(struct tuple3$_int$_int$_bool$* self){
}

static int tuple2$ph_int$_bool$phintbool_catch(struct tuple2$p_int$_bool$* self, void* parent, void (*block)(void*)){
        if(!self->v2) {
            block(parent);
        }
        int __result__ = self->v1;
        return __result__;
}

void method_block6(struct __current_stack6__* parent){
        fprintf(stderr,"exception\n");
}

static _Bool list$_char$phphcharph_operator_equals(struct list$p_char$ph* self, struct list$p_char$ph* right){
        _Bool __result__ = list$p_char$ph$p_char$phpcharph_equals(self,right);
        return __result__;
}

static _Bool list$p_char$ph$p_char$phpcharph_equals(struct list$p_char$ph* left, struct list$p_char$ph* right){
struct list_item$_char$ph$_char$ph* it_275;
struct list_item$_char$ph$_char$ph* it2_276;
memset(&it_275, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&it2_276, 0, sizeof(struct list_item$_char$ph$_char$ph*));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_275=left->head;
            it2_276=right->head;
            while(it_275!=((void*)0)) {
                if(!string_equals(it_275->item,it2_276->item)) {
                    _Bool __result__ = (_Bool)0;
                    return __result__;
                }
                it_275=it_275->next;
                it2_276=it2_276->next;
            }
            _Bool __result__ = (_Bool)1;
            return __result__;
}

