#include<my_global.h>
#include<stdio.h>
#include<mysql.h>
int main()
{
MYSQL *c;
c=mysql_init(NULL);
if(!mysql_real_connect(c,"localhost","root","rishu","school",0,NULL,0)) 
	printf("connection failed to established\n");
if(mysql_query(c,"create table rts(name varchar(20),id int)")) 
	printf("query error\n");
 if(mysql_query(c,"INSERT INTO rts VALUES( 'risy' ,15)")) 
 	printf("query error\n");
 mysql_close(c);
exit(0);
 }
 
