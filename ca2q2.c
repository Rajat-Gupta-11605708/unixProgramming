#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
char *env;
char s[100];
env=getenv(argv[1]);
printf("%s\n",env);
strcat(s,argv[1]);
strcat(s,"=");
strcat(s,argv[2]);
putenv(s);
env=getenv(argv[1]);
printf("%s",env);
return 0;


}
