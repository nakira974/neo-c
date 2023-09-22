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
struct tuple2$2intbool
{
    int v1;
    _Bool v2;
};
struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};
struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};
struct tuple1$1int
{
    int v1;
};
struct tuple1$1charph
{
    char* v1;
};
struct tuple2$2charphint
{
    char* v1;
    int v2;
};
struct list_item$1IAph
{
    struct IA* item;
    struct list_item$1IAph* prev;
    struct list_item$1IAph* next;
};
struct list$1IAph
{
    struct list_item$1IAph* head;
    struct list_item$1IAph* tail;
    int len;
    struct list_item$1IAph* it;
};
struct __current_stack1__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
};
struct __current_stack2__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
    struct list$1charph** liX_114;
    struct list$1int** liX2_120;
    int* aX_127;
};
struct __current_stack3__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
    struct list$1charph** liX_114;
    struct list$1int** liX2_120;
    int* aX_127;
    int* aXYZY_131;
    struct list$1charph** li_132;
    struct list$1int** li2_134;
    int* aXL_136;
};
struct __current_stack4__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
    struct list$1charph** liX_114;
    struct list$1int** liX2_120;
    int* aX_127;
    int* aXYZY_131;
    struct list$1charph** li_132;
    struct list$1int** li2_134;
    int* aXL_136;
    struct list$1charph** li3_167;
    struct list$1int** li4_170;
    struct list$1int** li5_171;
    struct list$1int** li6_176;
    int** axyzX_180;
    char** strXYXY_181;
    struct list$1int** liZ_182;
};
struct __current_stack5__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
    struct list$1charph** liX_114;
    struct list$1int** liX2_120;
    int* aX_127;
    int* aXYZY_131;
    struct list$1charph** li_132;
    struct list$1int** li2_134;
    int* aXL_136;
    struct list$1charph** li3_167;
    struct list$1int** li4_170;
    struct list$1int** li5_171;
    struct list$1int** li6_176;
    int** axyzX_180;
    char** strXYXY_181;
    struct list$1int** liZ_182;
    struct list$1int** liZ2_186;
};
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};
struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};
struct map$2charpint
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct tuple2$2charpint
{
    char* v1;
    int v2;
};
struct tuple3$3intintbool
{
    int v1;
    int v2;
    _Bool v3;
};
struct __current_stack6__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
    struct list$1charph** liX_114;
    struct list$1int** liX2_120;
    int* aX_127;
    int* aXYZY_131;
    struct list$1charph** li_132;
    struct list$1int** li2_134;
    int* aXL_136;
    struct list$1charph** li3_167;
    struct list$1int** li4_170;
    struct list$1int** li5_171;
    struct list$1int** li6_176;
    int** axyzX_180;
    char** strXYXY_181;
    struct list$1int** liZ_182;
    struct list$1int** liZ2_186;
    struct map$2charpint** m1_237;
    struct map$2charpint** m2_248;
    struct tuple1$1int** tt1_249;
    struct tuple1$1charph** tt2_250;
    struct tuple1$1charph** tt3_252;
    struct tuple1$1int** ttt1_253;
    struct tuple1$1charph** ttt2_254;
    struct tuple1$1charph** ttt3_255;
    struct tuple2$2charphint** t4_256;
    struct IA** ia_258;
    struct list$1IAph** liIA_261;
    int* aZZZ_271;
    int* bZZZ_272;
    struct list$1charph** li_str_273;
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
static void FILE_finalize(struct _IO_FILE* self);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int intp_fun(int* self);
struct sDataA* sDataA_initialize(struct sDataA* self, int a, int b);
static void sDataA_finalize(struct sDataA* self);
int sDataA_fun(struct sDataA* self, int a, int b);
void fun_default_parametor(int x, int y);
struct tuple2$2intbool* fun_exception(int x, int y);
static struct tuple2$2intbool* tuple2$2intbool_initialize(struct tuple2$2intbool* self, int v1, _Bool v2);
static void tuple2$2intboolp_finalize(struct tuple2$2intbool* self);
int main();
static void sData_finalize(struct sData* self);
void method_block1_code2HelloWorld2c(struct __current_stack1__* parent);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static struct list$1int* list$1intp_initialize(struct list$1int* self);
static void list$1intp_finalize(struct list$1int* self);
static void list$1intp_push_back(struct list$1int* self, int item);
static int list$1intp_begin(struct list$1int* self);
static _Bool list$1intp_end(struct list$1int* self);
static int list$1intp_next(struct list$1int* self);
static void list$1intp_each(struct list$1int* self, void* parent, void (*block)(void*,int,int,_Bool*));
void method_block2_code2HelloWorld2c(struct __current_stack2__* parent, int it, int it2, _Bool* it3);
void method_block3_code2HelloWorld2c(struct __current_stack3__* parent, int it, int it2, _Bool* it3);
static int list$1intp_item(struct list$1int* self, int position, int default_value);
static void list$1intp_insert(struct list$1int* self, int position, int item);
static void list$1charphp_insert(struct list$1charph* self, int position, char* item);
static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value);
static void list$1charphp_reset(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static int list$1charphp_length(struct list$1charph* self);
static void list$1intp_delete(struct list$1int* self, int head, int tail);
static void list$1intp_reset(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static void list$1charphp_replace(struct list$1charph* self, int position, char* item);
static _Bool list$1intp_equals(struct list$1int* left, struct list$1int* right);
static int list$1intp_find(struct list$1int* self, int item, int default_value);
static struct list$1int* list$1intp_sublist(struct list$1int* self, int begin, int tail);
void method_block4_code2HelloWorld2c(struct __current_stack4__* parent, int it, int it2, _Bool* it3);
static void list$1intp_operator_store_element(struct list$1int* self, int position, int item);
static void list$1intp_replace(struct list$1int* self, int position, int item);
static int list$1intp_operator_load_element(struct list$1int* self, int index);
static _Bool list$1intp_operator_equals(struct list$1int* self, struct list$1int* right);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
void method_block5_code2HelloWorld2c(struct __current_stack5__* parent, int it, int it2, _Bool* it3);
static struct map$2charpint* map$2charpint_initialize_with_values(struct map$2charpint* self, int num_keys, char** keys, int* values);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charpintp_insert(struct map$2charpint* self, char* key, int item);
static void map$2charpintp_rehash(struct map$2charpint* self);
static char* map$2charpintp_begin(struct map$2charpint* self);
static _Bool map$2charpintp_end(struct map$2charpint* self);
static char* map$2charpintp_next(struct map$2charpint* self);
static int map$2charpintp_at(struct map$2charpint* self, char* key, int default_value);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void list$1charpp_push_back(struct list$1charp* self, char* item);
static void map$2charpintp_finalize(struct map$2charpint* self);
static _Bool map$2charpintp_operator_equals(struct map$2charpint* left, struct map$2charpint* right);
static _Bool map$2charpintp_equals(struct map$2charpint* left, struct map$2charpint* right);
static char* list$1charpp_item(struct list$1charp* self, int position, char* default_value);
static int map$2charpintp_operator_load_element(struct map$2charpint* self, char* key);
static struct map$2charpint* map$2charpintp_clone(struct map$2charpint* self);
static struct map$2charpint* map$2charpintp_initialize(struct map$2charpint* self);
static void map$2charpintp_insert2(struct map$2charpint* self, char* key, int item);
static struct tuple1$1int* tuple1$1intp_initialize(struct tuple1$1int* self, int v1);
static void tuple1$1intp_finalize(struct tuple1$1int* self);
static struct tuple1$1charph* tuple1$1charphp_initialize(struct tuple1$1charph* self, char* v1);
static void tuple1$1charphp_finalize(struct tuple1$1charph* self);
static struct tuple1$1charph* tuple1$1charphp_clone(struct tuple1$1charph* self);
static _Bool tuple1$1charphp_equals(struct tuple1$1charph* left, struct tuple1$1charph* right);
static _Bool tuple1$1charphp_operator_equals(struct tuple1$1charph* left, struct tuple1$1charph* right);
static struct tuple2$2charphint* tuple2$2charphint_initialize(struct tuple2$2charphint* self, char* v1, int v2);
static void tuple2$2charphintp_finalize(struct tuple2$2charphint* self);
static struct tuple2$2charpint* tuple2$2charpint_initialize(struct tuple2$2charpint* self, char* v1, int v2);
static void tuple2$2charpintp_finalize(struct tuple2$2charpint* self);
static _Bool tuple2$2charpintp_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right);
static _Bool tuple2$2charpintp_operator_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right);
static _Bool tuple2$2charpintp_not_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right);
static _Bool tuple2$2charpintp_operator_not_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right);
static struct sDataA* sDataA_clone(struct sDataA* self);
static struct list$1IAph* list$1IAphp_initialize(struct list$1IAph* self);
static void list$1IAphp_finalize(struct list$1IAph* self);
static void list$1IAphp_push_back(struct list$1IAph* self, struct IA* item);
static struct IA* list$1IAphp_begin(struct list$1IAph* self);
static _Bool list$1IAphp_end(struct list$1IAph* self);
static struct IA* list$1IAphp_next(struct list$1IAph* self);
static struct tuple3$3intintbool* tuple3$3intintbool_initialize(struct tuple3$3intintbool* self, int v1, int v2, _Bool v3);
static void tuple3$3intintboolp_finalize(struct tuple3$3intintbool* self);
static int tuple2$2intboolp_catch(struct tuple2$2intbool* self, void* parent, void (*block)(void*));
void method_block6_code2HelloWorld2c(struct __current_stack6__* parent);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static _Bool list$1charphp_operator_equals(struct list$1charph* self, struct list$1charph* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
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
    result_22=(char*)come_increment_ref_count(((char*)(right_value0=(char*)come_calloc(1, sizeof(char)*(1*(len_21))))));
    right_value0 = come_decrement_ref_count(right_value0, 1, 0);
    strncpy(result_22,str,len_21);
    char* __result16__ = result_22;
    result_22 = come_decrement_ref_count(result_22, 0, 1);
    return __result16__;
}
static inline _Bool int_equals(int self, int right){
    _Bool __result17__ = self==right;
    return __result17__;
}
static inline _Bool bool_equals(_Bool self, _Bool right){
    _Bool __result18__ = self==right;
    return __result18__;
}
static inline _Bool char_equals(char self, char right){
    _Bool __result19__ = self==right;
    return __result19__;
}
static inline _Bool short_equals(short short self, short short right){
    _Bool __result20__ = self==right;
    return __result20__;
}
static inline _Bool long_equals(long self, long right){
    _Bool __result21__ = self==right;
    return __result21__;
}
static inline _Bool string_equals(char* self, char* right){
    _Bool __result22__ = strcmp(self,right)==0;
    return __result22__;
}
static inline _Bool string_operator_equals(char* self, char* right){
    _Bool __result23__ = strcmp(self,right)==0;
    return __result23__;
}
static inline _Bool charp_operator_equals(char* self, char* right){
    _Bool __result24__ = strcmp(self,right)==0;
    return __result24__;
}
static inline _Bool charp_equals(char* self, char* right){
    _Bool __result25__ = strcmp(self,right)==0;
    return __result25__;
}
static inline char* charp_operator_add(char* self, char* right){
int len_23;
void* right_value1;
char* result_24;
memset(&len_23, 0, sizeof(int));
memset(&result_24, 0, sizeof(char*));
    len_23=strlen(self)+strlen(right);
    result_24=(char*)come_increment_ref_count(((char*)(right_value1=(char*)come_calloc(1, sizeof(char)*(1*(len_23+1))))));
    right_value1 = come_decrement_ref_count(right_value1, 1, 0);
    strncpy(result_24,self,len_23+1);
    strncat(result_24,right,len_23+1);
    char* __result26__ = result_24;
    result_24 = come_decrement_ref_count(result_24, 0, 1);
    return __result26__;
}
static inline char* string_operator_add(char* self, char* right){
int len_25;
void* right_value2;
char* result_26;
memset(&len_25, 0, sizeof(int));
memset(&result_26, 0, sizeof(char*));
    len_25=strlen(self)+strlen(right);
    result_26=(char*)come_increment_ref_count(((char*)(right_value2=(char*)come_calloc(1, sizeof(char)*(1*(len_25+1))))));
    right_value2 = come_decrement_ref_count(right_value2, 1, 0);
    strncpy(result_26,self,len_25+1);
    strncat(result_26,right,len_25+1);
    char* __result27__ = result_26;
    result_26 = come_decrement_ref_count(result_26, 0, 1);
    return __result27__;
}
static inline unsigned int int_get_hash_key(int value){
    unsigned int __result28__ = value;
    return __result28__;
}
static inline unsigned int bool_get_hash_key(_Bool value){
    unsigned int __result29__ = (int_get_hash_key(((int)value)));
    return __result29__;
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
    unsigned int __result30__ = result_27;
    return __result30__;
}
static inline unsigned int charp_get_hash_key(char* value){
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
    unsigned int __result31__ = result_29;
    return __result31__;
}
static inline int int_clone(int self){
    int __result33__ = self;
    return __result33__;
}
static inline char* charp_clone(char* self){
void* right_value3;
    char* __result34__ = ((char*)(right_value3=__builtin_string(self)));
    return __result34__;
}
static inline char* string_clone(char* self){
void* right_value4;
    char* __result35__ = ((char*)(right_value4=__builtin_string(self)));
    return __result35__;
}
static inline int long_clone(long self){
    int __result36__ = self;
    return __result36__;
}
static inline short int short_clone(short short self){
    short int __result37__ = self;
    return __result37__;
}
static inline char char_clone(char self){
    char __result38__ = self;
    return __result38__;
}
static inline double double_clone(double self){
    double __result39__ = self;
    return __result39__;
}
static inline float float_clone(float self){
    float __result40__ = self;
    return __result40__;
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
    self->buf=(char*)come_increment_ref_count(((char*)(right_value5=(char*)come_calloc(1, sizeof(char)*(1*(self->size))))));
    right_value5 = come_decrement_ref_count(right_value5, 1, 0);
    self->buf[0]=0;
    self->len=0;
    struct buffer* __result41__ = self;
    call_finalizer(buffer_finalize,self,0, 0, 1);
    return __result41__;
}
static inline struct buffer* buffer_clone(struct buffer* self){
void* right_value6;
struct buffer* result_31;
void* right_value7;
memset(&result_31, 0, sizeof(struct buffer*));
    if(self==((void*)0)) {
        struct buffer* __result42__ = ((void*)0);
        return __result42__;
    }
    result_31=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))));
    call_finalizer(buffer_finalize,right_value6,0, 1, 0);
    result_31->size=self->size;
    if(result_31->buf) {(char*)come_decrement_ref_count(result_31->buf,0,0); }
    result_31->buf=(char*)come_increment_ref_count(((char*)(right_value7=(char*)come_calloc(1, sizeof(char)*(1*(self->size))))));
    right_value7 = come_decrement_ref_count(right_value7, 1, 0);
    result_31->len=self->len;
    memcpy(result_31->buf,self->buf,self->len);
    struct buffer* __result43__ = result_31;
    call_finalizer(buffer_finalize,result_31,0, 0, 1);
    return __result43__;
}
static inline int buffer_length(struct buffer* self){
    int __result44__ = self->len;
    return __result44__;
}
static inline void buffer_reset(struct buffer* self){
    self->buf[0]=0;
    self->len=0;
}
static inline void buffer_append(struct buffer* self, char* mem, int size){
void* right_value8;
char* old_buf_32;
int old_len_33;
int new_size_34;
void* right_value9;
memset(&old_buf_32, 0, sizeof(char*));
memset(&old_len_33, 0, sizeof(int));
memset(&new_size_34, 0, sizeof(int));
    if(self->len+size+1+1>=self->size) {
        old_buf_32=(char*)come_increment_ref_count(((char*)(right_value8=charp_clone(self->buf))));
        right_value8 = come_decrement_ref_count(right_value8, 1, 0);
        old_len_33=self->len;
        new_size_34=(self->size+size+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count(((char*)(right_value9=(char*)come_calloc(1, sizeof(char)*(1*(new_size_34))))));
        right_value9 = come_decrement_ref_count(right_value9, 1, 0);
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
void* right_value10;
memset(&new_size_35, 0, sizeof(int));
    if(self->len+1+1+1>=self->size) {
        new_size_35=(self->size+10+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count(((char*)(right_value10=(char*)come_calloc(1, sizeof(char)*(1*(new_size_35))))));
        right_value10 = come_decrement_ref_count(right_value10, 1, 0);
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
void* right_value11;
    char* __result45__ = ((char*)(right_value11=__builtin_string(self->buf)));
    return __result45__;
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
void* right_value12;
int i_38;
memset(&len_36, 0, sizeof(int));
memset(&new_size_37, 0, sizeof(int));
memset(&i_38, 0, sizeof(int));
    len_36=self->len;
    len_36=(len_36+3)&~3;
    if(len_36>=self->size) {
        new_size_37=(self->size+1+1)*2;
        if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
        self->buf=(char*)come_increment_ref_count(((char*)(right_value12=(char*)come_calloc(1, sizeof(char)*(1*(new_size_37))))));
        right_value12 = come_decrement_ref_count(right_value12, 1, 0);
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
    int __result46__ = strcmp(left->buf,right->buf);
    return __result46__;
}
static inline struct buffer* string_to_buffer(char* self){
void* right_value13;
void* right_value14;
struct buffer* result_39;
memset(&result_39, 0, sizeof(struct buffer*));
    result_39=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    call_finalizer(buffer_finalize,right_value13,0, 1, 0);
    call_finalizer(buffer_finalize,right_value14,0, 1, 0);
    buffer_append_str(result_39,self);
    struct buffer* __result47__ = result_39;
    call_finalizer(buffer_finalize,result_39,0, 0, 1);
    return __result47__;
}
static inline char* xsprintf(char* msg, ...){
va_list args_40;
char* result_41;
int len_42;
void* right_value15;
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
    result2_43=(char*)come_increment_ref_count(((char*)(right_value15=__builtin_string(result_41))));
    right_value15 = come_decrement_ref_count(right_value15, 1, 0);
    free(result_41);
    char* __result48__ = result2_43;
    call_finalizer(va_list_finalize,(&args_40),1, 0, 0);
    result2_43 = come_decrement_ref_count(result2_43, 0, 1);
    return __result48__;
}
static inline void FILE_fclose(struct _IO_FILE* f){
    fclose(f);
}
static inline char* FILE_read(struct _IO_FILE* f){
void* right_value16;
void* right_value17;
struct buffer* buf_44;
char buf2_45[8192];
int size_46;
void* right_value18;
memset(&buf_44, 0, sizeof(struct buffer*));
memset(&buf2_45, 0, sizeof(char));
memset(&size_46, 0, sizeof(int));
    buf_44=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    call_finalizer(buffer_finalize,right_value16,0, 1, 0);
    call_finalizer(buffer_finalize,right_value17,0, 1, 0);
    while(1) {
        size_46=fread(buf2_45,1,8192,f);
        buffer_append(buf_44,buf2_45,size_46);
        if(size_46<8192) {
            break;
        }
    }
    char* __result49__ = ((char*)(right_value18=buffer_to_string(buf_44)));
    call_finalizer(buffer_finalize,buf_44,0, 0, 0);
    return __result49__;
}
static inline struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
char msg2_47[1024];
va_list args_48;
memset(&msg2_47, 0, sizeof(char));
memset(&args_48, 0, sizeof(va_list));
    __builtin_va_start(args_48,msg);
    vsnprintf(msg2_47,1024,msg,args_48);
    __builtin_va_end(args_48);
    (void)fprintf(f,"%s",msg2_47);
    struct _IO_FILE* __result50__ = f;
    call_finalizer(va_list_finalize,(&args_48),1, 0, 0);
    return __result50__;
}
static inline char* string_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_49;
void* right_value19;
memset(&f_49, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_49=fopen(file_name,"a");
    }
    else {
        f_49=fopen(file_name,"w");
    }
    FILE_fprintf(f_49,"%s",self);
    FILE_fclose(f_49);
    char* __result51__ = ((char*)(right_value19=__builtin_string(self)));
    call_finalizer(FILE_finalize,(&f_49),1, 0, 0);
    return __result51__;
}
static inline char* charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_50;
void* right_value20;
memset(&f_50, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_50=fopen(file_name,"a");
    }
    else {
        f_50=fopen(file_name,"w");
    }
    FILE_fprintf(f_50,"%s",self);
    FILE_fclose(f_50);
    char* __result52__ = ((char*)(right_value20=__builtin_string(self)));
    call_finalizer(FILE_finalize,(&f_50),1, 0, 0);
    return __result52__;
}
static inline int string_length(char* str){
    int __result53__ = strlen(str);
    return __result53__;
}
static inline int charp_length(char* str){
    int __result54__ = strlen(str);
    return __result54__;
}
static inline char* string_reverse(char* str){
int len_51;
void* right_value21;
char* result_52;
int i_53;
memset(&len_51, 0, sizeof(int));
memset(&result_52, 0, sizeof(char*));
memset(&i_53, 0, sizeof(int));
    len_51=strlen(str);
    result_52=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(len_51+1))))));
    right_value21 = come_decrement_ref_count(right_value21, 1, 0);
    for(
    i_53=0;
    i_53<len_51;
    i_53++
    ){
        result_52[i_53]=str[len_51-i_53-1];
    }
    result_52[len_51]=0;
    char* __result55__ = result_52;
    result_52 = come_decrement_ref_count(result_52, 0, 1);
    return __result55__;
}
static inline char* charp_reverse(char* str){
int len_54;
void* right_value22;
char* result_55;
int i_56;
memset(&len_54, 0, sizeof(int));
memset(&result_55, 0, sizeof(char*));
memset(&i_56, 0, sizeof(int));
    len_54=strlen(str);
    result_55=(char*)come_increment_ref_count(((char*)(right_value22=(char*)come_calloc(1, sizeof(char)*(1*(len_54+1))))));
    right_value22 = come_decrement_ref_count(right_value22, 1, 0);
    for(
    i_56=0;
    i_56<len_54;
    i_56++
    ){
        result_55[i_56]=str[len_54-i_56-1];
    }
    result_55[len_54]=0;
    char* __result56__ = result_55;
    result_55 = come_decrement_ref_count(result_55, 0, 1);
    return __result56__;
}
static inline char* charp_substring(char* str, int head, int tail){
void* right_value23;
int len_57;
void* right_value24;
void* right_value25;
void* right_value26;
void* right_value27;
void* right_value28;
char* result_58;
memset(&len_57, 0, sizeof(int));
memset(&result_58, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result57__ = ((char*)(right_value23=__builtin_string("")));
        return __result57__;
    }
    len_57=strlen(str);
    if(head<0) {
        head+=len_57;
    }
    if(tail<0) {
        tail+=len_57+1;
    }
    if(head>tail) {
        char* __result58__ = ((char*)(right_value25=string_reverse(((char*)(right_value24=charp_substring(str,tail,head))))));
        right_value24 = come_decrement_ref_count(right_value24, 1, 0);
        return __result58__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_57) {
        tail=len_57;
    }
    if(head==tail) {
        char* __result59__ = ((char*)(right_value26=__builtin_string("")));
        return __result59__;
    }
    if(tail-head+1<1) {
        char* __result60__ = ((char*)(right_value27=__builtin_string("")));
        return __result60__;
    }
    result_58=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1))))));
    right_value28 = come_decrement_ref_count(right_value28, 1, 0);
    memcpy(result_58,str+head,tail-head);
    result_58[tail-head]=0;
    char* __result61__ = result_58;
    result_58 = come_decrement_ref_count(result_58, 0, 1);
    return __result61__;
}
static inline char* string_substring(char* str, int head, int tail){
void* right_value29;
int len_59;
void* right_value30;
void* right_value31;
void* right_value32;
void* right_value33;
void* right_value34;
char* result_60;
memset(&len_59, 0, sizeof(int));
memset(&result_60, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result62__ = ((char*)(right_value29=__builtin_string("")));
        return __result62__;
    }
    len_59=strlen(str);
    if(head<0) {
        head+=len_59;
    }
    if(tail<0) {
        tail+=len_59+1;
    }
    if(head>tail) {
        char* __result63__ = ((char*)(right_value31=string_reverse(((char*)(right_value30=charp_substring(str,tail,head))))));
        right_value30 = come_decrement_ref_count(right_value30, 1, 0);
        return __result63__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_59) {
        tail=len_59;
    }
    if(head==tail) {
        char* __result64__ = ((char*)(right_value32=__builtin_string("")));
        return __result64__;
    }
    if(tail-head+1<1) {
        char* __result65__ = ((char*)(right_value33=__builtin_string("")));
        return __result65__;
    }
    result_60=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1))))));
    right_value34 = come_decrement_ref_count(right_value34, 1, 0);
    memcpy(result_60,str+head,tail-head);
    result_60[tail-head]=0;
    char* __result66__ = result_60;
    result_60 = come_decrement_ref_count(result_60, 0, 1);
    return __result66__;
}
static inline char* string_chomp(char* str){
void* right_value35;
char* result_61;
void* right_value36;
memset(&result_61, 0, sizeof(char*));
    result_61=(char*)come_increment_ref_count(((char*)(right_value35=__builtin_string(str))));
    right_value35 = come_decrement_ref_count(right_value35, 1, 0);
    if(result_61[string_length(result_61)-1]==10) {
        char* __result67__ = ((char*)(right_value36=string_substring(result_61,0,-2)));
        return __result67__;
    }
    char* __result68__ = result_61;
    result_61 = come_decrement_ref_count(result_61, 0, 1);
    return __result68__;
}
static inline char* charp_chomp(char* str){
void* right_value37;
char* result_62;
void* right_value38;
memset(&result_62, 0, sizeof(char*));
    result_62=(char*)come_increment_ref_count(((char*)(right_value37=__builtin_string(str))));
    right_value37 = come_decrement_ref_count(right_value37, 1, 0);
    if(result_62[string_length(result_62)-1]==10) {
        char* __result69__ = ((char*)(right_value38=string_substring(result_62,0,-2)));
        return __result69__;
    }
    char* __result70__ = result_62;
    result_62 = come_decrement_ref_count(result_62, 0, 1);
    return __result70__;
}
static inline char* xbasename(char* path){
char* p_63;
void* right_value39;
void* right_value40;
void* right_value41;
memset(&p_63, 0, sizeof(char*));
    p_63=path+strlen(path);
    while(p_63>=path) {
        if(*p_63==47) {
            break;
        }
        else {
            p_63--;
        }
    }
    if(p_63<path) {
        char* __result71__ = ((char*)(right_value39=__builtin_string(path)));
        return __result71__;
    }
    else {
        char* __result72__ = ((char*)(right_value40=__builtin_string(p_63+1)));
        return __result72__;
    }
    char* __result73__ = ((char*)(right_value41=__builtin_string("")));
    return __result73__;
}
static inline char* xdirname(char* path){
void* right_value42;
void* right_value43;
    char* __result74__ = ((char*)(right_value43=__builtin_string(dirname(((char*)(right_value42=__builtin_string(path)))))));
    right_value42 = come_decrement_ref_count(right_value42, 1, 0);
    return __result74__;
}
static inline char* xnoextname(char* path){
void* right_value44;
char* path2_64;
char* p_65;
void* right_value45;
void* right_value46;
void* right_value47;
memset(&path2_64, 0, sizeof(char*));
memset(&p_65, 0, sizeof(char*));
    path2_64=(char*)come_increment_ref_count(((char*)(right_value44=xbasename(path))));
    right_value44 = come_decrement_ref_count(right_value44, 1, 0);
    p_65=path2_64+strlen(path2_64);
    while(p_65>=path2_64) {
        if(*p_65==46) {
            break;
        }
        else {
            p_65--;
        }
    }
    if(p_65<path2_64) {
        char* __result75__ = ((char*)(right_value45=__builtin_string(path2_64)));
        return __result75__;
    }
    else {
        char* __result76__ = ((char*)(right_value46=string_substring(path2_64,0,p_65-path2_64)));
        return __result76__;
    }
    char* __result77__ = ((char*)(right_value47=__builtin_string("")));
    path2_64 = come_decrement_ref_count(path2_64, 0, 0);
    return __result77__;
}
static inline char* xextname(char* path){
char* p_66;
void* right_value48;
void* right_value49;
void* right_value50;
memset(&p_66, 0, sizeof(char*));
    p_66=path+strlen(path);
    while(p_66>=path) {
        if(*p_66==46) {
            break;
        }
        else {
            p_66--;
        }
    }
    if(p_66<path) {
        char* __result78__ = ((char*)(right_value48=__builtin_string(path)));
        return __result78__;
    }
    else {
        char* __result79__ = ((char*)(right_value49=__builtin_string(p_66+1)));
        return __result79__;
    }
    char* __result80__ = ((char*)(right_value50=__builtin_string("")));
    return __result80__;
}
static inline char* xrealpath(char* path){
char* result_67;
void* right_value51;
char* result2_68;
memset(&result_67, 0, sizeof(char*));
memset(&result2_68, 0, sizeof(char*));
    result_67=realpath(path,((void*)0));
    result2_68=(char*)come_increment_ref_count(((char*)(right_value51=__builtin_string(result_67))));
    right_value51 = come_decrement_ref_count(right_value51, 1, 0);
    free(result_67);
    char* __result81__ = result2_68;
    result2_68 = come_decrement_ref_count(result2_68, 0, 1);
    return __result81__;
}
static inline _Bool xiswalpha(unsigned int c){
_Bool result_69;
memset(&result_69, 0, sizeof(_Bool));
    result_69=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result82__ = result_69;
    return __result82__;
}
static inline _Bool xiswblank(unsigned int c){
    _Bool __result83__ = c==32||c==9;
    return __result83__;
}
static inline _Bool xiswdigit(unsigned int c){
    _Bool __result84__ = (c>=48&&c<=57);
    return __result84__;
}
static inline _Bool xiswalnum(unsigned int c){
    _Bool __result85__ = xiswalpha(c)||xiswdigit(c);
    return __result85__;
}
static inline _Bool xisalpha(char c){
_Bool result_70;
memset(&result_70, 0, sizeof(_Bool));
    result_70=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result86__ = result_70;
    return __result86__;
}
static inline _Bool xisblank(char c){
    _Bool __result87__ = c==32||c==9;
    return __result87__;
}
static inline _Bool xisdigit(char c){
    _Bool __result88__ = (c>=48&&c<=57);
    return __result88__;
}
static inline _Bool xisalnum(char c){
    _Bool __result89__ = xisalpha(c)||xisdigit(c);
    return __result89__;
}
static inline _Bool xisascii(char c){
_Bool result_71;
memset(&result_71, 0, sizeof(_Bool));
    result_71=(c>=32&&c<=126);
    _Bool __result90__ = result_71;
    return __result90__;
}
static inline _Bool xiswascii(unsigned int c){
_Bool result_72;
memset(&result_72, 0, sizeof(_Bool));
    result_72=(c>=32&&c<=126);
    _Bool __result91__ = result_72;
    return __result91__;
}
static inline char* string_read(char* file_name){
struct _IO_FILE* f_73;
void* right_value52;
void* right_value53;
char* result_74;
memset(&f_73, 0, sizeof(struct _IO_FILE*));
memset(&result_74, 0, sizeof(char*));
    f_73=fopen(file_name,"r");
    if(f_73==((void*)0)) {
        char* __result92__ = ((char*)(right_value52=__builtin_string("")));
        return __result92__;
    }
    result_74=(char*)come_increment_ref_count(((char*)(right_value53=FILE_read(f_73))));
    right_value53 = come_decrement_ref_count(right_value53, 1, 0);
    FILE_fclose(f_73);
    char* __result93__ = result_74;
    result_74 = come_decrement_ref_count(result_74, 0, 1);
    return __result93__;
}
static inline char* charp_read(char* file_name){
struct _IO_FILE* f_75;
void* right_value54;
void* right_value55;
char* result_76;
memset(&f_75, 0, sizeof(struct _IO_FILE*));
memset(&result_76, 0, sizeof(char*));
    f_75=fopen(file_name,"r");
    if(f_75==((void*)0)) {
        char* __result94__ = ((char*)(right_value54=__builtin_string("")));
        return __result94__;
    }
    result_76=(char*)come_increment_ref_count(((char*)(right_value55=FILE_read(f_75))));
    right_value55 = come_decrement_ref_count(right_value55, 1, 0);
    FILE_fclose(f_75);
    char* __result95__ = result_76;
    result_76 = come_decrement_ref_count(result_76, 0, 1);
    return __result95__;
}
static inline void bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
}
static inline void bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
}
static inline char* string_to_string(char* self){
void* right_value56;
    char* __result96__ = ((char*)(right_value56=__builtin_string(self)));
    return __result96__;
}
static inline struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* right_value57;
void* right_value58;
struct list$1charph* result_79;
char buf_80[8192];
void* right_value62;
memset(&result_79, 0, sizeof(struct list$1charph*));
memset(&buf_80, 0, sizeof(char));
    result_79=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value58=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value57=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charphp_finalize,right_value58,0, 1, 0);
    while(1) {
        if(fgets(buf_80,8192,f)==((void*)0)) {
            break;
        }
        list$1charphp_push_back(result_79,(char*)come_increment_ref_count(((char*)(right_value62=__builtin_string(buf_80)))));
        right_value62 = come_decrement_ref_count(right_value62, 1, 0);
    }
    struct list$1charph* __result98__ = result_79;
    call_finalizer(list$1charphp_finalize,result_79,0, 0, 1);
    return __result98__;
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
    void* __result7__ = mem_0+sizeof(int)+sizeof(long);
    return __result7__;
}

