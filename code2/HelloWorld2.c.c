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
struct list_item$p$1char$ph
{
    char* item;
    struct list_item$p$1char$ph* prev;
    struct list_item$p$1char$ph* next;
};
struct list$$1char$ph
{
    struct list_item$p$1char$ph* head;
    struct list_item$p$1char$ph* tail;
    int len;
    struct list_item$p$1char$ph* it;
};
struct list$ph$1char$ph
{
    struct list_item$p$1char$ph* head;
    struct list_item$p$1char$ph* tail;
    int len;
    struct list_item$p$1char$ph* it;
};
struct list$p$1char$ph
{
    struct list_item$p$1char$ph* head;
    struct list_item$p$1char$ph* tail;
    int len;
    struct list_item$p$1char$ph* it;
};
struct list_item$$1char$ph
{
    char* item;
    struct list_item$p$1char$ph* prev;
    struct list_item$p$1char$ph* next;
};
struct list_item$$1char$ph$$1char$ph
{
    char* item;
    struct list_item$p$1char$ph* prev;
    struct list_item$p$1char$ph* next;
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
struct tuple2$ph$2int$bool$
{
    int v1;
    _Bool v2;
};
struct tuple2$$2int$bool$
{
    int v1;
    _Bool v2;
};
struct list_item$p$1int$
{
    int item;
    struct list_item$p$1int$* prev;
    struct list_item$p$1int$* next;
};
struct list$$1int$
{
    struct list_item$p$1int$* head;
    struct list_item$p$1int$* tail;
    int len;
    struct list_item$p$1int$* it;
};
struct list_item$p$1IA$ph
{
    struct IA* item;
    struct list_item$p$1IA$ph* prev;
    struct list_item$p$1IA$ph* next;
};
struct list$$1IA$ph
{
    struct list_item$p$1IA$ph* head;
    struct list_item$p$1IA$ph* tail;
    int len;
    struct list_item$p$1IA$ph* it;
};
struct __current_stack1__
{
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
};
struct list$ph$1int$
{
    struct list_item$p$1int$* head;
    struct list_item$p$1int$* tail;
    int len;
    struct list_item$p$1int$* it;
};
struct list$p$1int$
{
    struct list_item$p$1int$* head;
    struct list_item$p$1int$* tail;
    int len;
    struct list_item$p$1int$* it;
};
struct list_item$$1int$
{
    int item;
    struct list_item$p$1int$* prev;
    struct list_item$p$1int$* next;
};
struct list_item$$1int$$$1int$
{
    int item;
    struct list_item$p$1int$* prev;
    struct list_item$p$1int$* next;
};
struct __current_stack2__
{
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
    struct list$$1char$ph** liX_115;
    struct list$$1int$** liX2_121;
    int* aX_130;
};
struct __current_stack3__
{
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
    struct list$$1char$ph** liX_115;
    struct list$$1int$** liX2_121;
    int* aX_130;
    int* aXYZY_134;
    struct list$$1char$ph** li_135;
    struct list$$1int$** li2_137;
    int* aXL_139;
};
struct list$p$1int$$p$1int$
{
    struct list_item$p$1int$* head;
    struct list_item$p$1int$* tail;
    int len;
    struct list_item$p$1int$* it;
};
struct list$p$1char$ph$p$1char$ph
{
    struct list_item$p$1char$ph* head;
    struct list_item$p$1char$ph* tail;
    int len;
    struct list_item$p$1char$ph* it;
};
struct list$$1int$$$1int$
{
    struct list_item$p$1int$* head;
    struct list_item$p$1int$* tail;
    int len;
    struct list_item$p$1int$* it;
};
struct list$ph$1int$$ph$1int$
{
    struct list_item$p$1int$* head;
    struct list_item$p$1int$* tail;
    int len;
    struct list_item$p$1int$* it;
};
struct __current_stack4__
{
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
    struct list$$1char$ph** liX_115;
    struct list$$1int$** liX2_121;
    int* aX_130;
    int* aXYZY_134;
    struct list$$1char$ph** li_135;
    struct list$$1int$** li2_137;
    int* aXL_139;
    struct list$ph$1char$ph** li3_176;
    struct list$ph$1int$** li4_184;
    struct list$ph$1int$** li5_188;
    struct list$ph$1int$** li6_193;
    int** axyzX_204;
    char** strXYXY_205;
    struct list$$1int$** liZ_206;
};
struct __current_stack5__
{
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
    struct list$$1char$ph** liX_115;
    struct list$$1int$** liX2_121;
    int* aX_130;
    int* aXYZY_134;
    struct list$$1char$ph** li_135;
    struct list$$1int$** li2_137;
    int* aXL_139;
    struct list$ph$1char$ph** li3_176;
    struct list$ph$1int$** li4_184;
    struct list$ph$1int$** li5_188;
    struct list$ph$1int$** li6_193;
    int** axyzX_204;
    char** strXYXY_205;
    struct list$$1int$** liZ_206;
    struct list$$1int$** liZ2_212;
    struct list$$1int$** __list_value1___215;
    struct list$$1int$** __list_value2___216;
    struct list$$1int$** __list_value3___217;
};
struct list$ph$1IA$ph
{
    struct list_item$p$1IA$ph* head;
    struct list_item$p$1IA$ph* tail;
    int len;
    struct list_item$p$1IA$ph* it;
};
struct list$p$1IA$ph
{
    struct list_item$p$1IA$ph* head;
    struct list_item$p$1IA$ph* tail;
    int len;
    struct list_item$p$1IA$ph* it;
};
struct list_item$$1IA$ph
{
    struct IA* item;
    struct list_item$p$1IA$ph* prev;
    struct list_item$p$1IA$ph* next;
};
struct list_item$$1IA$ph$$1IA$ph
{
    struct IA* item;
    struct list_item$p$1IA$ph* prev;
    struct list_item$p$1IA$ph* next;
};
struct tuple3$$3int$int$bool$
{
    int v1;
    int v2;
    _Bool v3;
};
struct tuple3$ph$3int$int$bool$
{
    int v1;
    int v2;
    _Bool v3;
};
struct tuple2$p$2int$bool$
{
    int v1;
    _Bool v2;
};
struct __current_stack6__
{
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
    struct list$$1char$ph** liX_115;
    struct list$$1int$** liX2_121;
    int* aX_130;
    int* aXYZY_134;
    struct list$$1char$ph** li_135;
    struct list$$1int$** li2_137;
    int* aXL_139;
    struct list$ph$1char$ph** li3_176;
    struct list$ph$1int$** li4_184;
    struct list$ph$1int$** li5_188;
    struct list$ph$1int$** li6_193;
    int** axyzX_204;
    char** strXYXY_205;
    struct list$$1int$** liZ_206;
    struct list$$1int$** liZ2_212;
    struct list$$1int$** __list_value1___215;
    struct list$$1int$** __list_value2___216;
    struct list$$1int$** __list_value3___217;
    struct IA** ia_219;
    struct list$$1IA$ph** liIA_222;
    struct tuple3$ph$3int$int$bool$** __tuple_value2___234;
    int* aZZZ_235;
    int* bZZZ_236;
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
static void ncfree(void* mem);
static void* come_calloc(int count, int size);
static void* come_increment_ref_count(void* mem);
static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free);
static void come_free_object(void* mem);
static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free);
static void* nccalloc(int nmemb, int size);
static void* come_memdup(void* block);
static void va_list_finalize(va_list* self);
static struct list$ph$1char$ph* list$$1char$phphcharph_initialize(struct list$ph$1char$ph* self);
static void list$ph$1char$phphcharph_finalize(struct list$p$1char$ph* self);
static void list$$1char$phphcharph_finalize(struct list$p$1char$ph* self);
static void list$$1char$phphcharph_push_back(struct list$p$1char$ph* self, char* item);
static void FILE_finalize(struct _IO_FILE* self);
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int intp_fun(int* self);
struct sDataA* sDataA_initialize(struct sDataA* self, int a, int b);
static void sDataA_finalize(struct sDataA* self);
int sDataA_fun(struct sDataA* self, int a, int b);
void fun_default_parametor(int x, int y);
struct tuple2$ph$2int$bool$* fun_exception(int x, int y);
static struct tuple2$ph$2int$bool$* tuple2$$2int$bool$phintbool_initialize(struct tuple2$ph$2int$bool$* self, int v1, _Bool v2);
static void tuple2$ph$2int$bool$phintbool_finalize(struct tuple2$ph$2int$bool$* self);
static void tuple2$$2int$bool$phintbool_finalize(struct tuple2$$2int$bool$* self);
int main();
static void sData_finalize(struct sData* self);
void method_block1(struct __current_stack1__* parent);
static char* list$$1char$phphcharph_begin(struct list$p$1char$ph* self);
static _Bool list$$1char$phphcharph_end(struct list$p$1char$ph* self);
static char* list$$1char$phphcharph_next(struct list$p$1char$ph* self);
static struct list$ph$1int$* list$$1int$phint_initialize(struct list$ph$1int$* self);
static void list$ph$1int$phint_finalize(struct list$p$1int$* self);
static void list$$1int$phint_finalize(struct list$p$1int$* self);
static void list$$1int$phint_push_back(struct list$p$1int$* self, int item);
static int list$$1int$phint_begin(struct list$p$1int$* self);
static _Bool list$$1int$phint_end(struct list$p$1int$* self);
static int list$$1int$phint_next(struct list$p$1int$* self);
static void list$$1int$phint_each(struct list$p$1int$* self, void* parent, void (*block)(void*,int,int,_Bool*));
void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3);
void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3);
static int list$$1int$phint_item(struct list$p$1int$* self, int position, int default_value);
static void list$$1int$phint_insert(struct list$p$1int$* self, int position, int item);
static void list$p$1int$$p$1int$pint_push_back(struct list$p$1int$* self, int item);
static void list$$1char$phphcharph_insert(struct list$p$1char$ph* self, int position, char* item);
static void list$p$1char$ph$p$1char$phpcharph_push_back(struct list$p$1char$ph* self, char* item);
static char* list$$1char$phphcharph_item(struct list$p$1char$ph* self, int position, char* default_value);
static void list$$1char$phphcharph_reset(struct list$p$1char$ph* self);
static void list_item$$1char$ph$$1char$phpcharph_finalize(struct list_item$$1char$ph$$1char$ph* self);
static int list$$1char$phphcharph_length(struct list$p$1char$ph* self);
static void list$$1int$phint_delete(struct list$p$1int$* self, int head, int tail);
static void list$p$1int$$p$1int$pint_reset(struct list$p$1int$* self);
static void list_item$$1int$$$1int$pint_finalize(struct list_item$$1int$$$1int$* self);
static void list$ph$1char$phphcharph_push_back(struct list$p$1char$ph* self, char* item);
static void list$ph$1char$phphcharph_replace(struct list$p$1char$ph* self, int position, char* item);
static char* list$ph$1char$phphcharph_item(struct list$p$1char$ph* self, int position, char* default_value);
static void list$ph$1int$phint_push_back(struct list$p$1int$* self, int item);
static _Bool list$ph$1int$phint_equals(struct list$p$1int$* left, struct list$p$1int$* right);
static int list$ph$1int$phint_find(struct list$p$1int$* self, int item, int default_value);
static struct list$ph$1int$* list$ph$1int$phint_sublist(struct list$p$1int$* self, int begin, int tail);
static struct list$ph$1int$* list$$1int$$$1int$phint_initialize(struct list$ph$1int$* self);
static void list$$1int$$$1int$phint_finalize(struct list$p$1int$* self);
static void list$ph$1int$$ph$1int$phint_finalize(struct list$p$1int$* self);
static void list$$1int$$$1int$phint_push_back(struct list$p$1int$* self, int item);
void method_block4(struct __current_stack4__* parent, int it, int it2, _Bool* it3);
static void list$$1int$phint_operator_store_element(struct list$p$1int$* self, int position, int item);
static void list$p$1int$$p$1int$pint_replace(struct list$p$1int$* self, int position, int item);
static int list$$1int$phint_operator_load_element(struct list$p$1int$* self, int index);
static int list$p$1int$$p$1int$pint_item(struct list$p$1int$* self, int position, int default_value);
static _Bool list$$1int$phint_operator_equals(struct list$p$1int$* self, struct list$p$1int$* right);
static _Bool list$p$1int$$p$1int$pint_equals(struct list$p$1int$* left, struct list$p$1int$* right);
void method_block5(struct __current_stack5__* parent, int it, int it2, _Bool* it3);
static struct sDataA* sDataA_clone(struct sDataA* self);
static struct list$ph$1IA$ph* list$$1IA$phphIAph_initialize(struct list$ph$1IA$ph* self);
static void list$ph$1IA$phphIAph_finalize(struct list$p$1IA$ph* self);
static void list$$1IA$phphIAph_finalize(struct list$p$1IA$ph* self);
static void list$$1IA$phphIAph_push_back(struct list$p$1IA$ph* self, struct IA* item);
static struct IA* list$$1IA$phphIAph_begin(struct list$p$1IA$ph* self);
static _Bool list$$1IA$phphIAph_end(struct list$p$1IA$ph* self);
static struct IA* list$$1IA$phphIAph_next(struct list$p$1IA$ph* self);
static struct tuple3$ph$3int$int$bool$* tuple3$$3int$int$bool$phintintbool_initialize(struct tuple3$ph$3int$int$bool$* self, int v1, int v2, _Bool v3);
static void tuple3$ph$3int$int$bool$phintintbool_finalize(struct tuple3$ph$3int$int$bool$* self);
static void tuple3$$3int$int$bool$phintintbool_finalize(struct tuple3$$3int$int$bool$* self);
static int tuple2$ph$2int$bool$phintbool_catch(struct tuple2$p$2int$bool$* self, void* parent, void (*block)(void*));
void method_block6(struct __current_stack6__* parent);
static _Bool list$$1char$phphcharph_operator_equals(struct list$p$1char$ph* self, struct list$p$1char$ph* right);
static _Bool list$p$1char$ph$p$1char$phpcharph_equals(struct list$p$1char$ph* left, struct list$p$1char$ph* right);
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
    result_22=(char*)come_increment_ref_count((char**)(right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(len_21)))));
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
    result_24=(char*)come_increment_ref_count((char**)(right_value1=(char**)come_calloc(1, sizeof(char*)*(1*(len_23+1)))));
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
    result_26=(char*)come_increment_ref_count((char**)(right_value2=(char**)come_calloc(1, sizeof(char*)*(1*(len_25+1)))));
    right_value2 = come_decrement_ref_count(right_value2, 1, 0);
    strncpy(result_26,self,len_25+1);
    strncat(result_26,right,len_25+1);
    char* __result__ = result_26;
    result_26 = come_decrement_ref_count(result_26, 0, 1);
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
static inline unsigned int charp_get_hash_key(char* value){
void* right_value3;
    unsigned int __result__ = string_get_hash_key((char*)(right_value3=__builtin_string(value)));
    right_value3 = come_decrement_ref_count(right_value3, 1, 0);
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
void* right_value4;
    char* __result__ = (char*)(right_value4=__builtin_string(self));
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
void* right_value5;
    self->size=128;
    if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
    self->buf=(char*)come_increment_ref_count((char**)(right_value5=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)))));
    right_value5 = come_decrement_ref_count(right_value5, 1, 0);
    self->buf[0]=0;
    self->len=0;
    struct buffer* __result__ = self;
    call_finalizer(buffer_finalize,self,0, 0, 1);
    return __result__;
}
static inline struct buffer* buffer_clone(struct buffer* self){
void* right_value6;
struct buffer* result_29;
void* right_value7;
memset(&result_29, 0, sizeof(struct buffer*));
    if(self==((void*)0)) {
        void* __result__ = ((void*)0);
        return __result__;
    }
    result_29=(struct buffer*)come_increment_ref_count((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1))));
    call_finalizer(buffer_finalize,right_value6,0, 1, 0);
    result_29->size=self->size;
    if(result_29->buf) {(char*)come_decrement_ref_count(result_29->buf,0,0); }
    result_29->buf=(char*)come_increment_ref_count((char**)(right_value7=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)))));
    right_value7 = come_decrement_ref_count(right_value7, 1, 0);
    result_29->len=self->len;
    memcpy(result_29->buf,self->buf,self->len);
    struct buffer* __result__ = result_29;
    call_finalizer(buffer_finalize,result_29,0, 0, 1);
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
char* old_buf_30;
int old_len_31;
int new_size_32;
void* right_value8;
memset(&old_buf_30, 0, sizeof(char*));
memset(&old_len_31, 0, sizeof(int));
memset(&new_size_32, 0, sizeof(int));
    if(self->len+size+1+1>=self->size) {
        old_buf_30=(char*)come_increment_ref_count(come_memdup(self->buf));
        old_len_31=self->len;
        new_size_32=(self->size+size+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count((char**)(right_value8=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_32)))));
        right_value8 = come_decrement_ref_count(right_value8, 1, 0);
        memcpy(self->buf,old_buf_30,old_len_31);
        self->buf[old_len_31]=0;
        self->size=new_size_32;
        old_buf_30 = come_decrement_ref_count(old_buf_30, 0, 0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
}
static inline void buffer_append_char(struct buffer* self, char c){
int new_size_33;
void* right_value9;
memset(&new_size_33, 0, sizeof(int));
    if(self->len+1+1+1>=self->size) {
        new_size_33=(self->size+10+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count((char**)(right_value9=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_33)))));
        right_value9 = come_decrement_ref_count(right_value9, 1, 0);
        self->size=new_size_33;
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
void* right_value10;
    char* __result__ = (char*)(right_value10=__builtin_string(self->buf));
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
int len_34;
int new_size_35;
void* right_value11;
int i_36;
memset(&len_34, 0, sizeof(int));
memset(&new_size_35, 0, sizeof(int));
memset(&i_36, 0, sizeof(int));
    len_34=self->len;
    len_34=(len_34+3)&~3;
    if(len_34>=self->size) {
        new_size_35=(self->size+1+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count((char**)(right_value11=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_35)))));
        right_value11 = come_decrement_ref_count(right_value11, 1, 0);
        self->size=new_size_35;
    }
    for(
    i_36=self->len;
    i_36<len_34;
    i_36++
    ){
        self->buf[i_36]=0;
    }
    self->len=len_34;
}
static inline int buffer_compare(struct buffer* left, struct buffer* right){
    int __result__ = strcmp(left->buf,right->buf);
    return __result__;
}
static inline struct buffer* string_to_buffer(char* self){
void* right_value12;
void* right_value13;
struct buffer* result_37;
memset(&result_37, 0, sizeof(struct buffer*));
    result_37=(struct buffer*)come_increment_ref_count((struct buffer*)(right_value13=buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)(right_value12=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))));
    call_finalizer(buffer_finalize,right_value12,0, 1, 0);
    call_finalizer(buffer_finalize,right_value13,0, 1, 0);
    buffer_append_str(result_37,self);
    struct buffer* __result__ = result_37;
    call_finalizer(buffer_finalize,result_37,0, 0, 1);
    return __result__;
}
static inline char* xsprintf(char* msg, ...){
va_list args_38;
char* result_39;
int len_40;
void* right_value14;
char* result2_41;
memset(&args_38, 0, sizeof(va_list));
memset(&result_39, 0, sizeof(char*));
memset(&len_40, 0, sizeof(int));
memset(&result2_41, 0, sizeof(char*));
    __builtin_va_start(args_38,msg);
    len_40=vasprintf(&result_39,msg,args_38);
    __builtin_va_end(args_38);
    if(len_40<0) {
        fprintf(stderr,"vasprintf can't get heap memory.(msg %s)\n",msg);
        exit(2);
    }
    result2_41=(char*)come_increment_ref_count((char*)(right_value14=__builtin_string(result_39)));
    right_value14 = come_decrement_ref_count(right_value14, 1, 0);
    free(result_39);
    char* __result__ = result2_41;
    call_finalizer(va_list_finalize,(&args_38),1, 0, 0);
    result2_41 = come_decrement_ref_count(result2_41, 0, 1);
    return __result__;
}
inline struct list$$1char$ph* FILE_readlines(struct _IO_FILE* f){
void* right_value15;
    struct list$$1char$ph* __result__ = (struct list$$1char$ph*)(right_value15=FILE_readlines(f));
    return __result__;
}
static inline void FILE_fclose(struct _IO_FILE* f){
    FILE_fclose(f);
}
static inline char* FILE_read(struct _IO_FILE* f){
void* right_value22;
void* right_value23;
struct buffer* buf_51;
char buf2_52[8192];
int size_53;
void* right_value24;
memset(&buf_51, 0, sizeof(struct buffer*));
memset(&buf2_52, 0, sizeof(char));
memset(&size_53, 0, sizeof(int));
    buf_51=(struct buffer*)come_increment_ref_count((struct buffer*)(right_value23=buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)(right_value22=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))));
    call_finalizer(buffer_finalize,right_value22,0, 1, 0);
    call_finalizer(buffer_finalize,right_value23,0, 1, 0);
    while(1) {
        size_53=fread(buf2_52,1,8192,f);
        buffer_append(buf_51,buf2_52,size_53);
        if(size_53<8192) {
            break;
        }
    }
    char* __result__ = (char*)(right_value24=buffer_to_string(buf_51));
    call_finalizer(buffer_finalize,buf_51,0, 0, 0);
    return __result__;
}
static inline struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
char msg2_57[1024];
va_list args_58;
memset(&msg2_57, 0, sizeof(char));
memset(&args_58, 0, sizeof(va_list));
    __builtin_va_start(args_58,msg);
    vsnprintf(msg2_57,1024,msg,args_58);
    __builtin_va_end(args_58);
    (void)fprintf(f,"%s",msg2_57);
    struct _IO_FILE* __result__ = f;
    call_finalizer(va_list_finalize,(&args_58),1, 0, 0);
    return __result__;
}
inline char* string_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_61;
void* right_value28;
memset(&f_61, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_61=fopen(file_name,"a");
    }
    else {
        f_61=fopen(file_name,"w");
    }
    FILE_fprintf(f_61,"%s",self);
    FILE_fclose(f_61);
    char* __result__ = (char*)(right_value28=__builtin_string(self));
    call_finalizer(FILE_finalize,(&f_61),1, 0, 0);
    return __result__;
}
inline char* charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_62;
void* right_value29;
memset(&f_62, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_62=fopen(file_name,"a");
    }
    else {
        f_62=fopen(file_name,"w");
    }
    FILE_fprintf(f_62,"%s",self);
    FILE_fclose(f_62);
    char* __result__ = (char*)(right_value29=__builtin_string(self));
    call_finalizer(FILE_finalize,(&f_62),1, 0, 0);
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
int len_63;
void* right_value30;
char* result_64;
int i_65;
memset(&len_63, 0, sizeof(int));
memset(&result_64, 0, sizeof(char*));
memset(&i_65, 0, sizeof(int));
    len_63=strlen(str);
    result_64=(char*)come_increment_ref_count((char**)(right_value30=(char**)come_calloc(1, sizeof(char*)*(1*(len_63+1)))));
    right_value30 = come_decrement_ref_count(right_value30, 1, 0);
    for(
    i_65=0;
    i_65<len_63;
    i_65++
    ){
        result_64[i_65]=str[len_63-i_65-1];
    }
    result_64[len_63]=0;
    char* __result__ = result_64;
    result_64 = come_decrement_ref_count(result_64, 0, 1);
    return __result__;
}
static inline char* charp_reverse(char* str){
int len_66;
void* right_value31;
char* result_67;
int i_68;
memset(&len_66, 0, sizeof(int));
memset(&result_67, 0, sizeof(char*));
memset(&i_68, 0, sizeof(int));
    len_66=strlen(str);
    result_67=(char*)come_increment_ref_count((char**)(right_value31=(char**)come_calloc(1, sizeof(char*)*(1*(len_66+1)))));
    right_value31 = come_decrement_ref_count(right_value31, 1, 0);
    for(
    i_68=0;
    i_68<len_66;
    i_68++
    ){
        result_67[i_68]=str[len_66-i_68-1];
    }
    result_67[len_66]=0;
    char* __result__ = result_67;
    result_67 = come_decrement_ref_count(result_67, 0, 1);
    return __result__;
}
static inline char* charp_substring(char* str, int head, int tail){
void* right_value32;
int len_69;
void* right_value33;
void* right_value34;
void* right_value35;
void* right_value36;
void* right_value37;
char* result_70;
memset(&len_69, 0, sizeof(int));
memset(&result_70, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result__ = (char*)(right_value32=__builtin_string(""));
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
        char* __result__ = (char*)(right_value34=string_reverse((char*)(right_value33=charp_substring(str,tail,head))));
        right_value33 = come_decrement_ref_count(right_value33, 1, 0);
        return __result__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_69) {
        tail=len_69;
    }
    if(head==tail) {
        char* __result__ = (char*)(right_value35=__builtin_string(""));
        return __result__;
    }
    if(tail-head+1<1) {
        char* __result__ = (char*)(right_value36=__builtin_string(""));
        return __result__;
    }
    result_70=(char*)come_increment_ref_count((char**)(right_value37=(char**)come_calloc(1, sizeof(char*)*(1*(tail-head+1)))));
    right_value37 = come_decrement_ref_count(right_value37, 1, 0);
    memcpy(result_70,str+head,tail-head);
    result_70[tail-head]=0;
    char* __result__ = result_70;
    result_70 = come_decrement_ref_count(result_70, 0, 1);
    return __result__;
}
static inline char* string_substring(char* str, int head, int tail){
void* right_value38;
int len_71;
void* right_value39;
void* right_value40;
void* right_value41;
void* right_value42;
void* right_value43;
char* result_72;
memset(&len_71, 0, sizeof(int));
memset(&result_72, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result__ = (char*)(right_value38=__builtin_string(""));
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
        char* __result__ = (char*)(right_value40=string_reverse((char*)(right_value39=charp_substring(str,tail,head))));
        right_value39 = come_decrement_ref_count(right_value39, 1, 0);
        return __result__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_71) {
        tail=len_71;
    }
    if(head==tail) {
        char* __result__ = (char*)(right_value41=__builtin_string(""));
        return __result__;
    }
    if(tail-head+1<1) {
        char* __result__ = (char*)(right_value42=__builtin_string(""));
        return __result__;
    }
    result_72=(char*)come_increment_ref_count((char**)(right_value43=(char**)come_calloc(1, sizeof(char*)*(1*(tail-head+1)))));
    right_value43 = come_decrement_ref_count(right_value43, 1, 0);
    memcpy(result_72,str+head,tail-head);
    result_72[tail-head]=0;
    char* __result__ = result_72;
    result_72 = come_decrement_ref_count(result_72, 0, 1);
    return __result__;
}
static inline char* string_chomp(char* str){
void* right_value44;
char* result_73;
void* right_value45;
memset(&result_73, 0, sizeof(char*));
    result_73=(char*)come_increment_ref_count((char*)(right_value44=__builtin_string(str)));
    right_value44 = come_decrement_ref_count(right_value44, 1, 0);
    if(result_73[string_length(result_73)-1]==10) {
        char* __result__ = (char*)(right_value45=string_substring(result_73,0,-2));
        return __result__;
    }
    char* __result__ = result_73;
    result_73 = come_decrement_ref_count(result_73, 0, 1);
    return __result__;
}
static inline char* charp_chomp(char* str){
void* right_value46;
char* result_74;
void* right_value47;
memset(&result_74, 0, sizeof(char*));
    result_74=(char*)come_increment_ref_count((char*)(right_value46=__builtin_string(str)));
    right_value46 = come_decrement_ref_count(right_value46, 1, 0);
    if(result_74[string_length(result_74)-1]==10) {
        char* __result__ = (char*)(right_value47=string_substring(result_74,0,-2));
        return __result__;
    }
    char* __result__ = result_74;
    result_74 = come_decrement_ref_count(result_74, 0, 1);
    return __result__;
}
static inline char* xbasename(char* path){
char* p_75;
void* right_value48;
void* right_value49;
void* right_value50;
memset(&p_75, 0, sizeof(char*));
    p_75=path+strlen(path);
    while(p_75>=path) {
        if(*p_75==47) {
            break;
        }
        else {
            p_75--;
        }
    }
    if(p_75<path) {
        char* __result__ = (char*)(right_value48=__builtin_string(path));
        return __result__;
    }
    else {
        char* __result__ = (char*)(right_value49=__builtin_string(p_75+1));
        return __result__;
    }
    char* __result__ = (char*)(right_value50=__builtin_string(""));
    return __result__;
}
static inline char* xdirname(char* path){
void* right_value51;
void* right_value52;
    char* __result__ = (char*)(right_value52=__builtin_string(dirname((char*)(right_value51=__builtin_string(path)))));
    right_value51 = come_decrement_ref_count(right_value51, 1, 0);
    return __result__;
}
static inline char* xnoextname(char* path){
void* right_value53;
char* path2_76;
char* p_77;
void* right_value54;
void* right_value55;
void* right_value56;
memset(&path2_76, 0, sizeof(char*));
memset(&p_77, 0, sizeof(char*));
    path2_76=(char*)come_increment_ref_count((char*)(right_value53=xbasename(path)));
    right_value53 = come_decrement_ref_count(right_value53, 1, 0);
    p_77=path2_76+strlen(path2_76);
    while(p_77>=path2_76) {
        if(*p_77==46) {
            break;
        }
        else {
            p_77--;
        }
    }
    if(p_77<path2_76) {
        char* __result__ = (char*)(right_value54=__builtin_string(path2_76));
        return __result__;
    }
    else {
        char* __result__ = (char*)(right_value55=string_substring(path2_76,0,p_77-path2_76));
        return __result__;
    }
    char* __result__ = (char*)(right_value56=__builtin_string(""));
    path2_76 = come_decrement_ref_count(path2_76, 0, 0);
    return __result__;
}
static inline char* xextname(char* path){
char* p_78;
void* right_value57;
void* right_value58;
void* right_value59;
memset(&p_78, 0, sizeof(char*));
    p_78=path+strlen(path);
    while(p_78>=path) {
        if(*p_78==46) {
            break;
        }
        else {
            p_78--;
        }
    }
    if(p_78<path) {
        char* __result__ = (char*)(right_value57=__builtin_string(path));
        return __result__;
    }
    else {
        char* __result__ = (char*)(right_value58=__builtin_string(p_78+1));
        return __result__;
    }
    char* __result__ = (char*)(right_value59=__builtin_string(""));
    return __result__;
}
static inline char* xrealpath(char* path){
char* result_79;
void* right_value60;
char* result2_80;
memset(&result_79, 0, sizeof(char*));
memset(&result2_80, 0, sizeof(char*));
    result_79=realpath(path,((void*)0));
    result2_80=(char*)come_increment_ref_count((char*)(right_value60=__builtin_string(result_79)));
    right_value60 = come_decrement_ref_count(right_value60, 1, 0);
    free(result_79);
    char* __result__ = result2_80;
    result2_80 = come_decrement_ref_count(result2_80, 0, 1);
    return __result__;
}
static inline _Bool xiswalpha(unsigned int c){
_Bool result_81;
memset(&result_81, 0, sizeof(_Bool));
    result_81=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result__ = result_81;
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
_Bool result_82;
memset(&result_82, 0, sizeof(_Bool));
    result_82=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result__ = result_82;
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
_Bool result_83;
memset(&result_83, 0, sizeof(_Bool));
    result_83=(c>=32&&c<=126);
    _Bool __result__ = result_83;
    return __result__;
}
static inline _Bool xiswascii(unsigned int c){
_Bool result_84;
memset(&result_84, 0, sizeof(_Bool));
    result_84=(c>=32&&c<=126);
    _Bool __result__ = result_84;
    return __result__;
}
static inline char* string_read(char* file_name){
struct _IO_FILE* f_85;
void* right_value61;
void* right_value62;
char* result_86;
memset(&f_85, 0, sizeof(struct _IO_FILE*));
memset(&result_86, 0, sizeof(char*));
    f_85=fopen(file_name,"r");
    if(f_85==((void*)0)) {
        char* __result__ = (char*)(right_value61=__builtin_string(""));
        return __result__;
    }
    result_86=(char*)come_increment_ref_count((char*)(right_value62=FILE_read(f_85)));
    right_value62 = come_decrement_ref_count(right_value62, 1, 0);
    FILE_fclose(f_85);
    char* __result__ = result_86;
    result_86 = come_decrement_ref_count(result_86, 0, 1);
    return __result__;
}
static inline char* charp_read(char* file_name){
struct _IO_FILE* f_87;
void* right_value63;
void* right_value64;
char* result_88;
memset(&f_87, 0, sizeof(struct _IO_FILE*));
memset(&result_88, 0, sizeof(char*));
    f_87=fopen(file_name,"r");
    if(f_87==((void*)0)) {
        char* __result__ = (char*)(right_value63=__builtin_string(""));
        return __result__;
    }
    result_88=(char*)come_increment_ref_count((char*)(right_value64=FILE_read(f_87)));
    right_value64 = come_decrement_ref_count(right_value64, 1, 0);
    FILE_fclose(f_87);
    char* __result__ = result_88;
    result_88 = come_decrement_ref_count(result_88, 0, 1);
    return __result__;
}
static inline void bool_expect(_Bool self, void* parent, void (*block)(void*)){
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



static struct list$ph$1char$ph* list$$1char$phphcharph_initialize(struct list$ph$1char$ph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$ph$1char$ph* __result__ = self;
        call_finalizer(list$ph$1char$phphcharph_finalize,self,0, 0, 1);
        return __result__;
}

static void list$ph$1char$phphcharph_finalize(struct list$p$1char$ph* self){
struct list_item$$1char$ph* it_42;
struct list_item$$1char$ph* prev_it_43;
memset(&it_42, 0, sizeof(struct list_item$$1char$ph*));
memset(&prev_it_43, 0, sizeof(struct list_item$$1char$ph*));
            it_42=self->head;
            while(it_42!=((void*)0)) {
                if(1) {
                    it_42->item = come_decrement_ref_count(it_42->item, 0, 0);
                }
                prev_it_43=it_42;
                it_42=it_42->next;
                come_free_object(prev_it_43);
            }
}

static void list$$1char$phphcharph_finalize(struct list$p$1char$ph* self){
struct list_item$$1char$ph$$1char$ph* it_45;
struct list_item$$1char$ph$$1char$ph* prev_it_46;
memset(&it_45, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&prev_it_46, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
        it_45=self->head;
        while(it_45!=((void*)0)) {
            if(1) {
                it_45->item = come_decrement_ref_count(it_45->item, 0, 0);
            }
            prev_it_46=it_45;
            it_45=it_45->next;
            come_free_object(prev_it_46);
        }
}

static void list$$1char$phphcharph_push_back(struct list$p$1char$ph* self, char* item){
void* right_value18;
struct list_item$$1char$ph$$1char$ph* litem_48;
void* right_value19;
struct list_item$$1char$ph$$1char$ph* litem_49;
void* right_value20;
struct list_item$$1char$ph$$1char$ph* litem_50;
memset(&litem_48, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_49, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_50, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
            if(self->len==0) {
                litem_48=(struct list_item$$1char$ph$$1char$ph*)(right_value18=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
                litem_48->prev=((void*)0);
                litem_48->next=((void*)0);
                if(litem_48->item) {(char*)come_decrement_ref_count(litem_48->item,0,0); }
                litem_48->item=(char*)come_increment_ref_count(item);
                self->tail=litem_48;
                self->head=litem_48;
            }
            else if(self->len==1) {
                litem_49=(struct list_item$$1char$ph$$1char$ph*)(right_value19=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
                litem_49->prev=self->head;
                litem_49->next=((void*)0);
                if(litem_49->item) {(char*)come_decrement_ref_count(litem_49->item,0,0); }
                litem_49->item=(char*)come_increment_ref_count(item);
                self->tail=litem_49;
                self->head->next=litem_49;
            }
            else {
                litem_50=(struct list_item$$1char$ph$$1char$ph*)(right_value20=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
                litem_50->prev=self->tail;
                litem_50->next=((void*)0);
                if(litem_50->item) {(char*)come_decrement_ref_count(litem_50->item,0,0); }
                litem_50->item=(char*)come_increment_ref_count(item);
                self->tail->next=litem_50;
                self->tail=litem_50;
            }
            self->len++;
            item = come_decrement_ref_count(item, 0, 1);
}




static void FILE_finalize(struct _IO_FILE* self){
}




























int* funHeap(int x, int y){
void* right_value65;
int* result_89;
memset(&result_89, 0, sizeof(int*));
    result_89=(int*)come_increment_ref_count((int*)(right_value65=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value65 = come_decrement_ref_count(right_value65, 1, 0);
    *result_89=x+y;
    int* __result__ = result_89;
    result_89 = come_decrement_ref_count(result_89, 0, 1);
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

struct tuple2$ph$2int$bool$* fun_exception(int x, int y){
void* right_value66;
void* right_value67;
struct tuple2$ph$2int$bool$* __tuple_value1___90;
memset(&__tuple_value1___90, 0, sizeof(struct tuple2$ph$2int$bool$*));
    __tuple_value1___90=(struct tuple2$ph$2int$bool$*)come_increment_ref_count((struct tuple2$ph$2int$bool$*)(right_value67=tuple2$$2int$bool$phintbool_initialize((struct tuple2$$2int$bool$*)come_increment_ref_count((struct tuple2$$2int$bool$*)(right_value66=(struct tuple2$$2int$bool$*)come_calloc(1, sizeof(struct tuple2$$2int$bool$)*(1)))),x+y,(_Bool)1)));
    call_finalizer(tuple2$$2int$bool$phintbool_finalize,right_value66,0, 1, 0);
    call_finalizer(tuple2$ph$2int$bool$phintbool_finalize,right_value67,0, 1, 0);
    struct tuple2$ph$2int$bool$* __result__ = __tuple_value1___90;
    call_finalizer(tuple2$ph$2int$bool$phintbool_finalize,__tuple_value1___90,0, 0, 1);
    return __result__;
}

static struct tuple2$ph$2int$bool$* tuple2$$2int$bool$phintbool_initialize(struct tuple2$ph$2int$bool$* self, int v1, _Bool v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$ph$2int$bool$* __result__ = self;
        call_finalizer(tuple2$ph$2int$bool$phintbool_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple2$ph$2int$bool$phintbool_finalize(struct tuple2$ph$2int$bool$* self){
}

static void tuple2$$2int$bool$phintbool_finalize(struct tuple2$$2int$bool$* self){
}

int main(){
void* right_value68;
char* a_91;
char* p_92;
void* p2_93;
int count_94;
int size2_95;
char* mem2_96;
int b_97;
int* a_98;
int a2_99;
int b_100;
int n_101;
void* right_value69;
char* ax_102;
void* right_value70;
char* a_103;
char* b_104;
struct sData data_105;
void* right_value71;
char* str_106;
void* right_value72;
struct sData* data_107;
void* right_value73;
void* right_value74;
void* right_value75;
int* axyz_108;
void* right_value76;
int* xxx_109;
void* right_value77;
int* yyy_110;
void* right_value78;
int* zzz_111;
void* right_value79;
int bzyz_112;
int* azyz_113;
int n_114;
struct __current_stack1__ __current_stack1__;
void* right_value80;
void* right_value81;
struct list$$1char$ph* liX_115;
void* right_value82;
void* right_value83;
void* right_value84;
char* it_117;
void* right_value85;
void* right_value86;
struct list$$1int$* liX2_121;
int it_128;
int aX_130;
struct __current_stack2__ __current_stack2__;
int aXYZY_134;
void* right_value90;
void* right_value91;
struct list$$1char$ph* li_135;
void* right_value92;
void* right_value93;
void* right_value94;
char* it_136;
void* right_value95;
void* right_value96;
struct list$$1int$* li2_137;
int it_138;
int aXL_139;
struct __current_stack3__ __current_stack3__;
void* right_value109;
void* right_value110;
void* right_value111;
struct list$ph$1char$ph* li3_176;
void* right_value115;
void* right_value116;
void* right_value117;
void* right_value118;
void* right_value119;
void* right_value120;
struct list$ph$1int$* li4_184;
void* right_value124;
void* right_value125;
struct list$ph$1int$* li5_188;
void* right_value126;
void* right_value127;
struct list$ph$1int$* li6_193;
void* right_value133;
int* axyzX_204;
void* right_value134;
void* right_value135;
void* right_value136;
void* right_value137;
void* right_value138;
char* strXYXY_205;
void* right_value139;
void* right_value140;
struct list$$1int$* liZ_206;
struct __current_stack4__ __current_stack4__;
void* right_value141;
void* right_value142;
struct list$$1int$* liZ2_212;
void* right_value143;
void* right_value144;
struct list$$1int$* __list_value1___215;
void* right_value145;
void* right_value146;
struct list$$1int$* __list_value2___216;
void* right_value147;
void* right_value148;
struct list$$1int$* __list_value3___217;
struct __current_stack5__ __current_stack5__;
void* right_value149;
void* right_value150;
struct IA* _inf_value1;
struct sDataA* _inf_obj_value1;
void* right_value152;
struct IA** _inf_valueX1;
struct IA* ia_219;
void* right_value153;
void* right_value154;
struct list$$1IA$ph* liIA_222;
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
struct IA* it_232;
void* right_value170;
void* right_value171;
struct tuple3$ph$3int$int$bool$* __tuple_value2___234;
int aZZZ_235;
int bZZZ_236;
void* right_value172;
struct __current_stack6__ __current_stack6__;
int xZZZZZZZZ_237;
void* right_value173;
void* right_value174;
struct list$$1char$ph* li_str_238;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
struct list$$1char$ph* __list_value4___239;
void* right_value180;
void* right_value181;
void* right_value182;
memset(&a_91, 0, sizeof(char*));
memset(&p_92, 0, sizeof(char*));
memset(&p2_93, 0, sizeof(void*));
memset(&count_94, 0, sizeof(int));
memset(&size2_95, 0, sizeof(int));
memset(&mem2_96, 0, sizeof(char*));
memset(&b_97, 0, sizeof(int));
memset(&a_98, 0, sizeof(int*));
memset(&a2_99, 0, sizeof(int));
memset(&b_100, 0, sizeof(int));
memset(&n_101, 0, sizeof(int));
memset(&ax_102, 0, sizeof(char*));
memset(&a_103, 0, sizeof(char*));
memset(&b_104, 0, sizeof(char*));
memset(&data_105, 0, sizeof(struct sData));
memset(&str_106, 0, sizeof(char*));
memset(&data_107, 0, sizeof(struct sData*));
memset(&axyz_108, 0, sizeof(int*));
memset(&xxx_109, 0, sizeof(int*));
memset(&yyy_110, 0, sizeof(int*));
memset(&zzz_111, 0, sizeof(int*));
memset(&bzyz_112, 0, sizeof(int));
memset(&azyz_113, 0, sizeof(int*));
memset(&n_114, 0, sizeof(int));
memset(&liX_115, 0, sizeof(struct list$$1char$ph*));
memset(&it_117, 0, sizeof(char*));
memset(&liX2_121, 0, sizeof(struct list$$1int$*));
memset(&it_128, 0, sizeof(int));
memset(&aX_130, 0, sizeof(int));
memset(&aXYZY_134, 0, sizeof(int));
memset(&li_135, 0, sizeof(struct list$$1char$ph*));
memset(&it_136, 0, sizeof(char*));
memset(&li2_137, 0, sizeof(struct list$$1int$*));
memset(&it_138, 0, sizeof(int));
memset(&aXL_139, 0, sizeof(int));
memset(&li3_176, 0, sizeof(struct list$ph$1char$ph*));
memset(&li4_184, 0, sizeof(struct list$ph$1int$*));
memset(&li5_188, 0, sizeof(struct list$ph$1int$*));
memset(&li6_193, 0, sizeof(struct list$ph$1int$*));
memset(&axyzX_204, 0, sizeof(int*));
memset(&strXYXY_205, 0, sizeof(char*));
memset(&liZ_206, 0, sizeof(struct list$$1int$*));
memset(&liZ2_212, 0, sizeof(struct list$$1int$*));
memset(&__list_value1___215, 0, sizeof(struct list$$1int$*));
memset(&__list_value2___216, 0, sizeof(struct list$$1int$*));
memset(&__list_value3___217, 0, sizeof(struct list$$1int$*));
memset(&ia_219, 0, sizeof(struct IA*));
memset(&liIA_222, 0, sizeof(struct list$$1IA$ph*));
memset(&it_232, 0, sizeof(struct IA*));
memset(&__tuple_value2___234, 0, sizeof(struct tuple3$ph$3int$int$bool$*));
memset(&aZZZ_235, 0, sizeof(int));
memset(&aZZZ_235, 0, sizeof(int));
memset(&aZZZ_235, 0, sizeof(int));
memset(&bZZZ_236, 0, sizeof(int));
memset(&xZZZZZZZZ_237, 0, sizeof(int));
memset(&li_str_238, 0, sizeof(struct list$$1char$ph*));
memset(&__list_value4___239, 0, sizeof(struct list$$1char$ph*));
    if(1) {
        a_91=(char*)come_increment_ref_count((char**)(right_value68=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
        right_value68 = come_decrement_ref_count(right_value68, 1, 0);
        a_91 = come_decrement_ref_count(a_91, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_92="ABC";
    p2_93="ABC";
    printf("%s\n",(char*)p2_93);
    printf("%c\n",*p_92);
    count_94=0;
    size2_95=1;
    mem2_96=calloc(1,sizeof(int)+sizeof(long)+count_94*size2_95);
    free(mem2_96);
    a_98=&b_97;
    (*a_98)=123;
    a2_99=123;
    if((_Bool)1) {
        b_100=234;
        n_101=0;
        while(n_101<3) {
            printf("a %d\n",a2_99);
            printf("b %d\n",b_100);
            n_101++;
        }
    }
    ax_102=(char*)come_increment_ref_count((char**)(right_value69=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
    right_value69 = come_decrement_ref_count(right_value69, 1, 0);
    if(1) {
        a_103=(char*)come_increment_ref_count((char**)(right_value70=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
        right_value70 = come_decrement_ref_count(right_value70, 1, 0);
        b_104=(char*)come_increment_ref_count(a_103);
        if(data_105.a) {(char*)come_decrement_ref_count(data_105.a,0,0); }
        data_105.a=(char*)come_increment_ref_count(a_103);
        a_103 = come_decrement_ref_count(a_103, 0, 0);
        b_104 = come_decrement_ref_count(b_104, 0, 0);
        call_finalizer(sData_finalize,(&data_105),1, 0, 0);
    }
    str_106=(char*)come_increment_ref_count((char**)(right_value71=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
    right_value71 = come_decrement_ref_count(right_value71, 1, 0);
    strncpy(str_106,"ABC",128);
    data_107=(struct sData*)come_increment_ref_count((struct sData*)(right_value72=(struct sData*)come_calloc(1, sizeof(struct sData)*(1))));
    call_finalizer(sData_finalize,right_value72,0, 1, 0);
    if(data_107->a) {(char*)come_decrement_ref_count(data_107->a,0,0); }
    data_107->a=(char*)come_increment_ref_count(str_106);
    puts(data_107->a);
    (int*)(right_value73=funHeap(7,7));
    right_value73 = come_decrement_ref_count(right_value73, 1, 0);
    xassert("right value test",*(int*)(right_value74=funHeap(3,4))==7);
    right_value74 = come_decrement_ref_count(right_value74, 1, 0);
    axyz_108=(int*)come_increment_ref_count((int*)(right_value75=funHeap(1,2)));
    right_value75 = come_decrement_ref_count(right_value75, 1, 0);
    xassert("variable test",*axyz_108==3);
    xxx_109=(int*)come_increment_ref_count((int*)(right_value76=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value76 = come_decrement_ref_count(right_value76, 1, 0);
    *xxx_109=1;
    yyy_110=(int*)come_increment_ref_count((int*)(right_value77=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value77 = come_decrement_ref_count(right_value77, 1, 0);
    *yyy_110=2;
    xassert("heap",funHeap2((int*)come_increment_ref_count(xxx_109),(int*)come_increment_ref_count(yyy_110))==3);
    zzz_111=(int*)come_increment_ref_count((int*)(right_value78=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value78 = come_decrement_ref_count(right_value78, 1, 0);
    (int*)(right_value79=(int*)come_calloc(1, sizeof(int)*(1)));
    right_value79 = come_decrement_ref_count(right_value79, 1, 0);
    bzyz_112=123;
    azyz_113=&bzyz_112;
    xassert("impl",intp_fun(azyz_113)==123);
    n_114=0;
    __current_stack1__.p_92 = &p_92;
    __current_stack1__.p2_93 = &p2_93;
    __current_stack1__.count_94 = &count_94;
    __current_stack1__.size2_95 = &size2_95;
    __current_stack1__.mem2_96 = &mem2_96;
    __current_stack1__.b_97 = &b_97;
    __current_stack1__.a_98 = &a_98;
    __current_stack1__.a2_99 = &a2_99;
    __current_stack1__.ax_102 = &ax_102;
    __current_stack1__.str_106 = &str_106;
    __current_stack1__.data_107 = &data_107;
    __current_stack1__.axyz_108 = &axyz_108;
    __current_stack1__.xxx_109 = &xxx_109;
    __current_stack1__.yyy_110 = &yyy_110;
    __current_stack1__.zzz_111 = &zzz_111;
    __current_stack1__.bzyz_112 = &bzyz_112;
    __current_stack1__.azyz_113 = &azyz_113;
    __current_stack1__.n_114 = &n_114;
    int_times(3,&__current_stack1__,method_block1);
    liX_115=(struct list$ph$1char$ph*)come_increment_ref_count((struct list$ph$1char$ph*)(right_value81=list$$1char$phphcharph_initialize((struct list$$1char$ph*)come_increment_ref_count((struct list$$1char$ph*)(right_value80=(struct list$$1char$ph*)come_calloc(1, sizeof(struct list$$1char$ph)*(1)))))));
    call_finalizer(list$$1char$phphcharph_finalize,right_value80,0, 1, 0);
    call_finalizer(list$ph$1char$phphcharph_finalize,right_value81,0, 1, 0);
    list$$1char$phphcharph_push_back(liX_115,(char*)come_increment_ref_count((char*)(right_value82=__builtin_string("ABC"))));
    right_value82 = come_decrement_ref_count(right_value82, 1, 0);
    list$$1char$phphcharph_push_back(liX_115,(char*)come_increment_ref_count((char*)(right_value83=__builtin_string("DEF"))));
    right_value83 = come_decrement_ref_count(right_value83, 1, 0);
    list$$1char$phphcharph_push_back(liX_115,(char*)come_increment_ref_count((char*)(right_value84=__builtin_string("GHI"))));
    right_value84 = come_decrement_ref_count(right_value84, 1, 0);
    for(
    it_117=list$$1char$phphcharph_begin((liX_115));
    !list$$1char$phphcharph_end((liX_115));
    it_117=list$$1char$phphcharph_next((liX_115))
    ){
        printf("%s\n",it_117);
    }
    liX2_121=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value86=list$$1int$phint_initialize((struct list$$1int$*)come_increment_ref_count((struct list$$1int$*)(right_value85=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))));
    call_finalizer(list$$1int$phint_finalize,right_value85,0, 1, 0);
    call_finalizer(list$ph$1int$phint_finalize,right_value86,0, 1, 0);
    list$$1int$phint_push_back(liX2_121,1);
    list$$1int$phint_push_back(liX2_121,2);
    list$$1int$phint_push_back(liX2_121,3);
    for(
    it_128=list$$1int$phint_begin((liX2_121));
    !list$$1int$phint_end((liX2_121));
    it_128=list$$1int$phint_next((liX2_121))
    ){
        printf("%d\n",it_128);
    }
    aX_130=123;
    __current_stack2__.p_92 = &p_92;
    __current_stack2__.p2_93 = &p2_93;
    __current_stack2__.count_94 = &count_94;
    __current_stack2__.size2_95 = &size2_95;
    __current_stack2__.mem2_96 = &mem2_96;
    __current_stack2__.b_97 = &b_97;
    __current_stack2__.a_98 = &a_98;
    __current_stack2__.a2_99 = &a2_99;
    __current_stack2__.ax_102 = &ax_102;
    __current_stack2__.str_106 = &str_106;
    __current_stack2__.data_107 = &data_107;
    __current_stack2__.axyz_108 = &axyz_108;
    __current_stack2__.xxx_109 = &xxx_109;
    __current_stack2__.yyy_110 = &yyy_110;
    __current_stack2__.zzz_111 = &zzz_111;
    __current_stack2__.bzyz_112 = &bzyz_112;
    __current_stack2__.azyz_113 = &azyz_113;
    __current_stack2__.n_114 = &n_114;
    __current_stack2__.liX_115 = &liX_115;
    __current_stack2__.liX2_121 = &liX2_121;
    __current_stack2__.aX_130 = &aX_130;
    list$$1int$phint_each(liX2_121,&__current_stack2__,method_block2);
    xassert("method_block test",aX_130==2);
    xassert("var initialize test",aXYZY_134==0);
    li_135=(struct list$ph$1char$ph*)come_increment_ref_count((struct list$ph$1char$ph*)(right_value91=list$$1char$phphcharph_initialize((struct list$$1char$ph*)come_increment_ref_count((struct list$$1char$ph*)(right_value90=(struct list$$1char$ph*)come_calloc(1, sizeof(struct list$$1char$ph)*(1)))))));
    call_finalizer(list$$1char$phphcharph_finalize,right_value90,0, 1, 0);
    call_finalizer(list$ph$1char$phphcharph_finalize,right_value91,0, 1, 0);
    list$$1char$phphcharph_push_back(li_135,(char*)come_increment_ref_count((char*)(right_value92=__builtin_string("ABC"))));
    right_value92 = come_decrement_ref_count(right_value92, 1, 0);
    list$$1char$phphcharph_push_back(li_135,(char*)come_increment_ref_count((char*)(right_value93=__builtin_string("DEF"))));
    right_value93 = come_decrement_ref_count(right_value93, 1, 0);
    list$$1char$phphcharph_push_back(li_135,(char*)come_increment_ref_count((char*)(right_value94=__builtin_string("GHI"))));
    right_value94 = come_decrement_ref_count(right_value94, 1, 0);
    for(
    it_136=list$$1char$phphcharph_begin((li_135));
    !list$$1char$phphcharph_end((li_135));
    it_136=list$$1char$phphcharph_next((li_135))
    ){
        printf("%s\n",it_136);
    }
    li2_137=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value96=list$$1int$phint_initialize((struct list$$1int$*)come_increment_ref_count((struct list$$1int$*)(right_value95=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))));
    call_finalizer(list$$1int$phint_finalize,right_value95,0, 1, 0);
    call_finalizer(list$ph$1int$phint_finalize,right_value96,0, 1, 0);
    list$$1int$phint_push_back(li2_137,1);
    list$$1int$phint_push_back(li2_137,2);
    list$$1int$phint_push_back(li2_137,3);
    for(
    it_138=list$$1int$phint_begin((li2_137));
    !list$$1int$phint_end((li2_137));
    it_138=list$$1int$phint_next((li2_137))
    ){
        printf("%d\n",it_138);
    }
    aXL_139=123;
    __current_stack3__.p_92 = &p_92;
    __current_stack3__.p2_93 = &p2_93;
    __current_stack3__.count_94 = &count_94;
    __current_stack3__.size2_95 = &size2_95;
    __current_stack3__.mem2_96 = &mem2_96;
    __current_stack3__.b_97 = &b_97;
    __current_stack3__.a_98 = &a_98;
    __current_stack3__.a2_99 = &a2_99;
    __current_stack3__.ax_102 = &ax_102;
    __current_stack3__.str_106 = &str_106;
    __current_stack3__.data_107 = &data_107;
    __current_stack3__.axyz_108 = &axyz_108;
    __current_stack3__.xxx_109 = &xxx_109;
    __current_stack3__.yyy_110 = &yyy_110;
    __current_stack3__.zzz_111 = &zzz_111;
    __current_stack3__.bzyz_112 = &bzyz_112;
    __current_stack3__.azyz_113 = &azyz_113;
    __current_stack3__.n_114 = &n_114;
    __current_stack3__.liX_115 = &liX_115;
    __current_stack3__.liX2_121 = &liX2_121;
    __current_stack3__.aX_130 = &aX_130;
    __current_stack3__.aXYZY_134 = &aXYZY_134;
    __current_stack3__.li_135 = &li_135;
    __current_stack3__.li2_137 = &li2_137;
    __current_stack3__.aXL_139 = &aXL_139;
    list$$1int$phint_each(li2_137,&__current_stack3__,method_block3);
    xassert("var of method block",aXL_139==2);
    xassert("list::item",list$$1int$phint_item(li2_137,0,-1)==1);
    list$$1int$phint_insert(li2_137,1,5);
    xassert("list::insert",list$$1int$phint_item(li2_137,0,-1)==1&&list$$1int$phint_item(li2_137,1,-1)==5&&list$$1int$phint_item(li2_137,2,-1)==2&&list$$1int$phint_item(li2_137,3,-1)==3);
    list$$1char$phphcharph_insert(li_135,1,(char*)come_increment_ref_count((char*)(right_value109=__builtin_string("GGG"))));
    right_value109 = come_decrement_ref_count(right_value109, 1, 0);
    xassert("list::insert",strcmp(list$$1char$phphcharph_item(li_135,0,-1),"ABC")==0&&strcmp(list$$1char$phphcharph_item(li_135,1,-1),"GGG")==0&&strcmp(list$$1char$phphcharph_item(li_135,2,-1),"DEF")==0&&strcmp(list$$1char$phphcharph_item(li_135,3,-1),"GHI")==0);
    list$$1char$phphcharph_reset(li_135);
    xassert("list::reset",list$$1char$phphcharph_length(li_135)==0);
    list$$1int$phint_delete(li2_137,0,1);
    xassert("list::delete",list$$1int$phint_item(li2_137,0,-1)==5&&list$$1int$phint_item(li2_137,1,-1)==2&&list$$1int$phint_item(li2_137,2,-1)==3);
    li3_176=(struct list$ph$1char$ph*)come_increment_ref_count((struct list$ph$1char$ph*)(right_value111=list$$1char$phphcharph_initialize((struct list$$1char$ph*)come_increment_ref_count((struct list$$1char$ph*)(right_value110=(struct list$$1char$ph*)come_calloc(1, sizeof(struct list$$1char$ph)*(1)))))));
    call_finalizer(list$$1char$phphcharph_finalize,right_value110,0, 1, 0);
    call_finalizer(list$ph$1char$phphcharph_finalize,right_value111,0, 1, 0);
    list$ph$1char$phphcharph_push_back(li3_176,(char*)come_increment_ref_count((char*)(right_value115=__builtin_string("AAA"))));
    right_value115 = come_decrement_ref_count(right_value115, 1, 0);
    list$ph$1char$phphcharph_push_back(li3_176,(char*)come_increment_ref_count((char*)(right_value116=__builtin_string("BBB"))));
    right_value116 = come_decrement_ref_count(right_value116, 1, 0);
    list$ph$1char$phphcharph_push_back(li3_176,(char*)come_increment_ref_count((char*)(right_value117=__builtin_string("CCC"))));
    right_value117 = come_decrement_ref_count(right_value117, 1, 0);
    list$ph$1char$phphcharph_replace(li3_176,0,(char*)come_increment_ref_count((char*)(right_value118=__builtin_string("ABC"))));
    right_value118 = come_decrement_ref_count(right_value118, 1, 0);
    xassert("list::replace",strcmp(list$ph$1char$phphcharph_item(li3_176,0,((void*)0)),"ABC")==0&&strcmp(list$ph$1char$phphcharph_item(li3_176,1,((void*)0)),"BBB")==0&&strcmp(list$ph$1char$phphcharph_item(li3_176,2,((void*)0)),"CCC")==0);
    li4_184=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value120=list$$1int$phint_initialize((struct list$$1int$*)come_increment_ref_count((struct list$$1int$*)(right_value119=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))));
    call_finalizer(list$$1int$phint_finalize,right_value119,0, 1, 0);
    call_finalizer(list$ph$1int$phint_finalize,right_value120,0, 1, 0);
    list$ph$1int$phint_push_back(li4_184,1);
    list$ph$1int$phint_push_back(li4_184,3);
    list$ph$1int$phint_push_back(li4_184,5);
    li5_188=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value125=list$$1int$phint_initialize((struct list$$1int$*)come_increment_ref_count((struct list$$1int$*)(right_value124=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))));
    call_finalizer(list$$1int$phint_finalize,right_value124,0, 1, 0);
    call_finalizer(list$ph$1int$phint_finalize,right_value125,0, 1, 0);
    list$ph$1int$phint_push_back(li5_188,1);
    list$ph$1int$phint_push_back(li5_188,3);
    list$ph$1int$phint_push_back(li5_188,5);
    xassert("list::equals",list$ph$1int$phint_equals(li4_184,li5_188));
    xassert("list::find",list$ph$1int$phint_find(li4_184,5,-1)==2);
    li6_193=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value127=list$$1int$phint_initialize((struct list$$1int$*)come_increment_ref_count((struct list$$1int$*)(right_value126=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))));
    call_finalizer(list$$1int$phint_finalize,right_value126,0, 1, 0);
    call_finalizer(list$ph$1int$phint_finalize,right_value127,0, 1, 0);
    list$ph$1int$phint_push_back(li6_193,3);
    list$ph$1int$phint_push_back(li6_193,5);
    xassert("list::sublist",list$ph$1int$phint_equals((struct list$ph$1int$*)(right_value133=list$ph$1int$phint_sublist(li5_188,1,-1)),li6_193));
    call_finalizer(list$ph$1int$phint_finalize,right_value133,0, 1, 0);
    if(axyzX_204) {(int*)come_decrement_ref_count(axyzX_204,0,0); }
    axyzX_204=(int*)come_increment_ref_count((int*)(right_value134=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value134 = come_decrement_ref_count(right_value134, 1, 0);
    if(axyzX_204) {(int*)come_decrement_ref_count(axyzX_204,0,0); }
    axyzX_204=(int*)come_increment_ref_count((int*)(right_value135=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value135 = come_decrement_ref_count(right_value135, 1, 0);
    xassert("operator equals",string_operator_equals((char*)(right_value136=__builtin_string("AAA")),(char*)(right_value137=__builtin_string("AAA"))));
    right_value136 = come_decrement_ref_count(right_value136, 1, 0);
    right_value137 = come_decrement_ref_count(right_value137, 1, 0);
    xassert("operator test",string_operator_equals((char*)(right_value138=charp_operator_add("AAA","BBB")),"AAABBB"));
    right_value138 = come_decrement_ref_count(right_value138, 1, 0);
    strXYXY_205="ABC";
    xassert("operator test",*(strXYXY_205+1)==66);
    liZ_206=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value140=list$$1int$phint_initialize((struct list$$1int$*)come_increment_ref_count((struct list$$1int$*)(right_value139=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))));
    call_finalizer(list$$1int$phint_finalize,right_value139,0, 1, 0);
    call_finalizer(list$ph$1int$phint_finalize,right_value140,0, 1, 0);
    list$$1int$phint_push_back(liZ_206,1);
    list$$1int$phint_push_back(liZ_206,2);
    list$$1int$phint_push_back(liZ_206,3);
    __current_stack4__.p_92 = &p_92;
    __current_stack4__.p2_93 = &p2_93;
    __current_stack4__.count_94 = &count_94;
    __current_stack4__.size2_95 = &size2_95;
    __current_stack4__.mem2_96 = &mem2_96;
    __current_stack4__.b_97 = &b_97;
    __current_stack4__.a_98 = &a_98;
    __current_stack4__.a2_99 = &a2_99;
    __current_stack4__.ax_102 = &ax_102;
    __current_stack4__.str_106 = &str_106;
    __current_stack4__.data_107 = &data_107;
    __current_stack4__.axyz_108 = &axyz_108;
    __current_stack4__.xxx_109 = &xxx_109;
    __current_stack4__.yyy_110 = &yyy_110;
    __current_stack4__.zzz_111 = &zzz_111;
    __current_stack4__.bzyz_112 = &bzyz_112;
    __current_stack4__.azyz_113 = &azyz_113;
    __current_stack4__.n_114 = &n_114;
    __current_stack4__.liX_115 = &liX_115;
    __current_stack4__.liX2_121 = &liX2_121;
    __current_stack4__.aX_130 = &aX_130;
    __current_stack4__.aXYZY_134 = &aXYZY_134;
    __current_stack4__.li_135 = &li_135;
    __current_stack4__.li2_137 = &li2_137;
    __current_stack4__.aXL_139 = &aXL_139;
    __current_stack4__.li3_176 = &li3_176;
    __current_stack4__.li4_184 = &li4_184;
    __current_stack4__.li5_188 = &li5_188;
    __current_stack4__.li6_193 = &li6_193;
    __current_stack4__.axyzX_204 = &axyzX_204;
    __current_stack4__.strXYXY_205 = &strXYXY_205;
    __current_stack4__.liZ_206 = &liZ_206;
    list$$1int$phint_each(liZ_206,&__current_stack4__,method_block4);
    list$$1int$phint_operator_store_element(liZ_206,0,777);
    printf("liZ[0] %d\n",list$$1int$phint_operator_load_element(liZ_206,0));
    liZ2_212=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value142=list$$1int$phint_initialize((struct list$$1int$*)come_increment_ref_count((struct list$$1int$*)(right_value141=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))));
    call_finalizer(list$$1int$phint_finalize,right_value141,0, 1, 0);
    call_finalizer(list$ph$1int$phint_finalize,right_value142,0, 1, 0);
    list$$1int$phint_push_back(liZ2_212,777);
    list$$1int$phint_push_back(liZ2_212,2);
    list$$1int$phint_push_back(liZ2_212,3);
    xassert("list equals",list$$1int$phint_operator_equals(liZ_206,liZ2_212));
    __list_value1___215=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value144=list$$1int$phint_initialize((struct list$$1int$*)come_increment_ref_count((struct list$$1int$*)(right_value143=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))));
    call_finalizer(list$$1int$phint_finalize,right_value143,0, 1, 0);
    call_finalizer(list$ph$1int$phint_finalize,right_value144,0, 1, 0);
    list$$1int$phint_push_back(__list_value1___215,1);
    list$$1int$phint_push_back(__list_value1___215,2);
    list$$1int$phint_push_back(__list_value1___215,3);
    __list_value2___216=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value146=list$$1int$phint_initialize((struct list$$1int$*)come_increment_ref_count((struct list$$1int$*)(right_value145=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))));
    call_finalizer(list$$1int$phint_finalize,right_value145,0, 1, 0);
    call_finalizer(list$ph$1int$phint_finalize,right_value146,0, 1, 0);
    list$$1int$phint_push_back(__list_value2___216,1);
    list$$1int$phint_push_back(__list_value2___216,2);
    list$$1int$phint_push_back(__list_value2___216,3);
    xassert("list equals test",list$$1int$phint_operator_equals(__list_value1___215,__list_value2___216));
    __list_value3___217=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value148=list$$1int$phint_initialize((struct list$$1int$*)come_increment_ref_count((struct list$$1int$*)(right_value147=(struct list$$1int$*)come_calloc(1, sizeof(struct list$$1int$)*(1)))))));
    call_finalizer(list$$1int$phint_finalize,right_value147,0, 1, 0);
    call_finalizer(list$ph$1int$phint_finalize,right_value148,0, 1, 0);
    list$$1int$phint_push_back(__list_value3___217,1);
    list$$1int$phint_push_back(__list_value3___217,2);
    list$$1int$phint_push_back(__list_value3___217,3);
    list$$1int$phint_push_back(__list_value3___217,4);
    list$$1int$phint_push_back(__list_value3___217,5);
    __current_stack5__.p_92 = &p_92;
    __current_stack5__.p2_93 = &p2_93;
    __current_stack5__.count_94 = &count_94;
    __current_stack5__.size2_95 = &size2_95;
    __current_stack5__.mem2_96 = &mem2_96;
    __current_stack5__.b_97 = &b_97;
    __current_stack5__.a_98 = &a_98;
    __current_stack5__.a2_99 = &a2_99;
    __current_stack5__.ax_102 = &ax_102;
    __current_stack5__.str_106 = &str_106;
    __current_stack5__.data_107 = &data_107;
    __current_stack5__.axyz_108 = &axyz_108;
    __current_stack5__.xxx_109 = &xxx_109;
    __current_stack5__.yyy_110 = &yyy_110;
    __current_stack5__.zzz_111 = &zzz_111;
    __current_stack5__.bzyz_112 = &bzyz_112;
    __current_stack5__.azyz_113 = &azyz_113;
    __current_stack5__.n_114 = &n_114;
    __current_stack5__.liX_115 = &liX_115;
    __current_stack5__.liX2_121 = &liX2_121;
    __current_stack5__.aX_130 = &aX_130;
    __current_stack5__.aXYZY_134 = &aXYZY_134;
    __current_stack5__.li_135 = &li_135;
    __current_stack5__.li2_137 = &li2_137;
    __current_stack5__.aXL_139 = &aXL_139;
    __current_stack5__.li3_176 = &li3_176;
    __current_stack5__.li4_184 = &li4_184;
    __current_stack5__.li5_188 = &li5_188;
    __current_stack5__.li6_193 = &li6_193;
    __current_stack5__.axyzX_204 = &axyzX_204;
    __current_stack5__.strXYXY_205 = &strXYXY_205;
    __current_stack5__.liZ_206 = &liZ_206;
    __current_stack5__.liZ2_212 = &liZ2_212;
    __current_stack5__.__list_value1___215 = &__list_value1___215;
    __current_stack5__.__list_value2___216 = &__list_value2___216;
    __current_stack5__.__list_value3___217 = &__list_value3___217;
    list$$1int$phint_each(__list_value3___217,&__current_stack5__,method_block5);
    _inf_value1=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value1=(struct sDataA*)(right_value150=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value149=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1)))),111,222));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sDataA_finalize;
    _inf_value1->clone=sDataA_clone;
    _inf_value1->fun=sDataA_fun;
    _inf_valueX1=(struct IA*)come_increment_ref_count((struct IA*)(right_value152=_inf_value1));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value152=_inf_value1))->_protocol_obj);
    ia_219=_inf_valueX1;
    call_finalizer(sDataA_finalize,right_value149,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value150,0, 1, 0);
    call_finalizer(((struct IA*)right_value152)->finalize, ((struct IA*)right_value152)->_protocol_obj,0, 1, 0);
    right_value152 = come_decrement_ref_count(right_value152, 1, 0);
    printf("%d\n",ia_219->fun(ia_219->_protocol_obj,0,0));
    liIA_222=(struct list$ph$1IA$ph*)come_increment_ref_count((struct list$ph$1IA$ph*)(right_value154=list$$1IA$phphIAph_initialize((struct list$$1IA$ph*)come_increment_ref_count((struct list$$1IA$ph*)(right_value153=(struct list$$1IA$ph*)come_calloc(1, sizeof(struct list$$1IA$ph)*(1)))))));
    call_finalizer(list$$1IA$phphIAph_finalize,right_value153,0, 1, 0);
    call_finalizer(list$ph$1IA$phphIAph_finalize,right_value154,0, 1, 0);
    _inf_value2=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value2=(struct sDataA*)(right_value159=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value158=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1)))),1,1));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=sDataA_finalize;
    _inf_value2->clone=sDataA_clone;
    _inf_value2->fun=sDataA_fun;
    _inf_valueX5=(struct IA*)come_increment_ref_count((struct IA*)(right_value161=_inf_value2));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value161=_inf_value2))->_protocol_obj);
    list$$1IA$phphIAph_push_back(liIA_222,_inf_valueX5);
    call_finalizer(sDataA_finalize,right_value158,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value159,0, 1, 0);
    call_finalizer(((struct IA*)right_value161)->finalize, ((struct IA*)right_value161)->_protocol_obj,0, 1, 0);
    right_value161 = come_decrement_ref_count(right_value161, 1, 0);
    _inf_value3=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value3=(struct sDataA*)(right_value163=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value162=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1)))),2,2));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=sDataA_finalize;
    _inf_value3->clone=sDataA_clone;
    _inf_value3->fun=sDataA_fun;
    _inf_valueX6=(struct IA*)come_increment_ref_count((struct IA*)(right_value165=_inf_value3));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value165=_inf_value3))->_protocol_obj);
    list$$1IA$phphIAph_push_back(liIA_222,_inf_valueX6);
    call_finalizer(sDataA_finalize,right_value162,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value163,0, 1, 0);
    call_finalizer(((struct IA*)right_value165)->finalize, ((struct IA*)right_value165)->_protocol_obj,0, 1, 0);
    right_value165 = come_decrement_ref_count(right_value165, 1, 0);
    _inf_value4=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value4=(struct sDataA*)(right_value167=sDataA_initialize((struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value166=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1)))),3,3));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=sDataA_finalize;
    _inf_value4->clone=sDataA_clone;
    _inf_value4->fun=sDataA_fun;
    _inf_valueX7=(struct IA*)come_increment_ref_count((struct IA*)(right_value169=_inf_value4));
    come_increment_ref_count(((struct IA*)(struct IA*)(right_value169=_inf_value4))->_protocol_obj);
    list$$1IA$phphIAph_push_back(liIA_222,_inf_valueX7);
    call_finalizer(sDataA_finalize,right_value166,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value167,0, 1, 0);
    call_finalizer(((struct IA*)right_value169)->finalize, ((struct IA*)right_value169)->_protocol_obj,0, 1, 0);
    right_value169 = come_decrement_ref_count(right_value169, 1, 0);
    for(
    it_232=list$$1IA$phphIAph_begin((liIA_222));
    !list$$1IA$phphIAph_end((liIA_222));
    it_232=list$$1IA$phphIAph_next((liIA_222))
    ){
        printf("%d\n",it_232->fun(it_232->_protocol_obj,0,0));
    }
    __tuple_value2___234=(struct tuple3$ph$3int$int$bool$*)come_increment_ref_count((struct tuple3$ph$3int$int$bool$*)(right_value171=tuple3$$3int$int$bool$phintintbool_initialize((struct tuple3$$3int$int$bool$*)come_increment_ref_count((struct tuple3$$3int$int$bool$*)(right_value170=(struct tuple3$$3int$int$bool$*)come_calloc(1, sizeof(struct tuple3$$3int$int$bool$)*(1)))),1,2,(_Bool)0)));
    call_finalizer(tuple3$$3int$int$bool$phintintbool_finalize,right_value170,0, 1, 0);
    call_finalizer(tuple3$ph$3int$int$bool$phintintbool_finalize,right_value171,0, 1, 0);
    aZZZ_235=__tuple_value2___234->v1;
    bZZZ_236=__tuple_value2___234->v2;
    xassert("tuple test",aZZZ_235==1&&bZZZ_236==2);
    fun_default_parametor(1,2);
    __current_stack6__.p_92 = &p_92;
    __current_stack6__.p2_93 = &p2_93;
    __current_stack6__.count_94 = &count_94;
    __current_stack6__.size2_95 = &size2_95;
    __current_stack6__.mem2_96 = &mem2_96;
    __current_stack6__.b_97 = &b_97;
    __current_stack6__.a_98 = &a_98;
    __current_stack6__.a2_99 = &a2_99;
    __current_stack6__.ax_102 = &ax_102;
    __current_stack6__.str_106 = &str_106;
    __current_stack6__.data_107 = &data_107;
    __current_stack6__.axyz_108 = &axyz_108;
    __current_stack6__.xxx_109 = &xxx_109;
    __current_stack6__.yyy_110 = &yyy_110;
    __current_stack6__.zzz_111 = &zzz_111;
    __current_stack6__.bzyz_112 = &bzyz_112;
    __current_stack6__.azyz_113 = &azyz_113;
    __current_stack6__.n_114 = &n_114;
    __current_stack6__.liX_115 = &liX_115;
    __current_stack6__.liX2_121 = &liX2_121;
    __current_stack6__.aX_130 = &aX_130;
    __current_stack6__.aXYZY_134 = &aXYZY_134;
    __current_stack6__.li_135 = &li_135;
    __current_stack6__.li2_137 = &li2_137;
    __current_stack6__.aXL_139 = &aXL_139;
    __current_stack6__.li3_176 = &li3_176;
    __current_stack6__.li4_184 = &li4_184;
    __current_stack6__.li5_188 = &li5_188;
    __current_stack6__.li6_193 = &li6_193;
    __current_stack6__.axyzX_204 = &axyzX_204;
    __current_stack6__.strXYXY_205 = &strXYXY_205;
    __current_stack6__.liZ_206 = &liZ_206;
    __current_stack6__.liZ2_212 = &liZ2_212;
    __current_stack6__.__list_value1___215 = &__list_value1___215;
    __current_stack6__.__list_value2___216 = &__list_value2___216;
    __current_stack6__.__list_value3___217 = &__list_value3___217;
    __current_stack6__.ia_219 = &ia_219;
    __current_stack6__.liIA_222 = &liIA_222;
    __current_stack6__.__tuple_value2___234 = &__tuple_value2___234;
    __current_stack6__.aZZZ_235 = &aZZZ_235;
    __current_stack6__.bZZZ_236 = &bZZZ_236;
    xZZZZZZZZ_237=tuple2$ph$2int$bool$phintbool_catch((struct tuple2$ph$2int$bool$*)(right_value172=fun_exception(1,2)),&__current_stack6__,method_block6);
    call_finalizer(tuple2$ph$2int$bool$phintbool_finalize,right_value172,0, 1, 0);
    xassert("exception test",xZZZZZZZZ_237==3);
    li_str_238=(struct list$ph$1char$ph*)come_increment_ref_count((struct list$ph$1char$ph*)(right_value174=list$$1char$phphcharph_initialize((struct list$$1char$ph*)come_increment_ref_count((struct list$$1char$ph*)(right_value173=(struct list$$1char$ph*)come_calloc(1, sizeof(struct list$$1char$ph)*(1)))))));
    call_finalizer(list$$1char$phphcharph_finalize,right_value173,0, 1, 0);
    call_finalizer(list$ph$1char$phphcharph_finalize,right_value174,0, 1, 0);
    list$$1char$phphcharph_push_back(li_str_238,(char*)come_increment_ref_count((char*)(right_value175=__builtin_string("AAA"))));
    right_value175 = come_decrement_ref_count(right_value175, 1, 0);
    list$$1char$phphcharph_push_back(li_str_238,(char*)come_increment_ref_count((char*)(right_value176=__builtin_string("BBB"))));
    right_value176 = come_decrement_ref_count(right_value176, 1, 0);
    list$$1char$phphcharph_push_back(li_str_238,(char*)come_increment_ref_count((char*)(right_value177=__builtin_string("CCC"))));
    right_value177 = come_decrement_ref_count(right_value177, 1, 0);
    __list_value4___239=(struct list$ph$1char$ph*)come_increment_ref_count((struct list$ph$1char$ph*)(right_value179=list$$1char$phphcharph_initialize((struct list$$1char$ph*)come_increment_ref_count((struct list$$1char$ph*)(right_value178=(struct list$$1char$ph*)come_calloc(1, sizeof(struct list$$1char$ph)*(1)))))));
    call_finalizer(list$$1char$phphcharph_finalize,right_value178,0, 1, 0);
    call_finalizer(list$ph$1char$phphcharph_finalize,right_value179,0, 1, 0);
    list$$1char$phphcharph_push_back(__list_value4___239,(char*)come_increment_ref_count((char*)(right_value180=__builtin_string("AAA"))));
    right_value180 = come_decrement_ref_count(right_value180, 1, 0);
    list$$1char$phphcharph_push_back(__list_value4___239,(char*)come_increment_ref_count((char*)(right_value181=__builtin_string("BBB"))));
    right_value181 = come_decrement_ref_count(right_value181, 1, 0);
    list$$1char$phphcharph_push_back(__list_value4___239,(char*)come_increment_ref_count((char*)(right_value182=__builtin_string("CCC"))));
    right_value182 = come_decrement_ref_count(right_value182, 1, 0);
    xassert("list test",list$$1char$phphcharph_operator_equals(li_str_238,__list_value4___239));
    int __result__ = 0;
    ax_102 = come_decrement_ref_count(ax_102, 0, 0);
    str_106 = come_decrement_ref_count(str_106, 0, 0);
    call_finalizer(sData_finalize,data_107,0, 0, 0);
    axyz_108 = come_decrement_ref_count(axyz_108, 0, 0);
    xxx_109 = come_decrement_ref_count(xxx_109, 0, 0);
    yyy_110 = come_decrement_ref_count(yyy_110, 0, 0);
    zzz_111 = come_decrement_ref_count(zzz_111, 0, 0);
    call_finalizer(list$$1char$phphcharph_finalize,liX_115,0, 0, 0);
    call_finalizer(list$$1int$phint_finalize,liX2_121,0, 0, 0);
    call_finalizer(list$$1char$phphcharph_finalize,li_135,0, 0, 0);
    call_finalizer(list$$1int$phint_finalize,li2_137,0, 0, 0);
    call_finalizer(list$ph$1char$phphcharph_finalize,li3_176,0, 0, 0);
    call_finalizer(list$ph$1int$phint_finalize,li4_184,0, 0, 0);
    call_finalizer(list$ph$1int$phint_finalize,li5_188,0, 0, 0);
    call_finalizer(list$ph$1int$phint_finalize,li6_193,0, 0, 0);
    axyzX_204 = come_decrement_ref_count(axyzX_204, 0, 0);
    call_finalizer(list$$1int$phint_finalize,liZ_206,0, 0, 0);
    call_finalizer(list$$1int$phint_finalize,liZ2_212,0, 0, 0);
    call_finalizer(list$$1int$phint_finalize,__list_value1___215,0, 0, 0);
    call_finalizer(list$$1int$phint_finalize,__list_value2___216,0, 0, 0);
    call_finalizer(list$$1int$phint_finalize,__list_value3___217,0, 0, 0);
    call_finalizer(((struct IA*)ia_219)->finalize, ((struct IA*)ia_219)->_protocol_obj,0, 0, 0);
    ia_219 = come_decrement_ref_count(ia_219, 0, 0);
    call_finalizer(list$$1IA$phphIAph_finalize,liIA_222,0, 0, 0);
    call_finalizer(tuple3$ph$3int$int$bool$phintintbool_finalize,__tuple_value2___234,0, 0, 0);
    call_finalizer(list$$1char$phphcharph_finalize,li_str_238,0, 0, 0);
    call_finalizer(list$$1char$phphcharph_finalize,__list_value4___239,0, 0, 0);
    return __result__;
}

