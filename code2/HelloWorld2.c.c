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
    char** p_108;
    void** p2_109;
    int* count_110;
    int* size2_111;
    char** mem2_112;
    int* b_113;
    int** a_114;
    int* a2_115;
    char** ax_118;
    char** str_122;
    struct sData** data_123;
    int** axyz_124;
    int** xxx_125;
    int** yyy_126;
    int** zzz_127;
    int* bzyz_128;
    int** azyz_129;
    int* n_130;
};
struct __current_stack2__
{
    char** p_108;
    void** p2_109;
    int* count_110;
    int* size2_111;
    char** mem2_112;
    int* b_113;
    int** a_114;
    int* a2_115;
    char** ax_118;
    char** str_122;
    struct sData** data_123;
    int** axyz_124;
    int** xxx_125;
    int** yyy_126;
    int** zzz_127;
    int* bzyz_128;
    int** azyz_129;
    int* n_130;
    struct list$1charph** liX_131;
    struct list$1int** liX2_137;
    int* aX_144;
};
struct __current_stack3__
{
    char** p_108;
    void** p2_109;
    int* count_110;
    int* size2_111;
    char** mem2_112;
    int* b_113;
    int** a_114;
    int* a2_115;
    char** ax_118;
    char** str_122;
    struct sData** data_123;
    int** axyz_124;
    int** xxx_125;
    int** yyy_126;
    int** zzz_127;
    int* bzyz_128;
    int** azyz_129;
    int* n_130;
    struct list$1charph** liX_131;
    struct list$1int** liX2_137;
    int* aX_144;
    int* aXYZY_148;
    struct list$1charph** li_149;
    struct list$1int** li2_151;
    int* aXL_153;
};
struct __current_stack4__
{
    char** p_108;
    void** p2_109;
    int* count_110;
    int* size2_111;
    char** mem2_112;
    int* b_113;
    int** a_114;
    int* a2_115;
    char** ax_118;
    char** str_122;
    struct sData** data_123;
    int** axyz_124;
    int** xxx_125;
    int** yyy_126;
    int** zzz_127;
    int* bzyz_128;
    int** azyz_129;
    int* n_130;
    struct list$1charph** liX_131;
    struct list$1int** liX2_137;
    int* aX_144;
    int* aXYZY_148;
    struct list$1charph** li_149;
    struct list$1int** li2_151;
    int* aXL_153;
    struct list$1charph** li3_184;
    struct list$1int** li4_187;
    struct list$1int** li5_188;
    struct list$1int** li6_193;
    int** axyzX_197;
    char** strXYXY_198;
    struct list$1int** liZ_199;
};
struct __current_stack5__
{
    char** p_108;
    void** p2_109;
    int* count_110;
    int* size2_111;
    char** mem2_112;
    int* b_113;
    int** a_114;
    int* a2_115;
    char** ax_118;
    char** str_122;
    struct sData** data_123;
    int** axyz_124;
    int** xxx_125;
    int** yyy_126;
    int** zzz_127;
    int* bzyz_128;
    int** azyz_129;
    int* n_130;
    struct list$1charph** liX_131;
    struct list$1int** liX2_137;
    int* aX_144;
    int* aXYZY_148;
    struct list$1charph** li_149;
    struct list$1int** li2_151;
    int* aXL_153;
    struct list$1charph** li3_184;
    struct list$1int** li4_187;
    struct list$1int** li5_188;
    struct list$1int** li6_193;
    int** axyzX_197;
    char** strXYXY_198;
    struct list$1int** liZ_199;
    struct list$1int** liZ2_203;
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
static void va_listp_finalize(va_list* self);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list$1charphp_push_back(struct list$1charph* self, char* item);
static void FILEpp_finalize(struct _IO_FILE* self);
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int intp_fun(int* self);
struct sDataA* sDataAp_initialize(struct sDataA* self, int a, int b);
static void sDataAp_finalize(struct sDataA* self);
int sDataAp_fun(struct sDataA* self, int a, int b);
void fun_default_parametor(int x, int y);
struct tuple2$2intbool* fun_exception(int x, int y);
static void tuple2$2intboolp_finalize(struct tuple2$2intbool* self);
int main();
static void sDatap_finalize(struct sData* self);
void method_block1_code2HelloWorld2c(struct __current_stack1__* parent);
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
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
    unsigned short int __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    return __result1__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    unsigned int __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    return __result2__;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
    unsigned long int __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    return __result3__;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
    unsigned short int __result4__ = __x;
    return __result4__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
    unsigned int __result5__ = __x;
    return __result5__;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
    unsigned long int __result6__ = __x;
    return __result6__;
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
    char* __result16__ = result_22;
    result_22 = come_decrement_ref_count(result_22, 0, 1);
    return __result16__;
}
static inline _Bool int_equals(int self, int right){
    _Bool __result17__ = self==right;
    return __result17__;
}
static inline _Bool bool_equals(_Bool self, _Bool right){
    _Bool __result18__ = self==right;
    return __result18__;
}
static inline _Bool char_equals(char self, char right){
    _Bool __result19__ = self==right;
    return __result19__;
}
static inline _Bool short_equals(short short self, short short right){
    _Bool __result20__ = self==right;
    return __result20__;
}
static inline _Bool long_equals(long self, long right){
    _Bool __result21__ = self==right;
    return __result21__;
}
static inline _Bool stringp_equals(char* self, char* right){
    _Bool __result22__ = strcmp(self,right)==0;
    return __result22__;
}
static inline _Bool stringp_operator_equals(char* self, char* right){
    _Bool __result23__ = strcmp(self,right)==0;
    return __result23__;
}
static inline _Bool charp_operator_equals(char* self, char* right){
    _Bool __result24__ = strcmp(self,right)==0;
    return __result24__;
}
static inline _Bool charp_equals(char* self, char* right){
    _Bool __result25__ = strcmp(self,right)==0;
    return __result25__;
}
static inline char* charp_operator_add(char* self, char* right){
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
    char* __result26__ = result_24;
    result_24 = come_decrement_ref_count(result_24, 0, 1);
    return __result26__;
}
static inline char* stringp_operator_add(char* self, char* right){
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
    char* __result27__ = result_26;
    result_26 = come_decrement_ref_count(result_26, 0, 1);
    return __result27__;
}
static inline unsigned int int_get_hash_key(int value){
    unsigned int __result28__ = value;
    return __result28__;
}
static inline unsigned int bool_get_hash_key(_Bool value){
    unsigned int __result29__ = (int_get_hash_key(((int)value)));
    return __result29__;
}
static inline unsigned int stringp_get_hash_key(char* value){
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
    unsigned int __result30__ = result_27;
    return __result30__;
}
static inline unsigned int charp_get_hash_key(char* value){
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
    unsigned int __result31__ = result_29;
    return __result31__;
}
static inline int int_clone(int self){
    int __result33__ = self;
    return __result33__;
}
static inline char* charp_clone(char* self){
    char* __result34__ = self;
    return __result34__;
}
static inline char* stringp_clone(char* self){
void* right_value3;
    char* __result35__ = ((char*)(right_value3=__builtin_string(self)));
    return __result35__;
}
static inline int long_clone(long self){
    int __result36__ = self;
    return __result36__;
}
static inline short int short_clone(short short self){
    short int __result37__ = self;
    return __result37__;
}
static inline char char_clone(char self){
    char __result38__ = self;
    return __result38__;
}
static inline double double_clone(double self){
    double __result39__ = self;
    return __result39__;
}
static inline float float_clone(float self){
    float __result40__ = self;
    return __result40__;
}
static inline void bufferp_finalize(struct buffer* self){
    if(self&&self->buf) {
        self->buf = come_decrement_ref_count(self->buf, 0, 0);
    }
}
static inline struct buffer* bufferp_initialize(struct buffer* self){
void* right_value4;
    self->size=128;
    if(self->buf) {(char*)come_decrement_ref_count(self->buf,0,0); }
    self->buf=(char*)come_increment_ref_count(((char**)(right_value4=(char**)come_calloc(1, sizeof(char*)*(1*(self->size))))));
    right_value4 = come_decrement_ref_count(right_value4, 1, 0);
    self->buf[0]=0;
    self->len=0;
    struct buffer* __result41__ = self;
    call_finalizer(bufferp_finalize,self,0, 0, 1);
    return __result41__;
}
static inline struct buffer* bufferp_clone(struct buffer* self){
void* right_value5;
struct buffer* result_31;
void* right_value6;
memset(&result_31, 0, sizeof(struct buffer*));
    if(self==((void*)0)) {
        struct buffer* __result42__ = ((void*)0);
        return __result42__;
    }
    result_31=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))));
    call_finalizer(bufferp_finalize,right_value5,0, 1, 0);
    result_31->size=self->size;
    if(result_31->buf) {(char*)come_decrement_ref_count(result_31->buf,0,0); }
    result_31->buf=(char*)come_increment_ref_count(((char**)(right_value6=(char**)come_calloc(1, sizeof(char*)*(1*(self->size))))));
    right_value6 = come_decrement_ref_count(right_value6, 1, 0);
    result_31->len=self->len;
    memcpy(result_31->buf,self->buf,self->len);
    struct buffer* __result43__ = result_31;
    call_finalizer(bufferp_finalize,result_31,0, 0, 1);
    return __result43__;
}
static inline int bufferp_length(struct buffer* self){
    int __result44__ = self->len;
    return __result44__;
}
static inline void bufferp_reset(struct buffer* self){
    self->buf[0]=0;
    self->len=0;
}
static inline void bufferp_append(struct buffer* self, char* mem, int size){
char* old_buf_32;
int old_len_33;
int new_size_34;
void* right_value7;
memset(&old_buf_32, 0, sizeof(char*));
memset(&old_len_33, 0, sizeof(int));
memset(&new_size_34, 0, sizeof(int));
    if(self->len+size+1+1>=self->size) {
        old_buf_32=(char*)come_increment_ref_count(charp_clone(self->buf));
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
static inline void bufferp_append_char(struct buffer* self, char c){
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
static inline void bufferp_append_str(struct buffer* self, char* str){
    bufferp_append(self,str,strlen(str));
}
static inline void bufferp_append_nullterminated_str(struct buffer* self, char* str){
    bufferp_append(self,str,strlen(str));
    bufferp_append_char(self,0);
}
static inline char* bufferp_to_string(struct buffer* self){
void* right_value9;
    char* __result45__ = ((char*)(right_value9=__builtin_string(self->buf)));
    return __result45__;
}
static inline void bufferp_append_int(struct buffer* self, int value){
    bufferp_append(self,(char*)&value,sizeof(int));
}
static inline void bufferp_append_long(struct buffer* self, long value){
    bufferp_append(self,(char*)&value,sizeof(long));
}
static inline void bufferp_append_short(struct buffer* self, short short value){
    bufferp_append(self,(char*)&value,sizeof(short short));
}
static inline void bufferp_alignment(struct buffer* self){
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
static inline int bufferp_compare(struct buffer* left, struct buffer* right){
    int __result46__ = strcmp(left->buf,right->buf);
    return __result46__;
}
static inline struct buffer* stringp_to_buffer(char* self){
void* right_value11;
void* right_value12;
struct buffer* result_39;
memset(&result_39, 0, sizeof(struct buffer*));
    result_39=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=bufferp_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    call_finalizer(bufferp_finalize,right_value11,0, 1, 0);
    call_finalizer(bufferp_finalize,right_value12,0, 1, 0);
    bufferp_append_str(result_39,self);
    struct buffer* __result47__ = result_39;
    call_finalizer(bufferp_finalize,result_39,0, 0, 1);
    return __result47__;
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
    char* __result48__ = result2_43;
    call_finalizer(va_listp_finalize,(&args_40),1, 0, 0);
    result2_43 = come_decrement_ref_count(result2_43, 0, 1);
    return __result48__;
}
static inline void FILEp_fclose(struct _IO_FILE* f){
    fclose(f);
}
static inline struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* right_value14;
void* right_value15;
struct list$1charph* result_46;
char buf_47[8192];
void* right_value19;
memset(&result_46, 0, sizeof(struct list$1charph*));
memset(&buf_47, 0, sizeof(char));
    result_46=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value15=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value14=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charphp_finalize,right_value15,0, 1, 0);
    while(1) {
        if(fgets(buf_47,8192,f)==((void*)0)) {
            break;
        }
        list$1charphp_push_back(result_46,(char*)come_increment_ref_count(((char*)(right_value19=__builtin_string(buf_47)))));
        right_value19 = come_decrement_ref_count(right_value19, 1, 0);
    }
    struct list$1charph* __result50__ = result_46;
    call_finalizer(list$1charphp_finalize,result_46,0, 0, 1);
    return __result50__;
}
static inline char* FILE_read(struct _IO_FILE* f){
void* right_value20;
void* right_value21;
struct buffer* buf_51;
char buf2_52[8192];
int size_53;
void* right_value22;
memset(&buf_51, 0, sizeof(struct buffer*));
memset(&buf2_52, 0, sizeof(char));
memset(&size_53, 0, sizeof(int));
    buf_51=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=bufferp_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value20=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    call_finalizer(bufferp_finalize,right_value20,0, 1, 0);
    call_finalizer(bufferp_finalize,right_value21,0, 1, 0);
    while(1) {
        size_53=fread(buf2_52,1,8192,f);
        bufferp_append(buf_51,buf2_52,size_53);
        if(size_53<8192) {
            break;
        }
    }
    char* __result51__ = ((char*)(right_value22=bufferp_to_string(buf_51)));
    call_finalizer(bufferp_finalize,buf_51,0, 0, 0);
    return __result51__;
}
static inline char* FILEp_read(struct _IO_FILE* f){
void* right_value23;
void* right_value24;
struct buffer* buf_54;
char buf2_55[8192];
int size_56;
void* right_value25;
memset(&buf_54, 0, sizeof(struct buffer*));
memset(&buf2_55, 0, sizeof(char));
memset(&size_56, 0, sizeof(int));
    buf_54=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=bufferp_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))))))));
    call_finalizer(bufferp_finalize,right_value23,0, 1, 0);
    call_finalizer(bufferp_finalize,right_value24,0, 1, 0);
    while(1) {
        size_56=fread(buf2_55,1,8192,f);
        bufferp_append(buf_54,buf2_55,size_56);
        if(size_56<8192) {
            break;
        }
    }
    char* __result52__ = ((char*)(right_value25=bufferp_to_string(buf_54)));
    call_finalizer(bufferp_finalize,buf_54,0, 0, 0);
    return __result52__;
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
    struct _IO_FILE* __result53__ = f;
    call_finalizer(va_listp_finalize,(&args_58),1, 0, 0);
    return __result53__;
}
static inline struct _IO_FILE* FILEp_fprintf(struct _IO_FILE* f, const char* msg, ...){
char msg2_59[1024];
va_list args_60;
memset(&msg2_59, 0, sizeof(char));
memset(&args_60, 0, sizeof(va_list));
    __builtin_va_start(args_60,msg);
    vsnprintf(msg2_59,1024,msg,args_60);
    __builtin_va_end(args_60);
    (void)fprintf(f,"%s",msg2_59);
    struct _IO_FILE* __result54__ = f;
    call_finalizer(va_listp_finalize,(&args_60),1, 0, 0);
    return __result54__;
}
static inline void FILE_fclose(struct _IO_FILE* f){
    fclose(f);
}
static inline char* stringp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_61;
void* right_value26;
memset(&f_61, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_61=fopen(file_name,"a");
    }
    else {
        f_61=fopen(file_name,"w");
    }
    FILEp_fprintf(f_61,"%s",self);
    FILEp_fclose(f_61);
    char* __result55__ = ((char*)(right_value26=__builtin_string(self)));
    call_finalizer(FILEpp_finalize,(&f_61),1, 0, 0);
    return __result55__;
}
static inline char* charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_62;
void* right_value27;
memset(&f_62, 0, sizeof(struct _IO_FILE*));
    if(append) {
        f_62=fopen(file_name,"a");
    }
    else {
        f_62=fopen(file_name,"w");
    }
    FILEp_fprintf(f_62,"%s",self);
    FILEp_fclose(f_62);
    char* __result56__ = ((char*)(right_value27=__builtin_string(self)));
    call_finalizer(FILEpp_finalize,(&f_62),1, 0, 0);
    return __result56__;
}
static inline int stringp_length(char* str){
    int __result57__ = strlen(str);
    return __result57__;
}
static inline int charp_length(char* str){
    int __result58__ = strlen(str);
    return __result58__;
}
static inline char* stringp_reverse(char* str){
int len_63;
void* right_value28;
char* result_64;
int i_65;
memset(&len_63, 0, sizeof(int));
memset(&result_64, 0, sizeof(char*));
memset(&i_65, 0, sizeof(int));
    len_63=strlen(str);
    result_64=(char*)come_increment_ref_count(((char**)(right_value28=(char**)come_calloc(1, sizeof(char*)*(1*(len_63+1))))));
    right_value28 = come_decrement_ref_count(right_value28, 1, 0);
    for(
    i_65=0;
    i_65<len_63;
    i_65++
    ){
        result_64[i_65]=str[len_63-i_65-1];
    }
    result_64[len_63]=0;
    char* __result59__ = result_64;
    result_64 = come_decrement_ref_count(result_64, 0, 1);
    return __result59__;
}
static inline char* charp_reverse(char* str){
int len_66;
void* right_value29;
char* result_67;
int i_68;
memset(&len_66, 0, sizeof(int));
memset(&result_67, 0, sizeof(char*));
memset(&i_68, 0, sizeof(int));
    len_66=strlen(str);
    result_67=(char*)come_increment_ref_count(((char**)(right_value29=(char**)come_calloc(1, sizeof(char*)*(1*(len_66+1))))));
    right_value29 = come_decrement_ref_count(right_value29, 1, 0);
    for(
    i_68=0;
    i_68<len_66;
    i_68++
    ){
        result_67[i_68]=str[len_66-i_68-1];
    }
    result_67[len_66]=0;
    char* __result60__ = result_67;
    result_67 = come_decrement_ref_count(result_67, 0, 1);
    return __result60__;
}
static inline char* charp_substring(char* str, int head, int tail){
void* right_value30;
int len_69;
void* right_value31;
void* right_value32;
void* right_value33;
void* right_value34;
void* right_value35;
char* result_70;
memset(&len_69, 0, sizeof(int));
memset(&result_70, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result61__ = ((char*)(right_value30=__builtin_string("")));
        return __result61__;
    }
    len_69=strlen(str);
    if(head<0) {
        head+=len_69;
    }
    if(tail<0) {
        tail+=len_69+1;
    }
    if(head>tail) {
        char* __result62__ = ((char*)(right_value32=stringp_reverse(((char*)(right_value31=charp_substring(str,tail,head))))));
        right_value31 = come_decrement_ref_count(right_value31, 1, 0);
        return __result62__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_69) {
        tail=len_69;
    }
    if(head==tail) {
        char* __result63__ = ((char*)(right_value33=__builtin_string("")));
        return __result63__;
    }
    if(tail-head+1<1) {
        char* __result64__ = ((char*)(right_value34=__builtin_string("")));
        return __result64__;
    }
    result_70=(char*)come_increment_ref_count(((char**)(right_value35=(char**)come_calloc(1, sizeof(char*)*(1*(tail-head+1))))));
    right_value35 = come_decrement_ref_count(right_value35, 1, 0);
    memcpy(result_70,str+head,tail-head);
    result_70[tail-head]=0;
    char* __result65__ = result_70;
    result_70 = come_decrement_ref_count(result_70, 0, 1);
    return __result65__;
}
static inline char* stringp_substring(char* str, int head, int tail){
void* right_value36;
int len_71;
void* right_value37;
void* right_value38;
void* right_value39;
void* right_value40;
void* right_value41;
char* result_72;
memset(&len_71, 0, sizeof(int));
memset(&result_72, 0, sizeof(char*));
    if(str==((void*)0)) {
        char* __result66__ = ((char*)(right_value36=__builtin_string("")));
        return __result66__;
    }
    len_71=strlen(str);
    if(head<0) {
        head+=len_71;
    }
    if(tail<0) {
        tail+=len_71+1;
    }
    if(head>tail) {
        char* __result67__ = ((char*)(right_value38=stringp_reverse(((char*)(right_value37=charp_substring(str,tail,head))))));
        right_value37 = come_decrement_ref_count(right_value37, 1, 0);
        return __result67__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_71) {
        tail=len_71;
    }
    if(head==tail) {
        char* __result68__ = ((char*)(right_value39=__builtin_string("")));
        return __result68__;
    }
    if(tail-head+1<1) {
        char* __result69__ = ((char*)(right_value40=__builtin_string("")));
        return __result69__;
    }
    result_72=(char*)come_increment_ref_count(((char**)(right_value41=(char**)come_calloc(1, sizeof(char*)*(1*(tail-head+1))))));
    right_value41 = come_decrement_ref_count(right_value41, 1, 0);
    memcpy(result_72,str+head,tail-head);
    result_72[tail-head]=0;
    char* __result70__ = result_72;
    result_72 = come_decrement_ref_count(result_72, 0, 1);
    return __result70__;
}
static inline char* stringp_chomp(char* str){
void* right_value42;
char* result_73;
void* right_value43;
memset(&result_73, 0, sizeof(char*));
    result_73=(char*)come_increment_ref_count(((char*)(right_value42=__builtin_string(str))));
    right_value42 = come_decrement_ref_count(right_value42, 1, 0);
    if(result_73[stringp_length(result_73)-1]==10) {
        char* __result71__ = ((char*)(right_value43=stringp_substring(result_73,0,-2)));
        return __result71__;
    }
    char* __result72__ = result_73;
    result_73 = come_decrement_ref_count(result_73, 0, 1);
    return __result72__;
}
static inline char* charp_chomp(char* str){
void* right_value44;
char* result_74;
void* right_value45;
memset(&result_74, 0, sizeof(char*));
    result_74=(char*)come_increment_ref_count(((char*)(right_value44=__builtin_string(str))));
    right_value44 = come_decrement_ref_count(right_value44, 1, 0);
    if(result_74[stringp_length(result_74)-1]==10) {
        char* __result73__ = ((char*)(right_value45=stringp_substring(result_74,0,-2)));
        return __result73__;
    }
    char* __result74__ = result_74;
    result_74 = come_decrement_ref_count(result_74, 0, 1);
    return __result74__;
}
static inline char* xbasename(char* path){
char* p_75;
void* right_value46;
void* right_value47;
void* right_value48;
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
        char* __result75__ = ((char*)(right_value46=__builtin_string(path)));
        return __result75__;
    }
    else {
        char* __result76__ = ((char*)(right_value47=__builtin_string(p_75+1)));
        return __result76__;
    }
    char* __result77__ = ((char*)(right_value48=__builtin_string("")));
    return __result77__;
}
static inline char* xdirname(char* path){
void* right_value49;
void* right_value50;
    char* __result78__ = ((char*)(right_value50=__builtin_string(dirname(((char*)(right_value49=__builtin_string(path)))))));
    right_value49 = come_decrement_ref_count(right_value49, 1, 0);
    return __result78__;
}
static inline char* xnoextname(char* path){
void* right_value51;
char* path2_76;
char* p_77;
void* right_value52;
void* right_value53;
void* right_value54;
memset(&path2_76, 0, sizeof(char*));
memset(&p_77, 0, sizeof(char*));
    path2_76=(char*)come_increment_ref_count(((char*)(right_value51=xbasename(path))));
    right_value51 = come_decrement_ref_count(right_value51, 1, 0);
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
        char* __result79__ = ((char*)(right_value52=__builtin_string(path2_76)));
        return __result79__;
    }
    else {
        char* __result80__ = ((char*)(right_value53=stringp_substring(path2_76,0,p_77-path2_76)));
        return __result80__;
    }
    char* __result81__ = ((char*)(right_value54=__builtin_string("")));
    path2_76 = come_decrement_ref_count(path2_76, 0, 0);
    return __result81__;
}
static inline char* xextname(char* path){
char* p_78;
void* right_value55;
void* right_value56;
void* right_value57;
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
        char* __result82__ = ((char*)(right_value55=__builtin_string(path)));
        return __result82__;
    }
    else {
        char* __result83__ = ((char*)(right_value56=__builtin_string(p_78+1)));
        return __result83__;
    }
    char* __result84__ = ((char*)(right_value57=__builtin_string("")));
    return __result84__;
}
static inline char* xrealpath(char* path){
char* result_79;
void* right_value58;
char* result2_80;
memset(&result_79, 0, sizeof(char*));
memset(&result2_80, 0, sizeof(char*));
    result_79=realpath(path,((void*)0));
    result2_80=(char*)come_increment_ref_count(((char*)(right_value58=__builtin_string(result_79))));
    right_value58 = come_decrement_ref_count(right_value58, 1, 0);
    free(result_79);
    char* __result85__ = result2_80;
    result2_80 = come_decrement_ref_count(result2_80, 0, 1);
    return __result85__;
}
static inline _Bool xiswalpha(unsigned int c){
_Bool result_81;
memset(&result_81, 0, sizeof(_Bool));
    result_81=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result86__ = result_81;
    return __result86__;
}
static inline _Bool xiswblank(unsigned int c){
    _Bool __result87__ = c==32||c==9;
    return __result87__;
}
static inline _Bool xiswdigit(unsigned int c){
    _Bool __result88__ = (c>=48&&c<=57);
    return __result88__;
}
static inline _Bool xiswalnum(unsigned int c){
    _Bool __result89__ = xiswalpha(c)||xiswdigit(c);
    return __result89__;
}
static inline _Bool xisalpha(char c){
_Bool result_82;
memset(&result_82, 0, sizeof(_Bool));
    result_82=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result90__ = result_82;
    return __result90__;
}
static inline _Bool xisblank(char c){
    _Bool __result91__ = c==32||c==9;
    return __result91__;
}
static inline _Bool xisdigit(char c){
    _Bool __result92__ = (c>=48&&c<=57);
    return __result92__;
}
static inline _Bool xisalnum(char c){
    _Bool __result93__ = xisalpha(c)||xisdigit(c);
    return __result93__;
}
static inline _Bool xisascii(char c){
_Bool result_83;
memset(&result_83, 0, sizeof(_Bool));
    result_83=(c>=32&&c<=126);
    _Bool __result94__ = result_83;
    return __result94__;
}
static inline _Bool xiswascii(unsigned int c){
_Bool result_84;
memset(&result_84, 0, sizeof(_Bool));
    result_84=(c>=32&&c<=126);
    _Bool __result95__ = result_84;
    return __result95__;
}
static inline char* stringp_read(char* file_name){
struct _IO_FILE* f_85;
void* right_value59;
void* right_value60;
char* result_86;
memset(&f_85, 0, sizeof(struct _IO_FILE*));
memset(&result_86, 0, sizeof(char*));
    f_85=fopen(file_name,"r");
    if(f_85==((void*)0)) {
        char* __result96__ = ((char*)(right_value59=__builtin_string("")));
        return __result96__;
    }
    result_86=(char*)come_increment_ref_count(((char*)(right_value60=FILEp_read(f_85))));
    right_value60 = come_decrement_ref_count(right_value60, 1, 0);
    FILEp_fclose(f_85);
    char* __result97__ = result_86;
    result_86 = come_decrement_ref_count(result_86, 0, 1);
    return __result97__;
}
static inline char* charp_read(char* file_name){
struct _IO_FILE* f_87;
void* right_value61;
void* right_value62;
char* result_88;
memset(&f_87, 0, sizeof(struct _IO_FILE*));
memset(&result_88, 0, sizeof(char*));
    f_87=fopen(file_name,"r");
    if(f_87==((void*)0)) {
        char* __result98__ = ((char*)(right_value61=__builtin_string("")));
        return __result98__;
    }
    result_88=(char*)come_increment_ref_count(((char*)(right_value62=FILEp_read(f_87))));
    right_value62 = come_decrement_ref_count(right_value62, 1, 0);
    FILEp_fclose(f_87);
    char* __result99__ = result_88;
    result_88 = come_decrement_ref_count(result_88, 0, 1);
    return __result99__;
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
static inline char* stringp_to_string(char* self){
void* right_value63;
    char* __result100__ = ((char*)(right_value63=__builtin_string(self)));
    return __result100__;
}
static inline struct list$1charph* FILEp_readlines(struct _IO_FILE* f){
void* right_value67;
void* right_value68;
struct list$1charph* result_91;
char buf_92[8192];
void* right_value69;
memset(&result_91, 0, sizeof(struct list$1charph*));
memset(&buf_92, 0, sizeof(char));
    result_91=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value67=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charphp_finalize,right_value68,0, 1, 0);
    while(1) {
        if(fgets(buf_92,8192,f)==((void*)0)) {
            break;
        }
        list$1charphp_push_back(result_91,(char*)come_increment_ref_count(((char*)(right_value69=__builtin_string(buf_92)))));
        right_value69 = come_decrement_ref_count(right_value69, 1, 0);
    }
    struct list$1charph* __result102__ = result_91;
    call_finalizer(list$1charphp_finalize,result_91,0, 0, 1);
    return __result102__;
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
    void* __result7__ = mem_0+sizeof(int)+sizeof(long);
    return __result7__;
}

