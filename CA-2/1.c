#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
extern char **environ;                //declaring environ
int main(int argc, char *argv[])
{
  int i=0;
  while (environ[i])                  //while environ[i] is true
  {
      printf("%s\n",environ[i]);      //print values of environ structure
      i++;                            //updating value of i for next Environmental Value
  }
  return 0;
}
