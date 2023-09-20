# 0 "code2/HelloWorld2.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "code2/HelloWorld2.c"
# 1 "./comelang2.h" 1
using comelang;

struct __builtin_va_list
{
    char* v1;
    char* v2;
    char* v3;
    int v4;
    int v5;
};

void __builtin_va_start(char*);
void __builtin_va_end(char*);



# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 392 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/timesize.h" 1 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 393 "/usr/include/features.h" 2 3 4
# 489 "/usr/include/features.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 1 3 4
# 561 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 562 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/long-double.h" 1 3 4
# 563 "/usr/include/aarch64-linux-gnu/sys/cdefs.h" 2 3 4
# 490 "/usr/include/features.h" 2 3 4
# 513 "/usr/include/features.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 1 3 4




# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 6 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/gnu/stubs-lp64.h" 1 3 4
# 9 "/usr/include/aarch64-linux-gnu/gnu/stubs.h" 2 3 4
# 514 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stddef.h" 3 4

# 214 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/aarch64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/aarch64-linux-gnu/bits/types.h" 2 3 4


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
typedef struct { int __val[2]; } __fsid_t;
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


typedef void * __timer_t;


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



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 39 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/aarch64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/aarch64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/aarch64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/aarch64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/aarch64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 47 "/usr/include/stdio.h" 2 3 4
# 56 "/usr/include/stdio.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stdarg.h" 1 3 4
# 99 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 57 "/usr/include/stdio.h" 2 3 4






typedef __off_t off_t;






typedef __off64_t off64_t;






typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;




typedef __fpos64_t fpos64_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4
# 143 "/usr/include/stdio.h" 3 4
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) ;
# 170 "/usr/include/stdio.h" 3 4
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) ;






extern int fclose (FILE *__stream);
# 188 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void)
  ;
# 200 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void)
   ;



extern char *tmpnam (char[20]) ;




extern char *tmpnam_r (char __s[20]) ;
# 222 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
   ;






extern int fflush (FILE *__stream);
# 239 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 249 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 258 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *restrict __filename,
      const char *restrict __modes)
  ;




extern FILE *freopen (const char *restrict __filename,
        const char *restrict __modes,
        FILE *restrict __stream) ;
# 283 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *restrict __filename,
        const char *restrict __modes)
  ;
extern FILE *freopen64 (const char *restrict __filename,
   const char *restrict __modes,
   FILE *restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes)
  ;





extern FILE *fopencookie (void *restrict __magic_cookie,
     const char *restrict __modes,
     cookie_io_functions_t __io_funcs)
  ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc)
  ;
# 328 "/usr/include/stdio.h" 3 4
extern void setbuf (FILE *restrict __stream, char *restrict __buf) ;



extern int setvbuf (FILE *restrict __stream, char *restrict __buf,
      int __modes, size_t __n) ;




extern void setbuffer (FILE *restrict __stream, char *restrict __buf,
         size_t __size) ;


extern void setlinebuf (FILE *__stream) ;







extern int fprintf (FILE *restrict __stream,
      const char *restrict __format, ...);




extern int printf (const char *restrict __format, ...);

extern int sprintf (char *restrict __s,
      const char *restrict __format, ...) ;





extern int vfprintf (FILE *restrict __s, const char *restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *restrict __s, const char *restrict __format,
       __gnuc_va_list __arg) ;



extern int snprintf (char *restrict __s, size_t __maxlen,
       const char *restrict __format, ...)
     ;

extern int vsnprintf (char *restrict __s, size_t __maxlen,
        const char *restrict __format, __gnuc_va_list __arg)
     ;





extern int vasprintf (char **restrict __ptr, const char *restrict __f,
        __gnuc_va_list __arg)
     ;
extern int __asprintf (char **restrict __ptr,
         const char *restrict __fmt, ...)
     ;
extern int asprintf (char **restrict __ptr,
       const char *restrict __fmt, ...)
     ;




extern int vdprintf (int __fd, const char *restrict __fmt,
       __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char *restrict __fmt, ...)
     ;







extern int fscanf (FILE *restrict __stream,
     const char *restrict __format, ...) ;




extern int scanf (const char *restrict __format, ...) ;

extern int sscanf (const char *restrict __s,
     const char *restrict __format, ...) ;





# 1 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/long-double.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 2 3 4
# 80 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
typedef long double _Float128;
# 95 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 2 3 4
# 214 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef float _Float32;
# 251 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float64;
# 268 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float32x;
# 285 "/usr/include/aarch64-linux-gnu/bits/floatn-common.h" 3 4
typedef long double _Float64x;
# 96 "/usr/include/aarch64-linux-gnu/bits/floatn.h" 2 3 4
# 431 "/usr/include/stdio.h" 2 3 4
# 443 "/usr/include/stdio.h" 3 4
extern int __isoc99_fscanf (FILE *restrict __stream,
       const char *restrict __format, ...) ;
extern int __isoc99_scanf (const char *restrict __format, ...) ;
extern int __isoc99_sscanf (const char *restrict __s,
       const char *restrict __format, ...) ;
# 459 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *restrict __s, const char *restrict __format,
      __gnuc_va_list __arg)
     ;





extern int vscanf (const char *restrict __format, __gnuc_va_list __arg)
     ;


extern int vsscanf (const char *restrict __s,
      const char *restrict __format, __gnuc_va_list __arg)
     ;
# 493 "/usr/include/stdio.h" 3 4
extern int __isoc99_vfscanf (FILE *restrict __s,
        const char *restrict __format,
        __gnuc_va_list __arg) ;
extern int __isoc99_vscanf (const char *restrict __format,
       __gnuc_va_list __arg) ;
extern int __isoc99_vsscanf (const char *restrict __s,
        const char *restrict __format,
        __gnuc_va_list __arg) ;
# 513 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 538 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 549 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 565 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *restrict __s, int __n, FILE *restrict __stream)
     ;
# 615 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *restrict __s, int __n,
        FILE *restrict __stream)
    ;
# 632 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **restrict __lineptr,
                             size_t *restrict __n, int __delimiter,
                             FILE *restrict __stream) ;
extern __ssize_t getdelim (char **restrict __lineptr,
                           size_t *restrict __n, int __delimiter,
                           FILE *restrict __stream) ;







extern __ssize_t getline (char **restrict __lineptr,
                          size_t *restrict __n,
                          FILE *restrict __stream) ;







extern int fputs (const char *restrict __s, FILE *restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *restrict __ptr, size_t __size,
       size_t __n, FILE *restrict __stream) ;




extern size_t fwrite (const void *restrict __ptr, size_t __size,
        size_t __n, FILE *restrict __s);
# 691 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *restrict __s,
      FILE *restrict __stream);
# 702 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *restrict __ptr, size_t __size,
         size_t __n, FILE *restrict __stream) ;
extern size_t fwrite_unlocked (const void *restrict __ptr, size_t __size,
          size_t __n, FILE *restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 736 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 760 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *restrict __stream, fpos_t *restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 779 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *restrict __stream, fpos64_t *restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);



extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream) ;

extern int ferror (FILE *__stream) ;



extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream) ;
extern int ferror_unlocked (FILE *__stream) ;







extern void perror (const char *__s);




extern int fileno (FILE *__stream) ;




extern int fileno_unlocked (FILE *__stream) ;
# 823 "/usr/include/stdio.h" 3 4
extern int pclose (FILE *__stream);





extern FILE *popen (const char *__command, const char *__modes)
  ;






extern char *ctermid (char *__s)
  ;





extern char *cuserid (char *__s)
  ;




struct obstack;


extern int obstack_printf (struct obstack *restrict __obstack,
      const char *restrict __format, ...)
     ;
extern int obstack_vprintf (struct obstack *restrict __obstack,
       const char *restrict __format,
       __gnuc_va_list __args)
     ;







extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream) ;


extern void funlockfile (FILE *__stream) ;
# 885 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 909 "/usr/include/stdio.h" 3 4

# 18 "./comelang2.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *restrict __dest, const void *restrict __src,
       size_t __n) ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
     ;





extern void *memccpy (void *restrict __dest, const void *restrict __src,
        int __c, size_t __n)
    ;




extern void *memset (void *__s, int __c, size_t __n) ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     ;
# 80 "/usr/include/string.h" 3 4
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     ;
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      ;
# 120 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     ;
# 133 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
     
      ;





extern char *strcpy (char *restrict __dest, const char *restrict __src)
     ;

extern char *strncpy (char *restrict __dest,
        const char *restrict __src, size_t __n)
     ;


extern char *strcat (char *restrict __dest, const char *restrict __src)
     ;

extern char *strncat (char *restrict __dest, const char *restrict __src,
        size_t __n) ;


extern int strcmp (const char *__s1, const char *__s2)
     ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     ;


extern int strcoll (const char *__s1, const char *__s2)
     ;

extern size_t strxfrm (char *restrict __dest,
         const char *restrict __src, size_t __n)
    ;



# 1 "/usr/include/aarch64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/aarch64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/aarch64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 173 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     ;


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l)
     ;





extern char *strdup (const char *__s)
     ;






extern char *strndup (const char *__string, size_t __n)
     ;
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     ;
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     ;
# 286 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     ;





extern size_t strcspn (const char *__s, const char *__reject)
     ;


extern size_t strspn (const char *__s, const char *__accept)
     ;
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     ;
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     ;




extern char *strtok (char *restrict __s, const char *restrict __delim)
     ;



extern char *__strtok_r (char *restrict __s,
    const char *restrict __delim,
    char **restrict __save_ptr)
     ;

extern char *strtok_r (char *restrict __s, const char *restrict __delim,
         char **restrict __save_ptr)
     ;
# 380 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     ;







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
    
   
    ;



extern void *__mempcpy (void *restrict __dest,
   const void *restrict __src, size_t __n)
     ;
extern void *mempcpy (void *restrict __dest,
        const void *restrict __src, size_t __n)
     ;




extern size_t strlen (const char *__s)
     ;




extern size_t strnlen (const char *__string, size_t __maxlen)
     ;




extern char *strerror (int __errnum) ;
# 444 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     ;




extern const char *strerrordesc_np (int __err) ;

extern const char *strerrorname_np (int __err) ;





extern char *strerror_l (int __errnum, locale_t __l) ;



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     ;


extern void bcopy (const void *__src, void *__dest, size_t __n)
  ;


extern void bzero (void *__s, size_t __n) ;
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     ;
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     ;






extern int ffs (int __i) ;





extern int ffsl (long int __l) ;
 extern int ffsll (long long int __ll)
     ;



extern int strcasecmp (const char *__s1, const char *__s2)
     ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     ;






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     ;



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     ;



# 463 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n)
    ;



extern char *strsep (char **restrict __stringp,
       const char *restrict __delim)
     ;




extern char *strsignal (int __sig) ;



extern const char *sigabbrev_np (int __sig) ;


extern const char *sigdescr_np (int __sig) ;



extern char *__stpcpy (char *restrict __dest, const char *restrict __src)
     ;
extern char *stpcpy (char *restrict __dest, const char *restrict __src)
     ;



extern char *__stpncpy (char *restrict __dest,
   const char *restrict __src, size_t __n)
     ;
extern char *stpncpy (char *restrict __dest,
        const char *restrict __src, size_t __n)
     ;




extern int strverscmp (const char *__s1, const char *__s2)
     ;


extern char *strfry (char *__string) ;


extern void *memfrob (void *__s, size_t __n)
    ;
# 527 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) ;
# 539 "/usr/include/string.h" 3 4

# 19 "./comelang2.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 26 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stddef.h" 1 3 4
# 329 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/aarch64-linux-gnu/bits/waitflags.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/waitstatus.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 59 "/usr/include/stdlib.h" 3 4
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





 typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 98 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) ;



extern double atof (const char *__nptr)
     ;

extern int atoi (const char *__nptr)
     ;

extern long int atol (const char *__nptr)
     ;



 extern long long int atoll (const char *__nptr)
     ;



extern double strtod (const char *restrict __nptr,
        char **restrict __endptr)
     ;



extern float strtof (const char *restrict __nptr,
       char **restrict __endptr) ;

extern long double strtold (const char *restrict __nptr,
       char **restrict __endptr)
     ;
# 141 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32 (const char *restrict __nptr,
     char **restrict __endptr)
     ;



extern _Float64 strtof64 (const char *restrict __nptr,
     char **restrict __endptr)
     ;



extern _Float128 strtof128 (const char *restrict __nptr,
       char **restrict __endptr)
     ;



extern _Float32x strtof32x (const char *restrict __nptr,
       char **restrict __endptr)
     ;



extern _Float64x strtof64x (const char *restrict __nptr,
       char **restrict __endptr)
     ;
# 177 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *restrict __nptr,
   char **restrict __endptr, int __base)
     ;

extern unsigned long int strtoul (const char *restrict __nptr,
      char **restrict __endptr, int __base)
     ;




extern long long int strtoq (const char *restrict __nptr,
        char **restrict __endptr, int __base)
     ;


extern unsigned long long int strtouq (const char *restrict __nptr,
           char **restrict __endptr, int __base)
     ;





extern long long int strtoll (const char *restrict __nptr,
         char **restrict __endptr, int __base)
     ;


extern unsigned long long int strtoull (const char *restrict __nptr,
     char **restrict __endptr, int __base)
     ;




extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     ;

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     ;

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     ;
# 233 "/usr/include/stdlib.h" 3 4
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     ;



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     ;



extern int strfromf128 (char *__dest, size_t __size, const char * __format,
   _Float128 __f)
     ;



extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     ;



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     ;
# 275 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (const char *restrict __nptr,
     char **restrict __endptr, int __base,
     locale_t __loc) ;

extern unsigned long int strtoul_l (const char *restrict __nptr,
        char **restrict __endptr,
        int __base, locale_t __loc)
     ;


extern long long int strtoll_l (const char *restrict __nptr,
    char **restrict __endptr, int __base,
    locale_t __loc)
     ;


extern unsigned long long int strtoull_l (const char *restrict __nptr,
       char **restrict __endptr,
       int __base, locale_t __loc)
     ;

