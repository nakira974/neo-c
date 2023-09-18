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
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
};
struct __current_stack2__
{
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
    struct list$1charph** liX_115;
    struct list$1int** liX2_121;
    int* aX_128;
};
struct __current_stack3__
{
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
    struct list$1charph** liX_115;
    struct list$1int** liX2_121;
    int* aX_128;
    int* aXYZY_132;
    struct list$1charph** li_133;
    struct list$1int** li2_135;
    int* aXL_137;
};
struct __current_stack4__
{
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
    struct list$1charph** liX_115;
    struct list$1int** liX2_121;
    int* aX_128;
    int* aXYZY_132;
    struct list$1charph** li_133;
    struct list$1int** li2_135;
    int* aXL_137;
    struct list$1charph** li3_168;
    struct list$1int** li4_171;
    struct list$1int** li5_172;
    struct list$1int** li6_177;
    int** axyzX_181;
    char** strXYXY_182;
    struct list$1int** liZ_183;
};
struct __current_stack5__
{
    char** p_92;
    void** p2_93;
    int* count_94;
    int* size2_95;
    char** mem2_96;
    int* b_97;
    int** a_98;
    int* a2_99;
    char** ax_102;
    char** str_106;
    struct sData** data_107;
    int** axyz_108;
    int** xxx_109;
    int** yyy_110;
    int** zzz_111;
    int* bzyz_112;
    int** azyz_113;
    int* n_114;
    struct list$1charph** liX_115;
    struct list$1int** liX2_121;
    int* aX_128;
    int* aXYZY_132;
    struct list$1charph** li_133;
    struct list$1int** li2_135;
    int* aXL_137;
    struct list$1charph** li3_168;
    struct list$1int** li4_171;
    struct list$1int** li5_172;
    struct list$1int** li6_177;
    int** axyzX_181;
    char** strXYXY_182;
    struct list$1int** liZ_183;
    struct list$1int** liZ2_187;
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
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
void method_block5_code2HelloWorld2c(struct __current_stack5__* parent, int it, int it2, _Bool* it3);
static struct map$2charpint* map$2charpint_initialize_with_values(struct map$2charpint* self, int num_keys, char** keys, int* values);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
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
static void map$2charpint_finalize(struct map$2charpint* self);
static _Bool map$2charpint_operator_equals(struct map$2charpint* left, struct map$2charpint* right);
static _Bool map$2charpint_equals(struct map$2charpint* left, struct map$2charpint* right);
static char* list$1charp_item(struct list$1charp* self, int position, char* default_value);
static int map$2charpint_operator_load_element(struct map$2charpint* self, char* key);
static struct map$2charpint* map$2charpint_clone(struct map$2charpint* self);
static struct map$2charpint* map$2charpint_initialize(struct map$2charpint* self);
static void map$2charpint_insert2(struct map$2charpint* self, char* key, int item);
static struct tuple1$1int* tuple1$1int_initialize(struct tuple1$1int* self, int v1);
static void tuple1$1int_finalize(struct tuple1$1int* self);
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
static inline _Bool string_equals(char* self, char* right){
    _Bool __result22__ = strcmp(self,right)==0;
    return __result22__;
}
static inline _Bool string_operator_equals(char* self, char* right){
    _Bool __result23__ = strcmp(self,right)==0;
    return __result23__;
}
static inline _Bool char_operator_equals(char* self, char* right){
    _Bool __result24__ = strcmp(self,right)==0;
    return __result24__;
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
    char* __result26__ = result_24;
    result_24 = come_decrement_ref_count(result_24, 0, 1);
    return __result26__;
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
    unsigned int __result30__ = result_27;
    return __result30__;
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
    unsigned int __result31__ = result_29;
    return __result31__;
}
static inline int int_clone(int self){
    int __result33__ = self;
    return __result33__;
}
static inline char* char_clone(char* self){
    char* __result34__ = self;
    return __result34__;
}
static inline char* string_clone(char* self){
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
static inline double double_clone(double self){
    double __result39__ = self;
    return __result39__;
}
static inline float float_clone(float self){
    float __result40__ = self;
    return __result40__;
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
    struct buffer* __result41__ = self;
    call_finalizer(buffer_finalize,self,0, 0, 1);
    return __result41__;
}
static inline struct buffer* buffer_clone(struct buffer* self){
void* right_value5;
struct buffer* result_31;
void* right_value6;
memset(&result_31, 0, sizeof(struct buffer*));
    if(self==((void*)0)) {
        struct buffer* __result42__ = ((void*)0);
        return __result42__;
    }
    result_31=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1)))));
    call_finalizer(buffer_finalize,right_value5,0, 1, 0);
    result_31->size=self->size;
    if(result_31->buf) {(char*)come_decrement_ref_count(result_31->buf,0,0); }
    result_31->buf=(char*)come_increment_ref_count(((char**)(right_value6=(char**)come_calloc(1, sizeof(char*)*(1*(self->size))))));
    right_value6 = come_decrement_ref_count(right_value6, 1, 0);
    result_31->len=self->len;
    memcpy(result_31->buf,self->buf,self->len);
    struct buffer* __result43__ = result_31;
    call_finalizer(buffer_finalize,result_31,0, 0, 1);
    return __result43__;
}
static inline int buffer_length(struct buffer* self){
    int __result44__ = self->len;
    return __result44__;
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
    char* __result45__ = ((char*)(right_value9=__builtin_string(self->buf)));
    return __result45__;
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
    int __result46__ = strcmp(left->buf,right->buf);
    return __result46__;
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
    struct buffer* __result47__ = result_39;
    call_finalizer(buffer_finalize,result_39,0, 0, 1);
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
    call_finalizer(va_list_finalize,(&args_40),1, 0, 0);
    result2_43 = come_decrement_ref_count(result2_43, 0, 1);
    return __result48__;
}
inline struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* right_value14;
    struct list$1charph* __result49__ = ((struct list$1charph*)(right_value14=FILE_readlines(f)));
    return __result49__;
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
    char* __result52__ = ((char*)(right_value23=buffer_to_string(buf_51)));
    call_finalizer(buffer_finalize,buf_51,0, 0, 0);
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
    struct _IO_FILE* __result54__ = f;
    call_finalizer(va_list_finalize,(&args_58),1, 0, 0);
    return __result54__;
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
    char* __result56__ = ((char*)(right_value27=__builtin_string(self)));
    call_finalizer(FILE_finalize,(&f_61),1, 0, 0);
    return __result56__;
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
    char* __result57__ = ((char*)(right_value28=__builtin_string(self)));
    call_finalizer(FILE_finalize,(&f_62),1, 0, 0);
    return __result57__;
}
static inline int string_length(char* str){
    int __result58__ = strlen(str);
    return __result58__;
}
static inline int char_length(char* str){
    int __result59__ = strlen(str);
    return __result59__;
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
    char* __result60__ = result_64;
    result_64 = come_decrement_ref_count(result_64, 0, 1);
    return __result60__;
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
    char* __result61__ = result_67;
    result_67 = come_decrement_ref_count(result_67, 0, 1);
    return __result61__;
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
        char* __result62__ = ((char*)(right_value31=__builtin_string("")));
        return __result62__;
    }
    len_69=strlen(str);
    if(head<0) {
        head+=len_69;
    }
    if(tail<0) {
        tail+=len_69+1;
    }
    if(head>tail) {
        char* __result63__ = ((char*)(right_value33=string_reverse(((char*)(right_value32=char_substring(str,tail,head))))));
        right_value32 = come_decrement_ref_count(right_value32, 1, 0);
        return __result63__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_69) {
        tail=len_69;
    }
    if(head==tail) {
        char* __result64__ = ((char*)(right_value34=__builtin_string("")));
        return __result64__;
    }
    if(tail-head+1<1) {
        char* __result65__ = ((char*)(right_value35=__builtin_string("")));
        return __result65__;
    }
    result_70=(char*)come_increment_ref_count(((char**)(right_value36=(char**)come_calloc(1, sizeof(char*)*(1*(tail-head+1))))));
    right_value36 = come_decrement_ref_count(right_value36, 1, 0);
    memcpy(result_70,str+head,tail-head);
    result_70[tail-head]=0;
    char* __result66__ = result_70;
    result_70 = come_decrement_ref_count(result_70, 0, 1);
    return __result66__;
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
        char* __result67__ = ((char*)(right_value37=__builtin_string("")));
        return __result67__;
    }
    len_71=strlen(str);
    if(head<0) {
        head+=len_71;
    }
    if(tail<0) {
        tail+=len_71+1;
    }
    if(head>tail) {
        char* __result68__ = ((char*)(right_value39=string_reverse(((char*)(right_value38=char_substring(str,tail,head))))));
        right_value38 = come_decrement_ref_count(right_value38, 1, 0);
        return __result68__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_71) {
        tail=len_71;
    }
    if(head==tail) {
        char* __result69__ = ((char*)(right_value40=__builtin_string("")));
        return __result69__;
    }
    if(tail-head+1<1) {
        char* __result70__ = ((char*)(right_value41=__builtin_string("")));
        return __result70__;
    }
    result_72=(char*)come_increment_ref_count(((char**)(right_value42=(char**)come_calloc(1, sizeof(char*)*(1*(tail-head+1))))));
    right_value42 = come_decrement_ref_count(right_value42, 1, 0);
    memcpy(result_72,str+head,tail-head);
    result_72[tail-head]=0;
    char* __result71__ = result_72;
    result_72 = come_decrement_ref_count(result_72, 0, 1);
    return __result71__;
}
static inline char* string_chomp(char* str){
void* right_value43;
char* result_73;
void* right_value44;
memset(&result_73, 0, sizeof(char*));
    result_73=(char*)come_increment_ref_count(((char*)(right_value43=__builtin_string(str))));
    right_value43 = come_decrement_ref_count(right_value43, 1, 0);
    if(result_73[string_length(result_73)-1]==10) {
        char* __result72__ = ((char*)(right_value44=string_substring(result_73,0,-2)));
        return __result72__;
    }
    char* __result73__ = result_73;
    result_73 = come_decrement_ref_count(result_73, 0, 1);
    return __result73__;
}
static inline char* char_chomp(char* str){
void* right_value45;
char* result_74;
void* right_value46;
memset(&result_74, 0, sizeof(char*));
    result_74=(char*)come_increment_ref_count(((char*)(right_value45=__builtin_string(str))));
    right_value45 = come_decrement_ref_count(right_value45, 1, 0);
    if(result_74[string_length(result_74)-1]==10) {
        char* __result74__ = ((char*)(right_value46=string_substring(result_74,0,-2)));
        return __result74__;
    }
    char* __result75__ = result_74;
    result_74 = come_decrement_ref_count(result_74, 0, 1);
    return __result75__;
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
        char* __result76__ = ((char*)(right_value47=__builtin_string(path)));
        return __result76__;
    }
    else {
        char* __result77__ = ((char*)(right_value48=__builtin_string(p_75+1)));
        return __result77__;
    }
    char* __result78__ = ((char*)(right_value49=__builtin_string("")));
    return __result78__;
}
static inline char* xdirname(char* path){
void* right_value50;
void* right_value51;
    char* __result79__ = ((char*)(right_value51=__builtin_string(dirname(((char*)(right_value50=__builtin_string(path)))))));
    right_value50 = come_decrement_ref_count(right_value50, 1, 0);
    return __result79__;
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
        char* __result80__ = ((char*)(right_value53=__builtin_string(path2_76)));
        return __result80__;
    }
    else {
        char* __result81__ = ((char*)(right_value54=string_substring(path2_76,0,p_77-path2_76)));
        return __result81__;
    }
    char* __result82__ = ((char*)(right_value55=__builtin_string("")));
    path2_76 = come_decrement_ref_count(path2_76, 0, 0);
    return __result82__;
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
        char* __result83__ = ((char*)(right_value56=__builtin_string(path)));
        return __result83__;
    }
    else {
        char* __result84__ = ((char*)(right_value57=__builtin_string(p_78+1)));
        return __result84__;
    }
    char* __result85__ = ((char*)(right_value58=__builtin_string("")));
    return __result85__;
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
    char* __result86__ = result2_80;
    result2_80 = come_decrement_ref_count(result2_80, 0, 1);
    return __result86__;
}
static inline _Bool xiswalpha(unsigned int c){
_Bool result_81;
memset(&result_81, 0, sizeof(_Bool));
    result_81=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result87__ = result_81;
    return __result87__;
}
static inline _Bool xiswblank(unsigned int c){
    _Bool __result88__ = c==32||c==9;
    return __result88__;
}
static inline _Bool xiswdigit(unsigned int c){
    _Bool __result89__ = (c>=48&&c<=57);
    return __result89__;
}
static inline _Bool xiswalnum(unsigned int c){
    _Bool __result90__ = xiswalpha(c)||xiswdigit(c);
    return __result90__;
}
static inline _Bool xisalpha(char c){
_Bool result_82;
memset(&result_82, 0, sizeof(_Bool));
    result_82=(c>=97&&c<=122)||(c>=65&&c<=90);
    _Bool __result91__ = result_82;
    return __result91__;
}
static inline _Bool xisblank(char c){
    _Bool __result92__ = c==32||c==9;
    return __result92__;
}
static inline _Bool xisdigit(char c){
    _Bool __result93__ = (c>=48&&c<=57);
    return __result93__;
}
static inline _Bool xisalnum(char c){
    _Bool __result94__ = xisalpha(c)||xisdigit(c);
    return __result94__;
}
static inline _Bool xisascii(char c){
_Bool result_83;
memset(&result_83, 0, sizeof(_Bool));
    result_83=(c>=32&&c<=126);
    _Bool __result95__ = result_83;
    return __result95__;
}
static inline _Bool xiswascii(unsigned int c){
_Bool result_84;
memset(&result_84, 0, sizeof(_Bool));
    result_84=(c>=32&&c<=126);
    _Bool __result96__ = result_84;
    return __result96__;
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
        char* __result97__ = ((char*)(right_value60=__builtin_string("")));
        return __result97__;
    }
    result_86=(char*)come_increment_ref_count(((char*)(right_value61=FILE_read(f_85))));
    right_value61 = come_decrement_ref_count(right_value61, 1, 0);
    FILE_fclose(f_85);
    char* __result98__ = result_86;
    result_86 = come_decrement_ref_count(result_86, 0, 1);
    return __result98__;
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
        char* __result99__ = ((char*)(right_value62=__builtin_string("")));
        return __result99__;
    }
    result_88=(char*)come_increment_ref_count(((char*)(right_value63=FILE_read(f_87))));
    right_value63 = come_decrement_ref_count(right_value63, 1, 0);
    FILE_fclose(f_87);
    char* __result100__ = result_88;
    result_88 = come_decrement_ref_count(result_88, 0, 1);
    return __result100__;
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
    char* __result101__ = ((char*)(right_value64=__builtin_string(self)));
    return __result101__;
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









































