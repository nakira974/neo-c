typedef void* protocol_obj_t;
struct __builtin_va_list
{
    int v1;
    int v2;
    char* v3;
    char* v4;
};
typedef __builtin_va_list __buitin_va_list;
void* call_cloner(void* fun, void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* ncmemdup(void* block);
;
void* gc_ncmemdup(void* block);
;
typedef unsigned long size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long __int64_t;
typedef unsigned long __uint64_t;
typedef char __int_least8_t;
typedef unsigned char __uint_least8_t;
typedef short __int_least16_t;
typedef unsigned short __uint_least16_t;
typedef int __int_least32_t;
typedef unsigned int __uint_least32_t;
typedef long __int_least64_t;
typedef unsigned long __uint_least64_t;
typedef long __quad_t;
typedef unsigned long __u_quad_t;
typedef long __intmax_t;
typedef unsigned long __uintmax_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
struct come_anon0
{
    int __val[2];
};
typedef struct come_anon0 __fsid_t;
typedef long __clock_t;
typedef unsigned long __rlim_t;
typedef unsigned long __rlim64_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
typedef long __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void* __timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __blkcnt64_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsblkcnt64_t;
typedef unsigned long __fsfilcnt_t;
typedef unsigned long __fsfilcnt64_t;
typedef long __fsword_t;
typedef long __ssize_t;
typedef long __syscall_slong_t;
typedef unsigned long __syscall_ulong_t;
typedef long __loff_t;
typedef char* __caddr_t;
typedef long __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
union come_anon2
{
    unsigned int __wch;
    char __wchb[4];
};
struct come_anon1
{
    int __count;
    union come_anon2 __value;
};
typedef struct come_anon1 __mbstate_t;
struct _G_fpos_t
{
    long __pos;
    __mbstate_t __state;
};
typedef struct _G_fpos_t __fpos_t;
struct _G_fpos64_t
{
    long __pos;
    __mbstate_t __state;
};
typedef struct _G_fpos64_t __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
typedef struct _IO_FILE FILE;
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
    long _old_offset;
    unsigned short _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    unsigned long __pad5;
    int _mode;
    char _unused2[20];
};
typedef __builtin_va_list va_list;
typedef long off_t;
typedef long ssize_t;
typedef __fpos_t fpos_t;
extern FILE* stdin;
extern FILE* stdout;
extern FILE* stderr;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
typedef int wchar_t;
struct come_anon3
{
    int quot;
    int rem;
};
typedef struct come_anon3 div_t;
struct come_anon4
{
    long quot;
    long rem;
};
typedef struct come_anon4 ldiv_t;
struct come_anon5
{
    long long quot;
    long long rem;
};
typedef struct come_anon5 lldiv_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef long quad_t;
typedef unsigned long u_quad_t;
typedef __fsid_t fsid_t;
typedef long loff_t;
typedef unsigned long ino_t;
typedef unsigned long dev_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef unsigned long nlink_t;
typedef unsigned int uid_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int daddr_t;
typedef char* caddr_t;
typedef int key_t;
typedef long clock_t;
typedef int clockid_t;
typedef long time_t;
typedef void* timer_t;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long u_int64_t;
typedef int register_t;
struct come_anon6
{
    unsigned long __val[16];
};
typedef struct come_anon6 __sigset_t;
typedef __sigset_t sigset_t;
struct timeval
{
    long tv_sec;
    long tv_usec;
};
struct timespec
{
    long tv_sec;
    long tv_nsec;
};
typedef long suseconds_t;
typedef long __fd_mask;
struct come_anon7
{
    long __fds_bits[16];
};
typedef struct come_anon7 fd_set;
typedef long fd_mask;
typedef long blksize_t;
typedef long blkcnt_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;
struct come_anon9
{
    unsigned int __low;
    unsigned int __high;
};
union come_anon8
{
    unsigned long long __value64;
    struct come_anon9 __value32;
};
typedef union come_anon8 __atomic_wide_counter;
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
    short __spins;
    short __elision;
    __pthread_list_t __list;
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
    char __rwelision;
    unsigned char __pad1[7];
    unsigned long __pad2;
    unsigned int __flags;
};
struct __pthread_cond_s
{
    union come_anon8 __wseq;
    union come_anon8 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long __thrd_t;
struct come_anon10
{
    int __data;
};
typedef struct come_anon10 __once_flag;
typedef unsigned long pthread_t;
union come_anon11
{
    char __size[4];
    int __align;
};
typedef union come_anon11 pthread_mutexattr_t;
union come_anon12
{
    char __size[4];
    int __align;
};
typedef union come_anon12 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
    char __size[56];
    long __align;
};
typedef union pthread_attr_t pthread_attr_t;
union come_anon13
{
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};
typedef union come_anon13 pthread_mutex_t;
union come_anon14
{
    struct __pthread_cond_s __data;
    char __size[48];
    long long __align;
};
typedef union come_anon14 pthread_cond_t;
union come_anon15
{
    struct __pthread_rwlock_arch_t __data;
    char __size[56];
    long __align;
};
typedef union come_anon15 pthread_rwlock_t;
union come_anon16
{
    char __size[8];
    long __align;
};
typedef union come_anon16 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union come_anon17
{
    char __size[32];
    long __align;
};
typedef union come_anon17 pthread_barrier_t;
union come_anon18
{
    char __size[4];
    int __align;
};
typedef union come_anon18 pthread_barrierattr_t;
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
    unsigned short __x[3];
    unsigned short __old_x[3];
    unsigned short __c;
    unsigned short __init;
    unsigned long long __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
