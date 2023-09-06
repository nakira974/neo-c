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
    char** p_86;
    void** p2_87;
    int* count_88;
    int* size2_89;
    char** mem2_90;
    int* b_91;
    int** a_92;
    int* a2_93;
    char** ax_96;
    char** str_100;
    struct sData** data_101;
    int** axyz_102;
    int** xxx_103;
    int** yyy_104;
    int** zzz_105;
    int* bzyz_106;
    int** azyz_107;
    int* n_108;
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
    char** p_86;
    void** p2_87;
    int* count_88;
    int* size2_89;
    char** mem2_90;
    int* b_91;
    int** a_92;
    int* a2_93;
    char** ax_96;
    char** str_100;
    struct sData** data_101;
    int** axyz_102;
    int** xxx_103;
    int** yyy_104;
    int** zzz_105;
    int* bzyz_106;
    int** azyz_107;
    int* n_108;
    struct list$_char$ph** liX_109;
    struct list$_int$** liX2_115;
    int* aX_124;
};
struct __current_stack3__
{
    char** p_86;
    void** p2_87;
    int* count_88;
    int* size2_89;
    char** mem2_90;
    int* b_91;
    int** a_92;
    int* a2_93;
    char** ax_96;
    char** str_100;
    struct sData** data_101;
    int** axyz_102;
    int** xxx_103;
    int** yyy_104;
    int** zzz_105;
    int* bzyz_106;
    int** azyz_107;
    int* n_108;
    struct list$_char$ph** liX_109;
    struct list$_int$** liX2_115;
    int* aX_124;
    int* aXYZY_128;
    struct list$_char$ph** li_129;
    struct list$_int$** li2_131;
    int* aXL_133;
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
    char** p_86;
    void** p2_87;
    int* count_88;
    int* size2_89;
    char** mem2_90;
    int* b_91;
    int** a_92;
    int* a2_93;
    char** ax_96;
    char** str_100;
    struct sData** data_101;
    int** axyz_102;
    int** xxx_103;
    int** yyy_104;
    int** zzz_105;
    int* bzyz_106;
    int** azyz_107;
    int* n_108;
    struct list$_char$ph** liX_109;
    struct list$_int$** liX2_115;
    int* aX_124;
    int* aXYZY_128;
    struct list$_char$ph** li_129;
    struct list$_int$** li2_131;
    int* aXL_133;
    struct list$ph_char$ph** li3_170;
    struct list$ph_int$** li4_178;
    struct list$ph_int$** li5_182;
    struct list$ph_int$** li6_187;
    int** axyzX_198;
    char** strXYXY_199;
    struct list$_int$** liZ_200;
};
struct __current_stack5__
{
    char** p_86;
    void** p2_87;
    int* count_88;
    int* size2_89;
    char** mem2_90;
    int* b_91;
    int** a_92;
    int* a2_93;
    char** ax_96;
    char** str_100;
    struct sData** data_101;
    int** axyz_102;
    int** xxx_103;
    int** yyy_104;
    int** zzz_105;
    int* bzyz_106;
    int** azyz_107;
    int* n_108;
    struct list$_char$ph** liX_109;
    struct list$_int$** liX2_115;
    int* aX_124;
    int* aXYZY_128;
    struct list$_char$ph** li_129;
    struct list$_int$** li2_131;
    int* aXL_133;
    struct list$ph_char$ph** li3_170;
    struct list$ph_int$** li4_178;
    struct list$ph_int$** li5_182;
    struct list$ph_int$** li6_187;
    int** axyzX_198;
    char** strXYXY_199;
    struct list$_int$** liZ_200;
    struct list$_int$** liZ2_206;
    struct list$_int$** __list_value1___209;
    struct list$_int$** __list_value2___210;
    struct list$_int$** __list_value3___211;
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
    char** p_86;
    void** p2_87;
    int* count_88;
    int* size2_89;
    char** mem2_90;
    int* b_91;
    int** a_92;
    int* a2_93;
    char** ax_96;
    char** str_100;
    struct sData** data_101;
    int** axyz_102;
    int** xxx_103;
    int** yyy_104;
    int** zzz_105;
    int* bzyz_106;
    int** azyz_107;
    int* n_108;
    struct list$_char$ph** liX_109;
    struct list$_int$** liX2_115;
    int* aX_124;
    int* aXYZY_128;
    struct list$_char$ph** li_129;
    struct list$_int$** li2_131;
    int* aXL_133;
    struct list$ph_char$ph** li3_170;
    struct list$ph_int$** li4_178;
    struct list$ph_int$** li5_182;
    struct list$ph_int$** li6_187;
    int** axyzX_198;
    char** strXYXY_199;
    struct list$_int$** liZ_200;
    struct list$_int$** liZ2_206;
    struct list$_int$** __list_value1___209;
    struct list$_int$** __list_value2___210;
    struct list$_int$** __list_value3___211;
    struct map$_char$p_int$** __map_value1___223;
    struct map$_char$p_int$** __map_value2___250;
    struct map$_char$p_int$** __map_value3___261;
    struct map$_char$p_int$** m1_262;
    struct map$_char$p_int$** m2_279;
    struct tuple1$_int$** tt1_280;
    struct tuple1$_char$ph** tt2_281;
    struct tuple1$_char$ph** tt3_283;
    struct tuple1$_int$** ttt1_284;
    struct tuple1$_char$ph** ttt2_285;
    struct tuple1$_char$ph** ttt3_286;
    struct tuple2$ph_char$ph_int$** __tuple_value2___287;
    struct tuple2$_char$ph_int$** t4_288;
    struct tuple2$ph_char$p_int$** __tuple_value3___289;
    struct tuple2$ph_char$p_int$** __tuple_value4___290;
    struct tuple2$ph_char$p_int$** __tuple_value5___291;
    struct tuple2$ph_char$p_int$** __tuple_value6___292;
    struct IA** ia_294;
    struct list$_IA$ph** liIA_297;
    struct tuple3$ph_int$_int$_bool$** __tuple_value7___309;
    int* aZZZ_310;
    int* bZZZ_311;
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
static struct list$ph_char$ph* list$_char$phphcharph_initialize(struct list$ph_char$ph* self);
static void list$ph_char$phphcharph_finalize(struct list$p_char$ph* self);
static void list$_char$phphcharph_finalize(struct list$p_char$ph* self);
static void list$_char$phphcharph_push_back(struct list$p_char$ph* self, char* item);
static void FILE_finalize(struct _IO_FILE** self);
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
inline struct list$_char$ph* FILE_readlines(struct _IO_FILE* f){
void* right_value14;
    struct list$_char$ph* __result__ = (struct list$_char$ph*)(right_value14=FILE_readlines(f));
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



static struct list$ph_char$ph* list$_char$phphcharph_initialize(struct list$ph_char$ph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$ph_char$ph* __result__ = self;
        call_finalizer(list$ph_char$phphcharph_finalize,self,0, 0, 1);
        return __result__;
}

static void list$ph_char$phphcharph_finalize(struct list$p_char$ph* self){
struct list_item$_char$ph* it_40;
struct list_item$_char$ph* prev_it_41;
memset(&it_40, 0, sizeof(struct list_item$_char$ph*));
memset(&prev_it_41, 0, sizeof(struct list_item$_char$ph*));
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

static void list$_char$phphcharph_finalize(struct list$p_char$ph* self){
struct list_item$_char$ph$_char$ph* it_43;
struct list_item$_char$ph$_char$ph* prev_it_44;
memset(&it_43, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&prev_it_44, 0, sizeof(struct list_item$_char$ph$_char$ph*));
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

static void list$_char$phphcharph_push_back(struct list$p_char$ph* self, char* item){
void* right_value17;
struct list_item$_char$ph$_char$ph* litem_46;
void* right_value18;
struct list_item$_char$ph$_char$ph* litem_47;
void* right_value19;
struct list_item$_char$ph$_char$ph* litem_48;
memset(&litem_46, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_47, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_48, 0, sizeof(struct list_item$_char$ph$_char$ph*));
            if(self->len==0) {
                litem_46=(struct list_item$_char$ph$_char$ph*)(right_value17=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                litem_46->prev=((void*)0);
                litem_46->next=((void*)0);
                if(litem_46->item) {(char*)come_decrement_ref_count(litem_46->item,0,0); }
                litem_46->item=(char*)come_increment_ref_count(item);
                self->tail=litem_46;
                self->head=litem_46;
            }
            else if(self->len==1) {
                litem_47=(struct list_item$_char$ph$_char$ph*)(right_value18=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                litem_47->prev=self->head;
                litem_47->next=((void*)0);
                if(litem_47->item) {(char*)come_decrement_ref_count(litem_47->item,0,0); }
                litem_47->item=(char*)come_increment_ref_count(item);
                self->tail=litem_47;
                self->head->next=litem_47;
            }
            else {
                litem_48=(struct list_item$_char$ph$_char$ph*)(right_value19=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
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




static void FILE_finalize(struct _IO_FILE** self){
}

























int* funHeap(int x, int y){
void* right_value60;
int* result_83;
memset(&result_83, 0, sizeof(int*));
    result_83=(int*)come_increment_ref_count((int*)(right_value60=(int*)come_calloc(1, sizeof(int)*1)));
    right_value60 = come_decrement_ref_count(right_value60, 1, 0);
    *result_83=x+y;
    int* __result__ = result_83;
    result_83 = come_decrement_ref_count(result_83, 0, 1);
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
void* right_value61;
void* right_value62;
struct tuple2$ph_int$_bool$* __tuple_value1___84;
memset(&__tuple_value1___84, 0, sizeof(struct tuple2$ph_int$_bool$*));
    __tuple_value1___84=(struct tuple2$ph_int$_bool$*)come_increment_ref_count((struct tuple2$ph_int$_bool$*)(right_value62=tuple2$_int$_bool$phintbool_initialize((struct tuple2$_int$_bool$*)come_increment_ref_count((struct tuple2$_int$_bool$*)(right_value61=(struct tuple2$_int$_bool$*)come_calloc(1, sizeof(struct tuple2$_int$_bool$)*1))),x+y,(_Bool)1)));
    call_finalizer(tuple2$_int$_bool$phintbool_finalize,right_value61,0, 1, 0);
    call_finalizer(tuple2$ph_int$_bool$phintbool_finalize,right_value62,0, 1, 0);
    struct tuple2$ph_int$_bool$* __result__ = __tuple_value1___84;
    call_finalizer(tuple2$ph_int$_bool$phintbool_finalize,__tuple_value1___84,0, 0, 1);
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
void* right_value63;
char* a_85;
char* p_86;
void* p2_87;
int count_88;
int size2_89;
char* mem2_90;
int b_91;
int* a_92;
int a2_93;
int b_94;
int n_95;
void* right_value64;
char* ax_96;
void* right_value65;
char* a_97;
char* b_98;
struct sData data_99;
void* right_value66;
char* str_100;
void* right_value67;
struct sData* data_101;
void* right_value68;
void* right_value69;
void* right_value70;
int* axyz_102;
void* right_value71;
int* xxx_103;
void* right_value72;
int* yyy_104;
void* right_value73;
int* zzz_105;
void* right_value74;
int bzyz_106;
int* azyz_107;
int n_108;
struct __current_stack1__ __current_stack1__;
void* right_value75;
void* right_value76;
struct list$_char$ph* liX_109;
void* right_value77;
void* right_value78;
void* right_value79;
char* it_111;
void* right_value80;
void* right_value81;
struct list$_int$* liX2_115;
int it_122;
int aX_124;
struct __current_stack2__ __current_stack2__;
int aXYZY_128;
void* right_value85;
void* right_value86;
struct list$_char$ph* li_129;
void* right_value87;
void* right_value88;
void* right_value89;
char* it_130;
void* right_value90;
void* right_value91;
struct list$_int$* li2_131;
int it_132;
int aXL_133;
struct __current_stack3__ __current_stack3__;
void* right_value104;
void* right_value105;
void* right_value106;
struct list$ph_char$ph* li3_170;
void* right_value110;
void* right_value111;
void* right_value112;
void* right_value113;
void* right_value114;
void* right_value115;
struct list$ph_int$* li4_178;
void* right_value119;
void* right_value120;
struct list$ph_int$* li5_182;
void* right_value121;
void* right_value122;
struct list$ph_int$* li6_187;
void* right_value128;
int* axyzX_198;
void* right_value129;
void* right_value130;
void* right_value131;
void* right_value132;
void* right_value133;
char* strXYXY_199;
void* right_value134;
void* right_value135;
struct list$_int$* liZ_200;
struct __current_stack4__ __current_stack4__;
void* right_value136;
void* right_value137;
struct list$_int$* liZ2_206;
void* right_value138;
void* right_value139;
struct list$_int$* __list_value1___209;
void* right_value140;
void* right_value141;
struct list$_int$* __list_value2___210;
void* right_value142;
void* right_value143;
struct list$_int$* __list_value3___211;
struct __current_stack5__ __current_stack5__;
void* right_value144;
void* right_value150;
struct map$_char$p_int$* __map_value1___223;
void* right_value157;
void* right_value158;
struct map$_char$p_int$* __map_value2___250;
void* right_value159;
void* right_value160;
struct map$_char$p_int$* __map_value3___261;
struct map$_char$p_int$* m1_262;
struct map$_char$p_int$* m2_279;
void* right_value168;
void* right_value169;
struct tuple1$_int$* tt1_280;
void* right_value170;
void* right_value171;
void* right_value172;
struct tuple1$_char$ph* tt2_281;
void* right_value173;
struct tuple1$_char$ph* tt3_283;
void* right_value175;
void* right_value176;
struct tuple1$_int$* ttt1_284;
void* right_value177;
void* right_value178;
void* right_value179;
struct tuple1$_char$ph* ttt2_285;
void* right_value180;
struct tuple1$_char$ph* ttt3_286;
void* right_value181;
void* right_value182;
void* right_value183;
struct tuple2$ph_char$ph_int$* __tuple_value2___287;
struct tuple2$_char$ph_int$* t4_288;
void* right_value184;
void* right_value185;
void* right_value186;
struct tuple2$ph_char$p_int$* __tuple_value3___289;
void* right_value187;
void* right_value188;
struct tuple2$ph_char$p_int$* __tuple_value4___290;
void* right_value189;
void* right_value190;
struct tuple2$ph_char$p_int$* __tuple_value5___291;
void* right_value191;
void* right_value192;
struct tuple2$ph_char$p_int$* __tuple_value6___292;
void* right_value193;
void* right_value194;
struct IA* _inf_value1;
struct sDataA* _inf_obj_value1;
void* right_value196;
struct IA** _inf_valueX1;
struct IA* ia_294;
void* right_value197;
void* right_value198;
struct list$_IA$ph* liIA_297;
void* right_value202;
void* right_value203;
struct IA* _inf_value2;
struct sDataA* _inf_obj_value2;
void* right_value205;
struct IA** _inf_valueX5;
void* right_value206;
void* right_value207;
struct IA* _inf_value3;
struct sDataA* _inf_obj_value3;
void* right_value209;
struct IA** _inf_valueX6;
void* right_value210;
void* right_value211;
struct IA* _inf_value4;
struct sDataA* _inf_obj_value4;
void* right_value213;
struct IA** _inf_valueX7;
struct IA* it_307;
void* right_value214;
void* right_value215;
struct tuple3$ph_int$_int$_bool$* __tuple_value7___309;
int aZZZ_310;
int bZZZ_311;
void* right_value216;
struct __current_stack6__ __current_stack6__;
int xZZZZZZZZ_312;
void* right_value217;
void* right_value218;
struct list$_char$ph* li_str_313;
void* right_value219;
void* right_value220;
void* right_value221;
void* right_value222;
void* right_value223;
struct list$_char$ph* __list_value4___314;
void* right_value224;
void* right_value225;
void* right_value226;
memset(&a_85, 0, sizeof(char*));
memset(&p_86, 0, sizeof(char*));
memset(&p2_87, 0, sizeof(void*));
memset(&count_88, 0, sizeof(int));
memset(&size2_89, 0, sizeof(int));
memset(&mem2_90, 0, sizeof(char*));
memset(&b_91, 0, sizeof(int));
memset(&a_92, 0, sizeof(int*));
memset(&a2_93, 0, sizeof(int));
memset(&b_94, 0, sizeof(int));
memset(&n_95, 0, sizeof(int));
memset(&ax_96, 0, sizeof(char*));
memset(&a_97, 0, sizeof(char*));
memset(&b_98, 0, sizeof(char*));
memset(&data_99, 0, sizeof(struct sData));
memset(&str_100, 0, sizeof(char*));
memset(&data_101, 0, sizeof(struct sData*));
memset(&axyz_102, 0, sizeof(int*));
memset(&xxx_103, 0, sizeof(int*));
memset(&yyy_104, 0, sizeof(int*));
memset(&zzz_105, 0, sizeof(int*));
memset(&bzyz_106, 0, sizeof(int));
memset(&azyz_107, 0, sizeof(int*));
memset(&n_108, 0, sizeof(int));
memset(&liX_109, 0, sizeof(struct list$_char$ph*));
memset(&it_111, 0, sizeof(char*));
memset(&liX2_115, 0, sizeof(struct list$_int$*));
memset(&it_122, 0, sizeof(int));
memset(&aX_124, 0, sizeof(int));
memset(&aXYZY_128, 0, sizeof(int));
memset(&li_129, 0, sizeof(struct list$_char$ph*));
memset(&it_130, 0, sizeof(char*));
memset(&li2_131, 0, sizeof(struct list$_int$*));
memset(&it_132, 0, sizeof(int));
memset(&aXL_133, 0, sizeof(int));
memset(&li3_170, 0, sizeof(struct list$ph_char$ph*));
memset(&li4_178, 0, sizeof(struct list$ph_int$*));
memset(&li5_182, 0, sizeof(struct list$ph_int$*));
memset(&li6_187, 0, sizeof(struct list$ph_int$*));
memset(&axyzX_198, 0, sizeof(int*));
memset(&strXYXY_199, 0, sizeof(char*));
memset(&liZ_200, 0, sizeof(struct list$_int$*));
memset(&liZ2_206, 0, sizeof(struct list$_int$*));
memset(&__list_value1___209, 0, sizeof(struct list$_int$*));
memset(&__list_value2___210, 0, sizeof(struct list$_int$*));
memset(&__list_value3___211, 0, sizeof(struct list$_int$*));
memset(&__map_value1___223, 0, sizeof(struct map$_char$p_int$*));
memset(&__map_value2___250, 0, sizeof(struct map$_char$p_int$*));
memset(&__map_value3___261, 0, sizeof(struct map$_char$p_int$*));
memset(&m1_262, 0, sizeof(struct map$_char$p_int$*));
memset(&m2_279, 0, sizeof(struct map$_char$p_int$*));
memset(&tt1_280, 0, sizeof(struct tuple1$_int$*));
memset(&tt2_281, 0, sizeof(struct tuple1$_char$ph*));
memset(&tt3_283, 0, sizeof(struct tuple1$_char$ph*));
memset(&ttt1_284, 0, sizeof(struct tuple1$_int$*));
memset(&ttt2_285, 0, sizeof(struct tuple1$_char$ph*));
memset(&ttt3_286, 0, sizeof(struct tuple1$_char$ph*));
memset(&__tuple_value2___287, 0, sizeof(struct tuple2$ph_char$ph_int$*));
memset(&t4_288, 0, sizeof(struct tuple2$_char$ph_int$*));
memset(&__tuple_value3___289, 0, sizeof(struct tuple2$ph_char$p_int$*));
memset(&__tuple_value4___290, 0, sizeof(struct tuple2$ph_char$p_int$*));
memset(&__tuple_value5___291, 0, sizeof(struct tuple2$ph_char$p_int$*));
memset(&__tuple_value6___292, 0, sizeof(struct tuple2$ph_char$p_int$*));
memset(&ia_294, 0, sizeof(struct IA*));
memset(&liIA_297, 0, sizeof(struct list$_IA$ph*));
memset(&it_307, 0, sizeof(struct IA*));
memset(&__tuple_value7___309, 0, sizeof(struct tuple3$ph_int$_int$_bool$*));
memset(&aZZZ_310, 0, sizeof(int));
memset(&aZZZ_310, 0, sizeof(int));
memset(&aZZZ_310, 0, sizeof(int));
memset(&bZZZ_311, 0, sizeof(int));
memset(&xZZZZZZZZ_312, 0, sizeof(int));
memset(&li_str_313, 0, sizeof(struct list$_char$ph*));
memset(&__list_value4___314, 0, sizeof(struct list$_char$ph*));
    if(1) {
        a_85=(char*)come_increment_ref_count((char**)(right_value63=(char**)come_calloc(1, sizeof(char*)*1*128)));
        right_value63 = come_decrement_ref_count(right_value63, 1, 0);
        a_85 = come_decrement_ref_count(a_85, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_86="ABC";
    p2_87="ABC";
    printf("%s\n",(char*)p2_87);
    printf("%c\n",*p_86);
    count_88=0;
    size2_89=1;
    mem2_90=calloc(1,sizeof(int)+sizeof(long)+count_88*size2_89);
    free(mem2_90);
    a_92=&b_91;
    (*a_92)=123;
    a2_93=123;
    if((_Bool)1) {
        b_94=234;
        n_95=0;
        while(n_95<3) {
            printf("a %d\n",a2_93);
            printf("b %d\n",b_94);
            n_95++;
        }
    }
    ax_96=(char*)come_increment_ref_count((char**)(right_value64=(char**)come_calloc(1, sizeof(char*)*1*128)));
    right_value64 = come_decrement_ref_count(right_value64, 1, 0);
    if(1) {
        a_97=(char*)come_increment_ref_count((char**)(right_value65=(char**)come_calloc(1, sizeof(char*)*1*128)));
        right_value65 = come_decrement_ref_count(right_value65, 1, 0);
        b_98=(char*)come_increment_ref_count(a_97);
        if(data_99.a) {(char*)come_decrement_ref_count(data_99.a,0,0); }
        data_99.a=(char*)come_increment_ref_count(a_97);
        a_97 = come_decrement_ref_count(a_97, 0, 0);
        b_98 = come_decrement_ref_count(b_98, 0, 0);
        call_finalizer(sData_finalize,(&data_99),1, 0, 0);
    }
    str_100=(char*)come_increment_ref_count((char**)(right_value66=(char**)come_calloc(1, sizeof(char*)*1*128)));
    right_value66 = come_decrement_ref_count(right_value66, 1, 0);
    strncpy(str_100,"ABC",128);
    data_101=(struct sData*)come_increment_ref_count((struct sData*)(right_value67=(struct sData*)come_calloc(1, sizeof(struct sData)*1)));
    call_finalizer(sData_finalize,right_value67,0, 1, 0);
    if(data_101->a) {(char*)come_decrement_ref_count(data_101->a,0,0); }
    data_101->a=(char*)come_increment_ref_count(str_100);
    puts(data_101->a);
    (int*)(right_value68=funHeap(7,7));
    right_value68 = come_decrement_ref_count(right_value68, 1, 0);
    xassert("right value test",*(int*)(right_value69=funHeap(3,4))==7);
    right_value69 = come_decrement_ref_count(right_value69, 1, 0);
    axyz_102=(int*)come_increment_ref_count((int*)(right_value70=funHeap(1,2)));
    right_value70 = come_decrement_ref_count(right_value70, 1, 0);
    xassert("variable test",*axyz_102==3);
    xxx_103=(int*)come_increment_ref_count((int*)(right_value71=(int*)come_calloc(1, sizeof(int)*1)));
    right_value71 = come_decrement_ref_count(right_value71, 1, 0);
    *xxx_103=1;
    yyy_104=(int*)come_increment_ref_count((int*)(right_value72=(int*)come_calloc(1, sizeof(int)*1)));
    right_value72 = come_decrement_ref_count(right_value72, 1, 0);
    *yyy_104=2;
    xassert("heap",funHeap2((int*)come_increment_ref_count(xxx_103),(int*)come_increment_ref_count(yyy_104))==3);
    zzz_105=(int*)come_increment_ref_count((int*)(right_value73=(int*)come_calloc(1, sizeof(int)*1)));
    right_value73 = come_decrement_ref_count(right_value73, 1, 0);
    (int*)(right_value74=(int*)come_calloc(1, sizeof(int)*1));
    right_value74 = come_decrement_ref_count(right_value74, 1, 0);
    bzyz_106=123;
    azyz_107=&bzyz_106;
    xassert("impl",intp_fun(azyz_107)==123);
    n_108=0;
    __current_stack1__.p_86 = &p_86;
    __current_stack1__.p2_87 = &p2_87;
    __current_stack1__.count_88 = &count_88;
    __current_stack1__.size2_89 = &size2_89;
    __current_stack1__.mem2_90 = &mem2_90;
    __current_stack1__.b_91 = &b_91;
    __current_stack1__.a_92 = &a_92;
    __current_stack1__.a2_93 = &a2_93;
    __current_stack1__.ax_96 = &ax_96;
    __current_stack1__.str_100 = &str_100;
    __current_stack1__.data_101 = &data_101;
    __current_stack1__.axyz_102 = &axyz_102;
    __current_stack1__.xxx_103 = &xxx_103;
    __current_stack1__.yyy_104 = &yyy_104;
    __current_stack1__.zzz_105 = &zzz_105;
    __current_stack1__.bzyz_106 = &bzyz_106;
    __current_stack1__.azyz_107 = &azyz_107;
    __current_stack1__.n_108 = &n_108;
    int_times(3,&__current_stack1__,method_block1);
    liX_109=(struct list$ph_char$ph*)come_increment_ref_count((struct list$ph_char$ph*)(right_value76=list$_char$phphcharph_initialize((struct list$_char$ph*)come_increment_ref_count((struct list$_char$ph*)(right_value75=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value75,0, 1, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,right_value76,0, 1, 0);
    list$_char$phphcharph_push_back(liX_109,(char*)come_increment_ref_count((char*)(right_value77=__builtin_string("ABC"))));
    right_value77 = come_decrement_ref_count(right_value77, 1, 0);
    list$_char$phphcharph_push_back(liX_109,(char*)come_increment_ref_count((char*)(right_value78=__builtin_string("DEF"))));
    right_value78 = come_decrement_ref_count(right_value78, 1, 0);
    list$_char$phphcharph_push_back(liX_109,(char*)come_increment_ref_count((char*)(right_value79=__builtin_string("GHI"))));
    right_value79 = come_decrement_ref_count(right_value79, 1, 0);
    for(
    it_111=list$_char$phphcharph_begin((liX_109));
    !list$_char$phphcharph_end((liX_109));
    it_111=list$_char$phphcharph_next((liX_109))
    ){
        printf("%s\n",it_111);
    }
    liX2_115=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value81=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value80=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value80,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value81,0, 1, 0);
    list$_int$phint_push_back(liX2_115,1);
    list$_int$phint_push_back(liX2_115,2);
    list$_int$phint_push_back(liX2_115,3);
    for(
    it_122=list$_int$phint_begin((liX2_115));
    !list$_int$phint_end((liX2_115));
    it_122=list$_int$phint_next((liX2_115))
    ){
        printf("%d\n",it_122);
    }
    aX_124=123;
    __current_stack2__.p_86 = &p_86;
    __current_stack2__.p2_87 = &p2_87;
    __current_stack2__.count_88 = &count_88;
    __current_stack2__.size2_89 = &size2_89;
    __current_stack2__.mem2_90 = &mem2_90;
    __current_stack2__.b_91 = &b_91;
    __current_stack2__.a_92 = &a_92;
    __current_stack2__.a2_93 = &a2_93;
    __current_stack2__.ax_96 = &ax_96;
    __current_stack2__.str_100 = &str_100;
    __current_stack2__.data_101 = &data_101;
    __current_stack2__.axyz_102 = &axyz_102;
    __current_stack2__.xxx_103 = &xxx_103;
    __current_stack2__.yyy_104 = &yyy_104;
    __current_stack2__.zzz_105 = &zzz_105;
    __current_stack2__.bzyz_106 = &bzyz_106;
    __current_stack2__.azyz_107 = &azyz_107;
    __current_stack2__.n_108 = &n_108;
    __current_stack2__.liX_109 = &liX_109;
    __current_stack2__.liX2_115 = &liX2_115;
    __current_stack2__.aX_124 = &aX_124;
    list$_int$phint_each(liX2_115,&__current_stack2__,method_block2);
    xassert("method_block test",aX_124==2);
    xassert("var initialize test",aXYZY_128==0);
    li_129=(struct list$ph_char$ph*)come_increment_ref_count((struct list$ph_char$ph*)(right_value86=list$_char$phphcharph_initialize((struct list$_char$ph*)come_increment_ref_count((struct list$_char$ph*)(right_value85=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value85,0, 1, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,right_value86,0, 1, 0);
    list$_char$phphcharph_push_back(li_129,(char*)come_increment_ref_count((char*)(right_value87=__builtin_string("ABC"))));
    right_value87 = come_decrement_ref_count(right_value87, 1, 0);
    list$_char$phphcharph_push_back(li_129,(char*)come_increment_ref_count((char*)(right_value88=__builtin_string("DEF"))));
    right_value88 = come_decrement_ref_count(right_value88, 1, 0);
    list$_char$phphcharph_push_back(li_129,(char*)come_increment_ref_count((char*)(right_value89=__builtin_string("GHI"))));
    right_value89 = come_decrement_ref_count(right_value89, 1, 0);
    for(
    it_130=list$_char$phphcharph_begin((li_129));
    !list$_char$phphcharph_end((li_129));
    it_130=list$_char$phphcharph_next((li_129))
    ){
        printf("%s\n",it_130);
    }
    li2_131=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value91=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value90=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value90,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value91,0, 1, 0);
    list$_int$phint_push_back(li2_131,1);
    list$_int$phint_push_back(li2_131,2);
    list$_int$phint_push_back(li2_131,3);
    for(
    it_132=list$_int$phint_begin((li2_131));
    !list$_int$phint_end((li2_131));
    it_132=list$_int$phint_next((li2_131))
    ){
        printf("%d\n",it_132);
    }
    aXL_133=123;
    __current_stack3__.p_86 = &p_86;
    __current_stack3__.p2_87 = &p2_87;
    __current_stack3__.count_88 = &count_88;
    __current_stack3__.size2_89 = &size2_89;
    __current_stack3__.mem2_90 = &mem2_90;
    __current_stack3__.b_91 = &b_91;
    __current_stack3__.a_92 = &a_92;
    __current_stack3__.a2_93 = &a2_93;
    __current_stack3__.ax_96 = &ax_96;
    __current_stack3__.str_100 = &str_100;
    __current_stack3__.data_101 = &data_101;
    __current_stack3__.axyz_102 = &axyz_102;
    __current_stack3__.xxx_103 = &xxx_103;
    __current_stack3__.yyy_104 = &yyy_104;
    __current_stack3__.zzz_105 = &zzz_105;
    __current_stack3__.bzyz_106 = &bzyz_106;
    __current_stack3__.azyz_107 = &azyz_107;
    __current_stack3__.n_108 = &n_108;
    __current_stack3__.liX_109 = &liX_109;
    __current_stack3__.liX2_115 = &liX2_115;
    __current_stack3__.aX_124 = &aX_124;
    __current_stack3__.aXYZY_128 = &aXYZY_128;
    __current_stack3__.li_129 = &li_129;
    __current_stack3__.li2_131 = &li2_131;
    __current_stack3__.aXL_133 = &aXL_133;
    list$_int$phint_each(li2_131,&__current_stack3__,method_block3);
    xassert("var of method block",aXL_133==2);
    xassert("list::item",list$_int$phint_item(li2_131,0,-1)==1);
    list$_int$phint_insert(li2_131,1,5);
    xassert("list::insert",list$_int$phint_item(li2_131,0,-1)==1&&list$_int$phint_item(li2_131,1,-1)==5&&list$_int$phint_item(li2_131,2,-1)==2&&list$_int$phint_item(li2_131,3,-1)==3);
    list$_char$phphcharph_insert(li_129,1,(char*)come_increment_ref_count((char*)(right_value104=__builtin_string("GGG"))));
    right_value104 = come_decrement_ref_count(right_value104, 1, 0);
    xassert("list::insert",strcmp(list$_char$phphcharph_item(li_129,0,-1),"ABC")==0&&strcmp(list$_char$phphcharph_item(li_129,1,-1),"GGG")==0&&strcmp(list$_char$phphcharph_item(li_129,2,-1),"DEF")==0&&strcmp(list$_char$phphcharph_item(li_129,3,-1),"GHI")==0);
    list$_char$phphcharph_reset(li_129);
    xassert("list::reset",list$_char$phphcharph_length(li_129)==0);
    list$_int$phint_delete(li2_131,0,1);
    xassert("list::delete",list$_int$phint_item(li2_131,0,-1)==5&&list$_int$phint_item(li2_131,1,-1)==2&&list$_int$phint_item(li2_131,2,-1)==3);
    li3_170=(struct list$ph_char$ph*)come_increment_ref_count((struct list$ph_char$ph*)(right_value106=list$_char$phphcharph_initialize((struct list$_char$ph*)come_increment_ref_count((struct list$_char$ph*)(right_value105=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value105,0, 1, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,right_value106,0, 1, 0);
    list$ph_char$phphcharph_push_back(li3_170,(char*)come_increment_ref_count((char*)(right_value110=__builtin_string("AAA"))));
    right_value110 = come_decrement_ref_count(right_value110, 1, 0);
    list$ph_char$phphcharph_push_back(li3_170,(char*)come_increment_ref_count((char*)(right_value111=__builtin_string("BBB"))));
    right_value111 = come_decrement_ref_count(right_value111, 1, 0);
    list$ph_char$phphcharph_push_back(li3_170,(char*)come_increment_ref_count((char*)(right_value112=__builtin_string("CCC"))));
    right_value112 = come_decrement_ref_count(right_value112, 1, 0);
    list$ph_char$phphcharph_replace(li3_170,0,(char*)come_increment_ref_count((char*)(right_value113=__builtin_string("ABC"))));
    right_value113 = come_decrement_ref_count(right_value113, 1, 0);
    xassert("list::replace",strcmp(list$ph_char$phphcharph_item(li3_170,0,((void*)0)),"ABC")==0&&strcmp(list$ph_char$phphcharph_item(li3_170,1,((void*)0)),"BBB")==0&&strcmp(list$ph_char$phphcharph_item(li3_170,2,((void*)0)),"CCC")==0);
    li4_178=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value115=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value114=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value114,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value115,0, 1, 0);
    list$ph_int$phint_push_back(li4_178,1);
    list$ph_int$phint_push_back(li4_178,3);
    list$ph_int$phint_push_back(li4_178,5);
    li5_182=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value120=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value119=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value119,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value120,0, 1, 0);
    list$ph_int$phint_push_back(li5_182,1);
    list$ph_int$phint_push_back(li5_182,3);
    list$ph_int$phint_push_back(li5_182,5);
    xassert("list::equals",list$ph_int$phint_equals(li4_178,li5_182));
    xassert("list::find",list$ph_int$phint_find(li4_178,5,-1)==2);
    li6_187=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value122=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value121=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value121,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value122,0, 1, 0);
    list$ph_int$phint_push_back(li6_187,3);
    list$ph_int$phint_push_back(li6_187,5);
    xassert("list::sublist",list$ph_int$phint_equals((struct list$ph_int$*)(right_value128=list$ph_int$phint_sublist(li5_182,1,-1)),li6_187));
    call_finalizer(list$ph_int$phint_finalize,right_value128,0, 1, 0);
    if(axyzX_198) {(int*)come_decrement_ref_count(axyzX_198,0,0); }
    axyzX_198=(int*)come_increment_ref_count((int*)(right_value129=(int*)come_calloc(1, sizeof(int)*1)));
    right_value129 = come_decrement_ref_count(right_value129, 1, 0);
    if(axyzX_198) {(int*)come_decrement_ref_count(axyzX_198,0,0); }
    axyzX_198=(int*)come_increment_ref_count((int*)(right_value130=(int*)come_calloc(1, sizeof(int)*1)));
    right_value130 = come_decrement_ref_count(right_value130, 1, 0);
    xassert("operator equals",string_operator_equals((char*)(right_value131=__builtin_string("AAA")),(char*)(right_value132=__builtin_string("AAA"))));
    right_value131 = come_decrement_ref_count(right_value131, 1, 0);
    right_value132 = come_decrement_ref_count(right_value132, 1, 0);
    xassert("operator test",string_operator_equals((char*)(right_value133=charp_operator_add("AAA","BBB")),"AAABBB"));
    right_value133 = come_decrement_ref_count(right_value133, 1, 0);
    strXYXY_199="ABC";
    xassert("operator test",*(strXYXY_199+1)==66);
    liZ_200=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value135=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value134=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value134,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value135,0, 1, 0);
    list$_int$phint_push_back(liZ_200,1);
    list$_int$phint_push_back(liZ_200,2);
    list$_int$phint_push_back(liZ_200,3);
    __current_stack4__.p_86 = &p_86;
    __current_stack4__.p2_87 = &p2_87;
    __current_stack4__.count_88 = &count_88;
    __current_stack4__.size2_89 = &size2_89;
    __current_stack4__.mem2_90 = &mem2_90;
    __current_stack4__.b_91 = &b_91;
    __current_stack4__.a_92 = &a_92;
    __current_stack4__.a2_93 = &a2_93;
    __current_stack4__.ax_96 = &ax_96;
    __current_stack4__.str_100 = &str_100;
    __current_stack4__.data_101 = &data_101;
    __current_stack4__.axyz_102 = &axyz_102;
    __current_stack4__.xxx_103 = &xxx_103;
    __current_stack4__.yyy_104 = &yyy_104;
    __current_stack4__.zzz_105 = &zzz_105;
    __current_stack4__.bzyz_106 = &bzyz_106;
    __current_stack4__.azyz_107 = &azyz_107;
    __current_stack4__.n_108 = &n_108;
    __current_stack4__.liX_109 = &liX_109;
    __current_stack4__.liX2_115 = &liX2_115;
    __current_stack4__.aX_124 = &aX_124;
    __current_stack4__.aXYZY_128 = &aXYZY_128;
    __current_stack4__.li_129 = &li_129;
    __current_stack4__.li2_131 = &li2_131;
    __current_stack4__.aXL_133 = &aXL_133;
    __current_stack4__.li3_170 = &li3_170;
    __current_stack4__.li4_178 = &li4_178;
    __current_stack4__.li5_182 = &li5_182;
    __current_stack4__.li6_187 = &li6_187;
    __current_stack4__.axyzX_198 = &axyzX_198;
    __current_stack4__.strXYXY_199 = &strXYXY_199;
    __current_stack4__.liZ_200 = &liZ_200;
    list$_int$phint_each(liZ_200,&__current_stack4__,method_block4);
    list$_int$phint_operator_store_element(liZ_200,0,777);
    printf("liZ[0] %d\n",list$_int$phint_operator_load_element(liZ_200,0));
    liZ2_206=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value137=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value136=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value136,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value137,0, 1, 0);
    list$_int$phint_push_back(liZ2_206,777);
    list$_int$phint_push_back(liZ2_206,2);
    list$_int$phint_push_back(liZ2_206,3);
    xassert("list equals",list$_int$phint_operator_equals(liZ_200,liZ2_206));
    __list_value1___209=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value139=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value138=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value138,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value139,0, 1, 0);
    list$_int$phint_push_back(__list_value1___209,1);
    list$_int$phint_push_back(__list_value1___209,2);
    list$_int$phint_push_back(__list_value1___209,3);
    __list_value2___210=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value141=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value140=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value140,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value141,0, 1, 0);
    list$_int$phint_push_back(__list_value2___210,1);
    list$_int$phint_push_back(__list_value2___210,2);
    list$_int$phint_push_back(__list_value2___210,3);
    xassert("list equals test",list$_int$phint_operator_equals(__list_value1___209,__list_value2___210));
    __list_value3___211=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value143=list$_int$phint_initialize((struct list$_int$*)come_increment_ref_count((struct list$_int$*)(right_value142=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value142,0, 1, 0);
    call_finalizer(list$ph_int$phint_finalize,right_value143,0, 1, 0);
    list$_int$phint_push_back(__list_value3___211,1);
    list$_int$phint_push_back(__list_value3___211,2);
    list$_int$phint_push_back(__list_value3___211,3);
    list$_int$phint_push_back(__list_value3___211,4);
    list$_int$phint_push_back(__list_value3___211,5);
    __current_stack5__.p_86 = &p_86;
    __current_stack5__.p2_87 = &p2_87;
    __current_stack5__.count_88 = &count_88;
    __current_stack5__.size2_89 = &size2_89;
    __current_stack5__.mem2_90 = &mem2_90;
    __current_stack5__.b_91 = &b_91;
    __current_stack5__.a_92 = &a_92;
    __current_stack5__.a2_93 = &a2_93;
    __current_stack5__.ax_96 = &ax_96;
    __current_stack5__.str_100 = &str_100;
    __current_stack5__.data_101 = &data_101;
    __current_stack5__.axyz_102 = &axyz_102;
    __current_stack5__.xxx_103 = &xxx_103;
    __current_stack5__.yyy_104 = &yyy_104;
    __current_stack5__.zzz_105 = &zzz_105;
    __current_stack5__.bzyz_106 = &bzyz_106;
    __current_stack5__.azyz_107 = &azyz_107;
    __current_stack5__.n_108 = &n_108;
    __current_stack5__.liX_109 = &liX_109;
    __current_stack5__.liX2_115 = &liX2_115;
    __current_stack5__.aX_124 = &aX_124;
    __current_stack5__.aXYZY_128 = &aXYZY_128;
    __current_stack5__.li_129 = &li_129;
    __current_stack5__.li2_131 = &li2_131;
    __current_stack5__.aXL_133 = &aXL_133;
    __current_stack5__.li3_170 = &li3_170;
    __current_stack5__.li4_178 = &li4_178;
    __current_stack5__.li5_182 = &li5_182;
    __current_stack5__.li6_187 = &li6_187;
    __current_stack5__.axyzX_198 = &axyzX_198;
    __current_stack5__.strXYXY_199 = &strXYXY_199;
    __current_stack5__.liZ_200 = &liZ_200;
    __current_stack5__.liZ2_206 = &liZ2_206;
    __current_stack5__.__list_value1___209 = &__list_value1___209;
    __current_stack5__.__list_value2___210 = &__list_value2___210;
    __current_stack5__.__list_value3___211 = &__list_value3___211;
    list$_int$phint_each(__list_value3___211,&__current_stack5__,method_block5);
    __map_value1___223=(struct map$ph_char$p_int$*)come_increment_ref_count((struct map$ph_char$p_int$*)(right_value150=map$_char$p_int$phcharpint_initialize((struct map$_char$p_int$*)come_increment_ref_count((struct map$_char$p_int$*)(right_value144=(struct map$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$)*1))))));
    call_finalizer(map$_char$p_int$phcharpint_finalize,right_value144,0, 1, 0);
    call_finalizer(map$ph_char$p_int$phcharpint_finalize,right_value150,0, 1, 0);
    map$_char$p_int$phcharpint_insert(__map_value1___223,"AAA",1);
    map$_char$p_int$phcharpint_insert(__map_value1___223,"BBB",2);
    __map_value2___250=(struct map$ph_char$p_int$*)come_increment_ref_count((struct map$ph_char$p_int$*)(right_value158=map$_char$p_int$phcharpint_initialize((struct map$_char$p_int$*)come_increment_ref_count((struct map$_char$p_int$*)(right_value157=(struct map$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$)*1))))));
    call_finalizer(map$_char$p_int$phcharpint_finalize,right_value157,0, 1, 0);
    call_finalizer(map$ph_char$p_int$phcharpint_finalize,right_value158,0, 1, 0);
    map$_char$p_int$phcharpint_insert(__map_value2___250,"AAA",1);
    map$_char$p_int$phcharpint_insert(__map_value2___250,"BBB",2);
    xassert("map equals",map$_char$p_int$phcharpint_operator_equals(__map_value1___223,__map_value2___250));
    __map_value3___261=(struct map$ph_char$p_int$*)come_increment_ref_count((struct map$ph_char$p_int$*)(right_value160=map$_char$p_int$phcharpint_initialize((struct map$_char$p_int$*)come_increment_ref_count((struct map$_char$p_int$*)(right_value159=(struct map$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$)*1))))));
    call_finalizer(map$_char$p_int$phcharpint_finalize,right_value159,0, 1, 0);
    call_finalizer(map$ph_char$p_int$phcharpint_finalize,right_value160,0, 1, 0);
    map$_char$p_int$phcharpint_insert(__map_value3___261,"AAA",1);
    map$_char$p_int$phcharpint_insert(__map_value3___261,"BBB",2);
    m1_262=(struct map$_char$p_int$*)come_increment_ref_count(__map_value3___261);
    printf("%d %d\n",map$_char$p_int$phcharpint_operator_load_element(m1_262,"AAA"),map$_char$p_int$phcharpint_operator_load_element(m1_262,"BBB"));
    m2_279=(struct map$_char$p_int$*)come_increment_ref_count(map$_char$p_int$phcharpint_clone(m1_262));
    printf("%d %d\n",map$_char$p_int$phcharpint_operator_load_element(m2_279,"AAA"),map$_char$p_int$phcharpint_operator_load_element(m2_279,"BBB"));
    xassert("map clone",map$_char$p_int$phcharpint_operator_equals(m1_262,m2_279));
    tt1_280=(struct tuple1$ph_int$*)come_increment_ref_count((struct tuple1$ph_int$*)(right_value169=tuple1$_int$phint_initialize((struct tuple1$_int$*)come_increment_ref_count((struct tuple1$_int$*)(right_value168=(struct tuple1$_int$*)come_calloc(1, sizeof(struct tuple1$_int$)*1))),1)));
    call_finalizer(tuple1$_int$phint_finalize,right_value168,0, 1, 0);
    call_finalizer(tuple1$ph_int$phint_finalize,right_value169,0, 1, 0);
    tt1_280->v1=111;
    printf("%d\n",tt1_280->v1);
    tt2_281=(struct tuple1$ph_char$ph*)come_increment_ref_count((struct tuple1$ph_char$ph*)(right_value172=tuple1$_char$phphcharph_initialize((struct tuple1$_char$ph*)come_increment_ref_count((struct tuple1$_char$ph*)(right_value170=(struct tuple1$_char$ph*)come_calloc(1, sizeof(struct tuple1$_char$ph)*1))),(char*)come_increment_ref_count((char*)(right_value171=__builtin_string("ABC"))))));
    call_finalizer(tuple1$_char$phphcharph_finalize,right_value170,0, 1, 0);
    right_value171 = come_decrement_ref_count(right_value171, 1, 0);
    call_finalizer(tuple1$ph_char$phphcharph_finalize,right_value172,0, 1, 0);
    if(tt2_281->v1) {(char*)come_decrement_ref_count(tt2_281->v1,0,0); }
    tt2_281->v1=(char*)come_increment_ref_count((char*)(right_value173=__builtin_string("DEF")));
    right_value173 = come_decrement_ref_count(right_value173, 1, 0);
    printf("%s\n",tt2_281->v1);
    tt3_283=(struct tuple1$_char$ph*)come_increment_ref_count(tuple1$_char$phphcharph_clone(tt2_281));
    printf("(%s)\n",tt3_283->v1);
    ttt1_284=(struct tuple1$ph_int$*)come_increment_ref_count((struct tuple1$ph_int$*)(right_value176=tuple1$_int$phint_initialize((struct tuple1$_int$*)come_increment_ref_count((struct tuple1$_int$*)(right_value175=(struct tuple1$_int$*)come_calloc(1, sizeof(struct tuple1$_int$)*1))),1)));
    call_finalizer(tuple1$_int$phint_finalize,right_value175,0, 1, 0);
    call_finalizer(tuple1$ph_int$phint_finalize,right_value176,0, 1, 0);
    ttt1_284->v1=111;
    printf("%d\n",ttt1_284->v1);
    ttt2_285=(struct tuple1$ph_char$ph*)come_increment_ref_count((struct tuple1$ph_char$ph*)(right_value179=tuple1$_char$phphcharph_initialize((struct tuple1$_char$ph*)come_increment_ref_count((struct tuple1$_char$ph*)(right_value177=(struct tuple1$_char$ph*)come_calloc(1, sizeof(struct tuple1$_char$ph)*1))),(char*)come_increment_ref_count((char*)(right_value178=__builtin_string("ABC"))))));
    call_finalizer(tuple1$_char$phphcharph_finalize,right_value177,0, 1, 0);
    right_value178 = come_decrement_ref_count(right_value178, 1, 0);
    call_finalizer(tuple1$ph_char$phphcharph_finalize,right_value179,0, 1, 0);
    if(ttt2_285->v1) {(char*)come_decrement_ref_count(ttt2_285->v1,0,0); }
    ttt2_285->v1=(char*)come_increment_ref_count((char*)(right_value180=__builtin_string("DEF")));
    right_value180 = come_decrement_ref_count(right_value180, 1, 0);
    printf("%s\n",ttt2_285->v1);
    ttt3_286=(struct tuple1$_char$ph*)come_increment_ref_count(tuple1$_char$phphcharph_clone(ttt2_285));
    printf("(%s)\n",ttt3_286->v1);
    xassert("tuple test",tuple1$_char$phphcharph_operator_equals(ttt2_285,ttt3_286));
    __tuple_value2___287=(struct tuple2$ph_char$ph_int$*)come_increment_ref_count((struct tuple2$ph_char$ph_int$*)(right_value183=tuple2$_char$ph_int$phcharphint_initialize((struct tuple2$_char$ph_int$*)come_increment_ref_count((struct tuple2$_char$ph_int$*)(right_value181=(struct tuple2$_char$ph_int$*)come_calloc(1, sizeof(struct tuple2$_char$ph_int$)*1))),(char*)come_increment_ref_count((char*)(right_value182=__builtin_string("ABC"))),5)));
    call_finalizer(tuple2$_char$ph_int$phcharphint_finalize,right_value181,0, 1, 0);
    right_value182 = come_decrement_ref_count(right_value182, 1, 0);
    call_finalizer(tuple2$ph_char$ph_int$phcharphint_finalize,right_value183,0, 1, 0);
    t4_288=(struct tuple2$ph_char$ph_int$*)come_increment_ref_count(__tuple_value2___287);
    xassert("tuple test",string_operator_equals(t4_288->v1,(char*)(right_value184=__builtin_string("ABC")))&&t4_288->v2==5);
    right_value184 = come_decrement_ref_count(right_value184, 1, 0);
    __tuple_value3___289=(struct tuple2$ph_char$p_int$*)come_increment_ref_count((struct tuple2$ph_char$p_int$*)(right_value186=tuple2$_char$p_int$phcharpint_initialize((struct tuple2$_char$p_int$*)come_increment_ref_count((struct tuple2$_char$p_int$*)(right_value185=(struct tuple2$_char$p_int$*)come_calloc(1, sizeof(struct tuple2$_char$p_int$)*1))),"AAA",7)));
    call_finalizer(tuple2$_char$p_int$phcharpint_finalize,right_value185,0, 1, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,right_value186,0, 1, 0);
    __tuple_value4___290=(struct tuple2$ph_char$p_int$*)come_increment_ref_count((struct tuple2$ph_char$p_int$*)(right_value188=tuple2$_char$p_int$phcharpint_initialize((struct tuple2$_char$p_int$*)come_increment_ref_count((struct tuple2$_char$p_int$*)(right_value187=(struct tuple2$_char$p_int$*)come_calloc(1, sizeof(struct tuple2$_char$p_int$)*1))),"AAA",7)));
    call_finalizer(tuple2$_char$p_int$phcharpint_finalize,right_value187,0, 1, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,right_value188,0, 1, 0);
    xassert("tuple testX",tuple2$ph_char$p_int$phcharpint_operator_equals(__tuple_value3___289,__tuple_value4___290));
    __tuple_value5___291=(struct tuple2$ph_char$p_int$*)come_increment_ref_count((struct tuple2$ph_char$p_int$*)(right_value190=tuple2$_char$p_int$phcharpint_initialize((struct tuple2$_char$p_int$*)come_increment_ref_count((struct tuple2$_char$p_int$*)(right_value189=(struct tuple2$_char$p_int$*)come_calloc(1, sizeof(struct tuple2$_char$p_int$)*1))),"AAA",8)));
    call_finalizer(tuple2$_char$p_int$phcharpint_finalize,right_value189,0, 1, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,right_value190,0, 1, 0);
    __tuple_value6___292=(struct tuple2$ph_char$p_int$*)come_increment_ref_count((struct tuple2$ph_char$p_int$*)(right_value192=tuple2$_char$p_int$phcharpint_initialize((struct tuple2$_char$p_int$*)come_increment_ref_count((struct tuple2$_char$p_int$*)(right_value191=(struct tuple2$_char$p_int$*)come_calloc(1, sizeof(struct tuple2$_char$p_int$)*1))),"AAA",7)));
    call_finalizer(tuple2$_char$p_int$phcharpint_finalize,right_value191,0, 1, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,right_value192,0, 1, 0);
    xassert("tuple testX",tuple2$ph_char$p_int$phcharpint_operator_not_equals(__tuple_value5___291,__tuple_value6___292));
    _inf_value1=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value1=(struct sDataA*)(right_value194=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value193=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*1))),111,222));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sDataA_finalize;
    _inf_value1->clone=sDataA_clone;
    _inf_value1->fun=sDataA_fun;
    _inf_valueX1=(struct IA*)come_increment_ref_count((struct IA*)(right_value196=_inf_value1));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value196=_inf_value1))->_protocol_obj);
    ia_294=_inf_valueX1;
    call_finalizer(sDataA_finalize,right_value193,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value194,0, 1, 0);
    call_finalizer(((struct IA*)right_value196)->finalize, ((struct IA*)right_value196)->_protocol_obj,0, 1, 0);
    right_value196 = come_decrement_ref_count(right_value196, 1, 0);
    printf("%d\n",ia_294->fun(ia_294->_protocol_obj,0,0));
    liIA_297=(struct list$ph_IA$ph*)come_increment_ref_count((struct list$ph_IA$ph*)(right_value198=list$_IA$phphIAph_initialize((struct list$_IA$ph*)come_increment_ref_count((struct list$_IA$ph*)(right_value197=(struct list$_IA$ph*)come_calloc(1, sizeof(struct list$_IA$ph)*1))))));
    call_finalizer(list$_IA$phphIAph_finalize,right_value197,0, 1, 0);
    call_finalizer(list$ph_IA$phphIAph_finalize,right_value198,0, 1, 0);
    _inf_value2=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value2=(struct sDataA*)(right_value203=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value202=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*1))),1,1));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=sDataA_finalize;
    _inf_value2->clone=sDataA_clone;
    _inf_value2->fun=sDataA_fun;
    _inf_valueX5=(struct IA*)come_increment_ref_count((struct IA*)(right_value205=_inf_value2));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value205=_inf_value2))->_protocol_obj);
    list$_IA$phphIAph_push_back(liIA_297,_inf_valueX5);
    call_finalizer(sDataA_finalize,right_value202,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value203,0, 1, 0);
    call_finalizer(((struct IA*)right_value205)->finalize, ((struct IA*)right_value205)->_protocol_obj,0, 1, 0);
    right_value205 = come_decrement_ref_count(right_value205, 1, 0);
    _inf_value3=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value3=(struct sDataA*)(right_value207=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value206=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*1))),2,2));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=sDataA_finalize;
    _inf_value3->clone=sDataA_clone;
    _inf_value3->fun=sDataA_fun;
    _inf_valueX6=(struct IA*)come_increment_ref_count((struct IA*)(right_value209=_inf_value3));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value209=_inf_value3))->_protocol_obj);
    list$_IA$phphIAph_push_back(liIA_297,_inf_valueX6);
    call_finalizer(sDataA_finalize,right_value206,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value207,0, 1, 0);
    call_finalizer(((struct IA*)right_value209)->finalize, ((struct IA*)right_value209)->_protocol_obj,0, 1, 0);
    right_value209 = come_decrement_ref_count(right_value209, 1, 0);
    _inf_value4=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value4=(struct sDataA*)(right_value211=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value210=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*1))),3,3));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=sDataA_finalize;
    _inf_value4->clone=sDataA_clone;
    _inf_value4->fun=sDataA_fun;
    _inf_valueX7=(struct IA*)come_increment_ref_count((struct IA*)(right_value213=_inf_value4));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value213=_inf_value4))->_protocol_obj);
    list$_IA$phphIAph_push_back(liIA_297,_inf_valueX7);
    call_finalizer(sDataA_finalize,right_value210,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value211,0, 1, 0);
    call_finalizer(((struct IA*)right_value213)->finalize, ((struct IA*)right_value213)->_protocol_obj,0, 1, 0);
    right_value213 = come_decrement_ref_count(right_value213, 1, 0);
    for(
    it_307=list$_IA$phphIAph_begin((liIA_297));
    !list$_IA$phphIAph_end((liIA_297));
    it_307=list$_IA$phphIAph_next((liIA_297))
    ){
        printf("%d\n",it_307->fun(it_307->_protocol_obj,0,0));
    }
    __tuple_value7___309=(struct tuple3$ph_int$_int$_bool$*)come_increment_ref_count((struct tuple3$ph_int$_int$_bool$*)(right_value215=tuple3$_int$_int$_bool$phintintbool_initialize((struct tuple3$_int$_int$_bool$*)come_increment_ref_count((struct tuple3$_int$_int$_bool$*)(right_value214=(struct tuple3$_int$_int$_bool$*)come_calloc(1, sizeof(struct tuple3$_int$_int$_bool$)*1))),1,2,(_Bool)0)));
    call_finalizer(tuple3$_int$_int$_bool$phintintbool_finalize,right_value214,0, 1, 0);
    call_finalizer(tuple3$ph_int$_int$_bool$phintintbool_finalize,right_value215,0, 1, 0);
    aZZZ_310=__tuple_value7___309->v1;
    bZZZ_311=__tuple_value7___309->v2;
    xassert("tuple test",aZZZ_310==1&&bZZZ_311==2);
    fun_default_parametor(1,2);
    __current_stack6__.p_86 = &p_86;
    __current_stack6__.p2_87 = &p2_87;
    __current_stack6__.count_88 = &count_88;
    __current_stack6__.size2_89 = &size2_89;
    __current_stack6__.mem2_90 = &mem2_90;
    __current_stack6__.b_91 = &b_91;
    __current_stack6__.a_92 = &a_92;
    __current_stack6__.a2_93 = &a2_93;
    __current_stack6__.ax_96 = &ax_96;
    __current_stack6__.str_100 = &str_100;
    __current_stack6__.data_101 = &data_101;
    __current_stack6__.axyz_102 = &axyz_102;
    __current_stack6__.xxx_103 = &xxx_103;
    __current_stack6__.yyy_104 = &yyy_104;
    __current_stack6__.zzz_105 = &zzz_105;
    __current_stack6__.bzyz_106 = &bzyz_106;
    __current_stack6__.azyz_107 = &azyz_107;
    __current_stack6__.n_108 = &n_108;
    __current_stack6__.liX_109 = &liX_109;
    __current_stack6__.liX2_115 = &liX2_115;
    __current_stack6__.aX_124 = &aX_124;
    __current_stack6__.aXYZY_128 = &aXYZY_128;
    __current_stack6__.li_129 = &li_129;
    __current_stack6__.li2_131 = &li2_131;
    __current_stack6__.aXL_133 = &aXL_133;
    __current_stack6__.li3_170 = &li3_170;
    __current_stack6__.li4_178 = &li4_178;
    __current_stack6__.li5_182 = &li5_182;
    __current_stack6__.li6_187 = &li6_187;
    __current_stack6__.axyzX_198 = &axyzX_198;
    __current_stack6__.strXYXY_199 = &strXYXY_199;
    __current_stack6__.liZ_200 = &liZ_200;
    __current_stack6__.liZ2_206 = &liZ2_206;
    __current_stack6__.__list_value1___209 = &__list_value1___209;
    __current_stack6__.__list_value2___210 = &__list_value2___210;
    __current_stack6__.__list_value3___211 = &__list_value3___211;
    __current_stack6__.__map_value1___223 = &__map_value1___223;
    __current_stack6__.__map_value2___250 = &__map_value2___250;
    __current_stack6__.__map_value3___261 = &__map_value3___261;
    __current_stack6__.m1_262 = &m1_262;
    __current_stack6__.m2_279 = &m2_279;
    __current_stack6__.tt1_280 = &tt1_280;
    __current_stack6__.tt2_281 = &tt2_281;
    __current_stack6__.tt3_283 = &tt3_283;
    __current_stack6__.ttt1_284 = &ttt1_284;
    __current_stack6__.ttt2_285 = &ttt2_285;
    __current_stack6__.ttt3_286 = &ttt3_286;
    __current_stack6__.__tuple_value2___287 = &__tuple_value2___287;
    __current_stack6__.t4_288 = &t4_288;
    __current_stack6__.__tuple_value3___289 = &__tuple_value3___289;
    __current_stack6__.__tuple_value4___290 = &__tuple_value4___290;
    __current_stack6__.__tuple_value5___291 = &__tuple_value5___291;
    __current_stack6__.__tuple_value6___292 = &__tuple_value6___292;
    __current_stack6__.ia_294 = &ia_294;
    __current_stack6__.liIA_297 = &liIA_297;
    __current_stack6__.__tuple_value7___309 = &__tuple_value7___309;
    __current_stack6__.aZZZ_310 = &aZZZ_310;
    __current_stack6__.bZZZ_311 = &bZZZ_311;
    xZZZZZZZZ_312=tuple2$ph_int$_bool$phintbool_catch((struct tuple2$ph_int$_bool$*)(right_value216=fun_exception(1,2)),&__current_stack6__,method_block6);
    call_finalizer(tuple2$ph_int$_bool$phintbool_finalize,right_value216,0, 1, 0);
    xassert("exception test",xZZZZZZZZ_312==3);
    li_str_313=(struct list$ph_char$ph*)come_increment_ref_count((struct list$ph_char$ph*)(right_value218=list$_char$phphcharph_initialize((struct list$_char$ph*)come_increment_ref_count((struct list$_char$ph*)(right_value217=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value217,0, 1, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,right_value218,0, 1, 0);
    list$_char$phphcharph_push_back(li_str_313,(char*)come_increment_ref_count((char*)(right_value219=__builtin_string("AAA"))));
    right_value219 = come_decrement_ref_count(right_value219, 1, 0);
    list$_char$phphcharph_push_back(li_str_313,(char*)come_increment_ref_count((char*)(right_value220=__builtin_string("BBB"))));
    right_value220 = come_decrement_ref_count(right_value220, 1, 0);
    list$_char$phphcharph_push_back(li_str_313,(char*)come_increment_ref_count((char*)(right_value221=__builtin_string("CCC"))));
    right_value221 = come_decrement_ref_count(right_value221, 1, 0);
    __list_value4___314=(struct list$ph_char$ph*)come_increment_ref_count((struct list$ph_char$ph*)(right_value223=list$_char$phphcharph_initialize((struct list$_char$ph*)come_increment_ref_count((struct list$_char$ph*)(right_value222=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value222,0, 1, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,right_value223,0, 1, 0);
    list$_char$phphcharph_push_back(__list_value4___314,(char*)come_increment_ref_count((char*)(right_value224=__builtin_string("AAA"))));
    right_value224 = come_decrement_ref_count(right_value224, 1, 0);
    list$_char$phphcharph_push_back(__list_value4___314,(char*)come_increment_ref_count((char*)(right_value225=__builtin_string("BBB"))));
    right_value225 = come_decrement_ref_count(right_value225, 1, 0);
    list$_char$phphcharph_push_back(__list_value4___314,(char*)come_increment_ref_count((char*)(right_value226=__builtin_string("CCC"))));
    right_value226 = come_decrement_ref_count(right_value226, 1, 0);
    xassert("list test",list$_char$phphcharph_operator_equals(li_str_313,__list_value4___314));
    int __result__ = 0;
    ax_96 = come_decrement_ref_count(ax_96, 0, 0);
    str_100 = come_decrement_ref_count(str_100, 0, 0);
    call_finalizer(sData_finalize,data_101,0, 0, 0);
    axyz_102 = come_decrement_ref_count(axyz_102, 0, 0);
    xxx_103 = come_decrement_ref_count(xxx_103, 0, 0);
    yyy_104 = come_decrement_ref_count(yyy_104, 0, 0);
    zzz_105 = come_decrement_ref_count(zzz_105, 0, 0);
    call_finalizer(list$_char$phphcharph_finalize,liX_109,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,liX2_115,0, 0, 0);
    call_finalizer(list$_char$phphcharph_finalize,li_129,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,li2_131,0, 0, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,li3_170,0, 0, 0);
    call_finalizer(list$ph_int$phint_finalize,li4_178,0, 0, 0);
    call_finalizer(list$ph_int$phint_finalize,li5_182,0, 0, 0);
    call_finalizer(list$ph_int$phint_finalize,li6_187,0, 0, 0);
    axyzX_198 = come_decrement_ref_count(axyzX_198, 0, 0);
    call_finalizer(list$_int$phint_finalize,liZ_200,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,liZ2_206,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,__list_value1___209,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,__list_value2___210,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,__list_value3___211,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,__map_value1___223,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,__map_value2___250,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,__map_value3___261,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,m1_262,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,m2_279,0, 0, 0);
    call_finalizer(tuple1$_int$phint_finalize,tt1_280,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,tt2_281,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,tt3_283,0, 0, 0);
    call_finalizer(tuple1$_int$phint_finalize,ttt1_284,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,ttt2_285,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,ttt3_286,0, 0, 0);
    call_finalizer(tuple2$ph_char$ph_int$phcharphint_finalize,__tuple_value2___287,0, 0, 0);
    call_finalizer(tuple2$_char$ph_int$phcharphint_finalize,t4_288,0, 0, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,__tuple_value3___289,0, 0, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,__tuple_value4___290,0, 0, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,__tuple_value5___291,0, 0, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,__tuple_value6___292,0, 0, 0);
    call_finalizer(((struct IA*)ia_294)->finalize, ((struct IA*)ia_294)->_protocol_obj,0, 0, 0);
    ia_294 = come_decrement_ref_count(ia_294, 0, 0);
    call_finalizer(list$_IA$phphIAph_finalize,liIA_297,0, 0, 0);
    call_finalizer(tuple3$ph_int$_int$_bool$phintintbool_finalize,__tuple_value7___309,0, 0, 0);
    call_finalizer(list$_char$phphcharph_finalize,li_str_313,0, 0, 0);
    call_finalizer(list$_char$phphcharph_finalize,__list_value4___314,0, 0, 0);
    return __result__;
}

static void sData_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_108)));
        (*(parent->n_108))++;
}

static char* list$_char$phphcharph_begin(struct list$p_char$ph* self){
char* result_110;
memset(&result_110, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_110,0,sizeof(char*));
        char* __result__ = result_110;
        return __result__;
}

static _Bool list$_char$phphcharph_end(struct list$p_char$ph* self){
        struct list_item$p_char$ph* __result__ = self->it==((void*)0);
        return __result__;
}

static char* list$_char$phphcharph_next(struct list$p_char$ph* self){
char* result_112;
memset(&result_112, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_112,0,sizeof(char*));
        char* __result__ = result_112;
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
struct list_item$_int$* it_113;
struct list_item$_int$* prev_it_114;
memset(&it_113, 0, sizeof(struct list_item$_int$*));
memset(&prev_it_114, 0, sizeof(struct list_item$_int$*));
            it_113=self->head;
            while(it_113!=((void*)0)) {
                if(0) {
                }
                prev_it_114=it_113;
                it_113=it_113->next;
                come_free_object(prev_it_114);
            }
}

static void list$_int$phint_finalize(struct list$p_int$* self){
struct list_item$_int$$_int$* it_116;
struct list_item$_int$$_int$* prev_it_117;
memset(&it_116, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_117, 0, sizeof(struct list_item$_int$$_int$*));
        it_116=self->head;
        while(it_116!=((void*)0)) {
            if(0) {
            }
            prev_it_117=it_116;
            it_116=it_116->next;
            come_free_object(prev_it_117);
        }
}

static void list$_int$phint_push_back(struct list$p_int$* self, int item){
void* right_value82;
struct list_item$_int$$_int$* litem_118;
void* right_value83;
struct list_item$_int$$_int$* litem_119;
void* right_value84;
struct list_item$_int$$_int$* litem_120;
memset(&litem_118, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_119, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_120, 0, sizeof(struct list_item$_int$$_int$*));
        if(self->len==0) {
            litem_118=(struct list_item$_int$$_int$*)(right_value82=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_118->prev=((void*)0);
            litem_118->next=((void*)0);
            litem_118->item=item;
            self->tail=litem_118;
            self->head=litem_118;
        }
        else if(self->len==1) {
            litem_119=(struct list_item$_int$$_int$*)(right_value83=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_119->prev=self->head;
            litem_119->next=((void*)0);
            litem_119->item=item;
            self->tail=litem_119;
            self->head->next=litem_119;
        }
        else {
            litem_120=(struct list_item$_int$$_int$*)(right_value84=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_120->prev=self->tail;
            litem_120->next=((void*)0);
            litem_120->item=item;
            self->tail->next=litem_120;
            self->tail=litem_120;
        }
        self->len++;
}

static int list$_int$phint_begin(struct list$p_int$* self){
int result_121;
memset(&result_121, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_121,0,sizeof(int));
        int __result__ = result_121;
        return __result__;
}

static _Bool list$_int$phint_end(struct list$p_int$* self){
        struct list_item$p_int$* __result__ = self->it==((void*)0);
        return __result__;
}

static int list$_int$phint_next(struct list$p_int$* self){
int result_123;
memset(&result_123, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_123,0,sizeof(int));
        int __result__ = result_123;
        return __result__;
}

static void list$_int$phint_each(struct list$p_int$* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item$_int$$_int$* it_125;
int i_126;
_Bool end_flag_127;
memset(&it_125, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_126, 0, sizeof(int));
memset(&end_flag_127, 0, sizeof(_Bool));
        it_125=self->head;
        i_126=0;
        while(it_125!=((void*)0)) {
            end_flag_127=(_Bool)0;
            block(parent,it_125->item,i_126,&end_flag_127);
            if(end_flag_127==(_Bool)1) {
                break;
            }
            it_125=it_125->next;
            i_126++;
        }
}

void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_124)));
        (*(parent->aX_124))=2;
}

void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_133)));
        (*(parent->aXL_133))=2;
}

