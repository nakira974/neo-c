typedef void* protocol_obj_t;
void* call_cloner(void* fun, void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* ncmemdup(void* block);
void* gc_ncmemdup(void* block);
typedef char __int8_t;
typedef char __uint8_t;
typedef short __int16_t;
typedef short __uint16_t;
typedef int __int32_t;
typedef int __uint32_t;
typedef long __int64_t;
typedef long __uint64_t;
typedef long __darwin_intptr_t;
typedef int __darwin_natural_t;
typedef int __darwin_ct_rune_t;
union come_anon0
{
    char __mbstate8;
    long _mbstateL;
};
typedef union come_anon0 __mbstate_t;
typedef union come_anon0 __darwin_mbstate_t;
typedef long __darwin_ptrdiff_t;
typedef long __darwin_size_t;
typedef void* __darwin_va_list;
typedef int __darwin_wchar_t;
typedef int __darwin_rune_t;
typedef int __darwin_wint_t;
typedef long __darwin_clock_t;
typedef int __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
typedef long __darwin_blkcnt_t;
typedef int __darwin_blksize_t;
typedef int __darwin_dev_t;
typedef int __darwin_fsblkcnt_t;
typedef int __darwin_fsfilcnt_t;
typedef int __darwin_gid_t;
typedef int __darwin_id_t;
typedef long __darwin_ino64_t;
typedef long __darwin_ino_t;
typedef int __darwin_mach_port_name_t;
typedef int __darwin_mach_port_t;
typedef short __darwin_mode_t;
typedef long __darwin_off_t;
typedef int __darwin_pid_t;
typedef int __darwin_sigset_t;
typedef int __darwin_suseconds_t;
typedef int __darwin_uid_t;
typedef int __darwin_useconds_t;
typedef char __darwin_uuid_t;
typedef char __darwin_uuid_string_t;
struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec* __next;
};
struct _opaque_pthread_attr_t
{
    long __sig;
    char __opaque;
};
struct _opaque_pthread_cond_t
{
    long __sig;
    char __opaque;
};
struct _opaque_pthread_condattr_t
{
    long __sig;
    char __opaque;
};
struct _opaque_pthread_mutex_t
{
    long __sig;
    char __opaque;
};
struct _opaque_pthread_mutexattr_t
{
    long __sig;
    char __opaque;
};
struct _opaque_pthread_once_t
{
    long __sig;
    char __opaque;
};
struct _opaque_pthread_rwlock_t
{
    long __sig;
    char __opaque;
};
struct _opaque_pthread_rwlockattr_t
{
    long __sig;
    char __opaque;
};
struct _opaque_pthread_t
{
    long __sig;
    struct __darwin_pthread_handler_rec* __cleanup_stack;
    char __opaque;
};
typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t* __darwin_pthread_t;
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;
typedef int __darwin_wctype_t;
typedef int idtype_t;
typedef int pid_t;
typedef int id_t;
typedef int sig_atomic_t;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef char u_int8_t;
typedef short u_int16_t;
typedef int u_int32_t;
typedef long u_int64_t;
typedef long register_t;
typedef long intptr_t;
typedef long uintptr_t;
typedef long user_addr_t;
typedef long user_size_t;
typedef long user_ssize_t;
typedef long user_long_t;
typedef long user_ulong_t;
typedef long user_time_t;
typedef long user_off_t;
typedef long syscall_arg_t;
struct __darwin_arm_exception_state
{
    int __exception;
    int __fsr;
    int __far;
};
struct __darwin_arm_exception_state64
{
    long __far;
    int __esr;
    int __exception;
};
struct __darwin_arm_thread_state
{
    int __r;
    int __sp;
    int __lr;
    int __pc;
    int __cpsr;
};
struct __darwin_arm_thread_state64
{
    long __x;
    long __fp;
    long __lr;
    long __sp;
    long __pc;
    int __cpsr;
    int __pad;
};
struct __darwin_arm_vfp_state
{
    int __r;
    int __fpscr;
};
struct __darwin_arm_neon_state64
{
    __uint128_t __v;
    int __fpsr;
    int __fpcr;
};
struct __darwin_arm_neon_state
{
    __uint128_t __v;
    int __fpsr;
    int __fpcr;
};
struct __arm_pagein_state
{
    int __pagein_error;
};
struct __arm_legacy_debug_state
{
    int __bvr;
    int __bcr;
    int __wvr;
    int __wcr;
};
struct __darwin_arm_debug_state32
{
    int __bvr;
    int __bcr;
    int __wvr;
    int __wcr;
    long __mdscr_el1;
};
struct __darwin_arm_debug_state64
{
    long __bvr;
    long __bcr;
    long __wvr;
    long __wcr;
    long __mdscr_el1;
};
struct __darwin_arm_cpmu_state64
{
    long __ctrs;
};
struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state __es;
    struct __darwin_arm_thread_state __ss;
    struct __darwin_arm_vfp_state __fs;
};
struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64 __es;
    struct __darwin_arm_thread_state64 __ss;
    struct __darwin_arm_neon_state64 __ns;
};
typedef struct __darwin_mcontext64* mcontext_t;
typedef struct _opaque_pthread_attr_t pthread_attr_t;
struct __darwin_sigaltstack
{
    void* ss_sp;
    long ss_size;
    int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
struct __darwin_ucontext
{
    int uc_onstack;
    int uc_sigmask;
    struct __darwin_sigaltstack uc_stack;
    struct __darwin_ucontext* uc_link;
    long uc_mcsize;
    struct __darwin_mcontext64* uc_mcontext;
};
typedef struct __darwin_ucontext ucontext_t;
typedef int sigset_t;
typedef long size_t;
typedef int uid_t;
union sigval
{
    int sival_int;
    void* sival_ptr;
};
struct sigevent
{
    int sigev_notify;
    int sigev_signo;
    union sigval sigev_value;
    void (*sigev_notify_function)(union sigval);
    struct _opaque_pthread_attr_t* sigev_notify_attributes;
};
struct __siginfo
{
    int si_signo;
    int si_errno;
    int si_code;
    int si_pid;
    int si_uid;
    int si_status;
    void* si_addr;
    union sigval si_value;
    long si_band;
    long __pad;
};
typedef struct __siginfo siginfo_t;
union __sigaction_u
{
    void (*__sa_handler)(int);
    void (*__sa_sigaction)(int,struct __siginfo*,void*);
};
struct __sigaction
{
    union __sigaction_u __sigaction_u;
    void (*sa_tramp)(void*,int,int,struct __siginfo*,void*);
    int sa_mask;
    int sa_flags;
};
struct sigaction
{
    union __sigaction_u __sigaction_u;
    int sa_mask;
    int sa_flags;
};
typedef void (*sig_t)(int);
struct sigvec
{
    void (*sv_handler)(int);
    int sv_mask;
    int sv_flags;
};
struct sigstack
{
    char* ss_sp;
    int ss_onstack;
};
typedef char uint8_t;
typedef short uint16_t;
typedef int uint32_t;
typedef long uint64_t;
typedef char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long int_least64_t;
typedef char uint_least8_t;
typedef short uint_least16_t;
typedef int uint_least32_t;
typedef long uint_least64_t;
typedef char int_fast8_t;
typedef short int_fast16_t;
typedef int int_fast32_t;
typedef long int_fast64_t;
typedef char uint_fast8_t;
typedef short uint_fast16_t;
typedef int uint_fast32_t;
typedef long uint_fast64_t;
typedef long intmax_t;
typedef long uintmax_t;
struct timeval
{
    long tv_sec;
    int tv_usec;
};
typedef long rlim_t;
struct rusage
{
    struct timeval ru_utime;
    struct timeval ru_stime;
    long ru_maxrss;
    long ru_ixrss;
    long ru_idrss;
    long ru_isrss;
    long ru_minflt;
    long ru_majflt;
    long ru_nswap;
    long ru_inblock;
    long ru_oublock;
    long ru_msgsnd;
    long ru_msgrcv;
    long ru_nsignals;
    long ru_nvcsw;
    long ru_nivcsw;
};
typedef void* rusage_info_t;
struct rusage_info_v0
{
    char ri_uuid;
    long ri_user_time;
    long ri_system_time;
    long ri_pkg_idle_wkups;
    long ri_interrupt_wkups;
    long ri_pageins;
    long ri_wired_size;
    long ri_resident_size;
    long ri_phys_footprint;
    long ri_proc_start_abstime;
    long ri_proc_exit_abstime;
};
struct rusage_info_v1
{
    char ri_uuid;
    long ri_user_time;
    long ri_system_time;
    long ri_pkg_idle_wkups;
    long ri_interrupt_wkups;
    long ri_pageins;
    long ri_wired_size;
    long ri_resident_size;
    long ri_phys_footprint;
    long ri_proc_start_abstime;
    long ri_proc_exit_abstime;
    long ri_child_user_time;
    long ri_child_system_time;
    long ri_child_pkg_idle_wkups;
    long ri_child_interrupt_wkups;
    long ri_child_pageins;
    long ri_child_elapsed_abstime;
};
struct rusage_info_v2
{
    char ri_uuid;
    long ri_user_time;
    long ri_system_time;
    long ri_pkg_idle_wkups;
    long ri_interrupt_wkups;
    long ri_pageins;
    long ri_wired_size;
    long ri_resident_size;
    long ri_phys_footprint;
    long ri_proc_start_abstime;
    long ri_proc_exit_abstime;
    long ri_child_user_time;
    long ri_child_system_time;
    long ri_child_pkg_idle_wkups;
    long ri_child_interrupt_wkups;
    long ri_child_pageins;
    long ri_child_elapsed_abstime;
    long ri_diskio_bytesread;
    long ri_diskio_byteswritten;
};
struct rusage_info_v3
{
    char ri_uuid;
    long ri_user_time;
    long ri_system_time;
    long ri_pkg_idle_wkups;
    long ri_interrupt_wkups;
    long ri_pageins;
    long ri_wired_size;
    long ri_resident_size;
    long ri_phys_footprint;
    long ri_proc_start_abstime;
    long ri_proc_exit_abstime;
    long ri_child_user_time;
    long ri_child_system_time;
    long ri_child_pkg_idle_wkups;
    long ri_child_interrupt_wkups;
    long ri_child_pageins;
    long ri_child_elapsed_abstime;
    long ri_diskio_bytesread;
    long ri_diskio_byteswritten;
    long ri_cpu_time_qos_default;
    long ri_cpu_time_qos_maintenance;
    long ri_cpu_time_qos_background;
    long ri_cpu_time_qos_utility;
    long ri_cpu_time_qos_legacy;
    long ri_cpu_time_qos_user_initiated;
    long ri_cpu_time_qos_user_interactive;
    long ri_billed_system_time;
    long ri_serviced_system_time;
};
struct rusage_info_v4
{
    char ri_uuid;
    long ri_user_time;
    long ri_system_time;
    long ri_pkg_idle_wkups;
    long ri_interrupt_wkups;
    long ri_pageins;
    long ri_wired_size;
    long ri_resident_size;
    long ri_phys_footprint;
    long ri_proc_start_abstime;
    long ri_proc_exit_abstime;
    long ri_child_user_time;
    long ri_child_system_time;
    long ri_child_pkg_idle_wkups;
    long ri_child_interrupt_wkups;
    long ri_child_pageins;
    long ri_child_elapsed_abstime;
    long ri_diskio_bytesread;
    long ri_diskio_byteswritten;
    long ri_cpu_time_qos_default;
    long ri_cpu_time_qos_maintenance;
    long ri_cpu_time_qos_background;
    long ri_cpu_time_qos_utility;
    long ri_cpu_time_qos_legacy;
    long ri_cpu_time_qos_user_initiated;
    long ri_cpu_time_qos_user_interactive;
    long ri_billed_system_time;
    long ri_serviced_system_time;
    long ri_logical_writes;
    long ri_lifetime_max_phys_footprint;
    long ri_instructions;
    long ri_cycles;
    long ri_billed_energy;
    long ri_serviced_energy;
    long ri_interval_max_phys_footprint;
    long ri_runnable_time;
};
struct rusage_info_v5
{
    char ri_uuid;
    long ri_user_time;
    long ri_system_time;
    long ri_pkg_idle_wkups;
    long ri_interrupt_wkups;
    long ri_pageins;
    long ri_wired_size;
    long ri_resident_size;
    long ri_phys_footprint;
    long ri_proc_start_abstime;
    long ri_proc_exit_abstime;
    long ri_child_user_time;
    long ri_child_system_time;
    long ri_child_pkg_idle_wkups;
    long ri_child_interrupt_wkups;
    long ri_child_pageins;
    long ri_child_elapsed_abstime;
    long ri_diskio_bytesread;
    long ri_diskio_byteswritten;
    long ri_cpu_time_qos_default;
    long ri_cpu_time_qos_maintenance;
    long ri_cpu_time_qos_background;
    long ri_cpu_time_qos_utility;
    long ri_cpu_time_qos_legacy;
    long ri_cpu_time_qos_user_initiated;
    long ri_cpu_time_qos_user_interactive;
    long ri_billed_system_time;
    long ri_serviced_system_time;
    long ri_logical_writes;
    long ri_lifetime_max_phys_footprint;
    long ri_instructions;
    long ri_cycles;
    long ri_billed_energy;
    long ri_serviced_energy;
    long ri_interval_max_phys_footprint;
    long ri_runnable_time;
    long ri_flags;
};
struct rusage_info_v6
{
    char ri_uuid;
    long ri_user_time;
    long ri_system_time;
    long ri_pkg_idle_wkups;
    long ri_interrupt_wkups;
    long ri_pageins;
    long ri_wired_size;
    long ri_resident_size;
    long ri_phys_footprint;
    long ri_proc_start_abstime;
    long ri_proc_exit_abstime;
    long ri_child_user_time;
    long ri_child_system_time;
    long ri_child_pkg_idle_wkups;
    long ri_child_interrupt_wkups;
    long ri_child_pageins;
    long ri_child_elapsed_abstime;
    long ri_diskio_bytesread;
    long ri_diskio_byteswritten;
    long ri_cpu_time_qos_default;
    long ri_cpu_time_qos_maintenance;
    long ri_cpu_time_qos_background;
    long ri_cpu_time_qos_utility;
    long ri_cpu_time_qos_legacy;
    long ri_cpu_time_qos_user_initiated;
    long ri_cpu_time_qos_user_interactive;
    long ri_billed_system_time;
    long ri_serviced_system_time;
    long ri_logical_writes;
    long ri_lifetime_max_phys_footprint;
    long ri_instructions;
    long ri_cycles;
    long ri_billed_energy;
    long ri_serviced_energy;
    long ri_interval_max_phys_footprint;
    long ri_runnable_time;
    long ri_flags;
    long ri_user_ptime;
    long ri_system_ptime;
    long ri_pinstructions;
    long ri_pcycles;
    long ri_energy_nj;
    long ri_penergy_nj;
    long ri_reserved;
};
typedef struct rusage_info_v6 rusage_info_current;
struct rlimit
{
    long rlim_cur;
    long rlim_max;
};
struct proc_rlimit_control_wakeupmon
{
    int wm_flags;
    int wm_rate;
};
struct come_anon2
{
    int w_Termsig:7;
;
    int w_Coredump:1;
;
    int w_Retcode:8;
;
    int w_Filler:16;
;
};
struct come_anon3
{
    int w_Stopval:8;
;
    int w_Stopsig:8;
;
    int w_Filler:16;
;
};
struct come_anon4
{
    int w_Termsig:7;
;
    int w_Coredump:1;
;
    int w_Retcode:8;
;
    int w_Filler:16;
;
};
struct come_anon5
{
    int w_Stopval:8;
;
    int w_Stopsig:8;
;
    int w_Filler:16;
;
};
union wait
{
    int w_status;
    struct come_anon4 w_T;
    struct come_anon5 w_S;
};
typedef int ct_rune_t;
typedef int rune_t;
typedef int wchar_t;
struct come_anon6
{
    int quot;
    int rem;
};
typedef struct come_anon6 div_t;
struct come_anon7
{
    long quot;
    long rem;
};
typedef struct come_anon7 ldiv_t;
struct come_anon8
{
    long quot;
    long rem;
};
typedef struct come_anon8 lldiv_t;
typedef int dev_t;
typedef short mode_t;
typedef void* va_list;
typedef long fpos_t;
struct __sbuf
{
    char* _base;
    int _size;
};
struct __sFILEX;
struct __sFILE
{
    char* _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void* _cookie;
    int* (*_close)(void*);
    int* (*_read)(void*,char*,int);
    long* (*_seek)(void*,long,int);
    int* (*_write)(void*,char*,int);
    struct __sbuf _ub;
    struct __sFILEX* _extra;
    int _ur;
    char _ubuf;
    char _nbuf;
    struct __sbuf _lb;
    int _blksize;
    long _offset;
};
typedef struct __sFILE FILE;
typedef long off_t;
typedef long ssize_t;
typedef long size_t;

void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
void* igc_calloc(long count, long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void unwrap_exception(char* sname, int sline, char* mem);
lambda signal(int , void (*anon_fun)(int));
int getpriority(int , int );
int getiopolicy_np(int , int );
int getrlimit(int , struct rlimit* );
int getrusage(int , struct rusage* );
int setpriority(int , int , int );
int setiopolicy_np(int , int , int );
int setrlimit(int , struct rlimit* );
int wait(int* );
int waitpid(int , int* , int );
int waitid(int , int , struct __siginfo* , int );
int wait3(int* , int , struct rusage* );
int wait4(int , int* , int , struct rusage* );
void* alloca(long );
void* malloc(long __size);
void* calloc(long __count, long __size);
void free(void* );
void* realloc(void* __ptr, long __size);
void* valloc(long );
void* aligned_alloc(long __alignment, long __size);
int posix_memalign(void** __memptr, long __alignment, long __size);
void abort();
int abs(int );
int atexit(void (*_Nonnull)());
double atof(char* );
int atoi(char* );
long atol(char* );
long atoll(char* );
void* bsearch(void* __key, void* __base, long __nel, long __width, int* (*__compar)(void*,void*));
struct come_anon6 div(int , int );
void exit(int );
char* getenv(char* );
long labs(long );
struct come_anon7 ldiv(long , long );
long llabs(long );
struct come_anon8 lldiv(long , long );
int mblen(char* __s, long __n);
long mbstowcs(int* , char* , long );
int mbtowc(int* , char* , long );
void qsort(void* __base, long __nel, long __width, int* (*__compar)(void*,void*));
int rand();
void srand(int );
double strtod(char* , char** );
float strtof(char* , char** );
long strtol(char* __str, char** __endptr, int __base);
long double strtold(char* , char** );
long strtoll(char* __str, char** __endptr, int __base);
long strtoul(char* __str, char** __endptr, int __base);
long strtoull(char* __str, char** __endptr, int __base);
int system(char* );
long wcstombs(char* , int* , long );
int wctomb(char* , int );
void _Exit(int );
long a64l(char* );
double drand48();
char* ecvt(double , int , int* , int* );
double erand48(short* );
char* fcvt(double , int , int* , int* );
char* gcvt(double , int , char* );
int getsubopt(char** , char** , char** );
int grantpt(int );
char* initstate(int , char* , long );
long jrand48(short* );
char* l64a(long );
void lcong48(short* );
long lrand48();
char* mktemp(char* );
int mkstemp(char* );
long mrand48();
long nrand48(short* );
int posix_openpt(int );
char* ptsname(int );
int ptsname_r(int fildes, char* buffer, long buflen);
int putenv(char* );
long random();
int rand_r(int* );
char* realpath(char* , char* );
short* seed48(short* );
int setenv(char* __name, char* __value, int __overwrite);
void setkey(char* );
char* setstate(char* );
void srand48(long );
void srandom(int );
int unlockpt(int );
int unsetenv(char* );
int arc4random();
void arc4random_addrandom(char* , int );
void arc4random_buf(void* __buf, long __nbytes);
void arc4random_stir();
int arc4random_uniform(int __upper_bound);
int atexit_b(void (*)());
void* bsearch_b(void* __key, void* __base, long __nel, long __width, int (*__compar)(void*,void*));
char* cgetcap(char* , char* , int );
int cgetclose();
int cgetent(char** , char** , char* );
int cgetfirst(char** , char** );
int cgetmatch(char* , char* );
int cgetnext(char** , char** );
int cgetnum(char* , char* , long* );
int cgetset(char* );
int cgetstr(char* , char* , char** );
int cgetustr(char* , char* , char** );
int daemon(int , int );
char* devname(int , short );
char* devname_r(int , short , char* buf, int len);
char* getbsize(int* , long* );
int getloadavg(double* , int );
char* getprogname();
void setprogname(char* );
int heapsort(void* __base, long __nel, long __width, int* (*__compar)(void*,void*));
int heapsort_b(void* __base, long __nel, long __width, int (*__compar)(void*,void*));
int mergesort(void* __base, long __nel, long __width, int* (*__compar)(void*,void*));
int mergesort_b(void* __base, long __nel, long __width, int (*__compar)(void*,void*));
void psort(void* __base, long __nel, long __width, int* (*__compar)(void*,void*));
void psort_b(void* __base, long __nel, long __width, int (*__compar)(void*,void*));
void psort_r(void* __base, long __nel, long __width, void* , int* (*__compar)(void*,void*,void*));
void qsort_b(void* __base, long __nel, long __width, int (*__compar)(void*,void*));
void qsort_r(void* __base, long __nel, long __width, void* , int* (*__compar)(void*,void*,void*));
int radixsort(char** __base, int __nel, char* __table, int __endbyte);
int rpmatch(char* );
int sradixsort(char** __base, int __nel, char* __table, int __endbyte);
void sranddev();
void srandomdev();
void* reallocf(void* __ptr, long __size);
long strtonum(char* __numstr, long __minval, long __maxval, char** __errstrp);
long strtoq(char* __str, char** __endptr, int __base);
long strtouq(char* __str, char** __endptr, int __base);
int renameat(int , char* , int , char* );
int renamex_np(char* , char* , int );
int renameatx_np(int , char* , int , char* , int );
void clearerr(struct __sFILE* );
int fclose(struct __sFILE* );
int feof(struct __sFILE* );
int ferror(struct __sFILE* );
int fflush(struct __sFILE* );
int fgetc(struct __sFILE* );
int fgetpos(struct __sFILE* , long* );
char* fgets(char* , int , struct __sFILE* );
struct __sFILE* fopen(char* __filename, char* __mode);
int fprintf(struct __sFILE* , char* , ...);
int fputc(int , struct __sFILE* );
int fputs(char* , struct __sFILE* );
long fread(void* __ptr, long __size, long __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(char* , char* , struct __sFILE* );
int fscanf(struct __sFILE* , char* , ...);
int fseek(struct __sFILE* , long , int );
int fsetpos(struct __sFILE* , long* );
long ftell(struct __sFILE* );
long fwrite(void* __ptr, long __size, long __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* );
int getchar();
char* gets(char* );
void perror(char* );
int printf(char* , ...);
int putc(int , struct __sFILE* );
int putchar(int );
int puts(char* );
int remove(char* );
int rename(char* __old, char* __new);
void rewind(struct __sFILE* );
int scanf(char* , ...);
void setbuf(struct __sFILE* , char* );
int setvbuf(struct __sFILE* , char* , int , long );
int sprintf(char* , char* , ...);
int sscanf(char* , char* , ...);
struct __sFILE* tmpfile();
char* tmpnam(char* );
int ungetc(int , struct __sFILE* );
int vfprintf(struct __sFILE* , char* , char* );
int vprintf(char* , char* );
int vsprintf(char* , char* , char* );
char* ctermid(char* );
struct __sFILE* fdopen(int , char* );
int fileno(struct __sFILE* );
int pclose(struct __sFILE* );
struct __sFILE* popen(char* , char* );
int __srget(struct __sFILE* );
int __svfscanf(struct __sFILE* , char* , char* );
int __swbuf(int , struct __sFILE* );
void flockfile(struct __sFILE* );
int ftrylockfile(struct __sFILE* );
void funlockfile(struct __sFILE* );
int getc_unlocked(struct __sFILE* );
int getchar_unlocked();
int putc_unlocked(int , struct __sFILE* );
int putchar_unlocked(int );
int getw(struct __sFILE* );
int putw(int , struct __sFILE* );
char* tempnam(char* __dir, char* __prefix);
int fseeko(struct __sFILE* __stream, long __offset, int __whence);
long ftello(struct __sFILE* __stream);
int snprintf(char* __str, long __size, char* __format, ...);
int vfscanf(struct __sFILE* __stream, char* __format, char* );
int vscanf(char* __format, char* );
int vsnprintf(char* __str, long __size, char* __format, char* );
int vsscanf(char* __str, char* __format, char* );
int dprintf(int , char* , ...);
int vdprintf(int , char* , char* );
long getdelim(char** __linep, long* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, long* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, long __size, char* __mode);
struct __sFILE* open_memstream(char** __bufp, long* __sizep);
int asprintf(char** , char* , ...);
char* ctermid_r(char* );
char* fgetln(struct __sFILE* , long* );
char* fmtcheck(char* , char* );
int fpurge(struct __sFILE* );
void setbuffer(struct __sFILE* , char* , int );
int setlinebuf(struct __sFILE* );
int vasprintf(char** , char* , char* );
struct __sFILE* funopen(void* , int (*_Nullable)(void*,char*,int), int (*_Nullable)(void*,char*,int), long (*_Nullable)(void*,long,int), int (*_Nullable)(void*));
long malloc_size(void* ptr);
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
long size=(malloc_size(mem));
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