int var1;
int var2[5];
int global_arr[1] = {5};
typedef int myint;
struct come_anon20
{
    int a;
};
struct come_anon22
{
    char a;
    int b;
};
struct come_anon24
{
    char a;
    char b;
    int c;
    char d;
};
struct come_anon26
{
    int a;
};
struct come_anon28
{
    char a;
    int b;
};
struct tag
{
    char a;
    int b;
};
struct come_anon30
{
    int b;
    int c[5];
};
struct come_anon32
{
    int b;
    int c[5];
};
struct come_anon31
{
    struct come_anon32 a[2];
};
struct come_anon34
{
    int b;
    int c[5];
};
struct come_anon36
{
    int b;
    int c[5];
};
struct come_anon35
{
    struct come_anon36 a[2];
};
struct foo_;
typedef struct foo_ foo;
typedef struct foo_ foo;

void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
void* igc_calloc(unsigned long count, unsigned long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void unwrap_exception(char* sname, int sline, char* mem);
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int fclose(FILE* __stream);
FILE* tmpfile();
char* tmpnam(char* );
char* tmpnam_r(char (*__s));
char* tempnam(const char* __dir, const char* __pfx);
int fflush(FILE* __stream);
int fflush_unlocked(FILE* __stream);
FILE* fopen(const char* __filename, const char* __modes);
FILE* freopen(const char* __filename, const char* __modes, FILE* __stream);
FILE* fdopen(int __fd, const char* __modes);
FILE* fmemopen(void* __s, unsigned long __len, const char* __modes);
FILE* open_memstream(char** __bufloc, unsigned long* __sizeloc);
void setbuf(FILE* __stream, char* __buf);
int setvbuf(FILE* __stream, char* __buf, int __modes, unsigned long __n);
void setbuffer(FILE* __stream, char* __buf, unsigned long __size);
void setlinebuf(FILE* __stream);
int fprintf(FILE* __stream, const char* __format, ...);
int printf(const char* __format, ...);
int sprintf(char* __s, const char* __format, ...);
int vfprintf(FILE* __s, const char* __format, __builtin_va_list __arg);
int vprintf(const char* __format, __builtin_va_list __arg);
int vsprintf(char* __s, const char* __format, __builtin_va_list __arg);
int snprintf(char* __s, unsigned long __maxlen, const char* __format, ...);
int vsnprintf(char* __s, unsigned long __maxlen, const char* __format, __builtin_va_list __arg);
int vdprintf(int __fd, const char* __fmt, __builtin_va_list __arg);
int dprintf(int __fd, const char* __fmt, ...);
int fscanf(FILE* __stream, const char* __format, ...);
int scanf(const char* __format, ...);
int sscanf(const char* __s, const char* __format, ...);
int __isoc99_fscanf(FILE* __stream, const char* __format, ...);
int __isoc99_scanf(const char* __format, ...);
int __isoc99_sscanf(const char* __s, const char* __format, ...);
int vfscanf(FILE* __s, const char* __format, __builtin_va_list __arg);
int vscanf(const char* __format, __builtin_va_list __arg);
int vsscanf(const char* __s, const char* __format, __builtin_va_list __arg);
int __isoc99_vfscanf(FILE* __s, const char* __format, __builtin_va_list __arg);
int __isoc99_vscanf(const char* __format, __builtin_va_list __arg);
int __isoc99_vsscanf(const char* __s, const char* __format, __builtin_va_list __arg);
int fgetc(FILE* __stream);
int getc(FILE* __stream);
int getchar();
int getc_unlocked(FILE* __stream);
int getchar_unlocked();
int fgetc_unlocked(FILE* __stream);
int fputc(int __c, FILE* __stream);
int putc(int __c, FILE* __stream);
int putchar(int __c);
int fputc_unlocked(int __c, FILE* __stream);
int putc_unlocked(int __c, FILE* __stream);
int putchar_unlocked(int __c);
int getw(FILE* __stream);
int putw(int __w, FILE* __stream);
char* fgets(char* __s, int __n, FILE* __stream);
long __getdelim(char** __lineptr, unsigned long* __n, int __delimiter, FILE* __stream);
long getdelim(char** __lineptr, unsigned long* __n, int __delimiter, FILE* __stream);
long getline(char** __lineptr, unsigned long* __n, FILE* __stream);
int fputs(const char* __s, FILE* __stream);
int puts(const char* __s);
int ungetc(int __c, FILE* __stream);
unsigned long fread(void* __ptr, unsigned long __size, unsigned long __n, FILE* __stream);
unsigned long fwrite(const void* __ptr, unsigned long __size, unsigned long __n, FILE* __s);
unsigned long fread_unlocked(void* __ptr, unsigned long __size, unsigned long __n, FILE* __stream);
unsigned long fwrite_unlocked(const void* __ptr, unsigned long __size, unsigned long __n, FILE* __stream);
int fseek(FILE* __stream, long __off, int __whence);
long ftell(FILE* __stream);
void rewind(FILE* __stream);
int fseeko(FILE* __stream, long __off, int __whence);
long ftello(FILE* __stream);
int fgetpos(FILE* __stream, fpos_t* __pos);
int fsetpos(FILE* __stream, const fpos_t* __pos);
void clearerr(FILE* __stream);
int feof(FILE* __stream);
int ferror(FILE* __stream);
void clearerr_unlocked(FILE* __stream);
int feof_unlocked(FILE* __stream);
int ferror_unlocked(FILE* __stream);
void perror(const char* __s);
int fileno(FILE* __stream);
int fileno_unlocked(FILE* __stream);
int pclose(FILE* __stream);
FILE* popen(const char* __command, const char* __modes);
char* ctermid(char* __s);
void flockfile(FILE* __stream);
int ftrylockfile(FILE* __stream);
void funlockfile(FILE* __stream);
int __uflow(FILE* );
int __overflow(FILE* , int );
unsigned long __ctype_get_mb_cur_max();
double atof(const char* __nptr);
int atoi(const char* __nptr);
long atol(const char* __nptr);
long long atoll(const char* __nptr);
double strtod(const char* __nptr, char** __endptr);
float strtof(const char* __nptr, char** __endptr);
long double strtold(const char* __nptr, char** __endptr);
long strtol(const char* __nptr, char** __endptr, int __base);
unsigned long strtoul(const char* __nptr, char** __endptr, int __base);
long long strtoq(const char* __nptr, char** __endptr, int __base);
unsigned long long strtouq(const char* __nptr, char** __endptr, int __base);
long long strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long strtoull(const char* __nptr, char** __endptr, int __base);
char* l64a(long __n);
long a64l(const char* __s);
int select(int __nfds, fd_set* __readfds, fd_set* __writefds, fd_set* __exceptfds, struct timeval* __timeout);
int pselect(int __nfds, fd_set* __readfds, fd_set* __writefds, fd_set* __exceptfds, const struct timespec* __timeout, const __sigset_t* __sigmask);
long random();
void srandom(unsigned int __seed);
char* initstate(unsigned int __seed, char* __statebuf, unsigned long __statelen);
char* setstate(char* __statebuf);
int random_r(struct random_data* __buf, int* __result);
int srandom_r(unsigned int __seed, struct random_data* __buf);
int initstate_r(unsigned int __seed, char* __statebuf, unsigned long __statelen, struct random_data* __buf);
int setstate_r(char* __statebuf, struct random_data* __buf);
int rand();
void srand(unsigned int __seed);
int rand_r(unsigned int* __seed);
double drand48();
double erand48(unsigned short (*__xsubi));
long lrand48();
long nrand48(unsigned short (*__xsubi));
long mrand48();
long jrand48(unsigned short (*__xsubi));
void srand48(long __seedval);
unsigned short* seed48(unsigned short (*__seed16v));
void lcong48(unsigned short (*__param));
int drand48_r(struct drand48_data* __buffer, double* __result);
int erand48_r(unsigned short (*__xsubi), struct drand48_data* __buffer, double* __result);
int lrand48_r(struct drand48_data* __buffer, long* __result);
int nrand48_r(unsigned short (*__xsubi), struct drand48_data* __buffer, long* __result);
int mrand48_r(struct drand48_data* __buffer, long* __result);
int jrand48_r(unsigned short (*__xsubi), struct drand48_data* __buffer, long* __result);
int srand48_r(long __seedval, struct drand48_data* __buffer);
int seed48_r(unsigned short (*__seed16v), struct drand48_data* __buffer);
int lcong48_r(unsigned short (*__param), struct drand48_data* __buffer);
void* malloc(unsigned long __size);
void* calloc(unsigned long __nmemb, unsigned long __size);
void* realloc(void* __ptr, unsigned long __size);
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long __nmemb, unsigned long __size);
void* alloca(unsigned long __size);
void* valloc(unsigned long __size);
int posix_memalign(void** __memptr, unsigned long __alignment, unsigned long __size);
void* aligned_alloc(unsigned long __alignment, unsigned long __size);
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
void* bsearch(const void* __key, const void* __base, unsigned long __nmemb, unsigned long __size, int (*__compar)(const void*,const void*));
void qsort(void* __base, unsigned long __nmemb, unsigned long __size, int (*__compar)(const void*,const void*));
int abs(int __x);
long labs(long __x);
long long llabs(long long __x);
div_t div(int __numer, int __denom);
ldiv_t ldiv(long __numer, long __denom);
lldiv_t lldiv(long long __numer, long long __denom);
char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long double __value, int __ndigit, int* __decpt, int* __sign);
char* qfcvt(long double __value, int __ndigit, int* __decpt, int* __sign);
char* qgcvt(long double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long __len);
int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long __len);
int qecvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long __len);
int qfcvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long __len);
int mblen(const char* __s, unsigned long __n);
int mbtowc(int* __pwc, const char* __s, unsigned long __n);
int wctomb(char* __s, int __wchar);
unsigned long mbstowcs(int* __pwcs, const char* __s, unsigned long __n);
unsigned long wcstombs(char* __s, const int* __pwcs, unsigned long __n);
int rpmatch(const char* __response);
int getsubopt(char** __optionp, char** __tokens, char** __valuep);
int getloadavg(double (*__loadavg), int __nelem);
int one();
int two();
int plus(int x, int y);
int mul(int x, int y);
int add(int a, int b, int c, int d, int e, int f);
int add2(int (*a)[2]);
int add3(int (*a)[2]);
int add4(int (*a)[2]);
void nop();
int main(int argc, char** argv);

