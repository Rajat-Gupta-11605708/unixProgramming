#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
int n,fd,fd1;
char buff[100];
fd=open("a.txt",O_RDWR);
lseek(fd,11,SEEK_SET);
n=read(fd,buff,4);
fd1=open("ab.txt",O_RDWR);
lseek(fd1,0,SEEK_END);
write(fd1,buff,n);
return 0;
}
