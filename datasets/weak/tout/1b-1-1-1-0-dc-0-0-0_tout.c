/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern int pthread_cond_signal(int *cond ) ;
extern void exit(int status ) ;
extern int fseek(struct _IO_FILE *stream , long offs , int whence ) ;
extern int fclose(void *stream ) ;
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
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int pthread_cond_init(int *cond , int *attr ) ;
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
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
int _global_argc  =    0;
void megaInit(void) ;
char **_global_envp  =    (char **)0;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int scanf(char const   *format  , ...) ;
extern long clock(void) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
extern unsigned long read(int filedes , void *buf , unsigned long nbyte ) ;
extern int pthread_mutex_unlock(int *mutex ) ;
extern int gethostname(char *name , unsigned long namelen ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern void signal(int sig , void *func ) ;
extern long time(long *tloc ) ;
typedef struct _IO_FILE FILE;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern double sqrt(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern double log(double x ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
void megaInit(void) 
{ 


  {

}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int _BARRIER_0 ;
  unsigned long entropy_strLen5 ;
  unsigned long entropy_strLen6 ;
  long one7 ;
  long randomFuns_n8 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen10 ;
  unsigned long entropy_strLen11 ;
  long one12 ;
  long randomFuns_n13 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen15 ;
  long one16 ;
  long randomFuns_n17 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc ^ _1entropy;
  randomFuns_n8 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 7;
  while (randomFuns_n8 > 1) {
    if (randomFuns_n8 % 2 == 1) {
      randomFuns_n8 = 3 * randomFuns_n8 + 1;
    } else {
      randomFuns_n8 /= 2;
    }
    one7 = randomFuns_n8;
  }
  _1alwaysZero = (~ one7 | (0xffffffffffffffffUL << 1)) - ~ one7;
  _2_main__BARRIER_1 = 1;
  entropy_strLen11 = randomFuns_n8;
  if (*(argv + 1) != 0) {
    entropy_strLen11 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen11 - _1entropy;
  randomFuns_n13 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 7;
  while (randomFuns_n13 > 1) {
    if (randomFuns_n13 % 2 == 1) {
      randomFuns_n13 = 3 * randomFuns_n13 + 1;
    } else {
      randomFuns_n13 /= 2;
    }
    one12 = randomFuns_n13;
  }
  _1alwaysZero = (~ one12 | (0xffffffffffffffffUL << 1)) - ~ one12;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) | _1entropy;
  randomFuns_n17 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 5;
  while (randomFuns_n17 > 1) {
    if (randomFuns_n17 % 2 == 1) {
      randomFuns_n17 = 3 * randomFuns_n17 + 1;
    } else {
      randomFuns_n17 /= 2;
    }
    one16 = randomFuns_n17;
  }
  _1alwaysZero = ((one16 & ~ 1) + (one16 & ~ 1)) - (one16 ^ 1);
  _2_main__BARRIER_3 = 1;

  if (((((_1alwaysZero & ((_1entropy & ~ 3) - (~ _1entropy & 3))) * (_1alwaysZero | ((_1entropy & ~ 3) - (~ _1entropy & 3))) + (_1alwaysZero & ~ ((_1entropy & ~ 3) - (~ _1entropy & 3))) * (~ _1alwaysZero & ((_1entropy & ~ 3) - (~ _1entropy & 3)))) | 0) + (((_1alwaysZero & ((_1entropy & ~ 3) - (~ _1entropy & 3))) * (_1alwaysZero | ((_1entropy & ~ 3) - (~ _1entropy & 3))) + (_1alwaysZero & ~ ((_1entropy & ~ 3) - (~ _1entropy & 3))) * (~ _1alwaysZero & ((_1entropy & ~ 3) - (~ _1entropy & 3)))) | 0)) - (((_1alwaysZero & ((_1entropy & ~ 3) - (~ _1entropy & 3))) * (_1alwaysZero | ((_1entropy & ~ 3) - (~ _1entropy & 3))) + (_1alwaysZero & ~ ((_1entropy & ~ 3) - (~ _1entropy & 3))) * (~ _1alwaysZero & ((_1entropy & ~ 3) - (~ _1entropy & 3)))) ^ 0)) {
    __asm__  volatile   (".byte 0x58,0xb,0x7d":);
  } else {
    {
    if ((((_1alwaysZero & ((_1entropy ^ 6) - ((~ _1entropy & 6) << 1L))) * (_1alwaysZero | ((_1entropy ^ 6) - ((~ _1entropy & 6) << 1L))) + (_1alwaysZero & ~ ((_1entropy ^ 6) - ((~ _1entropy & 6) << 1L))) * (~ _1alwaysZero & ((_1entropy ^ 6) - ((~ _1entropy & 6) << 1L)))) | 0) + (((_1alwaysZero & ((_1entropy ^ 6) - ((~ _1entropy & 6) << 1L))) * (_1alwaysZero | ((_1entropy ^ 6) - ((~ _1entropy & 6) << 1L))) + (_1alwaysZero & ~ ((_1entropy ^ 6) - ((~ _1entropy & 6) << 1L))) * (~ _1alwaysZero & ((_1entropy ^ 6) - ((~ _1entropy & 6) << 1L)))) & 0)) {
      __asm__  volatile   (".byte 0xf9":);
    } else
    if (argc < 2) {
      printf((char const   */* __restrict  */)"Usage: program-name argument\n");
      return (1);
    }
    }
  }
  if ((((_1alwaysZero & ((_1entropy | 5) - (_1entropy & 5))) * (_1alwaysZero | ((_1entropy | 5) - (_1entropy & 5))) + (_1alwaysZero & ~ ((_1entropy | 5) - (_1entropy & 5))) * (~ _1alwaysZero & ((_1entropy | 5) - (_1entropy & 5)))) - ~ 0) - 1L) {
    __asm__  volatile   (".byte 0x98,0x7d,0x31":);
  } else {
    return (0);
  }
}
}
