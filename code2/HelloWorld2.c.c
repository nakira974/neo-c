/* source head */
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
typedef struct _IO_FILE __FILE;
typedef struct _IO_FILE FILE;
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
typedef __builtin_va_list va_list;
typedef long int off_t;
typedef long int ssize_t;
typedef struct _G_fpos_t fpos_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long double _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
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
typedef long int suseconds_t;
typedef long int __fd_mask;
struct anonymous_typeX8
{
    long int __fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX8 fd_set;
typedef long int fd_mask;
typedef int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
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
typedef char* string;
struct sData
{
    char* a;
};
struct list_item$p_char$ph
{
    char* item;
    struct list_item$p_char$ph* prev;
    struct list_item$p_char$ph* next;
};
struct list$_char$ph
{
    struct list_item$p_char$ph* head;
    struct list_item$p_char$ph* tail;
    int len;
    struct list_item$p_char$ph* it;
};
struct list_item$p_int$
{
    int item;
    struct list_item$p_int$* prev;
    struct list_item$p_int$* next;
};
struct list$_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct tuple1$_int$
{
    int v1;
};
struct tuple1$_char$ph
{
    char* v1;
};
struct tuple2$_char$ph_int$
{
    char* v1;
    int v2;
};
struct __current_stack1__
{
    char** p_29;
    void** p2_30;
    int* count_31;
    int* size2_32;
    char** mem2_33;
    int* b_34;
    int** a_35;
    int* a2_36;
    char** ax_39;
    char** str_43;
    struct sData** data_44;
    int** axyz_45;
    int** xxx_46;
    int** yyy_47;
    int** zzz_48;
    int* bzyz_49;
    int** azyz_50;
    int* n_51;
};
struct list$ph_char$ph
{
    struct list_item$p_char$ph* head;
    struct list_item$p_char$ph* tail;
    int len;
    struct list_item$p_char$ph* it;
};
struct list$p_char$ph
{
    struct list_item$p_char$ph* head;
    struct list_item$p_char$ph* tail;
    int len;
    struct list_item$p_char$ph* it;
};
struct list_item$_char$ph
{
    char* item;
    struct list_item$p_char$ph* prev;
    struct list_item$p_char$ph* next;
};
struct list_item$_char$ph$_char$ph
{
    char* item;
    struct list_item$p_char$ph* prev;
    struct list_item$p_char$ph* next;
};
struct list$ph_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct list$p_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct list_item$_int$
{
    int item;
    struct list_item$p_int$* prev;
    struct list_item$p_int$* next;
};
struct list_item$_int$$_int$
{
    int item;
    struct list_item$p_int$* prev;
    struct list_item$p_int$* next;
};
struct __current_stack2__
{
    char** p_29;
    void** p2_30;
    int* count_31;
    int* size2_32;
    char** mem2_33;
    int* b_34;
    int** a_35;
    int* a2_36;
    char** ax_39;
    char** str_43;
    struct sData** data_44;
    int** axyz_45;
    int** xxx_46;
    int** yyy_47;
    int** zzz_48;
    int* bzyz_49;
    int** azyz_50;
    int* n_51;
    struct list$_char$ph** liX_54;
    struct list$_int$** liX2_65;
    int* aX_74;
};
struct __current_stack3__
{
    char** p_29;
    void** p2_30;
    int* count_31;
    int* size2_32;
    char** mem2_33;
    int* b_34;
    int** a_35;
    int* a2_36;
    char** ax_39;
    char** str_43;
    struct sData** data_44;
    int** axyz_45;
    int** xxx_46;
    int** yyy_47;
    int** zzz_48;
    int* bzyz_49;
    int** azyz_50;
    int* n_51;
    struct list$_char$ph** liX_54;
    struct list$_int$** liX2_65;
    int* aX_74;
    int* aXYZY_78;
    struct list$_char$ph** li_79;
    struct list$_int$** li2_81;
    int* aXL_83;
};
struct list$p_int$$p_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct list$p_char$ph$p_char$ph
{
    struct list_item$p_char$ph* head;
    struct list_item$p_char$ph* tail;
    int len;
    struct list_item$p_char$ph* it;
};
struct list$_int$$_int$
{
    struct list_item$p_int$* head;
    struct list_item$p_int$* tail;
    int len;
    struct list_item$p_int$* it;
};
struct __current_stack4__
{
    char** p_29;
    void** p2_30;
    int* count_31;
    int* size2_32;
    char** mem2_33;
    int* b_34;
    int** a_35;
    int* a2_36;
    char** ax_39;
    char** str_43;
    struct sData** data_44;
    int** axyz_45;
    int** xxx_46;
    int** yyy_47;
    int** zzz_48;
    int* bzyz_49;
    int** azyz_50;
    int* n_51;
    struct list$_char$ph** liX_54;
    struct list$_int$** liX2_65;
    int* aX_74;
    int* aXYZY_78;
    struct list$_char$ph** li_79;
    struct list$_int$** li2_81;
    int* aXL_83;
    struct list$ph_char$ph** li3_120;
    struct list$ph_int$** li4_128;
    struct list$ph_int$** li5_132;
    struct list$ph_int$** li6_137;
    int** axyzX_146;
    char** strXYXY_147;
    struct list$_int$** liZ_148;
};
struct __current_stack5__
{
    char** p_29;
    void** p2_30;
    int* count_31;
    int* size2_32;
    char** mem2_33;
    int* b_34;
    int** a_35;
    int* a2_36;
    char** ax_39;
    char** str_43;
    struct sData** data_44;
    int** axyz_45;
    int** xxx_46;
    int** yyy_47;
    int** zzz_48;
    int* bzyz_49;
    int** azyz_50;
    int* n_51;
    struct list$_char$ph** liX_54;
    struct list$_int$** liX2_65;
    int* aX_74;
    int* aXYZY_78;
    struct list$_char$ph** li_79;
    struct list$_int$** li2_81;
    int* aXL_83;
    struct list$ph_char$ph** li3_120;
    struct list$ph_int$** li4_128;
    struct list$ph_int$** li5_132;
    struct list$ph_int$** li6_137;
    int** axyzX_146;
    char** strXYXY_147;
    struct list$_int$** liZ_148;
    struct list$_int$** liZ2_154;
    struct list$_int$** __list_value1___157;
    struct list$_int$** __list_value2___158;
    struct list$_int$** __list_value3___159;
};
struct list_item$p_char$p
{
    char* item;
    struct list_item$p_char$p* prev;
    struct list_item$p_char$p* next;
};
struct list$ph_char$p
{
    struct list_item$p_char$p* head;
    struct list_item$p_char$p* tail;
    int len;
    struct list_item$p_char$p* it;
};
struct map$_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct map$ph_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct list$_char$p
{
    struct list_item$p_char$p* head;
    struct list_item$p_char$p* tail;
    int len;
    struct list_item$p_char$p* it;
};
struct list$p_char$p
{
    struct list_item$p_char$p* head;
    struct list_item$p_char$p* tail;
    int len;
    struct list_item$p_char$p* it;
};
struct list_item$_char$p
{
    char* item;
    struct list_item$p_char$p* prev;
    struct list_item$p_char$p* next;
};
struct list_item$_char$p$_char$p
{
    char* item;
    struct list_item$p_char$p* prev;
    struct list_item$p_char$p* next;
};
struct map$p_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct map$p_char$p_int$$p_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct list$ph_char$p$ph_char$p
{
    struct list_item$p_char$p* head;
    struct list_item$p_char$p* tail;
    int len;
    struct list_item$p_char$p* it;
};
struct map$_char$p_int$$_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct list$_char$p$_char$p
{
    struct list_item$p_char$p* head;
    struct list_item$p_char$p* tail;
    int len;
    struct list_item$p_char$p* it;
};
struct map$ph_char$p_int$$ph_char$p_int$
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$ph_char$p* key_list;
    int it;
};
struct tuple1$ph_int$
{
    int v1;
};
struct tuple1$ph_char$ph
{
    char* v1;
};
struct tuple1$ph_char$ph$p_char$ph
{
    char* v1;
};
struct tuple2$ph_char$ph_int$
{
    char* v1;
    int v2;
};
struct tuple2$ph_char$ph_int$$p_char$ph_int$
{
    char* v1;
    int v2;
};
struct tuple2$_char$p_int$
{
    char* v1;
    int v2;
};
struct tuple2$ph_char$p_int$
{
    char* v1;
    int v2;
};

