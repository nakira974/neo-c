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
typedef long (*cookie_read_function_t)(void*,char*,unsigned long);
typedef long (*cookie_write_function_t)(void*,const char*,unsigned long);
typedef int (*cookie_seek_function_t)(void*,long*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long);
    long (*write)(void*,const char*,unsigned long);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef __builtin_va_list va_list;
typedef long off_t;
typedef long off64_t;
typedef long ssize_t;
typedef __fpos_t fpos_t;
typedef __fpos64_t fpos64_t;
extern FILE* stdin;
extern FILE* stdout;
extern FILE* stderr;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct obstack;
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
struct __locale_data;
struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};
typedef struct __locale_struct* __locale_t;
typedef __locale_t* locale_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef long quad_t;
typedef unsigned long u_quad_t;
typedef __fsid_t fsid_t;
typedef long loff_t;
typedef unsigned long ino_t;
typedef unsigned long ino64_t;
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
typedef unsigned int useconds_t;
typedef long suseconds_t;
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
typedef long __fd_mask;
struct come_anon7
{
    long fds_bits[16];
};
typedef struct come_anon7 fd_set;
typedef long fd_mask;
typedef long blksize_t;
typedef long blkcnt_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;
typedef long blkcnt64_t;
typedef unsigned long fsblkcnt64_t;
typedef unsigned long fsfilcnt64_t;
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
typedef int (*comparison_fn_t)(const void*,const void*);
typedef int (*__compar_d_fn_t)(const void*,const void*,void*);
typedef long ptrdiff_t;
struct come_anon19
{
    long long __max_align_ll;
    long double __max_align_ld;
};
typedef struct come_anon19 max_align_t;
typedef void* GC_PTR;
typedef unsigned long GC_word;
typedef long GC_signed_word;
extern unsigned long GC_gc_no;
typedef void (*GC_oom_func)(unsigned long);
extern void (*GC_oom_fn)(unsigned long);
typedef void (*GC_on_heap_resize_proc)(unsigned long);
extern void (*GC_on_heap_resize)(unsigned long);
static const int GC_EVENT_START=0;
static const int GC_EVENT_MARK_START=1;
static const int GC_EVENT_MARK_END=2;
static const int GC_EVENT_RECLAIM_START=3;
static const int GC_EVENT_RECLAIM_END=4;
static const int GC_EVENT_END=5;
static const int GC_EVENT_PRE_STOP_WORLD=6;
static const int GC_EVENT_POST_STOP_WORLD=7;
static const int GC_EVENT_PRE_START_WORLD=8;
static const int GC_EVENT_POST_START_WORLD=9;
static const int GC_EVENT_THREAD_SUSPENDED=10;
static const int GC_EVENT_THREAD_UNSUSPENDED=11;
typedef int GC_EventType;
typedef void (*GC_on_collection_event_proc)(int);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();
extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long GC_free_space_divisor;
extern unsigned long GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long GC_time_limit;
typedef int (*GC_stop_func)();
struct GC_prof_stats_s
{
    unsigned long heapsize_full;
    unsigned long free_bytes_full;
    unsigned long unmapped_bytes;
    unsigned long bytes_allocd_since_gc;
    unsigned long allocd_bytes_before_gc;
    unsigned long non_gc_bytes;
    unsigned long gc_no;
    unsigned long markers_m1;
    unsigned long bytes_reclaimed_since_gc;
    unsigned long reclaimed_bytes_before_gc;
    unsigned long expl_freed_bytes_since_gc;
};
typedef void (*GC_finalization_proc)(void*,void*);
static const int GC_TOGGLE_REF_DROP=0;
static const int GC_TOGGLE_REF_STRONG=1;
static const int GC_TOGGLE_REF_WEAK=2;
typedef int GC_ToggleRefStatus;
typedef int (*GC_toggleref_func)(void*);
typedef void (*GC_await_finalize_proc)(void*);
typedef void (*GC_warn_proc)(char*,unsigned long);
typedef void (*GC_abort_func)(const char*);
typedef unsigned long GC_hidden_pointer;
typedef void (*GC_fn_type)(void*);
struct GC_stack_base
{
    void* mem_base;
};
typedef void (*GC_stack_base_func)(struct GC_stack_base*,void*);
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long);
struct sched_param
{
    int sched_priority;
};
typedef unsigned long __cpu_mask;
struct come_anon22
{
    unsigned long __bits[16];
};
typedef struct come_anon22 cpu_set_t;
struct timex
{
    unsigned int modes;
    long offset;
    long freq;
    long maxerror;
    long esterror;
    int status;
    long constant;
    long precision;
    long tolerance;
    struct timeval time;
    long tick;
    long ppsfreq;
    long jitter;
    int shift;
    long stabil;
    long jitcnt;
    long calcnt;
    long errcnt;
    long stbcnt;
    int tai;
    int :32;
;
    int :32;
;
    int :32;
;
    int :32;
;
    int :32;
;
    int :32;
;
    int :32;
;
    int :32;
;
    int :32;
;
    int :32;
;
    int :32;
;
};
struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    const char* tm_zone;
};
struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};
struct sigevent;
extern char* __tzname[2];
extern int __daylight;
extern long __timezone;
extern char* tzname[2];
extern int daylight;
extern long timezone;
extern int getdate_err;
typedef long __jmp_buf[8];
struct __jmp_buf_tag
{
    long __jmpbuf[8];
    int __mask_was_saved;
    __sigset_t __saved_mask;
};
static const int PTHREAD_CREATE_JOINABLE=0;
static const int PTHREAD_CREATE_DETACHED=1;
static const int PTHREAD_MUTEX_TIMED_NP=0;
static const int PTHREAD_MUTEX_RECURSIVE_NP=1;
static const int PTHREAD_MUTEX_ERRORCHECK_NP=2;
static const int PTHREAD_MUTEX_ADAPTIVE_NP=3;
static const int PTHREAD_MUTEX_NORMAL=0;
static const int PTHREAD_MUTEX_RECURSIVE=1;
static const int PTHREAD_MUTEX_ERRORCHECK=2;
static const int PTHREAD_MUTEX_DEFAULT=0;
static const int PTHREAD_MUTEX_FAST_NP=0;
static const int PTHREAD_MUTEX_STALLED=0;
static const int PTHREAD_MUTEX_STALLED_NP=0;
static const int PTHREAD_MUTEX_ROBUST=1;
static const int PTHREAD_MUTEX_ROBUST_NP=1;
static const int PTHREAD_PRIO_NONE=0;
static const int PTHREAD_PRIO_INHERIT=1;
static const int PTHREAD_PRIO_PROTECT=2;
static const int PTHREAD_RWLOCK_PREFER_READER_NP=0;
static const int PTHREAD_RWLOCK_PREFER_WRITER_NP=1;
static const int PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP=2;
static const int PTHREAD_RWLOCK_DEFAULT_NP=0;
static const int PTHREAD_INHERIT_SCHED=0;
static const int PTHREAD_EXPLICIT_SCHED=1;
static const int PTHREAD_SCOPE_SYSTEM=0;
static const int PTHREAD_SCOPE_PROCESS=1;
static const int PTHREAD_PROCESS_PRIVATE=0;
static const int PTHREAD_PROCESS_SHARED=1;
struct _pthread_cleanup_buffer
{
    void (*__routine)(void*);
    void* __arg;
    int __canceltype;
    struct _pthread_cleanup_buffer* __prev;
};
static const int PTHREAD_CANCEL_ENABLE=0;
static const int PTHREAD_CANCEL_DISABLE=1;
static const int PTHREAD_CANCEL_DEFERRED=0;
static const int PTHREAD_CANCEL_ASYNCHRONOUS=1;
struct __cancel_jmp_buf_tag
{
    long __cancel_jmp_buf[8];
    int __mask_was_saved;
};
struct come_anon43
{
    struct __cancel_jmp_buf_tag __cancel_jmp_buf[1];
    void* __pad[4];
};
typedef struct come_anon43 __pthread_unwind_buf_t;
struct __pthread_cleanup_frame
{
    void (*__cancel_routine)(void*);
    void* __cancel_arg;
    int __do_it;
    int __cancel_type;
};
typedef long intptr_t;
typedef unsigned int socklen_t;
extern char** __environ;
extern char** environ;
static const int _PC_LINK_MAX=0;
static const int _PC_MAX_CANON=1;
static const int _PC_MAX_INPUT=2;
static const int _PC_NAME_MAX=3;
static const int _PC_PATH_MAX=4;
static const int _PC_PIPE_BUF=5;
static const int _PC_CHOWN_RESTRICTED=6;
static const int _PC_NO_TRUNC=7;
static const int _PC_VDISABLE=8;
static const int _PC_SYNC_IO=9;
static const int _PC_ASYNC_IO=10;
static const int _PC_PRIO_IO=11;
static const int _PC_SOCK_MAXBUF=12;
static const int _PC_FILESIZEBITS=13;
static const int _PC_REC_INCR_XFER_SIZE=14;
static const int _PC_REC_MAX_XFER_SIZE=15;
static const int _PC_REC_MIN_XFER_SIZE=16;
static const int _PC_REC_XFER_ALIGN=17;
static const int _PC_ALLOC_SIZE_MIN=18;
static const int _PC_SYMLINK_MAX=19;
static const int _PC_2_SYMLINKS=20;
static const int _SC_ARG_MAX=0;
static const int _SC_CHILD_MAX=1;
static const int _SC_CLK_TCK=2;
static const int _SC_NGROUPS_MAX=3;
static const int _SC_OPEN_MAX=4;
static const int _SC_STREAM_MAX=5;
static const int _SC_TZNAME_MAX=6;
static const int _SC_JOB_CONTROL=7;
static const int _SC_SAVED_IDS=8;
static const int _SC_REALTIME_SIGNALS=9;
static const int _SC_PRIORITY_SCHEDULING=10;
static const int _SC_TIMERS=11;
static const int _SC_ASYNCHRONOUS_IO=12;
static const int _SC_PRIORITIZED_IO=13;
static const int _SC_SYNCHRONIZED_IO=14;
static const int _SC_FSYNC=15;
static const int _SC_MAPPED_FILES=16;
static const int _SC_MEMLOCK=17;
static const int _SC_MEMLOCK_RANGE=18;
static const int _SC_MEMORY_PROTECTION=19;
static const int _SC_MESSAGE_PASSING=20;
static const int _SC_SEMAPHORES=21;
static const int _SC_SHARED_MEMORY_OBJECTS=22;
static const int _SC_AIO_LISTIO_MAX=23;
static const int _SC_AIO_MAX=24;
static const int _SC_AIO_PRIO_DELTA_MAX=25;
static const int _SC_DELAYTIMER_MAX=26;
static const int _SC_MQ_OPEN_MAX=27;
static const int _SC_MQ_PRIO_MAX=28;
static const int _SC_VERSION=29;
static const int _SC_PAGESIZE=30;
static const int _SC_RTSIG_MAX=31;
static const int _SC_SEM_NSEMS_MAX=32;
static const int _SC_SEM_VALUE_MAX=33;
static const int _SC_SIGQUEUE_MAX=34;
static const int _SC_TIMER_MAX=35;
static const int _SC_BC_BASE_MAX=36;
static const int _SC_BC_DIM_MAX=37;
static const int _SC_BC_SCALE_MAX=38;
static const int _SC_BC_STRING_MAX=39;
static const int _SC_COLL_WEIGHTS_MAX=40;
static const int _SC_EQUIV_CLASS_MAX=41;
static const int _SC_EXPR_NEST_MAX=42;
static const int _SC_LINE_MAX=43;
static const int _SC_RE_DUP_MAX=44;
static const int _SC_CHARCLASS_NAME_MAX=45;
static const int _SC_2_VERSION=46;
static const int _SC_2_C_BIND=47;
static const int _SC_2_C_DEV=48;
static const int _SC_2_FORT_DEV=49;
static const int _SC_2_FORT_RUN=50;
static const int _SC_2_SW_DEV=51;
static const int _SC_2_LOCALEDEF=52;
static const int _SC_PII=53;
static const int _SC_PII_XTI=54;
static const int _SC_PII_SOCKET=55;
static const int _SC_PII_INTERNET=56;
static const int _SC_PII_OSI=57;
static const int _SC_POLL=58;
static const int _SC_SELECT=59;
static const int _SC_UIO_MAXIOV=60;
static const int _SC_IOV_MAX=60;
static const int _SC_PII_INTERNET_STREAM=61;
static const int _SC_PII_INTERNET_DGRAM=62;
static const int _SC_PII_OSI_COTS=63;
static const int _SC_PII_OSI_CLTS=64;
static const int _SC_PII_OSI_M=65;
static const int _SC_T_IOV_MAX=66;
static const int _SC_THREADS=67;
static const int _SC_THREAD_SAFE_FUNCTIONS=68;
static const int _SC_GETGR_R_SIZE_MAX=69;
static const int _SC_GETPW_R_SIZE_MAX=70;
static const int _SC_LOGIN_NAME_MAX=71;
static const int _SC_TTY_NAME_MAX=72;
static const int _SC_THREAD_DESTRUCTOR_ITERATIONS=73;
static const int _SC_THREAD_KEYS_MAX=74;
static const int _SC_THREAD_STACK_MIN=75;
static const int _SC_THREAD_THREADS_MAX=76;
static const int _SC_THREAD_ATTR_STACKADDR=77;
static const int _SC_THREAD_ATTR_STACKSIZE=78;
static const int _SC_THREAD_PRIORITY_SCHEDULING=79;
static const int _SC_THREAD_PRIO_INHERIT=80;
static const int _SC_THREAD_PRIO_PROTECT=81;
static const int _SC_THREAD_PROCESS_SHARED=82;
static const int _SC_NPROCESSORS_CONF=83;
static const int _SC_NPROCESSORS_ONLN=84;
static const int _SC_PHYS_PAGES=85;
static const int _SC_AVPHYS_PAGES=86;
static const int _SC_ATEXIT_MAX=87;
static const int _SC_PASS_MAX=88;
static const int _SC_XOPEN_VERSION=89;
static const int _SC_XOPEN_XCU_VERSION=90;
static const int _SC_XOPEN_UNIX=91;
static const int _SC_XOPEN_CRYPT=92;
static const int _SC_XOPEN_ENH_I18N=93;
static const int _SC_XOPEN_SHM=94;
static const int _SC_2_CHAR_TERM=95;
static const int _SC_2_C_VERSION=96;
static const int _SC_2_UPE=97;
static const int _SC_XOPEN_XPG2=98;
static const int _SC_XOPEN_XPG3=99;
static const int _SC_XOPEN_XPG4=100;
static const int _SC_CHAR_BIT=101;
static const int _SC_CHAR_MAX=102;
static const int _SC_CHAR_MIN=103;
static const int _SC_INT_MAX=104;
static const int _SC_INT_MIN=105;
static const int _SC_LONG_BIT=106;
static const int _SC_WORD_BIT=107;
static const int _SC_MB_LEN_MAX=108;
static const int _SC_NZERO=109;
static const int _SC_SSIZE_MAX=110;
static const int _SC_SCHAR_MAX=111;
static const int _SC_SCHAR_MIN=112;
static const int _SC_SHRT_MAX=113;
static const int _SC_SHRT_MIN=114;
static const int _SC_UCHAR_MAX=115;
static const int _SC_UINT_MAX=116;
static const int _SC_ULONG_MAX=117;
static const int _SC_USHRT_MAX=118;
static const int _SC_NL_ARGMAX=119;
static const int _SC_NL_LANGMAX=120;
static const int _SC_NL_MSGMAX=121;
static const int _SC_NL_NMAX=122;
static const int _SC_NL_SETMAX=123;
static const int _SC_NL_TEXTMAX=124;
static const int _SC_XBS5_ILP32_OFF32=125;
static const int _SC_XBS5_ILP32_OFFBIG=126;
static const int _SC_XBS5_LP64_OFF64=127;
static const int _SC_XBS5_LPBIG_OFFBIG=128;
static const int _SC_XOPEN_LEGACY=129;
static const int _SC_XOPEN_REALTIME=130;
static const int _SC_XOPEN_REALTIME_THREADS=131;
static const int _SC_ADVISORY_INFO=132;
static const int _SC_BARRIERS=133;
static const int _SC_BASE=134;
static const int _SC_C_LANG_SUPPORT=135;
static const int _SC_C_LANG_SUPPORT_R=136;
static const int _SC_CLOCK_SELECTION=137;
static const int _SC_CPUTIME=138;
static const int _SC_THREAD_CPUTIME=139;
static const int _SC_DEVICE_IO=140;
static const int _SC_DEVICE_SPECIFIC=141;
static const int _SC_DEVICE_SPECIFIC_R=142;
static const int _SC_FD_MGMT=143;
static const int _SC_FIFO=144;
static const int _SC_PIPE=145;
static const int _SC_FILE_ATTRIBUTES=146;
static const int _SC_FILE_LOCKING=147;
static const int _SC_FILE_SYSTEM=148;
static const int _SC_MONOTONIC_CLOCK=149;
static const int _SC_MULTI_PROCESS=150;
static const int _SC_SINGLE_PROCESS=151;
static const int _SC_NETWORKING=152;
static const int _SC_READER_WRITER_LOCKS=153;
static const int _SC_SPIN_LOCKS=154;
static const int _SC_REGEXP=155;
static const int _SC_REGEX_VERSION=156;
static const int _SC_SHELL=157;
static const int _SC_SIGNALS=158;
static const int _SC_SPAWN=159;
static const int _SC_SPORADIC_SERVER=160;
static const int _SC_THREAD_SPORADIC_SERVER=161;
static const int _SC_SYSTEM_DATABASE=162;
static const int _SC_SYSTEM_DATABASE_R=163;
static const int _SC_TIMEOUTS=164;
static const int _SC_TYPED_MEMORY_OBJECTS=165;
static const int _SC_USER_GROUPS=166;
static const int _SC_USER_GROUPS_R=167;
static const int _SC_2_PBS=168;
static const int _SC_2_PBS_ACCOUNTING=169;
static const int _SC_2_PBS_LOCATE=170;
static const int _SC_2_PBS_MESSAGE=171;
static const int _SC_2_PBS_TRACK=172;
static const int _SC_SYMLOOP_MAX=173;
static const int _SC_STREAMS=174;
static const int _SC_2_PBS_CHECKPOINT=175;
static const int _SC_V6_ILP32_OFF32=176;
static const int _SC_V6_ILP32_OFFBIG=177;
static const int _SC_V6_LP64_OFF64=178;
static const int _SC_V6_LPBIG_OFFBIG=179;
static const int _SC_HOST_NAME_MAX=180;
static const int _SC_TRACE=181;
static const int _SC_TRACE_EVENT_FILTER=182;
static const int _SC_TRACE_INHERIT=183;
static const int _SC_TRACE_LOG=184;
static const int _SC_LEVEL1_ICACHE_SIZE=185;
static const int _SC_LEVEL1_ICACHE_ASSOC=186;
static const int _SC_LEVEL1_ICACHE_LINESIZE=187;
static const int _SC_LEVEL1_DCACHE_SIZE=188;
static const int _SC_LEVEL1_DCACHE_ASSOC=189;
static const int _SC_LEVEL1_DCACHE_LINESIZE=190;
static const int _SC_LEVEL2_CACHE_SIZE=191;
static const int _SC_LEVEL2_CACHE_ASSOC=192;
static const int _SC_LEVEL2_CACHE_LINESIZE=193;
static const int _SC_LEVEL3_CACHE_SIZE=194;
static const int _SC_LEVEL3_CACHE_ASSOC=195;
static const int _SC_LEVEL3_CACHE_LINESIZE=196;
static const int _SC_LEVEL4_CACHE_SIZE=197;
static const int _SC_LEVEL4_CACHE_ASSOC=198;
static const int _SC_LEVEL4_CACHE_LINESIZE=199;
static const int _SC_IPV6=235;
static const int _SC_RAW_SOCKETS=236;
static const int _SC_V7_ILP32_OFF32=237;
static const int _SC_V7_ILP32_OFFBIG=238;
static const int _SC_V7_LP64_OFF64=239;
static const int _SC_V7_LPBIG_OFFBIG=240;
static const int _SC_SS_REPL_MAX=241;
static const int _SC_TRACE_EVENT_NAME_MAX=242;
static const int _SC_TRACE_NAME_MAX=243;
static const int _SC_TRACE_SYS_MAX=244;
static const int _SC_TRACE_USER_EVENT_MAX=245;
static const int _SC_XOPEN_STREAMS=246;
static const int _SC_THREAD_ROBUST_PRIO_INHERIT=247;
static const int _SC_THREAD_ROBUST_PRIO_PROTECT=248;
static const int _SC_MINSIGSTKSZ=249;
static const int _SC_SIGSTKSZ=250;
static const int _CS_PATH=0;
static const int _CS_V6_WIDTH_RESTRICTED_ENVS=1;
static const int _CS_GNU_LIBC_VERSION=2;
static const int _CS_GNU_LIBPTHREAD_VERSION=3;
static const int _CS_V5_WIDTH_RESTRICTED_ENVS=4;
static const int _CS_V7_WIDTH_RESTRICTED_ENVS=5;
static const int _CS_LFS_CFLAGS=1000;
static const int _CS_LFS_LDFLAGS=1001;
static const int _CS_LFS_LIBS=1002;
static const int _CS_LFS_LINTFLAGS=1003;
static const int _CS_LFS64_CFLAGS=1004;
static const int _CS_LFS64_LDFLAGS=1005;
static const int _CS_LFS64_LIBS=1006;
static const int _CS_LFS64_LINTFLAGS=1007;
static const int _CS_XBS5_ILP32_OFF32_CFLAGS=1100;
static const int _CS_XBS5_ILP32_OFF32_LDFLAGS=1101;
static const int _CS_XBS5_ILP32_OFF32_LIBS=1102;
static const int _CS_XBS5_ILP32_OFF32_LINTFLAGS=1103;
static const int _CS_XBS5_ILP32_OFFBIG_CFLAGS=1104;
static const int _CS_XBS5_ILP32_OFFBIG_LDFLAGS=1105;
static const int _CS_XBS5_ILP32_OFFBIG_LIBS=1106;
static const int _CS_XBS5_ILP32_OFFBIG_LINTFLAGS=1107;
static const int _CS_XBS5_LP64_OFF64_CFLAGS=1108;
static const int _CS_XBS5_LP64_OFF64_LDFLAGS=1109;
static const int _CS_XBS5_LP64_OFF64_LIBS=1110;
static const int _CS_XBS5_LP64_OFF64_LINTFLAGS=1111;
static const int _CS_XBS5_LPBIG_OFFBIG_CFLAGS=1112;
static const int _CS_XBS5_LPBIG_OFFBIG_LDFLAGS=1113;
static const int _CS_XBS5_LPBIG_OFFBIG_LIBS=1114;
static const int _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS=1115;
static const int _CS_POSIX_V6_ILP32_OFF32_CFLAGS=1116;
static const int _CS_POSIX_V6_ILP32_OFF32_LDFLAGS=1117;
static const int _CS_POSIX_V6_ILP32_OFF32_LIBS=1118;
static const int _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS=1119;
static const int _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS=1120;
static const int _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS=1121;
static const int _CS_POSIX_V6_ILP32_OFFBIG_LIBS=1122;
static const int _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS=1123;
static const int _CS_POSIX_V6_LP64_OFF64_CFLAGS=1124;
static const int _CS_POSIX_V6_LP64_OFF64_LDFLAGS=1125;
static const int _CS_POSIX_V6_LP64_OFF64_LIBS=1126;
static const int _CS_POSIX_V6_LP64_OFF64_LINTFLAGS=1127;
static const int _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS=1128;
static const int _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS=1129;
static const int _CS_POSIX_V6_LPBIG_OFFBIG_LIBS=1130;
static const int _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS=1131;
static const int _CS_POSIX_V7_ILP32_OFF32_CFLAGS=1132;
static const int _CS_POSIX_V7_ILP32_OFF32_LDFLAGS=1133;
static const int _CS_POSIX_V7_ILP32_OFF32_LIBS=1134;
static const int _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS=1135;
static const int _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS=1136;
static const int _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS=1137;
static const int _CS_POSIX_V7_ILP32_OFFBIG_LIBS=1138;
static const int _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS=1139;
static const int _CS_POSIX_V7_LP64_OFF64_CFLAGS=1140;
static const int _CS_POSIX_V7_LP64_OFF64_LDFLAGS=1141;
static const int _CS_POSIX_V7_LP64_OFF64_LIBS=1142;
static const int _CS_POSIX_V7_LP64_OFF64_LINTFLAGS=1143;
static const int _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS=1144;
static const int _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS=1145;
static const int _CS_POSIX_V7_LPBIG_OFFBIG_LIBS=1146;
static const int _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS=1147;
static const int _CS_V6_ENV=1148;
static const int _CS_V7_ENV=1149;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
struct stat
{
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    int __pad0;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __glibc_reserved[3];
};
struct stat64
{
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    int __pad0;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __glibc_reserved[3];
};
typedef char __s8;
typedef unsigned char __u8;
typedef short __s16;
typedef unsigned short __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
struct come_anon50
{
    unsigned long fds_bits[16];
};
typedef struct come_anon50 __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned long __kernel_old_dev_t;
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;
typedef unsigned long __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef long __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
struct come_anon51
{
    int val[2];
};
typedef struct come_anon51 __kernel_fsid_t;
typedef long __kernel_off_t;
typedef long long __kernel_loff_t;
typedef long __kernel_old_time_t;
typedef long __kernel_time_t;
typedef long long __kernel_time64_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char* __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned short __le16;
typedef unsigned short __be16;
typedef unsigned int __le32;
typedef unsigned int __be32;
typedef unsigned long long __le64;
typedef unsigned long long __be64;
typedef unsigned short __sum16;
typedef unsigned int __wsum;
typedef unsigned int __poll_t;
struct statx_timestamp
{
    long long tv_sec;
    unsigned int tv_nsec;
    int __reserved;
};
struct statx
{
    unsigned int stx_mask;
    unsigned int stx_blksize;
    unsigned long long stx_attributes;
    unsigned int stx_nlink;
    unsigned int stx_uid;
    unsigned int stx_gid;
    unsigned short stx_mode;
    unsigned short __spare0[1];
    unsigned long long stx_ino;
    unsigned long long stx_size;
    unsigned long long stx_blocks;
    unsigned long long stx_attributes_mask;
    struct statx_timestamp stx_atime;
    struct statx_timestamp stx_btime;
    struct statx_timestamp stx_ctime;
    struct statx_timestamp stx_mtime;
    unsigned int stx_rdev_major;
    unsigned int stx_rdev_minor;
    unsigned int stx_dev_major;
    unsigned int stx_dev_minor;
    unsigned long long stx_mnt_id;
    unsigned long long __spare2;
    unsigned long long __spare3[12];
};
struct real_pcre;
typedef struct real_pcre pcre;
struct real_pcre16;
typedef struct real_pcre16 pcre16;
struct real_pcre32;
typedef struct real_pcre32 pcre32;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct real_pcre16_jit_stack;
typedef struct real_pcre16_jit_stack pcre16_jit_stack;
struct real_pcre32_jit_stack;
typedef struct real_pcre32_jit_stack pcre32_jit_stack;
struct pcre_extra
{
    unsigned long flags;
    void* study_data;
    unsigned long match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long match_limit_recursion;
    unsigned char** mark;
    void* executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct pcre16_extra
{
    unsigned long flags;
    void* study_data;
    unsigned long match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long match_limit_recursion;
    unsigned short** mark;
    void* executable_jit;
};
typedef struct pcre16_extra pcre16_extra;
struct pcre32_extra
{
    unsigned long flags;
    void* study_data;
    unsigned long match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long match_limit_recursion;
    unsigned int** mark;
    void* executable_jit;
};
typedef struct pcre32_extra pcre32_extra;
struct pcre_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const char* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned char* mark;
};
typedef struct pcre_callout_block pcre_callout_block;
struct pcre16_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned short* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned short* mark;
};
typedef struct pcre16_callout_block pcre16_callout_block;
struct pcre32_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned int* mark;
};
typedef struct pcre32_callout_block pcre32_callout_block;
extern void* (*pcre_malloc)(unsigned long);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(unsigned long);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(unsigned long);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(unsigned long);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(unsigned long);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(unsigned long);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef pcre_jit_stack (*pcre_jit_callback)(void*);
typedef pcre16_jit_stack (*pcre16_jit_callback)(void*);
typedef pcre32_jit_stack (*pcre32_jit_callback)(void*);
struct winsize
{
    unsigned short ws_row;
    unsigned short ws_col;
    unsigned short ws_xpixel;
    unsigned short ws_ypixel;
};
struct termio
{
    unsigned short c_iflag;
    unsigned short c_oflag;
    unsigned short c_cflag;
    unsigned short c_lflag;
    unsigned char c_line;
    unsigned char c_cc[8];
};
struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};
typedef unsigned int wint_t;
typedef unsigned long wctype_t;
static const int __ISwupper=0;
static const int __ISwlower=1;
static const int __ISwalpha=2;
static const int __ISwdigit=3;
static const int __ISwxdigit=4;
static const int __ISwspace=5;
static const int __ISwprint=6;
static const int __ISwgraph=7;
static const int __ISwblank=8;
static const int __ISwcntrl=9;
static const int __ISwpunct=10;
static const int __ISwalnum=11;
static const int _ISwupper=16777216;
static const int _ISwlower=33554432;
static const int _ISwalpha=67108864;
static const int _ISwdigit=134217728;
static const int _ISwxdigit=268435456;
static const int _ISwspace=536870912;
static const int _ISwprint=1073741824;
static const int _ISwgraph=-2147483648;
static const int _ISwblank=65536;
static const int _ISwcntrl=131072;
static const int _ISwpunct=262144;
static const int _ISwalnum=524288;
typedef const int* wctrans_t;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
typedef int error_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long uint_least64_t;
typedef char int_fast8_t;
typedef long int_fast16_t;
typedef long int_fast32_t;
typedef long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long uint_fast16_t;
typedef unsigned long uint_fast32_t;
typedef unsigned long uint_fast64_t;
typedef unsigned long uintptr_t;
typedef long intmax_t;
typedef unsigned long uintmax_t;
typedef unsigned int chtype;
typedef unsigned int mmask_t;
typedef unsigned char NCURSES_BOOL;
extern unsigned int* acs_map[];
struct screen;
typedef struct screen SCREEN;
struct _win_st;
typedef struct _win_st WINDOW;
typedef unsigned int attr_t;
typedef __mbstate_t mbstate_t;
struct come_anon54
{
    unsigned int attr;
    int chars[5];
    int ext_color;
};
typedef struct come_anon54 cchar_t;
struct ldat;
struct pdat
{
    short _pad_y;
    short _pad_x;
    short _pad_top;
    short _pad_left;
    short _pad_bottom;
    short _pad_right;
};
typedef int (*NCURSES_OUTC)(int);
typedef int (*NCURSES_WINDOW_CB)(WINDOW*,void*);
typedef int (*NCURSES_SCREEN_CB)(SCREEN*,void*);
typedef int (*NCURSES_OUTC_sp)(SCREEN*,int);
extern WINDOW* curscr;
extern WINDOW* newscr;
extern WINDOW* stdscr;
extern char* ttytype[];
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int ESCDELAY;
extern int LINES;
extern int TABSIZE;
extern cchar_t* _nc_wacs;
struct come_anon55
{
    short id;
    int x;
    int y;
    int z;
    unsigned int bstate;
};
typedef struct come_anon55 MEVENT;
typedef char* string;
struct buffer
{
    char* buf;
    int len;
    int size;
};
typedef int* wstring;
struct regex_struct
{
    char* str;
    pcre* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    pcre* re;
};
typedef struct regex_struct* nregex;
struct list_item_charphp
{
    char* item;
    struct list_item_charphp* prev;
    struct list_item_charphp* next;
};
struct list_charphp
{
    struct list_item_charphp* head;
    struct list_item_charphp* tail;
    int len;
    struct list_item_charphp* it;
};
struct match_object
{
    int num;
    int start[16];
    int end[16];
};
typedef int i32;
typedef short i16;
typedef char i8;
typedef long i64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef unsigned long u64;

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
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(FILE* __stream);
FILE* tmpfile();
FILE* tmpfile64();
char* tmpnam(char* );
char* tmpnam_r(char __s);
char* tempnam(const char* __dir, const char* __pfx);
int fflush(FILE* __stream);
int fflush_unlocked(FILE* __stream);
int fcloseall();
FILE* fopen(const char* __filename, const char* __modes);
FILE* freopen(const char* __filename, const char* __modes, FILE* __stream);
FILE* fopen64(const char* __filename, const char* __modes);
FILE* freopen64(const char* __filename, const char* __modes, FILE* __stream);
FILE* fdopen(int __fd, const char* __modes);
FILE* fopencookie(void* __magic_cookie, const char* __modes, cookie_io_functions_t __io_funcs);
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
int vasprintf(char** __ptr, const char* __f, __builtin_va_list __arg);
int __asprintf(char** __ptr, const char* __fmt, ...);
int asprintf(char** __ptr, const char* __fmt, ...);
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
char* fgets_unlocked(char* __s, int __n, FILE* __stream);
long __getdelim(char** __lineptr, unsigned long* __n, int __delimiter, FILE* __stream);
long getdelim(char** __lineptr, unsigned long* __n, int __delimiter, FILE* __stream);
long getline(char** __lineptr, unsigned long* __n, FILE* __stream);
int fputs(const char* __s, FILE* __stream);
int puts(const char* __s);
int ungetc(int __c, FILE* __stream);
unsigned long fread(void* __ptr, unsigned long __size, unsigned long __n, FILE* __stream);
unsigned long fwrite(const void* __ptr, unsigned long __size, unsigned long __n, FILE* __s);
int fputs_unlocked(const char* __s, FILE* __stream);
unsigned long fread_unlocked(void* __ptr, unsigned long __size, unsigned long __n, FILE* __stream);
unsigned long fwrite_unlocked(const void* __ptr, unsigned long __size, unsigned long __n, FILE* __stream);
int fseek(FILE* __stream, long __off, int __whence);
long ftell(FILE* __stream);
void rewind(FILE* __stream);
int fseeko(FILE* __stream, long __off, int __whence);
long ftello(FILE* __stream);
int fgetpos(FILE* __stream, fpos_t* __pos);
int fsetpos(FILE* __stream, const fpos_t* __pos);
int fseeko64(FILE* __stream, long __off, int __whence);
long ftello64(FILE* __stream);
int fgetpos64(FILE* __stream, fpos64_t* __pos);
int fsetpos64(FILE* __stream, const fpos64_t* __pos);
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
char* cuserid(char* __s);
int obstack_printf(struct obstack* __obstack, const char* __format, ...);
int obstack_vprintf(struct obstack* __obstack, const char* __format, __builtin_va_list __args);
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
float strtof32(const char* __nptr, char** __endptr);
double strtof64(const char* __nptr, char** __endptr);
double strtof32x(const char* __nptr, char** __endptr);
long double strtof64x(const char* __nptr, char** __endptr);
long strtol(const char* __nptr, char** __endptr, int __base);
unsigned long strtoul(const char* __nptr, char** __endptr, int __base);
long long strtoq(const char* __nptr, char** __endptr, int __base);
unsigned long long strtouq(const char* __nptr, char** __endptr, int __base);
long long strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long strtoull(const char* __nptr, char** __endptr, int __base);
int strfromd(char* __dest, unsigned long __size, const char* __format, double __f);
int strfromf(char* __dest, unsigned long __size, const char* __format, float __f);
int strfroml(char* __dest, unsigned long __size, const char* __format, long double __f);
int strfromf32(char* __dest, unsigned long __size, const char* __format, float __f);
int strfromf64(char* __dest, unsigned long __size, const char* __format, double __f);
int strfromf32x(char* __dest, unsigned long __size, const char* __format, double __f);
int strfromf64x(char* __dest, unsigned long __size, const char* __format, long double __f);
long strtol_l(const char* __nptr, char** __endptr, int __base, locale_t* __loc);
unsigned long strtoul_l(const char* __nptr, char** __endptr, int __base, locale_t* __loc);
long long strtoll_l(const char* __nptr, char** __endptr, int __base, locale_t* __loc);
unsigned long long strtoull_l(const char* __nptr, char** __endptr, int __base, locale_t* __loc);
double strtod_l(const char* __nptr, char** __endptr, locale_t* __loc);
float strtof_l(const char* __nptr, char** __endptr, locale_t* __loc);
long double strtold_l(const char* __nptr, char** __endptr, locale_t* __loc);
float strtof32_l(const char* __nptr, char** __endptr, locale_t* __loc);
double strtof64_l(const char* __nptr, char** __endptr, locale_t* __loc);
double strtof32x_l(const char* __nptr, char** __endptr, locale_t* __loc);
long double strtof64x_l(const char* __nptr, char** __endptr, locale_t* __loc);
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
double erand48(unsigned short __xsubi);
long lrand48();
long nrand48(unsigned short __xsubi);
long mrand48();
long jrand48(unsigned short __xsubi);
void srand48(long __seedval);
unsigned short* seed48(unsigned short __seed16v);
void lcong48(unsigned short __param);
int drand48_r(struct drand48_data* __buffer, double* __result);
int erand48_r(unsigned short __xsubi, struct drand48_data* __buffer, double* __result);
int lrand48_r(struct drand48_data* __buffer, long* __result);
int nrand48_r(unsigned short __xsubi, struct drand48_data* __buffer, long* __result);
int mrand48_r(struct drand48_data* __buffer, long* __result);
int jrand48_r(unsigned short __xsubi, struct drand48_data* __buffer, long* __result);
int srand48_r(long __seedval, struct drand48_data* __buffer);
int seed48_r(unsigned short __seed16v, struct drand48_data* __buffer);
int lcong48_r(unsigned short __param, struct drand48_data* __buffer);
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
void* bsearch(const void* __key, const void* __base, unsigned long __nmemb, unsigned long __size, int (*__compar)(const void*,const void*));
void qsort(void* __base, unsigned long __nmemb, unsigned long __size, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long __nmemb, unsigned long __size, int (*__compar)(const void*,const void*,void*), void* __arg);
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
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long __buflen);
int getpt();
int getloadavg(double __loadavg, int __nelem);
void* memcpy(void* __dest, const void* __src, unsigned long __n);
void* memmove(void* __dest, const void* __src, unsigned long __n);
void* memccpy(void* __dest, const void* __src, int __c, unsigned long __n);
void* memset(void* __s, int __c, unsigned long __n);
int memcmp(const void* __s1, const void* __s2, unsigned long __n);
int __memcmpeq(const void* __s1, const void* __s2, unsigned long __n);
void* memchr(const void* __s, int __c, unsigned long __n);
void* rawmemchr(const void* __s, int __c);
void* memrchr(const void* __s, int __c, unsigned long __n);
char* strcpy(char* __dest, const char* __src);
char* strncpy(char* __dest, const char* __src, unsigned long __n);
char* strcat(char* __dest, const char* __src);
char* strncat(char* __dest, const char* __src, unsigned long __n);
int strcmp(const char* __s1, const char* __s2);
int strncmp(const char* __s1, const char* __s2, unsigned long __n);
int strcoll(const char* __s1, const char* __s2);
unsigned long strxfrm(char* __dest, const char* __src, unsigned long __n);
int strcoll_l(const char* __s1, const char* __s2, locale_t* __l);
unsigned long strxfrm_l(char* __dest, const char* __src, unsigned long __n, locale_t* __l);
char* strdup(const char* __s);
char* strndup(const char* __string, unsigned long __n);
char* strchr(const char* __s, int __c);
char* strrchr(const char* __s, int __c);
char* strchrnul(const char* __s, int __c);
unsigned long strcspn(const char* __s, const char* __reject);
unsigned long strspn(const char* __s, const char* __accept);
char* strpbrk(const char* __s, const char* __accept);
char* strstr(const char* __haystack, const char* __needle);
char* strtok(char* __s, const char* __delim);
char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle);
void* memmem(const void* __haystack, unsigned long __haystacklen, const void* __needle, unsigned long __needlelen);
void* __mempcpy(void* __dest, const void* __src, unsigned long __n);
void* mempcpy(void* __dest, const void* __src, unsigned long __n);
unsigned long strlen(const char* __s);
unsigned long strnlen(const char* __string, unsigned long __maxlen);
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long __buflen);
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, locale_t* __l);
int bcmp(const void* __s1, const void* __s2, unsigned long __n);
void bcopy(const void* __src, void* __dest, unsigned long __n);
void bzero(void* __s, unsigned long __n);
char* index(const char* __s, int __c);
char* rindex(const char* __s, int __c);
int ffs(int __i);
int ffsl(long __l);
int ffsll(long long __ll);
int strcasecmp(const char* __s1, const char* __s2);
int strncasecmp(const char* __s1, const char* __s2, unsigned long __n);
int strcasecmp_l(const char* __s1, const char* __s2, locale_t* __loc);
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long __n, locale_t* __loc);
void explicit_bzero(void* __s, unsigned long __n);
char* strsep(char** __stringp, const char* __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __dest, const char* __src);
char* stpcpy(char* __dest, const char* __src);
char* __stpncpy(char* __dest, const char* __src, unsigned long __n);
char* stpncpy(char* __dest, const char* __src, unsigned long __n);
int strverscmp(const char* __s1, const char* __s2);
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long __n);
char* basename(const char* __filename);
unsigned int GC_get_version();
unsigned long GC_get_gc_no();
void GC_set_oom_fn(void (*)(unsigned long));
void (*GC_get_oom_fn())(unsigned long);
void GC_set_on_heap_resize(void (*)(unsigned long));
void (*GC_get_on_heap_resize())(unsigned long);
void GC_set_on_collection_event(void (*)(int));
void (*GC_get_on_collection_event())(int);
void GC_set_find_leak(int );
int GC_get_find_leak();
void GC_set_all_interior_pointers(int );
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int );
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int );
int GC_get_java_finalization();
void GC_set_finalizer_notifier(void (*)());
void (*GC_get_finalizer_notifier())();
void GC_set_dont_expand(int );
int GC_get_dont_expand();
void GC_set_full_freq(int );
int GC_get_full_freq();
void GC_set_non_gc_bytes(unsigned long );
unsigned long GC_get_non_gc_bytes();
void GC_set_no_dls(int );
int GC_get_no_dls();
void GC_set_free_space_divisor(unsigned long );
unsigned long GC_get_free_space_divisor();
void GC_set_max_retries(unsigned long );
unsigned long GC_get_max_retries();
void GC_set_dont_precollect(int );
int GC_get_dont_precollect();
void GC_set_time_limit(unsigned long );
unsigned long GC_get_time_limit();
void GC_start_performance_measurement();
unsigned long GC_get_full_gc_total_time();
void GC_set_pages_executable(int );
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(unsigned long );
unsigned long GC_get_min_bytes_allocd();
void GC_set_rate(int );
int GC_get_rate();
void GC_set_max_prior_attempts(int );
int GC_get_max_prior_attempts();
void GC_set_handle_fork(int );
void GC_atfork_prepare();
void GC_atfork_parent();
void GC_atfork_child();
void GC_init();
int GC_is_init_called();
void GC_deinit();
void* GC_malloc(unsigned long );
void* GC_malloc_atomic(unsigned long );
char* GC_strdup(const char* );
char* GC_strndup(const char* , unsigned long );
void* GC_malloc_uncollectable(unsigned long );
void* GC_malloc_stubborn(unsigned long );
void* GC_memalign(unsigned long , unsigned long );
int GC_posix_memalign(void** , unsigned long , unsigned long );
void GC_free(void* );
void GC_change_stubborn(const void* );
void GC_end_stubborn_change(const void* );
void* GC_base(void* );
int GC_is_heap_ptr(const void* );
unsigned long GC_size(const void* );
void* GC_realloc(void* , unsigned long );
int GC_expand_hp(unsigned long );
void GC_set_max_heap_size(unsigned long );
void GC_exclude_static_roots(void* , void* );
void GC_clear_roots();
void GC_add_roots(void* , void* );
void GC_remove_roots(void* , void* );
void GC_register_displacement(unsigned long );
void GC_debug_register_displacement(unsigned long );
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(int (*)());
void GC_set_stop_func(int (*)());
int (*GC_get_stop_func())();
unsigned long GC_get_heap_size();
unsigned long GC_get_free_bytes();
unsigned long GC_get_unmapped_bytes();
unsigned long GC_get_bytes_since_gc();
unsigned long GC_get_expl_freed_bytes_since_gc();
unsigned long GC_get_total_bytes();
void GC_get_heap_usage_safe(unsigned long* , unsigned long* , unsigned long* , unsigned long* , unsigned long* );
unsigned long GC_get_prof_stats(struct GC_prof_stats_s* , unsigned long );
unsigned long GC_get_size_map_at(int i);
unsigned long GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int );
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(unsigned long );
void* GC_malloc_atomic_ignore_off_page(unsigned long );
void* GC_malloc_atomic_uncollectable(unsigned long );
void* GC_debug_malloc_atomic_uncollectable(unsigned long , const char* s, int i);
void* GC_debug_malloc(unsigned long , const char* s, int i);
void* GC_debug_malloc_atomic(unsigned long , const char* s, int i);
char* GC_debug_strdup(const char* , const char* s, int i);
char* GC_debug_strndup(const char* , unsigned long , const char* s, int i);
void* GC_debug_malloc_uncollectable(unsigned long , const char* s, int i);
void* GC_debug_malloc_stubborn(unsigned long , const char* s, int i);
void* GC_debug_malloc_ignore_off_page(unsigned long , const char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(unsigned long , const char* s, int i);
void GC_debug_free(void* );
void* GC_debug_realloc(void* , unsigned long , const char* s, int i);
void GC_debug_change_stubborn(const void* );
void GC_debug_end_stubborn_change(const void* );
void* GC_debug_malloc_replacement(unsigned long );
void* GC_debug_realloc_replacement(void* , unsigned long );
void GC_register_finalizer(void* , void (*)(void*,void*), void* , void (*)(void*,void*), void** );
void GC_debug_register_finalizer(void* , void (*)(void*,void*), void* , void (*)(void*,void*), void** );
void GC_register_finalizer_ignore_self(void* , void (*)(void*,void*), void* , void (*)(void*,void*), void** );
void GC_debug_register_finalizer_ignore_self(void* , void (*)(void*,void*), void* , void (*)(void*,void*), void** );
void GC_register_finalizer_no_order(void* , void (*)(void*,void*), void* , void (*)(void*,void*), void** );
void GC_debug_register_finalizer_no_order(void* , void (*)(void*,void*), void* , void (*)(void*,void*), void** );
void GC_register_finalizer_unreachable(void* , void (*)(void*,void*), void* , void (*)(void*,void*), void** );
void GC_debug_register_finalizer_unreachable(void* , void (*)(void*,void*), void* , void (*)(void*,void*), void** );
int GC_register_disappearing_link(void** );
int GC_general_register_disappearing_link(void** , const void* );
int GC_move_disappearing_link(void** , void** );
int GC_unregister_disappearing_link(void** );
int GC_register_long_link(void** , const void* );
int GC_move_long_link(void** , void** );
int GC_unregister_long_link(void** );
void GC_set_toggleref_func(int (*)(void*));
int (*GC_get_toggleref_func())(void*);
int GC_toggleref_add(void* , int );
void GC_set_await_finalize_proc(void (*)(void*));
void (*GC_get_await_finalize_proc())(void*);
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(unsigned long );
void GC_set_warn_proc(void (*)(char*,unsigned long));
void (*GC_get_warn_proc())(char*,unsigned long);
void GC_ignore_warn_proc(char* , unsigned long );
void GC_set_log_fd(int );
void GC_set_abort_func(void (*)(const char*));
void (*GC_get_abort_func())(const char*);
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(void (*)(void*), void* );
void* GC_call_with_stack_base(void (*)(struct GC_stack_base*,void*), void* );
void* GC_do_blocking(void (*)(void*), void* );
void* GC_call_with_gc_active(void (*)(void*), void* );
int GC_get_stack_base(struct GC_stack_base* );
void* GC_same_obj(void* , void* );
void* GC_pre_incr(void** , long );
void* GC_post_incr(void** , long );
void* GC_is_visible(void* );
void* GC_is_valid_displacement(void* );
void GC_dump();
void GC_dump_named(const char* );
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* , const void* );
void GC_debug_ptr_store_and_dirty(void* , const void* );
void* GC_malloc_many(unsigned long );
void GC_register_has_static_roots_callback(int (*)(const char*,void*,unsigned long));
void GC_set_force_unmap_on_gcollect(int );
int GC_get_force_unmap_on_gcollect();
void GC_win32_free_heap();
int clone(int (*__fn)(void*), void* __child_stack, int __flags, void* __arg, ...);
int unshare(int __flags);
int sched_getcpu();
int getcpu(unsigned int* , unsigned int* );
int setns(int __fd, int __nstype);
int __sched_cpucount(unsigned long __setsize, const cpu_set_t* __setp);
cpu_set_t* __sched_cpualloc(unsigned long __count);
void __sched_cpufree(cpu_set_t* __set);
int sched_setparam(int __pid, const struct sched_param* __param);
int sched_getparam(int __pid, struct sched_param* __param);
int sched_setscheduler(int __pid, int __policy, const struct sched_param* __param);
int sched_getscheduler(int __pid);
int sched_yield();
int sched_get_priority_max(int __algorithm);
int sched_get_priority_min(int __algorithm);
int sched_rr_get_interval(int __pid, struct timespec* __t);
int sched_setaffinity(int __pid, unsigned long __cpusetsize, const cpu_set_t* __cpuset);
int sched_getaffinity(int __pid, unsigned long __cpusetsize, cpu_set_t* __cpuset);
int clock_adjtime(int __clock_id, struct timex* __utx);
long clock();
long time(long* __timer);
double difftime(long __time1, long __time0);
long mktime(struct tm* __tp);
unsigned long strftime(char* __s, unsigned long __maxsize, const char* __format, const struct tm* __tp);
char* strptime(const char* __s, const char* __fmt, struct tm* __tp);
unsigned long strftime_l(char* __s, unsigned long __maxsize, const char* __format, const struct tm* __tp, locale_t* __loc);
char* strptime_l(const char* __s, const char* __fmt, struct tm* __tp, locale_t* __loc);
struct tm* gmtime(const long* __timer);
struct tm* localtime(const long* __timer);
struct tm* gmtime_r(const long* __timer, struct tm* __tp);
struct tm* localtime_r(const long* __timer, struct tm* __tp);
char* asctime(const struct tm* __tp);
char* ctime(const long* __timer);
char* asctime_r(const struct tm* __tp, char* __buf);
char* ctime_r(const long* __timer, char* __buf);
void tzset();
long timegm(struct tm* __tp);
long timelocal(struct tm* __tp);
int dysize(int __year);
int nanosleep(const struct timespec* __requested_time, struct timespec* __remaining);
int clock_getres(int __clock_id, struct timespec* __res);
int clock_gettime(int __clock_id, struct timespec* __tp);
int clock_settime(int __clock_id, const struct timespec* __tp);
int clock_nanosleep(int __clock_id, int __flags, const struct timespec* __req, struct timespec* __rem);
int clock_getcpuclockid(int __pid, int* __clock_id);
int timer_create(int __clock_id, struct sigevent* __evp, void** __timerid);
int timer_delete(void* __timerid);
int timer_settime(void* __timerid, int __flags, const struct itimerspec* __value, struct itimerspec* __ovalue);
int timer_gettime(void* __timerid, struct itimerspec* __value);
int timer_getoverrun(void* __timerid);
int timespec_get(struct timespec* __ts, int __base);
int timespec_getres(struct timespec* __ts, int __base);
struct tm* getdate(const char* __string);
int getdate_r(const char* __string, struct tm* __resbufp);
long __sysconf(int __name);
int pthread_create(unsigned long* __newthread, const union pthread_attr_t* __attr, void* (*__start_routine)(void*), void* __arg);
void pthread_exit(void* __retval);
int pthread_join(unsigned long __th, void** __thread_return);
int pthread_tryjoin_np(unsigned long __th, void** __thread_return);
int pthread_timedjoin_np(unsigned long __th, void** __thread_return, const struct timespec* __abstime);
int pthread_clockjoin_np(unsigned long __th, void** __thread_return, int __clockid, const struct timespec* __abstime);
int pthread_detach(unsigned long __th);
unsigned long pthread_self();
int pthread_equal(unsigned long __thread1, unsigned long __thread2);
int pthread_attr_init(union pthread_attr_t* __attr);
int pthread_attr_destroy(union pthread_attr_t* __attr);
int pthread_attr_getdetachstate(const union pthread_attr_t* __attr, int* __detachstate);
int pthread_attr_setdetachstate(union pthread_attr_t* __attr, int __detachstate);
int pthread_attr_getguardsize(const union pthread_attr_t* __attr, unsigned long* __guardsize);
int pthread_attr_setguardsize(union pthread_attr_t* __attr, unsigned long __guardsize);
int pthread_attr_getschedparam(const union pthread_attr_t* __attr, struct sched_param* __param);
int pthread_attr_setschedparam(union pthread_attr_t* __attr, const struct sched_param* __param);
int pthread_attr_getschedpolicy(const union pthread_attr_t* __attr, int* __policy);
int pthread_attr_setschedpolicy(union pthread_attr_t* __attr, int __policy);
int pthread_attr_getinheritsched(const union pthread_attr_t* __attr, int* __inherit);
int pthread_attr_setinheritsched(union pthread_attr_t* __attr, int __inherit);
int pthread_attr_getscope(const union pthread_attr_t* __attr, int* __scope);
int pthread_attr_setscope(union pthread_attr_t* __attr, int __scope);
int pthread_attr_getstackaddr(const union pthread_attr_t* __attr, void** __stackaddr);
int pthread_attr_setstackaddr(union pthread_attr_t* __attr, void* __stackaddr);
int pthread_attr_getstacksize(const union pthread_attr_t* __attr, unsigned long* __stacksize);
int pthread_attr_setstacksize(union pthread_attr_t* __attr, unsigned long __stacksize);
int pthread_attr_getstack(const union pthread_attr_t* __attr, void** __stackaddr, unsigned long* __stacksize);
int pthread_attr_setstack(union pthread_attr_t* __attr, void* __stackaddr, unsigned long __stacksize);
int pthread_attr_setaffinity_np(union pthread_attr_t* __attr, unsigned long __cpusetsize, const cpu_set_t* __cpuset);
int pthread_attr_getaffinity_np(const union pthread_attr_t* __attr, unsigned long __cpusetsize, cpu_set_t* __cpuset);
int pthread_getattr_default_np(union pthread_attr_t* __attr);
int pthread_attr_setsigmask_np(union pthread_attr_t* __attr, const __sigset_t* sigmask);
int pthread_attr_getsigmask_np(const union pthread_attr_t* __attr, __sigset_t* sigmask);
int pthread_setattr_default_np(const union pthread_attr_t* __attr);
int pthread_getattr_np(unsigned long __th, union pthread_attr_t* __attr);
int pthread_setschedparam(unsigned long __target_thread, int __policy, const struct sched_param* __param);
int pthread_getschedparam(unsigned long __target_thread, int* __policy, struct sched_param* __param);
int pthread_setschedprio(unsigned long __target_thread, int __prio);
int pthread_getname_np(unsigned long __target_thread, char* __buf, unsigned long __buflen);
int pthread_setname_np(unsigned long __target_thread, const char* __name);
int pthread_getconcurrency();
int pthread_setconcurrency(int __level);
int pthread_yield();
int pthread_setaffinity_np(unsigned long __th, unsigned long __cpusetsize, const cpu_set_t* __cpuset);
int pthread_getaffinity_np(unsigned long __th, unsigned long __cpusetsize, cpu_set_t* __cpuset);
int pthread_once(int* __once_control, void (*__init_routine)());
int pthread_setcancelstate(int __state, int* __oldstate);
int pthread_setcanceltype(int __type, int* __oldtype);
int pthread_cancel(unsigned long __th);
void pthread_testcancel();
void __pthread_register_cancel(__pthread_unwind_buf_t* __buf);
void __pthread_unregister_cancel(__pthread_unwind_buf_t* __buf);
void __pthread_register_cancel_defer(__pthread_unwind_buf_t* __buf);
void __pthread_unregister_cancel_restore(__pthread_unwind_buf_t* __buf);
void __pthread_unwind_next(__pthread_unwind_buf_t* __buf);
int __sigsetjmp(struct __jmp_buf_tag __env, int __savemask);
int pthread_mutex_init(union come_anon13* __mutex, const union come_anon11* __mutexattr);
int pthread_mutex_destroy(union come_anon13* __mutex);
int pthread_mutex_trylock(union come_anon13* __mutex);
int pthread_mutex_lock(union come_anon13* __mutex);
int pthread_mutex_timedlock(union come_anon13* __mutex, const struct timespec* __abstime);
int pthread_mutex_clocklock(union come_anon13* __mutex, int __clockid, const struct timespec* __abstime);
int pthread_mutex_unlock(union come_anon13* __mutex);
int pthread_mutex_getprioceiling(const union come_anon13* __mutex, int* __prioceiling);
int pthread_mutex_setprioceiling(union come_anon13* __mutex, int __prioceiling, int* __old_ceiling);
int pthread_mutex_consistent(union come_anon13* __mutex);
int pthread_mutexattr_init(union come_anon11* __attr);
int pthread_mutexattr_destroy(union come_anon11* __attr);
int pthread_mutexattr_getpshared(const union come_anon11* __attr, int* __pshared);
int pthread_mutexattr_setpshared(union come_anon11* __attr, int __pshared);
int pthread_mutexattr_gettype(const union come_anon11* __attr, int* __kind);
int pthread_mutexattr_settype(union come_anon11* __attr, int __kind);
int pthread_mutexattr_getprotocol(const union come_anon11* __attr, int* __protocol);
int pthread_mutexattr_setprotocol(union come_anon11* __attr, int __protocol);
int pthread_mutexattr_getprioceiling(const union come_anon11* __attr, int* __prioceiling);
int pthread_mutexattr_setprioceiling(union come_anon11* __attr, int __prioceiling);
int pthread_mutexattr_getrobust(const union come_anon11* __attr, int* __robustness);
int pthread_mutexattr_setrobust(union come_anon11* __attr, int __robustness);
int pthread_rwlock_init(union come_anon15* __rwlock, const union come_anon16* __attr);
int pthread_rwlock_destroy(union come_anon15* __rwlock);
int pthread_rwlock_rdlock(union come_anon15* __rwlock);
int pthread_rwlock_tryrdlock(union come_anon15* __rwlock);
int pthread_rwlock_timedrdlock(union come_anon15* __rwlock, const struct timespec* __abstime);
int pthread_rwlock_clockrdlock(union come_anon15* __rwlock, int __clockid, const struct timespec* __abstime);
int pthread_rwlock_wrlock(union come_anon15* __rwlock);
int pthread_rwlock_trywrlock(union come_anon15* __rwlock);
int pthread_rwlock_timedwrlock(union come_anon15* __rwlock, const struct timespec* __abstime);
int pthread_rwlock_clockwrlock(union come_anon15* __rwlock, int __clockid, const struct timespec* __abstime);
int pthread_rwlock_unlock(union come_anon15* __rwlock);
int pthread_rwlockattr_init(union come_anon16* __attr);
int pthread_rwlockattr_destroy(union come_anon16* __attr);
int pthread_rwlockattr_getpshared(const union come_anon16* __attr, int* __pshared);
int pthread_rwlockattr_setpshared(union come_anon16* __attr, int __pshared);
int pthread_rwlockattr_getkind_np(const union come_anon16* __attr, int* __pref);
int pthread_rwlockattr_setkind_np(union come_anon16* __attr, int __pref);
int pthread_cond_init(union come_anon14* __cond, const union come_anon12* __cond_attr);
int pthread_cond_destroy(union come_anon14* __cond);
int pthread_cond_signal(union come_anon14* __cond);
int pthread_cond_broadcast(union come_anon14* __cond);
int pthread_cond_wait(union come_anon14* __cond, union come_anon13* __mutex);
int pthread_cond_timedwait(union come_anon14* __cond, union come_anon13* __mutex, const struct timespec* __abstime);
int pthread_cond_clockwait(union come_anon14* __cond, union come_anon13* __mutex, int __clock_id, const struct timespec* __abstime);
int pthread_condattr_init(union come_anon12* __attr);
int pthread_condattr_destroy(union come_anon12* __attr);
int pthread_condattr_getpshared(const union come_anon12* __attr, int* __pshared);
int pthread_condattr_setpshared(union come_anon12* __attr, int __pshared);
int pthread_condattr_getclock(const union come_anon12* __attr, int* __clock_id);
int pthread_condattr_setclock(union come_anon12* __attr, int __clock_id);
int pthread_spin_init(int* __lock, int __pshared);
int pthread_spin_destroy(int* __lock);
int pthread_spin_lock(int* __lock);
int pthread_spin_trylock(int* __lock);
int pthread_spin_unlock(int* __lock);
int pthread_barrier_init(union come_anon17* __barrier, const union come_anon18* __attr, unsigned int __count);
int pthread_barrier_destroy(union come_anon17* __barrier);
int pthread_barrier_wait(union come_anon17* __barrier);
int pthread_barrierattr_init(union come_anon18* __attr);
int pthread_barrierattr_destroy(union come_anon18* __attr);
int pthread_barrierattr_getpshared(const union come_anon18* __attr, int* __pshared);
int pthread_barrierattr_setpshared(union come_anon18* __attr, int __pshared);
int pthread_key_create(unsigned int* __key, void (*__destr_function)(void*));
int pthread_key_delete(unsigned int __key);
void* pthread_getspecific(unsigned int __key);
int pthread_setspecific(unsigned int __key, const void* __pointer);
int pthread_getcpuclockid(unsigned long __thread_id, int* __clock_id);
int pthread_atfork(void (*__prepare)(), void (*__parent)(), void (*__child)());
int access(const char* __name, int __type);
int euidaccess(const char* __name, int __type);
int eaccess(const char* __name, int __type);
int execveat(int __fd, const char* __path, char* __argv, char* __envp, int __flags);
int faccessat(int __fd, const char* __file, int __type, int __flag);
long lseek(int __fd, long __offset, int __whence);
long lseek64(int __fd, long __offset, int __whence);
int close(int __fd);
void closefrom(int __lowfd);
long read(int __fd, void* __buf, unsigned long __nbytes);
long write(int __fd, const void* __buf, unsigned long __n);
long pread(int __fd, void* __buf, unsigned long __nbytes, long __offset);
long pwrite(int __fd, const void* __buf, unsigned long __n, long __offset);
long pread64(int __fd, void* __buf, unsigned long __nbytes, long __offset);
long pwrite64(int __fd, const void* __buf, unsigned long __n, long __offset);
int pipe(int __pipedes);
int pipe2(int __pipedes, int __flags);
unsigned int alarm(unsigned int __seconds);
unsigned int sleep(unsigned int __seconds);
unsigned int ualarm(unsigned int __value, unsigned int __interval);
int usleep(unsigned int __useconds);
int pause();
int chown(const char* __file, unsigned int __owner, unsigned int __group);
int fchown(int __fd, unsigned int __owner, unsigned int __group);
int lchown(const char* __file, unsigned int __owner, unsigned int __group);
int fchownat(int __fd, const char* __file, unsigned int __owner, unsigned int __group, int __flag);
int chdir(const char* __path);
int fchdir(int __fd);
char* getcwd(char* __buf, unsigned long __size);
char* get_current_dir_name();
char* getwd(char* __buf);
int dup(int __fd);
int dup2(int __fd, int __fd2);
int dup3(int __fd, int __fd2, int __flags);
int execve(const char* __path, char* __argv, char* __envp);
int fexecve(int __fd, char* __argv, char* __envp);
int execv(const char* __path, char* __argv);
int execle(const char* __path, const char* __arg, ...);
int execl(const char* __path, const char* __arg, ...);
int execvp(const char* __file, char* __argv);
int execlp(const char* __file, const char* __arg, ...);
int execvpe(const char* __file, char* __argv, char* __envp);
int nice(int __inc);
void _exit(int __status);
long pathconf(const char* __path, int __name);
long fpathconf(int __fd, int __name);
long sysconf(int __name);
unsigned long confstr(int __name, char* __buf, unsigned long __len);
int getpid();
int getppid();
int getpgrp();
int __getpgid(int __pid);
int getpgid(int __pid);
int setpgid(int __pid, int __pgid);
int setpgrp();
int setsid();
int getsid(int __pid);
unsigned int getuid();
unsigned int geteuid();
unsigned int getgid();
unsigned int getegid();
int getgroups(int __size, unsigned int __list);
int group_member(unsigned int __gid);
int setuid(unsigned int __uid);
int setreuid(unsigned int __ruid, unsigned int __euid);
int seteuid(unsigned int __uid);
int setgid(unsigned int __gid);
int setregid(unsigned int __rgid, unsigned int __egid);
int setegid(unsigned int __gid);
int getresuid(unsigned int* __ruid, unsigned int* __euid, unsigned int* __suid);
int getresgid(unsigned int* __rgid, unsigned int* __egid, unsigned int* __sgid);
int setresuid(unsigned int __ruid, unsigned int __euid, unsigned int __suid);
int setresgid(unsigned int __rgid, unsigned int __egid, unsigned int __sgid);
int fork();
int vfork();
int _Fork();
char* ttyname(int __fd);
int ttyname_r(int __fd, char* __buf, unsigned long __buflen);
int isatty(int __fd);
int ttyslot();
int link(const char* __from, const char* __to);
int linkat(int __fromfd, const char* __from, int __tofd, const char* __to, int __flags);
int symlink(const char* __from, const char* __to);
long readlink(const char* __path, char* __buf, unsigned long __len);
int symlinkat(const char* __from, int __tofd, const char* __to);
long readlinkat(int __fd, const char* __path, char* __buf, unsigned long __len);
int unlink(const char* __name);
int unlinkat(int __fd, const char* __name, int __flag);
int rmdir(const char* __path);
int tcgetpgrp(int __fd);
int tcsetpgrp(int __fd, int __pgrp_id);
char* getlogin();
int getlogin_r(char* __name, unsigned long __name_len);
int setlogin(const char* __name);
int getopt(int ___argc, char** ___argv, const char* __shortopts);
int gethostname(char* __name, unsigned long __len);
int sethostname(const char* __name, unsigned long __len);
int sethostid(long __id);
int getdomainname(char* __name, unsigned long __len);
int setdomainname(const char* __name, unsigned long __len);
int vhangup();
int revoke(const char* __file);
int profil(unsigned short* __sample_buffer, unsigned long __size, unsigned long __offset, unsigned int __scale);
int acct(const char* __name);
char* getusershell();
void endusershell();
void setusershell();
int daemon(int __nochdir, int __noclose);
int chroot(const char* __path);
char* getpass(const char* __prompt);
int fsync(int __fd);
int syncfs(int __fd);
long gethostid();
void sync();
int getpagesize();
int getdtablesize();
int truncate(const char* __file, long __length);
int truncate64(const char* __file, long __length);
int ftruncate(int __fd, long __length);
int ftruncate64(int __fd, long __length);
int brk(void* __addr);
void* sbrk(long __delta);
long syscall(long __sysno, ...);
int lockf(int __fd, int __cmd, long __len);
int lockf64(int __fd, int __cmd, long __len);
long copy_file_range(int __infd, long* __pinoff, int __outfd, long* __poutoff, unsigned long __length, unsigned int __flags);
int fdatasync(int __fildes);
char* crypt(const char* __key, const char* __salt);
void swab(const void* __from, void* __to, long __n);
int getentropy(void* __buffer, unsigned long __length);
int close_range(unsigned int __fd, unsigned int __max_fd, int __flags);
int gettid();
int stat(const char* __file, struct stat* __buf);
int fstat(int __fd, struct stat* __buf);
int stat64(const char* __file, struct stat64* __buf);
int fstat64(int __fd, struct stat64* __buf);
int fstatat(int __fd, const char* __file, struct stat* __buf, int __flag);
int fstatat64(int __fd, const char* __file, struct stat64* __buf, int __flag);
int lstat(const char* __file, struct stat* __buf);
int lstat64(const char* __file, struct stat64* __buf);
int chmod(const char* __file, unsigned int __mode);
int lchmod(const char* __file, unsigned int __mode);
int fchmod(int __fd, unsigned int __mode);
int fchmodat(int __fd, const char* __file, unsigned int __mode, int __flag);
unsigned int umask(unsigned int __mask);
unsigned int getumask();
int mkdir(const char* __path, unsigned int __mode);
int mkdirat(int __fd, const char* __path, unsigned int __mode);
int mknod(const char* __path, unsigned int __mode, unsigned long __dev);
int mknodat(int __fd, const char* __path, unsigned int __mode, unsigned long __dev);
int mkfifo(const char* __path, unsigned int __mode);
int mkfifoat(int __fd, const char* __path, unsigned int __mode);
int utimensat(int __fd, const char* __path, const struct timespec __times, int __flags);
int futimens(int __fd, const struct timespec __times);
int statx(int __dirfd, const char* __path, int __flags, unsigned int __mask, struct statx* __buf);
void __assert_fail(const char* __assertion, const char* __file, unsigned int __line, const char* __function);
void __assert_perror_fail(int __errnum, const char* __file, unsigned int __line, const char* __function);
void __assert(const char* __assertion, const char* __file, int __line);
pcre* pcre_compile(const char* , int , const char** , int* , const unsigned char* );
pcre16* pcre16_compile(const unsigned short* , int , const char** , int* , const unsigned char* );
pcre32* pcre32_compile(const unsigned int* , int , const char** , int* , const unsigned char* );
pcre* pcre_compile2(const char* , int , int* , const char** , int* , const unsigned char* );
pcre16* pcre16_compile2(const unsigned short* , int , int* , const char** , int* , const unsigned char* );
pcre32* pcre32_compile2(const unsigned int* , int , int* , const char** , int* , const unsigned char* );
int pcre_config(int , void* );
int pcre16_config(int , void* );
int pcre32_config(int , void* );
int pcre_copy_named_substring(const pcre* , const char* , int* , int , const char* , char* , int );
int pcre16_copy_named_substring(const pcre16* , const unsigned short* , int* , int , const unsigned short* , unsigned short* , int );
int pcre32_copy_named_substring(const pcre32* , const unsigned int* , int* , int , const unsigned int* , unsigned int* , int );
int pcre_copy_substring(const char* , int* , int , int , char* , int );
int pcre16_copy_substring(const unsigned short* , int* , int , int , unsigned short* , int );
int pcre32_copy_substring(const unsigned int* , int* , int , int , unsigned int* , int );
int pcre_dfa_exec(const pcre* , const pcre_extra* , const char* , int , int , int , int* , int , int* , int );
int pcre16_dfa_exec(const pcre16* , const pcre16_extra* , const unsigned short* , int , int , int , int* , int , int* , int );
int pcre32_dfa_exec(const pcre32* , const pcre32_extra* , const unsigned int* , int , int , int , int* , int , int* , int );
int pcre_exec(const pcre* , const pcre_extra* , const char* , int , int , int , int* , int );
int pcre16_exec(const pcre16* , const pcre16_extra* , const unsigned short* , int , int , int , int* , int );
int pcre32_exec(const pcre32* , const pcre32_extra* , const unsigned int* , int , int , int , int* , int );
int pcre_jit_exec(const pcre* , const pcre_extra* , const char* , int , int , int , int* , int , pcre_jit_stack* );
int pcre16_jit_exec(const pcre16* , const pcre16_extra* , const unsigned short* , int , int , int , int* , int , pcre16_jit_stack* );
int pcre32_jit_exec(const pcre32* , const pcre32_extra* , const unsigned int* , int , int , int , int* , int , pcre32_jit_stack* );
void pcre_free_substring(const char* );
void pcre16_free_substring(const unsigned short* );
void pcre32_free_substring(const unsigned int* );
void pcre_free_substring_list(const char** );
void pcre16_free_substring_list(const unsigned short** );
void pcre32_free_substring_list(const unsigned int** );
int pcre_fullinfo(const pcre* , const pcre_extra* , int , void* );
int pcre16_fullinfo(const pcre16* , const pcre16_extra* , int , void* );
int pcre32_fullinfo(const pcre32* , const pcre32_extra* , int , void* );
int pcre_get_named_substring(const pcre* , const char* , int* , int , const char* , const char** );
int pcre16_get_named_substring(const pcre16* , const unsigned short* , int* , int , const unsigned short* , const unsigned short** );
int pcre32_get_named_substring(const pcre32* , const unsigned int* , int* , int , const unsigned int* , const unsigned int** );
int pcre_get_stringnumber(const pcre* , const char* );
int pcre16_get_stringnumber(const pcre16* , const unsigned short* );
int pcre32_get_stringnumber(const pcre32* , const unsigned int* );
int pcre_get_stringtable_entries(const pcre* , const char* , char** , char** );
int pcre16_get_stringtable_entries(const pcre16* , const unsigned short* , unsigned short** , unsigned short** );
int pcre32_get_stringtable_entries(const pcre32* , const unsigned int* , unsigned int** , unsigned int** );
int pcre_get_substring(const char* , int* , int , int , const char** );
int pcre16_get_substring(const unsigned short* , int* , int , int , const unsigned short** );
int pcre32_get_substring(const unsigned int* , int* , int , int , const unsigned int** );
int pcre_get_substring_list(const char* , int* , int , const char*** );
int pcre16_get_substring_list(const unsigned short* , int* , int , const unsigned short*** );
int pcre32_get_substring_list(const unsigned int* , int* , int , const unsigned int*** );
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(pcre* , int );
int pcre16_refcount(pcre16* , int );
int pcre32_refcount(pcre32* , int );
pcre_extra* pcre_study(const pcre* , int , const char** );
pcre16_extra* pcre16_study(const pcre16* , int , const char** );
pcre32_extra* pcre32_study(const pcre32* , int , const char** );
void pcre_free_study(pcre_extra* );
void pcre16_free_study(pcre16_extra* );
void pcre32_free_study(pcre32_extra* );
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(pcre* , pcre_extra* , const unsigned char* );
int pcre16_pattern_to_host_byte_order(pcre16* , pcre16_extra* , const unsigned char* );
int pcre32_pattern_to_host_byte_order(pcre32* , pcre32_extra* , const unsigned char* );
int pcre16_utf16_to_host_byte_order(unsigned short* , const unsigned short* , int , int* , int );
int pcre32_utf32_to_host_byte_order(unsigned int* , const unsigned int* , int , int* , int );
pcre_jit_stack* pcre_jit_stack_alloc(int , int );
pcre16_jit_stack* pcre16_jit_stack_alloc(int , int );
pcre32_jit_stack* pcre32_jit_stack_alloc(int , int );
void pcre_jit_stack_free(pcre_jit_stack* );
void pcre16_jit_stack_free(pcre16_jit_stack* );
void pcre32_jit_stack_free(pcre32_jit_stack* );
void pcre_assign_jit_stack(pcre_extra* , pcre_jit_stack (*)(void*), void* );
void pcre16_assign_jit_stack(pcre16_extra* , pcre16_jit_stack (*)(void*), void* );
void pcre32_assign_jit_stack(pcre32_extra* , pcre32_jit_stack (*)(void*), void* );
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
int ioctl(int __fd, unsigned long __request, ...);
char* setlocale(int __category, const char* __locale);
struct lconv* localeconv();
locale_t* newlocale(int __category_mask, const char* __locale, locale_t* __base);
locale_t* duplocale(locale_t* __dataset);
void freelocale(locale_t* __dataset);
locale_t* uselocale(locale_t* __dataset);
int iswalnum(unsigned int __wc);
int iswalpha(unsigned int __wc);
int iswcntrl(unsigned int __wc);
int iswdigit(unsigned int __wc);
int iswgraph(unsigned int __wc);
int iswlower(unsigned int __wc);
int iswprint(unsigned int __wc);
int iswpunct(unsigned int __wc);
int iswspace(unsigned int __wc);
int iswupper(unsigned int __wc);
int iswxdigit(unsigned int __wc);
int iswblank(unsigned int __wc);
unsigned long wctype(const char* __property);
int iswctype(unsigned int __wc, unsigned long __desc);
unsigned int towlower(unsigned int __wc);
unsigned int towupper(unsigned int __wc);
int* wctrans(const char* __property);
unsigned int towctrans(unsigned int __wc, int* __desc);
int iswalnum_l(unsigned int __wc, locale_t* __locale);
int iswalpha_l(unsigned int __wc, locale_t* __locale);
int iswcntrl_l(unsigned int __wc, locale_t* __locale);
int iswdigit_l(unsigned int __wc, locale_t* __locale);
int iswgraph_l(unsigned int __wc, locale_t* __locale);
int iswlower_l(unsigned int __wc, locale_t* __locale);
int iswprint_l(unsigned int __wc, locale_t* __locale);
int iswpunct_l(unsigned int __wc, locale_t* __locale);
int iswspace_l(unsigned int __wc, locale_t* __locale);
int iswupper_l(unsigned int __wc, locale_t* __locale);
int iswxdigit_l(unsigned int __wc, locale_t* __locale);
int iswblank_l(unsigned int __wc, locale_t* __locale);
unsigned long wctype_l(const char* __property, locale_t* __locale);
int iswctype_l(unsigned int __wc, unsigned long __desc, locale_t* __locale);
unsigned int towlower_l(unsigned int __wc, locale_t* __locale);
unsigned int towupper_l(unsigned int __wc, locale_t* __locale);
int* wctrans_l(const char* __property, locale_t* __locale);
unsigned int towctrans_l(unsigned int __wc, int* __desc, locale_t* __locale);
int* __errno_location();
int* wcscpy(int* __dest, const int* __src);
int* wcsncpy(int* __dest, const int* __src, unsigned long __n);
int* wcscat(int* __dest, const int* __src);
int* wcsncat(int* __dest, const int* __src, unsigned long __n);
int wcscmp(const int* __s1, const int* __s2);
int wcsncmp(const int* __s1, const int* __s2, unsigned long __n);
int wcscasecmp(const int* __s1, const int* __s2);
int wcsncasecmp(const int* __s1, const int* __s2, unsigned long __n);
int wcscasecmp_l(const int* __s1, const int* __s2, locale_t* __loc);
int wcsncasecmp_l(const int* __s1, const int* __s2, unsigned long __n, locale_t* __loc);
int wcscoll(const int* __s1, const int* __s2);
unsigned long wcsxfrm(int* __s1, const int* __s2, unsigned long __n);
int wcscoll_l(const int* __s1, const int* __s2, locale_t* __loc);
unsigned long wcsxfrm_l(int* __s1, const int* __s2, unsigned long __n, locale_t* __loc);
int* wcsdup(const int* __s);
int* wcschr(const int* __wcs, int __wc);
int* wcsrchr(const int* __wcs, int __wc);
int* wcschrnul(const int* __s, int __wc);
unsigned long wcscspn(const int* __wcs, const int* __reject);
unsigned long wcsspn(const int* __wcs, const int* __accept);
int* wcspbrk(const int* __wcs, const int* __accept);
int* wcsstr(const int* __haystack, const int* __needle);
int* wcstok(int* __s, const int* __delim, int** __ptr);
unsigned long wcslen(const int* __s);
int* wcswcs(const int* __haystack, const int* __needle);
unsigned long wcsnlen(const int* __s, unsigned long __maxlen);
int* wmemchr(const int* __s, int __c, unsigned long __n);
int wmemcmp(const int* __s1, const int* __s2, unsigned long __n);
int* wmemcpy(int* __s1, const int* __s2, unsigned long __n);
int* wmemmove(int* __s1, const int* __s2, unsigned long __n);
int* wmemset(int* __s, int __c, unsigned long __n);
int* wmempcpy(int* __s1, const int* __s2, unsigned long __n);
unsigned int btowc(int __c);
int wctob(unsigned int __c);
int mbsinit(const mbstate_t* __ps);
unsigned long mbrtowc(int* __pwc, const char* __s, unsigned long __n, mbstate_t* __p);
unsigned long wcrtomb(char* __s, int __wc, mbstate_t* __ps);
unsigned long __mbrlen(const char* __s, unsigned long __n, mbstate_t* __ps);
unsigned long mbrlen(const char* __s, unsigned long __n, mbstate_t* __ps);
unsigned long mbsrtowcs(int* __dst, const char** __src, unsigned long __len, mbstate_t* __ps);
unsigned long wcsrtombs(char* __dst, const int** __src, unsigned long __len, mbstate_t* __ps);
unsigned long mbsnrtowcs(int* __dst, const char** __src, unsigned long __nmc, unsigned long __len, mbstate_t* __ps);
unsigned long wcsnrtombs(char* __dst, const int** __src, unsigned long __nwc, unsigned long __len, mbstate_t* __ps);
int wcwidth(int __c);
int wcswidth(const int* __s, unsigned long __n);
double wcstod(const int* __nptr, int** __endptr);
float wcstof(const int* __nptr, int** __endptr);
long double wcstold(const int* __nptr, int** __endptr);
float wcstof32(const int* __nptr, int** __endptr);
double wcstof64(const int* __nptr, int** __endptr);
double wcstof32x(const int* __nptr, int** __endptr);
long double wcstof64x(const int* __nptr, int** __endptr);
long wcstol(const int* __nptr, int** __endptr, int __base);
unsigned long wcstoul(const int* __nptr, int** __endptr, int __base);
long long wcstoll(const int* __nptr, int** __endptr, int __base);
unsigned long long wcstoull(const int* __nptr, int** __endptr, int __base);
long long wcstoq(const int* __nptr, int** __endptr, int __base);
unsigned long long wcstouq(const int* __nptr, int** __endptr, int __base);
long wcstol_l(const int* __nptr, int** __endptr, int __base, locale_t* __loc);
unsigned long wcstoul_l(const int* __nptr, int** __endptr, int __base, locale_t* __loc);
long long wcstoll_l(const int* __nptr, int** __endptr, int __base, locale_t* __loc);
unsigned long long wcstoull_l(const int* __nptr, int** __endptr, int __base, locale_t* __loc);
double wcstod_l(const int* __nptr, int** __endptr, locale_t* __loc);
float wcstof_l(const int* __nptr, int** __endptr, locale_t* __loc);
long double wcstold_l(const int* __nptr, int** __endptr, locale_t* __loc);
float wcstof32_l(const int* __nptr, int** __endptr, locale_t* __loc);
double wcstof64_l(const int* __nptr, int** __endptr, locale_t* __loc);
double wcstof32x_l(const int* __nptr, int** __endptr, locale_t* __loc);
long double wcstof64x_l(const int* __nptr, int** __endptr, locale_t* __loc);
int* wcpcpy(int* __dest, const int* __src);
int* wcpncpy(int* __dest, const int* __src, unsigned long __n);
__FILE* open_wmemstream(int** __bufloc, unsigned long* __sizeloc);
int fwide(__FILE* __fp, int __mode);
int fwprintf(__FILE* __stream, const int* __format, ...);
int wprintf(const int* __format, ...);
int swprintf(int* __s, unsigned long __n, const int* __format, ...);
int vfwprintf(__FILE* __s, const int* __format, __builtin_va_list __arg);
int vwprintf(const int* __format, __builtin_va_list __arg);
int vswprintf(int* __s, unsigned long __n, const int* __format, __builtin_va_list __arg);
int fwscanf(__FILE* __stream, const int* __format, ...);
int wscanf(const int* __format, ...);
int swscanf(const int* __s, const int* __format, ...);
int __isoc99_fwscanf(__FILE* __stream, const int* __format, ...);
int __isoc99_wscanf(const int* __format, ...);
int __isoc99_swscanf(const int* __s, const int* __format, ...);
int vfwscanf(__FILE* __s, const int* __format, __builtin_va_list __arg);
int vwscanf(const int* __format, __builtin_va_list __arg);
int vswscanf(const int* __s, const int* __format, __builtin_va_list __arg);
int __isoc99_vfwscanf(__FILE* __s, const int* __format, __builtin_va_list __arg);
int __isoc99_vwscanf(const int* __format, __builtin_va_list __arg);
int __isoc99_vswscanf(const int* __s, const int* __format, __builtin_va_list __arg);
unsigned int fgetwc(__FILE* __stream);
unsigned int getwc(__FILE* __stream);
unsigned int getwchar();
unsigned int fputwc(int __wc, __FILE* __stream);
unsigned int putwc(int __wc, __FILE* __stream);
unsigned int putwchar(int __wc);
int* fgetws(int* __ws, int __n, __FILE* __stream);
int fputws(const int* __ws, __FILE* __stream);
unsigned int ungetwc(unsigned int __wc, __FILE* __stream);
unsigned int getwc_unlocked(__FILE* __stream);
unsigned int getwchar_unlocked();
unsigned int fgetwc_unlocked(__FILE* __stream);
unsigned int fputwc_unlocked(int __wc, __FILE* __stream);
unsigned int putwc_unlocked(int __wc, __FILE* __stream);
unsigned int putwchar_unlocked(int __wc);
int* fgetws_unlocked(int* __ws, int __n, __FILE* __stream);
int fputws_unlocked(const int* __ws, __FILE* __stream);
unsigned long wcsftime(int* __s, unsigned long __maxsize, const int* __format, const struct tm* __tp);
unsigned long wcsftime_l(int* __s, unsigned long __maxsize, const int* __format, const struct tm* __tp, locale_t* __loc);
int addch(const unsigned int );
int addchnstr(const unsigned int* , int );
int addchstr(const unsigned int* );
int addnstr(const char* , int );
int addstr(const char* );
int attroff(int );
int attron(int );
int attrset(int );
int attr_get(unsigned int* , short* , void* );
int attr_off(unsigned int , void* );
int attr_on(unsigned int , void* );
int attr_set(unsigned int , short , void* );
int baudrate();
int beep();
int bkgd(unsigned int );
void bkgdset(unsigned int );
int border(unsigned int , unsigned int , unsigned int , unsigned int , unsigned int , unsigned int , unsigned int , unsigned int );
int box(WINDOW* , unsigned int , unsigned int );
_Bool can_change_color();
int cbreak();
int chgat(int , unsigned int , short , const void* );
int clear();
int clearok(WINDOW* , _Bool );
int clrtobot();
int clrtoeol();
int color_content(short , short* , short* , short* );
int color_set(short , void* );
int COLOR_PAIR(int );
int copywin(const WINDOW* , WINDOW* , int , int , int , int , int , int , int );
int curs_set(int );
int def_prog_mode();
int def_shell_mode();
int delay_output(int );
int delch();
void delscreen(SCREEN* );
int delwin(WINDOW* );
int deleteln();
WINDOW* derwin(WINDOW* , int , int , int , int );
int doupdate();
WINDOW* dupwin(WINDOW* );
int echo();
int echochar(const unsigned int );
int erase();
int endwin();
char erasechar();
void filter();
int flash();
int flushinp();
unsigned int getbkgd(WINDOW* );
int getch();
int getnstr(char* , int );
int getstr(char* );
WINDOW* getwin(FILE* );
int halfdelay(int );
_Bool has_colors();
_Bool has_ic();
_Bool has_il();
int hline(unsigned int , int );
void idcok(WINDOW* , _Bool );
int idlok(WINDOW* , _Bool );
void immedok(WINDOW* , _Bool );
unsigned int inch();
int inchnstr(unsigned int* , int );
int inchstr(unsigned int* );
WINDOW* initscr();
int init_color(short , short , short , short );
int init_pair(short , short , short );
int innstr(char* , int );
int insch(unsigned int );
int insdelln(int );
int insertln();
int insnstr(const char* , int );
int insstr(const char* );
int instr(char* );
int intrflush(WINDOW* , _Bool );
_Bool isendwin();
_Bool is_linetouched(WINDOW* , int );
_Bool is_wintouched(WINDOW* );
const char* keyname(int );
int keypad(WINDOW* , _Bool );
char killchar();
int leaveok(WINDOW* , _Bool );
char* longname();
int meta(WINDOW* , _Bool );
int move(int , int );
int mvaddch(int , int , const unsigned int );
int mvaddchnstr(int , int , const unsigned int* , int );
int mvaddchstr(int , int , const unsigned int* );
int mvaddnstr(int , int , const char* , int );
int mvaddstr(int , int , const char* );
int mvchgat(int , int , int , unsigned int , short , const void* );
int mvcur(int , int , int , int );
int mvdelch(int , int );
int mvderwin(WINDOW* , int , int );
int mvgetch(int , int );
int mvgetnstr(int , int , char* , int );
int mvgetstr(int , int , char* );
int mvhline(int , int , unsigned int , int );
unsigned int mvinch(int , int );
int mvinchnstr(int , int , unsigned int* , int );
int mvinchstr(int , int , unsigned int* );
int mvinnstr(int , int , char* , int );
int mvinsch(int , int , unsigned int );
int mvinsnstr(int , int , const char* , int );
int mvinsstr(int , int , const char* );
int mvinstr(int , int , char* );
int mvprintw(int , int , const char* , ...);
int mvscanw(int , int , const char* , ...);
int mvvline(int , int , unsigned int , int );
int mvwaddch(WINDOW* , int , int , const unsigned int );
int mvwaddchnstr(WINDOW* , int , int , const unsigned int* , int );
int mvwaddchstr(WINDOW* , int , int , const unsigned int* );
int mvwaddnstr(WINDOW* , int , int , const char* , int );
int mvwaddstr(WINDOW* , int , int , const char* );
int mvwchgat(WINDOW* , int , int , int , unsigned int , short , const void* );
int mvwdelch(WINDOW* , int , int );
int mvwgetch(WINDOW* , int , int );
int mvwgetnstr(WINDOW* , int , int , char* , int );
int mvwgetstr(WINDOW* , int , int , char* );
int mvwhline(WINDOW* , int , int , unsigned int , int );
int mvwin(WINDOW* , int , int );
unsigned int mvwinch(WINDOW* , int , int );
int mvwinchnstr(WINDOW* , int , int , unsigned int* , int );
int mvwinchstr(WINDOW* , int , int , unsigned int* );
int mvwinnstr(WINDOW* , int , int , char* , int );
int mvwinsch(WINDOW* , int , int , unsigned int );
int mvwinsnstr(WINDOW* , int , int , const char* , int );
int mvwinsstr(WINDOW* , int , int , const char* );
int mvwinstr(WINDOW* , int , int , char* );
int mvwprintw(WINDOW* , int , int , const char* , ...);
int mvwscanw(WINDOW* , int , int , const char* , ...);
int mvwvline(WINDOW* , int , int , unsigned int , int );
int napms(int );
WINDOW* newpad(int , int );
SCREEN* newterm(const char* , FILE* , FILE* );
WINDOW* newwin(int , int , int , int );
int nl();
int nocbreak();
int nodelay(WINDOW* , _Bool );
int noecho();
int nonl();
void noqiflush();
int noraw();
int notimeout(WINDOW* , _Bool );
int overlay(const WINDOW* , WINDOW* );
int overwrite(const WINDOW* , WINDOW* );
int pair_content(short , short* , short* );
int PAIR_NUMBER(int );
int pechochar(WINDOW* , const unsigned int );
int pnoutrefresh(WINDOW* , int , int , int , int , int , int );
int prefresh(WINDOW* , int , int , int , int , int , int );
int printw(const char* , ...);
int putwin(WINDOW* , FILE* );
void qiflush();
int raw();
int redrawwin(WINDOW* );
int refresh();
int resetty();
int reset_prog_mode();
int reset_shell_mode();
int ripoffline(int , int (*anon_fun)(WINDOW*,int));
int savetty();
int scanw(const char* , ...);
int scr_dump(const char* );
int scr_init(const char* );
int scrl(int );
int scroll(WINDOW* );
int scrollok(WINDOW* , _Bool );
int scr_restore(const char* );
int scr_set(const char* );
int setscrreg(int , int );
SCREEN* set_term(SCREEN* );
int slk_attroff(const unsigned int );
int slk_attr_off(const unsigned int , void* );
int slk_attron(const unsigned int );
int slk_attr_on(unsigned int , void* );
int slk_attrset(const unsigned int );
unsigned int slk_attr();
int slk_attr_set(const unsigned int , short , void* );
int slk_clear();
int slk_color(short );
int slk_init(int );
char* slk_label(int );
int slk_noutrefresh();
int slk_refresh();
int slk_restore();
int slk_set(int , const char* , int );
int slk_touch();
int standout();
int standend();
int start_color();
WINDOW* subpad(WINDOW* , int , int , int , int );
WINDOW* subwin(WINDOW* , int , int , int , int );
int syncok(WINDOW* , _Bool );
unsigned int termattrs();
char* termname();
void timeout(int );
int touchline(WINDOW* , int , int );
int touchwin(WINDOW* );
int typeahead(int );
int ungetch(int );
int untouchwin(WINDOW* );
void use_env(_Bool );
void use_tioctl(_Bool );
int vidattr(unsigned int );
int vidputs(unsigned int , int (*)(int));
int vline(unsigned int , int );
int vwprintw(WINDOW* , const char* , __builtin_va_list );
int vw_printw(WINDOW* , const char* , __builtin_va_list );
int vwscanw(WINDOW* , const char* , __builtin_va_list );
int vw_scanw(WINDOW* , const char* , __builtin_va_list );
int waddch(WINDOW* , const unsigned int );
int waddchnstr(WINDOW* , const unsigned int* , int );
int waddchstr(WINDOW* , const unsigned int* );
int waddnstr(WINDOW* , const char* , int );
int waddstr(WINDOW* , const char* );
int wattron(WINDOW* , int );
int wattroff(WINDOW* , int );
int wattrset(WINDOW* , int );
int wattr_get(WINDOW* , unsigned int* , short* , void* );
int wattr_on(WINDOW* , unsigned int , void* );
int wattr_off(WINDOW* , unsigned int , void* );
int wattr_set(WINDOW* , unsigned int , short , void* );
int wbkgd(WINDOW* , unsigned int );
void wbkgdset(WINDOW* , unsigned int );
int wborder(WINDOW* , unsigned int , unsigned int , unsigned int , unsigned int , unsigned int , unsigned int , unsigned int , unsigned int );
int wchgat(WINDOW* , int , unsigned int , short , const void* );
int wclear(WINDOW* );
int wclrtobot(WINDOW* );
int wclrtoeol(WINDOW* );
int wcolor_set(WINDOW* , short , void* );
void wcursyncup(WINDOW* );
int wdelch(WINDOW* );
int wdeleteln(WINDOW* );
int wechochar(WINDOW* , const unsigned int );
int werase(WINDOW* );
int wgetch(WINDOW* );
int wgetnstr(WINDOW* , char* , int );
int wgetstr(WINDOW* , char* );
int whline(WINDOW* , unsigned int , int );
unsigned int winch(WINDOW* );
int winchnstr(WINDOW* , unsigned int* , int );
int winchstr(WINDOW* , unsigned int* );
int winnstr(WINDOW* , char* , int );
int winsch(WINDOW* , unsigned int );
int winsdelln(WINDOW* , int );
int winsertln(WINDOW* );
int winsnstr(WINDOW* , const char* , int );
int winsstr(WINDOW* , const char* );
int winstr(WINDOW* , char* );
int wmove(WINDOW* , int , int );
int wnoutrefresh(WINDOW* );
int wprintw(WINDOW* , const char* , ...);
int wredrawln(WINDOW* , int , int );
int wrefresh(WINDOW* );
int wscanw(WINDOW* , const char* , ...);
int wscrl(WINDOW* , int );
int wsetscrreg(WINDOW* , int , int );
int wstandout(WINDOW* );
int wstandend(WINDOW* );
void wsyncdown(WINDOW* );
void wsyncup(WINDOW* );
void wtimeout(WINDOW* , int );
int wtouchln(WINDOW* , int , int , int );
int wvline(WINDOW* , unsigned int , int );
int tigetflag(const char* );
int tigetnum(const char* );
char* tigetstr(const char* );
int putp(const char* );
char* tparm(const char* , ...);
char* tiparm(const char* , ...);
int getattrs(const WINDOW* );
int getcurx(const WINDOW* );
int getcury(const WINDOW* );
int getbegx(const WINDOW* );
int getbegy(const WINDOW* );
int getmaxx(const WINDOW* );
int getmaxy(const WINDOW* );
int getparx(const WINDOW* );
int getpary(const WINDOW* );
_Bool is_term_resized(int , int );
char* keybound(int , int );
const char* curses_version();
int alloc_pair(int , int );
int assume_default_colors(int , int );
int define_key(const char* , int );
int extended_color_content(int , int* , int* , int* );
int extended_pair_content(int , int* , int* );
int extended_slk_color(int );
int find_pair(int , int );
int free_pair(int );
int get_escdelay();
int init_extended_color(int , int , int , int );
int init_extended_pair(int , int , int );
int key_defined(const char* );
int keyok(int , _Bool );
void reset_color_pairs();
int resize_term(int , int );
int resizeterm(int , int );
int set_escdelay(int );
int set_tabsize(int );
int use_default_colors();
int use_extended_names(_Bool );
int use_legacy_coding(int );
int use_screen(SCREEN* , int (*)(SCREEN*,void*), void* );
int use_window(WINDOW* , int (*)(WINDOW*,void*), void* );
int wresize(WINDOW* , int , int );
void nofilter();
WINDOW* wgetparent(const WINDOW* );
_Bool is_cleared(const WINDOW* );
_Bool is_idcok(const WINDOW* );
_Bool is_idlok(const WINDOW* );
_Bool is_immedok(const WINDOW* );
_Bool is_keypad(const WINDOW* );
_Bool is_leaveok(const WINDOW* );
_Bool is_nodelay(const WINDOW* );
_Bool is_notimeout(const WINDOW* );
_Bool is_pad(const WINDOW* );
_Bool is_scrollok(const WINDOW* );
_Bool is_subwin(const WINDOW* );
_Bool is_syncok(const WINDOW* );
int wgetdelay(const WINDOW* );
int wgetscrreg(const WINDOW* , int* , int* );
SCREEN* new_prescr();
int baudrate_sp(SCREEN* );
int beep_sp(SCREEN* );
_Bool can_change_color_sp(SCREEN* );
int cbreak_sp(SCREEN* );
int curs_set_sp(SCREEN* , int );
int color_content_sp(SCREEN* , short , short* , short* , short* );
int def_prog_mode_sp(SCREEN* );
int def_shell_mode_sp(SCREEN* );
int delay_output_sp(SCREEN* , int );
int doupdate_sp(SCREEN* );
int echo_sp(SCREEN* );
int endwin_sp(SCREEN* );
char erasechar_sp(SCREEN* );
void filter_sp(SCREEN* );
int flash_sp(SCREEN* );
int flushinp_sp(SCREEN* );
WINDOW* getwin_sp(SCREEN* , FILE* );
int halfdelay_sp(SCREEN* , int );
_Bool has_colors_sp(SCREEN* );
_Bool has_ic_sp(SCREEN* );
_Bool has_il_sp(SCREEN* );
int init_color_sp(SCREEN* , short , short , short , short );
int init_pair_sp(SCREEN* , short , short , short );
int intrflush_sp(SCREEN* , WINDOW* , _Bool );
_Bool isendwin_sp(SCREEN* );
const char* keyname_sp(SCREEN* , int );
char killchar_sp(SCREEN* );
char* longname_sp(SCREEN* );
int mvcur_sp(SCREEN* , int , int , int , int );
int napms_sp(SCREEN* , int );
WINDOW* newpad_sp(SCREEN* , int , int );
SCREEN* newterm_sp(SCREEN* , const char* , FILE* , FILE* );
WINDOW* newwin_sp(SCREEN* , int , int , int , int );
int nl_sp(SCREEN* );
int nocbreak_sp(SCREEN* );
int noecho_sp(SCREEN* );
int nonl_sp(SCREEN* );
void noqiflush_sp(SCREEN* );
int noraw_sp(SCREEN* );
int pair_content_sp(SCREEN* , short , short* , short* );
void qiflush_sp(SCREEN* );
int raw_sp(SCREEN* );
int reset_prog_mode_sp(SCREEN* );
int reset_shell_mode_sp(SCREEN* );
int resetty_sp(SCREEN* );
int ripoffline_sp(SCREEN* , int , int (*anon_fun)(WINDOW*,int));
int savetty_sp(SCREEN* );
int scr_init_sp(SCREEN* , const char* );
int scr_restore_sp(SCREEN* , const char* );
int scr_set_sp(SCREEN* , const char* );
int slk_attroff_sp(SCREEN* , const unsigned int );
int slk_attron_sp(SCREEN* , const unsigned int );
int slk_attrset_sp(SCREEN* , const unsigned int );
unsigned int slk_attr_sp(SCREEN* );
int slk_attr_set_sp(SCREEN* , const unsigned int , short , void* );
int slk_clear_sp(SCREEN* );
int slk_color_sp(SCREEN* , short );
int slk_init_sp(SCREEN* , int );
char* slk_label_sp(SCREEN* , int );
int slk_noutrefresh_sp(SCREEN* );
int slk_refresh_sp(SCREEN* );
int slk_restore_sp(SCREEN* );
int slk_set_sp(SCREEN* , int , const char* , int );
int slk_touch_sp(SCREEN* );
int start_color_sp(SCREEN* );
unsigned int termattrs_sp(SCREEN* );
char* termname_sp(SCREEN* );
int typeahead_sp(SCREEN* , int );
int ungetch_sp(SCREEN* , int );
void use_env_sp(SCREEN* , _Bool );
void use_tioctl_sp(SCREEN* , _Bool );
int vidattr_sp(SCREEN* , unsigned int );
int vidputs_sp(SCREEN* , unsigned int , int (*)(SCREEN*,int));
char* keybound_sp(SCREEN* , int , int );
int alloc_pair_sp(SCREEN* , int , int );
int assume_default_colors_sp(SCREEN* , int , int );
int define_key_sp(SCREEN* , const char* , int );
int extended_color_content_sp(SCREEN* , int , int* , int* , int* );
int extended_pair_content_sp(SCREEN* , int , int* , int* );
int extended_slk_color_sp(SCREEN* , int );
int get_escdelay_sp(SCREEN* );
int find_pair_sp(SCREEN* , int , int );
int free_pair_sp(SCREEN* , int );
int init_extended_color_sp(SCREEN* , int , int , int , int );
int init_extended_pair_sp(SCREEN* , int , int , int );
_Bool is_term_resized_sp(SCREEN* , int , int );
int key_defined_sp(SCREEN* , const char* );
int keyok_sp(SCREEN* , int , _Bool );
void nofilter_sp(SCREEN* );
void reset_color_pairs_sp(SCREEN* );
int resize_term_sp(SCREEN* , int , int );
int resizeterm_sp(SCREEN* , int , int );
int set_escdelay_sp(SCREEN* , int );
int set_tabsize_sp(SCREEN* , int );
int use_default_colors_sp(SCREEN* );
int use_legacy_coding_sp(SCREEN* , int );
int add_wch(const cchar_t* );
int add_wchnstr(const cchar_t* , int );
int add_wchstr(const cchar_t* );
int addnwstr(const int* , int );
int addwstr(const int* );
int bkgrnd(const cchar_t* );
void bkgrndset(const cchar_t* );
int border_set(const cchar_t* , const cchar_t* , const cchar_t* , const cchar_t* , const cchar_t* , const cchar_t* , const cchar_t* , const cchar_t* );
int box_set(WINDOW* , const cchar_t* , const cchar_t* );
int echo_wchar(const cchar_t* );
int erasewchar(int* );
int get_wch(unsigned int* );
int get_wstr(unsigned int* );
int getbkgrnd(cchar_t* );
int getcchar(const cchar_t* , int* , unsigned int* , short* , void* );
int getn_wstr(unsigned int* , int );
int hline_set(const cchar_t* , int );
int in_wch(cchar_t* );
int in_wchnstr(cchar_t* , int );
int in_wchstr(cchar_t* );
int innwstr(int* , int );
int ins_nwstr(const int* , int );
int ins_wch(const cchar_t* );
int ins_wstr(const int* );
int inwstr(int* );
const char* key_name(int );
int killwchar(int* );
int mvadd_wch(int , int , const cchar_t* );
int mvadd_wchnstr(int , int , const cchar_t* , int );
int mvadd_wchstr(int , int , const cchar_t* );
int mvaddnwstr(int , int , const int* , int );
int mvaddwstr(int , int , const int* );
int mvget_wch(int , int , unsigned int* );
int mvget_wstr(int , int , unsigned int* );
int mvgetn_wstr(int , int , unsigned int* , int );
int mvhline_set(int , int , const cchar_t* , int );
int mvin_wch(int , int , cchar_t* );
int mvin_wchnstr(int , int , cchar_t* , int );
int mvin_wchstr(int , int , cchar_t* );
int mvinnwstr(int , int , int* , int );
int mvins_nwstr(int , int , const int* , int );
int mvins_wch(int , int , const cchar_t* );
int mvins_wstr(int , int , const int* );
int mvinwstr(int , int , int* );
int mvvline_set(int , int , const cchar_t* , int );
int mvwadd_wch(WINDOW* , int , int , const cchar_t* );
int mvwadd_wchnstr(WINDOW* , int , int , const cchar_t* , int );
int mvwadd_wchstr(WINDOW* , int , int , const cchar_t* );
int mvwaddnwstr(WINDOW* , int , int , const int* , int );
int mvwaddwstr(WINDOW* , int , int , const int* );
int mvwget_wch(WINDOW* , int , int , unsigned int* );
int mvwget_wstr(WINDOW* , int , int , unsigned int* );
int mvwgetn_wstr(WINDOW* , int , int , unsigned int* , int );
int mvwhline_set(WINDOW* , int , int , const cchar_t* , int );
int mvwin_wch(WINDOW* , int , int , cchar_t* );
int mvwin_wchnstr(WINDOW* , int , int , cchar_t* , int );
int mvwin_wchstr(WINDOW* , int , int , cchar_t* );
int mvwinnwstr(WINDOW* , int , int , int* , int );
int mvwins_nwstr(WINDOW* , int , int , const int* , int );
int mvwins_wch(WINDOW* , int , int , const cchar_t* );
int mvwins_wstr(WINDOW* , int , int , const int* );
int mvwinwstr(WINDOW* , int , int , int* );
int mvwvline_set(WINDOW* , int , int , const cchar_t* , int );
int pecho_wchar(WINDOW* , const cchar_t* );
int setcchar(cchar_t* , const int* , const unsigned int , short , const void* );
int slk_wset(int , const int* , int );
unsigned int term_attrs();
int unget_wch(const int );
int vid_attr(unsigned int , short , void* );
int vid_puts(unsigned int , short , void* , int (*)(int));
int vline_set(const cchar_t* , int );
int wadd_wch(WINDOW* , const cchar_t* );
int wadd_wchnstr(WINDOW* , const cchar_t* , int );
int wadd_wchstr(WINDOW* , const cchar_t* );
int waddnwstr(WINDOW* , const int* , int );
int waddwstr(WINDOW* , const int* );
int wbkgrnd(WINDOW* , const cchar_t* );
void wbkgrndset(WINDOW* , const cchar_t* );
int wborder_set(WINDOW* , const cchar_t* , const cchar_t* , const cchar_t* , const cchar_t* , const cchar_t* , const cchar_t* , const cchar_t* , const cchar_t* );
int wecho_wchar(WINDOW* , const cchar_t* );
int wget_wch(WINDOW* , unsigned int* );
int wget_wstr(WINDOW* , unsigned int* );
int wgetbkgrnd(WINDOW* , cchar_t* );
int wgetn_wstr(WINDOW* , unsigned int* , int );
int whline_set(WINDOW* , const cchar_t* , int );
int win_wch(WINDOW* , cchar_t* );
int win_wchnstr(WINDOW* , cchar_t* , int );
int win_wchstr(WINDOW* , cchar_t* );
int winnwstr(WINDOW* , int* , int );
int wins_nwstr(WINDOW* , const int* , int );
int wins_wch(WINDOW* , const cchar_t* );
int wins_wstr(WINDOW* , const int* );
int winwstr(WINDOW* , int* );
int* wunctrl(cchar_t* );
int wvline_set(WINDOW* , const cchar_t* , int );
unsigned int term_attrs_sp(SCREEN* );
int erasewchar_sp(SCREEN* , int* );
int killwchar_sp(SCREEN* , int* );
int unget_wch_sp(SCREEN* , const int );
int vid_attr_sp(SCREEN* , unsigned int , short , void* );
int vid_puts_sp(SCREEN* , unsigned int , short , void* , int (*)(SCREEN*,int));
int* wunctrl_sp(SCREEN* , cchar_t* );
_Bool has_mouse();
int getmouse(MEVENT* );
int ungetmouse(MEVENT* );
unsigned int mousemask(unsigned int , unsigned int* );
_Bool wenclose(const WINDOW* , int , int );
int mouseinterval(int );
_Bool wmouse_trafo(const WINDOW* , int* , int* , _Bool );
_Bool mouse_trafo(int* , int* , _Bool );
_Bool has_mouse_sp(SCREEN* );
int getmouse_sp(SCREEN* , MEVENT* );
int ungetmouse_sp(SCREEN* , MEVENT* );
unsigned int mousemask_sp(SCREEN* , unsigned int , unsigned int* );
int mouseinterval_sp(SCREEN* , int );
int mcprint(char* , int );
int has_key(int );
int has_key_sp(SCREEN* , int );
int mcprint_sp(SCREEN* , char* , int );
void _tracef(const char* , ...);
char* _traceattr(unsigned int );
char* _traceattr2(int , unsigned int );
char* _tracechar(int );
char* _tracechtype(unsigned int );
char* _tracechtype2(int , unsigned int );
char* _tracecchar_t(const cchar_t* );
char* _tracecchar_t2(int , const cchar_t* );
void trace(const unsigned int );
unsigned int curses_trace(const unsigned int );
void exit_curses(int );
const char* unctrl(unsigned int );
const char* unctrl_sp(SCREEN* , unsigned int );
char* __builtin_string(char* str);
void ncfree(void* mem);
void free_object(void* mem);
void* nccalloc(unsigned long nmemb, unsigned long size);
char* xsprintf(char* msg, ...);
char* string_reverse(char* str);
char* string_chomp(char* str);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
char* string_substring(char* str, int head, int tail);
int string_length(char* str);
unsigned int int_get_hash_key(int value);
unsigned int bool_get_hash_key(_Bool value);
_Bool bool_equals(_Bool left, _Bool right);
unsigned int string_get_hash_key(char* value);
_Bool string_equals(char* left, char* right);
int char_compare(char left, char right);
int int_compare(int left, int right);
int short_compare(short left, short right);
int long_compare(long left, long right);
struct buffer* bufferp_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int bufferp_length(struct buffer* self);
void bufferp_reset(struct buffer* self);
void bufferp_append(struct buffer* self, char* mem, unsigned long size);
void bufferp_append_char(struct buffer* self, char c);
void bufferp_append_str(struct buffer* self, char* str);
void bufferp_append_nullterminated_str(struct buffer* self, char* str);
char* bufferp_to_string(struct buffer* self);
void bufferp_append_int(struct buffer* self, int value);
void bufferp_append_long(struct buffer* self, long value);
void bufferp_append_short(struct buffer* self, short value);
void bufferp_alignment(struct buffer* self);
int bufferp_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool bool_if(_Bool self, void* parent, void (*block)(void*));
void int_times(int self, void* parent, void (*block)(void*));
int wchar_tp_compare(int* left, int* right);
int charp_compare(char* left, char* right);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xiswascii(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisascii(char c);
_Bool xisalnum(char c);
char* xbasename(char* path);
char* xextname(char* path);
char* xrealpath(char* path);
void come_fd_zero(fd_set* fds);
void come_fd_set(int fd, fd_set* fds);
int come_fd_isset(int fd, fd_set* fds);
struct regex_struct* regex_struct_clone(struct regex_struct* reg);
nregex* nregex_clone(struct regex_struct* reg);
void regex_struct_finalize(struct regex_struct* reg);
void nregex_finalize(struct regex_struct* reg);
struct regex_struct* regex(char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
char* charp_printable(char* str);
char* charp_delete(char* str, int head, int tail);
char* wchar_tp_to_string(int* wstr);
int* __builtin_wstring(char* str);
int* charp_to_wstring(char* str);
int* wchar_tp_substring(int* str, int head, int tail);
int wchar_tp_length(int* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_index_regex_count(char* self, struct regex_struct* reg, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, struct regex_struct* reg, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
int charp_rindex_regex_count(char* self, struct regex_struct* reg, int count, int default_value);
_Bool charp_match_count(char* self, struct regex_struct* reg, int count);
char* charp_sub_block(char* self, struct regex_struct* reg, void* parent, char* (*block)(void*,char*,struct list_charphp*));
char* charp_sub_block_count(char* self, struct regex_struct* reg, int count, void* parent, char* (*block)(void*,char*,struct list_charphp*));
struct list_charphp* string_scan_block(char* self, struct regex_struct* reg, void* parent, char* (*block)(void*,char*,struct list_charphp*));
struct list_charphp* charp_scan_block_count(char* self, struct regex_struct* reg, int count, void* parent, char* (*block)(void*,char*,struct list_charphp*));
struct list_charphp* charp_split_block(char* self, struct regex_struct* reg, void* parent, char* (*block)(void*,char*,struct list_charphp*));
struct list_charphp* charp_split_block_count(char* self, struct regex_struct* reg, int count, void* parent, char* (*block)(void*,char*,struct list_charphp*));
_Bool regex_structp_equals(struct regex_struct* left, struct regex_struct* right);
struct list_charphp* charp_scan_group_strings(char* self, struct regex_struct* reg, struct list_charphp* group_strings, int* num_group_string_in_regex);
struct list_charphp* FILE_readlines(FILE* f);
char* FILE_read(FILE* f);
FILE* FILE_fprintf(FILE* f, const char* msg, ...);
FILE* FILEp_fprintf(FILE* f, const char* msg, ...);
void FILE_fclose(FILE* f);
void fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,FILE*));
void charp_puts(char* self);
void charp_print(char* self);
char* charp_strip(char* self);
void charp_printf(char* self, const char* msg);
int int_printf(int self, const char* msg);
char char_putc(char self);
unsigned int wchar_t_get_hash_key(int value);
_Bool wchar_t_equals(int left, int right);
unsigned int wchar_tp_get_hash_key(int* value);
_Bool wchar_tp_equals(int* left, int* right);
unsigned int regex_structp_get_hash_key(struct regex_struct* self);
_Bool charp_match_group_strings(char* self, struct regex_struct* reg, int count, struct list_charphp* group_strings);
char* charp_operator_mult(char* str, int n);
char* string_operator_mult(char* str, int n);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
_Bool charp_operator_equals(char* left, char* right);
_Bool string_operator_equals(char* left, char* right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wstring_operator_equals(int* left, int* right);
char* charp_operator_add(char* left, char* right);
char* string_operator_add(char* left, char* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
char* regex_structp_to_string(struct regex_struct* regex);
void check_null_pointer(int sline, char* sname);
int charp_index(char* str, char* search_str, int default_value);
int charp_index_regex(char* self, struct regex_struct* reg, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
char* charp_sub(char* self, struct regex_struct* reg, char* replace);
char* charp_sub_count(char* self, struct regex_struct* reg, char* replace, int count);
struct list_charphp* charp_split_str(char* self, char* str);
static struct list_charphp* list_initialize_charph(struct list_charphp* self);
static void list_push_back_charph(struct list_charphp* self, char* item);
struct list_charphp* charp_split_char(char* self, char c);
struct list_charphp* charp_scan(char* self, struct regex_struct* reg);
struct regex_struct* charp_to_regex_flags(char* self, _Bool global, _Bool ignore_case);
struct regex_struct* charp_to_regex(char* self);
struct list_charphp* charp_split(char* self, struct regex_struct* reg);
_Bool charp_match(char* self, struct regex_struct* reg);
struct list_charphp* charp_split_maxsplit(char* self, struct regex_struct* reg, int maxsplit);
void bool_expect(_Bool self, void* parent, void (*block_)(void*));

int charp_index(char* str, char* search_str, int default_value)
{
    char* __tmp_variable1 = (strstr(str,search_str));
    char* head__1=__tmp_variable1;
    if(head__1==((void*)0)) {
                int __result_value = default_value;
        return __result_value;
    }
        int __result_value = head__1-str;
    return __result_value;
}

int charp_index_regex(char* self, struct regex_struct* reg, int default_value)
{
    int __tmp_variable2 = 16;
    int ovec_max__1=__tmp_variable2;
    int start__1[ovec_max__1];
    memset(&start__1, 0, sizeof(int));
    int end__1[ovec_max__1];
    memset(&end__1, 0, sizeof(int));
    int ovec_value__1[ovec_max__1*3];
    memset(&ovec_value__1, 0, sizeof(int));
    int __tmp_variable3 = default_value;
    int result__1=__tmp_variable3;
    int __tmp_variable4 = 0;
    int offset__1=__tmp_variable4;
    const char* err__1;
    memset(&err__1, 0, sizeof(const char*));
    int erro_ofs__1;
    memset(&erro_ofs__1, 0, sizeof(int));
    int __tmp_variable5 = reg->options;
    int options__1=__tmp_variable5;
    char* __tmp_variable6 = reg->str;
    char* str__1=__tmp_variable6;
    pcre* __tmp_variable7 = reg->re;
    pcre* re__1=__tmp_variable7;
    while (1) {
        int __tmp_variable8 = 2097152;
        int options__2=__tmp_variable8;
        int __tmp_variable9 = (strlen(self));
        int len__2=__tmp_variable9;
        int __tmp_variable10 = (pcre_exec(re__1,((pcre_extra*)0),self,len__2,offset__1,options__2,ovec_value__1,ovec_max__1*3));
        int regex_result__2=__tmp_variable10;
        {
            int __tmp_variable11 = 0;
            int i__3=__tmp_variable11;
            while(i__3<ovec_max__1) {
                start__1[i__3]=ovec_value__1[i__3*2];
                int __tmp_variable12 = i__3+1;
                i__3=__tmp_variable12;
            }
        }
        {
            int __tmp_variable13 = 0;
            int i__3=__tmp_variable13;
            while(i__3<ovec_max__1) {
                end__1[i__3]=ovec_value__1[i__3*2+1];
                int __tmp_variable14 = i__3+1;
                i__3=__tmp_variable14;
            }
        }
        if(regex_result__2==1||regex_result__2>0) {
            int __tmp_variable15 = start__1[0];
            result__1=__tmp_variable15;
            break;
        }
        {
            break;
        }
    }
        int __result_value = result__1;
    return __result_value;
}

char* charp_replace(char* self, int index, char c)
{
void* right_value0;
void* right_value1;
    int __tmp_variable16 = (strlen(self));
    int len__1=__tmp_variable16;
    if((strcmp(self,""))==0) {
                char* __result_value = (right_value0 = (__builtin_string(self)));
        return __result_value;
    }
    if(index<0) {
        int __tmp_variable17 = index+len__1;
        index=__tmp_variable17;
    }
    if(index>=len__1) {
        int __tmp_variable18 = len__1-1;
        index=__tmp_variable18;
    }
    if(index<0) {
        int __tmp_variable19 = 0;
        index=__tmp_variable19;
    }
    self[index]=c;
        char* __result_value = (right_value1 = (__builtin_string(self)));
    return __result_value;
}

char* charp_multiply(char* str, int n)
{
void* right_value2;
    int __tmp_variable20 = (strlen(str))*n+1;
    int len__1=__tmp_variable20;
    char* __tmp_variable21 = (right_value2 = igc_calloc(len__1,1));
    char* result__1=__tmp_variable21;
    result__1[0]='\0';
    {
        int __tmp_variable22 = 0;
        int i__2=__tmp_variable22;
        while(i__2<n) {
            (strcat(result__1,str));
            int __tmp_variable23 = i__2+1;
            i__2=__tmp_variable23;
        }
    }
        char* __result_value = result__1;
    return __result_value;
}

char* charp_sub(char* self, struct regex_struct* reg, char* replace)
{
void* right_value3;
void* right_value4;
char* inline_result_variable1;
void* right_value5;
void* right_value6;
char* inline_result_variable2;
void* right_value7;
void* right_value8;
char* inline_result_variable3;
void* right_value9;
void* right_value10;
void* right_value11;
    int __tmp_variable24 = 0;
    int offset__1=__tmp_variable24;
    int __tmp_variable25 = 16;
    int ovec_max__1=__tmp_variable25;
    int start__1[ovec_max__1];
    memset(&start__1, 0, sizeof(int));
    int end__1[ovec_max__1];
    memset(&end__1, 0, sizeof(int));
    int ovec_value__1[ovec_max__1*3];
    memset(&ovec_value__1, 0, sizeof(int));
    const char* err__1;
    memset(&err__1, 0, sizeof(const char*));
    int erro_ofs__1;
    memset(&erro_ofs__1, 0, sizeof(int));
    int __tmp_variable26 = reg->options;
    int options__1=__tmp_variable26;
    char* __tmp_variable27 = reg->str;
    char* str__1=__tmp_variable27;
    pcre* __tmp_variable28 = reg->re;
    pcre* re__1=__tmp_variable28;
    struct buffer* __tmp_variable29 = (right_value4 = (bufferp_initialize((right_value3 = igc_calloc(1,16)))));
    struct buffer* result__1=__tmp_variable29;
    while (1) {
        int __tmp_variable30 = 2097152;
        int options__2=__tmp_variable30;
        int __tmp_variable31 = (strlen(self));
        int len__2=__tmp_variable31;
        int __tmp_variable32 = (pcre_exec(re__1,((pcre_extra*)0),self,len__2,offset__1,options__2,ovec_value__1,ovec_max__1*3));
        int regex_result__2=__tmp_variable32;
        {
            int __tmp_variable33 = 0;
            int i__3=__tmp_variable33;
            while(i__3<ovec_max__1) {
                start__1[i__3]=ovec_value__1[i__3*2];
                int __tmp_variable34 = i__3+1;
                i__3=__tmp_variable34;
            }
        }
        {
            int __tmp_variable35 = 0;
            int i__3=__tmp_variable35;
            while(i__3<ovec_max__1) {
                end__1[i__3]=ovec_value__1[i__3*2+1];
                int __tmp_variable36 = i__3+1;
                i__3=__tmp_variable36;
            }
        }
        if(regex_result__2==1) {
            {
            char* _inline_str1 = self;
            int _inline_head1 = offset__1;
            int _inline_tail1 = start__1[0];
                                inline_result_variable1 = (right_value5 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                goto inline_func_end_label1;
            
inline_func_end_label1:
            right_value6 = inline_result_variable1;
            (void)0;
}
            char* __tmp_variable37 = inline_result_variable1;
            char* str__3=__tmp_variable37;
            (bufferp_append_str(result__1,str__3));
            (bufferp_append_str(result__1,replace));
            if(offset__1==end__1[0]) {
                int __tmp_variable38 = offset__1+1;
                offset__1=__tmp_variable38;
            }
            else {
                int __tmp_variable39 = end__1[0];
                offset__1=__tmp_variable39;
            }
            if(!reg->global) {
                {
                char* _inline_str1 = self;
                int _inline_head1 = offset__1;
                int _inline_tail1 = -1;
                                        inline_result_variable2 = (right_value7 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                    goto inline_func_end_label2;
                
inline_func_end_label2:
                right_value8 = inline_result_variable2;
                (void)0;
}
                char* __tmp_variable40 = inline_result_variable2;
                char* str__4=__tmp_variable40;
                (bufferp_append_str(result__1,str__4));
                igc_decrement_ref_count(str__4);
                igc_decrement_ref_count(str__3);
                break;
                igc_decrement_ref_count(str__4);
            }
            igc_decrement_ref_count(str__3);
        }
        else {
            {
            char* _inline_str1 = self;
            int _inline_head1 = offset__1;
            int _inline_tail1 = -1;
                                inline_result_variable3 = (right_value9 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                goto inline_func_end_label3;
            
inline_func_end_label3:
            right_value10 = inline_result_variable3;
            (void)0;
}
            char* __tmp_variable41 = inline_result_variable3;
            char* str__3=__tmp_variable41;
            (bufferp_append_str(result__1,str__3));
            igc_decrement_ref_count(str__3);
            break;
            igc_decrement_ref_count(str__3);
        }
    }
        char* __result_value = (right_value11 = (bufferp_to_string(result__1)));
    call_finalizer(buffer_finalize,result__1,0);
    return __result_value;
}

char* charp_sub_count(char* self, struct regex_struct* reg, char* replace, int count)
{
void* right_value12;
void* right_value13;
char* inline_result_variable4;
void* right_value14;
void* right_value15;
char* inline_result_variable5;
void* right_value16;
void* right_value17;
char* inline_result_variable6;
void* right_value18;
void* right_value19;
char* inline_result_variable7;
void* right_value20;
void* right_value21;
void* right_value22;
    int __tmp_variable42 = 0;
    int offset__1=__tmp_variable42;
    int __tmp_variable43 = 16;
    int ovec_max__1=__tmp_variable43;
    int start__1[ovec_max__1];
    memset(&start__1, 0, sizeof(int));
    int end__1[ovec_max__1];
    memset(&end__1, 0, sizeof(int));
    int ovec_value__1[ovec_max__1*3];
    memset(&ovec_value__1, 0, sizeof(int));
    const char* err__1;
    memset(&err__1, 0, sizeof(const char*));
    int erro_ofs__1;
    memset(&erro_ofs__1, 0, sizeof(int));
    int __tmp_variable44 = reg->options;
    int options__1=__tmp_variable44;
    char* __tmp_variable45 = reg->str;
    char* str__1=__tmp_variable45;
    pcre* __tmp_variable46 = reg->re;
    pcre* re__1=__tmp_variable46;
    struct buffer* __tmp_variable47 = (right_value13 = (bufferp_initialize((right_value12 = igc_calloc(1,16)))));
    struct buffer* result__1=__tmp_variable47;
    int __tmp_variable48 = 0;
    int n__1=__tmp_variable48;
    while (1) {
        int __tmp_variable49 = 2097152;
        int options__2=__tmp_variable49;
        int __tmp_variable50 = (strlen(self));
        int len__2=__tmp_variable50;
        int __tmp_variable51 = (pcre_exec(re__1,((pcre_extra*)0),self,len__2,offset__1,options__2,ovec_value__1,ovec_max__1*3));
        int regex_result__2=__tmp_variable51;
        {
            int __tmp_variable52 = 0;
            int i__3=__tmp_variable52;
            while(i__3<ovec_max__1) {
                start__1[i__3]=ovec_value__1[i__3*2];
                int __tmp_variable53 = i__3+1;
                i__3=__tmp_variable53;
            }
        }
        {
            int __tmp_variable54 = 0;
            int i__3=__tmp_variable54;
            while(i__3<ovec_max__1) {
                end__1[i__3]=ovec_value__1[i__3*2+1];
                int __tmp_variable55 = i__3+1;
                i__3=__tmp_variable55;
            }
        }
        if(regex_result__2==1) {
            int __tmp_variable56 = n__1+1;
            n__1=__tmp_variable56;
            {
            char* _inline_str1 = self;
            int _inline_head1 = offset__1;
            int _inline_tail1 = start__1[0];
                                inline_result_variable4 = (right_value14 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                goto inline_func_end_label4;
            
inline_func_end_label4:
            right_value15 = inline_result_variable4;
            (void)0;
}
            char* __tmp_variable57 = inline_result_variable4;
            char* str__3=__tmp_variable57;
            (bufferp_append_str(result__1,str__3));
            (bufferp_append_str(result__1,replace));
            if(offset__1==end__1[0]) {
                int __tmp_variable58 = offset__1+1;
                offset__1=__tmp_variable58;
            }
            else {
                int __tmp_variable59 = end__1[0];
                offset__1=__tmp_variable59;
            }
            if(!reg->global) {
                {
                char* _inline_str1 = self;
                int _inline_head1 = offset__1;
                int _inline_tail1 = -1;
                                        inline_result_variable5 = (right_value16 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                    goto inline_func_end_label5;
                
inline_func_end_label5:
                right_value17 = inline_result_variable5;
                (void)0;
}
                char* __tmp_variable60 = inline_result_variable5;
                char* str__4=__tmp_variable60;
                (bufferp_append_str(result__1,str__4));
                igc_decrement_ref_count(str__4);
                igc_decrement_ref_count(str__3);
                break;
                igc_decrement_ref_count(str__4);
            }
            if(n__1==count) {
                {
                char* _inline_str1 = self;
                int _inline_head1 = offset__1;
                int _inline_tail1 = -1;
                                        inline_result_variable6 = (right_value18 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                    goto inline_func_end_label6;
                
inline_func_end_label6:
                right_value19 = inline_result_variable6;
                (void)0;
}
                char* __tmp_variable61 = inline_result_variable6;
                char* str__4=__tmp_variable61;
                (bufferp_append_str(result__1,str__4));
                igc_decrement_ref_count(str__4);
                igc_decrement_ref_count(str__3);
                break;
                igc_decrement_ref_count(str__4);
            }
            igc_decrement_ref_count(str__3);
        }
        else {
            {
            char* _inline_str1 = self;
            int _inline_head1 = offset__1;
            int _inline_tail1 = -1;
                                inline_result_variable7 = (right_value20 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                goto inline_func_end_label7;
            
inline_func_end_label7:
            right_value21 = inline_result_variable7;
            (void)0;
}
            char* __tmp_variable62 = inline_result_variable7;
            char* str__3=__tmp_variable62;
            (bufferp_append_str(result__1,str__3));
            igc_decrement_ref_count(str__3);
            break;
            igc_decrement_ref_count(str__3);
        }
    }
        char* __result_value = (right_value22 = (bufferp_to_string(result__1)));
    call_finalizer(buffer_finalize,result__1,0);
    return __result_value;
}

struct list_charphp* charp_split_str(char* self, char* str)
{
void* right_value23;
void* right_value24;
void* right_value25;
void* right_value26;
int inline_result_variable8;
void* right_value27;
void* right_value31;
    struct list_charphp* __tmp_variable63 = (right_value24 = (list_initialize_charph((right_value23 = igc_calloc(1,32)))));
    struct list_charphp* result__1=__tmp_variable63;
    struct buffer* __tmp_variable64 = (right_value26 = (bufferp_initialize((right_value25 = igc_calloc(1,16)))));
    struct buffer* buf__1=__tmp_variable64;
    {
        int __tmp_variable65 = 0;
        int i__2=__tmp_variable65;
        {
        char* _inline_str1 = self;
                        inline_result_variable8 = (string_length(_inline_str1));
            goto inline_func_end_label8;
        
inline_func_end_label8:
        (void)0;
}
        while(i__2<inline_result_variable8) {
            if((strstr(self+i__2,str))==self+i__2) {
                (list_push_back_charph(result__1,(right_value27 = (__builtin_string(buf__1->buf)))));
                (bufferp_reset(buf__1));
                int __tmp_variable69 = i__2+(strlen(str))-1;
                i__2=__tmp_variable69;
            }
            else {
                (bufferp_append_char(buf__1,self[i__2]));
            }
            int __tmp_variable70 = i__2+1;
            i__2=__tmp_variable70;
        }
    }
    if((bufferp_length(buf__1))!=0) {
        (list_push_back_charph(result__1,(right_value31 = (__builtin_string(buf__1->buf)))));
    }
        struct list_charphp* __result_value = result__1;
    call_finalizer(buffer_finalize,buf__1,0);
    return __result_value;
}

static struct list_charphp* list_initialize_charph(struct list_charphp* self)
{
    struct list_item_charphp* __tmp_store_field1 = ((void*)0);
    self->head=__tmp_store_field1;
    struct list_item_charphp* __tmp_store_field2 = ((void*)0);
    self->tail=__tmp_store_field2;
    int __tmp_store_field3 = 0;
    self->len=__tmp_store_field3;
        struct list_charphp* __result_value = self;
    return __result_value;
}

static void list_push_back_charph(struct list_charphp* self, char* item)
{
void* right_value28;
void* right_value29;
void* right_value30;
    if(self->len==0) {
        struct list_item_charphp* __tmp_variable66 = (right_value28 = igc_calloc(1,24));
        struct list_item_charphp* litem__3=__tmp_variable66;
        struct list_item_charphp* __tmp_store_field4 = ((void*)0);
        litem__3->prev=__tmp_store_field4;
        struct list_item_charphp* __tmp_store_field5 = ((void*)0);
        litem__3->next=__tmp_store_field5;
        char* __tmp_store_field6 = item;
        litem__3->item=__tmp_store_field6;
        struct list_item_charphp* __tmp_store_field7 = litem__3;
        self->tail=__tmp_store_field7;
        struct list_item_charphp* __tmp_store_field8 = litem__3;
        self->head=__tmp_store_field8;
    }
    else if(self->len==1) {
        struct list_item_charphp* __tmp_variable67 = (right_value29 = igc_calloc(1,24));
        struct list_item_charphp* litem__3=__tmp_variable67;
        struct list_item_charphp* __tmp_store_field9 = self->head;
        litem__3->prev=__tmp_store_field9;
        struct list_item_charphp* __tmp_store_field10 = ((void*)0);
        litem__3->next=__tmp_store_field10;
        char* __tmp_store_field11 = item;
        litem__3->item=__tmp_store_field11;
        struct list_item_charphp* __tmp_store_field12 = litem__3;
        self->tail=__tmp_store_field12;
        struct list_item_charphp* __tmp_store_field13 = litem__3;
        self->head->next=__tmp_store_field13;
    }
    else {
        struct list_item_charphp* __tmp_variable68 = (right_value30 = igc_calloc(1,24));
        struct list_item_charphp* litem__3=__tmp_variable68;
        struct list_item_charphp* __tmp_store_field14 = self->tail;
        litem__3->prev=__tmp_store_field14;
        struct list_item_charphp* __tmp_store_field15 = ((void*)0);
        litem__3->next=__tmp_store_field15;
        char* __tmp_store_field16 = item;
        litem__3->item=__tmp_store_field16;
        struct list_item_charphp* __tmp_store_field17 = litem__3;
        self->tail->next=__tmp_store_field17;
        struct list_item_charphp* __tmp_store_field18 = litem__3;
        self->tail=__tmp_store_field18;
    }
    int __tmp_store_field19 = self->len+1;
    self->len=__tmp_store_field19;
}

struct list_charphp* charp_split_char(char* self, char c)
{
void* right_value32;
void* right_value33;
void* right_value34;
void* right_value35;
int inline_result_variable9;
void* right_value36;
void* right_value37;
    struct list_charphp* __tmp_variable71 = (right_value33 = (list_initialize_charph((right_value32 = igc_calloc(1,32)))));
    struct list_charphp* result__1=__tmp_variable71;
    struct buffer* __tmp_variable72 = (right_value35 = (bufferp_initialize((right_value34 = igc_calloc(1,16)))));
    struct buffer* str__1=__tmp_variable72;
    {
        int __tmp_variable73 = 0;
        int i__2=__tmp_variable73;
        {
        char* _inline_str1 = self;
                        inline_result_variable9 = (string_length(_inline_str1));
            goto inline_func_end_label9;
        
inline_func_end_label9:
        (void)0;
}
        while(i__2<inline_result_variable9) {
            if(self[i__2]==c) {
                (list_push_back_charph(result__1,(right_value36 = (__builtin_string(str__1->buf)))));
                (bufferp_reset(str__1));
            }
            else {
                (bufferp_append_char(str__1,self[i__2]));
            }
            int __tmp_variable74 = i__2+1;
            i__2=__tmp_variable74;
        }
    }
    if((bufferp_length(str__1))!=0) {
        (list_push_back_charph(result__1,(right_value37 = (__builtin_string(str__1->buf)))));
    }
        struct list_charphp* __result_value = result__1;
    call_finalizer(buffer_finalize,str__1,0);
    return __result_value;
}

struct list_charphp* charp_scan(char* self, struct regex_struct* reg)
{
void* right_value38;
void* right_value39;
char* inline_result_variable10;
void* right_value40;
void* right_value41;
char* inline_result_variable11;
void* right_value42;
void* right_value43;
char* inline_result_variable12;
void* right_value44;
void* right_value45;
    struct list_charphp* __tmp_variable75 = (right_value39 = (list_initialize_charph((right_value38 = igc_calloc(1,32)))));
    struct list_charphp* result__1=__tmp_variable75;
    int __tmp_variable76 = 0;
    int offset__1=__tmp_variable76;
    int __tmp_variable77 = 16;
    int ovec_max__1=__tmp_variable77;
    int start__1[ovec_max__1];
    memset(&start__1, 0, sizeof(int));
    int end__1[ovec_max__1];
    memset(&end__1, 0, sizeof(int));
    int ovec_value__1[ovec_max__1*3];
    memset(&ovec_value__1, 0, sizeof(int));
    const char* err__1;
    memset(&err__1, 0, sizeof(const char*));
    int erro_ofs__1;
    memset(&erro_ofs__1, 0, sizeof(int));
    int __tmp_variable78 = reg->options;
    int options__1=__tmp_variable78;
    char* __tmp_variable79 = reg->str;
    char* str__1=__tmp_variable79;
    pcre* __tmp_variable80 = reg->re;
    pcre* re__1=__tmp_variable80;
    while (1) {
        int __tmp_variable81 = 2097152;
        int options__2=__tmp_variable81;
        int __tmp_variable82 = (strlen(self));
        int len__2=__tmp_variable82;
        int __tmp_variable83 = (pcre_exec(re__1,((pcre_extra*)0),self,len__2,offset__1,options__2,ovec_value__1,ovec_max__1*3));
        int regex_result__2=__tmp_variable83;
        {
            int __tmp_variable84 = 0;
            int i__3=__tmp_variable84;
            while(i__3<ovec_max__1) {
                start__1[i__3]=ovec_value__1[i__3*2];
                int __tmp_variable85 = i__3+1;
                i__3=__tmp_variable85;
            }
        }
        {
            int __tmp_variable86 = 0;
            int i__3=__tmp_variable86;
            while(i__3<ovec_max__1) {
                end__1[i__3]=ovec_value__1[i__3*2+1];
                int __tmp_variable87 = i__3+1;
                i__3=__tmp_variable87;
            }
        }
        if(regex_result__2==1) {
            {
            char* _inline_str1 = self;
            int _inline_head1 = start__1[0];
            int _inline_tail1 = end__1[0];
                                inline_result_variable10 = (right_value40 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                goto inline_func_end_label10;
            
inline_func_end_label10:
            right_value41 = inline_result_variable10;
            (void)0;
}
            char* __tmp_variable88 = inline_result_variable10;
            char* str__3=__tmp_variable88;
            igc_increment_ref_count(str__3);
            (list_push_back_charph(result__1,str__3));
            if(offset__1==end__1[0]) {
                int __tmp_variable89 = offset__1+1;
                offset__1=__tmp_variable89;
            }
            else {
                int __tmp_variable90 = end__1[0];
                offset__1=__tmp_variable90;
            }
            igc_decrement_ref_count(str__3);
        }
        else if(regex_result__2>1) {
            {
            char* _inline_str1 = self;
            int _inline_head1 = start__1[0];
            int _inline_tail1 = end__1[0];
                                inline_result_variable11 = (right_value42 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                goto inline_func_end_label11;
            
inline_func_end_label11:
            right_value43 = inline_result_variable11;
            (void)0;
}
            char* __tmp_variable91 = inline_result_variable11;
            char* str__3=__tmp_variable91;
            igc_increment_ref_count(str__3);
            (list_push_back_charph(result__1,str__3));
            if(offset__1==end__1[0]) {
                int __tmp_variable92 = offset__1+1;
                offset__1=__tmp_variable92;
            }
            else {
                int __tmp_variable93 = end__1[0];
                offset__1=__tmp_variable93;
            }
            {
                int __tmp_variable94 = 1;
                int i__4=__tmp_variable94;
                while(i__4<regex_result__2) {
                    {
                    char* _inline_str1 = self;
                    int _inline_head1 = start__1[i__4];
                    int _inline_tail1 = end__1[i__4];
                                                inline_result_variable12 = (right_value44 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                        goto inline_func_end_label12;
                    
inline_func_end_label12:
                    right_value45 = inline_result_variable12;
                    (void)0;
}
                    char* __tmp_variable95 = inline_result_variable12;
                    char* match_string__5=__tmp_variable95;
                    igc_increment_ref_count(match_string__5);
                    (list_push_back_charph(result__1,match_string__5));
                    igc_decrement_ref_count(match_string__5);
                    int __tmp_variable96 = i__4+1;
                    i__4=__tmp_variable96;
                }
            }
            igc_decrement_ref_count(str__3);
        }
        else {
            break;
        }
    }
        struct list_charphp* __result_value = result__1;
    return __result_value;
}

struct regex_struct* charp_to_regex_flags(char* self, _Bool global, _Bool ignore_case)
{
void* right_value46;
        struct regex_struct* __result_value = (right_value46 = (regex(self,ignore_case,0,global,0,0,0,0,0)));
    return __result_value;
}

struct regex_struct* charp_to_regex(char* self)
{
void* right_value47;
        struct regex_struct* __result_value = (right_value47 = (regex(self,0,0,0,0,0,0,0,0)));
    return __result_value;
}

struct list_charphp* charp_split(char* self, struct regex_struct* reg)
{
void* right_value48;
void* right_value49;
char* inline_result_variable13;
void* right_value50;
void* right_value51;
char* inline_result_variable14;
void* right_value52;
void* right_value53;
char* inline_result_variable15;
void* right_value54;
void* right_value55;
int inline_result_variable16;
char* inline_result_variable17;
void* right_value56;
void* right_value57;
    const char* err__1;
    memset(&err__1, 0, sizeof(const char*));
    int erro_ofs__1;
    memset(&erro_ofs__1, 0, sizeof(int));
    int __tmp_variable97 = reg->options;
    int options__1=__tmp_variable97;
    char* __tmp_variable98 = reg->str;
    char* str__1=__tmp_variable98;
    pcre* __tmp_variable99 = reg->re;
    pcre* re__1=__tmp_variable99;
    struct list_charphp* __tmp_variable100 = (right_value49 = (list_initialize_charph((right_value48 = igc_calloc(1,32)))));
    struct list_charphp* result__1=__tmp_variable100;
    int __tmp_variable101 = 0;
    int offset__1=__tmp_variable101;
    int __tmp_variable102 = 16;
    int ovec_max__1=__tmp_variable102;
    int start__1[ovec_max__1];
    memset(&start__1, 0, sizeof(int));
    int end__1[ovec_max__1];
    memset(&end__1, 0, sizeof(int));
    int ovec_value__1[ovec_max__1*3];
    memset(&ovec_value__1, 0, sizeof(int));
    while (1) {
        int __tmp_variable103 = 2097152;
        int options__2=__tmp_variable103;
        int __tmp_variable104 = (strlen(self));
        int len__2=__tmp_variable104;
        int __tmp_variable105 = (pcre_exec(re__1,((pcre_extra*)0),self,len__2,offset__1,options__2,ovec_value__1,ovec_max__1*3));
        int regex_result__2=__tmp_variable105;
        {
            int __tmp_variable106 = 0;
            int i__3=__tmp_variable106;
            while(i__3<ovec_max__1) {
                start__1[i__3]=ovec_value__1[i__3*2];
                int __tmp_variable107 = i__3+1;
                i__3=__tmp_variable107;
            }
        }
        {
            int __tmp_variable108 = 0;
            int i__3=__tmp_variable108;
            while(i__3<ovec_max__1) {
                end__1[i__3]=ovec_value__1[i__3*2+1];
                int __tmp_variable109 = i__3+1;
                i__3=__tmp_variable109;
            }
        }
        if(regex_result__2==1) {
            {
            char* _inline_str1 = self;
            int _inline_head1 = offset__1;
            int _inline_tail1 = start__1[0];
                                inline_result_variable13 = (right_value50 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                goto inline_func_end_label13;
            
inline_func_end_label13:
            right_value51 = inline_result_variable13;
            (void)0;
}
            char* __tmp_variable110 = inline_result_variable13;
            char* str__3=__tmp_variable110;
            igc_increment_ref_count(str__3);
            (list_push_back_charph(result__1,str__3));
            if(offset__1==end__1[0]) {
                int __tmp_variable111 = offset__1+1;
                offset__1=__tmp_variable111;
            }
            else {
                int __tmp_variable112 = end__1[0];
                offset__1=__tmp_variable112;
            }
            igc_decrement_ref_count(str__3);
        }
        else if(regex_result__2>1) {
            {
            char* _inline_str1 = self;
            int _inline_head1 = offset__1;
            int _inline_tail1 = start__1[0];
                                inline_result_variable14 = (right_value52 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                goto inline_func_end_label14;
            
inline_func_end_label14:
            right_value53 = inline_result_variable14;
            (void)0;
}
            char* __tmp_variable113 = inline_result_variable14;
            char* str__3=__tmp_variable113;
            igc_increment_ref_count(str__3);
            (list_push_back_charph(result__1,str__3));
            if(offset__1==end__1[0]) {
                int __tmp_variable114 = offset__1+1;
                offset__1=__tmp_variable114;
            }
            else {
                int __tmp_variable115 = end__1[0];
                offset__1=__tmp_variable115;
            }
            {
                int __tmp_variable116 = 1;
                int i__4=__tmp_variable116;
                while(i__4<regex_result__2) {
                    {
                    char* _inline_str1 = self;
                    int _inline_head1 = start__1[i__4];
                    int _inline_tail1 = end__1[i__4];
                                                inline_result_variable15 = (right_value54 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                        goto inline_func_end_label15;
                    
inline_func_end_label15:
                    right_value55 = inline_result_variable15;
                    (void)0;
}
                    char* __tmp_variable117 = inline_result_variable15;
                    char* match_str__5=__tmp_variable117;
                    igc_increment_ref_count(match_str__5);
                    (list_push_back_charph(result__1,match_str__5));
                    igc_decrement_ref_count(match_str__5);
                    int __tmp_variable118 = i__4+1;
                    i__4=__tmp_variable118;
                }
            }
            igc_decrement_ref_count(str__3);
        }
        else {
            break;
        }
    }
    {
    char* _inline_str1 = self;
                inline_result_variable16 = (string_length(_inline_str1));
        goto inline_func_end_label16;
    
inline_func_end_label16:
    (void)0;
}
    if(offset__1<inline_result_variable16) {
        {
        char* _inline_str1 = self;
        int _inline_head1 = offset__1;
        int _inline_tail1 = -1;
                        inline_result_variable17 = (right_value56 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
            goto inline_func_end_label17;
        
inline_func_end_label17:
        right_value57 = inline_result_variable17;
        (void)0;
}
        char* __tmp_variable119 = inline_result_variable17;
        char* str__2=__tmp_variable119;
        igc_increment_ref_count(str__2);
        (list_push_back_charph(result__1,str__2));
        igc_decrement_ref_count(str__2);
    }
        struct list_charphp* __result_value = result__1;
    return __result_value;
}

_Bool charp_match(char* self, struct regex_struct* reg)
{
    int __tmp_variable120 = 0;
    int offset__1=__tmp_variable120;
    int __tmp_variable121 = 16;
    int ovec_max__1=__tmp_variable121;
    int start__1[ovec_max__1];
    memset(&start__1, 0, sizeof(int));
    int end__1[ovec_max__1];
    memset(&end__1, 0, sizeof(int));
    int ovec_value__1[ovec_max__1*3];
    memset(&ovec_value__1, 0, sizeof(int));
    const char* err__1;
    memset(&err__1, 0, sizeof(const char*));
    int erro_ofs__1;
    memset(&erro_ofs__1, 0, sizeof(int));
    int __tmp_variable122 = reg->options;
    int options__1=__tmp_variable122;
    char* __tmp_variable123 = reg->str;
    char* str__1=__tmp_variable123;
    pcre* __tmp_variable124 = reg->re;
    pcre* re__1=__tmp_variable124;
    while (1) {
        int __tmp_variable125 = 2097152;
        int options__2=__tmp_variable125;
        int __tmp_variable126 = (strlen(self));
        int len__2=__tmp_variable126;
        int __tmp_variable127 = (pcre_exec(re__1,((pcre_extra*)0),self,len__2,offset__1,options__2,ovec_value__1,ovec_max__1*3));
        int regex_result__2=__tmp_variable127;
        {
            int __tmp_variable128 = 0;
            int i__3=__tmp_variable128;
            while(i__3<ovec_max__1) {
                start__1[i__3]=ovec_value__1[i__3*2];
                int __tmp_variable129 = i__3+1;
                i__3=__tmp_variable129;
            }
        }
        {
            int __tmp_variable130 = 0;
            int i__3=__tmp_variable130;
            while(i__3<ovec_max__1) {
                end__1[i__3]=ovec_value__1[i__3*2+1];
                int __tmp_variable131 = i__3+1;
                i__3=__tmp_variable131;
            }
        }
        if(regex_result__2>0) {
                        _Bool __result_value = 1;
            return __result_value;
        }
        else {
                        _Bool __result_value = 0;
            return __result_value;
        }
    }
        _Bool __result_value = 0;
    return __result_value;
}

struct list_charphp* charp_split_maxsplit(char* self, struct regex_struct* reg, int maxsplit)
{
void* right_value58;
void* right_value59;
char* inline_result_variable18;
void* right_value60;
void* right_value61;
char* inline_result_variable19;
void* right_value62;
void* right_value63;
char* inline_result_variable20;
void* right_value64;
void* right_value65;
int inline_result_variable21;
char* inline_result_variable22;
void* right_value66;
void* right_value67;
    const char* err__1;
    memset(&err__1, 0, sizeof(const char*));
    int erro_ofs__1;
    memset(&erro_ofs__1, 0, sizeof(int));
    int __tmp_variable132 = reg->options;
    int options__1=__tmp_variable132;
    char* __tmp_variable133 = reg->str;
    char* str__1=__tmp_variable133;
    pcre* __tmp_variable134 = reg->re;
    pcre* re__1=__tmp_variable134;
    struct list_charphp* __tmp_variable135 = (right_value59 = (list_initialize_charph((right_value58 = igc_calloc(1,32)))));
    struct list_charphp* result__1=__tmp_variable135;
    int __tmp_variable136 = 0;
    int offset__1=__tmp_variable136;
    int __tmp_variable137 = 16;
    int ovec_max__1=__tmp_variable137;
    int start__1[ovec_max__1];
    memset(&start__1, 0, sizeof(int));
    int end__1[ovec_max__1];
    memset(&end__1, 0, sizeof(int));
    int ovec_value__1[ovec_max__1*3];
    memset(&ovec_value__1, 0, sizeof(int));
    int __tmp_variable138 = 0;
    int n__1=__tmp_variable138;
    while (1) {
        int __tmp_variable139 = 2097152;
        int options__2=__tmp_variable139;
        int __tmp_variable140 = (strlen(self));
        int len__2=__tmp_variable140;
        int __tmp_variable141 = (pcre_exec(re__1,((pcre_extra*)0),self,len__2,offset__1,options__2,ovec_value__1,ovec_max__1*3));
        int regex_result__2=__tmp_variable141;
        {
            int __tmp_variable142 = 0;
            int i__3=__tmp_variable142;
            while(i__3<ovec_max__1) {
                start__1[i__3]=ovec_value__1[i__3*2];
                int __tmp_variable143 = i__3+1;
                i__3=__tmp_variable143;
            }
        }
        {
            int __tmp_variable144 = 0;
            int i__3=__tmp_variable144;
            while(i__3<ovec_max__1) {
                end__1[i__3]=ovec_value__1[i__3*2+1];
                int __tmp_variable145 = i__3+1;
                i__3=__tmp_variable145;
            }
        }
        if(regex_result__2==1) {
            {
            char* _inline_str1 = self;
            int _inline_head1 = offset__1;
            int _inline_tail1 = start__1[0];
                                inline_result_variable18 = (right_value60 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                goto inline_func_end_label18;
            
inline_func_end_label18:
            right_value61 = inline_result_variable18;
            (void)0;
}
            char* __tmp_variable146 = inline_result_variable18;
            char* str__3=__tmp_variable146;
            igc_increment_ref_count(str__3);
            (list_push_back_charph(result__1,str__3));
            if(offset__1==end__1[0]) {
                int __tmp_variable147 = offset__1+1;
                offset__1=__tmp_variable147;
            }
            else {
                int __tmp_variable148 = end__1[0];
                offset__1=__tmp_variable148;
            }
            igc_decrement_ref_count(str__3);
        }
        else if(regex_result__2>1) {
            {
            char* _inline_str1 = self;
            int _inline_head1 = offset__1;
            int _inline_tail1 = start__1[0];
                                inline_result_variable19 = (right_value62 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                goto inline_func_end_label19;
            
inline_func_end_label19:
            right_value63 = inline_result_variable19;
            (void)0;
}
            char* __tmp_variable149 = inline_result_variable19;
            char* str__3=__tmp_variable149;
            igc_increment_ref_count(str__3);
            (list_push_back_charph(result__1,str__3));
            if(offset__1==end__1[0]) {
                int __tmp_variable150 = offset__1+1;
                offset__1=__tmp_variable150;
            }
            else {
                int __tmp_variable151 = end__1[0];
                offset__1=__tmp_variable151;
            }
            {
                int __tmp_variable152 = 1;
                int i__4=__tmp_variable152;
                while(i__4<regex_result__2) {
                    {
                    char* _inline_str1 = self;
                    int _inline_head1 = start__1[i__4];
                    int _inline_tail1 = end__1[i__4];
                                                inline_result_variable20 = (right_value64 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
                        goto inline_func_end_label20;
                    
inline_func_end_label20:
                    right_value65 = inline_result_variable20;
                    (void)0;
}
                    char* __tmp_variable153 = inline_result_variable20;
                    char* match_str__5=__tmp_variable153;
                    igc_increment_ref_count(match_str__5);
                    (list_push_back_charph(result__1,match_str__5));
                    igc_decrement_ref_count(match_str__5);
                    int __tmp_variable154 = i__4+1;
                    i__4=__tmp_variable154;
                }
            }
            igc_decrement_ref_count(str__3);
        }
        else {
            break;
        }
        int __tmp_variable155 = n__1+1;
        n__1=__tmp_variable155;
        if(maxsplit==n__1) {
            break;
        }
    }
    {
    char* _inline_str1 = self;
                inline_result_variable21 = (string_length(_inline_str1));
        goto inline_func_end_label21;
    
inline_func_end_label21:
    (void)0;
}
    if(offset__1<inline_result_variable21) {
        {
        char* _inline_str1 = self;
        int _inline_head1 = offset__1;
        int _inline_tail1 = -1;
                        inline_result_variable22 = (right_value66 = (string_substring(_inline_str1,_inline_head1,_inline_tail1)));
            goto inline_func_end_label22;
        
inline_func_end_label22:
        right_value67 = inline_result_variable22;
        (void)0;
}
        char* __tmp_variable156 = inline_result_variable22;
        char* str__2=__tmp_variable156;
        igc_increment_ref_count(str__2);
        (list_push_back_charph(result__1,str__2));
        igc_decrement_ref_count(str__2);
    }
        struct list_charphp* __result_value = result__1;
    return __result_value;
}

void bool_expect(_Bool self, void* parent, void (*block_)(void*))
{
    if(!self) {
        block_(parent);
    }
}

