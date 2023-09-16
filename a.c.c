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
struct sInfo
{
    int a;
    int b;
};
struct sType
{
    int a;
    int b;
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
struct tuple2$2list$1sTypephphbool
{
    struct list$1sTypeph* v1;
    _Bool v2;
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
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void list$1charph_push_back(struct list$1charph* self, char* item);
static void FILE_finalize(struct _IO_FILE* self);
struct tuple2$2list$1sTypephphbool* parse_params(struct sInfo* info);
static struct tuple2$2list$1sTypephphbool* tuple2$2list$1sTypephphbool_initialize(struct tuple2$2list$1sTypephphbool* self, struct list$1sTypeph* v1, _Bool v2);
static void tuple2$2list$1sTypephphbool_finalize(struct tuple2$2list$1sTypephphbool* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void sType_finalize(struct sType* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
int main(int argc, char** argv);
static void sInfo_finalize(struct sInfo* self);
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
    result_22=(char*)come_increment_ref_count(((char**)(right_value0=(char**)come_calloc(1, sizeof(char*)*(1*(len_21))))));
    right_value0 = come_decrement_ref_count(right_value0, 1, 0);
    strncpy(result_22,str,len_21);
    char* __result__ = result_22;
    result_22 = come_decrement_ref_count(result_22, 0, 1);
    return __result__;
}
static inline _Bool int_equals(int self, int right){
    _Bool __result__ = self==right;
    return __result__;
}
static inline _Bool bool_equals(_Bool self, _Bool right){
    _Bool __result__ = self==right;
    return __result__;
}
static inline _Bool char_equals(char self, char right){
    _Bool __result__ = self==right;
    return __result__;
}
static inline _Bool short_equals(short short self, short short right){
    _Bool __result__ = self==right;
    return __result__;
}
static inline _Bool long_equals(long self, long right){
    _Bool __result__ = self==right;
    return __result__;
}
static inline _Bool string_equals(char* self, char* right){
    _Bool __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline _Bool string_operator_equals(char* self, char* right){
    _Bool __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline _Bool char_operator_equals(char* self, char* right){
    _Bool __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline char* char_operator_add(char* self, char* right){
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
static inline unsigned int int_get_hash_key(int value){
    unsigned int __result__ = value;
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
    unsigned int __result__ = result_27;
    return __result__;
}
static inline unsigned int char_get_hash_key(char* value){
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
    unsigned int __result__ = result_29;
    return __result__;
}
static inline int int_clone(int self){
    int __result__ = self;
    return __result__;
}
static inline char* char_clone(char* self){
    char* __result__ = self;
    return __result__;
}
static inline char* string_clone(char* self){
void* right_value3;
    char* __result__ = ((char*)(right_value3=__builtin_string(self)));
    return __result__;
}
static inline int long_clone(long self){
    int __result__ = self;
    return __result__;
}
static inline short int short_clone(short short self){
    short int __result__ = self;
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
        struct buffer* __result__ = ((void*)0);
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
        old_buf_32=(char*)come_increment_ref_count(char_clone(self->buf));
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
inline struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* right_value14;
    struct list$1charph* __result__ = ((struct list$1charph*)(right_value14=FILE_readlines(f)));
    return __result__;
}
static inline void FILE_fclose(struct _IO_FILE* f){
    FILE_fclose(f);
}
static inline char* FILE_read(struct _IO_FILE* f){
void* right_value21;
void* right_value22;
struct buffer* buf_51;
char buf2_52[8192];
int size_53;
void* right_value23;
memset(&buf_51, 0, sizeof(struct buffer*));
memset(&buf2_52, 0, sizeof(char));
memset(&size_53, 0, sizeof(int));
    buf_51=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value22=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    call_finalizer(buffer_finalize,right_value21,0, 1, 0);
    call_finalizer(buffer_finalize,right_value22,0, 1, 0);
    while(1) {
        size_53=fread(buf2_52,1,8192,f);
        buffer_append(buf_51,buf2_52,size_53);
        if(size_53<8192) {
            break;
        }
    }
    char* __result__ = ((char*)(right_value23=buffer_to_string(buf_51)));
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
void* right_value27;
memset(&f_61, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_61=fopen(file_name,"a");
    }
    else {
        f_61=fopen(file_name,"w");
    }
    FILE_fprintf(f_61,"%s",self);
    FILE_fclose(f_61);
    char* __result__ = ((char*)(right_value27=__builtin_string(self)));
    call_finalizer(FILE_finalize,(&f_61),1, 0, 0);
    return __result__;
}
inline char* char_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_62;
void* right_value28;
memset(&f_62, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_62=fopen(file_name,"a");
    }
    else {
        f_62=fopen(file_name,"w");
    }
    FILE_fprintf(f_62,"%s",self);
    FILE_fclose(f_62);
    char* __result__ = ((char*)(right_value28=__builtin_string(self)));
    call_finalizer(FILE_finalize,(&f_62),1, 0, 0);
    return __result__;
}
static inline int string_length(char* str){
    int __result__ = strlen(str);
    return __result__;
}
static inline int char_length(char* str){
    int __result__ = strlen(str);
    return __result__;
}
static inline char* string_reverse(char* str){
int len_63;
void* right_value29;
char* result_64;
int i_65;
memset(&len_63, 0, sizeof(int));
memset(&result_64, 0, sizeof(char*));
memset(&i_65, 0, sizeof(int));
    len_63=strlen(str);
    result_64=(char*)come_increment_ref_count(((char**)(right_value29=(char**)come_calloc(1, sizeof(char*)*(1*(len_63+1))))));
    right_value29 = come_decrement_ref_count(right_value29, 1, 0);
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
static inline char* char_reverse(char* str){
int len_66;
void* right_value30;
char* result_67;
int i_68;
memset(&len_66, 0, sizeof(int));
memset(&result_67, 0, sizeof(char*));
memset(&i_68, 0, sizeof(int));
    len_66=strlen(str);
    result_67=(char*)come_increment_ref_count(((char**)(right_value30=(char**)come_calloc(1, sizeof(char*)*(1*(len_66+1))))));
    right_value30 = come_decrement_ref_count(right_value30, 1, 0);
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
static inline char* char_substring(char* str, int head, int tail){
void* right_value31;
int len_69;
void* right_value32;
void* right_value33;
void* right_value34;
void* right_value35;
void* right_value36;
char* result_70;
memset(&len_69, 0, sizeof(int));
memset(&result_70, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result__ = ((char*)(right_value31=__builtin_string("")));
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
        char* __result__ = ((char*)(right_value33=string_reverse(((char*)(right_value32=char_substring(str,tail,head))))));
        right_value32 = come_decrement_ref_count(right_value32, 1, 0);
        return __result__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_69) {
        tail=len_69;
    }
    if(head==tail) {
        char* __result__ = ((char*)(right_value34=__builtin_string("")));
        return __result__;
    }
    if(tail-head+1<1) {
        char* __result__ = ((char*)(right_value35=__builtin_string("")));
        return __result__;
    }
    result_70=(char*)come_increment_ref_count(((char**)(right_value36=(char**)come_calloc(1, sizeof(char*)*(1*(tail-head+1))))));
    right_value36 = come_decrement_ref_count(right_value36, 1, 0);
    memcpy(result_70,str+head,tail-head);
    result_70[tail-head]=0;
    char* __result__ = result_70;
    result_70 = come_decrement_ref_count(result_70, 0, 1);
    return __result__;
}
static inline char* string_substring(char* str, int head, int tail){
void* right_value37;
int len_71;
void* right_value38;
void* right_value39;
void* right_value40;
void* right_value41;
void* right_value42;
char* result_72;
memset(&len_71, 0, sizeof(int));
memset(&result_72, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result__ = ((char*)(right_value37=__builtin_string("")));
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
        char* __result__ = ((char*)(right_value39=string_reverse(((char*)(right_value38=char_substring(str,tail,head))))));
        right_value38 = come_decrement_ref_count(right_value38, 1, 0);
        return __result__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_71) {
        tail=len_71;
    }
    if(head==tail) {
        char* __result__ = ((char*)(right_value40=__builtin_string("")));
        return __result__;
    }
    if(tail-head+1<1) {
        char* __result__ = ((char*)(right_value41=__builtin_string("")));
        return __result__;
    }
    result_72=(char*)come_increment_ref_count(((char**)(right_value42=(char**)come_calloc(1, sizeof(char*)*(1*(tail-head+1))))));
    right_value42 = come_decrement_ref_count(right_value42, 1, 0);
    memcpy(result_72,str+head,tail-head);
    result_72[tail-head]=0;
    char* __result__ = result_72;
    result_72 = come_decrement_ref_count(result_72, 0, 1);
    return __result__;
}
static inline char* string_chomp(char* str){
void* right_value43;
char* result_73;
void* right_value44;
memset(&result_73, 0, sizeof(char*));
    result_73=(char*)come_increment_ref_count(((char*)(right_value43=__builtin_string(str))));
    right_value43 = come_decrement_ref_count(right_value43, 1, 0);
    if(result_73[string_length(result_73)-1]==10) {
        char* __result__ = ((char*)(right_value44=string_substring(result_73,0,-2)));
        return __result__;
    }
    char* __result__ = result_73;
    result_73 = come_decrement_ref_count(result_73, 0, 1);
    return __result__;
}
static inline char* char_chomp(char* str){
void* right_value45;
char* result_74;
void* right_value46;
memset(&result_74, 0, sizeof(char*));
    result_74=(char*)come_increment_ref_count(((char*)(right_value45=__builtin_string(str))));
    right_value45 = come_decrement_ref_count(right_value45, 1, 0);
    if(result_74[string_length(result_74)-1]==10) {
        char* __result__ = ((char*)(right_value46=string_substring(result_74,0,-2)));
        return __result__;
    }
    char* __result__ = result_74;
    result_74 = come_decrement_ref_count(result_74, 0, 1);
    return __result__;
}
static inline char* xbasename(char* path){
char* p_75;
void* right_value47;
void* right_value48;
void* right_value49;
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
        char* __result__ = ((char*)(right_value47=__builtin_string(path)));
        return __result__;
    }
    else {
        char* __result__ = ((char*)(right_value48=__builtin_string(p_75+1)));
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
char* path2_76;
char* p_77;
void* right_value53;
void* right_value54;
void* right_value55;
memset(&path2_76, 0, sizeof(char*));
memset(&p_77, 0, sizeof(char*));
    path2_76=(char*)come_increment_ref_count(((char*)(right_value52=xbasename(path))));
    right_value52 = come_decrement_ref_count(right_value52, 1, 0);
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
        char* __result__ = ((char*)(right_value53=__builtin_string(path2_76)));
        return __result__;
    }
    else {
        char* __result__ = ((char*)(right_value54=string_substring(path2_76,0,p_77-path2_76)));
        return __result__;
    }
    char* __result__ = ((char*)(right_value55=__builtin_string("")));
    path2_76 = come_decrement_ref_count(path2_76, 0, 0);
    return __result__;
}
static inline char* xextname(char* path){
char* p_78;
void* right_value56;
void* right_value57;
void* right_value58;
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
        char* __result__ = ((char*)(right_value56=__builtin_string(path)));
        return __result__;
    }
    else {
        char* __result__ = ((char*)(right_value57=__builtin_string(p_78+1)));
        return __result__;
    }
    char* __result__ = ((char*)(right_value58=__builtin_string("")));
    return __result__;
}
static inline char* xrealpath(char* path){
char* result_79;
void* right_value59;
char* result2_80;
memset(&result_79, 0, sizeof(char*));
memset(&result2_80, 0, sizeof(char*));
    result_79=realpath(path,((void*)0));
    result2_80=(char*)come_increment_ref_count(((char*)(right_value59=__builtin_string(result_79))));
    right_value59 = come_decrement_ref_count(right_value59, 1, 0);
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
    _Bool __result__ = c==32||c==9;
    return __result__;
}
static inline _Bool xiswdigit(unsigned int c){
    _Bool __result__ = (c>=48&&c<=57);
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
    _Bool __result__ = c==32||c==9;
    return __result__;
}
static inline _Bool xisdigit(char c){
    _Bool __result__ = (c>=48&&c<=57);
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
void* right_value60;
void* right_value61;
char* result_86;
memset(&f_85, 0, sizeof(struct _IO_FILE*));
memset(&result_86, 0, sizeof(char*));
    f_85=fopen(file_name,"r");
    if(f_85==((void*)0)) {
        char* __result__ = ((char*)(right_value60=__builtin_string("")));
        return __result__;
    }
    result_86=(char*)come_increment_ref_count(((char*)(right_value61=FILE_read(f_85))));
    right_value61 = come_decrement_ref_count(right_value61, 1, 0);
    FILE_fclose(f_85);
    char* __result__ = result_86;
    result_86 = come_decrement_ref_count(result_86, 0, 1);
    return __result__;
}
static inline char* char_read(char* file_name){
struct _IO_FILE* f_87;
void* right_value62;
void* right_value63;
char* result_88;
memset(&f_87, 0, sizeof(struct _IO_FILE*));
memset(&result_88, 0, sizeof(char*));
    f_87=fopen(file_name,"r");
    if(f_87==((void*)0)) {
        char* __result__ = ((char*)(right_value62=__builtin_string("")));
        return __result__;
    }
    result_88=(char*)come_increment_ref_count(((char*)(right_value63=FILE_read(f_87))));
    right_value63 = come_decrement_ref_count(right_value63, 1, 0);
    FILE_fclose(f_87);
    char* __result__ = result_88;
    result_88 = come_decrement_ref_count(result_88, 0, 1);
    return __result__;
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
void* right_value64;
    char* __result__ = ((char*)(right_value64=__builtin_string(self)));
    return __result__;
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
    void* __result__ = mem_0+sizeof(int)+sizeof(long);
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
    void* __result__ = (char*)ret_15+sizeof(int)+sizeof(long);
    return __result__;
}









































static void va_list_finalize(va_list* self){
}



static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1charph* __result__ = self;
        call_finalizer(list$1charph_finalize,self,0, 0, 1);
        return __result__;
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_44;
struct list_item$1charph* prev_it_45;
memset(&it_44, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_45, 0, sizeof(struct list_item$1charph*));
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

static void list$1charph_push_back(struct list$1charph* self, char* item){
void* right_value17;
struct list_item$1charph* litem_48;
void* right_value18;
struct list_item$1charph* litem_49;
void* right_value19;
struct list_item$1charph* litem_50;
memset(&litem_48, 0, sizeof(struct list_item$1charph*));
memset(&litem_49, 0, sizeof(struct list_item$1charph*));
memset(&litem_50, 0, sizeof(struct list_item$1charph*));
            if(self->len==0) {
                litem_48=((struct list_item$1charph*)(right_value17=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_48->prev=((void*)0);
                litem_48->next=((void*)0);
                if(litem_48->item) {(char*)come_decrement_ref_count(litem_48->item,0,0); }
                litem_48->item=(char*)come_increment_ref_count(item);
                self->tail=litem_48;
                self->head=litem_48;
            }
            else if(self->len==1) {
                litem_49=((struct list_item$1charph*)(right_value18=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_49->prev=self->head;
                litem_49->next=((void*)0);
                if(litem_49->item) {(char*)come_decrement_ref_count(litem_49->item,0,0); }
                litem_49->item=(char*)come_increment_ref_count(item);
                self->tail=litem_49;
                self->head->next=litem_49;
            }
            else {
                litem_50=((struct list_item$1charph*)(right_value19=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
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






























struct tuple2$2list$1sTypephphbool* parse_params(struct sInfo* info){
void* right_value65;
void* right_value66;
void* right_value67;
void* right_value68;
    struct tuple2$2list$1sTypephphbool* __result__ = ((struct tuple2$2list$1sTypephphbool*)(right_value68=tuple2$2list$1sTypephphbool_initialize((struct tuple2$2list$1sTypephphbool*)come_increment_ref_count(((struct tuple2$2list$1sTypephphbool*)(right_value65=(struct tuple2$2list$1sTypephphbool*)come_calloc(1, sizeof(struct tuple2$2list$1sTypephphbool)*(1))))),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value67=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value66=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1))))))))),(_Bool)0)));
    call_finalizer(list$1sTypeph_finalize,right_value67,0, 1, 0);
    return __result__;
}

static struct tuple2$2list$1sTypephphbool* tuple2$2list$1sTypephphbool_initialize(struct tuple2$2list$1sTypephphbool* self, struct list$1sTypeph* v1, _Bool v2){
        if(self->v1) {(struct list$1sTypeph*)come_decrement_ref_count(self->v1,0,0); }
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        self->v2=v2;
        struct tuple2$2list$1sTypephphbool* __result__ = self;
        call_finalizer(tuple2$2list$1sTypephphbool_finalize,self,0, 0, 1);
        call_finalizer(list$1sTypeph_finalize,v1,0, 0, 1);
        return __result__;
}

static void tuple2$2list$1sTypephphbool_finalize(struct tuple2$2list$1sTypephphbool* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                call_finalizer(list$1sTypeph_finalize,self->v1,0, 0, 0);
            }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_89;
struct list_item$1sTypeph* prev_it_90;
memset(&it_89, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_90, 0, sizeof(struct list_item$1sTypeph*));
                    it_89=self->head;
                    while(it_89!=((void*)0)) {
                        if(1) {
                            call_finalizer(sType_finalize,it_89->item,0, 0, 0);
                        }
                        prev_it_90=it_89;
                        it_89=it_89->next;
                        come_free_object(prev_it_90);
                    }
}

static void sType_finalize(struct sType* self){
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1sTypeph* __result__ = self;
        call_finalizer(list$1sTypeph_finalize,self,0, 0, 1);
        return __result__;
}

int main(int argc, char** argv){
struct sInfo info_91;
void* right_value69;
struct tuple2$2list$1sTypephphbool* multiple_assgin_var1;
struct list$1sTypeph* a_92;
_Bool b_93;
memset(&info_91, 0, sizeof(struct sInfo));
memset(&a_92, 0, sizeof(struct list$1sTypeph*));
memset(&a_92, 0, sizeof(struct list$1sTypeph*));
memset(&a_92, 0, sizeof(struct list$1sTypeph*));
memset(&b_93, 0, sizeof(_Bool));
    multiple_assgin_var1=((struct tuple2$2list$1sTypephphbool*)(right_value69=parse_params(&info_91)));
    a_92=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var1->v1);
    b_93=multiple_assgin_var1->v2;
    call_finalizer(tuple2$2list$1sTypephphbool_finalize,right_value69,0, 1, 0);
    int __result__ = 0;
    call_finalizer(sInfo_finalize,(&info_91),1, 0, 0);
    call_finalizer(list$1sTypeph_finalize,a_92,0, 0, 0);
    return __result__;
}

static void sInfo_finalize(struct sInfo* self){
}

