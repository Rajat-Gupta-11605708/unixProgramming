#include<stdio.h>
int div(int, int);
int main()
{
int x=5,y=2,c,d;
c=div(x,y);
printf("%d",c);
x=3,y=0;
d=div(x,y);
}
int div(int a, int b)
{
return(a/b);
}
