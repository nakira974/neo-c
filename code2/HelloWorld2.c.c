// source head
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
struct list_item$$1char$ph
{
    char* item;
    struct list_item$$1char$ph* prev;
    struct list_item$$1char$ph* next;
};
struct list$$1char$ph
{
    struct list_item$$1char$ph* head;
    struct list_item$$1char$ph* tail;
    int len;
    struct list_item$$1char$ph* it;
};
struct list_item$$1char$ph$$1char$ph
{
    char* item;
    struct list_item$$1char$ph* prev;
    struct list_item$$1char$ph* next;
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
struct tuple2$$2int$bool$
{
    int v1;
    _Bool v2;
};
struct list_item$$1int$
{
    int item;
    struct list_item$$1int$* prev;
    struct list_item$$1int$* next;
};
struct list$$1int$
{
    struct list_item$$1int$* head;
    struct list_item$$1int$* tail;
    int len;
    struct list_item$$1int$* it;
};
struct tuple1$$1int$
{
    int v1;
};
struct tuple1$$1char$ph
{
    char* v1;
};
struct tuple2$$2char$phint$
{
    char* v1;
    int v2;
};
struct list_item$$1IA$ph
{
    struct IA* item;
    struct list_item$$1IA$ph* prev;
    struct list_item$$1IA$ph* next;
};
struct list$$1IA$ph
{
    struct list_item$$1IA$ph* head;
    struct list_item$$1IA$ph* tail;
    int len;
    struct list_item$$1IA$ph* it;
};
struct __current_stack1__
{
    char** p_93;
    void** p2_94;
    int* count_95;
    int* size2_96;
    char** mem2_97;
    int* b_98;
    int** a_99;
    int* a2_100;
    char** ax_103;
    char** str_107;
    struct sData** data_108;
    int** axyz_109;
    int** xxx_110;
    int** yyy_111;
    int** zzz_112;
    int* bzyz_113;
    int** azyz_114;
    int* n_115;
};
struct list_item$$1int$$$1int$
{
    int item;
    struct list_item$$1int$* prev;
    struct list_item$$1int$* next;
};
struct __current_stack2__
{
    char** p_93;
    void** p2_94;
    int* count_95;
    int* size2_96;
    char** mem2_97;
    int* b_98;
    int** a_99;
    int* a2_100;
    char** ax_103;
    char** str_107;
    struct sData** data_108;
    int** axyz_109;
    int** xxx_110;
    int** yyy_111;
    int** zzz_112;
    int* bzyz_113;
    int** azyz_114;
    int* n_115;
    struct list$$1char$ph** liX_116;
    struct list$$1int$** liX2_122;
    int* aX_131;
};
struct __current_stack3__
{
    char** p_93;
    void** p2_94;
    int* count_95;
    int* size2_96;
    char** mem2_97;
    int* b_98;
    int** a_99;
    int* a2_100;
    char** ax_103;
    char** str_107;
    struct sData** data_108;
    int** axyz_109;
    int** xxx_110;
    int** yyy_111;
    int** zzz_112;
    int* bzyz_113;
    int** azyz_114;
    int* n_115;
    struct list$$1char$ph** liX_116;
    struct list$$1int$** liX2_122;
    int* aX_131;
    int* aXYZY_135;
    struct list$$1char$ph** li_136;
    struct list$$1int$** li2_138;
    int* aXL_140;
};
struct list$$1int$$$1int$
{
    struct list_item$$1int$* head;
    struct list_item$$1int$* tail;
    int len;
    struct list_item$$1int$* it;
};
struct list$$1char$ph$$1char$ph
{
    struct list_item$$1char$ph* head;
    struct list_item$$1char$ph* tail;
    int len;
    struct list_item$$1char$ph* it;
};
struct __current_stack4__
{
    char** p_93;
    void** p2_94;
    int* count_95;
    int* size2_96;
    char** mem2_97;
    int* b_98;
    int** a_99;
    int* a2_100;
    char** ax_103;
    char** str_107;
    struct sData** data_108;
    int** axyz_109;
    int** xxx_110;
    int** yyy_111;
    int** zzz_112;
    int* bzyz_113;
    int** azyz_114;
    int* n_115;
    struct list$$1char$ph** liX_116;
    struct list$$1int$** liX2_122;
    int* aX_131;
    int* aXYZY_135;
    struct list$$1char$ph** li_136;
    struct list$$1int$** li2_138;
    int* aXL_140;
    struct list$$1char$ph** li3_177;
    struct list$$1int$** li4_182;
    struct list$$1int$** li5_183;
    struct list$$1int$** li6_188;
    int** axyzX_194;
    char** strXYXY_195;
    struct list$$1int$** liZ_196;
};
struct __current_stack5__
{
    char** p_93;
    void** p2_94;
    int* count_95;
    int* size2_96;
    char** mem2_97;
    int* b_98;
    int** a_99;
    int* a2_100;
    char** ax_103;
    char** str_107;
    struct sData** data_108;
    int** axyz_109;
    int** xxx_110;
    int** yyy_111;
    int** zzz_112;
    int* bzyz_113;
    int** azyz_114;
    int* n_115;
    struct list$$1char$ph** liX_116;
    struct list$$1int$** liX2_122;
    int* aX_131;
    int* aXYZY_135;
    struct list$$1char$ph** li_136;
    struct list$$1int$** li2_138;
    int* aXL_140;
    struct list$$1char$ph** li3_177;
    struct list$$1int$** li4_182;
    struct list$$1int$** li5_183;
    struct list$$1int$** li6_188;
    int** axyzX_194;
    char** strXYXY_195;
    struct list$$1int$** liZ_196;
    struct list$$1int$** liZ2_202;
    struct list$$1int$** __list_value1___205;
    struct list$$1int$** __list_value2___206;
    struct list$$1int$** __list_value3___207;
};
struct list_item$$1char$p
{
    char* item;
    struct list_item$$1char$p* prev;
    struct list_item$$1char$p* next;
};
struct list$$1char$p
{
    struct list_item$$1char$p* head;
    struct list_item$$1char$p* tail;
    int len;
    struct list_item$$1char$p* it;
};
struct map$$2char$pint$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$$1char$p* key_list;
    int it;
};
struct list$$1char$p$$1char$p
{
    struct list_item$$1char$p* head;
    struct list_item$$1char$p* tail;
    int len;
    struct list_item$$1char$p* it;
};
struct list_item$$1char$p$$1char$p
{
    char* item;
    struct list_item$$1char$p* prev;
    struct list_item$$1char$p* next;
};
struct map$$2char$pint$$$2char$pint$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$$1char$p* key_list;
    int it;
};
struct tuple1$$1char$ph$$1char$ph
{
    char* v1;
};
struct tuple2$$2char$phint$$$2char$phint$
{
    char* v1;
    int v2;
};
struct tuple2$$2char$pint$
{
    char* v1;
    int v2;
};
struct list_item$$1IA$ph$$1IA$ph
{
    struct IA* item;
    struct list_item$$1IA$ph* prev;
    struct list_item$$1IA$ph* next;
};
struct tuple3$$3int$int$bool$
{
    int v1;
    int v2;
    _Bool v3;
};
struct __current_stack6__
{
    char** p_93;
    void** p2_94;
    int* count_95;
    int* size2_96;
    char** mem2_97;
    int* b_98;
    int** a_99;
    int* a2_100;
    char** ax_103;
    char** str_107;
    struct sData** data_108;
    int** axyz_109;
    int** xxx_110;
    int** yyy_111;
    int** zzz_112;
    int* bzyz_113;
    int** azyz_114;
    int* n_115;
    struct list$$1char$ph** liX_116;
    struct list$$1int$** liX2_122;
    int* aX_131;
    int* aXYZY_135;
    struct list$$1char$ph** li_136;
    struct list$$1int$** li2_138;
    int* aXL_140;
    struct list$$1char$ph** li3_177;
    struct list$$1int$** li4_182;
    struct list$$1int$** li5_183;
    struct list$$1int$** li6_188;
    int** axyzX_194;
    char** strXYXY_195;
    struct list$$1int$** liZ_196;
    struct list$$1int$** liZ2_202;
    struct list$$1int$** __list_value1___205;
    struct list$$1int$** __list_value2___206;
    struct list$$1int$** __list_value3___207;
    struct map$$2char$pint$** __map_value1___217;
    struct map$$2char$pint$** __map_value2___244;
    struct map$$2char$pint$** __map_value3___255;
    struct map$$2char$pint$** m1_256;
    struct map$$2char$pint$** m2_280;
    struct tuple1$$1int$** tt1_281;
    struct tuple1$$1char$ph** tt2_282;
    struct tuple1$$1char$ph** tt3_284;
    struct tuple1$$1int$** ttt1_285;
    struct tuple1$$1char$ph** ttt2_286;
    struct tuple1$$1char$ph** ttt3_287;
    struct tuple2$$2char$phint$** __tuple_value1___288;
    struct tuple2$$2char$phint$** t4_289;
    struct tuple2$$2char$pint$** __tuple_value2___290;
    struct tuple2$$2char$pint$** __tuple_value3___291;
    struct tuple2$$2char$pint$** __tuple_value4___292;
    struct tuple2$$2char$pint$** __tuple_value5___293;
    struct IA** ia_295;
    struct list$$1IA$ph** liIA_298;
    struct tuple3$$3int$int$bool$** __tuple_value6___310;
    int* aZZZ_311;
    int* bZZZ_312;
};

