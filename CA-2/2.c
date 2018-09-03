#include <stdio.h>
#include <time.h>
int main()
{
  time_t curtime;
  struct tm *timeinfo;
  char buffer[100];   // to store the character string after formatting of structure tm by strftime()
  time(&curtime);
  timeinfo = localtime(&curtime);
  strftime(buffer, 100,"%a %d - %b - %Y, %I : %M %p",timeinfo);   //conversion or formatting of time returned by localtime()
  puts(buffer);
  FILE *fp;
  fp = fopen("time.txt", "w+");     // opening file time.txt in w+ mode
  fputs(buffer, fp);                // putting buffer in file pointed by fp
  fclose(fp);
}