extern double strtod_l (const char *restrict __nptr,
   char **restrict __endptr, locale_t __loc)
     ;

extern float strtof_l (const char *restrict __nptr,
         char **restrict __endptr, locale_t __loc)
     ;

extern long double strtold_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
     ;
# 317 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32_l (const char *restrict __nptr,
       char **restrict __endptr,
       locale_t __loc)
     ;



extern _Float64 strtof64_l (const char *restrict __nptr,
       char **restrict __endptr,
       locale_t __loc)
     ;



extern _Float128 strtof128_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
     ;



extern _Float32x strtof32x_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
     ;



extern _Float64x strtof64x_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
     ;
# 386 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) ;


extern long int a64l (const char *__s)
     ;




# 1 "/usr/include/aarch64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/aarch64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 1 3 4
# 10 "/usr/include/aarch64-linux-gnu/bits/types/time_t.h" 3 4
typedef __time_t time_t;
# 130 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stddef.h" 1 3 4
# 145 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/aarch64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/aarch64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;




typedef int register_t;
# 176 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/aarch64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/aarch64-linux-gnu/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
static inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{



  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));

}






static inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{



  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8) | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));

}
# 69 "/usr/include/aarch64-linux-gnu/bits/byteswap.h" 3 4
 static inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{



  return ((((__bsx) & 0xff00000000000000ull) >> 56) | (((__bsx) & 0x00ff000000000000ull) >> 40) | (((__bsx) & 0x0000ff0000000000ull) >> 24) | (((__bsx) & 0x000000ff00000000ull) >> 8) | (((__bsx) & 0x00000000ff000000ull) << 8) | (((__bsx) & 0x0000000000ff0000ull) << 24) | (((__bsx) & 0x000000000000ff00ull) << 40) | (((__bsx) & 0x00000000000000ffull) << 56));

}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/aarch64-linux-gnu/bits/uintn-identity.h" 3 4
static inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/select.h" 1 3 4
# 31 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/aarch64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/aarch64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{




  __time_t tv_sec;
  __suseconds_t tv_usec;

};
# 38 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 11 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{



  __time_t tv_sec;




  __syscall_slong_t tv_nsec;
# 31 "/usr/include/aarch64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/aarch64-linux-gnu/sys/select.h" 2 3 4
# 49 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 59 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4

# 102 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *restrict __readfds,
     fd_set *restrict __writefds,
     fd_set *restrict __exceptfds,
     struct timeval *restrict __timeout);
# 127 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *restrict __readfds,
      fd_set *restrict __writefds,
      fd_set *restrict __exceptfds,
      const struct timespec *restrict __timeout,
      const __sigset_t *restrict __sigmask);
# 153 "/usr/include/aarch64-linux-gnu/sys/select.h" 3 4

# 180 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 219 "/usr/include/aarch64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 45 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4

# 1 "/usr/include/aarch64-linux-gnu/bits/atomic_wide_counter.h" 1 3 4
# 25 "/usr/include/aarch64-linux-gnu/bits/atomic_wide_counter.h" 3 4
typedef union
{
  unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
# 47 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 76 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;
# 58 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
  int __kind;




  int __spins;
  __pthread_list_t __list;
# 74 "/usr/include/aarch64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 77 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 89 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/struct_rwlock.h" 3 4
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
# 90 "/usr/include/aarch64-linux-gnu/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/aarch64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[8];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[8];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[64];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[48];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[8];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/aarch64-linux-gnu/sys/types.h" 2 3 4



# 396 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;



extern char *setstate (char *__statebuf) ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *restrict __buf,
       int32_t *restrict __result) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     ;

extern int initstate_r (unsigned int __seed, char *restrict __statebuf,
   size_t __statelen,
   struct random_data *restrict __buf)
     ;

extern int setstate_r (char *restrict __statebuf,
         struct random_data *restrict __buf)
     ;





extern int rand (void) ;

extern void srand (unsigned int __seed) ;



extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     ;
extern void lcong48 (unsigned short int __param[7]) ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *restrict __buffer,
        double *restrict __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        double *restrict __result) ;


extern int lrand48_r (struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;


extern int mrand48_r (struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        long int *restrict __result)
     ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     ;


extern __uint32_t arc4random (void)
     ;


extern void arc4random_buf (void *__buf, size_t __size)
     ;



extern __uint32_t arc4random_uniform (__uint32_t __upper_bound)
     ;




extern void *malloc (size_t __size)
     ;

extern void *calloc (size_t __nmemb, size_t __size)
     ;






extern void *realloc (void *__ptr, size_t __size)
     ;


extern void free (void *__ptr) ;







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
    
    
    ;


extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     ;



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) ;






# 588 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size)
     ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
    
     ;



extern void abort (void) ;



extern int atexit (void (*__func) (void)) ;







extern int at_quick_exit (void (*__func) (void)) ;






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;





extern void exit (int __status) ;





extern void quick_exit (int __status) ;





extern void _Exit (int __status) ;




extern char *getenv (const char *__name) ;




extern char *secure_getenv (const char *__name)
     ;






extern int putenv (char *__string) ;





extern int setenv (const char *__name, const char *__value, int __replace)
     ;


extern int unsetenv (const char *__name) ;






extern int clearenv (void) ;
# 695 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) ;
# 708 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) ;
# 718 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) ;
# 730 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) ;
# 740 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     ;
# 751 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) ;
# 762 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) ;
# 772 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) ;
# 782 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     ;
# 794 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     ;
# 804 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;





extern char *canonicalize_file_name (const char *__name)
    
     ;
# 821 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *restrict __name,
         char *restrict __resolved) ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);




extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  ;




extern int abs (int __x) ;
extern long int labs (long int __x) ;


 extern long long int llabs (long long int __x)
     ;






extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;


 extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     ;
# 893 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign) ;




extern char *fcvt (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     ;




extern char *qecvt (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign)
     ;
extern char *qfcvt (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign)
     ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     ;




extern int ecvt_r (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign, char *restrict __buf,
     size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign, char *restrict __buf,
     size_t __len) ;

extern int qecvt_r (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign,
      char *restrict __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign,
      char *restrict __buf, size_t __len)
     ;





extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *restrict __pwc,
     const char *restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *restrict __pwcs,
   const char *restrict __s, size_t __n)
    ;

extern size_t wcstombs (char *restrict __s,
   const wchar_t *restrict __pwcs, size_t __n)
    
 
  ;






extern int rpmatch (const char *__response) ;
# 980 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **restrict __optionp,
        char *const *restrict __tokens,
        char **restrict __valuep)
     ;







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) ;



extern int unlockpt (int __fd) ;




extern char *ptsname (int __fd) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     ;


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     ;
# 1036 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1037 "/usr/include/stdlib.h" 2 3 4
# 1048 "/usr/include/stdlib.h" 3 4

# 20 "./comelang2.h" 2
# 1 "/usr/include/libgen.h" 1 3 4
# 23 "/usr/include/libgen.h" 3 4



extern char *dirname (char *__path) ;







extern char *__xpg_basename (char *__path) ;



