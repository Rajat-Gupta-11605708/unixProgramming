#include<time.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
int i;
time_t the_time;

for(i=0;i<50;i++)
{
time(&the_time );
printf("the time is %d\n",the_time);
sleep(1); 
}
}
