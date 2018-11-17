//man gmtime
#include<time.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
struct tm *tm_ptr;
char buff[256]; 
time_t the_time;
time(&the_time);
tm_ptr = localtime(&the_time);
strftime(buff,256,"%A %d %B, %I:%S %p ",tm_ptr);
printf("strftime gives: %s\n ",buff);
return 0;
}
