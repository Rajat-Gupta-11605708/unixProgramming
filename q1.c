#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
int n,fd,fd1;
char buff[10],buff1[10];
 
fd=open("ab.txt",O_CREAT|O_RDWR,0777);// open the file
n=read(1,buff,10);//read from terminal
write(fd,buff,n); 
lseek(fd,5,SEEK_SET);
read(fd,buff1,10);
fd1=open("abc.txt",O_CREAT|O_RDWR,0777);
write(fd1,buff1,10);
return 0;
}
