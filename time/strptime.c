#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(void)
{
    char buf[100];
    time_t t;
    struct tm *timeptr,result;

    setlocale(LC_ALL,"/QSYS.LIB/EN_US.LOCALE");
    t = time(NULL);
    timeptr = localtime(&t);
    strftime(buf,sizeof(buf), "%a %m/%d/%Y %r", timeptr);

    if(strptime(buf, "%a %m/%d/%Y %r",&result) == NULL)
          printf("\nstrptime failed\n");
   else
   {
          printf("tm_hour:  %d\n",result.tm_hour);
          printf("tm_min:  %d\n",result.tm_min);
          printf("tm_sec:  %d\n",result.tm_sec);
          printf("tm_mon:  %d\n",result.tm_mon);
          printf("tm_mday:  %d\n",result.tm_mday);
          printf("tm_year:  %d\n",result.tm_year);
          printf("tm_yday:  %d\n",result.tm_yday);
          printf("tm_wday:  %d\n",result.tm_wday);
   }

   return 0;
}
