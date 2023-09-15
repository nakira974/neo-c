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
struct __current_stack1__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
};
struct __current_stack2__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
    struct list$1charph** liX_114;
    struct list$1int** liX2_120;
    int* aX_127;
};
struct __current_stack3__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
    struct list$1charph** liX_114;
    struct list$1int** liX2_120;
    int* aX_127;
    int* aXYZY_131;
    struct list$1charph** li_132;
    struct list$1int** li2_134;
    int* aXL_136;
};
struct __current_stack4__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
    struct list$1charph** liX_114;
    struct list$1int** liX2_120;
    int* aX_127;
    int* aXYZY_131;
    struct list$1charph** li_132;
    struct list$1int** li2_134;
    int* aXL_136;
    struct list$1charph** li3_167;
    struct list$1int** li4_170;
    struct list$1int** li5_171;
    struct list$1int** li6_176;
    int** axyzX_180;
    char** strXYXY_181;
    struct list$1int** liZ_182;
};
struct __current_stack5__
{
    char** p_91;
    void** p2_92;
    int* count_93;
    int* size2_94;
    char** mem2_95;
    int* b_96;
    int** a_97;
    int* a2_98;
    char** ax_101;
    char** str_105;
    struct sData** data_106;
    int** axyz_107;
    int** xxx_108;
    int** yyy_109;
    int** zzz_110;
    int* bzyz_111;
    int** azyz_112;
    int* n_113;
    struct list$1charph** liX_114;
    struct list$1int** liX2_120;
    int* aX_127;
    int* aXYZY_131;
    struct list$1charph** li_132;
    struct list$1int** li2_134;
    int* aXL_136;
    struct list$1charph** li3_167;
    struct list$1int** li4_170;
    struct list$1int** li5_171;
    struct list$1int** li6_176;
    int** axyzX_180;
    char** strXYXY_181;
    struct list$1int** liZ_182;
    struct list$1int** liZ2_186;
    struct list$1int** __list_value1___187;
    struct list$1int** __list_value2___188;
    struct list$1int** __list_value3___189;
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
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int int_fun(int* self);
struct sDataA* sDataA_initialize(struct sDataA* self, int a, int b);
static void sDataA_finalize(struct sDataA* self);
int sDataA_fun(struct sDataA* self, int a, int b);
void fun_default_parametor(int x, int y);
struct tuple2$2intbool* fun_exception(int x, int y);
static struct tuple2$2intbool* tuple2$2intbool_initialize(struct tuple2$2intbool* self, int v1, _Bool v2);
static void tuple2$2intbool_finalize(struct tuple2$2intbool* self);
int main();
static void sData_finalize(struct sData* self);
void method_block1_code2HelloWorld2c(struct __current_stack1__* parent);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1int* list$1int_initialize(struct list$1int* self);
static void list$1int_finalize(struct list$1int* self);
static void list$1int_push_back(struct list$1int* self, int item);
static int list$1int_begin(struct list$1int* self);
static _Bool list$1int_end(struct list$1int* self);
static int list$1int_next(struct list$1int* self);
static void list$1int_each(struct list$1int* self, void* parent, void (*block)(void*,int,int,_Bool*));
void method_block2_code2HelloWorld2c(struct __current_stack2__* parent, int it, int it2, _Bool* it3);
void method_block3_code2HelloWorld2c(struct __current_stack3__* parent, int it, int it2, _Bool* it3);
static int list$1int_item(struct list$1int* self, int position, int default_value);
static void list$1int_insert(struct list$1int* self, int position, int item);
static void list$1charph_insert(struct list$1charph* self, int position, char* item);
static char* list$1charph_item(struct list$1charph* self, int position, char* default_value);
static void list$1charph_reset(struct list$1charph* self);
static void list_item$1charph_finalize(struct list_item$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static void list$1int_delete(struct list$1int* self, int head, int tail);
static void list$1int_reset(struct list$1int* self);
static void list_item$1int_finalize(struct list_item$1int* self);
static void list$1charph_replace(struct list$1charph* self, int position, char* item);
static _Bool list$1int_equals(struct list$1int* left, struct list$1int* right);
static int list$1int_find(struct list$1int* self, int item, int default_value);
static struct list$1int* list$1int_sublist(struct list$1int* self, int begin, int tail);
void method_block4_code2HelloWorld2c(struct __current_stack4__* parent, int it, int it2, _Bool* it3);
static void list$1int_operator_store_element(struct list$1int* self, int position, int item);
static void list$1int_replace(struct list$1int* self, int position, int item);
static int list$1int_operator_load_element(struct list$1int* self, int index);
static _Bool list$1int_operator_equals(struct list$1int* self, struct list$1int* right);
void method_block5_code2HelloWorld2c(struct __current_stack5__* parent, int it, int it2, _Bool* it3);
static struct map$2charpint* map$2charpint_initialize(struct map$2charpint* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charpint_finalize(struct map$2charpint* self);
static void map$2charpint_insert(struct map$2charpint* self, char* key, int item);
static void map$2charpint_rehash(struct map$2charpint* self);
static char* map$2charpint_begin(struct map$2charpint* self);
static _Bool map$2charpint_end(struct map$2charpint* self);
static char* map$2charpint_next(struct map$2charpint* self);
static int map$2charpint_at(struct map$2charpint* self, char* key, int default_value);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static void list$1charp_push_back(struct list$1charp* self, char* item);
static _Bool map$2charpint_operator_equals(struct map$2charpint* left, struct map$2charpint* right);
static _Bool map$2charpint_equals(struct map$2charpint* left, struct map$2charpint* right);
static char* list$1charp_item(struct list$1charp* self, int position, char* default_value);
static int map$2charpint_operator_load_element(struct map$2charpint* self, char* key);
static struct map$2charpint* map$2charpint_clone(struct map$2charpint* self);
static void map$2charpint_insert2(struct map$2charpint* self, char* key, int item);
static struct tuple1$1int* tuple1$1int_initialize(struct tuple1$1int* self, int v1);
static void tuple1$1int_finalize(struct tuple1$1int* self);
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






























int* funHeap(int x, int y){
void* right_value65;
int* result_89;
memset(&result_89, 0, sizeof(int*));
    result_89=(int*)come_increment_ref_count(((int*)(right_value65=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value65 = come_decrement_ref_count(right_value65, 1, 0);
    *result_89=x+y;
    int* __result__ = result_89;
    result_89 = come_decrement_ref_count(result_89, 0, 1);
    return __result__;
}

int funHeap2(int* x, int* y){
    int __result__ = *x+*y;
    x = come_decrement_ref_count(x, 0, 1);
    y = come_decrement_ref_count(y, 0, 1);
    return __result__;
}

int int_fun(int* self){
    int __result__ = *self;
    return __result__;
}

struct sDataA* sDataA_initialize(struct sDataA* self, int a, int b){
    self->a=a;
    self->b=b;
    struct sDataA* __result__ = self;
    call_finalizer(sDataA_finalize,self,0, 0, 1);
    return __result__;
}

static void sDataA_finalize(struct sDataA* self){
}

int sDataA_fun(struct sDataA* self, int a, int b){
    int __result__ = self->a+self->b+a+b;
    return __result__;
}

void fun_default_parametor(int x, int y){
    xassert("default parametor",x==1&&y==2);
}

struct tuple2$2intbool* fun_exception(int x, int y){
void* right_value66;
void* right_value67;
    struct tuple2$2intbool* __result__ = (((struct tuple2$2intbool*)(right_value67=tuple2$2intbool_initialize((struct tuple2$2intbool*)come_increment_ref_count(((struct tuple2$2intbool*)(right_value66=(struct tuple2$2intbool*)come_calloc(1, sizeof(struct tuple2$2intbool)*(1))))),x+y,(_Bool)1))));
    return __result__;
}

static struct tuple2$2intbool* tuple2$2intbool_initialize(struct tuple2$2intbool* self, int v1, _Bool v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$2intbool* __result__ = self;
        call_finalizer(tuple2$2intbool_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple2$2intbool_finalize(struct tuple2$2intbool* self){
}

int main(){
void* right_value68;
char* a_90;
char* p_91;
void* p2_92;
int count_93;
int size2_94;
char* mem2_95;
int b_96;
int* a_97;
int a2_98;
int b_99;
int n_100;
void* right_value69;
char* ax_101;
void* right_value70;
char* a_102;
char* b_103;
struct sData data_104;
void* right_value71;
char* str_105;
void* right_value72;
struct sData* data_106;
void* right_value73;
void* right_value74;
void* right_value75;
int* axyz_107;
void* right_value76;
int* xxx_108;
void* right_value77;
int* yyy_109;
void* right_value78;
int* zzz_110;
void* right_value79;
int bzyz_111;
int* azyz_112;
int n_113;
struct __current_stack1__ __current_stack1__;
void* right_value80;
void* right_value81;
struct list$1charph* liX_114;
void* right_value82;
void* right_value83;
void* right_value84;
char* it_116;
void* right_value85;
void* right_value86;
struct list$1int* liX2_120;
int it_125;
int aX_127;
struct __current_stack2__ __current_stack2__;
int aXYZY_131;
void* right_value90;
void* right_value91;
struct list$1charph* li_132;
void* right_value92;
void* right_value93;
void* right_value94;
char* it_133;
void* right_value95;
void* right_value96;
struct list$1int* li2_134;
int it_135;
int aXL_136;
struct __current_stack3__ __current_stack3__;
void* right_value103;
void* right_value104;
void* right_value105;
struct list$1charph* li3_167;
void* right_value106;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
void* right_value111;
struct list$1int* li4_170;
void* right_value112;
void* right_value113;
struct list$1int* li5_171;
void* right_value114;
void* right_value115;
struct list$1int* li6_176;
void* right_value118;
int* axyzX_180;
void* right_value119;
void* right_value120;
void* right_value121;
void* right_value122;
void* right_value123;
char* strXYXY_181;
void* right_value124;
void* right_value125;
struct list$1int* liZ_182;
struct __current_stack4__ __current_stack4__;
void* right_value126;
void* right_value127;
struct list$1int* liZ2_186;
void* right_value128;
void* right_value129;
struct list$1int* __list_value1___187;
void* right_value130;
void* right_value131;
struct list$1int* __list_value2___188;
void* right_value132;
void* right_value133;
struct list$1int* __list_value3___189;
struct __current_stack5__ __current_stack5__;
void* right_value134;
void* right_value140;
struct map$2charpint* __map_value1___195;
void* right_value147;
void* right_value148;
struct map$2charpint* __map_value2___220;
void* right_value149;
void* right_value150;
struct map$2charpint* __map_value3___231;
struct map$2charpint* m1_232;
struct map$2charpint* m2_242;
void* right_value153;
void* right_value154;
struct tuple1$1int* tt1_243;
memset(&a_90, 0, sizeof(char*));
memset(&p_91, 0, sizeof(char*));
memset(&p2_92, 0, sizeof(void*));
memset(&count_93, 0, sizeof(int));
memset(&size2_94, 0, sizeof(int));
memset(&mem2_95, 0, sizeof(char*));
memset(&b_96, 0, sizeof(int));
memset(&a_97, 0, sizeof(int*));
memset(&a2_98, 0, sizeof(int));
memset(&b_99, 0, sizeof(int));
memset(&n_100, 0, sizeof(int));
memset(&ax_101, 0, sizeof(char*));
memset(&a_102, 0, sizeof(char*));
memset(&b_103, 0, sizeof(char*));
memset(&data_104, 0, sizeof(struct sData));
memset(&str_105, 0, sizeof(char*));
memset(&data_106, 0, sizeof(struct sData*));
memset(&axyz_107, 0, sizeof(int*));
memset(&xxx_108, 0, sizeof(int*));
memset(&yyy_109, 0, sizeof(int*));
memset(&zzz_110, 0, sizeof(int*));
memset(&bzyz_111, 0, sizeof(int));
memset(&azyz_112, 0, sizeof(int*));
memset(&n_113, 0, sizeof(int));
memset(&liX_114, 0, sizeof(struct list$1charph*));
memset(&it_116, 0, sizeof(char*));
memset(&liX2_120, 0, sizeof(struct list$1int*));
memset(&it_125, 0, sizeof(int));
memset(&aX_127, 0, sizeof(int));
memset(&aXYZY_131, 0, sizeof(int));
memset(&li_132, 0, sizeof(struct list$1charph*));
memset(&it_133, 0, sizeof(char*));
memset(&li2_134, 0, sizeof(struct list$1int*));
memset(&it_135, 0, sizeof(int));
memset(&aXL_136, 0, sizeof(int));
memset(&li3_167, 0, sizeof(struct list$1charph*));
memset(&li4_170, 0, sizeof(struct list$1int*));
memset(&li5_171, 0, sizeof(struct list$1int*));
memset(&li6_176, 0, sizeof(struct list$1int*));
memset(&axyzX_180, 0, sizeof(int*));
memset(&strXYXY_181, 0, sizeof(char*));
memset(&liZ_182, 0, sizeof(struct list$1int*));
memset(&liZ2_186, 0, sizeof(struct list$1int*));
memset(&__list_value1___187, 0, sizeof(struct list$1int*));
memset(&__list_value2___188, 0, sizeof(struct list$1int*));
memset(&__list_value3___189, 0, sizeof(struct list$1int*));
memset(&__map_value1___195, 0, sizeof(struct map$2charpint*));
memset(&__map_value2___220, 0, sizeof(struct map$2charpint*));
memset(&__map_value3___231, 0, sizeof(struct map$2charpint*));
memset(&m1_232, 0, sizeof(struct map$2charpint*));
memset(&m2_242, 0, sizeof(struct map$2charpint*));
memset(&tt1_243, 0, sizeof(struct tuple1$1int*));
    if(1) {
        a_90=(char*)come_increment_ref_count(((char**)(right_value68=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
        right_value68 = come_decrement_ref_count(right_value68, 1, 0);
        a_90 = come_decrement_ref_count(a_90, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_91="ABC";
    p2_92="ABC";
    printf("%s\n",(char*)p2_92);
    printf("%c\n",*p_91);
    count_93=0;
    size2_94=1;
    mem2_95=calloc(1,sizeof(int)+sizeof(long)+count_93*size2_94);
    free(mem2_95);
    a_97=&b_96;
    (*a_97)=123;
    a2_98=123;
    if((_Bool)1) {
        b_99=234;
        n_100=0;
        while(n_100<3) {
            printf("a %d\n",a2_98);
            printf("b %d\n",b_99);
            n_100++;
        }
    }
    ax_101=(char*)come_increment_ref_count(((char**)(right_value69=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
    right_value69 = come_decrement_ref_count(right_value69, 1, 0);
    if(1) {
        a_102=(char*)come_increment_ref_count(((char**)(right_value70=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
        right_value70 = come_decrement_ref_count(right_value70, 1, 0);
        b_103=(char*)come_increment_ref_count(a_102);
        if(data_104.a) {(char*)come_decrement_ref_count(data_104.a,0,0); }
        data_104.a=(char*)come_increment_ref_count(a_102);
        a_102 = come_decrement_ref_count(a_102, 0, 0);
        b_103 = come_decrement_ref_count(b_103, 0, 0);
        call_finalizer(sData_finalize,(&data_104),1, 0, 0);
    }
    str_105=(char*)come_increment_ref_count(((char**)(right_value71=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
    right_value71 = come_decrement_ref_count(right_value71, 1, 0);
    strncpy(str_105,"ABC",128);
    data_106=(struct sData*)come_increment_ref_count(((struct sData*)(right_value72=(struct sData*)come_calloc(1, sizeof(struct sData)*(1)))));
    call_finalizer(sData_finalize,right_value72,0, 1, 0);
    if(data_106->a) {(char*)come_decrement_ref_count(data_106->a,0,0); }
    data_106->a=(char*)come_increment_ref_count(str_105);
    puts(data_106->a);
    ((int*)(right_value73=funHeap(7,7)));
    right_value73 = come_decrement_ref_count(right_value73, 1, 0);
    xassert("right value test",*((int*)(right_value74=funHeap(3,4)))==7);
    right_value74 = come_decrement_ref_count(right_value74, 1, 0);
    axyz_107=(int*)come_increment_ref_count(((int*)(right_value75=funHeap(1,2))));
    right_value75 = come_decrement_ref_count(right_value75, 1, 0);
    xassert("variable test",*axyz_107==3);
    xxx_108=(int*)come_increment_ref_count(((int*)(right_value76=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value76 = come_decrement_ref_count(right_value76, 1, 0);
    *xxx_108=1;
    yyy_109=(int*)come_increment_ref_count(((int*)(right_value77=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value77 = come_decrement_ref_count(right_value77, 1, 0);
    *yyy_109=2;
    xassert("heap",funHeap2((int*)come_increment_ref_count(xxx_108),(int*)come_increment_ref_count(yyy_109))==3);
    zzz_110=(int*)come_increment_ref_count(((int*)(right_value78=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value78 = come_decrement_ref_count(right_value78, 1, 0);
    ((int*)(right_value79=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value79 = come_decrement_ref_count(right_value79, 1, 0);
    bzyz_111=123;
    azyz_112=&bzyz_111;
    xassert("impl",int_fun(azyz_112)==123);
    n_113=0;
    __current_stack1__.p_91 = &p_91;
    __current_stack1__.p2_92 = &p2_92;
    __current_stack1__.count_93 = &count_93;
    __current_stack1__.size2_94 = &size2_94;
    __current_stack1__.mem2_95 = &mem2_95;
    __current_stack1__.b_96 = &b_96;
    __current_stack1__.a_97 = &a_97;
    __current_stack1__.a2_98 = &a2_98;
    __current_stack1__.ax_101 = &ax_101;
    __current_stack1__.str_105 = &str_105;
    __current_stack1__.data_106 = &data_106;
    __current_stack1__.axyz_107 = &axyz_107;
    __current_stack1__.xxx_108 = &xxx_108;
    __current_stack1__.yyy_109 = &yyy_109;
    __current_stack1__.zzz_110 = &zzz_110;
    __current_stack1__.bzyz_111 = &bzyz_111;
    __current_stack1__.azyz_112 = &azyz_112;
    __current_stack1__.n_113 = &n_113;
    int_times(3,&__current_stack1__,method_block1_code2HelloWorld2c);
    liX_114=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value81=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value80=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charph_finalize,right_value81,0, 1, 0);
    list$1charph_push_back(liX_114,(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string("ABC")))));
    right_value82 = come_decrement_ref_count(right_value82, 1, 0);
    list$1charph_push_back(liX_114,(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string("DEF")))));
    right_value83 = come_decrement_ref_count(right_value83, 1, 0);
    list$1charph_push_back(liX_114,(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string("GHI")))));
    right_value84 = come_decrement_ref_count(right_value84, 1, 0);
    for(
    it_116=list$1charph_begin((liX_114));
    !list$1charph_end((liX_114));
    it_116=list$1charph_next((liX_114))
    ){
        printf("%s\n",it_116);
    }
    liX2_120=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value86=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value85=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value86,0, 1, 0);
    list$1int_push_back(liX2_120,1);
    list$1int_push_back(liX2_120,2);
    list$1int_push_back(liX2_120,3);
    for(
    it_125=list$1int_begin((liX2_120));
    !list$1int_end((liX2_120));
    it_125=list$1int_next((liX2_120))
    ){
        printf("%d\n",it_125);
    }
    aX_127=123;
    __current_stack2__.p_91 = &p_91;
    __current_stack2__.p2_92 = &p2_92;
    __current_stack2__.count_93 = &count_93;
    __current_stack2__.size2_94 = &size2_94;
    __current_stack2__.mem2_95 = &mem2_95;
    __current_stack2__.b_96 = &b_96;
    __current_stack2__.a_97 = &a_97;
    __current_stack2__.a2_98 = &a2_98;
    __current_stack2__.ax_101 = &ax_101;
    __current_stack2__.str_105 = &str_105;
    __current_stack2__.data_106 = &data_106;
    __current_stack2__.axyz_107 = &axyz_107;
    __current_stack2__.xxx_108 = &xxx_108;
    __current_stack2__.yyy_109 = &yyy_109;
    __current_stack2__.zzz_110 = &zzz_110;
    __current_stack2__.bzyz_111 = &bzyz_111;
    __current_stack2__.azyz_112 = &azyz_112;
    __current_stack2__.n_113 = &n_113;
    __current_stack2__.liX_114 = &liX_114;
    __current_stack2__.liX2_120 = &liX2_120;
    __current_stack2__.aX_127 = &aX_127;
    list$1int_each(liX2_120,&__current_stack2__,method_block2_code2HelloWorld2c);
    xassert("method_block test",aX_127==2);
    xassert("var initialize test",aXYZY_131==0);
    li_132=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charph_finalize,right_value91,0, 1, 0);
    list$1charph_push_back(li_132,(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string("ABC")))));
    right_value92 = come_decrement_ref_count(right_value92, 1, 0);
    list$1charph_push_back(li_132,(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string("DEF")))));
    right_value93 = come_decrement_ref_count(right_value93, 1, 0);
    list$1charph_push_back(li_132,(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string("GHI")))));
    right_value94 = come_decrement_ref_count(right_value94, 1, 0);
    for(
    it_133=list$1charph_begin((li_132));
    !list$1charph_end((li_132));
    it_133=list$1charph_next((li_132))
    ){
        printf("%s\n",it_133);
    }
    li2_134=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value96=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value95=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value96,0, 1, 0);
    list$1int_push_back(li2_134,1);
    list$1int_push_back(li2_134,2);
    list$1int_push_back(li2_134,3);
    for(
    it_135=list$1int_begin((li2_134));
    !list$1int_end((li2_134));
    it_135=list$1int_next((li2_134))
    ){
        printf("%d\n",it_135);
    }
    aXL_136=123;
    __current_stack3__.p_91 = &p_91;
    __current_stack3__.p2_92 = &p2_92;
    __current_stack3__.count_93 = &count_93;
    __current_stack3__.size2_94 = &size2_94;
    __current_stack3__.mem2_95 = &mem2_95;
    __current_stack3__.b_96 = &b_96;
    __current_stack3__.a_97 = &a_97;
    __current_stack3__.a2_98 = &a2_98;
    __current_stack3__.ax_101 = &ax_101;
    __current_stack3__.str_105 = &str_105;
    __current_stack3__.data_106 = &data_106;
    __current_stack3__.axyz_107 = &axyz_107;
    __current_stack3__.xxx_108 = &xxx_108;
    __current_stack3__.yyy_109 = &yyy_109;
    __current_stack3__.zzz_110 = &zzz_110;
    __current_stack3__.bzyz_111 = &bzyz_111;
    __current_stack3__.azyz_112 = &azyz_112;
    __current_stack3__.n_113 = &n_113;
    __current_stack3__.liX_114 = &liX_114;
    __current_stack3__.liX2_120 = &liX2_120;
    __current_stack3__.aX_127 = &aX_127;
    __current_stack3__.aXYZY_131 = &aXYZY_131;
    __current_stack3__.li_132 = &li_132;
    __current_stack3__.li2_134 = &li2_134;
    __current_stack3__.aXL_136 = &aXL_136;
    list$1int_each(li2_134,&__current_stack3__,method_block3_code2HelloWorld2c);
    xassert("var of method block",aXL_136==2);
    xassert("list::item",list$1int_item(li2_134,0,-1)==1);
    list$1int_insert(li2_134,1,5);
    xassert("list::insert",list$1int_item(li2_134,0,-1)==1&&list$1int_item(li2_134,1,-1)==5&&list$1int_item(li2_134,2,-1)==2&&list$1int_item(li2_134,3,-1)==3);
    list$1charph_insert(li_132,1,(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string("GGG")))));
    right_value103 = come_decrement_ref_count(right_value103, 1, 0);
    xassert("list::insert",strcmp(list$1charph_item(li_132,0,-1),"ABC")==0&&strcmp(list$1charph_item(li_132,1,-1),"GGG")==0&&strcmp(list$1charph_item(li_132,2,-1),"DEF")==0&&strcmp(list$1charph_item(li_132,3,-1),"GHI")==0);
    list$1charph_reset(li_132);
    xassert("list::reset",list$1charph_length(li_132)==0);
    list$1int_delete(li2_134,0,1);
    xassert("list::delete",list$1int_item(li2_134,0,-1)==5&&list$1int_item(li2_134,1,-1)==2&&list$1int_item(li2_134,2,-1)==3);
    li3_167=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charph_finalize,right_value105,0, 1, 0);
    list$1charph_push_back(li3_167,(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string("AAA")))));
    right_value106 = come_decrement_ref_count(right_value106, 1, 0);
    list$1charph_push_back(li3_167,(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string("BBB")))));
    right_value107 = come_decrement_ref_count(right_value107, 1, 0);
    list$1charph_push_back(li3_167,(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string("CCC")))));
    right_value108 = come_decrement_ref_count(right_value108, 1, 0);
    list$1charph_replace(li3_167,0,(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string("ABC")))));
    right_value109 = come_decrement_ref_count(right_value109, 1, 0);
    xassert("list::replace",strcmp(list$1charph_item(li3_167,0,((void*)0)),"ABC")==0&&strcmp(list$1charph_item(li3_167,1,((void*)0)),"BBB")==0&&strcmp(list$1charph_item(li3_167,2,((void*)0)),"CCC")==0);
    li4_170=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value111=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value110=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value111,0, 1, 0);
    list$1int_push_back(li4_170,1);
    list$1int_push_back(li4_170,3);
    list$1int_push_back(li4_170,5);
    li5_171=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value113=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value112=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value113,0, 1, 0);
    list$1int_push_back(li5_171,1);
    list$1int_push_back(li5_171,3);
    list$1int_push_back(li5_171,5);
    xassert("list::equals",list$1int_equals(li4_170,li5_171));
    xassert("list::find",list$1int_find(li4_170,5,-1)==2);
    li6_176=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value115=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value114=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value115,0, 1, 0);
    list$1int_push_back(li6_176,3);
    list$1int_push_back(li6_176,5);
    xassert("list::sublist",list$1int_equals(((struct list$1int*)(right_value118=list$1int_sublist(li5_171,1,-1))),li6_176));
    call_finalizer(list$1int_finalize,right_value118,0, 1, 0);
    if(axyzX_180) {(int*)come_decrement_ref_count(axyzX_180,0,0); }
    axyzX_180=(int*)come_increment_ref_count(((int*)(right_value119=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value119 = come_decrement_ref_count(right_value119, 1, 0);
    if(axyzX_180) {(int*)come_decrement_ref_count(axyzX_180,0,0); }
    axyzX_180=(int*)come_increment_ref_count(((int*)(right_value120=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value120 = come_decrement_ref_count(right_value120, 1, 0);
    xassert("operator equals",string_operator_equals(((char*)(right_value121=__builtin_string("AAA"))),((char*)(right_value122=__builtin_string("AAA")))));
    right_value121 = come_decrement_ref_count(right_value121, 1, 0);
    right_value122 = come_decrement_ref_count(right_value122, 1, 0);
    xassert("operator test",string_operator_equals(((char*)(right_value123=char_operator_add("AAA","BBB"))),"AAABBB"));
    right_value123 = come_decrement_ref_count(right_value123, 1, 0);
    strXYXY_181="ABC";
    xassert("operator test",*(strXYXY_181+1)==66);
    liZ_182=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value125=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value124=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value125,0, 1, 0);
    list$1int_push_back(liZ_182,1);
    list$1int_push_back(liZ_182,2);
    list$1int_push_back(liZ_182,3);
    __current_stack4__.p_91 = &p_91;
    __current_stack4__.p2_92 = &p2_92;
    __current_stack4__.count_93 = &count_93;
    __current_stack4__.size2_94 = &size2_94;
    __current_stack4__.mem2_95 = &mem2_95;
    __current_stack4__.b_96 = &b_96;
    __current_stack4__.a_97 = &a_97;
    __current_stack4__.a2_98 = &a2_98;
    __current_stack4__.ax_101 = &ax_101;
    __current_stack4__.str_105 = &str_105;
    __current_stack4__.data_106 = &data_106;
    __current_stack4__.axyz_107 = &axyz_107;
    __current_stack4__.xxx_108 = &xxx_108;
    __current_stack4__.yyy_109 = &yyy_109;
    __current_stack4__.zzz_110 = &zzz_110;
    __current_stack4__.bzyz_111 = &bzyz_111;
    __current_stack4__.azyz_112 = &azyz_112;
    __current_stack4__.n_113 = &n_113;
    __current_stack4__.liX_114 = &liX_114;
    __current_stack4__.liX2_120 = &liX2_120;
    __current_stack4__.aX_127 = &aX_127;
    __current_stack4__.aXYZY_131 = &aXYZY_131;
    __current_stack4__.li_132 = &li_132;
    __current_stack4__.li2_134 = &li2_134;
    __current_stack4__.aXL_136 = &aXL_136;
    __current_stack4__.li3_167 = &li3_167;
    __current_stack4__.li4_170 = &li4_170;
    __current_stack4__.li5_171 = &li5_171;
    __current_stack4__.li6_176 = &li6_176;
    __current_stack4__.axyzX_180 = &axyzX_180;
    __current_stack4__.strXYXY_181 = &strXYXY_181;
    __current_stack4__.liZ_182 = &liZ_182;
    list$1int_each(liZ_182,&__current_stack4__,method_block4_code2HelloWorld2c);
    list$1int_operator_store_element(liZ_182,0,777);
    printf("liZ[0] %d\n",list$1int_operator_load_element(liZ_182,0));
    liZ2_186=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value127=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value126=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value127,0, 1, 0);
    list$1int_push_back(liZ2_186,777);
    list$1int_push_back(liZ2_186,2);
    list$1int_push_back(liZ2_186,3);
    xassert("list equals",list$1int_operator_equals(liZ_182,liZ2_186));
    __list_value1___187=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value129=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value128=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value129,0, 1, 0);
    list$1int_push_back(__list_value1___187,1);
    list$1int_push_back(__list_value1___187,2);
    list$1int_push_back(__list_value1___187,3);
    __list_value2___188=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value131=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value130=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value131,0, 1, 0);
    list$1int_push_back(__list_value2___188,1);
    list$1int_push_back(__list_value2___188,2);
    list$1int_push_back(__list_value2___188,3);
    xassert("list equals test",list$1int_operator_equals(__list_value1___187,__list_value2___188));
    __list_value3___189=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value133=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value132=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value133,0, 1, 0);
    list$1int_push_back(__list_value3___189,1);
    list$1int_push_back(__list_value3___189,2);
    list$1int_push_back(__list_value3___189,3);
    list$1int_push_back(__list_value3___189,4);
    list$1int_push_back(__list_value3___189,5);
    __current_stack5__.p_91 = &p_91;
    __current_stack5__.p2_92 = &p2_92;
    __current_stack5__.count_93 = &count_93;
    __current_stack5__.size2_94 = &size2_94;
    __current_stack5__.mem2_95 = &mem2_95;
    __current_stack5__.b_96 = &b_96;
    __current_stack5__.a_97 = &a_97;
    __current_stack5__.a2_98 = &a2_98;
    __current_stack5__.ax_101 = &ax_101;
    __current_stack5__.str_105 = &str_105;
    __current_stack5__.data_106 = &data_106;
    __current_stack5__.axyz_107 = &axyz_107;
    __current_stack5__.xxx_108 = &xxx_108;
    __current_stack5__.yyy_109 = &yyy_109;
    __current_stack5__.zzz_110 = &zzz_110;
    __current_stack5__.bzyz_111 = &bzyz_111;
    __current_stack5__.azyz_112 = &azyz_112;
    __current_stack5__.n_113 = &n_113;
    __current_stack5__.liX_114 = &liX_114;
    __current_stack5__.liX2_120 = &liX2_120;
    __current_stack5__.aX_127 = &aX_127;
    __current_stack5__.aXYZY_131 = &aXYZY_131;
    __current_stack5__.li_132 = &li_132;
    __current_stack5__.li2_134 = &li2_134;
    __current_stack5__.aXL_136 = &aXL_136;
    __current_stack5__.li3_167 = &li3_167;
    __current_stack5__.li4_170 = &li4_170;
    __current_stack5__.li5_171 = &li5_171;
    __current_stack5__.li6_176 = &li6_176;
    __current_stack5__.axyzX_180 = &axyzX_180;
    __current_stack5__.strXYXY_181 = &strXYXY_181;
    __current_stack5__.liZ_182 = &liZ_182;
    __current_stack5__.liZ2_186 = &liZ2_186;
    __current_stack5__.__list_value1___187 = &__list_value1___187;
    __current_stack5__.__list_value2___188 = &__list_value2___188;
    __current_stack5__.__list_value3___189 = &__list_value3___189;
    list$1int_each(__list_value3___189,&__current_stack5__,method_block5_code2HelloWorld2c);
    __map_value1___195=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value140=map$2charpint_initialize((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value134=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1)))))))));
    call_finalizer(map$2charpint_finalize,right_value140,0, 1, 0);
    map$2charpint_insert(__map_value1___195,"AAA",1);
    map$2charpint_insert(__map_value1___195,"BBB",2);
    __map_value2___220=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value148=map$2charpint_initialize((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value147=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1)))))))));
    call_finalizer(map$2charpint_finalize,right_value148,0, 1, 0);
    map$2charpint_insert(__map_value2___220,"AAA",1);
    map$2charpint_insert(__map_value2___220,"BBB",2);
    xassert("map equals",map$2charpint_operator_equals(__map_value1___195,__map_value2___220));
    __map_value3___231=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value150=map$2charpint_initialize((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value149=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1)))))))));
    call_finalizer(map$2charpint_finalize,right_value150,0, 1, 0);
    map$2charpint_insert(__map_value3___231,"AAA",1);
    map$2charpint_insert(__map_value3___231,"BBB",2);
    m1_232=(struct map$2charpint*)come_increment_ref_count(__map_value3___231);
    printf("%d %d\n",map$2charpint_operator_load_element(m1_232,"AAA"),map$2charpint_operator_load_element(m1_232,"BBB"));
    m2_242=(struct map$2charpint*)come_increment_ref_count(map$2charpint_clone(m1_232));
    printf("%d %d\n",map$2charpint_operator_load_element(m2_242,"AAA"),map$2charpint_operator_load_element(m2_242,"BBB"));
    xassert("map clone",map$2charpint_operator_equals(m1_232,m2_242));
    tt1_243=(struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value154=tuple1$1int_initialize((struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value153=(struct tuple1$1int*)come_calloc(1, sizeof(struct tuple1$1int)*(1))))),1))));
    call_finalizer(tuple1$1int_finalize,right_value154,0, 1, 0);
    tt1_243->v1=111;
    printf("%d\n",tt1_243->v1);
    int __result__ = 0;
    ax_101 = come_decrement_ref_count(ax_101, 0, 0);
    str_105 = come_decrement_ref_count(str_105, 0, 0);
    call_finalizer(sData_finalize,data_106,0, 0, 0);
    axyz_107 = come_decrement_ref_count(axyz_107, 0, 0);
    xxx_108 = come_decrement_ref_count(xxx_108, 0, 0);
    yyy_109 = come_decrement_ref_count(yyy_109, 0, 0);
    zzz_110 = come_decrement_ref_count(zzz_110, 0, 0);
    call_finalizer(list$1charph_finalize,liX_114,0, 0, 0);
    call_finalizer(list$1int_finalize,liX2_120,0, 0, 0);
    call_finalizer(list$1charph_finalize,li_132,0, 0, 0);
    call_finalizer(list$1int_finalize,li2_134,0, 0, 0);
    call_finalizer(list$1charph_finalize,li3_167,0, 0, 0);
    call_finalizer(list$1int_finalize,li4_170,0, 0, 0);
    call_finalizer(list$1int_finalize,li5_171,0, 0, 0);
    call_finalizer(list$1int_finalize,li6_176,0, 0, 0);
    axyzX_180 = come_decrement_ref_count(axyzX_180, 0, 0);
    call_finalizer(list$1int_finalize,liZ_182,0, 0, 0);
    call_finalizer(list$1int_finalize,liZ2_186,0, 0, 0);
    call_finalizer(list$1int_finalize,__list_value1___187,0, 0, 0);
    call_finalizer(list$1int_finalize,__list_value2___188,0, 0, 0);
    call_finalizer(list$1int_finalize,__list_value3___189,0, 0, 0);
    call_finalizer(map$2charpint_finalize,__map_value1___195,0, 0, 0);
    call_finalizer(map$2charpint_finalize,__map_value2___220,0, 0, 0);
    call_finalizer(map$2charpint_finalize,__map_value3___231,0, 0, 0);
    call_finalizer(map$2charpint_finalize,m1_232,0, 0, 0);
    call_finalizer(map$2charpint_finalize,m2_242,0, 0, 0);
    call_finalizer(tuple1$1int_finalize,tt1_243,0, 0, 0);
    return __result__;
}