# 21 "./comelang2.h" 2
# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/aarch64-linux-gnu/12/include/limits.h" 3 4
# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/aarch64-linux-gnu/12/include/limits.h" 1 3 4
# 203 "/usr/lib/gcc/aarch64-linux-gnu/12/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 45 "/usr/include/limits.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 46 "/usr/include/limits.h" 2 3 4
# 195 "/usr/include/limits.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 27 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 161 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 2 3 4
# 81 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/pthread_stack_min-dynamic.h" 1 3 4
# 23 "/usr/include/aarch64-linux-gnu/bits/pthread_stack_min-dynamic.h" 3 4

extern long int __sysconf (int __name) ;

# 82 "/usr/include/aarch64-linux-gnu/bits/local_lim.h" 2 3 4
# 162 "/usr/include/aarch64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 196 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 200 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/aarch64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 64 "/usr/include/aarch64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/aarch64-linux-gnu/bits/uio_lim.h" 1 3 4
# 65 "/usr/include/aarch64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 204 "/usr/include/limits.h" 2 3 4
# 204 "/usr/lib/gcc/aarch64-linux-gnu/12/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/aarch64-linux-gnu/12/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/aarch64-linux-gnu/12/include/limits.h" 2 3 4
# 22 "./comelang2.h" 2


# 23 "./comelang2.h"
static inline void xassert(char* msg, bool test)
{
    printf("%s...", msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

static void ncfree(void* mem)
{
    if(mem) {
        free(mem);
    }
}

static void* come_calloc(size_t count, size_t size)
{
    char* mem = calloc(1, sizeof(int)+sizeof(long)+count*size);

    int* ref_count = (int*)mem;



    long* size2 = (long*)(mem + sizeof(int));

    *size2 = size*count + sizeof(long) + sizeof(int);

    return mem + sizeof(int) + sizeof(long);
}

static void* come_increment_ref_count(void* mem)
{
    if(mem == 
# 57 "./comelang2.h" 3 4
             ((void *)0)
# 57 "./comelang2.h"
                 ) {
        return mem;
    }

    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));

    (*ref_count)++;

    return mem;
}

static void* come_decrement_ref_count(void* mem, bool no_decrement, bool no_free)
{
    if(mem == 
# 70 "./comelang2.h" 3 4
             ((void *)0)
# 70 "./comelang2.h"
                 ) {
        return 
# 71 "./comelang2.h" 3 4
              ((void *)0)
# 71 "./comelang2.h"
                  ;
    }

    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));

    if(!no_decrement) {
        (*ref_count)--;
    }

    int count = *ref_count;
    if(!no_free && count <= 0) {
        ncfree(ref_count);
        return 
# 83 "./comelang2.h" 3 4
              ((void *)0)
# 83 "./comelang2.h"
                  ;
    }

    return mem;
}

static void come_free_object(void* mem)
{
    if(mem == 
# 91 "./comelang2.h" 3 4
             ((void *)0)
# 91 "./comelang2.h"
                 ) {
        return;
    }

    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));

    ncfree(ref_count);
}

