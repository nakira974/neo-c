# 0 "20method.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "20method.c"
# 1 "common.h" 1



using unsafe;
using no-null-check;


# 1 "./comelang2.h" 1
using comelang;



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

# 6 "./comelang2.h" 2
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

# 7 "./comelang2.h" 2
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

# 8 "./comelang2.h" 2
# 1 "/usr/include/libgen.h" 1 3 4
# 23 "/usr/include/libgen.h" 3 4



extern char *dirname (char *__path) ;







extern char *__xpg_basename (char *__path) ;



# 9 "./comelang2.h" 2
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
# 10 "./comelang2.h" 2



# 12 "./comelang2.h"
void __builtin_va_start(char*);
void __builtin_va_end(char*);

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
            it = it.next;
            delete borrow prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;
    }
    void remove(list<T>* self, T item) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;

            it = it.next;
        }
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
# 732 "./comelang2.h" 3 4
                               stderr
# 732 "./comelang2.h"
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
                        self.key_list.remove(self.keys[it]);
                        delete borrow self.keys[it];
                        self.keys[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys[it]);
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
# 797 "./comelang2.h" 3 4
                           stderr
# 797 "./comelang2.h"
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
                        self.key_list.remove(self.keys[it]);
                        self.keys[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys[it]);
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
# 871 "./comelang2.h" 3 4
                           stderr
# 871 "./comelang2.h"
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

void xassert(char* msg, bool test);
void ncfree(void* mem);
void* come_calloc(size_t count, size_t size);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free);
void come_free_object(void* mem);
void* nccalloc(size_t nmemb, size_t size);
void* come_memdup(void* block);
void int::times(int self, void* parent, void (*block)(void* parent));
string __builtin_string(char* str);
bool int::equals(int self, int right);
bool bool::equals(bool self, bool right);
bool char::equals(char self, char right);
bool short::equals(short self, short right);
bool long::equals(long self, long right);
bool string::equals(char* self, char* right);
bool char*::equals(char* self, char* right);
bool string::operator_equals(char* self, char* right);
bool char*::operator_equals(char* self, char* right);
bool string::operator_not_equals(char* self, char* right);
bool char*::operator_not_equals(char* self, char* right);
string char*::operator_add(char* self, char* right);
string string::operator_add(char* self, char* right);
unsigned int int::get_hash_key(int value);
unsigned int bool::get_hash_key(bool value);
unsigned int string::get_hash_key(char* value);
unsigned int char*::get_hash_key(char* value);
unsigned int bool::get_hash_key(bool value);
int int::clone(int self);
string char*::clone(char* self);
string string::clone(char* self);
long long int long::clone(long self);
short int short::clone(short self);
double double::clone(double self);
char char::clone(char self);
float float::clone(float self);
void buffer*::finalize(buffer* self);
buffer*% buffer*::initialize(buffer*% self);
buffer*% buffer*::clone(buffer* self);
int buffer*::length(buffer* self);
void buffer*::reset(buffer* self);
void buffer*::append(buffer* self, char* mem, size_t size);
void buffer*::append_char(buffer* self, char c);
void buffer*::append_str(buffer* self, char* str);
void buffer*::append_nullterminated_str(buffer* self, char* str);
void buffer*::append_int(buffer* self, int value) ;
void buffer*::append_long(buffer* self, long value) ;
void buffer*::append_short(buffer* self, short value) ;
void buffer*::alignment(buffer* self) ;
int buffer*::compare(buffer* left, buffer* right) ;
buffer*% string::to_buffer(char* self) ;
void FILE*::fclose(FILE* f) ;
string FILE*::read(FILE* f);
FILE* FILE*::fprintf(FILE* f, const char* msg, ...);
string string::write(char* self, char* file_name, bool append=false);
string char*::write(char* self, char* file_name, bool append=false) ;
int string::length(char* str);
int char*::length(char* str);
string string::reverse(char* str) ;
string char*::reverse(char* str) ;
string char*::substring(char* str, int head, int tail);
string string::substring(char* str, int head, int tail);
string string::chomp(char* str);
string char*::chomp(char* str);
string xbasename(char* path);
string xsprintf(char* msg, ...);
string xextname(char* path);
string xdirname(char* path);
string xnoextname(char* path);
string xrealpath(char* path);
bool xiswalpha(wchar_t c);
bool xiswblank(wchar_t c);
bool xiswdigit(wchar_t c);
bool xiswalnum(wchar_t c);
bool xisalpha(char c);
bool xisblank(char c);
bool xisdigit(char c);
bool xisalnum(char c);
bool xisascii(char c);
list<string>*% FILE*::readlines(FILE* f);
string string::to_string(char* self);
void bool::expect(bool self, void* parent, void (*block)(void* parent)) ;
void bool::catch(bool self, void* parent, void (*block)(void* parent));
string char*::read(char* file_name) ;
string string::read(char* file_name) ;
bool xiswascii(wchar_t c);
string buffer*::to_string(buffer* self);
bool xisalpha(char c);
# 9 "common.h" 2
# 19 "common.h"
extern bool gComelang;
extern bool gGC;