static void* come_increment_ref_count(void* mem){
int* ref_count_3;
memset(&ref_count_3, 0, sizeof(int*));
    if(mem==((void*)0)) {
        void* __result8__ = mem;
        return __result8__;
    }
    ref_count_3=(int*)((char*)mem-sizeof(int)-sizeof(long));
    (*ref_count_3)++;
    void* __result9__ = mem;
    return __result9__;
}

static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free){
int* ref_count_4;
int count_5;
memset(&ref_count_4, 0, sizeof(int*));
memset(&count_5, 0, sizeof(int));
    if(mem==((void*)0)) {
        void* __result10__ = ((void*)0);
        return __result10__;
    }
    ref_count_4=(int*)((char*)mem-sizeof(int)-sizeof(long));
    if(!no_decrement) {
        (*ref_count_4)--;
    }
    count_5=*ref_count_4;
    if(!no_free&&count_5<=0) {
        ncfree(ref_count_4);
        void* __result11__ = ((void*)0);
        return __result11__;
    }
    void* __result12__ = mem;
    return __result12__;
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
    void* __result13__ = result_11;
    return __result13__;
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
        void* __result14__ = ((void*)0);
        return __result14__;
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
    void* __result15__ = (char*)ret_15+sizeof(int)+sizeof(long);
    return __result15__;
}











