static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free)
{
    if(mem == 
# 102 "./comelang2.h" 3 4
             ((void *)0)
# 102 "./comelang2.h"
                 ) {
        return;
    }

    if(call_finalizer_only) {
        if(fun) {
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));

        if(!no_decrement) {
            (*ref_count)--;
        }

        int count = *ref_count;
        if(!no_free && count <= 0) {
            if(mem) {
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

static void* nccalloc(size_t nmemb, size_t size)
{
    void* result = calloc(nmemb, size);
    return result;
}

static void* come_memdup(void* block)
{
    if(!block) {
        return null;
    }
    char* mem = (char*)block - sizeof(int) - sizeof(long);

    long* size_p = (long*)(mem + sizeof(int));

    size_t size = *size_p;

    void* ret = calloc(1, size);

    int* ref_count = ret;

    if (ret) {
        char* p = ret;
        char* p2 = mem;
        while(p - (char*)ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }



    long* size_p2 = (long*)((char*)ret + sizeof(int));
    *size_p2 = size;

    return (char*)ret + sizeof(int) + sizeof(long);
}

static inline void int::times(int self, void* parent, void (*block)(void* parent))
{
    for(int i = 0; i < self; i++) {
        block(parent);
    }
}

struct list_item<T>
{
    T item;
    list_item<T>* prev;
    list_item<T>* next;
};

struct list<T>
{
    list_item<T>* head;
    list_item<T>* tail;
    int len;

    list_item<T>* it;
};

impl list <T>
{
    list<T>*% initialize(list<T>*% self) {
        self.head = null;
        self.tail = null;
        self.len = 0;

        return self;
    }
    list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values)
    {
        self.head = null;
        self.tail = null;
        self.len = 0;

        for(int i=0; i<num_value; i++) {
            self.push_back(values[i]);
        }

        return self;
    }
    void finalize(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            if(isheap(T)) {
                delete borrow it.item;
            }
            var prev_it = it;
            it = it.next;
            come_free_object(prev_it);
        }
    }
    list<T>*% clone(list<T>* self) {
        if(self == null) {
            return null;
        }
        var result = new list<T>.initialize();

        list_item<T>*? it = self.head;
        while(it != null) {
            result.push_back2(clone it.item);

            it = it.next;
        }

        return result;
    }
    void push_back(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = null;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;

            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
    }
    void push_back2(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = null;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;

            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
    }

    T& begin(list<T>* self) {
        self.it = self.head;

        if(self.it) {
            return self.it.item;
        }

        T& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(list<T>* self) {
        self.it = self.it.next;

        if(self.it) {
            return self.it.item;
        }

        T& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(list<T>* self) {
        return self.it == null;
    }
    void each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*))
    {
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            bool end_flag = false;
            block(parent, it.item, i, &end_flag);

            if(end_flag == true) {
                break;
            }
            it = it.next;
            i++;
        }
    }
    T& item(list<T>* self, int position, T& default_value)
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        return default_value;
    }

    int length(list<T>* self)
    {
        return self.len;
    }

    void insert(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len)
        {
            self.push_back(item);
            return;
        }

        if(position == 0) {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = null;
            litem.next = self.head;
            litem.item = item;

            self.head.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            var litem = borrow new list_item<T>;

            litem.prev = self.head;
            litem.next = self.tail;
            litem.item = item;

            self.tail.prev = litem;
            self.head.next = litem;

            self.len++;
        }
        else {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>* litem = borrow new list_item<T>;

                    litem.prev = it.prev;
                    litem.next = it;
                    litem.item = item;

                    it.prev.next = litem;
                    it.prev = litem;

                    self.len++;
                }

                it = it.next;
                i++;
            }
        }
    }
    void reset(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            if(isheap(T)) {
                delete borrow it.item;
            }
            it = it.next;
            delete borrow prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;
    }
    void delete(list<T>* self, int head, int tail)
    {
        if(head < 0) {
            head += self.len;
        }
        if(tail < 0) {
            tail += self.len + 1;
        }

        if(head > tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail > self.len) {
            tail = self.len;
        }

        if(head == tail) {
            return;
        }

        if(head == 0 && tail == self.len)
        {
            self.reset();
        }
        else if(head == 0) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i < tail) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete borrow prev_it;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head.prev = null;
                    break;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it.prev;
                    self.tail.next = null;
                }

                if(i >= head) {
                    list_item<T>*? prev_it = it;

                    it = it.next;
                    i++;

                    delete borrow prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>* it = self.head;

            list_item<T>* head_prev_it = null;
            list_item<T>* tail_it = null;


            int i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail)
                {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete borrow prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it.next = tail_it;
            }
            if(tail_it != null) {
                tail_it.prev = head_prev_it;
            }
        }
    }
    void replace(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(position == i) {
                it.item = item;
                break;
            }
            it = it.next;
            i++;
        }
    }

    int find(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                return it2;
            }
            it2++;

            it = it.next;
        }

        return default_value;
    }
    bool equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!it.item.equals(it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    list<T>*% sublist(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    void operator_store_element(list<T>* self, int position, T item) {
        self.replace(position, item);
    }
    T& operator_load_element(list<T>* self, int index) {
        T&| default_value;
        memset(&default_value, 0, sizeof(T));

        return self.item(index, default_value);
    }
    bool operator_equals(list<T>* self, list<T>* right)
    {
        return self.equals(right);
    }
    bool operator_not_equals(list<T>* left, list<T>* right) {
        return !left.equals(right);
    }
    bool contained(list<T>* self, T item) {
        for(var it = self.begin(); !self.end(); it = self.next())
        {
            if(it === item) {
                return true;
            }
        }

        return false;
    }
}



typedef char*% string;

static inline string __builtin_string(char* str)
{
    int len = strlen(str) + 1;

    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

static inline bool int::equals(int self, int right)
{
    return self == right;
}

static inline bool bool::equals(bool self, bool right)
{
    return self == right;
}


static inline bool char::equals(char self, char right)
{
    return self == right;
}

static inline bool short::equals(short self, short right)
{
    return self == right;
}

static inline bool long::equals(long self, long right)
{
    return self == right;
}

static inline bool string::equals(char* self, char* right)
{
    return strcmp(self, right) == 0;
}

static inline bool string::operator_equals(char* self, char* right)
{
    return strcmp(self, right) == 0;
}

static inline bool char*::operator_equals(char* self, char* right)
{
    return strcmp(self, right) == 0;
}

static inline bool char*::equals(char* self, char* right)
{
    return strcmp(self, right) == 0;
}

static inline string char*::operator_add(char* self, char* right)
{
    int len = strlen(self) + strlen(right);

    char*% result = new char[len+1];

    strncpy(result, self, len+1);
    strncat(result, right, len+1);

    return result;
}

static inline string string::operator_add(char* self, char* right)
{
    int len = strlen(self) + strlen(right);

    char*% result = new char[len+1];

    strncpy(result, self, len+1);
    strncat(result, right, len+1);

    return result;
}

struct map<T, T2>
{
    T*& keys;
    bool* item_existance;
    T2*& items;
    int size;
    int len;

    list<T&>*% key_list;

    int it;
};



impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self) {
        self.keys = borrow new T[128];
        self.items = borrow new T2[128];
        self.item_existance = borrow new bool[128];

        for(int i=0; i<128; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = 128;
        self.len = 0;

        self.key_list = new list<T&>.initialize();

        self.it = 0;

        return self;
    }
    map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values)
    {
        self.keys = borrow new T[128];
        self.items = borrow new T2[128];
        self.item_existance = borrow new bool[128];

        for(int i=0; i<128; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = 128;
        self.len = 0;

        self.it = 0;

        self.key_list = new list<T>();

        for(int i=0; i<num_keys; i++) {
            self.insert(keys[i], values[i]);
        }

        return self;
    }
    void finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    delete borrow self.items[i];
                }
            }
        }
        come_free_object((char*)self.items);

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    delete borrow self.keys[i];
                }
            }
        }
        come_free_object((char*)self.keys);

        delete borrow self.key_list;

        delete borrow self.item_existance;
    }
    map<T, T2>*% clone(map<T, T2>* self)
    {
        if(self == null) {
            return null;
        }
        var result = new map<T,T2>.initialize();

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2&| default_value;
            var it2 = self.at(it, default_value);

            if(isheap(T) && !isheap(T2)) {
                result.insert2(clone it, it2);
            }
            else if(isheap(T) && isheap(T2)) {
                result.insert2(clone it, clone it2);
            }
            else if(!isheap(T) && isheap(T2)) {
                result.insert2(it, clone it2);
            }
            else if(!isheap(T) && !isheap(T2)) {
                result.insert2(it, it2);
            }
        }

        return result;
    }

    T2& at(map<T, T2>* self, T& key, T2& default_value) {
        int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key))
                {
                    return self.items[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    int length(map<T, T2>* self) {
        return self.len;
    }

    T& begin(map<T, T2>* self) {
        self.key_list.it = self.key_list.head;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }

        T& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(map<T, T2>* self) {
        self.key_list.it = self.key_list.it.next;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }

        T& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(map<T, T2>* self) {
        return self.key_list.it == null;
    }

    void rehash(map<T,T2>* self) {
        int size = self.size * 3;
        T&* keys = borrow new T[size];
        T2&* items = borrow new T2[size];
        bool* item_existance = borrow new bool[size];

        int len = 0;

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2&| default_value;
            T2& it2 = self.at(it, default_value);
            int hash = it.get_hash_key() % size;
            int n = hash;

            while(true) {
                if(item_existance[n])
                {
                    n++;

                    if(n >= size) {
                        n = 0;
                    }
                    else if(n == hash) {
                        fprintf(
# 966 "./comelang2.h" 3 4
                               stderr
# 966 "./comelang2.h"
                                     , "unexpected error in map.rehash(1)\n");
                        exit(2);
                    }
                }
                else {
                    item_existance[n] = true;
                    keys[n] = it;
                    T2& default_value;
                    items[n] = self.at(it, default_value);

                    len++;
                    break;
                }
            }
        }

        come_free_object((char*)self.items);
        delete borrow self.item_existance;
        come_free_object((char*)self.keys);

        self.keys = keys;
        self.items = items;
        self.item_existance = item_existance;

        self.size = size;
        self.len = len;
    }

    void insert(map<T,T2>* self, T key, T2 item) {
        if(self.len*2 >= self.size) {
            self.rehash();
        }
        int hash = key.get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key))
                {
                    if(isheap(T)) {
                        delete borrow self.keys[it];
                        self.keys[it] = borrow gc_inc(key);
                    }
                    else {
                        self.keys[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete borrow self.items[it];
                        self.items[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    fprintf(
# 1029 "./comelang2.h" 3 4
                           stderr
# 1029 "./comelang2.h"
                                 , "unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys[it] = borrow gc_inc(key);
                }
                else {
                    self.keys[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items[it] = borrow gc_inc(item);
                }
                else {
                    self.items[it] = item;
                }

                self.len++;

                break;
            }
        }

        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next())
        {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }

        if(!same_key_exist) {
            self.key_list.push_back(key);
        }
    }
    void insert2(map<T,T2>* self, T key, T2 item) {
        if(self.len*2 >= self.size) {
            self.rehash();
        }
        int hash = key.get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key))
                {
                    if(isheap(T)) {
                        delete borrow self.keys[it];
                        self.keys[it] = borrow gc_inc(key);
                    }
                    else {
                        self.keys[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete borrow self.items[it];
                        self.items[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    fprintf(
# 1101 "./comelang2.h" 3 4
                           stderr
# 1101 "./comelang2.h"
                                 , "unexpected error in map.insert\n");
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys[it] = borrow gc_inc(key);
                }
                else {
                    self.keys[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items[it] = borrow gc_inc(item);
                }
                else {
                    self.items[it] = item;
                }

                self.len++;

                break;
            }
        }

        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next())
        {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }

        if(!same_key_exist) {
            self.key_list.push_back(key);
        }
    }

    T2& operator_load_element(map<T, T2>* self, T& key) {
        T2&| default_value;
        memset(&default_value, 0, sizeof(T2));

        return self.at(key, default_value);
    }

    void operator_store_element(map<T, T2>* self, T key, T2 item) {
        self.insert(key, item);
    }

    bool equals(map<T, T2>* left, map<T, T2>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next())
        {
            T| default_value;
            T& it2 = right.key_list.item(n, default_value);

            if(it.equals(it2)) {
                T2| default_value2;
                T2& item = left.at(it, default_value2);
                T2& item2 = left.at(it2, default_value2);

                if(!item.equals(item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }

            n++;
        }

        return result;
    }

    bool operator_equals(map<T, T2>* left, map<T,T2>* right) {
        return left.equals(right);
    }

    bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) {
        return !left.equals(right);
    }

    bool find(map<T, T2>* self, T& key) {
        int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys[it].equals(key))
                {
                    return true;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return false;
    }
}