// header function
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
long int __sysconf(int __name);
static void ncfree(void* mem);
static void* come_calloc(int count, int size);
static void* come_increment_ref_count(void* mem);
static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free);
static void come_free_object(void* mem);
static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free);
static void* nccalloc(int nmemb, int size);
static void* come_memdup(void* block);
static void va_list_finalize(va_list* self);
static struct list$$1char$ph* list$$1char$ph_initialize(struct list$$1char$ph* self);
static void list$$1char$ph$$1char$ph_finalize(struct list$$1char$ph* self);
static void list$$1char$ph_finalize(struct list$$1char$ph* self);
static void list$$1char$ph_push_back(struct list$$1char$ph* self, char* item);
static void FILE_finalize(struct _IO_FILE* self);
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int int$_fun(int* self);
struct sDataA* sDataA_initialize(struct sDataA* self, int a, int b);
static void sDataA_finalize(struct sDataA* self);
int sDataA_fun(struct sDataA* self, int a, int b);
void fun_default_parametor(int x, int y);
struct tuple2$$2int$bool$* fun_exception(int x, int y);
static struct tuple2$$2int$bool$* tuple2$$2int$bool$_initialize(struct tuple2$$2int$bool$* self, int v1, _Bool v2);
static void tuple2$$2int$bool$$$2int$bool$_finalize(struct tuple2$$2int$bool$* self);
int main();
static void sData_finalize(struct sData* self);
void method_block1(struct __current_stack1__* parent);
static char* list$$1char$ph_begin(struct list$$1char$ph* self);
static _Bool list$$1char$ph_end(struct list$$1char$ph* self);
static char* list$$1char$ph_next(struct list$$1char$ph* self);
static struct list$$1int$* list$$1int$_initialize(struct list$$1int$* self);
static void list$$1int$$$1int$_finalize(struct list$$1int$* self);
static void list$$1int$_finalize(struct list$$1int$* self);
static void list$$1int$_push_back(struct list$$1int$* self, int item);
static int list$$1int$_begin(struct list$$1int$* self);
static _Bool list$$1int$_end(struct list$$1int$* self);
static int list$$1int$_next(struct list$$1int$* self);
static void list$$1int$_each(struct list$$1int$* self, void* parent, void (*block)(void*,int,int,_Bool*));
void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3);
void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3);
static int list$$1int$_item(struct list$$1int$* self, int position, int default_value);
static void list$$1int$_insert(struct list$$1int$* self, int position, int item);
static void list$$1int$$$1int$_push_back(struct list$$1int$* self, int item);
static void list$$1char$ph_insert(struct list$$1char$ph* self, int position, char* item);
static void list$$1char$ph$$1char$ph_push_back(struct list$$1char$ph* self, char* item);
static char* list$$1char$ph_item(struct list$$1char$ph* self, int position, char* default_value);
static void list$$1char$ph_reset(struct list$$1char$ph* self);
static void list_item$$1char$ph$$1char$ph_finalize(struct list_item$$1char$ph$$1char$ph* self);
static int list$$1char$ph_length(struct list$$1char$ph* self);
static void list$$1int$_delete(struct list$$1int$* self, int head, int tail);
static void list$$1int$$$1int$$$1int$_reset(struct list$$1int$* self);
static void list_item$$1int$$$1int$_finalize(struct list_item$$1int$$$1int$* self);
static void list$$1char$ph$$1char$ph_replace(struct list$$1char$ph* self, int position, char* item);
static char* list$$1char$ph$$1char$ph_item(struct list$$1char$ph* self, int position, char* default_value);
static _Bool list$$1int$$$1int$_equals(struct list$$1int$* left, struct list$$1int$* right);
static int list$$1int$$$1int$_find(struct list$$1int$* self, int item, int default_value);
static struct list$$1int$* list$$1int$$$1int$_sublist(struct list$$1int$* self, int begin, int tail);
static struct list$$1int$* list$$1int$$$1int$_initialize(struct list$$1int$* self);
static void list$$1int$$$1int$$$1int$_finalize(struct list$$1int$* self);
void method_block4(struct __current_stack4__* parent, int it, int it2, _Bool* it3);
static void list$$1int$_operator_store_element(struct list$$1int$* self, int position, int item);
static void list$$1int$$$1int$$$1int$_replace(struct list$$1int$* self, int position, int item);
static int list$$1int$_operator_load_element(struct list$$1int$* self, int index);
static int list$$1int$$$1int$$$1int$_item(struct list$$1int$* self, int position, int default_value);
static _Bool list$$1int$_operator_equals(struct list$$1int$* self, struct list$$1int$* right);
static _Bool list$$1int$$$1int$$$1int$_equals(struct list$$1int$* left, struct list$$1int$* right);
void method_block5(struct __current_stack5__* parent, int it, int it2, _Bool* it3);
static struct map$$2char$pint$* map$$2char$pint$_initialize(struct map$$2char$pint$* self);
static struct list$$1char$p* list$$1char$p$$1char$p_initialize(struct list$$1char$p* self);
static void list$$1char$p$$1char$p_finalize(struct list$$1char$p* self);
static void list$$1char$p$$1char$p$$1char$p_finalize(struct list$$1char$p* self);
static void map$$2char$pint$$$2char$pint$_finalize(struct map$$2char$pint$* self);
static void list$$1char$p_finalize(struct list$$1char$p* self);
static void map$$2char$pint$_finalize(struct map$$2char$pint$* self);
static void map$$2char$pint$_insert(struct map$$2char$pint$* self, char* key, int item);
static void map$$2char$pint$$$2char$pint$_rehash(struct map$$2char$pint$* self);
static char* map$$2char$pint$$$2char$pint$$$2char$pint$_begin(struct map$$2char$pint$* self);
static _Bool map$$2char$pint$$$2char$pint$$$2char$pint$_end(struct map$$2char$pint$* self);
static char* map$$2char$pint$$$2char$pint$$$2char$pint$_next(struct map$$2char$pint$* self);
static int map$$2char$pint$$$2char$pint$$$2char$pint$_at(struct map$$2char$pint$* self, char* key, int default_value);
static char* list$$1char$p_begin(struct list$$1char$p* self);
static _Bool list$$1char$p_end(struct list$$1char$p* self);
static char* list$$1char$p_next(struct list$$1char$p* self);
static void list$$1char$p_push_back(struct list$$1char$p* self, char* item);
static _Bool map$$2char$pint$_operator_equals(struct map$$2char$pint$* left, struct map$$2char$pint$* right);
static _Bool map$$2char$pint$$$2char$pint$$$2char$pint$_equals(struct map$$2char$pint$* left, struct map$$2char$pint$* right);
static char* list$$1char$p_item(struct list$$1char$p* self, int position, char* default_value);
static int map$$2char$pint$_operator_load_element(struct map$$2char$pint$* self, char* key);
static struct map$$2char$pint$* map$$2char$pint$_clone(struct map$$2char$pint$* self);
static struct map$$2char$pint$* map$$2char$pint$$$2char$pint$_initialize(struct map$$2char$pint$* self);
static void map$$2char$pint$$$2char$pint$$$2char$pint$_finalize(struct map$$2char$pint$* self);
static void map$$2char$pint$$$2char$pint$$$2char$pint$_insert2(struct map$$2char$pint$* self, char* key, int item);
static void map$$2char$pint$$$2char$pint$$$2char$pint$_rehash(struct map$$2char$pint$* self);
static struct tuple1$$1int$* tuple1$$1int$_initialize(struct tuple1$$1int$* self, int v1);
static void tuple1$$1int$$$1int$_finalize(struct tuple1$$1int$* self);
static void tuple1$$1int$_finalize(struct tuple1$$1int$* self);
static struct tuple1$$1char$ph* tuple1$$1char$ph_initialize(struct tuple1$$1char$ph* self, char* v1);
static void tuple1$$1char$ph$$1char$ph_finalize(struct tuple1$$1char$ph* self);
static void tuple1$$1char$ph_finalize(struct tuple1$$1char$ph* self);
static struct tuple1$$1char$ph* tuple1$$1char$ph_clone(struct tuple1$$1char$ph* self);
static void tuple1$$1char$ph$_finalize(struct tuple1$$1char$ph* self);
static _Bool tuple1$$1char$ph_equals(struct tuple1$$1char$ph* left, struct tuple1$$1char$ph* right);
static _Bool tuple1$$1char$ph_operator_equals(struct tuple1$$1char$ph* left, struct tuple1$$1char$ph* right);
static struct tuple2$$2char$phint$* tuple2$$2char$phint$_initialize(struct tuple2$$2char$phint$* self, char* v1, int v2);
static void tuple2$$2char$phint$$$2char$phint$_finalize(struct tuple2$$2char$phint$* self);
static void tuple2$$2char$phint$_finalize(struct tuple2$$2char$phint$* self);
static struct tuple2$$2char$pint$* tuple2$$2char$pint$_initialize(struct tuple2$$2char$pint$* self, char* v1, int v2);
static void tuple2$$2char$pint$$$2char$pint$_finalize(struct tuple2$$2char$pint$* self);
static void tuple2$$2char$pint$_finalize(struct tuple2$$2char$pint$* self);
static _Bool tuple2$$2char$pint$$$2char$pint$_equals(struct tuple2$$2char$pint$* left, struct tuple2$$2char$pint$* right);
static _Bool tuple2$$2char$pint$$$2char$pint$_operator_equals(struct tuple2$$2char$pint$* left, struct tuple2$$2char$pint$* right);
static _Bool tuple2$$2char$pint$$$2char$pint$_operator_not_equals(struct tuple2$$2char$pint$* left, struct tuple2$$2char$pint$* right);
static struct sDataA* sDataA_clone(struct sDataA* self);
static struct list$$1IA$ph* list$$1IA$ph_initialize(struct list$$1IA$ph* self);
static void list$$1IA$ph$$1IA$ph_finalize(struct list$$1IA$ph* self);
static void list$$1IA$ph_finalize(struct list$$1IA$ph* self);
static void list$$1IA$ph_push_back(struct list$$1IA$ph* self, struct IA* item);
static struct IA* list$$1IA$ph_begin(struct list$$1IA$ph* self);
static _Bool list$$1IA$ph_end(struct list$$1IA$ph* self);
static struct IA* list$$1IA$ph_next(struct list$$1IA$ph* self);
static struct tuple3$$3int$int$bool$* tuple3$$3int$int$bool$_initialize(struct tuple3$$3int$int$bool$* self, int v1, int v2, _Bool v3);
static void tuple3$$3int$int$bool$$$3int$int$bool$_finalize(struct tuple3$$3int$int$bool$* self);
static void tuple3$$3int$int$bool$_finalize(struct tuple3$$3int$int$bool$* self);
static int tuple2$$2int$bool$_catch(struct tuple2$$2int$bool$* self, void* parent, void (*block)(void*));
void method_block6(struct __current_stack6__* parent);
static void tuple2$$2int$bool$_finalize(struct tuple2$$2int$bool$* self);
static _Bool list$$1char$ph_operator_equals(struct list$$1char$ph* self, struct list$$1char$ph* right);
static _Bool list$$1char$ph$$1char$ph$$1char$ph_equals(struct list$$1char$ph* left, struct list$$1char$ph* right);
// inline function
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
static inline void int$_times(int self, void* parent, void (*block)(void*)){
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
    result_22=(char*)come_increment_ref_count(((char**)(right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(len_21))))));
    right_value0 = come_decrement_ref_count(right_value0, 1, 0);
    strncpy(result_22,str,len_21);
    char* __result__ = result_22;
    result_22 = come_decrement_ref_count(result_22, 0, 1);
    return __result__;
}
static inline _Bool int$_equals(int self, int right){
    int __result__ = self==right;
    return __result__;
}
static inline _Bool bool$_equals(_Bool self, _Bool right){
    _Bool __result__ = self==right;
    return __result__;
}
static inline _Bool char$_equals(char self, char right){
    char __result__ = self==right;
    return __result__;
}
static inline _Bool short$_equals(short short self, short short right){
    short short __result__ = self==right;
    return __result__;
}
static inline _Bool long$_equals(long self, long right){
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
static inline _Bool char$_operator_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline char* char$_operator_add(char* self, char* right){
int len_23;
void* right_value1;
char* result_24;
memset(&len_23, 0, sizeof(int));
memset(&result_24, 0, sizeof(char*));
    len_23=strlen(self)+strlen(right);
    result_24=(char*)come_increment_ref_count(((char**)(right_value1=(char**)come_calloc(1, sizeof(char*)*(1*(len_23+1))))));
    right_value1 = come_decrement_ref_count(right_value1, 1, 0);
    strncpy(result_24,self,len_23+1);
    strncat(result_24,right,len_23+1);
    char* __result__ = result_24;
    result_24 = come_decrement_ref_count(result_24, 0, 1);
    return __result__;
}
static inline char* string_operator_add(char* self, char* right){
int len_25;
void* right_value2;
char* result_26;
memset(&len_25, 0, sizeof(int));
memset(&result_26, 0, sizeof(char*));
    len_25=strlen(self)+strlen(right);
    result_26=(char*)come_increment_ref_count(((char**)(right_value2=(char**)come_calloc(1, sizeof(char*)*(1*(len_25+1))))));
    right_value2 = come_decrement_ref_count(right_value2, 1, 0);
    strncpy(result_26,self,len_25+1);
    strncat(result_26,right,len_25+1);
    char* __result__ = result_26;
    result_26 = come_decrement_ref_count(result_26, 0, 1);
    return __result__;
}
static inline unsigned int int$_get_hash_key(int value){
    int __result__ = value;
    return __result__;
}
static inline unsigned int bool$_get_hash_key(_Bool value){
    unsigned int __result__ = (int$_get_hash_key(((int)value)));
    return __result__;
}
static inline unsigned int string_get_hash_key(char* value){
int result_27;
char* p_28;
memset(&result_27, 0, sizeof(int));
memset(&p_28, 0, sizeof(char*));
    result_27=0;
    p_28=value;
    while(*p_28) {
        result_27+=(*p_28);
        p_28++;
    }
    int __result__ = result_27;
    return __result__;
}
static inline unsigned int char$_get_hash_key(char* value){
int result_29;
char* p_30;
memset(&result_29, 0, sizeof(int));
memset(&p_30, 0, sizeof(char*));
    result_29=0;
    p_30=value;
    while(*p_30) {
        result_29+=(*p_30);
        p_30++;
    }
    int __result__ = result_29;
    return __result__;
}
static inline int int$_clone(int self){
    int __result__ = self;
    return __result__;
}
static inline char* char$_clone(char* self){
    char* __result__ = self;
    return __result__;
}
static inline char* string_clone(char* self){
void* right_value3;
    char* __result__ = ((char*)(right_value3=__builtin_string(self)));
    return __result__;
}
static inline int long$_clone(long self){
    long __result__ = self;
    return __result__;
}
static inline short int short$_clone(short short self){
    short short __result__ = self;
    return __result__;
}
static inline double double$_clone(double self){
    double __result__ = self;
    return __result__;
}
static inline float float$_clone(float self){
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
    self->buf=(char*)come_increment_ref_count(((char**)(right_value4=(char**)come_calloc(1, sizeof(char*)*(1*(self->size))))));
    right_value4 = come_decrement_ref_count(right_value4, 1, 0);
    self->buf[0]=0;
    self->len=0;
    struct buffer* __result__ = self;
    call_finalizer(buffer_finalize,self,0, 0, 1);
    return __result__;
}
static inline struct buffer* buffer_clone(struct buffer* self){
void* right_value5;
struct buffer* result_31;
void* right_value6;
memset(&result_31, 0, sizeof(struct buffer*));
    if(self==((void*)0)) {
        void* __result__ = ((void*)0);
        return __result__;
    }
    result_31=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))));
    call_finalizer(buffer_finalize,right_value5,0, 1, 0);
    result_31->size=self->size;
    if(result_31->buf) {(char*)come_decrement_ref_count(result_31->buf,0,0); }
    result_31->buf=(char*)come_increment_ref_count(((char**)(right_value6=(char**)come_calloc(1, sizeof(char*)*(1*(self->size))))));
    right_value6 = come_decrement_ref_count(right_value6, 1, 0);
    result_31->len=self->len;
    memcpy(result_31->buf,self->buf,self->len);
    struct buffer* __result__ = result_31;
    call_finalizer(buffer_finalize,result_31,0, 0, 1);
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
char* old_buf_32;
int old_len_33;
int new_size_34;
void* right_value7;
memset(&old_buf_32, 0, sizeof(char*));
memset(&old_len_33, 0, sizeof(int));
memset(&new_size_34, 0, sizeof(int));
    if(self->len+size+1+1>=self->size) {
        old_buf_32=(char*)come_increment_ref_count(char$_clone(self->buf));
        old_len_33=self->len;
        new_size_34=(self->size+size+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count(((char**)(right_value7=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_34))))));
        right_value7 = come_decrement_ref_count(right_value7, 1, 0);
        memcpy(self->buf,old_buf_32,old_len_33);
        self->buf[old_len_33]=0;
        self->size=new_size_34;
        old_buf_32 = come_decrement_ref_count(old_buf_32, 0, 0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
}
static inline void buffer_append_char(struct buffer* self, char c){
int new_size_35;
void* right_value8;
memset(&new_size_35, 0, sizeof(int));
    if(self->len+1+1+1>=self->size) {
        new_size_35=(self->size+10+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count(((char**)(right_value8=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_35))))));
        right_value8 = come_decrement_ref_count(right_value8, 1, 0);
        self->size=new_size_35;
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
    char* __result__ = ((char*)(right_value9=__builtin_string(self->buf)));
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
int len_36;
int new_size_37;
void* right_value10;
int i_38;
memset(&len_36, 0, sizeof(int));
memset(&new_size_37, 0, sizeof(int));
memset(&i_38, 0, sizeof(int));
    len_36=self->len;
    len_36=(len_36+3)&~3;
    if(len_36>=self->size) {
        new_size_37=(self->size+1+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count(((char**)(right_value10=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_37))))));
        right_value10 = come_decrement_ref_count(right_value10, 1, 0);
        self->size=new_size_37;
    }
    for(
    i_38=self->len;
    i_38<len_36;
    i_38++
    ){
        self->buf[i_38]=0;
    }
    self->len=len_36;
}
static inline int buffer_compare(struct buffer* left, struct buffer* right){
    int __result__ = strcmp(left->buf,right->buf);
    return __result__;
}
static inline struct buffer* string_to_buffer(char* self){
void* right_value11;
void* right_value12;
struct buffer* result_39;
memset(&result_39, 0, sizeof(struct buffer*));
    result_39=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    call_finalizer(buffer_finalize,right_value11,0, 1, 0);
    call_finalizer(buffer_finalize,right_value12,0, 1, 0);
    buffer_append_str(result_39,self);
    struct buffer* __result__ = result_39;
    call_finalizer(buffer_finalize,result_39,0, 0, 1);
    return __result__;
}
static inline char* xsprintf(char* msg, ...){
va_list args_40;
char* result_41;
int len_42;
void* right_value13;
char* result2_43;
memset(&args_40, 0, sizeof(va_list));
memset(&result_41, 0, sizeof(char*));
memset(&len_42, 0, sizeof(int));
memset(&result2_43, 0, sizeof(char*));
    __builtin_va_start(args_40,msg);
    len_42=vasprintf(&result_41,msg,args_40);
    __builtin_va_end(args_40);
    if(len_42<0) {
        fprintf(stderr,"vasprintf can't get heap memory.(msg %s)\n",msg);
        exit(2);
    }
    result2_43=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(result_41))));
    right_value13 = come_decrement_ref_count(right_value13, 1, 0);
    free(result_41);
    char* __result__ = result2_43;
    call_finalizer(va_list_finalize,(&args_40),1, 0, 0);
    result2_43 = come_decrement_ref_count(result2_43, 0, 1);
    return __result__;
}
inline struct list$$1char$ph* FILE_readlines(struct _IO_FILE* f){
void* right_value14;
    struct list$$1char$ph* __result__ = ((struct list$$1char$ph*)(right_value14=FILE_readlines(f)));
    return __result__;
}
static inline void FILE_fclose(struct _IO_FILE* f){
    FILE_fclose(f);
}
static inline char* FILE_read(struct _IO_FILE* f){
void* right_value21;
void* right_value22;
struct buffer* buf_53;
char buf2_54[8192];
int size_55;
void* right_value23;
memset(&buf_53, 0, sizeof(struct buffer*));
memset(&buf2_54, 0, sizeof(char));
memset(&size_55, 0, sizeof(int));
    buf_53=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value22=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    call_finalizer(buffer_finalize,right_value21,0, 1, 0);
    call_finalizer(buffer_finalize,right_value22,0, 1, 0);
    while(1) {
        size_55=fread(buf2_54,1,8192,f);
        buffer_append(buf_53,buf2_54,size_55);
        if(size_55<8192) {
            break;
        }
    }
    char* __result__ = ((char*)(right_value23=buffer_to_string(buf_53)));
    call_finalizer(buffer_finalize,buf_53,0, 0, 0);
    return __result__;
}
static inline struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
char msg2_59[1024];
va_list args_60;
memset(&msg2_59, 0, sizeof(char));
memset(&args_60, 0, sizeof(va_list));
    __builtin_va_start(args_60,msg);
    vsnprintf(msg2_59,1024,msg,args_60);
    __builtin_va_end(args_60);
    (void)fprintf(f,"%s",msg2_59);
    struct _IO_FILE* __result__ = f;
    call_finalizer(va_list_finalize,(&args_60),1, 0, 0);
    return __result__;
}
inline char* string_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_63;
void* right_value27;
memset(&f_63, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_63=fopen(file_name,"a");
    }
    else {
        f_63=fopen(file_name,"w");
    }
    FILE_fprintf(f_63,"%s",self);
    FILE_fclose(f_63);
    char* __result__ = ((char*)(right_value27=__builtin_string(self)));
    call_finalizer(FILE_finalize,(&f_63),1, 0, 0);
    return __result__;
}
inline char* char$_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_64;
void* right_value28;
memset(&f_64, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_64=fopen(file_name,"a");
    }
    else {
        f_64=fopen(file_name,"w");
    }
    FILE_fprintf(f_64,"%s",self);
    FILE_fclose(f_64);
    char* __result__ = ((char*)(right_value28=__builtin_string(self)));
    call_finalizer(FILE_finalize,(&f_64),1, 0, 0);
    return __result__;
}
static inline int string_length(char* str){
    int __result__ = strlen(str);
    return __result__;
}
static inline int char$_length(char* str){
    int __result__ = strlen(str);
    return __result__;
}
static inline char* string_reverse(char* str){
int len_65;
void* right_value29;
char* result_66;
int i_67;
memset(&len_65, 0, sizeof(int));
memset(&result_66, 0, sizeof(char*));
memset(&i_67, 0, sizeof(int));
    len_65=strlen(str);
    result_66=(char*)come_increment_ref_count(((char**)(right_value29=(char**)come_calloc(1, sizeof(char*)*(1*(len_65+1))))));
    right_value29 = come_decrement_ref_count(right_value29, 1, 0);
    for(
    i_67=0;
    i_67<len_65;
    i_67++
    ){
        result_66[i_67]=str[len_65-i_67-1];
    }
    result_66[len_65]=0;
    char* __result__ = result_66;
    result_66 = come_decrement_ref_count(result_66, 0, 1);
    return __result__;
}
static inline char* char$_reverse(char* str){
int len_68;
void* right_value30;
char* result_69;
int i_70;
memset(&len_68, 0, sizeof(int));
memset(&result_69, 0, sizeof(char*));
memset(&i_70, 0, sizeof(int));
    len_68=strlen(str);
    result_69=(char*)come_increment_ref_count(((char**)(right_value30=(char**)come_calloc(1, sizeof(char*)*(1*(len_68+1))))));
    right_value30 = come_decrement_ref_count(right_value30, 1, 0);
    for(
    i_70=0;
    i_70<len_68;
    i_70++
    ){
        result_69[i_70]=str[len_68-i_70-1];
    }
    result_69[len_68]=0;
    char* __result__ = result_69;
    result_69 = come_decrement_ref_count(result_69, 0, 1);
    return __result__;
}
static inline char* char$_substring(char* str, int head, int tail){
void* right_value31;
int len_71;
void* right_value32;
void* right_value33;
void* right_value34;
void* right_value35;
void* right_value36;
char* result_72;
memset(&len_71, 0, sizeof(int));
memset(&result_72, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result__ = ((char*)(right_value31=__builtin_string("")));
        return __result__;
    }
    len_71=strlen(str);
    if(head<0) {
        head+=len_71;
    }
    if(tail<0) {
        tail+=len_71+1;
    }
    if(head>tail) {
        char* __result__ = ((char*)(right_value33=string_reverse(((char*)(right_value32=char$_substring(str,tail,head))))));
        right_value32 = come_decrement_ref_count(right_value32, 1, 0);
        return __result__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_71) {
        tail=len_71;
    }
    if(head==tail) {
        char* __result__ = ((char*)(right_value34=__builtin_string("")));
        return __result__;
    }
    if(tail-head+1<1) {
        char* __result__ = ((char*)(right_value35=__builtin_string("")));
        return __result__;
    }
    result_72=(char*)come_increment_ref_count(((char**)(right_value36=(char**)come_calloc(1, sizeof(char*)*(1*(tail-head+1))))));
    right_value36 = come_decrement_ref_count(right_value36, 1, 0);
    memcpy(result_72,str+head,tail-head);
    result_72[tail-head]=0;
    char* __result__ = result_72;
    result_72 = come_decrement_ref_count(result_72, 0, 1);
    return __result__;
}
static inline char* string_substring(char* str, int head, int tail){
void* right_value37;
int len_73;
void* right_value38;
void* right_value39;
void* right_value40;
void* right_value41;
void* right_value42;
char* result_74;
memset(&len_73, 0, sizeof(int));
memset(&result_74, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result__ = ((char*)(right_value37=__builtin_string("")));
        return __result__;
    }
    len_73=strlen(str);
    if(head<0) {
        head+=len_73;
    }
    if(tail<0) {
        tail+=len_73+1;
    }
    if(head>tail) {
        char* __result__ = ((char*)(right_value39=string_reverse(((char*)(right_value38=char$_substring(str,tail,head))))));
        right_value38 = come_decrement_ref_count(right_value38, 1, 0);
        return __result__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_73) {
        tail=len_73;
    }
    if(head==tail) {
        char* __result__ = ((char*)(right_value40=__builtin_string("")));
        return __result__;
    }
    if(tail-head+1<1) {
        char* __result__ = ((char*)(right_value41=__builtin_string("")));
        return __result__;
    }
    result_74=(char*)come_increment_ref_count(((char**)(right_value42=(char**)come_calloc(1, sizeof(char*)*(1*(tail-head+1))))));
    right_value42 = come_decrement_ref_count(right_value42, 1, 0);
    memcpy(result_74,str+head,tail-head);
    result_74[tail-head]=0;
    char* __result__ = result_74;
    result_74 = come_decrement_ref_count(result_74, 0, 1);
    return __result__;
}
static inline char* string_chomp(char* str){
void* right_value43;
char* result_75;
void* right_value44;
memset(&result_75, 0, sizeof(char*));
    result_75=(char*)come_increment_ref_count(((char*)(right_value43=__builtin_string(str))));
    right_value43 = come_decrement_ref_count(right_value43, 1, 0);
    if(result_75[string_length(result_75)-1]==10) {
        char* __result__ = ((char*)(right_value44=string_substring(result_75,0,-2)));
        return __result__;
    }
    char* __result__ = result_75;
    result_75 = come_decrement_ref_count(result_75, 0, 1);
    return __result__;
}
static inline char* char$_chomp(char* str){
void* right_value45;
char* result_76;
void* right_value46;
memset(&result_76, 0, sizeof(char*));
    result_76=(char*)come_increment_ref_count(((char*)(right_value45=__builtin_string(str))));
    right_value45 = come_decrement_ref_count(right_value45, 1, 0);
    if(result_76[string_length(result_76)-1]==10) {
        char* __result__ = ((char*)(right_value46=string_substring(result_76,0,-2)));
        return __result__;
    }
    char* __result__ = result_76;
    result_76 = come_decrement_ref_count(result_76, 0, 1);
    return __result__;
}
static inline char* xbasename(char* path){
char* p_77;
void* right_value47;
void* right_value48;
void* right_value49;
memset(&p_77, 0, sizeof(char*));
    p_77=path+strlen(path);
    while(p_77>=path) {
        if(*p_77==47) {
            break;
        }
        else {
            p_77--;
        }
    }
    if(p_77<path) {
        char* __result__ = ((char*)(right_value47=__builtin_string(path)));
        return __result__;
    }
    else {
        char* __result__ = ((char*)(right_value48=__builtin_string(p_77+1)));
        return __result__;
    }
    char* __result__ = ((char*)(right_value49=__builtin_string("")));
    return __result__;
}
static inline char* xdirname(char* path){
void* right_value50;
void* right_value51;
    char* __result__ = ((char*)(right_value51=__builtin_string(dirname(((char*)(right_value50=__builtin_string(path)))))));
    right_value50 = come_decrement_ref_count(right_value50, 1, 0);
    return __result__;
}
static inline char* xnoextname(char* path){
void* right_value52;
char* path2_78;
char* p_79;
void* right_value53;
void* right_value54;
void* right_value55;
memset(&path2_78, 0, sizeof(char*));
memset(&p_79, 0, sizeof(char*));
    path2_78=(char*)come_increment_ref_count(((char*)(right_value52=xbasename(path))));
    right_value52 = come_decrement_ref_count(right_value52, 1, 0);
    p_79=path2_78+strlen(path2_78);
    while(p_79>=path2_78) {
        if(*p_79==46) {
            break;
        }
        else {
            p_79--;
        }
    }
    if(p_79<path2_78) {
        char* __result__ = ((char*)(right_value53=__builtin_string(path2_78)));
        return __result__;
    }
    else {
        char* __result__ = ((char*)(right_value54=string_substring(path2_78,0,p_79-path2_78)));
        return __result__;
    }
    char* __result__ = ((char*)(right_value55=__builtin_string("")));
    path2_78 = come_decrement_ref_count(path2_78, 0, 0);
    return __result__;
}
static inline char* xextname(char* path){
char* p_80;
void* right_value56;
void* right_value57;
void* right_value58;
memset(&p_80, 0, sizeof(char*));
    p_80=path+strlen(path);
    while(p_80>=path) {
        if(*p_80==46) {
            break;
        }
        else {
            p_80--;
        }
    }
    if(p_80<path) {
        char* __result__ = ((char*)(right_value56=__builtin_string(path)));
        return __result__;
    }
    else {
        char* __result__ = ((char*)(right_value57=__builtin_string(p_80+1)));
        return __result__;
    }
    char* __result__ = ((char*)(right_value58=__builtin_string("")));
    return __result__;
}
static inline char* xrealpath(char* path){
char* result_81;
void* right_value59;
char* result2_82;
memset(&result_81, 0, sizeof(char*));
memset(&result2_82, 0, sizeof(char*));
    result_81=realpath(path,((void*)0));
    result2_82=(char*)come_increment_ref_count(((char*)(right_value59=__builtin_string(result_81))));
    right_value59 = come_decrement_ref_count(right_value59, 1, 0);
    free(result_81);
    char* __result__ = result2_82;
    result2_82 = come_decrement_ref_count(result2_82, 0, 1);
    return __result__;
}
static inline _Bool xiswalpha(unsigned int c){
_Bool result_83;
memset(&result_83, 0, sizeof(_Bool));
    result_83=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result__ = result_83;
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
_Bool result_84;
memset(&result_84, 0, sizeof(_Bool));
    result_84=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result__ = result_84;
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
_Bool result_85;
memset(&result_85, 0, sizeof(_Bool));
    result_85=(c>=32&&c<=126);
    _Bool __result__ = result_85;
    return __result__;
}
static inline _Bool xiswascii(unsigned int c){
_Bool result_86;
memset(&result_86, 0, sizeof(_Bool));
    result_86=(c>=32&&c<=126);
    _Bool __result__ = result_86;
    return __result__;
}
static inline char* string_read(char* file_name){
struct _IO_FILE* f_87;
void* right_value60;
void* right_value61;
char* result_88;
memset(&f_87, 0, sizeof(struct _IO_FILE*));
memset(&result_88, 0, sizeof(char*));
    f_87=fopen(file_name,"r");
    if(f_87==((void*)0)) {
        char* __result__ = ((char*)(right_value60=__builtin_string("")));
        return __result__;
    }
    result_88=(char*)come_increment_ref_count(((char*)(right_value61=FILE_read(f_87))));
    right_value61 = come_decrement_ref_count(right_value61, 1, 0);
    FILE_fclose(f_87);
    char* __result__ = result_88;
    result_88 = come_decrement_ref_count(result_88, 0, 1);
    return __result__;
}
static inline char* char$_read(char* file_name){
struct _IO_FILE* f_89;
void* right_value62;
void* right_value63;
char* result_90;
memset(&f_89, 0, sizeof(struct _IO_FILE*));
memset(&result_90, 0, sizeof(char*));
    f_89=fopen(file_name,"r");
    if(f_89==((void*)0)) {
        char* __result__ = ((char*)(right_value62=__builtin_string("")));
        return __result__;
    }
    result_90=(char*)come_increment_ref_count(((char*)(right_value63=FILE_read(f_89))));
    right_value63 = come_decrement_ref_count(right_value63, 1, 0);
    FILE_fclose(f_89);
    char* __result__ = result_90;
    result_90 = come_decrement_ref_count(result_90, 0, 1);
    return __result__;
}
static inline void bool$_catch(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
}