static void* come_increment_ref_count(void* mem){
int* ref_count_3;
memset(&ref_count_3, 0, sizeof(int*));
    if(mem==((void*)0)) {
        void* __result8__ = mem;
        return __result8__;
    }
    ref_count_3=(int*)((char*)mem-sizeof(int)-sizeof(long));
    (*ref_count_3)++;
    void* __result9__ = mem;
    return __result9__;
}

static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free){
int* ref_count_4;
int count_5;
memset(&ref_count_4, 0, sizeof(int*));
memset(&count_5, 0, sizeof(int));
    if(mem==((void*)0)) {
        void* __result10__ = ((void*)0);
        return __result10__;
    }
    ref_count_4=(int*)((char*)mem-sizeof(int)-sizeof(long));
    if(!no_decrement) {
        (*ref_count_4)--;
    }
    count_5=*ref_count_4;
    if(!no_free&&count_5<=0) {
        ncfree(ref_count_4);
        void* __result11__ = ((void*)0);
        return __result11__;
    }
    void* __result12__ = mem;
    return __result12__;
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
    void* __result13__ = result_11;
    return __result13__;
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
        void* __result14__ = ((void*)0);
        return __result14__;
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
    void* __result15__ = (char*)ret_15+sizeof(int)+sizeof(long);
    return __result15__;
}











































