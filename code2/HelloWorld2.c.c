// source head
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
    char** p_2;
    void** p2_3;
    int* count_4;
    int* size2_5;
    char** mem2_6;
    int* b_7;
    int** a_8;
    int* a2_9;
    char** ax_12;
    char** str_16;
    struct sData** data_17;
    int** axyz_18;
    int** xxx_19;
    int** yyy_20;
    int** zzz_21;
    int* bzyz_22;
    int** azyz_23;
    int* n_24;
};
struct __current_stack2__
{
    char** p_2;
    void** p2_3;
    int* count_4;
    int* size2_5;
    char** mem2_6;
    int* b_7;
    int** a_8;
    int* a2_9;
    char** ax_12;
    char** str_16;
    struct sData** data_17;
    int** axyz_18;
    int** xxx_19;
    int** yyy_20;
    int** zzz_21;
    int* bzyz_22;
    int** azyz_23;
    int* n_24;
    struct list$1charph** liX_27;
    struct list$1int** liX2_36;
    int* aX_43;
};
struct __current_stack3__
{
    char** p_2;
    void** p2_3;
    int* count_4;
    int* size2_5;
    char** mem2_6;
    int* b_7;
    int** a_8;
    int* a2_9;
    char** ax_12;
    char** str_16;
    struct sData** data_17;
    int** axyz_18;
    int** xxx_19;
    int** yyy_20;
    int** zzz_21;
    int* bzyz_22;
    int** azyz_23;
    int* n_24;
    struct list$1charph** liX_27;
    struct list$1int** liX2_36;
    int* aX_43;
    int* aXYZY_47;
    struct list$1charph** li_48;
    struct list$1int** li2_50;
    int* aXL_52;
};
struct __current_stack4__
{
    char** p_2;
    void** p2_3;
    int* count_4;
    int* size2_5;
    char** mem2_6;
    int* b_7;
    int** a_8;
    int* a2_9;
    char** ax_12;
    char** str_16;
    struct sData** data_17;
    int** axyz_18;
    int** xxx_19;
    int** yyy_20;
    int** zzz_21;
    int* bzyz_22;
    int** azyz_23;
    int* n_24;
    struct list$1charph** liX_27;
    struct list$1int** liX2_36;
    int* aX_43;
    int* aXYZY_47;
    struct list$1charph** li_48;
    struct list$1int** li2_50;
    int* aXL_52;
    struct list$1charph** li3_83;
    struct list$1int** li4_86;
    struct list$1int** li5_87;
    struct list$1int** li6_92;
    int** axyzX_96;
    char** strXYXY_97;
    struct list$1int** liZ_98;
};
struct __current_stack5__
{
    char** p_2;
    void** p2_3;
    int* count_4;
    int* size2_5;
    char** mem2_6;
    int* b_7;
    int** a_8;
    int* a2_9;
    char** ax_12;
    char** str_16;
    struct sData** data_17;
    int** axyz_18;
    int** xxx_19;
    int** yyy_20;
    int** zzz_21;
    int* bzyz_22;
    int** azyz_23;
    int* n_24;
    struct list$1charph** liX_27;
    struct list$1int** liX2_36;
    int* aX_43;
    int* aXYZY_47;
    struct list$1charph** li_48;
    struct list$1int** li2_50;
    int* aXL_52;
    struct list$1charph** li3_83;
    struct list$1int** li4_86;
    struct list$1int** li5_87;
    struct list$1int** li6_92;
    int** axyzX_96;
    char** strXYXY_97;
    struct list$1int** liZ_98;
    struct list$1int** liZ2_102;
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
    char** p_2;
    void** p2_3;
    int* count_4;
    int* size2_5;
    char** mem2_6;
    int* b_7;
    int** a_8;
    int* a2_9;
    char** ax_12;
    char** str_16;
    struct sData** data_17;
    int** axyz_18;
    int** xxx_19;
    int** yyy_20;
    int** zzz_21;
    int* bzyz_22;
    int** azyz_23;
    int* n_24;
    struct list$1charph** liX_27;
    struct list$1int** liX2_36;
    int* aX_43;
    int* aXYZY_47;
    struct list$1charph** li_48;
    struct list$1int** li2_50;
    int* aXL_52;
    struct list$1charph** li3_83;
    struct list$1int** li4_86;
    struct list$1int** li5_87;
    struct list$1int** li6_92;
    int** axyzX_96;
    char** strXYXY_97;
    struct list$1int** liZ_98;
    struct list$1int** liZ2_102;
    struct map$2charpint** m1_169;
    struct map$2charpint** m2_180;
    struct tuple1$1int** tt1_181;
    struct tuple1$1charph** tt2_182;
    struct tuple1$1charph** tt3_184;
    struct tuple1$1int** ttt1_185;
    struct tuple1$1charph** ttt2_186;
    struct tuple1$1charph** ttt3_187;
    struct tuple2$2charphint** t4_188;
    struct IA** ia_190;
    struct list$1IAph** liIA_193;
    int* aZZZ_203;
    int* bZZZ_204;
    struct list$1charph** li_str_205;
};

// header function
void* come_calloc(int count, int size);

void* come_increment_ref_count(void* mem);

void ncfree(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free);

void come_free_object(void* mem);

void* nccalloc(int nmemb, int size);

void* come_memdup(void* block);

char* __builtin_string(char* str);

void come_release_malloced_mem();

void come_heap_pool_init();

void come_heap_pool_final();

int remove(const char* __filename);

int rename(const char* __old, const char* __new);

int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);

int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);

int fclose(struct _IO_FILE* __stream);

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char anonymous_var_name1[20]);

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

int __uflow(struct _IO_FILE* anonymous_var_name2);

int __overflow(struct _IO_FILE* anonymous_var_name3, int anonymous_var_name4);

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

void xassert(char* msg, _Bool test);

void* come_print_ref_count(void* mem);

void int_times(int self, void* parent, void (*block)(void*));

_Bool int_equals(int self, int right);

