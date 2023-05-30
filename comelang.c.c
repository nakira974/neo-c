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
    long long quot;
    long long rem;
};
typedef struct come_anon2 lldiv_t;
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
struct come_anon3
{
    int __val[2];
};
typedef struct come_anon3 __fsid_t;
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
typedef long off_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef long ssize_t;
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
struct come_anon4
{
    unsigned long __val[16];
};
typedef struct come_anon4 __sigset_t;
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
struct come_anon5
{
    long __fds_bits[16];
};
typedef struct come_anon5 fd_set;
typedef long fd_mask;
typedef long blksize_t;
typedef long blkcnt_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;
struct come_anon7
{
    unsigned int __low;
    unsigned int __high;
};
union come_anon6
{
    unsigned long long __value64;
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
    union come_anon6 __wseq;
    union come_anon6 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long __thrd_t;
struct come_anon8
{
    int __data;
};
typedef struct come_anon8 __once_flag;
typedef unsigned long pthread_t;
union come_anon9
{
    char __size[4];
    int __align;
};
typedef union come_anon9 pthread_mutexattr_t;
union come_anon10
{
    char __size[4];
    int __align;
};
typedef union come_anon10 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
    char __size[56];
    long __align;
};
typedef union pthread_attr_t pthread_attr_t;
union come_anon11
{
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};
typedef union come_anon11 pthread_mutex_t;
union come_anon12
{
    struct __pthread_cond_s __data;
    char __size[48];
    long long __align;
};
typedef union come_anon12 pthread_cond_t;
union come_anon13
{
    struct __pthread_rwlock_arch_t __data;
    char __size[56];
    long __align;
};
typedef union come_anon13 pthread_rwlock_t;
union come_anon14
{
    char __size[8];
    long __align;
};
typedef union come_anon14 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union come_anon15
{
    char __size[32];
    long __align;
};
typedef union come_anon15 pthread_barrier_t;
union come_anon16
{
    char __size[4];
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
    unsigned short __x[3];
    unsigned short __old_x[3];
    unsigned short __c;
    unsigned short __init;
    unsigned long long __a;
};
typedef int (*__compar_fn_t)(const void*,const void*);
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
typedef __builtin_va_list __gnuc_va_list;
union come_anon18
{
    unsigned int __wch;
    char __wchb[4];
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
typedef __fpos_t fpos_t;
extern FILE* stdin;
extern FILE* stdout;
extern FILE* stderr;

void come_gc_init();
void come_gc_final();
void ncfree(void* mem);
void* igc_calloc(unsigned long count, unsigned long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void free_object(void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* nccalloc(unsigned long nmemb, unsigned long size);
void* ncmemdup(void* block);
void* call_cloner(void* fun, void* mem);
void unwrap_exception(char* sname, int sline, char* mem);

void come_gc_init(){
}

void come_gc_final(){
}

void ncfree(void* mem){
    if(mem) {
        (free(mem));
    }
}

void* igc_calloc(unsigned long count, unsigned long size){
    char* mem=(calloc(1,sizeof(int)+sizeof(long)+count*size));
    int* ref_count=((int*)mem);
    *(&(*ref_count))=(*ref_count)+1;
    long* size2=((long*)(mem+sizeof(int)));
    *size2=size*count+sizeof(long)+sizeof(int);
        void* __result_value = mem+sizeof(int)+sizeof(long);
    return __result_value;
}

void igc_increment_ref_count(void* mem){
    if(mem==(((void*)0))) {
                return;    }
    int* ref_count=((int*)(((char*)mem)-sizeof(int)-sizeof(long)));
    *(&(*ref_count))=(*ref_count)+1;
}

void igc_decrement_ref_count(void* mem){
    if(mem==(((void*)0))) {
                return;    }
    int* ref_count=((int*)(((char*)mem)-sizeof(int)-sizeof(long)));
    *(&(*ref_count))=(*ref_count)-1;
    int count=*ref_count;
    if(count==0) {
        (ncfree(ref_count));
    }
}

void free_object(void* mem){
    if(mem==(((void*)0))) {
                return;    }
    int* ref_count=((int*)(((char*)mem)-sizeof(int)-sizeof(long)));
    (ncfree(ref_count));
}

void call_finalizer(void* fun, void* mem, int call_finalizer_only){
    if(mem==(((void*)0))) {
                return;    }
    if(call_finalizer_only) {
        if(fun) {
            void (*finalizer)(void*)=fun;
            finalizer(mem);
        }
    }
    else {
        int* ref_count=((int*)(((char*)mem)-sizeof(int)-sizeof(long)));
        *(&(*ref_count))=(*ref_count)-1;
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

void* nccalloc(unsigned long nmemb, unsigned long size){
    void* result=(calloc(nmemb,size));
        void* __result_value = result;
    return __result_value;
}

void* ncmemdup(void* block){
    if(!block) {
                void* __result_value = ((void*)0);
        return __result_value;
    }
    char* mem=((char*)block)-sizeof(int)-sizeof(long);
    long* size_p=((long*)(mem+sizeof(int)));
    unsigned long size=*size_p;
    void* ret=(calloc(1,size));
    int* ref_count=ret;
    if(ret) {
        char* p=ret;
        char* p2=mem;
        while (p-((char*)ret)<size) {
            *p=*p2;
            p=p+1;
            p2=p2+1;
        }
    }
    *(&(*ref_count))=1;
    long* size_p2=((long*)(((char*)ret)+sizeof(int)));
    *size_p2=size;
        void* __result_value = ((char*)ret)+sizeof(int)+sizeof(long);
    return __result_value;
}

void* call_cloner(void* fun, void* mem){
    if(fun&&mem) {
        void* (*cloner)(void*)=fun;
                void* __result_value = cloner(mem);
        return __result_value;
    }
        void* __result_value = ((void*)0);
    return __result_value;
}

void unwrap_exception(char* sname, int sline, char* mem){
    if(mem==((void*)0)) {
        (fprintf(stderr,"%s %d: unwrap exception. The value is null\n",sname,sline));
        (exit(2));
    }
}

