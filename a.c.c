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
typedef int pid_t;
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
typedef struct _opaque_pthread_t* pthread_t;

void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
void* igc_calloc(long count, long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void unwrap_exception(char* sname, int sline, char* mem);
void (*signal(int , void (*anon_fun)(int)))(int);
int raise(int );
void* (*bsd_signal(int , void (*_Nullable)(int)))(int);
int kill(int , int );
int killpg(int , int );
int pthread_kill(struct _opaque_pthread_t* , int );
int pthread_sigmask(int , int* , int* );
int sigaction(int , struct sigaction* , struct sigaction* );
int sigaddset(int* , int );
int sigaltstack(struct __darwin_sigaltstack* , struct __darwin_sigaltstack* );
int sigdelset(int* , int );
int sigemptyset(int* );
int sigfillset(int* );
int sighold(int );
int sigignore(int );
int siginterrupt(int , int );
int sigismember(int* , int );
int sigpause(int );
int sigpending(int* );
int sigprocmask(int , int* , int* );
int sigrelse(int );
void* (*sigset(int , void (*_Nullable)(int)))(int);
int sigsuspend(int* );
int sigwait(int* , int* );
void psignal(int , char* );
int sigblock(int );
int sigsetmask(int );
int sigvec(int , struct sigvec* , struct sigvec* );
int main(int argc, char** argv);

int main(int argc, char** argv)
{
return 0;;
}

