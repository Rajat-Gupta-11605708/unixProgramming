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
printf("uid password entry:\n name=%s, uid=%d,gid=%d",pw->pw_name,pw->pw_uid,pw->pw_gid);

//pw=getpwname("root");
//printf("root passwd entry");
//printf() 

}
