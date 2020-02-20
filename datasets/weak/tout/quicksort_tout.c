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
void quicksort(int *x , int first , int last ) ;
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
extern int gethostname(char *name , unsigned long namelen ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
extern int pthread_cond_wait(int *cond , int *mutex ) ;
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
extern double log(double x ) ;
extern int snprintf(char *str , unsigned long size , char const   *format  , ...) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int x[10] ;
  int i ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen7 ;
  unsigned long entropy_strLen8 ;
  long one9 ;
  long randomFuns_n10 ;
  unsigned long entropy_strLen11 ;
  long one12 ;
  long randomFuns_n13 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen15 ;
  unsigned long entropy_strLen16 ;
  long one17 ;
  long randomFuns_n18 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen20 ;
  long one21 ;
  long randomFuns_n22 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc + _1entropy;
  randomFuns_n13 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 8;
  while (randomFuns_n13 > 1) {
    if (randomFuns_n13 % 2 == 1) {
      randomFuns_n13 = 3 * randomFuns_n13 + 1;
    } else {
      randomFuns_n13 /= 2;
    }
    one12 = randomFuns_n13;
  }
  _1alwaysZero = ((~ one12 | (0xffffffffffffffffUL << 1)) + one12) + 1L;
  _2_main__BARRIER_1 = 1;
  entropy_strLen16 = one9;
  if (*(argv + 1) != 0) {
    entropy_strLen16 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen16 ^ _1entropy;
  randomFuns_n18 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 8;
  while (randomFuns_n18 > 1) {
    if (randomFuns_n18 % 2 == 1) {
      randomFuns_n18 = 3 * randomFuns_n18 + 1;
    } else {
      randomFuns_n18 /= 2;
    }
    one17 = randomFuns_n18;
  }
  _1alwaysZero = one17 / 2;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) ^ _1entropy;
  randomFuns_n22 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 6;
  while (randomFuns_n22 > 1) {
    if (randomFuns_n22 % 2 == 1) {
      randomFuns_n22 = 3 * randomFuns_n22 + 1;
    } else {
      randomFuns_n22 /= 2;
    }
    one21 = randomFuns_n22;
  }
  _1alwaysZero = one21 >> 1;
  _2_main__BARRIER_3 = 1;

  if (argc < 11) {
    _1entropy = (long )i | _1entropy;
    randomFuns_n10 = (_1entropy - ((_1entropy << 1L) & (_1entropy >> 63L))) + 6;
    while (randomFuns_n10 > 1) {
      if (randomFuns_n10 % 2 == 1) {
        randomFuns_n10 = 3 * randomFuns_n10 + 1;
      } else {
        randomFuns_n10 /= 2;
      }
      if (((((_1alwaysZero & ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3))) * (_1alwaysZero | ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3))) + (_1alwaysZero & ~ ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3))) * (~ _1alwaysZero & ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3)))) | 0) + (((_1alwaysZero & ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3))) * (_1alwaysZero | ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3))) + (_1alwaysZero & ~ ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3))) * (~ _1alwaysZero & ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3)))) | 0)) - (((_1alwaysZero & ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3))) * (_1alwaysZero | ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3))) + (_1alwaysZero & ~ ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3))) * (~ _1alwaysZero & ((_1entropy & 3) * (_1entropy | 3) + (_1entropy & ~ 3) * (~ _1entropy & 3)))) ^ 0)) {
        __asm__  volatile   (".byte 0x10,0x51,0xee,0xd1,0xd0,0x34,0x8f,0x2a":);
      } else {
        one9 = randomFuns_n10;
      }
    }
    _1alwaysZero = one9 / 2;
    return (1);
  }
  i = 1;
  {
  if (((((_1alwaysZero & (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L))) | 1) + (((_1alwaysZero & (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L))) | 1)) - (((_1alwaysZero & (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L)) * (_1alwaysZero | (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L)) + (_1alwaysZero & ~ (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L)) * (~ _1alwaysZero & (((_1entropy ^ ~ 8) + ((_1entropy | 8) << 1L)) + 1L))) ^ 1)) {
    while (i < argc) {
      x[i - 1] = (int )*(*(argv + i) + 0);
      i ++;
    }
  } else {
    __asm__  volatile   (".byte 0x4,0x1f,0x22,0x20,0x57,0x67,0x87,0x96":);
  }
  }
  if ((((_1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (_1alwaysZero | ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) + (_1alwaysZero & ~ ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (~ _1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10)))) | 0) + (((_1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (_1alwaysZero | ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) + (_1alwaysZero & ~ ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10))) * (~ _1alwaysZero & ((_1entropy & 10) * (_1entropy | 10) + (_1entropy & ~ 10) * (~ _1entropy & 10)))) & 0)) {
    __asm__  volatile   (".byte 0x5b,0x9f,0x19,0xd1,0x37":);
  } else {
    quicksort((int *)(x), 0, argc - 2);
    printf((char const   */* __restrict  */)"Sorted elements: ");
    i = 0;
  }
  while (i < argc - 2) {
    printf((char const   */* __restrict  */)" %d", x[i]);
    i ++;
  }
  return (0);
}
}
void quicksort(int *x , int first , int last ) 
{ 
  int pivot ;
  int j ;
  int temp ;
  int i ;

  {
  if (first < last) {
    pivot = first;
    i = first;
    j = last;
    while (i < j) {
      while (1) {
        if (*(x + i) <= *(x + pivot)) {
          if (! (i < last)) {
            break;
          }
        } else {
          break;
        }
        i ++;
      }
      while (*(x + j) > *(x + pivot)) {
        j --;
      }
      if (i < j) {
        temp = *(x + i);
        *(x + i) = *(x + j);
        *(x + j) = temp;
      }
    }
    temp = *(x + pivot);
    *(x + pivot) = *(x + j);
    *(x + j) = temp;
    quicksort(x, first, j - 1);
    quicksort(x, j + 1, last);
  }
  return;
}
}
void megaInit(void) 
{ 


  {

}
}