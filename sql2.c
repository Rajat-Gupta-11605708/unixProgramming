#include<my_global.h>
#include<stdio.h>
#include<mysql.h>
int main()
{
MYSQL *c;
MYSQL_RES *r;
MYSQL_ROW row;
int i,num;
c=mysql_init(NULL);
if(!mysql_real_connect(c,"localhost","root","rishu","rishu",0,NULL,0)) 
	printf("connection failed to established\n");
if(mysql_query(c,"select * from student")) 
	printf("query error\n");
r=mysql_use_result(c);
num=mysql_num_fields(r);
printf("table in the database are\n");
while((row=mysql_fetch_row(r))!= NULL)
{
	for(i=0;i<num;i++)
	{
	printf("%s\n",row[i]);
	}
}
 }
 
