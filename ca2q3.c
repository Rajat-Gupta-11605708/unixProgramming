#include<sys/types.h>
#include<pwd.h>
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
struct tm *tm_ptr;
time_t the_time;
 char buf[256], *buff;
time(&the_time);
tm_ptr=localtime(&the_time);

int opt;
while ((opt=getopt(argc,argv,":ab"))!=-1)
{
switch(opt)
{
case 'a':
buff=getenv(optarg);
printf("%s",buff);

break;
case 'b':
strftime(buf,256,"%H:%M%p::%m/%d",tm_ptr);
printf("%s\n",buf);
break;

}
}
return 0;
}
