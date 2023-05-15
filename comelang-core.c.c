typedef void* protocol_obj_t;
void* call_cloner(void* fun, void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* ncmemdup(void* block);
void* gc_ncmemdup(void* block);
typedef long size_t;
typedef int wchar_t;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct come_anon0
{
    int quot;
    int rem;
};
typedef struct come_anon0 div_t;
struct come_anon1
{
    long quot;
    long rem;
};
typedef struct come_anon1 ldiv_t;
struct come_anon2
{
    long quot;
    long rem;
};
typedef struct come_anon2 lldiv_t;
typedef char __u_char;
typedef short __u_short;
typedef int __u_int;
typedef long __u_long;
typedef char __int8_t;
typedef char __uint8_t;
typedef short __int16_t;
typedef short __uint16_t;
typedef int __int32_t;
typedef int __uint32_t;
typedef long __int64_t;
typedef long __uint64_t;
typedef char __int_least8_t;
typedef char __uint_least8_t;
typedef short __int_least16_t;
typedef short __uint_least16_t;
typedef int __int_least32_t;
typedef int __uint_least32_t;
typedef long __int_least64_t;
typedef long __uint_least64_t;
typedef long __quad_t;
typedef long __u_quad_t;
typedef long __intmax_t;
typedef long __uintmax_t;
typedef long __dev_t;
typedef int __uid_t;
typedef int __gid_t;
typedef long __ino_t;
typedef long __ino64_t;
typedef int __mode_t;
typedef long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
struct come_anon3
{
    int __val;
};
typedef struct come_anon3 __fsid_t;
typedef long __clock_t;
typedef long __rlim_t;
typedef long __rlim64_t;
typedef int __id_t;
typedef long __time_t;
typedef int __useconds_t;
typedef long __suseconds_t;
typedef long __suseconds64_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void* __timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __blkcnt64_t;
typedef long __fsblkcnt_t;
typedef long __fsblkcnt64_t;
typedef long __fsfilcnt_t;
typedef long __fsfilcnt64_t;
typedef long __fsword_t;
typedef long __ssize_t;
typedef long __syscall_slong_t;
typedef long __syscall_ulong_t;
typedef long __loff_t;
typedef char* __caddr_t;
typedef long __intptr_t;
typedef int __socklen_t;
typedef int __sig_atomic_t;
typedef char u_char;
typedef short u_short;
typedef int u_int;
typedef long u_long;
typedef long quad_t;
typedef long u_quad_t;
typedef struct come_anon3 fsid_t;
typedef long loff_t;
typedef long ino_t;
typedef long dev_t;
typedef int gid_t;
typedef int mode_t;
typedef long nlink_t;
typedef int uid_t;
typedef long off_t;
typedef int pid_t;
typedef int id_t;
typedef long ssize_t;
typedef int daddr_t;
typedef char* caddr_t;
typedef int key_t;
typedef long clock_t;
typedef int clockid_t;
typedef long time_t;
typedef void* timer_t;
typedef long ulong;
typedef short ushort;
typedef int uint;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef char u_int8_t;
typedef short u_int16_t;
typedef int u_int32_t;
typedef long u_int64_t;
typedef int register_t;
struct come_anon4
{
    long __val;
};
typedef struct come_anon4 __sigset_t;
typedef struct come_anon4 sigset_t;
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
struct come_anon5
{
    long __fds_bits;
};
typedef struct come_anon5 fd_set;
typedef long fd_mask;
typedef long blksize_t;
typedef long blkcnt_t;
typedef long fsblkcnt_t;
typedef long fsfilcnt_t;
struct come_anon7
{
    int __low;
    int __high;
};
union come_anon6
{
    long __value64;
    struct come_anon7 __value32;
};
typedef union come_anon6 __atomic_wide_counter;
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
    int __count;
    int __owner;
    int __nusers;
    int __kind;
    short __spins;
    short __elision;
    struct __pthread_internal_list __list;
};
struct __pthread_rwlock_arch_t
{
    int __readers;
    int __writers;
    int __wrphase_futex;
    int __writers_futex;
    int __pad3;
    int __pad4;
    int __cur_writer;
    int __shared;
    char __rwelision;
    char __pad1;
    long __pad2;
    int __flags;
};
struct __pthread_cond_s
{
    union come_anon6 __wseq;
    union come_anon6 __g1_start;
    int __g_refs;
    int __g_size;
    int __g1_orig_size;
    int __wrefs;
    int __g_signals;
};
typedef int __tss_t;
typedef long __thrd_t;
struct come_anon8
{
    int __data;
};
typedef struct come_anon8 __once_flag;
typedef long pthread_t;
union come_anon9
{
    char __size;
    int __align;
};
typedef union come_anon9 pthread_mutexattr_t;
union come_anon10
{
    char __size;
    int __align;
};
typedef union come_anon10 pthread_condattr_t;
typedef int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
    char __size;
    long __align;
};
typedef union pthread_attr_t pthread_attr_t;
union come_anon11
{
    struct __pthread_mutex_s __data;
    char __size;
    long __align;
};
typedef union come_anon11 pthread_mutex_t;
union come_anon12
{
    struct __pthread_cond_s __data;
    char __size;
    long __align;
};
typedef union come_anon12 pthread_cond_t;
union come_anon13
{
    struct __pthread_rwlock_arch_t __data;
    char __size;
    long __align;
};
typedef union come_anon13 pthread_rwlock_t;
union come_anon14
{
    char __size;
    long __align;
};
typedef union come_anon14 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union come_anon15
{
    char __size;
    long __align;
};
typedef union come_anon15 pthread_barrier_t;
union come_anon16
{
    char __size;
    int __align;
};
typedef union come_anon16 pthread_barrierattr_t;
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
    short __x;
    short __old_x;
    short __c;
    short __init;
    long __a;
};
typedef int (*__compar_fn_t)(void*,void*);
typedef struct __builtin_va_list __gnuc_va_list;
union come_anon18
{
    int __wch;
    char __wchb;
};
struct come_anon17
{
    int __count;
    union come_anon18 __value;
};
typedef struct come_anon17 __mbstate_t;
struct _G_fpos_t
{
    long __pos;
    struct come_anon17 __state;
};
typedef struct _G_fpos_t __fpos_t;
struct _G_fpos64_t
{
    long __pos;
    struct come_anon17 __state;
};
typedef struct _G_fpos64_t __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
typedef struct _IO_FILE FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
typedef struct __builtin_va_list va_list;
typedef struct _G_fpos_t fpos_t;
typedef long ptrdiff_t;
struct come_anon19
{
    long __max_align_ll;
    long double __max_align_ld;
};
typedef struct come_anon19 max_align_t;
struct mallinfo
{
    int arena;
    int ordblks;
    int smblks;
    int hblks;
    int hblkhd;
    int usmblks;
    int fsmblks;
    int uordblks;
    int fordblks;
    int keepcost;
};
struct mallinfo2
{
    long arena;
    long ordblks;
    long smblks;
    long hblks;
    long hblkhd;
    long usmblks;
    long fsmblks;
    long uordblks;
    long fordblks;
    long keepcost;
};