_Bool bool_equals(_Bool self, _Bool right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool string_equals(char* self, char* right);

_Bool charp_equals(char* self, char* right);

_Bool string_operator_equals(char* self, char* right);

_Bool charp_operator_equals(char* self, char* right);

_Bool string_operator_not_equals(char* self, char* right);

_Bool charp_operator_not_equals(char* self, char* right);

char* charp_operator_add(char* self, char* right);

char* string_operator_add(char* self, char* right);

unsigned int int_get_hash_key(int value);

unsigned int bool_get_hash_key(_Bool value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

int int_clone(int self);

char* charp_clone(char* self);

char* string_clone(char* self);

int long_clone(long self);

short int short_clone(short short self);

double double_clone(double self);

char char_clone(char self);

float float_clone(float self);

void buffer_finalize(struct buffer* self);

struct buffer* buffer_initialize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_append(struct buffer* self, char* mem, int size);

void buffer_append_char(struct buffer* self, char c);

void buffer_append_str(struct buffer* self, char* str);

void buffer_append_nullterminated_str(struct buffer* self, char* str);

void buffer_append_int(struct buffer* self, int value);

void buffer_append_long(struct buffer* self, long value);

void buffer_append_short(struct buffer* self, short short value);

void buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

void FILE_fclose(struct _IO_FILE* f);

char* FILE_read(struct _IO_FILE* f);

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

char* string_write(char* self, char* file_name, _Bool append);

char* charp_write(char* self, char* file_name, _Bool append);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* string_chomp(char* str);

char* charp_chomp(char* str);

char* xbasename(char* path);

char* xsprintf(char* msg, ...);

char* xextname(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xrealpath(char* path);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

char* string_to_string(char* self);

void bool_expect(_Bool self, void* parent, void (*block)(void*));

void bool_catch(_Bool self, void* parent, void (*block)(void*));

char* charp_read(char* file_name);

char* string_read(char* file_name);

_Bool xiswascii(unsigned int c);

char* buffer_to_string(struct buffer* self);

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

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
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
static void list$1charpp_remove(struct list$1charp* self, char* item);
static void list$1charpp_delete(struct list$1charp* self, int head, int tail);
static void list$1charpp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
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
    come_release_malloced_mem();
    return __result1__;
come_release_malloced_mem();
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    unsigned int __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    come_release_malloced_mem();
    return __result2__;
come_release_malloced_mem();
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
    unsigned long int __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    come_release_malloced_mem();
    return __result3__;
come_release_malloced_mem();
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
    unsigned short int __result4__ = __x;
    come_release_malloced_mem();
    return __result4__;
come_release_malloced_mem();
}
static inline unsigned int __uint32_identity(unsigned int __x){
    unsigned int __result5__ = __x;
    come_release_malloced_mem();
    return __result5__;
come_release_malloced_mem();
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
    unsigned long int __result6__ = __x;
    come_release_malloced_mem();
    return __result6__;
come_release_malloced_mem();
}

// body function






int* funHeap(int x, int y){
void* right_value0;
int* result_0;
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(int*)); /* ddd */
    result_0=(int*)come_increment_ref_count(((int*)(right_value0=(int*)come_calloc(1, sizeof(int)*(1)))));
    if(right_value0) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0); }
    *result_0=x+y;
    int* __result7__ = result_0;
    if(result_0) { result_0 = come_decrement_ref_count(result_0, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result7__;
come_release_malloced_mem();
}

int funHeap2(int* x, int* y){
    int __result8__ = *x+*y;
    if(x) { x = come_decrement_ref_count(x, (void*)0, (void*)0, 0, 1); }
    if(y) { y = come_decrement_ref_count(y, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
    return __result8__;
come_release_malloced_mem();
}

int intp_fun(int* self){
    int __result9__ = *self;
    come_release_malloced_mem();
    return __result9__;
come_release_malloced_mem();
}

struct sDataA* sDataA_initialize(struct sDataA* self, int a, int b){
    self->a=a;
    self->b=b;
    struct sDataA* __result10__ = self;
    if(self) { come_call_finalizer(sDataA_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
    come_release_malloced_mem();
    return __result10__;
come_release_malloced_mem();
}

static void sDataA_finalize(struct sDataA* self){
    come_release_malloced_mem();
}

int sDataA_fun(struct sDataA* self, int a, int b){
    int __result11__ = self->a+self->b+a+b;
    come_release_malloced_mem();
    return __result11__;
come_release_malloced_mem();
}

void fun_default_parametor(int x, int y){
    xassert("default parametor",x==1&&y==2);
come_release_malloced_mem();
}

struct tuple2$2intbool* fun_exception(int x, int y){
void* right_value1;
void* right_value2;
memset(&right_value1, 0, sizeof(void*));
memset(&right_value2, 0, sizeof(void*));
    struct tuple2$2intbool* __result13__ = ((struct tuple2$2intbool*)(right_value2=tuple2$2intbool_initialize((struct tuple2$2intbool*)come_increment_ref_count(((struct tuple2$2intbool*)(right_value1=(struct tuple2$2intbool*)come_calloc(1, sizeof(struct tuple2$2intbool)*(1))))),x+y,(_Bool)1)));
    come_release_malloced_mem();
    return __result13__;
come_release_malloced_mem();
}

static struct tuple2$2intbool* tuple2$2intbool_initialize(struct tuple2$2intbool* self, int v1, _Bool v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$2intbool* __result12__ = self;
        if(self) { come_call_finalizer(tuple2$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result12__;
    come_release_malloced_mem();
}

static void tuple2$2intboolp_finalize(struct tuple2$2intbool* self){
        come_release_malloced_mem();
}

int main(){
void* right_value3;
char* a_1;
char* p_2;
void* p2_3;
int count_4;
int size2_5;
char* mem2_6;
int b_7;
int* a_8;
int a2_9;
int b_10;
int n_11;
void* right_value4;
char* ax_12;
void* right_value5;
char* a_13;
char* b_14;
struct sData data_15;
char* __dec_obj1;
void* right_value6;
char* str_16;
void* right_value7;
struct sData* data_17;
char* __dec_obj2;
void* right_value8;
void* right_value9;
void* right_value10;
int* axyz_18;
void* right_value11;
int* xxx_19;
void* right_value12;
int* yyy_20;
void* right_value13;
int* zzz_21;
void* right_value14;
int bzyz_22;
int* azyz_23;
int n_24;
struct __current_stack1__ __current_stack1__;
void* right_value15;
void* right_value16;
struct list$1charph* liX_27;
void* right_value20;
void* right_value21;
void* right_value22;
char* it_32;
void* right_value23;
void* right_value24;
struct list$1int* liX2_36;
int it_41;
int aX_43;
struct __current_stack2__ __current_stack2__;
int aXYZY_47;
void* right_value28;
void* right_value29;
struct list$1charph* li_48;
void* right_value30;
void* right_value31;
void* right_value32;
char* it_49;
void* right_value33;
void* right_value34;
struct list$1int* li2_50;
int it_51;
int aXL_52;
struct __current_stack3__ __current_stack3__;
void* right_value41;
void* right_value42;
void* right_value43;
struct list$1charph* li3_83;
void* right_value44;
void* right_value45;
void* right_value46;
void* right_value47;
void* right_value48;
void* right_value49;
struct list$1int* li4_86;
void* right_value50;
void* right_value51;
struct list$1int* li5_87;
void* right_value52;
void* right_value53;
struct list$1int* li6_92;
void* right_value56;
int* axyzX_96;
void* right_value57;
int* __dec_obj10;
void* right_value58;
int* __dec_obj11;
void* right_value59;
void* right_value60;
void* right_value61;
char* strXYXY_97;
void* right_value62;
void* right_value63;
struct list$1int* liZ_98;
struct __current_stack4__ __current_stack4__;
void* right_value64;
void* right_value65;
struct list$1int* liZ2_102;
int __list_values1___103[3];
void* right_value66;
void* right_value67;
int __list_values2___105[3];
void* right_value68;
void* right_value69;
int __list_values3___106[5];
void* right_value70;
void* right_value71;
struct __current_stack5__ __current_stack5__;
char* __map_keys1___107[2];
int __map_element1___108[2];
void* right_value83;
void* right_value84;
char* __map_keys2___155[2];
int __map_element2___156[2];
void* right_value85;
void* right_value86;
char* __map_keys3___167[2];
int __map_element3___168[2];
void* right_value87;
void* right_value88;
struct map$2charpint* m1_169;
void* right_value98;
struct map$2charpint* m2_180;
void* right_value99;
void* right_value100;
struct tuple1$1int* tt1_181;
void* right_value101;
void* right_value102;
void* right_value103;
struct tuple1$1charph* tt2_182;
void* right_value104;
char* __dec_obj15;
void* right_value107;
struct tuple1$1charph* tt3_184;
void* right_value108;
void* right_value109;
struct tuple1$1int* ttt1_185;
void* right_value110;
void* right_value111;
void* right_value112;
struct tuple1$1charph* ttt2_186;
void* right_value113;
char* __dec_obj17;
void* right_value114;
struct tuple1$1charph* ttt3_187;
void* right_value115;
void* right_value116;
void* right_value117;
struct tuple2$2charphint* t4_188;
void* right_value118;
void* right_value119;
void* right_value120;
void* right_value121;
void* right_value122;
void* right_value123;
void* right_value124;
void* right_value125;
void* right_value126;
void* right_value127;
void* right_value128;
struct IA* _inf_value1;
struct sDataA* _inf_obj_value1;
void* right_value130;
struct IA* ia_190;
void* right_value131;
void* right_value132;
struct list$1IAph* liIA_193;
void* right_value136;
void* right_value137;
struct IA* _inf_value2;
struct sDataA* _inf_obj_value2;
void* right_value139;
void* right_value140;
void* right_value141;
struct IA* _inf_value3;
struct sDataA* _inf_obj_value3;
void* right_value143;
void* right_value144;
void* right_value145;
struct IA* _inf_value4;
struct sDataA* _inf_obj_value4;
void* right_value147;
struct IA* it_201;
void* right_value148;
void* right_value149;
struct tuple3$3intintbool* multiple_assgin_var1;
int aZZZ_203;
int bZZZ_204;
void* right_value150;
void* right_value151;
struct list$1charph* li_str_205;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
struct __current_stack6__ __current_stack6__;
void* right_value156;
void* right_value157;
void* right_value158;
char* __list_values4___206[3];
void* right_value159;
void* right_value160;
memset(&right_value3, 0, sizeof(void*));
memset(&a_1, 0, sizeof(char*)); /* ddd */
memset(&p_2, 0, sizeof(char*)); /* ddd */
memset(&p2_3, 0, sizeof(void*)); /* ddd */
memset(&count_4, 0, sizeof(int)); /* ddd */
memset(&size2_5, 0, sizeof(int)); /* ddd */
memset(&mem2_6, 0, sizeof(char*)); /* ddd */
memset(&b_7, 0, sizeof(int)); /* bbb */
memset(&a_8, 0, sizeof(int*)); /* ddd */
memset(&a2_9, 0, sizeof(int)); /* ddd */
memset(&b_10, 0, sizeof(int)); /* ddd */
memset(&n_11, 0, sizeof(int)); /* ddd */
memset(&right_value4, 0, sizeof(void*));
memset(&ax_12, 0, sizeof(char*)); /* ddd */
memset(&right_value5, 0, sizeof(void*));
memset(&a_13, 0, sizeof(char*)); /* ddd */
memset(&b_14, 0, sizeof(char*)); /* ddd */
memset(&data_15, 0, sizeof(struct sData)); /* bbb */
memset(&right_value6, 0, sizeof(void*));
memset(&str_16, 0, sizeof(char*)); /* ddd */
memset(&right_value7, 0, sizeof(void*));
memset(&data_17, 0, sizeof(struct sData*)); /* ddd */
memset(&right_value8, 0, sizeof(void*));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
memset(&axyz_18, 0, sizeof(int*)); /* ddd */
memset(&right_value11, 0, sizeof(void*));
memset(&xxx_19, 0, sizeof(int*)); /* ddd */
memset(&right_value12, 0, sizeof(void*));
memset(&yyy_20, 0, sizeof(int*)); /* ddd */
memset(&right_value13, 0, sizeof(void*));
memset(&zzz_21, 0, sizeof(int*)); /* ddd */
memset(&right_value14, 0, sizeof(void*));
memset(&bzyz_22, 0, sizeof(int)); /* ddd */
memset(&azyz_23, 0, sizeof(int*)); /* ddd */
memset(&n_24, 0, sizeof(int)); /* ddd */
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
memset(&liX_27, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&it_32, 0, sizeof(char*)); /* ddd */
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&liX2_36, 0, sizeof(struct list$1int*)); /* ddd */
memset(&it_41, 0, sizeof(int)); /* ddd */
memset(&aX_43, 0, sizeof(int)); /* ddd */
memset(&aXYZY_47, 0, sizeof(int)); /* bbb */
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&li_48, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&it_49, 0, sizeof(char*)); /* ddd */
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&li2_50, 0, sizeof(struct list$1int*)); /* ddd */
memset(&it_51, 0, sizeof(int)); /* ddd */
memset(&aXL_52, 0, sizeof(int)); /* ddd */
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&li3_83, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&li4_86, 0, sizeof(struct list$1int*)); /* ddd */
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&li5_87, 0, sizeof(struct list$1int*)); /* ddd */
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&li6_92, 0, sizeof(struct list$1int*)); /* ddd */
memset(&right_value56, 0, sizeof(void*));
memset(&axyzX_96, 0, sizeof(int*)); /* bbb */
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&strXYXY_97, 0, sizeof(char*)); /* ddd */
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&liZ_98, 0, sizeof(struct list$1int*)); /* ddd */
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&liZ2_102, 0, sizeof(struct list$1int*)); /* ddd */
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&m1_169, 0, sizeof(struct map$2charpint*)); /* ddd */
memset(&right_value98, 0, sizeof(void*));
memset(&m2_180, 0, sizeof(struct map$2charpint*)); /* ddd */
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&tt1_181, 0, sizeof(struct tuple1$1int*)); /* ddd */
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&tt2_182, 0, sizeof(struct tuple1$1charph*)); /* ddd */
memset(&right_value104, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&tt3_184, 0, sizeof(struct tuple1$1charph*)); /* ddd */
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&ttt1_185, 0, sizeof(struct tuple1$1int*)); /* ddd */
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&ttt2_186, 0, sizeof(struct tuple1$1charph*)); /* ddd */
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&ttt3_187, 0, sizeof(struct tuple1$1charph*)); /* ddd */
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&t4_188, 0, sizeof(struct tuple2$2charphint*)); /* ddd */
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&ia_190, 0, sizeof(struct IA*)); /* ddd */
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&liIA_193, 0, sizeof(struct list$1IAph*)); /* ddd */
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&it_201, 0, sizeof(struct IA*)); /* ddd */
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&aZZZ_203, 0, sizeof(int)); /* ccc */
memset(&bZZZ_204, 0, sizeof(int)); /* ccc */
memset(&aZZZ_203, 0, sizeof(int)); /* eee */
memset(&bZZZ_204, 0, sizeof(int)); /* eee */
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&li_str_205, 0, sizeof(struct list$1charph*)); /* ddd */
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
come_heap_pool_init();
    if(1) {
        a_1=(char*)come_increment_ref_count(((char*)(right_value3=(char*)come_calloc(1, sizeof(char)*(1*(128))))));
        if(right_value3) { right_value3 = come_decrement_ref_count(right_value3, (void*)0, (void*)0, 1, 0); }
        if(a_1) { a_1 = come_decrement_ref_count(a_1, (void*)0, (void*)0, 0, 0); }
    }
    printf("%ld\n",sizeof(unsigned long));
    p_2="ABC";
    p2_3="ABC";
    printf("%s\n",(char*)p2_3);
    printf("%c\n",*p_2);
    count_4=0;
    size2_5=1;
    mem2_6=calloc(1,sizeof(int)+sizeof(long)+count_4*size2_5);
    free(mem2_6);
    a_8=&b_7;
    (*a_8)=123;
    a2_9=123;
    if((_Bool)1) {
        b_10=234;
        n_11=0;
        while(n_11<3) {
            printf("a %d\n",a2_9);
            printf("b %d\n",b_10);
            n_11++;
        }
    }
    ax_12=(char*)come_increment_ref_count(((char*)(right_value4=(char*)come_calloc(1, sizeof(char)*(1*(128))))));
    if(right_value4) { right_value4 = come_decrement_ref_count(right_value4, (void*)0, (void*)0, 1, 0); }
    if(1) {
        a_13=(char*)come_increment_ref_count(((char*)(right_value5=(char*)come_calloc(1, sizeof(char)*(1*(128))))));
        if(right_value5) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0); }
        b_14=(char*)come_increment_ref_count(a_13);
        __dec_obj1=data_15.a;
        data_15.a=(char*)come_increment_ref_count(a_13);
        if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0); }
        if(a_13) { a_13 = come_decrement_ref_count(a_13, (void*)0, (void*)0, 0, 0); }
        if(b_14) { b_14 = come_decrement_ref_count(b_14, (void*)0, (void*)0, 0, 0); }
        if((&data_15)) { come_call_finalizer(sData_finalize,(&data_15), (void*)0, (void*)0, 1, 0, 0); }
    }
    str_16=(char*)come_increment_ref_count(((char*)(right_value6=(char*)come_calloc(1, sizeof(char)*(1*(128))))));
    if(right_value6) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0); }
    strncpy(str_16,"ABC",128);
    data_17=(struct sData*)come_increment_ref_count(((struct sData*)(right_value7=(struct sData*)come_calloc(1, sizeof(struct sData)*(1)))));
    if(right_value7) { come_call_finalizer(sData_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj2=data_17->a;
    data_17->a=(char*)come_increment_ref_count(str_16);
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0); }
    puts(data_17->a);
    ((int*)(right_value8=funHeap(7,7)));
    if(right_value8) { right_value8 = come_decrement_ref_count(right_value8, (void*)0, (void*)0, 1, 0); }
    xassert("right value test",*((int*)(right_value9=funHeap(3,4)))==7);
    if(right_value9) { right_value9 = come_decrement_ref_count(right_value9, (void*)0, (void*)0, 1, 0); }
    axyz_18=(int*)come_increment_ref_count(((int*)(right_value10=funHeap(1,2))));
    if(right_value10) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0); }
    xassert("variable test",*axyz_18==3);
    xxx_19=(int*)come_increment_ref_count(((int*)(right_value11=(int*)come_calloc(1, sizeof(int)*(1)))));
    if(right_value11) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0); }
    *xxx_19=1;
    yyy_20=(int*)come_increment_ref_count(((int*)(right_value12=(int*)come_calloc(1, sizeof(int)*(1)))));
    if(right_value12) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0); }
    *yyy_20=2;
    xassert("heap",funHeap2((int*)come_increment_ref_count(xxx_19),(int*)come_increment_ref_count(yyy_20))==3);
    zzz_21=(int*)come_increment_ref_count(((int*)(right_value13=(int*)come_calloc(1, sizeof(int)*(1)))));
    if(right_value13) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0); }
    ((int*)(right_value14=(int*)come_calloc(1, sizeof(int)*(1))));
    if(right_value14) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0); }
    bzyz_22=123;
    azyz_23=&bzyz_22;
    xassert("impl",intp_fun(azyz_23)==123);
    n_24=0;
    __current_stack1__.p_2 = &p_2;
    __current_stack1__.p2_3 = &p2_3;
    __current_stack1__.count_4 = &count_4;
    __current_stack1__.size2_5 = &size2_5;
    __current_stack1__.mem2_6 = &mem2_6;
    __current_stack1__.b_7 = &b_7;
    __current_stack1__.a_8 = &a_8;
    __current_stack1__.a2_9 = &a2_9;
    __current_stack1__.ax_12 = &ax_12;
    __current_stack1__.str_16 = &str_16;
    __current_stack1__.data_17 = &data_17;
    __current_stack1__.axyz_18 = &axyz_18;
    __current_stack1__.xxx_19 = &xxx_19;
    __current_stack1__.yyy_20 = &yyy_20;
    __current_stack1__.zzz_21 = &zzz_21;
    __current_stack1__.bzyz_22 = &bzyz_22;
    __current_stack1__.azyz_23 = &azyz_23;
    __current_stack1__.n_24 = &n_24;
    int_times(3,&__current_stack1__,method_block1_code2HelloWorld2c);
    liX_27=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value16=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value15=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(right_value16) { come_call_finalizer(list$1charphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0); }
    list$1charphp_push_back(liX_27,(char*)come_increment_ref_count(((char*)(right_value20=__builtin_string("ABC")))));
    if(right_value20) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0); }
    list$1charphp_push_back(liX_27,(char*)come_increment_ref_count(((char*)(right_value21=__builtin_string("DEF")))));
    if(right_value21) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0); }
    list$1charphp_push_back(liX_27,(char*)come_increment_ref_count(((char*)(right_value22=__builtin_string("GHI")))));
    if(right_value22) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0); }
    for(
    it_32=list$1charphp_begin((liX_27));
    !list$1charphp_end((liX_27));
    it_32=list$1charphp_next((liX_27))
    ){
        printf("%s\n",it_32);
    }
    liX2_36=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value24=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value23=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    if(right_value24) { come_call_finalizer(list$1intp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0); }
    list$1intp_push_back(liX2_36,1);
    list$1intp_push_back(liX2_36,2);
    list$1intp_push_back(liX2_36,3);
    for(
    it_41=list$1intp_begin((liX2_36));
    !list$1intp_end((liX2_36));
    it_41=list$1intp_next((liX2_36))
    ){
        printf("%d\n",it_41);
    }
    aX_43=123;
    __current_stack2__.p_2 = &p_2;
    __current_stack2__.p2_3 = &p2_3;
    __current_stack2__.count_4 = &count_4;
    __current_stack2__.size2_5 = &size2_5;
    __current_stack2__.mem2_6 = &mem2_6;
    __current_stack2__.b_7 = &b_7;
    __current_stack2__.a_8 = &a_8;
    __current_stack2__.a2_9 = &a2_9;
    __current_stack2__.ax_12 = &ax_12;
    __current_stack2__.str_16 = &str_16;
    __current_stack2__.data_17 = &data_17;
    __current_stack2__.axyz_18 = &axyz_18;
    __current_stack2__.xxx_19 = &xxx_19;
    __current_stack2__.yyy_20 = &yyy_20;
    __current_stack2__.zzz_21 = &zzz_21;
    __current_stack2__.bzyz_22 = &bzyz_22;
    __current_stack2__.azyz_23 = &azyz_23;
    __current_stack2__.n_24 = &n_24;
    __current_stack2__.liX_27 = &liX_27;
    __current_stack2__.liX2_36 = &liX2_36;
    __current_stack2__.aX_43 = &aX_43;
    list$1intp_each(liX2_36,&__current_stack2__,method_block2_code2HelloWorld2c);
    xassert("method_block test",aX_43==2);
    xassert("var initialize test",aXYZY_47==0);
    li_48=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value29=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value28=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(right_value29) { come_call_finalizer(list$1charphp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0); }
    list$1charphp_push_back(li_48,(char*)come_increment_ref_count(((char*)(right_value30=__builtin_string("ABC")))));
    if(right_value30) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0); }
    list$1charphp_push_back(li_48,(char*)come_increment_ref_count(((char*)(right_value31=__builtin_string("DEF")))));
    if(right_value31) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0); }
    list$1charphp_push_back(li_48,(char*)come_increment_ref_count(((char*)(right_value32=__builtin_string("GHI")))));
    if(right_value32) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0); }
    for(
    it_49=list$1charphp_begin((li_48));
    !list$1charphp_end((li_48));
    it_49=list$1charphp_next((li_48))
    ){
        printf("%s\n",it_49);
    }
    li2_50=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value34=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value33=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    if(right_value34) { come_call_finalizer(list$1intp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0); }
    list$1intp_push_back(li2_50,1);
    list$1intp_push_back(li2_50,2);
    list$1intp_push_back(li2_50,3);
    for(
    it_51=list$1intp_begin((li2_50));
    !list$1intp_end((li2_50));
    it_51=list$1intp_next((li2_50))
    ){
        printf("%d\n",it_51);
    }
    aXL_52=123;
    __current_stack3__.p_2 = &p_2;
    __current_stack3__.p2_3 = &p2_3;
    __current_stack3__.count_4 = &count_4;
    __current_stack3__.size2_5 = &size2_5;
    __current_stack3__.mem2_6 = &mem2_6;
    __current_stack3__.b_7 = &b_7;
    __current_stack3__.a_8 = &a_8;
    __current_stack3__.a2_9 = &a2_9;
    __current_stack3__.ax_12 = &ax_12;
    __current_stack3__.str_16 = &str_16;
    __current_stack3__.data_17 = &data_17;
    __current_stack3__.axyz_18 = &axyz_18;
    __current_stack3__.xxx_19 = &xxx_19;
    __current_stack3__.yyy_20 = &yyy_20;
    __current_stack3__.zzz_21 = &zzz_21;
    __current_stack3__.bzyz_22 = &bzyz_22;
    __current_stack3__.azyz_23 = &azyz_23;
    __current_stack3__.n_24 = &n_24;
    __current_stack3__.liX_27 = &liX_27;
    __current_stack3__.liX2_36 = &liX2_36;
    __current_stack3__.aX_43 = &aX_43;
    __current_stack3__.aXYZY_47 = &aXYZY_47;
    __current_stack3__.li_48 = &li_48;
    __current_stack3__.li2_50 = &li2_50;
    __current_stack3__.aXL_52 = &aXL_52;
    list$1intp_each(li2_50,&__current_stack3__,method_block3_code2HelloWorld2c);
    xassert("var of method block",aXL_52==2);
    xassert("list::item",list$1intp_item(li2_50,0,-1)==1);
    list$1intp_insert(li2_50,1,5);
    xassert("list::insert",list$1intp_item(li2_50,0,-1)==1&&list$1intp_item(li2_50,1,-1)==5&&list$1intp_item(li2_50,2,-1)==2&&list$1intp_item(li2_50,3,-1)==3);
    list$1charphp_insert(li_48,1,(char*)come_increment_ref_count(((char*)(right_value41=__builtin_string("GGG")))));
    if(right_value41) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0); }
    xassert("list::insert",strcmp(list$1charphp_item(li_48,0,-1),"ABC")==0&&strcmp(list$1charphp_item(li_48,1,-1),"GGG")==0&&strcmp(list$1charphp_item(li_48,2,-1),"DEF")==0&&strcmp(list$1charphp_item(li_48,3,-1),"GHI")==0);
    list$1charphp_reset(li_48);
    xassert("list::reset",list$1charphp_length(li_48)==0);
    list$1intp_delete(li2_50,0,1);
    xassert("list::delete",list$1intp_item(li2_50,0,-1)==5&&list$1intp_item(li2_50,1,-1)==2&&list$1intp_item(li2_50,2,-1)==3);
    li3_83=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value43=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value42=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(right_value43) { come_call_finalizer(list$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0); }
    list$1charphp_push_back(li3_83,(char*)come_increment_ref_count(((char*)(right_value44=__builtin_string("AAA")))));
    if(right_value44) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0); }
    list$1charphp_push_back(li3_83,(char*)come_increment_ref_count(((char*)(right_value45=__builtin_string("BBB")))));
    if(right_value45) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0); }
    list$1charphp_push_back(li3_83,(char*)come_increment_ref_count(((char*)(right_value46=__builtin_string("CCC")))));
    if(right_value46) { right_value46 = come_decrement_ref_count(right_value46, (void*)0, (void*)0, 1, 0); }
    list$1charphp_replace(li3_83,0,(char*)come_increment_ref_count(((char*)(right_value47=__builtin_string("ABC")))));
    if(right_value47) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0); }
    xassert("list::replace",strcmp(list$1charphp_item(li3_83,0,((void*)0)),"ABC")==0&&strcmp(list$1charphp_item(li3_83,1,((void*)0)),"BBB")==0&&strcmp(list$1charphp_item(li3_83,2,((void*)0)),"CCC")==0);
    li4_86=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value49=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value48=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    if(right_value49) { come_call_finalizer(list$1intp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0); }
    list$1intp_push_back(li4_86,1);
    list$1intp_push_back(li4_86,3);
    list$1intp_push_back(li4_86,5);
    li5_87=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value51=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value50=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    if(right_value51) { come_call_finalizer(list$1intp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0); }
    list$1intp_push_back(li5_87,1);
    list$1intp_push_back(li5_87,3);
    list$1intp_push_back(li5_87,5);
    xassert("list::equals",list$1intp_equals(li4_86,li5_87));
    xassert("list::find",list$1intp_find(li4_86,5,-1)==2);
    li6_92=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value53=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value52=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    if(right_value53) { come_call_finalizer(list$1intp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0); }
    list$1intp_push_back(li6_92,3);
    list$1intp_push_back(li6_92,5);
    xassert("list::sublist",list$1intp_equals(((struct list$1int*)(right_value56=list$1intp_sublist(li5_87,1,-1))),li6_92));
    if(right_value56) { come_call_finalizer(list$1intp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj10=axyzX_96;
    axyzX_96=(int*)come_increment_ref_count(((int*)(right_value57=(int*)come_calloc(1, sizeof(int)*(1)))));
    if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0); }
    if(right_value57) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0); }
    __dec_obj11=axyzX_96;
    axyzX_96=(int*)come_increment_ref_count(((int*)(right_value58=(int*)come_calloc(1, sizeof(int)*(1)))));
    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0); }
    if(right_value58) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0); }
    xassert("operator equals",string_operator_equals(((char*)(right_value59=__builtin_string("AAA"))),((char*)(right_value60=__builtin_string("AAA")))));
    if(right_value59) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0); }
    if(right_value60) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0); }
    xassert("operator test",string_operator_equals(((char*)(right_value61=charp_operator_add("AAA","BBB"))),"AAABBB"));
    if(right_value61) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0); }
    strXYXY_97="ABC";
    xassert("operator test",*(strXYXY_97+1)==66);
    liZ_98=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value63=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value62=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    if(right_value63) { come_call_finalizer(list$1intp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0); }
    list$1intp_push_back(liZ_98,1);
    list$1intp_push_back(liZ_98,2);
    list$1intp_push_back(liZ_98,3);
    __current_stack4__.p_2 = &p_2;
    __current_stack4__.p2_3 = &p2_3;
    __current_stack4__.count_4 = &count_4;
    __current_stack4__.size2_5 = &size2_5;
    __current_stack4__.mem2_6 = &mem2_6;
    __current_stack4__.b_7 = &b_7;
    __current_stack4__.a_8 = &a_8;
    __current_stack4__.a2_9 = &a2_9;
    __current_stack4__.ax_12 = &ax_12;
    __current_stack4__.str_16 = &str_16;
    __current_stack4__.data_17 = &data_17;
    __current_stack4__.axyz_18 = &axyz_18;
    __current_stack4__.xxx_19 = &xxx_19;
    __current_stack4__.yyy_20 = &yyy_20;
    __current_stack4__.zzz_21 = &zzz_21;
    __current_stack4__.bzyz_22 = &bzyz_22;
    __current_stack4__.azyz_23 = &azyz_23;
    __current_stack4__.n_24 = &n_24;
    __current_stack4__.liX_27 = &liX_27;
    __current_stack4__.liX2_36 = &liX2_36;
    __current_stack4__.aX_43 = &aX_43;
    __current_stack4__.aXYZY_47 = &aXYZY_47;
    __current_stack4__.li_48 = &li_48;
    __current_stack4__.li2_50 = &li2_50;
    __current_stack4__.aXL_52 = &aXL_52;
    __current_stack4__.li3_83 = &li3_83;
    __current_stack4__.li4_86 = &li4_86;
    __current_stack4__.li5_87 = &li5_87;
    __current_stack4__.li6_92 = &li6_92;
    __current_stack4__.axyzX_96 = &axyzX_96;
    __current_stack4__.strXYXY_97 = &strXYXY_97;
    __current_stack4__.liZ_98 = &liZ_98;
    list$1intp_each(liZ_98,&__current_stack4__,method_block4_code2HelloWorld2c);
    list$1intp_operator_store_element(liZ_98,0,777);
    printf("liZ[0] %d\n",list$1intp_operator_load_element(liZ_98,0));
    liZ2_102=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value65=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value64=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    if(right_value65) { come_call_finalizer(list$1intp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0); }
    list$1intp_push_back(liZ2_102,777);
    list$1intp_push_back(liZ2_102,2);
    list$1intp_push_back(liZ2_102,3);
    xassert("list equals",list$1intp_operator_equals(liZ_98,liZ2_102));
    {__list_values1___103[0]=1;
__list_values1___103[1]=2;
__list_values1___103[2]=3;
}    {__list_values2___105[0]=1;
__list_values2___105[1]=2;
__list_values2___105[2]=3;
}    xassert("list equals test",list$1intp_operator_equals(((struct list$1int*)(right_value67=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value66=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),3,__list_values1___103))),((struct list$1int*)(right_value69=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value68=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),3,__list_values2___105)))));
    if(right_value67) { come_call_finalizer(list$1intp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value69) { come_call_finalizer(list$1intp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0); }
    {__list_values3___106[0]=1;
__list_values3___106[1]=2;
__list_values3___106[2]=3;
__list_values3___106[3]=4;
__list_values3___106[4]=5;
}    __current_stack5__.p_2 = &p_2;
    __current_stack5__.p2_3 = &p2_3;
    __current_stack5__.count_4 = &count_4;
    __current_stack5__.size2_5 = &size2_5;
    __current_stack5__.mem2_6 = &mem2_6;
    __current_stack5__.b_7 = &b_7;
    __current_stack5__.a_8 = &a_8;
    __current_stack5__.a2_9 = &a2_9;
    __current_stack5__.ax_12 = &ax_12;
    __current_stack5__.str_16 = &str_16;
    __current_stack5__.data_17 = &data_17;
    __current_stack5__.axyz_18 = &axyz_18;
    __current_stack5__.xxx_19 = &xxx_19;
    __current_stack5__.yyy_20 = &yyy_20;
    __current_stack5__.zzz_21 = &zzz_21;
    __current_stack5__.bzyz_22 = &bzyz_22;
    __current_stack5__.azyz_23 = &azyz_23;
    __current_stack5__.n_24 = &n_24;
    __current_stack5__.liX_27 = &liX_27;
    __current_stack5__.liX2_36 = &liX2_36;
    __current_stack5__.aX_43 = &aX_43;
    __current_stack5__.aXYZY_47 = &aXYZY_47;
    __current_stack5__.li_48 = &li_48;
    __current_stack5__.li2_50 = &li2_50;
    __current_stack5__.aXL_52 = &aXL_52;
    __current_stack5__.li3_83 = &li3_83;
    __current_stack5__.li4_86 = &li4_86;
    __current_stack5__.li5_87 = &li5_87;
    __current_stack5__.li6_92 = &li6_92;
    __current_stack5__.axyzX_96 = &axyzX_96;
    __current_stack5__.strXYXY_97 = &strXYXY_97;
    __current_stack5__.liZ_98 = &liZ_98;
    __current_stack5__.liZ2_102 = &liZ2_102;
    list$1intp_each(((struct list$1int*)(right_value71=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value70=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),5,__list_values3___106))),&__current_stack5__,method_block5_code2HelloWorld2c);
    if(right_value71) { come_call_finalizer(list$1intp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0); }
    {__map_keys1___107[0]="AAA";
__map_element1___108[0]=1;
__map_keys1___107[1]="BBB";
__map_element1___108[1]=2;
}    {__map_keys2___155[0]="AAA";
__map_element2___156[0]=1;
__map_keys2___155[1]="BBB";
__map_element2___156[1]=2;
}    xassert("map equals",map$2charpintp_operator_equals(((struct map$2charpint*)(right_value84=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value83=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys1___107,__map_element1___108))),((struct map$2charpint*)(right_value86=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value85=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys2___155,__map_element2___156)))));
    if(right_value84) { come_call_finalizer(map$2charpintp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value86) { come_call_finalizer(map$2charpintp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0); }
    {__map_keys3___167[0]="AAA";
__map_element3___168[0]=1;
__map_keys3___167[1]="BBB";
__map_element3___168[1]=2;
}    m1_169=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value88=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value87=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys3___167,__map_element3___168))));
    if(right_value88) { come_call_finalizer(map$2charpintp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0); }
    printf("%d %d\n",map$2charpintp_operator_load_element(m1_169,"AAA"),map$2charpintp_operator_load_element(m1_169,"BBB"));
    m2_180=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value98=map$2charpintp_clone(m1_169))));
    if(right_value98) { come_call_finalizer(map$2charpintp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0); }
    printf("%d %d\n",map$2charpintp_operator_load_element(m2_180,"AAA"),map$2charpintp_operator_load_element(m2_180,"BBB"));
    xassert("map clone",map$2charpintp_operator_equals(m1_169,m2_180));
    tt1_181=(struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value100=tuple1$1intp_initialize((struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value99=(struct tuple1$1int*)come_calloc(1, sizeof(struct tuple1$1int)*(1))))),1))));
    if(right_value100) { come_call_finalizer(tuple1$1intp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0); }
    tt1_181->v1=111;
    printf("%d\n",tt1_181->v1);
    tt2_182=(struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value103=tuple1$1charphp_initialize((struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value101=(struct tuple1$1charph*)come_calloc(1, sizeof(struct tuple1$1charph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string("ABC"))))))));
    if(right_value102) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0); }
    if(right_value103) { come_call_finalizer(tuple1$1charphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj15=tt2_182->v1;
    tt2_182->v1=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string("DEF"))));
    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0); }
    if(right_value104) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0); }
    printf("%s\n",tt2_182->v1);
    tt3_184=(struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value107=tuple1$1charphp_clone(tt2_182))));
    if(right_value107) { come_call_finalizer(tuple1$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0); }
    printf("(%s)\n",tt3_184->v1);
    ttt1_185=(struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value109=tuple1$1intp_initialize((struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value108=(struct tuple1$1int*)come_calloc(1, sizeof(struct tuple1$1int)*(1))))),1))));
    if(right_value109) { come_call_finalizer(tuple1$1intp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0); }
    ttt1_185->v1=111;
    printf("%d\n",ttt1_185->v1);
    ttt2_186=(struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value112=tuple1$1charphp_initialize((struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value110=(struct tuple1$1charph*)come_calloc(1, sizeof(struct tuple1$1charph)*(1))))),(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string("ABC"))))))));
    if(right_value111) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0); }
    if(right_value112) { come_call_finalizer(tuple1$1charphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0); }
    __dec_obj17=ttt2_186->v1;
    ttt2_186->v1=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string("DEF"))));
    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0); }
    if(right_value113) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0); }
    printf("%s\n",ttt2_186->v1);
    ttt3_187=(struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value114=tuple1$1charphp_clone(ttt2_186))));
    if(right_value114) { come_call_finalizer(tuple1$1charphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0); }
    printf("(%s)\n",ttt3_187->v1);
    xassert("tuple test",tuple1$1charphp_operator_equals(ttt2_186,ttt3_187));
    t4_188=(struct tuple2$2charphint*)come_increment_ref_count(((struct tuple2$2charphint*)(right_value117=tuple2$2charphint_initialize((struct tuple2$2charphint*)come_increment_ref_count(((struct tuple2$2charphint*)(right_value116=(struct tuple2$2charphint*)come_calloc(1, sizeof(struct tuple2$2charphint)*(1))))),(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string("ABC")))),5))));
    if(right_value115) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0); }
    if(right_value117) { come_call_finalizer(tuple2$2charphintp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0); }
    xassert("tuple test",string_operator_equals(t4_188->v1,((char*)(right_value118=__builtin_string("ABC"))))&&t4_188->v2==5);
    if(right_value118) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0); }
    xassert("tuple testX",tuple2$2charpintp_operator_equals(((struct tuple2$2charpint*)(right_value120=tuple2$2charpint_initialize((struct tuple2$2charpint*)come_increment_ref_count(((struct tuple2$2charpint*)(right_value119=(struct tuple2$2charpint*)come_calloc(1, sizeof(struct tuple2$2charpint)*(1))))),"AAA",7))),((struct tuple2$2charpint*)(right_value122=tuple2$2charpint_initialize((struct tuple2$2charpint*)come_increment_ref_count(((struct tuple2$2charpint*)(right_value121=(struct tuple2$2charpint*)come_calloc(1, sizeof(struct tuple2$2charpint)*(1))))),"AAA",7)))));
    if(right_value120) { come_call_finalizer(tuple2$2charpintp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value122) { come_call_finalizer(tuple2$2charpintp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0); }
    xassert("tuple testX",tuple2$2charpintp_operator_not_equals(((struct tuple2$2charpint*)(right_value124=tuple2$2charpint_initialize((struct tuple2$2charpint*)come_increment_ref_count(((struct tuple2$2charpint*)(right_value123=(struct tuple2$2charpint*)come_calloc(1, sizeof(struct tuple2$2charpint)*(1))))),"AAA",8))),((struct tuple2$2charpint*)(right_value126=tuple2$2charpint_initialize((struct tuple2$2charpint*)come_increment_ref_count(((struct tuple2$2charpint*)(right_value125=(struct tuple2$2charpint*)come_calloc(1, sizeof(struct tuple2$2charpint)*(1))))),"AAA",7)))));
    if(right_value124) { come_call_finalizer(tuple2$2charpintp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value126) { come_call_finalizer(tuple2$2charpintp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0); }
    _inf_value1=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value1=come_increment_ref_count(((struct sDataA*)(right_value128=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value127=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),111,222))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=sDataA_finalize;
    _inf_value1->clone=sDataA_clone;
    _inf_value1->fun=sDataA_fun;
    ia_190=(struct IA*)come_increment_ref_count(((struct IA*)(right_value130=_inf_value1)));
    if(right_value127) { come_call_finalizer(sDataA_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value128) { come_call_finalizer(sDataA_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value130) { right_value130 = come_decrement_ref_count(right_value130, ((struct IA*)right_value130)->finalize, ((struct IA*)right_value130)->_protocol_obj, 1, 0); } 
    printf("%d\n",ia_190->fun(ia_190->_protocol_obj,0,0));
    liIA_193=(struct list$1IAph*)come_increment_ref_count(((struct list$1IAph*)(right_value132=list$1IAphp_initialize((struct list$1IAph*)come_increment_ref_count(((struct list$1IAph*)(right_value131=(struct list$1IAph*)come_calloc(1, sizeof(struct list$1IAph)*(1)))))))));
    if(right_value132) { come_call_finalizer(list$1IAphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0); }
    _inf_value2=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value2=come_increment_ref_count(((struct sDataA*)(right_value137=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value136=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),1,1))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=sDataA_finalize;
    _inf_value2->clone=sDataA_clone;
    _inf_value2->fun=sDataA_fun;
    list$1IAphp_push_back(liIA_193,(struct IA*)come_increment_ref_count(((struct IA*)(right_value139=_inf_value2))));
    if(right_value136) { come_call_finalizer(sDataA_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value137) { come_call_finalizer(sDataA_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value139) { right_value139 = come_decrement_ref_count(right_value139, ((struct IA*)right_value139)->finalize, ((struct IA*)right_value139)->_protocol_obj, 1, 0); } 
    _inf_value3=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value3=come_increment_ref_count(((struct sDataA*)(right_value141=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value140=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),2,2))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=sDataA_finalize;
    _inf_value3->clone=sDataA_clone;
    _inf_value3->fun=sDataA_fun;
    list$1IAphp_push_back(liIA_193,(struct IA*)come_increment_ref_count(((struct IA*)(right_value143=_inf_value3))));
    if(right_value140) { come_call_finalizer(sDataA_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value141) { come_call_finalizer(sDataA_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value143) { right_value143 = come_decrement_ref_count(right_value143, ((struct IA*)right_value143)->finalize, ((struct IA*)right_value143)->_protocol_obj, 1, 0); } 
    _inf_value4=(struct IA*)come_calloc(1, sizeof(struct IA));
    _inf_obj_value4=come_increment_ref_count(((struct sDataA*)(right_value145=sDataA_initialize((struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value144=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1))))),3,3))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=sDataA_finalize;
    _inf_value4->clone=sDataA_clone;
    _inf_value4->fun=sDataA_fun;
    list$1IAphp_push_back(liIA_193,(struct IA*)come_increment_ref_count(((struct IA*)(right_value147=_inf_value4))));
    if(right_value144) { come_call_finalizer(sDataA_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value145) { come_call_finalizer(sDataA_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value147) { right_value147 = come_decrement_ref_count(right_value147, ((struct IA*)right_value147)->finalize, ((struct IA*)right_value147)->_protocol_obj, 1, 0); } 
    for(
    it_201=list$1IAphp_begin((liIA_193));
    !list$1IAphp_end((liIA_193));
    it_201=list$1IAphp_next((liIA_193))
    ){
        printf("%d\n",it_201->fun(it_201->_protocol_obj,0,0));
    }
    multiple_assgin_var1=((struct tuple3$3intintbool*)(right_value149=tuple3$3intintbool_initialize((struct tuple3$3intintbool*)come_increment_ref_count(((struct tuple3$3intintbool*)(right_value148=(struct tuple3$3intintbool*)come_calloc(1, sizeof(struct tuple3$3intintbool)*(1))))),1,2,(_Bool)0)));
    aZZZ_203=multiple_assgin_var1->v1;
    bZZZ_204=multiple_assgin_var1->v2;
    if(right_value149) { come_call_finalizer(tuple3$3intintboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0); }
    xassert("tuple test",aZZZ_203==1&&bZZZ_204==2);
    fun_default_parametor(1,2);
    li_str_205=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    if(right_value151) { come_call_finalizer(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0); }
    list$1charphp_push_back(li_str_205,(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("AAA")))));
    if(right_value152) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0); }
    list$1charphp_push_back(li_str_205,(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string("BBB")))));
    if(right_value153) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0); }
    list$1charphp_push_back(li_str_205,(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string("CCC")))));
    if(right_value154) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0); }
    __current_stack6__.p_2 = &p_2;
    __current_stack6__.p2_3 = &p2_3;
    __current_stack6__.count_4 = &count_4;
    __current_stack6__.size2_5 = &size2_5;
    __current_stack6__.mem2_6 = &mem2_6;
    __current_stack6__.b_7 = &b_7;
    __current_stack6__.a_8 = &a_8;
    __current_stack6__.a2_9 = &a2_9;
    __current_stack6__.ax_12 = &ax_12;
    __current_stack6__.str_16 = &str_16;
    __current_stack6__.data_17 = &data_17;
    __current_stack6__.axyz_18 = &axyz_18;
    __current_stack6__.xxx_19 = &xxx_19;
    __current_stack6__.yyy_20 = &yyy_20;
    __current_stack6__.zzz_21 = &zzz_21;
    __current_stack6__.bzyz_22 = &bzyz_22;
    __current_stack6__.azyz_23 = &azyz_23;
    __current_stack6__.n_24 = &n_24;
    __current_stack6__.liX_27 = &liX_27;
    __current_stack6__.liX2_36 = &liX2_36;
    __current_stack6__.aX_43 = &aX_43;
    __current_stack6__.aXYZY_47 = &aXYZY_47;
    __current_stack6__.li_48 = &li_48;
    __current_stack6__.li2_50 = &li2_50;
    __current_stack6__.aXL_52 = &aXL_52;
    __current_stack6__.li3_83 = &li3_83;
    __current_stack6__.li4_86 = &li4_86;
    __current_stack6__.li5_87 = &li5_87;
    __current_stack6__.li6_92 = &li6_92;
    __current_stack6__.axyzX_96 = &axyzX_96;
    __current_stack6__.strXYXY_97 = &strXYXY_97;
    __current_stack6__.liZ_98 = &liZ_98;
    __current_stack6__.liZ2_102 = &liZ2_102;
    __current_stack6__.m1_169 = &m1_169;
    __current_stack6__.m2_180 = &m2_180;
    __current_stack6__.tt1_181 = &tt1_181;
    __current_stack6__.tt2_182 = &tt2_182;
    __current_stack6__.tt3_184 = &tt3_184;
    __current_stack6__.ttt1_185 = &ttt1_185;
    __current_stack6__.ttt2_186 = &ttt2_186;
    __current_stack6__.ttt3_187 = &ttt3_187;
    __current_stack6__.t4_188 = &t4_188;
    __current_stack6__.ia_190 = &ia_190;
    __current_stack6__.liIA_193 = &liIA_193;
    __current_stack6__.aZZZ_203 = &aZZZ_203;
    __current_stack6__.bZZZ_204 = &bZZZ_204;
    __current_stack6__.li_str_205 = &li_str_205;
    xassert("exception test",tuple2$2intboolp_catch(((struct tuple2$2intbool*)(right_value155=fun_exception(1,2))),&__current_stack6__,method_block6_code2HelloWorld2c)==3);
    if(right_value155) { come_call_finalizer(tuple2$2intboolp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0); }
    {__list_values4___206[0]=come_increment_ref_count(((char*)(right_value156=__builtin_string("AAA"))));
__list_values4___206[1]=come_increment_ref_count(((char*)(right_value157=__builtin_string("BBB"))));
__list_values4___206[2]=come_increment_ref_count(((char*)(right_value158=__builtin_string("CCC"))));
}    xassert("list test",list$1charphp_operator_equals(li_str_205,((struct list$1charph*)(right_value160=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value159=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1))))),3,__list_values4___206)))));
    if(right_value156) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0); }
    if(right_value157) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0); }
    if(right_value158) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0); }
    if(right_value160) { come_call_finalizer(list$1charphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0); }
    int __result106__ = 0;
    if(ax_12) { ax_12 = come_decrement_ref_count(ax_12, (void*)0, (void*)0, 0, 0); }
    if(str_16) { str_16 = come_decrement_ref_count(str_16, (void*)0, (void*)0, 0, 0); }
    if(data_17) { come_call_finalizer(sData_finalize,data_17, (void*)0, (void*)0, 0, 0, 0); }
    if(axyz_18) { axyz_18 = come_decrement_ref_count(axyz_18, (void*)0, (void*)0, 0, 0); }
    if(xxx_19) { xxx_19 = come_decrement_ref_count(xxx_19, (void*)0, (void*)0, 0, 0); }
    if(yyy_20) { yyy_20 = come_decrement_ref_count(yyy_20, (void*)0, (void*)0, 0, 0); }
    if(zzz_21) { zzz_21 = come_decrement_ref_count(zzz_21, (void*)0, (void*)0, 0, 0); }
    if(liX_27) { come_call_finalizer(list$1charphp_finalize,liX_27, (void*)0, (void*)0, 0, 0, 0); }
    if(liX2_36) { come_call_finalizer(list$1intp_finalize,liX2_36, (void*)0, (void*)0, 0, 0, 0); }
    if(li_48) { come_call_finalizer(list$1charphp_finalize,li_48, (void*)0, (void*)0, 0, 0, 0); }
    if(li2_50) { come_call_finalizer(list$1intp_finalize,li2_50, (void*)0, (void*)0, 0, 0, 0); }
    if(li3_83) { come_call_finalizer(list$1charphp_finalize,li3_83, (void*)0, (void*)0, 0, 0, 0); }
    if(li4_86) { come_call_finalizer(list$1intp_finalize,li4_86, (void*)0, (void*)0, 0, 0, 0); }
    if(li5_87) { come_call_finalizer(list$1intp_finalize,li5_87, (void*)0, (void*)0, 0, 0, 0); }
    if(li6_92) { come_call_finalizer(list$1intp_finalize,li6_92, (void*)0, (void*)0, 0, 0, 0); }
    if(axyzX_96) { axyzX_96 = come_decrement_ref_count(axyzX_96, (void*)0, (void*)0, 0, 0); }
    if(liZ_98) { come_call_finalizer(list$1intp_finalize,liZ_98, (void*)0, (void*)0, 0, 0, 0); }
    if(liZ2_102) { come_call_finalizer(list$1intp_finalize,liZ2_102, (void*)0, (void*)0, 0, 0, 0); }
    if(m1_169) { come_call_finalizer(map$2charpintp_finalize,m1_169, (void*)0, (void*)0, 0, 0, 0); }
    if(m2_180) { come_call_finalizer(map$2charpintp_finalize,m2_180, (void*)0, (void*)0, 0, 0, 0); }
    if(tt1_181) { come_call_finalizer(tuple1$1intp_finalize,tt1_181, (void*)0, (void*)0, 0, 0, 0); }
    if(tt2_182) { come_call_finalizer(tuple1$1charphp_finalize,tt2_182, (void*)0, (void*)0, 0, 0, 0); }
    if(tt3_184) { come_call_finalizer(tuple1$1charphp_finalize,tt3_184, (void*)0, (void*)0, 0, 0, 0); }
    if(ttt1_185) { come_call_finalizer(tuple1$1intp_finalize,ttt1_185, (void*)0, (void*)0, 0, 0, 0); }
    if(ttt2_186) { come_call_finalizer(tuple1$1charphp_finalize,ttt2_186, (void*)0, (void*)0, 0, 0, 0); }
    if(ttt3_187) { come_call_finalizer(tuple1$1charphp_finalize,ttt3_187, (void*)0, (void*)0, 0, 0, 0); }
    if(t4_188) { come_call_finalizer(tuple2$2charphintp_finalize,t4_188, (void*)0, (void*)0, 0, 0, 0); }
    if(ia_190) { ia_190 = come_decrement_ref_count(ia_190, ((struct IA*)ia_190)->finalize, ((struct IA*)ia_190)->_protocol_obj, 0, 0); } 
    if(liIA_193) { come_call_finalizer(list$1IAphp_finalize,liIA_193, (void*)0, (void*)0, 0, 0, 0); }
    if(li_str_205) { come_call_finalizer(list$1charphp_finalize,li_str_205, (void*)0, (void*)0, 0, 0, 0); }
    come_release_malloced_mem();
    come_heap_pool_final();
    return __result106__;