static void va_list_finalize(va_list* self){
}



static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1charph* __result50__ = self;
        call_finalizer(list$1charph_finalize,self,0, 0, 1);
        return __result50__;
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
    int* __result102__ = result_89;
    result_89 = come_decrement_ref_count(result_89, 0, 1);
    return __result102__;
}

int funHeap2(int* x, int* y){
    int __result103__ = *x+*y;
    x = come_decrement_ref_count(x, 0, 1);
    y = come_decrement_ref_count(y, 0, 1);
    return __result103__;
}

int int_fun(int* self){
    int __result104__ = *self;
    return __result104__;
}

struct sDataA* sDataA_initialize(struct sDataA* self, int a, int b){
    self->a=a;
    self->b=b;
    struct sDataA* __result105__ = self;
    call_finalizer(sDataA_finalize,self,0, 0, 1);
    return __result105__;
}

static void sDataA_finalize(struct sDataA* self){
}

int sDataA_fun(struct sDataA* self, int a, int b){
    int __result106__ = self->a+self->b+a+b;
    return __result106__;
}

void fun_default_parametor(int x, int y){
    xassert("default parametor",x==1&&y==2);
}

struct tuple2$2intbool* fun_exception(int x, int y){
void* right_value66;
struct tuple2$2intbool* result_tuplea1_90;
memset(&result_tuplea1_90, 0, sizeof(struct tuple2$2intbool*));
    result_tuplea1_90=(struct tuple2$2intbool*)come_increment_ref_count(((struct tuple2$2intbool*)(right_value66=(struct tuple2$2intbool*)come_calloc(1, sizeof(struct tuple2$2intbool)*(1)))));
    call_finalizer(tuple2$2intbool_finalize,right_value66,0, 1, 0);
    result_tuplea1_90->v1=x+y;
    result_tuplea1_90->v2=(_Bool)1;
    struct tuple2$2intbool* __result107__ = result_tuplea1_90;
    call_finalizer(tuple2$2intbool_finalize,result_tuplea1_90,0, 0, 1);
    return __result107__;
}

static void tuple2$2intbool_finalize(struct tuple2$2intbool* self){
}

