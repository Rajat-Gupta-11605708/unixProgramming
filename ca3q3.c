#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int fd,res,res1;
struct flock r2;
fd=open("f1.txt",O_RDWR,0666);
r2.l_type =F_WRLCK;
r2.l_whence = SEEK_SET;
r2.l_start = 0;
r2.l_len = 20;
res = fcntl(fd,F_SETLK,&r2);
if(res == -1)
{
	printf("process 1 failed to acquire lock\n");
	printf("pid is %d\n",getpid());
}
else
{
printf("lock success for p1\n") ;
printf("pid is %d",getpid());
sleep(10);
r2.l_type=F_UNLCK;
r2.l_whence = SEEK_SET;
r2.l_start = 0;
r2.l_len = 20;
res = fcntl(fd,F_SETLK,&r2);
printf("unlock success for p1\n") ;
}
  
return 0;
} 