static inline unsigned int int::get_hash_key(int value)
{
    return value;
}

static inline unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

static inline unsigned int string::get_hash_key(char* value)
{
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

static inline unsigned int char*::get_hash_key(char* value)
{
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

static inline unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

static inline int int::clone(int self)
{
    return self;
}

static inline string char*::clone(char* self)
{
    return string(self);
}

static inline string string::clone(char* self)
{
    return string(self);
}

static inline long long int long::clone(long self)
{
    return self;
}

static inline short int short::clone(short self)
{
    return self;
}

static inline char char::clone(char self)
{
    return self;
}

static inline double double::clone(double self)
{
    return self;
}

static inline float float::clone(float self)
{
    return self;
}

struct tuple1<T>
{
    T v1;
};

impl tuple1 <T>
{
    tuple1<T>*% initialize(tuple1<T>*% self, T v1)
    {
        self.v1 = v1;

        return self;
    }

    void catch(tuple1<T>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v1) {
            block(parent);
        }
    }
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
};

impl tuple2 <T, T2>
{
    tuple2<T, T2>*% initialize(tuple2<T, T2>*% self, T v1, T2 v2)
    {
        self.v1 = v1;
        self.v2 = v2;

        return self;
    }

    T catch(tuple2<T, T2>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v2) {
            block(parent);
        }

        return clone self.v1;
    }
}

struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
};

impl tuple3 <T, T2, T3>
{
    tuple3<T, T2, T3>*% initialize(tuple3<T, T2, T3>*% self, T v1, T2 v2, T3 v3)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;

        return self;
    }

    tuple2<T,T2>*% catch(tuple3<T, T2, T3>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v3) {
            block(parent);
        }

        return new tuple2<T, T2>.initialize(self.v1, self.v2);
    }
}

struct tuple4<T, T2, T3, T4>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
};

impl tuple4 <T, T2, T3, T4>
{
    tuple4<T, T2, T3, T4>*% initialize(tuple4<T, T2, T3, T4>*% self, T v1, T2 v2, T3 v3, T4 v4)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;

        return self;
    }

    tuple3<T,T2,T3>*% catch(tuple4<T, T2, T3, T4>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v4) {
            block(parent);
        }

        return new tuple3<T, T2, T3>.initialize(self.v1, self.v2, self.v3);
    }
}


struct tuple5<T, T2, T3, T4, T5>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
    T5 v5;
};

impl tuple5 <T, T2, T3, T4, T5>
{
    tuple5<T, T2, T3, T4, T5>*% initialize(tuple5<T, T2, T3, T4, T5>*% self, T v1, T2 v2, T3 v3, T4 v4, T5 v5)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        self.v5 = v5;

        return self;
    }

    tuple4<T,T2,T3,T4>*% catch(tuple5<T, T2, T3, T4, T5>* self, void* parent, void (*block)(void* parent))
    {
        if(!self.v5) {
            block(parent);
        }

        return new tuple4<T, T2, T3, T4>.initialize(self.v1, self.v2, self.v3, self.v4);
    }
}

struct buffer {
    char*% buf;
    int len;
    int size;
};

static inline void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}

static inline buffer*% buffer*::initialize(buffer*% self)
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

static inline buffer*% buffer*::clone(buffer* self)
{
    if(self == null) {
        return null;
    }

    var result = new buffer;

    result.size = self.size;
    result.buf = new char[self.size];
    result.len = self.len;
    memcpy(result.buf, self.buf, self.len);

    return result;
}

static inline int buffer*::length(buffer* self)
{
    return self.len;
}

static inline void buffer*::reset(buffer* self)
{
    self.buf[0] = '\0';
    self.len = 0;
}

static inline void buffer*::append(buffer* self, char* mem, size_t size)
{
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = clone self.buf;
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
}