int main(){
void* right_value67;
char* a_91;
char* p_92;
void* p2_93;
int count_94;
int size2_95;
char* mem2_96;
int b_97;
int* a_98;
int a2_99;
int b_100;
int n_101;
void* right_value68;
char* ax_102;
void* right_value69;
char* a_103;
char* b_104;
struct sData data_105;
void* right_value70;
char* str_106;
void* right_value71;
struct sData* data_107;
void* right_value72;
void* right_value73;
void* right_value74;
int* axyz_108;
void* right_value75;
int* xxx_109;
void* right_value76;
int* yyy_110;
void* right_value77;
int* zzz_111;
void* right_value78;
int bzyz_112;
int* azyz_113;
int n_114;
struct __current_stack1__ __current_stack1__;
void* right_value79;
void* right_value80;
struct list$1charph* liX_115;
void* right_value81;
void* right_value82;
void* right_value83;
char* it_117;
void* right_value84;
void* right_value85;
struct list$1int* liX2_121;
int it_126;
int aX_128;
struct __current_stack2__ __current_stack2__;
int aXYZY_132;
void* right_value89;
void* right_value90;
struct list$1charph* li_133;
void* right_value91;
void* right_value92;
void* right_value93;
char* it_134;
void* right_value94;
void* right_value95;
struct list$1int* li2_135;
int it_136;
int aXL_137;
struct __current_stack3__ __current_stack3__;
void* right_value102;
void* right_value103;
void* right_value104;
struct list$1charph* li3_168;
void* right_value105;
void* right_value106;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
struct list$1int* li4_171;
void* right_value111;
void* right_value112;
struct list$1int* li5_172;
void* right_value113;
void* right_value114;
struct list$1int* li6_177;
void* right_value117;
int* axyzX_181;
void* right_value118;
void* right_value119;
void* right_value120;
void* right_value121;
void* right_value122;
char* strXYXY_182;
void* right_value123;
void* right_value124;
struct list$1int* liZ_183;
struct __current_stack4__ __current_stack4__;
void* right_value125;
void* right_value126;
struct list$1int* liZ2_187;
int __list_values1___188[3];
void* right_value127;
void* right_value128;
int __list_values2___190[3];
void* right_value129;
void* right_value130;
int __list_values3___191[5];
void* right_value131;
void* right_value132;
struct __current_stack5__ __current_stack5__;
char* __map_keys1___192[2];
int __map_element1___193[2];
void* right_value144;
void* right_value145;
char* __map_keys2___224[2];
int __map_element2___225[2];
void* right_value146;
void* right_value147;
char* __map_keys3___236[2];
int __map_element3___237[2];
void* right_value148;
void* right_value149;
struct map$2charpint* m1_238;
struct map$2charpint* m2_249;
void* right_value157;
void* right_value158;
struct tuple1$1int* tt1_250;
memset(&a_91, 0, sizeof(char*));
memset(&p_92, 0, sizeof(char*));
memset(&p2_93, 0, sizeof(void*));
memset(&count_94, 0, sizeof(int));
memset(&size2_95, 0, sizeof(int));
memset(&mem2_96, 0, sizeof(char*));
memset(&b_97, 0, sizeof(int));
memset(&a_98, 0, sizeof(int*));
memset(&a2_99, 0, sizeof(int));
memset(&b_100, 0, sizeof(int));
memset(&n_101, 0, sizeof(int));
memset(&ax_102, 0, sizeof(char*));
memset(&a_103, 0, sizeof(char*));
memset(&b_104, 0, sizeof(char*));
memset(&data_105, 0, sizeof(struct sData));
memset(&str_106, 0, sizeof(char*));
memset(&data_107, 0, sizeof(struct sData*));
memset(&axyz_108, 0, sizeof(int*));
memset(&xxx_109, 0, sizeof(int*));
memset(&yyy_110, 0, sizeof(int*));
memset(&zzz_111, 0, sizeof(int*));
memset(&bzyz_112, 0, sizeof(int));
memset(&azyz_113, 0, sizeof(int*));
memset(&n_114, 0, sizeof(int));
memset(&liX_115, 0, sizeof(struct list$1charph*));
memset(&it_117, 0, sizeof(char*));
memset(&liX2_121, 0, sizeof(struct list$1int*));
memset(&it_126, 0, sizeof(int));
memset(&aX_128, 0, sizeof(int));
memset(&aXYZY_132, 0, sizeof(int));
memset(&li_133, 0, sizeof(struct list$1charph*));
memset(&it_134, 0, sizeof(char*));
memset(&li2_135, 0, sizeof(struct list$1int*));
memset(&it_136, 0, sizeof(int));
memset(&aXL_137, 0, sizeof(int));
memset(&li3_168, 0, sizeof(struct list$1charph*));
memset(&li4_171, 0, sizeof(struct list$1int*));
memset(&li5_172, 0, sizeof(struct list$1int*));
memset(&li6_177, 0, sizeof(struct list$1int*));
memset(&axyzX_181, 0, sizeof(int*));
memset(&strXYXY_182, 0, sizeof(char*));
memset(&liZ_183, 0, sizeof(struct list$1int*));
memset(&liZ2_187, 0, sizeof(struct list$1int*));
memset(&m1_238, 0, sizeof(struct map$2charpint*));
memset(&m2_249, 0, sizeof(struct map$2charpint*));
memset(&tt1_250, 0, sizeof(struct tuple1$1int*));
    if(1) {
        a_91=(char*)come_increment_ref_count(((char**)(right_value67=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
        right_value67 = come_decrement_ref_count(right_value67, 1, 0);
        a_91 = come_decrement_ref_count(a_91, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_92="ABC";
    p2_93="ABC";
    printf("%s\n",(char*)p2_93);
    printf("%c\n",*p_92);
    count_94=0;
    size2_95=1;
    mem2_96=calloc(1,sizeof(int)+sizeof(long)+count_94*size2_95);
    free(mem2_96);
    a_98=&b_97;
    (*a_98)=123;
    a2_99=123;
    if((_Bool)1) {
        b_100=234;
        n_101=0;
        while(n_101<3) {
            printf("a %d\n",a2_99);
            printf("b %d\n",b_100);
            n_101++;
        }
    }
    ax_102=(char*)come_increment_ref_count(((char**)(right_value68=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
    right_value68 = come_decrement_ref_count(right_value68, 1, 0);
    if(1) {
        a_103=(char*)come_increment_ref_count(((char**)(right_value69=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
        right_value69 = come_decrement_ref_count(right_value69, 1, 0);
        b_104=(char*)come_increment_ref_count(a_103);
        if(data_105.a) {(char*)come_decrement_ref_count(data_105.a,0,0); }
        data_105.a=(char*)come_increment_ref_count(a_103);
        a_103 = come_decrement_ref_count(a_103, 0, 0);
        b_104 = come_decrement_ref_count(b_104, 0, 0);
        call_finalizer(sData_finalize,(&data_105),1, 0, 0);
    }
    str_106=(char*)come_increment_ref_count(((char**)(right_value70=(char**)come_calloc(1, sizeof(char*)*(1*(128))))));
    right_value70 = come_decrement_ref_count(right_value70, 1, 0);
    strncpy(str_106,"ABC",128);
    data_107=(struct sData*)come_increment_ref_count(((struct sData*)(right_value71=(struct sData*)come_calloc(1, sizeof(struct sData)*(1)))));
    call_finalizer(sData_finalize,right_value71,0, 1, 0);
    if(data_107->a) {(char*)come_decrement_ref_count(data_107->a,0,0); }
    data_107->a=(char*)come_increment_ref_count(str_106);
    puts(data_107->a);
    ((int*)(right_value72=funHeap(7,7)));
    right_value72 = come_decrement_ref_count(right_value72, 1, 0);
    xassert("right value test",*((int*)(right_value73=funHeap(3,4)))==7);
    right_value73 = come_decrement_ref_count(right_value73, 1, 0);
    axyz_108=(int*)come_increment_ref_count(((int*)(right_value74=funHeap(1,2))));
    right_value74 = come_decrement_ref_count(right_value74, 1, 0);
    xassert("variable test",*axyz_108==3);
    xxx_109=(int*)come_increment_ref_count(((int*)(right_value75=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value75 = come_decrement_ref_count(right_value75, 1, 0);
    *xxx_109=1;
    yyy_110=(int*)come_increment_ref_count(((int*)(right_value76=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value76 = come_decrement_ref_count(right_value76, 1, 0);
    *yyy_110=2;
    xassert("heap",funHeap2((int*)come_increment_ref_count(xxx_109),(int*)come_increment_ref_count(yyy_110))==3);
    zzz_111=(int*)come_increment_ref_count(((int*)(right_value77=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value77 = come_decrement_ref_count(right_value77, 1, 0);
    ((int*)(right_value78=(int*)come_calloc(1, sizeof(int)*(1))));
    right_value78 = come_decrement_ref_count(right_value78, 1, 0);
    bzyz_112=123;
    azyz_113=&bzyz_112;
    xassert("impl",int_fun(azyz_113)==123);
    n_114=0;
    __current_stack1__.p_92 = &p_92;
    __current_stack1__.p2_93 = &p2_93;
    __current_stack1__.count_94 = &count_94;
    __current_stack1__.size2_95 = &size2_95;
    __current_stack1__.mem2_96 = &mem2_96;
    __current_stack1__.b_97 = &b_97;
    __current_stack1__.a_98 = &a_98;
    __current_stack1__.a2_99 = &a2_99;
    __current_stack1__.ax_102 = &ax_102;
    __current_stack1__.str_106 = &str_106;
    __current_stack1__.data_107 = &data_107;
    __current_stack1__.axyz_108 = &axyz_108;
    __current_stack1__.xxx_109 = &xxx_109;
    __current_stack1__.yyy_110 = &yyy_110;
    __current_stack1__.zzz_111 = &zzz_111;
    __current_stack1__.bzyz_112 = &bzyz_112;
    __current_stack1__.azyz_113 = &azyz_113;
    __current_stack1__.n_114 = &n_114;
    int_times(3,&__current_stack1__,method_block1_code2HelloWorld2c);
    liX_115=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value80=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charph_finalize,right_value80,0, 1, 0);
    list$1charph_push_back(liX_115,(char*)come_increment_ref_count(((char*)(right_value81=__builtin_string("ABC")))));
    right_value81 = come_decrement_ref_count(right_value81, 1, 0);
    list$1charph_push_back(liX_115,(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string("DEF")))));
    right_value82 = come_decrement_ref_count(right_value82, 1, 0);
    list$1charph_push_back(liX_115,(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string("GHI")))));
    right_value83 = come_decrement_ref_count(right_value83, 1, 0);
    for(
    it_117=list$1charph_begin((liX_115));
    !list$1charph_end((liX_115));
    it_117=list$1charph_next((liX_115))
    ){
        printf("%s\n",it_117);
    }
    liX2_121=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value85=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value84=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value85,0, 1, 0);
    list$1int_push_back(liX2_121,1);
    list$1int_push_back(liX2_121,2);
    list$1int_push_back(liX2_121,3);
    for(
    it_126=list$1int_begin((liX2_121));
    !list$1int_end((liX2_121));
    it_126=list$1int_next((liX2_121))
    ){
        printf("%d\n",it_126);
    }
    aX_128=123;
    __current_stack2__.p_92 = &p_92;
    __current_stack2__.p2_93 = &p2_93;
    __current_stack2__.count_94 = &count_94;
    __current_stack2__.size2_95 = &size2_95;
    __current_stack2__.mem2_96 = &mem2_96;
    __current_stack2__.b_97 = &b_97;
    __current_stack2__.a_98 = &a_98;
    __current_stack2__.a2_99 = &a2_99;
    __current_stack2__.ax_102 = &ax_102;
    __current_stack2__.str_106 = &str_106;
    __current_stack2__.data_107 = &data_107;
    __current_stack2__.axyz_108 = &axyz_108;
    __current_stack2__.xxx_109 = &xxx_109;
    __current_stack2__.yyy_110 = &yyy_110;
    __current_stack2__.zzz_111 = &zzz_111;
    __current_stack2__.bzyz_112 = &bzyz_112;
    __current_stack2__.azyz_113 = &azyz_113;
    __current_stack2__.n_114 = &n_114;
    __current_stack2__.liX_115 = &liX_115;
    __current_stack2__.liX2_121 = &liX2_121;
    __current_stack2__.aX_128 = &aX_128;
    list$1int_each(liX2_121,&__current_stack2__,method_block2_code2HelloWorld2c);
    xassert("method_block test",aX_128==2);
    xassert("var initialize test",aXYZY_132==0);
    li_133=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charph_finalize,right_value90,0, 1, 0);
    list$1charph_push_back(li_133,(char*)come_increment_ref_count(((char*)(right_value91=__builtin_string("ABC")))));
    right_value91 = come_decrement_ref_count(right_value91, 1, 0);
    list$1charph_push_back(li_133,(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string("DEF")))));
    right_value92 = come_decrement_ref_count(right_value92, 1, 0);
    list$1charph_push_back(li_133,(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string("GHI")))));
    right_value93 = come_decrement_ref_count(right_value93, 1, 0);
    for(
    it_134=list$1charph_begin((li_133));
    !list$1charph_end((li_133));
    it_134=list$1charph_next((li_133))
    ){
        printf("%s\n",it_134);
    }
    li2_135=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value95=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value94=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value95,0, 1, 0);
    list$1int_push_back(li2_135,1);
    list$1int_push_back(li2_135,2);
    list$1int_push_back(li2_135,3);
    for(
    it_136=list$1int_begin((li2_135));
    !list$1int_end((li2_135));
    it_136=list$1int_next((li2_135))
    ){
        printf("%d\n",it_136);
    }
    aXL_137=123;
    __current_stack3__.p_92 = &p_92;
    __current_stack3__.p2_93 = &p2_93;
    __current_stack3__.count_94 = &count_94;
    __current_stack3__.size2_95 = &size2_95;
    __current_stack3__.mem2_96 = &mem2_96;
    __current_stack3__.b_97 = &b_97;
    __current_stack3__.a_98 = &a_98;
    __current_stack3__.a2_99 = &a2_99;
    __current_stack3__.ax_102 = &ax_102;
    __current_stack3__.str_106 = &str_106;
    __current_stack3__.data_107 = &data_107;
    __current_stack3__.axyz_108 = &axyz_108;
    __current_stack3__.xxx_109 = &xxx_109;
    __current_stack3__.yyy_110 = &yyy_110;
    __current_stack3__.zzz_111 = &zzz_111;
    __current_stack3__.bzyz_112 = &bzyz_112;
    __current_stack3__.azyz_113 = &azyz_113;
    __current_stack3__.n_114 = &n_114;
    __current_stack3__.liX_115 = &liX_115;
    __current_stack3__.liX2_121 = &liX2_121;
    __current_stack3__.aX_128 = &aX_128;
    __current_stack3__.aXYZY_132 = &aXYZY_132;
    __current_stack3__.li_133 = &li_133;
    __current_stack3__.li2_135 = &li2_135;
    __current_stack3__.aXL_137 = &aXL_137;
    list$1int_each(li2_135,&__current_stack3__,method_block3_code2HelloWorld2c);
    xassert("var of method block",aXL_137==2);
    xassert("list::item",list$1int_item(li2_135,0,-1)==1);
    list$1int_insert(li2_135,1,5);
    xassert("list::insert",list$1int_item(li2_135,0,-1)==1&&list$1int_item(li2_135,1,-1)==5&&list$1int_item(li2_135,2,-1)==2&&list$1int_item(li2_135,3,-1)==3);
    list$1charph_insert(li_133,1,(char*)come_increment_ref_count(((char*)(right_value102=__builtin_string("GGG")))));
    right_value102 = come_decrement_ref_count(right_value102, 1, 0);
    xassert("list::insert",strcmp(list$1charph_item(li_133,0,-1),"ABC")==0&&strcmp(list$1charph_item(li_133,1,-1),"GGG")==0&&strcmp(list$1charph_item(li_133,2,-1),"DEF")==0&&strcmp(list$1charph_item(li_133,3,-1),"GHI")==0);
    list$1charph_reset(li_133);
    xassert("list::reset",list$1charph_length(li_133)==0);
    list$1int_delete(li2_135,0,1);
    xassert("list::delete",list$1int_item(li2_135,0,-1)==5&&list$1int_item(li2_135,1,-1)==2&&list$1int_item(li2_135,2,-1)==3);
    li3_168=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1)))))))));
    call_finalizer(list$1charph_finalize,right_value104,0, 1, 0);
    list$1charph_push_back(li3_168,(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string("AAA")))));
    right_value105 = come_decrement_ref_count(right_value105, 1, 0);
    list$1charph_push_back(li3_168,(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string("BBB")))));
    right_value106 = come_decrement_ref_count(right_value106, 1, 0);
    list$1charph_push_back(li3_168,(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string("CCC")))));
    right_value107 = come_decrement_ref_count(right_value107, 1, 0);
    list$1charph_replace(li3_168,0,(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string("ABC")))));
    right_value108 = come_decrement_ref_count(right_value108, 1, 0);
    xassert("list::replace",strcmp(list$1charph_item(li3_168,0,((void*)0)),"ABC")==0&&strcmp(list$1charph_item(li3_168,1,((void*)0)),"BBB")==0&&strcmp(list$1charph_item(li3_168,2,((void*)0)),"CCC")==0);
    li4_171=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value110=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value109=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value110,0, 1, 0);
    list$1int_push_back(li4_171,1);
    list$1int_push_back(li4_171,3);
    list$1int_push_back(li4_171,5);
    li5_172=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value112=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value111=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value112,0, 1, 0);
    list$1int_push_back(li5_172,1);
    list$1int_push_back(li5_172,3);
    list$1int_push_back(li5_172,5);
    xassert("list::equals",list$1int_equals(li4_171,li5_172));
    xassert("list::find",list$1int_find(li4_171,5,-1)==2);
    li6_177=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value114=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value113=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value114,0, 1, 0);
    list$1int_push_back(li6_177,3);
    list$1int_push_back(li6_177,5);
    xassert("list::sublist",list$1int_equals(((struct list$1int*)(right_value117=list$1int_sublist(li5_172,1,-1))),li6_177));
    call_finalizer(list$1int_finalize,right_value117,0, 1, 0);
    if(axyzX_181) {(int*)come_decrement_ref_count(axyzX_181,0,0); }
    axyzX_181=(int*)come_increment_ref_count(((int*)(right_value118=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value118 = come_decrement_ref_count(right_value118, 1, 0);
    if(axyzX_181) {(int*)come_decrement_ref_count(axyzX_181,0,0); }
    axyzX_181=(int*)come_increment_ref_count(((int*)(right_value119=(int*)come_calloc(1, sizeof(int)*(1)))));
    right_value119 = come_decrement_ref_count(right_value119, 1, 0);
    xassert("operator equals",string_operator_equals(((char*)(right_value120=__builtin_string("AAA"))),((char*)(right_value121=__builtin_string("AAA")))));
    right_value120 = come_decrement_ref_count(right_value120, 1, 0);
    right_value121 = come_decrement_ref_count(right_value121, 1, 0);
    xassert("operator test",string_operator_equals(((char*)(right_value122=char_operator_add("AAA","BBB"))),"AAABBB"));
    right_value122 = come_decrement_ref_count(right_value122, 1, 0);
    strXYXY_182="ABC";
    xassert("operator test",*(strXYXY_182+1)==66);
    liZ_183=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value124=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value123=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value124,0, 1, 0);
    list$1int_push_back(liZ_183,1);
    list$1int_push_back(liZ_183,2);
    list$1int_push_back(liZ_183,3);
    __current_stack4__.p_92 = &p_92;
    __current_stack4__.p2_93 = &p2_93;
    __current_stack4__.count_94 = &count_94;
    __current_stack4__.size2_95 = &size2_95;
    __current_stack4__.mem2_96 = &mem2_96;
    __current_stack4__.b_97 = &b_97;
    __current_stack4__.a_98 = &a_98;
    __current_stack4__.a2_99 = &a2_99;
    __current_stack4__.ax_102 = &ax_102;
    __current_stack4__.str_106 = &str_106;
    __current_stack4__.data_107 = &data_107;
    __current_stack4__.axyz_108 = &axyz_108;
    __current_stack4__.xxx_109 = &xxx_109;
    __current_stack4__.yyy_110 = &yyy_110;
    __current_stack4__.zzz_111 = &zzz_111;
    __current_stack4__.bzyz_112 = &bzyz_112;
    __current_stack4__.azyz_113 = &azyz_113;
    __current_stack4__.n_114 = &n_114;
    __current_stack4__.liX_115 = &liX_115;
    __current_stack4__.liX2_121 = &liX2_121;
    __current_stack4__.aX_128 = &aX_128;
    __current_stack4__.aXYZY_132 = &aXYZY_132;
    __current_stack4__.li_133 = &li_133;
    __current_stack4__.li2_135 = &li2_135;
    __current_stack4__.aXL_137 = &aXL_137;
    __current_stack4__.li3_168 = &li3_168;
    __current_stack4__.li4_171 = &li4_171;
    __current_stack4__.li5_172 = &li5_172;
    __current_stack4__.li6_177 = &li6_177;
    __current_stack4__.axyzX_181 = &axyzX_181;
    __current_stack4__.strXYXY_182 = &strXYXY_182;
    __current_stack4__.liZ_183 = &liZ_183;
    list$1int_each(liZ_183,&__current_stack4__,method_block4_code2HelloWorld2c);
    list$1int_operator_store_element(liZ_183,0,777);
    printf("liZ[0] %d\n",list$1int_operator_load_element(liZ_183,0));
    liZ2_187=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value126=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value125=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
    call_finalizer(list$1int_finalize,right_value126,0, 1, 0);
    list$1int_push_back(liZ2_187,777);
    list$1int_push_back(liZ2_187,2);
    list$1int_push_back(liZ2_187,3);
    xassert("list equals",list$1int_operator_equals(liZ_183,liZ2_187));
    {__list_values1___188[0]=1;
__list_values1___188[1]=2;
__list_values1___188[2]=3;
}    {__list_values2___190[0]=1;
__list_values2___190[1]=2;
__list_values2___190[2]=3;
}    xassert("list equals test",list$1int_operator_equals(((struct list$1int*)(right_value128=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value127=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),3,__list_values1___188))),((struct list$1int*)(right_value130=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value129=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),3,__list_values2___190)))));
    call_finalizer(list$1int_finalize,right_value128,0, 1, 0);
    call_finalizer(list$1int_finalize,right_value130,0, 1, 0);
    {__list_values3___191[0]=1;
__list_values3___191[1]=2;
__list_values3___191[2]=3;
__list_values3___191[3]=4;
__list_values3___191[4]=5;
}    __current_stack5__.p_92 = &p_92;
    __current_stack5__.p2_93 = &p2_93;
    __current_stack5__.count_94 = &count_94;
    __current_stack5__.size2_95 = &size2_95;
    __current_stack5__.mem2_96 = &mem2_96;
    __current_stack5__.b_97 = &b_97;
    __current_stack5__.a_98 = &a_98;
    __current_stack5__.a2_99 = &a2_99;
    __current_stack5__.ax_102 = &ax_102;
    __current_stack5__.str_106 = &str_106;
    __current_stack5__.data_107 = &data_107;
    __current_stack5__.axyz_108 = &axyz_108;
    __current_stack5__.xxx_109 = &xxx_109;
    __current_stack5__.yyy_110 = &yyy_110;
    __current_stack5__.zzz_111 = &zzz_111;
    __current_stack5__.bzyz_112 = &bzyz_112;
    __current_stack5__.azyz_113 = &azyz_113;
    __current_stack5__.n_114 = &n_114;
    __current_stack5__.liX_115 = &liX_115;
    __current_stack5__.liX2_121 = &liX2_121;
    __current_stack5__.aX_128 = &aX_128;
    __current_stack5__.aXYZY_132 = &aXYZY_132;
    __current_stack5__.li_133 = &li_133;
    __current_stack5__.li2_135 = &li2_135;
    __current_stack5__.aXL_137 = &aXL_137;
    __current_stack5__.li3_168 = &li3_168;
    __current_stack5__.li4_171 = &li4_171;
    __current_stack5__.li5_172 = &li5_172;
    __current_stack5__.li6_177 = &li6_177;
    __current_stack5__.axyzX_181 = &axyzX_181;
    __current_stack5__.strXYXY_182 = &strXYXY_182;
    __current_stack5__.liZ_183 = &liZ_183;
    __current_stack5__.liZ2_187 = &liZ2_187;
    list$1int_each(((struct list$1int*)(right_value132=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value131=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1))))),5,__list_values3___191))),&__current_stack5__,method_block5_code2HelloWorld2c);
    call_finalizer(list$1int_finalize,right_value132,0, 1, 0);
    {__map_keys1___192[0]="AAA";
__map_element1___193[0]=1;
__map_keys1___192[1]="BBB";
__map_element1___193[1]=2;
}    {__map_keys2___224[0]="AAA";
__map_element2___225[0]=1;
__map_keys2___224[1]="BBB";
__map_element2___225[1]=2;
}    xassert("map equals",map$2charpint_operator_equals(((struct map$2charpint*)(right_value145=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value144=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys1___192,__map_element1___193))),((struct map$2charpint*)(right_value147=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value146=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys2___224,__map_element2___225)))));
    call_finalizer(map$2charpint_finalize,right_value145,0, 1, 0);
    call_finalizer(map$2charpint_finalize,right_value147,0, 1, 0);
    {__map_keys3___236[0]="AAA";
__map_element3___237[0]=1;
__map_keys3___236[1]="BBB";
__map_element3___237[1]=2;
}    m1_238=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value149=map$2charpint_initialize_with_values((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value148=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1))))),2,__map_keys3___236,__map_element3___237))));
    call_finalizer(map$2charpint_finalize,right_value149,0, 1, 0);
    printf("%d %d\n",map$2charpint_operator_load_element(m1_238,"AAA"),map$2charpint_operator_load_element(m1_238,"BBB"));
    m2_249=(struct map$2charpint*)come_increment_ref_count(map$2charpint_clone(m1_238));
    printf("%d %d\n",map$2charpint_operator_load_element(m2_249,"AAA"),map$2charpint_operator_load_element(m2_249,"BBB"));
    xassert("map clone",map$2charpint_operator_equals(m1_238,m2_249));
    tt1_250=(struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value158=tuple1$1int_initialize((struct tuple1$1int*)come_increment_ref_count(((struct tuple1$1int*)(right_value157=(struct tuple1$1int*)come_calloc(1, sizeof(struct tuple1$1int)*(1))))),1))));
    call_finalizer(tuple1$1int_finalize,right_value158,0, 1, 0);
    tt1_250->v1=111;
    printf("%d\n",tt1_250->v1);
    int __result159__ = 0;
    ax_102 = come_decrement_ref_count(ax_102, 0, 0);
    str_106 = come_decrement_ref_count(str_106, 0, 0);
    call_finalizer(sData_finalize,data_107,0, 0, 0);
    axyz_108 = come_decrement_ref_count(axyz_108, 0, 0);
    xxx_109 = come_decrement_ref_count(xxx_109, 0, 0);
    yyy_110 = come_decrement_ref_count(yyy_110, 0, 0);
    zzz_111 = come_decrement_ref_count(zzz_111, 0, 0);
    call_finalizer(list$1charph_finalize,liX_115,0, 0, 0);
    call_finalizer(list$1int_finalize,liX2_121,0, 0, 0);
    call_finalizer(list$1charph_finalize,li_133,0, 0, 0);
    call_finalizer(list$1int_finalize,li2_135,0, 0, 0);
    call_finalizer(list$1charph_finalize,li3_168,0, 0, 0);
    call_finalizer(list$1int_finalize,li4_171,0, 0, 0);
    call_finalizer(list$1int_finalize,li5_172,0, 0, 0);
    call_finalizer(list$1int_finalize,li6_177,0, 0, 0);
    axyzX_181 = come_decrement_ref_count(axyzX_181, 0, 0);
    call_finalizer(list$1int_finalize,liZ_183,0, 0, 0);
    call_finalizer(list$1int_finalize,liZ2_187,0, 0, 0);
    call_finalizer(map$2charpint_finalize,m1_238,0, 0, 0);
    call_finalizer(map$2charpint_finalize,m2_249,0, 0, 0);
    call_finalizer(tuple1$1int_finalize,tt1_250,0, 0, 0);
    return __result159__;
}