struct sType;

struct sClass {
    bool mStruct;
    bool mFloat;
    bool mUnion;
    bool mGenerics;
    bool mMethodGenerics;
    bool mEnum;
    bool mProtocol;
    bool mNumber;

    string mName;

    int mGenericsNum;
    int mMethodGenericsNum;

    list<tuple2<string, sType*%>*%>*% mFields;

    bool mOutputed;
};

struct sInfo;

interface sNode {
    bool compile(sInfo* info);
    int sline();
    string sname();
    bool terminated();
};

struct sType
{
    sClass* mClass;

    tuple1<sType*%>*% mNoSolvedGenericsType;

    string mGenericsName;

    list<sType*%>*% mGenericsTypes;

    list<sNode*%>*% mArrayNum;
    bool mOmitArrayNum;

    list<sType*%>*% mParamTypes;
    list<string>*% mParamNames;
    tuple1<sType*%>*% mResultType;
    bool mVarArgs;

    bool mUnsigned;
    bool mShort;
    bool mLong;
    bool mLongLong;
    bool mConstant;
    bool mRegister;
    bool mVolatile;
    bool mStatic;
    bool mExtern;
    bool mRestrict;
    bool mImmutable;
    bool mHeap;
    bool mDummyHeap;
    bool mNoHeap;
    bool mNoCallingDestructor;
    bool mRefference;
    bool mException;

    int mPointerNum;
    int mNoArrayPointerNum;
    int mSizeNum;

    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;

    string mOriginalTypeName;
    int mOriginalPointerNum;

    bool mFunctionParam;
    bool mAllocaValue;
    bool mGenericsStruct;
    bool mSolvedGenericsName;

    bool mInline;
};

struct sVar;

struct CVALUE {
    string c_value;
    sType*% type;
    sVar* var;
};

struct sVar {
    string mName;
    string mCValueName;
    sType*% mType;

    int mBlockLevel;

    bool mGlobal;
    bool mAllocaValue;
    bool mFunctionParam;
    bool mNoFree;
};

struct sVarTable;

struct sBlock;

struct sFun
{
    string mName;

    sType*% mResultType;
    list<sType*%>*% mParamTypes;
    list<string>*% mParamNames;
    list<string>*% mParamDefaultParametors;

    sType*% mLambdaType;

    sBlock*% mBlock;

    bool mExternal;
    bool mVarArgs;

    buffer*% mSource;
    buffer*% mSourceHead;
    buffer*% mSourceHead2;
    buffer*% mSourceDefer;

    bool mStatic;

    string mComeHeader;
};

struct sGenericsFun
{
    sType*% mImplType;
    list<string>*% mGenericsTypeNames;

    string mName;

    sType*% mResultType;
    list<sType*%>*% mParamTypes;
    list<string%>*% mParamNames;

    string mBlock;
    int mSLine;

    bool mVarArgs;
};

struct sModule
{
    buffer*% mSourceHead;
    buffer*% mSource;
    string mLastCode;
    string mLastCode2;
};

struct sVarTable;

struct sVarTable {
    map<string, sVar*%>*% mVars;
    bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sBlock
{
    list<sNode*%>*% mNodes;
    sVarTable*% mVarTable;
};

struct sRightValueObject
{
    sType*% mType;
    string mVarName;
    string mFunName;
    bool mFreed;
    int mID;
    int mBlockLevel;
};

struct sInfo
{
    char* p;
    char* head;
    buffer*% source;
    string sname;
    int sline;
    int err_num;
    string err_line;
    string clang_option;
    bool no_output_err;
    bool no_output_come_code;

    sFun* come_fun;
    int block_level;

    map<string, sFun*%>*% funcs;
    map<string, sGenericsFun*%>*% generics_funcs;
    map<string, sClass*%>*% classes;
    map<string, sType*%>*% types;
    map<string, sClass*%>*% generics_classes;
    sModule*% module;

