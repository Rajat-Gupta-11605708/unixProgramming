#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char *pathvar;

   if (-1 == putenv("PATH=/:/home/userid")) {
      printf("putenv failed \n");
      return EXIT_FAILURE;
   }
   /* getting and printing the current environment path     */

   pathvar = getenv("PATH");
   printf("The current path is: %s\n", pathvar);
   return 0;
}
