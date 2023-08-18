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
typedef __builtin_va_list va_list;
typedef long int off_t;
typedef long int ssize_t;
typedef struct _G_fpos_t fpos_t;
extern struct _IO_marker* stdin;
extern struct _IO_marker* stdout;
extern struct _IO_marker* stderr;
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
struct sData
{
    char* a;
};
struct list_item_char
{
    char* item;
    struct list_item_char* prev;
    struct list_item_char* next;
};
struct list_char
{
    struct list_item_char* head;
    struct list_item_char* tail;
    int len;
    struct list_item_char* it;
};
struct list_item_int
{
    int item;
    struct list_item_int* prev;
    struct list_item_int* next;
};
struct list_int
{
    struct list_item_int* head;
    struct list_item_int* tail;
    int len;
    struct list_item_int* it;
};
struct __current_stack1__
{
    char** p_27;
    void** p2_28;
    int* count_29;
    int* size2_30;
    char** mem2_31;
    int* b_32;
    int** a_33;
    int* a2_34;
    char** ax_37;
    char** str_41;
    struct sData** data_42;
    int** axyz_43;
    int** xxx_44;
    int** yyy_45;
    int** zzz_46;
    int* bzyz_47;
    int** azyz_48;
    int* n_49;
};
struct __current_stack2__
{
    char** p_27;
    void** p2_28;
    int* count_29;
    int* size2_30;
    char** mem2_31;
    int* b_32;
    int** a_33;
    int* a2_34;
    char** ax_37;
    char** str_41;
    struct sData** data_42;
    int** axyz_43;
    int** xxx_44;
    int** yyy_45;
    int** zzz_46;
    int* bzyz_47;
    int** azyz_48;
    int* n_49;
    struct list_char** liX_52;
    struct list_int** liX2_61;
    int* aX_68;
};
struct __current_stack3__
{
    char** p_27;
    void** p2_28;
    int* count_29;
    int* size2_30;
    char** mem2_31;
    int* b_32;
    int** a_33;
    int* a2_34;
    char** ax_37;
    char** str_41;
    struct sData** data_42;
    int** axyz_43;
    int** xxx_44;
    int** yyy_45;
    int** zzz_46;
    int* bzyz_47;
    int** azyz_48;
    int* n_49;
    struct list_char** liX_52;
    struct list_int** liX2_61;
    int* aX_68;
    int* aXYZY_72;
    struct list_char** li_73;
    struct list_int** li2_75;
    int* aXL_77;
};