static int list$_int$phint_item(struct list$p_int$* self, int position, int default_value){
struct list_item$_int$$_int$* it_134;
int i_135;
memset(&it_134, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_135, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_134=self->head;
        i_135=0;
        while(it_134!=((void*)0)) {
            if(position==i_135) {
                int __result__ = it_134->item;
                return __result__;
            }
            it_134=it_134->next;
            i_135++;
        }
        int __result__ = default_value;
        return __result__;
}

static void list$_int$phint_insert(struct list$p_int$* self, int position, int item){
void* right_value95;
struct list_item$_int$$_int$* litem_139;
void* right_value96;
struct list_item$_int$$_int$* litem_140;
struct list_item$_int$$_int$* it_141;
int i_142;
void* right_value97;
struct list_item$_int$$_int$* litem_143;
memset(&litem_139, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_140, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it_141, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_142, 0, sizeof(int));
memset(&litem_143, 0, sizeof(struct list_item$_int$$_int$*));
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
            litem_139=(struct list_item$_int$$_int$*)(right_value95=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_139->prev=((void*)0);
            litem_139->next=self->head;
            litem_139->item=item;
            self->head->prev=litem_139;
            self->head=litem_139;
            self->len++;
        }
        else if(self->len==1) {
            litem_140=(struct list_item$_int$$_int$*)(right_value96=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_140->prev=self->head;
            litem_140->next=self->tail;
            litem_140->item=item;
            self->tail->prev=litem_140;
            self->head->next=litem_140;
            self->len++;
        }
        else {
            it_141=self->head;
            i_142=0;
            while(it_141!=((void*)0)) {
                if(position==i_142) {
                    litem_143=(struct list_item$_int$$_int$*)(right_value97=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_143->prev=it_141->prev;
                    litem_143->next=it_141;
                    litem_143->item=item;
                    it_141->prev->next=litem_143;
                    it_141->prev=litem_143;
                    self->len++;
                }
                it_141=it_141->next;
                i_142++;
            }
        }
}

static void list$p_int$$p_int$pint_push_back(struct list$p_int$* self, int item){
void* right_value92;
struct list_item$_int$$_int$* litem_136;
void* right_value93;
struct list_item$_int$$_int$* litem_137;
void* right_value94;
struct list_item$_int$$_int$* litem_138;
memset(&litem_136, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_137, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_138, 0, sizeof(struct list_item$_int$$_int$*));
                if(self->len==0) {
                    litem_136=(struct list_item$_int$$_int$*)(right_value92=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_136->prev=((void*)0);
                    litem_136->next=((void*)0);
                    litem_136->item=item;
                    self->tail=litem_136;
                    self->head=litem_136;
                }
                else if(self->len==1) {
                    litem_137=(struct list_item$_int$$_int$*)(right_value93=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_137->prev=self->head;
                    litem_137->next=((void*)0);
                    litem_137->item=item;
                    self->tail=litem_137;
                    self->head->next=litem_137;
                }
                else {
                    litem_138=(struct list_item$_int$$_int$*)(right_value94=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_138->prev=self->tail;
                    litem_138->next=((void*)0);
                    litem_138->item=item;
                    self->tail->next=litem_138;
                    self->tail=litem_138;
                }
                self->len++;
}

static void list$_char$phphcharph_insert(struct list$p_char$ph* self, int position, char* item){
void* right_value101;
struct list_item$_char$ph$_char$ph* litem_147;
void* right_value102;
struct list_item$_char$ph$_char$ph* litem_148;
struct list_item$_char$ph$_char$ph* it_149;
int i_150;
void* right_value103;
struct list_item$_char$ph$_char$ph* litem_151;
memset(&litem_147, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_148, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&it_149, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_150, 0, sizeof(int));
memset(&litem_151, 0, sizeof(struct list_item$_char$ph$_char$ph*));
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
            litem_147=(struct list_item$_char$ph$_char$ph*)(right_value101=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_147->prev=((void*)0);
            litem_147->next=self->head;
            if(litem_147->item) {(char*)come_decrement_ref_count(litem_147->item,0,0); }
            litem_147->item=(char*)come_increment_ref_count(item);
            self->head->prev=litem_147;
            self->head=litem_147;
            self->len++;
        }
        else if(self->len==1) {
            litem_148=(struct list_item$_char$ph$_char$ph*)(right_value102=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_148->prev=self->head;
            litem_148->next=self->tail;
            if(litem_148->item) {(char*)come_decrement_ref_count(litem_148->item,0,0); }
            litem_148->item=(char*)come_increment_ref_count(item);
            self->tail->prev=litem_148;
            self->head->next=litem_148;
            self->len++;
        }
        else {
            it_149=self->head;
            i_150=0;
            while(it_149!=((void*)0)) {
                if(position==i_150) {
                    litem_151=(struct list_item$_char$ph$_char$ph*)(right_value103=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_151->prev=it_149->prev;
                    litem_151->next=it_149;
                    if(litem_151->item) {(char*)come_decrement_ref_count(litem_151->item,0,0); }
                    litem_151->item=(char*)come_increment_ref_count(item);
                    it_149->prev->next=litem_151;
                    it_149->prev=litem_151;
                    self->len++;
                }
                it_149=it_149->next;
                i_150++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static void list$p_char$ph$p_char$phpcharph_push_back(struct list$p_char$ph* self, char* item){
void* right_value98;
struct list_item$_char$ph$_char$ph* litem_144;
void* right_value99;
struct list_item$_char$ph$_char$ph* litem_145;
void* right_value100;
struct list_item$_char$ph$_char$ph* litem_146;
memset(&litem_144, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_145, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_146, 0, sizeof(struct list_item$_char$ph$_char$ph*));
                if(self->len==0) {
                    litem_144=(struct list_item$_char$ph$_char$ph*)(right_value98=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_144->prev=((void*)0);
                    litem_144->next=((void*)0);
                    if(litem_144->item) {(char*)come_decrement_ref_count(litem_144->item,0,0); }
                    litem_144->item=(char*)come_increment_ref_count(item);
                    self->tail=litem_144;
                    self->head=litem_144;
                }
                else if(self->len==1) {
                    litem_145=(struct list_item$_char$ph$_char$ph*)(right_value99=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_145->prev=self->head;
                    litem_145->next=((void*)0);
                    if(litem_145->item) {(char*)come_decrement_ref_count(litem_145->item,0,0); }
                    litem_145->item=(char*)come_increment_ref_count(item);
                    self->tail=litem_145;
                    self->head->next=litem_145;
                }
                else {
                    litem_146=(struct list_item$_char$ph$_char$ph*)(right_value100=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_146->prev=self->tail;
                    litem_146->next=((void*)0);
                    if(litem_146->item) {(char*)come_decrement_ref_count(litem_146->item,0,0); }
                    litem_146->item=(char*)come_increment_ref_count(item);
                    self->tail->next=litem_146;
                    self->tail=litem_146;
                }
                self->len++;
                item = come_decrement_ref_count(item, 0, 1);
}

static char* list$_char$phphcharph_item(struct list$p_char$ph* self, int position, char* default_value){
struct list_item$_char$ph$_char$ph* it_152;
int i_153;
memset(&it_152, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_153, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_152=self->head;
        i_153=0;
        while(it_152!=((void*)0)) {
            if(position==i_153) {
                char* __result__ = it_152->item;
                return __result__;
            }
            it_152=it_152->next;
            i_153++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list$_char$phphcharph_reset(struct list$p_char$ph* self){
struct list_item$_char$ph$_char$ph* it_154;
struct list_item$_char$ph$_char$ph* prev_it_155;
memset(&it_154, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&prev_it_155, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        it_154=self->head;
        while(it_154!=((void*)0)) {
            prev_it_155=it_154;
            it_154=it_154->next;
            call_finalizer(list_item$_char$ph$_char$phpcharph_finalize,prev_it_155,0, 0, 0);
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
int tmp_156;
struct list_item$_int$$_int$* it_159;
int i_160;
struct list_item$_int$$_int$* prev_it_161;
struct list_item$_int$$_int$* it_162;
int i_163;
struct list_item$_int$$_int$* prev_it_164;
struct list_item$_int$$_int$* it_165;
struct list_item$_int$$_int$* head_prev_it_166;
struct list_item$_int$$_int$* tail_it_167;
int i_168;
struct list_item$_int$$_int$* prev_it_169;
memset(&tmp_156, 0, sizeof(int));
memset(&it_159, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_160, 0, sizeof(int));
memset(&prev_it_161, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it_162, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_163, 0, sizeof(int));
memset(&prev_it_164, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it_165, 0, sizeof(struct list_item$_int$$_int$*));
memset(&head_prev_it_166, 0, sizeof(struct list_item$_int$$_int$*));
memset(&tail_it_167, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_168, 0, sizeof(int));
memset(&prev_it_169, 0, sizeof(struct list_item$_int$$_int$*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_156=tail;
            tail=head;
            head=tmp_156;
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
            it_159=self->head;
            i_160=0;
            while(it_159!=((void*)0)) {
                if(i_160<tail) {
                    prev_it_161=it_159;
                    it_159=it_159->next;
                    i_160++;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_161,0, 0, 0);
                    self->len--;
                }
                else if(i_160==tail) {
                    self->head=it_159;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_159=it_159->next;
                    i_160++;
                }
            }
        }
        else if(tail==self->len) {
            it_162=self->head;
            i_163=0;
            while(it_162!=((void*)0)) {
                if(i_163==head) {
                    self->tail=it_162->prev;
                    self->tail->next=((void*)0);
                }
                if(i_163>=head) {
                    prev_it_164=it_162;
                    it_162=it_162->next;
                    i_163++;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_164,0, 0, 0);
                    self->len--;
                }
                else {
                    it_162=it_162->next;
                    i_163++;
                }
            }
        }
        else {
            it_165=self->head;
            head_prev_it_166=((void*)0);
            tail_it_167=((void*)0);
            i_168=0;
            while(it_165!=((void*)0)) {
                if(i_168==head) {
                    head_prev_it_166=it_165->prev;
                }
                if(i_168==tail) {
                    tail_it_167=it_165;
                }
                if(i_168>=head&&i_168<tail) {
                    prev_it_169=it_165;
                    it_165=it_165->next;
                    i_168++;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_169,0, 0, 0);
                    self->len--;
                }
                else {
                    it_165=it_165->next;
                    i_168++;
                }
            }
            if(head_prev_it_166!=((void*)0)) {
                head_prev_it_166->next=tail_it_167;
            }
            if(tail_it_167!=((void*)0)) {
                tail_it_167->prev=head_prev_it_166;
            }
        }
}

static void list$p_int$$p_int$pint_reset(struct list$p_int$* self){
struct list_item$_int$$_int$* it_157;
struct list_item$_int$$_int$* prev_it_158;
memset(&it_157, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_158, 0, sizeof(struct list_item$_int$$_int$*));
                it_157=self->head;
                while(it_157!=((void*)0)) {
                    prev_it_158=it_157;
                    it_157=it_157->next;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_158,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$_int$$_int$pint_finalize(struct list_item$_int$$_int$* self){
}

static void list$ph_char$phphcharph_push_back(struct list$p_char$ph* self, char* item){
void* right_value107;
struct list_item$_char$ph$_char$ph* litem_171;
void* right_value108;
struct list_item$_char$ph$_char$ph* litem_172;
void* right_value109;
struct list_item$_char$ph$_char$ph* litem_173;
memset(&litem_171, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_172, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_173, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        if(self->len==0) {
            litem_171=(struct list_item$_char$ph$_char$ph*)(right_value107=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_171->prev=((void*)0);
            litem_171->next=((void*)0);
            if(litem_171->item) {(char*)come_decrement_ref_count(litem_171->item,0,0); }
            litem_171->item=(char*)come_increment_ref_count(item);
            self->tail=litem_171;
            self->head=litem_171;
        }
        else if(self->len==1) {
            litem_172=(struct list_item$_char$ph$_char$ph*)(right_value108=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_172->prev=self->head;
            litem_172->next=((void*)0);
            if(litem_172->item) {(char*)come_decrement_ref_count(litem_172->item,0,0); }
            litem_172->item=(char*)come_increment_ref_count(item);
            self->tail=litem_172;
            self->head->next=litem_172;
        }
        else {
            litem_173=(struct list_item$_char$ph$_char$ph*)(right_value109=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_173->prev=self->tail;
            litem_173->next=((void*)0);
            if(litem_173->item) {(char*)come_decrement_ref_count(litem_173->item,0,0); }
            litem_173->item=(char*)come_increment_ref_count(item);
            self->tail->next=litem_173;
            self->tail=litem_173;
        }
        self->len++;
        item = come_decrement_ref_count(item, 0, 1);
}

static void list$ph_char$phphcharph_replace(struct list$p_char$ph* self, int position, char* item){
struct list_item$_char$ph$_char$ph* it_174;
int i_175;
memset(&it_174, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_175, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_174=self->head;
        i_175=0;
        while(it_174!=((void*)0)) {
            if(position==i_175) {
                if(it_174->item) {(char*)come_decrement_ref_count(it_174->item,0,0); }
                it_174->item=(char*)come_increment_ref_count(item);
                break;
            }
            it_174=it_174->next;
            i_175++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$ph_char$phphcharph_item(struct list$p_char$ph* self, int position, char* default_value){
struct list_item$_char$ph$_char$ph* it_176;
int i_177;
memset(&it_176, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_177, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_176=self->head;
        i_177=0;
        while(it_176!=((void*)0)) {
            if(position==i_177) {
                char* __result__ = it_176->item;
                return __result__;
            }
            it_176=it_176->next;
            i_177++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list$ph_int$phint_push_back(struct list$p_int$* self, int item){
void* right_value116;
struct list_item$_int$$_int$* litem_179;
void* right_value117;
struct list_item$_int$$_int$* litem_180;
void* right_value118;
struct list_item$_int$$_int$* litem_181;
memset(&litem_179, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_180, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_181, 0, sizeof(struct list_item$_int$$_int$*));
        if(self->len==0) {
            litem_179=(struct list_item$_int$$_int$*)(right_value116=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_179->prev=((void*)0);
            litem_179->next=((void*)0);
            litem_179->item=item;
            self->tail=litem_179;
            self->head=litem_179;
        }
        else if(self->len==1) {
            litem_180=(struct list_item$_int$$_int$*)(right_value117=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_180->prev=self->head;
            litem_180->next=((void*)0);
            litem_180->item=item;
            self->tail=litem_180;
            self->head->next=litem_180;
        }
        else {
            litem_181=(struct list_item$_int$$_int$*)(right_value118=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_181->prev=self->tail;
            litem_181->next=((void*)0);
            litem_181->item=item;
            self->tail->next=litem_181;
            self->tail=litem_181;
        }
        self->len++;
}

static _Bool list$ph_int$phint_equals(struct list$p_int$* left, struct list$p_int$* right){
struct list_item$_int$$_int$* it_183;
struct list_item$_int$$_int$* it2_184;
memset(&it_183, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it2_184, 0, sizeof(struct list_item$_int$$_int$*));
        if(left->len!=right->len) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        it_183=left->head;
        it2_184=right->head;
        while(it_183!=((void*)0)) {
            if(!int_equals(it_183->item,it2_184->item)) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_183=it_183->next;
            it2_184=it2_184->next;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static int list$ph_int$phint_find(struct list$p_int$* self, int item, int default_value){
int it2_185;
struct list_item$_int$$_int$* it_186;
memset(&it2_185, 0, sizeof(int));
memset(&it_186, 0, sizeof(struct list_item$_int$$_int$*));
        it2_185=0;
        it_186=self->head;
        while(it_186!=((void*)0)) {
            if(int_equals(it_186->item,item)) {
                int __result__ = it2_185;
                return __result__;
            }
            it2_185++;
            it_186=it_186->next;
        }
        int __result__ = default_value;
        return __result__;
}

static struct list$ph_int$* list$ph_int$phint_sublist(struct list$p_int$* self, int begin, int tail){
void* right_value123;
void* right_value124;
struct list$_int$$_int$* result_188;
struct list_item$_int$$_int$* it_193;
int i_194;
memset(&result_188, 0, sizeof(struct list$_int$$_int$*));
memset(&it_193, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_194, 0, sizeof(int));
        result_188=(struct list$ph_int$*)come_increment_ref_count((struct list$ph_int$*)(right_value124=list$_int$$_int$phint_initialize((struct list$_int$$_int$*)come_increment_ref_count((struct list$_int$$_int$*)(right_value123=(struct list$_int$$_int$*)come_calloc(1, sizeof(struct list$_int$$_int$)*1))))));
        call_finalizer(list$_int$$_int$phint_finalize,right_value123,0, 1, 0);
        call_finalizer(list$ph_int$$ph_int$phint_finalize,right_value124,0, 1, 0);
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
        it_193=self->head;
        i_194=0;
        while(it_193!=((void*)0)) {
            if(i_194>=begin&&i_194<tail) {
                list$_int$$_int$phint_push_back(result_188,it_193->item);
            }
            it_193=it_193->next;
            i_194++;
        }
        struct list$_int$$_int$* __result__ = result_188;
        call_finalizer(list$_int$$_int$phint_finalize,result_188,0, 0, 1);
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
struct list_item$_int$$_int$* it_189;
struct list_item$_int$$_int$* prev_it_190;
memset(&it_189, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_190, 0, sizeof(struct list_item$_int$$_int$*));
            it_189=self->head;
            while(it_189!=((void*)0)) {
                if(0) {
                }
                prev_it_190=it_189;
                it_189=it_189->next;
                come_free_object(prev_it_190);
            }
}

static void list$ph_int$$ph_int$phint_finalize(struct list$p_int$* self){
struct list_item$_int$$_int$* it_191;
struct list_item$_int$$_int$* prev_it_192;
memset(&it_191, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_192, 0, sizeof(struct list_item$_int$$_int$*));
            it_191=self->head;
            while(it_191!=((void*)0)) {
                if(0) {
                }
                prev_it_192=it_191;
                it_191=it_191->next;
                come_free_object(prev_it_192);
            }
}

static void list$_int$$_int$phint_push_back(struct list$p_int$* self, int item){
void* right_value125;
struct list_item$_int$$_int$* litem_195;
void* right_value126;
struct list_item$_int$$_int$* litem_196;
void* right_value127;
struct list_item$_int$$_int$* litem_197;
memset(&litem_195, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_196, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_197, 0, sizeof(struct list_item$_int$$_int$*));
                    if(self->len==0) {
                        litem_195=(struct list_item$_int$$_int$*)(right_value125=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                        litem_195->prev=((void*)0);
                        litem_195->next=((void*)0);
                        litem_195->item=item;
                        self->tail=litem_195;
                        self->head=litem_195;
                    }
                    else if(self->len==1) {
                        litem_196=(struct list_item$_int$$_int$*)(right_value126=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                        litem_196->prev=self->head;
                        litem_196->next=((void*)0);
                        litem_196->item=item;
                        self->tail=litem_196;
                        self->head->next=litem_196;
                    }
                    else {
                        litem_197=(struct list_item$_int$$_int$*)(right_value127=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                        litem_197->prev=self->tail;
                        litem_197->next=((void*)0);
                        litem_197->item=item;
                        self->tail->next=litem_197;
                        self->tail=litem_197;
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
struct list_item$_int$$_int$* it_201;
int i_202;
memset(&it_201, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_202, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_201=self->head;
            i_202=0;
            while(it_201!=((void*)0)) {
                if(position==i_202) {
                    it_201->item=item;
                    break;
                }
                it_201=it_201->next;
                i_202++;
            }
}

static int list$_int$phint_operator_load_element(struct list$p_int$* self, int index){
int default_value_203;
memset(&default_value_203, 0, sizeof(int));
        memset(&default_value_203,0,sizeof(int));
        int __result__ = list$p_int$$p_int$pint_item(self,index,default_value_203);
        return __result__;
}

static int list$p_int$$p_int$pint_item(struct list$p_int$* self, int position, int default_value){
struct list_item$_int$$_int$* it_204;
int i_205;
memset(&it_204, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_205, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_204=self->head;
            i_205=0;
            while(it_204!=((void*)0)) {
                if(position==i_205) {
                    int __result__ = it_204->item;
                    return __result__;
                }
                it_204=it_204->next;
                i_205++;
            }
            int __result__ = default_value;
            return __result__;
}

static _Bool list$_int$phint_operator_equals(struct list$p_int$* self, struct list$p_int$* right){
        _Bool __result__ = list$p_int$$p_int$pint_equals(self,right);
        return __result__;
}

static _Bool list$p_int$$p_int$pint_equals(struct list$p_int$* left, struct list$p_int$* right){
struct list_item$_int$$_int$* it_207;
struct list_item$_int$$_int$* it2_208;
memset(&it_207, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it2_208, 0, sizeof(struct list_item$_int$$_int$*));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_207=left->head;
            it2_208=right->head;
            while(it_207!=((void*)0)) {
                if(!int_equals(it_207->item,it2_208->item)) {
                    _Bool __result__ = (_Bool)0;
                    return __result__;
                }
                it_207=it_207->next;
                it2_208=it2_208->next;
            }
            _Bool __result__ = (_Bool)1;
            return __result__;
}

void method_block5(struct __current_stack5__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static struct map$ph_char$p_int$* map$_char$p_int$phcharpint_initialize(struct map$ph_char$p_int$* self){
void* right_value145;
void* right_value146;
void* right_value147;
int i_212;
void* right_value148;
void* right_value149;
memset(&i_212, 0, sizeof(int));
        self->keys=(char***)(right_value145=(char***)come_calloc(1, sizeof(char**)*1*128));
        self->items=(int**)(right_value146=(int**)come_calloc(1, sizeof(int*)*1*128));
        self->item_existance=(_Bool**)(right_value147=(_Bool**)come_calloc(1, sizeof(_Bool*)*1*128));
        for(
        i_212=0;
        i_212<128;
        i_212++
        ){
            self->item_existance[i_212]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        if(self->key_list) {(struct list$ph_char$p*)come_decrement_ref_count(self->key_list,0,0); }
        self->key_list=(struct list$ph_char$p*)come_increment_ref_count((struct list$ph_char$p*)(right_value149=list$_char$pphcharp_initialize((struct list$_char$p*)come_increment_ref_count((struct list$_char$p*)(right_value148=(struct list$_char$p*)come_calloc(1, sizeof(struct list$_char$p)*1))))));
        call_finalizer(list$_char$pphcharp_finalize,right_value148,0, 1, 0);
        call_finalizer(list$ph_char$p$ph_char$pphcharp_finalize,right_value149,0, 1, 0);
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
struct list_item$_char$p* it_213;
struct list_item$_char$p* prev_it_214;
memset(&it_213, 0, sizeof(struct list_item$_char$p*));
memset(&prev_it_214, 0, sizeof(struct list_item$_char$p*));
                it_213=self->head;
                while(it_213!=((void*)0)) {
                    if(0) {
                        it_213->item = come_decrement_ref_count(it_213->item, 0, 0);
                    }
                    prev_it_214=it_213;
                    it_213=it_213->next;
                    come_free_object(prev_it_214);
                }
}

static void list$_char$pphcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p$_char$p* it_215;
struct list_item$_char$p$_char$p* prev_it_216;
memset(&it_215, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_216, 0, sizeof(struct list_item$_char$p$_char$p*));
            it_215=self->head;
            while(it_215!=((void*)0)) {
                if(0) {
                    it_215->item = come_decrement_ref_count(it_215->item, 0, 0);
                }
                prev_it_216=it_215;
                it_215=it_215->next;
                come_free_object(prev_it_216);
            }
}

static void list$ph_char$p$ph_char$pphcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p$_char$p* it_217;
struct list_item$_char$p$_char$p* prev_it_218;
memset(&it_217, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_218, 0, sizeof(struct list_item$_char$p$_char$p*));
            it_217=self->head;
            while(it_217!=((void*)0)) {
                if(0) {
                    it_217->item = come_decrement_ref_count(it_217->item, 0, 0);
                }
                prev_it_218=it_217;
                it_217=it_217->next;
                come_free_object(prev_it_218);
            }
}

static void map$ph_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_219;
int i_220;
memset(&i_219, 0, sizeof(int));
memset(&i_220, 0, sizeof(int));
            for(
            i_219=0;
            i_219<self->size;
            i_219++
            ){
                if(self->item_existance[i_219]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_220=0;
            i_220<self->size;
            i_220++
            ){
                if(self->item_existance[i_220]) {
                    if(0) {
                        self->keys[i_220] = come_decrement_ref_count(self->keys[i_220], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void list$ph_char$ppcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p$_char$p* it_221;
struct list_item$_char$p$_char$p* prev_it_222;
memset(&it_221, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_222, 0, sizeof(struct list_item$_char$p$_char$p*));
                it_221=self->head;
                while(it_221!=((void*)0)) {
                    if(0) {
                        it_221->item = come_decrement_ref_count(it_221->item, 0, 0);
                    }
                    prev_it_222=it_221;
                    it_221=it_221->next;
                    come_free_object(prev_it_222);
                }
}

static void map$_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_224;
int i_225;
memset(&i_224, 0, sizeof(int));
memset(&i_225, 0, sizeof(int));
        for(
        i_224=0;
        i_224<self->size;
        i_224++
        ){
            if(self->item_existance[i_224]) {
                if(0) {
                }
            }
        }
        come_free_object((char*)self->items);
        for(
        i_225=0;
        i_225<self->size;
        i_225++
        ){
            if(self->item_existance[i_225]) {
                if(0) {
                    self->keys[i_225] = come_decrement_ref_count(self->keys[i_225], 0, 0);
                }
            }
        }
        come_free_object((char*)self->keys);
        call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
        self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$_char$p_int$phcharpint_insert(struct map$p_char$p_int$* self, char* key, int item){
int hash_241;
int it_242;
_Bool same_key_exist_243;
char* it2_245;
memset(&hash_241, 0, sizeof(int));
memset(&it_242, 0, sizeof(int));
memset(&same_key_exist_243, 0, sizeof(_Bool));
memset(&it2_245, 0, sizeof(char*));
        if(self->len*2>=self->size) {
            map$p_char$p_int$$p_char$p_int$pcharpint_rehash(self);
        }
        hash_241=charp_get_hash_key(key)%self->size;
        it_242=hash_241;
        while((_Bool)1) {
            if(self->item_existance[it_242]) {
                if(charp_equals(self->keys[it_242],key)) {
                    if(0) {
                        self->keys[it_242] = come_decrement_ref_count(self->keys[it_242], 0, 0);
                        self->keys[it_242]=key;
                    }
                    else {
                        self->keys[it_242]=key;
                    }
                    if(0) {
                        self->items[it_242]=item;
                    }
                    else {
                        self->items[it_242]=item;
                    }
                    break;
                }
                it_242++;
                if(it_242>=self->size) {
                    it_242=0;
                }
                else if(it_242==hash_241) {
                    fprintf(stderr,"unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_242]=(_Bool)1;
                if(0) {
                    self->keys[it_242] = come_decrement_ref_count(self->keys[it_242], 0, 0);
                    self->keys[it_242]=key;
                }
                else {
                    self->keys[it_242]=key;
                }
                if(0) {
                    self->items[it_242]=item;
                }
                else {
                    self->items[it_242]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_243=(_Bool)0;
        for(
        it2_245=list$ph_char$p$ph_char$pphcharp_begin((self->key_list));
        !list$ph_char$p$ph_char$pphcharp_end((self->key_list));
        it2_245=list$ph_char$p$ph_char$pphcharp_next((self->key_list))
        ){
            if(charp_equals(it2_245,key)) {
                same_key_exist_243=(_Bool)1;
            }
        }
        if(!same_key_exist_243) {
            list$ph_char$p$ph_char$pphcharp_push_back(self->key_list,key);
        }
}

static void map$p_char$p_int$$p_char$p_int$pcharpint_rehash(struct map$p_char$p_int$* self){
int size_226;
void* right_value151;
char** keys_227;
void* right_value152;
int* items_228;
void* right_value153;
_Bool* item_existance_229;
int len_230;
char* it_232;
int default_value_234;
int it2_237;
int hash_238;
int n_239;
int default_value_240;
memset(&size_226, 0, sizeof(int));
memset(&keys_227, 0, sizeof(char**));
memset(&items_228, 0, sizeof(int*));
memset(&item_existance_229, 0, sizeof(_Bool*));
memset(&len_230, 0, sizeof(int));
memset(&it_232, 0, sizeof(char*));
memset(&default_value_234, 0, sizeof(int));
memset(&it2_237, 0, sizeof(int));
memset(&hash_238, 0, sizeof(int));
memset(&n_239, 0, sizeof(int));
memset(&default_value_240, 0, sizeof(int));
                size_226=self->size*3;
                keys_227=(char***)(right_value151=(char***)come_calloc(1, sizeof(char**)*1*size_226));
                items_228=(int**)(right_value152=(int**)come_calloc(1, sizeof(int*)*1*size_226));
                item_existance_229=(_Bool**)(right_value153=(_Bool**)come_calloc(1, sizeof(_Bool*)*1*size_226));
                len_230=0;
                for(
                it_232=map$p_char$p_int$$p_char$p_int$pcharpint_begin(self);
                !map$p_char$p_int$$p_char$p_int$pcharpint_end(self);
                it_232=map$p_char$p_int$$p_char$p_int$pcharpint_next(self)
                ){
                    it2_237=map$p_char$p_int$$p_char$p_int$pcharpint_at(self,it_232,default_value_234);
                    hash_238=charp_get_hash_key(it_232)%size_226;
                    n_239=hash_238;
                    while((_Bool)1) {
                        if(item_existance_229[n_239]) {
                            n_239++;
                            if(n_239>=size_226) {
                                n_239=0;
                            }
                            else if(n_239==hash_238) {
                                fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_229[n_239]=(_Bool)1;
                            keys_227[n_239]=it_232;
                            items_228[n_239]=map$p_char$p_int$$p_char$p_int$pcharpint_at(self,it_232,default_value_240);
                            len_230++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
                come_free_object((char*)self->keys);
                self->keys=keys_227;
                self->items=items_228;
                self->item_existance=item_existance_229;
                self->size=size_226;
                self->len=len_230;
}

static char* map$p_char$p_int$$p_char$p_int$pcharpint_begin(struct map$p_char$p_int$* self){
char* result_231;
memset(&result_231, 0, sizeof(char*));
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result__ = self->key_list->it->item;
                        return __result__;
                    }
                    memset(&result_231,0,sizeof(char*));
                    char* __result__ = result_231;
                    return __result__;
}

static _Bool map$p_char$p_int$$p_char$p_int$pcharpint_end(struct map$p_char$p_int$* self){
                    struct list_item$p_char$p* __result__ = self->key_list->it==((void*)0);
                    return __result__;
}

static char* map$p_char$p_int$$p_char$p_int$pcharpint_next(struct map$p_char$p_int$* self){
char* result_233;
memset(&result_233, 0, sizeof(char*));
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result__ = self->key_list->it->item;
                        return __result__;
                    }
                    memset(&result_233,0,sizeof(char*));
                    char* __result__ = result_233;
                    return __result__;
}

static int map$p_char$p_int$$p_char$p_int$pcharpint_at(struct map$p_char$p_int$* self, char* key, int default_value){
int hash_235;
int it_236;
memset(&hash_235, 0, sizeof(int));
memset(&it_236, 0, sizeof(int));
                        hash_235=charp_get_hash_key(((char*)key))%self->size;
                        it_236=hash_235;
                        while((_Bool)1) {
                            if(self->item_existance[it_236]) {
                                if(charp_equals(self->keys[it_236],key)) {
                                    int __result__ = self->items[it_236];
                                    return __result__;
                                }
                                it_236++;
                                if(it_236>=self->size) {
                                    it_236=0;
                                }
                                else if(it_236==hash_235) {
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
char* result_244;
memset(&result_244, 0, sizeof(char*));
            self->it=self->head;
            if(self->it) {
                char* __result__ = self->it->item;
                return __result__;
            }
            memset(&result_244,0,sizeof(char*));
            char* __result__ = result_244;
            return __result__;
}

static _Bool list$ph_char$p$ph_char$pphcharp_end(struct list$p_char$p* self){
            struct list_item$p_char$p* __result__ = self->it==((void*)0);
            return __result__;
}

static char* list$ph_char$p$ph_char$pphcharp_next(struct list$p_char$p* self){
char* result_246;
memset(&result_246, 0, sizeof(char*));
            self->it=self->it->next;
            if(self->it) {
                char* __result__ = self->it->item;
                return __result__;
            }
            memset(&result_246,0,sizeof(char*));
            char* __result__ = result_246;
            return __result__;
}

static void list$ph_char$p$ph_char$pphcharp_push_back(struct list$p_char$p* self, char* item){
void* right_value154;
struct list_item$_char$p$_char$p* litem_247;
void* right_value155;
struct list_item$_char$p$_char$p* litem_248;
void* right_value156;
struct list_item$_char$p$_char$p* litem_249;
memset(&litem_247, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&litem_248, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&litem_249, 0, sizeof(struct list_item$_char$p$_char$p*));
                if(self->len==0) {
                    litem_247=(struct list_item$_char$p$_char$p*)(right_value154=(struct list_item$_char$p$_char$p*)come_calloc(1, sizeof(struct list_item$_char$p$_char$p)*1));
                    litem_247->prev=((void*)0);
                    litem_247->next=((void*)0);
                    litem_247->item=item;
                    self->tail=litem_247;
                    self->head=litem_247;
                }
                else if(self->len==1) {
                    litem_248=(struct list_item$_char$p$_char$p*)(right_value155=(struct list_item$_char$p$_char$p*)come_calloc(1, sizeof(struct list_item$_char$p$_char$p)*1));
                    litem_248->prev=self->head;
                    litem_248->next=((void*)0);
                    litem_248->item=item;
                    self->tail=litem_248;
                    self->head->next=litem_248;
                }
                else {
                    litem_249=(struct list_item$_char$p$_char$p*)(right_value156=(struct list_item$_char$p$_char$p*)come_calloc(1, sizeof(struct list_item$_char$p$_char$p)*1));
                    litem_249->prev=self->tail;
                    litem_249->next=((void*)0);
                    litem_249->item=item;
                    self->tail->next=litem_249;
                    self->tail=litem_249;
                }
                self->len++;
}

static _Bool map$_char$p_int$phcharpint_operator_equals(struct map$p_char$p_int$* left, struct map$p_char$p_int$* right){
        _Bool __result__ = map$p_char$p_int$$p_char$p_int$pcharpint_equals(left,right);
        return __result__;
}

static _Bool map$p_char$p_int$$p_char$p_int$pcharpint_equals(struct map$p_char$p_int$* left, struct map$p_char$p_int$* right){
int n_251;
_Bool result_252;
char* it_253;
char* default_value_254;
char* it2_257;
int default_value2_258;
int item_259;
int item2_260;
memset(&n_251, 0, sizeof(int));
memset(&result_252, 0, sizeof(_Bool));
memset(&it_253, 0, sizeof(char*));
memset(&default_value_254, 0, sizeof(char*));
memset(&it2_257, 0, sizeof(char*));
memset(&default_value2_258, 0, sizeof(int));
memset(&item_259, 0, sizeof(int));
memset(&item2_260, 0, sizeof(int));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            n_251=0;
            result_252=(_Bool)1;
            for(
            it_253=list$ph_char$p$ph_char$pphcharp_begin((left->key_list));
            !list$ph_char$p$ph_char$pphcharp_end((left->key_list));
            it_253=list$ph_char$p$ph_char$pphcharp_next((left->key_list))
            ){
                it2_257=list$ph_char$p$ph_char$pphcharp_item(right->key_list,n_251,default_value_254);
                if(charp_equals(it_253,it2_257)) {
                    item_259=map$p_char$p_int$$p_char$p_int$pcharpint_at(left,it_253,default_value2_258);
                    item2_260=map$p_char$p_int$$p_char$p_int$pcharpint_at(left,it2_257,default_value2_258);
                    if(!int_equals(item_259,item2_260)) {
                        result_252=(_Bool)0;
                    }
                }
                else {
                    result_252=(_Bool)0;
                }
                n_251++;
            }
            _Bool __result__ = result_252;
            return __result__;
}

static char* list$ph_char$p$ph_char$pphcharp_item(struct list$p_char$p* self, int position, char* default_value){
struct list_item$_char$p$_char$p* it_255;
int i_256;
memset(&it_255, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&i_256, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_255=self->head;
                    i_256=0;
                    while(it_255!=((void*)0)) {
                        if(position==i_256) {
                            char* __result__ = it_255->item;
                            return __result__;
                        }
                        it_255=it_255->next;
                        i_256++;
                    }
                    char* __result__ = default_value;
                    return __result__;
}

static int map$_char$p_int$phcharpint_operator_load_element(struct map$p_char$p_int$* self, char* key){
int default_value_263;
memset(&default_value_263, 0, sizeof(int));
        memset(&default_value_263,0,sizeof(int));
        int __result__ = map$p_char$p_int$$p_char$p_int$pcharpint_at(self,key,default_value_263);
        return __result__;
}

static struct map$ph_char$p_int$* map$_char$p_int$phcharpint_clone(struct map$p_char$p_int$* self){
void* right_value161;
void* right_value167;
struct map$ph_char$p_int$* result_267;
char* it_272;
int default_value_273;
int it2_274;
memset(&result_267, 0, sizeof(struct map$ph_char$p_int$*));
memset(&it_272, 0, sizeof(char*));
memset(&default_value_273, 0, sizeof(int));
memset(&it2_274, 0, sizeof(int));
        if(self==((void*)0)) {
            void* __result__ = ((void*)0);
            return __result__;
        }
        result_267=(struct map$ph_char$p_int$*)come_increment_ref_count((struct map$ph_char$p_int$*)(right_value167=map$_char$p_int$$_char$p_int$phcharpint_initialize((struct map$_char$p_int$$_char$p_int$*)come_increment_ref_count((struct map$_char$p_int$$_char$p_int$*)(right_value161=(struct map$_char$p_int$$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$$_char$p_int$)*1))))));
        call_finalizer(map$_char$p_int$$_char$p_int$phcharpint_finalize,right_value161,0, 1, 0);
        call_finalizer(map$ph_char$p_int$$ph_char$p_int$phcharpint_finalize,right_value167,0, 1, 0);
        for(
        it_272=map$p_char$p_int$$p_char$p_int$pcharpint_begin(self);
        !map$p_char$p_int$$p_char$p_int$pcharpint_end(self);
        it_272=map$p_char$p_int$$p_char$p_int$pcharpint_next(self)
        ){
            it2_274=map$p_char$p_int$$p_char$p_int$pcharpint_at(self,it_272,default_value_273);
            map$ph_char$p_int$$ph_char$p_int$phcharpint_insert2(result_267,charp_clone(it_272),int_clone(it2_274));
        }
        struct map$ph_char$p_int$* __result__ = result_267;
        call_finalizer(map$ph_char$p_int$phcharpint_finalize,result_267,0, 0, 1);
        return __result__;
}

static struct map$ph_char$p_int$* map$_char$p_int$$_char$p_int$phcharpint_initialize(struct map$ph_char$p_int$* self){
void* right_value162;
void* right_value163;
void* right_value164;
int i_264;
void* right_value165;
void* right_value166;
memset(&i_264, 0, sizeof(int));
            self->keys=(char***)(right_value162=(char***)come_calloc(1, sizeof(char**)*1*128));
            self->items=(int**)(right_value163=(int**)come_calloc(1, sizeof(int*)*1*128));
            self->item_existance=(_Bool**)(right_value164=(_Bool**)come_calloc(1, sizeof(_Bool*)*1*128));
            for(
            i_264=0;
            i_264<128;
            i_264++
            ){
                self->item_existance[i_264]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            if(self->key_list) {(struct list$ph_char$p*)come_decrement_ref_count(self->key_list,0,0); }
            self->key_list=(struct list$ph_char$p*)come_increment_ref_count((struct list$ph_char$p*)(right_value166=list$_char$p$_char$pphcharp_initialize((struct list$_char$p$_char$p*)come_increment_ref_count((struct list$_char$p$_char$p*)(right_value165=(struct list$_char$p$_char$p*)come_calloc(1, sizeof(struct list$_char$p$_char$p)*1))))));
            call_finalizer(list$_char$p$_char$pphcharp_finalize,right_value165,0, 1, 0);
            call_finalizer(list$ph_char$p$ph_char$pphcharp_finalize,right_value166,0, 1, 0);
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
struct list_item$_char$p$_char$p* it_265;
struct list_item$_char$p$_char$p* prev_it_266;
memset(&it_265, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_266, 0, sizeof(struct list_item$_char$p$_char$p*));
                it_265=self->head;
                while(it_265!=((void*)0)) {
                    if(0) {
                        it_265->item = come_decrement_ref_count(it_265->item, 0, 0);
                    }
                    prev_it_266=it_265;
                    it_265=it_265->next;
                    come_free_object(prev_it_266);
                }
}

static void map$_char$p_int$$_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_268;
int i_269;
memset(&i_268, 0, sizeof(int));
memset(&i_269, 0, sizeof(int));
            for(
            i_268=0;
            i_268<self->size;
            i_268++
            ){
                if(self->item_existance[i_268]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_269=0;
            i_269<self->size;
            i_269++
            ){
                if(self->item_existance[i_269]) {
                    if(0) {
                        self->keys[i_269] = come_decrement_ref_count(self->keys[i_269], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$ph_char$p_int$$ph_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_270;
int i_271;
memset(&i_270, 0, sizeof(int));
memset(&i_271, 0, sizeof(int));
            for(
            i_270=0;
            i_270<self->size;
            i_270++
            ){
                if(self->item_existance[i_270]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_271=0;
            i_271<self->size;
            i_271++
            ){
                if(self->item_existance[i_271]) {
                    if(0) {
                        self->keys[i_271] = come_decrement_ref_count(self->keys[i_271], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$ph_char$p_int$$ph_char$p_int$phcharpint_insert2(struct map$p_char$p_int$* self, char* key, int item){
int hash_275;
int it_276;
_Bool same_key_exist_277;
char* it2_278;
memset(&hash_275, 0, sizeof(int));
memset(&it_276, 0, sizeof(int));
memset(&same_key_exist_277, 0, sizeof(_Bool));
memset(&it2_278, 0, sizeof(char*));
                if(self->len*2>=self->size) {
                    map$p_char$p_int$$p_char$p_int$pcharpint_rehash(self);
                }
                hash_275=charp_get_hash_key(key)%self->size;
                it_276=hash_275;
                while((_Bool)1) {
                    if(self->item_existance[it_276]) {
                        if(charp_equals(self->keys[it_276],key)) {
                            if(0) {
                                self->keys[it_276] = come_decrement_ref_count(self->keys[it_276], 0, 0);
                                self->keys[it_276]=key;
                            }
                            else {
                                self->keys[it_276]=key;
                            }
                            if(0) {
                                self->items[it_276]=item;
                            }
                            else {
                                self->items[it_276]=item;
                            }
                            break;
                        }
                        it_276++;
                        if(it_276>=self->size) {
                            it_276=0;
                        }
                        else if(it_276==hash_275) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_276]=(_Bool)1;
                        if(0) {
                            self->keys[it_276] = come_decrement_ref_count(self->keys[it_276], 0, 0);
                            self->keys[it_276]=key;
                        }
                        else {
                            self->keys[it_276]=key;
                        }
                        if(0) {
                            self->items[it_276]=item;
                        }
                        else {
                            self->items[it_276]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_277=(_Bool)0;
                for(
                it2_278=list$ph_char$p$ph_char$pphcharp_begin((self->key_list));
                !list$ph_char$p$ph_char$pphcharp_end((self->key_list));
                it2_278=list$ph_char$p$ph_char$pphcharp_next((self->key_list))
                ){
                    if(charp_equals(it2_278,key)) {
                        same_key_exist_277=(_Bool)1;
                    }
                }
                if(!same_key_exist_277) {
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
void* right_value174;
struct tuple1$_char$ph* result_282;
memset(&result_282, 0, sizeof(struct tuple1$_char$ph*));
        result_282=(struct tuple1$_char$ph*)come_increment_ref_count((struct tuple1$_char$ph*)(right_value174=(struct tuple1$_char$ph*)come_calloc(1, sizeof(struct tuple1$_char$ph)*1)));
        call_finalizer(tuple1$_char$phph_finalize,right_value174,0, 1, 0);
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            if(result_282->v1) {(char*)come_decrement_ref_count(result_282->v1,0,0); }
            result_282->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        }
        struct tuple1$_char$ph* __result__ = result_282;
        call_finalizer(tuple1$_char$phph_finalize,result_282,0, 0, 1);
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
void* right_value212;
struct sDataA* result_305;
memset(&result_305, 0, sizeof(struct sDataA*));
        result_305=(struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value212=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*1)));
        call_finalizer(sDataA_finalize,right_value212,0, 1, 0);
        struct sDataA* __result__ = result_305;
        call_finalizer(sDataA_finalize,result_305,0, 0, 1);
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
struct list_item$_IA$ph* it_295;
struct list_item$_IA$ph* prev_it_296;
memset(&it_295, 0, sizeof(struct list_item$_IA$ph*));
memset(&prev_it_296, 0, sizeof(struct list_item$_IA$ph*));
            it_295=self->head;
            while(it_295!=((void*)0)) {
                if(1) {
                    call_finalizer(((struct IA*)it_295->item)->finalize, ((struct IA*)it_295->item)->_protocol_obj,0, 0, 0);
                    it_295->item = come_decrement_ref_count(it_295->item, 0, 0);
                }
                prev_it_296=it_295;
                it_295=it_295->next;
                come_free_object(prev_it_296);
            }
}

static void list$_IA$phphIAph_finalize(struct list$p_IA$ph* self){
struct list_item$_IA$ph$_IA$ph* it_298;
struct list_item$_IA$ph$_IA$ph* prev_it_299;
memset(&it_298, 0, sizeof(struct list_item$_IA$ph$_IA$ph*));
memset(&prev_it_299, 0, sizeof(struct list_item$_IA$ph$_IA$ph*));
        it_298=self->head;
        while(it_298!=((void*)0)) {
            if(1) {
                call_finalizer(((struct IA*)it_298->item)->finalize, ((struct IA*)it_298->item)->_protocol_obj,0, 0, 0);
                it_298->item = come_decrement_ref_count(it_298->item, 0, 0);
            }
            prev_it_299=it_298;
            it_298=it_298->next;
            come_free_object(prev_it_299);
        }
}

static void list$_IA$phphIAph_push_back(struct list$p_IA$ph* self, struct IA* item){
void* right_value199;
struct list_item$_IA$ph$_IA$ph* litem_300;
struct IA** _inf_valueX2;
void* right_value200;
struct list_item$_IA$ph$_IA$ph* litem_301;
struct IA** _inf_valueX3;
void* right_value201;
struct list_item$_IA$ph$_IA$ph* litem_302;
struct IA** _inf_valueX4;
memset(&litem_300, 0, sizeof(struct list_item$_IA$ph$_IA$ph*));
memset(&litem_301, 0, sizeof(struct list_item$_IA$ph$_IA$ph*));
memset(&litem_302, 0, sizeof(struct list_item$_IA$ph$_IA$ph*));
        if(self->len==0) {
            litem_300=(struct list_item$_IA$ph$_IA$ph*)(right_value199=(struct list_item$_IA$ph$_IA$ph*)come_calloc(1, sizeof(struct list_item$_IA$ph$_IA$ph)*1));
            litem_300->prev=((void*)0);
            litem_300->next=((void*)0);
            if(litem_300->item) {(struct IA*)come_decrement_ref_count(litem_300->item,0,0), come_decrement_ref_count(((struct IA*)litem_300->item)->_protocol_obj,0,0); }
            _inf_valueX2=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_300->item=_inf_valueX2;
            self->tail=litem_300;
            self->head=litem_300;
        }
        else if(self->len==1) {
            litem_301=(struct list_item$_IA$ph$_IA$ph*)(right_value200=(struct list_item$_IA$ph$_IA$ph*)come_calloc(1, sizeof(struct list_item$_IA$ph$_IA$ph)*1));
            litem_301->prev=self->head;
            litem_301->next=((void*)0);
            if(litem_301->item) {(struct IA*)come_decrement_ref_count(litem_301->item,0,0), come_decrement_ref_count(((struct IA*)litem_301->item)->_protocol_obj,0,0); }
            _inf_valueX3=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_301->item=_inf_valueX3;
            self->tail=litem_301;
            self->head->next=litem_301;
        }
        else {
            litem_302=(struct list_item$_IA$ph$_IA$ph*)(right_value201=(struct list_item$_IA$ph$_IA$ph*)come_calloc(1, sizeof(struct list_item$_IA$ph$_IA$ph)*1));
            litem_302->prev=self->tail;
            litem_302->next=((void*)0);
            if(litem_302->item) {(struct IA*)come_decrement_ref_count(litem_302->item,0,0), come_decrement_ref_count(((struct IA*)litem_302->item)->_protocol_obj,0,0); }
            _inf_valueX4=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_302->item=_inf_valueX4;
            self->tail->next=litem_302;
            self->tail=litem_302;
        }
        self->len++;
        call_finalizer(((struct IA*)item)->finalize, ((struct IA*)item)->_protocol_obj,0, 0, 1);
        item = come_decrement_ref_count(item, 0, 1);
}

static struct IA* list$_IA$phphIAph_begin(struct list$p_IA$ph* self){
struct IA* result_306;
memset(&result_306, 0, sizeof(struct IA*));
        self->it=self->head;
        if(self->it) {
            struct IA* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_306,0,sizeof(struct IA*));
        struct IA* __result__ = result_306;
        return __result__;
}

static _Bool list$_IA$phphIAph_end(struct list$p_IA$ph* self){
        struct list_item$p_IA$ph* __result__ = self->it==((void*)0);
        return __result__;
}

static struct IA* list$_IA$phphIAph_next(struct list$p_IA$ph* self){
struct IA* result_308;
memset(&result_308, 0, sizeof(struct IA*));
        self->it=self->it->next;
        if(self->it) {
            struct IA* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_308,0,sizeof(struct IA*));
        struct IA* __result__ = result_308;
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
struct list_item$_char$ph$_char$ph* it_315;
struct list_item$_char$ph$_char$ph* it2_316;
memset(&it_315, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&it2_316, 0, sizeof(struct list_item$_char$ph$_char$ph*));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_315=left->head;
            it2_316=right->head;
            while(it_315!=((void*)0)) {
                if(!string_equals(it_315->item,it2_316->item)) {
                    _Bool __result__ = (_Bool)0;
                    return __result__;
                }
                it_315=it_315->next;
                it2_316=it2_316->next;
            }
            _Bool __result__ = (_Bool)1;
            return __result__;
}