static void sData_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_114)));
        (*(parent->n_114))++;
}

static char* list$$1char$phphcharph_begin(struct list$p$1char$ph* self){
char* result_116;
memset(&result_116, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_116,0,sizeof(char*));
        char* __result__ = result_116;
        return __result__;
}

static _Bool list$$1char$phphcharph_end(struct list$p$1char$ph* self){
        struct list_item$p$1char$ph* __result__ = self->it==((void*)0);
        return __result__;
}

static char* list$$1char$phphcharph_next(struct list$p$1char$ph* self){
char* result_118;
memset(&result_118, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_118,0,sizeof(char*));
        char* __result__ = result_118;
        return __result__;
}

static struct list$ph$1int$* list$$1int$phint_initialize(struct list$ph$1int$* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$ph$1int$* __result__ = self;
        call_finalizer(list$ph$1int$phint_finalize,self,0, 0, 1);
        return __result__;
}

static void list$ph$1int$phint_finalize(struct list$p$1int$* self){
struct list_item$$1int$* it_119;
struct list_item$$1int$* prev_it_120;
memset(&it_119, 0, sizeof(struct list_item$$1int$*));
memset(&prev_it_120, 0, sizeof(struct list_item$$1int$*));
            it_119=self->head;
            while(it_119!=((void*)0)) {
                if(0) {
                }
                prev_it_120=it_119;
                it_119=it_119->next;
                come_free_object(prev_it_120);
            }
}