// body function







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



static struct list$$1char$ph* list$$1char$ph_initialize(struct list$$1char$ph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$$1char$ph* __result__ = self;
        call_finalizer(list$$1char$ph$$1char$ph_finalize,self,0, 0, 1);
        return __result__;
}

static void list$$1char$ph$$1char$ph_finalize(struct list$$1char$ph* self){
struct list_item$$1char$ph$$1char$ph* it_44;
struct list_item$$1char$ph$$1char$ph* prev_it_45;
memset(&it_44, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&prev_it_45, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
            it_44=self->head;
            while(it_44!=((void*)0)) {
                if(1) {
                    it_44->item = come_decrement_ref_count(it_44->item, 0, 0);
                }
                prev_it_45=it_44;
                it_44=it_44->next;
                come_free_object(prev_it_45);
            }
}

static void list$$1char$ph_finalize(struct list$$1char$ph* self){
struct list_item$$1char$ph$$1char$ph* it_47;
struct list_item$$1char$ph$$1char$ph* prev_it_48;
memset(&it_47, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&prev_it_48, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
        it_47=self->head;
        while(it_47!=((void*)0)) {
            if(1) {
                it_47->item = come_decrement_ref_count(it_47->item, 0, 0);
            }
            prev_it_48=it_47;
            it_47=it_47->next;
            come_free_object(prev_it_48);
        }
}

static void list$$1char$ph_push_back(struct list$$1char$ph* self, char* item){
void* right_value17;
struct list_item$$1char$ph$$1char$ph* litem_50;
void* right_value18;
struct list_item$$1char$ph$$1char$ph* litem_51;
void* right_value19;
struct list_item$$1char$ph$$1char$ph* litem_52;
memset(&litem_50, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_51, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_52, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
            if(self->len==0) {
                litem_50=((struct list_item$$1char$ph$$1char$ph*)(right_value17=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1))));
                litem_50->prev=((void*)0);
                litem_50->next=((void*)0);
                if(litem_50->item) {(char*)come_decrement_ref_count(litem_50->item,0,0); }
                litem_50->item=(char*)come_increment_ref_count(item);
                self->tail=litem_50;
                self->head=litem_50;
            }
            else if(self->len==1) {
                litem_51=((struct list_item$$1char$ph$$1char$ph*)(right_value18=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1))));
                litem_51->prev=self->head;
                litem_51->next=((void*)0);
                if(litem_51->item) {(char*)come_decrement_ref_count(litem_51->item,0,0); }
                litem_51->item=(char*)come_increment_ref_count(item);
                self->tail=litem_51;
                self->head->next=litem_51;
            }
            else {
                litem_52=((struct list_item$$1char$ph$$1char$ph*)(right_value19=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1))));
                litem_52->prev=self->tail;
                litem_52->next=((void*)0);
                if(litem_52->item) {(char*)come_decrement_ref_count(litem_52->item,0,0); }
                litem_52->item=(char*)come_increment_ref_count(item);
                self->tail->next=litem_52;
                self->tail=litem_52;
            }
            self->len++;
            item = come_decrement_ref_count(item, 0, 1);
}




static void FILE_finalize(struct _IO_FILE* self){
}




























