#include <sys/stat.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char *fd = "filex.txt";
	struct stat buf;
	stat (fd, &buf);
	int size = buf.st_size;
	printf("%d\n", size);
}
