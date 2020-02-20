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
typedef unsigned long size_t;
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
char *rand_string(char *str , size_t size ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern int gettimeofday(struct timeval *tv , void *tz ) ;
int _global_argc  =    0;
char **_global_envp  =    (char **)0;
void megaInit(void) ;
extern int fscanf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int scanf(char const   *format  , ...) ;
long _1entropy  =    0;
extern void perror(char const   *str ) ;
extern long clock(void) ;
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
void megaInit(void) 
{ 


  {

}
}
int main(int argc , char **argv , char **_formal_envp ) 
{ 
  int i ;
  int count ;
  time_t t ;
  time_t tmp ;
  char *c ;
  char ch ;
  int _BARRIER_0 ;
  unsigned long entropy_strLen11 ;
  unsigned long entropy_strLen12 ;
  unsigned long entropy_strLen13 ;
  unsigned long entropy_strLen14 ;
  long one15 ;
  long randomFuns_n16 ;
  unsigned long entropy_strLen17 ;
  unsigned long entropy_strLen18 ;
  long one19 ;
  long randomFuns_n20 ;
  unsigned long entropy_strLen21 ;
  unsigned long entropy_strLen22 ;
  long one23 ;
  long randomFuns_n24 ;
  unsigned long entropy_strLen25 ;
  unsigned long entropy_strLen26 ;
  long one27 ;
  long randomFuns_n28 ;
  unsigned long entropy_strLen29 ;
  unsigned long entropy_strLen30 ;
  unsigned long entropy_strLen31 ;
  long one32 ;
  long randomFuns_n33 ;
  unsigned long entropy_strLen34 ;
  unsigned long entropy_strLen35 ;
  long one36 ;
  long randomFuns_n37 ;
  unsigned long entropy_strLen38 ;
  unsigned long entropy_strLen39 ;
  long one40 ;
  long randomFuns_n41 ;
  int _2_main__BARRIER_1 ;
  unsigned long entropy_strLen43 ;
  unsigned long entropy_strLen44 ;
  unsigned long entropy_strLen45 ;
  long one46 ;
  long randomFuns_n47 ;
  int _2_main__BARRIER_2 ;
  unsigned long entropy_strLen49 ;
  unsigned long entropy_strLen50 ;
  long one51 ;
  long randomFuns_n52 ;
  int _2_main__BARRIER_3 ;

  {
  megaInit();
  _global_argc = argc;
  _global_argv = argv;
  _global_envp = _formal_envp;
  _BARRIER_0 = 1;
  _1entropy = (long )argc - _1entropy;
  randomFuns_n41 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 5;
  while (randomFuns_n41 > 1) {
    if (randomFuns_n41 % 2 == 1) {
      randomFuns_n41 = 3 * randomFuns_n41 + 1;
    } else {
      randomFuns_n41 /= 2;
    }
    one40 = randomFuns_n41;
  }
  _1alwaysZero = ((one40 & ~ 1) << 1L) - (one40 ^ 1);
  _2_main__BARRIER_1 = 1;
  entropy_strLen45 = randomFuns_n37;
  if (*(argv + 1) != 0) {
    entropy_strLen45 = strlen(*(argv + 1));
  } else {

  }
  _1entropy = (long )entropy_strLen45 ^ _1entropy;
  randomFuns_n47 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 10;
  while (randomFuns_n47 > 1) {
    if (randomFuns_n47 % 2 == 1) {
      randomFuns_n47 = 3 * randomFuns_n47 + 1;
    } else {
      randomFuns_n47 /= 2;
    }
    one46 = randomFuns_n47;
  }
  _1alwaysZero = one46 >> 1;
  _2_main__BARRIER_2 = 1;
  _1entropy = (long )((unsigned long )_formal_envp) - _1entropy;
  randomFuns_n52 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 7;
  while (randomFuns_n52 > 1) {
    if (randomFuns_n52 % 2 == 1) {
      randomFuns_n52 = 3 * randomFuns_n52 + 1;
    } else {
      randomFuns_n52 /= 2;
    }
    one51 = randomFuns_n52;
  }
  _1alwaysZero = one51 / 2;
  _2_main__BARRIER_3 = 1;

  if (argc < 3) {
    _1entropy = (long )i ^ _1entropy;
    randomFuns_n16 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 7;
    while (randomFuns_n16 > 1) {
      if (((((_1alwaysZero & ((_1entropy ^ 8) + ((_1entropy & 8) + (_1entropy & 8)))) * (_1alwaysZero | ((_1entropy ^ 8) + ((_1entropy & 8) + (_1entropy & 8)))) + (_1alwaysZero & ~ ((_1entropy ^ 8) + ((_1entropy & 8) + (_1entropy & 8)))) * (~ _1alwaysZero & ((_1entropy ^ 8) + ((_1entropy & 8) + (_1entropy & 8))))) ^ ~ 0) + ((((_1alwaysZero & ((_1entropy ^ 8) + ((_1entropy & 8) + (_1entropy & 8)))) * (_1alwaysZero | ((_1entropy ^ 8) + ((_1entropy & 8) + (_1entropy & 8)))) + (_1alwaysZero & ~ ((_1entropy ^ 8) + ((_1entropy & 8) + (_1entropy & 8)))) * (~ _1alwaysZero & ((_1entropy ^ 8) + ((_1entropy & 8) + (_1entropy & 8))))) | 0) << 1L)) + 1L) {
        __asm__  volatile   (".byte 0x1d,0x67,0xcf":);
      } else
      if (randomFuns_n16 % 2 == 1) {
        randomFuns_n16 = 3 * randomFuns_n16 + 1;
      } else {
        randomFuns_n16 /= 2;
      }
      {
      if ((((_1alwaysZero & ((_1entropy & ~ 6) + 6)) * (_1alwaysZero | ((_1entropy & ~ 6) + 6)) + (_1alwaysZero & ~ ((_1entropy & ~ 6) + 6)) * (~ _1alwaysZero & ((_1entropy & ~ 6) + 6))) ^ 0) + ((((_1alwaysZero & ((_1entropy & ~ 6) + 6)) * (_1alwaysZero | ((_1entropy & ~ 6) + 6)) + (_1alwaysZero & ~ ((_1entropy & ~ 6) + 6)) * (~ _1alwaysZero & ((_1entropy & ~ 6) + 6))) & 0) << 1L)) {
        __asm__  volatile   (".byte 0xd7":);
      } else {
        one15 = randomFuns_n16;
      }
      }
    }
    _1alwaysZero = one15 >> 1;
    _1entropy = (long )count + _1entropy;
    randomFuns_n20 = ((_1entropy + (_1entropy >> 63L)) ^ (_1entropy >> 63L)) + 3;
    while (randomFuns_n20 > 1) {
      if (randomFuns_n20 % 2 == 1) {
        randomFuns_n20 = 3 * randomFuns_n20 + 1;
      } else
      if ((((_1alwaysZero & (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8))) * (_1alwaysZero | (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8))) + (_1alwaysZero & ~ (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8))) * (~ _1alwaysZero & (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8)))) ^ 1) + ((((_1alwaysZero & (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8))) * (_1alwaysZero | (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8))) + (_1alwaysZero & ~ (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8))) * (~ _1alwaysZero & (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8)))) & 1) + (((_1alwaysZero & (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8))) * (_1alwaysZero | (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8))) + (_1alwaysZero & ~ (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8))) * (~ _1alwaysZero & (((_1entropy & ~ 8) << 1L) - (_1entropy ^ 8)))) & 1))) {
        randomFuns_n20 /= 2;
      } else {
        __asm__  volatile   (".byte 0x3f,0x80,0x83,0x48,0xfb,0xa7":);
      }
      one19 = randomFuns_n20;
    }
    _1alwaysZero = ((~ one19 | (0xffffffffffffffffUL << 1)) + one19) + 1L;
    _1entropy = t ^ _1entropy;
    randomFuns_n24 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 9;
    while (randomFuns_n24 > 1) {
      if (randomFuns_n24 % 2 == 1) {
        randomFuns_n24 = 3 * randomFuns_n24 + 1;
      } else {
        randomFuns_n24 /= 2;
      }
      one23 = randomFuns_n24;
    }
    _1alwaysZero = one23 >> 1;
    _1entropy = tmp | _1entropy;
    randomFuns_n28 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 4;
    while (randomFuns_n28 > 1) {
      if (randomFuns_n28 % 2 == 1) {
        randomFuns_n28 = 3 * randomFuns_n28 + 1;
      } else {
        randomFuns_n28 /= 2;
      }
      one27 = randomFuns_n28;
    }
    _1alwaysZero = (one27 + ~ 1) + 1L;
    entropy_strLen31 = one15;
    if (c != 0) {
      entropy_strLen31 = strlen(c);
    } else {

    }
    _1entropy = (long )entropy_strLen31 ^ _1entropy;
    randomFuns_n33 = ((_1entropy ^ (_1entropy >> 63L)) - (_1entropy >> 63L)) + 5;
    while (randomFuns_n33 > 1) {
      if (randomFuns_n33 % 2 == 1) {
        randomFuns_n33 = 3 * randomFuns_n33 + 1;
      } else {
        randomFuns_n33 /= 2;
      }
      one32 = randomFuns_n33;
    }
    _1alwaysZero = one32 >> 1;
    _1entropy = (long )ch - _1entropy;
    randomFuns_n37 = (_1entropy - ((_1entropy + _1entropy) & (_1entropy >> 63L))) + 3;
    while (randomFuns_n37 > 1) {
      if (randomFuns_n37 % 2 == 1) {
        randomFuns_n37 = 3 * randomFuns_n37 + 1;
      } else {
        randomFuns_n37 /= 2;
      }
      one36 = randomFuns_n37;
    }
    _1alwaysZero = one36 / 2;
    return (1);
  }
  count = 0;
  tmp = time(& t);
  srand((unsigned int )tmp);
  c = *(argv + 1);
  ch = *(*(argv + 2) + 0);
  i = 0;
  while ((int )*(c + i) != 0) {
    if ((int )ch == (int )*(c + i)) {
      count ++;
    }
    i ++;
  }
  printf((char const   */* __restrict  */)"Frequency of %c = %d", (int )ch, count);
  return (0);
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