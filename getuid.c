#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	if(getuid()!=0)
	{
		printf("You're not a Root User\n");
		return 1;
	}
	else
	{
		printf("Welcome Root, Your User ID is : %d\n",getuid());
	}
	return 0;
}