int* funHeap(int x, int y){
void* right_value64;
int* result_91;
memset(&result_91, 0, sizeof(int*));
    result_91=(int*)come_increment_ref_count(((int*)(right_value64=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value64 = come_decrement_ref_count(right_value64, 1, 0);
    *result_91=x+y;
    int* __result__ = result_91;
    result_91 = come_decrement_ref_count(result_91, 0, 1);
    return __result__;
}

int funHeap2(int* x, int* y){
    int __result__ = *x+*y;
    x = come_decrement_ref_count(x, 0, 1);
    y = come_decrement_ref_count(y, 0, 1);
    return __result__;
}

int int$_fun(int* self){
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

struct tuple2$$2int$bool$* fun_exception(int x, int y){
void* right_value65;
void* right_value66;
    struct tuple2$$2int$bool$* __result__ = (((struct tuple2$$2int$bool$*)(right_value66=tuple2$$2int$bool$_initialize((struct tuple2$$2int$bool$*)come_increment_ref_count(((struct tuple2$$2int$bool$*)(right_value65=(struct tuple2$$2int$bool$*)come_calloc(1, sizeof(struct tuple2$$2int$bool$)*(1))))),x+y,(_Bool)1))));
    return __result__;
}

static struct tuple2$$2int$bool$* tuple2$$2int$bool$_initialize(struct tuple2$$2int$bool$* self, int v1, _Bool v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$$2int$bool$* __result__ = self;
        call_finalizer(tuple2$$2int$bool$$$2int$bool$_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple2$$2int$bool$$$2int$bool$_finalize(struct tuple2$$2int$bool$* self){
}

int main(){
void* right_value67;
char* a_92;
char* p_93;
void* p2_94;
int count_95;
int size2_96;
char* mem2_97;
int b_98;
int* a_99;
int a2_100;
int b_101;
int n_102;
void* right_value68;
char* ax_103;
void* right_value69;
char* a_104;
char* b_105;
struct sData data_106;
void* right_value70;
char* str_107;
void* right_value71;
struct sData* data_108;
void* right_value72;
void* right_value73;
void* right_value74;
int* axyz_109;
void* right_value75;
int* xxx_110;
void* right_value76;
int* yyy_111;
void* right_value77;
int* zzz_112;
void* right_value78;
int bzyz_113;
int* azyz_114;
int n_115;
struct __current_stack1__ __current_stack1__;
void* right_value79;
void* right_value80;
struct list$$1char$ph* liX_116;
void* right_value81;
void* right_value82;
void* right_value83;
char* it_118;
void* right_value84;
void* right_value85;
struct list$$1int$* liX2_122;
int it_129;
int aX_131;
struct __current_stack2__ __current_stack2__;
int aXYZY_135;
void* right_value89;
void* right_value90;
struct list$$1char$ph* li_136;
void* right_value91;
void* right_value92;
void* right_value93;
char* it_137;
void* right_value94;
void* right_value95;
struct list$$1int$* li2_138;
int it_139;
int aXL_140;
struct __current_stack3__ __current_stack3__;
void* right_value108;
void* right_value109;
void* right_value110;
struct list$$1char$ph* li3_177;
void* right_value111;
void* right_value112;
void* right_value113;
void* right_value114;
void* right_value115;
void* right_value116;
struct list$$1int$* li4_182;
void* right_value117;
void* right_value118;
struct list$$1int$* li5_183;
void* right_value119;
void* right_value120;
struct list$$1int$* li6_188;
void* right_value123;
int* axyzX_194;
void* right_value124;
void* right_value125;
void* right_value126;
void* right_value127;
void* right_value128;
char* strXYXY_195;
void* right_value129;
void* right_value130;
struct list$$1int$* liZ_196;
struct __current_stack4__ __current_stack4__;
void* right_value131;
void* right_value132;
struct list$$1int$* liZ2_202;
void* right_value133;
void* right_value134;
struct list$$1int$* __list_value1___205;
void* right_value135;
void* right_value136;
struct list$$1int$* __list_value2___206;
void* right_value137;
void* right_value138;
struct list$$1int$* __list_value3___207;
struct __current_stack5__ __current_stack5__;
void* right_value139;
void* right_value145;
struct map$$2char$pint$* __map_value1___217;
void* right_value152;
void* right_value153;
struct map$$2char$pint$* __map_value2___244;
void* right_value154;
void* right_value155;
struct map$$2char$pint$* __map_value3___255;
struct map$$2char$pint$* m1_256;
struct map$$2char$pint$* m2_280;
void* right_value166;
void* right_value167;
struct tuple1$$1int$* tt1_281;
void* right_value168;
void* right_value169;
void* right_value170;
struct tuple1$$1char$ph* tt2_282;
void* right_value171;
struct tuple1$$1char$ph* tt3_284;
void* right_value173;
void* right_value174;
struct tuple1$$1int$* ttt1_285;
void* right_value175;
void* right_value176;
void* right_value177;
struct tuple1$$1char$ph* ttt2_286;
void* right_value178;
struct tuple1$$1char$ph* ttt3_287;
void* right_value179;
void* right_value180;
void* right_value181;
struct tuple2$$2char$phint$* __tuple_value1___288;
struct tuple2$$2char$phint$* t4_289;
void* right_value182;
void* right_value183;
void* right_value184;
struct tuple2$$2char$pint$* __tuple_value2___290;
void* right_value185;
void* right_value186;
struct tuple2$$2char$pint$* __tuple_value3___291;
void* right_value187;
void* right_value188;
struct tuple2$$2char$pint$* __tuple_value4___292;
void* right_value189;
void* right_value190;
struct tuple2$$2char$pint$* __tuple_value5___293;
void* right_value191;
void* right_value192;
struct IA* _inf_value1;
struct sDataA* _inf_obj_value1;
void* right_value194;
struct IA** _inf_valueX1;
struct IA* ia_295;
void* right_value195;
void* right_value196;
struct list$$1IA$ph* liIA_298;
void* right_value200;
void* right_value201;
struct IA* _inf_value2;
struct sDataA* _inf_obj_value2;
void* right_value203;
struct IA** _inf_valueX5;
void* right_value204;
void* right_value205;
struct IA* _inf_value3;
struct sDataA* _inf_obj_value3;
void* right_value207;
struct IA** _inf_valueX6;
void* right_value208;
void* right_value209;
struct IA* _inf_value4;
struct sDataA* _inf_obj_value4;
void* right_value211;
struct IA** _inf_valueX7;
struct IA* it_308;
void* right_value212;
void* right_value213;
struct tuple3$$3int$int$bool$* __tuple_value6___310;
int aZZZ_311;
int bZZZ_312;
void* right_value214;
struct __current_stack6__ __current_stack6__;
int xZZZZZZZZ_313;
void* right_value215;
void* right_value216;
struct list$$1char$ph* li_str_314;
void* right_value217;
void* right_value218;
void* right_value219;
void* right_value220;
void* right_value221;
struct list$$1char$ph* __list_value4___315;
void* right_value222;
void* right_value223;
void* right_value224;
memset(&a_92, 0, sizeof(char*));
memset(&p_93, 0, sizeof(char*));
memset(&p2_94, 0, sizeof(void*));
memset(&count_95, 0, sizeof(int));
memset(&size2_96, 0, sizeof(int));
memset(&mem2_97, 0, sizeof(char*));
memset(&b_98, 0, sizeof(int));
memset(&a_99, 0, sizeof(int*));
memset(&a2_100, 0, sizeof(int));
memset(&b_101, 0, sizeof(int));
memset(&n_102, 0, sizeof(int));
memset(&ax_103, 0, sizeof(char*));
memset(&a_104, 0, sizeof(char*));
memset(&b_105, 0, sizeof(char*));
memset(&data_106, 0, sizeof(struct sData));
memset(&str_107, 0, sizeof(char*));
memset(&data_108, 0, sizeof(struct sData*));
memset(&axyz_109, 0, sizeof(int*));
memset(&xxx_110, 0, sizeof(int*));
memset(&yyy_111, 0, sizeof(int*));
memset(&zzz_112, 0, sizeof(int*));
memset(&bzyz_113, 0, sizeof(int));
memset(&azyz_114, 0, sizeof(int*));
memset(&n_115, 0, sizeof(int));
memset(&liX_116, 0, sizeof(struct list$$1char$ph*));
memset(&it_118, 0, sizeof(char*));
memset(&liX2_122, 0, sizeof(struct list$$1int$*));
memset(&it_129, 0, sizeof(int));
memset(&aX_131, 0, sizeof(int));
memset(&aXYZY_135, 0, sizeof(int));
memset(&li_136, 0, sizeof(struct list$$1char$ph*));
memset(&it_137, 0, sizeof(char*));
memset(&li2_138, 0, sizeof(struct list$$1int$*));
memset(&it_139, 0, sizeof(int));
memset(&aXL_140, 0, sizeof(int));
memset(&li3_177, 0, sizeof(struct list$$1char$ph*));
memset(&li4_182, 0, sizeof(struct list$$1int$*));
memset(&li5_183, 0, sizeof(struct list$$1int$*));
memset(&li6_188, 0, sizeof(struct list$$1int$*));
memset(&axyzX_194, 0, sizeof(int*));
memset(&strXYXY_195, 0, sizeof(char*));
memset(&liZ_196, 0, sizeof(struct list$$1int$*));
memset(&liZ2_202, 0, sizeof(struct list$$1int$*));
memset(&__list_value1___205, 0, sizeof(struct list$$1int$*));
memset(&__list_value2___206, 0, sizeof(struct list$$1int$*));
memset(&__list_value3___207, 0, sizeof(struct list$$1int$*));
memset(&__map_value1___217, 0, sizeof(struct map$$2char$pint$*));
memset(&__map_value2___244, 0, sizeof(struct map$$2char$pint$*));
memset(&__map_value3___255, 0, sizeof(struct map$$2char$pint$*));
memset(&m1_256, 0, sizeof(struct map$$2char$pint$*));
memset(&m2_280, 0, sizeof(struct map$$2char$pint$*));
memset(&tt1_281, 0, sizeof(struct tuple1$$1int$*));
memset(&tt2_282, 0, sizeof(struct tuple1$$1char$ph*));
memset(&tt3_284, 0, sizeof(struct tuple1$$1char$ph*));
memset(&ttt1_285, 0, sizeof(struct tuple1$$1int$*));
memset(&ttt2_286, 0, sizeof(struct tuple1$$1char$ph*));
memset(&ttt3_287, 0, sizeof(struct tuple1$$1char$ph*));
memset(&__tuple_value1___288, 0, sizeof(struct tuple2$$2char$phint$*));
memset(&t4_289, 0, sizeof(struct tuple2$$2char$phint$*));
memset(&__tuple_value2___290, 0, sizeof(struct tuple2$$2char$pint$*));
memset(&__tuple_value3___291, 0, sizeof(struct tuple2$$2char$pint$*));
memset(&__tuple_value4___292, 0, sizeof(struct tuple2$$2char$pint$*));
memset(&__tuple_value5___293, 0, sizeof(struct tuple2$$2char$pint$*));
memset(&ia_295, 0, sizeof(struct IA*));
memset(&liIA_298, 0, sizeof(struct list$$1IA$ph*));
memset(&it_308, 0, sizeof(struct IA*));
memset(&__tuple_value6___310, 0, sizeof(struct tuple3$$3int$int$bool$*));
memset(&aZZZ_311, 0, sizeof(int));
memset(&aZZZ_311, 0, sizeof(int));
memset(&aZZZ_311, 0, sizeof(int));
memset(&bZZZ_312, 0, sizeof(int));
memset(&xZZZZZZZZ_313, 0, sizeof(int));
memset(&li_str_314, 0, sizeof(struct list$$1char$ph*));
memset(&__list_value4___315, 0, sizeof(struct list$$1char$ph*));
    if(1) {
        a_92=(char*)come_increment_ref_count(((char**)(right_value67=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
        right_value67 = come_decrement_ref_count(right_value67, 1, 0);
        a_92 = come_decrement_ref_count(a_92, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_93="ABC";
    p2_94="ABC";
    printf("%s\n",(char*)p2_94);
    printf("%c\n",*p_93);
    count_95=0;
    size2_96=1;
    mem2_97=calloc(1,sizeof(int)+sizeof(long)+count_95*size2_96);
    free(mem2_97);
    a_99=&b_98;
    (*a_99)=123;
    a2_100=123;
    if((_Bool)1) {
        b_101=234;
        n_102=0;
        while(n_102<3) {
            printf("a %d\n",a2_100);
            printf("b %d\n",b_101);
            n_102++;
        }
    }
    ax_103=(char*)come_increment_ref_count(((char**)(right_value68=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
    right_value68 = come_decrement_ref_count(right_value68, 1, 0);
    if(1) {
        a_104=(char*)come_increment_ref_count(((char**)(right_value69=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
        right_value69 = come_decrement_ref_count(right_value69, 1, 0);
        b_105=(char*)come_increment_ref_count(a_104);
        if(data_106.a) {(char*)come_decrement_ref_count(data_106.a,0,0); }
        data_106.a=(char*)come_increment_ref_count(a_104);
        a_104 = come_decrement_ref_count(a_104, 0, 0);
        b_105 = come_decrement_ref_count(b_105, 0, 0);
        call_finalizer(sData_finalize,(&data_106),1, 0, 0);
    }
    str_107=(char*)come_increment_ref_count(((char**)(right_value70=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
    right_value70 = come_decrement_ref_count(right_value70, 1, 0);
    strncpy(str_107,"ABC",128);
    data_108=(struct sData*)come_increment_ref_count(((struct sData*)(right_value71=(struct sData*)come_calloc(1, sizeof(struct sData)*(1)))));
    call_finalizer(sData_finalize,right_value71,0, 1, 0);
    if(data_108->a) {(char*)come_decrement_ref_count(data_108->a,0,0); }
    data_108->a=(char*)come_increment_ref_count(str_107);
    puts(data_108->a);
    ((int*)(right_value72=funHeap(7,7)));
    right_value72 = come_decrement_ref_count(right_value72, 1, 0);
    xassert("right value test",*((int*)(right_value73=funHeap(3,4)))==7);
    right_value73 = come_decrement_ref_count(right_value73, 1, 0);
    axyz_109=(int*)come_increment_ref_count(((int*)(right_value74=funHeap(1,2))));
    right_value74 = come_decrement_ref_count(right_value74, 1, 0);
    xassert("variable test",*axyz_109==3);
    xxx_110=(int*)come_increment_ref_count(((int*)(right_value75=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value75 = come_decrement_ref_count(right_value75, 1, 0);
    *xxx_110=1;
    yyy_111=(int*)come_increment_ref_count(((int*)(right_value76=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value76 = come_decrement_ref_count(right_value76, 1, 0);
    *yyy_111=2;
    xassert("heap",funHeap2((int*)come_increment_ref_count(xxx_110),(int*)come_increment_ref_count(yyy_111))==3);
    zzz_112=(int*)come_increment_ref_count(((int*)(right_value77=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value77 = come_decrement_ref_count(right_value77, 1, 0);
    ((int*)(right_value78=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value78 = come_decrement_ref_count(right_value78, 1, 0);
    bzyz_113=123;
    azyz_114=&bzyz_113;
    xassert("impl",int$_fun(azyz_114)==123);
    n_115=0;
    __current_stack1__.p_93 = &p_93;
    __current_stack1__.p2_94 = &p2_94;
    __current_stack1__.count_95 = &count_95;
    __current_stack1__.size2_96 = &size2_96;
    __current_stack1__.mem2_97 = &mem2_97;
    __current_stack1__.b_98 = &b_98;
    __current_stack1__.a_99 = &a_99;
    __current_stack1__.a2_100 = &a2_100;
    __current_stack1__.ax_103 = &ax_103;
    __current_stack1__.str_107 = &str_107;
    __current_stack1__.data_108 = &data_108;
    __current_stack1__.axyz_109 = &axyz_109;
    __current_stack1__.xxx_110 = &xxx_110;
    __current_stack1__.yyy_111 = &yyy_111;
    __current_stack1__.zzz_112 = &zzz_112;
    __current_stack1__.bzyz_113 = &bzyz_113;
    __current_stack1__.azyz_114 = &azyz_114;
    __current_stack1__.n_115 = &n_115;
    int$_times(3,&__current_stack1__,method_block1);
    liX_116=(struct list$$1char$ph*)come_increment_ref_count(((struct list$$1char$ph*)(right_value80=list$$1char$ph_initialize((struct list$$1char$ph*)come_increment_ref_count(((struct list$$1char$ph*)(right_value79=(struct list$$1char$ph*)come_calloc(1, sizeof(struct list$$1char$ph)*(1)))))))));
    call_finalizer(list$$1char$ph_finalize,right_value79,0, 1, 0);
    call_finalizer(list$$1char$ph$$1char$ph_finalize,right_value80,0, 1, 0);
    list$$1char$ph_push_back(liX_116,(char*)come_increment_ref_count(((char*)(right_value81=__builtin_string("ABC")))));
    right_value81 = come_decrement_ref_count(right_value81, 1, 0);
    list$$1char$ph_push_back(liX_116,(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string("DEF")))));
    right_value82 = come_decrement_ref_count(right_value82, 1, 0);
    list$$1char$ph_push_back(liX_116,(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string("GHI")))));
    right_value83 = come_decrement_ref_count(right_value83, 1, 0);
    for(
    it_118=list$$1char$ph_begin((liX_116));
    !list$$1char$ph_end((liX_116));
    it_118=list$$1char$ph_next((liX_116))
    ){
        printf("%s\n",it_118);
    }
    liX2_122=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value85=list$$1int$_initialize((struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value84=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))))));
    call_finalizer(list$$1int$_finalize,right_value84,0, 1, 0);
    call_finalizer(list$$1int$$$1int$_finalize,right_value85,0, 1, 0);
    list$$1int$_push_back(liX2_122,1);
    list$$1int$_push_back(liX2_122,2);
    list$$1int$_push_back(liX2_122,3);
    for(
    it_129=list$$1int$_begin((liX2_122));
    !list$$1int$_end((liX2_122));
    it_129=list$$1int$_next((liX2_122))
    ){
        printf("%d\n",it_129);
    }
    aX_131=123;
    __current_stack2__.p_93 = &p_93;
    __current_stack2__.p2_94 = &p2_94;
    __current_stack2__.count_95 = &count_95;
    __current_stack2__.size2_96 = &size2_96;
    __current_stack2__.mem2_97 = &mem2_97;
    __current_stack2__.b_98 = &b_98;
    __current_stack2__.a_99 = &a_99;
    __current_stack2__.a2_100 = &a2_100;
    __current_stack2__.ax_103 = &ax_103;
    __current_stack2__.str_107 = &str_107;
    __current_stack2__.data_108 = &data_108;
    __current_stack2__.axyz_109 = &axyz_109;
    __current_stack2__.xxx_110 = &xxx_110;
    __current_stack2__.yyy_111 = &yyy_111;
    __current_stack2__.zzz_112 = &zzz_112;
    __current_stack2__.bzyz_113 = &bzyz_113;
    __current_stack2__.azyz_114 = &azyz_114;
    __current_stack2__.n_115 = &n_115;
    __current_stack2__.liX_116 = &liX_116;
    __current_stack2__.liX2_122 = &liX2_122;
    __current_stack2__.aX_131 = &aX_131;
    list$$1int$_each(liX2_122,&__current_stack2__,method_block2);
    xassert("method_block test",aX_131==2);
    xassert("var initialize test",aXYZY_135==0);
    li_136=(struct list$$1char$ph*)come_increment_ref_count(((struct list$$1char$ph*)(right_value90=list$$1char$ph_initialize((struct list$$1char$ph*)come_increment_ref_count(((struct list$$1char$ph*)(right_value89=(struct list$$1char$ph*)come_calloc(1, sizeof(struct list$$1char$ph)*(1)))))))));
    call_finalizer(list$$1char$ph_finalize,right_value89,0, 1, 0);
    call_finalizer(list$$1char$ph$$1char$ph_finalize,right_value90,0, 1, 0);
    list$$1char$ph_push_back(li_136,(char*)come_increment_ref_count(((char*)(right_value91=__builtin_string("ABC")))));
    right_value91 = come_decrement_ref_count(right_value91, 1, 0);
    list$$1char$ph_push_back(li_136,(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string("DEF")))));
    right_value92 = come_decrement_ref_count(right_value92, 1, 0);
    list$$1char$ph_push_back(li_136,(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string("GHI")))));
    right_value93 = come_decrement_ref_count(right_value93, 1, 0);
    for(
    it_137=list$$1char$ph_begin((li_136));
    !list$$1char$ph_end((li_136));
    it_137=list$$1char$ph_next((li_136))
    ){
        printf("%s\n",it_137);
    }
    li2_138=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value95=list$$1int$_initialize((struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value94=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))))));
    call_finalizer(list$$1int$_finalize,right_value94,0, 1, 0);
    call_finalizer(list$$1int$$$1int$_finalize,right_value95,0, 1, 0);
    list$$1int$_push_back(li2_138,1);
    list$$1int$_push_back(li2_138,2);
    list$$1int$_push_back(li2_138,3);
    for(
    it_139=list$$1int$_begin((li2_138));
    !list$$1int$_end((li2_138));
    it_139=list$$1int$_next((li2_138))
    ){
        printf("%d\n",it_139);
    }
    aXL_140=123;
    __current_stack3__.p_93 = &p_93;
    __current_stack3__.p2_94 = &p2_94;
    __current_stack3__.count_95 = &count_95;
    __current_stack3__.size2_96 = &size2_96;
    __current_stack3__.mem2_97 = &mem2_97;
    __current_stack3__.b_98 = &b_98;
    __current_stack3__.a_99 = &a_99;
    __current_stack3__.a2_100 = &a2_100;
    __current_stack3__.ax_103 = &ax_103;
    __current_stack3__.str_107 = &str_107;
    __current_stack3__.data_108 = &data_108;
    __current_stack3__.axyz_109 = &axyz_109;
    __current_stack3__.xxx_110 = &xxx_110;
    __current_stack3__.yyy_111 = &yyy_111;
    __current_stack3__.zzz_112 = &zzz_112;
    __current_stack3__.bzyz_113 = &bzyz_113;
    __current_stack3__.azyz_114 = &azyz_114;
    __current_stack3__.n_115 = &n_115;
    __current_stack3__.liX_116 = &liX_116;
    __current_stack3__.liX2_122 = &liX2_122;
    __current_stack3__.aX_131 = &aX_131;
    __current_stack3__.aXYZY_135 = &aXYZY_135;
    __current_stack3__.li_136 = &li_136;
    __current_stack3__.li2_138 = &li2_138;
    __current_stack3__.aXL_140 = &aXL_140;
    list$$1int$_each(li2_138,&__current_stack3__,method_block3);
    xassert("var of method block",aXL_140==2);
    xassert("list::item",list$$1int$_item(li2_138,0,-1)==1);
    list$$1int$_insert(li2_138,1,5);
    xassert("list::insert",list$$1int$_item(li2_138,0,-1)==1&&list$$1int$_item(li2_138,1,-1)==5&&list$$1int$_item(li2_138,2,-1)==2&&list$$1int$_item(li2_138,3,-1)==3);
    list$$1char$ph_insert(li_136,1,(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string("GGG")))));
    right_value108 = come_decrement_ref_count(right_value108, 1, 0);
    xassert("list::insert",strcmp(list$$1char$ph_item(li_136,0,-1),"ABC")==0&&strcmp(list$$1char$ph_item(li_136,1,-1),"GGG")==0&&strcmp(list$$1char$ph_item(li_136,2,-1),"DEF")==0&&strcmp(list$$1char$ph_item(li_136,3,-1),"GHI")==0);
    list$$1char$ph_reset(li_136);
    xassert("list::reset",list$$1char$ph_length(li_136)==0);
    list$$1int$_delete(li2_138,0,1);
    xassert("list::delete",list$$1int$_item(li2_138,0,-1)==5&&list$$1int$_item(li2_138,1,-1)==2&&list$$1int$_item(li2_138,2,-1)==3);
    li3_177=(struct list$$1char$ph*)come_increment_ref_count(((struct list$$1char$ph*)(right_value110=list$$1char$ph_initialize((struct list$$1char$ph*)come_increment_ref_count(((struct list$$1char$ph*)(right_value109=(struct list$$1char$ph*)come_calloc(1, sizeof(struct list$$1char$ph)*(1)))))))));
    call_finalizer(list$$1char$ph_finalize,right_value109,0, 1, 0);
    call_finalizer(list$$1char$ph$$1char$ph_finalize,right_value110,0, 1, 0);
    list$$1char$ph$$1char$ph_push_back(li3_177,(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string("AAA")))));
    right_value111 = come_decrement_ref_count(right_value111, 1, 0);
    list$$1char$ph$$1char$ph_push_back(li3_177,(char*)come_increment_ref_count(((char*)(right_value112=__builtin_string("BBB")))));
    right_value112 = come_decrement_ref_count(right_value112, 1, 0);
    list$$1char$ph$$1char$ph_push_back(li3_177,(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string("CCC")))));
    right_value113 = come_decrement_ref_count(right_value113, 1, 0);
    list$$1char$ph$$1char$ph_replace(li3_177,0,(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string("ABC")))));
    right_value114 = come_decrement_ref_count(right_value114, 1, 0);
    xassert("list::replace",strcmp(list$$1char$ph$$1char$ph_item(li3_177,0,((void*)0)),"ABC")==0&&strcmp(list$$1char$ph$$1char$ph_item(li3_177,1,((void*)0)),"BBB")==0&&strcmp(list$$1char$ph$$1char$ph_item(li3_177,2,((void*)0)),"CCC")==0);
    li4_182=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value116=list$$1int$_initialize((struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value115=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))))));
    call_finalizer(list$$1int$_finalize,right_value115,0, 1, 0);
    call_finalizer(list$$1int$$$1int$_finalize,right_value116,0, 1, 0);
    list$$1int$$$1int$_push_back(li4_182,1);
    list$$1int$$$1int$_push_back(li4_182,3);
    list$$1int$$$1int$_push_back(li4_182,5);
    li5_183=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value118=list$$1int$_initialize((struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value117=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))))));
    call_finalizer(list$$1int$_finalize,right_value117,0, 1, 0);
    call_finalizer(list$$1int$$$1int$_finalize,right_value118,0, 1, 0);
    list$$1int$$$1int$_push_back(li5_183,1);
    list$$1int$$$1int$_push_back(li5_183,3);
    list$$1int$$$1int$_push_back(li5_183,5);
    xassert("list::equals",list$$1int$$$1int$_equals(li4_182,li5_183));
    xassert("list::find",list$$1int$$$1int$_find(li4_182,5,-1)==2);
    li6_188=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value120=list$$1int$_initialize((struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value119=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))))));
    call_finalizer(list$$1int$_finalize,right_value119,0, 1, 0);
    call_finalizer(list$$1int$$$1int$_finalize,right_value120,0, 1, 0);
    list$$1int$$$1int$_push_back(li6_188,3);
    list$$1int$$$1int$_push_back(li6_188,5);
    xassert("list::sublist",list$$1int$$$1int$_equals(((struct list$$1int$*)(right_value123=list$$1int$$$1int$_sublist(li5_183,1,-1))),li6_188));
    call_finalizer(list$$1int$$$1int$_finalize,right_value123,0, 1, 0);
    if(axyzX_194) {(int*)come_decrement_ref_count(axyzX_194,0,0); }
    axyzX_194=(int*)come_increment_ref_count(((int*)(right_value124=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value124 = come_decrement_ref_count(right_value124, 1, 0);
    if(axyzX_194) {(int*)come_decrement_ref_count(axyzX_194,0,0); }
    axyzX_194=(int*)come_increment_ref_count(((int*)(right_value125=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value125 = come_decrement_ref_count(right_value125, 1, 0);
    xassert("operator equals",string_operator_equals(((char*)(right_value126=__builtin_string("AAA"))),((char*)(right_value127=__builtin_string("AAA")))));
    right_value126 = come_decrement_ref_count(right_value126, 1, 0);
    right_value127 = come_decrement_ref_count(right_value127, 1, 0);
    xassert("operator test",string_operator_equals(((char*)(right_value128=char$_operator_add("AAA","BBB"))),"AAABBB"));
    right_value128 = come_decrement_ref_count(right_value128, 1, 0);
    strXYXY_195="ABC";
    xassert("operator test",*(strXYXY_195+1)==66);
    liZ_196=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value130=list$$1int$_initialize((struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value129=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))))));
    call_finalizer(list$$1int$_finalize,right_value129,0, 1, 0);
    call_finalizer(list$$1int$$$1int$_finalize,right_value130,0, 1, 0);
    list$$1int$_push_back(liZ_196,1);
    list$$1int$_push_back(liZ_196,2);
    list$$1int$_push_back(liZ_196,3);
    __current_stack4__.p_93 = &p_93;
    __current_stack4__.p2_94 = &p2_94;
    __current_stack4__.count_95 = &count_95;
    __current_stack4__.size2_96 = &size2_96;
    __current_stack4__.mem2_97 = &mem2_97;
    __current_stack4__.b_98 = &b_98;
    __current_stack4__.a_99 = &a_99;
    __current_stack4__.a2_100 = &a2_100;
    __current_stack4__.ax_103 = &ax_103;
    __current_stack4__.str_107 = &str_107;
    __current_stack4__.data_108 = &data_108;
    __current_stack4__.axyz_109 = &axyz_109;
    __current_stack4__.xxx_110 = &xxx_110;
    __current_stack4__.yyy_111 = &yyy_111;
    __current_stack4__.zzz_112 = &zzz_112;
    __current_stack4__.bzyz_113 = &bzyz_113;
    __current_stack4__.azyz_114 = &azyz_114;
    __current_stack4__.n_115 = &n_115;
    __current_stack4__.liX_116 = &liX_116;
    __current_stack4__.liX2_122 = &liX2_122;
    __current_stack4__.aX_131 = &aX_131;
    __current_stack4__.aXYZY_135 = &aXYZY_135;
    __current_stack4__.li_136 = &li_136;
    __current_stack4__.li2_138 = &li2_138;
    __current_stack4__.aXL_140 = &aXL_140;
    __current_stack4__.li3_177 = &li3_177;
    __current_stack4__.li4_182 = &li4_182;
    __current_stack4__.li5_183 = &li5_183;
    __current_stack4__.li6_188 = &li6_188;
    __current_stack4__.axyzX_194 = &axyzX_194;
    __current_stack4__.strXYXY_195 = &strXYXY_195;
    __current_stack4__.liZ_196 = &liZ_196;
    list$$1int$_each(liZ_196,&__current_stack4__,method_block4);
    list$$1int$_operator_store_element(liZ_196,0,777);
    printf("liZ[0] %d\n",list$$1int$_operator_load_element(liZ_196,0));
    liZ2_202=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value132=list$$1int$_initialize((struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value131=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))))));
    call_finalizer(list$$1int$_finalize,right_value131,0, 1, 0);
    call_finalizer(list$$1int$$$1int$_finalize,right_value132,0, 1, 0);
    list$$1int$_push_back(liZ2_202,777);
    list$$1int$_push_back(liZ2_202,2);
    list$$1int$_push_back(liZ2_202,3);
    xassert("list equals",list$$1int$_operator_equals(liZ_196,liZ2_202));
    __list_value1___205=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value134=list$$1int$_initialize((struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value133=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))))));
    call_finalizer(list$$1int$_finalize,right_value133,0, 1, 0);
    call_finalizer(list$$1int$$$1int$_finalize,right_value134,0, 1, 0);
    list$$1int$_push_back(__list_value1___205,1);
    list$$1int$_push_back(__list_value1___205,2);
    list$$1int$_push_back(__list_value1___205,3);
    __list_value2___206=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value136=list$$1int$_initialize((struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value135=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))))));
    call_finalizer(list$$1int$_finalize,right_value135,0, 1, 0);
    call_finalizer(list$$1int$$$1int$_finalize,right_value136,0, 1, 0);
    list$$1int$_push_back(__list_value2___206,1);
    list$$1int$_push_back(__list_value2___206,2);
    list$$1int$_push_back(__list_value2___206,3);
    xassert("list equals test",list$$1int$_operator_equals(__list_value1___205,__list_value2___206));
    __list_value3___207=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value138=list$$1int$_initialize((struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value137=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))))));
    call_finalizer(list$$1int$_finalize,right_value137,0, 1, 0);
    call_finalizer(list$$1int$$$1int$_finalize,right_value138,0, 1, 0);
    list$$1int$_push_back(__list_value3___207,1);
    list$$1int$_push_back(__list_value3___207,2);
    list$$1int$_push_back(__list_value3___207,3);
    list$$1int$_push_back(__list_value3___207,4);
    list$$1int$_push_back(__list_value3___207,5);
    __current_stack5__.p_93 = &p_93;
    __current_stack5__.p2_94 = &p2_94;
    __current_stack5__.count_95 = &count_95;
    __current_stack5__.size2_96 = &size2_96;
    __current_stack5__.mem2_97 = &mem2_97;
    __current_stack5__.b_98 = &b_98;
    __current_stack5__.a_99 = &a_99;
    __current_stack5__.a2_100 = &a2_100;
    __current_stack5__.ax_103 = &ax_103;
    __current_stack5__.str_107 = &str_107;
    __current_stack5__.data_108 = &data_108;
    __current_stack5__.axyz_109 = &axyz_109;
    __current_stack5__.xxx_110 = &xxx_110;
    __current_stack5__.yyy_111 = &yyy_111;
    __current_stack5__.zzz_112 = &zzz_112;
    __current_stack5__.bzyz_113 = &bzyz_113;
    __current_stack5__.azyz_114 = &azyz_114;
    __current_stack5__.n_115 = &n_115;
    __current_stack5__.liX_116 = &liX_116;
    __current_stack5__.liX2_122 = &liX2_122;
    __current_stack5__.aX_131 = &aX_131;
    __current_stack5__.aXYZY_135 = &aXYZY_135;
    __current_stack5__.li_136 = &li_136;
    __current_stack5__.li2_138 = &li2_138;
    __current_stack5__.aXL_140 = &aXL_140;
    __current_stack5__.li3_177 = &li3_177;
    __current_stack5__.li4_182 = &li4_182;
    __current_stack5__.li5_183 = &li5_183;
    __current_stack5__.li6_188 = &li6_188;
    __current_stack5__.axyzX_194 = &axyzX_194;
    __current_stack5__.strXYXY_195 = &strXYXY_195;
    __current_stack5__.liZ_196 = &liZ_196;
    __current_stack5__.liZ2_202 = &liZ2_202;
    __current_stack5__.__list_value1___205 = &__list_value1___205;
    __current_stack5__.__list_value2___206 = &__list_value2___206;
    __current_stack5__.__list_value3___207 = &__list_value3___207;
    list$$1int$_each(__list_value3___207,&__current_stack5__,method_block5);
    __map_value1___217=(struct map$$2char$pint$*)come_increment_ref_count(((struct map$$2char$pint$*)(right_value145=map$$2char$pint$_initialize((struct map$$2char$pint$*)come_increment_ref_count(((struct map$$2char$pint$*)(right_value139=(struct map$$2char$pint$*)come_calloc(1, sizeof(struct map$$2char$pint$)*(1)))))))));
    call_finalizer(map$$2char$pint$_finalize,right_value139,0, 1, 0);
    call_finalizer(map$$2char$pint$$$2char$pint$_finalize,right_value145,0, 1, 0);
    map$$2char$pint$_insert(__map_value1___217,"AAA",1);
    map$$2char$pint$_insert(__map_value1___217,"BBB",2);
    __map_value2___244=(struct map$$2char$pint$*)come_increment_ref_count(((struct map$$2char$pint$*)(right_value153=map$$2char$pint$_initialize((struct map$$2char$pint$*)come_increment_ref_count(((struct map$$2char$pint$*)(right_value152=(struct map$$2char$pint$*)come_calloc(1, sizeof(struct map$$2char$pint$)*(1)))))))));
    call_finalizer(map$$2char$pint$_finalize,right_value152,0, 1, 0);
    call_finalizer(map$$2char$pint$$$2char$pint$_finalize,right_value153,0, 1, 0);
    map$$2char$pint$_insert(__map_value2___244,"AAA",1);
    map$$2char$pint$_insert(__map_value2___244,"BBB",2);
    xassert("map equals",map$$2char$pint$_operator_equals(__map_value1___217,__map_value2___244));
    __map_value3___255=(struct map$$2char$pint$*)come_increment_ref_count(((struct map$$2char$pint$*)(right_value155=map$$2char$pint$_initialize((struct map$$2char$pint$*)come_increment_ref_count(((struct map$$2char$pint$*)(right_value154=(struct map$$2char$pint$*)come_calloc(1, sizeof(struct map$$2char$pint$)*(1)))))))));
    call_finalizer(map$$2char$pint$_finalize,right_value154,0, 1, 0);
    call_finalizer(map$$2char$pint$$$2char$pint$_finalize,right_value155,0, 1, 0);
    map$$2char$pint$_insert(__map_value3___255,"AAA",1);
    map$$2char$pint$_insert(__map_value3___255,"BBB",2);
    m1_256=(struct map$$2char$pint$*)come_increment_ref_count(__map_value3___255);
    printf("%d %d\n",map$$2char$pint$_operator_load_element(m1_256,"AAA"),map$$2char$pint$_operator_load_element(m1_256,"BBB"));
    m2_280=(struct map$$2char$pint$*)come_increment_ref_count(map$$2char$pint$_clone(m1_256));
    printf("%d %d\n",map$$2char$pint$_operator_load_element(m2_280,"AAA"),map$$2char$pint$_operator_load_element(m2_280,"BBB"));
    xassert("map clone",map$$2char$pint$_operator_equals(m1_256,m2_280));
    tt1_281=(struct tuple1$$1int$*)come_increment_ref_count(((struct tuple1$$1int$*)(right_value167=tuple1$$1int$_initialize((struct tuple1$$1int$*)come_increment_ref_count(((struct tuple1$$1int$*)(right_value166=(struct tuple1$$1int$*)come_calloc(1, sizeof(struct tuple1$$1int$)*(1))))),1))));
    call_finalizer(tuple1$$1int$_finalize,right_value166,0, 1, 0);
    call_finalizer(tuple1$$1int$$$1int$_finalize,right_value167,0, 1, 0);
    tt1_281->v1=111;
    printf("%d\n",tt1_281->v1);
    tt2_282=(struct tuple1$$1char$ph*)come_increment_ref_count(((struct tuple1$$1char$ph*)(right_value170=tuple1$$1char$ph_initialize((struct tuple1$$1char$ph*)come_increment_ref_count(((struct tuple1$$1char$ph*)(right_value168=(struct tuple1$$1char$ph*)come_calloc(1, sizeof(struct tuple1$$1char$ph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value169=__builtin_string("ABC"))))))));
    call_finalizer(tuple1$$1char$ph_finalize,right_value168,0, 1, 0);
    right_value169 = come_decrement_ref_count(right_value169, 1, 0);
    call_finalizer(tuple1$$1char$ph$$1char$ph_finalize,right_value170,0, 1, 0);
    if(tt2_282->v1) {(char*)come_decrement_ref_count(tt2_282->v1,0,0); }
    tt2_282->v1=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string("DEF"))));
    right_value171 = come_decrement_ref_count(right_value171, 1, 0);
    printf("%s\n",tt2_282->v1);
    tt3_284=(struct tuple1$$1char$ph*)come_increment_ref_count(tuple1$$1char$ph_clone(tt2_282));
    printf("(%s)\n",tt3_284->v1);
    ttt1_285=(struct tuple1$$1int$*)come_increment_ref_count(((struct tuple1$$1int$*)(right_value174=tuple1$$1int$_initialize((struct tuple1$$1int$*)come_increment_ref_count(((struct tuple1$$1int$*)(right_value173=(struct tuple1$$1int$*)come_calloc(1, sizeof(struct tuple1$$1int$)*(1))))),1))));
    call_finalizer(tuple1$$1int$_finalize,right_value173,0, 1, 0);
    call_finalizer(tuple1$$1int$$$1int$_finalize,right_value174,0, 1, 0);
    ttt1_285->v1=111;
    printf("%d\n",ttt1_285->v1);
    ttt2_286=(struct tuple1$$1char$ph*)come_increment_ref_count(((struct tuple1$$1char$ph*)(right_value177=tuple1$$1char$ph_initialize((struct tuple1$$1char$ph*)come_increment_ref_count(((struct tuple1$$1char$ph*)(right_value175=(struct tuple1$$1char$ph*)come_calloc(1, sizeof(struct tuple1$$1char$ph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string("ABC"))))))));
    call_finalizer(tuple1$$1char$ph_finalize,right_value175,0, 1, 0);
    right_value176 = come_decrement_ref_count(right_value176, 1, 0);
    call_finalizer(tuple1$$1char$ph$$1char$ph_finalize,right_value177,0, 1, 0);
    if(ttt2_286->v1) {(char*)come_decrement_ref_count(ttt2_286->v1,0,0); }
    ttt2_286->v1=(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string("DEF"))));
    right_value178 = come_decrement_ref_count(right_value178, 1, 0);
    printf("%s\n",ttt2_286->v1);
    ttt3_287=(struct tuple1$$1char$ph*)come_increment_ref_count(tuple1$$1char$ph_clone(ttt2_286));
    printf("(%s)\n",ttt3_287->v1);
    xassert("tuple test",tuple1$$1char$ph_operator_equals(ttt2_286,ttt3_287));
    __tuple_value1___288=(struct tuple2$$2char$phint$*)come_increment_ref_count(((struct tuple2$$2char$phint$*)(right_value181=tuple2$$2char$phint$_initialize((struct tuple2$$2char$phint$*)come_increment_ref_count(((struct tuple2$$2char$phint$*)(right_value179=(struct tuple2$$2char$phint$*)come_calloc(1, sizeof(struct tuple2$$2char$phint$)*(1))))),(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string("ABC")))),5))));
    call_finalizer(tuple2$$2char$phint$_finalize,right_value179,0, 1, 0);
    right_value180 = come_decrement_ref_count(right_value180, 1, 0);
    call_finalizer(tuple2$$2char$phint$$$2char$phint$_finalize,right_value181,0, 1, 0);
    t4_289=(struct tuple2$$2char$phint$*)come_increment_ref_count(__tuple_value1___288);
    xassert("tuple test",string_operator_equals(t4_289->v1,((char*)(right_value182=__builtin_string("ABC"))))&&t4_289->v2==5);
    right_value182 = come_decrement_ref_count(right_value182, 1, 0);
    __tuple_value2___290=(struct tuple2$$2char$pint$*)come_increment_ref_count(((struct tuple2$$2char$pint$*)(right_value184=tuple2$$2char$pint$_initialize((struct tuple2$$2char$pint$*)come_increment_ref_count(((struct tuple2$$2char$pint$*)(right_value183=(struct tuple2$$2char$pint$*)come_calloc(1, sizeof(struct tuple2$$2char$pint$)*(1))))),"AAA",7))));
    call_finalizer(tuple2$$2char$pint$_finalize,right_value183,0, 1, 0);
    call_finalizer(tuple2$$2char$pint$$$2char$pint$_finalize,right_value184,0, 1, 0);
    __tuple_value3___291=(struct tuple2$$2char$pint$*)come_increment_ref_count(((struct tuple2$$2char$pint$*)(right_value186=tuple2$$2char$pint$_initialize((struct tuple2$$2char$pint$*)come_increment_ref_count(((struct tuple2$$2char$pint$*)(right_value185=(struct tuple2$$2char$pint$*)come_calloc(1, sizeof(struct tuple2$$2char$pint$)*(1))))),"AAA",7))));
    call_finalizer(tuple2$$2char$pint$_finalize,right_value185,0, 1, 0);
    call_finalizer(tuple2$$2char$pint$$$2char$pint$_finalize,right_value186,0, 1, 0);
    xassert("tuple testX",tuple2$$2char$pint$$$2char$pint$_operator_equals(__tuple_value2___290,__tuple_value3___291));
    __tuple_value4___292=(struct tuple2$$2char$pint$*)come_increment_ref_count(((struct tuple2$$2char$pint$*)(right_value188=tuple2$$2char$pint$_initialize((struct tuple2$$2char$pint$*)come_increment_ref_count(((struct tuple2$$2char$pint$*)(right_value187=(struct tuple2$$2char$pint$*)come_calloc(1, sizeof(struct tuple2$$2char$pint$)*(1))))),"AAA",8))));
    call_finalizer(tuple2$$2char$pint$_finalize,right_value187,0, 1, 0);
    call_finalizer(tuple2$$2char$pint$$$2char$pint$_finalize,right_value188,0, 1, 0);
    __tuple_value5___293=(struct tuple2$$2char$pint$*)come_increment_ref_count(((struct tuple2$$2char$pint$*)(right_value190=tuple2$$2char$pint$_initialize((struct tuple2$$2char$pint$*)come_increment_ref_count(((struct tuple2$$2char$pint$*)(right_value189=(struct tuple2$$2char$pint$*)come_calloc(1, sizeof(struct tuple2$$2char$pint$)*(1))))),"AAA",7))));
    call_finalizer(tuple2$$2char$pint$_finalize,right_value189,0, 1, 0);
    call_finalizer(tuple2$$2char$pint$$$2char$pint$_finalize,right_value190,0, 1, 0);
    xassert("tuple testX",tuple2$$2char$pint$$$2char$pint$_operator_not_equals(__tuple_value4___292,__tuple_value5___293));
    _inf_value1=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value1=((struct sDataA*)(right_value192=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value191=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),111,222)));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sDataA_finalize;
    _inf_value1->clone=sDataA_clone;
    _inf_value1->fun=sDataA_fun;
    _inf_valueX1=(struct IA*)come_increment_ref_count(((struct IA*)(right_value194=_inf_value1)));
    come_increment_ref_count(((struct IA*)((struct IA*)(right_value194=_inf_value1)))->_protocol_obj);
    ia_295=_inf_valueX1;
    call_finalizer(sDataA_finalize,right_value191,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value192,0, 1, 0);
    call_finalizer(((struct IA*)right_value194)->finalize, ((struct IA*)right_value194)->_protocol_obj,0, 1, 0);
    right_value194 = come_decrement_ref_count(right_value194, 1, 0);
    printf("%d\n",ia_295->fun(ia_295->_protocol_obj,0,0));
    liIA_298=(struct list$$1IA$ph*)come_increment_ref_count(((struct list$$1IA$ph*)(right_value196=list$$1IA$ph_initialize((struct list$$1IA$ph*)come_increment_ref_count(((struct list$$1IA$ph*)(right_value195=(struct list$$1IA$ph*)come_calloc(1, sizeof(struct list$$1IA$ph)*(1)))))))));
    call_finalizer(list$$1IA$ph_finalize,right_value195,0, 1, 0);
    call_finalizer(list$$1IA$ph$$1IA$ph_finalize,right_value196,0, 1, 0);
    _inf_value2=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value2=((struct sDataA*)(right_value201=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value200=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),1,1)));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=sDataA_finalize;
    _inf_value2->clone=sDataA_clone;
    _inf_value2->fun=sDataA_fun;
    _inf_valueX5=(struct IA*)come_increment_ref_count(((struct IA*)(right_value203=_inf_value2)));
    come_increment_ref_count(((struct IA*)((struct IA*)(right_value203=_inf_value2)))->_protocol_obj);
    list$$1IA$ph_push_back(liIA_298,_inf_valueX5);
    call_finalizer(sDataA_finalize,right_value200,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value201,0, 1, 0);
    call_finalizer(((struct IA*)right_value203)->finalize, ((struct IA*)right_value203)->_protocol_obj,0, 1, 0);
    right_value203 = come_decrement_ref_count(right_value203, 1, 0);
    _inf_value3=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value3=((struct sDataA*)(right_value205=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value204=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),2,2)));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=sDataA_finalize;
    _inf_value3->clone=sDataA_clone;
    _inf_value3->fun=sDataA_fun;
    _inf_valueX6=(struct IA*)come_increment_ref_count(((struct IA*)(right_value207=_inf_value3)));
    come_increment_ref_count(((struct IA*)((struct IA*)(right_value207=_inf_value3)))->_protocol_obj);
    list$$1IA$ph_push_back(liIA_298,_inf_valueX6);
    call_finalizer(sDataA_finalize,right_value204,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value205,0, 1, 0);
    call_finalizer(((struct IA*)right_value207)->finalize, ((struct IA*)right_value207)->_protocol_obj,0, 1, 0);
    right_value207 = come_decrement_ref_count(right_value207, 1, 0);
    _inf_value4=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value4=((struct sDataA*)(right_value209=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value208=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),3,3)));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=sDataA_finalize;
    _inf_value4->clone=sDataA_clone;
    _inf_value4->fun=sDataA_fun;
    _inf_valueX7=(struct IA*)come_increment_ref_count(((struct IA*)(right_value211=_inf_value4)));
    come_increment_ref_count(((struct IA*)((struct IA*)(right_value211=_inf_value4)))->_protocol_obj);
    list$$1IA$ph_push_back(liIA_298,_inf_valueX7);
    call_finalizer(sDataA_finalize,right_value208,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value209,0, 1, 0);
    call_finalizer(((struct IA*)right_value211)->finalize, ((struct IA*)right_value211)->_protocol_obj,0, 1, 0);
    right_value211 = come_decrement_ref_count(right_value211, 1, 0);
    for(
    it_308=list$$1IA$ph_begin((liIA_298));
    !list$$1IA$ph_end((liIA_298));
    it_308=list$$1IA$ph_next((liIA_298))
    ){
        printf("%d\n",it_308->fun(it_308->_protocol_obj,0,0));
    }
    __tuple_value6___310=(struct tuple3$$3int$int$bool$*)come_increment_ref_count(((struct tuple3$$3int$int$bool$*)(right_value213=tuple3$$3int$int$bool$_initialize((struct tuple3$$3int$int$bool$*)come_increment_ref_count(((struct tuple3$$3int$int$bool$*)(right_value212=(struct tuple3$$3int$int$bool$*)come_calloc(1, sizeof(struct tuple3$$3int$int$bool$)*(1))))),1,2,(_Bool)0))));
    call_finalizer(tuple3$$3int$int$bool$_finalize,right_value212,0, 1, 0);
    call_finalizer(tuple3$$3int$int$bool$$$3int$int$bool$_finalize,right_value213,0, 1, 0);
    aZZZ_311=__tuple_value6___310->v1;
    bZZZ_312=__tuple_value6___310->v2;
    xassert("tuple test",aZZZ_311==1&&bZZZ_312==2);
    fun_default_parametor(1,2);
    __current_stack6__.p_93 = &p_93;
    __current_stack6__.p2_94 = &p2_94;
    __current_stack6__.count_95 = &count_95;
    __current_stack6__.size2_96 = &size2_96;
    __current_stack6__.mem2_97 = &mem2_97;
    __current_stack6__.b_98 = &b_98;
    __current_stack6__.a_99 = &a_99;
    __current_stack6__.a2_100 = &a2_100;
    __current_stack6__.ax_103 = &ax_103;
    __current_stack6__.str_107 = &str_107;
    __current_stack6__.data_108 = &data_108;
    __current_stack6__.axyz_109 = &axyz_109;
    __current_stack6__.xxx_110 = &xxx_110;
    __current_stack6__.yyy_111 = &yyy_111;
    __current_stack6__.zzz_112 = &zzz_112;
    __current_stack6__.bzyz_113 = &bzyz_113;
    __current_stack6__.azyz_114 = &azyz_114;
    __current_stack6__.n_115 = &n_115;
    __current_stack6__.liX_116 = &liX_116;
    __current_stack6__.liX2_122 = &liX2_122;
    __current_stack6__.aX_131 = &aX_131;
    __current_stack6__.aXYZY_135 = &aXYZY_135;
    __current_stack6__.li_136 = &li_136;
    __current_stack6__.li2_138 = &li2_138;
    __current_stack6__.aXL_140 = &aXL_140;
    __current_stack6__.li3_177 = &li3_177;
    __current_stack6__.li4_182 = &li4_182;
    __current_stack6__.li5_183 = &li5_183;
    __current_stack6__.li6_188 = &li6_188;
    __current_stack6__.axyzX_194 = &axyzX_194;
    __current_stack6__.strXYXY_195 = &strXYXY_195;
    __current_stack6__.liZ_196 = &liZ_196;
    __current_stack6__.liZ2_202 = &liZ2_202;
    __current_stack6__.__list_value1___205 = &__list_value1___205;
    __current_stack6__.__list_value2___206 = &__list_value2___206;
    __current_stack6__.__list_value3___207 = &__list_value3___207;
    __current_stack6__.__map_value1___217 = &__map_value1___217;
    __current_stack6__.__map_value2___244 = &__map_value2___244;
    __current_stack6__.__map_value3___255 = &__map_value3___255;
    __current_stack6__.m1_256 = &m1_256;
    __current_stack6__.m2_280 = &m2_280;
    __current_stack6__.tt1_281 = &tt1_281;
    __current_stack6__.tt2_282 = &tt2_282;
    __current_stack6__.tt3_284 = &tt3_284;
    __current_stack6__.ttt1_285 = &ttt1_285;
    __current_stack6__.ttt2_286 = &ttt2_286;
    __current_stack6__.ttt3_287 = &ttt3_287;
    __current_stack6__.__tuple_value1___288 = &__tuple_value1___288;
    __current_stack6__.t4_289 = &t4_289;
    __current_stack6__.__tuple_value2___290 = &__tuple_value2___290;
    __current_stack6__.__tuple_value3___291 = &__tuple_value3___291;
    __current_stack6__.__tuple_value4___292 = &__tuple_value4___292;
    __current_stack6__.__tuple_value5___293 = &__tuple_value5___293;
    __current_stack6__.ia_295 = &ia_295;
    __current_stack6__.liIA_298 = &liIA_298;
    __current_stack6__.__tuple_value6___310 = &__tuple_value6___310;
    __current_stack6__.aZZZ_311 = &aZZZ_311;
    __current_stack6__.bZZZ_312 = &bZZZ_312;
    xZZZZZZZZ_313=tuple2$$2int$bool$_catch(((struct tuple2$$2int$bool$*)(right_value214=fun_exception(1,2))),&__current_stack6__,method_block6);
    call_finalizer(tuple2$$2int$bool$_finalize,right_value214,0, 1, 0);
    xassert("exception test",xZZZZZZZZ_313==3);
    li_str_314=(struct list$$1char$ph*)come_increment_ref_count(((struct list$$1char$ph*)(right_value216=list$$1char$ph_initialize((struct list$$1char$ph*)come_increment_ref_count(((struct list$$1char$ph*)(right_value215=(struct list$$1char$ph*)come_calloc(1, sizeof(struct list$$1char$ph)*(1)))))))));
    call_finalizer(list$$1char$ph_finalize,right_value215,0, 1, 0);
    call_finalizer(list$$1char$ph$$1char$ph_finalize,right_value216,0, 1, 0);
    list$$1char$ph_push_back(li_str_314,(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string("AAA")))));
    right_value217 = come_decrement_ref_count(right_value217, 1, 0);
    list$$1char$ph_push_back(li_str_314,(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("BBB")))));
    right_value218 = come_decrement_ref_count(right_value218, 1, 0);
    list$$1char$ph_push_back(li_str_314,(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string("CCC")))));
    right_value219 = come_decrement_ref_count(right_value219, 1, 0);
    __list_value4___315=(struct list$$1char$ph*)come_increment_ref_count(((struct list$$1char$ph*)(right_value221=list$$1char$ph_initialize((struct list$$1char$ph*)come_increment_ref_count(((struct list$$1char$ph*)(right_value220=(struct list$$1char$ph*)come_calloc(1, sizeof(struct list$$1char$ph)*(1)))))))));
    call_finalizer(list$$1char$ph_finalize,right_value220,0, 1, 0);
    call_finalizer(list$$1char$ph$$1char$ph_finalize,right_value221,0, 1, 0);
    list$$1char$ph_push_back(__list_value4___315,(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("AAA")))));
    right_value222 = come_decrement_ref_count(right_value222, 1, 0);
    list$$1char$ph_push_back(__list_value4___315,(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string("BBB")))));
    right_value223 = come_decrement_ref_count(right_value223, 1, 0);
    list$$1char$ph_push_back(__list_value4___315,(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string("CCC")))));
    right_value224 = come_decrement_ref_count(right_value224, 1, 0);
    xassert("list test",list$$1char$ph_operator_equals(li_str_314,__list_value4___315));
    int __result__ = 0;
    ax_103 = come_decrement_ref_count(ax_103, 0, 0);
    str_107 = come_decrement_ref_count(str_107, 0, 0);
    call_finalizer(sData_finalize,data_108,0, 0, 0);
    axyz_109 = come_decrement_ref_count(axyz_109, 0, 0);
    xxx_110 = come_decrement_ref_count(xxx_110, 0, 0);
    yyy_111 = come_decrement_ref_count(yyy_111, 0, 0);
    zzz_112 = come_decrement_ref_count(zzz_112, 0, 0);
    call_finalizer(list$$1char$ph_finalize,liX_116,0, 0, 0);
    call_finalizer(list$$1int$_finalize,liX2_122,0, 0, 0);
    call_finalizer(list$$1char$ph_finalize,li_136,0, 0, 0);
    call_finalizer(list$$1int$_finalize,li2_138,0, 0, 0);
    call_finalizer(list$$1char$ph$$1char$ph_finalize,li3_177,0, 0, 0);
    call_finalizer(list$$1int$$$1int$_finalize,li4_182,0, 0, 0);
    call_finalizer(list$$1int$$$1int$_finalize,li5_183,0, 0, 0);
    call_finalizer(list$$1int$$$1int$_finalize,li6_188,0, 0, 0);
    axyzX_194 = come_decrement_ref_count(axyzX_194, 0, 0);
    call_finalizer(list$$1int$_finalize,liZ_196,0, 0, 0);
    call_finalizer(list$$1int$_finalize,liZ2_202,0, 0, 0);
    call_finalizer(list$$1int$_finalize,__list_value1___205,0, 0, 0);
    call_finalizer(list$$1int$_finalize,__list_value2___206,0, 0, 0);
    call_finalizer(list$$1int$_finalize,__list_value3___207,0, 0, 0);
    call_finalizer(map$$2char$pint$_finalize,__map_value1___217,0, 0, 0);
    call_finalizer(map$$2char$pint$_finalize,__map_value2___244,0, 0, 0);
    call_finalizer(map$$2char$pint$_finalize,__map_value3___255,0, 0, 0);
    call_finalizer(map$$2char$pint$_finalize,m1_256,0, 0, 0);
    call_finalizer(map$$2char$pint$_finalize,m2_280,0, 0, 0);
    call_finalizer(tuple1$$1int$_finalize,tt1_281,0, 0, 0);
    call_finalizer(tuple1$$1char$ph_finalize,tt2_282,0, 0, 0);
    call_finalizer(tuple1$$1char$ph_finalize,tt3_284,0, 0, 0);
    call_finalizer(tuple1$$1int$_finalize,ttt1_285,0, 0, 0);
    call_finalizer(tuple1$$1char$ph_finalize,ttt2_286,0, 0, 0);
    call_finalizer(tuple1$$1char$ph_finalize,ttt3_287,0, 0, 0);
    call_finalizer(tuple2$$2char$phint$$$2char$phint$_finalize,__tuple_value1___288,0, 0, 0);
    call_finalizer(tuple2$$2char$phint$_finalize,t4_289,0, 0, 0);
    call_finalizer(tuple2$$2char$pint$$$2char$pint$_finalize,__tuple_value2___290,0, 0, 0);
    call_finalizer(tuple2$$2char$pint$$$2char$pint$_finalize,__tuple_value3___291,0, 0, 0);
    call_finalizer(tuple2$$2char$pint$$$2char$pint$_finalize,__tuple_value4___292,0, 0, 0);
    call_finalizer(tuple2$$2char$pint$$$2char$pint$_finalize,__tuple_value5___293,0, 0, 0);
    call_finalizer(((struct IA*)ia_295)->finalize, ((struct IA*)ia_295)->_protocol_obj,0, 0, 0);
    ia_295 = come_decrement_ref_count(ia_295, 0, 0);
    call_finalizer(list$$1IA$ph_finalize,liIA_298,0, 0, 0);
    call_finalizer(tuple3$$3int$int$bool$$$3int$int$bool$_finalize,__tuple_value6___310,0, 0, 0);
    call_finalizer(list$$1char$ph_finalize,li_str_314,0, 0, 0);
    call_finalizer(list$$1char$ph_finalize,__list_value4___315,0, 0, 0);
    return __result__;
}