static void sData_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1_code2HelloWorld2c(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_113)));
        (*(parent->n_113))++;
}

static char* list$1charph_begin(struct list$1charph* self){
char* result_115;
memset(&result_115, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_115,0,sizeof(char*));
        char* __result__ = result_115;
        return __result__;
}

static _Bool list$1charph_end(struct list$1charph* self){
        _Bool __result__ = self->it==((void*)0);
        return __result__;
}

static char* list$1charph_next(struct list$1charph* self){
char* result_117;
memset(&result_117, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_117,0,sizeof(char*));
        char* __result__ = result_117;
        return __result__;
}

static struct list$1int* list$1int_initialize(struct list$1int* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1int* __result__ = self;
        call_finalizer(list$1int_finalize,self,0, 0, 1);
        return __result__;
}

static void list$1int_finalize(struct list$1int* self){
struct list_item$1int* it_118;
struct list_item$1int* prev_it_119;
memset(&it_118, 0, sizeof(struct list_item$1int*));
memset(&prev_it_119, 0, sizeof(struct list_item$1int*));
            it_118=self->head;
            while(it_118!=((void*)0)) {
                if(0) {
                }
                prev_it_119=it_118;
                it_118=it_118->next;
                come_free_object(prev_it_119);
            }
}

static void list$1int_push_back(struct list$1int* self, int item){
void* right_value87;
struct list_item$1int* litem_121;
void* right_value88;
struct list_item$1int* litem_122;
void* right_value89;
struct list_item$1int* litem_123;
memset(&litem_121, 0, sizeof(struct list_item$1int*));
memset(&litem_122, 0, sizeof(struct list_item$1int*));
memset(&litem_123, 0, sizeof(struct list_item$1int*));
        if(self->len==0) {
            litem_121=((struct list_item$1int*)(right_value87=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_121->prev=((void*)0);
            litem_121->next=((void*)0);
            litem_121->item=item;
            self->tail=litem_121;
            self->head=litem_121;
        }
        else if(self->len==1) {
            litem_122=((struct list_item$1int*)(right_value88=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_122->prev=self->head;
            litem_122->next=((void*)0);
            litem_122->item=item;
            self->tail=litem_122;
            self->head->next=litem_122;
        }
        else {
            litem_123=((struct list_item$1int*)(right_value89=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_123->prev=self->tail;
            litem_123->next=((void*)0);
            litem_123->item=item;
            self->tail->next=litem_123;
            self->tail=litem_123;
        }
        self->len++;
}

static int list$1int_begin(struct list$1int* self){
int result_124;
memset(&result_124, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_124,0,sizeof(int));
        int __result__ = result_124;
        return __result__;
}

static _Bool list$1int_end(struct list$1int* self){
        _Bool __result__ = self->it==((void*)0);
        return __result__;
}

static int list$1int_next(struct list$1int* self){
int result_126;
memset(&result_126, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_126,0,sizeof(int));
        int __result__ = result_126;
        return __result__;
}

static void list$1int_each(struct list$1int* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item$1int* it_128;
int i_129;
_Bool end_flag_130;
memset(&it_128, 0, sizeof(struct list_item$1int*));
memset(&i_129, 0, sizeof(int));
memset(&end_flag_130, 0, sizeof(_Bool));
        it_128=self->head;
        i_129=0;
        while(it_128!=((void*)0)) {
            end_flag_130=(_Bool)0;
            block(parent,it_128->item,i_129,&end_flag_130);
            if(end_flag_130==(_Bool)1) {
                break;
            }
            it_128=it_128->next;
            i_129++;
        }
}

void method_block2_code2HelloWorld2c(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_127)));
        (*(parent->aX_127))=2;
}

void method_block3_code2HelloWorld2c(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_136)));
        (*(parent->aXL_136))=2;
}

