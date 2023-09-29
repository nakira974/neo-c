# 0 "05function2.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "05function2.c"
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
# 2 "05function2.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     ;
extern const __int32_t **__ctype_tolower_loc (void)
     ;
extern const __int32_t **__ctype_toupper_loc (void)
     ;
# 108 "/usr/include/ctype.h" 3 4
extern int isalnum (int) ;
extern int isalpha (int) ;
extern int iscntrl (int) ;
extern int isdigit (int) ;
extern int islower (int) ;
extern int isgraph (int) ;
extern int isprint (int) ;
extern int ispunct (int) ;
extern int isspace (int) ;
extern int isupper (int) ;
extern int isxdigit (int) ;



extern int tolower (int __c) ;


extern int toupper (int __c) ;




extern int isblank (int) ;




extern int isctype (int __c, int __mask) ;






extern int isascii (int __c) ;



extern int toascii (int __c) ;



extern int _toupper (int) ;
extern int _tolower (int) ;
# 251 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, locale_t) ;
extern int isalpha_l (int, locale_t) ;
extern int iscntrl_l (int, locale_t) ;
extern int isdigit_l (int, locale_t) ;
extern int islower_l (int, locale_t) ;
extern int isgraph_l (int, locale_t) ;
extern int isprint_l (int, locale_t) ;
extern int ispunct_l (int, locale_t) ;
extern int isspace_l (int, locale_t) ;
extern int isupper_l (int, locale_t) ;
extern int isxdigit_l (int, locale_t) ;

extern int isblank_l (int, locale_t) ;



extern int __tolower_l (int __c, locale_t __l) ;
extern int tolower_l (int __c, locale_t __l) ;


extern int __toupper_l (int __c, locale_t __l) ;
extern int toupper_l (int __c, locale_t __l) ;
# 327 "/usr/include/ctype.h" 3 4

# 3 "05function2.c" 2


# 4 "05function2.c"
struct sLambdaNode {
    sFun* mFun;
    int sline;
    string sname;
};

sLambdaNode*% sLambdaNode*::initialize(sLambdaNode*% self, sFun* fun, sInfo* info)
{
    self.mFun = fun;
    self.sline = info.sline;
    self.sname = info.sname;

    return self;
}

int sLambdaNode*::sline(sLambdaNode* self, sInfo* info)
{
    return self.sline;
}

