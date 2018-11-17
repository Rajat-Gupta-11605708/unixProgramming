#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
int n,fd,fd1,m;
char buff[10000];
fd=open("a.txt",O_RDWR);
n=read(fd,buff,10000); 
m=n/4;
lseek(fd,-(m+1),SEEK_END);
 read(fd,buff,m);
fd1=open("ab.txt",O_RDWR);
write(fd1,buff,m);
return 0;
}