static void va_list_finalize(va_list* self){
}





static void FILE_finalize(struct _IO_FILE* self){
}































static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1charph* __result97__ = self;
        call_finalizer(list$1charphp_finalize,self,0, 0, 1);
        return __result97__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_77;
struct list_item$1charph* prev_it_78;
memset(&it_77, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1charph*));
            it_77=self->head;
            while(it_77!=((void*)0)) {
                if(1) {
                    it_77->item = come_decrement_ref_count(it_77->item, 0, 0);
                }
                prev_it_78=it_77;
                it_77=it_77->next;
                come_free_object(prev_it_78);
            }
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value59;
struct list_item$1charph* litem_81;
void* right_value60;
struct list_item$1charph* litem_82;
void* right_value61;
struct list_item$1charph* litem_83;
memset(&litem_81, 0, sizeof(struct list_item$1charph*));
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
memset(&litem_83, 0, sizeof(struct list_item$1charph*));
            if(self->len==0) {
                litem_81=((struct list_item$1charph*)(right_value59=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_81->prev=((void*)0);
                litem_81->next=((void*)0);
                if(litem_81->item) {(char*)come_decrement_ref_count(litem_81->item,0,0); }
                litem_81->item=(char*)come_increment_ref_count(item);
                self->tail=litem_81;
                self->head=litem_81;
            }
            else if(self->len==1) {
                litem_82=((struct list_item$1charph*)(right_value60=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_82->prev=self->head;
                litem_82->next=((void*)0);
                if(litem_82->item) {(char*)come_decrement_ref_count(litem_82->item,0,0); }
                litem_82->item=(char*)come_increment_ref_count(item);
                self->tail=litem_82;
                self->head->next=litem_82;
            }
            else {
                litem_83=((struct list_item$1charph*)(right_value61=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_83->prev=self->tail;
                litem_83->next=((void*)0);
                if(litem_83->item) {(char*)come_decrement_ref_count(litem_83->item,0,0); }
                litem_83->item=(char*)come_increment_ref_count(item);
                self->tail->next=litem_83;
                self->tail=litem_83;
            }
            self->len++;
            item = come_decrement_ref_count(item, 0, 1);
}

int* funHeap(int x, int y){
void* right_value66;
int* result_89;
memset(&result_89, 0, sizeof(int*));
    result_89=(int*)come_increment_ref_count(((int*)(right_value66=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value66 = come_decrement_ref_count(right_value66, 1, 0);
    *result_89=x+y;
    int* __result101__ = result_89;
    result_89 = come_decrement_ref_count(result_89, 0, 1);
    return __result101__;
}

int funHeap2(int* x, int* y){
    int __result102__ = *x+*y;
    x = come_decrement_ref_count(x, 0, 1);
    y = come_decrement_ref_count(y, 0, 1);
    return __result102__;
}

int intp_fun(int* self){
    int __result103__ = *self;
    return __result103__;
}

struct sDataA* sDataA_initialize(struct sDataA* self, int a, int b){
    self->a=a;
    self->b=b;
    struct sDataA* __result104__ = self;
    call_finalizer(sDataA_finalize,self,0, 0, 1);
    return __result104__;
}

static void sDataA_finalize(struct sDataA* self){
}

int sDataA_fun(struct sDataA* self, int a, int b){
    int __result105__ = self->a+self->b+a+b;
    return __result105__;
}

void fun_default_parametor(int x, int y){
    xassert("default parametor",x==1&&y==2);
}

struct tuple2$2intbool* fun_exception(int x, int y){
void* right_value67;
void* right_value68;
    struct tuple2$2intbool* __result107__ = ((struct tuple2$2intbool*)(right_value68=tuple2$2intbool_initialize((struct tuple2$2intbool*)come_increment_ref_count(((struct tuple2$2intbool*)(right_value67=(struct tuple2$2intbool*)come_calloc(1, sizeof(struct tuple2$2intbool)*(1))))),x+y,(_Bool)1)));
    return __result107__;
}

static struct tuple2$2intbool* tuple2$2intbool_initialize(struct tuple2$2intbool* self, int v1, _Bool v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$2intbool* __result106__ = self;
        call_finalizer(tuple2$2intboolp_finalize,self,0, 0, 1);
        return __result106__;
}

static void tuple2$2intboolp_finalize(struct tuple2$2intbool* self){
}

int main(){
void* right_value69;
char* a_90;
char* p_91;
void* p2_92;
int count_93;
int size2_94;
char* mem2_95;
int b_96;
int* a_97;
int a2_98;
int b_99;
int n_100;
void* right_value70;
char* ax_101;
void* right_value71;
char* a_102;
char* b_103;
struct sData data_104;
void* right_value72;
char* str_105;
void* right_value73;
struct sData* data_106;
void* right_value74;
void* right_value75;
void* right_value76;
int* axyz_107;
void* right_value77;
int* xxx_108;
void* right_value78;
int* yyy_109;
void* right_value79;
int* zzz_110;
void* right_value80;
int bzyz_111;
int* azyz_112;
int n_113;
struct __current_stack1__ __current_stack1__;
void* right_value81;
void* right_value82;
struct list$1charph* liX_114;
void* right_value83;
void* right_value84;
void* right_value85;
char* it_116;
void* right_value86;
void* right_value87;
struct list$1int* liX2_120;
int it_125;
int aX_127;
struct __current_stack2__ __current_stack2__;
int aXYZY_131;
void* right_value91;
void* right_value92;
struct list$1charph* li_132;
void* right_value93;
void* right_value94;
void* right_value95;
char* it_133;
void* right_value96;
void* right_value97;
struct list$1int* li2_134;
int it_135;
int aXL_136;
struct __current_stack3__ __current_stack3__;
void* right_value104;
void* right_value105;
void* right_value106;
struct list$1charph* li3_167;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
void* right_value111;
void* right_value112;
struct list$1int* li4_170;
void* right_value113;
void* right_value114;
struct list$1int* li5_171;
void* right_value115;
void* right_value116;
struct list$1int* li6_176;
void* right_value119;
int* axyzX_180;
void* right_value120;
void* right_value121;
void* right_value122;
void* right_value123;
void* right_value124;
char* strXYXY_181;
void* right_value125;
void* right_value126;
struct list$1int* liZ_182;
struct __current_stack4__ __current_stack4__;
void* right_value127;
void* right_value128;
struct list$1int* liZ2_186;
int __list_values1___187[3];
void* right_value129;
void* right_value130;
int __list_values2___189[3];
void* right_value131;
void* right_value132;
int __list_values3___190[5];
void* right_value133;
void* right_value134;
struct __current_stack5__ __current_stack5__;
char* __map_keys1___191[2];
int __map_element1___192[2];
void* right_value146;
void* right_value147;
char* __map_keys2___223[2];
int __map_element2___224[2];
void* right_value148;
void* right_value149;
char* __map_keys3___235[2];
int __map_element3___236[2];
void* right_value150;
void* right_value151;
struct map$2charpint* m1_237;
void* right_value161;
struct map$2charpint* m2_248;
void* right_value162;
void* right_value163;
struct tuple1$1int* tt1_249;
void* right_value164;
void* right_value165;
void* right_value166;
struct tuple1$1charph* tt2_250;
void* right_value167;
void* right_value170;
struct tuple1$1charph* tt3_252;
void* right_value171;
void* right_value172;
struct tuple1$1int* ttt1_253;
void* right_value173;
void* right_value174;
void* right_value175;
struct tuple1$1charph* ttt2_254;
void* right_value176;
void* right_value177;
struct tuple1$1charph* ttt3_255;
void* right_value178;
void* right_value179;
void* right_value180;
struct tuple2$2charphint* t4_256;
void* right_value181;
void* right_value182;
void* right_value183;
void* right_value184;
void* right_value185;
void* right_value186;
void* right_value187;
void* right_value188;
void* right_value189;
void* right_value190;
void* right_value191;
struct IA* _inf_value1;
struct sDataA* _inf_obj_value1;
void* right_value193;
struct IA** _inf_valueX1;
struct IA* ia_258;
void* right_value194;
void* right_value195;
struct list$1IAph* liIA_261;
void* right_value199;
void* right_value200;
struct IA* _inf_value2;
struct sDataA* _inf_obj_value2;
void* right_value202;
struct IA** _inf_valueX5;
void* right_value203;
void* right_value204;
struct IA* _inf_value3;
struct sDataA* _inf_obj_value3;
void* right_value206;
struct IA** _inf_valueX6;
void* right_value207;
void* right_value208;
struct IA* _inf_value4;
struct sDataA* _inf_obj_value4;
void* right_value210;
struct IA** _inf_valueX7;
struct IA* it_269;
void* right_value211;
void* right_value212;
struct tuple3$3intintbool* multiple_assgin_var1;
int aZZZ_271;
int bZZZ_272;
void* right_value213;
void* right_value214;
struct list$1charph* li_str_273;
void* right_value215;
void* right_value216;
void* right_value217;
void* right_value218;
struct __current_stack6__ __current_stack6__;
void* right_value219;
void* right_value220;
void* right_value221;
char* __list_values4___274[3];
void* right_value222;
void* right_value223;
memset(&a_90, 0, sizeof(char*));
memset(&p_91, 0, sizeof(char*));
memset(&p2_92, 0, sizeof(void*));
memset(&count_93, 0, sizeof(int));
memset(&size2_94, 0, sizeof(int));
memset(&mem2_95, 0, sizeof(char*));
memset(&b_96, 0, sizeof(int));
memset(&a_97, 0, sizeof(int*));
memset(&a2_98, 0, sizeof(int));
memset(&b_99, 0, sizeof(int));
memset(&n_100, 0, sizeof(int));
memset(&ax_101, 0, sizeof(char*));
memset(&a_102, 0, sizeof(char*));
memset(&b_103, 0, sizeof(char*));
memset(&data_104, 0, sizeof(struct sData));
memset(&str_105, 0, sizeof(char*));
memset(&data_106, 0, sizeof(struct sData*));
memset(&axyz_107, 0, sizeof(int*));
memset(&xxx_108, 0, sizeof(int*));
memset(&yyy_109, 0, sizeof(int*));
memset(&zzz_110, 0, sizeof(int*));
memset(&bzyz_111, 0, sizeof(int));
memset(&azyz_112, 0, sizeof(int*));
memset(&n_113, 0, sizeof(int));
memset(&liX_114, 0, sizeof(struct list$1charph*));
memset(&it_116, 0, sizeof(char*));
memset(&liX2_120, 0, sizeof(struct list$1int*));
memset(&it_125, 0, sizeof(int));
memset(&aX_127, 0, sizeof(int));
memset(&aXYZY_131, 0, sizeof(int));
memset(&li_132, 0, sizeof(struct list$1charph*));
memset(&it_133, 0, sizeof(char*));
memset(&li2_134, 0, sizeof(struct list$1int*));
memset(&it_135, 0, sizeof(int));
memset(&aXL_136, 0, sizeof(int));
memset(&li3_167, 0, sizeof(struct list$1charph*));
memset(&li4_170, 0, sizeof(struct list$1int*));
memset(&li5_171, 0, sizeof(struct list$1int*));
memset(&li6_176, 0, sizeof(struct list$1int*));
memset(&axyzX_180, 0, sizeof(int*));
memset(&strXYXY_181, 0, sizeof(char*));
memset(&liZ_182, 0, sizeof(struct list$1int*));
memset(&liZ2_186, 0, sizeof(struct list$1int*));
memset(&m1_237, 0, sizeof(struct map$2charpint*));
memset(&m2_248, 0, sizeof(struct map$2charpint*));
memset(&tt1_249, 0, sizeof(struct tuple1$1int*));
memset(&tt2_250, 0, sizeof(struct tuple1$1charph*));
memset(&tt3_252, 0, sizeof(struct tuple1$1charph*));
memset(&ttt1_253, 0, sizeof(struct tuple1$1int*));
memset(&ttt2_254, 0, sizeof(struct tuple1$1charph*));
memset(&ttt3_255, 0, sizeof(struct tuple1$1charph*));
memset(&t4_256, 0, sizeof(struct tuple2$2charphint*));
memset(&ia_258, 0, sizeof(struct IA*));
memset(&liIA_261, 0, sizeof(struct list$1IAph*));
memset(&it_269, 0, sizeof(struct IA*));
memset(&aZZZ_271, 0, sizeof(int));
memset(&bZZZ_272, 0, sizeof(int));
memset(&aZZZ_271, 0, sizeof(int));
memset(&bZZZ_272, 0, sizeof(int));
memset(&li_str_273, 0, sizeof(struct list$1charph*));
    if(1) {
        a_90=(char*)come_increment_ref_count(((char*)(right_value69=(char*)come_calloc(1, sizeof(char)*(1*(128))))));
        right_value69 = come_decrement_ref_count(right_value69, 1, 0);
        a_90 = come_decrement_ref_count(a_90, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_91="ABC";
    p2_92="ABC";
    printf("%s\n",(char*)p2_92);
    printf("%c\n",*p_91);
    count_93=0;
    size2_94=1;
    mem2_95=calloc(1,sizeof(int)+sizeof(long)+count_93*size2_94);
    free(mem2_95);
    a_97=&b_96;
    (*a_97)=123;
    a2_98=123;
    if((_Bool)1) {
        b_99=234;
        n_100=0;
        while(n_100<3) {
            printf("a %d\n",a2_98);
            printf("b %d\n",b_99);
            n_100++;
        }
    }
    ax_101=(char*)come_increment_ref_count(((char*)(right_value70=(char*)come_calloc(1, sizeof(char)*(1*(128))))));
    right_value70 = come_decrement_ref_count(right_value70, 1, 0);
    if(1) {
        a_102=(char*)come_increment_ref_count(((char*)(right_value71=(char*)come_calloc(1, sizeof(char)*(1*(128))))));
        right_value71 = come_decrement_ref_count(right_value71, 1, 0);
        b_103=(char*)come_increment_ref_count(a_102);
        if(data_104.a) {(char*)come_decrement_ref_count(data_104.a,0,0); }
        data_104.a=(char*)come_increment_ref_count(a_102);
        a_102 = come_decrement_ref_count(a_102, 0, 0);
        b_103 = come_decrement_ref_count(b_103, 0, 0);
        call_finalizer(sData_finalize,(&data_104),1, 0, 0);
    }
    str_105=(char*)come_increment_ref_count(((char*)(right_value72=(char*)come_calloc(1, sizeof(char)*(1*(128))))));
    right_value72 = come_decrement_ref_count(right_value72, 1, 0);
    strncpy(str_105,"ABC",128);
    data_106=(struct sData*)come_increment_ref_count(((struct sData*)(right_value73=(struct sData*)come_calloc(1, sizeof(struct sData)*(1)))));
    call_finalizer(sData_finalize,right_value73,0, 1, 0);
    if(data_106->a) {(char*)come_decrement_ref_count(data_106->a,0,0); }
    data_106->a=(char*)come_increment_ref_count(str_105);
    puts(data_106->a);
    ((int*)(right_value74=funHeap(7,7)));
    right_value74 = come_decrement_ref_count(right_value74, 1, 0);
    xassert("right value test",*((int*)(right_value75=funHeap(3,4)))==7);
    right_value75 = come_decrement_ref_count(right_value75, 1, 0);
    axyz_107=(int*)come_increment_ref_count(((int*)(right_value76=funHeap(1,2))));
    right_value76 = come_decrement_ref_count(right_value76, 1, 0);
    xassert("variable test",*axyz_107==3);
    xxx_108=(int*)come_increment_ref_count(((int*)(right_value77=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value77 = come_decrement_ref_count(right_value77, 1, 0);
    *xxx_108=1;
    yyy_109=(int*)come_increment_ref_count(((int*)(right_value78=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value78 = come_decrement_ref_count(right_value78, 1, 0);
    *yyy_109=2;
    xassert("heap",funHeap2((int*)come_increment_ref_count(xxx_108),(int*)come_increment_ref_count(yyy_109))==3);
    zzz_110=(int*)come_increment_ref_count(((int*)(right_value79=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value79 = come_decrement_ref_count(right_value79, 1, 0);
    ((int*)(right_value80=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value80 = come_decrement_ref_count(right_value80, 1, 0);
    bzyz_111=123;
    azyz_112=&bzyz_111;
    xassert("impl",intp_fun(azyz_112)==123);
    n_113=0;
    __current_stack1__.p_91 = &p_91;
    __current_stack1__.p2_92 = &p2_92;
    __current_stack1__.count_93 = &count_93;
    __current_stack1__.size2_94 = &size2_94;
    __current_stack1__.mem2_95 = &mem2_95;
    __current_stack1__.b_96 = &b_96;
    __current_stack1__.a_97 = &a_97;
    __current_stack1__.a2_98 = &a2_98;
    __current_stack1__.ax_101 = &ax_101;
    __current_stack1__.str_105 = &str_105;
    __current_stack1__.data_106 = &data_106;
    __current_stack1__.axyz_107 = &axyz_107;
    __current_stack1__.xxx_108 = &xxx_108;
    __current_stack1__.yyy_109 = &yyy_109;
    __current_stack1__.zzz_110 = &zzz_110;
    __current_stack1__.bzyz_111 = &bzyz_111;
    __current_stack1__.azyz_112 = &azyz_112;
    __current_stack1__.n_113 = &n_113;
    int_times(3,&__current_stack1__,method_block1_code2HelloWorld2c);
    liX_114=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value82=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charphp_finalize,right_value82,0, 1, 0);
    list$1charphp_push_back(liX_114,(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string("ABC")))));
    right_value83 = come_decrement_ref_count(right_value83, 1, 0);
    list$1charphp_push_back(liX_114,(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string("DEF")))));
    right_value84 = come_decrement_ref_count(right_value84, 1, 0);
    list$1charphp_push_back(liX_114,(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string("GHI")))));
    right_value85 = come_decrement_ref_count(right_value85, 1, 0);
    for(
    it_116=list$1charphp_begin((liX_114));
    !list$1charphp_end((liX_114));
    it_116=list$1charphp_next((liX_114))
    ){
        printf("%s\n",it_116);
    }
    liX2_120=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value87=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value86=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value87,0, 1, 0);
    list$1intp_push_back(liX2_120,1);
    list$1intp_push_back(liX2_120,2);
    list$1intp_push_back(liX2_120,3);
    for(
    it_125=list$1intp_begin((liX2_120));
    !list$1intp_end((liX2_120));
    it_125=list$1intp_next((liX2_120))
    ){
        printf("%d\n",it_125);
    }
    aX_127=123;
    __current_stack2__.p_91 = &p_91;
    __current_stack2__.p2_92 = &p2_92;
    __current_stack2__.count_93 = &count_93;
    __current_stack2__.size2_94 = &size2_94;
    __current_stack2__.mem2_95 = &mem2_95;
    __current_stack2__.b_96 = &b_96;
    __current_stack2__.a_97 = &a_97;
    __current_stack2__.a2_98 = &a2_98;
    __current_stack2__.ax_101 = &ax_101;
    __current_stack2__.str_105 = &str_105;
    __current_stack2__.data_106 = &data_106;
    __current_stack2__.axyz_107 = &axyz_107;
    __current_stack2__.xxx_108 = &xxx_108;
    __current_stack2__.yyy_109 = &yyy_109;
    __current_stack2__.zzz_110 = &zzz_110;
    __current_stack2__.bzyz_111 = &bzyz_111;
    __current_stack2__.azyz_112 = &azyz_112;
    __current_stack2__.n_113 = &n_113;
    __current_stack2__.liX_114 = &liX_114;
    __current_stack2__.liX2_120 = &liX2_120;
    __current_stack2__.aX_127 = &aX_127;
    list$1intp_each(liX2_120,&__current_stack2__,method_block2_code2HelloWorld2c);
    xassert("method_block test",aX_127==2);
    xassert("var initialize test",aXYZY_131==0);
    li_132=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value92=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charphp_finalize,right_value92,0, 1, 0);
    list$1charphp_push_back(li_132,(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string("ABC")))));
    right_value93 = come_decrement_ref_count(right_value93, 1, 0);
    list$1charphp_push_back(li_132,(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string("DEF")))));
    right_value94 = come_decrement_ref_count(right_value94, 1, 0);
    list$1charphp_push_back(li_132,(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string("GHI")))));
    right_value95 = come_decrement_ref_count(right_value95, 1, 0);
    for(
    it_133=list$1charphp_begin((li_132));
    !list$1charphp_end((li_132));
    it_133=list$1charphp_next((li_132))
    ){
        printf("%s\n",it_133);
    }
    li2_134=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value97=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value96=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value97,0, 1, 0);
    list$1intp_push_back(li2_134,1);
    list$1intp_push_back(li2_134,2);
    list$1intp_push_back(li2_134,3);
    for(
    it_135=list$1intp_begin((li2_134));
    !list$1intp_end((li2_134));
    it_135=list$1intp_next((li2_134))
    ){
        printf("%d\n",it_135);
    }
    aXL_136=123;
    __current_stack3__.p_91 = &p_91;
    __current_stack3__.p2_92 = &p2_92;
    __current_stack3__.count_93 = &count_93;
    __current_stack3__.size2_94 = &size2_94;
    __current_stack3__.mem2_95 = &mem2_95;
    __current_stack3__.b_96 = &b_96;
    __current_stack3__.a_97 = &a_97;
    __current_stack3__.a2_98 = &a2_98;
    __current_stack3__.ax_101 = &ax_101;
    __current_stack3__.str_105 = &str_105;
    __current_stack3__.data_106 = &data_106;
    __current_stack3__.axyz_107 = &axyz_107;
    __current_stack3__.xxx_108 = &xxx_108;
    __current_stack3__.yyy_109 = &yyy_109;
    __current_stack3__.zzz_110 = &zzz_110;
    __current_stack3__.bzyz_111 = &bzyz_111;
    __current_stack3__.azyz_112 = &azyz_112;
    __current_stack3__.n_113 = &n_113;
    __current_stack3__.liX_114 = &liX_114;
    __current_stack3__.liX2_120 = &liX2_120;
    __current_stack3__.aX_127 = &aX_127;
    __current_stack3__.aXYZY_131 = &aXYZY_131;
    __current_stack3__.li_132 = &li_132;
    __current_stack3__.li2_134 = &li2_134;
    __current_stack3__.aXL_136 = &aXL_136;
    list$1intp_each(li2_134,&__current_stack3__,method_block3_code2HelloWorld2c);
    xassert("var of method block",aXL_136==2);
    xassert("list::item",list$1intp_item(li2_134,0,-1)==1);
    list$1intp_insert(li2_134,1,5);
    xassert("list::insert",list$1intp_item(li2_134,0,-1)==1&&list$1intp_item(li2_134,1,-1)==5&&list$1intp_item(li2_134,2,-1)==2&&list$1intp_item(li2_134,3,-1)==3);
    list$1charphp_insert(li_132,1,(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string("GGG")))));
    right_value104 = come_decrement_ref_count(right_value104, 1, 0);
    xassert("list::insert",strcmp(list$1charphp_item(li_132,0,-1),"ABC")==0&&strcmp(list$1charphp_item(li_132,1,-1),"GGG")==0&&strcmp(list$1charphp_item(li_132,2,-1),"DEF")==0&&strcmp(list$1charphp_item(li_132,3,-1),"GHI")==0);
    list$1charphp_reset(li_132);
    xassert("list::reset",list$1charphp_length(li_132)==0);
    list$1intp_delete(li2_134,0,1);
    xassert("list::delete",list$1intp_item(li2_134,0,-1)==5&&list$1intp_item(li2_134,1,-1)==2&&list$1intp_item(li2_134,2,-1)==3);
    li3_167=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charphp_finalize,right_value106,0, 1, 0);
    list$1charphp_push_back(li3_167,(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string("AAA")))));
    right_value107 = come_decrement_ref_count(right_value107, 1, 0);
    list$1charphp_push_back(li3_167,(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string("BBB")))));
    right_value108 = come_decrement_ref_count(right_value108, 1, 0);
    list$1charphp_push_back(li3_167,(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string("CCC")))));
    right_value109 = come_decrement_ref_count(right_value109, 1, 0);
    list$1charphp_replace(li3_167,0,(char*)come_increment_ref_count(((char*)(right_value110=__builtin_string("ABC")))));
    right_value110 = come_decrement_ref_count(right_value110, 1, 0);
    xassert("list::replace",strcmp(list$1charphp_item(li3_167,0,((void*)0)),"ABC")==0&&strcmp(list$1charphp_item(li3_167,1,((void*)0)),"BBB")==0&&strcmp(list$1charphp_item(li3_167,2,((void*)0)),"CCC")==0);
    li4_170=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value112=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value111=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value112,0, 1, 0);
    list$1intp_push_back(li4_170,1);
    list$1intp_push_back(li4_170,3);
    list$1intp_push_back(li4_170,5);
    li5_171=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value114=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value113=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value114,0, 1, 0);
    list$1intp_push_back(li5_171,1);
    list$1intp_push_back(li5_171,3);
    list$1intp_push_back(li5_171,5);
    xassert("list::equals",list$1intp_equals(li4_170,li5_171));
    xassert("list::find",list$1intp_find(li4_170,5,-1)==2);
    li6_176=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value116=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value115=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value116,0, 1, 0);
    list$1intp_push_back(li6_176,3);
    list$1intp_push_back(li6_176,5);
    xassert("list::sublist",list$1intp_equals(((struct list$1int*)(right_value119=list$1intp_sublist(li5_171,1,-1))),li6_176));
    call_finalizer(list$1intp_finalize,right_value119,0, 1, 0);
    if(axyzX_180) {(int*)come_decrement_ref_count(axyzX_180,0,0); }
    axyzX_180=(int*)come_increment_ref_count(((int*)(right_value120=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value120 = come_decrement_ref_count(right_value120, 1, 0);
    if(axyzX_180) {(int*)come_decrement_ref_count(axyzX_180,0,0); }
    axyzX_180=(int*)come_increment_ref_count(((int*)(right_value121=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value121 = come_decrement_ref_count(right_value121, 1, 0);
    xassert("operator equals",string_operator_equals(((char*)(right_value122=__builtin_string("AAA"))),((char*)(right_value123=__builtin_string("AAA")))));
    right_value122 = come_decrement_ref_count(right_value122, 1, 0);
    right_value123 = come_decrement_ref_count(right_value123, 1, 0);
    xassert("operator test",string_operator_equals(((char*)(right_value124=charp_operator_add("AAA","BBB"))),"AAABBB"));
    right_value124 = come_decrement_ref_count(right_value124, 1, 0);
    strXYXY_181="ABC";
    xassert("operator test",*(strXYXY_181+1)==66);
    liZ_182=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value126=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value125=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value126,0, 1, 0);
    list$1intp_push_back(liZ_182,1);
    list$1intp_push_back(liZ_182,2);
    list$1intp_push_back(liZ_182,3);
    __current_stack4__.p_91 = &p_91;
    __current_stack4__.p2_92 = &p2_92;
    __current_stack4__.count_93 = &count_93;
    __current_stack4__.size2_94 = &size2_94;
    __current_stack4__.mem2_95 = &mem2_95;
    __current_stack4__.b_96 = &b_96;
    __current_stack4__.a_97 = &a_97;
    __current_stack4__.a2_98 = &a2_98;
    __current_stack4__.ax_101 = &ax_101;
    __current_stack4__.str_105 = &str_105;
    __current_stack4__.data_106 = &data_106;
    __current_stack4__.axyz_107 = &axyz_107;
    __current_stack4__.xxx_108 = &xxx_108;
    __current_stack4__.yyy_109 = &yyy_109;
    __current_stack4__.zzz_110 = &zzz_110;
    __current_stack4__.bzyz_111 = &bzyz_111;
    __current_stack4__.azyz_112 = &azyz_112;
    __current_stack4__.n_113 = &n_113;
    __current_stack4__.liX_114 = &liX_114;
    __current_stack4__.liX2_120 = &liX2_120;
    __current_stack4__.aX_127 = &aX_127;
    __current_stack4__.aXYZY_131 = &aXYZY_131;
    __current_stack4__.li_132 = &li_132;
    __current_stack4__.li2_134 = &li2_134;
    __current_stack4__.aXL_136 = &aXL_136;
    __current_stack4__.li3_167 = &li3_167;
    __current_stack4__.li4_170 = &li4_170;
    __current_stack4__.li5_171 = &li5_171;
    __current_stack4__.li6_176 = &li6_176;
    __current_stack4__.axyzX_180 = &axyzX_180;
    __current_stack4__.strXYXY_181 = &strXYXY_181;
    __current_stack4__.liZ_182 = &liZ_182;
    list$1intp_each(liZ_182,&__current_stack4__,method_block4_code2HelloWorld2c);
    list$1intp_operator_store_element(liZ_182,0,777);
    printf("liZ[0] %d\n",list$1intp_operator_load_element(liZ_182,0));
    liZ2_186=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value128=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value127=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value128,0, 1, 0);
    list$1intp_push_back(liZ2_186,777);
    list$1intp_push_back(liZ2_186,2);
    list$1intp_push_back(liZ2_186,3);
    xassert("list equals",list$1intp_operator_equals(liZ_182,liZ2_186));
    {__list_values1___187[0]=1;
__list_values1___187[1]=2;
__list_values1___187[2]=3;
}    {__list_values2___189[0]=1;
__list_values2___189[1]=2;
__list_values2___189[2]=3;
}    xassert("list equals test",list$1intp_operator_equals(((struct list$1int*)(right_value130=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value129=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),3,__list_values1___187))),((struct list$1int*)(right_value132=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value131=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),3,__list_values2___189)))));
    call_finalizer(list$1intp_finalize,right_value130,0, 1, 0);
    call_finalizer(list$1intp_finalize,right_value132,0, 1, 0);
    {__list_values3___190[0]=1;
__list_values3___190[1]=2;
__list_values3___190[2]=3;
__list_values3___190[3]=4;
__list_values3___190[4]=5;
}    __current_stack5__.p_91 = &p_91;
    __current_stack5__.p2_92 = &p2_92;
    __current_stack5__.count_93 = &count_93;
    __current_stack5__.size2_94 = &size2_94;
    __current_stack5__.mem2_95 = &mem2_95;
    __current_stack5__.b_96 = &b_96;
    __current_stack5__.a_97 = &a_97;
    __current_stack5__.a2_98 = &a2_98;
    __current_stack5__.ax_101 = &ax_101;
    __current_stack5__.str_105 = &str_105;
    __current_stack5__.data_106 = &data_106;
    __current_stack5__.axyz_107 = &axyz_107;
    __current_stack5__.xxx_108 = &xxx_108;
    __current_stack5__.yyy_109 = &yyy_109;
    __current_stack5__.zzz_110 = &zzz_110;
    __current_stack5__.bzyz_111 = &bzyz_111;
    __current_stack5__.azyz_112 = &azyz_112;
    __current_stack5__.n_113 = &n_113;
    __current_stack5__.liX_114 = &liX_114;
    __current_stack5__.liX2_120 = &liX2_120;
    __current_stack5__.aX_127 = &aX_127;
    __current_stack5__.aXYZY_131 = &aXYZY_131;
    __current_stack5__.li_132 = &li_132;
    __current_stack5__.li2_134 = &li2_134;
    __current_stack5__.aXL_136 = &aXL_136;
    __current_stack5__.li3_167 = &li3_167;
    __current_stack5__.li4_170 = &li4_170;
    __current_stack5__.li5_171 = &li5_171;
    __current_stack5__.li6_176 = &li6_176;
    __current_stack5__.axyzX_180 = &axyzX_180;
    __current_stack5__.strXYXY_181 = &strXYXY_181;
    __current_stack5__.liZ_182 = &liZ_182;
    __current_stack5__.liZ2_186 = &liZ2_186;
    list$1intp_each(((struct list$1int*)(right_value134=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value133=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),5,__list_values3___190))),&__current_stack5__,method_block5_code2HelloWorld2c);
    call_finalizer(list$1intp_finalize,right_value134,0, 1, 0);
    {__map_keys1___191[0]="AAA";
__map_element1___192[0]=1;
__map_keys1___191[1]="BBB";
__map_element1___192[1]=2;
}    {__map_keys2___223[0]="AAA";
__map_element2___224[0]=1;
__map_keys2___223[1]="BBB";
__map_element2___224[1]=2;
}    xassert("map equals",map$2charpintp_operator_equals(((struct map$2charpint*)(right_value147=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value146=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys1___191,__map_element1___192))),((struct map$2charpint*)(right_value149=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value148=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys2___223,__map_element2___224)))));
    call_finalizer(map$2charpintp_finalize,right_value147,0, 1, 0);
    call_finalizer(map$2charpintp_finalize,right_value149,0, 1, 0);
    {__map_keys3___235[0]="AAA";
__map_element3___236[0]=1;
__map_keys3___235[1]="BBB";
__map_element3___236[1]=2;
}    m1_237=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value151=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value150=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys3___235,__map_element3___236))));
    call_finalizer(map$2charpintp_finalize,right_value151,0, 1, 0);
    printf("%d %d\n",map$2charpintp_operator_load_element(m1_237,"AAA"),map$2charpintp_operator_load_element(m1_237,"BBB"));
    m2_248=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value161=map$2charpintp_clone(m1_237))));
    call_finalizer(map$2charpintp_finalize,right_value161,0, 1, 0);
    printf("%d %d\n",map$2charpintp_operator_load_element(m2_248,"AAA"),map$2charpintp_operator_load_element(m2_248,"BBB"));
    xassert("map clone",map$2charpintp_operator_equals(m1_237,m2_248));
    tt1_249=(struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value163=tuple1$1intp_initialize((struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value162=(struct tuple1$1int*)come_calloc(1, sizeof(struct tuple1$1int)*(1))))),1))));
    call_finalizer(tuple1$1intp_finalize,right_value163,0, 1, 0);
    tt1_249->v1=111;
    printf("%d\n",tt1_249->v1);
    tt2_250=(struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value166=tuple1$1charphp_initialize((struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value164=(struct tuple1$1charph*)come_calloc(1, sizeof(struct tuple1$1charph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string("ABC"))))))));
    right_value165 = come_decrement_ref_count(right_value165, 1, 0);
    call_finalizer(tuple1$1charphp_finalize,right_value166,0, 1, 0);
    if(tt2_250->v1) {(char*)come_decrement_ref_count(tt2_250->v1,0,0); }
    tt2_250->v1=(char*)come_increment_ref_count(((char*)(right_value167=__builtin_string("DEF"))));
    right_value167 = come_decrement_ref_count(right_value167, 1, 0);
    printf("%s\n",tt2_250->v1);
    tt3_252=(struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value170=tuple1$1charphp_clone(tt2_250))));
    call_finalizer(tuple1$1charphp_finalize,right_value170,0, 1, 0);
    printf("(%s)\n",tt3_252->v1);
    ttt1_253=(struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value172=tuple1$1intp_initialize((struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value171=(struct tuple1$1int*)come_calloc(1, sizeof(struct tuple1$1int)*(1))))),1))));
    call_finalizer(tuple1$1intp_finalize,right_value172,0, 1, 0);
    ttt1_253->v1=111;
    printf("%d\n",ttt1_253->v1);
    ttt2_254=(struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value175=tuple1$1charphp_initialize((struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value173=(struct tuple1$1charph*)come_calloc(1, sizeof(struct tuple1$1charph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string("ABC"))))))));
    right_value174 = come_decrement_ref_count(right_value174, 1, 0);
    call_finalizer(tuple1$1charphp_finalize,right_value175,0, 1, 0);
    if(ttt2_254->v1) {(char*)come_decrement_ref_count(ttt2_254->v1,0,0); }
    ttt2_254->v1=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string("DEF"))));
    right_value176 = come_decrement_ref_count(right_value176, 1, 0);
    printf("%s\n",ttt2_254->v1);
    ttt3_255=(struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value177=tuple1$1charphp_clone(ttt2_254))));
    call_finalizer(tuple1$1charphp_finalize,right_value177,0, 1, 0);
    printf("(%s)\n",ttt3_255->v1);
    xassert("tuple test",tuple1$1charphp_operator_equals(ttt2_254,ttt3_255));
    t4_256=(struct tuple2$2charphint*)come_increment_ref_count(((struct tuple2$2charphint*)(right_value180=tuple2$2charphint_initialize((struct tuple2$2charphint*)come_increment_ref_count(((struct tuple2$2charphint*)(right_value179=(struct tuple2$2charphint*)come_calloc(1, sizeof(struct tuple2$2charphint)*(1))))),(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string("ABC")))),5))));
    right_value178 = come_decrement_ref_count(right_value178, 1, 0);
    call_finalizer(tuple2$2charphintp_finalize,right_value180,0, 1, 0);
    xassert("tuple test",string_operator_equals(t4_256->v1,((char*)(right_value181=__builtin_string("ABC"))))&&t4_256->v2==5);
    right_value181 = come_decrement_ref_count(right_value181, 1, 0);
    xassert("tuple testX",tuple2$2charpintp_operator_equals(((struct tuple2$2charpint*)(right_value183=tuple2$2charpint_initialize((struct tuple2$2charpint*)come_increment_ref_count(((struct tuple2$2charpint*)(right_value182=(struct tuple2$2charpint*)come_calloc(1, sizeof(struct tuple2$2charpint)*(1))))),"AAA",7))),((struct tuple2$2charpint*)(right_value185=tuple2$2charpint_initialize((struct tuple2$2charpint*)come_increment_ref_count(((struct tuple2$2charpint*)(right_value184=(struct tuple2$2charpint*)come_calloc(1, sizeof(struct tuple2$2charpint)*(1))))),"AAA",7)))));
    call_finalizer(tuple2$2charpintp_finalize,right_value183,0, 1, 0);
    call_finalizer(tuple2$2charpintp_finalize,right_value185,0, 1, 0);
    xassert("tuple testX",tuple2$2charpintp_operator_not_equals(((struct tuple2$2charpint*)(right_value187=tuple2$2charpint_initialize((struct tuple2$2charpint*)come_increment_ref_count(((struct tuple2$2charpint*)(right_value186=(struct tuple2$2charpint*)come_calloc(1, sizeof(struct tuple2$2charpint)*(1))))),"AAA",8))),((struct tuple2$2charpint*)(right_value189=tuple2$2charpint_initialize((struct tuple2$2charpint*)come_increment_ref_count(((struct tuple2$2charpint*)(right_value188=(struct tuple2$2charpint*)come_calloc(1, sizeof(struct tuple2$2charpint)*(1))))),"AAA",7)))));
    call_finalizer(tuple2$2charpintp_finalize,right_value187,0, 1, 0);
    call_finalizer(tuple2$2charpintp_finalize,right_value189,0, 1, 0);
    _inf_value1=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value1=((struct sDataA*)(right_value191=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value190=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),111,222)));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sDataA_finalize;
    _inf_value1->clone=sDataA_clone;
    _inf_value1->fun=sDataA_fun;
    _inf_valueX1=(struct IA*)come_increment_ref_count(((struct IA*)(right_value193=_inf_value1)));
    come_increment_ref_count(((struct IA*)((struct IA*)(right_value193=_inf_value1)))->_protocol_obj);
    ia_258=_inf_valueX1;
    call_finalizer(sDataA_finalize,right_value190,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value191,0, 1, 0);
    call_finalizer(((struct IA*)right_value193)->finalize, ((struct IA*)right_value193)->_protocol_obj,0, 1, 0);
    right_value193 = come_decrement_ref_count(right_value193, 1, 0);
    printf("%d\n",ia_258->fun(ia_258->_protocol_obj,0,0));
    liIA_261=(struct list$1IAph*)come_increment_ref_count(((struct list$1IAph*)(right_value195=list$1IAphp_initialize((struct list$1IAph*)come_increment_ref_count(((struct list$1IAph*)(right_value194=(struct list$1IAph*)come_calloc(1, sizeof(struct list$1IAph)*(1)))))))));
    call_finalizer(list$1IAphp_finalize,right_value195,0, 1, 0);
    _inf_value2=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value2=((struct sDataA*)(right_value200=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value199=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),1,1)));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=sDataA_finalize;
    _inf_value2->clone=sDataA_clone;
    _inf_value2->fun=sDataA_fun;
    _inf_valueX5=(struct IA*)come_increment_ref_count(((struct IA*)(right_value202=_inf_value2)));
    come_increment_ref_count(((struct IA*)((struct IA*)(right_value202=_inf_value2)))->_protocol_obj);
    list$1IAphp_push_back(liIA_261,_inf_valueX5);
    call_finalizer(sDataA_finalize,right_value199,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value200,0, 1, 0);
    call_finalizer(((struct IA*)right_value202)->finalize, ((struct IA*)right_value202)->_protocol_obj,0, 1, 0);
    right_value202 = come_decrement_ref_count(right_value202, 1, 0);
    _inf_value3=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value3=((struct sDataA*)(right_value204=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value203=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),2,2)));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=sDataA_finalize;
    _inf_value3->clone=sDataA_clone;
    _inf_value3->fun=sDataA_fun;
    _inf_valueX6=(struct IA*)come_increment_ref_count(((struct IA*)(right_value206=_inf_value3)));
    come_increment_ref_count(((struct IA*)((struct IA*)(right_value206=_inf_value3)))->_protocol_obj);
    list$1IAphp_push_back(liIA_261,_inf_valueX6);
    call_finalizer(sDataA_finalize,right_value203,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value204,0, 1, 0);
    call_finalizer(((struct IA*)right_value206)->finalize, ((struct IA*)right_value206)->_protocol_obj,0, 1, 0);
    right_value206 = come_decrement_ref_count(right_value206, 1, 0);
    _inf_value4=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value4=((struct sDataA*)(right_value208=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value207=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),3,3)));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=sDataA_finalize;
    _inf_value4->clone=sDataA_clone;
    _inf_value4->fun=sDataA_fun;
    _inf_valueX7=(struct IA*)come_increment_ref_count(((struct IA*)(right_value210=_inf_value4)));
    come_increment_ref_count(((struct IA*)((struct IA*)(right_value210=_inf_value4)))->_protocol_obj);
    list$1IAphp_push_back(liIA_261,_inf_valueX7);
    call_finalizer(sDataA_finalize,right_value207,0, 1, 0);
    call_finalizer(sDataA_finalize,right_value208,0, 1, 0);
    call_finalizer(((struct IA*)right_value210)->finalize, ((struct IA*)right_value210)->_protocol_obj,0, 1, 0);
    right_value210 = come_decrement_ref_count(right_value210, 1, 0);
    for(
    it_269=list$1IAphp_begin((liIA_261));
    !list$1IAphp_end((liIA_261));
    it_269=list$1IAphp_next((liIA_261))
    ){
        printf("%d\n",it_269->fun(it_269->_protocol_obj,0,0));
    }
    multiple_assgin_var1=((struct tuple3$3intintbool*)(right_value212=tuple3$3intintbool_initialize((struct tuple3$3intintbool*)come_increment_ref_count(((struct tuple3$3intintbool*)(right_value211=(struct tuple3$3intintbool*)come_calloc(1, sizeof(struct tuple3$3intintbool)*(1))))),1,2,(_Bool)0)));
    aZZZ_271=multiple_assgin_var1->v1;
    bZZZ_272=multiple_assgin_var1->v2;
    call_finalizer(tuple3$3intintboolp_finalize,right_value212,0, 1, 0);
    xassert("tuple test",aZZZ_271==1&&bZZZ_272==2);
    fun_default_parametor(1,2);
    li_str_273=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value214=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value213=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charphp_finalize,right_value214,0, 1, 0);
    list$1charphp_push_back(li_str_273,(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string("AAA")))));
    right_value215 = come_decrement_ref_count(right_value215, 1, 0);
    list$1charphp_push_back(li_str_273,(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string("BBB")))));
    right_value216 = come_decrement_ref_count(right_value216, 1, 0);
    list$1charphp_push_back(li_str_273,(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string("CCC")))));
    right_value217 = come_decrement_ref_count(right_value217, 1, 0);
    __current_stack6__.p_91 = &p_91;
    __current_stack6__.p2_92 = &p2_92;
    __current_stack6__.count_93 = &count_93;
    __current_stack6__.size2_94 = &size2_94;
    __current_stack6__.mem2_95 = &mem2_95;
    __current_stack6__.b_96 = &b_96;
    __current_stack6__.a_97 = &a_97;
    __current_stack6__.a2_98 = &a2_98;
    __current_stack6__.ax_101 = &ax_101;
    __current_stack6__.str_105 = &str_105;
    __current_stack6__.data_106 = &data_106;
    __current_stack6__.axyz_107 = &axyz_107;
    __current_stack6__.xxx_108 = &xxx_108;
    __current_stack6__.yyy_109 = &yyy_109;
    __current_stack6__.zzz_110 = &zzz_110;
    __current_stack6__.bzyz_111 = &bzyz_111;
    __current_stack6__.azyz_112 = &azyz_112;
    __current_stack6__.n_113 = &n_113;
    __current_stack6__.liX_114 = &liX_114;
    __current_stack6__.liX2_120 = &liX2_120;
    __current_stack6__.aX_127 = &aX_127;
    __current_stack6__.aXYZY_131 = &aXYZY_131;
    __current_stack6__.li_132 = &li_132;
    __current_stack6__.li2_134 = &li2_134;
    __current_stack6__.aXL_136 = &aXL_136;
    __current_stack6__.li3_167 = &li3_167;
    __current_stack6__.li4_170 = &li4_170;
    __current_stack6__.li5_171 = &li5_171;
    __current_stack6__.li6_176 = &li6_176;
    __current_stack6__.axyzX_180 = &axyzX_180;
    __current_stack6__.strXYXY_181 = &strXYXY_181;
    __current_stack6__.liZ_182 = &liZ_182;
    __current_stack6__.liZ2_186 = &liZ2_186;
    __current_stack6__.m1_237 = &m1_237;
    __current_stack6__.m2_248 = &m2_248;
    __current_stack6__.tt1_249 = &tt1_249;
    __current_stack6__.tt2_250 = &tt2_250;
    __current_stack6__.tt3_252 = &tt3_252;
    __current_stack6__.ttt1_253 = &ttt1_253;
    __current_stack6__.ttt2_254 = &ttt2_254;
    __current_stack6__.ttt3_255 = &ttt3_255;
    __current_stack6__.t4_256 = &t4_256;
    __current_stack6__.ia_258 = &ia_258;
    __current_stack6__.liIA_261 = &liIA_261;
    __current_stack6__.aZZZ_271 = &aZZZ_271;
    __current_stack6__.bZZZ_272 = &bZZZ_272;
    __current_stack6__.li_str_273 = &li_str_273;
    xassert("exception test",tuple2$2intboolp_catch(((struct tuple2$2intbool*)(right_value218=fun_exception(1,2))),&__current_stack6__,method_block6_code2HelloWorld2c)==3);
    call_finalizer(tuple2$2intboolp_finalize,right_value218,0, 1, 0);
    {__list_values4___274[0]=come_increment_ref_count(((char*)(right_value219=__builtin_string("AAA"))));
__list_values4___274[1]=come_increment_ref_count(((char*)(right_value220=__builtin_string("BBB"))));
__list_values4___274[2]=come_increment_ref_count(((char*)(right_value221=__builtin_string("CCC"))));
}    xassert("list test",list$1charphp_operator_equals(li_str_273,((struct list$1charph*)(right_value223=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value222=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),3,__list_values4___274)))));
    right_value219 = come_decrement_ref_count(right_value219, 1, 0);
    right_value220 = come_decrement_ref_count(right_value220, 1, 0);
    right_value221 = come_decrement_ref_count(right_value221, 1, 0);
    call_finalizer(list$1charphp_finalize,right_value223,0, 1, 0);
    int __result194__ = 0;
    ax_101 = come_decrement_ref_count(ax_101, 0, 0);
    str_105 = come_decrement_ref_count(str_105, 0, 0);
    call_finalizer(sData_finalize,data_106,0, 0, 0);
    axyz_107 = come_decrement_ref_count(axyz_107, 0, 0);
    xxx_108 = come_decrement_ref_count(xxx_108, 0, 0);
    yyy_109 = come_decrement_ref_count(yyy_109, 0, 0);
    zzz_110 = come_decrement_ref_count(zzz_110, 0, 0);
    call_finalizer(list$1charphp_finalize,liX_114,0, 0, 0);
    call_finalizer(list$1intp_finalize,liX2_120,0, 0, 0);
    call_finalizer(list$1charphp_finalize,li_132,0, 0, 0);
    call_finalizer(list$1intp_finalize,li2_134,0, 0, 0);
    call_finalizer(list$1charphp_finalize,li3_167,0, 0, 0);
    call_finalizer(list$1intp_finalize,li4_170,0, 0, 0);
    call_finalizer(list$1intp_finalize,li5_171,0, 0, 0);
    call_finalizer(list$1intp_finalize,li6_176,0, 0, 0);
    axyzX_180 = come_decrement_ref_count(axyzX_180, 0, 0);
    call_finalizer(list$1intp_finalize,liZ_182,0, 0, 0);
    call_finalizer(list$1intp_finalize,liZ2_186,0, 0, 0);
    call_finalizer(map$2charpintp_finalize,m1_237,0, 0, 0);
    call_finalizer(map$2charpintp_finalize,m2_248,0, 0, 0);
    call_finalizer(tuple1$1intp_finalize,tt1_249,0, 0, 0);
    call_finalizer(tuple1$1charphp_finalize,tt2_250,0, 0, 0);
    call_finalizer(tuple1$1charphp_finalize,tt3_252,0, 0, 0);
    call_finalizer(tuple1$1intp_finalize,ttt1_253,0, 0, 0);
    call_finalizer(tuple1$1charphp_finalize,ttt2_254,0, 0, 0);
    call_finalizer(tuple1$1charphp_finalize,ttt3_255,0, 0, 0);
    call_finalizer(tuple2$2charphintp_finalize,t4_256,0, 0, 0);
    call_finalizer(((struct IA*)ia_258)->finalize, ((struct IA*)ia_258)->_protocol_obj,0, 0, 0);
    ia_258 = come_decrement_ref_count(ia_258, 0, 0);
    call_finalizer(list$1IAphp_finalize,liIA_261,0, 0, 0);
    call_finalizer(list$1charphp_finalize,li_str_273,0, 0, 0);
    return __result194__;
}