string sLambdaNode*::sname(sLambdaNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sLambdaNode*::terminated()
{
    return false;
}

bool sLambdaNode*::compile(sLambdaNode* self, sInfo* info)
{
    sFun* come_fun = info.come_fun;
    info.come_fun = self.mFun;

    if(self.mFun.mBlock) {
        transpile_block(self.mFun.mBlock, self.mFun.mParamTypes, self.mFun.mParamNames, info);
    }

    CVALUE*% come_value = new CVALUE;

    come_value.c_value = xsprintf("%s", self.mFun.mName);
    come_value.type = clone self.mFun.mLambdaType;
    come_value.var = null;

    add_come_last_code(info, "%s;\n", come_value.c_value);

    info.stack.push_back(come_value);

    info.come_fun = come_fun;

    return true;
}

sBlock*% sBlock*::initialize(sBlock*% self, sInfo* info)
{
    self.mNodes = new list<sNode*%>();

    return self;
}

sGenericsFun*% sGenericsFun*::initialize(sGenericsFun*% self, sType*% impl_type, list<string>* generics_type_names, string name, sType*% result_type, list<sType*%>*% param_types, list<string>*% param_names, bool var_args, string block, sInfo* info)
{
    self.mImplType = clone impl_type;
    self.mGenericsTypeNames = clone generics_type_names;

    self.mName = name;
    self.mResultType = result_type;
    self.mParamTypes = param_types;
    self.mParamNames = param_names;
    self.mVarArgs = var_args;

    self.mBlock = block;
    self.mSLine = info.sline;

    return self;
}


sBlock*% parse_block(sInfo* info, bool no_block_level=false)
{
    var result = new sBlock(info);

    int block_level = info->block_level;
    if(!no_block_level) {
        info->block_level++;
    }

    if(*info->p == '{') {
        info->p++;
        skip_spaces_and_lf(info);
        while(true) {
            parse_sharp(info);
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }

            parse_sharp(info);

            int sline = info.sline;
            char* sname = info.sname;



            sNode*% node = expression(info);

            result.mNodes.push_back(node);

            parse_sharp(info);

            if(node.terminated->()) {
                skip_spaces_and_lf(info);
            }

            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp(info);

            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
    }
    else {
        parse_sharp(info);
        sNode*% node = expression(info);
        parse_sharp(info);

        result.mNodes.push_back(node);
    }

    info->block_level = block_level;

    return result;
}

int transpile_block(sBlock* block, list<sType*%>*? param_types, list<string>*? param_names, sInfo* info, bool no_var_table=false)
{
    sVarTable* old_table = info->lv_table;
    if(!no_var_table) {
        block->mVarTable = new sVarTable(false@global, old_table);
        info->lv_table = block->mVarTable;
    }

    list<sType*%>*? param_types_ = info.param_types;
    list<string>*? param_names_ = info.param_names;

    info.param_types = param_types;
    info.param_names = param_names;

    if(param_types && param_names) {
        int i;
        for(var name = (param_names).begin(); !(param_names).end(); name = (param_names).next()) {
            sType*% type = clone param_types[i];
            type->mFunctionParam = true;
            type->mAllocaValue = false;
            add_variable_to_table(name, type, info);
            i++;
        }
    }

    var right_value_objects = info.right_value_objects;
    info.right_value_objects = new list<sRightValueObject*%>();

    int block_level = info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }

    if(block->mNodes.length() == 0) {
    }
    else {
        int i;
        for(var node = (block->mNodes).begin(); !(block->mNodes).end(); node = (block->mNodes).next()) {
            info.module.mLastCode = null;
            info.module.mLastCode2 = null;

            int stack_num_before = info->stack.length();

            int sline = info.sline;
            string sname = string(info.sname);

            info->last_statment_is_return = false;

            info.sline = node.sline->();
            info.sname = node.sname->();

            if(!node.compile->(info)) {
                err_msg(info, "compiling is failed(5)");
                exit(2);
            }

            info.sline = sline;
            info.sname = string(sname);

            add_last_code_to_source(info);

            arrange_stack(info, stack_num_before);

            free_right_value_objects(info);
        }
    }

    if(info.come_fun.mName === "main" && block_level == 0 && !no_var_table) {
        for(var it = (info.funcs).begin(); !(info.funcs).end(); it = (info.funcs).next()) {
            sFun* it2 = info.funcs[it];

            if(memcmp(it, "__final_", strlen("__final_")) == 0) {
                add_come_code(info, "%s();\n", it);
            }
        }
    }

    if(!info->last_statment_is_return && !no_var_table) {
        free_objects(info->lv_table, null!, info);
    }

    info->lv_table = old_table;
    info->block_level = block_level;

    info.param_types = param_types_;
    info.param_names = param_names_;

    info.right_value_objects = right_value_objects;

    return 0;
}


void arrange_stack(sInfo* info, int top)
{
    if(info->stack.length() > top) {
        dec_stack_ptr(info->stack.length()-top, info);
    }
    if(info->stack.length() < top) {
        fprintf(
# 245 "05function2.c" 3 4
               stderr
# 245 "05function2.c"
                     , "%s %d: unexpected stack value. The stack num is %d. top is %d\n", info->sname, info->sline, info->stack.length(), top);
        int a = 0;
        int b = 1;
        int c = b/a;
        exit(2);
    }
}

int expected_next_character(char c, sInfo* info)
{
    parse_sharp(info);
    if(*info->p != c) {
        err_msg(info, "expected next charaster is %c, but %c\n", c, *info->p);
int* a = (void*)0;
*a = 0;
        exit(2);
    }

    info->p++;
    skip_spaces_and_lf(info);

    return 0;
}

