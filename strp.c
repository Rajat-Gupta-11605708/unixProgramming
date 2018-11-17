#include<stdio.h>
#include<time.h>
#include<string.h>
int main()
{
struct tm *t,t1;
char buff[200];
strcpy(buff,"Mon 26 july 2018");
t=&t1; 
strptime(buff,"%a %d",t);
printf("date is %d\n",t->tm_mday); 
}