come_release_malloced_mem();
come_heap_pool_final();
}

static void sData_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                if(self->a) { self->a = come_decrement_ref_count(self->a, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

void method_block1_code2HelloWorld2c(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_24)));
        (*(parent->n_24))++;
    come_release_malloced_mem();
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1charph* __result14__ = self;
        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result14__;
    come_release_malloced_mem();
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_25;
struct list_item$1charph* prev_it_26;
memset(&it_25, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&prev_it_26, 0, sizeof(struct list_item$1charph*)); /* ddd */
            it_25=self->head;
            while(it_25!=((void*)0)) {
                if(1) {
                    if(it_25->item) { it_25->item = come_decrement_ref_count(it_25->item, (void*)0, (void*)0, 0, 0); }
                }
                prev_it_26=it_25;
                it_25=it_25->next;
                come_free_object(prev_it_26);
            }
        come_release_malloced_mem();
}

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value17;
struct list_item$1charph* litem_28;
char* __dec_obj3;
void* right_value18;
struct list_item$1charph* litem_29;
char* __dec_obj4;
void* right_value19;
struct list_item$1charph* litem_30;
char* __dec_obj5;
memset(&right_value17, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value18, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value19, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1charph*)); /* ddd */
        if(self->len==0) {
            litem_28=((struct list_item$1charph*)(right_value17=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_28->prev=((void*)0);
            litem_28->next=((void*)0);
            __dec_obj3=litem_28->item;
            litem_28->item=(char*)come_increment_ref_count(item);
            if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0); }
            self->tail=litem_28;
            self->head=litem_28;
        }
        else if(self->len==1) {
            litem_29=((struct list_item$1charph*)(right_value18=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_29->prev=self->head;
            litem_29->next=((void*)0);
            __dec_obj4=litem_29->item;
            litem_29->item=(char*)come_increment_ref_count(item);
            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0); }
            self->tail=litem_29;
            self->head->next=litem_29;
        }
        else {
            litem_30=((struct list_item$1charph*)(right_value19=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_30->prev=self->tail;
            litem_30->next=((void*)0);
            __dec_obj5=litem_30->item;
            litem_30->item=(char*)come_increment_ref_count(item);
            if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0); }
            self->tail->next=litem_30;
            self->tail=litem_30;
        }
        self->len++;
        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
}

