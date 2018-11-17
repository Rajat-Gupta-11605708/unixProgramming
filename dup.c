#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
int n,m;
n=open("a.txt",O_RDONLY);
// m=dup(n);
m=dup2(n,6);
printf("%d",m);
}