static void sData_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1_code2HelloWorld2c(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_113)));
        (*(parent->n_113))++;
}

static char* list$1charphp_begin(struct list$1charph* self){
char* result_115;
memset(&result_115, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result108__ = self->it->item;
            return __result108__;
        }
        memset(&result_115,0,sizeof(char*));
        char* __result109__ = result_115;
        return __result109__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
        _Bool __result110__ = self->it==((void*)0);
        return __result110__;
}

static char* list$1charphp_next(struct list$1charph* self){
char* result_117;
memset(&result_117, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result111__ = self->it->item;
            return __result111__;
        }
        memset(&result_117,0,sizeof(char*));
        char* __result112__ = result_117;
        return __result112__;
}

static struct list$1int* list$1intp_initialize(struct list$1int* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1int* __result113__ = self;
        call_finalizer(list$1intp_finalize,self,0, 0, 1);
        return __result113__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_118;
struct list_item$1int* prev_it_119;
memset(&it_118, 0, sizeof(struct list_item$1int*));
memset(&prev_it_119, 0, sizeof(struct list_item$1int*));
            it_118=self->head;
            while(it_118!=((void*)0)) {
                if(0) {
                }
                prev_it_119=it_118;
                it_118=it_118->next;
                come_free_object(prev_it_119);
            }
}

