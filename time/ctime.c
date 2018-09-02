#include <time.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  time_t curtime;
  time(&curtime);
  printf("Current Date & Time is : %s\n", ctime(&curtime));
  return 0;
}
