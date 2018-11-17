#include<time.h>
#include<stdio.h>
#include<unistd.h>
int main(int args, char **arr)
{
struct tm *tm_ptr; 
time_t the_time;
char buff[256];
time(&the_time); 
tm_ptr=gmtime(&the_time);
int opt;
while((opt=getopt(args,arr,":dt"))!=-1)
{
switch(opt)
{
case 'd':
strftime(buff,256,"%d-%m-%y ",tm_ptr);
printf("strftime gives: %s\n ",buff);
break;
case 't':
strftime(buff,256,"%H : %M : %S ",tm_ptr);
printf("strftime gives: %s\n ",buff);

}
 }
return 0;
} 