string skip_block(sInfo* info)
{
    char* head = info.p;
    if(*info->p == '{') {
        info->p++;

        bool dquort = false;
        bool squort = false;
        int sline = 0;
        int nest = 0;
        while(1) {
            if(dquort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    info->p++;
                }
                else if(*info->p == '"') {
                    info->p++;
                    dquort = !dquort;
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(squort) {
                if(*info->p == '\\') {
                    info->p++;
                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                    info->p++;
                }
                else if(*info->p == '\'') {
                    info->p++;
                    squort = !squort;
                }
                else {
                    info->p++;

                    if(*info->p == '\0') {
                        err_msg(info, "%s %d: unexpected the source end. close single quote or double quote.", info->sname, sline);
                        exit(2);
                    }
                }
            }
            else if(*info->p == '\'') {
                sline = info->sline;
                info->p++;
                squort = !squort;
            }
            else if(*info->p == '"') {
                sline = info->sline;
                info->p++;
                dquort = !dquort;
            }
            else if(*info->p == '#') {
                parse_sharp(info);
            }
            else if(*info->p == '{') {
                info->p++;

                nest++;
            }
            else if(*info->p == '}') {
                info->p++;

                if(nest == 0) {
                    skip_spaces_and_lf(info);
                    break;
                }

                nest--;
            }
            else if(*info->p == '\0') {
                err_msg(info, "The block requires } character for closing block");
                exit(2);
            }
            else if(*info->p == '\n') {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info, "Require block. This is %c", *info->p);
    }

    char* tail = info.p;

    char*% buf = new char[tail-head+1];
    memcpy(buf, head, tail-head);
    buf[tail-head] = '\0';

    return string(buf);
}

string parse_attribute(sInfo* info)
{
    buffer*% asm_fun_name = new buffer();

    while(true) {
        if(memcmp(info->p, "__attribute_pure__", strlen("__attribute_pure__")) == 0) {
            info->p += strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__attribute_malloc__", strlen("__attribute_malloc__")) == 0) {
            info->p += strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__attr_dealloc_fclose", strlen("__attr_dealloc_fclose")) == 0) {
            info->p += strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__wur", strlen("__wur")) == 0) {
            info->p += strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__noreturn", strlen("__noreturn")) == 0) {
            info->p += strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__attribute__", strlen("__attribute__")) == 0) {
            info->p += strlen("__attribute__");
            skip_spaces_and_lf(info);

            int brace_num = 0;
            while(*info->p) {
                if(*info->p == '(') {
                    info->p++;
                    brace_num++;
                }
                else if(*info->p == ')') {
                    info->p++;
                    brace_num--;

                    if(brace_num == 0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }

            skip_spaces_and_lf(info);
        }
        else if(memcmp(info->p, "__asm__", strlen("__asm__")) == 0) {
            info->p += strlen("__asm__");
            skip_spaces_and_lf(info);

            int len = 0;

            bool in_dquort = false;
            int brace_num = 0;
            while(*info->p) {
                if(*info->p == '"') {
                    info->p++;

                    in_dquort = !in_dquort;
                }
                else if(in_dquort) {
                    asm_fun_name.append_char(*info->p);
                    info->p++;
                }
                else if(*info->p == '(') {
                    info->p++;
                    brace_num++;
                }
                else if(*info->p == ')') {
                    info->p++;
                    brace_num--;

                    if(brace_num == 0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }

            skip_spaces_and_lf(info);
        }
# 504 "05function2.c"
        else if(memcmp(info->p, "__asm", strlen("__asm")) == 0) {
            info->p += strlen("__asm");
            skip_spaces_and_lf(info);

            int brace_num = 0;
            while(*info->p) {
                if(*info->p == '(') {
                    info->p++;
                    brace_num++;
                }
                else if(*info->p == ')') {
                    info->p++;
                    brace_num--;

                    if(brace_num == 0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }

            skip_spaces_and_lf(info);
        }

        else {
            break;
        }
    }

    return asm_fun_name.to_string();
}

int transpile(sInfo* info) version 5
{
    skip_spaces_and_lf(info);
    parse_sharp(info);

    {
        var name = string("come_calloc");
        var result_type = new sType("void*", info);
        var param_types = [new sType("int", info), new sType("int", info)];
        var param_names = [string("count"), string("size")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void* come_calloc(int count, int size)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_increment_ref_count");
        var result_type = new sType("void*", info);
        var param_types = [new sType("void*", info)];
        var param_names = [string("mem")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void* come_increment_ref_count(void* mem)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("ncfree");
        var result_type = new sType("void", info);
        var param_types = [new sType("void*", info)];
        var param_names = [string("mem")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void ncfree(void* mem)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_calloc");
        var result_type = new sType("void*", info);
        var param_types = [new sType("int", info), new sType("int", info)];
        var param_names = [string("count"), string("size")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void* come_calloc(int count, int size)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_calloc");
        var result_type = new sType("void*", info);
        var param_types = [new sType("int", info), new sType("int", info)];
        var param_names = [string("count"), string("size")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void* come_calloc(int count, int size)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_increment_ref_count");
        var result_type = new sType("void*", info);
        var param_types = [new sType("void*", info)];
        var param_names = [string("mem")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void* come_increment_ref_count(void* mem)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_call_finzlier");
        var result_type = new sType("void", info);
        var param_types = [new sType("void*", info), new sType("void*", info), new sType("void*", info), new sType("void*", info), new sType("int", info), new sType("int", info), new sType("int", info)];
        var param_names = [string("fun"), string("mem"), string("protocol_fun"), string("protocol_obj"), string("call_finalizer_only"), string("no_decrement"), string("no_free")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_decrement_ref_count");
        var result_type = new sType("void*", info);
        var param_types = [new sType("void*", info), new sType("void*", info), new sType("void*", info), new sType("bool", info), new sType("bool", info)];
        var param_names = [string("mem"), string("protocol_fun"), string("protocol_obj"), string("no_decrement"), string("no_free")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_free_object");
        var result_type = new sType("void", info);
        var param_types = [new sType("void*", info)];
        var param_names = [string("mem")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void come_free_object(void* mem)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("nccalloc");
        var result_type = new sType("void*", info);
        var param_types = [new sType("int", info), new sType("int", info)];
        var param_names = [string("nmemb"), string("size")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void* nccalloc(int nmemb, int size)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("come_memdup");
        var result_type = new sType("void*", info);
        var param_types = [new sType("void*", info)];
        var param_names = [string("block")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("void* come_memdup(void* block)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }
    {
        var name = string("__builtin_string");
        var result_type = new sType("char*", info);
        var param_types = [new sType("char*", info)];
        var param_names = [string("str")];
        var param_default_parametors = new list<string>();
        var main_fun = new sFun(name, result_type, param_types, param_names
            , param_default_parametors, true@external, false@var_args
            , null!@block, false@static_
            , string("char* __builtin_string(char* str)")
            , info);

        info.funcs.insert(string(name), main_fun);
    }

    while(*info->p) {
        parse_sharp(info);

        char* head = info.p;
        int head_sline = info.sline;
        string buf = parse_word(info);

        parse_sharp(info);

        sNode*% node = top_level(buf, head, head_sline, info);
        parse_sharp(info);

        while(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp(info);

        if(node != null) {
            if(!node.compile->(info)) {
                err_msg(info, "compiling is faield(X)");
                exit(2);
            }
        }
        parse_sharp(info);

        skip_spaces_and_lf(info);
    }

    return 0;
}

sNode*% top_level(string buf, char* head, int head_sline, sInfo* info) version 99
{
    bool is_type_name_flag = is_type_name(buf, info);
    int sline = info.sline;



    bool define_function_flag = false;
    if(is_type_name_flag)
    {
        char* p = info.p;
        info.p = head;

        bool invalid_type = false;
        info.no_output_err = true;
        parse_type(info);
        info.no_output_err = false;

        if(!info.define_struct) {
            info.define_struct = false;
            string word = null;
            if(xisalnum(*info.p) || *info->p == '_') {
                word = parse_word(info);

                if(word === "extern") {
                    word = parse_word(info);
                }
            }
            else {
                word = null;
            }
            info.no_output_err = false;

            if(word) {
                if(is_type_name(word, info)) {
                    while(*info->p == '*') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p == '%') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p == ':') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p == ':') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(xisalnum(*info.p) || *info->p == '_') {
                        word = parse_word(info);
                    }
                }


                if(strlen(word) > 0 && (*info->p == '(' || (*info->p == ':' && *(info->p+1) == ':'))) {
                    if(is_type_name_flag) {
                        define_function_flag = true;
                    }
                }
            }
        }

        info.p = p;
        info.sline = sline;
    }

    bool define_variable = true;
    if(is_type_name_flag)
    {
        char* p = info.p;
        info.p = head;

        if(!is_type_name_flag) {
            define_variable = false;
        }

        info.no_output_err = true;
        parse_type(parse_variable_name:false, info);
        info.no_output_err = false;

        if(info.define_struct) {
            info.define_struct = false;
            define_variable = false;
        }
        else {
            if(!(xisalpha(*info->p) || *info->p == '_')) {
                define_variable = false;
            }

            while(xisalpha(*info->p) || *info->p == '_') {
                info->p++;
            }
            skip_spaces_and_lf(info);

            if(*info->p == '(' || *info->p == ':') {
                define_variable = false;
            }
        }

        info.p = p;
        info.sline = sline;
    }
    else {
        define_variable = false;
    }

    if(define_function_flag) {
        info.p = head;
        info.sline = sline;

        return parse_function(info);
    }
    else if(define_variable) {
        info.p = head;
        info.sline = sline;

        return parse_global_variable(info);
    }

    info.p = head;
    info.sline = sline;

    string buf2 = parse_word(info);

    return inherit(buf2, head, head_sline, info);
}

bool is_type_name(char* buf, sInfo* info)
{
    sClass* klass = info.classes[buf];
    sType* type = info.types[buf];
    sClass* generics_class = info.generics_classes[buf];
    bool generics_type_name = info.generics_type_names.contained(string(buf));

    return generics_class || generics_type_name || klass || type || buf === "const" || buf === "register" || buf === "static" || buf === "volatile" || buf === "unsigned" || buf === "immutable" || buf === "mutable" || buf === "struct" || buf === "enum" || buf === "union" || buf === "extern" || buf === "inline" || buf === "__inline" || buf === "__extension__";

}
struct sFunNode {
    sFun*% mFun;
    int sline;
    string sname;
};

sFunNode*% sFunNode*::initialize(sFunNode*% self, sFun*% fun, sInfo* info)
{
    self.mFun = fun;
    self.sline = info.sline;
    self.sname = info.sname;

    return self;
}

int sFunNode*::sline(sFunNode* self, sInfo* info)
{
    return self.sline;
}

string sFunNode*::sname(sFunNode* self, sInfo* info)
{
    return string(self.sname);
}

bool sFunNode*::terminated()
{
    return false;
}

bool sFunNode*::compile(sFunNode* self, sInfo* info)
{
    sFun* come_fun = info.come_fun;
    info.come_fun = self.mFun;

    if(self.mFun.mBlock) {
        transpile_block(self.mFun.mBlock, self.mFun.mParamTypes, self.mFun.mParamNames, info);
    }

    info.come_fun = come_fun;

    return true;
}

bool create_generics_fun(string fun_name, sGenericsFun* generics_fun, sType* generics_type, sInfo* info)
{
    string sname_top = string(info->sname);
    int sline_top = info->sline;

    if(generics_type->mNoSolvedGenericsType.v1) {
        generics_type = generics_type->mNoSolvedGenericsType.v1;
    }
    sFun* funX = info.funcs[fun_name];
    if(funX) {
        return true;
    }

    sType*% result_type = solve_generics(generics_fun->mResultType, generics_type, info);

    list<sType*%>*% param_types = new list<sType*%>();
    for(var it = (generics_fun->mParamTypes).begin(); !(generics_fun->mParamTypes).end(); it = (generics_fun->mParamTypes).next()) {
        var param_type = solve_generics(it, generics_type, info);

        param_type->mFunctionParam = true;

        param_types.push_back(clone param_type);
    }
    list<string>*% param_names = clone generics_fun->mParamNames;

    char* p = info.p;
    int sline = generics_fun->mSLine;
    char* head = info.head;
    buffer*% source = info.source;

    info.source = generics_fun->mBlock.to_buffer();
    info.p = info.source.buf;
    info.head = info.source.buf;

    var generics_type_saved = clone info->generics_type;
    info->generics_type = clone generics_type;

    var generics_type_names_saved = clone info->generics_type_names;
    info->generics_type_names = clone generics_fun.mGenericsTypeNames;

    sBlock*% block = parse_block(info);

    info.source = source;
    info.p = p;
    info.sline = sline;
    info.head = head;

    result_type->mInline = false;

    bool var_args = generics_fun.mVarArgs;
    var fun = new sFun(fun_name, result_type
                    , param_types
                    , param_names, new list<string>(), false@external
                    , var_args, block, true@static_, string(""), info);

    info.funcs.insert(clone fun_name, fun);

    sNode*% node = new sNode(new sFunNode(fun, info));

    if(!node.compile->(info)) {
        return false
    }

    info->generics_type = generics_type_saved;
    info->generics_type_names = generics_type_names_saved;

    info->sname = string(sname_top);
    info->sline = sline_top;

    return true;
}

sNode*% parse_function(sInfo* info)
{
    char* header_head = info.p;
    var result_type, var_name, err = parse_type(info);

    if(!err) {
        exit(2);
    }


    bool method_definition = false;
    {
        char* p = info.p;
        int sline = info.sline;

        buffer*% buf2 = new buffer();
        while(xisalnum(*info->p) || *info->p == '_') {
            buf2.append_char(*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);

        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf(info);
        }

        if(buf2.length() > 0 && *info->p == ':' && *(info->p+1) == ':') {
            method_definition = true;
        }

        info.p = p;
        info.sline = sline;
    }

    string fun_name;
    string base_fun_name;
    if(method_definition) {
        var obj_type, name, err = parse_type(info);

        if(!err) {
            exit(2);
        }

        expected_next_character(':', info);
        expected_next_character(':', info);

        base_fun_name = clone parse_word(info);
        fun_name = clone create_method_name(obj_type, false@no_pointer_name, string(base_fun_name), info)
    }
    else if(info->impl_type) {
        base_fun_name = clone parse_word(info);

        fun_name = clone create_method_name(info->impl_type, false@no_pointer_name, string(base_fun_name), info);
    }
    else {
        fun_name = clone parse_word(info);
        base_fun_name = clone string(fun_name);
    }

    var param_types, param_names, param_default_parametors, var_args = parse_params(info);
    char* header_tail = info.p;

    buffer*% header_buf = new buffer();

    header_buf.append(header_head, header_tail - header_head);
    header_buf.append_char('\0');

    int version = 0;
    if(memcmp(info->p, "version", strlen("version")) == 0) {
        info->p += strlen("version");
        skip_spaces_and_lf(info);

        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
        }
        skip_spaces_and_lf(info);

        version = n;
    }

    if(base_fun_name === "lambda") {
        sBlock*% block = parse_block(info);

        static int lambda_num = 0;
        lambda_num++;

        fun_name = xsprintf("lambda%d", lambda_num);

        result_type->mStatic = false;

        var fun = new sFun(string(fun_name), result_type, param_types, param_names
                            , param_default_parametors
                            , false@external, var_args, block
                            , true@static_, header_buf.to_string(), info);

        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {

            info.funcs.insert(clone fun_name, fun);
        }

        return new sNode(new sLambdaNode(fun, info));
    }
    else if(info.impl_type && info.generics_type_names.length() > 0) {
        string none_generics_name = get_none_generics_name(info.impl_type.mClass.mName);

        string block = skip_block(info);

        var fun = new sGenericsFun(info.impl_type, info.generics_type_names, string(fun_name), result_type, param_types, param_names, var_args, block, info);

        string fun_name3 = xsprintf("%s_%s", none_generics_name, base_fun_name);

        info.generics_funcs.insert(string(fun_name3), fun);

        return (sNode*%)null;
    }
    else if(*info->p == '{') {
        sBlock*% block = parse_block(info);


        bool static_ = false;
        if(result_type->mStatic) {
            result_type->mStatic = false;
            static_ = true;
        }

        if(version > 0) {
            string new_fun_name = xsprintf("%s_v%d", string(fun_name), version);
            fun_name = string(new_fun_name);
        }

        var fun = new sFun(string(fun_name), result_type, param_types
                                , param_names
                                , param_default_parametors
                                , false@external, var_args, clone block
                                , static_
                                , header_buf.to_string()
                                , info);

        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {

            info.funcs.insert(clone fun_name, fun);
        }


        return new sNode(new sFunNode(fun, info));
    }
    else if(xisalpha(*info->p) || *info->p == '_' || *info->p == ';') {
        if(version > 0) {
            string new_fun_name = xsprintf("%s_v%d", fun_name, version);
            fun_name = string(new_fun_name);
        }

        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);

            result_type->mStatic = false;

            var fun = new sFun(string(fun_name), result_type
                                , param_types, param_names
                                , param_default_parametors
                                , true@external, var_args, null!@block
                                , false@static_, header_buf.to_string(), info);

            var fun2 = info.funcs[string(fun_name)];
            if(fun2 == null || fun2.mExternal) {

                info.funcs.insert(clone fun_name, fun);
            }

            return new sNode(new sFunNode(fun, info));
        }
        else {
            string asm_fun = parse_attribute(info);

            if(asm_fun !== "") {
                fun_name = string(asm_fun);
            }

            expected_next_character(';', info);

            result_type->mStatic = false;

            var fun = new sFun(string(fun_name), result_type, param_types
                                , param_names
                                , param_default_parametors
                                , true@external, var_args, null!@block
                                , false@static_, header_buf.to_string(), info);

            var fun2 = info.funcs[string(fun_name)];
            if(fun2 == null || fun2.mExternal) {

                info.funcs.insert(clone fun_name, fun);
            }

            return new sNode(new sFunNode(fun, info));
        }
    }
    else {
        err_msg(info, "invalid character(%c)(2)\n", *info->p);
        exit(2);
    }

    return (sNode*%)null;
}

sFun*,string create_finalizer_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* finalizer = null;

    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);

    sType*% type2 = solve_generics(type, type, info);

    type = borrow type2;

    sClass* klass = type->mClass;

    if(type->mPointerNum > 0 && klass->mStruct) {
        var source = new buffer();

        source.append_char('{');

        klass = info.classes[klass->mName];
        for(var it = (klass->mFields).begin(); !(klass->mFields).end(); it = (klass->mFields).next()) {
            var name, field_type = it;

            if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
            {
                err_msg(info, "Define recusively the finalizer. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                exit(2);
            }

            if(field_type->mHeap) {
                char source2[1024];
                snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n", name, name);

                source.append_str(source2);
            }
        }

        source.append_char('}');

        char* p = info.p;
        int sline = info.sline;
        char* head = info.head;
        buffer*% source3 = info.source;

        info.source = source;
        info.p = source.buf;
        info.head = source.buf;

        sBlock*% block = parse_block(info);

        var result_type = new sType("void", info);
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        if(self_type->mPointerNum > 1) {
            self_type->mPointerNum = 1;
        }
        var param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();

        buffer*% header_buf = new buffer();

        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");

        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];

            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);

            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");

        result_type->mStatic = false;

        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);

        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {

            info.funcs.insert(clone name, fun);
        }

        finalizer = fun;

        sNode*% node = new sNode(new sFunNode(fun, info));

        if(!node.compile->(info)) {
            err_msg(info, "compiling is failed(X)");
            exit(2);
        }

        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }

    return (finalizer, real_fun_name);
}

sFun*,string create_equals_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* equaler = null;

    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);

    sType*% type2 = solve_generics(type, type, info);

    type = borrow type2;

    sClass* klass = type->mClass;

    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();

        source.append_char('{');

        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return left.%s.equals(right.%s);\n", name, name);
            source.append_str(source2);
        }
        else {
            klass = info.classes[klass->mName];
            for(var it = (klass->mFields).begin(); !(klass->mFields).end(); it = (klass->mFields).next()) {
                var name, field_type = it;

                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the equals. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }

                char source2[1024];
                snprintf(source2, 1024, "if(!left.%s.equals(right.%s)) { return false; }\n", name, name);

                source.append_str(source2);
            }
        }

        source.append_str("return true;");
        source.append_char('}');

        char* p = info.p;
        int sline = info.sline;
        char* head = info.head;
        buffer*% source3 = info.source;

        info.source = source;
        info.p = source.buf;
        info.head = source.buf;

        sBlock*% block = parse_block(info);

        var result_type = new sType("bool", info);
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        var param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
        var param_default_parametors = new list<string>();

        buffer*% header_buf = new buffer();

        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");

        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];

            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);

            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");

        result_type->mStatic = false;

        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);

        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {

            info.funcs.insert(clone name, fun);
        }

        equaler = fun;

        sNode*% node = new sNode(new sFunNode(fun, info));

        if(!node.compile->(info)) {
            err_msg(info, "compiling error");
            exit(2);
        }

        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }

    return (equaler, real_fun_name);
}

sFun*,string create_operator_not_equals_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* equaler = null;

    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);

    sType*% type2 = solve_generics(type, type, info);

    type = borrow type2;

    sClass* klass = type->mClass;

    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();

        source.append_char('{');

        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return !left.%s.equals(right.%s);\n", name, name);
            source.append_str(source2);
        }
        else {
            char source2[1024];
            snprintf(source2, 1024, "return !(");

            source.append_str(source2);

            int i = 0;
            klass = info.classes[klass->mName];
            for(var it = (klass->mFields).begin(); !(klass->mFields).end(); it = (klass->mFields).next()) {
                var name, field_type = it;

                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the equals. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }

                char source2[1024];
                snprintf(source2, 1024, "left.%s.equals(right.%s)", name, name);
                source.append_str(source2);

                if(i == klass->mFields.length()-1) {
                    char source2[1024];
                    snprintf(source2, 1024, ");");
                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, " && ");
                    source.append_str(source2);
                }

                i++;
            }
        }

        source.append_char('}');

        char* p = info.p;
        int sline = info.sline;
        char* head = info.head;
        buffer*% source3 = info.source;

        info.source = source;
        info.p = source.buf;
        info.head = source.buf;

        sBlock*% block = parse_block(info);

        var result_type = new sType("bool", info);
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        var param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
        var param_default_parametors = new list<string>();

        buffer*% header_buf = new buffer();

        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");

        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];

            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);

            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");

        result_type->mStatic = false;

        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);

        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {

            info.funcs.insert(clone name, fun);
        }

        equaler = fun;

        sNode*% node = new sNode(new sFunNode(fun, info));

        if(!node.compile->(info)) {
            err_msg(info, "compiling error");
            exit(2);
        }

        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }

    return (equaler, real_fun_name);
}