static void list$$1int$phint_finalize(struct list$p$1int$* self){
struct list_item$$1int$$$1int$* it_122;
struct list_item$$1int$$$1int$* prev_it_123;
memset(&it_122, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&prev_it_123, 0, sizeof(struct list_item$$1int$$$1int$*));
        it_122=self->head;
        while(it_122!=((void*)0)) {
            if(0) {
            }
            prev_it_123=it_122;
            it_122=it_122->next;
            come_free_object(prev_it_123);
        }
}

static void list$$1int$phint_push_back(struct list$p$1int$* self, int item){
void* right_value87;
struct list_item$$1int$$$1int$* litem_124;
void* right_value88;
struct list_item$$1int$$$1int$* litem_125;
void* right_value89;
struct list_item$$1int$$$1int$* litem_126;
memset(&litem_124, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_125, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_126, 0, sizeof(struct list_item$$1int$$$1int$*));
        if(self->len==0) {
            litem_124=(struct list_item$$1int$$$1int$*)(right_value87=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
            litem_124->prev=((void*)0);
            litem_124->next=((void*)0);
            litem_124->item=item;
            self->tail=litem_124;
            self->head=litem_124;
        }
        else if(self->len==1) {
            litem_125=(struct list_item$$1int$$$1int$*)(right_value88=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
            litem_125->prev=self->head;
            litem_125->next=((void*)0);
            litem_125->item=item;
            self->tail=litem_125;
            self->head->next=litem_125;
        }
        else {
            litem_126=(struct list_item$$1int$$$1int$*)(right_value89=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
            litem_126->prev=self->tail;
            litem_126->next=((void*)0);
            litem_126->item=item;
            self->tail->next=litem_126;
            self->tail=litem_126;
        }
        self->len++;
}

static int list$$1int$phint_begin(struct list$p$1int$* self){
int result_127;
memset(&result_127, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_127,0,sizeof(int));
        int __result__ = result_127;
        return __result__;
}

static _Bool list$$1int$phint_end(struct list$p$1int$* self){
        struct list_item$p$1int$* __result__ = self->it==((void*)0);
        return __result__;
}

static int list$$1int$phint_next(struct list$p$1int$* self){
int result_129;
memset(&result_129, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_129,0,sizeof(int));
        int __result__ = result_129;
        return __result__;
}

static void list$$1int$phint_each(struct list$p$1int$* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item$$1int$$$1int$* it_131;
int i_132;
_Bool end_flag_133;
memset(&it_131, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_132, 0, sizeof(int));
memset(&end_flag_133, 0, sizeof(_Bool));
        it_131=self->head;
        i_132=0;
        while(it_131!=((void*)0)) {
            end_flag_133=(_Bool)0;
            block(parent,it_131->item,i_132,&end_flag_133);
            if(end_flag_133==(_Bool)1) {
                break;
            }
            it_131=it_131->next;
            i_132++;
        }
}

void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_130)));
        (*(parent->aX_130))=2;
}