static void sData_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1_code2HelloWorld2c(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_114)));
        (*(parent->n_114))++;
}

static char* list$1charph_begin(struct list$1charph* self){
char* result_116;
memset(&result_116, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result108__ = self->it->item;
            return __result108__;
        }
        memset(&result_116,0,sizeof(char*));
        char* __result109__ = result_116;
        return __result109__;
}

static _Bool list$1charph_end(struct list$1charph* self){
        _Bool __result110__ = self->it==((void*)0);
        return __result110__;
}

static char* list$1charph_next(struct list$1charph* self){
char* result_118;
memset(&result_118, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result111__ = self->it->item;
            return __result111__;
        }
        memset(&result_118,0,sizeof(char*));
        char* __result112__ = result_118;
        return __result112__;
}

static struct list$1int* list$1int_initialize(struct list$1int* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$1int* __result113__ = self;
        call_finalizer(list$1int_finalize,self,0, 0, 1);
        return __result113__;
}

static void list$1int_finalize(struct list$1int* self){
struct list_item$1int* it_119;
struct list_item$1int* prev_it_120;
memset(&it_119, 0, sizeof(struct list_item$1int*));
memset(&prev_it_120, 0, sizeof(struct list_item$1int*));
            it_119=self->head;
            while(it_119!=((void*)0)) {
                if(0) {
                }
                prev_it_120=it_119;
                it_119=it_119->next;
                come_free_object(prev_it_120);
            }
}