sFun*,string create_operator_equals_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* equaler = null;

    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);

    sType*% type2 = solve_generics(type, type, info);

    type = borrow type2;

    sClass* klass = type->mClass;

    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();

        source.append_char('{');

        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "return left.%s.equals(right.%s);\n", name, name);
            source.append_str(source2);
        }
        else {
            klass = info.classes[klass->mName];
            for(var it = (klass->mFields).begin(); !(klass->mFields).end(); it = (klass->mFields).next()) {
                var name, field_type = it;

                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the equals. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }

                char source2[1024];
                snprintf(source2, 1024, "if(!left.%s.equals(right.%s)) { return false; }\n", name, name);

                source.append_str(source2);
            }
        }

        source.append_str("return true;\n");
        source.append_char('}');

        char* p = info.p;
        int sline = info.sline;
        char* head = info.head;
        buffer*% source3 = info.source;

        info.source = source;
        info.p = source.buf;
        info.head = source.buf;

        sBlock*% block = parse_block(info);

        var result_type = new sType("bool", info);
        var name = clone real_fun_name;
        var left_type = clone type;
        left_type->mHeap = false;
        var right_type = clone type;
        right_type->mHeap = false;
        var param_types = [left_type, right_type];
        var param_names = [string("left"), string("right")];
        var param_default_parametors = new list<string>();

        buffer*% header_buf = new buffer();

        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");

        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];

            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);

            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");

        result_type->mStatic = false;

        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);

        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {

            info.funcs.insert(clone name, fun);
        }

        equaler = fun;

        sNode*% node = new sNode(new sFunNode(fun, info));

        if(!node.compile->(info)) {
            err_msg(info, "compiling error(X)");
            exit(2);
        }

        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }

    return (equaler, real_fun_name);
}