static void va_listp_finalize(va_list* self){
}



static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1charph* __result49__ = self;
        call_finalizer(list$1charphp_finalize,self,0, 0, 1);
        return __result49__;
}

static void list$1charphp_finalize(struct list$1charph* self){
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

static void list$1charphp_push_back(struct list$1charph* self, char* item){
void* right_value16;
struct list_item$1charph* litem_48;
void* right_value17;
struct list_item$1charph* litem_49;
void* right_value18;
struct list_item$1charph* litem_50;
memset(&litem_48, 0, sizeof(struct list_item$1charph*));
memset(&litem_49, 0, sizeof(struct list_item$1charph*));
memset(&litem_50, 0, sizeof(struct list_item$1charph*));
            if(self->len==0) {
                litem_48=((struct list_item$1charph*)(right_value16=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_48->prev=((void*)0);
                litem_48->next=((void*)0);
                if(litem_48->item) {(char*)come_decrement_ref_count(litem_48->item,0,0); }
                litem_48->item=(char*)come_increment_ref_count(item);
                self->tail=litem_48;
                self->head=litem_48;
            }
            else if(self->len==1) {
                litem_49=((struct list_item$1charph*)(right_value17=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                litem_49->prev=self->head;
                litem_49->next=((void*)0);
                if(litem_49->item) {(char*)come_decrement_ref_count(litem_49->item,0,0); }
                litem_49->item=(char*)come_increment_ref_count(item);
                self->tail=litem_49;
                self->head->next=litem_49;
            }
            else {
                litem_50=((struct list_item$1charph*)(right_value18=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
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







static void FILEpp_finalize(struct _IO_FILE* self){
}































int* funHeap(int x, int y){
void* right_value78;
int* result_105;
memset(&result_105, 0, sizeof(int*));
    result_105=(int*)come_increment_ref_count(((int*)(right_value78=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value78 = come_decrement_ref_count(right_value78, 1, 0);
    *result_105=x+y;
    int* __result109__ = result_105;
    result_105 = come_decrement_ref_count(result_105, 0, 1);
    return __result109__;
}

int funHeap2(int* x, int* y){
    int __result110__ = *x+*y;
    x = come_decrement_ref_count(x, 0, 1);
    y = come_decrement_ref_count(y, 0, 1);
    return __result110__;
}

int intp_fun(int* self){
    int __result111__ = *self;
    return __result111__;
}

struct sDataA* sDataAp_initialize(struct sDataA* self, int a, int b){
    self->a=a;
    self->b=b;
    struct sDataA* __result112__ = self;
    call_finalizer(sDataAp_finalize,self,0, 0, 1);
    return __result112__;
}

static void sDataAp_finalize(struct sDataA* self){
}

int sDataAp_fun(struct sDataA* self, int a, int b){
    int __result113__ = self->a+self->b+a+b;
    return __result113__;
}

void fun_default_parametor(int x, int y){
    xassert("default parametor",x==1&&y==2);
}

struct tuple2$2intbool* fun_exception(int x, int y){
void* right_value79;
struct tuple2$2intbool* result_tuplea1_106;
memset(&result_tuplea1_106, 0, sizeof(struct tuple2$2intbool*));
    result_tuplea1_106=(struct tuple2$2intbool*)come_increment_ref_count(((struct tuple2$2intbool*)(right_value79=(struct tuple2$2intbool*)come_calloc(1, sizeof(struct tuple2$2intbool)*(1)))));
    call_finalizer(tuple2$2intboolp_finalize,right_value79,0, 1, 0);
    result_tuplea1_106->v1=x+y;
    result_tuplea1_106->v2=(_Bool)1;
    struct tuple2$2intbool* __result114__ = result_tuplea1_106;
    call_finalizer(tuple2$2intboolp_finalize,result_tuplea1_106,0, 0, 1);
    return __result114__;
}

static void tuple2$2intboolp_finalize(struct tuple2$2intbool* self){
}

int main(){
void* right_value80;
char* a_107;
char* p_108;
void* p2_109;
int count_110;
int size2_111;
char* mem2_112;
int b_113;
int* a_114;
int a2_115;
int b_116;
int n_117;
void* right_value81;
char* ax_118;
void* right_value82;
char* a_119;
char* b_120;
struct sData data_121;
void* right_value83;
char* str_122;
void* right_value84;
struct sData* data_123;
void* right_value85;
void* right_value86;
void* right_value87;
int* axyz_124;
void* right_value88;
int* xxx_125;
void* right_value89;
int* yyy_126;
void* right_value90;
int* zzz_127;
void* right_value91;
int bzyz_128;
int* azyz_129;
int n_130;
struct __current_stack1__ __current_stack1__;
void* right_value92;
void* right_value93;
struct list$1charph* liX_131;
void* right_value94;
void* right_value95;
void* right_value96;
char* it_133;
void* right_value97;
void* right_value98;
struct list$1int* liX2_137;
int it_142;
int aX_144;
struct __current_stack2__ __current_stack2__;
int aXYZY_148;
void* right_value102;
void* right_value103;
struct list$1charph* li_149;
void* right_value104;
void* right_value105;
void* right_value106;
char* it_150;
void* right_value107;
void* right_value108;
struct list$1int* li2_151;
int it_152;
int aXL_153;
struct __current_stack3__ __current_stack3__;
void* right_value115;
void* right_value116;
void* right_value117;
struct list$1charph* li3_184;
void* right_value118;
void* right_value119;
void* right_value120;
void* right_value121;
void* right_value122;
void* right_value123;
struct list$1int* li4_187;
void* right_value124;
void* right_value125;
struct list$1int* li5_188;
void* right_value126;
void* right_value127;
struct list$1int* li6_193;
void* right_value130;
int* axyzX_197;
void* right_value131;
void* right_value132;
void* right_value133;
void* right_value134;
void* right_value135;
char* strXYXY_198;
void* right_value136;
void* right_value137;
struct list$1int* liZ_199;
struct __current_stack4__ __current_stack4__;
void* right_value138;
void* right_value139;
struct list$1int* liZ2_203;
int __list_values1___204[3];
void* right_value140;
void* right_value141;
int __list_values2___206[3];
void* right_value142;
void* right_value143;
int __list_values3___207[5];
void* right_value144;
void* right_value145;
struct __current_stack5__ __current_stack5__;
char* __map_keys1___208[2];
int __map_element1___209[2];
void* right_value157;
void* right_value158;
char* __map_keys2___240[2];
int __map_element2___241[2];
void* right_value159;
void* right_value160;
char* __map_keys3___252[2];
int __map_element3___253[2];
void* right_value161;
void* right_value162;
struct map$2charpint* m1_254;
struct map$2charpint* m2_265;
void* right_value170;
void* right_value171;
struct tuple1$1int* tt1_266;
memset(&a_107, 0, sizeof(char*));
memset(&p_108, 0, sizeof(char*));
memset(&p2_109, 0, sizeof(void*));
memset(&count_110, 0, sizeof(int));
memset(&size2_111, 0, sizeof(int));
memset(&mem2_112, 0, sizeof(char*));
memset(&b_113, 0, sizeof(int));
memset(&a_114, 0, sizeof(int*));
memset(&a2_115, 0, sizeof(int));
memset(&b_116, 0, sizeof(int));
memset(&n_117, 0, sizeof(int));
memset(&ax_118, 0, sizeof(char*));
memset(&a_119, 0, sizeof(char*));
memset(&b_120, 0, sizeof(char*));
memset(&data_121, 0, sizeof(struct sData));
memset(&str_122, 0, sizeof(char*));
memset(&data_123, 0, sizeof(struct sData*));
memset(&axyz_124, 0, sizeof(int*));
memset(&xxx_125, 0, sizeof(int*));
memset(&yyy_126, 0, sizeof(int*));
memset(&zzz_127, 0, sizeof(int*));
memset(&bzyz_128, 0, sizeof(int));
memset(&azyz_129, 0, sizeof(int*));
memset(&n_130, 0, sizeof(int));
memset(&liX_131, 0, sizeof(struct list$1charph*));
memset(&it_133, 0, sizeof(char*));
memset(&liX2_137, 0, sizeof(struct list$1int*));
memset(&it_142, 0, sizeof(int));
memset(&aX_144, 0, sizeof(int));
memset(&aXYZY_148, 0, sizeof(int));
memset(&li_149, 0, sizeof(struct list$1charph*));
memset(&it_150, 0, sizeof(char*));
memset(&li2_151, 0, sizeof(struct list$1int*));
memset(&it_152, 0, sizeof(int));
memset(&aXL_153, 0, sizeof(int));
memset(&li3_184, 0, sizeof(struct list$1charph*));
memset(&li4_187, 0, sizeof(struct list$1int*));
memset(&li5_188, 0, sizeof(struct list$1int*));
memset(&li6_193, 0, sizeof(struct list$1int*));
memset(&axyzX_197, 0, sizeof(int*));
memset(&strXYXY_198, 0, sizeof(char*));
memset(&liZ_199, 0, sizeof(struct list$1int*));
memset(&liZ2_203, 0, sizeof(struct list$1int*));
memset(&m1_254, 0, sizeof(struct map$2charpint*));
memset(&m2_265, 0, sizeof(struct map$2charpint*));
memset(&tt1_266, 0, sizeof(struct tuple1$1int*));
    if(1) {
        a_107=(char*)come_increment_ref_count(((char**)(right_value80=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
        right_value80 = come_decrement_ref_count(right_value80, 1, 0);
        a_107 = come_decrement_ref_count(a_107, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_108="ABC";
    p2_109="ABC";
    printf("%s\n",(char*)p2_109);
    printf("%c\n",*p_108);
    count_110=0;
    size2_111=1;
    mem2_112=calloc(1,sizeof(int)+sizeof(long)+count_110*size2_111);
    free(mem2_112);
    a_114=&b_113;
    (*a_114)=123;
    a2_115=123;
    if((_Bool)1) {
        b_116=234;
        n_117=0;
        while(n_117<3) {
            printf("a %d\n",a2_115);
            printf("b %d\n",b_116);
            n_117++;
        }
    }
    ax_118=(char*)come_increment_ref_count(((char**)(right_value81=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
    right_value81 = come_decrement_ref_count(right_value81, 1, 0);
    if(1) {
        a_119=(char*)come_increment_ref_count(((char**)(right_value82=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
        right_value82 = come_decrement_ref_count(right_value82, 1, 0);
        b_120=(char*)come_increment_ref_count(a_119);
        if(data_121.a) {(char*)come_decrement_ref_count(data_121.a,0,0); }
        data_121.a=(char*)come_increment_ref_count(a_119);
        a_119 = come_decrement_ref_count(a_119, 0, 0);
        b_120 = come_decrement_ref_count(b_120, 0, 0);
        call_finalizer(sDatap_finalize,(&data_121),1, 0, 0);
    }
    str_122=(char*)come_increment_ref_count(((char**)(right_value83=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
    right_value83 = come_decrement_ref_count(right_value83, 1, 0);
    strncpy(str_122,"ABC",128);
    data_123=(struct sData*)come_increment_ref_count(((struct sData*)(right_value84=(struct sData*)come_calloc(1, sizeof(struct sData)*(1)))));
    call_finalizer(sDatap_finalize,right_value84,0, 1, 0);
    if(data_123->a) {(char*)come_decrement_ref_count(data_123->a,0,0); }
    data_123->a=(char*)come_increment_ref_count(str_122);
    puts(data_123->a);
    ((int*)(right_value85=funHeap(7,7)));
    right_value85 = come_decrement_ref_count(right_value85, 1, 0);
    xassert("right value test",*((int*)(right_value86=funHeap(3,4)))==7);
    right_value86 = come_decrement_ref_count(right_value86, 1, 0);
    axyz_124=(int*)come_increment_ref_count(((int*)(right_value87=funHeap(1,2))));
    right_value87 = come_decrement_ref_count(right_value87, 1, 0);
    xassert("variable test",*axyz_124==3);
    xxx_125=(int*)come_increment_ref_count(((int*)(right_value88=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value88 = come_decrement_ref_count(right_value88, 1, 0);
    *xxx_125=1;
    yyy_126=(int*)come_increment_ref_count(((int*)(right_value89=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value89 = come_decrement_ref_count(right_value89, 1, 0);
    *yyy_126=2;
    xassert("heap",funHeap2((int*)come_increment_ref_count(xxx_125),(int*)come_increment_ref_count(yyy_126))==3);
    zzz_127=(int*)come_increment_ref_count(((int*)(right_value90=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value90 = come_decrement_ref_count(right_value90, 1, 0);
    ((int*)(right_value91=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value91 = come_decrement_ref_count(right_value91, 1, 0);
    bzyz_128=123;
    azyz_129=&bzyz_128;
    xassert("impl",intp_fun(azyz_129)==123);
    n_130=0;
    __current_stack1__.p_108 = &p_108;
    __current_stack1__.p2_109 = &p2_109;
    __current_stack1__.count_110 = &count_110;
    __current_stack1__.size2_111 = &size2_111;
    __current_stack1__.mem2_112 = &mem2_112;
    __current_stack1__.b_113 = &b_113;
    __current_stack1__.a_114 = &a_114;
    __current_stack1__.a2_115 = &a2_115;
    __current_stack1__.ax_118 = &ax_118;
    __current_stack1__.str_122 = &str_122;
    __current_stack1__.data_123 = &data_123;
    __current_stack1__.axyz_124 = &axyz_124;
    __current_stack1__.xxx_125 = &xxx_125;
    __current_stack1__.yyy_126 = &yyy_126;
    __current_stack1__.zzz_127 = &zzz_127;
    __current_stack1__.bzyz_128 = &bzyz_128;
    __current_stack1__.azyz_129 = &azyz_129;
    __current_stack1__.n_130 = &n_130;
    int_times(3,&__current_stack1__,method_block1_code2HelloWorld2c);
    liX_131=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value93=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value92=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charphp_finalize,right_value93,0, 1, 0);
    list$1charphp_push_back(liX_131,(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string("ABC")))));
    right_value94 = come_decrement_ref_count(right_value94, 1, 0);
    list$1charphp_push_back(liX_131,(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string("DEF")))));
    right_value95 = come_decrement_ref_count(right_value95, 1, 0);
    list$1charphp_push_back(liX_131,(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string("GHI")))));
    right_value96 = come_decrement_ref_count(right_value96, 1, 0);
    for(
    it_133=list$1charphp_begin((liX_131));
    !list$1charphp_end((liX_131));
    it_133=list$1charphp_next((liX_131))
    ){
        printf("%s\n",it_133);
    }
    liX2_137=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value98=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value97=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value98,0, 1, 0);
    list$1intp_push_back(liX2_137,1);
    list$1intp_push_back(liX2_137,2);
    list$1intp_push_back(liX2_137,3);
    for(
    it_142=list$1intp_begin((liX2_137));
    !list$1intp_end((liX2_137));
    it_142=list$1intp_next((liX2_137))
    ){
        printf("%d\n",it_142);
    }
    aX_144=123;
    __current_stack2__.p_108 = &p_108;
    __current_stack2__.p2_109 = &p2_109;
    __current_stack2__.count_110 = &count_110;
    __current_stack2__.size2_111 = &size2_111;
    __current_stack2__.mem2_112 = &mem2_112;
    __current_stack2__.b_113 = &b_113;
    __current_stack2__.a_114 = &a_114;
    __current_stack2__.a2_115 = &a2_115;
    __current_stack2__.ax_118 = &ax_118;
    __current_stack2__.str_122 = &str_122;
    __current_stack2__.data_123 = &data_123;
    __current_stack2__.axyz_124 = &axyz_124;
    __current_stack2__.xxx_125 = &xxx_125;
    __current_stack2__.yyy_126 = &yyy_126;
    __current_stack2__.zzz_127 = &zzz_127;
    __current_stack2__.bzyz_128 = &bzyz_128;
    __current_stack2__.azyz_129 = &azyz_129;
    __current_stack2__.n_130 = &n_130;
    __current_stack2__.liX_131 = &liX_131;
    __current_stack2__.liX2_137 = &liX2_137;
    __current_stack2__.aX_144 = &aX_144;
    list$1intp_each(liX2_137,&__current_stack2__,method_block2_code2HelloWorld2c);
    xassert("method_block test",aX_144==2);
    xassert("var initialize test",aXYZY_148==0);
    li_149=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charphp_finalize,right_value103,0, 1, 0);
    list$1charphp_push_back(li_149,(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string("ABC")))));
    right_value104 = come_decrement_ref_count(right_value104, 1, 0);
    list$1charphp_push_back(li_149,(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string("DEF")))));
    right_value105 = come_decrement_ref_count(right_value105, 1, 0);
    list$1charphp_push_back(li_149,(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string("GHI")))));
    right_value106 = come_decrement_ref_count(right_value106, 1, 0);
    for(
    it_150=list$1charphp_begin((li_149));
    !list$1charphp_end((li_149));
    it_150=list$1charphp_next((li_149))
    ){
        printf("%s\n",it_150);
    }
    li2_151=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value108=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value107=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value108,0, 1, 0);
    list$1intp_push_back(li2_151,1);
    list$1intp_push_back(li2_151,2);
    list$1intp_push_back(li2_151,3);
    for(
    it_152=list$1intp_begin((li2_151));
    !list$1intp_end((li2_151));
    it_152=list$1intp_next((li2_151))
    ){
        printf("%d\n",it_152);
    }
    aXL_153=123;
    __current_stack3__.p_108 = &p_108;
    __current_stack3__.p2_109 = &p2_109;
    __current_stack3__.count_110 = &count_110;
    __current_stack3__.size2_111 = &size2_111;
    __current_stack3__.mem2_112 = &mem2_112;
    __current_stack3__.b_113 = &b_113;
    __current_stack3__.a_114 = &a_114;
    __current_stack3__.a2_115 = &a2_115;
    __current_stack3__.ax_118 = &ax_118;
    __current_stack3__.str_122 = &str_122;
    __current_stack3__.data_123 = &data_123;
    __current_stack3__.axyz_124 = &axyz_124;
    __current_stack3__.xxx_125 = &xxx_125;
    __current_stack3__.yyy_126 = &yyy_126;
    __current_stack3__.zzz_127 = &zzz_127;
    __current_stack3__.bzyz_128 = &bzyz_128;
    __current_stack3__.azyz_129 = &azyz_129;
    __current_stack3__.n_130 = &n_130;
    __current_stack3__.liX_131 = &liX_131;
    __current_stack3__.liX2_137 = &liX2_137;
    __current_stack3__.aX_144 = &aX_144;
    __current_stack3__.aXYZY_148 = &aXYZY_148;
    __current_stack3__.li_149 = &li_149;
    __current_stack3__.li2_151 = &li2_151;
    __current_stack3__.aXL_153 = &aXL_153;
    list$1intp_each(li2_151,&__current_stack3__,method_block3_code2HelloWorld2c);
    xassert("var of method block",aXL_153==2);
    xassert("list::item",list$1intp_item(li2_151,0,-1)==1);
    list$1intp_insert(li2_151,1,5);
    xassert("list::insert",list$1intp_item(li2_151,0,-1)==1&&list$1intp_item(li2_151,1,-1)==5&&list$1intp_item(li2_151,2,-1)==2&&list$1intp_item(li2_151,3,-1)==3);
    list$1charphp_insert(li_149,1,(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string("GGG")))));
    right_value115 = come_decrement_ref_count(right_value115, 1, 0);
    xassert("list::insert",strcmp(list$1charphp_item(li_149,0,-1),"ABC")==0&&strcmp(list$1charphp_item(li_149,1,-1),"GGG")==0&&strcmp(list$1charphp_item(li_149,2,-1),"DEF")==0&&strcmp(list$1charphp_item(li_149,3,-1),"GHI")==0);
    list$1charphp_reset(li_149);
    xassert("list::reset",list$1charphp_length(li_149)==0);
    list$1intp_delete(li2_151,0,1);
    xassert("list::delete",list$1intp_item(li2_151,0,-1)==5&&list$1intp_item(li2_151,1,-1)==2&&list$1intp_item(li2_151,2,-1)==3);
    li3_184=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value117=list$1charphp_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charphp_finalize,right_value117,0, 1, 0);
    list$1charphp_push_back(li3_184,(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string("AAA")))));
    right_value118 = come_decrement_ref_count(right_value118, 1, 0);
    list$1charphp_push_back(li3_184,(char*)come_increment_ref_count(((char*)(right_value119=__builtin_string("BBB")))));
    right_value119 = come_decrement_ref_count(right_value119, 1, 0);
    list$1charphp_push_back(li3_184,(char*)come_increment_ref_count(((char*)(right_value120=__builtin_string("CCC")))));
    right_value120 = come_decrement_ref_count(right_value120, 1, 0);
    list$1charphp_replace(li3_184,0,(char*)come_increment_ref_count(((char*)(right_value121=__builtin_string("ABC")))));
    right_value121 = come_decrement_ref_count(right_value121, 1, 0);
    xassert("list::replace",strcmp(list$1charphp_item(li3_184,0,((void*)0)),"ABC")==0&&strcmp(list$1charphp_item(li3_184,1,((void*)0)),"BBB")==0&&strcmp(list$1charphp_item(li3_184,2,((void*)0)),"CCC")==0);
    li4_187=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value123=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value122=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value123,0, 1, 0);
    list$1intp_push_back(li4_187,1);
    list$1intp_push_back(li4_187,3);
    list$1intp_push_back(li4_187,5);
    li5_188=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value125=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value124=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value125,0, 1, 0);
    list$1intp_push_back(li5_188,1);
    list$1intp_push_back(li5_188,3);
    list$1intp_push_back(li5_188,5);
    xassert("list::equals",list$1intp_equals(li4_187,li5_188));
    xassert("list::find",list$1intp_find(li4_187,5,-1)==2);
    li6_193=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value127=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value126=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value127,0, 1, 0);
    list$1intp_push_back(li6_193,3);
    list$1intp_push_back(li6_193,5);
    xassert("list::sublist",list$1intp_equals(((struct list$1int*)(right_value130=list$1intp_sublist(li5_188,1,-1))),li6_193));
    call_finalizer(list$1intp_finalize,right_value130,0, 1, 0);
    if(axyzX_197) {(int*)come_decrement_ref_count(axyzX_197,0,0); }
    axyzX_197=(int*)come_increment_ref_count(((int*)(right_value131=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value131 = come_decrement_ref_count(right_value131, 1, 0);
    if(axyzX_197) {(int*)come_decrement_ref_count(axyzX_197,0,0); }
    axyzX_197=(int*)come_increment_ref_count(((int*)(right_value132=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value132 = come_decrement_ref_count(right_value132, 1, 0);
    xassert("operator equals",stringp_operator_equals(((char*)(right_value133=__builtin_string("AAA"))),((char*)(right_value134=__builtin_string("AAA")))));
    right_value133 = come_decrement_ref_count(right_value133, 1, 0);
    right_value134 = come_decrement_ref_count(right_value134, 1, 0);
    xassert("operator test",stringp_operator_equals(((char*)(right_value135=charp_operator_add("AAA","BBB"))),"AAABBB"));
    right_value135 = come_decrement_ref_count(right_value135, 1, 0);
    strXYXY_198="ABC";
    xassert("operator test",*(strXYXY_198+1)==66);
    liZ_199=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value137=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value136=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value137,0, 1, 0);
    list$1intp_push_back(liZ_199,1);
    list$1intp_push_back(liZ_199,2);
    list$1intp_push_back(liZ_199,3);
    __current_stack4__.p_108 = &p_108;
    __current_stack4__.p2_109 = &p2_109;
    __current_stack4__.count_110 = &count_110;
    __current_stack4__.size2_111 = &size2_111;
    __current_stack4__.mem2_112 = &mem2_112;
    __current_stack4__.b_113 = &b_113;
    __current_stack4__.a_114 = &a_114;
    __current_stack4__.a2_115 = &a2_115;
    __current_stack4__.ax_118 = &ax_118;
    __current_stack4__.str_122 = &str_122;
    __current_stack4__.data_123 = &data_123;
    __current_stack4__.axyz_124 = &axyz_124;
    __current_stack4__.xxx_125 = &xxx_125;
    __current_stack4__.yyy_126 = &yyy_126;
    __current_stack4__.zzz_127 = &zzz_127;
    __current_stack4__.bzyz_128 = &bzyz_128;
    __current_stack4__.azyz_129 = &azyz_129;
    __current_stack4__.n_130 = &n_130;
    __current_stack4__.liX_131 = &liX_131;
    __current_stack4__.liX2_137 = &liX2_137;
    __current_stack4__.aX_144 = &aX_144;
    __current_stack4__.aXYZY_148 = &aXYZY_148;
    __current_stack4__.li_149 = &li_149;
    __current_stack4__.li2_151 = &li2_151;
    __current_stack4__.aXL_153 = &aXL_153;
    __current_stack4__.li3_184 = &li3_184;
    __current_stack4__.li4_187 = &li4_187;
    __current_stack4__.li5_188 = &li5_188;
    __current_stack4__.li6_193 = &li6_193;
    __current_stack4__.axyzX_197 = &axyzX_197;
    __current_stack4__.strXYXY_198 = &strXYXY_198;
    __current_stack4__.liZ_199 = &liZ_199;
    list$1intp_each(liZ_199,&__current_stack4__,method_block4_code2HelloWorld2c);
    list$1intp_operator_store_element(liZ_199,0,777);
    printf("liZ[0] %d\n",list$1intp_operator_load_element(liZ_199,0));
    liZ2_203=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value139=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value138=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1intp_finalize,right_value139,0, 1, 0);
    list$1intp_push_back(liZ2_203,777);
    list$1intp_push_back(liZ2_203,2);
    list$1intp_push_back(liZ2_203,3);
    xassert("list equals",list$1intp_operator_equals(liZ_199,liZ2_203));
    {__list_values1___204[0]=1;
__list_values1___204[1]=2;
__list_values1___204[2]=3;
}    {__list_values2___206[0]=1;
__list_values2___206[1]=2;
__list_values2___206[2]=3;
}    xassert("list equals test",list$1intp_operator_equals(((struct list$1int*)(right_value141=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value140=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),3,__list_values1___204))),((struct list$1int*)(right_value143=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value142=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),3,__list_values2___206)))));
    call_finalizer(list$1intp_finalize,right_value141,0, 1, 0);
    call_finalizer(list$1intp_finalize,right_value143,0, 1, 0);
    {__list_values3___207[0]=1;
__list_values3___207[1]=2;
__list_values3___207[2]=3;
__list_values3___207[3]=4;
__list_values3___207[4]=5;
}    __current_stack5__.p_108 = &p_108;
    __current_stack5__.p2_109 = &p2_109;
    __current_stack5__.count_110 = &count_110;
    __current_stack5__.size2_111 = &size2_111;
    __current_stack5__.mem2_112 = &mem2_112;
    __current_stack5__.b_113 = &b_113;
    __current_stack5__.a_114 = &a_114;
    __current_stack5__.a2_115 = &a2_115;
    __current_stack5__.ax_118 = &ax_118;
    __current_stack5__.str_122 = &str_122;
    __current_stack5__.data_123 = &data_123;
    __current_stack5__.axyz_124 = &axyz_124;
    __current_stack5__.xxx_125 = &xxx_125;
    __current_stack5__.yyy_126 = &yyy_126;
    __current_stack5__.zzz_127 = &zzz_127;
    __current_stack5__.bzyz_128 = &bzyz_128;
    __current_stack5__.azyz_129 = &azyz_129;
    __current_stack5__.n_130 = &n_130;
    __current_stack5__.liX_131 = &liX_131;
    __current_stack5__.liX2_137 = &liX2_137;
    __current_stack5__.aX_144 = &aX_144;
    __current_stack5__.aXYZY_148 = &aXYZY_148;
    __current_stack5__.li_149 = &li_149;
    __current_stack5__.li2_151 = &li2_151;
    __current_stack5__.aXL_153 = &aXL_153;
    __current_stack5__.li3_184 = &li3_184;
    __current_stack5__.li4_187 = &li4_187;
    __current_stack5__.li5_188 = &li5_188;
    __current_stack5__.li6_193 = &li6_193;
    __current_stack5__.axyzX_197 = &axyzX_197;
    __current_stack5__.strXYXY_198 = &strXYXY_198;
    __current_stack5__.liZ_199 = &liZ_199;
    __current_stack5__.liZ2_203 = &liZ2_203;
    list$1intp_each(((struct list$1int*)(right_value145=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value144=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),5,__list_values3___207))),&__current_stack5__,method_block5_code2HelloWorld2c);
    call_finalizer(list$1intp_finalize,right_value145,0, 1, 0);
    {__map_keys1___208[0]="AAA";
__map_element1___209[0]=1;
__map_keys1___208[1]="BBB";
__map_element1___209[1]=2;
}    {__map_keys2___240[0]="AAA";
__map_element2___241[0]=1;
__map_keys2___240[1]="BBB";
__map_element2___241[1]=2;
}    xassert("map equals",map$2charpintp_operator_equals(((struct map$2charpint*)(right_value158=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value157=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys1___208,__map_element1___209))),((struct map$2charpint*)(right_value160=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value159=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys2___240,__map_element2___241)))));
    call_finalizer(map$2charpintp_finalize,right_value158,0, 1, 0);
    call_finalizer(map$2charpintp_finalize,right_value160,0, 1, 0);
    {__map_keys3___252[0]="AAA";
__map_element3___253[0]=1;
__map_keys3___252[1]="BBB";
__map_element3___253[1]=2;
}    m1_254=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value162=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value161=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys3___252,__map_element3___253))));
    call_finalizer(map$2charpintp_finalize,right_value162,0, 1, 0);
    printf("%d %d\n",map$2charpintp_operator_load_element(m1_254,"AAA"),map$2charpintp_operator_load_element(m1_254,"BBB"));
    m2_265=(struct map$2charpint*)come_increment_ref_count(map$2charpintp_clone(m1_254));
    printf("%d %d\n",map$2charpintp_operator_load_element(m2_265,"AAA"),map$2charpintp_operator_load_element(m2_265,"BBB"));
    xassert("map clone",map$2charpintp_operator_equals(m1_254,m2_265));
    tt1_266=(struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value171=tuple1$1intp_initialize((struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value170=(struct tuple1$1int*)come_calloc(1, sizeof(struct tuple1$1int)*(1))))),1))));
    call_finalizer(tuple1$1intp_finalize,right_value171,0, 1, 0);
    tt1_266->v1=111;
    printf("%d\n",tt1_266->v1);
    int __result166__ = 0;
    ax_118 = come_decrement_ref_count(ax_118, 0, 0);
    str_122 = come_decrement_ref_count(str_122, 0, 0);
    call_finalizer(sDatap_finalize,data_123,0, 0, 0);
    axyz_124 = come_decrement_ref_count(axyz_124, 0, 0);
    xxx_125 = come_decrement_ref_count(xxx_125, 0, 0);
    yyy_126 = come_decrement_ref_count(yyy_126, 0, 0);
    zzz_127 = come_decrement_ref_count(zzz_127, 0, 0);
    call_finalizer(list$1charphp_finalize,liX_131,0, 0, 0);
    call_finalizer(list$1intp_finalize,liX2_137,0, 0, 0);
    call_finalizer(list$1charphp_finalize,li_149,0, 0, 0);
    call_finalizer(list$1intp_finalize,li2_151,0, 0, 0);
    call_finalizer(list$1charphp_finalize,li3_184,0, 0, 0);
    call_finalizer(list$1intp_finalize,li4_187,0, 0, 0);
    call_finalizer(list$1intp_finalize,li5_188,0, 0, 0);
    call_finalizer(list$1intp_finalize,li6_193,0, 0, 0);
    axyzX_197 = come_decrement_ref_count(axyzX_197, 0, 0);
    call_finalizer(list$1intp_finalize,liZ_199,0, 0, 0);
    call_finalizer(list$1intp_finalize,liZ2_203,0, 0, 0);
    call_finalizer(map$2charpintp_finalize,m1_254,0, 0, 0);
    call_finalizer(map$2charpintp_finalize,m2_265,0, 0, 0);
    call_finalizer(tuple1$1intp_finalize,tt1_266,0, 0, 0);
    return __result166__;
}

static void sDatap_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1_code2HelloWorld2c(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_130)));
        (*(parent->n_130))++;
}