static void list$1intp_push_back(struct list$1int* self, int item){
void* right_value88;
struct list_item$1int* litem_121;
void* right_value89;
struct list_item$1int* litem_122;
void* right_value90;
struct list_item$1int* litem_123;
memset(&litem_121, 0, sizeof(struct list_item$1int*));
memset(&litem_122, 0, sizeof(struct list_item$1int*));
memset(&litem_123, 0, sizeof(struct list_item$1int*));
        if(self->len==0) {
            litem_121=((struct list_item$1int*)(right_value88=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_121->prev=((void*)0);
            litem_121->next=((void*)0);
            litem_121->item=item;
            self->tail=litem_121;
            self->head=litem_121;
        }
        else if(self->len==1) {
            litem_122=((struct list_item$1int*)(right_value89=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_122->prev=self->head;
            litem_122->next=((void*)0);
            litem_122->item=item;
            self->tail=litem_122;
            self->head->next=litem_122;
        }
        else {
            litem_123=((struct list_item$1int*)(right_value90=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_123->prev=self->tail;
            litem_123->next=((void*)0);
            litem_123->item=item;
            self->tail->next=litem_123;
            self->tail=litem_123;
        }
        self->len++;
}

static int list$1intp_begin(struct list$1int* self){
int result_124;
memset(&result_124, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result114__ = self->it->item;
            return __result114__;
        }
        memset(&result_124,0,sizeof(int));
        int __result115__ = result_124;
        return __result115__;
}

static _Bool list$1intp_end(struct list$1int* self){
        _Bool __result116__ = self->it==((void*)0);
        return __result116__;
}

static int list$1intp_next(struct list$1int* self){
int result_126;
memset(&result_126, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result117__ = self->it->item;
            return __result117__;
        }
        memset(&result_126,0,sizeof(int));
        int __result118__ = result_126;
        return __result118__;
}

static void list$1intp_each(struct list$1int* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item$1int* it_128;
int i_129;
_Bool end_flag_130;
memset(&it_128, 0, sizeof(struct list_item$1int*));
memset(&i_129, 0, sizeof(int));
memset(&end_flag_130, 0, sizeof(_Bool));
        it_128=self->head;
        i_129=0;
        while(it_128!=((void*)0)) {
            end_flag_130=(_Bool)0;
            block(parent,it_128->item,i_129,&end_flag_130);
            if(end_flag_130==(_Bool)1) {
                break;
            }
            it_128=it_128->next;
            i_129++;
        }
}

void method_block2_code2HelloWorld2c(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_127)));
        (*(parent->aX_127))=2;
}

void method_block3_code2HelloWorld2c(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_136)));
        (*(parent->aXL_136))=2;
}