static char* list$1charphp_begin(struct list$1charph* self){
char* result_31;
memset(&result_31, 0, sizeof(char*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            char* __result15__ = self->it->item;
            come_release_malloced_mem();
            return __result15__;
        }
        memset(&result_31,0,sizeof(char*));
        char* __result16__ = result_31;
        come_release_malloced_mem();
        return __result16__;
    come_release_malloced_mem();
}

static _Bool list$1charphp_end(struct list$1charph* self){
        _Bool __result17__ = self->it==((void*)0);
        come_release_malloced_mem();
        return __result17__;
    come_release_malloced_mem();
}

static char* list$1charphp_next(struct list$1charph* self){
char* result_33;
memset(&result_33, 0, sizeof(char*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            char* __result18__ = self->it->item;
            come_release_malloced_mem();
            return __result18__;
        }
        memset(&result_33,0,sizeof(char*));
        char* __result19__ = result_33;
        come_release_malloced_mem();
        return __result19__;
    come_release_malloced_mem();
}

static struct list$1int* list$1intp_initialize(struct list$1int* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1int* __result20__ = self;
        if(self) { come_call_finalizer(list$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result20__;
    come_release_malloced_mem();
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_34;
struct list_item$1int* prev_it_35;
memset(&it_34, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&prev_it_35, 0, sizeof(struct list_item$1int*)); /* ddd */
            it_34=self->head;
            while(it_34!=((void*)0)) {
                if(0) {
                }
                prev_it_35=it_34;
                it_34=it_34->next;
                come_free_object(prev_it_35);
            }
        come_release_malloced_mem();
}

static void list$1intp_push_back(struct list$1int* self, int item){
void* right_value25;
struct list_item$1int* litem_37;
void* right_value26;
struct list_item$1int* litem_38;
void* right_value27;
struct list_item$1int* litem_39;
memset(&right_value25, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&right_value26, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&right_value27, 0, sizeof(void*));
memset(&litem_39, 0, sizeof(struct list_item$1int*)); /* ddd */
        if(self->len==0) {
            litem_37=((struct list_item$1int*)(right_value25=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_37->prev=((void*)0);
            litem_37->next=((void*)0);
            litem_37->item=item;
            self->tail=litem_37;
            self->head=litem_37;
        }
        else if(self->len==1) {
            litem_38=((struct list_item$1int*)(right_value26=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_38->prev=self->head;
            litem_38->next=((void*)0);
            litem_38->item=item;
            self->tail=litem_38;
            self->head->next=litem_38;
        }
        else {
            litem_39=((struct list_item$1int*)(right_value27=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_39->prev=self->tail;
            litem_39->next=((void*)0);
            litem_39->item=item;
            self->tail->next=litem_39;
            self->tail=litem_39;
        }
        self->len++;
    come_release_malloced_mem();
}

static int list$1intp_begin(struct list$1int* self){
int result_40;
memset(&result_40, 0, sizeof(int)); /* bbb */
        self->it=self->head;
        if(self->it) {
            int __result21__ = self->it->item;
            come_release_malloced_mem();
            return __result21__;
        }
        memset(&result_40,0,sizeof(int));
        int __result22__ = result_40;
        come_release_malloced_mem();
        return __result22__;
    come_release_malloced_mem();
}

static _Bool list$1intp_end(struct list$1int* self){
        _Bool __result23__ = self->it==((void*)0);
        come_release_malloced_mem();
        return __result23__;
    come_release_malloced_mem();
}

static int list$1intp_next(struct list$1int* self){
int result_42;
memset(&result_42, 0, sizeof(int)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            int __result24__ = self->it->item;
            come_release_malloced_mem();
            return __result24__;
        }
        memset(&result_42,0,sizeof(int));
        int __result25__ = result_42;
        come_release_malloced_mem();
        return __result25__;
    come_release_malloced_mem();
}

static void list$1intp_each(struct list$1int* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item$1int* it_44;
int i_45;
_Bool end_flag_46;
memset(&it_44, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&i_45, 0, sizeof(int)); /* ddd */
memset(&end_flag_46, 0, sizeof(_Bool)); /* ddd */
        it_44=self->head;
        i_45=0;
        while(it_44!=((void*)0)) {
            end_flag_46=(_Bool)0;
            block(parent,it_44->item,i_45,&end_flag_46);
            if(end_flag_46==(_Bool)1) {
                break;
            }
            it_44=it_44->next;
            i_45++;
        }
    come_release_malloced_mem();
}

void method_block2_code2HelloWorld2c(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_43)));
        (*(parent->aX_43))=2;
    come_release_malloced_mem();
}

void method_block3_code2HelloWorld2c(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_52)));
        (*(parent->aXL_52))=2;
    come_release_malloced_mem();
}

static int list$1intp_item(struct list$1int* self, int position, int default_value){
struct list_item$1int* it_53;
int i_54;
memset(&it_53, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&i_54, 0, sizeof(int)); /* ddd */
        if(position<0) {
            position+=self->len;
        }
        it_53=self->head;
        i_54=0;
        while(it_53!=((void*)0)) {
            if(position==i_54) {
                int __result26__ = it_53->item;
                come_release_malloced_mem();
                return __result26__;
            }
            it_53=it_53->next;
            i_54++;
        }
        int __result27__ = default_value;
        come_release_malloced_mem();
        return __result27__;
    come_release_malloced_mem();
}

static void list$1intp_insert(struct list$1int* self, int position, int item){
void* right_value35;
struct list_item$1int* litem_55;
void* right_value36;
struct list_item$1int* litem_56;
struct list_item$1int* it_57;
int i_58;
void* right_value37;
struct list_item$1int* litem_59;
memset(&right_value35, 0, sizeof(void*));
memset(&litem_55, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&right_value36, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&it_57, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&i_58, 0, sizeof(int)); /* ddd */
memset(&right_value37, 0, sizeof(void*));
memset(&litem_59, 0, sizeof(struct list_item$1int*)); /* ddd */
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$1intp_push_back(self,item);
            come_release_malloced_mem();
            return;
        }
        if(position==0) {
            litem_55=((struct list_item$1int*)(right_value35=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_55->prev=((void*)0);
            litem_55->next=self->head;
            litem_55->item=item;
            self->head->prev=litem_55;
            self->head=litem_55;
            self->len++;
        }
        else if(self->len==1) {
            litem_56=((struct list_item$1int*)(right_value36=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_56->prev=self->head;
            litem_56->next=self->tail;
            litem_56->item=item;
            self->tail->prev=litem_56;
            self->head->next=litem_56;
            self->len++;
        }
        else {
            it_57=self->head;
            i_58=0;
            while(it_57!=((void*)0)) {
                if(position==i_58) {
                    litem_59=((struct list_item$1int*)(right_value37=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
                    litem_59->prev=it_57->prev;
                    litem_59->next=it_57;
                    litem_59->item=item;
                    it_57->prev->next=litem_59;
                    it_57->prev=litem_59;
                    self->len++;
                }
                it_57=it_57->next;
                i_58++;
            }
        }
    come_release_malloced_mem();
}

static void list$1charphp_insert(struct list$1charph* self, int position, char* item){
void* right_value38;
struct list_item$1charph* litem_60;
char* __dec_obj6;
void* right_value39;
struct list_item$1charph* litem_61;
char* __dec_obj7;
struct list_item$1charph* it_62;
int i_63;
void* right_value40;
struct list_item$1charph* litem_64;
char* __dec_obj8;
memset(&right_value38, 0, sizeof(void*));
memset(&litem_60, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&right_value39, 0, sizeof(void*));
memset(&litem_61, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&it_62, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_63, 0, sizeof(int)); /* ddd */
memset(&right_value40, 0, sizeof(void*));
memset(&litem_64, 0, sizeof(struct list_item$1charph*)); /* ddd */
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$1charphp_push_back(self,(char*)come_increment_ref_count(item));
            come_release_malloced_mem();
            return;
        }
        if(position==0) {
            litem_60=((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_60->prev=((void*)0);
            litem_60->next=self->head;
            __dec_obj6=litem_60->item;
            litem_60->item=(char*)come_increment_ref_count(item);
            if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0); }
            self->head->prev=litem_60;
            self->head=litem_60;
            self->len++;
        }
        else if(self->len==1) {
            litem_61=((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_61->prev=self->head;
            litem_61->next=self->tail;
            __dec_obj7=litem_61->item;
            litem_61->item=(char*)come_increment_ref_count(item);
            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0); }
            self->tail->prev=litem_61;
            self->head->next=litem_61;
            self->len++;
        }
        else {
            it_62=self->head;
            i_63=0;
            while(it_62!=((void*)0)) {
                if(position==i_63) {
                    litem_64=((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_64->prev=it_62->prev;
                    litem_64->next=it_62;
                    __dec_obj8=litem_64->item;
                    litem_64->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0); }
                    it_62->prev->next=litem_64;
                    it_62->prev=litem_64;
                    self->len++;
                }
                it_62=it_62->next;
                i_63++;
            }
        }
        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_65;
int i_66;
memset(&it_65, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_66, 0, sizeof(int)); /* ddd */
        if(position<0) {
            position+=self->len;
        }
        it_65=self->head;
        i_66=0;
        while(it_65!=((void*)0)) {
            if(position==i_66) {
                char* __result28__ = it_65->item;
                come_release_malloced_mem();
                return __result28__;
            }
            it_65=it_65->next;
            i_66++;
        }
        char* __result29__ = default_value;
        come_release_malloced_mem();
        return __result29__;
    come_release_malloced_mem();
}

static void list$1charphp_reset(struct list$1charph* self){
struct list_item$1charph* it_67;
struct list_item$1charph* prev_it_68;
memset(&it_67, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&prev_it_68, 0, sizeof(struct list_item$1charph*)); /* ddd */
        it_67=self->head;
        while(it_67!=((void*)0)) {
            prev_it_68=it_67;
            it_67=it_67->next;
            if(prev_it_68) { come_call_finalizer(list_item$1charphp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0); }
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
    come_release_malloced_mem();
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    if(self->item) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0); }
                }
            come_release_malloced_mem();
}

static int list$1charphp_length(struct list$1charph* self){
        int __result30__ = self->len;
        come_release_malloced_mem();
        return __result30__;
    come_release_malloced_mem();
}

static void list$1intp_delete(struct list$1int* self, int head, int tail){
int tmp_69;
struct list_item$1int* it_72;
int i_73;
struct list_item$1int* prev_it_74;
struct list_item$1int* it_75;
int i_76;
struct list_item$1int* prev_it_77;
struct list_item$1int* it_78;
struct list_item$1int* head_prev_it_79;
struct list_item$1int* tail_it_80;
int i_81;
struct list_item$1int* prev_it_82;
memset(&tmp_69, 0, sizeof(int)); /* ddd */
memset(&it_72, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&i_73, 0, sizeof(int)); /* ddd */
memset(&prev_it_74, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&it_75, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&i_76, 0, sizeof(int)); /* ddd */
memset(&prev_it_77, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&it_78, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&head_prev_it_79, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&tail_it_80, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&i_81, 0, sizeof(int)); /* ddd */
memset(&prev_it_82, 0, sizeof(struct list_item$1int*)); /* ddd */
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_69=tail;
            tail=head;
            head=tmp_69;
        }
        if(head<0) {
            head=0;
        }
        if(tail>self->len) {
            tail=self->len;
        }
        if(head==tail) {
            come_release_malloced_mem();
            return;
        }
        if(head==0&&tail==self->len) {
            list$1intp_reset(self);
        }
        else if(head==0) {
            it_72=self->head;
            i_73=0;
            while(it_72!=((void*)0)) {
                if(i_73<tail) {
                    prev_it_74=it_72;
                    it_72=it_72->next;
                    i_73++;
                    if(prev_it_74) { come_call_finalizer(list_item$1intp_finalize,prev_it_74, (void*)0, (void*)0, 0, 0, 0); }
                    self->len--;
                }
                else if(i_73==tail) {
                    self->head=it_72;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_72=it_72->next;
                    i_73++;
                }
            }
        }
        else if(tail==self->len) {
            it_75=self->head;
            i_76=0;
            while(it_75!=((void*)0)) {
                if(i_76==head) {
                    self->tail=it_75->prev;
                    self->tail->next=((void*)0);
                }
                if(i_76>=head) {
                    prev_it_77=it_75;
                    it_75=it_75->next;
                    i_76++;
                    if(prev_it_77) { come_call_finalizer(list_item$1intp_finalize,prev_it_77, (void*)0, (void*)0, 0, 0, 0); }
                    self->len--;
                }
                else {
                    it_75=it_75->next;
                    i_76++;
                }
            }
        }
        else {
            it_78=self->head;
            head_prev_it_79=((void*)0);
            tail_it_80=((void*)0);
            i_81=0;
            while(it_78!=((void*)0)) {
                if(i_81==head) {
                    head_prev_it_79=it_78->prev;
                }
                if(i_81==tail) {
                    tail_it_80=it_78;
                }
                if(i_81>=head&&i_81<tail) {
                    prev_it_82=it_78;
                    it_78=it_78->next;
                    i_81++;
                    if(prev_it_82) { come_call_finalizer(list_item$1intp_finalize,prev_it_82, (void*)0, (void*)0, 0, 0, 0); }
                    self->len--;
                }
                else {
                    it_78=it_78->next;
                    i_81++;
                }
            }
            if(head_prev_it_79!=((void*)0)) {
                head_prev_it_79->next=tail_it_80;
            }
            if(tail_it_80!=((void*)0)) {
                tail_it_80->prev=head_prev_it_79;
            }
        }
    come_release_malloced_mem();
}

static void list$1intp_reset(struct list$1int* self){
struct list_item$1int* it_70;
struct list_item$1int* prev_it_71;
memset(&it_70, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&prev_it_71, 0, sizeof(struct list_item$1int*)); /* ddd */
                it_70=self->head;
                while(it_70!=((void*)0)) {
                    prev_it_71=it_70;
                    it_70=it_70->next;
                    if(prev_it_71) { come_call_finalizer(list_item$1intp_finalize,prev_it_71, (void*)0, (void*)0, 0, 0, 0); }
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
            come_release_malloced_mem();
}

static void list_item$1intp_finalize(struct list_item$1int* self){
                    come_release_malloced_mem();
}

static void list$1charphp_replace(struct list$1charph* self, int position, char* item){
struct list_item$1charph* it_84;
int i_85;
char* __dec_obj9;
memset(&it_84, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&i_85, 0, sizeof(int)); /* ddd */
        if(position<0) {
            position+=self->len;
        }
        if(position>=self->len) {
            list$1charphp_push_back(self,(char*)come_increment_ref_count(item));
            come_release_malloced_mem();
            return;
        }
        it_84=self->head;
        i_85=0;
        while(it_84!=((void*)0)) {
            if(position==i_85) {
                __dec_obj9=it_84->item;
                it_84->item=(char*)come_increment_ref_count(item);
                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0); }
                break;
            }
            it_84=it_84->next;
            i_85++;
        }
        if(item) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1); }
    come_release_malloced_mem();
}

static _Bool list$1intp_equals(struct list$1int* left, struct list$1int* right){
struct list_item$1int* it_88;
struct list_item$1int* it2_89;
memset(&it_88, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&it2_89, 0, sizeof(struct list_item$1int*)); /* ddd */
        if(left->len!=right->len) {
            _Bool __result31__ = (_Bool)0;
            come_release_malloced_mem();
            return __result31__;
        }
        it_88=left->head;
        it2_89=right->head;
        while(it_88!=((void*)0)) {
            if(!int_equals(it_88->item,it2_89->item)) {
                _Bool __result32__ = (_Bool)0;
                come_release_malloced_mem();
                return __result32__;
            }
            it_88=it_88->next;
            it2_89=it2_89->next;
        }
        _Bool __result33__ = (_Bool)1;
        come_release_malloced_mem();
        return __result33__;
    come_release_malloced_mem();
}

static int list$1intp_find(struct list$1int* self, int item, int default_value){
int it2_90;
struct list_item$1int* it_91;
memset(&it2_90, 0, sizeof(int)); /* ddd */
memset(&it_91, 0, sizeof(struct list_item$1int*)); /* ddd */
        it2_90=0;
        it_91=self->head;
        while(it_91!=((void*)0)) {
            if(int_equals(it_91->item,item)) {
                int __result34__ = it2_90;
                come_release_malloced_mem();
                return __result34__;
            }
            it2_90++;
            it_91=it_91->next;
        }
        int __result35__ = default_value;
        come_release_malloced_mem();
        return __result35__;
    come_release_malloced_mem();
}

static struct list$1int* list$1intp_sublist(struct list$1int* self, int begin, int tail){
void* right_value54;
void* right_value55;
struct list$1int* result_93;
struct list_item$1int* it_94;
int i_95;
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct list$1int*)); /* ddd */
memset(&it_94, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&i_95, 0, sizeof(int)); /* ddd */
        result_93=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value55=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value54=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
        if(right_value55) { come_call_finalizer(list$1intp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0); }
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
        it_94=self->head;
        i_95=0;
        while(it_94!=((void*)0)) {
            if(i_95>=begin&&i_95<tail) {
                list$1intp_push_back(result_93,it_94->item);
            }
            it_94=it_94->next;
            i_95++;
        }
        struct list$1int* __result36__ = result_93;
        if(result_93) { come_call_finalizer(list$1intp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result36__;
    come_release_malloced_mem();
}

void method_block4_code2HelloWorld2c(struct __current_stack4__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
    come_release_malloced_mem();
}

static void list$1intp_operator_store_element(struct list$1int* self, int position, int item){
        list$1intp_replace(self,position,item);
    come_release_malloced_mem();
}

static void list$1intp_replace(struct list$1int* self, int position, int item){
struct list_item$1int* it_99;
int i_100;
memset(&it_99, 0, sizeof(struct list_item$1int*)); /* ddd */
memset(&i_100, 0, sizeof(int)); /* ddd */
            if(position<0) {
                position+=self->len;
            }
            if(position>=self->len) {
                list$1intp_push_back(self,item);
                come_release_malloced_mem();
                return;
            }
            it_99=self->head;
            i_100=0;
            while(it_99!=((void*)0)) {
                if(position==i_100) {
                    it_99->item=item;
                    break;
                }
                it_99=it_99->next;
                i_100++;
            }
        come_release_malloced_mem();
}

static int list$1intp_operator_load_element(struct list$1int* self, int index){
int default_value_101;
memset(&default_value_101, 0, sizeof(int)); /* bbb */
        memset(&default_value_101,0,sizeof(int));
        int __result37__ = list$1intp_item(self,index,default_value_101);
        come_release_malloced_mem();
        return __result37__;
    come_release_malloced_mem();
}

static _Bool list$1intp_operator_equals(struct list$1int* self, struct list$1int* right){
        _Bool __result38__ = list$1intp_equals(self,right);
        come_release_malloced_mem();
        return __result38__;
    come_release_malloced_mem();
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
int i_104;
memset(&i_104, 0, sizeof(int)); /* ddd */
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_104=0;
        i_104<num_value;
        i_104++
        ){
            list$1intp_push_back(self,values[i_104]);
        }
        struct list$1int* __result39__ = self;
        if(self) { come_call_finalizer(list$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result39__;
    come_release_malloced_mem();
}

void method_block5_code2HelloWorld2c(struct __current_stack5__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
    come_release_malloced_mem();
}

static struct map$2charpint* map$2charpint_initialize_with_values(struct map$2charpint* self, int num_keys, char** keys, int* values){
void* right_value72;
void* right_value73;
void* right_value74;
int i_109;
void* right_value75;
void* right_value76;
struct list$1charp* __dec_obj12;
int i_112;
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&i_109, 0, sizeof(int)); /* ddd */
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&i_112, 0, sizeof(int)); /* ddd */
        self->keys=((char**)(right_value72=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
        self->items=((int*)(right_value73=(int*)come_calloc(1, sizeof(int)*(1*(128)))));
        self->item_existance=((_Bool*)(right_value74=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
        for(
        i_109=0;
        i_109<128;
        i_109++
        ){
            self->item_existance[i_109]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        self->it=0;
        __dec_obj12=self->key_list;
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value76=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value75=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
        if(__dec_obj12) { come_call_finalizer(list$1charpp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value76) { come_call_finalizer(list$1charpp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0); }
        for(
        i_112=0;
        i_112<num_keys;
        i_112++
        ){
            map$2charpintp_insert(self,keys[i_112],values[i_112]);
        }
        struct map$2charpint* __result55__ = self;
        if(self) { come_call_finalizer(map$2charpintp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result55__;
    come_release_malloced_mem();
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1charp* __result40__ = self;
            if(self) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result40__;
        come_release_malloced_mem();
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_110;
struct list_item$1charp* prev_it_111;
memset(&it_110, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*)); /* ddd */
                it_110=self->head;
                while(it_110!=((void*)0)) {
                    if(0) {
                        if(it_110->item) { it_110->item = come_decrement_ref_count(it_110->item, (void*)0, (void*)0, 0, 0); }
                    }
                    prev_it_111=it_110;
                    it_110=it_110->next;
                    come_free_object(prev_it_111);
                }
            come_release_malloced_mem();
}

static void map$2charpintp_insert(struct map$2charpint* self, char* key, int item){
int hash_128;
int it_129;
_Bool same_key_exist_146;
char* it2_148;
memset(&hash_128, 0, sizeof(int)); /* ddd */
memset(&it_129, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_146, 0, sizeof(_Bool)); /* ddd */
memset(&it2_148, 0, sizeof(char*)); /* ddd */
                if(self->len*2>=self->size) {
                    map$2charpintp_rehash(self);
                }
                hash_128=charp_get_hash_key(key)%self->size;
                it_129=hash_128;
                while((_Bool)1) {
                    if(self->item_existance[it_129]) {
                        if(charp_equals(self->keys[it_129],key)) {
                            if(0) {
                                list$1charpp_remove(self->key_list,self->keys[it_129]);
                                if(self->keys[it_129]) { self->keys[it_129] = come_decrement_ref_count(self->keys[it_129], (void*)0, (void*)0, 0, 0); }
                                self->keys[it_129]=key;
                            }
                            else {
                                list$1charpp_remove(self->key_list,self->keys[it_129]);
                                self->keys[it_129]=key;
                            }
                            if(0) {
                                self->items[it_129]=item;
                            }
                            else {
                                self->items[it_129]=item;
                            }
                            break;
                        }
                        it_129++;
                        if(it_129>=self->size) {
                            it_129=0;
                        }
                        else if(it_129==hash_128) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_129]=(_Bool)1;
                        if(0) {
                            self->keys[it_129]=key;
                        }
                        else {
                            self->keys[it_129]=key;
                        }
                        if(0) {
                            self->items[it_129]=item;
                        }
                        else {
                            self->items[it_129]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_146=(_Bool)0;
                for(
                it2_148=list$1charpp_begin(self->key_list);
                !list$1charpp_end(self->key_list);
                it_129=list$1charpp_next(self->key_list)
                ){
                    if(charp_equals(it2_148,key)) {
                        same_key_exist_146=(_Bool)1;
                    }
                }
                if(!same_key_exist_146) {
                    list$1charpp_push_back(self->key_list,key);
                }
            come_release_malloced_mem();
}

static void map$2charpintp_rehash(struct map$2charpint* self){
int size_113;
void* right_value77;
char** keys_114;
void* right_value78;
int* items_115;
void* right_value79;
_Bool* item_existance_116;
int len_117;
char* it_119;
int default_value_121;
int it2_124;
int hash_125;
int n_126;
int default_value_127;
memset(&size_113, 0, sizeof(int)); /* ddd */
memset(&right_value77, 0, sizeof(void*));
memset(&keys_114, 0, sizeof(char**)); /* ddd */
memset(&right_value78, 0, sizeof(void*));
memset(&items_115, 0, sizeof(int*)); /* ddd */
memset(&right_value79, 0, sizeof(void*));
memset(&item_existance_116, 0, sizeof(_Bool*)); /* ddd */
memset(&len_117, 0, sizeof(int)); /* ddd */
memset(&it_119, 0, sizeof(char*)); /* ddd */
memset(&default_value_121, 0, sizeof(int)); /* bbb */
memset(&it2_124, 0, sizeof(int)); /* ddd */
memset(&hash_125, 0, sizeof(int)); /* ddd */
memset(&n_126, 0, sizeof(int)); /* ddd */
memset(&default_value_127, 0, sizeof(int)); /* bbb */
                        size_113=self->size*3;
                        keys_114=((char**)(right_value77=(char**)come_calloc(1, sizeof(char*)*(1*(size_113)))));
                        items_115=((int*)(right_value78=(int*)come_calloc(1, sizeof(int)*(1*(size_113)))));
                        item_existance_116=((_Bool*)(right_value79=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_113)))));
                        len_117=0;
                        for(
                        it_119=map$2charpintp_begin(self);
                        !map$2charpintp_end(self);
                        it_119=map$2charpintp_next(self)
                        ){
                            it2_124=map$2charpintp_at(self,it_119,default_value_121);
                            hash_125=charp_get_hash_key(it_119)%size_113;
                            n_126=hash_125;
                            while((_Bool)1) {
                                if(item_existance_116[n_126]) {
                                    n_126++;
                                    if(n_126>=size_113) {
                                        n_126=0;
                                    }
                                    else if(n_126==hash_125) {
                                        fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                        exit(2);
                                    }
                                }
                                else {
                                    item_existance_116[n_126]=(_Bool)1;
                                    keys_114[n_126]=it_119;
                                    items_115[n_126]=map$2charpintp_at(self,it_119,default_value_127);
                                    len_117++;
                                    break;
                                }
                            }
                        }
                        come_free_object((char*)self->items);
                        if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
                        come_free_object((char*)self->keys);
                        self->keys=keys_114;
                        self->items=items_115;
                        self->item_existance=item_existance_116;
                        self->size=size_113;
                        self->len=len_117;
                    come_release_malloced_mem();
}

static char* map$2charpintp_begin(struct map$2charpint* self){
char* result_118;
memset(&result_118, 0, sizeof(char*)); /* bbb */
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                char* __result41__ = self->key_list->it->item;
                                come_release_malloced_mem();
                                return __result41__;
                            }
                            memset(&result_118,0,sizeof(char*));
                            char* __result42__ = result_118;
                            come_release_malloced_mem();
                            return __result42__;
                        come_release_malloced_mem();
}

static _Bool map$2charpintp_end(struct map$2charpint* self){
                            _Bool __result43__ = self->key_list->it==((void*)0);
                            come_release_malloced_mem();
                            return __result43__;
                        come_release_malloced_mem();
}

static char* map$2charpintp_next(struct map$2charpint* self){
char* result_120;
memset(&result_120, 0, sizeof(char*)); /* bbb */
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                char* __result44__ = self->key_list->it->item;
                                come_release_malloced_mem();
                                return __result44__;
                            }
                            memset(&result_120,0,sizeof(char*));
                            char* __result45__ = result_120;
                            come_release_malloced_mem();
                            return __result45__;
                        come_release_malloced_mem();
}

static int map$2charpintp_at(struct map$2charpint* self, char* key, int default_value){
int hash_122;
int it_123;
memset(&hash_122, 0, sizeof(int)); /* ddd */
memset(&it_123, 0, sizeof(int)); /* ddd */
                                hash_122=charp_get_hash_key(((char*)key))%self->size;
                                it_123=hash_122;
                                while((_Bool)1) {
                                    if(self->item_existance[it_123]) {
                                        if(charp_equals(self->keys[it_123],key)) {
                                            int __result46__ = self->items[it_123];
                                            come_release_malloced_mem();
                                            return __result46__;
                                        }
                                        it_123++;
                                        if(it_123>=self->size) {
                                            it_123=0;
                                        }
                                        else if(it_123==hash_122) {
                                            int __result47__ = default_value;
                                            come_release_malloced_mem();
                                            return __result47__;
                                        }
                                    }
                                    else {
                                        int __result48__ = default_value;
                                        come_release_malloced_mem();
                                        return __result48__;
                                    }
                                }
                                int __result49__ = default_value;
                                come_release_malloced_mem();
                                return __result49__;
                            come_release_malloced_mem();
}

static void list$1charpp_remove(struct list$1charp* self, char* item){
int it2_130;
struct list_item$1charp* it_131;
memset(&it2_130, 0, sizeof(int)); /* ddd */
memset(&it_131, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                    it2_130=0;
                                    it_131=self->head;
                                    while(it_131!=((void*)0)) {
                                        if(charp_equals(it_131->item,item)) {
                                            list$1charpp_delete(self,it2_130,it2_130+1);
                                            break;
                                        }
                                        it2_130++;
                                        it_131=it_131->next;
                                    }
                                come_release_malloced_mem();
}

static void list$1charpp_delete(struct list$1charp* self, int head, int tail){
int tmp_132;
struct list_item$1charp* it_135;
int i_136;
struct list_item$1charp* prev_it_137;
struct list_item$1charp* it_138;
int i_139;
struct list_item$1charp* prev_it_140;
struct list_item$1charp* it_141;
struct list_item$1charp* head_prev_it_142;
struct list_item$1charp* tail_it_143;
int i_144;
struct list_item$1charp* prev_it_145;
memset(&tmp_132, 0, sizeof(int)); /* ddd */
memset(&it_135, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_136, 0, sizeof(int)); /* ddd */
memset(&prev_it_137, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_138, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_139, 0, sizeof(int)); /* ddd */
memset(&prev_it_140, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&it_141, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&head_prev_it_142, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&tail_it_143, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_144, 0, sizeof(int)); /* ddd */
memset(&prev_it_145, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                if(head<0) {
                                                    head+=self->len;
                                                }
                                                if(tail<0) {
                                                    tail+=self->len+1;
                                                }
                                                if(head>tail) {
                                                    tmp_132=tail;
                                                    tail=head;
                                                    head=tmp_132;
                                                }
                                                if(head<0) {
                                                    head=0;
                                                }
                                                if(tail>self->len) {
                                                    tail=self->len;
                                                }
                                                if(head==tail) {
                                                    come_release_malloced_mem();
                                                    return;
                                                }
                                                if(head==0&&tail==self->len) {
                                                    list$1charpp_reset(self);
                                                }
                                                else if(head==0) {
                                                    it_135=self->head;
                                                    i_136=0;
                                                    while(it_135!=((void*)0)) {
                                                        if(i_136<tail) {
                                                            prev_it_137=it_135;
                                                            it_135=it_135->next;
                                                            i_136++;
                                                            if(prev_it_137) { come_call_finalizer(list_item$1charpp_finalize,prev_it_137, (void*)0, (void*)0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else if(i_136==tail) {
                                                            self->head=it_135;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_135=it_135->next;
                                                            i_136++;
                                                        }
                                                    }
                                                }
                                                else if(tail==self->len) {
                                                    it_138=self->head;
                                                    i_139=0;
                                                    while(it_138!=((void*)0)) {
                                                        if(i_139==head) {
                                                            self->tail=it_138->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(i_139>=head) {
                                                            prev_it_140=it_138;
                                                            it_138=it_138->next;
                                                            i_139++;
                                                            if(prev_it_140) { come_call_finalizer(list_item$1charpp_finalize,prev_it_140, (void*)0, (void*)0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_138=it_138->next;
                                                            i_139++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_141=self->head;
                                                    head_prev_it_142=((void*)0);
                                                    tail_it_143=((void*)0);
                                                    i_144=0;
                                                    while(it_141!=((void*)0)) {
                                                        if(i_144==head) {
                                                            head_prev_it_142=it_141->prev;
                                                        }
                                                        if(i_144==tail) {
                                                            tail_it_143=it_141;
                                                        }
                                                        if(i_144>=head&&i_144<tail) {
                                                            prev_it_145=it_141;
                                                            it_141=it_141->next;
                                                            i_144++;
                                                            if(prev_it_145) { come_call_finalizer(list_item$1charpp_finalize,prev_it_145, (void*)0, (void*)0, 0, 0, 0); }
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_141=it_141->next;
                                                            i_144++;
                                                        }
                                                    }
                                                    if(head_prev_it_142!=((void*)0)) {
                                                        head_prev_it_142->next=tail_it_143;
                                                    }
                                                    if(tail_it_143!=((void*)0)) {
                                                        tail_it_143->prev=head_prev_it_142;
                                                    }
                                                }
                                            come_release_malloced_mem();
}

static void list$1charpp_reset(struct list$1charp* self){
struct list_item$1charp* it_133;
struct list_item$1charp* prev_it_134;
memset(&it_133, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&prev_it_134, 0, sizeof(struct list_item$1charp*)); /* ddd */
                                                        it_133=self->head;
                                                        while(it_133!=((void*)0)) {
                                                            prev_it_134=it_133;
                                                            it_133=it_133->next;
                                                            if(prev_it_134) { come_call_finalizer(list_item$1charpp_finalize,prev_it_134, (void*)0, (void*)0, 0, 0, 0); }
                                                        }
                                                        self->head=((void*)0);
                                                        self->tail=((void*)0);
                                                        self->len=0;
                                                    come_release_malloced_mem();
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
                                                            come_release_malloced_mem();
}

static char* list$1charpp_begin(struct list$1charp* self){
char* result_147;
memset(&result_147, 0, sizeof(char*)); /* bbb */
                    self->it=self->head;
                    if(self->it) {
                        char* __result50__ = self->it->item;
                        come_release_malloced_mem();
                        return __result50__;
                    }
                    memset(&result_147,0,sizeof(char*));
                    char* __result51__ = result_147;
                    come_release_malloced_mem();
                    return __result51__;
                come_release_malloced_mem();
}

static _Bool list$1charpp_end(struct list$1charp* self){
                    _Bool __result52__ = self->it==((void*)0);
                    come_release_malloced_mem();
                    return __result52__;
                come_release_malloced_mem();
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_149;
memset(&result_149, 0, sizeof(char*)); /* bbb */
                    self->it=self->it->next;
                    if(self->it) {
                        char* __result53__ = self->it->item;
                        come_release_malloced_mem();
                        return __result53__;
                    }
                    memset(&result_149,0,sizeof(char*));
                    char* __result54__ = result_149;
                    come_release_malloced_mem();
                    return __result54__;
                come_release_malloced_mem();
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value80;
struct list_item$1charp* litem_150;
void* right_value81;
struct list_item$1charp* litem_151;
void* right_value82;
struct list_item$1charp* litem_152;
memset(&right_value80, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value81, 0, sizeof(void*));
memset(&litem_151, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&right_value82, 0, sizeof(void*));
memset(&litem_152, 0, sizeof(struct list_item$1charp*)); /* ddd */
                        if(self->len==0) {
                            litem_150=((struct list_item$1charp*)(right_value80=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_150->prev=((void*)0);
                            litem_150->next=((void*)0);
                            litem_150->item=item;
                            self->tail=litem_150;
                            self->head=litem_150;
                        }
                        else if(self->len==1) {
                            litem_151=((struct list_item$1charp*)(right_value81=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_151->prev=self->head;
                            litem_151->next=((void*)0);
                            litem_151->item=item;
                            self->tail=litem_151;
                            self->head->next=litem_151;
                        }
                        else {
                            litem_152=((struct list_item$1charp*)(right_value82=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_152->prev=self->tail;
                            litem_152->next=((void*)0);
                            litem_152->item=item;
                            self->tail->next=litem_152;
                            self->tail=litem_152;
                        }
                        self->len++;
                    come_release_malloced_mem();
}

static void map$2charpintp_finalize(struct map$2charpint* self){
int i_153;
int i_154;
memset(&i_153, 0, sizeof(int)); /* ddd */
memset(&i_154, 0, sizeof(int)); /* ddd */
            for(
            i_153=0;
            i_153<self->size;
            i_153++
            ){
                if(self->item_existance[i_153]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_154=0;
            i_154<self->size;
            i_154++
            ){
                if(self->item_existance[i_154]) {
                    if(0) {
                        if(self->keys[i_154]) { self->keys[i_154] = come_decrement_ref_count(self->keys[i_154], (void*)0, (void*)0, 0, 0); }
                    }
                }
            }
            come_free_object((char*)self->keys);
            if(self->key_list) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0); }
            if(self->item_existance) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0); }
        come_release_malloced_mem();
}

static _Bool map$2charpintp_operator_equals(struct map$2charpint* left, struct map$2charpint* right){
        _Bool __result60__ = map$2charpintp_equals(left,right);
        come_release_malloced_mem();
        return __result60__;
    come_release_malloced_mem();
}

static _Bool map$2charpintp_equals(struct map$2charpint* left, struct map$2charpint* right){
int n_157;
_Bool result_158;
char* it_159;
char* default_value_160;
char* it2_163;
int default_value2_164;
int item_165;
int item2_166;
memset(&n_157, 0, sizeof(int)); /* ddd */
memset(&result_158, 0, sizeof(_Bool)); /* ddd */
memset(&it_159, 0, sizeof(char*)); /* ddd */
memset(&default_value_160, 0, sizeof(char*)); /* bbb */
memset(&it2_163, 0, sizeof(char*)); /* ddd */
memset(&default_value2_164, 0, sizeof(int)); /* bbb */
memset(&item_165, 0, sizeof(int)); /* ddd */
memset(&item2_166, 0, sizeof(int)); /* ddd */
            if(left->len!=right->len) {
                _Bool __result56__ = (_Bool)0;
                come_release_malloced_mem();
                return __result56__;
            }
            n_157=0;
            result_158=(_Bool)1;
            for(
            it_159=list$1charpp_begin(left->key_list);
            !list$1charpp_end(left->key_list);
            it_159=list$1charpp_next(left->key_list)
            ){
                it2_163=list$1charpp_item(right->key_list,n_157,default_value_160);
                if(charp_equals(it_159,it2_163)) {
                    item_165=map$2charpintp_at(left,it_159,default_value2_164);
                    item2_166=map$2charpintp_at(left,it2_163,default_value2_164);
                    if(!int_equals(item_165,item2_166)) {
                        result_158=(_Bool)0;
                    }
                }
                else {
                    result_158=(_Bool)0;
                }
                n_157++;
            }
            _Bool __result59__ = result_158;
            come_release_malloced_mem();
            return __result59__;
        come_release_malloced_mem();
}

static char* list$1charpp_item(struct list$1charp* self, int position, char* default_value){
struct list_item$1charp* it_161;
int i_162;
memset(&it_161, 0, sizeof(struct list_item$1charp*)); /* ddd */
memset(&i_162, 0, sizeof(int)); /* ddd */
                    if(position<0) {
                        position+=self->len;
                    }
                    it_161=self->head;
                    i_162=0;
                    while(it_161!=((void*)0)) {
                        if(position==i_162) {
                            char* __result57__ = it_161->item;
                            come_release_malloced_mem();
                            return __result57__;
                        }
                        it_161=it_161->next;
                        i_162++;
                    }
                    char* __result58__ = default_value;
                    come_release_malloced_mem();
                    return __result58__;
                come_release_malloced_mem();
}

static int map$2charpintp_operator_load_element(struct map$2charpint* self, char* key){
int default_value_170;
memset(&default_value_170, 0, sizeof(int)); /* bbb */
        memset(&default_value_170,0,sizeof(int));
        int __result61__ = map$2charpintp_at(self,key,default_value_170);
        come_release_malloced_mem();
        return __result61__;
    come_release_malloced_mem();
}

static struct map$2charpint* map$2charpintp_clone(struct map$2charpint* self){
void* right_value89;
void* right_value95;
struct map$2charpint* result_172;
char* it_173;
int default_value_174;
int it2_175;
void* right_value96;
void* right_value97;
memset(&right_value89, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&result_172, 0, sizeof(struct map$2charpint*)); /* ddd */
memset(&it_173, 0, sizeof(char*)); /* ddd */
memset(&default_value_174, 0, sizeof(int)); /* bbb */
memset(&it2_175, 0, sizeof(int)); /* ddd */
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
        if(self==((void*)0)) {
            struct map$2charpint* __result62__ = ((void*)0);
            come_release_malloced_mem();
            return __result62__;
        }
        result_172=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value95=map$2charpintp_initialize((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value89=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1)))))))));
        if(right_value95) { come_call_finalizer(map$2charpintp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0); }
        for(
        it_173=map$2charpintp_begin(self);
        !map$2charpintp_end(self);
        it_173=map$2charpintp_next(self)
        ){
            it2_175=map$2charpintp_at(self,it_173,default_value_174);
            if(0&&!0) {
                map$2charpintp_insert2(result_172,((char*)(right_value96=charp_clone(it_173))),it2_175);
                if(right_value96) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0); }
            }
            else if(0&&0) {
                map$2charpintp_insert2(result_172,((char*)(right_value97=charp_clone(it_173))),int_clone(it2_175));
                if(right_value97) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0); }
            }
            else if(!0&&0) {
                map$2charpintp_insert2(result_172,it_173,int_clone(it2_175));
            }
            else if(!0&&!0) {
                map$2charpintp_insert2(result_172,it_173,it2_175);
            }
        }
        struct map$2charpint* __result64__ = result_172;
        if(result_172) { come_call_finalizer(map$2charpintp_finalize,result_172, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result64__;
    come_release_malloced_mem();
}

static struct map$2charpint* map$2charpintp_initialize(struct map$2charpint* self){
void* right_value90;
void* right_value91;
void* right_value92;
int i_171;
void* right_value93;
void* right_value94;
struct list$1charp* __dec_obj13;
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&i_171, 0, sizeof(int)); /* ddd */
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
            self->keys=((char**)(right_value90=(char**)come_calloc(1, sizeof(char*)*(1*(128)))));
            self->items=((int*)(right_value91=(int*)come_calloc(1, sizeof(int)*(1*(128)))));
            self->item_existance=((_Bool*)(right_value92=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)))));
            for(
            i_171=0;
            i_171<128;
            i_171++
            ){
                self->item_existance[i_171]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj13=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value94=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value93=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            if(__dec_obj13) { come_call_finalizer(list$1charpp_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0); }
            if(right_value94) { come_call_finalizer(list$1charpp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0); }
            self->it=0;
            struct map$2charpint* __result63__ = self;
            if(self) { come_call_finalizer(map$2charpintp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
            come_release_malloced_mem();
            return __result63__;
        come_release_malloced_mem();
}

static void map$2charpintp_insert2(struct map$2charpint* self, char* key, int item){
int hash_176;
int it_177;
_Bool same_key_exist_178;
char* it2_179;
memset(&hash_176, 0, sizeof(int)); /* ddd */
memset(&it_177, 0, sizeof(int)); /* ddd */
memset(&same_key_exist_178, 0, sizeof(_Bool)); /* ddd */
memset(&it2_179, 0, sizeof(char*)); /* ddd */
                    if(self->len*2>=self->size) {
                        map$2charpintp_rehash(self);
                    }
                    hash_176=charp_get_hash_key(key)%self->size;
                    it_177=hash_176;
                    while((_Bool)1) {
                        if(self->item_existance[it_177]) {
                            if(charp_equals(self->keys[it_177],key)) {
                                if(0) {
                                    if(self->keys[it_177]) { self->keys[it_177] = come_decrement_ref_count(self->keys[it_177], (void*)0, (void*)0, 0, 0); }
                                    list$1charpp_remove(self->key_list,self->keys[it_177]);
                                    self->keys[it_177]=key;
                                }
                                else {
                                    list$1charpp_remove(self->key_list,self->keys[it_177]);
                                    self->keys[it_177]=key;
                                }
                                if(0) {
                                    self->items[it_177]=item;
                                }
                                else {
                                    self->items[it_177]=item;
                                }
                                break;
                            }
                            it_177++;
                            if(it_177>=self->size) {
                                it_177=0;
                            }
                            else if(it_177==hash_176) {
                                fprintf(stderr,"unexpected error in map.insert\n");
                                exit(2);
                            }
                        }
                        else {
                            self->item_existance[it_177]=(_Bool)1;
                            if(0) {
                                self->keys[it_177]=key;
                            }
                            else {
                                self->keys[it_177]=key;
                            }
                            if(0) {
                                self->items[it_177]=item;
                            }
                            else {
                                self->items[it_177]=item;
                            }
                            self->len++;
                            break;
                        }
                    }
                    same_key_exist_178=(_Bool)0;
                    for(
                    it2_179=list$1charpp_begin(self->key_list);
                    !list$1charpp_end(self->key_list);
                    it_177=list$1charpp_next(self->key_list)
                    ){
                        if(charp_equals(it2_179,key)) {
                            same_key_exist_178=(_Bool)1;
                        }
                    }
                    if(!same_key_exist_178) {
                        list$1charpp_push_back(self->key_list,key);
                    }
                come_release_malloced_mem();
}

static struct tuple1$1int* tuple1$1intp_initialize(struct tuple1$1int* self, int v1){
        self->v1=v1;
        struct tuple1$1int* __result65__ = self;
        if(self) { come_call_finalizer(tuple1$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result65__;
    come_release_malloced_mem();
}

static void tuple1$1intp_finalize(struct tuple1$1int* self){
        come_release_malloced_mem();
}

static struct tuple1$1charph* tuple1$1charphp_initialize(struct tuple1$1charph* self, char* v1){
char* __dec_obj14;
        __dec_obj14=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0); }
        struct tuple1$1charph* __result66__ = self;
        if(self) { come_call_finalizer(tuple1$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
        come_release_malloced_mem();
        return __result66__;
    come_release_malloced_mem();
}

static void tuple1$1charphp_finalize(struct tuple1$1charph* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

static struct tuple1$1charph* tuple1$1charphp_clone(struct tuple1$1charph* self){
void* right_value105;
struct tuple1$1charph* result_183;
void* right_value106;
char* __dec_obj16;
memset(&right_value105, 0, sizeof(void*));
memset(&result_183, 0, sizeof(struct tuple1$1charph*)); /* ddd */
memset(&right_value106, 0, sizeof(void*));
        if(self==(void*)0) {
            struct tuple1$1charph* __result67__ = (void*)0;
            come_release_malloced_mem();
            return __result67__;
        }
        result_183=(struct tuple1$1charph*)come_increment_ref_count(((struct tuple1$1charph*)(right_value105=(struct tuple1$1charph*)come_calloc(1, sizeof(struct tuple1$1charph)*(1)))));
        if(right_value105) { come_call_finalizer(tuple1$1charphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            __dec_obj16=result_183->v1;
            result_183->v1=(char*)come_increment_ref_count(((char*)(right_value106=string_clone(self->v1))));
            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0); }
            if(right_value106) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0); }
        }
        struct tuple1$1charph* __result68__ = result_183;
        if(result_183) { come_call_finalizer(tuple1$1charphp_finalize,result_183, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result68__;
    come_release_malloced_mem();
}

static _Bool tuple1$1charphp_equals(struct tuple1$1charph* left, struct tuple1$1charph* right){
        if(!string_equals(left->v1,right->v1)) {
            _Bool __result69__ = (_Bool)0;
            come_release_malloced_mem();
            return __result69__;
        }
        _Bool __result70__ = (_Bool)1;
        come_release_malloced_mem();
        return __result70__;
    come_release_malloced_mem();
}

static _Bool tuple1$1charphp_operator_equals(struct tuple1$1charph* left, struct tuple1$1charph* right){
        if(!string_equals(left->v1,right->v1)) {
            _Bool __result71__ = (_Bool)0;
            come_release_malloced_mem();
            return __result71__;
        }
        _Bool __result72__ = (_Bool)1;
        come_release_malloced_mem();
        return __result72__;
    come_release_malloced_mem();
}

static struct tuple2$2charphint* tuple2$2charphint_initialize(struct tuple2$2charphint* self, char* v1, int v2){
char* __dec_obj18;
        __dec_obj18=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0); }
        self->v2=v2;
        struct tuple2$2charphint* __result73__ = self;
        if(self) { come_call_finalizer(tuple2$2charphintp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        if(v1) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1); }
        come_release_malloced_mem();
        return __result73__;
    come_release_malloced_mem();
}

static void tuple2$2charphintp_finalize(struct tuple2$2charphint* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                if(self->v1) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0); }
            }
        come_release_malloced_mem();
}

static struct tuple2$2charpint* tuple2$2charpint_initialize(struct tuple2$2charpint* self, char* v1, int v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$2charpint* __result74__ = self;
        if(self) { come_call_finalizer(tuple2$2charpintp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result74__;
    come_release_malloced_mem();
}

static void tuple2$2charpintp_finalize(struct tuple2$2charpint* self){
        come_release_malloced_mem();
}

static _Bool tuple2$2charpintp_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right){
        if(!charp_equals(left->v1,right->v1)) {
            _Bool __result75__ = (_Bool)0;
            come_release_malloced_mem();
            return __result75__;
        }
        if(!int_equals(left->v2,right->v2)) {
            _Bool __result76__ = (_Bool)0;
            come_release_malloced_mem();
            return __result76__;
        }
        _Bool __result77__ = (_Bool)1;
        come_release_malloced_mem();
        return __result77__;
    come_release_malloced_mem();
}

static _Bool tuple2$2charpintp_operator_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right){
        if(!charp_equals(left->v1,right->v1)) {
            _Bool __result78__ = (_Bool)0;
            come_release_malloced_mem();
            return __result78__;
        }
        if(!int_equals(left->v2,right->v2)) {
            _Bool __result79__ = (_Bool)0;
            come_release_malloced_mem();
            return __result79__;
        }
        _Bool __result80__ = (_Bool)1;
        come_release_malloced_mem();
        return __result80__;
    come_release_malloced_mem();
}

static _Bool tuple2$2charpintp_not_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right){
        if(!charp_equals(left->v1,right->v1)) {
            _Bool __result81__ = (_Bool)0;
            come_release_malloced_mem();
            return __result81__;
        }
        if(!int_equals(left->v2,right->v2)) {
            _Bool __result82__ = (_Bool)0;
            come_release_malloced_mem();
            return __result82__;
        }
        _Bool __result83__ = (_Bool)1;
        come_release_malloced_mem();
        return __result83__;
    come_release_malloced_mem();
}

static _Bool tuple2$2charpintp_operator_not_equals(struct tuple2$2charpint* left, struct tuple2$2charpint* right){
        _Bool __result84__ = !(charp_equals(left->v1,right->v1)&&int_equals(left->v2,right->v2));
        come_release_malloced_mem();
        return __result84__;
    come_release_malloced_mem();
}

static struct sDataA* sDataA_clone(struct sDataA* self){
void* right_value146;
struct sDataA* result_199;
memset(&right_value146, 0, sizeof(void*));
memset(&result_199, 0, sizeof(struct sDataA*)); /* ddd */
        if(self==(void*)0) {
            struct sDataA* __result92__ = (void*)0;
            come_release_malloced_mem();
            return __result92__;
        }
        result_199=(struct sDataA*)come_increment_ref_count(((struct sDataA*)(right_value146=(struct sDataA*)come_calloc(1, sizeof(struct sDataA)*(1)))));
        if(right_value146) { come_call_finalizer(sDataA_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0); }
        if(self!=((void*)0)) {
            result_199->a=self->a;
        }
        if(self!=((void*)0)) {
            result_199->b=self->b;
        }
        struct sDataA* __result93__ = result_199;
        if(result_199) { come_call_finalizer(sDataA_finalize,result_199, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result93__;
    come_release_malloced_mem();
}

static struct list$1IAph* list$1IAphp_initialize(struct list$1IAph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1IAph* __result87__ = self;
        if(self) { come_call_finalizer(list$1IAphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result87__;
    come_release_malloced_mem();
}

static void list$1IAphp_finalize(struct list$1IAph* self){
struct list_item$1IAph* it_191;
struct list_item$1IAph* prev_it_192;
memset(&it_191, 0, sizeof(struct list_item$1IAph*)); /* ddd */
memset(&prev_it_192, 0, sizeof(struct list_item$1IAph*)); /* ddd */
            it_191=self->head;
            while(it_191!=((void*)0)) {
                if(1) {
                    if(it_191->item) { it_191->item = come_decrement_ref_count(it_191->item, ((struct IA*)it_191->item)->finalize, ((struct IA*)it_191->item)->_protocol_obj, 0, 0); } 
                }
                prev_it_192=it_191;
                it_191=it_191->next;
                come_free_object(prev_it_192);
            }
        come_release_malloced_mem();
}

static void list$1IAphp_push_back(struct list$1IAph* self, struct IA* item){
void* right_value133;
struct list_item$1IAph* litem_194;
struct IA* __dec_obj19;
void* right_value134;
struct list_item$1IAph* litem_195;
struct IA* __dec_obj20;
void* right_value135;
struct list_item$1IAph* litem_196;
struct IA* __dec_obj21;
memset(&right_value133, 0, sizeof(void*));
memset(&litem_194, 0, sizeof(struct list_item$1IAph*)); /* ddd */
memset(&right_value134, 0, sizeof(void*));
memset(&litem_195, 0, sizeof(struct list_item$1IAph*)); /* ddd */
memset(&right_value135, 0, sizeof(void*));
memset(&litem_196, 0, sizeof(struct list_item$1IAph*)); /* ddd */
        if(self->len==0) {
            litem_194=((struct list_item$1IAph*)(right_value133=(struct list_item$1IAph*)come_calloc(1, sizeof(struct list_item$1IAph)*(1))));
            litem_194->prev=((void*)0);
            litem_194->next=((void*)0);
            __dec_obj19=litem_194->item;
            litem_194->item=(struct IA*)come_increment_ref_count(item);
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct IA*)__dec_obj19)->finalize, ((struct IA*)__dec_obj19)->_protocol_obj, 0,0); }
            self->tail=litem_194;
            self->head=litem_194;
        }
        else if(self->len==1) {
            litem_195=((struct list_item$1IAph*)(right_value134=(struct list_item$1IAph*)come_calloc(1, sizeof(struct list_item$1IAph)*(1))));
            litem_195->prev=self->head;
            litem_195->next=((void*)0);
            __dec_obj20=litem_195->item;
            litem_195->item=(struct IA*)come_increment_ref_count(item);
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct IA*)__dec_obj20)->finalize, ((struct IA*)__dec_obj20)->_protocol_obj, 0,0); }
            self->tail=litem_195;
            self->head->next=litem_195;
        }
        else {
            litem_196=((struct list_item$1IAph*)(right_value135=(struct list_item$1IAph*)come_calloc(1, sizeof(struct list_item$1IAph)*(1))));
            litem_196->prev=self->tail;
            litem_196->next=((void*)0);
            __dec_obj21=litem_196->item;
            litem_196->item=(struct IA*)come_increment_ref_count(item);
            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct IA*)__dec_obj21)->finalize, ((struct IA*)__dec_obj21)->_protocol_obj, 0,0); }
            self->tail->next=litem_196;
            self->tail=litem_196;
        }
        self->len++;
        if(item) { item = come_decrement_ref_count(item, ((struct IA*)item)->finalize, ((struct IA*)item)->_protocol_obj, 0, 1); } 
    come_release_malloced_mem();
}