static void sData_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_115)));
        (*(parent->n_115))++;
}

static char* list$$1char$ph_begin(struct list$$1char$ph* self){
char* result_117;
memset(&result_117, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_117,0,sizeof(char*));
        char* __result__ = result_117;
        return __result__;
}

static _Bool list$$1char$ph_end(struct list$$1char$ph* self){
        struct list_item$$1char$ph* __result__ = self->it==((void*)0);
        return __result__;
}

static char* list$$1char$ph_next(struct list$$1char$ph* self){
char* result_119;
memset(&result_119, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_119,0,sizeof(char*));
        char* __result__ = result_119;
        return __result__;
}

static struct list$$1int$* list$$1int$_initialize(struct list$$1int$* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$$1int$* __result__ = self;
        call_finalizer(list$$1int$$$1int$_finalize,self,0, 0, 1);
        return __result__;
}

static void list$$1int$$$1int$_finalize(struct list$$1int$* self){
struct list_item$$1int$$$1int$* it_120;
struct list_item$$1int$$$1int$* prev_it_121;
memset(&it_120, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&prev_it_121, 0, sizeof(struct list_item$$1int$$$1int$*));
            it_120=self->head;
            while(it_120!=((void*)0)) {
                if(0) {
                }
                prev_it_121=it_120;
                it_120=it_120->next;
                come_free_object(prev_it_121);
            }
}

