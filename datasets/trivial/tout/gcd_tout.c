/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern void exit(int status ) ;
extern int pthread_cond_signal(int *cond ) ;
extern int fclose(void *stream ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
extern int close(int filedes ) ;
extern int pthread_create(void *thread , void *attr , void *start_routine , void *arg ) ;
char **_global_argv  =    (char **)0;
extern int fcntl(int filedes , int cmd  , ...) ;
extern int unlink(char const   *filename ) ;
extern int pthread_mutex_lock(int *mutex ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern int pthread_cond_init(int *cond , int *attr ) ;
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
extern int rand() ;
extern void free(void *ptr ) ;
extern unsigned long strlen(char const   *s ) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern unsigned long write(int filedes , void *buf , unsigned long nbyte ) ;
typedef long __time_t;
typedef __time_t time_t;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
int _global_argc  =    0;
void megaInit(void) ;
char **_global_envp  =    (char **)0;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int scanf(char const   *format  , ...) ;
extern long clock(void) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
extern unsigned long read(int filedes , void *buf , unsigned long nbyte ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void signal(int sig , void *func ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) time)(time_t *__timer ) ;
typedef struct _IO_FILE FILE;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) srand)(unsigned int __seed ) ;
extern double sqrt(double x ) ;
extern double log(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int num1 ;
  int num2 ;
  int i ;
  int hcf ;
  time_t t ;
  time_t tmp ;
  int _BARRIER_0 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;

  if (argc < 3) {
    return (1);
  }
  if (((((_1alwaysZero & (((_1entropy ^ ~ 1) + ((_1entropy | 1) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 1) + ((_1entropy | 1) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 1) + ((_1entropy | 1) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 1) + ((_1entropy | 1) << 1L)) + 1L))) ^ ~ 0) + ((((_1alwaysZero & (((_1entropy ^ ~ 1) + ((_1entropy | 1) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 1) + ((_1entropy | 1) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 1) + ((_1entropy | 1) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 1) + ((_1entropy | 1) << 1L)) + 1L))) | 0) << 1L)) + 1L) {
    __asm__  volatile   (".byte 0x2a,0xa2,0xe3,0xab,0x23,0x48,0x37,0xa3":);
  } else {
    tmp = time(& t);
    srand((unsigned int )tmp);
    num1 = (int )*(*(argv + 1) + 0);
    num2 = (int )*(*(argv + 2) + 0);
    i = 1;
  }
  while (1) {
    {
    if (((((_1alwaysZero & (((_1entropy + 10) + 1L) + ((- _1entropy - 1L) | (- 10 - 1L)))) * (_1alwaysZero | (((_1entropy + 10) + 1L) + ((- _1entropy - 1L) | (- 10 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 10) + 1L) + ((- _1entropy - 1L) | (- 10 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 10) + 1L) + ((- _1entropy - 1L) | (- 10 - 1L))))) ^ ~ 0) + ((((_1alwaysZero & (((_1entropy + 10) + 1L) + ((- _1entropy - 1L) | (- 10 - 1L)))) * (_1alwaysZero | (((_1entropy + 10) + 1L) + ((- _1entropy - 1L) | (- 10 - 1L)))) + (_1alwaysZero & ~ (((_1entropy + 10) + 1L) + ((- _1entropy - 1L) | (- 10 - 1L)))) * (~ _1alwaysZero & (((_1entropy + 10) + 1L) + ((- _1entropy - 1L) | (- 10 - 1L))))) | 0) << 1L)) + 1L) {
      __asm__  volatile   (".byte 0xb7,0x4f":);
    } else
    if (! (i <= num1)) {
      if (! (i <= num2)) {
        if ((((_1alwaysZero & (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L)) * (_1alwaysZero | (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L)) + (_1alwaysZero & ~ (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L)) * (~ _1alwaysZero & (((_1entropy - 4) - ((_1entropy | ~ 4) + (_1entropy | ~ 4))) - 2L))) - ~ 1) - 1L) {
          break;
        } else {
          __asm__  volatile   (".byte 0xc7,0x2c,0x9f,0x42":);
        }
      }
    }
    }
    if (num1 % i == 0) {
      if (num2 % i == 0) {
        hcf = i;
      }
    }
    i ++;
  }
  printf((char const   */* __restrict  */)"H.C.F of %d and %d is %d\n", num1, num2,
         hcf);
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