sFun*,string create_cloner_automatically(sType* type, char* fun_name, sInfo* info)
{
    sFun* cloner = null;

    string real_fun_name = create_method_name(type, false@no_pointer_name, fun_name, info);

    sType*% type2 = solve_generics(type, type, info);

    type = borrow type2;

    sClass* klass = type->mClass;

    if(type->mPointerNum > 0 && !klass->mNumber) {
        var source = new buffer();

        source.append_str("{\n");
        source.append_str("if(self == (void*)0) { return (void*)0; }\n");
        source.append_str(xsprintf("var result = new %s;\n", make_type_name_string(type, false@in_header, false@array_cast_pointer, info, true)));


        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");

            source.append_str(source2);

            klass = info.classes[klass->mName];
            for(var it = (klass->mFields).begin(); !(klass->mFields).end(); it = (klass->mFields).next()) {
                var name, field_type = it;

                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the cloner. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }

                if(name === "_protocol_obj") {
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { result.%s = self.%s; }\n", name, name);

                    source.append_str(source2);
                }
            }
        }
        else {
            klass = info.classes[klass->mName];
            for(var it = (klass->mFields).begin(); !(klass->mFields).end(); it = (klass->mFields).next()) {
                var name, field_type = it;

                if(type->mClass->mName === field_type->mClass->mName && type->mPointerNum == field_type->mPointerNum && field_type->mHeap)
                {
                    err_msg(info, "Define recusively the cloner. I recommanded tuple1<%s>*%.\n", type->mClass->mName);
                    exit(2);
                }

                if(field_type->mHeap) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n", name, name, name);

                    source.append_str(source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != ((void*)0)) { result.%s = self.%s; }\n", name, name);

                    source.append_str(source2);
                }
            }
        }

        source.append_str(xsprintf("return result;"));
        source.append_char('}');

        char* p = info.p;
        int sline = info.sline;
        buffer*% source3 = info.source;
        char* head = info.head;

        info.source = source;
        info.p = info.source.buf;
        info.head = info.source.buf;

        sBlock*% block = parse_block(info);

        var result_type = clone type;
        var name = clone real_fun_name;
        var self_type = clone type;
        self_type->mHeap = false;
        var param_types = [self_type];
        var param_names = [string("self")];
        var param_default_parametors = new list<string>();

        buffer*% header_buf = new buffer();

        header_buf.append_str(make_come_type_name_string(result_type, info));
        header_buf.append_str(" ");
        header_buf.append_str(real_fun_name);
        header_buf.append_str("(");

        for(int i=0; i<param_types.length(); i++) {
            sType* param_type = param_types[i];
            char* param_name = param_names[i];

            header_buf.append_str(make_come_type_name_string(param_type, info));
            header_buf.append_str(" ");
            header_buf.append_str(param_name);

            if(i != param_types.length() -1) {
                header_buf.append_str(",");
            }
        }
        header_buf.append_str(")");

        result_type->mStatic = false;

        var fun = new sFun(name, result_type, param_types, param_names
                        , param_default_parametors
                        , false@external, false@var_args, block
                        , true@static_
                        , header_buf.to_string()
                        , info);

        var fun2 = info.funcs[string(fun_name)];
        if(fun2 == null || fun2.mExternal) {
            info.funcs.insert(clone name, fun);
        }

        cloner = fun;

        sNode*% node = new sNode(new sFunNode(fun, info));

        if(!node.compile->(info)) {
            err_msg(info, "compiling error(Y)");
            exit(2);
        }

        info.source = source3;
        info.p = p;
        info.head = head;
        info.sline = sline;
    }

    return (cloner, real_fun_name);
}
