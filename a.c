#include <comelang2.h>

struct sData {
int (* _Nullable _close)(void *);
};

int fun(int (* _Nullable)(void *, char *, int));

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommende     d that you use fgets(3) instead.")))

int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));

int fun2(long);

int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long);/* __attribute__((availability(macosx,introduced=10.9)));*/
/*
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));
*/

int main(int argc, char** argv)
{
    
    return 0;
}