int one(){
        int __result_value = 1;
    return __result_value;
}

int two(){
        int __result_value = 2;
    return __result_value;
}

int plus(int x, int y){
        int __result_value = x+y;
    return __result_value;
}

int mul(int x, int y){
        int __result_value = x*y;
    return __result_value;
}

int add(int a, int b, int c, int d, int e, int f){
        int __result_value = a+b+c+d+e+f;
    return __result_value;
}

int add2(int (*a)[2]){
        int __result_value = a[0][0]+a[1][0];
    return __result_value;
}

int add3(int (*a)[2]){
        int __result_value = a[0][0]+a[1][0];
    return __result_value;
}

int add4(int (*a)[2]){
        int __result_value = a[0][0]+a[1][0];
    return __result_value;
}

void nop(){
}

int main(int argc, char** argv){
char __normal_block_result1;
char __normal_block_result2;
char __normal_block_result3;
char __normal_block_result4;
int __normal_block_result5;
int __normal_block_result6;
int __normal_block_result7;
long __normal_block_result8;
long __normal_block_result9;
long __normal_block_result10;
int __normal_block_result11;
int __normal_block_result12;
int __normal_block_result13;
long __normal_block_result14;
int __normal_block_result15;
int __normal_block_result16;
long __normal_block_result17;
int __normal_block_result18;
int __normal_block_result19;
int __normal_block_result20;
int __normal_block_result21;
int __normal_block_result22;
int __normal_block_result23;
int __normal_block_result24;
int __normal_block_result25;
int __normal_block_result26;
int __normal_block_result27;
int __normal_block_result28;
int __normal_block_result29;
char __normal_block_result30;
char __normal_block_result31;
_Bool __normal_block_result32;
_Bool __normal_block_result33;
_Bool __normal_block_result34;
_Bool __normal_block_result35;
_Bool __normal_block_result36;
_Bool __normal_block_result37;
_Bool __normal_block_result38;
_Bool __normal_block_result39;
int __normal_block_result40;
int __normal_block_result41;
int __normal_block_result42;
    do {
        int e1=(64);
        int e2=("@00"[0]);
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","\"\\10000\"[0]",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",43,"\"\\10000\"[0]",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=('0');
        int e2=("@00"[1]);
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","\"\\10000\"[1]",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",44,"\"\\10000\"[1]",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=('0');
        int e2=("@00"[2]);
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","\"\\10000\"[2]",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",45,"\"\\10000\"[2]",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(0);
        int e2=("@00"[3]);
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","\"\\10000\"[3]",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",46,"\"\\10000\"[3]",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=('x');
        int e2=("ÿxyz"[1]);
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","\"\\xffxyz\"[1]",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",48,"\"\\xffxyz\"[1]",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=('a');
        {
            char* p="abc";
        __normal_block_result1 = p[0];
        }
        int e2=(((__normal_block_result1)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ char *p = \"abc\"; p[0]; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",50,"({ char *p = \"abc\"; p[0]; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=('b');
        {
            char* p="abc";
        __normal_block_result2 = p[1];
        }
        int e2=(((__normal_block_result2)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ char *p = \"abc\"; p[1]; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",51,"({ char *p = \"abc\"; p[1]; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=('c');
        {
            char* p="abc";
        __normal_block_result3 = p[2];
        }
        int e2=(((__normal_block_result3)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ char *p = \"abc\"; p[2]; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",52,"({ char *p = \"abc\"; p[2]; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(0);
        {
            char* p="abc";
        __normal_block_result4 = p[3];
        }
        int e2=(((__normal_block_result4)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ char *p = \"abc\"; p[3]; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",53,"({ char *p = \"abc\"; p[3]; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(1);
        {
            int x=1;
            {
                int x__4=2;
            }
        __normal_block_result5 = x;
        }
        int e2=(((__normal_block_result5)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int x = 1; { int x = 2; } x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",55,"({ int x = 1; { int x = 2; } x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(0);
        int e2=(var1);
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","var1",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",57,"var1",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(5);
        {
            var1=5;
        __normal_block_result6 = var1;
        }
        int e2=(((__normal_block_result6)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ var1 = 5; var1; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",58,"({ var1 = 5; var1; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(20);
        int e2=(20);
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","sizeof(var2)",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",59,"sizeof(var2)",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(15);
        {
            var2[0]=5;
            var2[4]=10;
        __normal_block_result7 = var2[0]+var2[4];
        }
        int e2=(((__normal_block_result7)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ var2[0] = 5; var2[4] = 10; var2[0] + var2[4]; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",60,"({ var2[0] = 5; var2[4] = 10; var2[0] + var2[4]; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(5);
        int e2=(global_arr[0]);
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","global_arr[0]",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",61,"global_arr[0]",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(4);
        {
            struct come_anon20 x;
            memset(&x, 0, sizeof(struct come_anon20));
        __normal_block_result8 = 4;
        }
        int e2=(((__normal_block_result8)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ struct { int a; } x; sizeof(x); })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",63,"({ struct { int a; } x; sizeof(x); })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(8);
        {
            struct come_anon22 x;
            memset(&x, 0, sizeof(struct come_anon22));
        __normal_block_result9 = 8;
        }
        int e2=(((__normal_block_result9)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ struct { char a; int b; } x; sizeof(x); })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",64,"({ struct { char a; int b; } x; sizeof(x); })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(12);
        {
            struct come_anon24 x;
            memset(&x, 0, sizeof(struct come_anon24));
        __normal_block_result10 = 12;
        }
        int e2=(((__normal_block_result10)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ struct { char a; char b; int c; char d; } x; sizeof(x); })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",65,"({ struct { char a; char b; int c; char d; } x; sizeof(x); })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(3);
        {
            struct come_anon26 x;
            memset(&x, 0, sizeof(struct come_anon26));
            int __tmp_store_field1 = 3;
            x.a=__tmp_store_field1;
        __normal_block_result11 = x.a;
        }
        int e2=(((__normal_block_result11)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ struct { int a; } x; x.a=3; x.a; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",66,"({ struct { int a; } x; x.a=3; x.a; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(8);
        {
            struct come_anon28 x;
            memset(&x, 0, sizeof(struct come_anon28));
            char __tmp_store_field2 = 3;
            x.a=__tmp_store_field2;
            int __tmp_store_field3 = 5;
            x.b=__tmp_store_field3;
        __normal_block_result12 = x.a+x.b;
        }
        int e2=(((__normal_block_result12)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ struct { char a; int b; } x; x.a=3; x.b=5; x.a+x.b; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",67,"({ struct { char a; int b; } x; x.a=3; x.b=5; x.a+x.b; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(8);
        {
            struct tag x;
            memset(&x, 0, sizeof(struct tag));
            struct tag* p=(&x);
            char __tmp_store_field4 = 3;
            x.a=__tmp_store_field4;
            int __tmp_store_field5 = 5;
            x.b=__tmp_store_field5;
        __normal_block_result13 = p->a+p->b;
        }
        int e2=(((__normal_block_result13)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ struct tag { char a; int b; } x; struct tag *p = &x; x.a=3; x.b=5; p->a+p->b; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",69,"({ struct tag { char a; int b; } x; struct tag *p = &x; x.a=3; x.b=5; p->a+p->b; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(48);
        {
            struct come_anon31 x;
            memset(&x, 0, sizeof(struct come_anon31));
        __normal_block_result14 = 48;
        }
        int e2=(((__normal_block_result14)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ struct { struct { int b; int c[5]; } a[2]; } x; sizeof(x); })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",70,"({ struct { struct { int b; int c[5]; } a[2]; } x; sizeof(x); })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(8);
        {
            struct come_anon35 x;
            memset(&x, 0, sizeof(struct come_anon35));
            int __tmp_store_field6 = 3;
            x.a[0].b=__tmp_store_field6;
            x.a[0].c[1]=5;
        __normal_block_result15 = x.a[0].b+x.a[0].c[1];
        }
        int e2=(((__normal_block_result15)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ struct { struct { int b; int c[5]; } a[2]; } x; x.a[0].b = 3; x.a[0].c[1] = 5; x.a[0].b + x.a[0].c[1]; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",72,"({ struct { struct { int b; int c[5]; } a[2]; } x; x.a[0].b = 3; x.a[0].c[1] = 5; x.a[0].b + x.a[0].c[1]; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(3);
        {
            int x=3;
        __normal_block_result16 = x;
        }
        int e2=(((__normal_block_result16)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ typedef int foo; foo x = 3; x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",84,"({ typedef int foo; foo x = 3; x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(4);
        {
            int foo=3;
        __normal_block_result17 = sizeof(int);
        }
        int e2=(((__normal_block_result17)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ myint foo = 3; sizeof(foo); })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",85,"({ myint foo = 3; sizeof(foo); })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(1);
        {
        __normal_block_result18 = 1;
        }
        int e2=(((__normal_block_result18)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ typedef struct foo_ foo; 1; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",87,"({ typedef struct foo_ foo; 1; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(15);
        {
            int i=5;
            i=i*3;
        __normal_block_result19 = i;
        }
        int e2=(((__normal_block_result19)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int i=5; i*=3; i; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",89,"({ int i=5; i*=3; i; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(1);
        {
            int i=5;
            i=i/3;
        __normal_block_result20 = i;
        }
        int e2=(((__normal_block_result20)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int i=5; i/=3; i; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",90,"({ int i=5; i/=3; i; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(2);
        {
            int i=5;
            i=i%3;
        __normal_block_result21 = i;
        }
        int e2=(((__normal_block_result21)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int i=5; i%=3; i; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",91,"({ int i=5; i%=3; i; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(8);
        {
            int i=5;
            i=i+3;
        __normal_block_result22 = i;
        }
        int e2=(((__normal_block_result22)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int i=5; i+=3; i; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",92,"({ int i=5; i+=3; i; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(2);
        {
            int i=5;
            i=i-3;
        __normal_block_result23 = i;
        }
        int e2=(((__normal_block_result23)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int i=5; i-=3; i; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",93,"({ int i=5; i-=3; i; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(40);
        {
            int i=5;
            i=i<<3;
        __normal_block_result24 = i;
        }
        int e2=(((__normal_block_result24)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int i=5; i<<=3; i; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",94,"({ int i=5; i<<=3; i; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(0);
        {
            int i=5;
            i=i>>3;
        __normal_block_result25 = i;
        }
        int e2=(((__normal_block_result25)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int i=5; i>>=3; i; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",95,"({ int i=5; i>>=3; i; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(1);
        {
            int i=5;
            i=i&3;
        __normal_block_result26 = i;
        }
        int e2=(((__normal_block_result26)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int i=5; i&=3; i; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",96,"({ int i=5; i&=3; i; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(6);
        {
            int i=5;
            i=i^3;
        __normal_block_result27 = i;
        }
        int e2=(((__normal_block_result27)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int i=5; i^=3; i; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",97,"({ int i=5; i^=3; i; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(7);
        {
            int i=5;
            i=i|3;
        __normal_block_result28 = i;
        }
        int e2=(((__normal_block_result28)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int i=5; i|=3; i; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",98,"({ int i=5; i|=3; i; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(5);
        {
            int x;
            memset(&x, 0, sizeof(int));
            int y=5;
        __normal_block_result29 = y;
        }
        int e2=(((__normal_block_result29)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ int x; typeof(x) y = 5; y; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",100,"({ int x; typeof(x) y = 5; y; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(1);
        {
            char x;
            memset(&x, 0, sizeof(char));
            char y=257;
        __normal_block_result30 = y;
        }
        int e2=(((__normal_block_result30)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ char x; typeof(x) y = 257; y; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",101,"({ char x; typeof(x) y = 257; y; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(2);
        {
            char x;
            memset(&x, 0, sizeof(char));
            char y[2];
            memset(&y, 0, sizeof(char));
            y[0]=257;
            y[1]=1;
        __normal_block_result31 = y[0]+y[1];
        }
        int e2=(((__normal_block_result31)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ char x; typeof(x) y[2]; y[0]=257; y[1]=1; y[0]+y[1]; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",102,"({ char x; typeof(x) y[2]; y[0]=257; y[1]=1; y[0]+y[1]; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(0);
        {
            _Bool x=0;
        __normal_block_result32 = x;
        }
        int e2=(((__normal_block_result32)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x = 0; x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",104,"({ _Bool x = 0; x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(1);
        {
            _Bool x=1;
        __normal_block_result33 = x;
        }
        int e2=(((__normal_block_result33)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x = 1; x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",105,"({ _Bool x = 1; x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(0);
        {
            _Bool x;
            memset(&x, 0, sizeof(_Bool));
            x=0;
        __normal_block_result34 = x;
        }
        int e2=(((__normal_block_result34)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x; x = 0; x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",106,"({ _Bool x; x = 0; x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(1);
        {
            _Bool x;
            memset(&x, 0, sizeof(_Bool));
            x=2;
        __normal_block_result35 = x;
        }
        int e2=(((__normal_block_result35)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x; x = 2; x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",107,"({ _Bool x; x = 2; x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(0);
        {
            _Bool x;
            memset(&x, 0, sizeof(_Bool));
            int y=0;
            x=y;
        __normal_block_result36 = x;
        }
        int e2=(((__normal_block_result36)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x; int y = 0; x = y; x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",108,"({ _Bool x; int y = 0; x = y; x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(1);
        {
            _Bool x;
            memset(&x, 0, sizeof(_Bool));
            int y=-1;
            x=y;
        __normal_block_result37 = x;
        }
        int e2=(((__normal_block_result37)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x; int y = -1; x = y; x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",109,"({ _Bool x; int y = -1; x = y; x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(0);
        {
            _Bool x;
            memset(&x, 0, sizeof(_Bool));
            _Bool y=0;
            x=y;
        __normal_block_result38 = x;
        }
        int e2=(((__normal_block_result38)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x; _Bool y = 0; x = y; x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",110,"({ _Bool x; _Bool y = 0; x = y; x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(1);
        {
            _Bool x;
            memset(&x, 0, sizeof(_Bool));
            _Bool y=1;
            x=y;
        __normal_block_result39 = x;
        }
        int e2=(((__normal_block_result39)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x; _Bool y = 1; x = y; x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",111,"({ _Bool x; _Bool y = 1; x = y; x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(1);
        {
            _Bool x=0;
        __normal_block_result40 = !x;
        }
        int e2=(((__normal_block_result40)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x = 0; !x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",112,"({ _Bool x = 0; !x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(0);
        {
            _Bool x=1;
        __normal_block_result41 = !x;
        }
        int e2=(((__normal_block_result41)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x = 1; !x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",113,"({ _Bool x = 1; !x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(-1);
        {
            _Bool x=0;
        __normal_block_result42 = ~x;
        }
        int e2=(((__normal_block_result42)));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","({ _Bool x = 0; ~x; })",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",114,"({ _Bool x = 0; ~x; })",e1,e2));
            (exit(1));
        }
    } while(0);
    do {
        int e1=(128);
        int e2=(((((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1))))+(((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))))+((((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1))))+(((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1))))));
        if(e1==e2) {
            (fprintf(stderr,"%s => %d\n","((((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1))))+(((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))))+((((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1))))+(((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))))",e2));
        }
        else {
            (fprintf(stderr,"line %d: %s: %d expected, but got %d\n",117,"((((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1))))+(((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))))+((((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1))))+(((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))+((((1+1)+(1+1))+(1+1)+(1+1))+(((1+1)+(1+1))+(1+1)+(1+1)))))",e1,e2));
            (exit(1));
        }
    } while(0);
    (printf("OK\n"));
        int __result_value = 0;
    return __result_value;
}