void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
void* igc_calloc(long count, long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void unwrap_exception(char* sname, int sline, char* mem);
long __ctype_get_mb_cur_max();
double atof(char* __nptr);
int atoi(char* __nptr);
long atol(char* __nptr);
long atoll(char* __nptr);
double strtod(char* __nptr, char** __endptr);
float strtof(char* __nptr, char** __endptr);
long double strtold(char* __nptr, char** __endptr);
long strtol(char* __nptr, char** __endptr, int __base);
long strtoul(char* __nptr, char** __endptr, int __base);
long strtoq(char* __nptr, char** __endptr, int __base);
long strtouq(char* __nptr, char** __endptr, int __base);
long strtoll(char* __nptr, char** __endptr, int __base);
long strtoull(char* __nptr, char** __endptr, int __base);
char* l64a(long __n);
long a64l(char* __s);
int select(int __nfds, struct come_anon5* __readfds, struct come_anon5* __writefds, struct come_anon5* __exceptfds, struct timeval* __timeout);
int pselect(int __nfds, struct come_anon5* __readfds, struct come_anon5* __writefds, struct come_anon5* __exceptfds, struct timespec* __timeout, struct come_anon4* __sigmask);
long random();
void srandom(int __seed);
char* initstate(int __seed, char* __statebuf, long __statelen);
char* setstate(char* __statebuf);
int random_r(struct random_data* __buf, int* __result);
int srandom_r(int __seed, struct random_data* __buf);
int initstate_r(int __seed, char* __statebuf, long __statelen, struct random_data* __buf);
int setstate_r(char* __statebuf, struct random_data* __buf);
int rand();
void srand(int __seed);
int rand_r(int* __seed);
double drand48();
double erand48(short __xsubi);
long lrand48();
long nrand48(short __xsubi);
long mrand48();
long jrand48(short __xsubi);
void srand48(long __seedval);
short* seed48(short __seed16v);
void lcong48(short __param);
int drand48_r(struct drand48_data* __buffer, double* __result);
int erand48_r(short __xsubi, struct drand48_data* __buffer, double* __result);
int lrand48_r(struct drand48_data* __buffer, long* __result);
int nrand48_r(short __xsubi, struct drand48_data* __buffer, long* __result);
int mrand48_r(struct drand48_data* __buffer, long* __result);
int jrand48_r(short __xsubi, struct drand48_data* __buffer, long* __result);
int srand48_r(long __seedval, struct drand48_data* __buffer);
int seed48_r(short __seed16v, struct drand48_data* __buffer);
int lcong48_r(short __param, struct drand48_data* __buffer);
void* malloc(long __size);
void* calloc(long __nmemb, long __size);
void* realloc(void* __ptr, long __size);
void free(void* __ptr);
void* reallocarray(void* __ptr, long __nmemb, long __size);
void* alloca(long __size);
void* valloc(long __size);
int posix_memalign(void** __memptr, long __alignment, long __size);
void* aligned_alloc(long __alignment, long __size);
void abort();
int atexit(void (*__func)());
int at_quick_exit(void (*__func)());
int on_exit(void (*__func)(int,void*), void* __arg);
void exit(int __status);
void quick_exit(int __status);
void _Exit(int __status);
char* getenv(char* __name);
int putenv(char* __string);
int setenv(char* __name, char* __value, int __replace);
int unsetenv(char* __name);
int clearenv();
char* mktemp(char* __template);
int mkstemp(char* __template);
int mkstemps(char* __template, int __suffixlen);
char* mkdtemp(char* __template);
int system(char* __command);
char* realpath(char* __name, char* __resolved);
void* bsearch(void* __key, void* __base, long __nmemb, long __size, int (*__compar)(void*,void*));
void qsort(void* __base, long __nmemb, long __size, int (*__compar)(void*,void*));
int abs(int __x);
long labs(long __x);
long llabs(long __x);
struct come_anon0 div(int __numer, int __denom);
struct come_anon1 ldiv(long __numer, long __denom);
struct come_anon2 lldiv(long __numer, long __denom);
char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long double __value, int __ndigit, int* __decpt, int* __sign);
char* qfcvt(long double __value, int __ndigit, int* __decpt, int* __sign);
char* qgcvt(long double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long __len);
int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long __len);
int qecvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long __len);
int qfcvt_r(long double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long __len);
int mblen(char* __s, long __n);
int mbtowc(int* __pwc, char* __s, long __n);
int wctomb(char* __s, int __wchar);
long mbstowcs(int* __pwcs, char* __s, long __n);
long wcstombs(char* __s, int* __pwcs, long __n);
int rpmatch(char* __response);
int getsubopt(char** __optionp, char** __tokens, char** __valuep);
int getloadavg(double __loadavg, int __nelem);
int remove(char* __filename);
int rename(char* __old, char* __new);
int renameat(int __oldfd, char* __old, int __newfd, char* __new);
int fclose(struct _IO_FILE* __stream);
struct _IO_FILE* tmpfile();
char* tmpnam(char* );
char* tmpnam_r(char __s);
char* tempnam(char* __dir, char* __pfx);
int fflush(struct _IO_FILE* __stream);
int fflush_unlocked(struct _IO_FILE* __stream);
struct _IO_FILE* fopen(char* __filename, char* __modes);
struct _IO_FILE* freopen(char* __filename, char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fdopen(int __fd, char* __modes);
struct _IO_FILE* fmemopen(void* __s, long __len, char* __modes);
struct _IO_FILE* open_memstream(char** __bufloc, long* __sizeloc);
void setbuf(struct _IO_FILE* __stream, char* __buf);
int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, long __n);
void setbuffer(struct _IO_FILE* __stream, char* __buf, long __size);
void setlinebuf(struct _IO_FILE* __stream);
int fprintf(struct _IO_FILE* __stream, char* __format, ...);
int printf(char* __format, ...);
int sprintf(char* __s, char* __format, ...);
int vfprintf(struct _IO_FILE* __s, char* __format, struct __builtin_va_list __arg);
int vprintf(char* __format, struct __builtin_va_list __arg);
int vsprintf(char* __s, char* __format, struct __builtin_va_list __arg);
int snprintf(char* __s, long __maxlen, char* __format, ...);
int vsnprintf(char* __s, long __maxlen, char* __format, struct __builtin_va_list __arg);
int vdprintf(int __fd, char* __fmt, struct __builtin_va_list __arg);
int dprintf(int __fd, char* __fmt, ...);
int fscanf(struct _IO_FILE* __stream, char* __format, ...);
int scanf(char* __format, ...);
int sscanf(char* __s, char* __format, ...);
int __isoc99_fscanf(struct _IO_FILE* __stream, char* __format, ...);
int __isoc99_scanf(char* __format, ...);
int __isoc99_sscanf(char* __s, char* __format, ...);
int vfscanf(struct _IO_FILE* __s, char* __format, struct __builtin_va_list __arg);
int vscanf(char* __format, struct __builtin_va_list __arg);
int vsscanf(char* __s, char* __format, struct __builtin_va_list __arg);
int __isoc99_vfscanf(struct _IO_FILE* __s, char* __format, struct __builtin_va_list __arg);
int __isoc99_vscanf(char* __format, struct __builtin_va_list __arg);
int __isoc99_vsscanf(char* __s, char* __format, struct __builtin_va_list __arg);
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
long __getdelim(char** __lineptr, long* __n, int __delimiter, struct _IO_FILE* __stream);
long getdelim(char** __lineptr, long* __n, int __delimiter, struct _IO_FILE* __stream);
long getline(char** __lineptr, long* __n, struct _IO_FILE* __stream);
int fputs(char* __s, struct _IO_FILE* __stream);
int puts(char* __s);
int ungetc(int __c, struct _IO_FILE* __stream);
long fread(void* __ptr, long __size, long __n, struct _IO_FILE* __stream);
long fwrite(void* __ptr, long __size, long __n, struct _IO_FILE* __s);
long fread_unlocked(void* __ptr, long __size, long __n, struct _IO_FILE* __stream);
long fwrite_unlocked(void* __ptr, long __size, long __n, struct _IO_FILE* __stream);
int fseek(struct _IO_FILE* __stream, long __off, int __whence);
long ftell(struct _IO_FILE* __stream);
void rewind(struct _IO_FILE* __stream);
int fseeko(struct _IO_FILE* __stream, long __off, int __whence);
long ftello(struct _IO_FILE* __stream);
int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);
int fsetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);
void clearerr(struct _IO_FILE* __stream);
int feof(struct _IO_FILE* __stream);
int ferror(struct _IO_FILE* __stream);
void clearerr_unlocked(struct _IO_FILE* __stream);
int feof_unlocked(struct _IO_FILE* __stream);
int ferror_unlocked(struct _IO_FILE* __stream);
void perror(char* __s);
int fileno(struct _IO_FILE* __stream);
int fileno_unlocked(struct _IO_FILE* __stream);
int pclose(struct _IO_FILE* __stream);
struct _IO_FILE* popen(char* __command, char* __modes);
char* ctermid(char* __s);
void flockfile(struct _IO_FILE* __stream);
int ftrylockfile(struct _IO_FILE* __stream);
void funlockfile(struct _IO_FILE* __stream);
int __uflow(struct _IO_FILE* );
int __overflow(struct _IO_FILE* , int );
void* memalign(long __alignment, long __size);
void* pvalloc(long __size);
struct mallinfo mallinfo();
struct mallinfo2 mallinfo2();
int mallopt(int __param, int __val);
int malloc_trim(long __pad);
long malloc_usable_size(void* __ptr);
void malloc_stats();
int malloc_info(int __options, struct _IO_FILE* __fp);
void come_gc_init();
void come_gc_final();
void ncfree(void* mem);
void* igc_calloc(long count, long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void free_object(void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* nccalloc(long nmemb, long size);
void* ncmemdup(void* block);
void* call_cloner(void* fun, void* mem);
void unwrap_exception(char* sname, int sline, char* mem);

void come_gc_init()
{
}

void come_gc_final()
{
}

void ncfree(void* mem)
{
if(mem) {
(free(mem));
}
}

void* igc_calloc(long count, long size)
{
}

void igc_increment_ref_count(void* mem)
{
}

void igc_decrement_ref_count(void* mem)
{
}

void free_object(void* mem)
{
if(mem==(((void*)0))) {
}
int* ref_count=((int*)(((char*)mem)-sizeof(int)));
(ncfree(ref_count));
}

void call_finalizer(void* fun, void* mem, int call_finalizer_only)
{
if(mem==(((void*)0))) {
}
if(call_finalizer_only) {
if(fun) {
void (*finalizer)(void*)=fun;
finalizer(mem);
}
}
else {
int* ref_count=((int*)(((char*)mem)-sizeof(int)));
*(&(*ref_count))=(*ref_count)-1;;
(*ref_count)-1;
int count=*ref_count;
if(count==0) {
if(mem) {
if(fun) {
void (*finalizer)(void*)=fun;
finalizer(mem);
}
(free_object(mem));
}
}
}
}

void* nccalloc(long nmemb, long size)
{
void* result=(calloc(nmemb,size));
return result;;
}

void* ncmemdup(void* block)
{
if(!block) {
return ((void*)0);;
}
char* mem=((char*)block)-sizeof(int);
long size=(malloc_usable_size(mem));
void* ret=(calloc(1,size));
int* ref_count=ret;
if(ret) {
char* p=ret;
char* p2=mem;
while (p-ret<size) {
*p=*p2;;
*p2;
p=p+1;;
p-1;
p2=p2+1;;
p2-1;
}
}
*(&(*ref_count))=1;;
1;
return ((char*)ret)+sizeof(int);;
}

void* call_cloner(void* fun, void* mem)
{
if(fun&&mem) {
void* (*cloner)(void*)=fun;
return cloner(mem);;
}
return ((void*)0);;
}

void unwrap_exception(char* sname, int sline, char* mem)
{
}

