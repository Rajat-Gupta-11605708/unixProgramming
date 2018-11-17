/*
#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main()
{
struct tm *tm_ptr;
time_t the_time;
time(&the_time);
tm_ptr=localtime(&the_time);
printf("the time is: %d:%d:%d",tm_ptr->tm_hour,tm_ptr->tm_min,tm_ptr->tm_sec);
return 0;

} 
#include<time.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
struct tm *tm_ptr;
time_t the_time;
time(&the_time);
tm_ptr=localtime(&the_time);
printf("date is:-%d/%d/%d",tm_ptr->tm_mon+1,tm_ptr->tm_mday+1,tm_ptr->tm_year+1900);
return 0;
}

#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main()
{
struct tm *tm_ptr;
time_t the_time;
char buff[256];
time(&the_time);
tm_ptr=localtime(&the_time);
strftime(buff,256,"%A %d  ",tm_ptr);
printf("%s",buff);
return 0;
}

#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<pwd.h>
int main()
{ 
struct passwd *pw;
uid_t uid;
uid=getuid();
pw=getpwuid(uid);
printf("%s %d %d",pw->pw_name,pw->pw_uid,pw->pw_gid);
return 0; 
}


#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main()
{
struct tm *tm_ptr;
time_t the_time;
char buff[256];
time(&the_time);
tm_ptr=localtime(&the_time);
strftime(buff,256,"%c",tm_ptr);
printf("%s",buff);
return 0;
} 

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
pw=getpwuid(uid);
int opt;
while ((opt=getopt(std,sts,":ab"))!=-1)
{
switch(opt)
{
case 'a':
strftime(buff,256,"%d-%m",tm_ptr);
printf("%s",buff);
break;
case 'b':
printf("uid password entry:\n gid=%d", pw->pw_gid);
break;
}
}
return 0;
}

#include<sys/types.h>
#include<pwd.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
uid_t uid;
struct passwd *pw;
uid=getuid();
pw=getpwuid(uid);
printf("%s %d %d",pw->pw_name,pw->pw_uid,pw->pw_gid);
return 0;
}
 
#include<sys/utsname.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
struct utsname uts;
uname(&uts);
printf("system is %s on %s hardware\n",uts.sysname,uts.machine);
printf("Nodename is %s\n",uts.nodename);
printf("version is %s\n %s\n",uts.release,uts.version);
}
getpwuid
uname
*/
#include<ios>

int main()
char *buff;
buff=