/* header function */
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int fclose(struct _IO_FILE* __stream);
struct _IO_FILE* tmpfile();
char* tmpnam(char anonymous_var_name1[20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx);
int fflush(struct _IO_FILE* __stream);
int fflush_unlocked(struct _IO_FILE* __stream);
struct _IO_FILE* fopen(const char* __filename, const char* __modes);
struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fdopen(int __fd, const char* __modes);
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
long int __getdelim(char** __lineptr, int* __n, int __delimiter, struct _IO_FILE* __stream);
long int getdelim(char** __lineptr, int* __n, int __delimiter, struct _IO_FILE* __stream);
long int getline(char** __lineptr, int* __n, struct _IO_FILE* __stream);
int fputs(const char* __s, struct _IO_FILE* __stream);
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE* __stream);
int fread(void* __ptr, int __size, int __n, struct _IO_FILE* __stream);
int fwrite(const void* __ptr, int __size, int __n, struct _IO_FILE* __s);
int fread_unlocked(void* __ptr, int __size, int __n, struct _IO_FILE* __stream);
int fwrite_unlocked(const void* __ptr, int __size, int __n, struct _IO_FILE* __stream);
int fseek(struct _IO_FILE* __stream, long int __off, int __whence);
long int ftell(struct _IO_FILE* __stream);
void rewind(struct _IO_FILE* __stream);
int fseeko(struct _IO_FILE* __stream, long int __off, int __whence);
long int ftello(struct _IO_FILE* __stream);
int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);
int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);
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
int strcspn(const char* __s, const char* __reject);
int strspn(const char* __s, const char* __accept);
char* strpbrk(const char* __s, const char* __accept);
char* strstr(const char* __haystack, const char* __needle);
char* strtok(char* __s, const char* __delim);
char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strtok_r(char* __s, const char* __delim, char** __save_ptr);
int strlen(const char* __s);
int strnlen(const char* __string, int __maxlen);
char* strerror(int __errnum);
int __xpg_strerror_r(int __errnum, char* __buf, int __buflen);
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
char* __stpcpy(char* __dest, const char* __src);
char* stpcpy(char* __dest, const char* __src);
char* __stpncpy(char* __dest, const char* __src, int __n);
char* stpncpy(char* __dest, const char* __src, int __n);
int __ctype_get_mb_cur_max();
double atof(const char* __nptr);
int atoi(const char* __nptr);
long int atol(const char* __nptr);
int atoll(const char* __nptr);
double strtod(const char* __nptr, char** __endptr);
float strtof(const char* __nptr, char** __endptr);
long double strtold(const char* __nptr, char** __endptr);
long int strtol(const char* __nptr, char** __endptr, int __base);
unsigned long int strtoul(const char* __nptr, char** __endptr, int __base);
int strtoq(const char* __nptr, char** __endptr, int __base);
unsigned int strtouq(const char* __nptr, char** __endptr, int __base);
int strtoll(const char* __nptr, char** __endptr, int __base);
unsigned int strtoull(const char* __nptr, char** __endptr, int __base);
char* l64a(long int __n);
long int a64l(const char* __s);
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
int putenv(char* __string);
int setenv(const char* __name, const char* __value, int __replace);
int unsetenv(const char* __name);
int clearenv();
char* mktemp(char* __template);
int mkstemp(char* __template);
int mkstemps(char* __template, int __suffixlen);
char* mkdtemp(char* __template);
int system(const char* __command);
char* realpath(const char* __name, char* __resolved);
void* bsearch(const void* __key, const void* __base, int __nmemb, int __size, int (*__compar)(const void*,const void*));
void qsort(void* __base, int __nmemb, int __size, int (*__compar)(const void*,const void*));
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
int getloadavg(double* __loadavg, int __nelem);
static inline void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}
static void ncfree(void* mem);
static void* come_calloc(int count, int size);
static void* come_increment_ref_count(void* mem);
static void* come_decrement_ref_count(void* mem, _Bool no_decrement, _Bool no_free);
static void come_free_object(void* mem);
static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free);
static void* nccalloc(int nmemb, int size);
static void* come_memdup(void* block);
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
    result_22=come_increment_ref_count((char**)(right_value0=(char**)come_calloc(1, sizeof(char*)*1*len_21)));
    strncpy(result_22,str,len_21);
    char* __result__ = result_22;
    result_22 = come_decrement_ref_count(result_22, 0, 1);
    return __result__;
}
static inline _Bool int_equals(int self, int right){
    int __result__ = self==right;
    return __result__;
}
static inline _Bool bool_equals(_Bool self, _Bool right){
    _Bool __result__ = self==right;
    return __result__;
}
static inline _Bool char_equals(char self, char right){
    char __result__ = self==right;
    return __result__;
}
static inline _Bool short_equals(short short self, short short right){
    short short __result__ = self==right;
    return __result__;
}
static inline _Bool long_equals(long self, long right){
    long __result__ = self==right;
    return __result__;
}
static inline _Bool string_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline _Bool string_operator_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline _Bool charp_operator_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline _Bool charp_equals(char* self, char* right){
    int __result__ = strcmp(self,right)==0;
    return __result__;
}
static inline char* charp_operator_add(char* self, char* right){
int len_23;
void* right_value1;
char* result_24;
memset(&len_23, 0, sizeof(int));
memset(&result_24, 0, sizeof(char*));
    len_23=strlen(self)+strlen(right);
    result_24=come_increment_ref_count((char**)(right_value1=(char**)come_calloc(1, sizeof(char*)*1*len_23+1)));
    strncpy(result_24,self,len_23+1);
    strncat(result_24,right,len_23+1);
    char* __result__ = result_24;
    result_24 = come_decrement_ref_count(result_24, 0, 1);
    return __result__;
}
static inline unsigned int int_get_hash_key(int value){
    int __result__ = value;
    return __result__;
}
static inline unsigned int bool_get_hash_key(_Bool value){
    unsigned int __result__ = (int_get_hash_key(((int)value)));
    return __result__;
}
static inline unsigned int string_get_hash_key(char* value){
int result_25;
char* p_26;
memset(&result_25, 0, sizeof(int));
memset(&p_26, 0, sizeof(char*));
    result_25=0;
    p_26=value;
    while(*p_26) {
        result_25+=(*p_26);
        p_26++;
    }
    int __result__ = result_25;
    return __result__;
}
static inline unsigned int charp_get_hash_key(char* value){
void* right_value2;
    unsigned int __result__ = string_get_hash_key((char*)(right_value2=__builtin_string(value)));
    right_value2 = come_decrement_ref_count(right_value2, 1, 0);
    return __result__;
}
static inline int int_clone(int self){
    int __result__ = self;
    return __result__;
}
static inline char* charp_clone(char* self){
    char* __result__ = self;
    return __result__;
}
static inline char* string_clone(char* self){
void* right_value3;
    char* __result__ = (char*)(right_value3=__builtin_string(self));
    return __result__;
}
static inline int long_clone(long self){
    long __result__ = self;
    return __result__;
}
static inline short int short_clone(short short self){
    short short __result__ = self;
    return __result__;
}
static inline char char_clone(char self){
    char __result__ = self;
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
int* funHeap(int x, int y);
int funHeap2(int* x, int* y);
int intp_fun(int* self);
int main();
static void sData_finalize(struct sData* self);
void method_block1(struct __current_stack1__* parent);
static struct list$ph_char$ph* list$_char$phphcharph_initialize(struct list$ph_char$ph* self);
static void list$ph_char$phphcharph_finalize(struct list$p_char$ph* self);
static void list$_char$phphcharph_finalize(struct list$p_char$ph* self);
static void list$_char$phphcharph_push_back(struct list$p_char$ph* self, char* item);
static char* list$_char$phphcharph_begin(struct list$p_char$ph* self);
static _Bool list$_char$phphcharph_end(struct list$p_char$ph* self);
static char* list$_char$phphcharph_next(struct list$p_char$ph* self);
static struct list$ph_int$* list$_int$phint_initialize(struct list$ph_int$* self);
static void list$ph_int$phint_finalize(struct list$p_int$* self);
static void list$_int$phint_finalize(struct list$p_int$* self);
static void list$_int$phint_push_back(struct list$p_int$* self, int item);
static int list$_int$phint_begin(struct list$p_int$* self);
static _Bool list$_int$phint_end(struct list$p_int$* self);
static int list$_int$phint_next(struct list$p_int$* self);
static void list$_int$phint_each(struct list$p_int$* self, void* parent, void (*block)(void*,int,int,_Bool*));
void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3);
void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3);
static int list$_int$phint_item(struct list$p_int$* self, int position, int default_value);
static void list$_int$phint_insert(struct list$p_int$* self, int position, int item);
static void list$p_int$$p_int$pint_push_back(struct list$p_int$* self, int item);
static void list$_char$phphcharph_insert(struct list$p_char$ph* self, int position, char* item);
static void list$p_char$ph$p_char$phpcharph_push_back(struct list$p_char$ph* self, char* item);
static char* list$_char$phphcharph_item(struct list$p_char$ph* self, int position, char* default_value);
static void list$_char$phphcharph_reset(struct list$p_char$ph* self);
static void list_item$_char$ph$_char$phpcharph_finalize(struct list_item$_char$ph$_char$ph* self);
static int list$_char$phphcharph_length(struct list$p_char$ph* self);
static void list$_int$phint_delete(struct list$p_int$* self, int head, int tail);
static void list$p_int$$p_int$pint_reset(struct list$p_int$* self);
static void list_item$_int$$_int$pint_finalize(struct list_item$_int$$_int$* self);
static void list$ph_char$phphcharph_push_back(struct list$p_char$ph* self, char* item);
static void list$ph_char$phphcharph_replace(struct list$p_char$ph* self, int position, char* item);
static char* list$ph_char$phphcharph_item(struct list$p_char$ph* self, int position, char* default_value);
static void list$ph_int$phint_push_back(struct list$p_int$* self, int item);
static _Bool list$ph_int$phint_equals(struct list$p_int$* left, struct list$p_int$* right);
static int list$ph_int$phint_find(struct list$p_int$* self, int item, int default_value);
static struct list$ph_int$* list$ph_int$phint_sublist(struct list$p_int$* self, int begin, int tail);
static struct list$ph_int$* list$_int$$_int$phint_initialize(struct list$ph_int$* self);
static void list$_int$$_int$phint_finalize(struct list$p_int$* self);
static void list$_int$$_int$phint_push_back(struct list$p_int$* self, int item);
void method_block4(struct __current_stack4__* parent, int it, int it2, _Bool* it3);
static void list$_int$phint_operator_store_element(struct list$p_int$* self, int position, int item);
static void list$p_int$$p_int$pint_replace(struct list$p_int$* self, int position, int item);
static int list$_int$phint_operator_load_element(struct list$p_int$* self, int index);
static int list$p_int$$p_int$pint_item(struct list$p_int$* self, int position, int default_value);
static _Bool list$_int$phint_operator_equals(struct list$p_int$* self, struct list$p_int$* right);
static _Bool list$p_int$$p_int$pint_equals(struct list$p_int$* left, struct list$p_int$* right);
void method_block5(struct __current_stack5__* parent, int it, int it2, _Bool* it3);
static struct map$ph_char$p_int$* map$_char$p_int$phcharpint_initialize(struct map$ph_char$p_int$* self);
static struct list$ph_char$p* list$_char$pphcharp_initialize(struct list$ph_char$p* self);
static void list$ph_char$pphcharp_finalize(struct list$p_char$p* self);
static void list$_char$pphcharp_finalize(struct list$p_char$p* self);
static void map$ph_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self);
static void list$ph_char$ppcharp_finalize(struct list$p_char$p* self);
static void map$_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self);
static void map$_char$p_int$phcharpint_insert(struct map$p_char$p_int$* self, char* key, int item);
static void map$p_char$p_int$$p_char$p_int$pcharpint_rehash(struct map$p_char$p_int$* self);
static char* map$p_char$p_int$$p_char$p_int$pcharpint_begin(struct map$p_char$p_int$* self);
static _Bool map$p_char$p_int$$p_char$p_int$pcharpint_end(struct map$p_char$p_int$* self);
static char* map$p_char$p_int$$p_char$p_int$pcharpint_next(struct map$p_char$p_int$* self);
static int map$p_char$p_int$$p_char$p_int$pcharpint_at(struct map$p_char$p_int$* self, char* key, int default_value);
static char* list$ph_char$p$ph_char$pphcharp_begin(struct list$p_char$p* self);
static _Bool list$ph_char$p$ph_char$pphcharp_end(struct list$p_char$p* self);
static char* list$ph_char$p$ph_char$pphcharp_next(struct list$p_char$p* self);
static void list$ph_char$p$ph_char$pphcharp_push_back(struct list$p_char$p* self, char* item);
static _Bool map$_char$p_int$phcharpint_operator_equals(struct map$p_char$p_int$* left, struct map$p_char$p_int$* right);
static _Bool map$p_char$p_int$$p_char$p_int$pcharpint_equals(struct map$p_char$p_int$* left, struct map$p_char$p_int$* right);
static char* list$ph_char$p$ph_char$pphcharp_item(struct list$p_char$p* self, int position, char* default_value);
static int map$_char$p_int$phcharpint_operator_load_element(struct map$p_char$p_int$* self, char* key);
static struct map$ph_char$p_int$* map$_char$p_int$phcharpint_clone(struct map$p_char$p_int$* self);
static struct map$ph_char$p_int$* map$_char$p_int$$_char$p_int$phcharpint_initialize(struct map$ph_char$p_int$* self);
static struct list$ph_char$p* list$_char$p$_char$pphcharp_initialize(struct list$ph_char$p* self);
static void list$_char$p$_char$pphcharp_finalize(struct list$p_char$p* self);
static void map$_char$p_int$$_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self);
static void map$ph_char$p_int$$ph_char$p_int$phcharpint_insert2(struct map$p_char$p_int$* self, char* key, int item);
static struct tuple1$ph_int$* tuple1$_int$phint_initialize(struct tuple1$ph_int$* self, int v1);
static void tuple1$ph_int$phint_finalize(struct tuple1$ph_int$* self);
static void tuple1$_int$phint_finalize(struct tuple1$_int$* self);
static struct tuple1$ph_char$ph* tuple1$_char$phphcharph_initialize(struct tuple1$ph_char$ph* self, char* v1);
static void tuple1$ph_char$phphcharph_finalize(struct tuple1$ph_char$ph* self);
static void tuple1$_char$phphcharph_finalize(struct tuple1$_char$ph* self);
static struct tuple1$_char$ph* tuple1$_char$phphcharph_clone(struct tuple1$_char$ph* self);
static void tuple1$_char$phph_finalize(struct tuple1$_char$ph* self);
static _Bool tuple1$_char$phphcharph_equals(struct tuple1$_char$ph* left, struct tuple1$_char$ph* right);
static _Bool tuple1$_char$phphcharph_operator_equals(struct tuple1$_char$ph* left, struct tuple1$_char$ph* right);
static struct tuple2$ph_char$ph_int$* tuple2$_char$ph_int$phcharphint_initialize(struct tuple2$ph_char$ph_int$* self, char* v1, int v2);
static void tuple2$ph_char$ph_int$phcharphint_finalize(struct tuple2$ph_char$ph_int$* self);
static void tuple2$_char$ph_int$phcharphint_finalize(struct tuple2$_char$ph_int$* self);
static struct tuple2$ph_char$p_int$* tuple2$_char$p_int$phcharpint_initialize(struct tuple2$ph_char$p_int$* self, char* v1, int v2);
static void tuple2$ph_char$p_int$phcharpint_finalize(struct tuple2$ph_char$p_int$* self);
static void tuple2$_char$p_int$phcharpint_finalize(struct tuple2$_char$p_int$* self);
static _Bool tuple2$ph_char$p_int$phcharpint_equals(struct tuple2$ph_char$p_int$* left, struct tuple2$ph_char$p_int$* right);
static _Bool tuple2$ph_char$p_int$phcharpint_operator_equals(struct tuple2$ph_char$p_int$* left, struct tuple2$ph_char$p_int$* right);

/* body function */







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
    char* __result__ = mem_0+sizeof(int)+sizeof(long);
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
memset(&finalizer_7, 0, sizeof(void (*)()));
memset(&ref_count_8, 0, sizeof(int*));
memset(&count_9, 0, sizeof(int));
memset(&finalizer_10, 0, sizeof(void (*)()));
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
    char* __result__ = (char*)ret_15+sizeof(int)+sizeof(long);
    return __result__;
}

























int* funHeap(int x, int y){
void* right_value4;
int* result_27;
memset(&result_27, 0, sizeof(int*));
    result_27=come_increment_ref_count((int*)(right_value4=(int*)come_calloc(1, sizeof(int)*1)));
    *result_27=x+y;
    int* __result__ = result_27;
    result_27 = come_decrement_ref_count(result_27, 0, 1);
    return __result__;
}

int funHeap2(int* x, int* y){
    int __result__ = *x+*y;
    x = come_decrement_ref_count(x, 0, 1);
    y = come_decrement_ref_count(y, 0, 1);
    return __result__;
}

int intp_fun(int* self){
    int __result__ = *self;
    return __result__;
}