static char* list$1charphp_begin(struct list$1charph* self){
char* result_132;
memset(&result_132, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result115__ = self->it->item;
            return __result115__;
        }
        memset(&result_132,0,sizeof(char*));
        char* __result116__ = result_132;
        return __result116__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
        _Bool __result117__ = self->it==((void*)0);
        return __result117__;
}

static char* list$1charphp_next(struct list$1charph* self){
char* result_134;
memset(&result_134, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result118__ = self->it->item;
            return __result118__;
        }
        memset(&result_134,0,sizeof(char*));
        char* __result119__ = result_134;
        return __result119__;
}

static struct list$1int* list$1intp_initialize(struct list$1int* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1int* __result120__ = self;
        call_finalizer(list$1intp_finalize,self,0, 0, 1);
        return __result120__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_135;
struct list_item$1int* prev_it_136;
memset(&it_135, 0, sizeof(struct list_item$1int*));
memset(&prev_it_136, 0, sizeof(struct list_item$1int*));
            it_135=self->head;
            while(it_135!=((void*)0)) {
                if(0) {
                }
                prev_it_136=it_135;
                it_135=it_135->next;
                come_free_object(prev_it_136);
            }
}

static void list$1intp_push_back(struct list$1int* self, int item){
void* right_value99;
struct list_item$1int* litem_138;
void* right_value100;
struct list_item$1int* litem_139;
void* right_value101;
struct list_item$1int* litem_140;
memset(&litem_138, 0, sizeof(struct list_item$1int*));
memset(&litem_139, 0, sizeof(struct list_item$1int*));
memset(&litem_140, 0, sizeof(struct list_item$1int*));
        if(self->len==0) {
            litem_138=((struct list_item$1int*)(right_value99=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_138->prev=((void*)0);
            litem_138->next=((void*)0);
            litem_138->item=item;
            self->tail=litem_138;
            self->head=litem_138;
        }
        else if(self->len==1) {
            litem_139=((struct list_item$1int*)(right_value100=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_139->prev=self->head;
            litem_139->next=((void*)0);
            litem_139->item=item;
            self->tail=litem_139;
            self->head->next=litem_139;
        }
        else {
            litem_140=((struct list_item$1int*)(right_value101=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_140->prev=self->tail;
            litem_140->next=((void*)0);
            litem_140->item=item;
            self->tail->next=litem_140;
            self->tail=litem_140;
        }
        self->len++;
}

static int list$1intp_begin(struct list$1int* self){
int result_141;
memset(&result_141, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result121__ = self->it->item;
            return __result121__;
        }
        memset(&result_141,0,sizeof(int));
        int __result122__ = result_141;
        return __result122__;
}

static _Bool list$1intp_end(struct list$1int* self){
        _Bool __result123__ = self->it==((void*)0);
        return __result123__;
}

static int list$1intp_next(struct list$1int* self){
int result_143;
memset(&result_143, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result124__ = self->it->item;
            return __result124__;
        }
        memset(&result_143,0,sizeof(int));
        int __result125__ = result_143;
        return __result125__;
}

static void list$1intp_each(struct list$1int* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item$1int* it_145;
int i_146;
_Bool end_flag_147;
memset(&it_145, 0, sizeof(struct list_item$1int*));
memset(&i_146, 0, sizeof(int));
memset(&end_flag_147, 0, sizeof(_Bool));
        it_145=self->head;
        i_146=0;
        while(it_145!=((void*)0)) {
            end_flag_147=(_Bool)0;
            block(parent,it_145->item,i_146,&end_flag_147);
            if(end_flag_147==(_Bool)1) {
                break;
            }
            it_145=it_145->next;
            i_146++;
        }
}

void method_block2_code2HelloWorld2c(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_144)));
        (*(parent->aX_144))=2;
}

void method_block3_code2HelloWorld2c(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_153)));
        (*(parent->aXL_153))=2;
}

