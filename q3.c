#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
int fd,fd1,n;
char buff[100];
fd=open("a.txt",O_RDWR);
n=read(fd,buff,100);
fd1=open("ab.txt",O_RDWR);
write(fd1,buff,n);
}