int main(){
void* right_value5;
char* a_28;
char* p_29;
void* p2_30;
int count_31;
int size2_32;
char* mem2_33;
int b_34;
int* a_35;
int a2_36;
int b_37;
int n_38;
void* right_value6;
char* ax_39;
void* right_value7;
char* a_40;
char* b_41;
struct sData data_42;
void* right_value8;
char* str_43;
void* right_value9;
struct sData* data_44;
void* right_value10;
void* right_value11;
void* right_value12;
int* axyz_45;
void* right_value13;
int* xxx_46;
void* right_value14;
int* yyy_47;
void* right_value15;
int* zzz_48;
void* right_value16;
int bzyz_49;
int* azyz_50;
int n_51;
struct __current_stack1__ __current_stack1__;
void* right_value17;
void* right_value18;
struct list$_char$ph* liX_54;
void* right_value22;
void* right_value23;
void* right_value24;
char* it_61;
void* right_value25;
void* right_value26;
struct list$_int$* liX2_65;
int it_72;
int aX_74;
struct __current_stack2__ __current_stack2__;
int aXYZY_78;
void* right_value30;
void* right_value31;
struct list$_char$ph* li_79;
void* right_value32;
void* right_value33;
void* right_value34;
char* it_80;
void* right_value35;
void* right_value36;
struct list$_int$* li2_81;
int it_82;
int aXL_83;
struct __current_stack3__ __current_stack3__;
void* right_value49;
void* right_value50;
void* right_value51;
struct list$ph_char$ph* li3_120;
void* right_value55;
void* right_value56;
void* right_value57;
void* right_value58;
void* right_value59;
void* right_value60;
struct list$ph_int$* li4_128;
void* right_value64;
void* right_value65;
struct list$ph_int$* li5_132;
void* right_value66;
void* right_value67;
struct list$ph_int$* li6_137;
void* right_value73;
int* axyzX_146;
void* right_value74;
void* right_value75;
void* right_value76;
void* right_value77;
void* right_value78;
char* strXYXY_147;
void* right_value79;
void* right_value80;
struct list$_int$* liZ_148;
struct __current_stack4__ __current_stack4__;
void* right_value81;
void* right_value82;
struct list$_int$* liZ2_154;
void* right_value83;
void* right_value84;
struct list$_int$* __list_value1___157;
void* right_value85;
void* right_value86;
struct list$_int$* __list_value2___158;
void* right_value87;
void* right_value88;
struct list$_int$* __list_value3___159;
struct __current_stack5__ __current_stack5__;
void* right_value89;
void* right_value95;
struct map$_char$p_int$* __map_value1___169;
void* right_value102;
void* right_value103;
struct map$_char$p_int$* __map_value2___196;
void* right_value104;
void* right_value105;
struct map$_char$p_int$* __map_value3___207;
struct map$_char$p_int$* m1_208;
struct map$_char$p_int$* m2_223;
void* right_value113;
void* right_value114;
struct tuple1$_int$* tt1_224;
void* right_value115;
void* right_value116;
void* right_value117;
struct tuple1$_char$ph* tt2_225;
void* right_value118;
struct tuple1$_char$ph* tt3_227;
void* right_value120;
void* right_value121;
struct tuple1$_int$* ttt1_228;
void* right_value122;
void* right_value123;
void* right_value124;
struct tuple1$_char$ph* ttt2_229;
void* right_value125;
struct tuple1$_char$ph* ttt3_230;
void* right_value126;
void* right_value127;
void* right_value128;
struct tuple2$ph_char$ph_int$* __tuple_value1___231;
struct tuple2$_char$ph_int$* t4_232;
void* right_value129;
void* right_value130;
void* right_value131;
struct tuple2$ph_char$p_int$* __tuple_value2___233;
void* right_value132;
void* right_value133;
struct tuple2$ph_char$p_int$* __tuple_value3___234;
memset(&a_28, 0, sizeof(char*));
memset(&p_29, 0, sizeof(char*));
memset(&p2_30, 0, sizeof(void*));
memset(&count_31, 0, sizeof(int));
memset(&size2_32, 0, sizeof(int));
memset(&mem2_33, 0, sizeof(char*));
memset(&b_34, 0, sizeof(int));
memset(&a_35, 0, sizeof(int*));
memset(&a2_36, 0, sizeof(int));
memset(&b_37, 0, sizeof(int));
memset(&n_38, 0, sizeof(int));
memset(&ax_39, 0, sizeof(char*));
memset(&a_40, 0, sizeof(char*));
memset(&b_41, 0, sizeof(char*));
memset(&data_42, 0, sizeof(struct sData));
memset(&str_43, 0, sizeof(char*));
memset(&data_44, 0, sizeof(struct sData*));
memset(&axyz_45, 0, sizeof(int*));
memset(&xxx_46, 0, sizeof(int*));
memset(&yyy_47, 0, sizeof(int*));
memset(&zzz_48, 0, sizeof(int*));
memset(&bzyz_49, 0, sizeof(int));
memset(&azyz_50, 0, sizeof(int*));
memset(&n_51, 0, sizeof(int));
memset(&liX_54, 0, sizeof(struct list$_char$ph*));
memset(&it_61, 0, sizeof(char*));
memset(&liX2_65, 0, sizeof(struct list$_int$*));
memset(&it_72, 0, sizeof(int));
memset(&aX_74, 0, sizeof(int));
memset(&aXYZY_78, 0, sizeof(int));
memset(&li_79, 0, sizeof(struct list$_char$ph*));
memset(&it_80, 0, sizeof(char*));
memset(&li2_81, 0, sizeof(struct list$_int$*));
memset(&it_82, 0, sizeof(int));
memset(&aXL_83, 0, sizeof(int));
memset(&li3_120, 0, sizeof(struct list$ph_char$ph*));
memset(&li4_128, 0, sizeof(struct list$ph_int$*));
memset(&li5_132, 0, sizeof(struct list$ph_int$*));
memset(&li6_137, 0, sizeof(struct list$ph_int$*));
memset(&axyzX_146, 0, sizeof(int*));
memset(&strXYXY_147, 0, sizeof(char*));
memset(&liZ_148, 0, sizeof(struct list$_int$*));
memset(&liZ2_154, 0, sizeof(struct list$_int$*));
memset(&__list_value1___157, 0, sizeof(struct list$_int$*));
memset(&__list_value2___158, 0, sizeof(struct list$_int$*));
memset(&__list_value3___159, 0, sizeof(struct list$_int$*));
memset(&__map_value1___169, 0, sizeof(struct map$_char$p_int$*));
memset(&__map_value2___196, 0, sizeof(struct map$_char$p_int$*));
memset(&__map_value3___207, 0, sizeof(struct map$_char$p_int$*));
memset(&m1_208, 0, sizeof(struct map$_char$p_int$*));
memset(&m2_223, 0, sizeof(struct map$_char$p_int$*));
memset(&tt1_224, 0, sizeof(struct tuple1$_int$*));
memset(&tt2_225, 0, sizeof(struct tuple1$_char$ph*));
memset(&tt3_227, 0, sizeof(struct tuple1$_char$ph*));
memset(&ttt1_228, 0, sizeof(struct tuple1$_int$*));
memset(&ttt2_229, 0, sizeof(struct tuple1$_char$ph*));
memset(&ttt3_230, 0, sizeof(struct tuple1$_char$ph*));
memset(&__tuple_value1___231, 0, sizeof(struct tuple2$ph_char$ph_int$*));
memset(&t4_232, 0, sizeof(struct tuple2$_char$ph_int$*));
memset(&__tuple_value2___233, 0, sizeof(struct tuple2$ph_char$p_int$*));
memset(&__tuple_value3___234, 0, sizeof(struct tuple2$ph_char$p_int$*));
    if(1) {
        a_28=come_increment_ref_count((char**)(right_value5=(char**)come_calloc(1, sizeof(char*)*1*128)));
        a_28 = come_decrement_ref_count(a_28, 0, 0);
    }
    printf("%ld\n",sizeof(unsigned long));
    p_29="ABC";
    p2_30="ABC";
    printf("%s\n",(char*)p2_30);
    printf("%c\n",*p_29);
    count_31=0;
    size2_32=1;
    mem2_33=calloc(1,sizeof(int)+sizeof(long)+count_31*size2_32);
    free(mem2_33);
    a_35=&b_34;
    (*a_35)=123;
    a2_36=123;
    if((_Bool)1) {
        b_37=234;
        n_38=0;
        while(n_38<3) {
            printf("a %d\n",a2_36);
            printf("b %d\n",b_37);
            n_38++;
        }
    }
    ax_39=come_increment_ref_count((char**)(right_value6=(char**)come_calloc(1, sizeof(char*)*1*128)));
    if(1) {
        a_40=come_increment_ref_count((char**)(right_value7=(char**)come_calloc(1, sizeof(char*)*1*128)));
        b_41=come_increment_ref_count(a_40);
        data_42.a=come_increment_ref_count(a_40);
        a_40 = come_decrement_ref_count(a_40, 0, 0);
        b_41 = come_decrement_ref_count(b_41, 0, 0);
        call_finalizer(sData_finalize,(&data_42),1, 0, 0);
    }
    str_43=come_increment_ref_count((char**)(right_value8=(char**)come_calloc(1, sizeof(char*)*1*128)));
    strncpy(str_43,"ABC",128);
    data_44=come_increment_ref_count((struct sData*)(right_value9=(struct sData*)come_calloc(1, sizeof(struct sData)*1)));
    come_decrement_ref_count(data_44->a, 0, 0);
    data_44->a=come_increment_ref_count(str_43);
    puts(data_44->a);
    (int*)(right_value10=funHeap(7,7));
    right_value10 = come_decrement_ref_count(right_value10, 1, 0);
    xassert("right value test",*(int*)(right_value11=funHeap(3,4))==7);
    right_value11 = come_decrement_ref_count(right_value11, 1, 0);
    axyz_45=come_increment_ref_count((int*)(right_value12=funHeap(1,2)));
    xassert("variable test",*axyz_45==3);
    xxx_46=come_increment_ref_count((int*)(right_value13=(int*)come_calloc(1, sizeof(int)*1)));
    *xxx_46=1;
    yyy_47=come_increment_ref_count((int*)(right_value14=(int*)come_calloc(1, sizeof(int)*1)));
    *yyy_47=2;
    xassert("heap",funHeap2(come_increment_ref_count(xxx_46),come_increment_ref_count(yyy_47))==3);
    zzz_48=come_increment_ref_count((int*)(right_value15=(int*)come_calloc(1, sizeof(int)*1)));
    (int*)(right_value16=(int*)come_calloc(1, sizeof(int)*1));
    right_value16 = come_decrement_ref_count(right_value16, 1, 0);
    bzyz_49=123;
    azyz_50=&bzyz_49;
    xassert("impl",intp_fun(azyz_50)==123);
    n_51=0;
    __current_stack1__.p_29 = &p_29;
    __current_stack1__.p2_30 = &p2_30;
    __current_stack1__.count_31 = &count_31;
    __current_stack1__.size2_32 = &size2_32;
    __current_stack1__.mem2_33 = &mem2_33;
    __current_stack1__.b_34 = &b_34;
    __current_stack1__.a_35 = &a_35;
    __current_stack1__.a2_36 = &a2_36;
    __current_stack1__.ax_39 = &ax_39;
    __current_stack1__.str_43 = &str_43;
    __current_stack1__.data_44 = &data_44;
    __current_stack1__.axyz_45 = &axyz_45;
    __current_stack1__.xxx_46 = &xxx_46;
    __current_stack1__.yyy_47 = &yyy_47;
    __current_stack1__.zzz_48 = &zzz_48;
    __current_stack1__.bzyz_49 = &bzyz_49;
    __current_stack1__.azyz_50 = &azyz_50;
    __current_stack1__.n_51 = &n_51;
    int_times(3,&__current_stack1__,method_block1);
    liX_54=come_increment_ref_count((struct list$ph_char$ph*)(right_value18=list$_char$phphcharph_initialize(come_increment_ref_count((struct list$_char$ph*)(right_value17=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value17,0, 1, 0);
    list$_char$phphcharph_push_back(liX_54,come_increment_ref_count((char*)(right_value22=__builtin_string("ABC"))) /* aaa */);
    right_value22 = come_decrement_ref_count(right_value22, 1, 0);
    list$_char$phphcharph_push_back(liX_54,come_increment_ref_count((char*)(right_value23=__builtin_string("DEF"))) /* aaa */);
    right_value23 = come_decrement_ref_count(right_value23, 1, 0);
    list$_char$phphcharph_push_back(liX_54,come_increment_ref_count((char*)(right_value24=__builtin_string("GHI"))) /* aaa */);
    right_value24 = come_decrement_ref_count(right_value24, 1, 0);
    for(
    it_61=list$_char$phphcharph_begin((liX_54));
    !list$_char$phphcharph_end((liX_54));
    it_61=list$_char$phphcharph_next((liX_54))
    ){
        printf("%s\n",it_61);
    }
    liX2_65=come_increment_ref_count((struct list$ph_int$*)(right_value26=list$_int$phint_initialize(come_increment_ref_count((struct list$_int$*)(right_value25=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value25,0, 1, 0);
    list$_int$phint_push_back(liX2_65,1);
    list$_int$phint_push_back(liX2_65,2);
    list$_int$phint_push_back(liX2_65,3);
    for(
    it_72=list$_int$phint_begin((liX2_65));
    !list$_int$phint_end((liX2_65));
    it_72=list$_int$phint_next((liX2_65))
    ){
        printf("%d\n",it_72);
    }
    aX_74=123;
    __current_stack2__.p_29 = &p_29;
    __current_stack2__.p2_30 = &p2_30;
    __current_stack2__.count_31 = &count_31;
    __current_stack2__.size2_32 = &size2_32;
    __current_stack2__.mem2_33 = &mem2_33;
    __current_stack2__.b_34 = &b_34;
    __current_stack2__.a_35 = &a_35;
    __current_stack2__.a2_36 = &a2_36;
    __current_stack2__.ax_39 = &ax_39;
    __current_stack2__.str_43 = &str_43;
    __current_stack2__.data_44 = &data_44;
    __current_stack2__.axyz_45 = &axyz_45;
    __current_stack2__.xxx_46 = &xxx_46;
    __current_stack2__.yyy_47 = &yyy_47;
    __current_stack2__.zzz_48 = &zzz_48;
    __current_stack2__.bzyz_49 = &bzyz_49;
    __current_stack2__.azyz_50 = &azyz_50;
    __current_stack2__.n_51 = &n_51;
    __current_stack2__.liX_54 = &liX_54;
    __current_stack2__.liX2_65 = &liX2_65;
    __current_stack2__.aX_74 = &aX_74;
    list$_int$phint_each(liX2_65,&__current_stack2__,method_block2);
    xassert("method_block test",aX_74==2);
    xassert("var initialize test",aXYZY_78==0);
    li_79=come_increment_ref_count((struct list$ph_char$ph*)(right_value31=list$_char$phphcharph_initialize(come_increment_ref_count((struct list$_char$ph*)(right_value30=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value30,0, 1, 0);
    list$_char$phphcharph_push_back(li_79,come_increment_ref_count((char*)(right_value32=__builtin_string("ABC"))) /* aaa */);
    right_value32 = come_decrement_ref_count(right_value32, 1, 0);
    list$_char$phphcharph_push_back(li_79,come_increment_ref_count((char*)(right_value33=__builtin_string("DEF"))) /* aaa */);
    right_value33 = come_decrement_ref_count(right_value33, 1, 0);
    list$_char$phphcharph_push_back(li_79,come_increment_ref_count((char*)(right_value34=__builtin_string("GHI"))) /* aaa */);
    right_value34 = come_decrement_ref_count(right_value34, 1, 0);
    for(
    it_80=list$_char$phphcharph_begin((li_79));
    !list$_char$phphcharph_end((li_79));
    it_80=list$_char$phphcharph_next((li_79))
    ){
        printf("%s\n",it_80);
    }
    li2_81=come_increment_ref_count((struct list$ph_int$*)(right_value36=list$_int$phint_initialize(come_increment_ref_count((struct list$_int$*)(right_value35=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value35,0, 1, 0);
    list$_int$phint_push_back(li2_81,1);
    list$_int$phint_push_back(li2_81,2);
    list$_int$phint_push_back(li2_81,3);
    for(
    it_82=list$_int$phint_begin((li2_81));
    !list$_int$phint_end((li2_81));
    it_82=list$_int$phint_next((li2_81))
    ){
        printf("%d\n",it_82);
    }
    aXL_83=123;
    __current_stack3__.p_29 = &p_29;
    __current_stack3__.p2_30 = &p2_30;
    __current_stack3__.count_31 = &count_31;
    __current_stack3__.size2_32 = &size2_32;
    __current_stack3__.mem2_33 = &mem2_33;
    __current_stack3__.b_34 = &b_34;
    __current_stack3__.a_35 = &a_35;
    __current_stack3__.a2_36 = &a2_36;
    __current_stack3__.ax_39 = &ax_39;
    __current_stack3__.str_43 = &str_43;
    __current_stack3__.data_44 = &data_44;
    __current_stack3__.axyz_45 = &axyz_45;
    __current_stack3__.xxx_46 = &xxx_46;
    __current_stack3__.yyy_47 = &yyy_47;
    __current_stack3__.zzz_48 = &zzz_48;
    __current_stack3__.bzyz_49 = &bzyz_49;
    __current_stack3__.azyz_50 = &azyz_50;
    __current_stack3__.n_51 = &n_51;
    __current_stack3__.liX_54 = &liX_54;
    __current_stack3__.liX2_65 = &liX2_65;
    __current_stack3__.aX_74 = &aX_74;
    __current_stack3__.aXYZY_78 = &aXYZY_78;
    __current_stack3__.li_79 = &li_79;
    __current_stack3__.li2_81 = &li2_81;
    __current_stack3__.aXL_83 = &aXL_83;
    list$_int$phint_each(li2_81,&__current_stack3__,method_block3);
    xassert("var of method block",aXL_83==2);
    xassert("list::item",list$_int$phint_item(li2_81,0,-1)==1);
    list$_int$phint_insert(li2_81,1,5);
    xassert("list::insert",list$_int$phint_item(li2_81,0,-1)==1&&list$_int$phint_item(li2_81,1,-1)==5&&list$_int$phint_item(li2_81,2,-1)==2&&list$_int$phint_item(li2_81,3,-1)==3);
    list$_char$phphcharph_insert(li_79,1,come_increment_ref_count((char*)(right_value49=__builtin_string("GGG"))) /* aaa */);
    right_value49 = come_decrement_ref_count(right_value49, 1, 0);
    xassert("list::insert",strcmp(list$_char$phphcharph_item(li_79,0,-1),"ABC")==0&&strcmp(list$_char$phphcharph_item(li_79,1,-1),"GGG")==0&&strcmp(list$_char$phphcharph_item(li_79,2,-1),"DEF")==0&&strcmp(list$_char$phphcharph_item(li_79,3,-1),"GHI")==0);
    list$_char$phphcharph_reset(li_79);
    xassert("list::reset",list$_char$phphcharph_length(li_79)==0);
    list$_int$phint_delete(li2_81,0,1);
    xassert("list::delete",list$_int$phint_item(li2_81,0,-1)==5&&list$_int$phint_item(li2_81,1,-1)==2&&list$_int$phint_item(li2_81,2,-1)==3);
    li3_120=come_increment_ref_count((struct list$ph_char$ph*)(right_value51=list$_char$phphcharph_initialize(come_increment_ref_count((struct list$_char$ph*)(right_value50=(struct list$_char$ph*)come_calloc(1, sizeof(struct list$_char$ph)*1))))));
    call_finalizer(list$_char$phphcharph_finalize,right_value50,0, 1, 0);
    list$ph_char$phphcharph_push_back(li3_120,come_increment_ref_count((char*)(right_value55=__builtin_string("AAA"))) /* aaa */);
    right_value55 = come_decrement_ref_count(right_value55, 1, 0);
    list$ph_char$phphcharph_push_back(li3_120,come_increment_ref_count((char*)(right_value56=__builtin_string("BBB"))) /* aaa */);
    right_value56 = come_decrement_ref_count(right_value56, 1, 0);
    list$ph_char$phphcharph_push_back(li3_120,come_increment_ref_count((char*)(right_value57=__builtin_string("CCC"))) /* aaa */);
    right_value57 = come_decrement_ref_count(right_value57, 1, 0);
    list$ph_char$phphcharph_replace(li3_120,0,come_increment_ref_count((char*)(right_value58=__builtin_string("ABC"))) /* aaa */);
    right_value58 = come_decrement_ref_count(right_value58, 1, 0);
    xassert("list::replace",strcmp(list$ph_char$phphcharph_item(li3_120,0,((void*)0)),"ABC")==0&&strcmp(list$ph_char$phphcharph_item(li3_120,1,((void*)0)),"BBB")==0&&strcmp(list$ph_char$phphcharph_item(li3_120,2,((void*)0)),"CCC")==0);
    li4_128=come_increment_ref_count((struct list$ph_int$*)(right_value60=list$_int$phint_initialize(come_increment_ref_count((struct list$_int$*)(right_value59=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value59,0, 1, 0);
    list$ph_int$phint_push_back(li4_128,1);
    list$ph_int$phint_push_back(li4_128,3);
    list$ph_int$phint_push_back(li4_128,5);
    li5_132=come_increment_ref_count((struct list$ph_int$*)(right_value65=list$_int$phint_initialize(come_increment_ref_count((struct list$_int$*)(right_value64=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value64,0, 1, 0);
    list$ph_int$phint_push_back(li5_132,1);
    list$ph_int$phint_push_back(li5_132,3);
    list$ph_int$phint_push_back(li5_132,5);
    xassert("list::equals",list$ph_int$phint_equals(li4_128,li5_132));
    xassert("list::find",list$ph_int$phint_find(li4_128,5,-1)==2);
    li6_137=come_increment_ref_count((struct list$ph_int$*)(right_value67=list$_int$phint_initialize(come_increment_ref_count((struct list$_int$*)(right_value66=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value66,0, 1, 0);
    list$ph_int$phint_push_back(li6_137,3);
    list$ph_int$phint_push_back(li6_137,5);
    xassert("list::sublist",list$ph_int$phint_equals((struct list$ph_int$*)(right_value73=list$ph_int$phint_sublist(li5_132,1,-1)),li6_137));
    call_finalizer(list$ph_int$phint_finalize,right_value73,0, 1, 0);
    come_decrement_ref_count(axyzX_146, 0, 0);
    axyzX_146=come_increment_ref_count((int*)(right_value74=(int*)come_calloc(1, sizeof(int)*1)));
    come_decrement_ref_count(axyzX_146, 0, 0);
    axyzX_146=come_increment_ref_count((int*)(right_value75=(int*)come_calloc(1, sizeof(int)*1)));
    xassert("operator equals",string_operator_equals((char*)(right_value76=__builtin_string("AAA")),(char*)(right_value77=__builtin_string("AAA"))));
    right_value76 = come_decrement_ref_count(right_value76, 1, 0);
    right_value77 = come_decrement_ref_count(right_value77, 1, 0);
    xassert("operator test",string_operator_equals((char*)(right_value78=charp_operator_add("AAA","BBB")),"AAABBB"));
    right_value78 = come_decrement_ref_count(right_value78, 1, 0);
    strXYXY_147="ABC";
    xassert("operator test",*(strXYXY_147+1)==66);
    liZ_148=come_increment_ref_count((struct list$ph_int$*)(right_value80=list$_int$phint_initialize(come_increment_ref_count((struct list$_int$*)(right_value79=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value79,0, 1, 0);
    list$_int$phint_push_back(liZ_148,1);
    list$_int$phint_push_back(liZ_148,2);
    list$_int$phint_push_back(liZ_148,3);
    __current_stack4__.p_29 = &p_29;
    __current_stack4__.p2_30 = &p2_30;
    __current_stack4__.count_31 = &count_31;
    __current_stack4__.size2_32 = &size2_32;
    __current_stack4__.mem2_33 = &mem2_33;
    __current_stack4__.b_34 = &b_34;
    __current_stack4__.a_35 = &a_35;
    __current_stack4__.a2_36 = &a2_36;
    __current_stack4__.ax_39 = &ax_39;
    __current_stack4__.str_43 = &str_43;
    __current_stack4__.data_44 = &data_44;
    __current_stack4__.axyz_45 = &axyz_45;
    __current_stack4__.xxx_46 = &xxx_46;
    __current_stack4__.yyy_47 = &yyy_47;
    __current_stack4__.zzz_48 = &zzz_48;
    __current_stack4__.bzyz_49 = &bzyz_49;
    __current_stack4__.azyz_50 = &azyz_50;
    __current_stack4__.n_51 = &n_51;
    __current_stack4__.liX_54 = &liX_54;
    __current_stack4__.liX2_65 = &liX2_65;
    __current_stack4__.aX_74 = &aX_74;
    __current_stack4__.aXYZY_78 = &aXYZY_78;
    __current_stack4__.li_79 = &li_79;
    __current_stack4__.li2_81 = &li2_81;
    __current_stack4__.aXL_83 = &aXL_83;
    __current_stack4__.li3_120 = &li3_120;
    __current_stack4__.li4_128 = &li4_128;
    __current_stack4__.li5_132 = &li5_132;
    __current_stack4__.li6_137 = &li6_137;
    __current_stack4__.axyzX_146 = &axyzX_146;
    __current_stack4__.strXYXY_147 = &strXYXY_147;
    __current_stack4__.liZ_148 = &liZ_148;
    list$_int$phint_each(liZ_148,&__current_stack4__,method_block4);
    list$_int$phint_operator_store_element(liZ_148,0,777);
    printf("liZ[0] %d\n",list$_int$phint_operator_load_element(liZ_148,0));
    liZ2_154=come_increment_ref_count((struct list$ph_int$*)(right_value82=list$_int$phint_initialize(come_increment_ref_count((struct list$_int$*)(right_value81=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value81,0, 1, 0);
    list$_int$phint_push_back(liZ2_154,777);
    list$_int$phint_push_back(liZ2_154,2);
    list$_int$phint_push_back(liZ2_154,3);
    xassert("list equals",list$_int$phint_operator_equals(liZ_148,liZ2_154));
    __list_value1___157=come_increment_ref_count((struct list$ph_int$*)(right_value84=list$_int$phint_initialize(come_increment_ref_count((struct list$_int$*)(right_value83=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value83,0, 1, 0);
    list$_int$phint_push_back(__list_value1___157,1);
    list$_int$phint_push_back(__list_value1___157,2);
    list$_int$phint_push_back(__list_value1___157,3);
    __list_value2___158=come_increment_ref_count((struct list$ph_int$*)(right_value86=list$_int$phint_initialize(come_increment_ref_count((struct list$_int$*)(right_value85=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value85,0, 1, 0);
    list$_int$phint_push_back(__list_value2___158,1);
    list$_int$phint_push_back(__list_value2___158,2);
    list$_int$phint_push_back(__list_value2___158,3);
    xassert("list equals test",list$_int$phint_operator_equals(__list_value1___157,__list_value2___158));
    __list_value3___159=come_increment_ref_count((struct list$ph_int$*)(right_value88=list$_int$phint_initialize(come_increment_ref_count((struct list$_int$*)(right_value87=(struct list$_int$*)come_calloc(1, sizeof(struct list$_int$)*1))))));
    call_finalizer(list$_int$phint_finalize,right_value87,0, 1, 0);
    list$_int$phint_push_back(__list_value3___159,1);
    list$_int$phint_push_back(__list_value3___159,2);
    list$_int$phint_push_back(__list_value3___159,3);
    list$_int$phint_push_back(__list_value3___159,4);
    list$_int$phint_push_back(__list_value3___159,5);
    __current_stack5__.p_29 = &p_29;
    __current_stack5__.p2_30 = &p2_30;
    __current_stack5__.count_31 = &count_31;
    __current_stack5__.size2_32 = &size2_32;
    __current_stack5__.mem2_33 = &mem2_33;
    __current_stack5__.b_34 = &b_34;
    __current_stack5__.a_35 = &a_35;
    __current_stack5__.a2_36 = &a2_36;
    __current_stack5__.ax_39 = &ax_39;
    __current_stack5__.str_43 = &str_43;
    __current_stack5__.data_44 = &data_44;
    __current_stack5__.axyz_45 = &axyz_45;
    __current_stack5__.xxx_46 = &xxx_46;
    __current_stack5__.yyy_47 = &yyy_47;
    __current_stack5__.zzz_48 = &zzz_48;
    __current_stack5__.bzyz_49 = &bzyz_49;
    __current_stack5__.azyz_50 = &azyz_50;
    __current_stack5__.n_51 = &n_51;
    __current_stack5__.liX_54 = &liX_54;
    __current_stack5__.liX2_65 = &liX2_65;
    __current_stack5__.aX_74 = &aX_74;
    __current_stack5__.aXYZY_78 = &aXYZY_78;
    __current_stack5__.li_79 = &li_79;
    __current_stack5__.li2_81 = &li2_81;
    __current_stack5__.aXL_83 = &aXL_83;
    __current_stack5__.li3_120 = &li3_120;
    __current_stack5__.li4_128 = &li4_128;
    __current_stack5__.li5_132 = &li5_132;
    __current_stack5__.li6_137 = &li6_137;
    __current_stack5__.axyzX_146 = &axyzX_146;
    __current_stack5__.strXYXY_147 = &strXYXY_147;
    __current_stack5__.liZ_148 = &liZ_148;
    __current_stack5__.liZ2_154 = &liZ2_154;
    __current_stack5__.__list_value1___157 = &__list_value1___157;
    __current_stack5__.__list_value2___158 = &__list_value2___158;
    __current_stack5__.__list_value3___159 = &__list_value3___159;
    list$_int$phint_each(__list_value3___159,&__current_stack5__,method_block5);
    __map_value1___169=come_increment_ref_count((struct map$ph_char$p_int$*)(right_value95=map$_char$p_int$phcharpint_initialize(come_increment_ref_count((struct map$_char$p_int$*)(right_value89=(struct map$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$)*1))))));
    call_finalizer(map$_char$p_int$phcharpint_finalize,right_value89,0, 1, 0);
    map$_char$p_int$phcharpint_insert(__map_value1___169,"AAA",1);
    map$_char$p_int$phcharpint_insert(__map_value1___169,"BBB",2);
    __map_value2___196=come_increment_ref_count((struct map$ph_char$p_int$*)(right_value103=map$_char$p_int$phcharpint_initialize(come_increment_ref_count((struct map$_char$p_int$*)(right_value102=(struct map$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$)*1))))));
    call_finalizer(map$_char$p_int$phcharpint_finalize,right_value102,0, 1, 0);
    map$_char$p_int$phcharpint_insert(__map_value2___196,"AAA",1);
    map$_char$p_int$phcharpint_insert(__map_value2___196,"BBB",2);
    xassert("map equals",map$_char$p_int$phcharpint_operator_equals(__map_value1___169,__map_value2___196));
    __map_value3___207=come_increment_ref_count((struct map$ph_char$p_int$*)(right_value105=map$_char$p_int$phcharpint_initialize(come_increment_ref_count((struct map$_char$p_int$*)(right_value104=(struct map$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$)*1))))));
    call_finalizer(map$_char$p_int$phcharpint_finalize,right_value104,0, 1, 0);
    map$_char$p_int$phcharpint_insert(__map_value3___207,"AAA",1);
    map$_char$p_int$phcharpint_insert(__map_value3___207,"BBB",2);
    m1_208=come_increment_ref_count(__map_value3___207);
    printf("%d %d\n",map$_char$p_int$phcharpint_operator_load_element(m1_208,"AAA"),map$_char$p_int$phcharpint_operator_load_element(m1_208,"BBB"));
    m2_223=come_increment_ref_count(map$_char$p_int$phcharpint_clone(m1_208));
    printf("%d %d\n",map$_char$p_int$phcharpint_operator_load_element(m2_223,"AAA"),map$_char$p_int$phcharpint_operator_load_element(m2_223,"BBB"));
    xassert("map clone",map$_char$p_int$phcharpint_operator_equals(m1_208,m2_223));
    tt1_224=come_increment_ref_count((struct tuple1$ph_int$*)(right_value114=tuple1$_int$phint_initialize(come_increment_ref_count((struct tuple1$_int$*)(right_value113=(struct tuple1$_int$*)come_calloc(1, sizeof(struct tuple1$_int$)*1))),1)));
    call_finalizer(tuple1$_int$phint_finalize,right_value113,0, 1, 0);
    tt1_224->v1=111;
    printf("%d\n",tt1_224->v1);
    tt2_225=come_increment_ref_count((struct tuple1$ph_char$ph*)(right_value117=tuple1$_char$phphcharph_initialize(come_increment_ref_count((struct tuple1$_char$ph*)(right_value115=(struct tuple1$_char$ph*)come_calloc(1, sizeof(struct tuple1$_char$ph)*1))),come_increment_ref_count((char*)(right_value116=__builtin_string("ABC"))) /* aaa */)));
    call_finalizer(tuple1$_char$phphcharph_finalize,right_value115,0, 1, 0);
    right_value116 = come_decrement_ref_count(right_value116, 1, 0);
    come_decrement_ref_count(tt2_225->v1, 0, 0);
    tt2_225->v1=come_increment_ref_count((char*)(right_value118=__builtin_string("DEF")));
    printf("%s\n",tt2_225->v1);
    tt3_227=come_increment_ref_count(tuple1$_char$phphcharph_clone(tt2_225));
    printf("(%s)\n",tt3_227->v1);
    ttt1_228=come_increment_ref_count((struct tuple1$ph_int$*)(right_value121=tuple1$_int$phint_initialize(come_increment_ref_count((struct tuple1$_int$*)(right_value120=(struct tuple1$_int$*)come_calloc(1, sizeof(struct tuple1$_int$)*1))),1)));
    call_finalizer(tuple1$_int$phint_finalize,right_value120,0, 1, 0);
    ttt1_228->v1=111;
    printf("%d\n",ttt1_228->v1);
    ttt2_229=come_increment_ref_count((struct tuple1$ph_char$ph*)(right_value124=tuple1$_char$phphcharph_initialize(come_increment_ref_count((struct tuple1$_char$ph*)(right_value122=(struct tuple1$_char$ph*)come_calloc(1, sizeof(struct tuple1$_char$ph)*1))),come_increment_ref_count((char*)(right_value123=__builtin_string("ABC"))) /* aaa */)));
    call_finalizer(tuple1$_char$phphcharph_finalize,right_value122,0, 1, 0);
    right_value123 = come_decrement_ref_count(right_value123, 1, 0);
    come_decrement_ref_count(ttt2_229->v1, 0, 0);
    ttt2_229->v1=come_increment_ref_count((char*)(right_value125=__builtin_string("DEF")));
    printf("%s\n",ttt2_229->v1);
    ttt3_230=come_increment_ref_count(tuple1$_char$phphcharph_clone(ttt2_229));
    printf("(%s)\n",ttt3_230->v1);
    xassert("tuple test",tuple1$_char$phphcharph_operator_equals(ttt2_229,ttt3_230));
    __tuple_value1___231=come_increment_ref_count((struct tuple2$ph_char$ph_int$*)(right_value128=tuple2$_char$ph_int$phcharphint_initialize(come_increment_ref_count((struct tuple2$_char$ph_int$*)(right_value126=(struct tuple2$_char$ph_int$*)come_calloc(1, sizeof(struct tuple2$_char$ph_int$)*1))),come_increment_ref_count((char*)(right_value127=__builtin_string("ABC"))) /* aaa */,5)));
    call_finalizer(tuple2$_char$ph_int$phcharphint_finalize,right_value126,0, 1, 0);
    right_value127 = come_decrement_ref_count(right_value127, 1, 0);
    t4_232=come_increment_ref_count(__tuple_value1___231);
    xassert("tuple test",string_operator_equals(t4_232->v1,(char*)(right_value129=__builtin_string("ABC")))&&t4_232->v2==5);
    right_value129 = come_decrement_ref_count(right_value129, 1, 0);
    __tuple_value2___233=come_increment_ref_count((struct tuple2$ph_char$p_int$*)(right_value131=tuple2$_char$p_int$phcharpint_initialize(come_increment_ref_count((struct tuple2$_char$p_int$*)(right_value130=(struct tuple2$_char$p_int$*)come_calloc(1, sizeof(struct tuple2$_char$p_int$)*1))),"AAA",7)));
    call_finalizer(tuple2$_char$p_int$phcharpint_finalize,right_value130,0, 1, 0);
    __tuple_value3___234=come_increment_ref_count((struct tuple2$ph_char$p_int$*)(right_value133=tuple2$_char$p_int$phcharpint_initialize(come_increment_ref_count((struct tuple2$_char$p_int$*)(right_value132=(struct tuple2$_char$p_int$*)come_calloc(1, sizeof(struct tuple2$_char$p_int$)*1))),"AAA",7)));
    call_finalizer(tuple2$_char$p_int$phcharpint_finalize,right_value132,0, 1, 0);
    xassert("tuple testX",tuple2$ph_char$p_int$phcharpint_operator_equals(__tuple_value2___233,__tuple_value3___234));
    int __result__ = 0;
    ax_39 = come_decrement_ref_count(ax_39, 0, 0);
    str_43 = come_decrement_ref_count(str_43, 0, 0);
    call_finalizer(sData_finalize,data_44,0, 0, 0);
    axyz_45 = come_decrement_ref_count(axyz_45, 0, 0);
    xxx_46 = come_decrement_ref_count(xxx_46, 0, 0);
    yyy_47 = come_decrement_ref_count(yyy_47, 0, 0);
    zzz_48 = come_decrement_ref_count(zzz_48, 0, 0);
    call_finalizer(list$_char$phphcharph_finalize,liX_54,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,liX2_65,0, 0, 0);
    call_finalizer(list$_char$phphcharph_finalize,li_79,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,li2_81,0, 0, 0);
    call_finalizer(list$ph_char$phphcharph_finalize,li3_120,0, 0, 0);
    call_finalizer(list$ph_int$phint_finalize,li4_128,0, 0, 0);
    call_finalizer(list$ph_int$phint_finalize,li5_132,0, 0, 0);
    call_finalizer(list$ph_int$phint_finalize,li6_137,0, 0, 0);
    axyzX_146 = come_decrement_ref_count(axyzX_146, 0, 0);
    call_finalizer(list$_int$phint_finalize,liZ_148,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,liZ2_154,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,__list_value1___157,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,__list_value2___158,0, 0, 0);
    call_finalizer(list$_int$phint_finalize,__list_value3___159,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,__map_value1___169,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,__map_value2___196,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,__map_value3___207,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,m1_208,0, 0, 0);
    call_finalizer(map$_char$p_int$phcharpint_finalize,m2_223,0, 0, 0);
    call_finalizer(tuple1$_int$phint_finalize,tt1_224,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,tt2_225,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,tt3_227,0, 0, 0);
    call_finalizer(tuple1$_int$phint_finalize,ttt1_228,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,ttt2_229,0, 0, 0);
    call_finalizer(tuple1$_char$phphcharph_finalize,ttt3_230,0, 0, 0);
    call_finalizer(tuple2$ph_char$ph_int$phcharphint_finalize,__tuple_value1___231,0, 0, 0);
    call_finalizer(tuple2$_char$ph_int$phcharphint_finalize,t4_232,0, 0, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,__tuple_value2___233,0, 0, 0);
    call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,__tuple_value3___234,0, 0, 0);
    return __result__;
}

static void sData_finalize(struct sData* self){
            if(self!=((void*)0)&&self->a!=((void*)0)) {
                self->a = come_decrement_ref_count(self->a, 0, 0);
            }
}

void method_block1(struct __current_stack1__* parent){
        puts("HO!");
        printf("%d\n",(*(parent->n_51)));
        (*(parent->n_51))++;
}

static struct list$ph_char$ph* list$_char$phphcharph_initialize(struct list$ph_char$ph* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$ph_char$ph* __result__ = self;
        call_finalizer(list$ph_char$phphcharph_finalize,self,0, 0, 1);
        return __result__;
}

static void list$ph_char$phphcharph_finalize(struct list$p_char$ph* self){
struct list_item$_char$ph* it_52;
struct list_item$_char$ph* prev_it_53;
memset(&it_52, 0, sizeof(struct list_item$_char$ph*));
memset(&prev_it_53, 0, sizeof(struct list_item$_char$ph*));
            it_52=self->head;
            while(it_52!=((void*)0)) {
                if(1) {
                    it_52->item = come_decrement_ref_count(it_52->item, 0, 0);
                }
                prev_it_53=it_52;
                it_52=it_52->next;
                come_free_object(prev_it_53);
            }
}

static void list$_char$phphcharph_finalize(struct list$p_char$ph* self){
struct list_item$_char$ph$_char$ph* it_55;
struct list_item$_char$ph$_char$ph* prev_it_56;
memset(&it_55, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&prev_it_56, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        it_55=self->head;
        while(it_55!=((void*)0)) {
            if(1) {
                it_55->item = come_decrement_ref_count(it_55->item, 0, 0);
            }
            prev_it_56=it_55;
            it_55=it_55->next;
            come_free_object(prev_it_56);
        }
}

static void list$_char$phphcharph_push_back(struct list$p_char$ph* self, char* item){
void* right_value19;
struct list_item$_char$ph$_char$ph* litem_57;
void* right_value20;
struct list_item$_char$ph$_char$ph* litem_58;
void* right_value21;
struct list_item$_char$ph$_char$ph* litem_59;
memset(&litem_57, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_58, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_59, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        if(self->len==0) {
            litem_57=(struct list_item$_char$ph$_char$ph*)(right_value19=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_57->prev=((void*)0);
            litem_57->next=((void*)0);
            come_decrement_ref_count(litem_57->item, 0, 0);
            litem_57->item=come_increment_ref_count(item);
            self->tail=litem_57;
            self->head=litem_57;
        }
        else if(self->len==1) {
            litem_58=(struct list_item$_char$ph$_char$ph*)(right_value20=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_58->prev=self->head;
            litem_58->next=((void*)0);
            come_decrement_ref_count(litem_58->item, 0, 0);
            litem_58->item=come_increment_ref_count(item);
            self->tail=litem_58;
            self->head->next=litem_58;
        }
        else {
            litem_59=(struct list_item$_char$ph$_char$ph*)(right_value21=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_59->prev=self->tail;
            litem_59->next=((void*)0);
            come_decrement_ref_count(litem_59->item, 0, 0);
            litem_59->item=come_increment_ref_count(item);
            self->tail->next=litem_59;
            self->tail=litem_59;
        }
        self->len++;
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$_char$phphcharph_begin(struct list$p_char$ph* self){
char* result_60;
memset(&result_60, 0, sizeof(char*));
        self->it=self->head;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_60,0,sizeof(char*));
        char* __result__ = result_60;
        return __result__;
}

static _Bool list$_char$phphcharph_end(struct list$p_char$ph* self){
        struct list_item$p_char$ph* __result__ = self->it==((void*)0);
        return __result__;
}

static char* list$_char$phphcharph_next(struct list$p_char$ph* self){
char* result_62;
memset(&result_62, 0, sizeof(char*));
        self->it=self->it->next;
        if(self->it) {
            char* __result__ = self->it->item;
            return __result__;
        }
        memset(&result_62,0,sizeof(char*));
        char* __result__ = result_62;
        return __result__;
}

static struct list$ph_int$* list$_int$phint_initialize(struct list$ph_int$* self){
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        struct list$ph_int$* __result__ = self;
        call_finalizer(list$ph_int$phint_finalize,self,0, 0, 1);
        return __result__;
}

static void list$ph_int$phint_finalize(struct list$p_int$* self){
struct list_item$_int$* it_63;
struct list_item$_int$* prev_it_64;
memset(&it_63, 0, sizeof(struct list_item$_int$*));
memset(&prev_it_64, 0, sizeof(struct list_item$_int$*));
            it_63=self->head;
            while(it_63!=((void*)0)) {
                if(0) {
                }
                prev_it_64=it_63;
                it_63=it_63->next;
                come_free_object(prev_it_64);
            }
}

static void list$_int$phint_finalize(struct list$p_int$* self){
struct list_item$_int$$_int$* it_66;
struct list_item$_int$$_int$* prev_it_67;
memset(&it_66, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_67, 0, sizeof(struct list_item$_int$$_int$*));
        it_66=self->head;
        while(it_66!=((void*)0)) {
            if(0) {
            }
            prev_it_67=it_66;
            it_66=it_66->next;
            come_free_object(prev_it_67);
        }
}

static void list$_int$phint_push_back(struct list$p_int$* self, int item){
void* right_value27;
struct list_item$_int$$_int$* litem_68;
void* right_value28;
struct list_item$_int$$_int$* litem_69;
void* right_value29;
struct list_item$_int$$_int$* litem_70;
memset(&litem_68, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_69, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_70, 0, sizeof(struct list_item$_int$$_int$*));
        if(self->len==0) {
            litem_68=(struct list_item$_int$$_int$*)(right_value27=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_68->prev=((void*)0);
            litem_68->next=((void*)0);
            litem_68->item=item;
            self->tail=litem_68;
            self->head=litem_68;
        }
        else if(self->len==1) {
            litem_69=(struct list_item$_int$$_int$*)(right_value28=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_69->prev=self->head;
            litem_69->next=((void*)0);
            litem_69->item=item;
            self->tail=litem_69;
            self->head->next=litem_69;
        }
        else {
            litem_70=(struct list_item$_int$$_int$*)(right_value29=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_70->prev=self->tail;
            litem_70->next=((void*)0);
            litem_70->item=item;
            self->tail->next=litem_70;
            self->tail=litem_70;
        }
        self->len++;
}

static int list$_int$phint_begin(struct list$p_int$* self){
int result_71;
memset(&result_71, 0, sizeof(int));
        self->it=self->head;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_71,0,sizeof(int));
        int __result__ = result_71;
        return __result__;
}

static _Bool list$_int$phint_end(struct list$p_int$* self){
        struct list_item$p_int$* __result__ = self->it==((void*)0);
        return __result__;
}

static int list$_int$phint_next(struct list$p_int$* self){
int result_73;
memset(&result_73, 0, sizeof(int));
        self->it=self->it->next;
        if(self->it) {
            int __result__ = self->it->item;
            return __result__;
        }
        memset(&result_73,0,sizeof(int));
        int __result__ = result_73;
        return __result__;
}

static void list$_int$phint_each(struct list$p_int$* self, void* parent, void (*block)(void*,int,int,_Bool*)){
struct list_item$_int$$_int$* it_75;
int i_76;
_Bool end_flag_77;
memset(&it_75, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_76, 0, sizeof(int));
memset(&end_flag_77, 0, sizeof(_Bool));
        it_75=self->head;
        i_76=0;
        while(it_75!=((void*)0)) {
            end_flag_77=(_Bool)0;
            block(parent,it_75->item,i_76,&end_flag_77);
            if(end_flag_77==(_Bool)1) {
                break;
            }
            it_75=it_75->next;
            i_76++;
        }
}

void method_block2(struct __current_stack2__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aX_74)));
        (*(parent->aX_74))=2;
}

void method_block3(struct __current_stack3__* parent, int it, int it2, _Bool* it3){
        printf("%d %d\n",it,(*(parent->aXL_83)));
        (*(parent->aXL_83))=2;
}

static int list$_int$phint_item(struct list$p_int$* self, int position, int default_value){
struct list_item$_int$$_int$* it_84;
int i_85;
memset(&it_84, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_85, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_84=self->head;
        i_85=0;
        while(it_84!=((void*)0)) {
            if(position==i_85) {
                int __result__ = it_84->item;
                return __result__;
            }
            it_84=it_84->next;
            i_85++;
        }
        int __result__ = default_value;
        return __result__;
}

static void list$_int$phint_insert(struct list$p_int$* self, int position, int item){
void* right_value40;
struct list_item$_int$$_int$* litem_89;
void* right_value41;
struct list_item$_int$$_int$* litem_90;
struct list_item$_int$$_int$* it_91;
int i_92;
void* right_value42;
struct list_item$_int$$_int$* litem_93;
memset(&litem_89, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_90, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it_91, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_92, 0, sizeof(int));
memset(&litem_93, 0, sizeof(struct list_item$_int$$_int$*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$p_int$$p_int$pint_push_back(self,item);
            return;
        }
        if(position==0) {
            litem_89=(struct list_item$_int$$_int$*)(right_value40=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_89->prev=((void*)0);
            litem_89->next=self->head;
            litem_89->item=item;
            self->head->prev=litem_89;
            self->head=litem_89;
            self->len++;
        }
        else if(self->len==1) {
            litem_90=(struct list_item$_int$$_int$*)(right_value41=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_90->prev=self->head;
            litem_90->next=self->tail;
            litem_90->item=item;
            self->tail->prev=litem_90;
            self->head->next=litem_90;
            self->len++;
        }
        else {
            it_91=self->head;
            i_92=0;
            while(it_91!=((void*)0)) {
                if(position==i_92) {
                    litem_93=(struct list_item$_int$$_int$*)(right_value42=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_93->prev=it_91->prev;
                    litem_93->next=it_91;
                    litem_93->item=item;
                    it_91->prev->next=litem_93;
                    it_91->prev=litem_93;
                    self->len++;
                }
                it_91=it_91->next;
                i_92++;
            }
        }
}

static void list$p_int$$p_int$pint_push_back(struct list$p_int$* self, int item){
void* right_value37;
struct list_item$_int$$_int$* litem_86;
void* right_value38;
struct list_item$_int$$_int$* litem_87;
void* right_value39;
struct list_item$_int$$_int$* litem_88;
memset(&litem_86, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_87, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_88, 0, sizeof(struct list_item$_int$$_int$*));
                if(self->len==0) {
                    litem_86=(struct list_item$_int$$_int$*)(right_value37=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_86->prev=((void*)0);
                    litem_86->next=((void*)0);
                    litem_86->item=item;
                    self->tail=litem_86;
                    self->head=litem_86;
                }
                else if(self->len==1) {
                    litem_87=(struct list_item$_int$$_int$*)(right_value38=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_87->prev=self->head;
                    litem_87->next=((void*)0);
                    litem_87->item=item;
                    self->tail=litem_87;
                    self->head->next=litem_87;
                }
                else {
                    litem_88=(struct list_item$_int$$_int$*)(right_value39=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                    litem_88->prev=self->tail;
                    litem_88->next=((void*)0);
                    litem_88->item=item;
                    self->tail->next=litem_88;
                    self->tail=litem_88;
                }
                self->len++;
}

static void list$_char$phphcharph_insert(struct list$p_char$ph* self, int position, char* item){
void* right_value46;
struct list_item$_char$ph$_char$ph* litem_97;
void* right_value47;
struct list_item$_char$ph$_char$ph* litem_98;
struct list_item$_char$ph$_char$ph* it_99;
int i_100;
void* right_value48;
struct list_item$_char$ph$_char$ph* litem_101;
memset(&litem_97, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_98, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&it_99, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_100, 0, sizeof(int));
memset(&litem_101, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        if(position<0) {
            position+=self->len+1;
        }
        if(position<0) {
            position=0;
        }
        if(self->len==0||position>=self->len) {
            list$p_char$ph$p_char$phpcharph_push_back(self,come_increment_ref_count(item) /* aaa */);
            return;
        }
        if(position==0) {
            litem_97=(struct list_item$_char$ph$_char$ph*)(right_value46=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_97->prev=((void*)0);
            litem_97->next=self->head;
            come_decrement_ref_count(litem_97->item, 0, 0);
            litem_97->item=come_increment_ref_count(item);
            self->head->prev=litem_97;
            self->head=litem_97;
            self->len++;
        }
        else if(self->len==1) {
            litem_98=(struct list_item$_char$ph$_char$ph*)(right_value47=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_98->prev=self->head;
            litem_98->next=self->tail;
            come_decrement_ref_count(litem_98->item, 0, 0);
            litem_98->item=come_increment_ref_count(item);
            self->tail->prev=litem_98;
            self->head->next=litem_98;
            self->len++;
        }
        else {
            it_99=self->head;
            i_100=0;
            while(it_99!=((void*)0)) {
                if(position==i_100) {
                    litem_101=(struct list_item$_char$ph$_char$ph*)(right_value48=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_101->prev=it_99->prev;
                    litem_101->next=it_99;
                    come_decrement_ref_count(litem_101->item, 0, 0);
                    litem_101->item=come_increment_ref_count(item);
                    it_99->prev->next=litem_101;
                    it_99->prev=litem_101;
                    self->len++;
                }
                it_99=it_99->next;
                i_100++;
            }
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static void list$p_char$ph$p_char$phpcharph_push_back(struct list$p_char$ph* self, char* item){
void* right_value43;
struct list_item$_char$ph$_char$ph* litem_94;
void* right_value44;
struct list_item$_char$ph$_char$ph* litem_95;
void* right_value45;
struct list_item$_char$ph$_char$ph* litem_96;
memset(&litem_94, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_95, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_96, 0, sizeof(struct list_item$_char$ph$_char$ph*));
                if(self->len==0) {
                    litem_94=(struct list_item$_char$ph$_char$ph*)(right_value43=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_94->prev=((void*)0);
                    litem_94->next=((void*)0);
                    come_decrement_ref_count(litem_94->item, 0, 0);
                    litem_94->item=come_increment_ref_count(item);
                    self->tail=litem_94;
                    self->head=litem_94;
                }
                else if(self->len==1) {
                    litem_95=(struct list_item$_char$ph$_char$ph*)(right_value44=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_95->prev=self->head;
                    litem_95->next=((void*)0);
                    come_decrement_ref_count(litem_95->item, 0, 0);
                    litem_95->item=come_increment_ref_count(item);
                    self->tail=litem_95;
                    self->head->next=litem_95;
                }
                else {
                    litem_96=(struct list_item$_char$ph$_char$ph*)(right_value45=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
                    litem_96->prev=self->tail;
                    litem_96->next=((void*)0);
                    come_decrement_ref_count(litem_96->item, 0, 0);
                    litem_96->item=come_increment_ref_count(item);
                    self->tail->next=litem_96;
                    self->tail=litem_96;
                }
                self->len++;
                item = come_decrement_ref_count(item, 0, 1);
}

static char* list$_char$phphcharph_item(struct list$p_char$ph* self, int position, char* default_value){
struct list_item$_char$ph$_char$ph* it_102;
int i_103;
memset(&it_102, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_103, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_102=self->head;
        i_103=0;
        while(it_102!=((void*)0)) {
            if(position==i_103) {
                char* __result__ = it_102->item;
                return __result__;
            }
            it_102=it_102->next;
            i_103++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list$_char$phphcharph_reset(struct list$p_char$ph* self){
struct list_item$_char$ph$_char$ph* it_104;
struct list_item$_char$ph$_char$ph* prev_it_105;
memset(&it_104, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&prev_it_105, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        it_104=self->head;
        while(it_104!=((void*)0)) {
            prev_it_105=it_104;
            it_104=it_104->next;
            call_finalizer(list_item$_char$ph$_char$phpcharph_finalize,prev_it_105,0, 0, 0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
}

static void list_item$_char$ph$_char$phpcharph_finalize(struct list_item$_char$ph$_char$ph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    self->item = come_decrement_ref_count(self->item, 0, 0);
                }
}

static int list$_char$phphcharph_length(struct list$p_char$ph* self){
        int __result__ = self->len;
        return __result__;
}

static void list$_int$phint_delete(struct list$p_int$* self, int head, int tail){
int tmp_106;
struct list_item$_int$$_int$* it_109;
int i_110;
struct list_item$_int$$_int$* prev_it_111;
struct list_item$_int$$_int$* it_112;
int i_113;
struct list_item$_int$$_int$* prev_it_114;
struct list_item$_int$$_int$* it_115;
struct list_item$_int$$_int$* head_prev_it_116;
struct list_item$_int$$_int$* tail_it_117;
int i_118;
struct list_item$_int$$_int$* prev_it_119;
memset(&tmp_106, 0, sizeof(int));
memset(&it_109, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_110, 0, sizeof(int));
memset(&prev_it_111, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it_112, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_113, 0, sizeof(int));
memset(&prev_it_114, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it_115, 0, sizeof(struct list_item$_int$$_int$*));
memset(&head_prev_it_116, 0, sizeof(struct list_item$_int$$_int$*));
memset(&tail_it_117, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_118, 0, sizeof(int));
memset(&prev_it_119, 0, sizeof(struct list_item$_int$$_int$*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_106=tail;
            tail=head;
            head=tmp_106;
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
            list$p_int$$p_int$pint_reset(self);
        }
        else if(head==0) {
            it_109=self->head;
            i_110=0;
            while(it_109!=((void*)0)) {
                if(i_110<tail) {
                    prev_it_111=it_109;
                    it_109=it_109->next;
                    i_110++;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_111,0, 0, 0);
                    self->len--;
                }
                else if(i_110==tail) {
                    self->head=it_109;
                    self->head->prev=((void*)0);
                    break;
                }
                else {
                    it_109=it_109->next;
                    i_110++;
                }
            }
        }
        else if(tail==self->len) {
            it_112=self->head;
            i_113=0;
            while(it_112!=((void*)0)) {
                if(i_113==head) {
                    self->tail=it_112->prev;
                    self->tail->next=((void*)0);
                }
                if(i_113>=head) {
                    prev_it_114=it_112;
                    it_112=it_112->next;
                    i_113++;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_114,0, 0, 0);
                    self->len--;
                }
                else {
                    it_112=it_112->next;
                    i_113++;
                }
            }
        }
        else {
            it_115=self->head;
            head_prev_it_116=((void*)0);
            tail_it_117=((void*)0);
            i_118=0;
            while(it_115!=((void*)0)) {
                if(i_118==head) {
                    head_prev_it_116=it_115->prev;
                }
                if(i_118==tail) {
                    tail_it_117=it_115;
                }
                if(i_118>=head&&i_118<tail) {
                    prev_it_119=it_115;
                    it_115=it_115->next;
                    i_118++;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_119,0, 0, 0);
                    self->len--;
                }
                else {
                    it_115=it_115->next;
                    i_118++;
                }
            }
            if(head_prev_it_116!=((void*)0)) {
                head_prev_it_116->next=tail_it_117;
            }
            if(tail_it_117!=((void*)0)) {
                tail_it_117->prev=head_prev_it_116;
            }
        }
}

static void list$p_int$$p_int$pint_reset(struct list$p_int$* self){
struct list_item$_int$$_int$* it_107;
struct list_item$_int$$_int$* prev_it_108;
memset(&it_107, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_108, 0, sizeof(struct list_item$_int$$_int$*));
                it_107=self->head;
                while(it_107!=((void*)0)) {
                    prev_it_108=it_107;
                    it_107=it_107->next;
                    call_finalizer(list_item$_int$$_int$pint_finalize,prev_it_108,0, 0, 0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
}

static void list_item$_int$$_int$pint_finalize(struct list_item$_int$$_int$* self){
}

static void list$ph_char$phphcharph_push_back(struct list$p_char$ph* self, char* item){
void* right_value52;
struct list_item$_char$ph$_char$ph* litem_121;
void* right_value53;
struct list_item$_char$ph$_char$ph* litem_122;
void* right_value54;
struct list_item$_char$ph$_char$ph* litem_123;
memset(&litem_121, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_122, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&litem_123, 0, sizeof(struct list_item$_char$ph$_char$ph*));
        if(self->len==0) {
            litem_121=(struct list_item$_char$ph$_char$ph*)(right_value52=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_121->prev=((void*)0);
            litem_121->next=((void*)0);
            come_decrement_ref_count(litem_121->item, 0, 0);
            litem_121->item=come_increment_ref_count(item);
            self->tail=litem_121;
            self->head=litem_121;
        }
        else if(self->len==1) {
            litem_122=(struct list_item$_char$ph$_char$ph*)(right_value53=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_122->prev=self->head;
            litem_122->next=((void*)0);
            come_decrement_ref_count(litem_122->item, 0, 0);
            litem_122->item=come_increment_ref_count(item);
            self->tail=litem_122;
            self->head->next=litem_122;
        }
        else {
            litem_123=(struct list_item$_char$ph$_char$ph*)(right_value54=(struct list_item$_char$ph$_char$ph*)come_calloc(1, sizeof(struct list_item$_char$ph$_char$ph)*1));
            litem_123->prev=self->tail;
            litem_123->next=((void*)0);
            come_decrement_ref_count(litem_123->item, 0, 0);
            litem_123->item=come_increment_ref_count(item);
            self->tail->next=litem_123;
            self->tail=litem_123;
        }
        self->len++;
        item = come_decrement_ref_count(item, 0, 1);
}

static void list$ph_char$phphcharph_replace(struct list$p_char$ph* self, int position, char* item){
struct list_item$_char$ph$_char$ph* it_124;
int i_125;
memset(&it_124, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_125, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_124=self->head;
        i_125=0;
        while(it_124!=((void*)0)) {
            if(position==i_125) {
                come_decrement_ref_count(it_124->item, 0, 0);
                it_124->item=come_increment_ref_count(item);
                break;
            }
            it_124=it_124->next;
            i_125++;
        }
        item = come_decrement_ref_count(item, 0, 1);
}

static char* list$ph_char$phphcharph_item(struct list$p_char$ph* self, int position, char* default_value){
struct list_item$_char$ph$_char$ph* it_126;
int i_127;
memset(&it_126, 0, sizeof(struct list_item$_char$ph$_char$ph*));
memset(&i_127, 0, sizeof(int));
        if(position<0) {
            position+=self->len;
        }
        it_126=self->head;
        i_127=0;
        while(it_126!=((void*)0)) {
            if(position==i_127) {
                char* __result__ = it_126->item;
                return __result__;
            }
            it_126=it_126->next;
            i_127++;
        }
        char* __result__ = default_value;
        return __result__;
}

static void list$ph_int$phint_push_back(struct list$p_int$* self, int item){
void* right_value61;
struct list_item$_int$$_int$* litem_129;
void* right_value62;
struct list_item$_int$$_int$* litem_130;
void* right_value63;
struct list_item$_int$$_int$* litem_131;
memset(&litem_129, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_130, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_131, 0, sizeof(struct list_item$_int$$_int$*));
        if(self->len==0) {
            litem_129=(struct list_item$_int$$_int$*)(right_value61=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_129->prev=((void*)0);
            litem_129->next=((void*)0);
            litem_129->item=item;
            self->tail=litem_129;
            self->head=litem_129;
        }
        else if(self->len==1) {
            litem_130=(struct list_item$_int$$_int$*)(right_value62=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_130->prev=self->head;
            litem_130->next=((void*)0);
            litem_130->item=item;
            self->tail=litem_130;
            self->head->next=litem_130;
        }
        else {
            litem_131=(struct list_item$_int$$_int$*)(right_value63=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
            litem_131->prev=self->tail;
            litem_131->next=((void*)0);
            litem_131->item=item;
            self->tail->next=litem_131;
            self->tail=litem_131;
        }
        self->len++;
}

static _Bool list$ph_int$phint_equals(struct list$p_int$* left, struct list$p_int$* right){
struct list_item$_int$$_int$* it_133;
struct list_item$_int$$_int$* it2_134;
memset(&it_133, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it2_134, 0, sizeof(struct list_item$_int$$_int$*));
        if(left->len!=right->len) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        it_133=left->head;
        it2_134=right->head;
        while(it_133!=((void*)0)) {
            if(!int_equals(it_133->item,it2_134->item)) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_133=it_133->next;
            it2_134=it2_134->next;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static int list$ph_int$phint_find(struct list$p_int$* self, int item, int default_value){
int it2_135;
struct list_item$_int$$_int$* it_136;
memset(&it2_135, 0, sizeof(int));
memset(&it_136, 0, sizeof(struct list_item$_int$$_int$*));
        it2_135=0;
        it_136=self->head;
        while(it_136!=((void*)0)) {
            if(int_equals(it_136->item,item)) {
                int __result__ = it2_135;
                return __result__;
            }
            it2_135++;
            it_136=it_136->next;
        }
        int __result__ = default_value;
        return __result__;
}

static struct list$ph_int$* list$ph_int$phint_sublist(struct list$p_int$* self, int begin, int tail){
void* right_value68;
void* right_value69;
struct list$_int$$_int$* result_138;
struct list_item$_int$$_int$* it_141;
int i_142;
memset(&result_138, 0, sizeof(struct list$_int$$_int$*));
memset(&it_141, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_142, 0, sizeof(int));
        result_138=come_increment_ref_count((struct list$ph_int$*)(right_value69=list$_int$$_int$phint_initialize(come_increment_ref_count((struct list$_int$$_int$*)(right_value68=(struct list$_int$$_int$*)come_calloc(1, sizeof(struct list$_int$$_int$)*1))))));
        call_finalizer(list$_int$$_int$phint_finalize,right_value68,0, 1, 0);
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
        it_141=self->head;
        i_142=0;
        while(it_141!=((void*)0)) {
            if(i_142>=begin&&i_142<tail) {
                list$_int$$_int$phint_push_back(result_138,it_141->item);
            }
            it_141=it_141->next;
            i_142++;
        }
        struct list$_int$$_int$* __result__ = result_138;
        call_finalizer(list$_int$$_int$phint_finalize,result_138,0, 0, 1);
        return __result__;
}

static struct list$ph_int$* list$_int$$_int$phint_initialize(struct list$ph_int$* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$ph_int$* __result__ = self;
            call_finalizer(list$ph_int$phint_finalize,self,0, 0, 1);
            return __result__;
}

static void list$_int$$_int$phint_finalize(struct list$p_int$* self){
struct list_item$_int$$_int$* it_139;
struct list_item$_int$$_int$* prev_it_140;
memset(&it_139, 0, sizeof(struct list_item$_int$$_int$*));
memset(&prev_it_140, 0, sizeof(struct list_item$_int$$_int$*));
            it_139=self->head;
            while(it_139!=((void*)0)) {
                if(0) {
                }
                prev_it_140=it_139;
                it_139=it_139->next;
                come_free_object(prev_it_140);
            }
}

static void list$_int$$_int$phint_push_back(struct list$p_int$* self, int item){
void* right_value70;
struct list_item$_int$$_int$* litem_143;
void* right_value71;
struct list_item$_int$$_int$* litem_144;
void* right_value72;
struct list_item$_int$$_int$* litem_145;
memset(&litem_143, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_144, 0, sizeof(struct list_item$_int$$_int$*));
memset(&litem_145, 0, sizeof(struct list_item$_int$$_int$*));
                    if(self->len==0) {
                        litem_143=(struct list_item$_int$$_int$*)(right_value70=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                        litem_143->prev=((void*)0);
                        litem_143->next=((void*)0);
                        litem_143->item=item;
                        self->tail=litem_143;
                        self->head=litem_143;
                    }
                    else if(self->len==1) {
                        litem_144=(struct list_item$_int$$_int$*)(right_value71=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                        litem_144->prev=self->head;
                        litem_144->next=((void*)0);
                        litem_144->item=item;
                        self->tail=litem_144;
                        self->head->next=litem_144;
                    }
                    else {
                        litem_145=(struct list_item$_int$$_int$*)(right_value72=(struct list_item$_int$$_int$*)come_calloc(1, sizeof(struct list_item$_int$$_int$)*1));
                        litem_145->prev=self->tail;
                        litem_145->next=((void*)0);
                        litem_145->item=item;
                        self->tail->next=litem_145;
                        self->tail=litem_145;
                    }
                    self->len++;
}

void method_block4(struct __current_stack4__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static void list$_int$phint_operator_store_element(struct list$p_int$* self, int position, int item){
        list$p_int$$p_int$pint_replace(self,position,item);
}

static void list$p_int$$p_int$pint_replace(struct list$p_int$* self, int position, int item){
struct list_item$_int$$_int$* it_149;
int i_150;
memset(&it_149, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_150, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_149=self->head;
            i_150=0;
            while(it_149!=((void*)0)) {
                if(position==i_150) {
                    it_149->item=item;
                    break;
                }
                it_149=it_149->next;
                i_150++;
            }
}

static int list$_int$phint_operator_load_element(struct list$p_int$* self, int index){
int default_value_151;
memset(&default_value_151, 0, sizeof(int));
        memset(&default_value_151,0,sizeof(int));
        int __result__ = list$p_int$$p_int$pint_item(self,index,default_value_151);
        return __result__;
}

static int list$p_int$$p_int$pint_item(struct list$p_int$* self, int position, int default_value){
struct list_item$_int$$_int$* it_152;
int i_153;
memset(&it_152, 0, sizeof(struct list_item$_int$$_int$*));
memset(&i_153, 0, sizeof(int));
            if(position<0) {
                position+=self->len;
            }
            it_152=self->head;
            i_153=0;
            while(it_152!=((void*)0)) {
                if(position==i_153) {
                    int __result__ = it_152->item;
                    return __result__;
                }
                it_152=it_152->next;
                i_153++;
            }
            int __result__ = default_value;
            return __result__;
}

static _Bool list$_int$phint_operator_equals(struct list$p_int$* self, struct list$p_int$* right){
        _Bool __result__ = list$p_int$$p_int$pint_equals(self,right);
        return __result__;
}

static _Bool list$p_int$$p_int$pint_equals(struct list$p_int$* left, struct list$p_int$* right){
struct list_item$_int$$_int$* it_155;
struct list_item$_int$$_int$* it2_156;
memset(&it_155, 0, sizeof(struct list_item$_int$$_int$*));
memset(&it2_156, 0, sizeof(struct list_item$_int$$_int$*));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            it_155=left->head;
            it2_156=right->head;
            while(it_155!=((void*)0)) {
                if(!int_equals(it_155->item,it2_156->item)) {
                    _Bool __result__ = (_Bool)0;
                    return __result__;
                }
                it_155=it_155->next;
                it2_156=it2_156->next;
            }
            _Bool __result__ = (_Bool)1;
            return __result__;
}

void method_block5(struct __current_stack5__* parent, int it, int it2, _Bool* it3){
        printf("%d\n",it);
}

static struct map$ph_char$p_int$* map$_char$p_int$phcharpint_initialize(struct map$ph_char$p_int$* self){
void* right_value90;
void* right_value91;
void* right_value92;
int i_160;
void* right_value93;
void* right_value94;
memset(&i_160, 0, sizeof(int));
        self->keys=(char***)(right_value90=(char***)come_calloc(1, sizeof(char**)*1*128));
        self->items=(int**)(right_value91=(int**)come_calloc(1, sizeof(int*)*1*128));
        self->item_existance=(_Bool**)(right_value92=(_Bool**)come_calloc(1, sizeof(_Bool*)*1*128));
        for(
        i_160=0;
        i_160<128;
        i_160++
        ){
            self->item_existance[i_160]=(_Bool)0;
        }
        self->size=128;
        self->len=0;
        come_decrement_ref_count(self->key_list, 0, 0);
        self->key_list=come_increment_ref_count((struct list$ph_char$p*)(right_value94=list$_char$pphcharp_initialize(come_increment_ref_count((struct list$_char$p*)(right_value93=(struct list$_char$p*)come_calloc(1, sizeof(struct list$_char$p)*1))))));
        call_finalizer(list$_char$pphcharp_finalize,right_value93,0, 1, 0);
        self->it=0;
        struct map$ph_char$p_int$* __result__ = self;
        call_finalizer(map$ph_char$p_int$phcharpint_finalize,self,0, 0, 1);
        return __result__;
}

static struct list$ph_char$p* list$_char$pphcharp_initialize(struct list$ph_char$p* self){
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            struct list$ph_char$p* __result__ = self;
            call_finalizer(list$ph_char$pphcharp_finalize,self,0, 0, 1);
            return __result__;
}

static void list$ph_char$pphcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p* it_161;
struct list_item$_char$p* prev_it_162;
memset(&it_161, 0, sizeof(struct list_item$_char$p*));
memset(&prev_it_162, 0, sizeof(struct list_item$_char$p*));
                it_161=self->head;
                while(it_161!=((void*)0)) {
                    if(0) {
                        it_161->item = come_decrement_ref_count(it_161->item, 0, 0);
                    }
                    prev_it_162=it_161;
                    it_161=it_161->next;
                    come_free_object(prev_it_162);
                }
}

static void list$_char$pphcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p$_char$p* it_163;
struct list_item$_char$p$_char$p* prev_it_164;
memset(&it_163, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_164, 0, sizeof(struct list_item$_char$p$_char$p*));
            it_163=self->head;
            while(it_163!=((void*)0)) {
                if(0) {
                    it_163->item = come_decrement_ref_count(it_163->item, 0, 0);
                }
                prev_it_164=it_163;
                it_163=it_163->next;
                come_free_object(prev_it_164);
            }
}

static void map$ph_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_165;
int i_166;
memset(&i_165, 0, sizeof(int));
memset(&i_166, 0, sizeof(int));
            for(
            i_165=0;
            i_165<self->size;
            i_165++
            ){
                if(self->item_existance[i_165]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_166=0;
            i_166<self->size;
            i_166++
            ){
                if(self->item_existance[i_166]) {
                    if(0) {
                        self->keys[i_166] = come_decrement_ref_count(self->keys[i_166], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void list$ph_char$ppcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p$_char$p* it_167;
struct list_item$_char$p$_char$p* prev_it_168;
memset(&it_167, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_168, 0, sizeof(struct list_item$_char$p$_char$p*));
                it_167=self->head;
                while(it_167!=((void*)0)) {
                    if(0) {
                        it_167->item = come_decrement_ref_count(it_167->item, 0, 0);
                    }
                    prev_it_168=it_167;
                    it_167=it_167->next;
                    come_free_object(prev_it_168);
                }
}

static void map$_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_170;
int i_171;
memset(&i_170, 0, sizeof(int));
memset(&i_171, 0, sizeof(int));
        for(
        i_170=0;
        i_170<self->size;
        i_170++
        ){
            if(self->item_existance[i_170]) {
                if(0) {
                }
            }
        }
        come_free_object((char*)self->items);
        for(
        i_171=0;
        i_171<self->size;
        i_171++
        ){
            if(self->item_existance[i_171]) {
                if(0) {
                    self->keys[i_171] = come_decrement_ref_count(self->keys[i_171], 0, 0);
                }
            }
        }
        come_free_object((char*)self->keys);
        call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
        self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$_char$p_int$phcharpint_insert(struct map$p_char$p_int$* self, char* key, int item){
int hash_187;
int it_188;
_Bool same_key_exist_189;
char* it2_191;
memset(&hash_187, 0, sizeof(int));
memset(&it_188, 0, sizeof(int));
memset(&same_key_exist_189, 0, sizeof(_Bool));
memset(&it2_191, 0, sizeof(char*));
        if(self->len*2>=self->size) {
            map$p_char$p_int$$p_char$p_int$pcharpint_rehash(self);
        }
        hash_187=charp_get_hash_key(key)%self->size;
        it_188=hash_187;
        while((_Bool)1) {
            if(self->item_existance[it_188]) {
                if(charp_equals(self->keys[it_188],key)) {
                    if(0) {
                        self->keys[it_188] = come_decrement_ref_count(self->keys[it_188], 0, 0);
                        self->keys[it_188]=key;
                    }
                    else {
                        self->keys[it_188]=key;
                    }
                    if(0) {
                        self->items[it_188]=item;
                    }
                    else {
                        self->items[it_188]=item;
                    }
                    break;
                }
                it_188++;
                if(it_188>=self->size) {
                    it_188=0;
                }
                else if(it_188==hash_187) {
                    fprintf(stderr,"unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self->item_existance[it_188]=(_Bool)1;
                if(0) {
                    self->keys[it_188] = come_decrement_ref_count(self->keys[it_188], 0, 0);
                    self->keys[it_188]=key;
                }
                else {
                    self->keys[it_188]=key;
                }
                if(0) {
                    self->items[it_188]=item;
                }
                else {
                    self->items[it_188]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_189=(_Bool)0;
        for(
        it2_191=list$ph_char$p$ph_char$pphcharp_begin((self->key_list));
        !list$ph_char$p$ph_char$pphcharp_end((self->key_list));
        it2_191=list$ph_char$p$ph_char$pphcharp_next((self->key_list))
        ){
            if(charp_equals(it2_191,key)) {
                same_key_exist_189=(_Bool)1;
            }
        }
        if(!same_key_exist_189) {
            list$ph_char$p$ph_char$pphcharp_push_back(self->key_list,key);
        }
}

static void map$p_char$p_int$$p_char$p_int$pcharpint_rehash(struct map$p_char$p_int$* self){
int size_172;
void* right_value96;
char** keys_173;
void* right_value97;
int* items_174;
void* right_value98;
_Bool* item_existance_175;
int len_176;
char* it_178;
int default_value_180;
int it2_183;
int hash_184;
int n_185;
int default_value_186;
memset(&size_172, 0, sizeof(int));
memset(&keys_173, 0, sizeof(char**));
memset(&items_174, 0, sizeof(int*));
memset(&item_existance_175, 0, sizeof(_Bool*));
memset(&len_176, 0, sizeof(int));
memset(&it_178, 0, sizeof(char*));
memset(&default_value_180, 0, sizeof(int));
memset(&it2_183, 0, sizeof(int));
memset(&hash_184, 0, sizeof(int));
memset(&n_185, 0, sizeof(int));
memset(&default_value_186, 0, sizeof(int));
                size_172=self->size*3;
                keys_173=(char***)(right_value96=(char***)come_calloc(1, sizeof(char**)*1*size_172));
                items_174=(int**)(right_value97=(int**)come_calloc(1, sizeof(int*)*1*size_172));
                item_existance_175=(_Bool**)(right_value98=(_Bool**)come_calloc(1, sizeof(_Bool*)*1*size_172));
                len_176=0;
                for(
                it_178=map$p_char$p_int$$p_char$p_int$pcharpint_begin(self);
                !map$p_char$p_int$$p_char$p_int$pcharpint_end(self);
                it_178=map$p_char$p_int$$p_char$p_int$pcharpint_next(self)
                ){
                    it2_183=map$p_char$p_int$$p_char$p_int$pcharpint_at(self,it_178,default_value_180);
                    hash_184=charp_get_hash_key(it_178)%size_172;
                    n_185=hash_184;
                    while((_Bool)1) {
                        if(item_existance_175[n_185]) {
                            n_185++;
                            if(n_185>=size_172) {
                                n_185=0;
                            }
                            else if(n_185==hash_184) {
                                fprintf(stderr,"unexpected error in map.rehash(1)\n");
                                exit(2);
                            }
                        }
                        else {
                            item_existance_175[n_185]=(_Bool)1;
                            keys_173[n_185]=it_178;
                            items_174[n_185]=map$p_char$p_int$$p_char$p_int$pcharpint_at(self,it_178,default_value_186);
                            len_176++;
                            break;
                        }
                    }
                }
                come_free_object((char*)self->items);
                self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
                come_free_object((char*)self->keys);
                self->keys=keys_173;
                self->items=items_174;
                self->item_existance=item_existance_175;
                self->size=size_172;
                self->len=len_176;
}

static char* map$p_char$p_int$$p_char$p_int$pcharpint_begin(struct map$p_char$p_int$* self){
char* result_177;
memset(&result_177, 0, sizeof(char*));
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        char* __result__ = self->key_list->it->item;
                        return __result__;
                    }
                    memset(&result_177,0,sizeof(char*));
                    char* __result__ = result_177;
                    return __result__;
}

static _Bool map$p_char$p_int$$p_char$p_int$pcharpint_end(struct map$p_char$p_int$* self){
                    struct list_item$p_char$p* __result__ = self->key_list->it==((void*)0);
                    return __result__;
}

static char* map$p_char$p_int$$p_char$p_int$pcharpint_next(struct map$p_char$p_int$* self){
char* result_179;
memset(&result_179, 0, sizeof(char*));
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        char* __result__ = self->key_list->it->item;
                        return __result__;
                    }
                    memset(&result_179,0,sizeof(char*));
                    char* __result__ = result_179;
                    return __result__;
}

static int map$p_char$p_int$$p_char$p_int$pcharpint_at(struct map$p_char$p_int$* self, char* key, int default_value){
int hash_181;
int it_182;
memset(&hash_181, 0, sizeof(int));
memset(&it_182, 0, sizeof(int));
                        hash_181=charp_get_hash_key(((char*)key))%self->size;
                        it_182=hash_181;
                        while((_Bool)1) {
                            if(self->item_existance[it_182]) {
                                if(charp_equals(self->keys[it_182],key)) {
                                    int __result__ = self->items[it_182];
                                    return __result__;
                                }
                                it_182++;
                                if(it_182>=self->size) {
                                    it_182=0;
                                }
                                else if(it_182==hash_181) {
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

static char* list$ph_char$p$ph_char$pphcharp_begin(struct list$p_char$p* self){
char* result_190;
memset(&result_190, 0, sizeof(char*));
            self->it=self->head;
            if(self->it) {
                char* __result__ = self->it->item;
                return __result__;
            }
            memset(&result_190,0,sizeof(char*));
            char* __result__ = result_190;
            return __result__;
}

static _Bool list$ph_char$p$ph_char$pphcharp_end(struct list$p_char$p* self){
            struct list_item$p_char$p* __result__ = self->it==((void*)0);
            return __result__;
}

static char* list$ph_char$p$ph_char$pphcharp_next(struct list$p_char$p* self){
char* result_192;
memset(&result_192, 0, sizeof(char*));
            self->it=self->it->next;
            if(self->it) {
                char* __result__ = self->it->item;
                return __result__;
            }
            memset(&result_192,0,sizeof(char*));
            char* __result__ = result_192;
            return __result__;
}

static void list$ph_char$p$ph_char$pphcharp_push_back(struct list$p_char$p* self, char* item){
void* right_value99;
struct list_item$_char$p$_char$p* litem_193;
void* right_value100;
struct list_item$_char$p$_char$p* litem_194;
void* right_value101;
struct list_item$_char$p$_char$p* litem_195;
memset(&litem_193, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&litem_194, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&litem_195, 0, sizeof(struct list_item$_char$p$_char$p*));
                if(self->len==0) {
                    litem_193=(struct list_item$_char$p$_char$p*)(right_value99=(struct list_item$_char$p$_char$p*)come_calloc(1, sizeof(struct list_item$_char$p$_char$p)*1));
                    litem_193->prev=((void*)0);
                    litem_193->next=((void*)0);
                    litem_193->item=item;
                    self->tail=litem_193;
                    self->head=litem_193;
                }
                else if(self->len==1) {
                    litem_194=(struct list_item$_char$p$_char$p*)(right_value100=(struct list_item$_char$p$_char$p*)come_calloc(1, sizeof(struct list_item$_char$p$_char$p)*1));
                    litem_194->prev=self->head;
                    litem_194->next=((void*)0);
                    litem_194->item=item;
                    self->tail=litem_194;
                    self->head->next=litem_194;
                }
                else {
                    litem_195=(struct list_item$_char$p$_char$p*)(right_value101=(struct list_item$_char$p$_char$p*)come_calloc(1, sizeof(struct list_item$_char$p$_char$p)*1));
                    litem_195->prev=self->tail;
                    litem_195->next=((void*)0);
                    litem_195->item=item;
                    self->tail->next=litem_195;
                    self->tail=litem_195;
                }
                self->len++;
}

static _Bool map$_char$p_int$phcharpint_operator_equals(struct map$p_char$p_int$* left, struct map$p_char$p_int$* right){
        _Bool __result__ = map$p_char$p_int$$p_char$p_int$pcharpint_equals(left,right);
        return __result__;
}

static _Bool map$p_char$p_int$$p_char$p_int$pcharpint_equals(struct map$p_char$p_int$* left, struct map$p_char$p_int$* right){
int n_197;
_Bool result_198;
char* it_199;
char* default_value_200;
char* it2_203;
int default_value2_204;
int item_205;
int item2_206;
memset(&n_197, 0, sizeof(int));
memset(&result_198, 0, sizeof(_Bool));
memset(&it_199, 0, sizeof(char*));
memset(&default_value_200, 0, sizeof(char*));
memset(&it2_203, 0, sizeof(char*));
memset(&default_value2_204, 0, sizeof(int));
memset(&item_205, 0, sizeof(int));
memset(&item2_206, 0, sizeof(int));
            if(left->len!=right->len) {
                _Bool __result__ = (_Bool)0;
                return __result__;
            }
            n_197=0;
            result_198=(_Bool)1;
            for(
            it_199=list$ph_char$p$ph_char$pphcharp_begin((left->key_list));
            !list$ph_char$p$ph_char$pphcharp_end((left->key_list));
            it_199=list$ph_char$p$ph_char$pphcharp_next((left->key_list))
            ){
                it2_203=list$ph_char$p$ph_char$pphcharp_item(right->key_list,n_197,default_value_200);
                if(charp_equals(it_199,it2_203)) {
                    item_205=map$p_char$p_int$$p_char$p_int$pcharpint_at(left,it_199,default_value2_204);
                    item2_206=map$p_char$p_int$$p_char$p_int$pcharpint_at(left,it2_203,default_value2_204);
                    if(!int_equals(item_205,item2_206)) {
                        result_198=(_Bool)0;
                    }
                }
                else {
                    result_198=(_Bool)0;
                }
                n_197++;
            }
            _Bool __result__ = result_198;
            return __result__;
}

static char* list$ph_char$p$ph_char$pphcharp_item(struct list$p_char$p* self, int position, char* default_value){
struct list_item$_char$p$_char$p* it_201;
int i_202;
memset(&it_201, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&i_202, 0, sizeof(int));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_201=self->head;
                    i_202=0;
                    while(it_201!=((void*)0)) {
                        if(position==i_202) {
                            char* __result__ = it_201->item;
                            return __result__;
                        }
                        it_201=it_201->next;
                        i_202++;
                    }
                    char* __result__ = default_value;
                    return __result__;
}

static int map$_char$p_int$phcharpint_operator_load_element(struct map$p_char$p_int$* self, char* key){
int default_value_209;
memset(&default_value_209, 0, sizeof(int));
        memset(&default_value_209,0,sizeof(int));
        int __result__ = map$p_char$p_int$$p_char$p_int$pcharpint_at(self,key,default_value_209);
        return __result__;
}

static struct map$ph_char$p_int$* map$_char$p_int$phcharpint_clone(struct map$p_char$p_int$* self){
void* right_value106;
void* right_value112;
struct map$ph_char$p_int$* result_213;
char* it_216;
int default_value_217;
int it2_218;
memset(&result_213, 0, sizeof(struct map$ph_char$p_int$*));
memset(&it_216, 0, sizeof(char*));
memset(&default_value_217, 0, sizeof(int));
memset(&it2_218, 0, sizeof(int));
        if(self==((void*)0)) {
            void* __result__ = ((void*)0);
            return __result__;
        }
        result_213=come_increment_ref_count((struct map$ph_char$p_int$*)(right_value112=map$_char$p_int$$_char$p_int$phcharpint_initialize(come_increment_ref_count((struct map$_char$p_int$$_char$p_int$*)(right_value106=(struct map$_char$p_int$$_char$p_int$*)come_calloc(1, sizeof(struct map$_char$p_int$$_char$p_int$)*1))))));
        call_finalizer(map$_char$p_int$$_char$p_int$phcharpint_finalize,right_value106,0, 1, 0);
        for(
        it_216=map$p_char$p_int$$p_char$p_int$pcharpint_begin(self);
        !map$p_char$p_int$$p_char$p_int$pcharpint_end(self);
        it_216=map$p_char$p_int$$p_char$p_int$pcharpint_next(self)
        ){
            it2_218=map$p_char$p_int$$p_char$p_int$pcharpint_at(self,it_216,default_value_217);
            map$ph_char$p_int$$ph_char$p_int$phcharpint_insert2(result_213,charp_clone(it_216),int_clone(it2_218));
        }
        struct map$ph_char$p_int$* __result__ = result_213;
        call_finalizer(map$ph_char$p_int$phcharpint_finalize,result_213,0, 0, 1);
        return __result__;
}

static struct map$ph_char$p_int$* map$_char$p_int$$_char$p_int$phcharpint_initialize(struct map$ph_char$p_int$* self){
void* right_value107;
void* right_value108;
void* right_value109;
int i_210;
void* right_value110;
void* right_value111;
memset(&i_210, 0, sizeof(int));
            self->keys=(char***)(right_value107=(char***)come_calloc(1, sizeof(char**)*1*128));
            self->items=(int**)(right_value108=(int**)come_calloc(1, sizeof(int*)*1*128));
            self->item_existance=(_Bool**)(right_value109=(_Bool**)come_calloc(1, sizeof(_Bool*)*1*128));
            for(
            i_210=0;
            i_210<128;
            i_210++
            ){
                self->item_existance[i_210]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            come_decrement_ref_count(self->key_list, 0, 0);
            self->key_list=come_increment_ref_count((struct list$ph_char$p*)(right_value111=list$_char$p$_char$pphcharp_initialize(come_increment_ref_count((struct list$_char$p$_char$p*)(right_value110=(struct list$_char$p$_char$p*)come_calloc(1, sizeof(struct list$_char$p$_char$p)*1))))));
            call_finalizer(list$_char$p$_char$pphcharp_finalize,right_value110,0, 1, 0);
            self->it=0;
            struct map$ph_char$p_int$* __result__ = self;
            call_finalizer(map$ph_char$p_int$phcharpint_finalize,self,0, 0, 1);
            return __result__;
}

static struct list$ph_char$p* list$_char$p$_char$pphcharp_initialize(struct list$ph_char$p* self){
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                struct list$ph_char$p* __result__ = self;
                call_finalizer(list$ph_char$pphcharp_finalize,self,0, 0, 1);
                return __result__;
}

static void list$_char$p$_char$pphcharp_finalize(struct list$p_char$p* self){
struct list_item$_char$p$_char$p* it_211;
struct list_item$_char$p$_char$p* prev_it_212;
memset(&it_211, 0, sizeof(struct list_item$_char$p$_char$p*));
memset(&prev_it_212, 0, sizeof(struct list_item$_char$p$_char$p*));
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

static void map$_char$p_int$$_char$p_int$phcharpint_finalize(struct map$p_char$p_int$* self){
int i_214;
int i_215;
memset(&i_214, 0, sizeof(int));
memset(&i_215, 0, sizeof(int));
            for(
            i_214=0;
            i_214<self->size;
            i_214++
            ){
                if(self->item_existance[i_214]) {
                    if(0) {
                    }
                }
            }
            come_free_object((char*)self->items);
            for(
            i_215=0;
            i_215<self->size;
            i_215++
            ){
                if(self->item_existance[i_215]) {
                    if(0) {
                        self->keys[i_215] = come_decrement_ref_count(self->keys[i_215], 0, 0);
                    }
                }
            }
            come_free_object((char*)self->keys);
            call_finalizer(list$ph_char$ppcharp_finalize,self->key_list,0, 0, 0);
            self->item_existance = come_decrement_ref_count(self->item_existance, 0, 0);
}

static void map$ph_char$p_int$$ph_char$p_int$phcharpint_insert2(struct map$p_char$p_int$* self, char* key, int item){
int hash_219;
int it_220;
_Bool same_key_exist_221;
char* it2_222;
memset(&hash_219, 0, sizeof(int));
memset(&it_220, 0, sizeof(int));
memset(&same_key_exist_221, 0, sizeof(_Bool));
memset(&it2_222, 0, sizeof(char*));
                if(self->len*2>=self->size) {
                    map$p_char$p_int$$p_char$p_int$pcharpint_rehash(self);
                }
                hash_219=charp_get_hash_key(key)%self->size;
                it_220=hash_219;
                while((_Bool)1) {
                    if(self->item_existance[it_220]) {
                        if(charp_equals(self->keys[it_220],key)) {
                            if(0) {
                                self->keys[it_220] = come_decrement_ref_count(self->keys[it_220], 0, 0);
                                self->keys[it_220]=key;
                            }
                            else {
                                self->keys[it_220]=key;
                            }
                            if(0) {
                                self->items[it_220]=item;
                            }
                            else {
                                self->items[it_220]=item;
                            }
                            break;
                        }
                        it_220++;
                        if(it_220>=self->size) {
                            it_220=0;
                        }
                        else if(it_220==hash_219) {
                            fprintf(stderr,"unexpected error in map.insert\n");
                            exit(2);
                        }
                    }
                    else {
                        self->item_existance[it_220]=(_Bool)1;
                        if(0) {
                            self->keys[it_220] = come_decrement_ref_count(self->keys[it_220], 0, 0);
                            self->keys[it_220]=key;
                        }
                        else {
                            self->keys[it_220]=key;
                        }
                        if(0) {
                            self->items[it_220]=item;
                        }
                        else {
                            self->items[it_220]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_221=(_Bool)0;
                for(
                it2_222=list$ph_char$p$ph_char$pphcharp_begin((self->key_list));
                !list$ph_char$p$ph_char$pphcharp_end((self->key_list));
                it2_222=list$ph_char$p$ph_char$pphcharp_next((self->key_list))
                ){
                    if(charp_equals(it2_222,key)) {
                        same_key_exist_221=(_Bool)1;
                    }
                }
                if(!same_key_exist_221) {
                    list$ph_char$p$ph_char$pphcharp_push_back(self->key_list,key);
                }
}

static struct tuple1$ph_int$* tuple1$_int$phint_initialize(struct tuple1$ph_int$* self, int v1){
        self->v1=v1;
        struct tuple1$ph_int$* __result__ = self;
        call_finalizer(tuple1$ph_int$phint_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple1$ph_int$phint_finalize(struct tuple1$ph_int$* self){
}

static void tuple1$_int$phint_finalize(struct tuple1$_int$* self){
}

static struct tuple1$ph_char$ph* tuple1$_char$phphcharph_initialize(struct tuple1$ph_char$ph* self, char* v1){
        come_decrement_ref_count(self->v1, 0, 0);
        self->v1=come_increment_ref_count(v1);
        struct tuple1$ph_char$ph* __result__ = self;
        call_finalizer(tuple1$ph_char$phphcharph_finalize,self,0, 0, 1);
        v1 = come_decrement_ref_count(v1, 0, 1);
        return __result__;
}

static void tuple1$ph_char$phphcharph_finalize(struct tuple1$ph_char$ph* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static void tuple1$_char$phphcharph_finalize(struct tuple1$_char$ph* self){
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            self->v1 = come_decrement_ref_count(self->v1, 0, 0);
        }
}

static struct tuple1$_char$ph* tuple1$_char$phphcharph_clone(struct tuple1$_char$ph* self){
void* right_value119;
struct tuple1$_char$ph* result_226;
memset(&result_226, 0, sizeof(struct tuple1$_char$ph*));
        result_226=come_increment_ref_count((struct tuple1$_char$ph*)(right_value119=(struct tuple1$_char$ph*)come_calloc(1, sizeof(struct tuple1$_char$ph)*1)));
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            come_decrement_ref_count(result_226->v1, 0, 0);
            result_226->v1=come_increment_ref_count(string_clone(self->v1));
        }
        struct tuple1$_char$ph* __result__ = result_226;
        call_finalizer(tuple1$_char$phph_finalize,result_226,0, 0, 1);
        return __result__;
}

static void tuple1$_char$phph_finalize(struct tuple1$_char$ph* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static _Bool tuple1$_char$phphcharph_equals(struct tuple1$_char$ph* left, struct tuple1$_char$ph* right){
        if(!string_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static _Bool tuple1$_char$phphcharph_operator_equals(struct tuple1$_char$ph* left, struct tuple1$_char$ph* right){
        if(!string_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static struct tuple2$ph_char$ph_int$* tuple2$_char$ph_int$phcharphint_initialize(struct tuple2$ph_char$ph_int$* self, char* v1, int v2){
        come_decrement_ref_count(self->v1, 0, 0);
        self->v1=come_increment_ref_count(v1);
        self->v2=v2;
        struct tuple2$ph_char$ph_int$* __result__ = self;
        call_finalizer(tuple2$ph_char$ph_int$phcharphint_finalize,self,0, 0, 1);
        v1 = come_decrement_ref_count(v1, 0, 1);
        return __result__;
}

static void tuple2$ph_char$ph_int$phcharphint_finalize(struct tuple2$ph_char$ph_int$* self){
            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                self->v1 = come_decrement_ref_count(self->v1, 0, 0);
            }
}

static void tuple2$_char$ph_int$phcharphint_finalize(struct tuple2$_char$ph_int$* self){
        if(self!=((void*)0)&&self->v1!=((void*)0)) {
            self->v1 = come_decrement_ref_count(self->v1, 0, 0);
        }
}

static struct tuple2$ph_char$p_int$* tuple2$_char$p_int$phcharpint_initialize(struct tuple2$ph_char$p_int$* self, char* v1, int v2){
        self->v1=v1;
        self->v2=v2;
        struct tuple2$ph_char$p_int$* __result__ = self;
        call_finalizer(tuple2$ph_char$p_int$phcharpint_finalize,self,0, 0, 1);
        return __result__;
}

static void tuple2$ph_char$p_int$phcharpint_finalize(struct tuple2$ph_char$p_int$* self){
}

static void tuple2$_char$p_int$phcharpint_finalize(struct tuple2$_char$p_int$* self){
}

static _Bool tuple2$ph_char$p_int$phcharpint_equals(struct tuple2$ph_char$p_int$* left, struct tuple2$ph_char$p_int$* right){
        if(!charp_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        if(!int_equals(left->v2,right->v2)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

static _Bool tuple2$ph_char$p_int$phcharpint_operator_equals(struct tuple2$ph_char$p_int$* left, struct tuple2$ph_char$p_int$* right){
        if(!charp_equals(left->v1,right->v1)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        if(!int_equals(left->v2,right->v2)) {
            _Bool __result__ = (_Bool)0;
            return __result__;
        }
        _Bool __result__ = (_Bool)1;
        return __result__;
}

