#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
{
struct stat f;
int h;
h=open("ab.txt",O_RDWR);
fstat(h,&f);
int n=f.st_ino;
printf("%d\n",n); 
}