static struct IA* list$1IAphp_begin(struct list$1IAph* self){
struct IA* result_200;
memset(&result_200, 0, sizeof(struct IA*)); /* bbb */
        self->it=self->head;
        if(self->it) {
            struct IA* __result94__ = self->it->item;
            come_release_malloced_mem();
            return __result94__;
        }
        memset(&result_200,0,sizeof(struct IA*));
        struct IA* __result95__ = result_200;
        come_release_malloced_mem();
        return __result95__;
    come_release_malloced_mem();
}

static _Bool list$1IAphp_end(struct list$1IAph* self){
        _Bool __result96__ = self->it==((void*)0);
        come_release_malloced_mem();
        return __result96__;
    come_release_malloced_mem();
}

static struct IA* list$1IAphp_next(struct list$1IAph* self){
struct IA* result_202;
memset(&result_202, 0, sizeof(struct IA*)); /* bbb */
        self->it=self->it->next;
        if(self->it) {
            struct IA* __result97__ = self->it->item;
            come_release_malloced_mem();
            return __result97__;
        }
        memset(&result_202,0,sizeof(struct IA*));
        struct IA* __result98__ = result_202;
        come_release_malloced_mem();
        return __result98__;
    come_release_malloced_mem();
}

static struct tuple3$3intintbool* tuple3$3intintbool_initialize(struct tuple3$3intintbool* self, int v1, int v2, _Bool v3){
        self->v1=v1;
        self->v2=v2;
        self->v3=v3;
        struct tuple3$3intintbool* __result99__ = self;
        if(self) { come_call_finalizer(tuple3$3intintboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result99__;
    come_release_malloced_mem();
}

static void tuple3$3intintboolp_finalize(struct tuple3$3intintbool* self){
        come_release_malloced_mem();
}

static int tuple2$2intboolp_catch(struct tuple2$2intbool* self, void* parent, void (*block)(void*)){
        if(!self->v2) {
            block(parent);
        }
        int __result100__ = int_clone(self->v1);
        come_release_malloced_mem();
        return __result100__;
    come_release_malloced_mem();
}

void method_block6_code2HelloWorld2c(struct __current_stack6__* parent){
        puts("exception");
        exit(2);
    come_release_malloced_mem();
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
int i_207;
memset(&i_207, 0, sizeof(int)); /* ddd */
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_207=0;
        i_207<num_value;
        i_207++
        ){
            list$1charphp_push_back(self,values[i_207]);
        }
        struct list$1charph* __result101__ = self;
        if(self) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1); }
        come_release_malloced_mem();
        return __result101__;
    come_release_malloced_mem();
}

static _Bool list$1charphp_operator_equals(struct list$1charph* self, struct list$1charph* right){
        _Bool __result105__ = list$1charphp_equals(self,right);
        come_release_malloced_mem();
        return __result105__;
    come_release_malloced_mem();
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_208;
struct list_item$1charph* it2_209;
memset(&it_208, 0, sizeof(struct list_item$1charph*)); /* ddd */
memset(&it2_209, 0, sizeof(struct list_item$1charph*)); /* ddd */
            if(left->len!=right->len) {
                _Bool __result102__ = (_Bool)0;
                come_release_malloced_mem();
                return __result102__;
            }
            it_208=left->head;
            it2_209=right->head;
            while(it_208!=((void*)0)) {
                if(!string_equals(it_208->item,it2_209->item)) {
                    _Bool __result103__ = (_Bool)0;
                    come_release_malloced_mem();
                    return __result103__;
                }
                it_208=it_208->next;
                it2_209=it2_209->next;
            }
            _Bool __result104__ = (_Bool)1;
            come_release_malloced_mem();
            return __result104__;
        come_release_malloced_mem();
}

