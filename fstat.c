#include <sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int fd = open("file.txt",O_RDWR);
	struct stat buf;
	fstat (fd, &buf);
	int size = buf.st_size;
	printf("%d\n", size);
}