static void list$$1int$_finalize(struct list$$1int$* self){
struct list_item$$1int$$$1int$* it_123;
struct list_item$$1int$$$1int$* prev_it_124;
memset(&it_123, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&prev_it_124, 0, sizeof(struct list_item$$1int$$$1int$*));
        it_123=self->head;
        while(it_123!=((void*)0)) {
            if(0) {
            }
            prev_it_124=it_123;
            it_123=it_123->next;
            come_free_object(prev_it_124);
        }
}

static void list$$1int$_push_back(struct list$$1int$* self, int item){
void* right_value86;
struct list_item$$1int$$$1int$* litem_125;
void* right_value87;
struct list_item$$1int$$$1int$* litem_126;
void* right_value88;
struct list_item$$1int$$$1int$* litem_127;
memset(&litem_125, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_126, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_127, 0, sizeof(struct list_item$$1int$$$1int$*));
        if(self->len==0) {
            litem_125=((struct list_item$$1int$$$1int$*)(right_value86=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1))));
            litem_125->prev=((void*)0);
            litem_125->next=((void*)0);
            litem_125->item=item;
            self->tail=litem_125;
            self->head=litem_125;
        }
        else if(self->len==1) {
            litem_126=((struct list_item$$1int$$$1int$*)(right_value87=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1))));
            litem_126->prev=self->head;
            litem_126->next=((void*)0);
            litem_126->item=item;
            self->tail=litem_126;
            self->head->next=litem_126;
        }
        else {
            litem_127=((struct list_item$$1int$$$1int$*)(right_value88=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1))));
            litem_127->prev=self->tail;
            litem_127->next=((void*)0);
            litem_127->item=item;
            self->tail->next=litem_127;
            self->tail=litem_127;
        }
        self->len++;
}

static int list$$1int$_begin(struct list$$1int$* self){
int result_128;
memset(&result_128, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_128,0,sizeof(int));
        int __result__ = result_128;
        return __result__;
}

static _Bool list$$1int$_end(struct list$$1int$* self){
        struct list_item$$1int$* __result__ = self->it==((void*)0);
        return __result__;
}

static int list$$1int$_next(struct list$$1int$* self){
int result_130;
memset(&result_130, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_130,0,sizeof(int));
        int __result__ = result_130;
        return __result__;
}

static void list$$1int$_each(struct list$$1int$* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item$$1int$$$1int$* it_132;
int i_133;
_Bool end_flag_134;
memset(&it_132, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_133, 0, sizeof(int));
memset(&end_flag_134, 0, sizeof(_Bool));
        it_132=self->head;
        i_133=0;
        while(it_132!=((void*)0)) {
            end_flag_134=(_Bool)0;
            block(parent,it_132->item,i_133,&end_flag_134);
            if(end_flag_134==(_Bool)1) {
                break;
            }
            it_132=it_132->next;
            i_133++;
        }
}

void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_131)));
        (*(parent->aX_131))=2;
}

void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_140)));
        (*(parent->aXL_140))=2;
}

static int list$$1int$_item(struct list$$1int$* self, int position, int default_value){
struct list_item$$1int$$$1int$* it_141;
int i_142;
memset(&it_141, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_142, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_141=self->head;
        i_142=0;
        while(it_141!=((void*)0)) {
            if(position==i_142) {
                int __result__ = it_141->item;
                return __result__;
            }
            it_141=it_141->next;
            i_142++;
        }
        int __result__ = default_value;
        return __result__;
}

static void list$$1int$_insert(struct list$$1int$* self, int position, int item){
void* right_value99;
struct list_item$$1int$$$1int$* litem_146;
void* right_value100;
struct list_item$$1int$$$1int$* litem_147;
struct list_item$$1int$$$1int$* it_148;
int i_149;
void* right_value101;
struct list_item$$1int$$$1int$* litem_150;
memset(&litem_146, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_147, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&it_148, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_149, 0, sizeof(int));
memset(&litem_150, 0, sizeof(struct list_item$$1int$$$1int$*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$$1int$$$1int$_push_back(self,item);
            return;
        }
        if(position==0) {
            litem_146=((struct list_item$$1int$$$1int$*)(right_value99=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1))));
            litem_146->prev=((void*)0);
            litem_146->next=self->head;
            litem_146->item=item;
            self->head->prev=litem_146;
            self->head=litem_146;
            self->len++;
        }
        else if(self->len==1) {
            litem_147=((struct list_item$$1int$$$1int$*)(right_value100=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1))));
            litem_147->prev=self->head;
            litem_147->next=self->tail;
            litem_147->item=item;
            self->tail->prev=litem_147;
            self->head->next=litem_147;
            self->len++;
        }
        else {
            it_148=self->head;
            i_149=0;
            while(it_148!=((void*)0)) {
                if(position==i_149) {
                    litem_150=((struct list_item$$1int$$$1int$*)(right_value101=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1))));
                    litem_150->prev=it_148->prev;
                    litem_150->next=it_148;
                    litem_150->item=item;
                    it_148->prev->next=litem_150;
                    it_148->prev=litem_150;
                    self->len++;
                }
                it_148=it_148->next;
                i_149++;
            }
        }
}

static void list$$1int$$$1int$_push_back(struct list$$1int$* self, int item){
void* right_value96;
struct list_item$$1int$$$1int$* litem_143;
void* right_value97;
struct list_item$$1int$$$1int$* litem_144;
void* right_value98;
struct list_item$$1int$$$1int$* litem_145;
memset(&litem_143, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_144, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_145, 0, sizeof(struct list_item$$1int$$$1int$*));
                if(self->len==0) {
                    litem_143=((struct list_item$$1int$$$1int$*)(right_value96=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1))));
                    litem_143->prev=((void*)0);
                    litem_143->next=((void*)0);
                    litem_143->item=item;
                    self->tail=litem_143;
                    self->head=litem_143;
                }
                else if(self->len==1) {
                    litem_144=((struct list_item$$1int$$$1int$*)(right_value97=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1))));
                    litem_144->prev=self->head;
                    litem_144->next=((void*)0);
                    litem_144->item=item;
                    self->tail=litem_144;
                    self->head->next=litem_144;
                }
                else {
                    litem_145=((struct list_item$$1int$$$1int$*)(right_value98=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1))));
                    litem_145->prev=self->tail;
                    litem_145->next=((void*)0);
                    litem_145->item=item;
                    self->tail->next=litem_145;
                    self->tail=litem_145;
                }
                self->len++;
}

static void list$$1char$ph_insert(struct list$$1char$ph* self, int position, char* item){
void* right_value105;
struct list_item$$1char$ph$$1char$ph* litem_154;
void* right_value106;
struct list_item$$1char$ph$$1char$ph* litem_155;
struct list_item$$1char$ph$$1char$ph* it_156;
int i_157;
void* right_value107;
struct list_item$$1char$ph$$1char$ph* litem_158;
memset(&litem_154, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_155, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&it_156, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&i_157, 0, sizeof(int));
memset(&litem_158, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$$1char$ph$$1char$ph_push_back(self,(char*)come_increment_ref_count(item));
            return;
        }
        if(position==0) {
            litem_154=((struct list_item$$1char$ph$$1char$ph*)(right_value105=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1))));
            litem_154->prev=((void*)0);
            litem_154->next=self->head;
            if(litem_154->item) {(char*)come_decrement_ref_count(litem_154->item,0,0); }
            litem_154->item=(char*)come_increment_ref_count(item);
            self->head->prev=litem_154;
            self->head=litem_154;
            self->len++;
        }
        else if(self->len==1) {
            litem_155=((struct list_item$$1char$ph$$1char$ph*)(right_value106=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1))));
            litem_155->prev=self->head;
            litem_155->next=self->tail;
            if(litem_155->item) {(char*)come_decrement_ref_count(litem_155->item,0,0); }
            litem_155->item=(char*)come_increment_ref_count(item);
            self->tail->prev=litem_155;
            self->head->next=litem_155;
            self->len++;
        }
        else {
            it_156=self->head;
            i_157=0;
            while(it_156!=((void*)0)) {
                if(position==i_157) {
                    litem_158=((struct list_item$$1char$ph$$1char$ph*)(right_value107=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1))));
                    litem_158->prev=it_156->prev;
                    litem_158->next=it_156;
                    if(litem_158->item) {(char*)come_decrement_ref_count(litem_158->item,0,0); }
                    litem_158->item=(char*)come_increment_ref_count(item);
                    it_156->prev->next=litem_158;
                    it_156->prev=litem_158;
                    self->len++;
                }
                it_156=it_156->next;
                i_157++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static void list$$1char$ph$$1char$ph_push_back(struct list$$1char$ph* self, char* item){
void* right_value102;
struct list_item$$1char$ph$$1char$ph* litem_151;
void* right_value103;
struct list_item$$1char$ph$$1char$ph* litem_152;
void* right_value104;
struct list_item$$1char$ph$$1char$ph* litem_153;
memset(&litem_151, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_152, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_153, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
                if(self->len==0) {
                    litem_151=((struct list_item$$1char$ph$$1char$ph*)(right_value102=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1))));
                    litem_151->prev=((void*)0);
                    litem_151->next=((void*)0);
                    if(litem_151->item) {(char*)come_decrement_ref_count(litem_151->item,0,0); }
                    litem_151->item=(char*)come_increment_ref_count(item);
                    self->tail=litem_151;
                    self->head=litem_151;
                }
                else if(self->len==1) {
                    litem_152=((struct list_item$$1char$ph$$1char$ph*)(right_value103=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1))));
                    litem_152->prev=self->head;
                    litem_152->next=((void*)0);
                    if(litem_152->item) {(char*)come_decrement_ref_count(litem_152->item,0,0); }
                    litem_152->item=(char*)come_increment_ref_count(item);
                    self->tail=litem_152;
                    self->head->next=litem_152;
                }
                else {
                    litem_153=((struct list_item$$1char$ph$$1char$ph*)(right_value104=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1))));
                    litem_153->prev=self->tail;
                    litem_153->next=((void*)0);
                    if(litem_153->item) {(char*)come_decrement_ref_count(litem_153->item,0,0); }
                    litem_153->item=(char*)come_increment_ref_count(item);
                    self->tail->next=litem_153;
                    self->tail=litem_153;
                }
                self->len++;
                item = come_decrement_ref_count(item, 0, 1);
}

