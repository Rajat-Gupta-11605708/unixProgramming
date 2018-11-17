//fcntl(filediscriptor,f_setlock,&region)
// structure flock;-f_rdlck wrlck unlck
//l_start L_where seek_set seek_cur seek_end l_len->20;

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int fd,res,res1;
struct flock region_1,r2;
fd=open("testt",O_RDWR,0666);
r2.l_type =F_RDLCK;
r2.l_whence = SEEK_SET;
r2.l_start = 0;
r2.l_len = 20;
res = fcntl(fd,F_SETLK,&r2);
if(res == -1)
{
	printf("process 1 failed to acquire lock");
	printf("pid is %d",getpid());
}
else
{
printf("lock success for p1") ;
printf("pid is %d",getpid());
}
sleep(10); 
return 0;
}
