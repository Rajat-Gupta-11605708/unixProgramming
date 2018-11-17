#include<time.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
int i;

time_t timeval;
time(&timeval);
printf("the date is: %s",ctime(&timeval));
return 0;
}