/* header function */
void __init_code__HelloWorld__c__();
void __final_code__HelloWorld__c__();
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int fclose(struct _IO_marker* __stream);
struct _IO_marker* tmpfile();
char* tmpnam(char anonymous_var_name1[20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx);
int fflush(struct _IO_marker* __stream);
int fflush_unlocked(struct _IO_marker* __stream);
struct _IO_marker* fopen(const char* __filename, const char* __modes);
struct _IO_marker* freopen(const char* __filename, const char* __modes, struct _IO_marker* __stream);
struct _IO_marker* fdopen(int __fd, const char* __modes);
struct _IO_marker* fmemopen(void* __s, int __len, const char* __modes);
struct _IO_marker* open_memstream(char** __bufloc, int* __sizeloc);
void setbuf(struct _IO_marker* __stream, char* __buf);
int setvbuf(struct _IO_marker* __stream, char* __buf, int __modes, int __n);
void setbuffer(struct _IO_marker* __stream, char* __buf, int __size);
void setlinebuf(struct _IO_marker* __stream);
int fprintf(struct _IO_marker* __stream, const char* __format, ...);
int printf(const char* __format, ...);
int sprintf(char* __s, const char* __format, ...);
int vfprintf(struct _IO_marker* __s, const char* __format, va_list __arg);
int vprintf(const char* __format, va_list __arg);
int vsprintf(char* __s, const char* __format, va_list __arg);
int snprintf(char* __s, int __maxlen, const char* __format, ...);
int vsnprintf(char* __s, int __maxlen, const char* __format, va_list __arg);
int vdprintf(int __fd, const char* __fmt, va_list __arg);
int dprintf(int __fd, const char* __fmt, ...);
int fscanf(struct _IO_marker* __stream, const char* __format, ...);
int scanf(const char* __format, ...);
int sscanf(const char* __s, const char* __format, ...);
int __isoc99_fscanf(struct _IO_marker* __stream, const char* __format, ...);
int __isoc99_scanf(const char* __format, ...);
int __isoc99_sscanf(const char* __s, const char* __format, ...);
int vfscanf(struct _IO_marker* __s, const char* __format, va_list __arg);
int vscanf(const char* __format, va_list __arg);
int vsscanf(const char* __s, const char* __format, va_list __arg);
int __isoc99_vfscanf(struct _IO_marker* __s, const char* __format, va_list __arg);
int __isoc99_vscanf(const char* __format, va_list __arg);
int __isoc99_vsscanf(const char* __s, const char* __format, va_list __arg);
int fgetc(struct _IO_marker* __stream);
int getc(struct _IO_marker* __stream);
int getchar();
int getc_unlocked(struct _IO_marker* __stream);
int getchar_unlocked();
int fgetc_unlocked(struct _IO_marker* __stream);
int fputc(int __c, struct _IO_marker* __stream);
int putc(int __c, struct _IO_marker* __stream);
int putchar(int __c);
int fputc_unlocked(int __c, struct _IO_marker* __stream);
int putc_unlocked(int __c, struct _IO_marker* __stream);
int putchar_unlocked(int __c);
int getw(struct _IO_marker* __stream);
int putw(int __w, struct _IO_marker* __stream);
char* fgets(char* __s, int __n, struct _IO_marker* __stream);
long int __getdelim(char** __lineptr, int* __n, int __delimiter, struct _IO_marker* __stream);
long int getdelim(char** __lineptr, int* __n, int __delimiter, struct _IO_marker* __stream);
long int getline(char** __lineptr, int* __n, struct _IO_marker* __stream);
int fputs(const char* __s, struct _IO_marker* __stream);
int puts(const char* __s);
int ungetc(int __c, struct _IO_marker* __stream);
int fread(void* __ptr, int __size, int __n, struct _IO_marker* __stream);
int fwrite(const void* __ptr, int __size, int __n, struct _IO_marker* __s);
int fread_unlocked(void* __ptr, int __size, int __n, struct _IO_marker* __stream);
int fwrite_unlocked(const void* __ptr, int __size, int __n, struct _IO_marker* __stream);
int fseek(struct _IO_marker* __stream, long int __off, int __whence);
long int ftell(struct _IO_marker* __stream);
void rewind(struct _IO_marker* __stream);
int fseeko(struct _IO_marker* __stream, long int __off, int __whence);
long int ftello(struct _IO_marker* __stream);
int fgetpos(struct _IO_marker* __stream, struct _G_fpos_t* __pos);
int fsetpos(struct _IO_marker* __stream, const struct _G_fpos_t* __pos);
void clearerr(struct _IO_marker* __stream);
int feof(struct _IO_marker* __stream);
int ferror(struct _IO_marker* __stream);
void clearerr_unlocked(struct _IO_marker* __stream);
int feof_unlocked(struct _IO_marker* __stream);
int ferror_unlocked(struct _IO_marker* __stream);
void perror(const char* __s);
int fileno(struct _IO_marker* __stream);
int fileno_unlocked(struct _IO_marker* __stream);
int pclose(struct _IO_marker* __stream);
struct _IO_marker* popen(const char* __command, const char* __modes);
char* ctermid(char* __s);
void flockfile(struct _IO_marker* __stream);
int ftrylockfile(struct _IO_marker* __stream);
void funlockfile(struct _IO_marker* __stream);
int __uflow(struct _IO_marker* anonymous_var_name2);
int __overflow(struct _IO_marker* anonymous_var_name3, int anonymous_var_name4);
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
static unsigned short int __bswap_16(unsigned short int __bsx);
static unsigned int __bswap_32(unsigned int __bsx);
static unsigned long int __bswap_64(unsigned long int __bsx);
static unsigned short int __uint16_identity(unsigned short int __x);
static unsigned int __uint32_identity(unsigned int __x);
static unsigned long int __uint64_identity(unsigned long int __x);
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
static void xassert(char* msg, _Bool test);
static void ncfree(void* mem);
static void* come_calloc(int count, int size);
static void* come_increment_ref_count(void* mem);
static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free);
static void come_free_object(void* mem);
static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free);
static void* nccalloc(int nmemb, int size);
static void* come_memdup(void* block);
static void int_times(int self, void* parent, void (*block)(void*));
static char* __builtin_string(char* str);
static _Bool int_equals(int self, int right);
static _Bool bool_equals(_Bool self, _Bool right);
static _Bool char_equals(char self, char right);
static _Bool short_equals(short short self, short short right);
static _Bool long_equals(long self, long right);
static _Bool stringp_equals(char* self, char* right);
static _Bool stringp_operator_equals(char* self, char* right);
static _Bool charp_operator_equals(char* self, char* right);
static _Bool charp_equals(char* self, char* right);
static char* charp_operator_add(char* self, char* right);
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int intp_fun(int* self);
int main();
static void sDatap_finalize(struct sData* self);
void method_block1(struct __current_stack1__* parent);
static struct list_char* list_charp_initialize(struct list_char* self);
static void list_charp_finalize(struct list_char* self);
static void list_item_charp_finalize(struct list_item_char* self);
static void list_charp_push_back(struct list_char* self, char* item);
static char* list_charp_begin(struct list_char* self);
static _Bool list_charp_end(struct list_char* self);
static char* list_charp_next(struct list_char* self);
static struct list_int* list_intp_initialize(struct list_int* self);
static void list_intp_finalize(struct list_int* self);
static void list_item_intp_finalize(struct list_item_int* self);
static void list_intp_push_back(struct list_int* self, int item);
static int list_intp_begin(struct list_int* self);
static _Bool list_intp_end(struct list_int* self);
static int list_intp_next(struct list_int* self);
static void list_intp_each(struct list_int* self, void* parent, void (*block)(void*,int,int,_Bool*));
void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3);
void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3);
static int list_intp_item(struct list_int* self, int position, int default_value);
static void list_intp_insert(struct list_int* self, int position, int item);
static void list_charp_insert(struct list_char* self, int position, char* item);
static char* list_charp_item(struct list_char* self, int position, char* default_value);
static void list_charp_reset(struct list_char* self);
static int list_charp_length(struct list_char* self);
static void list_intp_delete(struct list_int* self, int head, int tail);
static void list_intp_reset(struct list_int* self);
static void list_charp_replace(struct list_char* self, int position, char* item);
static _Bool list_intp_equals(struct list_int* left, struct list_int* right);
static int list_intp_find(struct list_int* self, int item, int default_value);
static struct list_int* list_intp_sublist(struct list_int* self, int begin, int tail);

/* body function */
void __init_code__HelloWorld__c__(){
}

void __final_code__HelloWorld__c__(){
}

static unsigned short int __bswap_16(unsigned short int __bsx){
    unsigned short int __result__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    return __result__;
}

static unsigned int __bswap_32(unsigned int __bsx){
    unsigned int __result__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result__;
}

static unsigned long int __bswap_64(unsigned long int __bsx){
    unsigned long int __result__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result__;
}

static unsigned short int __uint16_identity(unsigned short int __x){
    unsigned short int __result__ = __x;
    return __result__;
}

static unsigned int __uint32_identity(unsigned int __x){
    unsigned int __result__ = __x;
    return __result__;
}

static unsigned long int __uint64_identity(unsigned long int __x){
    unsigned long int __result__ = __x;
    return __result__;
}

static void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

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

static void int_times(int self, void* parent, void (*block)(void*)){
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

static char* __builtin_string(char* str){
int len_21;
void* right_value0;
char* result_22;
memset(&len_21, 0, sizeof(int));
memset(&result_22, 0, sizeof(char*));
    len_21=strlen(str)+1;
    result_22=come_increment_ref_count((char**)(right_value0=(char**)come_calloc(1, sizeof(char*)*1*len_21)));
    strncpy(result_22,str,len_21);
    char* __result__ = result_22;
    result_22 = come_decrement_ref_count(result_22, 0, 1);
    return __result__;
}

static _Bool int_equals(int self, int right){
    int __result__ = self==right;
    return __result__;
}

static _Bool bool_equals(_Bool self, _Bool right){
    _Bool __result__ = self==right;
    return __result__;
}

static _Bool char_equals(char self, char right){
    char __result__ = self==right;
    return __result__;
}

static _Bool short_equals(short short self, short short right){
    short short __result__ = self==right;
    return __result__;
}

static _Bool long_equals(long self, long right){
    long __result__ = self==right;
    return __result__;
}

static _Bool stringp_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}

static _Bool stringp_operator_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}

static _Bool charp_operator_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}

