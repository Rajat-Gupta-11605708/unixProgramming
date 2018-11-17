#include<sys/types.h>
#include<pwd.h>
#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main(int std,char **sts)
{
struct tm *tm_ptr;
time_t the_time;
char buff[256];
time(&the_time);
tm_ptr=localtime(&the_time);
uid_t uid;
struct passwd *pw;
uid=getuid();
pw=getpwnam("root");
int opt;
while ((opt=getopt(std,sts,":ab"))!=-1)
{
switch(opt)
{
case 'a':
printf("uid password entry:\n name=%s gid=%d home dir=%s",pw->pw_name, pw->pw_gid,pw->pw_dir);
 break;
case 'b':
strftime(buff,256,"%Y=%j:%B",tm_ptr);
printf("%s",buff);
break;
}
}
return 0;
}