static int list$1intp_item(struct list$1int* self, int position, int default_value){
struct list_item$1int* it_137;
int i_138;
memset(&it_137, 0, sizeof(struct list_item$1int*));
memset(&i_138, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_137=self->head;
        i_138=0;
        while(it_137!=((void*)0)) {
            if(position==i_138) {
                int __result119__ = it_137->item;
                return __result119__;
            }
            it_137=it_137->next;
            i_138++;
        }
        int __result120__ = default_value;
        return __result120__;
}

static void list$1intp_insert(struct list$1int* self, int position, int item){
void* right_value98;
struct list_item$1int* litem_139;
void* right_value99;
struct list_item$1int* litem_140;
struct list_item$1int* it_141;
int i_142;
void* right_value100;
struct list_item$1int* litem_143;
memset(&litem_139, 0, sizeof(struct list_item$1int*));
memset(&litem_140, 0, sizeof(struct list_item$1int*));
memset(&it_141, 0, sizeof(struct list_item$1int*));
memset(&i_142, 0, sizeof(int));
memset(&litem_143, 0, sizeof(struct list_item$1int*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$1intp_push_back(self,item);
            return;
        }
        if(position==0) {
            litem_139=((struct list_item$1int*)(right_value98=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_139->prev=((void*)0);
            litem_139->next=self->head;
            litem_139->item=item;
            self->head->prev=litem_139;
            self->head=litem_139;
            self->len++;
        }
        else if(self->len==1) {
            litem_140=((struct list_item$1int*)(right_value99=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
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
                    litem_143=((struct list_item$1int*)(right_value100=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
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

static void list$1charphp_insert(struct list$1charph* self, int position, char* item){
void* right_value101;
struct list_item$1charph* litem_144;
void* right_value102;
struct list_item$1charph* litem_145;
struct list_item$1charph* it_146;
int i_147;
void* right_value103;
struct list_item$1charph* litem_148;
memset(&litem_144, 0, sizeof(struct list_item$1charph*));
memset(&litem_145, 0, sizeof(struct list_item$1charph*));
memset(&it_146, 0, sizeof(struct list_item$1charph*));
memset(&i_147, 0, sizeof(int));
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$1charphp_push_back(self,(char*)come_increment_ref_count(item));
            return;
        }
        if(position==0) {
            litem_144=((struct list_item$1charph*)(right_value101=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_144->prev=((void*)0);
            litem_144->next=self->head;
            if(litem_144->item) {(char*)come_decrement_ref_count(litem_144->item,0,0); }
            litem_144->item=(char*)come_increment_ref_count(item);
            self->head->prev=litem_144;
            self->head=litem_144;
            self->len++;
        }
        else if(self->len==1) {
            litem_145=((struct list_item$1charph*)(right_value102=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_145->prev=self->head;
            litem_145->next=self->tail;
            if(litem_145->item) {(char*)come_decrement_ref_count(litem_145->item,0,0); }
            litem_145->item=(char*)come_increment_ref_count(item);
            self->tail->prev=litem_145;
            self->head->next=litem_145;
            self->len++;
        }
        else {
            it_146=self->head;
            i_147=0;
            while(it_146!=((void*)0)) {
                if(position==i_147) {
                    litem_148=((struct list_item$1charph*)(right_value103=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_148->prev=it_146->prev;
                    litem_148->next=it_146;
                    if(litem_148->item) {(char*)come_decrement_ref_count(litem_148->item,0,0); }
                    litem_148->item=(char*)come_increment_ref_count(item);
                    it_146->prev->next=litem_148;
                    it_146->prev=litem_148;
                    self->len++;
                }
                it_146=it_146->next;
                i_147++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_149;
int i_150;
memset(&it_149, 0, sizeof(struct list_item$1charph*));
memset(&i_150, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_149=self->head;
        i_150=0;
        while(it_149!=((void*)0)) {
            if(position==i_150) {
                char* __result121__ = it_149->item;
                return __result121__;
            }
            it_149=it_149->next;
            i_150++;
        }
        char* __result122__ = default_value;
        return __result122__;
}

static void list$1charphp_reset(struct list$1charph* self){
struct list_item$1charph* it_151;
struct list_item$1charph* prev_it_152;
memset(&it_151, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_152, 0, sizeof(struct list_item$1charph*));
        it_151=self->head;
        while(it_151!=((void*)0)) {
            prev_it_152=it_151;
            if(1) {
                it_151->item = come_decrement_ref_count(it_151->item, 0, 0);
            }
            it_151=it_151->next;
            call_finalizer(list_item$1charphp_finalize,prev_it_152,0, 0, 0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    self->item = come_decrement_ref_count(self->item, 0, 0);
                }
}

static int list$1charphp_length(struct list$1charph* self){
        int __result123__ = self->len;
        return __result123__;
}

static void list$1intp_delete(struct list$1int* self, int head, int tail){
int tmp_153;
struct list_item$1int* it_156;
int i_157;
struct list_item$1int* prev_it_158;
struct list_item$1int* it_159;
int i_160;
struct list_item$1int* prev_it_161;
struct list_item$1int* it_162;
struct list_item$1int* head_prev_it_163;
struct list_item$1int* tail_it_164;
int i_165;
struct list_item$1int* prev_it_166;
memset(&tmp_153, 0, sizeof(int));
memset(&it_156, 0, sizeof(struct list_item$1int*));
memset(&i_157, 0, sizeof(int));
memset(&prev_it_158, 0, sizeof(struct list_item$1int*));
memset(&it_159, 0, sizeof(struct list_item$1int*));
memset(&i_160, 0, sizeof(int));
memset(&prev_it_161, 0, sizeof(struct list_item$1int*));
memset(&it_162, 0, sizeof(struct list_item$1int*));
memset(&head_prev_it_163, 0, sizeof(struct list_item$1int*));
memset(&tail_it_164, 0, sizeof(struct list_item$1int*));
memset(&i_165, 0, sizeof(int));
memset(&prev_it_166, 0, sizeof(struct list_item$1int*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_153=tail;
            tail=head;
            head=tmp_153;
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
            list$1intp_reset(self);
        }
        else if(head==0) {
            it_156=self->head;
            i_157=0;
            while(it_156!=((void*)0)) {
                if(i_157<tail) {
                    prev_it_158=it_156;
                    it_156=it_156->next;
                    i_157++;
                    call_finalizer(list_item$1intp_finalize,prev_it_158,0, 0, 0);
                    self->len--;
                }
                else if(i_157==tail) {
                    self->head=it_156;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_156=it_156->next;
                    i_157++;
                }
            }
        }
        else if(tail==self->len) {
            it_159=self->head;
            i_160=0;
            while(it_159!=((void*)0)) {
                if(i_160==head) {
                    self->tail=it_159->prev;
                    self->tail->next=((void*)0);
                }
                if(i_160>=head) {
                    prev_it_161=it_159;
                    it_159=it_159->next;
                    i_160++;
                    call_finalizer(list_item$1intp_finalize,prev_it_161,0, 0, 0);
                    self->len--;
                }
                else {
                    it_159=it_159->next;
                    i_160++;
                }
            }
        }
        else {
            it_162=self->head;
            head_prev_it_163=((void*)0);
            tail_it_164=((void*)0);
            i_165=0;
            while(it_162!=((void*)0)) {
                if(i_165==head) {
                    head_prev_it_163=it_162->prev;
                }
                if(i_165==tail) {
                    tail_it_164=it_162;
                }
                if(i_165>=head&&i_165<tail) {
                    prev_it_166=it_162;
                    it_162=it_162->next;
                    i_165++;
                    call_finalizer(list_item$1intp_finalize,prev_it_166,0, 0, 0);
                    self->len--;
                }
                else {
                    it_162=it_162->next;
                    i_165++;
                }
            }
            if(head_prev_it_163!=((void*)0)) {
                head_prev_it_163->next=tail_it_164;
            }
            if(tail_it_164!=((void*)0)) {
                tail_it_164->prev=head_prev_it_163;
            }
        }
}

static void list$1intp_reset(struct list$1int* self){
struct list_item$1int* it_154;
struct list_item$1int* prev_it_155;
memset(&it_154, 0, sizeof(struct list_item$1int*));
memset(&prev_it_155, 0, sizeof(struct list_item$1int*));
                it_154=self->head;
                while(it_154!=((void*)0)) {
                    prev_it_155=it_154;
                    if(0) {
                    }
                    it_154=it_154->next;
                    call_finalizer(list_item$1intp_finalize,prev_it_155,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static void list$1charphp_replace(struct list$1charph* self, int position, char* item){
struct list_item$1charph* it_168;
int i_169;
memset(&it_168, 0, sizeof(struct list_item$1charph*));
memset(&i_169, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_168=self->head;
        i_169=0;
        while(it_168!=((void*)0)) {
            if(position==i_169) {
                if(it_168->item) {(char*)come_decrement_ref_count(it_168->item,0,0); }
                it_168->item=(char*)come_increment_ref_count(item);
                break;
            }
            it_168=it_168->next;
            i_169++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static _Bool list$1intp_equals(struct list$1int* left, struct list$1int* right){
struct list_item$1int* it_172;
struct list_item$1int* it2_173;
memset(&it_172, 0, sizeof(struct list_item$1int*));
memset(&it2_173, 0, sizeof(struct list_item$1int*));
        if(left->len!=right->len) {
            _Bool __result124__ = (_Bool)0;
            return __result124__;
        }
        it_172=left->head;
        it2_173=right->head;
        while(it_172!=((void*)0)) {
            if(!int_equals(it_172->item,it2_173->item)) {
                _Bool __result125__ = (_Bool)0;
                return __result125__;
            }
            it_172=it_172->next;
            it2_173=it2_173->next;
        }
        _Bool __result126__ = (_Bool)1;
        return __result126__;
}

static int list$1intp_find(struct list$1int* self, int item, int default_value){
int it2_174;
struct list_item$1int* it_175;
memset(&it2_174, 0, sizeof(int));
memset(&it_175, 0, sizeof(struct list_item$1int*));
        it2_174=0;
        it_175=self->head;
        while(it_175!=((void*)0)) {
            if(int_equals(it_175->item,item)) {
                int __result127__ = it2_174;
                return __result127__;
            }
            it2_174++;
            it_175=it_175->next;
        }
        int __result128__ = default_value;
        return __result128__;
}

static struct list$1int* list$1intp_sublist(struct list$1int* self, int begin, int tail){
void* right_value117;
void* right_value118;
struct list$1int* result_177;
struct list_item$1int* it_178;
int i_179;
memset(&result_177, 0, sizeof(struct list$1int*));
memset(&it_178, 0, sizeof(struct list_item$1int*));
memset(&i_179, 0, sizeof(int));
        result_177=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value118=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value117=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
        call_finalizer(list$1intp_finalize,right_value118,0, 1, 0);
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
        it_178=self->head;
        i_179=0;
        while(it_178!=((void*)0)) {
            if(i_179>=begin&&i_179<tail) {
                list$1intp_push_back(result_177,it_178->item);
            }
            it_178=it_178->next;
            i_179++;
        }
        struct list$1int* __result129__ = result_177;
        call_finalizer(list$1intp_finalize,result_177,0, 0, 1);
        return __result129__;
}

void method_block4_code2HelloWorld2c(struct __current_stack4__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static void list$1intp_operator_store_element(struct list$1int* self, int position, int item){
        list$1intp_replace(self,position,item);
}

static void list$1intp_replace(struct list$1int* self, int position, int item){
struct list_item$1int* it_183;
int i_184;
memset(&it_183, 0, sizeof(struct list_item$1int*));
memset(&i_184, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_183=self->head;
            i_184=0;
            while(it_183!=((void*)0)) {
                if(position==i_184) {
                    it_183->item=item;
                    break;
                }
                it_183=it_183->next;
                i_184++;
            }
}

static int list$1intp_operator_load_element(struct list$1int* self, int index){
int default_value_185;
memset(&default_value_185, 0, sizeof(int));
        memset(&default_value_185,0,sizeof(int));
        int __result130__ = list$1intp_item(self,index,default_value_185);
        return __result130__;
}

static _Bool list$1intp_operator_equals(struct list$1int* self, struct list$1int* right){
        _Bool __result131__ = list$1intp_equals(self,right);
        return __result131__;
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
int i_188;
memset(&i_188, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_188=0;
        i_188<num_value;
        i_188++
        ){
            list$1intp_push_back(self,values[i_188]);
        }
        struct list$1int* __result132__ = self;
        call_finalizer(list$1intp_finalize,self,0, 0, 1);
        return __result132__;
}

void method_block5_code2HelloWorld2c(struct __current_stack5__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static struct map$2charpint* map$2charpint_initialize_with_values(struct map$2charpint* self, int num_keys, char** keys, int* values){
void* right_value135;
void* right_value136;
void* right_value137;
int i_193;
void* right_value138;
void* right_value139;
int i_196;
memset(&i_193, 0, sizeof(int));
memset(&i_196, 0, sizeof(int));
        self->keys=((char**)(right_value135=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
        self->items=((int*)(right_value136=(int*)come_calloc(1, sizeof(int)*(1*(128)))));
        self->item_existance=((_Bool*)(right_value137=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
        for(
        i_193=0;
        i_193<128;
        i_193++
        ){
            self->item_existance[i_193]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        self->it=0;
        if(self->key_list) {(struct list$1charp*)come_decrement_ref_count(self->key_list,0,0); }
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value139=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value138=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
        call_finalizer(list$1charpp_finalize,right_value139,0, 1, 0);
        for(
        i_196=0;
        i_196<num_keys;
        i_196++
        ){
            map$2charpintp_insert(self,keys[i_196],values[i_196]);
        }
        struct map$2charpint* __result148__ = self;
        call_finalizer(map$2charpintp_finalize,self,0, 0, 1);
        return __result148__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1charp* __result133__ = self;
            call_finalizer(list$1charpp_finalize,self,0, 0, 1);
            return __result133__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_194;
struct list_item$1charp* prev_it_195;
memset(&it_194, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_195, 0, sizeof(struct list_item$1charp*));
                it_194=self->head;
                while(it_194!=((void*)0)) {
                    if(0) {
                        it_194->item = come_decrement_ref_count(it_194->item, 0, 0);
                    }
                    prev_it_195=it_194;
                    it_194=it_194->next;
                    come_free_object(prev_it_195);
                }
}

static void map$2charpintp_insert(struct map$2charpint* self, char* key, int item){
int hash_212;
int it_213;
_Bool same_key_exist_214;
char* it2_216;
memset(&hash_212, 0, sizeof(int));
memset(&it_213, 0, sizeof(int));
memset(&same_key_exist_214, 0, sizeof(_Bool));
memset(&it2_216, 0, sizeof(char*));
                if(self->len*2>=self->size) {
                    map$2charpintp_rehash(self);
                }
                hash_212=charp_get_hash_key(key)%self->size;
                it_213=hash_212;
                while((_Bool)1) {
                    if(self->item_existance[it_213]) {
                        if(charp_equals(self->keys[it_213],key)) {
                            if(0) {
                                self->keys[it_213] = come_decrement_ref_count(self->keys[it_213], 0, 0);
                                self->keys[it_213]=key;
                            }
                            else {
                                self->keys[it_213]=key;
                            }
                            if(0) {
                                self->items[it_213]=item;
                            }
                            else {
                                self->items[it_213]=item;
                            }
                            break;
                        }
                        it_213++;
                        if(it_213>=self->size) {
                            it_213=0;
                        }
                        else if(it_213==hash_212) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_213]=(_Bool)1;
                        if(0) {
                            self->keys[it_213]=key;
                        }
                        else {
                            self->keys[it_213]=key;
                        }
                        if(0) {
                            self->items[it_213]=item;
                        }
                        else {
                            self->items[it_213]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_214=(_Bool)0;
                for(
                it2_216=list$1charpp_begin(self->key_list);
                !list$1charpp_end(self->key_list);
                it_213=list$1charpp_next(self->key_list)
                ){
                    if(charp_equals(it2_216,key)) {
                        same_key_exist_214=(_Bool)1;
                    }
                }
                if(!same_key_exist_214) {
                    list$1charpp_push_back(self->key_list,key);
                }
}

static void map$2charpintp_rehash(struct map$2charpint* self){
int size_197;
void* right_value140;
char** keys_198;
void* right_value141;
int* items_199;
void* right_value142;
_Bool* item_existance_200;
int len_201;
char* it_203;
int default_value_205;
int it2_208;
int hash_209;
int n_210;
int default_value_211;
memset(&size_197, 0, sizeof(int));
memset(&keys_198, 0, sizeof(char**));
memset(&items_199, 0, sizeof(int*));
memset(&item_existance_200, 0, sizeof(_Bool*));
memset(&len_201, 0, sizeof(int));
memset(&it_203, 0, sizeof(char*));
memset(&default_value_205, 0, sizeof(int));
memset(&it2_208, 0, sizeof(int));
memset(&hash_209, 0, sizeof(int));
memset(&n_210, 0, sizeof(int));
memset(&default_value_211, 0, sizeof(int));
                        size_197=self->size*3;
                        keys_198=((char**)(right_value140=(char**)come_calloc(1, sizeof(char*)*(1*(size_197)))));
                        items_199=((int*)(right_value141=(int*)come_calloc(1, sizeof(int)*(1*(size_197)))));
                        item_existance_200=((_Bool*)(right_value142=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_197)))));
                        len_201=0;
                        for(
                        it_203=map$2charpintp_begin(self);
                        !map$2charpintp_end(self);
                        it_203=map$2charpintp_next(self)
                        ){
                            it2_208=map$2charpintp_at(self,it_203,default_value_205);
                            hash_209=charp_get_hash_key(it_203)%size_197;
                            n_210=hash_209;
                            while((_Bool)1) {
                                if(item_existance_200[n_210]) {
                                    n_210++;
                                    if(n_210>=size_197) {
                                        n_210=0;
                                    }
                                    else if(n_210==hash_209) {
                                        fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                        exit(2);
                                    }
                                }
                                else {
                                    item_existance_200[n_210]=(_Bool)1;
                                    keys_198[n_210]=it_203;
                                    items_199[n_210]=map$2charpintp_at(self,it_203,default_value_211);
                                    len_201++;
                                    break;
                                }
                            }
                        }
                        come_free_object((char*)self->items);
                        self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
                        come_free_object((char*)self->keys);
                        self->keys=keys_198;
                        self->items=items_199;
                        self->item_existance=item_existance_200;
                        self->size=size_197;
                        self->len=len_201;
}

static char* map$2charpintp_begin(struct map$2charpint* self){
char* result_202;
memset(&result_202, 0, sizeof(char*));
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                char* __result134__ = self->key_list->it->item;
                                return __result134__;
                            }
                            memset(&result_202,0,sizeof(char*));
                            char* __result135__ = result_202;
                            return __result135__;
}

static _Bool map$2charpintp_end(struct map$2charpint* self){
                            _Bool __result136__ = self->key_list->it==((void*)0);
                            return __result136__;
}

static char* map$2charpintp_next(struct map$2charpint* self){
char* result_204;
memset(&result_204, 0, sizeof(char*));
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                char* __result137__ = self->key_list->it->item;
                                return __result137__;
                            }
                            memset(&result_204,0,sizeof(char*));
                            char* __result138__ = result_204;
                            return __result138__;
}

static int map$2charpintp_at(struct map$2charpint* self, char* key, int default_value){
int hash_206;
int it_207;
memset(&hash_206, 0, sizeof(int));
memset(&it_207, 0, sizeof(int));
                                hash_206=charp_get_hash_key(((char*)key))%self->size;
                                it_207=hash_206;
                                while((_Bool)1) {
                                    if(self->item_existance[it_207]) {
                                        if(charp_equals(self->keys[it_207],key)) {
                                            int __result139__ = self->items[it_207];
                                            return __result139__;
                                        }
                                        it_207++;
                                        if(it_207>=self->size) {
                                            it_207=0;
                                        }
                                        else if(it_207==hash_206) {
                                            int __result140__ = default_value;
                                            return __result140__;
                                        }
                                    }
                                    else {
                                        int __result141__ = default_value;
                                        return __result141__;
                                    }
                                }
                                int __result142__ = default_value;
                                return __result142__;
}

static char* list$1charpp_begin(struct list$1charp* self){
char* result_215;
memset(&result_215, 0, sizeof(char*));
                    self->it=self->head;
                    if(self->it) {
                        char* __result143__ = self->it->item;
                        return __result143__;
                    }
                    memset(&result_215,0,sizeof(char*));
                    char* __result144__ = result_215;
                    return __result144__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
                    _Bool __result145__ = self->it==((void*)0);
                    return __result145__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_217;
memset(&result_217, 0, sizeof(char*));
                    self->it=self->it->next;
                    if(self->it) {
                        char* __result146__ = self->it->item;
                        return __result146__;
                    }
                    memset(&result_217,0,sizeof(char*));
                    char* __result147__ = result_217;
                    return __result147__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value143;
struct list_item$1charp* litem_218;
void* right_value144;
struct list_item$1charp* litem_219;
void* right_value145;
struct list_item$1charp* litem_220;
memset(&litem_218, 0, sizeof(struct list_item$1charp*));
memset(&litem_219, 0, sizeof(struct list_item$1charp*));
memset(&litem_220, 0, sizeof(struct list_item$1charp*));
                        if(self->len==0) {
                            litem_218=((struct list_item$1charp*)(right_value143=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_218->prev=((void*)0);
                            litem_218->next=((void*)0);
                            litem_218->item=item;
                            self->tail=litem_218;
                            self->head=litem_218;
                        }
                        else if(self->len==1) {
                            litem_219=((struct list_item$1charp*)(right_value144=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_219->prev=self->head;
                            litem_219->next=((void*)0);
                            litem_219->item=item;
                            self->tail=litem_219;
                            self->head->next=litem_219;
                        }
                        else {
                            litem_220=((struct list_item$1charp*)(right_value145=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_220->prev=self->tail;
                            litem_220->next=((void*)0);
                            litem_220->item=item;
                            self->tail->next=litem_220;
                            self->tail=litem_220;
                        }
                        self->len++;
}

static void map$2charpintp_finalize(struct map$2charpint* self){
int i_221;
int i_222;
memset(&i_221, 0, sizeof(int));
memset(&i_222, 0, sizeof(int));
            for(
            i_221=0;
            i_221<self->size;
            i_221++
            ){
                if(self->item_existance[i_221]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_222=0;
            i_222<self->size;
            i_222++
            ){
                if(self->item_existance[i_222]) {
                    if(0) {
                        self->keys[i_222] = come_decrement_ref_count(self->keys[i_222], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$1charpp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static _Bool map$2charpintp_operator_equals(struct map$2charpint* left, struct map$2charpint* right){
        _Bool __result153__ = map$2charpintp_equals(left,right);
        return __result153__;
}

static _Bool map$2charpintp_equals(struct map$2charpint* left, struct map$2charpint* right){
int n_225;
_Bool result_226;
char* it_227;
char* default_value_228;
char* it2_231;
int default_value2_232;
int item_233;
int item2_234;
memset(&n_225, 0, sizeof(int));
memset(&result_226, 0, sizeof(_Bool));
memset(&it_227, 0, sizeof(char*));
memset(&default_value_228, 0, sizeof(char*));
memset(&it2_231, 0, sizeof(char*));
memset(&default_value2_232, 0, sizeof(int));
memset(&item_233, 0, sizeof(int));
memset(&item2_234, 0, sizeof(int));
            if(left->len!=right->len) {
                _Bool __result149__ = (_Bool)0;
                return __result149__;
            }
            n_225=0;
            result_226=(_Bool)1;
            for(
            it_227=list$1charpp_begin(left->key_list);
            !list$1charpp_end(left->key_list);
            it_227=list$1charpp_next(left->key_list)
            ){
                it2_231=list$1charpp_item(right->key_list,n_225,default_value_228);
                if(charp_equals(it_227,it2_231)) {
                    item_233=map$2charpintp_at(left,it_227,default_value2_232);
                    item2_234=map$2charpintp_at(left,it2_231,default_value2_232);
                    if(!int_equals(item_233,item2_234)) {
                        result_226=(_Bool)0;
                    }
                }
                else {
                    result_226=(_Bool)0;
                }
                n_225++;
            }
            _Bool __result152__ = result_226;
            return __result152__;
}

static char* list$1charpp_item(struct list$1charp* self, int position, char* default_value){
struct list_item$1charp* it_229;
int i_230;
memset(&it_229, 0, sizeof(struct list_item$1charp*));
memset(&i_230, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_229=self->head;
                    i_230=0;
                    while(it_229!=((void*)0)) {
                        if(position==i_230) {
                            char* __result150__ = it_229->item;
                            return __result150__;
                        }
                        it_229=it_229->next;
                        i_230++;
                    }
                    char* __result151__ = default_value;
                    return __result151__;
}

static int map$2charpintp_operator_load_element(struct map$2charpint* self, char* key){
int default_value_238;
memset(&default_value_238, 0, sizeof(int));
        memset(&default_value_238,0,sizeof(int));
        int __result154__ = map$2charpintp_at(self,key,default_value_238);
        return __result154__;
}

static struct map$2charpint* map$2charpintp_clone(struct map$2charpint* self){
void* right_value152;
void* right_value158;
struct map$2charpint* result_240;
char* it_241;
int default_value_242;
int it2_243;
void* right_value159;
void* right_value160;
memset(&result_240, 0, sizeof(struct map$2charpint*));
memset(&it_241, 0, sizeof(char*));
memset(&default_value_242, 0, sizeof(int));
memset(&it2_243, 0, sizeof(int));
        if(self==((void*)0)) {
            struct map$2charpint* __result155__ = ((void*)0);
            return __result155__;
        }
        result_240=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value158=map$2charpintp_initialize((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value152=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1)))))))));
        call_finalizer(map$2charpintp_finalize,right_value158,0, 1, 0);
        for(
        it_241=map$2charpintp_begin(self);
        !map$2charpintp_end(self);
        it_241=map$2charpintp_next(self)
        ){
            it2_243=map$2charpintp_at(self,it_241,default_value_242);
            if(0&&!0) {
                map$2charpintp_insert2(result_240,((char*)(right_value159=charp_clone(it_241))),it2_243);
                right_value159 = come_decrement_ref_count(right_value159, 1, 0);
            }
            else if(0&&0) {
                map$2charpintp_insert2(result_240,((char*)(right_value160=charp_clone(it_241))),int_clone(it2_243));
                right_value160 = come_decrement_ref_count(right_value160, 1, 0);
            }
            else if(!0&&0) {
                map$2charpintp_insert2(result_240,it_241,int_clone(it2_243));
            }
            else if(!0&&!0) {
                map$2charpintp_insert2(result_240,it_241,it2_243);
            }
        }
        struct map$2charpint* __result157__ = result_240;
        call_finalizer(map$2charpintp_finalize,result_240,0, 0, 1);
        return __result157__;
}

static struct map$2charpint* map$2charpintp_initialize(struct map$2charpint* self){
void* right_value153;
void* right_value154;
void* right_value155;
int i_239;
void* right_value156;
void* right_value157;
memset(&i_239, 0, sizeof(int));
            self->keys=((char**)(right_value153=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
            self->items=((int*)(right_value154=(int*)come_calloc(1, sizeof(int)*(1*(128)))));
            self->item_existance=((_Bool*)(right_value155=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
            for(
            i_239=0;
            i_239<128;
            i_239++
            ){
                self->item_existance[i_239]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            if(self->key_list) {(struct list$1charp*)come_decrement_ref_count(self->key_list,0,0); }
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value157=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value156=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            call_finalizer(list$1charpp_finalize,right_value157,0, 1, 0);
            self->it=0;
            struct map$2charpint* __result156__ = self;
            call_finalizer(map$2charpintp_finalize,self,0, 0, 1);
            return __result156__;
}

static void map$2charpintp_insert2(struct map$2charpint* self, char* key, int item){
int hash_244;
int it_245;
_Bool same_key_exist_246;
char* it2_247;
memset(&hash_244, 0, sizeof(int));
memset(&it_245, 0, sizeof(int));
memset(&same_key_exist_246, 0, sizeof(_Bool));
memset(&it2_247, 0, sizeof(char*));
                    if(self->len*2>=self->size) {
                        map$2charpintp_rehash(self);
                    }
                    hash_244=charp_get_hash_key(key)%self->size;
                    it_245=hash_244;
                    while((_Bool)1) {
                        if(self->item_existance[it_245]) {
                            if(charp_equals(self->keys[it_245],key)) {
                                if(0) {
                                    self->keys[it_245] = come_decrement_ref_count(self->keys[it_245], 0, 0);
                                    self->keys[it_245]=key;
                                }
                                else {
                                    self->keys[it_245]=key;
                                }
                                if(0) {
                                    self->items[it_245]=item;
                                }
                                else {
                                    self->items[it_245]=item;
                                }
                                break;
                            }
                            it_245++;
                            if(it_245>=self->size) {
                                it_245=0;
                            }
                            else if(it_245==hash_244) {
                                fprintf(stderr,"unexpected error in map.insert\n");
                                exit(2);
                            }
                        }
                        else {
                            self->item_existance[it_245]=(_Bool)1;
                            if(0) {
                                self->keys[it_245]=key;
                            }
                            else {
                                self->keys[it_245]=key;
                            }
                            if(0) {
                                self->items[it_245]=item;
                            }
                            else {
                                self->items[it_245]=item;
                            }
                            self->len++;
                            break;
                        }
                    }
                    same_key_exist_246=(_Bool)0;
                    for(
                    it2_247=list$1charpp_begin(self->key_list);
                    !list$1charpp_end(self->key_list);
                    it_245=list$1charpp_next(self->key_list)
                    ){
                        if(charp_equals(it2_247,key)) {
                            same_key_exist_246=(_Bool)1;
                        }
                    }
                    if(!same_key_exist_246) {
                        list$1charpp_push_back(self->key_list,key);
                    }
}

static struct tuple1$1int* tuple1$1intp_initialize(struct tuple1$1int* self, int v1){
        self->v1=v1;
        struct tuple1$1int* __result158__ = self;
        call_finalizer(tuple1$1intp_finalize,self,0, 0, 1);
        return __result158__;
}

static void tuple1$1intp_finalize(struct tuple1$1int* self){
}

static struct tuple1$1charph* tuple1$1charphp_initialize(struct tuple1$1charph* self, char* v1){
        if(self->v1) {(char*)come_decrement_ref_count(self->v1,0,0); }
        self->v1=(char*)come_increment_ref_count(v1);
        struct tuple1$1charph* __result159__ = self;
        call_finalizer(tuple1$1charphp_finalize,self,0, 0, 1);
        v1 = come_decrement_ref_count(v1, 0, 1);
        return __result159__;
}

static void tuple1$1charphp_finalize(struct tuple1$1charph* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static struct tuple1$1charph* tuple1$1charphp_clone(struct tuple1$1charph* self){
void* right_value168;
struct tuple1$1charph* result_251;
void* right_value169;
memset(&result_251, 0, sizeof(struct tuple1$1charph*));
        result_251=(struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value168=(struct tuple1$1charph*)come_calloc(1, sizeof(struct tuple1$1charph)*(1)))));
        call_finalizer(tuple1$1charphp_finalize,right_value168,0, 1, 0);
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            if(result_251->v1) {(char*)come_decrement_ref_count(result_251->v1,0,0); }
            result_251->v1=(char*)come_increment_ref_count(((char*)(right_value169=string_clone(self->v1))));
            right_value169 = come_decrement_ref_count(right_value169, 1, 0);
        }
        struct tuple1$1charph* __result160__ = result_251;
        call_finalizer(tuple1$1charphp_finalize,result_251,0, 0, 1);
        return __result160__;
}

static _Bool tuple1$1charphp_equals(struct tuple1$1charph* left, struct tuple1$1charph* right){
        if(!string_equals(left->v1,right->v1)) {
            _Bool __result161__ = (_Bool)0;
            return __result161__;
        }
        _Bool __result162__ = (_Bool)1;
        return __result162__;
}

static _Bool tuple1$1charphp_operator_equals(struct tuple1$1charph* left, struct tuple1$1charph* right){
        if(!string_equals(left->v1,right->v1)) {
            _Bool __result163__ = (_Bool)0;
            return __result163__;
        }
        _Bool __result164__ = (_Bool)1;
        return __result164__;
}

static struct tuple2$2charphint* tuple2$2charphint_initialize(struct tuple2$2charphint* self, char* v1, int v2){
        if(self->v1) {(char*)come_decrement_ref_count(self->v1,0,0); }
        self->v1=(char*)come_increment_ref_count(v1);
        self->v2=v2;
        struct tuple2$2charphint* __result165__ = self;
        call_finalizer(tuple2$2charphintp_finalize,self,0, 0, 1);
        v1 = come_decrement_ref_count(v1, 0, 1);
        return __result165__;
}

static void tuple2$2charphintp_finalize(struct tuple2$2charphint* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static struct tuple2$2charpint* tuple2$2charpint_initialize(struct tuple2$2charpint* self, char* v1, int v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$2charpint* __result166__ = self;
        call_finalizer(tuple2$2charpintp_finalize,self,0, 0, 1);
        return __result166__;
}

static void tuple2$2charpintp_finalize(struct tuple2$2charpint* self){
}

static _Bool tuple2$2charpintp_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right){
        if(!charp_equals(left->v1,right->v1)) {
            _Bool __result167__ = (_Bool)0;
            return __result167__;
        }
        if(!int_equals(left->v2,right->v2)) {
            _Bool __result168__ = (_Bool)0;
            return __result168__;
        }
        _Bool __result169__ = (_Bool)1;
        return __result169__;
}

static _Bool tuple2$2charpintp_operator_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right){
        if(!charp_equals(left->v1,right->v1)) {
            _Bool __result170__ = (_Bool)0;
            return __result170__;
        }
        if(!int_equals(left->v2,right->v2)) {
            _Bool __result171__ = (_Bool)0;
            return __result171__;
        }
        _Bool __result172__ = (_Bool)1;
        return __result172__;
}

static _Bool tuple2$2charpintp_not_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right){
        if(!charp_equals(left->v1,right->v1)) {
            _Bool __result173__ = (_Bool)0;
            return __result173__;
        }
        if(!int_equals(left->v2,right->v2)) {
            _Bool __result174__ = (_Bool)0;
            return __result174__;
        }
        _Bool __result175__ = (_Bool)1;
        return __result175__;
}

static _Bool tuple2$2charpintp_operator_not_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right){
        _Bool __result176__ = !(charp_equals(left->v1,right->v1)&&int_equals(left->v2,right->v2));
        return __result176__;
}

static struct sDataA* sDataA_clone(struct sDataA* self){
void* right_value209;
struct sDataA* result_267;
memset(&result_267, 0, sizeof(struct sDataA*));
        result_267=(struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value209=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1)))));
        call_finalizer(sDataA_finalize,right_value209,0, 1, 0);
        if(self!=((void*)0)) {
            result_267->a=self->a;
        }
        if(self!=((void*)0)) {
            result_267->b=self->b;
        }
        struct sDataA* __result181__ = result_267;
        call_finalizer(sDataA_finalize,result_267,0, 0, 1);
        return __result181__;
}

static struct list$1IAph* list$1IAphp_initialize(struct list$1IAph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1IAph* __result178__ = self;
        call_finalizer(list$1IAphp_finalize,self,0, 0, 1);
        return __result178__;
}

static void list$1IAphp_finalize(struct list$1IAph* self){
struct list_item$1IAph* it_259;
struct list_item$1IAph* prev_it_260;
memset(&it_259, 0, sizeof(struct list_item$1IAph*));
memset(&prev_it_260, 0, sizeof(struct list_item$1IAph*));
            it_259=self->head;
            while(it_259!=((void*)0)) {
                if(1) {
                    call_finalizer(((struct IA*)it_259->item)->finalize, ((struct IA*)it_259->item)->_protocol_obj,0, 0, 0);
                    it_259->item = come_decrement_ref_count(it_259->item, 0, 0);
                }
                prev_it_260=it_259;
                it_259=it_259->next;
                come_free_object(prev_it_260);
            }
}

static void list$1IAphp_push_back(struct list$1IAph* self, struct IA* item){
void* right_value196;
struct list_item$1IAph* litem_262;
struct IA** _inf_valueX2;
void* right_value197;
struct list_item$1IAph* litem_263;
struct IA** _inf_valueX3;
void* right_value198;
struct list_item$1IAph* litem_264;
struct IA** _inf_valueX4;
memset(&litem_262, 0, sizeof(struct list_item$1IAph*));
memset(&litem_263, 0, sizeof(struct list_item$1IAph*));
memset(&litem_264, 0, sizeof(struct list_item$1IAph*));
        if(self->len==0) {
            litem_262=((struct list_item$1IAph*)(right_value196=(struct list_item$1IAph*)come_calloc(1, sizeof(struct list_item$1IAph)*(1))));
            litem_262->prev=((void*)0);
            litem_262->next=((void*)0);
            if(litem_262->item) {(struct IA*)come_decrement_ref_count(litem_262->item,0,0), come_decrement_ref_count(((struct IA*)litem_262->item)->_protocol_obj,0,0); }
            _inf_valueX2=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_262->item=_inf_valueX2;
            self->tail=litem_262;
            self->head=litem_262;
        }
        else if(self->len==1) {
            litem_263=((struct list_item$1IAph*)(right_value197=(struct list_item$1IAph*)come_calloc(1, sizeof(struct list_item$1IAph)*(1))));
            litem_263->prev=self->head;
            litem_263->next=((void*)0);
            if(litem_263->item) {(struct IA*)come_decrement_ref_count(litem_263->item,0,0), come_decrement_ref_count(((struct IA*)litem_263->item)->_protocol_obj,0,0); }
            _inf_valueX3=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_263->item=_inf_valueX3;
            self->tail=litem_263;
            self->head->next=litem_263;
        }
        else {
            litem_264=((struct list_item$1IAph*)(right_value198=(struct list_item$1IAph*)come_calloc(1, sizeof(struct list_item$1IAph)*(1))));
            litem_264->prev=self->tail;
            litem_264->next=((void*)0);
            if(litem_264->item) {(struct IA*)come_decrement_ref_count(litem_264->item,0,0), come_decrement_ref_count(((struct IA*)litem_264->item)->_protocol_obj,0,0); }
            _inf_valueX4=(struct IA*)come_increment_ref_count(item);
            come_increment_ref_count(((struct IA*)item)->_protocol_obj);
            litem_264->item=_inf_valueX4;
            self->tail->next=litem_264;
            self->tail=litem_264;
        }
        self->len++;
        call_finalizer(((struct IA*)item)->finalize, ((struct IA*)item)->_protocol_obj,0, 0, 1);
        item = come_decrement_ref_count(item, 0, 1);
}

static struct IA* list$1IAphp_begin(struct list$1IAph* self){
struct IA* result_268;
memset(&result_268, 0, sizeof(struct IA*));
        self->it=self->head;
        if(self->it) {
            struct IA* __result182__ = self->it->item;
            return __result182__;
        }
        memset(&result_268,0,sizeof(struct IA*));
        struct IA* __result183__ = result_268;
        return __result183__;
}

static _Bool list$1IAphp_end(struct list$1IAph* self){
        _Bool __result184__ = self->it==((void*)0);
        return __result184__;
}

static struct IA* list$1IAphp_next(struct list$1IAph* self){
struct IA* result_270;
memset(&result_270, 0, sizeof(struct IA*));
        self->it=self->it->next;
        if(self->it) {
            struct IA* __result185__ = self->it->item;
            return __result185__;
        }
        memset(&result_270,0,sizeof(struct IA*));
        struct IA* __result186__ = result_270;
        return __result186__;
}

static struct tuple3$3intintbool* tuple3$3intintbool_initialize(struct tuple3$3intintbool* self, int v1, int v2, _Bool v3){
        self->v1=v1;
        self->v2=v2;
        self->v3=v3;
        struct tuple3$3intintbool* __result187__ = self;
        call_finalizer(tuple3$3intintboolp_finalize,self,0, 0, 1);
        return __result187__;
}

static void tuple3$3intintboolp_finalize(struct tuple3$3intintbool* self){
}

static int tuple2$2intboolp_catch(struct tuple2$2intbool* self, void* parent, void (*block)(void*)){
        if(!self->v2) {
            block(parent);
        }
        int __result188__ = int_clone(self->v1);
        return __result188__;
}

void method_block6_code2HelloWorld2c(struct __current_stack6__* parent){
        puts("exception");
        exit(2);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
int i_275;
memset(&i_275, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_275=0;
        i_275<num_value;
        i_275++
        ){
            list$1charphp_push_back(self,values[i_275]);
        }
        struct list$1charph* __result189__ = self;
        call_finalizer(list$1charphp_finalize,self,0, 0, 1);
        return __result189__;
}

static _Bool list$1charphp_operator_equals(struct list$1charph* self, struct list$1charph* right){
        _Bool __result193__ = list$1charphp_equals(self,right);
        return __result193__;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_276;
struct list_item$1charph* it2_277;
memset(&it_276, 0, sizeof(struct list_item$1charph*));
memset(&it2_277, 0, sizeof(struct list_item$1charph*));
            if(left->len!=right->len) {
                _Bool __result190__ = (_Bool)0;
                return __result190__;
            }
            it_276=left->head;
            it2_277=right->head;
            while(it_276!=((void*)0)) {
                if(!string_equals(it_276->item,it2_277->item)) {
                    _Bool __result191__ = (_Bool)0;
                    return __result191__;
                }
                it_276=it_276->next;
                it2_277=it2_277->next;
            }
            _Bool __result192__ = (_Bool)1;
            return __result192__;
}

