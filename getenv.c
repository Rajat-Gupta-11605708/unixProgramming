#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  char *ppath;
  ppath = getenv("HOME");
  if (ppath==NULL)
    perror("getenv");
  else
    printf("$HOME = %s",ppath);
  return 0;
}