static _Bool charp_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}

static char* charp_operator_add(char* self, char* right){
int len_23;
void* right_value1;
char* result_24;
memset(&len_23, 0, sizeof(int));
memset(&result_24, 0, sizeof(char*));
    len_23=strlen(self)+strlen(right);
    result_24=come_increment_ref_count((char**)(right_value1=(char**)come_calloc(1, sizeof(char*)*1*len_23+1)));
    strncpy(result_24,self,len_23+1);
    strncat(result_24,right,len_23+1);
    char* __result__ = result_24;
    result_24 = come_decrement_ref_count(result_24, 0, 1);
    return __result__;
}

int* funHeap(int x, int y){
void* right_value2;
int* result_25;
memset(&result_25, 0, sizeof(int*));
    result_25=come_increment_ref_count((int*)(right_value2=(int*)come_calloc(1, sizeof(int)*1)));
    *result_25=x+y;
    int* __result__ = result_25;
    result_25 = come_decrement_ref_count(result_25, 0, 1);
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

int main(){
void* right_value3;
char* a_26;
char* p_27;
void* p2_28;
int count_29;
int size2_30;
char* mem2_31;
int b_32;
int* a_33;
int a2_34;
int b_35;
int n_36;
void* right_value4;
char* ax_37;
void* right_value5;
char* a_38;
char* b_39;
struct sData data_40;
void* right_value6;
char* str_41;
void* right_value7;
struct sData* data_42;
void* right_value8;
void* right_value9;
void* right_value10;
int* axyz_43;
void* right_value11;
int* xxx_44;
void* right_value12;
int* yyy_45;
void* right_value13;
int* zzz_46;
void* right_value14;
int bzyz_47;
int* azyz_48;
int n_49;
struct __current_stack1__ __current_stack1__;
void* right_value15;
void* right_value16;
struct list_char* liX_52;
void* right_value20;
void* right_value21;
void* right_value22;
char* it_57;
void* right_value23;
void* right_value24;
struct list_int* liX2_61;
int it_66;
int aX_68;
struct __current_stack2__ __current_stack2__;
int aXYZY_72;
void* right_value28;
void* right_value29;
struct list_char* li_73;
void* right_value30;
void* right_value31;
void* right_value32;
char* it_74;
void* right_value33;
void* right_value34;
struct list_int* li2_75;
int it_76;
int aXL_77;
struct __current_stack3__ __current_stack3__;
void* right_value41;
void* right_value42;
void* right_value43;
struct list_char* li3_108;
void* right_value44;
void* right_value45;
void* right_value46;
void* right_value47;
void* right_value48;
void* right_value49;
struct list_int* li4_111;
void* right_value50;
void* right_value51;
struct list_int* li5_112;
void* right_value52;
void* right_value53;
struct list_int* li6_117;
void* right_value56;
int* axyzX_121;
void* right_value57;
void* right_value58;
void* right_value59;
void* right_value60;
void* right_value61;
char* strXYXY_122;
memset(&a_26, 0, sizeof(char*));
memset(&p_27, 0, sizeof(char*));
memset(&p2_28, 0, sizeof(void*));
memset(&count_29, 0, sizeof(int));
memset(&size2_30, 0, sizeof(int));
memset(&mem2_31, 0, sizeof(char*));
memset(&b_32, 0, sizeof(int));
memset(&a_33, 0, sizeof(int*));
memset(&a2_34, 0, sizeof(int));
memset(&b_35, 0, sizeof(int));
memset(&n_36, 0, sizeof(int));
memset(&ax_37, 0, sizeof(char*));
memset(&a_38, 0, sizeof(char*));
memset(&b_39, 0, sizeof(char*));
memset(&data_40, 0, sizeof(struct sData));
memset(&str_41, 0, sizeof(char*));
memset(&data_42, 0, sizeof(struct sData*));
memset(&axyz_43, 0, sizeof(int*));
memset(&xxx_44, 0, sizeof(int*));
memset(&yyy_45, 0, sizeof(int*));
memset(&zzz_46, 0, sizeof(int*));
memset(&bzyz_47, 0, sizeof(int));
memset(&azyz_48, 0, sizeof(int*));
memset(&n_49, 0, sizeof(int));
memset(&liX_52, 0, sizeof(struct list_char*));
memset(&it_57, 0, sizeof(char*));
memset(&liX2_61, 0, sizeof(struct list_int*));
memset(&it_66, 0, sizeof(int));
memset(&aX_68, 0, sizeof(int));
memset(&aXYZY_72, 0, sizeof(int));
memset(&li_73, 0, sizeof(struct list_char*));
memset(&it_74, 0, sizeof(char*));
memset(&li2_75, 0, sizeof(struct list_int*));
memset(&it_76, 0, sizeof(int));
memset(&aXL_77, 0, sizeof(int));
memset(&li3_108, 0, sizeof(struct list_char*));
memset(&li4_111, 0, sizeof(struct list_int*));
memset(&li5_112, 0, sizeof(struct list_int*));
memset(&li6_117, 0, sizeof(struct list_int*));
memset(&axyzX_121, 0, sizeof(int*));
memset(&strXYXY_122, 0, sizeof(char*));
    __init_code__HelloWorld__c__();
    if(1) {
        a_26=come_increment_ref_count((char**)(right_value3=(char**)come_calloc(1, sizeof(char*)*1*128)));
        a_26 = come_decrement_ref_count(a_26, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_27="ABC";
    p2_28="ABC";
    printf("%s\n",(char*)p2_28);
    printf("%c\n",*p_27);
    count_29=0;
    size2_30=1;
    mem2_31=calloc(1,sizeof(int)+sizeof(long)+count_29*size2_30);
    free(mem2_31);
    a_33=&b_32;
    (*a_33)=123;
    a2_34=123;
    if((_Bool)1) {
        b_35=234;
        n_36=0;
        while(n_36<3) {
            printf("a %d\n",a2_34);
            printf("b %d\n",b_35);
            n_36++;
        }
    }
    ax_37=come_increment_ref_count((char**)(right_value4=(char**)come_calloc(1, sizeof(char*)*1*128)));
    if(1) {
        a_38=come_increment_ref_count((char**)(right_value5=(char**)come_calloc(1, sizeof(char*)*1*128)));
        b_39=come_increment_ref_count(a_38);
        data_40.a=come_increment_ref_count(a_38);
        a_38 = come_decrement_ref_count(a_38, 0, 0);
        b_39 = come_decrement_ref_count(b_39, 0, 0);
        call_finalizer(sDatap_finalize,(&data_40),1, 0, 0);
    }
    str_41=come_increment_ref_count((char**)(right_value6=(char**)come_calloc(1, sizeof(char*)*1*128)));
    strncpy(str_41,"ABC",128);
    data_42=come_increment_ref_count((struct sData*)(right_value7=(struct sData*)come_calloc(1, sizeof(struct sData)*1)));
    come_decrement_ref_count(data_42->a, 0, 0);
    data_42->a=come_increment_ref_count(str_41);
    puts(data_42->a);
    (int*)(right_value8=funHeap(7,7));
    right_value8 = come_decrement_ref_count(right_value8, 1, 0);
    xassert("right value test",*(int*)(right_value9=funHeap(3,4))==7);
    right_value9 = come_decrement_ref_count(right_value9, 1, 0);
    axyz_43=come_increment_ref_count((int*)(right_value10=funHeap(1,2)));
    xassert("variable test",*axyz_43==3);
    xxx_44=come_increment_ref_count((int*)(right_value11=(int*)come_calloc(1, sizeof(int)*1)));
    *xxx_44=1;
    yyy_45=come_increment_ref_count((int*)(right_value12=(int*)come_calloc(1, sizeof(int)*1)));
    *yyy_45=2;
    xassert("heap",funHeap2(come_increment_ref_count(xxx_44),come_increment_ref_count(yyy_45))==3);
    zzz_46=come_increment_ref_count((int*)(right_value13=(int*)come_calloc(1, sizeof(int)*1)));
    (int*)(right_value14=(int*)come_calloc(1, sizeof(int)*1));
    right_value14 = come_decrement_ref_count(right_value14, 1, 0);
    bzyz_47=123;
    azyz_48=&bzyz_47;
    xassert("impl",intp_fun(azyz_48)==123);
    n_49=0;
    __current_stack1__.p_27 = &p_27;
    __current_stack1__.p2_28 = &p2_28;
    __current_stack1__.count_29 = &count_29;
    __current_stack1__.size2_30 = &size2_30;
    __current_stack1__.mem2_31 = &mem2_31;
    __current_stack1__.b_32 = &b_32;
    __current_stack1__.a_33 = &a_33;
    __current_stack1__.a2_34 = &a2_34;
    __current_stack1__.ax_37 = &ax_37;
    __current_stack1__.str_41 = &str_41;
    __current_stack1__.data_42 = &data_42;
    __current_stack1__.axyz_43 = &axyz_43;
    __current_stack1__.xxx_44 = &xxx_44;
    __current_stack1__.yyy_45 = &yyy_45;
    __current_stack1__.zzz_46 = &zzz_46;
    __current_stack1__.bzyz_47 = &bzyz_47;
    __current_stack1__.azyz_48 = &azyz_48;
    __current_stack1__.n_49 = &n_49;
    int_times(3,&__current_stack1__,method_block1);
    liX_52=come_increment_ref_count((struct list_char*)(right_value16=list_charp_initialize(come_increment_ref_count((struct list_char*)(right_value15=(struct list_char*)come_calloc(1, sizeof(struct list_char)*1))))));
    call_finalizer(list_charp_finalize,right_value15,0, 1, 0);
    list_charp_push_back(liX_52,come_increment_ref_count((char*)(right_value20=__builtin_string("ABC"))));
    right_value20 = come_decrement_ref_count(right_value20, 1, 0);
    list_charp_push_back(liX_52,come_increment_ref_count((char*)(right_value21=__builtin_string("DEF"))));
    right_value21 = come_decrement_ref_count(right_value21, 1, 0);
    list_charp_push_back(liX_52,come_increment_ref_count((char*)(right_value22=__builtin_string("GHI"))));
    right_value22 = come_decrement_ref_count(right_value22, 1, 0);
    for(
    it_57=list_charp_begin((liX_52));
    !list_charp_end((liX_52));
    it_57=list_charp_next((liX_52))
    ){
        printf("%s\n",it_57);
    }
    liX2_61=come_increment_ref_count((struct list_int*)(right_value24=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value23=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value23,0, 1, 0);
    list_intp_push_back(liX2_61,1);
    list_intp_push_back(liX2_61,2);
    list_intp_push_back(liX2_61,3);
    for(
    it_66=list_intp_begin((liX2_61));
    !list_intp_end((liX2_61));
    it_66=list_intp_next((liX2_61))
    ){
        printf("%d\n",it_66);
    }
    aX_68=123;
    __current_stack2__.p_27 = &p_27;
    __current_stack2__.p2_28 = &p2_28;
    __current_stack2__.count_29 = &count_29;
    __current_stack2__.size2_30 = &size2_30;
    __current_stack2__.mem2_31 = &mem2_31;
    __current_stack2__.b_32 = &b_32;
    __current_stack2__.a_33 = &a_33;
    __current_stack2__.a2_34 = &a2_34;
    __current_stack2__.ax_37 = &ax_37;
    __current_stack2__.str_41 = &str_41;
    __current_stack2__.data_42 = &data_42;
    __current_stack2__.axyz_43 = &axyz_43;
    __current_stack2__.xxx_44 = &xxx_44;
    __current_stack2__.yyy_45 = &yyy_45;
    __current_stack2__.zzz_46 = &zzz_46;
    __current_stack2__.bzyz_47 = &bzyz_47;
    __current_stack2__.azyz_48 = &azyz_48;
    __current_stack2__.n_49 = &n_49;
    __current_stack2__.liX_52 = &liX_52;
    __current_stack2__.liX2_61 = &liX2_61;
    __current_stack2__.aX_68 = &aX_68;
    list_intp_each(liX2_61,&__current_stack2__,method_block2);
    xassert("method_block test",aX_68==2);
    xassert("var initialize test",aXYZY_72==0);
    li_73=come_increment_ref_count((struct list_char*)(right_value29=list_charp_initialize(come_increment_ref_count((struct list_char*)(right_value28=(struct list_char*)come_calloc(1, sizeof(struct list_char)*1))))));
    call_finalizer(list_charp_finalize,right_value28,0, 1, 0);
    list_charp_push_back(li_73,come_increment_ref_count((char*)(right_value30=__builtin_string("ABC"))));
    right_value30 = come_decrement_ref_count(right_value30, 1, 0);
    list_charp_push_back(li_73,come_increment_ref_count((char*)(right_value31=__builtin_string("DEF"))));
    right_value31 = come_decrement_ref_count(right_value31, 1, 0);
    list_charp_push_back(li_73,come_increment_ref_count((char*)(right_value32=__builtin_string("GHI"))));
    right_value32 = come_decrement_ref_count(right_value32, 1, 0);
    for(
    it_74=list_charp_begin((li_73));
    !list_charp_end((li_73));
    it_74=list_charp_next((li_73))
    ){
        printf("%s\n",it_74);
    }
    li2_75=come_increment_ref_count((struct list_int*)(right_value34=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value33=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value33,0, 1, 0);
    list_intp_push_back(li2_75,1);
    list_intp_push_back(li2_75,2);
    list_intp_push_back(li2_75,3);
    for(
    it_76=list_intp_begin((li2_75));
    !list_intp_end((li2_75));
    it_76=list_intp_next((li2_75))
    ){
        printf("%d\n",it_76);
    }
    aXL_77=123;
    __current_stack3__.p_27 = &p_27;
    __current_stack3__.p2_28 = &p2_28;
    __current_stack3__.count_29 = &count_29;
    __current_stack3__.size2_30 = &size2_30;
    __current_stack3__.mem2_31 = &mem2_31;
    __current_stack3__.b_32 = &b_32;
    __current_stack3__.a_33 = &a_33;
    __current_stack3__.a2_34 = &a2_34;
    __current_stack3__.ax_37 = &ax_37;
    __current_stack3__.str_41 = &str_41;
    __current_stack3__.data_42 = &data_42;
    __current_stack3__.axyz_43 = &axyz_43;
    __current_stack3__.xxx_44 = &xxx_44;
    __current_stack3__.yyy_45 = &yyy_45;
    __current_stack3__.zzz_46 = &zzz_46;
    __current_stack3__.bzyz_47 = &bzyz_47;
    __current_stack3__.azyz_48 = &azyz_48;
    __current_stack3__.n_49 = &n_49;
    __current_stack3__.liX_52 = &liX_52;
    __current_stack3__.liX2_61 = &liX2_61;
    __current_stack3__.aX_68 = &aX_68;
    __current_stack3__.aXYZY_72 = &aXYZY_72;
    __current_stack3__.li_73 = &li_73;
    __current_stack3__.li2_75 = &li2_75;
    __current_stack3__.aXL_77 = &aXL_77;
    list_intp_each(li2_75,&__current_stack3__,method_block3);
    printf("a %d\n",aXL_77);
    xassert("list::item",list_intp_item(li2_75,0,-1)==1);
    list_intp_insert(li2_75,1,5);
    xassert("list::insert",list_intp_item(li2_75,0,-1)==1&&list_intp_item(li2_75,1,-1)==5&&list_intp_item(li2_75,2,-1)==2&&list_intp_item(li2_75,3,-1)==3);
    list_charp_insert(li_73,1,come_increment_ref_count((char*)(right_value41=__builtin_string("GGG"))));
    right_value41 = come_decrement_ref_count(right_value41, 1, 0);
    xassert("list::insert",strcmp(list_charp_item(li_73,0,-1),"ABC")==0&&strcmp(list_charp_item(li_73,1,-1),"GGG")==0&&strcmp(list_charp_item(li_73,2,-1),"DEF")==0&&strcmp(list_charp_item(li_73,3,-1),"GHI")==0);
    list_charp_reset(li_73);
    xassert("list::reset",list_charp_length(li_73)==0);
    list_intp_delete(li2_75,0,1);
    xassert("list::delete",list_intp_item(li2_75,0,-1)==5&&list_intp_item(li2_75,1,-1)==2&&list_intp_item(li2_75,2,-1)==3);
    li3_108=come_increment_ref_count((struct list_char*)(right_value43=list_charp_initialize(come_increment_ref_count((struct list_char*)(right_value42=(struct list_char*)come_calloc(1, sizeof(struct list_char)*1))))));
    call_finalizer(list_charp_finalize,right_value42,0, 1, 0);
    list_charp_push_back(li3_108,come_increment_ref_count((char*)(right_value44=__builtin_string("AAA"))));
    right_value44 = come_decrement_ref_count(right_value44, 1, 0);
    list_charp_push_back(li3_108,come_increment_ref_count((char*)(right_value45=__builtin_string("BBB"))));
    right_value45 = come_decrement_ref_count(right_value45, 1, 0);
    list_charp_push_back(li3_108,come_increment_ref_count((char*)(right_value46=__builtin_string("CCC"))));
    right_value46 = come_decrement_ref_count(right_value46, 1, 0);
    list_charp_replace(li3_108,0,come_increment_ref_count((char*)(right_value47=__builtin_string("ABC"))));
    right_value47 = come_decrement_ref_count(right_value47, 1, 0);
    xassert("list::replace",strcmp(list_charp_item(li3_108,0,((void*)0)),"ABC")==0&&strcmp(list_charp_item(li3_108,1,((void*)0)),"BBB")==0&&strcmp(list_charp_item(li3_108,2,((void*)0)),"CCC")==0);
    li4_111=come_increment_ref_count((struct list_int*)(right_value49=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value48=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value48,0, 1, 0);
    list_intp_push_back(li4_111,1);
    list_intp_push_back(li4_111,3);
    list_intp_push_back(li4_111,5);
    li5_112=come_increment_ref_count((struct list_int*)(right_value51=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value50=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value50,0, 1, 0);
    list_intp_push_back(li5_112,1);
    list_intp_push_back(li5_112,3);
    list_intp_push_back(li5_112,5);
    xassert("list::equals",list_intp_equals(li4_111,li5_112));
    xassert("list::find",list_intp_find(li4_111,5,-1)==2);
    li6_117=come_increment_ref_count((struct list_int*)(right_value53=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value52=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
    call_finalizer(list_intp_finalize,right_value52,0, 1, 0);
    list_intp_push_back(li6_117,3);
    list_intp_push_back(li6_117,5);
    xassert("list::sublist",list_intp_equals((struct list_int*)(right_value56=list_intp_sublist(li5_112,1,-1)),li6_117));
    call_finalizer(list_intp_finalize,right_value56,0, 1, 0);
    come_decrement_ref_count(axyzX_121, 0, 0);
    axyzX_121=come_increment_ref_count((int*)(right_value57=(int*)come_calloc(1, sizeof(int)*1)));
    come_decrement_ref_count(axyzX_121, 0, 0);
    axyzX_121=come_increment_ref_count((int*)(right_value58=(int*)come_calloc(1, sizeof(int)*1)));
    xassert("operator equals",stringp_operator_equals((char*)(right_value59=__builtin_string("AAA")),(char*)(right_value60=__builtin_string("AAA"))));
    right_value59 = come_decrement_ref_count(right_value59, 1, 0);
    right_value60 = come_decrement_ref_count(right_value60, 1, 0);
    xassert("operator test",stringp_operator_equals((char*)(right_value61=charp_operator_add("AAA","BBB")),"AAABBB"));
    right_value61 = come_decrement_ref_count(right_value61, 1, 0);
    strXYXY_122="ABC";
    xassert("operator test",*(strXYXY_122+1)==66);
    int __result__ = 0;
    __final_code__HelloWorld__c__();
    ax_37 = come_decrement_ref_count(ax_37, 0, 0);
    str_41 = come_decrement_ref_count(str_41, 0, 0);
    call_finalizer(sDatap_finalize,data_42,0, 0, 0);
    axyz_43 = come_decrement_ref_count(axyz_43, 0, 0);
    xxx_44 = come_decrement_ref_count(xxx_44, 0, 0);
    yyy_45 = come_decrement_ref_count(yyy_45, 0, 0);
    zzz_46 = come_decrement_ref_count(zzz_46, 0, 0);
    call_finalizer(list_charp_finalize,liX_52,0, 0, 0);
    call_finalizer(list_intp_finalize,liX2_61,0, 0, 0);
    call_finalizer(list_charp_finalize,li_73,0, 0, 0);
    call_finalizer(list_intp_finalize,li2_75,0, 0, 0);
    call_finalizer(list_charp_finalize,li3_108,0, 0, 0);
    call_finalizer(list_intp_finalize,li4_111,0, 0, 0);
    call_finalizer(list_intp_finalize,li5_112,0, 0, 0);
    call_finalizer(list_intp_finalize,li6_117,0, 0, 0);
    axyzX_121 = come_decrement_ref_count(axyzX_121, 0, 0);
    return __result__;
    __final_code__HelloWorld__c__();
}

static void sDatap_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_49)));
        (*(parent->n_49))++;
}

static struct list_char* list_charp_initialize(struct list_char* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list_char* __result__ = self;
        call_finalizer(list_charp_finalize,self,0, 0, 1);
        return __result__;
}

static void list_charp_finalize(struct list_char* self){
struct list_item_char* it_50;
struct list_item_char* prev_it_51;
memset(&it_50, 0, sizeof(struct list_item_char*));
memset(&prev_it_51, 0, sizeof(struct list_item_char*));
            it_50=self->head;
            while(it_50!=((void*)0)) {
                if(1) {
                    it_50->item = come_decrement_ref_count(it_50->item, 0, 0);
                }
                prev_it_51=it_50;
                it_50=it_50->next;
                call_finalizer(list_item_charp_finalize,prev_it_51,0, 0, 0);
            }
}

static void list_item_charp_finalize(struct list_item_char* self){
                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                        self->item = come_decrement_ref_count(self->item, 0, 0);
                    }
}

static void list_charp_push_back(struct list_char* self, char* item){
void* right_value17;
struct list_item_char* litem_53;
void* right_value18;
struct list_item_char* litem_54;
void* right_value19;
struct list_item_char* litem_55;
memset(&litem_53, 0, sizeof(struct list_item_char*));
memset(&litem_54, 0, sizeof(struct list_item_char*));
memset(&litem_55, 0, sizeof(struct list_item_char*));
        if(self->len==0) {
            litem_53=(struct list_item_char*)(right_value17=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_53->prev=((void*)0);
            litem_53->next=((void*)0);
            come_decrement_ref_count(litem_53->item, 0, 0);
            litem_53->item=come_increment_ref_count(item);
            self->tail=litem_53;
            self->head=litem_53;
        }
        else if(self->len==1) {
            litem_54=(struct list_item_char*)(right_value18=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_54->prev=self->head;
            litem_54->next=((void*)0);
            come_decrement_ref_count(litem_54->item, 0, 0);
            litem_54->item=come_increment_ref_count(item);
            self->tail=litem_54;
            self->head->next=litem_54;
        }
        else {
            litem_55=(struct list_item_char*)(right_value19=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_55->prev=self->tail;
            litem_55->next=((void*)0);
            come_decrement_ref_count(litem_55->item, 0, 0);
            litem_55->item=come_increment_ref_count(item);
            self->tail->next=litem_55;
            self->tail=litem_55;
        }
        self->len++;
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list_charp_begin(struct list_char* self){
char* result_56;
memset(&result_56, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_56,0,sizeof(char*));
        char* __result__ = result_56;
        return __result__;
}

static _Bool list_charp_end(struct list_char* self){
        struct list_item_char* __result__ = self->it==((void*)0);
        return __result__;
}

static char* list_charp_next(struct list_char* self){
char* result_58;
memset(&result_58, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_58,0,sizeof(char*));
        char* __result__ = result_58;
        return __result__;
}

static struct list_int* list_intp_initialize(struct list_int* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list_int* __result__ = self;
        call_finalizer(list_intp_finalize,self,0, 0, 1);
        return __result__;
}

static void list_intp_finalize(struct list_int* self){
struct list_item_int* it_59;
struct list_item_int* prev_it_60;
memset(&it_59, 0, sizeof(struct list_item_int*));
memset(&prev_it_60, 0, sizeof(struct list_item_int*));
            it_59=self->head;
            while(it_59!=((void*)0)) {
                if(0) {
                }
                prev_it_60=it_59;
                it_59=it_59->next;
                call_finalizer(list_item_intp_finalize,prev_it_60,0, 0, 0);
            }
}

static void list_item_intp_finalize(struct list_item_int* self){
}

static void list_intp_push_back(struct list_int* self, int item){
void* right_value25;
struct list_item_int* litem_62;
void* right_value26;
struct list_item_int* litem_63;
void* right_value27;
struct list_item_int* litem_64;
memset(&litem_62, 0, sizeof(struct list_item_int*));
memset(&litem_63, 0, sizeof(struct list_item_int*));
memset(&litem_64, 0, sizeof(struct list_item_int*));
        if(self->len==0) {
            litem_62=(struct list_item_int*)(right_value25=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_62->prev=((void*)0);
            litem_62->next=((void*)0);
            litem_62->item=item;
            self->tail=litem_62;
            self->head=litem_62;
        }
        else if(self->len==1) {
            litem_63=(struct list_item_int*)(right_value26=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_63->prev=self->head;
            litem_63->next=((void*)0);
            litem_63->item=item;
            self->tail=litem_63;
            self->head->next=litem_63;
        }
        else {
            litem_64=(struct list_item_int*)(right_value27=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_64->prev=self->tail;
            litem_64->next=((void*)0);
            litem_64->item=item;
            self->tail->next=litem_64;
            self->tail=litem_64;
        }
        self->len++;
}

static int list_intp_begin(struct list_int* self){
int result_65;
memset(&result_65, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_65,0,sizeof(int));
        int __result__ = result_65;
        return __result__;
}

static _Bool list_intp_end(struct list_int* self){
        struct list_item_int* __result__ = self->it==((void*)0);
        return __result__;
}

static int list_intp_next(struct list_int* self){
int result_67;
memset(&result_67, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_67,0,sizeof(int));
        int __result__ = result_67;
        return __result__;
}

static void list_intp_each(struct list_int* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item_int* it_69;
int i_70;
_Bool end_flag_71;
memset(&it_69, 0, sizeof(struct list_item_int*));
memset(&i_70, 0, sizeof(int));
memset(&end_flag_71, 0, sizeof(_Bool));
        it_69=self->head;
        i_70=0;
        while(it_69!=((void*)0)) {
            end_flag_71=(_Bool)0;
            block(parent,it_69->item,i_70,&end_flag_71);
            if(end_flag_71==(_Bool)1) {
                break;
            }
            it_69=it_69->next;
            i_70++;
        }
}

void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_68)));
        (*(parent->aX_68))=2;
}

void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_77)));
        (*(parent->aXL_77))=2;
}

static int list_intp_item(struct list_int* self, int position, int default_value){
struct list_item_int* it_78;
int i_79;
memset(&it_78, 0, sizeof(struct list_item_int*));
memset(&i_79, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_78=self->head;
        i_79=0;
        while(it_78!=((void*)0)) {
            if(position==i_79) {
                int __result__ = it_78->item;
                return __result__;
            }
            it_78=it_78->next;
            i_79++;
        }
        int __result__ = default_value;
        return __result__;
}

static void list_intp_insert(struct list_int* self, int position, int item){
void* right_value35;
struct list_item_int* litem_80;
void* right_value36;
struct list_item_int* litem_81;
struct list_item_int* it_82;
int i_83;
void* right_value37;
struct list_item_int* litem_84;
memset(&litem_80, 0, sizeof(struct list_item_int*));
memset(&litem_81, 0, sizeof(struct list_item_int*));
memset(&it_82, 0, sizeof(struct list_item_int*));
memset(&i_83, 0, sizeof(int));
memset(&litem_84, 0, sizeof(struct list_item_int*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list_intp_push_back(self,item);
            return;
        }
        if(position==0) {
            litem_80=(struct list_item_int*)(right_value35=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_80->prev=((void*)0);
            litem_80->next=self->head;
            litem_80->item=item;
            self->head->prev=litem_80;
            self->head=litem_80;
            self->len++;
        }
        else if(self->len==1) {
            litem_81=(struct list_item_int*)(right_value36=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
            litem_81->prev=self->head;
            litem_81->next=self->tail;
            litem_81->item=item;
            self->tail->prev=litem_81;
            self->head->next=litem_81;
            self->len++;
        }
        else {
            it_82=self->head;
            i_83=0;
            while(it_82!=((void*)0)) {
                if(position==i_83) {
                    litem_84=(struct list_item_int*)(right_value37=(struct list_item_int*)come_calloc(1, sizeof(struct list_item_int)*1));
                    litem_84->prev=it_82->prev;
                    litem_84->next=it_82;
                    litem_84->item=item;
                    it_82->prev->next=litem_84;
                    it_82->prev=litem_84;
                    self->len++;
                }
                it_82=it_82->next;
                i_83++;
            }
        }
}

static void list_charp_insert(struct list_char* self, int position, char* item){
void* right_value38;
struct list_item_char* litem_85;
void* right_value39;
struct list_item_char* litem_86;
struct list_item_char* it_87;
int i_88;
void* right_value40;
struct list_item_char* litem_89;
memset(&litem_85, 0, sizeof(struct list_item_char*));
memset(&litem_86, 0, sizeof(struct list_item_char*));
memset(&it_87, 0, sizeof(struct list_item_char*));
memset(&i_88, 0, sizeof(int));
memset(&litem_89, 0, sizeof(struct list_item_char*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list_charp_push_back(self,come_increment_ref_count(item));
            return;
        }
        if(position==0) {
            litem_85=(struct list_item_char*)(right_value38=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_85->prev=((void*)0);
            litem_85->next=self->head;
            come_decrement_ref_count(litem_85->item, 0, 0);
            litem_85->item=come_increment_ref_count(item);
            self->head->prev=litem_85;
            self->head=litem_85;
            self->len++;
        }
        else if(self->len==1) {
            litem_86=(struct list_item_char*)(right_value39=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
            litem_86->prev=self->head;
            litem_86->next=self->tail;
            come_decrement_ref_count(litem_86->item, 0, 0);
            litem_86->item=come_increment_ref_count(item);
            self->tail->prev=litem_86;
            self->head->next=litem_86;
            self->len++;
        }
        else {
            it_87=self->head;
            i_88=0;
            while(it_87!=((void*)0)) {
                if(position==i_88) {
                    litem_89=(struct list_item_char*)(right_value40=(struct list_item_char*)come_calloc(1, sizeof(struct list_item_char)*1));
                    litem_89->prev=it_87->prev;
                    litem_89->next=it_87;
                    come_decrement_ref_count(litem_89->item, 0, 0);
                    litem_89->item=come_increment_ref_count(item);
                    it_87->prev->next=litem_89;
                    it_87->prev=litem_89;
                    self->len++;
                }
                it_87=it_87->next;
                i_88++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list_charp_item(struct list_char* self, int position, char* default_value){
struct list_item_char* it_90;
int i_91;
memset(&it_90, 0, sizeof(struct list_item_char*));
memset(&i_91, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_90=self->head;
        i_91=0;
        while(it_90!=((void*)0)) {
            if(position==i_91) {
                char* __result__ = it_90->item;
                return __result__;
            }
            it_90=it_90->next;
            i_91++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list_charp_reset(struct list_char* self){
struct list_item_char* it_92;
struct list_item_char* prev_it_93;
memset(&it_92, 0, sizeof(struct list_item_char*));
memset(&prev_it_93, 0, sizeof(struct list_item_char*));
        it_92=self->head;
        while(it_92!=((void*)0)) {
            prev_it_93=it_92;
            it_92=it_92->next;
            call_finalizer(list_item_charp_finalize,prev_it_93,0, 0, 0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
}

static int list_charp_length(struct list_char* self){
        int __result__ = self->len;
        return __result__;
}

static void list_intp_delete(struct list_int* self, int head, int tail){
int tmp_94;
struct list_item_int* it_97;
int i_98;
struct list_item_int* prev_it_99;
struct list_item_int* it_100;
int i_101;
struct list_item_int* prev_it_102;
struct list_item_int* it_103;
struct list_item_int* head_prev_it_104;
struct list_item_int* tail_it_105;
int i_106;
struct list_item_int* prev_it_107;
memset(&tmp_94, 0, sizeof(int));
memset(&it_97, 0, sizeof(struct list_item_int*));
memset(&i_98, 0, sizeof(int));
memset(&prev_it_99, 0, sizeof(struct list_item_int*));
memset(&it_100, 0, sizeof(struct list_item_int*));
memset(&i_101, 0, sizeof(int));
memset(&prev_it_102, 0, sizeof(struct list_item_int*));
memset(&it_103, 0, sizeof(struct list_item_int*));
memset(&head_prev_it_104, 0, sizeof(struct list_item_int*));
memset(&tail_it_105, 0, sizeof(struct list_item_int*));
memset(&i_106, 0, sizeof(int));
memset(&prev_it_107, 0, sizeof(struct list_item_int*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_94=tail;
            tail=head;
            head=tmp_94;
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
            list_intp_reset(self);
        }
        else if(head==0) {
            it_97=self->head;
            i_98=0;
            while(it_97!=((void*)0)) {
                if(i_98<tail) {
                    prev_it_99=it_97;
                    it_97=it_97->next;
                    i_98++;
                    call_finalizer(list_item_intp_finalize,prev_it_99,0, 0, 0);
                    self->len--;
                }
                else if(i_98==tail) {
                    self->head=it_97;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_97=it_97->next;
                    i_98++;
                }
            }
        }
        else if(tail==self->len) {
            it_100=self->head;
            i_101=0;
            while(it_100!=((void*)0)) {
                if(i_101==head) {
                    self->tail=it_100->prev;
                    self->tail->next=((void*)0);
                }
                if(i_101>=head) {
                    prev_it_102=it_100;
                    it_100=it_100->next;
                    i_101++;
                    call_finalizer(list_item_intp_finalize,prev_it_102,0, 0, 0);
                    self->len--;
                }
                else {
                    it_100=it_100->next;
                    i_101++;
                }
            }
        }
        else {
            it_103=self->head;
            head_prev_it_104=((void*)0);
            tail_it_105=((void*)0);
            i_106=0;
            while(it_103!=((void*)0)) {
                if(i_106==head) {
                    head_prev_it_104=it_103->prev;
                }
                if(i_106==tail) {
                    tail_it_105=it_103;
                }
                if(i_106>=head&&i_106<tail) {
                    prev_it_107=it_103;
                    it_103=it_103->next;
                    i_106++;
                    call_finalizer(list_item_intp_finalize,prev_it_107,0, 0, 0);
                    self->len--;
                }
                else {
                    it_103=it_103->next;
                    i_106++;
                }
            }
            if(head_prev_it_104!=((void*)0)) {
                head_prev_it_104->next=tail_it_105;
            }
            if(tail_it_105!=((void*)0)) {
                tail_it_105->prev=head_prev_it_104;
            }
        }
}

static void list_intp_reset(struct list_int* self){
struct list_item_int* it_95;
struct list_item_int* prev_it_96;
memset(&it_95, 0, sizeof(struct list_item_int*));
memset(&prev_it_96, 0, sizeof(struct list_item_int*));
                it_95=self->head;
                while(it_95!=((void*)0)) {
                    prev_it_96=it_95;
                    it_95=it_95->next;
                    call_finalizer(list_item_intp_finalize,prev_it_96,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_charp_replace(struct list_char* self, int position, char* item){
struct list_item_char* it_109;
int i_110;
memset(&it_109, 0, sizeof(struct list_item_char*));
memset(&i_110, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_109=self->head;
        i_110=0;
        while(it_109!=((void*)0)) {
            if(position==i_110) {
                come_decrement_ref_count(it_109->item, 0, 0);
                it_109->item=come_increment_ref_count(item);
                break;
            }
            it_109=it_109->next;
            i_110++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static _Bool list_intp_equals(struct list_int* left, struct list_int* right){
struct list_item_int* it_113;
struct list_item_int* it2_114;
memset(&it_113, 0, sizeof(struct list_item_int*));
memset(&it2_114, 0, sizeof(struct list_item_int*));
        if(left->len!=right->len) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        it_113=left->head;
        it2_114=right->head;
        while(it_113!=((void*)0)) {
            if(!int_equals(it_113->item,it2_114->item)) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_113=it_113->next;
            it2_114=it2_114->next;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static int list_intp_find(struct list_int* self, int item, int default_value){
int it2_115;
struct list_item_int* it_116;
memset(&it2_115, 0, sizeof(int));
memset(&it_116, 0, sizeof(struct list_item_int*));
        it2_115=0;
        it_116=self->head;
        while(it_116!=((void*)0)) {
            if(int_equals(it_116->item,item)) {
                int __result__ = it2_115;
                return __result__;
            }
            it2_115++;
            it_116=it_116->next;
        }
        int __result__ = default_value;
        return __result__;
}

static struct list_int* list_intp_sublist(struct list_int* self, int begin, int tail){
void* right_value54;
void* right_value55;
struct list_int* result_118;
struct list_item_int* it_119;
int i_120;
memset(&result_118, 0, sizeof(struct list_int*));
memset(&it_119, 0, sizeof(struct list_item_int*));
memset(&i_120, 0, sizeof(int));
        result_118=come_increment_ref_count((struct list_int*)(right_value55=list_intp_initialize(come_increment_ref_count((struct list_int*)(right_value54=(struct list_int*)come_calloc(1, sizeof(struct list_int)*1))))));
        call_finalizer(list_intp_finalize,right_value54,0, 1, 0);
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
        it_119=self->head;
        i_120=0;
        while(it_119!=((void*)0)) {
            if(i_120>=begin&&i_120<tail) {
                list_intp_push_back(result_118,it_119->item);
            }
            it_119=it_119->next;
            i_120++;
        }
        struct list_int* __result__ = result_118;
        call_finalizer(list_intp_finalize,result_118,0, 0, 1);
        return __result__;
}

