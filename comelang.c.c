typedef void* protocol_obj_t;
void* call_cloner(void* fun, void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* ncmemdup(void* block);
void* gc_ncmemdup(void* block);
typedef long size_t;
typedef struct __builtin_va_list __gnuc_va_list;
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
struct come_anon0
{
    int __val;
};
typedef struct come_anon0 __fsid_t;
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
struct come_anon1
{
    int __count;
    come_anon2 __value;
};
typedef struct come_anon1 __mbstate_t;
struct _G_fpos_t
{
    long __pos;
    struct come_anon1 __state;
};
typedef struct _G_fpos_t __fpos_t;
struct _G_fpos64_t
{
    long __pos;
    struct come_anon1 __state;
};
typedef struct _G_fpos64_t __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
typedef struct _IO_FILE FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
typedef lambda* cookie_read_function_t;
typedef lambda* cookie_write_function_t;
typedef lambda* cookie_seek_function_t;
typedef lambda* cookie_close_function_t;
struct _IO_cookie_io_functions_t
{
    long(*read)(void*,char*,long);
    long(*write)(void*,char*,long);
    int(*seek)(void*,long*,int);
    int(*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef struct __builtin_va_list va_list;
typedef long off_t;
typedef long off64_t;
typedef long ssize_t;
typedef struct _G_fpos_t fpos_t;
typedef struct _G_fpos64_t fpos64_t;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long_double _Float64x;
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
    long quot;
    long rem;
};
typedef struct come_anon5 lldiv_t;
struct __locale_data;
struct __locale_struct
{
    struct __locale_data* __locales;
    short* __ctype_b;
    int* __ctype_tolower;
    int* __ctype_toupper;
    char* __names;
};
typedef struct __locale_struct* __locale_t;
typedef struct __locale_struct* locale_t;
typedef char u_char;
typedef short u_short;
typedef int u_int;
typedef long u_long;
typedef long quad_t;
typedef long u_quad_t;
typedef struct come_anon0 fsid_t;
typedef long loff_t;
typedef long ino_t;
typedef long ino64_t;
typedef long dev_t;
typedef int gid_t;
typedef int mode_t;
typedef long nlink_t;
typedef int uid_t;
typedef int pid_t;
typedef int id_t;
typedef int daddr_t;
typedef char* caddr_t;
typedef int key_t;
typedef long clock_t;
typedef int clockid_t;
typedef long time_t;
typedef void* timer_t;
typedef int useconds_t;
typedef long suseconds_t;
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
struct come_anon6
{
    long __val;
};
typedef struct come_anon6 __sigset_t;
typedef struct come_anon6 sigset_t;
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
    long fds_bits;
};
typedef struct come_anon7 fd_set;
typedef long fd_mask;
typedef long blksize_t;
typedef long blkcnt_t;
typedef long fsblkcnt_t;
typedef long fsfilcnt_t;
typedef long blkcnt64_t;
typedef long fsblkcnt64_t;
typedef long fsfilcnt64_t;
struct come_anon9
{
    int __low;
    int __high;
};
typedef come_anon8 __atomic_wide_counter;
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
    come_anon8 __wseq;
    come_anon8 __g1_start;
    int __g_refs;
    int __g_size;
    int __g1_orig_size;
    int __wrefs;
    int __g_signals;
};
typedef int __tss_t;
typedef long __thrd_t;
struct come_anon10
{
    int __data;
};
typedef struct come_anon10 __once_flag;
typedef long pthread_t;
typedef come_anon11 pthread_mutexattr_t;
typedef come_anon12 pthread_condattr_t;
typedef int pthread_key_t;
typedef int pthread_once_t;
typedef pthread_attr_t pthread_attr_t;
typedef come_anon13 pthread_mutex_t;
typedef come_anon14 pthread_cond_t;
typedef come_anon15 pthread_rwlock_t;
typedef come_anon16 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
typedef come_anon17 pthread_barrier_t;
typedef come_anon18 pthread_barrierattr_t;
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
typedef lambda* __compar_fn_t;
typedef lambda* comparison_fn_t;
typedef lambda* __compar_d_fn_t;
typedef long ptrdiff_t;
struct come_anon19
{
    long __max_align_ll;
    long_double __max_align_ld;
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
typedef void* GC_PTR;
typedef long GC_word;
typedef long GC_signed_word;
typedef lambda* GC_oom_func;
typedef lambda* GC_on_heap_resize_proc;
typedef int GC_EventType;
typedef lambda* GC_on_collection_event_proc;
typedef lambda* GC_finalizer_notifier_proc;
typedef lambda* GC_stop_func;
struct GC_prof_stats_s
{
    long heapsize_full;
    long free_bytes_full;
    long unmapped_bytes;
    long bytes_allocd_since_gc;
    long allocd_bytes_before_gc;
    long non_gc_bytes;
    long gc_no;
    long markers_m1;
    long bytes_reclaimed_since_gc;
    long reclaimed_bytes_before_gc;
    long expl_freed_bytes_since_gc;
};
typedef lambda* GC_finalization_proc;
typedef int GC_ToggleRefStatus;
typedef lambda* GC_toggleref_func;
typedef lambda* GC_await_finalize_proc;
typedef lambda* GC_warn_proc;
typedef lambda* GC_abort_func;
typedef long GC_hidden_pointer;
typedef lambda* GC_fn_type;
struct GC_stack_base
{
    void* mem_base;
};
typedef lambda* GC_stack_base_func;
typedef lambda* GC_has_static_roots_func;
struct sched_param
{
    int sched_priority;
};
typedef long __cpu_mask;
struct come_anon22
{
    long __bits;
};
typedef struct come_anon22 cpu_set_t;
struct timex
{
    int modes;
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
    int ;
    int ;
    int ;
    int ;
    int ;
    int ;
    int ;
    int ;
    int ;
    int ;
    int ;
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
    char* tm_zone;
};
struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};
struct sigevent;
typedef long __jmp_buf;
struct __jmp_buf_tag
{
    long __jmpbuf;
    int __mask_was_saved;
    struct come_anon6 __saved_mask;
};
struct _pthread_cleanup_buffer
{
    void(*__routine)(void*);
    void* __arg;
    int __canceltype;
    struct _pthread_cleanup_buffer* __prev;
};
struct __cancel_jmp_buf_tag
{
    long __cancel_jmp_buf;
    int __mask_was_saved;
};
struct come_anon43
{
    struct __cancel_jmp_buf_tag __cancel_jmp_buf;
    void* __pad;
};
typedef struct come_anon43 __pthread_unwind_buf_t;
struct __pthread_cleanup_frame
{
    void(*__cancel_routine)(void*);
    void* __cancel_arg;
    int __do_it;
    int __cancel_type;
};
typedef long intptr_t;
typedef int socklen_t;
struct stat
{
    long st_dev;
    long st_ino;
    long st_nlink;
    int st_mode;
    int st_uid;
    int st_gid;
    int __pad0;
    long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __glibc_reserved;
};
struct stat64
{
    long st_dev;
    long st_ino;
    long st_nlink;
    int st_mode;
    int st_uid;
    int st_gid;
    int __pad0;
    long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __glibc_reserved;
};
typedef char __s8;
typedef char __u8;
typedef short __s16;
typedef short __u16;
typedef int __s32;
typedef int __u32;
typedef long __s64;
typedef long __u64;
struct come_anon50
{
    long fds_bits;
};
typedef struct come_anon50 __kernel_fd_set;
typedef lambda* __kernel_sighandler_t;
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef short __kernel_old_uid_t;
typedef short __kernel_old_gid_t;
typedef long __kernel_old_dev_t;
typedef long __kernel_long_t;
typedef long __kernel_ulong_t;
typedef long __kernel_ino_t;
typedef int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef int __kernel_uid_t;
typedef int __kernel_gid_t;
typedef long __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef int __kernel_uid32_t;
typedef int __kernel_gid32_t;
typedef long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
struct come_anon51
{
    int val;
};
typedef struct come_anon51 __kernel_fsid_t;
typedef long __kernel_off_t;
typedef long __kernel_loff_t;
typedef long __kernel_old_time_t;
typedef long __kernel_time_t;
typedef long __kernel_time64_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char* __kernel_caddr_t;
typedef short __kernel_uid16_t;
typedef short __kernel_gid16_t;
typedef short __le16;
typedef short __be16;
typedef int __le32;
typedef int __be32;
typedef long __le64;
typedef long __be64;
typedef short __sum16;
typedef int __wsum;
typedef int __poll_t;
struct statx_timestamp
{
    long tv_sec;
    int tv_nsec;
    int __reserved;
};
struct statx
{
    int stx_mask;
    int stx_blksize;
    long stx_attributes;
    int stx_nlink;
    int stx_uid;
    int stx_gid;
    short stx_mode;
    short __spare0;
    long stx_ino;
    long stx_size;
    long stx_blocks;
    long stx_attributes_mask;
    struct statx_timestamp stx_atime;
    struct statx_timestamp stx_btime;
    struct statx_timestamp stx_ctime;
    struct statx_timestamp stx_mtime;
    int stx_rdev_major;
    int stx_rdev_minor;
    int stx_dev_major;
    int stx_dev_minor;
    long stx_mnt_id;
    long __spare2;
    long __spare3;
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
    long flags;
    void* study_data;
    long match_limit;
    void* callout_data;
    char* tables;
    long match_limit_recursion;
    char** mark;
    void* executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct pcre16_extra
{
    long flags;
    void* study_data;
    long match_limit;
    void* callout_data;
    char* tables;
    long match_limit_recursion;
    short** mark;
    void* executable_jit;
};
typedef struct pcre16_extra pcre16_extra;
struct pcre32_extra
{
    long flags;
    void* study_data;
    long match_limit;
    void* callout_data;
    char* tables;
    long match_limit_recursion;
    int** mark;
    void* executable_jit;
};
typedef struct pcre32_extra pcre32_extra;
struct pcre_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    char* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    char* mark;
};
typedef struct pcre_callout_block pcre_callout_block;
struct pcre16_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    short* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    short* mark;
};
typedef struct pcre16_callout_block pcre16_callout_block;
struct pcre32_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    int* mark;
};
typedef struct pcre32_callout_block pcre32_callout_block;
typedef lambda* pcre_jit_callback;
typedef lambda* pcre16_jit_callback;
typedef lambda* pcre32_jit_callback;
struct winsize
{
    short ws_row;
    short ws_col;
    short ws_xpixel;
    short ws_ypixel;
};
struct termio
{
    short c_iflag;
    short c_oflag;
    short c_cflag;
    short c_lflag;
    char c_line;
    char c_cc;
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
typedef int wint_t;
typedef long wctype_t;
typedef int* wctrans_t;
typedef int error_t;
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
typedef long int_fast16_t;
typedef long int_fast32_t;
typedef long int_fast64_t;
typedef char uint_fast8_t;
typedef long uint_fast16_t;
typedef long uint_fast32_t;
typedef long uint_fast64_t;
typedef long uintptr_t;
typedef long intmax_t;
typedef long uintmax_t;
typedef int chtype;
typedef int mmask_t;
typedef char NCURSES_BOOL;
struct screen;
typedef struct screen SCREEN;
struct _win_st;
typedef struct _win_st WINDOW;
typedef int attr_t;
typedef struct come_anon1 mbstate_t;
struct come_anon54
{
    int attr;
    int chars;
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
typedef lambda* NCURSES_OUTC;
typedef lambda* NCURSES_WINDOW_CB;
typedef lambda* NCURSES_SCREEN_CB;
typedef lambda* NCURSES_OUTC_sp;
struct come_anon55
{
    short id;
    int x;
    int y;
    int z;
    int bstate;
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
    struct real_pcre* regex;
    bool ignore_case;
    bool multiline;
    bool global;
    bool extended;
    bool dotall;
    bool anchored;
    bool dollar_endonly;
    bool ungreedy;
    int options;
    struct real_pcre* re;
};
typedef struct regex_struct* nregex;
struct list_item_charpp
{
    char* item;
    struct list_item_charpp* prev;
    struct list_item_charpp* next;
};
struct list_charpp
{
    struct list_item_charpp* head;
    struct list_item_charpp* tail;
    int len;
    struct list_item_charpp* it;
};
struct match_object
{
    int num;
    int start;
    int end;
};
typedef int i32;
typedef short i16;
typedef char i8;
typedef long i64;
typedef int u32;
typedef short u16;
typedef char u8;
typedef long u64;

void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
void* igc_calloc(long count, long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void unwrap_exception(char* sname, int sline, char* mem);
int remove(char* __filename);
int rename(char* __old, char* __new);
int renameat(int __oldfd, char* __old, int __newfd, char* __new);
int renameat2(int __oldfd, char* __old, int __newfd, char* __new, int __flags);
int fclose(struct _IO_FILE* __stream);
struct _IO_FILE* tmpfile();
struct _IO_FILE* tmpfile64();
char* tmpnam(char* );
char* tmpnam_r(char __s);
char* tempnam(char* __dir, char* __pfx);
int fflush(struct _IO_FILE* __stream);
int fflush_unlocked(struct _IO_FILE* __stream);
int fcloseall();
struct _IO_FILE* fopen(char* __filename, char* __modes);
struct _IO_FILE* freopen(char* __filename, char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fopen64(char* __filename, char* __modes);
struct _IO_FILE* freopen64(char* __filename, char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fdopen(int __fd, char* __modes);
struct _IO_FILE* fopencookie(void* __magic_cookie, char* __modes, struct _IO_cookie_io_functions_t __io_funcs);
struct _IO_FILE* fmemopen(void* __s, long __len, char* __modes);
struct _IO_FILE* open_memstream(char** __bufloc, long* __sizeloc);
void setbuf(struct _IO_FILE* __stream, char* __buf);
int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, long __n);
void setbuffer(struct _IO_FILE* __stream, char* __buf, long __size);
void setlinebuf(struct _IO_FILE* __stream);
int fprintf(struct _IO_FILE* __stream, char* __format);
int printf(char* __format);
int sprintf(char* __s, char* __format);
int vfprintf(struct _IO_FILE* __s, char* __format, struct __builtin_va_list __arg);
int vprintf(char* __format, struct __builtin_va_list __arg);
int vsprintf(char* __s, char* __format, struct __builtin_va_list __arg);
int snprintf(char* __s, long __maxlen, char* __format);
int vsnprintf(char* __s, long __maxlen, char* __format, struct __builtin_va_list __arg);
int vasprintf(char** __ptr, char* __f, struct __builtin_va_list __arg);
int __asprintf(char** __ptr, char* __fmt);
int asprintf(char** __ptr, char* __fmt);
int vdprintf(int __fd, char* __fmt, struct __builtin_va_list __arg);
int dprintf(int __fd, char* __fmt);
int fscanf(struct _IO_FILE* __stream, char* __format);
int scanf(char* __format);
int sscanf(char* __s, char* __format);
int __isoc99_fscanf(struct _IO_FILE* __stream, char* __format);
int __isoc99_scanf(char* __format);
int __isoc99_sscanf(char* __s, char* __format);
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
char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);
long __getdelim(char** __lineptr, long* __n, int __delimiter, struct _IO_FILE* __stream);
long getdelim(char** __lineptr, long* __n, int __delimiter, struct _IO_FILE* __stream);
long getline(char** __lineptr, long* __n, struct _IO_FILE* __stream);
int fputs(char* __s, struct _IO_FILE* __stream);
int puts(char* __s);
int ungetc(int __c, struct _IO_FILE* __stream);
long fread(void* __ptr, long __size, long __n, struct _IO_FILE* __stream);
long fwrite(void* __ptr, long __size, long __n, struct _IO_FILE* __s);
int fputs_unlocked(char* __s, struct _IO_FILE* __stream);
long fread_unlocked(void* __ptr, long __size, long __n, struct _IO_FILE* __stream);
long fwrite_unlocked(void* __ptr, long __size, long __n, struct _IO_FILE* __stream);
int fseek(struct _IO_FILE* __stream, long __off, int __whence);
long ftell(struct _IO_FILE* __stream);
void rewind(struct _IO_FILE* __stream);
int fseeko(struct _IO_FILE* __stream, long __off, int __whence);
long ftello(struct _IO_FILE* __stream);
int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);
int fsetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);
int fseeko64(struct _IO_FILE* __stream, long __off, int __whence);
long ftello64(struct _IO_FILE* __stream);
int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);
int fsetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);
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
char* cuserid(char* __s);
int obstack_printf(struct obstack* __obstack, char* __format);
int obstack_vprintf(struct obstack* __obstack, char* __format, struct __builtin_va_list __args);
void flockfile(struct _IO_FILE* __stream);
int ftrylockfile(struct _IO_FILE* __stream);
void funlockfile(struct _IO_FILE* __stream);
int __uflow(struct _IO_FILE* );
int __overflow(struct _IO_FILE* , int );
long __ctype_get_mb_cur_max();
double atof(char* __nptr);
int atoi(char* __nptr);
long atol(char* __nptr);
long atoll(char* __nptr);
double strtod(char* __nptr, char** __endptr);
float strtof(char* __nptr, char** __endptr);
long_double strtold(char* __nptr, char** __endptr);
float strtof32(char* __nptr, char** __endptr);
double strtof64(char* __nptr, char** __endptr);
double strtof32x(char* __nptr, char** __endptr);
long_double strtof64x(char* __nptr, char** __endptr);
long strtol(char* __nptr, char** __endptr, int __base);
long strtoul(char* __nptr, char** __endptr, int __base);
long strtoq(char* __nptr, char** __endptr, int __base);
long strtouq(char* __nptr, char** __endptr, int __base);
long strtoll(char* __nptr, char** __endptr, int __base);
long strtoull(char* __nptr, char** __endptr, int __base);
int strfromd(char* __dest, long __size, char* __format, double __f);
int strfromf(char* __dest, long __size, char* __format, float __f);
int strfroml(char* __dest, long __size, char* __format, long_double __f);
int strfromf32(char* __dest, long __size, char* __format, float __f);
int strfromf64(char* __dest, long __size, char* __format, double __f);
int strfromf32x(char* __dest, long __size, char* __format, double __f);
int strfromf64x(char* __dest, long __size, char* __format, long_double __f);
long strtol_l(char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long strtoul_l(char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long strtoll_l(char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long strtoull_l(char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
double strtod_l(char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof_l(char* __nptr, char** __endptr, struct __locale_struct* __loc);
long_double strtold_l(char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof32_l(char* __nptr, char** __endptr, struct __locale_struct* __loc);
double strtof64_l(char* __nptr, char** __endptr, struct __locale_struct* __loc);
double strtof32x_l(char* __nptr, char** __endptr, struct __locale_struct* __loc);
long_double strtof64x_l(char* __nptr, char** __endptr, struct __locale_struct* __loc);
char* l64a(long __n);
long a64l(char* __s);
int select(int __nfds, struct come_anon7* __readfds, struct come_anon7* __writefds, struct come_anon7* __exceptfds, struct timeval* __timeout);
int pselect(int __nfds, struct come_anon7* __readfds, struct come_anon7* __writefds, struct come_anon7* __exceptfds, struct timespec* __timeout, struct come_anon6* __sigmask);
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
int atexit(lambda* __func);
int at_quick_exit(lambda* __func);
int on_exit(lambda* __func, void* __arg);
void exit(int __status);
void quick_exit(int __status);
void _Exit(int __status);
char* getenv(char* __name);
char* secure_getenv(char* __name);
int putenv(char* __string);
int setenv(char* __name, char* __value, int __replace);
int unsetenv(char* __name);
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
int system(char* __command);
char* canonicalize_file_name(char* __name);
char* realpath(char* __name, char* __resolved);
void* bsearch(void* __key, void* __base, long __nmemb, long __size, lambda* __compar);
void qsort(void* __base, long __nmemb, long __size, lambda* __compar);
void qsort_r(void* __base, long __nmemb, long __size, lambda* __compar, void* __arg);
int abs(int __x);
long labs(long __x);
long llabs(long __x);
struct come_anon3 div(int __numer, int __denom);
struct come_anon4 ldiv(long __numer, long __denom);
struct come_anon5 lldiv(long __numer, long __denom);
char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long_double __value, int __ndigit, int* __decpt, int* __sign);
char* qfcvt(long_double __value, int __ndigit, int* __decpt, int* __sign);
char* qgcvt(long_double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long __len);
int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long __len);
int qecvt_r(long_double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long __len);
int qfcvt_r(long_double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, long __len);
int mblen(char* __s, long __n);
int mbtowc(int* __pwc, char* __s, long __n);
int wctomb(char* __s, int __wchar);
long mbstowcs(int* __pwcs, char* __s, long __n);
long wcstombs(char* __s, int* __pwcs, long __n);
int rpmatch(char* __response);
int getsubopt(char** __optionp, char** __tokens, char** __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, long __buflen);
int getpt();
int getloadavg(double __loadavg, int __nelem);
void* memcpy(void* __dest, void* __src, long __n);
void* memmove(void* __dest, void* __src, long __n);
void* memccpy(void* __dest, void* __src, int __c, long __n);
void* memset(void* __s, int __c, long __n);
int memcmp(void* __s1, void* __s2, long __n);
int __memcmpeq(void* __s1, void* __s2, long __n);
void* memchr(void* __s, int __c, long __n);
void* rawmemchr(void* __s, int __c);
void* memrchr(void* __s, int __c, long __n);
char* strcpy(char* __dest, char* __src);
char* strncpy(char* __dest, char* __src, long __n);
char* strcat(char* __dest, char* __src);
char* strncat(char* __dest, char* __src, long __n);
int strcmp(char* __s1, char* __s2);
int strncmp(char* __s1, char* __s2, long __n);
int strcoll(char* __s1, char* __s2);
long strxfrm(char* __dest, char* __src, long __n);
int strcoll_l(char* __s1, char* __s2, struct __locale_struct* __l);
long strxfrm_l(char* __dest, char* __src, long __n, struct __locale_struct* __l);
char* strdup(char* __s);
char* strndup(char* __string, long __n);
char* strchr(char* __s, int __c);
char* strrchr(char* __s, int __c);
char* strchrnul(char* __s, int __c);
long strcspn(char* __s, char* __reject);
long strspn(char* __s, char* __accept);
char* strpbrk(char* __s, char* __accept);
char* strstr(char* __haystack, char* __needle);
char* strtok(char* __s, char* __delim);
char* __strtok_r(char* __s, char* __delim, char** __save_ptr);
char* strtok_r(char* __s, char* __delim, char** __save_ptr);
char* strcasestr(char* __haystack, char* __needle);
void* memmem(void* __haystack, long __haystacklen, void* __needle, long __needlelen);
void* __mempcpy(void* __dest, void* __src, long __n);
void* mempcpy(void* __dest, void* __src, long __n);
long strlen(char* __s);
long strnlen(char* __string, long __maxlen);
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, long __buflen);
char* strerrordesc_np(int __err);
char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct* __l);
int bcmp(void* __s1, void* __s2, long __n);
void bcopy(void* __src, void* __dest, long __n);
void bzero(void* __s, long __n);
char* index(char* __s, int __c);
char* rindex(char* __s, int __c);
int ffs(int __i);
int ffsl(long __l);
int ffsll(long __ll);
int strcasecmp(char* __s1, char* __s2);
int strncasecmp(char* __s1, char* __s2, long __n);
int strcasecmp_l(char* __s1, char* __s2, struct __locale_struct* __loc);
int strncasecmp_l(char* __s1, char* __s2, long __n, struct __locale_struct* __loc);
void explicit_bzero(void* __s, long __n);
char* strsep(char** __stringp, char* __delim);
char* strsignal(int __sig);
char* sigabbrev_np(int __sig);
char* sigdescr_np(int __sig);
char* __stpcpy(char* __dest, char* __src);
char* stpcpy(char* __dest, char* __src);
char* __stpncpy(char* __dest, char* __src, long __n);
char* stpncpy(char* __dest, char* __src, long __n);
int strverscmp(char* __s1, char* __s2);
char* strfry(char* __string);
void* memfrob(void* __s, long __n);
char* basename(char* __filename);
void* memalign(long __alignment, long __size);
void* pvalloc(long __size);
struct mallinfo mallinfo();
struct mallinfo2 mallinfo2();
int mallopt(int __param, int __val);
int malloc_trim(long __pad);
long malloc_usable_size(void* __ptr);
void malloc_stats();
int malloc_info(int __options, struct _IO_FILE* __fp);
int GC_get_version();
long GC_get_gc_no();
void GC_set_oom_fn(lambda* );
lambda* GC_get_oom_fn();
void GC_set_on_heap_resize(lambda* );
lambda* GC_get_on_heap_resize();
void GC_set_on_collection_event(lambda* );
lambda* GC_get_on_collection_event();
void GC_set_find_leak(int );
int GC_get_find_leak();
void GC_set_all_interior_pointers(int );
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int );
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int );
int GC_get_java_finalization();
void GC_set_finalizer_notifier(lambda* );
lambda* GC_get_finalizer_notifier();
void GC_set_dont_expand(int );
int GC_get_dont_expand();
void GC_set_full_freq(int );
int GC_get_full_freq();
void GC_set_non_gc_bytes(long );
long GC_get_non_gc_bytes();
void GC_set_no_dls(int );
int GC_get_no_dls();
void GC_set_free_space_divisor(long );
long GC_get_free_space_divisor();
void GC_set_max_retries(long );
long GC_get_max_retries();
void GC_set_dont_precollect(int );
int GC_get_dont_precollect();
void GC_set_time_limit(long );
long GC_get_time_limit();
void GC_start_performance_measurement();
long GC_get_full_gc_total_time();
void GC_set_pages_executable(int );
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(long );
long GC_get_min_bytes_allocd();
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
void* GC_malloc(long );
void* GC_malloc_atomic(long );
char* GC_strdup(char* );
char* GC_strndup(char* , long );
void* GC_malloc_uncollectable(long );
void* GC_malloc_stubborn(long );
void* GC_memalign(long , long );
int GC_posix_memalign(void** , long , long );
void GC_free(void* );
void GC_change_stubborn(void* );
void GC_end_stubborn_change(void* );
void* GC_base(void* );
int GC_is_heap_ptr(void* );
long GC_size(void* );
void* GC_realloc(void* , long );
int GC_expand_hp(long );
void GC_set_max_heap_size(long );
void GC_exclude_static_roots(void* , void* );
void GC_clear_roots();
void GC_add_roots(void* , void* );
void GC_remove_roots(void* , void* );
void GC_register_displacement(long );
void GC_debug_register_displacement(long );
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(lambda* );
void GC_set_stop_func(lambda* );
lambda* GC_get_stop_func();
long GC_get_heap_size();
long GC_get_free_bytes();
long GC_get_unmapped_bytes();
long GC_get_bytes_since_gc();
long GC_get_expl_freed_bytes_since_gc();
long GC_get_total_bytes();
void GC_get_heap_usage_safe(long* , long* , long* , long* , long* );
long GC_get_prof_stats(struct GC_prof_stats_s* , long );
long GC_get_size_map_at(int i);
long GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int );
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(long );
void* GC_malloc_atomic_ignore_off_page(long );
void* GC_malloc_atomic_uncollectable(long );
void* GC_debug_malloc_atomic_uncollectable(long , char* s, int i);
void* GC_debug_malloc(long , char* s, int i);
void* GC_debug_malloc_atomic(long , char* s, int i);
char* GC_debug_strdup(char* , char* s, int i);
char* GC_debug_strndup(char* , long , char* s, int i);
void* GC_debug_malloc_uncollectable(long , char* s, int i);
void* GC_debug_malloc_stubborn(long , char* s, int i);
void* GC_debug_malloc_ignore_off_page(long , char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(long , char* s, int i);
void GC_debug_free(void* );
void* GC_debug_realloc(void* , long , char* s, int i);
void GC_debug_change_stubborn(void* );
void GC_debug_end_stubborn_change(void* );
void* GC_debug_malloc_replacement(long );
void* GC_debug_realloc_replacement(void* , long );
void GC_register_finalizer(void* , lambda* , void* , lambda** , void** );
void GC_debug_register_finalizer(void* , lambda* , void* , lambda** , void** );
void GC_register_finalizer_ignore_self(void* , lambda* , void* , lambda** , void** );
void GC_debug_register_finalizer_ignore_self(void* , lambda* , void* , lambda** , void** );
void GC_register_finalizer_no_order(void* , lambda* , void* , lambda** , void** );
void GC_debug_register_finalizer_no_order(void* , lambda* , void* , lambda** , void** );
void GC_register_finalizer_unreachable(void* , lambda* , void* , lambda** , void** );
void GC_debug_register_finalizer_unreachable(void* , lambda* , void* , lambda** , void** );
int GC_register_disappearing_link(void** );
int GC_general_register_disappearing_link(void** , void* );
int GC_move_disappearing_link(void** , void** );
int GC_unregister_disappearing_link(void** );
int GC_register_long_link(void** , void* );
int GC_move_long_link(void** , void** );
int GC_unregister_long_link(void** );
void GC_set_toggleref_func(lambda* );
lambda* GC_get_toggleref_func();
int GC_toggleref_add(void* , int );
void GC_set_await_finalize_proc(lambda* );
lambda* GC_get_await_finalize_proc();
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(long );
void GC_set_warn_proc(lambda* );
lambda* GC_get_warn_proc();
void GC_ignore_warn_proc(char* , long );
void GC_set_log_fd(int );
void GC_set_abort_func(lambda* );
lambda* GC_get_abort_func();
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(lambda* , void* );
void* GC_call_with_stack_base(lambda* , void* );
void* GC_do_blocking(lambda* , void* );
void* GC_call_with_gc_active(lambda* , void* );
int GC_get_stack_base(struct GC_stack_base* );
void* GC_same_obj(void* , void* );
void* GC_pre_incr(void** , long );
void* GC_post_incr(void** , long );
void* GC_is_visible(void* );
void* GC_is_valid_displacement(void* );
void GC_dump();
void GC_dump_named(char* );
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* , void* );
void GC_debug_ptr_store_and_dirty(void* , void* );
void* GC_malloc_many(long );
void GC_register_has_static_roots_callback(lambda* );
void GC_set_force_unmap_on_gcollect(int );
int GC_get_force_unmap_on_gcollect();
void GC_win32_free_heap();
int clone(lambda* __fn, void* __child_stack, int __flags, void* __arg);
int unshare(int __flags);
int sched_getcpu();
int getcpu(int* , int* );
int setns(int __fd, int __nstype);
int __sched_cpucount(long __setsize, struct come_anon22* __setp);
struct come_anon22* __sched_cpualloc(long __count);
void __sched_cpufree(struct come_anon22* __set);
int sched_setparam(int __pid, struct sched_param* __param);
int sched_getparam(int __pid, struct sched_param* __param);
int sched_setscheduler(int __pid, int __policy, struct sched_param* __param);
int sched_getscheduler(int __pid);
int sched_yield();
int sched_get_priority_max(int __algorithm);
int sched_get_priority_min(int __algorithm);
int sched_rr_get_interval(int __pid, struct timespec* __t);
int sched_setaffinity(int __pid, long __cpusetsize, struct come_anon22* __cpuset);
int sched_getaffinity(int __pid, long __cpusetsize, struct come_anon22* __cpuset);
int clock_adjtime(int __clock_id, struct timex* __utx);
long clock();
long time(long* __timer);
double difftime(long __time1, long __time0);
long mktime(struct tm* __tp);
long strftime(char* __s, long __maxsize, char* __format, struct tm* __tp);
char* strptime(char* __s, char* __fmt, struct tm* __tp);
long strftime_l(char* __s, long __maxsize, char* __format, struct tm* __tp, struct __locale_struct* __loc);
char* strptime_l(char* __s, char* __fmt, struct tm* __tp, struct __locale_struct* __loc);
struct tm* gmtime(long* __timer);
struct tm* localtime(long* __timer);
struct tm* gmtime_r(long* __timer, struct tm* __tp);
struct tm* localtime_r(long* __timer, struct tm* __tp);
char* asctime(struct tm* __tp);
char* ctime(long* __timer);
char* asctime_r(struct tm* __tp, char* __buf);
char* ctime_r(long* __timer, char* __buf);
void tzset();
long timegm(struct tm* __tp);
long timelocal(struct tm* __tp);
int dysize(int __year);
int nanosleep(struct timespec* __requested_time, struct timespec* __remaining);
int clock_getres(int __clock_id, struct timespec* __res);
int clock_gettime(int __clock_id, struct timespec* __tp);
int clock_settime(int __clock_id, struct timespec* __tp);
int clock_nanosleep(int __clock_id, int __flags, struct timespec* __req, struct timespec* __rem);
int clock_getcpuclockid(int __pid, int* __clock_id);
int timer_create(int __clock_id, struct sigevent* __evp, void** __timerid);
int timer_delete(void* __timerid);
int timer_settime(void* __timerid, int __flags, struct itimerspec* __value, struct itimerspec* __ovalue);
int timer_gettime(void* __timerid, struct itimerspec* __value);
int timer_getoverrun(void* __timerid);
int timespec_get(struct timespec* __ts, int __base);
int timespec_getres(struct timespec* __ts, int __base);
struct tm* getdate(char* __string);
int getdate_r(char* __string, struct tm* __resbufp);
long __sysconf(int __name);
int pthread_create(long* __newthread, pthread_attr_t* __attr, lambda* __start_routine, void* __arg);
void pthread_exit(void* __retval);
int pthread_join(long __th, void** __thread_return);
int pthread_tryjoin_np(long __th, void** __thread_return);
int pthread_timedjoin_np(long __th, void** __thread_return, struct timespec* __abstime);
int pthread_clockjoin_np(long __th, void** __thread_return, int __clockid, struct timespec* __abstime);
int pthread_detach(long __th);
long pthread_self();
int pthread_equal(long __thread1, long __thread2);
int pthread_attr_init(pthread_attr_t* __attr);
int pthread_attr_destroy(pthread_attr_t* __attr);
int pthread_attr_getdetachstate(pthread_attr_t* __attr, int* __detachstate);
int pthread_attr_setdetachstate(pthread_attr_t* __attr, int __detachstate);
int pthread_attr_getguardsize(pthread_attr_t* __attr, long* __guardsize);
int pthread_attr_setguardsize(pthread_attr_t* __attr, long __guardsize);
int pthread_attr_getschedparam(pthread_attr_t* __attr, struct sched_param* __param);
int pthread_attr_setschedparam(pthread_attr_t* __attr, struct sched_param* __param);
int pthread_attr_getschedpolicy(pthread_attr_t* __attr, int* __policy);
int pthread_attr_setschedpolicy(pthread_attr_t* __attr, int __policy);
int pthread_attr_getinheritsched(pthread_attr_t* __attr, int* __inherit);
int pthread_attr_setinheritsched(pthread_attr_t* __attr, int __inherit);
int pthread_attr_getscope(pthread_attr_t* __attr, int* __scope);
int pthread_attr_setscope(pthread_attr_t* __attr, int __scope);
int pthread_attr_getstackaddr(pthread_attr_t* __attr, void** __stackaddr);
int pthread_attr_setstackaddr(pthread_attr_t* __attr, void* __stackaddr);
int pthread_attr_getstacksize(pthread_attr_t* __attr, long* __stacksize);
int pthread_attr_setstacksize(pthread_attr_t* __attr, long __stacksize);
int pthread_attr_getstack(pthread_attr_t* __attr, void** __stackaddr, long* __stacksize);
int pthread_attr_setstack(pthread_attr_t* __attr, void* __stackaddr, long __stacksize);
int pthread_attr_setaffinity_np(pthread_attr_t* __attr, long __cpusetsize, struct come_anon22* __cpuset);
int pthread_attr_getaffinity_np(pthread_attr_t* __attr, long __cpusetsize, struct come_anon22* __cpuset);
int pthread_getattr_default_np(pthread_attr_t* __attr);
int pthread_attr_setsigmask_np(pthread_attr_t* __attr, struct come_anon6* sigmask);
int pthread_attr_getsigmask_np(pthread_attr_t* __attr, struct come_anon6* sigmask);
int pthread_setattr_default_np(pthread_attr_t* __attr);
int pthread_getattr_np(long __th, pthread_attr_t* __attr);
int pthread_setschedparam(long __target_thread, int __policy, struct sched_param* __param);
int pthread_getschedparam(long __target_thread, int* __policy, struct sched_param* __param);
int pthread_setschedprio(long __target_thread, int __prio);
int pthread_getname_np(long __target_thread, char* __buf, long __buflen);
int pthread_setname_np(long __target_thread, char* __name);
int pthread_getconcurrency();
int pthread_setconcurrency(int __level);
int pthread_yield();
int pthread_setaffinity_np(long __th, long __cpusetsize, struct come_anon22* __cpuset);
int pthread_getaffinity_np(long __th, long __cpusetsize, struct come_anon22* __cpuset);
int pthread_once(int* __once_control, lambda* __init_routine);
int pthread_setcancelstate(int __state, int* __oldstate);
int pthread_setcanceltype(int __type, int* __oldtype);
int pthread_cancel(long __th);
void pthread_testcancel();
void __pthread_register_cancel(struct come_anon43* __buf);
void __pthread_unregister_cancel(struct come_anon43* __buf);
void __pthread_register_cancel_defer(struct come_anon43* __buf);
void __pthread_unregister_cancel_restore(struct come_anon43* __buf);
void __pthread_unwind_next(struct come_anon43* __buf);
int __sigsetjmp(struct __jmp_buf_tag __env, int __savemask);
int pthread_mutex_init(come_anon13* __mutex, come_anon11* __mutexattr);
int pthread_mutex_destroy(come_anon13* __mutex);
int pthread_mutex_trylock(come_anon13* __mutex);
int pthread_mutex_lock(come_anon13* __mutex);
int pthread_mutex_timedlock(come_anon13* __mutex, struct timespec* __abstime);
int pthread_mutex_clocklock(come_anon13* __mutex, int __clockid, struct timespec* __abstime);
int pthread_mutex_unlock(come_anon13* __mutex);
int pthread_mutex_getprioceiling(come_anon13* __mutex, int* __prioceiling);
int pthread_mutex_setprioceiling(come_anon13* __mutex, int __prioceiling, int* __old_ceiling);
int pthread_mutex_consistent(come_anon13* __mutex);
int pthread_mutexattr_init(come_anon11* __attr);
int pthread_mutexattr_destroy(come_anon11* __attr);
int pthread_mutexattr_getpshared(come_anon11* __attr, int* __pshared);
int pthread_mutexattr_setpshared(come_anon11* __attr, int __pshared);
int pthread_mutexattr_gettype(come_anon11* __attr, int* __kind);
int pthread_mutexattr_settype(come_anon11* __attr, int __kind);
int pthread_mutexattr_getprotocol(come_anon11* __attr, int* __protocol);
int pthread_mutexattr_setprotocol(come_anon11* __attr, int __protocol);
int pthread_mutexattr_getprioceiling(come_anon11* __attr, int* __prioceiling);
int pthread_mutexattr_setprioceiling(come_anon11* __attr, int __prioceiling);
int pthread_mutexattr_getrobust(come_anon11* __attr, int* __robustness);
int pthread_mutexattr_setrobust(come_anon11* __attr, int __robustness);
int pthread_rwlock_init(come_anon15* __rwlock, come_anon16* __attr);
int pthread_rwlock_destroy(come_anon15* __rwlock);
int pthread_rwlock_rdlock(come_anon15* __rwlock);
int pthread_rwlock_tryrdlock(come_anon15* __rwlock);
int pthread_rwlock_timedrdlock(come_anon15* __rwlock, struct timespec* __abstime);
int pthread_rwlock_clockrdlock(come_anon15* __rwlock, int __clockid, struct timespec* __abstime);
int pthread_rwlock_wrlock(come_anon15* __rwlock);
int pthread_rwlock_trywrlock(come_anon15* __rwlock);
int pthread_rwlock_timedwrlock(come_anon15* __rwlock, struct timespec* __abstime);
int pthread_rwlock_clockwrlock(come_anon15* __rwlock, int __clockid, struct timespec* __abstime);
int pthread_rwlock_unlock(come_anon15* __rwlock);
int pthread_rwlockattr_init(come_anon16* __attr);
int pthread_rwlockattr_destroy(come_anon16* __attr);
int pthread_rwlockattr_getpshared(come_anon16* __attr, int* __pshared);
int pthread_rwlockattr_setpshared(come_anon16* __attr, int __pshared);
int pthread_rwlockattr_getkind_np(come_anon16* __attr, int* __pref);
int pthread_rwlockattr_setkind_np(come_anon16* __attr, int __pref);
int pthread_cond_init(come_anon14* __cond, come_anon12* __cond_attr);
int pthread_cond_destroy(come_anon14* __cond);
int pthread_cond_signal(come_anon14* __cond);
int pthread_cond_broadcast(come_anon14* __cond);
int pthread_cond_wait(come_anon14* __cond, come_anon13* __mutex);
int pthread_cond_timedwait(come_anon14* __cond, come_anon13* __mutex, struct timespec* __abstime);
int pthread_cond_clockwait(come_anon14* __cond, come_anon13* __mutex, int __clock_id, struct timespec* __abstime);
int pthread_condattr_init(come_anon12* __attr);
int pthread_condattr_destroy(come_anon12* __attr);
int pthread_condattr_getpshared(come_anon12* __attr, int* __pshared);
int pthread_condattr_setpshared(come_anon12* __attr, int __pshared);
int pthread_condattr_getclock(come_anon12* __attr, int* __clock_id);
int pthread_condattr_setclock(come_anon12* __attr, int __clock_id);
int pthread_spin_init(int* __lock, int __pshared);
int pthread_spin_destroy(int* __lock);
int pthread_spin_lock(int* __lock);
int pthread_spin_trylock(int* __lock);
int pthread_spin_unlock(int* __lock);
int pthread_barrier_init(come_anon17* __barrier, come_anon18* __attr, int __count);
int pthread_barrier_destroy(come_anon17* __barrier);
int pthread_barrier_wait(come_anon17* __barrier);
int pthread_barrierattr_init(come_anon18* __attr);
int pthread_barrierattr_destroy(come_anon18* __attr);
int pthread_barrierattr_getpshared(come_anon18* __attr, int* __pshared);
int pthread_barrierattr_setpshared(come_anon18* __attr, int __pshared);
int pthread_key_create(int* __key, lambda* __destr_function);
int pthread_key_delete(int __key);
void* pthread_getspecific(int __key);
int pthread_setspecific(int __key, void* __pointer);
int pthread_getcpuclockid(long __thread_id, int* __clock_id);
int pthread_atfork(lambda* __prepare, lambda* __parent, lambda* __child);
int access(char* __name, int __type);
int euidaccess(char* __name, int __type);
int eaccess(char* __name, int __type);
int execveat(int __fd, char* __path, char* __argv, char* __envp, int __flags);
int faccessat(int __fd, char* __file, int __type, int __flag);
long lseek(int __fd, long __offset, int __whence);
long lseek64(int __fd, long __offset, int __whence);
int close(int __fd);
void closefrom(int __lowfd);
long read(int __fd, void* __buf, long __nbytes);
long write(int __fd, void* __buf, long __n);
long pread(int __fd, void* __buf, long __nbytes, long __offset);
long pwrite(int __fd, void* __buf, long __n, long __offset);
long pread64(int __fd, void* __buf, long __nbytes, long __offset);
long pwrite64(int __fd, void* __buf, long __n, long __offset);
int pipe(int __pipedes);
int pipe2(int __pipedes, int __flags);
int alarm(int __seconds);
int sleep(int __seconds);
int ualarm(int __value, int __interval);
int usleep(int __useconds);
int pause();
int chown(char* __file, int __owner, int __group);
int fchown(int __fd, int __owner, int __group);
int lchown(char* __file, int __owner, int __group);
int fchownat(int __fd, char* __file, int __owner, int __group, int __flag);
int chdir(char* __path);
int fchdir(int __fd);
char* getcwd(char* __buf, long __size);
char* get_current_dir_name();
char* getwd(char* __buf);
int dup(int __fd);
int dup2(int __fd, int __fd2);
int dup3(int __fd, int __fd2, int __flags);
int execve(char* __path, char* __argv, char* __envp);
int fexecve(int __fd, char* __argv, char* __envp);
int execv(char* __path, char* __argv);
int execle(char* __path, char* __arg);
int execl(char* __path, char* __arg);
int execvp(char* __file, char* __argv);
int execlp(char* __file, char* __arg);
int execvpe(char* __file, char* __argv, char* __envp);
int nice(int __inc);
void _exit(int __status);
long pathconf(char* __path, int __name);
long fpathconf(int __fd, int __name);
long sysconf(int __name);
long confstr(int __name, char* __buf, long __len);
int getpid();
int getppid();
int getpgrp();
int __getpgid(int __pid);
int getpgid(int __pid);
int setpgid(int __pid, int __pgid);
int setpgrp();
int setsid();
int getsid(int __pid);
int getuid();
int geteuid();
int getgid();
int getegid();
int getgroups(int __size, int __list);
int group_member(int __gid);
int setuid(int __uid);
int setreuid(int __ruid, int __euid);
int seteuid(int __uid);
int setgid(int __gid);
int setregid(int __rgid, int __egid);
int setegid(int __gid);
int getresuid(int* __ruid, int* __euid, int* __suid);
int getresgid(int* __rgid, int* __egid, int* __sgid);
int setresuid(int __ruid, int __euid, int __suid);
int setresgid(int __rgid, int __egid, int __sgid);
int fork();
int vfork();
int _Fork();
char* ttyname(int __fd);
int ttyname_r(int __fd, char* __buf, long __buflen);
int isatty(int __fd);
int ttyslot();
int link(char* __from, char* __to);
int linkat(int __fromfd, char* __from, int __tofd, char* __to, int __flags);
int symlink(char* __from, char* __to);
long readlink(char* __path, char* __buf, long __len);
int symlinkat(char* __from, int __tofd, char* __to);
long readlinkat(int __fd, char* __path, char* __buf, long __len);
int unlink(char* __name);
int unlinkat(int __fd, char* __name, int __flag);
int rmdir(char* __path);
int tcgetpgrp(int __fd);
int tcsetpgrp(int __fd, int __pgrp_id);
char* getlogin();
int getlogin_r(char* __name, long __name_len);
int setlogin(char* __name);
int getopt(int ___argc, char** ___argv, char* __shortopts);
int gethostname(char* __name, long __len);
int sethostname(char* __name, long __len);
int sethostid(long __id);
int getdomainname(char* __name, long __len);
int setdomainname(char* __name, long __len);
int vhangup();
int revoke(char* __file);
int profil(short* __sample_buffer, long __size, long __offset, int __scale);
int acct(char* __name);
char* getusershell();
void endusershell();
void setusershell();
int daemon(int __nochdir, int __noclose);
int chroot(char* __path);
char* getpass(char* __prompt);
int fsync(int __fd);
int syncfs(int __fd);
long gethostid();
void sync();
int getpagesize();
int getdtablesize();
int truncate(char* __file, long __length);
int truncate64(char* __file, long __length);
int ftruncate(int __fd, long __length);
int ftruncate64(int __fd, long __length);
int brk(void* __addr);
void* sbrk(long __delta);
long syscall(long __sysno);
int lockf(int __fd, int __cmd, long __len);
int lockf64(int __fd, int __cmd, long __len);
long copy_file_range(int __infd, long* __pinoff, int __outfd, long* __poutoff, long __length, int __flags);
int fdatasync(int __fildes);
char* crypt(char* __key, char* __salt);
void swab(void* __from, void* __to, long __n);
int getentropy(void* __buffer, long __length);
int close_range(int __fd, int __max_fd, int __flags);
int gettid();
int stat(char* __file, struct stat* __buf);
int fstat(int __fd, struct stat* __buf);
int stat64(char* __file, struct stat64* __buf);
int fstat64(int __fd, struct stat64* __buf);
int fstatat(int __fd, char* __file, struct stat* __buf, int __flag);
int fstatat64(int __fd, char* __file, struct stat64* __buf, int __flag);
int lstat(char* __file, struct stat* __buf);
int lstat64(char* __file, struct stat64* __buf);
int chmod(char* __file, int __mode);
int lchmod(char* __file, int __mode);
int fchmod(int __fd, int __mode);
int fchmodat(int __fd, char* __file, int __mode, int __flag);
int umask(int __mask);
int getumask();
int mkdir(char* __path, int __mode);
int mkdirat(int __fd, char* __path, int __mode);
int mknod(char* __path, int __mode, long __dev);
int mknodat(int __fd, char* __path, int __mode, long __dev);
int mkfifo(char* __path, int __mode);
int mkfifoat(int __fd, char* __path, int __mode);
int utimensat(int __fd, char* __path, struct timespec __times, int __flags);
int futimens(int __fd, struct timespec __times);
int statx(int __dirfd, char* __path, int __flags, int __mask, struct statx* __buf);
void __assert_fail(char* __assertion, char* __file, int __line, char* __function);
void __assert_perror_fail(int __errnum, char* __file, int __line, char* __function);
void __assert(char* __assertion, char* __file, int __line);
struct real_pcre* pcre_compile(char* , int , char** , int* , char* );
struct real_pcre16* pcre16_compile(short* , int , char** , int* , char* );
struct real_pcre32* pcre32_compile(int* , int , char** , int* , char* );
struct real_pcre* pcre_compile2(char* , int , int* , char** , int* , char* );
struct real_pcre16* pcre16_compile2(short* , int , int* , char** , int* , char* );
struct real_pcre32* pcre32_compile2(int* , int , int* , char** , int* , char* );
int pcre_config(int , void* );
int pcre16_config(int , void* );
int pcre32_config(int , void* );
int pcre_copy_named_substring(struct real_pcre* , char* , int* , int , char* , char* , int );
int pcre16_copy_named_substring(struct real_pcre16* , short* , int* , int , short* , short* , int );
int pcre32_copy_named_substring(struct real_pcre32* , int* , int* , int , int* , int* , int );
int pcre_copy_substring(char* , int* , int , int , char* , int );
int pcre16_copy_substring(short* , int* , int , int , short* , int );
int pcre32_copy_substring(int* , int* , int , int , int* , int );
int pcre_dfa_exec(struct real_pcre* , struct pcre_extra* , char* , int , int , int , int* , int , int* , int );
int pcre16_dfa_exec(struct real_pcre16* , struct pcre16_extra* , short* , int , int , int , int* , int , int* , int );
int pcre32_dfa_exec(struct real_pcre32* , struct pcre32_extra* , int* , int , int , int , int* , int , int* , int );
int pcre_exec(struct real_pcre* , struct pcre_extra* , char* , int , int , int , int* , int );
int pcre16_exec(struct real_pcre16* , struct pcre16_extra* , short* , int , int , int , int* , int );
int pcre32_exec(struct real_pcre32* , struct pcre32_extra* , int* , int , int , int , int* , int );
int pcre_jit_exec(struct real_pcre* , struct pcre_extra* , char* , int , int , int , int* , int , struct real_pcre_jit_stack* );
int pcre16_jit_exec(struct real_pcre16* , struct pcre16_extra* , short* , int , int , int , int* , int , struct real_pcre16_jit_stack* );
int pcre32_jit_exec(struct real_pcre32* , struct pcre32_extra* , int* , int , int , int , int* , int , struct real_pcre32_jit_stack* );
void pcre_free_substring(char* );
void pcre16_free_substring(short* );
void pcre32_free_substring(int* );
void pcre_free_substring_list(char** );
void pcre16_free_substring_list(short** );
void pcre32_free_substring_list(int** );
int pcre_fullinfo(struct real_pcre* , struct pcre_extra* , int , void* );
int pcre16_fullinfo(struct real_pcre16* , struct pcre16_extra* , int , void* );
int pcre32_fullinfo(struct real_pcre32* , struct pcre32_extra* , int , void* );
int pcre_get_named_substring(struct real_pcre* , char* , int* , int , char* , char** );
int pcre16_get_named_substring(struct real_pcre16* , short* , int* , int , short* , short** );
int pcre32_get_named_substring(struct real_pcre32* , int* , int* , int , int* , int** );
int pcre_get_stringnumber(struct real_pcre* , char* );
int pcre16_get_stringnumber(struct real_pcre16* , short* );
int pcre32_get_stringnumber(struct real_pcre32* , int* );
int pcre_get_stringtable_entries(struct real_pcre* , char* , char** , char** );
int pcre16_get_stringtable_entries(struct real_pcre16* , short* , short** , short** );
int pcre32_get_stringtable_entries(struct real_pcre32* , int* , int** , int** );
int pcre_get_substring(char* , int* , int , int , char** );
int pcre16_get_substring(short* , int* , int , int , short** );
int pcre32_get_substring(int* , int* , int , int , int** );
int pcre_get_substring_list(char* , int* , int , char*** );
int pcre16_get_substring_list(short* , int* , int , short*** );
int pcre32_get_substring_list(int* , int* , int , int*** );
char* pcre_maketables();
char* pcre16_maketables();
char* pcre32_maketables();
int pcre_refcount(struct real_pcre* , int );
int pcre16_refcount(struct real_pcre16* , int );
int pcre32_refcount(struct real_pcre32* , int );
struct pcre_extra* pcre_study(struct real_pcre* , int , char** );
struct pcre16_extra* pcre16_study(struct real_pcre16* , int , char** );
struct pcre32_extra* pcre32_study(struct real_pcre32* , int , char** );
void pcre_free_study(struct pcre_extra* );
void pcre16_free_study(struct pcre16_extra* );
void pcre32_free_study(struct pcre32_extra* );
char* pcre_version();
char* pcre16_version();
char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre* , struct pcre_extra* , char* );
int pcre16_pattern_to_host_byte_order(struct real_pcre16* , struct pcre16_extra* , char* );
int pcre32_pattern_to_host_byte_order(struct real_pcre32* , struct pcre32_extra* , char* );
int pcre16_utf16_to_host_byte_order(short* , short* , int , int* , int );
int pcre32_utf32_to_host_byte_order(int* , int* , int , int* , int );
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int , int );
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int , int );
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int , int );
void pcre_jit_stack_free(struct real_pcre_jit_stack* );
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* );
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* );
void pcre_assign_jit_stack(struct pcre_extra* , lambda* , void* );
void pcre16_assign_jit_stack(struct pcre16_extra* , lambda* , void* );
void pcre32_assign_jit_stack(struct pcre32_extra* , lambda* , void* );
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
int ioctl(int __fd, long __request);
char* setlocale(int __category, char* __locale);
struct lconv* localeconv();
struct __locale_struct* newlocale(int __category_mask, char* __locale, struct __locale_struct* __base);
struct __locale_struct* duplocale(struct __locale_struct* __dataset);
void freelocale(struct __locale_struct* __dataset);
struct __locale_struct* uselocale(struct __locale_struct* __dataset);
int iswalnum(int __wc);
int iswalpha(int __wc);
int iswcntrl(int __wc);
int iswdigit(int __wc);
int iswgraph(int __wc);
int iswlower(int __wc);
int iswprint(int __wc);
int iswpunct(int __wc);
int iswspace(int __wc);
int iswupper(int __wc);
int iswxdigit(int __wc);
int iswblank(int __wc);
long wctype(char* __property);
int iswctype(int __wc, long __desc);
int towlower(int __wc);
int towupper(int __wc);
int* wctrans(char* __property);
int towctrans(int __wc, int* __desc);
int iswalnum_l(int __wc, struct __locale_struct* __locale);
int iswalpha_l(int __wc, struct __locale_struct* __locale);
int iswcntrl_l(int __wc, struct __locale_struct* __locale);
int iswdigit_l(int __wc, struct __locale_struct* __locale);
int iswgraph_l(int __wc, struct __locale_struct* __locale);
int iswlower_l(int __wc, struct __locale_struct* __locale);
int iswprint_l(int __wc, struct __locale_struct* __locale);
int iswpunct_l(int __wc, struct __locale_struct* __locale);
int iswspace_l(int __wc, struct __locale_struct* __locale);
int iswupper_l(int __wc, struct __locale_struct* __locale);
int iswxdigit_l(int __wc, struct __locale_struct* __locale);
int iswblank_l(int __wc, struct __locale_struct* __locale);
long wctype_l(char* __property, struct __locale_struct* __locale);
int iswctype_l(int __wc, long __desc, struct __locale_struct* __locale);
int towlower_l(int __wc, struct __locale_struct* __locale);
int towupper_l(int __wc, struct __locale_struct* __locale);
int* wctrans_l(char* __property, struct __locale_struct* __locale);
int towctrans_l(int __wc, int* __desc, struct __locale_struct* __locale);
int* __errno_location();
int* wcscpy(int* __dest, int* __src);
int* wcsncpy(int* __dest, int* __src, long __n);
int* wcscat(int* __dest, int* __src);
int* wcsncat(int* __dest, int* __src, long __n);
int wcscmp(int* __s1, int* __s2);
int wcsncmp(int* __s1, int* __s2, long __n);
int wcscasecmp(int* __s1, int* __s2);
int wcsncasecmp(int* __s1, int* __s2, long __n);
int wcscasecmp_l(int* __s1, int* __s2, struct __locale_struct* __loc);
int wcsncasecmp_l(int* __s1, int* __s2, long __n, struct __locale_struct* __loc);
int wcscoll(int* __s1, int* __s2);
long wcsxfrm(int* __s1, int* __s2, long __n);
int wcscoll_l(int* __s1, int* __s2, struct __locale_struct* __loc);
long wcsxfrm_l(int* __s1, int* __s2, long __n, struct __locale_struct* __loc);
int* wcsdup(int* __s);
int* wcschr(int* __wcs, int __wc);
int* wcsrchr(int* __wcs, int __wc);
int* wcschrnul(int* __s, int __wc);
long wcscspn(int* __wcs, int* __reject);
long wcsspn(int* __wcs, int* __accept);
int* wcspbrk(int* __wcs, int* __accept);
int* wcsstr(int* __haystack, int* __needle);
int* wcstok(int* __s, int* __delim, int** __ptr);
long wcslen(int* __s);
int* wcswcs(int* __haystack, int* __needle);
long wcsnlen(int* __s, long __maxlen);
int* wmemchr(int* __s, int __c, long __n);
int wmemcmp(int* __s1, int* __s2, long __n);
int* wmemcpy(int* __s1, int* __s2, long __n);
int* wmemmove(int* __s1, int* __s2, long __n);
int* wmemset(int* __s, int __c, long __n);
int* wmempcpy(int* __s1, int* __s2, long __n);
int btowc(int __c);
int wctob(int __c);
int mbsinit(struct come_anon1* __ps);
long mbrtowc(int* __pwc, char* __s, long __n, struct come_anon1* __p);
long wcrtomb(char* __s, int __wc, struct come_anon1* __ps);
long __mbrlen(char* __s, long __n, struct come_anon1* __ps);
long mbrlen(char* __s, long __n, struct come_anon1* __ps);
long mbsrtowcs(int* __dst, char** __src, long __len, struct come_anon1* __ps);
long wcsrtombs(char* __dst, int** __src, long __len, struct come_anon1* __ps);
long mbsnrtowcs(int* __dst, char** __src, long __nmc, long __len, struct come_anon1* __ps);
long wcsnrtombs(char* __dst, int** __src, long __nwc, long __len, struct come_anon1* __ps);
int wcwidth(int __c);
int wcswidth(int* __s, long __n);
double wcstod(int* __nptr, int** __endptr);
float wcstof(int* __nptr, int** __endptr);
long_double wcstold(int* __nptr, int** __endptr);
float wcstof32(int* __nptr, int** __endptr);
double wcstof64(int* __nptr, int** __endptr);
double wcstof32x(int* __nptr, int** __endptr);
long_double wcstof64x(int* __nptr, int** __endptr);
long wcstol(int* __nptr, int** __endptr, int __base);
long wcstoul(int* __nptr, int** __endptr, int __base);
long wcstoll(int* __nptr, int** __endptr, int __base);
long wcstoull(int* __nptr, int** __endptr, int __base);
long wcstoq(int* __nptr, int** __endptr, int __base);
long wcstouq(int* __nptr, int** __endptr, int __base);
long wcstol_l(int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
long wcstoul_l(int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
long wcstoll_l(int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
long wcstoull_l(int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
double wcstod_l(int* __nptr, int** __endptr, struct __locale_struct* __loc);
float wcstof_l(int* __nptr, int** __endptr, struct __locale_struct* __loc);
long_double wcstold_l(int* __nptr, int** __endptr, struct __locale_struct* __loc);
float wcstof32_l(int* __nptr, int** __endptr, struct __locale_struct* __loc);
double wcstof64_l(int* __nptr, int** __endptr, struct __locale_struct* __loc);
double wcstof32x_l(int* __nptr, int** __endptr, struct __locale_struct* __loc);
long_double wcstof64x_l(int* __nptr, int** __endptr, struct __locale_struct* __loc);
int* wcpcpy(int* __dest, int* __src);
int* wcpncpy(int* __dest, int* __src, long __n);
struct _IO_FILE* open_wmemstream(int** __bufloc, long* __sizeloc);
int fwide(struct _IO_FILE* __fp, int __mode);
int fwprintf(struct _IO_FILE* __stream, int* __format);
int wprintf(int* __format);
int swprintf(int* __s, long __n, int* __format);
int vfwprintf(struct _IO_FILE* __s, int* __format, struct __builtin_va_list __arg);
int vwprintf(int* __format, struct __builtin_va_list __arg);
int vswprintf(int* __s, long __n, int* __format, struct __builtin_va_list __arg);
int fwscanf(struct _IO_FILE* __stream, int* __format);
int wscanf(int* __format);
int swscanf(int* __s, int* __format);
int __isoc99_fwscanf(struct _IO_FILE* __stream, int* __format);
int __isoc99_wscanf(int* __format);
int __isoc99_swscanf(int* __s, int* __format);
int vfwscanf(struct _IO_FILE* __s, int* __format, struct __builtin_va_list __arg);
int vwscanf(int* __format, struct __builtin_va_list __arg);
int vswscanf(int* __s, int* __format, struct __builtin_va_list __arg);
int __isoc99_vfwscanf(struct _IO_FILE* __s, int* __format, struct __builtin_va_list __arg);
int __isoc99_vwscanf(int* __format, struct __builtin_va_list __arg);
int __isoc99_vswscanf(int* __s, int* __format, struct __builtin_va_list __arg);
int fgetwc(struct _IO_FILE* __stream);
int getwc(struct _IO_FILE* __stream);
int getwchar();
int fputwc(int __wc, struct _IO_FILE* __stream);
int putwc(int __wc, struct _IO_FILE* __stream);
int putwchar(int __wc);
int* fgetws(int* __ws, int __n, struct _IO_FILE* __stream);
int fputws(int* __ws, struct _IO_FILE* __stream);
int ungetwc(int __wc, struct _IO_FILE* __stream);
int getwc_unlocked(struct _IO_FILE* __stream);
int getwchar_unlocked();
int fgetwc_unlocked(struct _IO_FILE* __stream);
int fputwc_unlocked(int __wc, struct _IO_FILE* __stream);
int putwc_unlocked(int __wc, struct _IO_FILE* __stream);
int putwchar_unlocked(int __wc);
int* fgetws_unlocked(int* __ws, int __n, struct _IO_FILE* __stream);
int fputws_unlocked(int* __ws, struct _IO_FILE* __stream);
long wcsftime(int* __s, long __maxsize, int* __format, struct tm* __tp);
long wcsftime_l(int* __s, long __maxsize, int* __format, struct tm* __tp, struct __locale_struct* __loc);
int addch(int );
int addchnstr(int* , int );
int addchstr(int* );
int addnstr(char* , int );
int addstr(char* );
int attroff(int );
int attron(int );
int attrset(int );
int attr_get(int* , short* , void* );
int attr_off(int , void* );
int attr_on(int , void* );
int attr_set(int , short , void* );
int baudrate();
int beep();
int bkgd(int );
void bkgdset(int );
int border(int , int , int , int , int , int , int , int );
int box(struct _win_st* , int , int );
bool can_change_color();
int cbreak();
int chgat(int , int , short , void* );
int clear();
int clearok(struct _win_st* , bool );
int clrtobot();
int clrtoeol();
int color_content(short , short* , short* , short* );
int color_set(short , void* );
int COLOR_PAIR(int );
int copywin(struct _win_st* , struct _win_st* , int , int , int , int , int , int , int );
int curs_set(int );
int def_prog_mode();
int def_shell_mode();
int delay_output(int );
int delch();
void delscreen(struct screen* );
int delwin(struct _win_st* );
int deleteln();
struct _win_st* derwin(struct _win_st* , int , int , int , int );
int doupdate();
struct _win_st* dupwin(struct _win_st* );
int echo();
int echochar(int );
int erase();
int endwin();
char erasechar();
void filter();
int flash();
int flushinp();
int getbkgd(struct _win_st* );
int getch();
int getnstr(char* , int );
int getstr(char* );
struct _win_st* getwin(struct _IO_FILE* );
int halfdelay(int );
bool has_colors();
bool has_ic();
bool has_il();
int hline(int , int );
void idcok(struct _win_st* , bool );
int idlok(struct _win_st* , bool );
void immedok(struct _win_st* , bool );
int inch();
int inchnstr(int* , int );
int inchstr(int* );
struct _win_st* initscr();
int init_color(short , short , short , short );
int init_pair(short , short , short );
int innstr(char* , int );
int insch(int );
int insdelln(int );
int insertln();
int insnstr(char* , int );
int insstr(char* );
int instr(char* );
int intrflush(struct _win_st* , bool );
bool isendwin();
bool is_linetouched(struct _win_st* , int );
bool is_wintouched(struct _win_st* );
char* keyname(int );
int keypad(struct _win_st* , bool );
char killchar();
int leaveok(struct _win_st* , bool );
char* longname();
int meta(struct _win_st* , bool );
int move(int , int );
int mvaddch(int , int , int );
int mvaddchnstr(int , int , int* , int );
int mvaddchstr(int , int , int* );
int mvaddnstr(int , int , char* , int );
int mvaddstr(int , int , char* );
int mvchgat(int , int , int , int , short , void* );
int mvcur(int , int , int , int );
int mvdelch(int , int );
int mvderwin(struct _win_st* , int , int );
int mvgetch(int , int );
int mvgetnstr(int , int , char* , int );
int mvgetstr(int , int , char* );
int mvhline(int , int , int , int );
int mvinch(int , int );
int mvinchnstr(int , int , int* , int );
int mvinchstr(int , int , int* );
int mvinnstr(int , int , char* , int );
int mvinsch(int , int , int );
int mvinsnstr(int , int , char* , int );
int mvinsstr(int , int , char* );
int mvinstr(int , int , char* );
int mvprintw(int , int , char* );
int mvscanw(int , int , char* );
int mvvline(int , int , int , int );
int mvwaddch(struct _win_st* , int , int , int );
int mvwaddchnstr(struct _win_st* , int , int , int* , int );
int mvwaddchstr(struct _win_st* , int , int , int* );
int mvwaddnstr(struct _win_st* , int , int , char* , int );
int mvwaddstr(struct _win_st* , int , int , char* );
int mvwchgat(struct _win_st* , int , int , int , int , short , void* );
int mvwdelch(struct _win_st* , int , int );
int mvwgetch(struct _win_st* , int , int );
int mvwgetnstr(struct _win_st* , int , int , char* , int );
int mvwgetstr(struct _win_st* , int , int , char* );
int mvwhline(struct _win_st* , int , int , int , int );
int mvwin(struct _win_st* , int , int );
int mvwinch(struct _win_st* , int , int );
int mvwinchnstr(struct _win_st* , int , int , int* , int );
int mvwinchstr(struct _win_st* , int , int , int* );
int mvwinnstr(struct _win_st* , int , int , char* , int );
int mvwinsch(struct _win_st* , int , int , int );
int mvwinsnstr(struct _win_st* , int , int , char* , int );
int mvwinsstr(struct _win_st* , int , int , char* );
int mvwinstr(struct _win_st* , int , int , char* );
int mvwprintw(struct _win_st* , int , int , char* );
int mvwscanw(struct _win_st* , int , int , char* );
int mvwvline(struct _win_st* , int , int , int , int );
int napms(int );
struct _win_st* newpad(int , int );
struct screen* newterm(char* , struct _IO_FILE* , struct _IO_FILE* );
struct _win_st* newwin(int , int , int , int );
int nl();
int nocbreak();
int nodelay(struct _win_st* , bool );
int noecho();
int nonl();
void noqiflush();
int noraw();
int notimeout(struct _win_st* , bool );
int overlay(struct _win_st* , struct _win_st* );
int overwrite(struct _win_st* , struct _win_st* );
int pair_content(short , short* , short* );
int PAIR_NUMBER(int );
int pechochar(struct _win_st* , int );
int pnoutrefresh(struct _win_st* , int , int , int , int , int , int );
int prefresh(struct _win_st* , int , int , int , int , int , int );
int printw(char* );
int putwin(struct _win_st* , struct _IO_FILE* );
void qiflush();
int raw();
int redrawwin(struct _win_st* );
int refresh();
int resetty();
int reset_prog_mode();
int reset_shell_mode();
int ripoffline(int , lambda* anon_fun);
int savetty();
int scanw(char* );
int scr_dump(char* );
int scr_init(char* );
int scrl(int );
int scroll(struct _win_st* );
int scrollok(struct _win_st* , bool );
int scr_restore(char* );
int scr_set(char* );
int setscrreg(int , int );
struct screen* set_term(struct screen* );
int slk_attroff(int );
int slk_attr_off(int , void* );
int slk_attron(int );
int slk_attr_on(int , void* );
int slk_attrset(int );
int slk_attr();
int slk_attr_set(int , short , void* );
int slk_clear();
int slk_color(short );
int slk_init(int );
char* slk_label(int );
int slk_noutrefresh();
int slk_refresh();
int slk_restore();
int slk_set(int , char* , int );
int slk_touch();
int standout();
int standend();
int start_color();
struct _win_st* subpad(struct _win_st* , int , int , int , int );
struct _win_st* subwin(struct _win_st* , int , int , int , int );
int syncok(struct _win_st* , bool );
int termattrs();
char* termname();
void timeout(int );
int touchline(struct _win_st* , int , int );
int touchwin(struct _win_st* );
int typeahead(int );
int ungetch(int );
int untouchwin(struct _win_st* );
void use_env(bool );
void use_tioctl(bool );
int vidattr(int );
int vidputs(int , lambda* );
int vline(int , int );
int vwprintw(struct _win_st* , char* , struct __builtin_va_list );
int vw_printw(struct _win_st* , char* , struct __builtin_va_list );
int vwscanw(struct _win_st* , char* , struct __builtin_va_list );
int vw_scanw(struct _win_st* , char* , struct __builtin_va_list );
int waddch(struct _win_st* , int );
int waddchnstr(struct _win_st* , int* , int );
int waddchstr(struct _win_st* , int* );
int waddnstr(struct _win_st* , char* , int );
int waddstr(struct _win_st* , char* );
int wattron(struct _win_st* , int );
int wattroff(struct _win_st* , int );
int wattrset(struct _win_st* , int );
int wattr_get(struct _win_st* , int* , short* , void* );
int wattr_on(struct _win_st* , int , void* );
int wattr_off(struct _win_st* , int , void* );
int wattr_set(struct _win_st* , int , short , void* );
int wbkgd(struct _win_st* , int );
void wbkgdset(struct _win_st* , int );
int wborder(struct _win_st* , int , int , int , int , int , int , int , int );
int wchgat(struct _win_st* , int , int , short , void* );
int wclear(struct _win_st* );
int wclrtobot(struct _win_st* );
int wclrtoeol(struct _win_st* );
int wcolor_set(struct _win_st* , short , void* );
void wcursyncup(struct _win_st* );
int wdelch(struct _win_st* );
int wdeleteln(struct _win_st* );
int wechochar(struct _win_st* , int );
int werase(struct _win_st* );
int wgetch(struct _win_st* );
int wgetnstr(struct _win_st* , char* , int );
int wgetstr(struct _win_st* , char* );
int whline(struct _win_st* , int , int );
int winch(struct _win_st* );
int winchnstr(struct _win_st* , int* , int );
int winchstr(struct _win_st* , int* );
int winnstr(struct _win_st* , char* , int );
int winsch(struct _win_st* , int );
int winsdelln(struct _win_st* , int );
int winsertln(struct _win_st* );
int winsnstr(struct _win_st* , char* , int );
int winsstr(struct _win_st* , char* );
int winstr(struct _win_st* , char* );
int wmove(struct _win_st* , int , int );
int wnoutrefresh(struct _win_st* );
int wprintw(struct _win_st* , char* );
int wredrawln(struct _win_st* , int , int );
int wrefresh(struct _win_st* );
int wscanw(struct _win_st* , char* );
int wscrl(struct _win_st* , int );
int wsetscrreg(struct _win_st* , int , int );
int wstandout(struct _win_st* );
int wstandend(struct _win_st* );
void wsyncdown(struct _win_st* );
void wsyncup(struct _win_st* );
void wtimeout(struct _win_st* , int );
int wtouchln(struct _win_st* , int , int , int );
int wvline(struct _win_st* , int , int );
int tigetflag(char* );
int tigetnum(char* );
char* tigetstr(char* );
int putp(char* );
char* tparm(char* );
char* tiparm(char* );
int getattrs(struct _win_st* );
int getcurx(struct _win_st* );
int getcury(struct _win_st* );
int getbegx(struct _win_st* );
int getbegy(struct _win_st* );
int getmaxx(struct _win_st* );
int getmaxy(struct _win_st* );
int getparx(struct _win_st* );
int getpary(struct _win_st* );
bool is_term_resized(int , int );
char* keybound(int , int );
char* curses_version();
int alloc_pair(int , int );
int assume_default_colors(int , int );
int define_key(char* , int );
int extended_color_content(int , int* , int* , int* );
int extended_pair_content(int , int* , int* );
int extended_slk_color(int );
int find_pair(int , int );
int free_pair(int );
int get_escdelay();
int init_extended_color(int , int , int , int );
int init_extended_pair(int , int , int );
int key_defined(char* );
int keyok(int , bool );
void reset_color_pairs();
int resize_term(int , int );
int resizeterm(int , int );
int set_escdelay(int );
int set_tabsize(int );
int use_default_colors();
int use_extended_names(bool );
int use_legacy_coding(int );
int use_screen(struct screen* , lambda* , void* );
int use_window(struct _win_st* , lambda* , void* );
int wresize(struct _win_st* , int , int );
void nofilter();
struct _win_st* wgetparent(struct _win_st* );
bool is_cleared(struct _win_st* );
bool is_idcok(struct _win_st* );
bool is_idlok(struct _win_st* );
bool is_immedok(struct _win_st* );
bool is_keypad(struct _win_st* );
bool is_leaveok(struct _win_st* );
bool is_nodelay(struct _win_st* );
bool is_notimeout(struct _win_st* );
bool is_pad(struct _win_st* );
bool is_scrollok(struct _win_st* );
bool is_subwin(struct _win_st* );
bool is_syncok(struct _win_st* );
int wgetdelay(struct _win_st* );
int wgetscrreg(struct _win_st* , int* , int* );
struct screen* new_prescr();
int baudrate_sp(struct screen* );
int beep_sp(struct screen* );
bool can_change_color_sp(struct screen* );
int cbreak_sp(struct screen* );
int curs_set_sp(struct screen* , int );
int color_content_sp(struct screen* , short , short* , short* , short* );
int def_prog_mode_sp(struct screen* );
int def_shell_mode_sp(struct screen* );
int delay_output_sp(struct screen* , int );
int doupdate_sp(struct screen* );
int echo_sp(struct screen* );
int endwin_sp(struct screen* );
char erasechar_sp(struct screen* );
void filter_sp(struct screen* );
int flash_sp(struct screen* );
int flushinp_sp(struct screen* );
struct _win_st* getwin_sp(struct screen* , struct _IO_FILE* );
int halfdelay_sp(struct screen* , int );
bool has_colors_sp(struct screen* );
bool has_ic_sp(struct screen* );
bool has_il_sp(struct screen* );
int init_color_sp(struct screen* , short , short , short , short );
int init_pair_sp(struct screen* , short , short , short );
int intrflush_sp(struct screen* , struct _win_st* , bool );
bool isendwin_sp(struct screen* );
char* keyname_sp(struct screen* , int );
char killchar_sp(struct screen* );
char* longname_sp(struct screen* );
int mvcur_sp(struct screen* , int , int , int , int );
int napms_sp(struct screen* , int );
struct _win_st* newpad_sp(struct screen* , int , int );
struct screen* newterm_sp(struct screen* , char* , struct _IO_FILE* , struct _IO_FILE* );
struct _win_st* newwin_sp(struct screen* , int , int , int , int );
int nl_sp(struct screen* );
int nocbreak_sp(struct screen* );
int noecho_sp(struct screen* );
int nonl_sp(struct screen* );
void noqiflush_sp(struct screen* );
int noraw_sp(struct screen* );
int pair_content_sp(struct screen* , short , short* , short* );
void qiflush_sp(struct screen* );
int raw_sp(struct screen* );
int reset_prog_mode_sp(struct screen* );
int reset_shell_mode_sp(struct screen* );
int resetty_sp(struct screen* );
int ripoffline_sp(struct screen* , int , lambda* anon_fun);
int savetty_sp(struct screen* );
int scr_init_sp(struct screen* , char* );
int scr_restore_sp(struct screen* , char* );
int scr_set_sp(struct screen* , char* );
int slk_attroff_sp(struct screen* , int );
int slk_attron_sp(struct screen* , int );
int slk_attrset_sp(struct screen* , int );
int slk_attr_sp(struct screen* );
int slk_attr_set_sp(struct screen* , int , short , void* );
int slk_clear_sp(struct screen* );
int slk_color_sp(struct screen* , short );
int slk_init_sp(struct screen* , int );
char* slk_label_sp(struct screen* , int );
int slk_noutrefresh_sp(struct screen* );
int slk_refresh_sp(struct screen* );
int slk_restore_sp(struct screen* );
int slk_set_sp(struct screen* , int , char* , int );
int slk_touch_sp(struct screen* );
int start_color_sp(struct screen* );
int termattrs_sp(struct screen* );
char* termname_sp(struct screen* );
int typeahead_sp(struct screen* , int );
int ungetch_sp(struct screen* , int );
void use_env_sp(struct screen* , bool );
void use_tioctl_sp(struct screen* , bool );
int vidattr_sp(struct screen* , int );
int vidputs_sp(struct screen* , int , lambda* );
char* keybound_sp(struct screen* , int , int );
int alloc_pair_sp(struct screen* , int , int );
int assume_default_colors_sp(struct screen* , int , int );
int define_key_sp(struct screen* , char* , int );
int extended_color_content_sp(struct screen* , int , int* , int* , int* );
int extended_pair_content_sp(struct screen* , int , int* , int* );
int extended_slk_color_sp(struct screen* , int );
int get_escdelay_sp(struct screen* );
int find_pair_sp(struct screen* , int , int );
int free_pair_sp(struct screen* , int );
int init_extended_color_sp(struct screen* , int , int , int , int );
int init_extended_pair_sp(struct screen* , int , int , int );
bool is_term_resized_sp(struct screen* , int , int );
int key_defined_sp(struct screen* , char* );
int keyok_sp(struct screen* , int , bool );
void nofilter_sp(struct screen* );
void reset_color_pairs_sp(struct screen* );
int resize_term_sp(struct screen* , int , int );
int resizeterm_sp(struct screen* , int , int );
int set_escdelay_sp(struct screen* , int );
int set_tabsize_sp(struct screen* , int );
int use_default_colors_sp(struct screen* );
int use_legacy_coding_sp(struct screen* , int );
int add_wch(struct come_anon54* );
int add_wchnstr(struct come_anon54* , int );
int add_wchstr(struct come_anon54* );
int addnwstr(int* , int );
int addwstr(int* );
int bkgrnd(struct come_anon54* );
void bkgrndset(struct come_anon54* );
int border_set(struct come_anon54* , struct come_anon54* , struct come_anon54* , struct come_anon54* , struct come_anon54* , struct come_anon54* , struct come_anon54* , struct come_anon54* );
int box_set(struct _win_st* , struct come_anon54* , struct come_anon54* );
int echo_wchar(struct come_anon54* );
int erasewchar(int* );
int get_wch(int* );
int get_wstr(int* );
int getbkgrnd(struct come_anon54* );
int getcchar(struct come_anon54* , int* , int* , short* , void* );
int getn_wstr(int* , int );
int hline_set(struct come_anon54* , int );
int in_wch(struct come_anon54* );
int in_wchnstr(struct come_anon54* , int );
int in_wchstr(struct come_anon54* );
int innwstr(int* , int );
int ins_nwstr(int* , int );
int ins_wch(struct come_anon54* );
int ins_wstr(int* );
int inwstr(int* );
char* key_name(int );
int killwchar(int* );
int mvadd_wch(int , int , struct come_anon54* );
int mvadd_wchnstr(int , int , struct come_anon54* , int );
int mvadd_wchstr(int , int , struct come_anon54* );
int mvaddnwstr(int , int , int* , int );
int mvaddwstr(int , int , int* );
int mvget_wch(int , int , int* );
int mvget_wstr(int , int , int* );
int mvgetn_wstr(int , int , int* , int );
int mvhline_set(int , int , struct come_anon54* , int );
int mvin_wch(int , int , struct come_anon54* );
int mvin_wchnstr(int , int , struct come_anon54* , int );
int mvin_wchstr(int , int , struct come_anon54* );
int mvinnwstr(int , int , int* , int );
int mvins_nwstr(int , int , int* , int );
int mvins_wch(int , int , struct come_anon54* );
int mvins_wstr(int , int , int* );
int mvinwstr(int , int , int* );
int mvvline_set(int , int , struct come_anon54* , int );
int mvwadd_wch(struct _win_st* , int , int , struct come_anon54* );
int mvwadd_wchnstr(struct _win_st* , int , int , struct come_anon54* , int );
int mvwadd_wchstr(struct _win_st* , int , int , struct come_anon54* );
int mvwaddnwstr(struct _win_st* , int , int , int* , int );
int mvwaddwstr(struct _win_st* , int , int , int* );
int mvwget_wch(struct _win_st* , int , int , int* );
int mvwget_wstr(struct _win_st* , int , int , int* );
int mvwgetn_wstr(struct _win_st* , int , int , int* , int );
int mvwhline_set(struct _win_st* , int , int , struct come_anon54* , int );
int mvwin_wch(struct _win_st* , int , int , struct come_anon54* );
int mvwin_wchnstr(struct _win_st* , int , int , struct come_anon54* , int );
int mvwin_wchstr(struct _win_st* , int , int , struct come_anon54* );
int mvwinnwstr(struct _win_st* , int , int , int* , int );
int mvwins_nwstr(struct _win_st* , int , int , int* , int );
int mvwins_wch(struct _win_st* , int , int , struct come_anon54* );
int mvwins_wstr(struct _win_st* , int , int , int* );
int mvwinwstr(struct _win_st* , int , int , int* );
int mvwvline_set(struct _win_st* , int , int , struct come_anon54* , int );
int pecho_wchar(struct _win_st* , struct come_anon54* );
int setcchar(struct come_anon54* , int* , int , short , void* );
int slk_wset(int , int* , int );
int term_attrs();
int unget_wch(int );
int vid_attr(int , short , void* );
int vid_puts(int , short , void* , lambda* );
int vline_set(struct come_anon54* , int );
int wadd_wch(struct _win_st* , struct come_anon54* );
int wadd_wchnstr(struct _win_st* , struct come_anon54* , int );
int wadd_wchstr(struct _win_st* , struct come_anon54* );
int waddnwstr(struct _win_st* , int* , int );
int waddwstr(struct _win_st* , int* );
int wbkgrnd(struct _win_st* , struct come_anon54* );
void wbkgrndset(struct _win_st* , struct come_anon54* );
int wborder_set(struct _win_st* , struct come_anon54* , struct come_anon54* , struct come_anon54* , struct come_anon54* , struct come_anon54* , struct come_anon54* , struct come_anon54* , struct come_anon54* );
int wecho_wchar(struct _win_st* , struct come_anon54* );
int wget_wch(struct _win_st* , int* );
int wget_wstr(struct _win_st* , int* );
int wgetbkgrnd(struct _win_st* , struct come_anon54* );
int wgetn_wstr(struct _win_st* , int* , int );
int whline_set(struct _win_st* , struct come_anon54* , int );
int win_wch(struct _win_st* , struct come_anon54* );
int win_wchnstr(struct _win_st* , struct come_anon54* , int );
int win_wchstr(struct _win_st* , struct come_anon54* );
int winnwstr(struct _win_st* , int* , int );
int wins_nwstr(struct _win_st* , int* , int );
int wins_wch(struct _win_st* , struct come_anon54* );
int wins_wstr(struct _win_st* , int* );
int winwstr(struct _win_st* , int* );
int* wunctrl(struct come_anon54* );
int wvline_set(struct _win_st* , struct come_anon54* , int );
int term_attrs_sp(struct screen* );
int erasewchar_sp(struct screen* , int* );
int killwchar_sp(struct screen* , int* );
int unget_wch_sp(struct screen* , int );
int vid_attr_sp(struct screen* , int , short , void* );
int vid_puts_sp(struct screen* , int , short , void* , lambda* );
int* wunctrl_sp(struct screen* , struct come_anon54* );
bool has_mouse();
int getmouse(struct come_anon55* );
int ungetmouse(struct come_anon55* );
int mousemask(int , int* );
bool wenclose(struct _win_st* , int , int );
int mouseinterval(int );
bool wmouse_trafo(struct _win_st* , int* , int* , bool );
bool mouse_trafo(int* , int* , bool );
bool has_mouse_sp(struct screen* );
int getmouse_sp(struct screen* , struct come_anon55* );
int ungetmouse_sp(struct screen* , struct come_anon55* );
int mousemask_sp(struct screen* , int , int* );
int mouseinterval_sp(struct screen* , int );
int mcprint(char* , int );
int has_key(int );
int has_key_sp(struct screen* , int );
int mcprint_sp(struct screen* , char* , int );
void _tracef(char* );
char* _traceattr(int );
char* _traceattr2(int , int );
char* _tracechar(int );
char* _tracechtype(int );
char* _tracechtype2(int , int );
char* _tracecchar_t(struct come_anon54* );
char* _tracecchar_t2(int , struct come_anon54* );
void trace(int );
int curses_trace(int );
void exit_curses(int );
char* unctrl(int );
char* unctrl_sp(struct screen* , int );
char* string(char* str);
void ncfree(void* mem);
void free_object(void* mem);
void* nccalloc(long nmemb, long size);
char* xsprintf(char* msg);
char* string_reverse(char* str);
char* string_chomp(char* str);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
char* string_substring(char* str, int head, int tail);
int string_length(char* str);
int int_get_hash_key(int value);
int bool_get_hash_key(bool value);
bool bool_equals(bool left, bool right);
int string_get_hash_key(char* value);
bool string_equals(char* left, char* right);
int char_compare(char left, char right);
int int_compare(int left, int right);
int short_compare(short left, short right);
int long_compare(long left, long right);
struct buffer* bufferp_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int bufferp_length(struct buffer* self);
void bufferp_reset(struct buffer* self);
void bufferp_append(struct buffer* self, char* mem, long size);
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
int int_except(int self, void* parent, lambda* block);
bool bool_except(bool self, void* parent, lambda* block);
bool bool_if(bool self, void* parent, lambda* block);
void int_times(int self, void* parent, lambda* block);
int wchar_tp_compare(int* left, int* right);
int charp_compare(char* left, char* right);
bool xiswalpha(int c);
bool xiswblank(int c);
bool xiswdigit(int c);
bool xiswalnum(int c);
bool xiswascii(int c);
bool xisalpha(char c);
bool xisblank(char c);
bool xisdigit(char c);
bool xisascii(char c);
bool xisalnum(char c);
char* xbasename(char* path);
char* xextname(char* path);
char* xrealpath(char* path);
void come_fd_zero(struct come_anon7* fds);
void come_fd_set(int fd, struct come_anon7* fds);
int come_fd_isset(int fd, struct come_anon7* fds);
struct regex_struct* regex_struct_clone(struct regex_struct* reg);
struct regex_struct* nregex_clone(struct regex_struct* reg);
void regex_struct_finalize(struct regex_struct* reg);
void nregex_finalize(struct regex_struct* reg);
struct regex_struct* regex(char* str, bool ignore_case, bool multiline, bool global, bool extended, bool dotall, bool anchored, bool dollar_endonly, bool ungreedy);
bool charp_match(char* self, struct regex_struct* reg);
int charp_index(char* str, char* search_str, int default_value);
int charp_index_regex(char* self, struct regex_struct* reg, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
char* charp_sub(char* self, struct regex_struct* reg, char* replace);
struct list_charpp* charp_scan(char* self, struct regex_struct* reg);
struct list_charpp* charp_split(char* self, struct regex_struct* reg);
struct list_charpp* charp_split_char(char* self, char c);
struct regex_struct* charp_to_regex(char* self);
char* charp_printable(char* str);
char* charp_delete(char* str, int head, int tail);
char* wchar_tp_to_string(int* wstr);
int* wstring(char* str);
int* charp_to_wstring(char* str);
int* wchar_tp_substring(int* str, int head, int tail);
int wchar_tp_length(int* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
struct regex_struct* charp_to_regex_flags(char* self, bool global, bool ignore_case);
struct list_charpp* charp_split_str(char* self, char* str);
struct list_charpp* charp_split_maxsplit(char* self, struct regex_struct* reg, int maxsplit);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_index_regex_count(char* self, struct regex_struct* reg, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, struct regex_struct* reg, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
int charp_rindex_regex_count(char* self, struct regex_struct* reg, int count, int default_value);
bool charp_match_count(char* self, struct regex_struct* reg, int count);
char* charp_sub_count(char* self, struct regex_struct* reg, char* replace, int count);
char* charp_sub_block(char* self, struct regex_struct* reg, void* parent, lambda* block);
char* charp_sub_block_count(char* self, struct regex_struct* reg, int count, void* parent, lambda* block);
struct list_charpp* string_scan_block(char* self, struct regex_struct* reg, void* parent, lambda* block);
struct list_charpp* charp_scan_block_count(char* self, struct regex_struct* reg, int count, void* parent, lambda* block);
struct list_charpp* charp_split_block(char* self, struct regex_struct* reg, void* parent, lambda* block);
struct list_charpp* charp_split_block_count(char* self, struct regex_struct* reg, int count, void* parent, lambda* block);
bool regex_structp_equals(struct regex_struct* left, struct regex_struct* right);
struct list_charpp* charp_scan_group_strings(char* self, struct regex_struct* reg, struct list_charpp* group_strings, int* num_group_string_in_regex);
struct list_charpp* FILE_readlines(struct _IO_FILE* f);
char* FILE_read(struct _IO_FILE* f);
struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, char* msg);
struct _IO_FILE* FILEp_fprintf(struct _IO_FILE* f, char* msg);
void FILE_fclose(struct _IO_FILE* f);
void fopen_block(char* path, char* mode, void* parent, lambda* block);
void charp_puts(char* self);
void charp_print(char* self);
char* charp_strip(char* self);
void charp_printf(char* self, char* msg);
int int_printf(int self, char* msg);
char char_putc(char self);
int wchar_t_get_hash_key(int value);
bool wchar_t_equals(int left, int right);
int wchar_tp_get_hash_key(int* value);
bool wchar_tp_equals(int* left, int* right);
int regex_structp_get_hash_key(struct regex_struct* self);
bool charp_match_group_strings(char* self, struct regex_struct* reg, int count, struct list_charpp* group_strings);
char* charp_operator_mult(char* str, int n);
char* string_operator_mult(char* str, int n);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
bool charp_operator_equals(char* left, char* right);
bool string_operator_equals(char* left, char* right);
bool wchar_tp_operator_equals(int* left, int* right);
bool wstring_operator_equals(int* left, int* right);
char* charp_operator_add(char* left, char* right);
char* string_operator_add(char* left, char* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
char* regex_structp_to_string(struct regex_struct* regex);
void check_null_pointer(int sline, char* sname);
void bool_expect(bool self, void* parent, lambda* block_);
void come_gc_init();
void come_gc_final();
void* igc_calloc(long count, long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void free_object(void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void ncfree(void* mem);
void* nccalloc(long nmemb, long size);
void* ncmemdup(void* block);
void* call_cloner(void* fun, void* mem);
char* string(char* str);
char* xsprintf(char* msg);
char* string_reverse(char* str);
char* string_chomp(char* str);
char* string_substring(char* str, int head, int tail);
int string_length(char* str);
int int_get_hash_key(int value);
int string_get_hash_key(char* value);
bool string_equals(char* left, char* right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int long_compare(long left, long right);
int wchar_tp_compare(int* left, int* right);
struct buffer* bufferp_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int bufferp_length(struct buffer* self);
void bufferp_reset(struct buffer* self);
void bufferp_append(struct buffer* self, char* mem, long size);
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
int int_except(int self, void* parent, lambda* block);
bool bool_except(bool self, void* parent, lambda* block);
bool bool_if(bool self, void* parent, lambda* block);
void int_times(int self, void* parent, lambda* block);
char* xbasename(char* path);
char* xextname(char* path);
char* xrealpath(char* path);
char* regex_structp_to_string(struct regex_struct* regex);
int bool_get_hash_key(bool value);
bool bool_equals(bool left, bool right);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int charp_compare(char* left, char* right);
void check_null_pointer(int sline, char* sname);
void unwrap_exception(char* sname, int sline, char* mem);

void come_gc_init()
{
}

void come_gc_final()
{
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
}

void call_finalizer(void* fun, void* mem, int call_finalizer_only)
{
if(mem==(((void*)0))) {
}
if(call_finalizer_only) {
if(fun) {
void(*finalizer)(void*)=fun;
finalizer(mem);
}
}
else {
NULL;
int* ref_count=((int*)(((char*)mem)-sizeof(int)));
*&(*ref_count)=(*ref_count)-1;
int count=*ref_count;
if(count==0) {
if(mem) {
if(fun) {
void(*finalizer)(void*)=fun;
finalizer(mem);
}
(free_object(mem));
}
}
}
}

void ncfree(void* mem)
{
}

void* nccalloc(long nmemb, long size)
{
}

void* ncmemdup(void* block)
{
if(!block) {
return NULL;
}
char* mem=((char*)block)-sizeof(int);
long size=(malloc_usable_size(mem));
void* ret=(calloc(1,size));
int* ref_count=ret;
NULL;
if(ret) {
char* p=ret;
char* p2=mem;
while (p-ret<size) {
*p=*p2;
p-1;
p2-1;
}
}
*&(*ref_count)=1;
return ((char*)ret)+sizeof(int);
}

void* call_cloner(void* fun, void* mem)
{
if(fun&&mem) {
void*(*cloner)(void*)=fun;
return cloner(mem);
}
return NULL;
}

char* string(char* str)
{
}

char* xsprintf(char* msg)
{
}

char* string_reverse(char* str)
{
}

char* string_chomp(char* str)
{
}

char* string_substring(char* str, int head, int tail)
{
}

int string_length(char* str)
{
}

int int_get_hash_key(int value)
{
}

int string_get_hash_key(char* value)
{
}

bool string_equals(char* left, char* right)
{
}

int char_compare(char left, char right)
{
}

int short_compare(short left, short right)
{
}

int long_compare(long left, long right)
{
}

int wchar_tp_compare(int* left, int* right)
{
}

struct buffer* bufferp_initialize(struct buffer* self)
{
}

void buffer_finalize(struct buffer* self)
{
}

struct buffer* buffer_clone(struct buffer* self)
{
}

int bufferp_length(struct buffer* self)
{
}

void bufferp_reset(struct buffer* self)
{
}

void bufferp_append(struct buffer* self, char* mem, long size)
{
}

void bufferp_append_char(struct buffer* self, char c)
{
}

void bufferp_append_str(struct buffer* self, char* str)
{
}

void bufferp_append_nullterminated_str(struct buffer* self, char* str)
{
}

char* bufferp_to_string(struct buffer* self)
{
}

void bufferp_append_int(struct buffer* self, int value)
{
}

void bufferp_append_long(struct buffer* self, long value)
{
}

void bufferp_append_short(struct buffer* self, short value)
{
}

void bufferp_alignment(struct buffer* self)
{
}

int bufferp_compare(struct buffer* left, struct buffer* right)
{
}

struct buffer* string_to_buffer(char* self)
{
}

int int_except(int self, void* parent, lambda* block)
{
}

bool bool_except(bool self, void* parent, lambda* block)
{
}

bool bool_if(bool self, void* parent, lambda* block)
{
}

void int_times(int self, void* parent, lambda* block)
{
}

char* xbasename(char* path)
{
}

char* xextname(char* path)
{
}

char* xrealpath(char* path)
{
}

char* regex_structp_to_string(struct regex_struct* regex)
{
}

int bool_get_hash_key(bool value)
{
}

bool bool_equals(bool left, bool right)
{
}

char* string_lower_case(char* str)
{
}

char* string_upper_case(char* str)
{
}

int charp_compare(char* left, char* right)
{
}

void check_null_pointer(int sline, char* sname)
{
}

void unwrap_exception(char* sname, int sline, char* mem)
{
}

