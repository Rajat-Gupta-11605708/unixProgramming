#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>

void help();

int main(int argc, char *argv[])
{
  int a,b;
  int opt;
  if(argc == 1)         // if no arguments given
  {
    fprintf(stderr, "This Program needs Arguments......\n\n");
    help();
  }

  while ((opt = getopt(argc, argv, "hs:d:")) != -1 )      //updating value of opt and setting our command format h for help s for sum and d for difference
  {
    switch(opt)
    {
      case 's':                                           // sum
        printf("a = %s\n",optarg);                        // value of argument
        printf("b = %s\n",argv[optind]);                  // argv[optind] represents remaining arguments
        a = atoi(optarg);                                 // conversion from string to int
        b = atoi(argv[optind]);
        printf("%d + %d = %d\n", a, b, a+b);
      break;

      case 'd':                                          // difference
        printf("a = %s\n",optarg);                       // value of argument
        printf("b = %s\n",argv[optind]);                 // argv[optind] represents remaining arguments
        a = atoi(optarg                                 // conversion from string to int
        b = atoi(argv[optind]);
        printf("%d - %d = %d\n", a, b, a-b);
      break;

      case 'h':                                         //help
        help();
      break;

      case '?':                                         // if arguments given which are not defined while initializing opt
        printf("\nNo Such Arguments\n\n");
      break;

      case ':':                                         // if value to argument is not given if defined in opt
        printf("Enter Arguments...\n");
      break;

    }
  }

  return 0;
}

void help()                                             //help function
{
  printf("\t\t\t------------ Sum and Difference Program ------------\n\n");
  printf("\t\t\tUsage    \n\t\t\tFor Sum :  ./3 -s Number1 Number2\n\t\t\tFor Difference :  ./3 -d Number1 Number2\n");
}
