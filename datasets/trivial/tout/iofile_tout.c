/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct _IO_marker;
struct timeval;
extern int pthread_cond_signal(int *cond ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
typedef struct _IO_FILE FILE;
extern int fclose(FILE *__stream ) ;
extern int close(int filedes ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
char **_global_argv  =    (char **)0;
extern int fcntl(int filedes , int cmd  , ...) ;
typedef long __off_t;
extern int unlink(char const   *filename ) ;
extern int pthread_mutex_lock(int *mutex ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern int pthread_cond_init(int *cond , int *attr ) ;
typedef void _IO_lock_t;
typedef long __off64_t;
typedef unsigned long size_t;
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int raise(int sig ) ;
long _1alwaysZero  =    0;
extern void abort() ;
extern int atoi(char const   *s ) ;
extern void *malloc(unsigned long size ) ;
extern double ceil(double x ) ;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int pthread_cond_broadcast(int *cond ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) rand)(void) ;
extern void free(void *ptr ) ;
extern unsigned long strlen(char const   *s ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern unsigned long write(int filedes , void *buf , unsigned long nbyte ) ;
typedef long __time_t;
typedef __time_t time_t;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
char *rand_string(char *str , size_t size ) ;
int _global_argc  =    0;
char **_global_envp  =    (char **)0;
void megaInit(void) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int scanf(char const   *format  , ...) ;
extern long clock(void) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
extern int fgetc(FILE *__stream ) ;
extern unsigned long read(int filedes , void *buf , unsigned long nbyte ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
extern int strcmp(char const   *a , char const   *b ) ;
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern void signal(int sig , void *func ) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) time)(time_t *__timer ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) srand)(unsigned int __seed ) ;
extern double sqrt(double x ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern double log(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
void megaInit(void) 
{ 


  {

}
}
char *rand_string(char *str , size_t size ) 
{ 
  char charset[37] ;
  size_t n ;
  int key ;
  int tmp ;

  {
  charset[0] = (char )'a';
  charset[1] = (char )'b';
  charset[2] = (char )'c';
  charset[3] = (char )'d';
  charset[4] = (char )'e';
  charset[5] = (char )'f';
  charset[6] = (char )'g';
  charset[7] = (char )'h';
  charset[8] = (char )'i';
  charset[9] = (char )'j';
  charset[10] = (char )'k';
  charset[11] = (char )'l';
  charset[12] = (char )'m';
  charset[13] = (char )'n';
  charset[14] = (char )'o';
  charset[15] = (char )'p';
  charset[16] = (char )'q';
  charset[17] = (char )'r';
  charset[18] = (char )'s';
  charset[19] = (char )'t';
  charset[20] = (char )'u';
  charset[21] = (char )'v';
  charset[22] = (char )'w';
  charset[23] = (char )'x';
  charset[24] = (char )'y';
  charset[25] = (char )'z';
  charset[26] = (char )'1';
  charset[27] = (char )'2';
  charset[28] = (char )'3';
  charset[29] = (char )'4';
  charset[30] = (char )'5';
  charset[31] = (char )'6';
  charset[32] = (char )'7';
  charset[33] = (char )'8';
  charset[34] = (char )'9';
  charset[35] = (char )'0';
  charset[36] = (char )'\000';
  if (size) {
    size --;
    n = (size_t )0;
    while (n < size) {
      tmp = rand();
      key = tmp % (int )(sizeof(charset) - 1UL);
      *(str + n) = charset[key];
      n ++;
    }
    *(str + size) = (char )'\000';
  }
  return (str);
}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  char *c ;
  FILE *rfile ;
  FILE *wfile ;
  time_t t ;
  time_t tmp ;
  char ch ;
  int tmp___0 ;
  int _BARRIER_0 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;

  if (argc < 2) {
    return (1);
  }
  c = *(argv + 1);
  wfile = fopen((char const   */* __restrict  */)"program.txt", (char const   */* __restrict  */)"w");
  if ((unsigned long )wfile == (unsigned long )((void *)0)) {
    printf((char const   */* __restrict  */)"Error!");
    exit(1);
  }
  tmp = time(& t);
  srand((unsigned int )tmp);
  fprintf((FILE */* __restrict  */)wfile, (char const   */* __restrict  */)"%s", c);
  fclose(wfile);
  rfile = fopen((char const   */* __restrict  */)"program.txt", (char const   */* __restrict  */)"r");
  if ((unsigned long )rfile == (unsigned long )((void *)0)) {
    printf((char const   */* __restrict  */)"Error!");
    exit(1);
  }
  while (1) {
    tmp___0 = fgetc(rfile);
    ch = (char )tmp___0;
    if (! ((int )ch != -1)) {
      if ((((_1alwaysZero & (((_1entropy - 8) - ((_1entropy | ~ 8) + (_1entropy | ~ 8))) - 2L)) * (_1alwaysZero | (((_1entropy - 8) - ((_1entropy | ~ 8) + (_1entropy | ~ 8))) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 8) - ((_1entropy | ~ 8) + (_1entropy | ~ 8))) - 2L)) * (~ _1alwaysZero & (((_1entropy - 8) - ((_1entropy | ~ 8) + (_1entropy | ~ 8))) - 2L))) - ~ 0) - 1L) {
        __asm__  volatile   (".byte 0x16,0x2":);
      } else
      if ((((_1alwaysZero & ((_1entropy - ~ 10) - 1L)) * (_1alwaysZero | ((_1entropy - ~ 10) - 1L)) + (_1alwaysZero & ~ ((_1entropy - ~ 10) - 1L)) * (~ _1alwaysZero & ((_1entropy - ~ 10) - 1L))) | 0) + (((_1alwaysZero & ((_1entropy - ~ 10) - 1L)) * (_1alwaysZero | ((_1entropy - ~ 10) - 1L)) + (_1alwaysZero & ~ ((_1entropy - ~ 10) - 1L)) * (~ _1alwaysZero & ((_1entropy - ~ 10) - 1L))) & 0)) {
        {
        if ((((_1alwaysZero & (((_1entropy + 7) + 1L) + ((- _1entropy - 1L) | (- 7 - 1L)))) * (_1alwaysZero | (((_1entropy + 7) + 1L) + ((- _1entropy - 1L) | (- 7 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 7) + 1L) + ((- _1entropy - 1L) | (- 7 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 7) + 1L) + ((- _1entropy - 1L) | (- 7 - 1L))))) - ~ 0) - 1L) {
          __asm__  volatile   (".byte 0x0,0xe8,0x58,0x0,0x0,0x41,0x83":);
        } else {
          __asm__  volatile   (".byte 0x43,0x59,0xd1,0xf,0xc2,0x3c,0x27":);
        }
        }
      } else {
        break;
      }
    }
    printf((char const   */* __restrict  */)"%c", (int )ch);
  }
  printf((char const   */* __restrict  */)"\n");
  fclose(rfile);
  return (0);
}
}