    sType*% type;

    list<sRightValueObject*%>*% right_value_objects;

    sType*% generics_type;
    list<sType*%>*% method_generics_types;

    list<CVALUE*%>*% stack;

    sType*% come_function_result_type;

    sVarTable* lv_table;
    sVarTable*% gv_table;

    bool no_comma;
    bool last_statment_is_return;

    list<string>*% generics_type_names;
    sType*% impl_type;

    int current_stack_num;
    int num_method_block;
    sClass* current_stack_frame_struct;
    list<sType*%>*? param_types;
    list<string>*? param_names;

    bool define_struct;
    bool in_typedef;

    string output_file_name;
};




int come_main(int argc, char** argv) version 1;




int come_main(int argc, char** argv) version 2;
void come_init() version 2;
void come_final() version 2;
void err_msg(sInfo* info, char* msg, ...);
int transpile(sInfo* info) version 2;
bool output_source_file(sInfo* info) version 2;
sModule*% sModule*::initialize(sModule*% self);
sType*% sType*::initialize(sType*% self, char* name, sInfo* info, bool heap=false);
sVarTable*% sVarTable*::initialize(sVarTable*% self, bool global, sVarTable* parent);
void sVarTable*::finalize(sVarTable* self);
sClass*% sClass*::initialize(sClass*% self, char* name, bool number=false, bool union_=false, bool generics=false, bool method_generics=false, bool protocol_=false, bool struct_=false, bool float_=false, int generics_num=-1, int method_generics_num=-1, bool enum_=false);
sFun*% sFun*::initialize(sFun*% self, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, list<string>*% param_default_parametors, bool external, bool var_args, sBlock*%? block, bool static_, string come_header, sInfo* info);
string make_type_name_string(sType* type, bool in_header, bool array_cast_pointer, sInfo* info, bool no_pointer=false);
string make_come_type_name_string(sType* type, sInfo* info);




void come_init() version 3;
void come_final() version 3;

string header_function(sFun* fun, sInfo* info);
int transpile(sInfo* info) version 3;
bool output_source_file(sInfo* info) version 3;
void show_type(sType* type, sInfo* info);
string create_generics_name(sType* generics_type, sInfo* info);
void add_last_code_to_source(sInfo* info);
void add_come_code_at_function_head(sInfo* info, char* code, ...);
void add_come_code_at_function_head2(sInfo* info, char* code, ...);
void add_come_code_at_source_head(sInfo* info, const char* msg, ...);
void add_come_code(sInfo* info, const char* msg, ...);
void add_come_last_code(sInfo* info, const char* msg, ...);
void add_come_last_code2(sInfo* info, const char* msg, ...);
void add_last_code_to_source_without_semicolon(sInfo* info);
void dec_stack_ptr(int value, sInfo* info);
CVALUE*% get_value_from_stack(int offset, sInfo* info);
string make_define_var(sType* type, char* name, sInfo* info, bool in_header=false);
string make_come_define_var(sType* type, char* name, sInfo* info);
void transpiler_clear_last_code(sInfo* info);




bool create_equals_method(sType* type, sInfo* info);
bool create_operator_equals_method(sType* type, sInfo* info);
bool create_operator_not_equals_method(sType* type, sInfo* info);
sType*% solve_generics(sType* type, sType* generics_type, sInfo* info);
sVar* get_variable_from_table(sVarTable* table, char* name);
void free_objects_on_return(sBlock* current_block, sInfo* info, sVar* ret_value, bool top_block);
void free_object(sType* type, char* obj, bool no_decrement, bool no_free, sInfo* info);
sType*%, string clone_object(sType* type, char* obj, sInfo* info);
void free_right_value_objects(sInfo* info);
void free_objects(sVarTable* table, sVar* ret_value, sInfo* info);
string append_object_to_right_values(char* obj, sType*% type, sInfo* info);
bool is_right_values(int right_value_num, sInfo* info);
int get_right_value_id_from_obj(string obj);
void remove_object_from_right_values(int right_value_num, sInfo* info);
string increment_ref_count_object(sType* type, char* obj, sInfo* info);
void decrement_ref_count_object(sType* type, char* obj, sInfo* info);




void come_init() version 5;
void come_final() version 5;
sNode*% parse_global_variable(sInfo* info);
sNode*% get_number(bool minus, sInfo* info);
sNode*% get_oct_number(sInfo* info);
sNode*% get_hex_number(bool minus, sInfo* info);
sNode*% create_int_node(int value, sInfo* info);
sNode*% post_position_operator3(sNode*% node, sInfo* info) version 5;
list<sType*%>*%, list<string>*%, list<string>*%, bool parse_params(sInfo* info);
sFun*,string create_finalizer_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_cloner_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_equals_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_operator_equals_automatically(sType* type, char* fun_name, sInfo* info);
sFun*,string create_operator_not_equals_automatically(sType* type, char* fun_name, sInfo* info);
string skip_block(sInfo* info);
bool is_contained_generics_class(sType* type, sInfo* info);
bool is_type_name(char* buf, sInfo* info);
bool parsecmp(char* str, sInfo* info);
string parse_word(sInfo* info);
void skip_spaces_and_lf(sInfo* info);
int expected_next_character(char c, sInfo* info);
sBlock*% sBlock*::initialize(sBlock*% self, sInfo* info);
bool create_generics_fun(string fun_name, sGenericsFun* generics_fun, sType* generics_type, sInfo* info);

sType*%,string,bool parse_type(sInfo* info, bool parse_variable_name=false, bool parse_multiple_type=true);
sBlock*% parse_block(sInfo* info, bool no_block_level=false);
int transpile_block(sBlock* block, list<sType*%>*? param_types, list<string>*? param_names, sInfo* info, bool no_var_table=false);
void arrange_stack(sInfo* info, int top);
int expected_next_character(char c, sInfo* info);
sNode*% parse_function(sInfo* info);

sNode*% expression(sInfo* info) version 5;
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 1;
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 99;
sNode*% expression_node(sInfo* info) version 1;
sNode*% expression_node(sInfo* info) version 99;

int transpile(sInfo* info) version 5;
void parse_sharp(sInfo* info) version 5;
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 5;
sNode*% post_position_operator(sNode*% node, sInfo* info) version 5;
string create_method_name(sType* obj_type, bool no_pointer_name, char* fun_name, sInfo* info);




sNode*% expression_node(sInfo* info) version 98;
sNode*% parse_tuple(sInfo* info);




sNode*% store_var(string name, list<string>*%? multiple_assign, sType*% type, bool alloc, sNode*%? right_node, sInfo* info);
sNode*% load_var(string name, sInfo* info);
sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 7;
void add_variable_to_table(char* name, sType* type, sInfo* info);
void add_variable_to_global_table(char* name, sType* type, sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, sType* type, char* c_value, sInfo* info);




sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 8;




 sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 9;




 sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 10;




 sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 11;




 sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 12;




bool operator_overload_fun(sType* type, char* fun_name, CVALUE* left_value, CVALUE* right_value, sInfo* info);
 sNode*% expression(sInfo* info) version 13;
 sNode*% post_op(sNode*% node, sInfo* info) version 13;
 sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 13;
sNode*% create_null_object(sInfo* info);




sNode*% parse_struct(string type_name, sInfo* info);
string get_none_generics_name(char* class_name);
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 98;
bool output_generics_struct(sType* type, sType* generics_type, sInfo* info);
void output_struct(sClass* klass, sInfo* info);




sNode*% parse_union(string type_name, sInfo* info);
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 97;




sNode*% parse_enum(string type_name, sInfo* info);
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 96;




sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 95;




sNode*% store_field(sNode* left, sNode*% right, string name, sInfo* info);

 sNode*% post_position_operator(sNode*% node, sInfo* info) version 18;
 sNode*% post_position_operator2(sNode*% node, sInfo* info) version 18;
 sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 18;




 sNode*% post_position_operator2(sNode*% node, sInfo* info) version 19;




string make_generics_function(sType* type, string fun_name, sInfo* info);
 sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 20;
 sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 20;
 sNode*% post_position_operator3(sNode*% node, sInfo* info) version 20;




sNode*% create_object(sType*% type, sInfo* info);
sNode*% create_true_object(sInfo* info);
sNode*% create_false_object(sInfo* info);

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 21;
sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 94;
sNode*% post_position_operator3(sNode*% node, sInfo* info) version 21;




sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 93;




sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 92;
# 2 "20method.c" 2

struct sCurrentNode {
    int sline;
    string sname;
};

sCurrentNode*% sCurrentNode*::initialize(sCurrentNode*% self, sInfo* info)
{
    self.sline = info.sline;
    self.sname = string(info.sname);

    return self;
}

int sCurrentNode*::sline(sCurrentNode* self, sInfo* info)
{
    return self.sline;
}

string sCurrentNode*::sname(sCurrentNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sCurrentNode*::terminated()
{
    return false;
}

bool sCurrentNode*::compile(sCurrentNode* self, sInfo* info)
{
    info->current_stack_num++;
    string class_name = xsprintf("__current_stack%d__", info->current_stack_num);
    sClass*% current_stack = new sClass(name: class_name, struct_:true);

    sVarTable* vtable = info->lv_table;

    while(vtable) {
        for(var it = (vtable.mVars).begin(); !(vtable.mVars).end(); it = (vtable.mVars).next()) {
            char* key = it;
            sVar* value = vtable.mVars[key];

            sType*% type2 = clone value.mType;

            type2.mPointerNum++;

            tuple2<string, sType*%>*% item = (value.mCValueName, type2);

            if(value.mCValueName != null) {
                if(memcmp(value.mCValueName, "__list_values", strlen("__list_values")) == 0)
                {
                }
                else if(memcmp(value.mCValueName, "__map_keys", strlen("__map_keys")) == 0)
                {
                }
                else if(memcmp(value.mCValueName, "__map_element", strlen("__map_element")) == 0)
                {
                }
                else if(type2->mArrayNum.length() == 1) {
                    sType*% type3 = clone type2;
                    type3->mArrayNum.reset();
                    type3->mPointerNum++;
                    tuple2<string, sType*%>*% item2 = (value.mCValueName, type3);
                    current_stack.mFields.push_back(item2);
                }
                else {
                    current_stack.mFields.push_back(item);
                }
            }
        }

        vtable = vtable->mParent;
    }

    output_struct(current_stack, info);

    info.classes.insert(class_name, current_stack);

    static int num_current_stack = 0;
    num_current_stack++;
    add_come_code_at_function_head(info, "struct %s __current_stack%d__;\n", class_name, num_current_stack);

    vtable = info->lv_table;

    while(vtable) {
        for(var it = (vtable.mVars).begin(); !(vtable.mVars).end(); it = (vtable.mVars).next()) {
            char* key = it;
            sVar* value = vtable.mVars[key];

            sType*% type2 = clone value.mType;

            tuple2<string, sType*%>*% item = (value.mCValueName, type2);

            if(value.mCValueName != null) {
                if(memcmp(value.mCValueName, "__list_values", strlen("__list_values")) == 0)
                {
                }
                else if(memcmp(value.mCValueName, "__map_keys", strlen("__map_keys")) == 0)
                {
                }
                else if(memcmp(value.mCValueName, "__map_element", strlen("__map_element")) == 0)
                {
                }
                else {
                    if(type2->mClass->mName === "lambda") {
                        add_come_code(info, "__current_stack%d__.%s = %s;\n", num_current_stack, value.mCValueName, value.mCValueName);
                    }
                    else {
                        add_come_code(info, "__current_stack%d__.%s = &%s;\n", num_current_stack, value.mCValueName, value.mCValueName);
                    }
                }
            }
        }

        vtable = vtable->mParent;
    }

    CVALUE*% come_value = new CVALUE;

    come_value.c_value = xsprintf("&__current_stack%d__", num_current_stack);
    come_value.type = new sType(class_name, info);
    come_value.var = null;

    add_come_last_code(info, "%s;\n", come_value.c_value);

    info.stack.push_back(come_value);

    return true;
}

struct sMethodCallNode {
    sNode*% obj;
    string fun_name;
    list<tuple2<string,sNode*%>*%>*% params;
    buffer*% method_block;
    int sline;
    string sname;
    int method_block_sline;
};

sMethodCallNode*% sMethodCallNode*::initialize(sMethodCallNode*% self, char* fun_name,sNode*% obj, list<tuple2<string,sNode*%>*%>*% params, buffer* method_block, int method_block_sline, sInfo* info)
{
    self.obj = clone obj;
    self.fun_name = string(fun_name);
    self.params = clone params;
    self.method_block = clone method_block;
    self.sline = info.sline;
    self.sname = string(info.sname);
    self.method_block_sline = method_block_sline;

    return self;
}

int sMethodCallNode*::sline(sMethodCallNode* self, sInfo* info)
{
    return self.sline;
}

string sMethodCallNode*::sname(sMethodCallNode* self, sInfo* info)
{
    return string(self.sname);
}

string make_generics_function(sType* type, string fun_name, sInfo* info)
{




    string none_generics_name = get_none_generics_name(type.mClass.mName);
    string fun_name2 = create_method_name(type, false@no_pointer_name, fun_name, info);
    string fun_name3 = xsprintf("%s_%s", none_generics_name, fun_name);

    sGenericsFun* generics_fun = info.generics_funcs.at(fun_name3, null!);

    if(generics_fun) {
        if(!create_generics_fun(string(fun_name2), generics_fun, type, info)) {
            err_msg(info, "%s not found", fun_name3);
            return string("");
        }
    }

    return fun_name2;
}

bool sMethodCallNode*::terminated()
{
    return false;
}

bool sMethodCallNode*::compile(sMethodCallNode* self, sInfo* info)
{
    char* fun_name = self.fun_name;
    list<tuple2<string,sNode*%>*%>* params = self.params;
    sNode* obj = self.obj;
    buffer* method_block = self.method_block;
    int method_block_sline = self.method_block_sline;

    if(!obj.compile->(info)) {
        return false;
    }

    CVALUE*% obj_value = get_value_from_stack(-1, info);
    dec_stack_ptr(1, info);




    sType*% obj_type = clone obj_value.type;

    sClass* klass = obj_type.mClass;

    bool calling_dynamic_method = false;
    sType* lambda_type = null;

    for(var it = (klass.mFields).begin(); !(klass.mFields).end(); it = (klass.mFields).next()) {
        var field_name, field_type = it;

        if(field_name === fun_name && field_type.mClass.mName === "lambda") {
            calling_dynamic_method = true;
            lambda_type = field_type;
            break;
        }
    }

    if(calling_dynamic_method) {
        sType*% result_type = clone lambda_type->mResultType.v1;
        result_type->mStatic = false;

        list<CVALUE*%>*% come_params = new list<CVALUE*%>();

        int i = 0;
        for(var it = (params).begin(); !(params).end(); it = (params).next()) {
            var label, node = it;

            if(i == 0) {
                come_params.push_back(obj_value);
                i++;
            }
            else {
                if(!node.compile->(info)) {
                    return false;
                }

                CVALUE*% come_value = get_value_from_stack(-1, info);

                if(lambda_type.mParamTypes[i-1].mHeap
                    && come_value.type.mHeap)
                {
                    come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                }

                come_params.push_back(come_value);

                i++;
                dec_stack_ptr(1, info);
            }
        }

        buffer*% buf = new buffer();

        buf.append_str(xsprintf("%s->%s", obj_value.c_value, fun_name));
        buf.append_str("(");

        int j = 0;
        for(var it = (come_params).begin(); !(come_params).end(); it = (come_params).next()) {
            if(j == 0) {
                it.c_value = xsprintf("%s->_protocol_obj", it.c_value);
            }
            buf.append_str(it.c_value);

            if(j != come_params.length()-1) {
                buf.append_str(",");
            }

            j++;
        }
        buf.append_str(")");

        CVALUE*% come_value2 = new CVALUE;

        come_value2.c_value = buf.to_string();

        if(result_type->mHeap) {
            come_value2.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
        }

        come_value2.type = clone result_type;
        come_value2.type->mStatic = false;
        come_value2.var = null;

        add_come_last_code(info, "%s;\n", buf.to_string());

        info.stack.push_back(come_value2);
    }
    else {
        string generics_fun_name = make_generics_function(obj_type, string(fun_name), info).to_string();

        sFun* fun = info.funcs.at(generics_fun_name, null!);

        if(fun == null) {
            err_msg(info, "function not found(%s) at method(%s)\n", generics_fun_name, info.come_fun.mName);
            return false;
        }

        sType*% result_type = clone fun->mResultType;
        result_type->mStatic = false;

        sType*% result_type2 = solve_generics(result_type, info.generics_type, info);

        list<sType*%>*% param_types = new list<sType*%>();
        for(var it = (fun.mParamTypes).begin(); !(fun.mParamTypes).end(); it = (fun.mParamTypes).next()) {
            if(it == null) {
                param_types.push_back(it);
            }
            else {
                sType*% it2 = solve_generics(it, info.generics_type, info);

                param_types.push_back(clone it2);
            }
        }

        list<CVALUE*%>*% come_params = new list<CVALUE*%>();

        map<string,CVALUE*%>*% label_params = new map<string,CVALUE*%>();

        int i = 0;
        for(var it = (params).begin(); !(params).end(); it = (params).next()) {
            var label, node = it;

            if(i == 0) {
                if(param_types[i].mHeap && obj_value.type.mHeap) {
                    obj_value.c_value = increment_ref_count_object(obj_value.type, obj_value.c_value, info);
                }
                come_params.push_back(obj_value);

                i++;
            }
            else {
                if(!node.compile->(info)) {
                    return false;
                }

                CVALUE*% come_value = get_value_from_stack(-1, info);

                if(param_types[i] && param_types[i] && param_types[i].mHeap && come_value.type.mHeap) {
                    come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                }
                if(label == null) {
                    come_params.push_back(come_value);

                    i++;
                }
                else {
                    label_params.insert(string(label), come_value);
                }
                dec_stack_ptr(1, info);
            }
        }

        if(params.length() < fun.mParamTypes.length()+(method_block?-2:0))
        {
            for(; i<fun.mParamTypes.length()+(method_block?-2:0); i++) {
                string default_param = clone fun.mParamDefaultParametors[i];
                char* param_name = fun.mParamNames[i];

                CVALUE* come_value = label_params[param_name];

                if(default_param && default_param !== "") {
                    buffer*% source = info.source;
                    char* p = info.p;
                    char* head = info.head;
                    int sline = info.sline;

                    info.source = default_param.to_buffer();
                    info.p = info.source.buf;
                    info.head = info.source.buf;

                    sNode*% node = expression(info);

                    if(!node.compile->(info)) {
                        return false;
                    }

                    info.source = source;
                    info.p = p;
                    info.head = head;
                    info.sline = sline;

                    CVALUE*% come_value = get_value_from_stack(-1, info);
                    if(param_types[i] && param_types[i].mHeap && come_value.type.mHeap) {
                        come_value.c_value = increment_ref_count_object(come_value.type, come_value.c_value, info);
                    }
                    come_params.push_back(come_value);
                    dec_stack_ptr(1, info);
                }
                else {
                    if(come_value) {
                        come_params.push_back(null);
                    }
                    else {
                        err_msg(info, "require parametor(%s)", fun.mName);
                        return false;
                    }
                }
            }
        }
        if(label_params.length() > 0) {
            for(i=0; i<fun.mParamNames.length()+(method_block?-2:0); i++) {
                char* param_name = fun.mParamNames[i];

                CVALUE* come_value = label_params[param_name];

                if(come_value) {
                    come_params.replace(i, clone come_value);
                }
            }
        }

        if(method_block) {
            sNode*% current_stack_frame_node = new sNode(new sCurrentNode(info));

            if(!current_stack_frame_node.compile->(info)) {
                return false;
            }

            CVALUE*% come_value = get_value_from_stack(-1, info);
            come_params.push_back(come_value);
            dec_stack_ptr(1, info);

            buffer*% method_block2 = new buffer();
            sType*% method_block_type = clone fun.mParamTypes[-1];

            string class_name = xsprintf("__current_stack%d__", info->current_stack_num);

            method_block_type.mParamTypes[0].mClass = info.classes[class_name];
            sClass* current_stack_frame_struct = info.current_stack_frame_struct;
            info->current_stack_frame_struct = info.classes[class_name];

            info->num_method_block++;

            if(method_block_type.mClass.mName !== "lambda") {
                err_msg(info, "This function does not have method block(%s)", fun_name);
                return false;
            }

            sType*% result_type = clone method_block_type->mResultType.v1;
            result_type->mStatic = false;
            list<sType*%>* param_types = method_block_type->mParamTypes;
            list<string>* param_names = method_block_type->mParamNames;

            char all_alhabet_sname[
# 453 "20method.c" 3 4
                                  4096
# 453 "20method.c"
                                          ];
            {
                char* p = info->sname;
                char* p2 = all_alhabet_sname;
                while(*p) {
                    if(xisalnum(*p)) {
                        *p2++ = *p++;
                    }
                    else {
                        p++;
                    }
                }
                *p2 = '\0';
            }

            method_block2.append_str(xsprintf("%s method_block%d_%s(", make_type_name_string(result_type, false@in_header, false@array_cast_pointer, info), info->num_method_block, all_alhabet_sname));

            int i = 0;
            for(var it = (param_types).begin(); !(param_types).end(); it = (param_types).next()) {
                sType* param_type = it;
                if(i == 0) {
                    string param_name = xsprintf("parent");

                    method_block2.append_str(xsprintf("%s", make_define_var(param_type, param_name, info)));
                }
                else if(i == 1) {
                    string param_name = xsprintf("it");

                    method_block2.append_str(xsprintf("%s", make_define_var(param_type, param_name, info)));
                }
                else {
                    string param_name = xsprintf("it%d", i);

                    method_block2.append_str(xsprintf("%s", make_define_var(param_type, param_name, info)));
                }

                if(i != param_types.length() - 1) {
                    method_block2.append_str(",");
                }

                i++;
            }
            method_block2.append_str(")\n");

            method_block2.append_str(method_block.to_string());

            buffer*% source3 = info.source;
            char* p = info.p;
            char* head = info.head;
            int sline = info.sline;

            info.source = method_block2;
            info.p = info.source.buf;
            info.head = info.source.buf;
            info.sline = method_block_sline;

            sNode*% node = parse_function(info);

            if(!node.compile->(info)) {
                return false;
            }
# 532 "20method.c"
            char*% method_block_name = xsprintf("method_block%d_%s", info->num_method_block, all_alhabet_sname);

            CVALUE*% come_value2 = new CVALUE;

            sFun* fun2 = info.funcs.at(method_block_name, null);

            if(fun2 == null) {
                err_msg(info, "method block function not found(%s)", method_block_name);
                return false;
            }

            sType* method_block_type2 = fun2.mLambdaType;

            come_value2.c_value = xsprintf("%s", method_block_name);
            come_value2.type = clone method_block_type2;
            come_value2.var = null;

            come_params.push_back(come_value2);

            info.source = source3;
            info.p = p;
            info.head = head;
            info.sline = sline;

            info->current_stack_frame_struct = current_stack_frame_struct;
        }

        buffer*% buf = new buffer();

        buf.append_str(generics_fun_name);
        buf.append_str("(");

        int j = 0;
        for(var it = (come_params).begin(); !(come_params).end(); it = (come_params).next()) {
            buf.append_str(it.c_value);

            if(j != come_params.length()-1) {
                buf.append_str(",");
            }

            j++;
        }
        buf.append_str(")");

        CVALUE*% come_value2 = new CVALUE;

        come_value2.c_value = buf.to_string();

        if(result_type2->mHeap) {
            come_value2.c_value = append_object_to_right_values(buf.to_string(), result_type, info);
        }

        come_value2.type = clone result_type2;
        come_value2.type->mStatic = false;
        come_value2.var = null;

        add_come_last_code(info, "%s;\n", buf.to_string());

        info.stack.push_back(come_value2);
    }

    return true;
}

sNode*% parse_method_call(sNode*% obj, string fun_name, sInfo* info) version 20
{
    list<tuple2<string,sNode*%>*%>*% params = new list<tuple2<string,sNode*%>*%>();
    params.push_back(new tuple2<string,sNode*%>(null,obj));

    if(*info->p == '-' && *(info->p+1) == '>') {
        info->p +=2;
        skip_spaces_and_lf(info);
    }

    if(*info->p != '{') {
        expected_next_character('(', info);

        while(true) {
            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }

            char* p = info.p;
            int sline = info.sline;

            bool err_flag = false;
            string label = string("");
            if(xisalpha(*info->p) || *info->p == '_') {
                label = parse_word(info);
                err_flag = true;
            };

            if(err_flag == true && *info->p == ':') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                label = null;

                info->p = p;
                info->sline = sline;
            }

            bool no_comma = info.no_comma;
            info.no_comma = true;

            sNode*% node = expression(info);

            node = post_position_operator3(node, info);

            info.no_comma = no_comma;

            params.push_back(new tuple2<string,sNode*%>(label, node));

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
    }

    buffer*% method_block = null;
    int method_block_sline = 0;
    if(*info->p == '{') {
        char* head = info.p;
        method_block_sline = info.sline;

        skip_block(info);

        char* tail = info.p;

        method_block = new buffer();

        int len = tail - head;
        char*% mem = new char[len+1];
        memcpy(mem, head, len);
        mem[len] = '\0';

        method_block.append_str(mem);
        method_block.append_str("\n");
    }

    return new sNode(new sMethodCallNode(fun_name, clone obj, clone params, method_block!, method_block_sline, info));
}

sNode*% string_node(char* buf, char* head, int head_sline, sInfo* info) version 20
{
    if(buf === "__current__") {
        return new sNode(new sCurrentNode(info));
    }

    return inherit(buf, head, head_sline, info);
}


sNode*% post_position_operator3(sNode*% node, sInfo* info) version 20
{
    return inherit(node, info);
}
