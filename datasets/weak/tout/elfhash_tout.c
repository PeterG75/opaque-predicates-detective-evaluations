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
extern int pthread_cond_init(int *cond , int *attr ) ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int raise(int sig ) ;
long _1alwaysZero  =    0;
extern void abort() ;
typedef unsigned long size_t;
extern int atoi(char const   *s ) ;
extern void *malloc(unsigned long size ) ;
extern double ceil(double x ) ;
extern int getpagesize() ;
extern int posix_memalign(void **memptr , unsigned long alignment , unsigned long size ) ;
extern int pthread_cond_broadcast(int *cond ) ;
extern int pthread_join(void *thread , void **value_ptr ) ;
extern int rand() ;
extern void free(void *ptr ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
int main(int argc , char **argv , char **_formal_envp ) ;
extern unsigned long write(int filedes , void *buf , unsigned long nbyte ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
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
extern int gethostname(char *name , unsigned long namelen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
extern void qsort(void *base , unsigned long nel , unsigned long width , int (*compar)(void *a ,
                                                                                       void *b ) ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int pthread_mutex_init(int *mutex , int *attr ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern double difftime(long tv1 , long tv0 ) ;
extern void signal(int sig , void *func ) ;
extern long time(long *tloc ) ;
typedef struct _IO_FILE FILE;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int open(char const   *filename , int oflag  , ...) ;
extern double sqrt(double x ) ;
extern double log(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
unsigned int ELFHash(char *str , unsigned int len ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
void megaInit(void) 
{ 


  {

}
}
unsigned int ELFHash(char *str , unsigned int len ) 
{ 
  unsigned int hash ;
  unsigned int x ;
  unsigned int i ;

  {
  hash = 0U;
  x = 0U;
  i = 0U;
  i = 0U;
  while (i < len) {
    hash = (hash << 4) + (unsigned int )*str;
    x = (unsigned int )((long )hash & 4026531840L);
    if (x != 0U) {
      hash ^= x >> 24;
    }
    hash &= ~ x;
    str ++;
    i ++;
  }
  return (hash);
}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  unsigned char *str ;
  unsigned int hash ;
  size_t tmp ;
  unsigned int tmp___0 ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen9 ;
  unsigned long entropy_strLen10 ;
  long one11 ;
  long randomFuns_n12 ;
  unsigned long entropy_strLen13 ;
  long one14 ;
  long randomFuns_n15 ;
  unsigned long entropy_strLen16 ;
  long one17 ;
  long randomFuns_n18 ;
  unsigned long entropy_strLen19 ;
  long one20 ;
  long randomFuns_n21 ;
  unsigned long entropy_strLen22 ;
  long one23 ;
  long randomFuns_n24 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen26 ;
  unsigned long entropy_strLen27 ;
  long one28 ;
  long randomFuns_n29 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen31 ;
  long one32 ;
  long randomFuns_n33 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc + _1entropy;
  randomFuns_n24 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 7;
  while (randomFuns_n24 > 1) {
    if (randomFuns_n24 % 2 == 1) {
      randomFuns_n24 = 3 * randomFuns_n24 + 1;
    } else {
      randomFuns_n24 /= 2;
    }
    one23 = randomFuns_n24;
  }
  _1alwaysZero = ((one23 & ~ 1) + (one23 & ~ 1)) - (one23 ^ 1);
  _2_main__BARRIER_1 = 1;
  entropy_strLen27 = randomFuns_n12;
  if (*(argv + 1) != 0) {
    entropy_strLen27 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen27 + _1entropy;
  randomFuns_n29 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 7;
  while (randomFuns_n29 > 1) {
    if (randomFuns_n29 % 2 == 1) {
      randomFuns_n29 = 3 * randomFuns_n29 + 1;
    } else {
      randomFuns_n29 /= 2;
    }
    one28 = randomFuns_n29;
  }
  _1alwaysZero = one28 >> 1;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) ^ _1entropy;
  randomFuns_n33 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 1;
  while (randomFuns_n33 > 1) {
    if (randomFuns_n33 % 2 == 1) {
      randomFuns_n33 = 3 * randomFuns_n33 + 1;
    } else {
      randomFuns_n33 /= 2;
    }
    one32 = randomFuns_n33;
  }
  _1alwaysZero = ((~ one32 | (0xffffffffffffffffUL << 1)) + one32) + 1L;
  _2_main__BARRIER_3 = 1;
  str = (unsigned char *)*(argv + 1);
  tmp = strlen((char const   *)str);
  tmp___0 = ELFHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 184139465U) {
    printf((char const   */* __restrict  */)"You win!\n");
  }
  _1entropy = (long )((unsigned long )str) + _1entropy;
  randomFuns_n12 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 6;
  while (1) {
    if (randomFuns_n12 > 1) {

    } else
    if (((((_1alwaysZero & ((_1entropy & 2) * (_1entropy | 2) + (_1entropy & ~ 2) * (~ _1entropy & 2))) * (_1alwaysZero | ((_1entropy & 2) * (_1entropy | 2) + (_1entropy & ~ 2) * (~ _1entropy & 2))) + (_1alwaysZero & ~ ((_1entropy & 2) * (_1entropy | 2) + (_1entropy & ~ 2) * (~ _1entropy & 2))) * (~ _1alwaysZero & ((_1entropy & 2) * (_1entropy | 2) + (_1entropy & ~ 2) * (~ _1entropy & 2)))) ^ ~ 0) + ((((_1alwaysZero & ((_1entropy & 2) * (_1entropy | 2) + (_1entropy & ~ 2) * (~ _1entropy & 2))) * (_1alwaysZero | ((_1entropy & 2) * (_1entropy | 2) + (_1entropy & ~ 2) * (~ _1entropy & 2))) + (_1alwaysZero & ~ ((_1entropy & 2) * (_1entropy | 2) + (_1entropy & ~ 2) * (~ _1entropy & 2))) * (~ _1alwaysZero & ((_1entropy & 2) * (_1entropy | 2) + (_1entropy & ~ 2) * (~ _1entropy & 2)))) | 0) << 1L)) + 1L) {
      __asm__  volatile   (".byte 0x3c,0x3":);
    } else {
      break;
    }
    if (randomFuns_n12 % 2 == 1) {
      randomFuns_n12 = 3 * randomFuns_n12 + 1;
    } else {
      randomFuns_n12 /= 2;
    }
    one11 = randomFuns_n12;
  }
  _1alwaysZero = one11 >> 1;
  _1entropy = (long )hash - _1entropy;
  randomFuns_n15 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 9;
  while (randomFuns_n15 > 1) {
    if (randomFuns_n15 % 2 == 1) {
      randomFuns_n15 = 3 * randomFuns_n15 + 1;
    } else {
      randomFuns_n15 /= 2;
    }
    one14 = randomFuns_n15;
  }
  _1alwaysZero = ((one14 & ~ 1) + (one14 & ~ 1)) - (one14 ^ 1);
  _1entropy = (long )tmp - _1entropy;
  randomFuns_n18 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 4;
  if ((((_1alwaysZero & ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) * (_1alwaysZero | ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) + (_1alwaysZero & ~ ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) * (~ _1alwaysZero & ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9)))) | 0) + (((_1alwaysZero & ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) * (_1alwaysZero | ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) + (_1alwaysZero & ~ ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9))) * (~ _1alwaysZero & ((_1entropy & 9) * (_1entropy | 9) + (_1entropy & ~ 9) * (~ _1entropy & 9)))) & 0)) {
    __asm__  volatile   (".byte 0xb9,0xca,0x70,0x9d,0x5e,0x89":);
  } else {
    while (randomFuns_n18 > 1) {
      if (randomFuns_n18 % 2 == 1) {
        randomFuns_n18 = 3 * randomFuns_n18 + 1;
      } else {
        randomFuns_n18 /= 2;
      }
      one17 = randomFuns_n18;
    }
  }
  _1alwaysZero = (~ one17 | (0xffffffffffffffffUL << 1)) - ~ one17;
  _1entropy = (long )tmp___0 | _1entropy;
  randomFuns_n21 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 6;
  while (randomFuns_n21 > 1) {
    {
    if (((((_1alwaysZero & ((_1entropy & 5) * (_1entropy | 5) + (_1entropy & ~ 5) * (~ _1entropy & 5))) * (_1alwaysZero | ((_1entropy & 5) * (_1entropy | 5) + (_1entropy & ~ 5) * (~ _1entropy & 5))) + (_1alwaysZero & ~ ((_1entropy & 5) * (_1entropy | 5) + (_1entropy & ~ 5) * (~ _1entropy & 5))) * (~ _1alwaysZero & ((_1entropy & 5) * (_1entropy | 5) + (_1entropy & ~ 5) * (~ _1entropy & 5)))) | 1) << 1L) - (((_1alwaysZero & ((_1entropy & 5) * (_1entropy | 5) + (_1entropy & ~ 5) * (~ _1entropy & 5))) * (_1alwaysZero | ((_1entropy & 5) * (_1entropy | 5) + (_1entropy & ~ 5) * (~ _1entropy & 5))) + (_1alwaysZero & ~ ((_1entropy & 5) * (_1entropy | 5) + (_1entropy & ~ 5) * (~ _1entropy & 5))) * (~ _1alwaysZero & ((_1entropy & 5) * (_1entropy | 5) + (_1entropy & ~ 5) * (~ _1entropy & 5)))) ^ 1)) {
      if (randomFuns_n21 % 2 == 1) {
        randomFuns_n21 = 3 * randomFuns_n21 + 1;
      } else {
        randomFuns_n21 /= 2;
      }
    } else {
      __asm__  volatile   (".byte 0x3d,0xbc,0x35,0x0":);
    }
    }
    one20 = randomFuns_n21;
  }
  _1alwaysZero = one20 >> 1;
  return (0);
}
}