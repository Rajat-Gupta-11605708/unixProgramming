#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>

#define PACKAGE "cpycontent"
#define VERSION "1.0"

FILE *infile, *outfile;

void print_help(int extval);

int main(int argc, char *argv[])
{

  int opt;
  if(argc == 1)
  {
    fprintf(stderr, "This Program needs Arguments......\n\n");
    print_help(1);
  }

  while ((opt = getopt(argc, argv, "hvs:d:")) != -1 )
  {
    switch (opt)
    {

      case 'h':
        print_help(0);
      break;

      case 'v':
        printf("Package Name : %s\nVersion Name : %s\n", PACKAGE, VERSION);
      break;

      case 's':
        infile = fopen(optarg, "r");
        if(infile==NULL)
        {
          fprintf(stderr, "\nNo Such Source File Exist.\n");
        }
      break;

      case 'd':
        outfile = fopen(optarg, "w+");
        if (infile == NULL)
        {
          fprintf(stderr, "Please Enter Source File From Which Content to be Copied\n");
          print_help(1);
        }
        char c;
        while ((c = fgetc(infile)) != EOF)
        {
          fputc(c,outfile);
        }
        fclose(infile);
        fclose(outfile);
      break;

      case '?':
        fprintf(stderr, "%s: Error - No such option: `%c'\n\n", PACKAGE, optopt);
      break;

    }

  }

  for(; optind < argc; optind++)
   printf("argument: %s\n", argv[optind]);
  return 0;
}

void print_help (int extval)
{
  printf("\t\t\t-------------------- Custom Program To Copy Content of One File to Another --------------------\n\n\n");
  printf("\t\t\t\t\tUsage    : ./getopt -s Source_Filename -d Destination_Filename\n");
  printf("\t\t\t\t\t-h       :  Help Menu\n");
  printf("\t\t\t\t\t-v       :  Version\n");
  printf("\t\t\t\t\t-s FILE  :  Set Source File\n");
  printf("\t\t\t\t\t-d FILE  :  Set Destination File\n");
  exit(extval);
}