static int list$1intp_item(struct list$1int* self, int position, int default_value){
struct list_item$1int* it_154;
int i_155;
memset(&it_154, 0, sizeof(struct list_item$1int*));
memset(&i_155, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_154=self->head;
        i_155=0;
        while(it_154!=((void*)0)) {
            if(position==i_155) {
                int __result126__ = it_154->item;
                return __result126__;
            }
            it_154=it_154->next;
            i_155++;
        }
        int __result127__ = default_value;
        return __result127__;
}

static void list$1intp_insert(struct list$1int* self, int position, int item){
void* right_value109;
struct list_item$1int* litem_156;
void* right_value110;
struct list_item$1int* litem_157;
struct list_item$1int* it_158;
int i_159;
void* right_value111;
struct list_item$1int* litem_160;
memset(&litem_156, 0, sizeof(struct list_item$1int*));
memset(&litem_157, 0, sizeof(struct list_item$1int*));
memset(&it_158, 0, sizeof(struct list_item$1int*));
memset(&i_159, 0, sizeof(int));
memset(&litem_160, 0, sizeof(struct list_item$1int*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$1intp_push_back(self,item);
            return;
        }
        if(position==0) {
            litem_156=((struct list_item$1int*)(right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_156->prev=((void*)0);
            litem_156->next=self->head;
            litem_156->item=item;
            self->head->prev=litem_156;
            self->head=litem_156;
            self->len++;
        }
        else if(self->len==1) {
            litem_157=((struct list_item$1int*)(right_value110=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_157->prev=self->head;
            litem_157->next=self->tail;
            litem_157->item=item;
            self->tail->prev=litem_157;
            self->head->next=litem_157;
            self->len++;
        }
        else {
            it_158=self->head;
            i_159=0;
            while(it_158!=((void*)0)) {
                if(position==i_159) {
                    litem_160=((struct list_item$1int*)(right_value111=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
                    litem_160->prev=it_158->prev;
                    litem_160->next=it_158;
                    litem_160->item=item;
                    it_158->prev->next=litem_160;
                    it_158->prev=litem_160;
                    self->len++;
                }
                it_158=it_158->next;
                i_159++;
            }
        }
}

static void list$1charphp_insert(struct list$1charph* self, int position, char* item){
void* right_value112;
struct list_item$1charph* litem_161;
void* right_value113;
struct list_item$1charph* litem_162;
struct list_item$1charph* it_163;
int i_164;
void* right_value114;
struct list_item$1charph* litem_165;
memset(&litem_161, 0, sizeof(struct list_item$1charph*));
memset(&litem_162, 0, sizeof(struct list_item$1charph*));
memset(&it_163, 0, sizeof(struct list_item$1charph*));
memset(&i_164, 0, sizeof(int));
memset(&litem_165, 0, sizeof(struct list_item$1charph*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$1charphp_push_back(self,(char*)come_increment_ref_count(item));
            return;
        }
        if(position==0) {
            litem_161=((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_161->prev=((void*)0);
            litem_161->next=self->head;
            if(litem_161->item) {(char*)come_decrement_ref_count(litem_161->item,0,0); }
            litem_161->item=(char*)come_increment_ref_count(item);
            self->head->prev=litem_161;
            self->head=litem_161;
            self->len++;
        }
        else if(self->len==1) {
            litem_162=((struct list_item$1charph*)(right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_162->prev=self->head;
            litem_162->next=self->tail;
            if(litem_162->item) {(char*)come_decrement_ref_count(litem_162->item,0,0); }
            litem_162->item=(char*)come_increment_ref_count(item);
            self->tail->prev=litem_162;
            self->head->next=litem_162;
            self->len++;
        }
        else {
            it_163=self->head;
            i_164=0;
            while(it_163!=((void*)0)) {
                if(position==i_164) {
                    litem_165=((struct list_item$1charph*)(right_value114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_165->prev=it_163->prev;
                    litem_165->next=it_163;
                    if(litem_165->item) {(char*)come_decrement_ref_count(litem_165->item,0,0); }
                    litem_165->item=(char*)come_increment_ref_count(item);
                    it_163->prev->next=litem_165;
                    it_163->prev=litem_165;
                    self->len++;
                }
                it_163=it_163->next;
                i_164++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$1charphp_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_166;
int i_167;
memset(&it_166, 0, sizeof(struct list_item$1charph*));
memset(&i_167, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_166=self->head;
        i_167=0;
        while(it_166!=((void*)0)) {
            if(position==i_167) {
                char* __result128__ = it_166->item;
                return __result128__;
            }
            it_166=it_166->next;
            i_167++;
        }
        char* __result129__ = default_value;
        return __result129__;
}

static void list$1charphp_reset(struct list$1charph* self){
struct list_item$1charph* it_168;
struct list_item$1charph* prev_it_169;
memset(&it_168, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_169, 0, sizeof(struct list_item$1charph*));
        it_168=self->head;
        while(it_168!=((void*)0)) {
            prev_it_169=it_168;
            if(1) {
                it_168->item = come_decrement_ref_count(it_168->item, 0, 0);
            }
            it_168=it_168->next;
            call_finalizer(list_item$1charphp_finalize,prev_it_169,0, 0, 0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    self->item = come_decrement_ref_count(self->item, 0, 0);
                }
}

static int list$1charphp_length(struct list$1charph* self){
        int __result130__ = self->len;
        return __result130__;
}

static void list$1intp_delete(struct list$1int* self, int head, int tail){
int tmp_170;
struct list_item$1int* it_173;
int i_174;
struct list_item$1int* prev_it_175;
struct list_item$1int* it_176;
int i_177;
struct list_item$1int* prev_it_178;
struct list_item$1int* it_179;
struct list_item$1int* head_prev_it_180;
struct list_item$1int* tail_it_181;
int i_182;
struct list_item$1int* prev_it_183;
memset(&tmp_170, 0, sizeof(int));
memset(&it_173, 0, sizeof(struct list_item$1int*));
memset(&i_174, 0, sizeof(int));
memset(&prev_it_175, 0, sizeof(struct list_item$1int*));
memset(&it_176, 0, sizeof(struct list_item$1int*));
memset(&i_177, 0, sizeof(int));
memset(&prev_it_178, 0, sizeof(struct list_item$1int*));
memset(&it_179, 0, sizeof(struct list_item$1int*));
memset(&head_prev_it_180, 0, sizeof(struct list_item$1int*));
memset(&tail_it_181, 0, sizeof(struct list_item$1int*));
memset(&i_182, 0, sizeof(int));
memset(&prev_it_183, 0, sizeof(struct list_item$1int*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_170=tail;
            tail=head;
            head=tmp_170;
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
            list$1intp_reset(self);
        }
        else if(head==0) {
            it_173=self->head;
            i_174=0;
            while(it_173!=((void*)0)) {
                if(i_174<tail) {
                    prev_it_175=it_173;
                    it_173=it_173->next;
                    i_174++;
                    call_finalizer(list_item$1intp_finalize,prev_it_175,0, 0, 0);
                    self->len--;
                }
                else if(i_174==tail) {
                    self->head=it_173;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_173=it_173->next;
                    i_174++;
                }
            }
        }
        else if(tail==self->len) {
            it_176=self->head;
            i_177=0;
            while(it_176!=((void*)0)) {
                if(i_177==head) {
                    self->tail=it_176->prev;
                    self->tail->next=((void*)0);
                }
                if(i_177>=head) {
                    prev_it_178=it_176;
                    it_176=it_176->next;
                    i_177++;
                    call_finalizer(list_item$1intp_finalize,prev_it_178,0, 0, 0);
                    self->len--;
                }
                else {
                    it_176=it_176->next;
                    i_177++;
                }
            }
        }
        else {
            it_179=self->head;
            head_prev_it_180=((void*)0);
            tail_it_181=((void*)0);
            i_182=0;
            while(it_179!=((void*)0)) {
                if(i_182==head) {
                    head_prev_it_180=it_179->prev;
                }
                if(i_182==tail) {
                    tail_it_181=it_179;
                }
                if(i_182>=head&&i_182<tail) {
                    prev_it_183=it_179;
                    it_179=it_179->next;
                    i_182++;
                    call_finalizer(list_item$1intp_finalize,prev_it_183,0, 0, 0);
                    self->len--;
                }
                else {
                    it_179=it_179->next;
                    i_182++;
                }
            }
            if(head_prev_it_180!=((void*)0)) {
                head_prev_it_180->next=tail_it_181;
            }
            if(tail_it_181!=((void*)0)) {
                tail_it_181->prev=head_prev_it_180;
            }
        }
}

static void list$1intp_reset(struct list$1int* self){
struct list_item$1int* it_171;
struct list_item$1int* prev_it_172;
memset(&it_171, 0, sizeof(struct list_item$1int*));
memset(&prev_it_172, 0, sizeof(struct list_item$1int*));
                it_171=self->head;
                while(it_171!=((void*)0)) {
                    prev_it_172=it_171;
                    if(0) {
                    }
                    it_171=it_171->next;
                    call_finalizer(list_item$1intp_finalize,prev_it_172,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static void list$1charphp_replace(struct list$1charph* self, int position, char* item){
struct list_item$1charph* it_185;
int i_186;
memset(&it_185, 0, sizeof(struct list_item$1charph*));
memset(&i_186, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_185=self->head;
        i_186=0;
        while(it_185!=((void*)0)) {
            if(position==i_186) {
                if(it_185->item) {(char*)come_decrement_ref_count(it_185->item,0,0); }
                it_185->item=(char*)come_increment_ref_count(item);
                break;
            }
            it_185=it_185->next;
            i_186++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static _Bool list$1intp_equals(struct list$1int* left, struct list$1int* right){
struct list_item$1int* it_189;
struct list_item$1int* it2_190;
memset(&it_189, 0, sizeof(struct list_item$1int*));
memset(&it2_190, 0, sizeof(struct list_item$1int*));
        if(left->len!=right->len) {
            _Bool __result131__ = (_Bool)0;
            return __result131__;
        }
        it_189=left->head;
        it2_190=right->head;
        while(it_189!=((void*)0)) {
            if(!int_equals(it_189->item,it2_190->item)) {
                _Bool __result132__ = (_Bool)0;
                return __result132__;
            }
            it_189=it_189->next;
            it2_190=it2_190->next;
        }
        _Bool __result133__ = (_Bool)1;
        return __result133__;
}

static int list$1intp_find(struct list$1int* self, int item, int default_value){
int it2_191;
struct list_item$1int* it_192;
memset(&it2_191, 0, sizeof(int));
memset(&it_192, 0, sizeof(struct list_item$1int*));
        it2_191=0;
        it_192=self->head;
        while(it_192!=((void*)0)) {
            if(int_equals(it_192->item,item)) {
                int __result134__ = it2_191;
                return __result134__;
            }
            it2_191++;
            it_192=it_192->next;
        }
        int __result135__ = default_value;
        return __result135__;
}

static struct list$1int* list$1intp_sublist(struct list$1int* self, int begin, int tail){
void* right_value128;
void* right_value129;
struct list$1int* result_194;
struct list_item$1int* it_195;
int i_196;
memset(&result_194, 0, sizeof(struct list$1int*));
memset(&it_195, 0, sizeof(struct list_item$1int*));
memset(&i_196, 0, sizeof(int));
        result_194=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value129=list$1intp_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value128=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
        call_finalizer(list$1intp_finalize,right_value129,0, 1, 0);
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
        it_195=self->head;
        i_196=0;
        while(it_195!=((void*)0)) {
            if(i_196>=begin&&i_196<tail) {
                list$1intp_push_back(result_194,it_195->item);
            }
            it_195=it_195->next;
            i_196++;
        }
        struct list$1int* __result136__ = result_194;
        call_finalizer(list$1intp_finalize,result_194,0, 0, 1);
        return __result136__;
}

void method_block4_code2HelloWorld2c(struct __current_stack4__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static void list$1intp_operator_store_element(struct list$1int* self, int position, int item){
        list$1intp_replace(self,position,item);
}

static void list$1intp_replace(struct list$1int* self, int position, int item){
struct list_item$1int* it_200;
int i_201;
memset(&it_200, 0, sizeof(struct list_item$1int*));
memset(&i_201, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_200=self->head;
            i_201=0;
            while(it_200!=((void*)0)) {
                if(position==i_201) {
                    it_200->item=item;
                    break;
                }
                it_200=it_200->next;
                i_201++;
            }
}

static int list$1intp_operator_load_element(struct list$1int* self, int index){
int default_value_202;
memset(&default_value_202, 0, sizeof(int));
        memset(&default_value_202,0,sizeof(int));
        int __result137__ = list$1intp_item(self,index,default_value_202);
        return __result137__;
}

static _Bool list$1intp_operator_equals(struct list$1int* self, struct list$1int* right){
        _Bool __result138__ = list$1intp_equals(self,right);
        return __result138__;
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
int i_205;
memset(&i_205, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_205=0;
        i_205<num_value;
        i_205++
        ){
            list$1intp_push_back(self,values[i_205]);
        }
        struct list$1int* __result139__ = self;
        call_finalizer(list$1intp_finalize,self,0, 0, 1);
        return __result139__;
}

void method_block5_code2HelloWorld2c(struct __current_stack5__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static struct map$2charpint* map$2charpint_initialize_with_values(struct map$2charpint* self, int num_keys, char** keys, int* values){
void* right_value146;
void* right_value147;
void* right_value148;
int i_210;
void* right_value149;
void* right_value150;
int i_213;
memset(&i_210, 0, sizeof(int));
memset(&i_213, 0, sizeof(int));
        self->keys=((char***)(right_value146=(char***)come_calloc(1, sizeof(char**)*(1*(128)))));
        self->items=((int**)(right_value147=(int**)come_calloc(1, sizeof(int*)*(1*(128)))));
        self->item_existance=((_Bool**)(right_value148=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(128)))));
        for(
        i_210=0;
        i_210<128;
        i_210++
        ){
            self->item_existance[i_210]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        self->it=0;
        if(self->key_list) {(struct list$1charp*)come_decrement_ref_count(self->key_list,0,0); }
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value150=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value149=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
        call_finalizer(list$1charpp_finalize,right_value150,0, 1, 0);
        for(
        i_213=0;
        i_213<num_keys;
        i_213++
        ){
            map$2charpintp_insert(self,keys[i_213],values[i_213]);
        }
        struct map$2charpint* __result155__ = self;
        call_finalizer(map$2charpintp_finalize,self,0, 0, 1);
        return __result155__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1charp* __result140__ = self;
            call_finalizer(list$1charpp_finalize,self,0, 0, 1);
            return __result140__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_211;
struct list_item$1charp* prev_it_212;
memset(&it_211, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_212, 0, sizeof(struct list_item$1charp*));
                it_211=self->head;
                while(it_211!=((void*)0)) {
                    if(0) {
                        it_211->item = come_decrement_ref_count(it_211->item, 0, 0);
                    }
                    prev_it_212=it_211;
                    it_211=it_211->next;
                    come_free_object(prev_it_212);
                }
}

static void map$2charpintp_insert(struct map$2charpint* self, char* key, int item){
int hash_229;
int it_230;
_Bool same_key_exist_231;
char* it2_233;
memset(&hash_229, 0, sizeof(int));
memset(&it_230, 0, sizeof(int));
memset(&same_key_exist_231, 0, sizeof(_Bool));
memset(&it2_233, 0, sizeof(char*));
                if(self->len*2>=self->size) {
                    map$2charpintp_rehash(self);
                }
                hash_229=charp_get_hash_key(key)%self->size;
                it_230=hash_229;
                while((_Bool)1) {
                    if(self->item_existance[it_230]) {
                        if(charp_equals(self->keys[it_230],key)) {
                            if(0) {
                                self->keys[it_230] = come_decrement_ref_count(self->keys[it_230], 0, 0);
                                self->keys[it_230]=key;
                            }
                            else {
                                self->keys[it_230]=key;
                            }
                            if(0) {
                                self->items[it_230]=item;
                            }
                            else {
                                self->items[it_230]=item;
                            }
                            break;
                        }
                        it_230++;
                        if(it_230>=self->size) {
                            it_230=0;
                        }
                        else if(it_230==hash_229) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_230]=(_Bool)1;
                        if(0) {
                            self->keys[it_230] = come_decrement_ref_count(self->keys[it_230], 0, 0);
                            self->keys[it_230]=key;
                        }
                        else {
                            self->keys[it_230]=key;
                        }
                        if(0) {
                            self->items[it_230]=item;
                        }
                        else {
                            self->items[it_230]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_231=(_Bool)0;
                for(
                it2_233=list$1charpp_begin(self->key_list);
                !list$1charpp_end(self->key_list);
                it_230=list$1charpp_next(self->key_list)
                ){
                    if(charp_equals(it2_233,key)) {
                        same_key_exist_231=(_Bool)1;
                    }
                }
                if(!same_key_exist_231) {
                    list$1charpp_push_back(self->key_list,key);
                }
}

static void map$2charpintp_rehash(struct map$2charpint* self){
int size_214;
void* right_value151;
char** keys_215;
void* right_value152;
int* items_216;
void* right_value153;
_Bool* item_existance_217;
int len_218;
char* it_220;
int default_value_222;
int it2_225;
int hash_226;
int n_227;
int default_value_228;
memset(&size_214, 0, sizeof(int));
memset(&keys_215, 0, sizeof(char**));
memset(&items_216, 0, sizeof(int*));
memset(&item_existance_217, 0, sizeof(_Bool*));
memset(&len_218, 0, sizeof(int));
memset(&it_220, 0, sizeof(char*));
memset(&default_value_222, 0, sizeof(int));
memset(&it2_225, 0, sizeof(int));
memset(&hash_226, 0, sizeof(int));
memset(&n_227, 0, sizeof(int));
memset(&default_value_228, 0, sizeof(int));
                        size_214=self->size*3;
                        keys_215=((char***)(right_value151=(char***)come_calloc(1, sizeof(char**)*(1*(size_214)))));
                        items_216=((int**)(right_value152=(int**)come_calloc(1, sizeof(int*)*(1*(size_214)))));
                        item_existance_217=((_Bool**)(right_value153=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(size_214)))));
                        len_218=0;
                        for(
                        it_220=map$2charpintp_begin(self);
                        !map$2charpintp_end(self);
                        it_220=map$2charpintp_next(self)
                        ){
                            it2_225=map$2charpintp_at(self,it_220,default_value_222);
                            hash_226=charp_get_hash_key(it_220)%size_214;
                            n_227=hash_226;
                            while((_Bool)1) {
                                if(item_existance_217[n_227]) {
                                    n_227++;
                                    if(n_227>=size_214) {
                                        n_227=0;
                                    }
                                    else if(n_227==hash_226) {
                                        fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                        exit(2);
                                    }
                                }
                                else {
                                    item_existance_217[n_227]=(_Bool)1;
                                    keys_215[n_227]=it_220;
                                    items_216[n_227]=map$2charpintp_at(self,it_220,default_value_228);
                                    len_218++;
                                    break;
                                }
                            }
                        }
                        come_free_object((char*)self->items);
                        self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
                        come_free_object((char*)self->keys);
                        self->keys=keys_215;
                        self->items=items_216;
                        self->item_existance=item_existance_217;
                        self->size=size_214;
                        self->len=len_218;
}

static char* map$2charpintp_begin(struct map$2charpint* self){
char* result_219;
memset(&result_219, 0, sizeof(char*));
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                char* __result141__ = self->key_list->it->item;
                                return __result141__;
                            }
                            memset(&result_219,0,sizeof(char*));
                            char* __result142__ = result_219;
                            return __result142__;
}

static _Bool map$2charpintp_end(struct map$2charpint* self){
                            _Bool __result143__ = self->key_list->it==((void*)0);
                            return __result143__;
}

static char* map$2charpintp_next(struct map$2charpint* self){
char* result_221;
memset(&result_221, 0, sizeof(char*));
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                char* __result144__ = self->key_list->it->item;
                                return __result144__;
                            }
                            memset(&result_221,0,sizeof(char*));
                            char* __result145__ = result_221;
                            return __result145__;
}

static int map$2charpintp_at(struct map$2charpint* self, char* key, int default_value){
int hash_223;
int it_224;
memset(&hash_223, 0, sizeof(int));
memset(&it_224, 0, sizeof(int));
                                hash_223=charp_get_hash_key(((char*)key))%self->size;
                                it_224=hash_223;
                                while((_Bool)1) {
                                    if(self->item_existance[it_224]) {
                                        if(charp_equals(self->keys[it_224],key)) {
                                            int __result146__ = self->items[it_224];
                                            return __result146__;
                                        }
                                        it_224++;
                                        if(it_224>=self->size) {
                                            it_224=0;
                                        }
                                        else if(it_224==hash_223) {
                                            int __result147__ = default_value;
                                            return __result147__;
                                        }
                                    }
                                    else {
                                        int __result148__ = default_value;
                                        return __result148__;
                                    }
                                }
                                int __result149__ = default_value;
                                return __result149__;
}

static char* list$1charpp_begin(struct list$1charp* self){
char* result_232;
memset(&result_232, 0, sizeof(char*));
                    self->it=self->head;
                    if(self->it) {
                        char* __result150__ = self->it->item;
                        return __result150__;
                    }
                    memset(&result_232,0,sizeof(char*));
                    char* __result151__ = result_232;
                    return __result151__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
                    _Bool __result152__ = self->it==((void*)0);
                    return __result152__;
}

static char* list$1charpp_next(struct list$1charp* self){
char* result_234;
memset(&result_234, 0, sizeof(char*));
                    self->it=self->it->next;
                    if(self->it) {
                        char* __result153__ = self->it->item;
                        return __result153__;
                    }
                    memset(&result_234,0,sizeof(char*));
                    char* __result154__ = result_234;
                    return __result154__;
}

static void list$1charpp_push_back(struct list$1charp* self, char* item){
void* right_value154;
struct list_item$1charp* litem_235;
void* right_value155;
struct list_item$1charp* litem_236;
void* right_value156;
struct list_item$1charp* litem_237;
memset(&litem_235, 0, sizeof(struct list_item$1charp*));
memset(&litem_236, 0, sizeof(struct list_item$1charp*));
memset(&litem_237, 0, sizeof(struct list_item$1charp*));
                        if(self->len==0) {
                            litem_235=((struct list_item$1charp*)(right_value154=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_235->prev=((void*)0);
                            litem_235->next=((void*)0);
                            litem_235->item=item;
                            self->tail=litem_235;
                            self->head=litem_235;
                        }
                        else if(self->len==1) {
                            litem_236=((struct list_item$1charp*)(right_value155=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_236->prev=self->head;
                            litem_236->next=((void*)0);
                            litem_236->item=item;
                            self->tail=litem_236;
                            self->head->next=litem_236;
                        }
                        else {
                            litem_237=((struct list_item$1charp*)(right_value156=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_237->prev=self->tail;
                            litem_237->next=((void*)0);
                            litem_237->item=item;
                            self->tail->next=litem_237;
                            self->tail=litem_237;
                        }
                        self->len++;
}

static void map$2charpintp_finalize(struct map$2charpint* self){
int i_238;
int i_239;
memset(&i_238, 0, sizeof(int));
memset(&i_239, 0, sizeof(int));
            for(
            i_238=0;
            i_238<self->size;
            i_238++
            ){
                if(self->item_existance[i_238]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_239=0;
            i_239<self->size;
            i_239++
            ){
                if(self->item_existance[i_239]) {
                    if(0) {
                        self->keys[i_239] = come_decrement_ref_count(self->keys[i_239], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$1charpp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static _Bool map$2charpintp_operator_equals(struct map$2charpint* left, struct map$2charpint* right){
        _Bool __result160__ = map$2charpintp_equals(left,right);
        return __result160__;
}

static _Bool map$2charpintp_equals(struct map$2charpint* left, struct map$2charpint* right){
int n_242;
_Bool result_243;
char* it_244;
char* default_value_245;
char* it2_248;
int default_value2_249;
int item_250;
int item2_251;
memset(&n_242, 0, sizeof(int));
memset(&result_243, 0, sizeof(_Bool));
memset(&it_244, 0, sizeof(char*));
memset(&default_value_245, 0, sizeof(char*));
memset(&it2_248, 0, sizeof(char*));
memset(&default_value2_249, 0, sizeof(int));
memset(&item_250, 0, sizeof(int));
memset(&item2_251, 0, sizeof(int));
            if(left->len!=right->len) {
                _Bool __result156__ = (_Bool)0;
                return __result156__;
            }
            n_242=0;
            result_243=(_Bool)1;
            for(
            it_244=list$1charpp_begin(left->key_list);
            !list$1charpp_end(left->key_list);
            it_244=list$1charpp_next(left->key_list)
            ){
                it2_248=list$1charpp_item(right->key_list,n_242,default_value_245);
                if(charp_equals(it_244,it2_248)) {
                    item_250=map$2charpintp_at(left,it_244,default_value2_249);
                    item2_251=map$2charpintp_at(left,it2_248,default_value2_249);
                    if(!int_equals(item_250,item2_251)) {
                        result_243=(_Bool)0;
                    }
                }
                else {
                    result_243=(_Bool)0;
                }
                n_242++;
            }
            _Bool __result159__ = result_243;
            return __result159__;
}

static char* list$1charpp_item(struct list$1charp* self, int position, char* default_value){
struct list_item$1charp* it_246;
int i_247;
memset(&it_246, 0, sizeof(struct list_item$1charp*));
memset(&i_247, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_246=self->head;
                    i_247=0;
                    while(it_246!=((void*)0)) {
                        if(position==i_247) {
                            char* __result157__ = it_246->item;
                            return __result157__;
                        }
                        it_246=it_246->next;
                        i_247++;
                    }
                    char* __result158__ = default_value;
                    return __result158__;
}

static int map$2charpintp_operator_load_element(struct map$2charpint* self, char* key){
int default_value_255;
memset(&default_value_255, 0, sizeof(int));
        memset(&default_value_255,0,sizeof(int));
        int __result161__ = map$2charpintp_at(self,key,default_value_255);
        return __result161__;
}

static struct map$2charpint* map$2charpintp_clone(struct map$2charpint* self){
void* right_value163;
void* right_value169;
struct map$2charpint* result_257;
char* it_258;
int default_value_259;
int it2_260;
memset(&result_257, 0, sizeof(struct map$2charpint*));
memset(&it_258, 0, sizeof(char*));
memset(&default_value_259, 0, sizeof(int));
memset(&it2_260, 0, sizeof(int));
        if(self==((void*)0)) {
            struct map$2charpint* __result162__ = ((void*)0);
            return __result162__;
        }
        result_257=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value169=map$2charpintp_initialize((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value163=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1)))))))));
        call_finalizer(map$2charpintp_finalize,right_value169,0, 1, 0);
        for(
        it_258=map$2charpintp_begin(self);
        !map$2charpintp_end(self);
        it_258=map$2charpintp_next(self)
        ){
            it2_260=map$2charpintp_at(self,it_258,default_value_259);
            map$2charpintp_insert2(result_257,charp_clone(it_258),int_clone(it2_260));
        }
        struct map$2charpint* __result164__ = result_257;
        call_finalizer(map$2charpintp_finalize,result_257,0, 0, 1);
        return __result164__;
}

static struct map$2charpint* map$2charpintp_initialize(struct map$2charpint* self){
void* right_value164;
void* right_value165;
void* right_value166;
int i_256;
void* right_value167;
void* right_value168;
memset(&i_256, 0, sizeof(int));
            self->keys=((char***)(right_value164=(char***)come_calloc(1, sizeof(char**)*(1*(128)))));
            self->items=((int**)(right_value165=(int**)come_calloc(1, sizeof(int*)*(1*(128)))));
            self->item_existance=((_Bool**)(right_value166=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(128)))));
            for(
            i_256=0;
            i_256<128;
            i_256++
            ){
                self->item_existance[i_256]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            if(self->key_list) {(struct list$1charp*)come_decrement_ref_count(self->key_list,0,0); }
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value168=list$1charpp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value167=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            call_finalizer(list$1charpp_finalize,right_value168,0, 1, 0);
            self->it=0;
            struct map$2charpint* __result163__ = self;
            call_finalizer(map$2charpintp_finalize,self,0, 0, 1);
            return __result163__;
}

static void map$2charpintp_insert2(struct map$2charpint* self, char* key, int item){
int hash_261;
int it_262;
_Bool same_key_exist_263;
char* it2_264;
memset(&hash_261, 0, sizeof(int));
memset(&it_262, 0, sizeof(int));
memset(&same_key_exist_263, 0, sizeof(_Bool));
memset(&it2_264, 0, sizeof(char*));
                if(self->len*2>=self->size) {
                    map$2charpintp_rehash(self);
                }
                hash_261=charp_get_hash_key(key)%self->size;
                it_262=hash_261;
                while((_Bool)1) {
                    if(self->item_existance[it_262]) {
                        if(charp_equals(self->keys[it_262],key)) {
                            if(0) {
                                self->keys[it_262] = come_decrement_ref_count(self->keys[it_262], 0, 0);
                                self->keys[it_262]=key;
                            }
                            else {
                                self->keys[it_262]=key;
                            }
                            if(0) {
                                self->items[it_262]=item;
                            }
                            else {
                                self->items[it_262]=item;
                            }
                            break;
                        }
                        it_262++;
                        if(it_262>=self->size) {
                            it_262=0;
                        }
                        else if(it_262==hash_261) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_262]=(_Bool)1;
                        if(0) {
                            self->keys[it_262] = come_decrement_ref_count(self->keys[it_262], 0, 0);
                            self->keys[it_262]=key;
                        }
                        else {
                            self->keys[it_262]=key;
                        }
                        if(0) {
                            self->items[it_262]=item;
                        }
                        else {
                            self->items[it_262]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_263=(_Bool)0;
                for(
                it2_264=list$1charpp_begin(self->key_list);
                !list$1charpp_end(self->key_list);
                it_262=list$1charpp_next(self->key_list)
                ){
                    if(charp_equals(it2_264,key)) {
                        same_key_exist_263=(_Bool)1;
                    }
                }
                if(!same_key_exist_263) {
                    list$1charpp_push_back(self->key_list,key);
                }
}

static struct tuple1$1int* tuple1$1intp_initialize(struct tuple1$1int* self, int v1){
        self->v1=v1;
        struct tuple1$1int* __result165__ = self;
        call_finalizer(tuple1$1intp_finalize,self,0, 0, 1);
        return __result165__;
}

static void tuple1$1intp_finalize(struct tuple1$1int* self){
}

