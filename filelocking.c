#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int c, char *v[])
{
int n,fd  ;
char buff[10000];
fd=open(v[1],O_CREAT|O_RDWR|O_EXCL,0764);
if(fd==-1)
{
printf("file creation failed");
}
else
{
printf("file creation success. enter data\n");
n=read(0,buff,10000); 
write(fd,buff,n);
}
sleep(3);
printf("pid is %d",getpid());
return 0;
}