static int list$1int_item(struct list$1int* self, int position, int default_value){
struct list_item$1int* it_137;
int i_138;
memset(&it_137, 0, sizeof(struct list_item$1int*));
memset(&i_138, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_137=self->head;
        i_138=0;
        while(it_137!=((void*)0)) {
            if(position==i_138) {
                int __result__ = it_137->item;
                return __result__;
            }
            it_137=it_137->next;
            i_138++;
        }
        int __result__ = default_value;
        return __result__;
}

static void list$1int_insert(struct list$1int* self, int position, int item){
void* right_value97;
struct list_item$1int* litem_139;
void* right_value98;
struct list_item$1int* litem_140;
struct list_item$1int* it_141;
int i_142;
void* right_value99;
struct list_item$1int* litem_143;
memset(&litem_139, 0, sizeof(struct list_item$1int*));
memset(&litem_140, 0, sizeof(struct list_item$1int*));
memset(&it_141, 0, sizeof(struct list_item$1int*));
memset(&i_142, 0, sizeof(int));
memset(&litem_143, 0, sizeof(struct list_item$1int*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$1int_push_back(self,item);
            return;
        }
        if(position==0) {
            litem_139=((struct list_item$1int*)(right_value97=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_139->prev=((void*)0);
            litem_139->next=self->head;
            litem_139->item=item;
            self->head->prev=litem_139;
            self->head=litem_139;
            self->len++;
        }
        else if(self->len==1) {
            litem_140=((struct list_item$1int*)(right_value98=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_140->prev=self->head;
            litem_140->next=self->tail;
            litem_140->item=item;
            self->tail->prev=litem_140;
            self->head->next=litem_140;
            self->len++;
        }
        else {
            it_141=self->head;
            i_142=0;
            while(it_141!=((void*)0)) {
                if(position==i_142) {
                    litem_143=((struct list_item$1int*)(right_value99=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
                    litem_143->prev=it_141->prev;
                    litem_143->next=it_141;
                    litem_143->item=item;
                    it_141->prev->next=litem_143;
                    it_141->prev=litem_143;
                    self->len++;
                }
                it_141=it_141->next;
                i_142++;
            }
        }
}

static void list$1charph_insert(struct list$1charph* self, int position, char* item){
void* right_value100;
struct list_item$1charph* litem_144;
void* right_value101;
struct list_item$1charph* litem_145;
struct list_item$1charph* it_146;
int i_147;
void* right_value102;
struct list_item$1charph* litem_148;
memset(&litem_144, 0, sizeof(struct list_item$1charph*));
memset(&litem_145, 0, sizeof(struct list_item$1charph*));
memset(&it_146, 0, sizeof(struct list_item$1charph*));
memset(&i_147, 0, sizeof(int));
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$1charph_push_back(self,(char*)come_increment_ref_count(item));
            return;
        }
        if(position==0) {
            litem_144=((struct list_item$1charph*)(right_value100=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_144->prev=((void*)0);
            litem_144->next=self->head;
            if(litem_144->item) {(char*)come_decrement_ref_count(litem_144->item,0,0); }
            litem_144->item=(char*)come_increment_ref_count(item);
            self->head->prev=litem_144;
            self->head=litem_144;
            self->len++;
        }
        else if(self->len==1) {
            litem_145=((struct list_item$1charph*)(right_value101=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_145->prev=self->head;
            litem_145->next=self->tail;
            if(litem_145->item) {(char*)come_decrement_ref_count(litem_145->item,0,0); }
            litem_145->item=(char*)come_increment_ref_count(item);
            self->tail->prev=litem_145;
            self->head->next=litem_145;
            self->len++;
        }
        else {
            it_146=self->head;
            i_147=0;
            while(it_146!=((void*)0)) {
                if(position==i_147) {
                    litem_148=((struct list_item$1charph*)(right_value102=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_148->prev=it_146->prev;
                    litem_148->next=it_146;
                    if(litem_148->item) {(char*)come_decrement_ref_count(litem_148->item,0,0); }
                    litem_148->item=(char*)come_increment_ref_count(item);
                    it_146->prev->next=litem_148;
                    it_146->prev=litem_148;
                    self->len++;
                }
                it_146=it_146->next;
                i_147++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$1charph_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_149;
int i_150;
memset(&it_149, 0, sizeof(struct list_item$1charph*));
memset(&i_150, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_149=self->head;
        i_150=0;
        while(it_149!=((void*)0)) {
            if(position==i_150) {
                char* __result__ = it_149->item;
                return __result__;
            }
            it_149=it_149->next;
            i_150++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list$1charph_reset(struct list$1charph* self){
struct list_item$1charph* it_151;
struct list_item$1charph* prev_it_152;
memset(&it_151, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_152, 0, sizeof(struct list_item$1charph*));
        it_151=self->head;
        while(it_151!=((void*)0)) {
            prev_it_152=it_151;
            if(1) {
                it_151->item = come_decrement_ref_count(it_151->item, 0, 0);
            }
            it_151=it_151->next;
            call_finalizer(list_item$1charph_finalize,prev_it_152,0, 0, 0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
}

static void list_item$1charph_finalize(struct list_item$1charph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    self->item = come_decrement_ref_count(self->item, 0, 0);
                }
}

static int list$1charph_length(struct list$1charph* self){
        int __result__ = self->len;
        return __result__;
}

static void list$1int_delete(struct list$1int* self, int head, int tail){
int tmp_153;
struct list_item$1int* it_156;
int i_157;
struct list_item$1int* prev_it_158;
struct list_item$1int* it_159;
int i_160;
struct list_item$1int* prev_it_161;
struct list_item$1int* it_162;
struct list_item$1int* head_prev_it_163;
struct list_item$1int* tail_it_164;
int i_165;
struct list_item$1int* prev_it_166;
memset(&tmp_153, 0, sizeof(int));
memset(&it_156, 0, sizeof(struct list_item$1int*));
memset(&i_157, 0, sizeof(int));
memset(&prev_it_158, 0, sizeof(struct list_item$1int*));
memset(&it_159, 0, sizeof(struct list_item$1int*));
memset(&i_160, 0, sizeof(int));
memset(&prev_it_161, 0, sizeof(struct list_item$1int*));
memset(&it_162, 0, sizeof(struct list_item$1int*));
memset(&head_prev_it_163, 0, sizeof(struct list_item$1int*));
memset(&tail_it_164, 0, sizeof(struct list_item$1int*));
memset(&i_165, 0, sizeof(int));
memset(&prev_it_166, 0, sizeof(struct list_item$1int*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_153=tail;
            tail=head;
            head=tmp_153;
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
            list$1int_reset(self);
        }
        else if(head==0) {
            it_156=self->head;
            i_157=0;
            while(it_156!=((void*)0)) {
                if(i_157<tail) {
                    prev_it_158=it_156;
                    it_156=it_156->next;
                    i_157++;
                    call_finalizer(list_item$1int_finalize,prev_it_158,0, 0, 0);
                    self->len--;
                }
                else if(i_157==tail) {
                    self->head=it_156;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_156=it_156->next;
                    i_157++;
                }
            }
        }
        else if(tail==self->len) {
            it_159=self->head;
            i_160=0;
            while(it_159!=((void*)0)) {
                if(i_160==head) {
                    self->tail=it_159->prev;
                    self->tail->next=((void*)0);
                }
                if(i_160>=head) {
                    prev_it_161=it_159;
                    it_159=it_159->next;
                    i_160++;
                    call_finalizer(list_item$1int_finalize,prev_it_161,0, 0, 0);
                    self->len--;
                }
                else {
                    it_159=it_159->next;
                    i_160++;
                }
            }
        }
        else {
            it_162=self->head;
            head_prev_it_163=((void*)0);
            tail_it_164=((void*)0);
            i_165=0;
            while(it_162!=((void*)0)) {
                if(i_165==head) {
                    head_prev_it_163=it_162->prev;
                }
                if(i_165==tail) {
                    tail_it_164=it_162;
                }
                if(i_165>=head&&i_165<tail) {
                    prev_it_166=it_162;
                    it_162=it_162->next;
                    i_165++;
                    call_finalizer(list_item$1int_finalize,prev_it_166,0, 0, 0);
                    self->len--;
                }
                else {
                    it_162=it_162->next;
                    i_165++;
                }
            }
            if(head_prev_it_163!=((void*)0)) {
                head_prev_it_163->next=tail_it_164;
            }
            if(tail_it_164!=((void*)0)) {
                tail_it_164->prev=head_prev_it_163;
            }
        }
}

static void list$1int_reset(struct list$1int* self){
struct list_item$1int* it_154;
struct list_item$1int* prev_it_155;
memset(&it_154, 0, sizeof(struct list_item$1int*));
memset(&prev_it_155, 0, sizeof(struct list_item$1int*));
                it_154=self->head;
                while(it_154!=((void*)0)) {
                    prev_it_155=it_154;
                    if(0) {
                    }
                    it_154=it_154->next;
                    call_finalizer(list_item$1int_finalize,prev_it_155,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$1int_finalize(struct list_item$1int* self){
}

static void list$1charph_replace(struct list$1charph* self, int position, char* item){
struct list_item$1charph* it_168;
int i_169;
memset(&it_168, 0, sizeof(struct list_item$1charph*));
memset(&i_169, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_168=self->head;
        i_169=0;
        while(it_168!=((void*)0)) {
            if(position==i_169) {
                if(it_168->item) {(char*)come_decrement_ref_count(it_168->item,0,0); }
                it_168->item=(char*)come_increment_ref_count(item);
                break;
            }
            it_168=it_168->next;
            i_169++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static _Bool list$1int_equals(struct list$1int* left, struct list$1int* right){
struct list_item$1int* it_172;
struct list_item$1int* it2_173;
memset(&it_172, 0, sizeof(struct list_item$1int*));
memset(&it2_173, 0, sizeof(struct list_item$1int*));
        if(left->len!=right->len) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        it_172=left->head;
        it2_173=right->head;
        while(it_172!=((void*)0)) {
            if(!int_equals(it_172->item,it2_173->item)) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_172=it_172->next;
            it2_173=it2_173->next;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static int list$1int_find(struct list$1int* self, int item, int default_value){
int it2_174;
struct list_item$1int* it_175;
memset(&it2_174, 0, sizeof(int));
memset(&it_175, 0, sizeof(struct list_item$1int*));
        it2_174=0;
        it_175=self->head;
        while(it_175!=((void*)0)) {
            if(int_equals(it_175->item,item)) {
                int __result__ = it2_174;
                return __result__;
            }
            it2_174++;
            it_175=it_175->next;
        }
        int __result__ = default_value;
        return __result__;
}

static struct list$1int* list$1int_sublist(struct list$1int* self, int begin, int tail){
void* right_value116;
void* right_value117;
struct list$1int* result_177;
struct list_item$1int* it_178;
int i_179;
memset(&result_177, 0, sizeof(struct list$1int*));
memset(&it_178, 0, sizeof(struct list_item$1int*));
memset(&i_179, 0, sizeof(int));
        result_177=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value117=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value116=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
        call_finalizer(list$1int_finalize,right_value117,0, 1, 0);
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
        it_178=self->head;
        i_179=0;
        while(it_178!=((void*)0)) {
            if(i_179>=begin&&i_179<tail) {
                list$1int_push_back(result_177,it_178->item);
            }
            it_178=it_178->next;
            i_179++;
        }
        struct list$1int* __result__ = result_177;
        call_finalizer(list$1int_finalize,result_177,0, 0, 1);
        return __result__;
}

void method_block4_code2HelloWorld2c(struct __current_stack4__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static void list$1int_operator_store_element(struct list$1int* self, int position, int item){
        list$1int_replace(self,position,item);
}

static void list$1int_replace(struct list$1int* self, int position, int item){
struct list_item$1int* it_183;
int i_184;
memset(&it_183, 0, sizeof(struct list_item$1int*));
memset(&i_184, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_183=self->head;
            i_184=0;
            while(it_183!=((void*)0)) {
                if(position==i_184) {
                    it_183->item=item;
                    break;
                }
                it_183=it_183->next;
                i_184++;
            }
}

static int list$1int_operator_load_element(struct list$1int* self, int index){
int default_value_185;
memset(&default_value_185, 0, sizeof(int));
        memset(&default_value_185,0,sizeof(int));
        int __result__ = list$1int_item(self,index,default_value_185);
        return __result__;
}

static _Bool list$1int_operator_equals(struct list$1int* self, struct list$1int* right){
        _Bool __result__ = list$1int_equals(self,right);
        return __result__;
}

void method_block5_code2HelloWorld2c(struct __current_stack5__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static struct map$2charpint* map$2charpint_initialize(struct map$2charpint* self){
void* right_value135;
void* right_value136;
void* right_value137;
int i_190;
void* right_value138;
void* right_value139;
memset(&i_190, 0, sizeof(int));
        self->keys=((char***)(right_value135=(char***)come_calloc(1, sizeof(char**)*(1*(128)))));
        self->items=((int**)(right_value136=(int**)come_calloc(1, sizeof(int*)*(1*(128)))));
        self->item_existance=((_Bool**)(right_value137=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(128)))));
        for(
        i_190=0;
        i_190<128;
        i_190++
        ){
            self->item_existance[i_190]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        if(self->key_list) {(struct list$1charp*)come_decrement_ref_count(self->key_list,0,0); }
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value139=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value138=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
        call_finalizer(list$1charp_finalize,right_value139,0, 1, 0);
        self->it=0;
        struct map$2charpint* __result__ = self;
        call_finalizer(map$2charpint_finalize,self,0, 0, 1);
        return __result__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1charp* __result__ = self;
            call_finalizer(list$1charp_finalize,self,0, 0, 1);
            return __result__;
}

static void list$1charp_finalize(struct list$1charp* self){
struct list_item$1charp* it_191;
struct list_item$1charp* prev_it_192;
memset(&it_191, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_192, 0, sizeof(struct list_item$1charp*));
                it_191=self->head;
                while(it_191!=((void*)0)) {
                    if(0) {
                        it_191->item = come_decrement_ref_count(it_191->item, 0, 0);
                    }
                    prev_it_192=it_191;
                    it_191=it_191->next;
                    come_free_object(prev_it_192);
                }
}

static void map$2charpint_finalize(struct map$2charpint* self){
int i_193;
int i_194;
memset(&i_193, 0, sizeof(int));
memset(&i_194, 0, sizeof(int));
            for(
            i_193=0;
            i_193<self->size;
            i_193++
            ){
                if(self->item_existance[i_193]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_194=0;
            i_194<self->size;
            i_194++
            ){
                if(self->item_existance[i_194]) {
                    if(0) {
                        self->keys[i_194] = come_decrement_ref_count(self->keys[i_194], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$1charp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$2charpint_insert(struct map$2charpint* self, char* key, int item){
int hash_211;
int it_212;
_Bool same_key_exist_213;
char* it2_215;
memset(&hash_211, 0, sizeof(int));
memset(&it_212, 0, sizeof(int));
memset(&same_key_exist_213, 0, sizeof(_Bool));
memset(&it2_215, 0, sizeof(char*));
        if(self->len*2>=self->size) {
            map$2charpint_rehash(self);
        }
        hash_211=char_get_hash_key(key)%self->size;
        it_212=hash_211;
        while((_Bool)1) {
            if(self->item_existance[it_212]) {
                if(char_equals(self->keys[it_212],key)) {
                    if(0) {
                        self->keys[it_212] = come_decrement_ref_count(self->keys[it_212], 0, 0);
                        self->keys[it_212]=key;
                    }
                    else {
                        self->keys[it_212]=key;
                    }
                    if(0) {
                        self->items[it_212]=item;
                    }
                    else {
                        self->items[it_212]=item;
                    }
                    break;
                }
                it_212++;
                if(it_212>=self->size) {
                    it_212=0;
                }
                else if(it_212==hash_211) {
                    fprintf(stderr,"unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_212]=(_Bool)1;
                if(0) {
                    self->keys[it_212] = come_decrement_ref_count(self->keys[it_212], 0, 0);
                    self->keys[it_212]=key;
                }
                else {
                    self->keys[it_212]=key;
                }
                if(0) {
                    self->items[it_212]=item;
                }
                else {
                    self->items[it_212]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_213=(_Bool)0;
        for(
        it2_215=list$1charp_begin(self->key_list);
        !list$1charp_end(self->key_list);
        it_212=list$1charp_next(self->key_list)
        ){
            if(char_equals(it2_215,key)) {
                same_key_exist_213=(_Bool)1;
            }
        }
        if(!same_key_exist_213) {
            list$1charp_push_back(self->key_list,key);
        }
}

static void map$2charpint_rehash(struct map$2charpint* self){
int size_196;
void* right_value141;
char** keys_197;
void* right_value142;
int* items_198;
void* right_value143;
_Bool* item_existance_199;
int len_200;
char* it_202;
int default_value_204;
int it2_207;
int hash_208;
int n_209;
int default_value_210;
memset(&size_196, 0, sizeof(int));
memset(&keys_197, 0, sizeof(char**));
memset(&items_198, 0, sizeof(int*));
memset(&item_existance_199, 0, sizeof(_Bool*));
memset(&len_200, 0, sizeof(int));
memset(&it_202, 0, sizeof(char*));
memset(&default_value_204, 0, sizeof(int));
memset(&it2_207, 0, sizeof(int));
memset(&hash_208, 0, sizeof(int));
memset(&n_209, 0, sizeof(int));
memset(&default_value_210, 0, sizeof(int));
                size_196=self->size*3;
                keys_197=((char***)(right_value141=(char***)come_calloc(1, sizeof(char**)*(1*(size_196)))));
                items_198=((int**)(right_value142=(int**)come_calloc(1, sizeof(int*)*(1*(size_196)))));
                item_existance_199=((_Bool**)(right_value143=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(size_196)))));
                len_200=0;
                for(
                it_202=map$2charpint_begin(self);
                !map$2charpint_end(self);
                it_202=map$2charpint_next(self)
                ){
                    it2_207=map$2charpint_at(self,it_202,default_value_204);
                    hash_208=char_get_hash_key(it_202)%size_196;
                    n_209=hash_208;
                    while((_Bool)1) {
                        if(item_existance_199[n_209]) {
                            n_209++;
                            if(n_209>=size_196) {
                                n_209=0;
                            }
                            else if(n_209==hash_208) {
                                fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_199[n_209]=(_Bool)1;
                            keys_197[n_209]=it_202;
                            items_198[n_209]=map$2charpint_at(self,it_202,default_value_210);
                            len_200++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
                come_free_object((char*)self->keys);
                self->keys=keys_197;
                self->items=items_198;
                self->item_existance=item_existance_199;
                self->size=size_196;
                self->len=len_200;
}

static char* map$2charpint_begin(struct map$2charpint* self){
char* result_201;
memset(&result_201, 0, sizeof(char*));
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result__ = self->key_list->it->item;
                        return __result__;
                    }
                    memset(&result_201,0,sizeof(char*));
                    char* __result__ = result_201;
                    return __result__;
}

static _Bool map$2charpint_end(struct map$2charpint* self){
                    _Bool __result__ = self->key_list->it==((void*)0);
                    return __result__;
}

static char* map$2charpint_next(struct map$2charpint* self){
char* result_203;
memset(&result_203, 0, sizeof(char*));
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result__ = self->key_list->it->item;
                        return __result__;
                    }
                    memset(&result_203,0,sizeof(char*));
                    char* __result__ = result_203;
                    return __result__;
}

static int map$2charpint_at(struct map$2charpint* self, char* key, int default_value){
int hash_205;
int it_206;
memset(&hash_205, 0, sizeof(int));
memset(&it_206, 0, sizeof(int));
                        hash_205=char_get_hash_key(((char*)key))%self->size;
                        it_206=hash_205;
                        while((_Bool)1) {
                            if(self->item_existance[it_206]) {
                                if(char_equals(self->keys[it_206],key)) {
                                    int __result__ = self->items[it_206];
                                    return __result__;
                                }
                                it_206++;
                                if(it_206>=self->size) {
                                    it_206=0;
                                }
                                else if(it_206==hash_205) {
                                    int __result__ = default_value;
                                    return __result__;
                                }
                            }
                            else {
                                int __result__ = default_value;
                                return __result__;
                            }
                        }
                        int __result__ = default_value;
                        return __result__;
}

static char* list$1charp_begin(struct list$1charp* self){
char* result_214;
memset(&result_214, 0, sizeof(char*));
            self->it=self->head;
            if(self->it) {
                char* __result__ = self->it->item;
                return __result__;
            }
            memset(&result_214,0,sizeof(char*));
            char* __result__ = result_214;
            return __result__;
}

static _Bool list$1charp_end(struct list$1charp* self){
            _Bool __result__ = self->it==((void*)0);
            return __result__;
}

static char* list$1charp_next(struct list$1charp* self){
char* result_216;
memset(&result_216, 0, sizeof(char*));
            self->it=self->it->next;
            if(self->it) {
                char* __result__ = self->it->item;
                return __result__;
            }
            memset(&result_216,0,sizeof(char*));
            char* __result__ = result_216;
            return __result__;
}

static void list$1charp_push_back(struct list$1charp* self, char* item){
void* right_value144;
struct list_item$1charp* litem_217;
void* right_value145;
struct list_item$1charp* litem_218;
void* right_value146;
struct list_item$1charp* litem_219;
memset(&litem_217, 0, sizeof(struct list_item$1charp*));
memset(&litem_218, 0, sizeof(struct list_item$1charp*));
memset(&litem_219, 0, sizeof(struct list_item$1charp*));
                if(self->len==0) {
                    litem_217=((struct list_item$1charp*)(right_value144=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_217->prev=((void*)0);
                    litem_217->next=((void*)0);
                    litem_217->item=item;
                    self->tail=litem_217;
                    self->head=litem_217;
                }
                else if(self->len==1) {
                    litem_218=((struct list_item$1charp*)(right_value145=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_218->prev=self->head;
                    litem_218->next=((void*)0);
                    litem_218->item=item;
                    self->tail=litem_218;
                    self->head->next=litem_218;
                }
                else {
                    litem_219=((struct list_item$1charp*)(right_value146=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                    litem_219->prev=self->tail;
                    litem_219->next=((void*)0);
                    litem_219->item=item;
                    self->tail->next=litem_219;
                    self->tail=litem_219;
                }
                self->len++;
}

static _Bool map$2charpint_operator_equals(struct map$2charpint* left, struct map$2charpint* right){
        _Bool __result__ = map$2charpint_equals(left,right);
        return __result__;
}

static _Bool map$2charpint_equals(struct map$2charpint* left, struct map$2charpint* right){
int n_221;
_Bool result_222;
char* it_223;
char* default_value_224;
char* it2_227;
int default_value2_228;
int item_229;
int item2_230;
memset(&n_221, 0, sizeof(int));
memset(&result_222, 0, sizeof(_Bool));
memset(&it_223, 0, sizeof(char*));
memset(&default_value_224, 0, sizeof(char*));
memset(&it2_227, 0, sizeof(char*));
memset(&default_value2_228, 0, sizeof(int));
memset(&item_229, 0, sizeof(int));
memset(&item2_230, 0, sizeof(int));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            n_221=0;
            result_222=(_Bool)1;
            for(
            it_223=list$1charp_begin(left->key_list);
            !list$1charp_end(left->key_list);
            it_223=list$1charp_next(left->key_list)
            ){
                it2_227=list$1charp_item(right->key_list,n_221,default_value_224);
                if(char_equals(it_223,it2_227)) {
                    item_229=map$2charpint_at(left,it_223,default_value2_228);
                    item2_230=map$2charpint_at(left,it2_227,default_value2_228);
                    if(!int_equals(item_229,item2_230)) {
                        result_222=(_Bool)0;
                    }
                }
                else {
                    result_222=(_Bool)0;
                }
                n_221++;
            }
            _Bool __result__ = result_222;
            return __result__;
}

static char* list$1charp_item(struct list$1charp* self, int position, char* default_value){
struct list_item$1charp* it_225;
int i_226;
memset(&it_225, 0, sizeof(struct list_item$1charp*));
memset(&i_226, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_225=self->head;
                    i_226=0;
                    while(it_225!=((void*)0)) {
                        if(position==i_226) {
                            char* __result__ = it_225->item;
                            return __result__;
                        }
                        it_225=it_225->next;
                        i_226++;
                    }
                    char* __result__ = default_value;
                    return __result__;
}

static int map$2charpint_operator_load_element(struct map$2charpint* self, char* key){
int default_value_233;
memset(&default_value_233, 0, sizeof(int));
        memset(&default_value_233,0,sizeof(int));
        int __result__ = map$2charpint_at(self,key,default_value_233);
        return __result__;
}

static struct map$2charpint* map$2charpint_clone(struct map$2charpint* self){
void* right_value151;
void* right_value152;
struct map$2charpint* result_234;
char* it_235;
int default_value_236;
int it2_237;
memset(&result_234, 0, sizeof(struct map$2charpint*));
memset(&it_235, 0, sizeof(char*));
memset(&default_value_236, 0, sizeof(int));
memset(&it2_237, 0, sizeof(int));
        if(self==((void*)0)) {
            struct map$2charpint* __result__ = ((void*)0);
            return __result__;
        }
        result_234=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value152=map$2charpint_initialize((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value151=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1)))))))));
        call_finalizer(map$2charpint_finalize,right_value152,0, 1, 0);
        for(
        it_235=map$2charpint_begin(self);
        !map$2charpint_end(self);
        it_235=map$2charpint_next(self)
        ){
            it2_237=map$2charpint_at(self,it_235,default_value_236);
            map$2charpint_insert2(result_234,char_clone(it_235),int_clone(it2_237));
        }
        struct map$2charpint* __result__ = result_234;
        call_finalizer(map$2charpint_finalize,result_234,0, 0, 1);
        return __result__;
}

static void map$2charpint_insert2(struct map$2charpint* self, char* key, int item){
int hash_238;
int it_239;
_Bool same_key_exist_240;
char* it2_241;
memset(&hash_238, 0, sizeof(int));
memset(&it_239, 0, sizeof(int));
memset(&same_key_exist_240, 0, sizeof(_Bool));
memset(&it2_241, 0, sizeof(char*));
                if(self->len*2>=self->size) {
                    map$2charpint_rehash(self);
                }
                hash_238=char_get_hash_key(key)%self->size;
                it_239=hash_238;
                while((_Bool)1) {
                    if(self->item_existance[it_239]) {
                        if(char_equals(self->keys[it_239],key)) {
                            if(0) {
                                self->keys[it_239] = come_decrement_ref_count(self->keys[it_239], 0, 0);
                                self->keys[it_239]=key;
                            }
                            else {
                                self->keys[it_239]=key;
                            }
                            if(0) {
                                self->items[it_239]=item;
                            }
                            else {
                                self->items[it_239]=item;
                            }
                            break;
                        }
                        it_239++;
                        if(it_239>=self->size) {
                            it_239=0;
                        }
                        else if(it_239==hash_238) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_239]=(_Bool)1;
                        if(0) {
                            self->keys[it_239] = come_decrement_ref_count(self->keys[it_239], 0, 0);
                            self->keys[it_239]=key;
                        }
                        else {
                            self->keys[it_239]=key;
                        }
                        if(0) {
                            self->items[it_239]=item;
                        }
                        else {
                            self->items[it_239]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_240=(_Bool)0;
                for(
                it2_241=list$1charp_begin(self->key_list);
                !list$1charp_end(self->key_list);
                it_239=list$1charp_next(self->key_list)
                ){
                    if(char_equals(it2_241,key)) {
                        same_key_exist_240=(_Bool)1;
                    }
                }
                if(!same_key_exist_240) {
                    list$1charp_push_back(self->key_list,key);
                }
}

static struct tuple1$1int* tuple1$1int_initialize(struct tuple1$1int* self, int v1){
        self->v1=v1;
        struct tuple1$1int* __result__ = self;
        call_finalizer(tuple1$1int_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple1$1int_finalize(struct tuple1$1int* self){
}