static void list$1int_push_back(struct list$1int* self, int item){
void* right_value86;
struct list_item$1int* litem_122;
void* right_value87;
struct list_item$1int* litem_123;
void* right_value88;
struct list_item$1int* litem_124;
memset(&litem_122, 0, sizeof(struct list_item$1int*));
memset(&litem_123, 0, sizeof(struct list_item$1int*));
memset(&litem_124, 0, sizeof(struct list_item$1int*));
        if(self->len==0) {
            litem_122=((struct list_item$1int*)(right_value86=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_122->prev=((void*)0);
            litem_122->next=((void*)0);
            litem_122->item=item;
            self->tail=litem_122;
            self->head=litem_122;
        }
        else if(self->len==1) {
            litem_123=((struct list_item$1int*)(right_value87=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_123->prev=self->head;
            litem_123->next=((void*)0);
            litem_123->item=item;
            self->tail=litem_123;
            self->head->next=litem_123;
        }
        else {
            litem_124=((struct list_item$1int*)(right_value88=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_124->prev=self->tail;
            litem_124->next=((void*)0);
            litem_124->item=item;
            self->tail->next=litem_124;
            self->tail=litem_124;
        }
        self->len++;
}

static int list$1int_begin(struct list$1int* self){
int result_125;
memset(&result_125, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result114__ = self->it->item;
            return __result114__;
        }
        memset(&result_125,0,sizeof(int));
        int __result115__ = result_125;
        return __result115__;
}

static _Bool list$1int_end(struct list$1int* self){
        _Bool __result116__ = self->it==((void*)0);
        return __result116__;
}

static int list$1int_next(struct list$1int* self){
int result_127;
memset(&result_127, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result117__ = self->it->item;
            return __result117__;
        }
        memset(&result_127,0,sizeof(int));
        int __result118__ = result_127;
        return __result118__;
}

static void list$1int_each(struct list$1int* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item$1int* it_129;
int i_130;
_Bool end_flag_131;
memset(&it_129, 0, sizeof(struct list_item$1int*));
memset(&i_130, 0, sizeof(int));
memset(&end_flag_131, 0, sizeof(_Bool));
        it_129=self->head;
        i_130=0;
        while(it_129!=((void*)0)) {
            end_flag_131=(_Bool)0;
            block(parent,it_129->item,i_130,&end_flag_131);
            if(end_flag_131==(_Bool)1) {
                break;
            }
            it_129=it_129->next;
            i_130++;
        }
}

void method_block2_code2HelloWorld2c(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_128)));
        (*(parent->aX_128))=2;
}

void method_block3_code2HelloWorld2c(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_137)));
        (*(parent->aXL_137))=2;
}