static char* list$$1char$ph_item(struct list$$1char$ph* self, int position, char* default_value){
struct list_item$$1char$ph$$1char$ph* it_159;
int i_160;
memset(&it_159, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&i_160, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_159=self->head;
        i_160=0;
        while(it_159!=((void*)0)) {
            if(position==i_160) {
                char* __result__ = it_159->item;
                return __result__;
            }
            it_159=it_159->next;
            i_160++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list$$1char$ph_reset(struct list$$1char$ph* self){
struct list_item$$1char$ph$$1char$ph* it_161;
struct list_item$$1char$ph$$1char$ph* prev_it_162;
memset(&it_161, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&prev_it_162, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
        it_161=self->head;
        while(it_161!=((void*)0)) {
            prev_it_162=it_161;
            it_161=it_161->next;
            call_finalizer(list_item$$1char$ph$$1char$ph_finalize,prev_it_162,0, 0, 0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
}

static void list_item$$1char$ph$$1char$ph_finalize(struct list_item$$1char$ph$$1char$ph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    self->item = come_decrement_ref_count(self->item, 0, 0);
                }
}

static int list$$1char$ph_length(struct list$$1char$ph* self){
        int __result__ = self->len;
        return __result__;
}

static void list$$1int$_delete(struct list$$1int$* self, int head, int tail){
int tmp_163;
struct list_item$$1int$$$1int$* it_166;
int i_167;
struct list_item$$1int$$$1int$* prev_it_168;
struct list_item$$1int$$$1int$* it_169;
int i_170;
struct list_item$$1int$$$1int$* prev_it_171;
struct list_item$$1int$$$1int$* it_172;
struct list_item$$1int$$$1int$* head_prev_it_173;
struct list_item$$1int$$$1int$* tail_it_174;
int i_175;
struct list_item$$1int$$$1int$* prev_it_176;
memset(&tmp_163, 0, sizeof(int));
memset(&it_166, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_167, 0, sizeof(int));
memset(&prev_it_168, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&it_169, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_170, 0, sizeof(int));
memset(&prev_it_171, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&it_172, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&head_prev_it_173, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&tail_it_174, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_175, 0, sizeof(int));
memset(&prev_it_176, 0, sizeof(struct list_item$$1int$$$1int$*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_163=tail;
            tail=head;
            head=tmp_163;
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
            list$$1int$$$1int$$$1int$_reset(self);
        }
        else if(head==0) {
            it_166=self->head;
            i_167=0;
            while(it_166!=((void*)0)) {
                if(i_167<tail) {
                    prev_it_168=it_166;
                    it_166=it_166->next;
                    i_167++;
                    call_finalizer(list_item$$1int$$$1int$_finalize,prev_it_168,0, 0, 0);
                    self->len--;
                }
                else if(i_167==tail) {
                    self->head=it_166;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_166=it_166->next;
                    i_167++;
                }
            }
        }
        else if(tail==self->len) {
            it_169=self->head;
            i_170=0;
            while(it_169!=((void*)0)) {
                if(i_170==head) {
                    self->tail=it_169->prev;
                    self->tail->next=((void*)0);
                }
                if(i_170>=head) {
                    prev_it_171=it_169;
                    it_169=it_169->next;
                    i_170++;
                    call_finalizer(list_item$$1int$$$1int$_finalize,prev_it_171,0, 0, 0);
                    self->len--;
                }
                else {
                    it_169=it_169->next;
                    i_170++;
                }
            }
        }
        else {
            it_172=self->head;
            head_prev_it_173=((void*)0);
            tail_it_174=((void*)0);
            i_175=0;
            while(it_172!=((void*)0)) {
                if(i_175==head) {
                    head_prev_it_173=it_172->prev;
                }
                if(i_175==tail) {
                    tail_it_174=it_172;
                }
                if(i_175>=head&&i_175<tail) {
                    prev_it_176=it_172;
                    it_172=it_172->next;
                    i_175++;
                    call_finalizer(list_item$$1int$$$1int$_finalize,prev_it_176,0, 0, 0);
                    self->len--;
                }
                else {
                    it_172=it_172->next;
                    i_175++;
                }
            }
            if(head_prev_it_173!=((void*)0)) {
                head_prev_it_173->next=tail_it_174;
            }
            if(tail_it_174!=((void*)0)) {
                tail_it_174->prev=head_prev_it_173;
            }
        }
}

static void list$$1int$$$1int$$$1int$_reset(struct list$$1int$* self){
struct list_item$$1int$$$1int$* it_164;
struct list_item$$1int$$$1int$* prev_it_165;
memset(&it_164, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&prev_it_165, 0, sizeof(struct list_item$$1int$$$1int$*));
                it_164=self->head;
                while(it_164!=((void*)0)) {
                    prev_it_165=it_164;
                    it_164=it_164->next;
                    call_finalizer(list_item$$1int$$$1int$_finalize,prev_it_165,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$$1int$$$1int$_finalize(struct list_item$$1int$$$1int$* self){
}

static void list$$1char$ph$$1char$ph_replace(struct list$$1char$ph* self, int position, char* item){
struct list_item$$1char$ph$$1char$ph* it_178;
int i_179;
memset(&it_178, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&i_179, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_178=self->head;
        i_179=0;
        while(it_178!=((void*)0)) {
            if(position==i_179) {
                if(it_178->item) {(char*)come_decrement_ref_count(it_178->item,0,0); }
                it_178->item=(char*)come_increment_ref_count(item);
                break;
            }
            it_178=it_178->next;
            i_179++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$$1char$ph$$1char$ph_item(struct list$$1char$ph* self, int position, char* default_value){
struct list_item$$1char$ph$$1char$ph* it_180;
int i_181;
memset(&it_180, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&i_181, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_180=self->head;
        i_181=0;
        while(it_180!=((void*)0)) {
            if(position==i_181) {
                char* __result__ = it_180->item;
                return __result__;
            }
            it_180=it_180->next;
            i_181++;
        }
        char* __result__ = default_value;
        return __result__;
}

static _Bool list$$1int$$$1int$_equals(struct list$$1int$* left, struct list$$1int$* right){
struct list_item$$1int$$$1int$* it_184;
struct list_item$$1int$$$1int$* it2_185;
memset(&it_184, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&it2_185, 0, sizeof(struct list_item$$1int$$$1int$*));
        if(left->len!=right->len) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        it_184=left->head;
        it2_185=right->head;
        while(it_184!=((void*)0)) {
            if(!int$_equals(it_184->item,it2_185->item)) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_184=it_184->next;
            it2_185=it2_185->next;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static int list$$1int$$$1int$_find(struct list$$1int$* self, int item, int default_value){
int it2_186;
struct list_item$$1int$$$1int$* it_187;
memset(&it2_186, 0, sizeof(int));
memset(&it_187, 0, sizeof(struct list_item$$1int$$$1int$*));
        it2_186=0;
        it_187=self->head;
        while(it_187!=((void*)0)) {
            if(int$_equals(it_187->item,item)) {
                int __result__ = it2_186;
                return __result__;
            }
            it2_186++;
            it_187=it_187->next;
        }
        int __result__ = default_value;
        return __result__;
}

static struct list$$1int$* list$$1int$$$1int$_sublist(struct list$$1int$* self, int begin, int tail){
void* right_value121;
void* right_value122;
struct list$$1int$$$1int$* result_189;
struct list_item$$1int$$$1int$* it_192;
int i_193;
memset(&result_189, 0, sizeof(struct list$$1int$$$1int$*));
memset(&it_192, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_193, 0, sizeof(int));
        result_189=(struct list$$1int$*)come_increment_ref_count(((struct list$$1int$*)(right_value122=list$$1int$$$1int$_initialize((struct list$$1int$$$1int$*)come_increment_ref_count(((struct list$$1int$$$1int$*)(right_value121=(struct list$$1int$$$1int$*)come_calloc(1, sizeof(struct list$$1int$$$1int$)*(1)))))))));
        call_finalizer(list$$1int$$$1int$_finalize,right_value121,0, 1, 0);
        call_finalizer(list$$1int$$$1int$$$1int$_finalize,right_value122,0, 1, 0);
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
        it_192=self->head;
        i_193=0;
        while(it_192!=((void*)0)) {
            if(i_193>=begin&&i_193<tail) {
                list$$1int$$$1int$_push_back(result_189,it_192->item);
            }
            it_192=it_192->next;
            i_193++;
        }
        struct list$$1int$$$1int$* __result__ = result_189;
        call_finalizer(list$$1int$$$1int$_finalize,result_189,0, 0, 1);
        return __result__;
}

static struct list$$1int$* list$$1int$$$1int$_initialize(struct list$$1int$* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$$1int$* __result__ = self;
            call_finalizer(list$$1int$$$1int$_finalize,self,0, 0, 1);
            return __result__;
}

static void list$$1int$$$1int$$$1int$_finalize(struct list$$1int$* self){
struct list_item$$1int$$$1int$* it_190;
struct list_item$$1int$$$1int$* prev_it_191;
memset(&it_190, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&prev_it_191, 0, sizeof(struct list_item$$1int$$$1int$*));
            it_190=self->head;
            while(it_190!=((void*)0)) {
                if(0) {
                }
                prev_it_191=it_190;
                it_190=it_190->next;
                come_free_object(prev_it_191);
            }
}

void method_block4(struct __current_stack4__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static void list$$1int$_operator_store_element(struct list$$1int$* self, int position, int item){
        list$$1int$$$1int$$$1int$_replace(self,position,item);
}

static void list$$1int$$$1int$$$1int$_replace(struct list$$1int$* self, int position, int item){
struct list_item$$1int$$$1int$* it_197;
int i_198;
memset(&it_197, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_198, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_197=self->head;
            i_198=0;
            while(it_197!=((void*)0)) {
                if(position==i_198) {
                    it_197->item=item;
                    break;
                }
                it_197=it_197->next;
                i_198++;
            }
}

static int list$$1int$_operator_load_element(struct list$$1int$* self, int index){
int default_value_199;
memset(&default_value_199, 0, sizeof(int));
        memset(&default_value_199,0,sizeof(int));
        int __result__ = list$$1int$$$1int$$$1int$_item(self,index,default_value_199);
        return __result__;
}

static int list$$1int$$$1int$$$1int$_item(struct list$$1int$* self, int position, int default_value){
struct list_item$$1int$$$1int$* it_200;
int i_201;
memset(&it_200, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_201, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_200=self->head;
            i_201=0;
            while(it_200!=((void*)0)) {
                if(position==i_201) {
                    int __result__ = it_200->item;
                    return __result__;
                }
                it_200=it_200->next;
                i_201++;
            }
            int __result__ = default_value;
            return __result__;
}

static _Bool list$$1int$_operator_equals(struct list$$1int$* self, struct list$$1int$* right){
        _Bool __result__ = list$$1int$$$1int$$$1int$_equals(self,right);
        return __result__;
}

static _Bool list$$1int$$$1int$$$1int$_equals(struct list$$1int$* left, struct list$$1int$* right){
struct list_item$$1int$$$1int$* it_203;
struct list_item$$1int$$$1int$* it2_204;
memset(&it_203, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&it2_204, 0, sizeof(struct list_item$$1int$$$1int$*));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_203=left->head;
            it2_204=right->head;
            while(it_203!=((void*)0)) {
                if(!int$_equals(it_203->item,it2_204->item)) {
                    _Bool __result__ = (_Bool)0;
                    return __result__;
                }
                it_203=it_203->next;
                it2_204=it2_204->next;
            }
            _Bool __result__ = (_Bool)1;
            return __result__;
}

void method_block5(struct __current_stack5__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static struct map$$2char$pint$* map$$2char$pint$_initialize(struct map$$2char$pint$* self){
void* right_value140;
void* right_value141;
void* right_value142;
int i_208;
void* right_value143;
void* right_value144;
memset(&i_208, 0, sizeof(int));
        self->keys=((char***)(right_value140=(char***)come_calloc(1, sizeof(char**)*(1*(128)))));
        self->items=((int**)(right_value141=(int**)come_calloc(1, sizeof(int*)*(1*(128)))));
        self->item_existance=((_Bool**)(right_value142=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(128)))));
        for(
        i_208=0;
        i_208<128;
        i_208++
        ){
            self->item_existance[i_208]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        if(self->key_list) {(struct list$$1char$p*)come_decrement_ref_count(self->key_list,0,0); }
        self->key_list=(struct list$$1char$p*)come_increment_ref_count(((struct list$$1char$p*)(right_value144=list$$1char$p$$1char$p_initialize((struct list$$1char$p$$1char$p*)come_increment_ref_count(((struct list$$1char$p$$1char$p*)(right_value143=(struct list$$1char$p$$1char$p*)come_calloc(1, sizeof(struct list$$1char$p$$1char$p)*(1)))))))));
        call_finalizer(list$$1char$p$$1char$p_finalize,right_value143,0, 1, 0);
        call_finalizer(list$$1char$p$$1char$p$$1char$p_finalize,right_value144,0, 1, 0);
        self->it=0;
        struct map$$2char$pint$* __result__ = self;
        call_finalizer(map$$2char$pint$$$2char$pint$_finalize,self,0, 0, 1);
        return __result__;
}

static struct list$$1char$p* list$$1char$p$$1char$p_initialize(struct list$$1char$p* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$$1char$p* __result__ = self;
            call_finalizer(list$$1char$p$$1char$p_finalize,self,0, 0, 1);
            return __result__;
}

static void list$$1char$p$$1char$p_finalize(struct list$$1char$p* self){
struct list_item$$1char$p$$1char$p* it_209;
struct list_item$$1char$p$$1char$p* prev_it_210;
memset(&it_209, 0, sizeof(struct list_item$$1char$p$$1char$p*));
memset(&prev_it_210, 0, sizeof(struct list_item$$1char$p$$1char$p*));
                it_209=self->head;
                while(it_209!=((void*)0)) {
                    if(0) {
                        it_209->item = come_decrement_ref_count(it_209->item, 0, 0);
                    }
                    prev_it_210=it_209;
                    it_209=it_209->next;
                    come_free_object(prev_it_210);
                }
}

static void list$$1char$p$$1char$p$$1char$p_finalize(struct list$$1char$p* self){
struct list_item$$1char$p$$1char$p* it_211;
struct list_item$$1char$p$$1char$p* prev_it_212;
memset(&it_211, 0, sizeof(struct list_item$$1char$p$$1char$p*));
memset(&prev_it_212, 0, sizeof(struct list_item$$1char$p$$1char$p*));
            it_211=self->head;
            while(it_211!=((void*)0)) {
                if(0) {
                    it_211->item = come_decrement_ref_count(it_211->item, 0, 0);
                }
                prev_it_212=it_211;
                it_211=it_211->next;
                come_free_object(prev_it_212);
            }
}

static void map$$2char$pint$$$2char$pint$_finalize(struct map$$2char$pint$* self){
int i_213;
int i_214;
memset(&i_213, 0, sizeof(int));
memset(&i_214, 0, sizeof(int));
            for(
            i_213=0;
            i_213<self->size;
            i_213++
            ){
                if(self->item_existance[i_213]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_214=0;
            i_214<self->size;
            i_214++
            ){
                if(self->item_existance[i_214]) {
                    if(0) {
                        self->keys[i_214] = come_decrement_ref_count(self->keys[i_214], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$$1char$p_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void list$$1char$p_finalize(struct list$$1char$p* self){
struct list_item$$1char$p$$1char$p* it_215;
struct list_item$$1char$p$$1char$p* prev_it_216;
memset(&it_215, 0, sizeof(struct list_item$$1char$p$$1char$p*));
memset(&prev_it_216, 0, sizeof(struct list_item$$1char$p$$1char$p*));
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

static void map$$2char$pint$_finalize(struct map$$2char$pint$* self){
int i_218;
int i_219;
memset(&i_218, 0, sizeof(int));
memset(&i_219, 0, sizeof(int));
        for(
        i_218=0;
        i_218<self->size;
        i_218++
        ){
            if(self->item_existance[i_218]) {
                if(0) {
                }
            }
        }
        come_free_object((char*)self->items);
        for(
        i_219=0;
        i_219<self->size;
        i_219++
        ){
            if(self->item_existance[i_219]) {
                if(0) {
                    self->keys[i_219] = come_decrement_ref_count(self->keys[i_219], 0, 0);
                }
            }
        }
        come_free_object((char*)self->keys);
        call_finalizer(list$$1char$p_finalize,self->key_list,0, 0, 0);
        self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$$2char$pint$_insert(struct map$$2char$pint$* self, char* key, int item){
int hash_235;
int it_236;
_Bool same_key_exist_237;
char* it2_239;
memset(&hash_235, 0, sizeof(int));
memset(&it_236, 0, sizeof(int));
memset(&same_key_exist_237, 0, sizeof(_Bool));
memset(&it2_239, 0, sizeof(char*));
        if(self->len*2>=self->size) {
            map$$2char$pint$$$2char$pint$_rehash(self);
        }
        hash_235=char$_get_hash_key(key)%self->size;
        it_236=hash_235;
        while((_Bool)1) {
            if(self->item_existance[it_236]) {
                if(char$_equals(self->keys[it_236],key)) {
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
        it2_239=list$$1char$p_begin(self->key_list);
        !list$$1char$p_end(self->key_list);
        it_236=list$$1char$p_next(self->key_list)
        ){
            if(char$_equals(it2_239,key)) {
                same_key_exist_237=(_Bool)1;
            }
        }
        if(!same_key_exist_237) {
            list$$1char$p_push_back(self->key_list,key);
        }
}

static void map$$2char$pint$$$2char$pint$_rehash(struct map$$2char$pint$* self){
int size_220;
void* right_value146;
char** keys_221;
void* right_value147;
int* items_222;
void* right_value148;
_Bool* item_existance_223;
int len_224;
char* it_226;
int default_value_228;
int it2_231;
int hash_232;
int n_233;
int default_value_234;
memset(&size_220, 0, sizeof(int));
memset(&keys_221, 0, sizeof(char**));
memset(&items_222, 0, sizeof(int*));
memset(&item_existance_223, 0, sizeof(_Bool*));
memset(&len_224, 0, sizeof(int));
memset(&it_226, 0, sizeof(char*));
memset(&default_value_228, 0, sizeof(int));
memset(&it2_231, 0, sizeof(int));
memset(&hash_232, 0, sizeof(int));
memset(&n_233, 0, sizeof(int));
memset(&default_value_234, 0, sizeof(int));
                size_220=self->size*3;
                keys_221=((char***)(right_value146=(char***)come_calloc(1, sizeof(char**)*(1*(size_220)))));
                items_222=((int**)(right_value147=(int**)come_calloc(1, sizeof(int*)*(1*(size_220)))));
                item_existance_223=((_Bool**)(right_value148=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(size_220)))));
                len_224=0;
                for(
                it_226=map$$2char$pint$$$2char$pint$$$2char$pint$_begin(self);
                !map$$2char$pint$$$2char$pint$$$2char$pint$_end(self);
                it_226=map$$2char$pint$$$2char$pint$$$2char$pint$_next(self)
                ){
                    it2_231=map$$2char$pint$$$2char$pint$$$2char$pint$_at(self,it_226,default_value_228);
                    hash_232=char$_get_hash_key(it_226)%size_220;
                    n_233=hash_232;
                    while((_Bool)1) {
                        if(item_existance_223[n_233]) {
                            n_233++;
                            if(n_233>=size_220) {
                                n_233=0;
                            }
                            else if(n_233==hash_232) {
                                fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_223[n_233]=(_Bool)1;
                            keys_221[n_233]=it_226;
                            items_222[n_233]=map$$2char$pint$$$2char$pint$$$2char$pint$_at(self,it_226,default_value_234);
                            len_224++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
                come_free_object((char*)self->keys);
                self->keys=keys_221;
                self->items=items_222;
                self->item_existance=item_existance_223;
                self->size=size_220;
                self->len=len_224;
}

static char* map$$2char$pint$$$2char$pint$$$2char$pint$_begin(struct map$$2char$pint$* self){
char* result_225;
memset(&result_225, 0, sizeof(char*));
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result__ = self->key_list->it->item;
                        return __result__;
                    }
                    memset(&result_225,0,sizeof(char*));
                    char* __result__ = result_225;
                    return __result__;
}

static _Bool map$$2char$pint$$$2char$pint$$$2char$pint$_end(struct map$$2char$pint$* self){
                    struct list_item$$1char$p* __result__ = self->key_list->it==((void*)0);
                    return __result__;
}

static char* map$$2char$pint$$$2char$pint$$$2char$pint$_next(struct map$$2char$pint$* self){
char* result_227;
memset(&result_227, 0, sizeof(char*));
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result__ = self->key_list->it->item;
                        return __result__;
                    }
                    memset(&result_227,0,sizeof(char*));
                    char* __result__ = result_227;
                    return __result__;
}

static int map$$2char$pint$$$2char$pint$$$2char$pint$_at(struct map$$2char$pint$* self, char* key, int default_value){
int hash_229;
int it_230;
memset(&hash_229, 0, sizeof(int));
memset(&it_230, 0, sizeof(int));
                        hash_229=char$_get_hash_key(((char*)key))%self->size;
                        it_230=hash_229;
                        while((_Bool)1) {
                            if(self->item_existance[it_230]) {
                                if(char$_equals(self->keys[it_230],key)) {
                                    int __result__ = self->items[it_230];
                                    return __result__;
                                }
                                it_230++;
                                if(it_230>=self->size) {
                                    it_230=0;
                                }
                                else if(it_230==hash_229) {
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

static char* list$$1char$p_begin(struct list$$1char$p* self){
char* result_238;
memset(&result_238, 0, sizeof(char*));
            self->it=self->head;
            if(self->it) {
                char* __result__ = self->it->item;
                return __result__;
            }
            memset(&result_238,0,sizeof(char*));
            char* __result__ = result_238;
            return __result__;
}

static _Bool list$$1char$p_end(struct list$$1char$p* self){
            struct list_item$$1char$p* __result__ = self->it==((void*)0);
            return __result__;
}

static char* list$$1char$p_next(struct list$$1char$p* self){
char* result_240;
memset(&result_240, 0, sizeof(char*));
            self->it=self->it->next;
            if(self->it) {
                char* __result__ = self->it->item;
                return __result__;
            }
            memset(&result_240,0,sizeof(char*));
            char* __result__ = result_240;
            return __result__;
}

static void list$$1char$p_push_back(struct list$$1char$p* self, char* item){
void* right_value149;
struct list_item$$1char$p$$1char$p* litem_241;
void* right_value150;
struct list_item$$1char$p$$1char$p* litem_242;
void* right_value151;
struct list_item$$1char$p$$1char$p* litem_243;
memset(&litem_241, 0, sizeof(struct list_item$$1char$p$$1char$p*));
memset(&litem_242, 0, sizeof(struct list_item$$1char$p$$1char$p*));
memset(&litem_243, 0, sizeof(struct list_item$$1char$p$$1char$p*));
                if(self->len==0) {
                    litem_241=((struct list_item$$1char$p$$1char$p*)(right_value149=(struct list_item$$1char$p$$1char$p*)come_calloc(1, sizeof(struct list_item$$1char$p$$1char$p)*(1))));
                    litem_241->prev=((void*)0);
                    litem_241->next=((void*)0);
                    litem_241->item=item;
                    self->tail=litem_241;
                    self->head=litem_241;
                }
                else if(self->len==1) {
                    litem_242=((struct list_item$$1char$p$$1char$p*)(right_value150=(struct list_item$$1char$p$$1char$p*)come_calloc(1, sizeof(struct list_item$$1char$p$$1char$p)*(1))));
                    litem_242->prev=self->head;
                    litem_242->next=((void*)0);
                    litem_242->item=item;
                    self->tail=litem_242;
                    self->head->next=litem_242;
                }
                else {
                    litem_243=((struct list_item$$1char$p$$1char$p*)(right_value151=(struct list_item$$1char$p$$1char$p*)come_calloc(1, sizeof(struct list_item$$1char$p$$1char$p)*(1))));
                    litem_243->prev=self->tail;
                    litem_243->next=((void*)0);
                    litem_243->item=item;
                    self->tail->next=litem_243;
                    self->tail=litem_243;
                }
                self->len++;
}

static _Bool map$$2char$pint$_operator_equals(struct map$$2char$pint$* left, struct map$$2char$pint$* right){
        _Bool __result__ = map$$2char$pint$$$2char$pint$$$2char$pint$_equals(left,right);
        return __result__;
}

static _Bool map$$2char$pint$$$2char$pint$$$2char$pint$_equals(struct map$$2char$pint$* left, struct map$$2char$pint$* right){
int n_245;
_Bool result_246;
char* it_247;
char* default_value_248;
char* it2_251;
int default_value2_252;
int item_253;
int item2_254;
memset(&n_245, 0, sizeof(int));
memset(&result_246, 0, sizeof(_Bool));
memset(&it_247, 0, sizeof(char*));
memset(&default_value_248, 0, sizeof(char*));
memset(&it2_251, 0, sizeof(char*));
memset(&default_value2_252, 0, sizeof(int));
memset(&item_253, 0, sizeof(int));
memset(&item2_254, 0, sizeof(int));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            n_245=0;
            result_246=(_Bool)1;
            for(
            it_247=list$$1char$p_begin(left->key_list);
            !list$$1char$p_end(left->key_list);
            it_247=list$$1char$p_next(left->key_list)
            ){
                it2_251=list$$1char$p_item(right->key_list,n_245,default_value_248);
                if(char$_equals(it_247,it2_251)) {
                    item_253=map$$2char$pint$$$2char$pint$$$2char$pint$_at(left,it_247,default_value2_252);
                    item2_254=map$$2char$pint$$$2char$pint$$$2char$pint$_at(left,it2_251,default_value2_252);
                    if(!int$_equals(item_253,item2_254)) {
                        result_246=(_Bool)0;
                    }
                }
                else {
                    result_246=(_Bool)0;
                }
                n_245++;
            }
            _Bool __result__ = result_246;
            return __result__;
}

static char* list$$1char$p_item(struct list$$1char$p* self, int position, char* default_value){
struct list_item$$1char$p$$1char$p* it_249;
int i_250;
memset(&it_249, 0, sizeof(struct list_item$$1char$p$$1char$p*));
memset(&i_250, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_249=self->head;
                    i_250=0;
                    while(it_249!=((void*)0)) {
                        if(position==i_250) {
                            char* __result__ = it_249->item;
                            return __result__;
                        }
                        it_249=it_249->next;
                        i_250++;
                    }
                    char* __result__ = default_value;
                    return __result__;
}

static int map$$2char$pint$_operator_load_element(struct map$$2char$pint$* self, char* key){
int default_value_257;
memset(&default_value_257, 0, sizeof(int));
        memset(&default_value_257,0,sizeof(int));
        int __result__ = map$$2char$pint$$$2char$pint$$$2char$pint$_at(self,key,default_value_257);
        return __result__;
}

static struct map$$2char$pint$* map$$2char$pint$_clone(struct map$$2char$pint$* self){
void* right_value156;
void* right_value162;
struct map$$2char$pint$* result_259;
char* it_262;
int default_value_263;
int it2_264;
memset(&result_259, 0, sizeof(struct map$$2char$pint$*));
memset(&it_262, 0, sizeof(char*));
memset(&default_value_263, 0, sizeof(int));
memset(&it2_264, 0, sizeof(int));
        if(self==((void*)0)) {
            void* __result__ = ((void*)0);
            return __result__;
        }
        result_259=(struct map$$2char$pint$*)come_increment_ref_count(((struct map$$2char$pint$*)(right_value162=map$$2char$pint$$$2char$pint$_initialize((struct map$$2char$pint$$$2char$pint$*)come_increment_ref_count(((struct map$$2char$pint$$$2char$pint$*)(right_value156=(struct map$$2char$pint$$$2char$pint$*)come_calloc(1, sizeof(struct map$$2char$pint$$$2char$pint$)*(1)))))))));
        call_finalizer(map$$2char$pint$$$2char$pint$_finalize,right_value156,0, 1, 0);
        call_finalizer(map$$2char$pint$$$2char$pint$$$2char$pint$_finalize,right_value162,0, 1, 0);
        for(
        it_262=map$$2char$pint$$$2char$pint$$$2char$pint$_begin(self);
        !map$$2char$pint$$$2char$pint$$$2char$pint$_end(self);
        it_262=map$$2char$pint$$$2char$pint$$$2char$pint$_next(self)
        ){
            it2_264=map$$2char$pint$$$2char$pint$$$2char$pint$_at(self,it_262,default_value_263);
            map$$2char$pint$$$2char$pint$$$2char$pint$_insert2(result_259,char$_clone(it_262),int$_clone(it2_264));
        }
        struct map$$2char$pint$* __result__ = result_259;
        call_finalizer(map$$2char$pint$$$2char$pint$_finalize,result_259,0, 0, 1);
        return __result__;
}

static struct map$$2char$pint$* map$$2char$pint$$$2char$pint$_initialize(struct map$$2char$pint$* self){
void* right_value157;
void* right_value158;
void* right_value159;
int i_258;
void* right_value160;
void* right_value161;
memset(&i_258, 0, sizeof(int));
            self->keys=((char***)(right_value157=(char***)come_calloc(1, sizeof(char**)*(1*(128)))));
            self->items=((int**)(right_value158=(int**)come_calloc(1, sizeof(int*)*(1*(128)))));
            self->item_existance=((_Bool**)(right_value159=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(128)))));
            for(
            i_258=0;
            i_258<128;
            i_258++
            ){
                self->item_existance[i_258]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            if(self->key_list) {(struct list$$1char$p*)come_decrement_ref_count(self->key_list,0,0); }
            self->key_list=(struct list$$1char$p*)come_increment_ref_count(((struct list$$1char$p*)(right_value161=list$$1char$p$$1char$p_initialize((struct list$$1char$p$$1char$p*)come_increment_ref_count(((struct list$$1char$p$$1char$p*)(right_value160=(struct list$$1char$p$$1char$p*)come_calloc(1, sizeof(struct list$$1char$p$$1char$p)*(1)))))))));
            call_finalizer(list$$1char$p$$1char$p_finalize,right_value160,0, 1, 0);
            call_finalizer(list$$1char$p$$1char$p$$1char$p_finalize,right_value161,0, 1, 0);
            self->it=0;
            struct map$$2char$pint$* __result__ = self;
            call_finalizer(map$$2char$pint$$$2char$pint$_finalize,self,0, 0, 1);
            return __result__;
}

static void map$$2char$pint$$$2char$pint$$$2char$pint$_finalize(struct map$$2char$pint$* self){
int i_260;
int i_261;
memset(&i_260, 0, sizeof(int));
memset(&i_261, 0, sizeof(int));
            for(
            i_260=0;
            i_260<self->size;
            i_260++
            ){
                if(self->item_existance[i_260]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_261=0;
            i_261<self->size;
            i_261++
            ){
                if(self->item_existance[i_261]) {
                    if(0) {
                        self->keys[i_261] = come_decrement_ref_count(self->keys[i_261], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$$1char$p_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$$2char$pint$$$2char$pint$$$2char$pint$_insert2(struct map$$2char$pint$* self, char* key, int item){
int hash_276;
int it_277;
_Bool same_key_exist_278;
char* it2_279;
memset(&hash_276, 0, sizeof(int));
memset(&it_277, 0, sizeof(int));
memset(&same_key_exist_278, 0, sizeof(_Bool));
memset(&it2_279, 0, sizeof(char*));
                if(self->len*2>=self->size) {
                    map$$2char$pint$$$2char$pint$$$2char$pint$_rehash(self);
                }
                hash_276=char$_get_hash_key(key)%self->size;
                it_277=hash_276;
                while((_Bool)1) {
                    if(self->item_existance[it_277]) {
                        if(char$_equals(self->keys[it_277],key)) {
                            if(0) {
                                self->keys[it_277] = come_decrement_ref_count(self->keys[it_277], 0, 0);
                                self->keys[it_277]=key;
                            }
                            else {
                                self->keys[it_277]=key;
                            }
                            if(0) {
                                self->items[it_277]=item;
                            }
                            else {
                                self->items[it_277]=item;
                            }
                            break;
                        }
                        it_277++;
                        if(it_277>=self->size) {
                            it_277=0;
                        }
                        else if(it_277==hash_276) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_277]=(_Bool)1;
                        if(0) {
                            self->keys[it_277] = come_decrement_ref_count(self->keys[it_277], 0, 0);
                            self->keys[it_277]=key;
                        }
                        else {
                            self->keys[it_277]=key;
                        }
                        if(0) {
                            self->items[it_277]=item;
                        }
                        else {
                            self->items[it_277]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_278=(_Bool)0;
                for(
                it2_279=list$$1char$p_begin(self->key_list);
                !list$$1char$p_end(self->key_list);
                it_277=list$$1char$p_next(self->key_list)
                ){
                    if(char$_equals(it2_279,key)) {
                        same_key_exist_278=(_Bool)1;
                    }
                }
                if(!same_key_exist_278) {
                    list$$1char$p_push_back(self->key_list,key);
                }
}

static void map$$2char$pint$$$2char$pint$$$2char$pint$_rehash(struct map$$2char$pint$* self){
int size_265;
void* right_value163;
char** keys_266;
void* right_value164;
int* items_267;
void* right_value165;
_Bool* item_existance_268;
int len_269;
char* it_270;
int default_value_271;
int it2_272;
int hash_273;
int n_274;
int default_value_275;
memset(&size_265, 0, sizeof(int));
memset(&keys_266, 0, sizeof(char**));
memset(&items_267, 0, sizeof(int*));
memset(&item_existance_268, 0, sizeof(_Bool*));
memset(&len_269, 0, sizeof(int));
memset(&it_270, 0, sizeof(char*));
memset(&default_value_271, 0, sizeof(int));
memset(&it2_272, 0, sizeof(int));
memset(&hash_273, 0, sizeof(int));
memset(&n_274, 0, sizeof(int));
memset(&default_value_275, 0, sizeof(int));
                        size_265=self->size*3;
                        keys_266=((char***)(right_value163=(char***)come_calloc(1, sizeof(char**)*(1*(size_265)))));
                        items_267=((int**)(right_value164=(int**)come_calloc(1, sizeof(int*)*(1*(size_265)))));
                        item_existance_268=((_Bool**)(right_value165=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(size_265)))));
                        len_269=0;
                        for(
                        it_270=map$$2char$pint$$$2char$pint$$$2char$pint$_begin(self);
                        !map$$2char$pint$$$2char$pint$$$2char$pint$_end(self);
                        it_270=map$$2char$pint$$$2char$pint$$$2char$pint$_next(self)
                        ){
                            it2_272=map$$2char$pint$$$2char$pint$$$2char$pint$_at(self,it_270,default_value_271);
                            hash_273=char$_get_hash_key(it_270)%size_265;
                            n_274=hash_273;
                            while((_Bool)1) {
                                if(item_existance_268[n_274]) {
                                    n_274++;
                                    if(n_274>=size_265) {
                                        n_274=0;
                                    }
                                    else if(n_274==hash_273) {
                                        fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                        exit(2);
                                    }
                                }
                                else {
                                    item_existance_268[n_274]=(_Bool)1;
                                    keys_266[n_274]=it_270;
                                    items_267[n_274]=map$$2char$pint$$$2char$pint$$$2char$pint$_at(self,it_270,default_value_275);
                                    len_269++;
                                    break;
                                }
                            }
                        }
                        come_free_object((char*)self->items);
                        self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
                        come_free_object((char*)self->keys);
                        self->keys=keys_266;
                        self->items=items_267;
                        self->item_existance=item_existance_268;
                        self->size=size_265;
                        self->len=len_269;
}

static struct tuple1$$1int$* tuple1$$1int$_initialize(struct tuple1$$1int$* self, int v1){
        self->v1=v1;
        struct tuple1$$1int$* __result__ = self;
        call_finalizer(tuple1$$1int$$$1int$_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple1$$1int$$$1int$_finalize(struct tuple1$$1int$* self){
}

static void tuple1$$1int$_finalize(struct tuple1$$1int$* self){
}

static struct tuple1$$1char$ph* tuple1$$1char$ph_initialize(struct tuple1$$1char$ph* self, char* v1){
        if(self->v1) {(char*)come_decrement_ref_count(self->v1,0,0); }
        self->v1=(char*)come_increment_ref_count(v1);
        struct tuple1$$1char$ph* __result__ = self;
        call_finalizer(tuple1$$1char$ph$$1char$ph_finalize,self,0, 0, 1);
        v1 = come_decrement_ref_count(v1, 0, 1);
        return __result__;
}

static void tuple1$$1char$ph$$1char$ph_finalize(struct tuple1$$1char$ph* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static void tuple1$$1char$ph_finalize(struct tuple1$$1char$ph* self){
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            self->v1 = come_decrement_ref_count(self->v1, 0, 0);
        }
}

static struct tuple1$$1char$ph* tuple1$$1char$ph_clone(struct tuple1$$1char$ph* self){
void* right_value172;
struct tuple1$$1char$ph* result_283;
memset(&result_283, 0, sizeof(struct tuple1$$1char$ph*));
        result_283=(struct tuple1$$1char$ph*)come_increment_ref_count(((struct tuple1$$1char$ph*)(right_value172=(struct tuple1$$1char$ph*)come_calloc(1, sizeof(struct tuple1$$1char$ph)*(1)))));
        call_finalizer(tuple1$$1char$ph$_finalize,right_value172,0, 1, 0);
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            if(result_283->v1) {(char*)come_decrement_ref_count(result_283->v1,0,0); }
            result_283->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        }
        struct tuple1$$1char$ph* __result__ = result_283;
        call_finalizer(tuple1$$1char$ph$_finalize,result_283,0, 0, 1);
        return __result__;
}

static void tuple1$$1char$ph$_finalize(struct tuple1$$1char$ph* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static _Bool tuple1$$1char$ph_equals(struct tuple1$$1char$ph* left, struct tuple1$$1char$ph* right){
        if(!string_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static _Bool tuple1$$1char$ph_operator_equals(struct tuple1$$1char$ph* left, struct tuple1$$1char$ph* right){
        if(!string_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static struct tuple2$$2char$phint$* tuple2$$2char$phint$_initialize(struct tuple2$$2char$phint$* self, char* v1, int v2){
        if(self->v1) {(char*)come_decrement_ref_count(self->v1,0,0); }
        self->v1=(char*)come_increment_ref_count(v1);
        self->v2=v2;
        struct tuple2$$2char$phint$* __result__ = self;
        call_finalizer(tuple2$$2char$phint$$$2char$phint$_finalize,self,0, 0, 1);
        v1 = come_decrement_ref_count(v1, 0, 1);
        return __result__;
}

static void tuple2$$2char$phint$$$2char$phint$_finalize(struct tuple2$$2char$phint$* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static void tuple2$$2char$phint$_finalize(struct tuple2$$2char$phint$* self){
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            self->v1 = come_decrement_ref_count(self->v1, 0, 0);
        }
}

static struct tuple2$$2char$pint$* tuple2$$2char$pint$_initialize(struct tuple2$$2char$pint$* self, char* v1, int v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$$2char$pint$* __result__ = self;
        call_finalizer(tuple2$$2char$pint$$$2char$pint$_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple2$$2char$pint$$$2char$pint$_finalize(struct tuple2$$2char$pint$* self){
}

static void tuple2$$2char$pint$_finalize(struct tuple2$$2char$pint$* self){
}

static _Bool tuple2$$2char$pint$$$2char$pint$_equals(struct tuple2$$2char$pint$* left, struct tuple2$$2char$pint$* right){
        if(!char$_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        if(!int$_equals(left->v2,right->v2)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static _Bool tuple2$$2char$pint$$$2char$pint$_operator_equals(struct tuple2$$2char$pint$* left, struct tuple2$$2char$pint$* right){
        if(!char$_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        if(!int$_equals(left->v2,right->v2)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static _Bool tuple2$$2char$pint$$$2char$pint$_operator_not_equals(struct tuple2$$2char$pint$* left, struct tuple2$$2char$pint$* right){
        _Bool __result__ = !(char$_equals(left->v1,right->v1)&&int$_equals(left->v2,right->v2));
        return __result__;
}

static struct sDataA* sDataA_clone(struct sDataA* self){
void* right_value210;
struct sDataA* result_306;
memset(&result_306, 0, sizeof(struct sDataA*));
        result_306=(struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value210=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1)))));
        call_finalizer(sDataA_finalize,right_value210,0, 1, 0);
        struct sDataA* __result__ = result_306;
        call_finalizer(sDataA_finalize,result_306,0, 0, 1);
        return __result__;
}

static struct list$$1IA$ph* list$$1IA$ph_initialize(struct list$$1IA$ph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$$1IA$ph* __result__ = self;
        call_finalizer(list$$1IA$ph$$1IA$ph_finalize,self,0, 0, 1);
        return __result__;
}

static void list$$1IA$ph$$1IA$ph_finalize(struct list$$1IA$ph* self){
struct list_item$$1IA$ph$$1IA$ph* it_296;
struct list_item$$1IA$ph$$1IA$ph* prev_it_297;
memset(&it_296, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
memset(&prev_it_297, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
            it_296=self->head;
            while(it_296!=((void*)0)) {
                if(1) {
                    call_finalizer(((struct IA*)it_296->item)->finalize, ((struct IA*)it_296->item)->_protocol_obj,0, 0, 0);
                    it_296->item = come_decrement_ref_count(it_296->item, 0, 0);
                }
                prev_it_297=it_296;
                it_296=it_296->next;
                come_free_object(prev_it_297);
            }
}

static void list$$1IA$ph_finalize(struct list$$1IA$ph* self){
struct list_item$$1IA$ph$$1IA$ph* it_299;
struct list_item$$1IA$ph$$1IA$ph* prev_it_300;
memset(&it_299, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
memset(&prev_it_300, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
        it_299=self->head;
        while(it_299!=((void*)0)) {
            if(1) {
                call_finalizer(((struct IA*)it_299->item)->finalize, ((struct IA*)it_299->item)->_protocol_obj,0, 0, 0);
                it_299->item = come_decrement_ref_count(it_299->item, 0, 0);
            }
            prev_it_300=it_299;
            it_299=it_299->next;
            come_free_object(prev_it_300);
        }
}

static void list$$1IA$ph_push_back(struct list$$1IA$ph* self, struct IA* item){
void* right_value197;
struct list_item$$1IA$ph$$1IA$ph* litem_301;
struct IA** _inf_valueX2;
void* right_value198;
struct list_item$$1IA$ph$$1IA$ph* litem_302;
struct IA** _inf_valueX3;
void* right_value199;
struct list_item$$1IA$ph$$1IA$ph* litem_303;
struct IA** _inf_valueX4;
memset(&litem_301, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
memset(&litem_302, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
memset(&litem_303, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
        if(self->len==0) {
            litem_301=((struct list_item$$1IA$ph$$1IA$ph*)(right_value197=(struct list_item$$1IA$ph$$1IA$ph*)come_calloc(1, sizeof(struct list_item$$1IA$ph$$1IA$ph)*(1))));
            litem_301->prev=((void*)0);
            litem_301->next=((void*)0);
            if(litem_301->item) {(struct IA*)come_decrement_ref_count(litem_301->item,0,0), come_decrement_ref_count(((struct IA*)litem_301->item)->_protocol_obj,0,0); }
            _inf_valueX2=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_301->item=_inf_valueX2;
            self->tail=litem_301;
            self->head=litem_301;
        }
        else if(self->len==1) {
            litem_302=((struct list_item$$1IA$ph$$1IA$ph*)(right_value198=(struct list_item$$1IA$ph$$1IA$ph*)come_calloc(1, sizeof(struct list_item$$1IA$ph$$1IA$ph)*(1))));
            litem_302->prev=self->head;
            litem_302->next=((void*)0);
            if(litem_302->item) {(struct IA*)come_decrement_ref_count(litem_302->item,0,0), come_decrement_ref_count(((struct IA*)litem_302->item)->_protocol_obj,0,0); }
            _inf_valueX3=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_302->item=_inf_valueX3;
            self->tail=litem_302;
            self->head->next=litem_302;
        }
        else {
            litem_303=((struct list_item$$1IA$ph$$1IA$ph*)(right_value199=(struct list_item$$1IA$ph$$1IA$ph*)come_calloc(1, sizeof(struct list_item$$1IA$ph$$1IA$ph)*(1))));
            litem_303->prev=self->tail;
            litem_303->next=((void*)0);
            if(litem_303->item) {(struct IA*)come_decrement_ref_count(litem_303->item,0,0), come_decrement_ref_count(((struct IA*)litem_303->item)->_protocol_obj,0,0); }
            _inf_valueX4=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_303->item=_inf_valueX4;
            self->tail->next=litem_303;
            self->tail=litem_303;
        }
        self->len++;
        call_finalizer(((struct IA*)item)->finalize, ((struct IA*)item)->_protocol_obj,0, 0, 1);
        item = come_decrement_ref_count(item, 0, 1);
}

static struct IA* list$$1IA$ph_begin(struct list$$1IA$ph* self){
struct IA* result_307;
memset(&result_307, 0, sizeof(struct IA*));
        self->it=self->head;
        if(self->it) {
            struct IA* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_307,0,sizeof(struct IA*));
        struct IA* __result__ = result_307;
        return __result__;
}

static _Bool list$$1IA$ph_end(struct list$$1IA$ph* self){
        struct list_item$$1IA$ph* __result__ = self->it==((void*)0);
        return __result__;
}

static struct IA* list$$1IA$ph_next(struct list$$1IA$ph* self){
struct IA* result_309;
memset(&result_309, 0, sizeof(struct IA*));
        self->it=self->it->next;
        if(self->it) {
            struct IA* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_309,0,sizeof(struct IA*));
        struct IA* __result__ = result_309;
        return __result__;
}

static struct tuple3$$3int$int$bool$* tuple3$$3int$int$bool$_initialize(struct tuple3$$3int$int$bool$* self, int v1, int v2, _Bool v3){
        self->v1=v1;
        self->v2=v2;
        self->v3=v3;
        struct tuple3$$3int$int$bool$* __result__ = self;
        call_finalizer(tuple3$$3int$int$bool$$$3int$int$bool$_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple3$$3int$int$bool$$$3int$int$bool$_finalize(struct tuple3$$3int$int$bool$* self){
}

static void tuple3$$3int$int$bool$_finalize(struct tuple3$$3int$int$bool$* self){
}

static int tuple2$$2int$bool$_catch(struct tuple2$$2int$bool$* self, void* parent, void (*block)(void*)){
        if(!self->v2) {
            block(parent);
        }
        int __result__ = self->v1;
        return __result__;
}

void method_block6(struct __current_stack6__* parent){
        fprintf(stderr,"exception\n");
}

static void tuple2$$2int$bool$_finalize(struct tuple2$$2int$bool$* self){
}

static _Bool list$$1char$ph_operator_equals(struct list$$1char$ph* self, struct list$$1char$ph* right){
        _Bool __result__ = list$$1char$ph$$1char$ph$$1char$ph_equals(self,right);
        return __result__;
}

static _Bool list$$1char$ph$$1char$ph$$1char$ph_equals(struct list$$1char$ph* left, struct list$$1char$ph* right){
struct list_item$$1char$ph$$1char$ph* it_316;
struct list_item$$1char$ph$$1char$ph* it2_317;
memset(&it_316, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&it2_317, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_316=left->head;
            it2_317=right->head;
            while(it_316!=((void*)0)) {
                if(!string_equals(it_316->item,it2_317->item)) {
                    _Bool __result__ = (_Bool)0;
                    return __result__;
                }
                it_316=it_316->next;
                it2_317=it2_317->next;
            }
            _Bool __result__ = (_Bool)1;
            return __result__;
}