static inline void buffer*::append_char(buffer* self, char c)
{
    if(self.len + 1 + 1 + 1 >= self.size) {
        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';
}

static inline void buffer*::append_str(buffer* self, char* str)
{
    self.append(str, strlen(str));
}

static inline void buffer*::append_nullterminated_str(buffer* self, char* str)
{
    self.append(str, strlen(str));
    self.append_char('\0');
}

static inline string buffer*::to_string(buffer* self)
{
    return string(self.buf);
}

static inline void buffer*::append_int(buffer* self, int value)
{
    self.append((char*)&value, sizeof(int));
}

static inline void buffer*::append_long(buffer* self, long value)
{
    self.append((char*)&value, sizeof(long));
}

static inline void buffer*::append_short(buffer* self, short value)
{
    self.append((char*)&value, sizeof(short));
}

static inline void buffer*::alignment(buffer* self)
{
    int len = self.len;
    len = (len + 3) & ~3;

    if(len >= self.size) {
        int new_size = (self.size + 1 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    for(int i=self.len; i<len; i++) {
        self.buf[i] = '\0';
    }

    self.len = len;
}

static inline int buffer*::compare(buffer* left, buffer* right)
{
    return strcmp(left.buf, right.buf);
}

static inline buffer*% string::to_buffer(char* self)
{
    var result = new buffer.initialize();

    result.append_str(self);

    return result;
}

static inline string xsprintf(char* msg, ...)
{
    va_list args;
    
# 1581 "./comelang2.h" 3 4
   __builtin_va_start(
# 1581 "./comelang2.h"
   args
# 1581 "./comelang2.h" 3 4
   ,
# 1581 "./comelang2.h"
   msg
# 1581 "./comelang2.h" 3 4
   )
# 1581 "./comelang2.h"
                      ;
    char* result;
    int len = vasprintf(&result, msg, args);
    
# 1584 "./comelang2.h" 3 4
   __builtin_va_end(
# 1584 "./comelang2.h"
   args
# 1584 "./comelang2.h" 3 4
   )
# 1584 "./comelang2.h"
               ;

    if(len < 0) {
        fprintf(
# 1587 "./comelang2.h" 3 4
               stderr
# 1587 "./comelang2.h"
                     , "vasprintf can't get heap memory.(msg %s)\n", msg);
        exit(2);
    }

    string result2 = string(result);

    free(result);

    return result2;
}

static inline void FILE*::fclose(FILE* f)
{
    fclose(f);
}

static inline string FILE*::read(FILE* f)
{
    buffer*% buf = new buffer.initialize();

    while(1) {
        char buf2[
# 1608 "./comelang2.h" 3 4
                 8192
# 1608 "./comelang2.h"
                       ];

        int size = fread(buf2, 1, 
# 1610 "./comelang2.h" 3 4
                                 8192
# 1610 "./comelang2.h"
                                       , f);

        buf.append(buf2, size);

        if(size < 
# 1614 "./comelang2.h" 3 4
                 8192
# 1614 "./comelang2.h"
                       ) {
            break;
        }
    }

    return buf.to_string();
}

static inline FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
{
    char msg2[1024];

    va_list args;
    
# 1627 "./comelang2.h" 3 4
   __builtin_va_start(
# 1627 "./comelang2.h"
   args
# 1627 "./comelang2.h" 3 4
   ,
# 1627 "./comelang2.h"
   msg
# 1627 "./comelang2.h" 3 4
   )
# 1627 "./comelang2.h"
                      ;
    vsnprintf(msg2, 1024, msg, args);
    
# 1629 "./comelang2.h" 3 4
   __builtin_va_end(
# 1629 "./comelang2.h"
   args
# 1629 "./comelang2.h" 3 4
   )
# 1629 "./comelang2.h"
               ;

    (void)fprintf(f, "%s", msg2);

    return f;
}

static inline string string::write(char* self, char* file_name, bool append=false)
{
    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }

    f.fprintf("%s", self);

    f.fclose()

    return string(self);
}

static inline string char*::write(char* self, char* file_name, bool append=false)
{
    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }

    f.fprintf("%s", self);

    f.fclose()

    return string(self);
}

static inline int string::length(char* str)
{
    return strlen(str);
}

static inline int char*::length(char* str)
{
    return strlen(str);
}

static inline string string::reverse(char* str)
{
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

static inline string char*::reverse(char* str)
{
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

static inline string char*::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

static inline string string::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

static inline string string::chomp(char* str)
{
    string result = string(str);

    if(result[result.length()-1] == '\n') {
        return result.substring(0, -2);
    }

    return result;
}

static inline string char*::chomp(char* str)
{
    string result = string(str);

    if(result[result.length()-1] == '\n') {
        return result.substring(0, -2);
    }

    return result;
}

static inline string xbasename(char* path)
{
    char* p = path + strlen(path);

    while(p >= path) {
        if(*p == '/') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);
    }

    return string("");
}

static inline string xdirname(char* path)
{
    return string(dirname(string(path)));
}

static inline string xnoextname(char* path)
{
    string path2 = xbasename(path);

    char* p = path2 + strlen(path2);

    while(p >= path2) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < path2) {
        return string(path2);
    }
    else {
        return path2.substring(0, p - path2);
    }

    return string("");
}

static inline string xextname(char* path)
{
    char* p = path + strlen(path);

    while(p >= path) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);
    }

    return string("");
}

static inline string xrealpath(char* path)
{
    char* result = realpath(path, null);

    string result2 = string(result);

    free(result);

    return result2;
}



static inline bool xiswalpha(wchar_t c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

static inline bool xiswblank(wchar_t c)
{
    return c == ' ' || c == '\t';
}

static inline bool xiswdigit(wchar_t c)
{
    return (c >= '0' && c <= '9');
}

static inline bool xiswalnum(wchar_t c)
{
    return xiswalpha(c) || xiswdigit(c);
}

static inline bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

static inline bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

static inline bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

static inline bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

static inline bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

static inline bool xiswascii(wchar_t c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

static inline string string::read(char* file_name)
{
    FILE* f = fopen(file_name, "r");

    if(f == 
# 1963 "./comelang2.h" 3 4
           ((void *)0)
# 1963 "./comelang2.h"
               ) {
        return string("");
    }

    string result = f.read();

    f.fclose()

    return result;
}

static inline string char*::read(char* file_name)
{
    FILE* f = fopen(file_name, "r");

    if(f == 
# 1978 "./comelang2.h" 3 4
           ((void *)0)
# 1978 "./comelang2.h"
               ) {
        return string("");
    }

    string result = f.read();

    f.fclose()

    return result;
}

static inline void bool::catch(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
    }
}

static inline void bool::expect(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
    }
}

static inline string string::to_string(char* self)
{
    return string(self);
}


static inline list<string>*% FILE*::readlines(FILE* f)
{
    list<string>*% result = new list<string>.initialize();

    while(1) {
        char buf[
# 2014 "./comelang2.h" 3 4
                8192
# 2014 "./comelang2.h"
                      ];

        if(fgets(buf, 
# 2016 "./comelang2.h" 3 4
                     8192
# 2016 "./comelang2.h"
                           , f) == 
# 2016 "./comelang2.h" 3 4
                                   ((void *)0)
# 2016 "./comelang2.h"
                                       ) {
            break;
        }

        result.push_back(string(buf));
    }

    return result;
}

static inline string FILE*::read(FILE* f)
{
    buffer*% buf = new buffer.initialize();

    while(1) {
        char buf2[
# 2031 "./comelang2.h" 3 4
                 8192
# 2031 "./comelang2.h"
                       ];

        int size = fread(buf2, 1, 
# 2033 "./comelang2.h" 3 4
                                 8192
# 2033 "./comelang2.h"
                                       , f);

        buf.append(buf2, size);

        if(size < 
# 2037 "./comelang2.h" 3 4
                 8192
# 2037 "./comelang2.h"
                       ) {
            break;
        }
    }

    return buf.to_string();
}

static inline FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
{
    char msg2[1024];

    va_list args;
    
# 2050 "./comelang2.h" 3 4
   __builtin_va_start(
# 2050 "./comelang2.h"
   args
# 2050 "./comelang2.h" 3 4
   ,
# 2050 "./comelang2.h"
   msg
# 2050 "./comelang2.h" 3 4
   )
# 2050 "./comelang2.h"
                      ;
    vsnprintf(msg2, 1024, msg, args);
    
# 2052 "./comelang2.h" 3 4
   __builtin_va_end(
# 2052 "./comelang2.h"
   args
# 2052 "./comelang2.h" 3 4
   )
# 2052 "./comelang2.h"
               ;

    (void)fprintf(f, "%s", msg2);

    return f;
}
# 2 "code2/HelloWorld2.c" 2