static int list$1int_item(struct list$1int* self, int position, int default_value){
struct list_item$1int* it_138;
int i_139;
memset(&it_138, 0, sizeof(struct list_item$1int*));
memset(&i_139, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_138=self->head;
        i_139=0;
        while(it_138!=((void*)0)) {
            if(position==i_139) {
                int __result119__ = it_138->item;
                return __result119__;
            }
            it_138=it_138->next;
            i_139++;
        }
        int __result120__ = default_value;
        return __result120__;
}

static void list$1int_insert(struct list$1int* self, int position, int item){
void* right_value96;
struct list_item$1int* litem_140;
void* right_value97;
struct list_item$1int* litem_141;
struct list_item$1int* it_142;
int i_143;
void* right_value98;
struct list_item$1int* litem_144;
memset(&litem_140, 0, sizeof(struct list_item$1int*));
memset(&litem_141, 0, sizeof(struct list_item$1int*));
memset(&it_142, 0, sizeof(struct list_item$1int*));
memset(&i_143, 0, sizeof(int));
memset(&litem_144, 0, sizeof(struct list_item$1int*));
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
            litem_140=((struct list_item$1int*)(right_value96=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_140->prev=((void*)0);
            litem_140->next=self->head;
            litem_140->item=item;
            self->head->prev=litem_140;
            self->head=litem_140;
            self->len++;
        }
        else if(self->len==1) {
            litem_141=((struct list_item$1int*)(right_value97=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
            litem_141->prev=self->head;
            litem_141->next=self->tail;
            litem_141->item=item;
            self->tail->prev=litem_141;
            self->head->next=litem_141;
            self->len++;
        }
        else {
            it_142=self->head;
            i_143=0;
            while(it_142!=((void*)0)) {
                if(position==i_143) {
                    litem_144=((struct list_item$1int*)(right_value98=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1))));
                    litem_144->prev=it_142->prev;
                    litem_144->next=it_142;
                    litem_144->item=item;
                    it_142->prev->next=litem_144;
                    it_142->prev=litem_144;
                    self->len++;
                }
                it_142=it_142->next;
                i_143++;
            }
        }
}

static void list$1charph_insert(struct list$1charph* self, int position, char* item){
void* right_value99;
struct list_item$1charph* litem_145;
void* right_value100;
struct list_item$1charph* litem_146;
struct list_item$1charph* it_147;
int i_148;
void* right_value101;
struct list_item$1charph* litem_149;
memset(&litem_145, 0, sizeof(struct list_item$1charph*));
memset(&litem_146, 0, sizeof(struct list_item$1charph*));
memset(&it_147, 0, sizeof(struct list_item$1charph*));
memset(&i_148, 0, sizeof(int));
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
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
            litem_145=((struct list_item$1charph*)(right_value99=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_145->prev=((void*)0);
            litem_145->next=self->head;
            if(litem_145->item) {(char*)come_decrement_ref_count(litem_145->item,0,0); }
            litem_145->item=(char*)come_increment_ref_count(item);
            self->head->prev=litem_145;
            self->head=litem_145;
            self->len++;
        }
        else if(self->len==1) {
            litem_146=((struct list_item$1charph*)(right_value100=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
            litem_146->prev=self->head;
            litem_146->next=self->tail;
            if(litem_146->item) {(char*)come_decrement_ref_count(litem_146->item,0,0); }
            litem_146->item=(char*)come_increment_ref_count(item);
            self->tail->prev=litem_146;
            self->head->next=litem_146;
            self->len++;
        }
        else {
            it_147=self->head;
            i_148=0;
            while(it_147!=((void*)0)) {
                if(position==i_148) {
                    litem_149=((struct list_item$1charph*)(right_value101=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1))));
                    litem_149->prev=it_147->prev;
                    litem_149->next=it_147;
                    if(litem_149->item) {(char*)come_decrement_ref_count(litem_149->item,0,0); }
                    litem_149->item=(char*)come_increment_ref_count(item);
                    it_147->prev->next=litem_149;
                    it_147->prev=litem_149;
                    self->len++;
                }
                it_147=it_147->next;
                i_148++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$1charph_item(struct list$1charph* self, int position, char* default_value){
struct list_item$1charph* it_150;
int i_151;
memset(&it_150, 0, sizeof(struct list_item$1charph*));
memset(&i_151, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_150=self->head;
        i_151=0;
        while(it_150!=((void*)0)) {
            if(position==i_151) {
                char* __result121__ = it_150->item;
                return __result121__;
            }
            it_150=it_150->next;
            i_151++;
        }
        char* __result122__ = default_value;
        return __result122__;
}

static void list$1charph_reset(struct list$1charph* self){
struct list_item$1charph* it_152;
struct list_item$1charph* prev_it_153;
memset(&it_152, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_153, 0, sizeof(struct list_item$1charph*));
        it_152=self->head;
        while(it_152!=((void*)0)) {
            prev_it_153=it_152;
            if(1) {
                it_152->item = come_decrement_ref_count(it_152->item, 0, 0);
            }
            it_152=it_152->next;
            call_finalizer(list_item$1charph_finalize,prev_it_153,0, 0, 0);
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
        int __result123__ = self->len;
        return __result123__;
}

static void list$1int_delete(struct list$1int* self, int head, int tail){
int tmp_154;
struct list_item$1int* it_157;
int i_158;
struct list_item$1int* prev_it_159;
struct list_item$1int* it_160;
int i_161;
struct list_item$1int* prev_it_162;
struct list_item$1int* it_163;
struct list_item$1int* head_prev_it_164;
struct list_item$1int* tail_it_165;
int i_166;
struct list_item$1int* prev_it_167;
memset(&tmp_154, 0, sizeof(int));
memset(&it_157, 0, sizeof(struct list_item$1int*));
memset(&i_158, 0, sizeof(int));
memset(&prev_it_159, 0, sizeof(struct list_item$1int*));
memset(&it_160, 0, sizeof(struct list_item$1int*));
memset(&i_161, 0, sizeof(int));
memset(&prev_it_162, 0, sizeof(struct list_item$1int*));
memset(&it_163, 0, sizeof(struct list_item$1int*));
memset(&head_prev_it_164, 0, sizeof(struct list_item$1int*));
memset(&tail_it_165, 0, sizeof(struct list_item$1int*));
memset(&i_166, 0, sizeof(int));
memset(&prev_it_167, 0, sizeof(struct list_item$1int*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_154=tail;
            tail=head;
            head=tmp_154;
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
            it_157=self->head;
            i_158=0;
            while(it_157!=((void*)0)) {
                if(i_158<tail) {
                    prev_it_159=it_157;
                    it_157=it_157->next;
                    i_158++;
                    call_finalizer(list_item$1int_finalize,prev_it_159,0, 0, 0);
                    self->len--;
                }
                else if(i_158==tail) {
                    self->head=it_157;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_157=it_157->next;
                    i_158++;
                }
            }
        }
        else if(tail==self->len) {
            it_160=self->head;
            i_161=0;
            while(it_160!=((void*)0)) {
                if(i_161==head) {
                    self->tail=it_160->prev;
                    self->tail->next=((void*)0);
                }
                if(i_161>=head) {
                    prev_it_162=it_160;
                    it_160=it_160->next;
                    i_161++;
                    call_finalizer(list_item$1int_finalize,prev_it_162,0, 0, 0);
                    self->len--;
                }
                else {
                    it_160=it_160->next;
                    i_161++;
                }
            }
        }
        else {
            it_163=self->head;
            head_prev_it_164=((void*)0);
            tail_it_165=((void*)0);
            i_166=0;
            while(it_163!=((void*)0)) {
                if(i_166==head) {
                    head_prev_it_164=it_163->prev;
                }
                if(i_166==tail) {
                    tail_it_165=it_163;
                }
                if(i_166>=head&&i_166<tail) {
                    prev_it_167=it_163;
                    it_163=it_163->next;
                    i_166++;
                    call_finalizer(list_item$1int_finalize,prev_it_167,0, 0, 0);
                    self->len--;
                }
                else {
                    it_163=it_163->next;
                    i_166++;
                }
            }
            if(head_prev_it_164!=((void*)0)) {
                head_prev_it_164->next=tail_it_165;
            }
            if(tail_it_165!=((void*)0)) {
                tail_it_165->prev=head_prev_it_164;
            }
        }
}

static void list$1int_reset(struct list$1int* self){
struct list_item$1int* it_155;
struct list_item$1int* prev_it_156;
memset(&it_155, 0, sizeof(struct list_item$1int*));
memset(&prev_it_156, 0, sizeof(struct list_item$1int*));
                it_155=self->head;
                while(it_155!=((void*)0)) {
                    prev_it_156=it_155;
                    if(0) {
                    }
                    it_155=it_155->next;
                    call_finalizer(list_item$1int_finalize,prev_it_156,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$1int_finalize(struct list_item$1int* self){
}

static void list$1charph_replace(struct list$1charph* self, int position, char* item){
struct list_item$1charph* it_169;
int i_170;
memset(&it_169, 0, sizeof(struct list_item$1charph*));
memset(&i_170, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_169=self->head;
        i_170=0;
        while(it_169!=((void*)0)) {
            if(position==i_170) {
                if(it_169->item) {(char*)come_decrement_ref_count(it_169->item,0,0); }
                it_169->item=(char*)come_increment_ref_count(item);
                break;
            }
            it_169=it_169->next;
            i_170++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static _Bool list$1int_equals(struct list$1int* left, struct list$1int* right){
struct list_item$1int* it_173;
struct list_item$1int* it2_174;
memset(&it_173, 0, sizeof(struct list_item$1int*));
memset(&it2_174, 0, sizeof(struct list_item$1int*));
        if(left->len!=right->len) {
            _Bool __result124__ = (_Bool)0;
            return __result124__;
        }
        it_173=left->head;
        it2_174=right->head;
        while(it_173!=((void*)0)) {
            if(!int_equals(it_173->item,it2_174->item)) {
                _Bool __result125__ = (_Bool)0;
                return __result125__;
            }
            it_173=it_173->next;
            it2_174=it2_174->next;
        }
        _Bool __result126__ = (_Bool)1;
        return __result126__;
}

static int list$1int_find(struct list$1int* self, int item, int default_value){
int it2_175;
struct list_item$1int* it_176;
memset(&it2_175, 0, sizeof(int));
memset(&it_176, 0, sizeof(struct list_item$1int*));
        it2_175=0;
        it_176=self->head;
        while(it_176!=((void*)0)) {
            if(int_equals(it_176->item,item)) {
                int __result127__ = it2_175;
                return __result127__;
            }
            it2_175++;
            it_176=it_176->next;
        }
        int __result128__ = default_value;
        return __result128__;
}

static struct list$1int* list$1int_sublist(struct list$1int* self, int begin, int tail){
void* right_value115;
void* right_value116;
struct list$1int* result_178;
struct list_item$1int* it_179;
int i_180;
memset(&result_178, 0, sizeof(struct list$1int*));
memset(&it_179, 0, sizeof(struct list_item$1int*));
memset(&i_180, 0, sizeof(int));
        result_178=(struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value116=list$1int_initialize((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value115=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1)))))))));
        call_finalizer(list$1int_finalize,right_value116,0, 1, 0);
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
        it_179=self->head;
        i_180=0;
        while(it_179!=((void*)0)) {
            if(i_180>=begin&&i_180<tail) {
                list$1int_push_back(result_178,it_179->item);
            }
            it_179=it_179->next;
            i_180++;
        }
        struct list$1int* __result129__ = result_178;
        call_finalizer(list$1int_finalize,result_178,0, 0, 1);
        return __result129__;
}

void method_block4_code2HelloWorld2c(struct __current_stack4__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static void list$1int_operator_store_element(struct list$1int* self, int position, int item){
        list$1int_replace(self,position,item);
}

static void list$1int_replace(struct list$1int* self, int position, int item){
struct list_item$1int* it_184;
int i_185;
memset(&it_184, 0, sizeof(struct list_item$1int*));
memset(&i_185, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_184=self->head;
            i_185=0;
            while(it_184!=((void*)0)) {
                if(position==i_185) {
                    it_184->item=item;
                    break;
                }
                it_184=it_184->next;
                i_185++;
            }
}

static int list$1int_operator_load_element(struct list$1int* self, int index){
int default_value_186;
memset(&default_value_186, 0, sizeof(int));
        memset(&default_value_186,0,sizeof(int));
        int __result130__ = list$1int_item(self,index,default_value_186);
        return __result130__;
}

static _Bool list$1int_operator_equals(struct list$1int* self, struct list$1int* right){
        _Bool __result131__ = list$1int_equals(self,right);
        return __result131__;
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
int i_189;
memset(&i_189, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(
        i_189=0;
        i_189<num_value;
        i_189++
        ){
            list$1int_push_back(self,values[i_189]);
        }
        struct list$1int* __result132__ = self;
        call_finalizer(list$1int_finalize,self,0, 0, 1);
        return __result132__;
}

void method_block5_code2HelloWorld2c(struct __current_stack5__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static struct map$2charpint* map$2charpint_initialize_with_values(struct map$2charpint* self, int num_keys, char** keys, int* values){
void* right_value133;
void* right_value134;
void* right_value135;
int i_194;
void* right_value136;
void* right_value137;
int i_197;
memset(&i_194, 0, sizeof(int));
memset(&i_197, 0, sizeof(int));
        self->keys=((char***)(right_value133=(char***)come_calloc(1, sizeof(char**)*(1*(128)))));
        self->items=((int**)(right_value134=(int**)come_calloc(1, sizeof(int*)*(1*(128)))));
        self->item_existance=((_Bool**)(right_value135=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(128)))));
        for(
        i_194=0;
        i_194<128;
        i_194++
        ){
            self->item_existance[i_194]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        self->it=0;
        if(self->key_list) {(struct list$1charp*)come_decrement_ref_count(self->key_list,0,0); }
        self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value137=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value136=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
        call_finalizer(list$1charp_finalize,right_value137,0, 1, 0);
        for(
        i_197=0;
        i_197<num_keys;
        i_197++
        ){
            map$2charpint_insert(self,keys[i_197],values[i_197]);
        }
        struct map$2charpint* __result148__ = self;
        call_finalizer(map$2charpint_finalize,self,0, 0, 1);
        return __result148__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$1charp* __result133__ = self;
            call_finalizer(list$1charp_finalize,self,0, 0, 1);
            return __result133__;
}

static void list$1charp_finalize(struct list$1charp* self){
struct list_item$1charp* it_195;
struct list_item$1charp* prev_it_196;
memset(&it_195, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_196, 0, sizeof(struct list_item$1charp*));
                it_195=self->head;
                while(it_195!=((void*)0)) {
                    if(0) {
                        it_195->item = come_decrement_ref_count(it_195->item, 0, 0);
                    }
                    prev_it_196=it_195;
                    it_195=it_195->next;
                    come_free_object(prev_it_196);
                }
}

static void map$2charpint_insert(struct map$2charpint* self, char* key, int item){
int hash_213;
int it_214;
_Bool same_key_exist_215;
char* it2_217;
memset(&hash_213, 0, sizeof(int));
memset(&it_214, 0, sizeof(int));
memset(&same_key_exist_215, 0, sizeof(_Bool));
memset(&it2_217, 0, sizeof(char*));
                if(self->len*2>=self->size) {
                    map$2charpint_rehash(self);
                }
                hash_213=char_get_hash_key(key)%self->size;
                it_214=hash_213;
                while((_Bool)1) {
                    if(self->item_existance[it_214]) {
                        if(char_equals(self->keys[it_214],key)) {
                            if(0) {
                                self->keys[it_214] = come_decrement_ref_count(self->keys[it_214], 0, 0);
                                self->keys[it_214]=key;
                            }
                            else {
                                self->keys[it_214]=key;
                            }
                            if(0) {
                                self->items[it_214]=item;
                            }
                            else {
                                self->items[it_214]=item;
                            }
                            break;
                        }
                        it_214++;
                        if(it_214>=self->size) {
                            it_214=0;
                        }
                        else if(it_214==hash_213) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_214]=(_Bool)1;
                        if(0) {
                            self->keys[it_214] = come_decrement_ref_count(self->keys[it_214], 0, 0);
                            self->keys[it_214]=key;
                        }
                        else {
                            self->keys[it_214]=key;
                        }
                        if(0) {
                            self->items[it_214]=item;
                        }
                        else {
                            self->items[it_214]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_215=(_Bool)0;
                for(
                it2_217=list$1charp_begin(self->key_list);
                !list$1charp_end(self->key_list);
                it_214=list$1charp_next(self->key_list)
                ){
                    if(char_equals(it2_217,key)) {
                        same_key_exist_215=(_Bool)1;
                    }
                }
                if(!same_key_exist_215) {
                    list$1charp_push_back(self->key_list,key);
                }
}

static void map$2charpint_rehash(struct map$2charpint* self){
int size_198;
void* right_value138;
char** keys_199;
void* right_value139;
int* items_200;
void* right_value140;
_Bool* item_existance_201;
int len_202;
char* it_204;
int default_value_206;
int it2_209;
int hash_210;
int n_211;
int default_value_212;
memset(&size_198, 0, sizeof(int));
memset(&keys_199, 0, sizeof(char**));
memset(&items_200, 0, sizeof(int*));
memset(&item_existance_201, 0, sizeof(_Bool*));
memset(&len_202, 0, sizeof(int));
memset(&it_204, 0, sizeof(char*));
memset(&default_value_206, 0, sizeof(int));
memset(&it2_209, 0, sizeof(int));
memset(&hash_210, 0, sizeof(int));
memset(&n_211, 0, sizeof(int));
memset(&default_value_212, 0, sizeof(int));
                        size_198=self->size*3;
                        keys_199=((char***)(right_value138=(char***)come_calloc(1, sizeof(char**)*(1*(size_198)))));
                        items_200=((int**)(right_value139=(int**)come_calloc(1, sizeof(int*)*(1*(size_198)))));
                        item_existance_201=((_Bool**)(right_value140=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(size_198)))));
                        len_202=0;
                        for(
                        it_204=map$2charpint_begin(self);
                        !map$2charpint_end(self);
                        it_204=map$2charpint_next(self)
                        ){
                            it2_209=map$2charpint_at(self,it_204,default_value_206);
                            hash_210=char_get_hash_key(it_204)%size_198;
                            n_211=hash_210;
                            while((_Bool)1) {
                                if(item_existance_201[n_211]) {
                                    n_211++;
                                    if(n_211>=size_198) {
                                        n_211=0;
                                    }
                                    else if(n_211==hash_210) {
                                        fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                        exit(2);
                                    }
                                }
                                else {
                                    item_existance_201[n_211]=(_Bool)1;
                                    keys_199[n_211]=it_204;
                                    items_200[n_211]=map$2charpint_at(self,it_204,default_value_212);
                                    len_202++;
                                    break;
                                }
                            }
                        }
                        come_free_object((char*)self->items);
                        self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
                        come_free_object((char*)self->keys);
                        self->keys=keys_199;
                        self->items=items_200;
                        self->item_existance=item_existance_201;
                        self->size=size_198;
                        self->len=len_202;
}

static char* map$2charpint_begin(struct map$2charpint* self){
char* result_203;
memset(&result_203, 0, sizeof(char*));
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                char* __result134__ = self->key_list->it->item;
                                return __result134__;
                            }
                            memset(&result_203,0,sizeof(char*));
                            char* __result135__ = result_203;
                            return __result135__;
}

static _Bool map$2charpint_end(struct map$2charpint* self){
                            _Bool __result136__ = self->key_list->it==((void*)0);
                            return __result136__;
}

static char* map$2charpint_next(struct map$2charpint* self){
char* result_205;
memset(&result_205, 0, sizeof(char*));
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                char* __result137__ = self->key_list->it->item;
                                return __result137__;
                            }
                            memset(&result_205,0,sizeof(char*));
                            char* __result138__ = result_205;
                            return __result138__;
}

static int map$2charpint_at(struct map$2charpint* self, char* key, int default_value){
int hash_207;
int it_208;
memset(&hash_207, 0, sizeof(int));
memset(&it_208, 0, sizeof(int));
                                hash_207=char_get_hash_key(((char*)key))%self->size;
                                it_208=hash_207;
                                while((_Bool)1) {
                                    if(self->item_existance[it_208]) {
                                        if(char_equals(self->keys[it_208],key)) {
                                            int __result139__ = self->items[it_208];
                                            return __result139__;
                                        }
                                        it_208++;
                                        if(it_208>=self->size) {
                                            it_208=0;
                                        }
                                        else if(it_208==hash_207) {
                                            int __result140__ = default_value;
                                            return __result140__;
                                        }
                                    }
                                    else {
                                        int __result141__ = default_value;
                                        return __result141__;
                                    }
                                }
                                int __result142__ = default_value;
                                return __result142__;
}

static char* list$1charp_begin(struct list$1charp* self){
char* result_216;
memset(&result_216, 0, sizeof(char*));
                    self->it=self->head;
                    if(self->it) {
                        char* __result143__ = self->it->item;
                        return __result143__;
                    }
                    memset(&result_216,0,sizeof(char*));
                    char* __result144__ = result_216;
                    return __result144__;
}

static _Bool list$1charp_end(struct list$1charp* self){
                    _Bool __result145__ = self->it==((void*)0);
                    return __result145__;
}

static char* list$1charp_next(struct list$1charp* self){
char* result_218;
memset(&result_218, 0, sizeof(char*));
                    self->it=self->it->next;
                    if(self->it) {
                        char* __result146__ = self->it->item;
                        return __result146__;
                    }
                    memset(&result_218,0,sizeof(char*));
                    char* __result147__ = result_218;
                    return __result147__;
}

static void list$1charp_push_back(struct list$1charp* self, char* item){
void* right_value141;
struct list_item$1charp* litem_219;
void* right_value142;
struct list_item$1charp* litem_220;
void* right_value143;
struct list_item$1charp* litem_221;
memset(&litem_219, 0, sizeof(struct list_item$1charp*));
memset(&litem_220, 0, sizeof(struct list_item$1charp*));
memset(&litem_221, 0, sizeof(struct list_item$1charp*));
                        if(self->len==0) {
                            litem_219=((struct list_item$1charp*)(right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_219->prev=((void*)0);
                            litem_219->next=((void*)0);
                            litem_219->item=item;
                            self->tail=litem_219;
                            self->head=litem_219;
                        }
                        else if(self->len==1) {
                            litem_220=((struct list_item$1charp*)(right_value142=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_220->prev=self->head;
                            litem_220->next=((void*)0);
                            litem_220->item=item;
                            self->tail=litem_220;
                            self->head->next=litem_220;
                        }
                        else {
                            litem_221=((struct list_item$1charp*)(right_value143=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1))));
                            litem_221->prev=self->tail;
                            litem_221->next=((void*)0);
                            litem_221->item=item;
                            self->tail->next=litem_221;
                            self->tail=litem_221;
                        }
                        self->len++;
}

static void map$2charpint_finalize(struct map$2charpint* self){
int i_222;
int i_223;
memset(&i_222, 0, sizeof(int));
memset(&i_223, 0, sizeof(int));
            for(
            i_222=0;
            i_222<self->size;
            i_222++
            ){
                if(self->item_existance[i_222]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_223=0;
            i_223<self->size;
            i_223++
            ){
                if(self->item_existance[i_223]) {
                    if(0) {
                        self->keys[i_223] = come_decrement_ref_count(self->keys[i_223], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$1charp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static _Bool map$2charpint_operator_equals(struct map$2charpint* left, struct map$2charpint* right){
        _Bool __result153__ = map$2charpint_equals(left,right);
        return __result153__;
}

static _Bool map$2charpint_equals(struct map$2charpint* left, struct map$2charpint* right){
int n_226;
_Bool result_227;
char* it_228;
char* default_value_229;
char* it2_232;
int default_value2_233;
int item_234;
int item2_235;
memset(&n_226, 0, sizeof(int));
memset(&result_227, 0, sizeof(_Bool));
memset(&it_228, 0, sizeof(char*));
memset(&default_value_229, 0, sizeof(char*));
memset(&it2_232, 0, sizeof(char*));
memset(&default_value2_233, 0, sizeof(int));
memset(&item_234, 0, sizeof(int));
memset(&item2_235, 0, sizeof(int));
            if(left->len!=right->len) {
                _Bool __result149__ = (_Bool)0;
                return __result149__;
            }
            n_226=0;
            result_227=(_Bool)1;
            for(
            it_228=list$1charp_begin(left->key_list);
            !list$1charp_end(left->key_list);
            it_228=list$1charp_next(left->key_list)
            ){
                it2_232=list$1charp_item(right->key_list,n_226,default_value_229);
                if(char_equals(it_228,it2_232)) {
                    item_234=map$2charpint_at(left,it_228,default_value2_233);
                    item2_235=map$2charpint_at(left,it2_232,default_value2_233);
                    if(!int_equals(item_234,item2_235)) {
                        result_227=(_Bool)0;
                    }
                }
                else {
                    result_227=(_Bool)0;
                }
                n_226++;
            }
            _Bool __result152__ = result_227;
            return __result152__;
}

static char* list$1charp_item(struct list$1charp* self, int position, char* default_value){
struct list_item$1charp* it_230;
int i_231;
memset(&it_230, 0, sizeof(struct list_item$1charp*));
memset(&i_231, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_230=self->head;
                    i_231=0;
                    while(it_230!=((void*)0)) {
                        if(position==i_231) {
                            char* __result150__ = it_230->item;
                            return __result150__;
                        }
                        it_230=it_230->next;
                        i_231++;
                    }
                    char* __result151__ = default_value;
                    return __result151__;
}

static int map$2charpint_operator_load_element(struct map$2charpint* self, char* key){
int default_value_239;
memset(&default_value_239, 0, sizeof(int));
        memset(&default_value_239,0,sizeof(int));
        int __result154__ = map$2charpint_at(self,key,default_value_239);
        return __result154__;
}

static struct map$2charpint* map$2charpint_clone(struct map$2charpint* self){
void* right_value150;
void* right_value156;
struct map$2charpint* result_241;
char* it_242;
int default_value_243;
int it2_244;
memset(&result_241, 0, sizeof(struct map$2charpint*));
memset(&it_242, 0, sizeof(char*));
memset(&default_value_243, 0, sizeof(int));
memset(&it2_244, 0, sizeof(int));
        if(self==((void*)0)) {
            struct map$2charpint* __result155__ = ((void*)0);
            return __result155__;
        }
        result_241=(struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value156=map$2charpint_initialize((struct map$2charpint*)come_increment_ref_count(((struct map$2charpint*)(right_value150=(struct map$2charpint*)come_calloc(1, sizeof(struct map$2charpint)*(1)))))))));
        call_finalizer(map$2charpint_finalize,right_value156,0, 1, 0);
        for(
        it_242=map$2charpint_begin(self);
        !map$2charpint_end(self);
        it_242=map$2charpint_next(self)
        ){
            it2_244=map$2charpint_at(self,it_242,default_value_243);
            map$2charpint_insert2(result_241,char_clone(it_242),int_clone(it2_244));
        }
        struct map$2charpint* __result157__ = result_241;
        call_finalizer(map$2charpint_finalize,result_241,0, 0, 1);
        return __result157__;
}

static struct map$2charpint* map$2charpint_initialize(struct map$2charpint* self){
void* right_value151;
void* right_value152;
void* right_value153;
int i_240;
void* right_value154;
void* right_value155;
memset(&i_240, 0, sizeof(int));
            self->keys=((char***)(right_value151=(char***)come_calloc(1, sizeof(char**)*(1*(128)))));
            self->items=((int**)(right_value152=(int**)come_calloc(1, sizeof(int*)*(1*(128)))));
            self->item_existance=((_Bool**)(right_value153=(_Bool**)come_calloc(1, sizeof(_Bool*)*(1*(128)))));
            for(
            i_240=0;
            i_240<128;
            i_240++
            ){
                self->item_existance[i_240]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            if(self->key_list) {(struct list$1charp*)come_decrement_ref_count(self->key_list,0,0); }
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value155=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value154=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1)))))))));
            call_finalizer(list$1charp_finalize,right_value155,0, 1, 0);
            self->it=0;
            struct map$2charpint* __result156__ = self;
            call_finalizer(map$2charpint_finalize,self,0, 0, 1);
            return __result156__;
}

static void map$2charpint_insert2(struct map$2charpint* self, char* key, int item){
int hash_245;
int it_246;
_Bool same_key_exist_247;
char* it2_248;
memset(&hash_245, 0, sizeof(int));
memset(&it_246, 0, sizeof(int));
memset(&same_key_exist_247, 0, sizeof(_Bool));
memset(&it2_248, 0, sizeof(char*));
                if(self->len*2>=self->size) {
                    map$2charpint_rehash(self);
                }
                hash_245=char_get_hash_key(key)%self->size;
                it_246=hash_245;
                while((_Bool)1) {
                    if(self->item_existance[it_246]) {
                        if(char_equals(self->keys[it_246],key)) {
                            if(0) {
                                self->keys[it_246] = come_decrement_ref_count(self->keys[it_246], 0, 0);
                                self->keys[it_246]=key;
                            }
                            else {
                                self->keys[it_246]=key;
                            }
                            if(0) {
                                self->items[it_246]=item;
                            }
                            else {
                                self->items[it_246]=item;
                            }
                            break;
                        }
                        it_246++;
                        if(it_246>=self->size) {
                            it_246=0;
                        }
                        else if(it_246==hash_245) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_246]=(_Bool)1;
                        if(0) {
                            self->keys[it_246] = come_decrement_ref_count(self->keys[it_246], 0, 0);
                            self->keys[it_246]=key;
                        }
                        else {
                            self->keys[it_246]=key;
                        }
                        if(0) {
                            self->items[it_246]=item;
                        }
                        else {
                            self->items[it_246]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_247=(_Bool)0;
                for(
                it2_248=list$1charp_begin(self->key_list);
                !list$1charp_end(self->key_list);
                it_246=list$1charp_next(self->key_list)
                ){
                    if(char_equals(it2_248,key)) {
                        same_key_exist_247=(_Bool)1;
                    }
                }
                if(!same_key_exist_247) {
                    list$1charp_push_back(self->key_list,key);
                }
}

static struct tuple1$1int* tuple1$1int_initialize(struct tuple1$1int* self, int v1){
        self->v1=v1;
        struct tuple1$1int* __result158__ = self;
        call_finalizer(tuple1$1int_finalize,self,0, 0, 1);
        return __result158__;
}

static void tuple1$1int_finalize(struct tuple1$1int* self){
}