void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_139)));
        (*(parent->aXL_139))=2;
}

static int list$$1int$phint_item(struct list$p$1int$* self, int position, int default_value){
struct list_item$$1int$$$1int$* it_140;
int i_141;
memset(&it_140, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_141, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_140=self->head;
        i_141=0;
        while(it_140!=((void*)0)) {
            if(position==i_141) {
                int __result__ = it_140->item;
                return __result__;
            }
            it_140=it_140->next;
            i_141++;
        }
        int __result__ = default_value;
        return __result__;
}

static void list$$1int$phint_insert(struct list$p$1int$* self, int position, int item){
void* right_value100;
struct list_item$$1int$$$1int$* litem_145;
void* right_value101;
struct list_item$$1int$$$1int$* litem_146;
struct list_item$$1int$$$1int$* it_147;
int i_148;
void* right_value102;
struct list_item$$1int$$$1int$* litem_149;
memset(&litem_145, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_146, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&it_147, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_148, 0, sizeof(int));
memset(&litem_149, 0, sizeof(struct list_item$$1int$$$1int$*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$p$1int$$p$1int$pint_push_back(self,item);
            return;
        }
        if(position==0) {
            litem_145=(struct list_item$$1int$$$1int$*)(right_value100=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
            litem_145->prev=((void*)0);
            litem_145->next=self->head;
            litem_145->item=item;
            self->head->prev=litem_145;
            self->head=litem_145;
            self->len++;
        }
        else if(self->len==1) {
            litem_146=(struct list_item$$1int$$$1int$*)(right_value101=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
            litem_146->prev=self->head;
            litem_146->next=self->tail;
            litem_146->item=item;
            self->tail->prev=litem_146;
            self->head->next=litem_146;
            self->len++;
        }
        else {
            it_147=self->head;
            i_148=0;
            while(it_147!=((void*)0)) {
                if(position==i_148) {
                    litem_149=(struct list_item$$1int$$$1int$*)(right_value102=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
                    litem_149->prev=it_147->prev;
                    litem_149->next=it_147;
                    litem_149->item=item;
                    it_147->prev->next=litem_149;
                    it_147->prev=litem_149;
                    self->len++;
                }
                it_147=it_147->next;
                i_148++;
            }
        }
}

static void list$p$1int$$p$1int$pint_push_back(struct list$p$1int$* self, int item){
void* right_value97;
struct list_item$$1int$$$1int$* litem_142;
void* right_value98;
struct list_item$$1int$$$1int$* litem_143;
void* right_value99;
struct list_item$$1int$$$1int$* litem_144;
memset(&litem_142, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_143, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_144, 0, sizeof(struct list_item$$1int$$$1int$*));
                if(self->len==0) {
                    litem_142=(struct list_item$$1int$$$1int$*)(right_value97=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
                    litem_142->prev=((void*)0);
                    litem_142->next=((void*)0);
                    litem_142->item=item;
                    self->tail=litem_142;
                    self->head=litem_142;
                }
                else if(self->len==1) {
                    litem_143=(struct list_item$$1int$$$1int$*)(right_value98=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
                    litem_143->prev=self->head;
                    litem_143->next=((void*)0);
                    litem_143->item=item;
                    self->tail=litem_143;
                    self->head->next=litem_143;
                }
                else {
                    litem_144=(struct list_item$$1int$$$1int$*)(right_value99=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
                    litem_144->prev=self->tail;
                    litem_144->next=((void*)0);
                    litem_144->item=item;
                    self->tail->next=litem_144;
                    self->tail=litem_144;
                }
                self->len++;
}

static void list$$1char$phphcharph_insert(struct list$p$1char$ph* self, int position, char* item){
void* right_value106;
struct list_item$$1char$ph$$1char$ph* litem_153;
void* right_value107;
struct list_item$$1char$ph$$1char$ph* litem_154;
struct list_item$$1char$ph$$1char$ph* it_155;
int i_156;
void* right_value108;
struct list_item$$1char$ph$$1char$ph* litem_157;
memset(&litem_153, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_154, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&it_155, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&i_156, 0, sizeof(int));
memset(&litem_157, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$p$1char$ph$p$1char$phpcharph_push_back(self,(char*)come_increment_ref_count(item));
            return;
        }
        if(position==0) {
            litem_153=(struct list_item$$1char$ph$$1char$ph*)(right_value106=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
            litem_153->prev=((void*)0);
            litem_153->next=self->head;
            if(litem_153->item) {(char*)come_decrement_ref_count(litem_153->item,0,0); }
            litem_153->item=(char*)come_increment_ref_count(item);
            self->head->prev=litem_153;
            self->head=litem_153;
            self->len++;
        }
        else if(self->len==1) {
            litem_154=(struct list_item$$1char$ph$$1char$ph*)(right_value107=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
            litem_154->prev=self->head;
            litem_154->next=self->tail;
            if(litem_154->item) {(char*)come_decrement_ref_count(litem_154->item,0,0); }
            litem_154->item=(char*)come_increment_ref_count(item);
            self->tail->prev=litem_154;
            self->head->next=litem_154;
            self->len++;
        }
        else {
            it_155=self->head;
            i_156=0;
            while(it_155!=((void*)0)) {
                if(position==i_156) {
                    litem_157=(struct list_item$$1char$ph$$1char$ph*)(right_value108=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
                    litem_157->prev=it_155->prev;
                    litem_157->next=it_155;
                    if(litem_157->item) {(char*)come_decrement_ref_count(litem_157->item,0,0); }
                    litem_157->item=(char*)come_increment_ref_count(item);
                    it_155->prev->next=litem_157;
                    it_155->prev=litem_157;
                    self->len++;
                }
                it_155=it_155->next;
                i_156++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static void list$p$1char$ph$p$1char$phpcharph_push_back(struct list$p$1char$ph* self, char* item){
void* right_value103;
struct list_item$$1char$ph$$1char$ph* litem_150;
void* right_value104;
struct list_item$$1char$ph$$1char$ph* litem_151;
void* right_value105;
struct list_item$$1char$ph$$1char$ph* litem_152;
memset(&litem_150, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_151, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_152, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
                if(self->len==0) {
                    litem_150=(struct list_item$$1char$ph$$1char$ph*)(right_value103=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
                    litem_150->prev=((void*)0);
                    litem_150->next=((void*)0);
                    if(litem_150->item) {(char*)come_decrement_ref_count(litem_150->item,0,0); }
                    litem_150->item=(char*)come_increment_ref_count(item);
                    self->tail=litem_150;
                    self->head=litem_150;
                }
                else if(self->len==1) {
                    litem_151=(struct list_item$$1char$ph$$1char$ph*)(right_value104=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
                    litem_151->prev=self->head;
                    litem_151->next=((void*)0);
                    if(litem_151->item) {(char*)come_decrement_ref_count(litem_151->item,0,0); }
                    litem_151->item=(char*)come_increment_ref_count(item);
                    self->tail=litem_151;
                    self->head->next=litem_151;
                }
                else {
                    litem_152=(struct list_item$$1char$ph$$1char$ph*)(right_value105=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
                    litem_152->prev=self->tail;
                    litem_152->next=((void*)0);
                    if(litem_152->item) {(char*)come_decrement_ref_count(litem_152->item,0,0); }
                    litem_152->item=(char*)come_increment_ref_count(item);
                    self->tail->next=litem_152;
                    self->tail=litem_152;
                }
                self->len++;
                item = come_decrement_ref_count(item, 0, 1);
}

static char* list$$1char$phphcharph_item(struct list$p$1char$ph* self, int position, char* default_value){
struct list_item$$1char$ph$$1char$ph* it_158;
int i_159;
memset(&it_158, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&i_159, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_158=self->head;
        i_159=0;
        while(it_158!=((void*)0)) {
            if(position==i_159) {
                char* __result__ = it_158->item;
                return __result__;
            }
            it_158=it_158->next;
            i_159++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list$$1char$phphcharph_reset(struct list$p$1char$ph* self){
struct list_item$$1char$ph$$1char$ph* it_160;
struct list_item$$1char$ph$$1char$ph* prev_it_161;
memset(&it_160, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&prev_it_161, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
        it_160=self->head;
        while(it_160!=((void*)0)) {
            prev_it_161=it_160;
            it_160=it_160->next;
            call_finalizer(list_item$$1char$ph$$1char$phpcharph_finalize,prev_it_161,0, 0, 0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
}

static void list_item$$1char$ph$$1char$phpcharph_finalize(struct list_item$$1char$ph$$1char$ph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    self->item = come_decrement_ref_count(self->item, 0, 0);
                }
}

static int list$$1char$phphcharph_length(struct list$p$1char$ph* self){
        int __result__ = self->len;
        return __result__;
}

static void list$$1int$phint_delete(struct list$p$1int$* self, int head, int tail){
int tmp_162;
struct list_item$$1int$$$1int$* it_165;
int i_166;
struct list_item$$1int$$$1int$* prev_it_167;
struct list_item$$1int$$$1int$* it_168;
int i_169;
struct list_item$$1int$$$1int$* prev_it_170;
struct list_item$$1int$$$1int$* it_171;
struct list_item$$1int$$$1int$* head_prev_it_172;
struct list_item$$1int$$$1int$* tail_it_173;
int i_174;
struct list_item$$1int$$$1int$* prev_it_175;
memset(&tmp_162, 0, sizeof(int));
memset(&it_165, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_166, 0, sizeof(int));
memset(&prev_it_167, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&it_168, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_169, 0, sizeof(int));
memset(&prev_it_170, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&it_171, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&head_prev_it_172, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&tail_it_173, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_174, 0, sizeof(int));
memset(&prev_it_175, 0, sizeof(struct list_item$$1int$$$1int$*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_162=tail;
            tail=head;
            head=tmp_162;
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
            list$p$1int$$p$1int$pint_reset(self);
        }
        else if(head==0) {
            it_165=self->head;
            i_166=0;
            while(it_165!=((void*)0)) {
                if(i_166<tail) {
                    prev_it_167=it_165;
                    it_165=it_165->next;
                    i_166++;
                    call_finalizer(list_item$$1int$$$1int$pint_finalize,prev_it_167,0, 0, 0);
                    self->len--;
                }
                else if(i_166==tail) {
                    self->head=it_165;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_165=it_165->next;
                    i_166++;
                }
            }
        }
        else if(tail==self->len) {
            it_168=self->head;
            i_169=0;
            while(it_168!=((void*)0)) {
                if(i_169==head) {
                    self->tail=it_168->prev;
                    self->tail->next=((void*)0);
                }
                if(i_169>=head) {
                    prev_it_170=it_168;
                    it_168=it_168->next;
                    i_169++;
                    call_finalizer(list_item$$1int$$$1int$pint_finalize,prev_it_170,0, 0, 0);
                    self->len--;
                }
                else {
                    it_168=it_168->next;
                    i_169++;
                }
            }
        }
        else {
            it_171=self->head;
            head_prev_it_172=((void*)0);
            tail_it_173=((void*)0);
            i_174=0;
            while(it_171!=((void*)0)) {
                if(i_174==head) {
                    head_prev_it_172=it_171->prev;
                }
                if(i_174==tail) {
                    tail_it_173=it_171;
                }
                if(i_174>=head&&i_174<tail) {
                    prev_it_175=it_171;
                    it_171=it_171->next;
                    i_174++;
                    call_finalizer(list_item$$1int$$$1int$pint_finalize,prev_it_175,0, 0, 0);
                    self->len--;
                }
                else {
                    it_171=it_171->next;
                    i_174++;
                }
            }
            if(head_prev_it_172!=((void*)0)) {
                head_prev_it_172->next=tail_it_173;
            }
            if(tail_it_173!=((void*)0)) {
                tail_it_173->prev=head_prev_it_172;
            }
        }
}

static void list$p$1int$$p$1int$pint_reset(struct list$p$1int$* self){
struct list_item$$1int$$$1int$* it_163;
struct list_item$$1int$$$1int$* prev_it_164;
memset(&it_163, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&prev_it_164, 0, sizeof(struct list_item$$1int$$$1int$*));
                it_163=self->head;
                while(it_163!=((void*)0)) {
                    prev_it_164=it_163;
                    it_163=it_163->next;
                    call_finalizer(list_item$$1int$$$1int$pint_finalize,prev_it_164,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$$1int$$$1int$pint_finalize(struct list_item$$1int$$$1int$* self){
}

static void list$ph$1char$phphcharph_push_back(struct list$p$1char$ph* self, char* item){
void* right_value112;
struct list_item$$1char$ph$$1char$ph* litem_177;
void* right_value113;
struct list_item$$1char$ph$$1char$ph* litem_178;
void* right_value114;
struct list_item$$1char$ph$$1char$ph* litem_179;
memset(&litem_177, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_178, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&litem_179, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
        if(self->len==0) {
            litem_177=(struct list_item$$1char$ph$$1char$ph*)(right_value112=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
            litem_177->prev=((void*)0);
            litem_177->next=((void*)0);
            if(litem_177->item) {(char*)come_decrement_ref_count(litem_177->item,0,0); }
            litem_177->item=(char*)come_increment_ref_count(item);
            self->tail=litem_177;
            self->head=litem_177;
        }
        else if(self->len==1) {
            litem_178=(struct list_item$$1char$ph$$1char$ph*)(right_value113=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
            litem_178->prev=self->head;
            litem_178->next=((void*)0);
            if(litem_178->item) {(char*)come_decrement_ref_count(litem_178->item,0,0); }
            litem_178->item=(char*)come_increment_ref_count(item);
            self->tail=litem_178;
            self->head->next=litem_178;
        }
        else {
            litem_179=(struct list_item$$1char$ph$$1char$ph*)(right_value114=(struct list_item$$1char$ph$$1char$ph*)come_calloc(1, sizeof(struct list_item$$1char$ph$$1char$ph)*(1)));
            litem_179->prev=self->tail;
            litem_179->next=((void*)0);
            if(litem_179->item) {(char*)come_decrement_ref_count(litem_179->item,0,0); }
            litem_179->item=(char*)come_increment_ref_count(item);
            self->tail->next=litem_179;
            self->tail=litem_179;
        }
        self->len++;
        item = come_decrement_ref_count(item, 0, 1);
}

static void list$ph$1char$phphcharph_replace(struct list$p$1char$ph* self, int position, char* item){
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
                if(it_180->item) {(char*)come_decrement_ref_count(it_180->item,0,0); }
                it_180->item=(char*)come_increment_ref_count(item);
                break;
            }
            it_180=it_180->next;
            i_181++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$ph$1char$phphcharph_item(struct list$p$1char$ph* self, int position, char* default_value){
struct list_item$$1char$ph$$1char$ph* it_182;
int i_183;
memset(&it_182, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&i_183, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_182=self->head;
        i_183=0;
        while(it_182!=((void*)0)) {
            if(position==i_183) {
                char* __result__ = it_182->item;
                return __result__;
            }
            it_182=it_182->next;
            i_183++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list$ph$1int$phint_push_back(struct list$p$1int$* self, int item){
void* right_value121;
struct list_item$$1int$$$1int$* litem_185;
void* right_value122;
struct list_item$$1int$$$1int$* litem_186;
void* right_value123;
struct list_item$$1int$$$1int$* litem_187;
memset(&litem_185, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_186, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_187, 0, sizeof(struct list_item$$1int$$$1int$*));
        if(self->len==0) {
            litem_185=(struct list_item$$1int$$$1int$*)(right_value121=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
            litem_185->prev=((void*)0);
            litem_185->next=((void*)0);
            litem_185->item=item;
            self->tail=litem_185;
            self->head=litem_185;
        }
        else if(self->len==1) {
            litem_186=(struct list_item$$1int$$$1int$*)(right_value122=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
            litem_186->prev=self->head;
            litem_186->next=((void*)0);
            litem_186->item=item;
            self->tail=litem_186;
            self->head->next=litem_186;
        }
        else {
            litem_187=(struct list_item$$1int$$$1int$*)(right_value123=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
            litem_187->prev=self->tail;
            litem_187->next=((void*)0);
            litem_187->item=item;
            self->tail->next=litem_187;
            self->tail=litem_187;
        }
        self->len++;
}

static _Bool list$ph$1int$phint_equals(struct list$p$1int$* left, struct list$p$1int$* right){
struct list_item$$1int$$$1int$* it_189;
struct list_item$$1int$$$1int$* it2_190;
memset(&it_189, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&it2_190, 0, sizeof(struct list_item$$1int$$$1int$*));
        if(left->len!=right->len) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        it_189=left->head;
        it2_190=right->head;
        while(it_189!=((void*)0)) {
            if(!int_equals(it_189->item,it2_190->item)) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_189=it_189->next;
            it2_190=it2_190->next;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static int list$ph$1int$phint_find(struct list$p$1int$* self, int item, int default_value){
int it2_191;
struct list_item$$1int$$$1int$* it_192;
memset(&it2_191, 0, sizeof(int));
memset(&it_192, 0, sizeof(struct list_item$$1int$$$1int$*));
        it2_191=0;
        it_192=self->head;
        while(it_192!=((void*)0)) {
            if(int_equals(it_192->item,item)) {
                int __result__ = it2_191;
                return __result__;
            }
            it2_191++;
            it_192=it_192->next;
        }
        int __result__ = default_value;
        return __result__;
}

static struct list$ph$1int$* list$ph$1int$phint_sublist(struct list$p$1int$* self, int begin, int tail){
void* right_value128;
void* right_value129;
struct list$$1int$$$1int$* result_194;
struct list_item$$1int$$$1int$* it_199;
int i_200;
memset(&result_194, 0, sizeof(struct list$$1int$$$1int$*));
memset(&it_199, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_200, 0, sizeof(int));
        result_194=(struct list$ph$1int$*)come_increment_ref_count((struct list$ph$1int$*)(right_value129=list$$1int$$$1int$phint_initialize((struct list$$1int$$$1int$*)come_increment_ref_count((struct list$$1int$$$1int$*)(right_value128=(struct list$$1int$$$1int$*)come_calloc(1, sizeof(struct list$$1int$$$1int$)*(1)))))));
        call_finalizer(list$$1int$$$1int$phint_finalize,right_value128,0, 1, 0);
        call_finalizer(list$ph$1int$$ph$1int$phint_finalize,right_value129,0, 1, 0);
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
        it_199=self->head;
        i_200=0;
        while(it_199!=((void*)0)) {
            if(i_200>=begin&&i_200<tail) {
                list$$1int$$$1int$phint_push_back(result_194,it_199->item);
            }
            it_199=it_199->next;
            i_200++;
        }
        struct list$$1int$$$1int$* __result__ = result_194;
        call_finalizer(list$$1int$$$1int$phint_finalize,result_194,0, 0, 1);
        return __result__;
}

static struct list$ph$1int$* list$$1int$$$1int$phint_initialize(struct list$ph$1int$* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$ph$1int$* __result__ = self;
            call_finalizer(list$ph$1int$phint_finalize,self,0, 0, 1);
            return __result__;
}

static void list$$1int$$$1int$phint_finalize(struct list$p$1int$* self){
struct list_item$$1int$$$1int$* it_195;
struct list_item$$1int$$$1int$* prev_it_196;
memset(&it_195, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&prev_it_196, 0, sizeof(struct list_item$$1int$$$1int$*));
            it_195=self->head;
            while(it_195!=((void*)0)) {
                if(0) {
                }
                prev_it_196=it_195;
                it_195=it_195->next;
                come_free_object(prev_it_196);
            }
}

static void list$ph$1int$$ph$1int$phint_finalize(struct list$p$1int$* self){
struct list_item$$1int$$$1int$* it_197;
struct list_item$$1int$$$1int$* prev_it_198;
memset(&it_197, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&prev_it_198, 0, sizeof(struct list_item$$1int$$$1int$*));
            it_197=self->head;
            while(it_197!=((void*)0)) {
                if(0) {
                }
                prev_it_198=it_197;
                it_197=it_197->next;
                come_free_object(prev_it_198);
            }
}

static void list$$1int$$$1int$phint_push_back(struct list$p$1int$* self, int item){
void* right_value130;
struct list_item$$1int$$$1int$* litem_201;
void* right_value131;
struct list_item$$1int$$$1int$* litem_202;
void* right_value132;
struct list_item$$1int$$$1int$* litem_203;
memset(&litem_201, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_202, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&litem_203, 0, sizeof(struct list_item$$1int$$$1int$*));
                    if(self->len==0) {
                        litem_201=(struct list_item$$1int$$$1int$*)(right_value130=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
                        litem_201->prev=((void*)0);
                        litem_201->next=((void*)0);
                        litem_201->item=item;
                        self->tail=litem_201;
                        self->head=litem_201;
                    }
                    else if(self->len==1) {
                        litem_202=(struct list_item$$1int$$$1int$*)(right_value131=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
                        litem_202->prev=self->head;
                        litem_202->next=((void*)0);
                        litem_202->item=item;
                        self->tail=litem_202;
                        self->head->next=litem_202;
                    }
                    else {
                        litem_203=(struct list_item$$1int$$$1int$*)(right_value132=(struct list_item$$1int$$$1int$*)come_calloc(1, sizeof(struct list_item$$1int$$$1int$)*(1)));
                        litem_203->prev=self->tail;
                        litem_203->next=((void*)0);
                        litem_203->item=item;
                        self->tail->next=litem_203;
                        self->tail=litem_203;
                    }
                    self->len++;
}

void method_block4(struct __current_stack4__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static void list$$1int$phint_operator_store_element(struct list$p$1int$* self, int position, int item){
        list$p$1int$$p$1int$pint_replace(self,position,item);
}

static void list$p$1int$$p$1int$pint_replace(struct list$p$1int$* self, int position, int item){
struct list_item$$1int$$$1int$* it_207;
int i_208;
memset(&it_207, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_208, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_207=self->head;
            i_208=0;
            while(it_207!=((void*)0)) {
                if(position==i_208) {
                    it_207->item=item;
                    break;
                }
                it_207=it_207->next;
                i_208++;
            }
}

static int list$$1int$phint_operator_load_element(struct list$p$1int$* self, int index){
int default_value_209;
memset(&default_value_209, 0, sizeof(int));
        memset(&default_value_209,0,sizeof(int));
        int __result__ = list$p$1int$$p$1int$pint_item(self,index,default_value_209);
        return __result__;
}

static int list$p$1int$$p$1int$pint_item(struct list$p$1int$* self, int position, int default_value){
struct list_item$$1int$$$1int$* it_210;
int i_211;
memset(&it_210, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&i_211, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_210=self->head;
            i_211=0;
            while(it_210!=((void*)0)) {
                if(position==i_211) {
                    int __result__ = it_210->item;
                    return __result__;
                }
                it_210=it_210->next;
                i_211++;
            }
            int __result__ = default_value;
            return __result__;
}

static _Bool list$$1int$phint_operator_equals(struct list$p$1int$* self, struct list$p$1int$* right){
        _Bool __result__ = list$p$1int$$p$1int$pint_equals(self,right);
        return __result__;
}

static _Bool list$p$1int$$p$1int$pint_equals(struct list$p$1int$* left, struct list$p$1int$* right){
struct list_item$$1int$$$1int$* it_213;
struct list_item$$1int$$$1int$* it2_214;
memset(&it_213, 0, sizeof(struct list_item$$1int$$$1int$*));
memset(&it2_214, 0, sizeof(struct list_item$$1int$$$1int$*));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_213=left->head;
            it2_214=right->head;
            while(it_213!=((void*)0)) {
                if(!int_equals(it_213->item,it2_214->item)) {
                    _Bool __result__ = (_Bool)0;
                    return __result__;
                }
                it_213=it_213->next;
                it2_214=it2_214->next;
            }
            _Bool __result__ = (_Bool)1;
            return __result__;
}

void method_block5(struct __current_stack5__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static struct sDataA* sDataA_clone(struct sDataA* self){
void* right_value168;
struct sDataA* result_230;
memset(&result_230, 0, sizeof(struct sDataA*));
        result_230=(struct sDataA*)come_increment_ref_count((struct sDataA*)(right_value168=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))));
        call_finalizer(sDataA_finalize,right_value168,0, 1, 0);
        struct sDataA* __result__ = result_230;
        call_finalizer(sDataA_finalize,result_230,0, 0, 1);
        return __result__;
}

static struct list$ph$1IA$ph* list$$1IA$phphIAph_initialize(struct list$ph$1IA$ph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$ph$1IA$ph* __result__ = self;
        call_finalizer(list$ph$1IA$phphIAph_finalize,self,0, 0, 1);
        return __result__;
}

static void list$ph$1IA$phphIAph_finalize(struct list$p$1IA$ph* self){
struct list_item$$1IA$ph* it_220;
struct list_item$$1IA$ph* prev_it_221;
memset(&it_220, 0, sizeof(struct list_item$$1IA$ph*));
memset(&prev_it_221, 0, sizeof(struct list_item$$1IA$ph*));
            it_220=self->head;
            while(it_220!=((void*)0)) {
                if(1) {
                    call_finalizer(((struct IA*)it_220->item)->finalize, ((struct IA*)it_220->item)->_protocol_obj,0, 0, 0);
                    it_220->item = come_decrement_ref_count(it_220->item, 0, 0);
                }
                prev_it_221=it_220;
                it_220=it_220->next;
                come_free_object(prev_it_221);
            }
}

static void list$$1IA$phphIAph_finalize(struct list$p$1IA$ph* self){
struct list_item$$1IA$ph$$1IA$ph* it_223;
struct list_item$$1IA$ph$$1IA$ph* prev_it_224;
memset(&it_223, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
memset(&prev_it_224, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
        it_223=self->head;
        while(it_223!=((void*)0)) {
            if(1) {
                call_finalizer(((struct IA*)it_223->item)->finalize, ((struct IA*)it_223->item)->_protocol_obj,0, 0, 0);
                it_223->item = come_decrement_ref_count(it_223->item, 0, 0);
            }
            prev_it_224=it_223;
            it_223=it_223->next;
            come_free_object(prev_it_224);
        }
}

static void list$$1IA$phphIAph_push_back(struct list$p$1IA$ph* self, struct IA* item){
void* right_value155;
struct list_item$$1IA$ph$$1IA$ph* litem_225;
struct IA** _inf_valueX2;
void* right_value156;
struct list_item$$1IA$ph$$1IA$ph* litem_226;
struct IA** _inf_valueX3;
void* right_value157;
struct list_item$$1IA$ph$$1IA$ph* litem_227;
struct IA** _inf_valueX4;
memset(&litem_225, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
memset(&litem_226, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
memset(&litem_227, 0, sizeof(struct list_item$$1IA$ph$$1IA$ph*));
        if(self->len==0) {
            litem_225=(struct list_item$$1IA$ph$$1IA$ph*)(right_value155=(struct list_item$$1IA$ph$$1IA$ph*)come_calloc(1, sizeof(struct list_item$$1IA$ph$$1IA$ph)*(1)));
            litem_225->prev=((void*)0);
            litem_225->next=((void*)0);
            if(litem_225->item) {(struct IA*)come_decrement_ref_count(litem_225->item,0,0), come_decrement_ref_count(((struct IA*)litem_225->item)->_protocol_obj,0,0); }
            _inf_valueX2=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_225->item=_inf_valueX2;
            self->tail=litem_225;
            self->head=litem_225;
        }
        else if(self->len==1) {
            litem_226=(struct list_item$$1IA$ph$$1IA$ph*)(right_value156=(struct list_item$$1IA$ph$$1IA$ph*)come_calloc(1, sizeof(struct list_item$$1IA$ph$$1IA$ph)*(1)));
            litem_226->prev=self->head;
            litem_226->next=((void*)0);
            if(litem_226->item) {(struct IA*)come_decrement_ref_count(litem_226->item,0,0), come_decrement_ref_count(((struct IA*)litem_226->item)->_protocol_obj,0,0); }
            _inf_valueX3=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_226->item=_inf_valueX3;
            self->tail=litem_226;
            self->head->next=litem_226;
        }
        else {
            litem_227=(struct list_item$$1IA$ph$$1IA$ph*)(right_value157=(struct list_item$$1IA$ph$$1IA$ph*)come_calloc(1, sizeof(struct list_item$$1IA$ph$$1IA$ph)*(1)));
            litem_227->prev=self->tail;
            litem_227->next=((void*)0);
            if(litem_227->item) {(struct IA*)come_decrement_ref_count(litem_227->item,0,0), come_decrement_ref_count(((struct IA*)litem_227->item)->_protocol_obj,0,0); }
            _inf_valueX4=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_227->item=_inf_valueX4;
            self->tail->next=litem_227;
            self->tail=litem_227;
        }
        self->len++;
        call_finalizer(((struct IA*)item)->finalize, ((struct IA*)item)->_protocol_obj,0, 0, 1);
        item = come_decrement_ref_count(item, 0, 1);
}

static struct IA* list$$1IA$phphIAph_begin(struct list$p$1IA$ph* self){
struct IA* result_231;
memset(&result_231, 0, sizeof(struct IA*));
        self->it=self->head;
        if(self->it) {
            struct IA* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_231,0,sizeof(struct IA*));
        struct IA* __result__ = result_231;
        return __result__;
}

static _Bool list$$1IA$phphIAph_end(struct list$p$1IA$ph* self){
        struct list_item$p$1IA$ph* __result__ = self->it==((void*)0);
        return __result__;
}

static struct IA* list$$1IA$phphIAph_next(struct list$p$1IA$ph* self){
struct IA* result_233;
memset(&result_233, 0, sizeof(struct IA*));
        self->it=self->it->next;
        if(self->it) {
            struct IA* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_233,0,sizeof(struct IA*));
        struct IA* __result__ = result_233;
        return __result__;
}

static struct tuple3$ph$3int$int$bool$* tuple3$$3int$int$bool$phintintbool_initialize(struct tuple3$ph$3int$int$bool$* self, int v1, int v2, _Bool v3){
        self->v1=v1;
        self->v2=v2;
        self->v3=v3;
        struct tuple3$ph$3int$int$bool$* __result__ = self;
        call_finalizer(tuple3$ph$3int$int$bool$phintintbool_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple3$ph$3int$int$bool$phintintbool_finalize(struct tuple3$ph$3int$int$bool$* self){
}

static void tuple3$$3int$int$bool$phintintbool_finalize(struct tuple3$$3int$int$bool$* self){
}

static int tuple2$ph$2int$bool$phintbool_catch(struct tuple2$p$2int$bool$* self, void* parent, void (*block)(void*)){
        if(!self->v2) {
            block(parent);
        }
        int __result__ = self->v1;
        return __result__;
}

void method_block6(struct __current_stack6__* parent){
        fprintf(stderr,"exception\n");
}

static _Bool list$$1char$phphcharph_operator_equals(struct list$p$1char$ph* self, struct list$p$1char$ph* right){
        _Bool __result__ = list$p$1char$ph$p$1char$phpcharph_equals(self,right);
        return __result__;
}

static _Bool list$p$1char$ph$p$1char$phpcharph_equals(struct list$p$1char$ph* left, struct list$p$1char$ph* right){
struct list_item$$1char$ph$$1char$ph* it_240;
struct list_item$$1char$ph$$1char$ph* it2_241;
memset(&it_240, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
memset(&it2_241, 0, sizeof(struct list_item$$1char$ph$$1char$ph*));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_240=left->head;
            it2_241=right->head;
            while(it_240!=((void*)0)) {
                if(!string_equals(it_240->item,it2_241->item)) {
                    _Bool __result__ = (_Bool)0;
                    return __result__;
                }
                it_240=it_240->next;
                it2_241=it2_241->next;
            }
            _Bool __result__ = (_Bool)1;
            return __result__;
}