struct sData
{
    char*% a;
};

int*% funHeap(int x, int y)
{
    int*% result = new int;

    *result = x + y;

    return result;
}

int funHeap2(int*% x, int*% y)
{
    return *x + *y;
}

impl int*
{
    int fun(int* self) {
        return *self;
    }
}

interface IA
{
    int fun(int a, int b);
};

struct sDataA
{
    int a;
    int b;
};

sDataA*% sDataA*::initialize(sDataA*% self, int a, int b)
{
    self.a = a;
    self.b = b;

    return self;
}

int sDataA*::fun(sDataA* self, int a, int b)
{
    return self.a + self.b + a + b;
}

void fun_default_parametor(int x=1, int y=2)
{
    xassert("default parametor", x == 1 && y == 2);
}

exception int fun_exception(int x, int y)
{
    return x+y;
}

int main()
{
    if(1) {
        char*% a = new char[128];
    }

    printf("%ld\n", sizeof(unsigned long));

    char* p = "ABC";

    void* p2 = "ABC";

    printf("%s\n", (char*)p2);

    printf("%c\n", *p);

    int count = 0;
    int size2 = 1;

    char* mem2 = calloc(1, sizeof(int)+sizeof(long)+count*size2);

    free(mem2);

    int b;
    int *a = &b;

    (*a) = 123;

    int a2 = 123;

    if(true) {
        int b = 234;
        int n = 0;
        while(n < 3) {
            printf("a %d\n", a2);
            printf("b %d\n", b);
            n++;
        }
    }

    char*% ax = new char[128];

    if(1) {
        char*% a = new char[128];
        char*% b = a;

        sData data;
        data.a = a;
    }

    char*% str = new char[128];

    strncpy(str, "ABC", 128);

    sData*% data = new sData;
    data.a = str;

    puts(data.a);

    funHeap(7,7);

    xassert("right value test", *funHeap(3,4) == 7);

    int*% axyz = funHeap(1,2);

    xassert("variable test", *axyz == 3);

    int*% xxx = new int;
    *xxx = 1;
    int*% yyy = new int;
    *yyy = 2;

    xassert("heap", funHeap2(xxx, yyy) == 3);

    int*% zzz = new int;
    new int;

    int bzyz = 123;

    int* azyz = &bzyz;

    xassert("impl", azyz.fun() == 123);

    int n = 0;

    3.times() {
        puts("HO!");
        printf("%d\n", n);
        n++;
    }

    list<string>*% liX = new list<string>.initialize();

    liX.push_back(string("ABC"));
    liX.push_back(string("DEF"));
    liX.push_back(string("GHI"));

    for(var it = (liX).begin(); !(liX).end(); it = (liX).next()) {
        printf("%s\n", it);
    }

    list<int>*% liX2 = new list<int>.initialize();

    liX2.push_back(1);
    liX2.push_back(2);
    liX2.push_back(3);

    for(var it = (liX2).begin(); !(liX2).end(); it = (liX2).next()) {
        printf("%d\n", it);
    }

    int aX = 123;
    liX2.each() {
        printf("%d %d\n", it, aX);
        aX = 2;
    }

    xassert("method_block test", aX == 2);

    int aXYZY;

    xassert("var initialize test", aXYZY == 0);

    list<string>*% li = new list<string>.initialize();

    li.push_back(string("ABC"));
    li.push_back(string("DEF"));
    li.push_back(string("GHI"));

    for(var it = (li).begin(); !(li).end(); it = (li).next()) {
        printf("%s\n", it);
    }

    list<int>*% li2 = new list<int>.initialize();

    li2.push_back(1);
    li2.push_back(2);
    li2.push_back(3);

    for(var it = (li2).begin(); !(li2).end(); it = (li2).next()) {
        printf("%d\n", it);
    }

    int aXL = 123;
    li2.each() {
        printf("%d %d\n", it, aXL);
        aXL = 2;
    }

    xassert("var of method block", aXL == 2);

    xassert("list::item", li2.item(0, -1) == 1);

    li2.insert(1, 5);

    xassert("list::insert", li2.item(0, -1) == 1 && li2.item(1, -1) == 5 && li2.item(2, -1) == 2 && li2.item(3, -1) == 3);

    li.insert(1, string("GGG"));

    xassert("list::insert", strcmp(li.item(0, -1), "ABC") == 0 && strcmp(li.item(1, -1), "GGG") == 0 && strcmp(li.item(2,-1), "DEF") == 0 && strcmp(li.item(3,-1), "GHI") == 0);

    li.reset();

    xassert("list::reset", li.length() == 0);

    li2.delete(0, 1);

    xassert("list::delete", li2.item(0, -1) == 5 && li2.item(1, -1) == 2 && li2.item(2, -1) == 3);

    var li3 = new list<string>.initialize();

    li3.push_back(string("AAA"));
    li3.push_back(string("BBB"));
    li3.push_back(string("CCC"));

    li3.replace(0, string("ABC"));
    xassert("list::replace", strcmp(li3.item(0, null), "ABC") == 0 && strcmp(li3.item(1, null), "BBB") == 0 && strcmp(li3.item(2, null), "CCC") == 0);

    var li4 = new list<int>.initialize();

    li4.push_back(1);
    li4.push_back(3);
    li4.push_back(5);

    var li5 = new list<int>.initialize();

    li5.push_back(1);
    li5.push_back(3);
    li5.push_back(5);

    xassert("list::equals", li4.equals(li5));
    xassert("list::find", li4.find(5,-1) == 2);

    var li6 = new list<int>.initialize();

    li6.push_back(3);
    li6.push_back(5);

    xassert("list::sublist", li5.sublist(1, -1).equals(li6));

    int*% axyzX;

    axyzX = new int;
    axyzX = new int;

    xassert("operator equals", string("AAA") === string("AAA"));

    xassert("operator test", "AAA" + "BBB" === "AAABBB");

    char* strXYXY = "ABC";

    xassert("operator test", *(strXYXY + 1) == 'B');

    list<int>*% liZ = new list<int>.initialize();

    liZ.push_back(1);
    liZ.push_back(2);
    liZ.push_back(3);

    liZ.each {
        printf("%d\n", it);
    }

    liZ[0] = 777;

    printf("liZ[0] %d\n", liZ[0]);

    list<int>*% liZ2 = new list<int>.initialize();

    liZ2.push_back(777);
    liZ2.push_back(2);
    liZ2.push_back(3);

    xassert("list equals", liZ === liZ2);

    xassert("list equals test", [1,2,3] === [1,2,3]);

    [1,2,3,4,5].each {
        printf("%d\n", it);
    }
    xassert("map equals", ["AAA":1, "BBB":2] === ["AAA":1, "BBB":2]);

    var m1 = ["AAA":1, "BBB":2];

    printf("%d %d\n", m1["AAA"], m1["BBB"]);

    var m2 = clone m1;
# 388 "code2/HelloWorld2.c"
    return 0;
}
