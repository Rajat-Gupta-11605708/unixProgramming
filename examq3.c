 
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
 
int main()
{
    FILE *fd1,*fd2;
    char c;
    
    fd1 = fopen("a.txt", "r");
    if (fd1 == NULL)
    {
        printf("Cannot open file");
    }
 
  
    fd2 = fopen("ab.txt","w");
    if (fd2 == NULL)
    {
        printf("Cannot open file ");
    }
 
    c = fgetc(fd1);
    while (c != -1)
    {
        fputc(c,fd2);
        c = fgetc(fd1);
    }
 
    fclose(fd1);
    fclose(fd2);
}
