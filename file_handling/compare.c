#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINEMAX 500

int main(int argc, char *argv[])
{
  FILE *fp1;
  FILE *fp2;

  char buf1[LINEMAX];
  char buf2[LINEMAX];
  int lines_compared = 0;

  // exit early if not enough args
  if (argc != 3)
  {
    fprintf(stderr, "compare: not enough arguments\n");
    exit(1);
  }

  // attempt to open first file
  if ((fp1 = fopen(argv[1], "r")) == NULL)
  {
    fprintf(stderr, "compare: cannot open %s\n", argv[1]);
    exit(1);
  }

  // attempt to open second file
  if ((fp2 = fopen(argv[2], "r")) == NULL)
  {
    fprintf(stderr, "compare: cannot open %s\n", argv[2]);
    exit(1);
  }

  // if we got here, both files are open
  char *r1, *r2;
  while ((r1 = fgets(buf1, LINEMAX, fp1)) && (r2 = fgets(buf2, LINEMAX, fp2)))
  {
    lines_compared += 1;

    if (strcmp(buf1, buf2) != 0)
    {
      printf("difference found on line %d\n", lines_compared);
      printf("%s: %s", argv[1], buf1);
      printf("%s: %s", argv[2], buf2);
      break;
    }
  }

  // if one file longer than other
  if (!r2)
  {
    printf("%s has extra lines starting on line %d:\n", argv[1], lines_compared);
    printf("%s", buf2);
  }
  if (!r1)
  {
    printf("%s has extra lines starting on line %d:\n", argv[2], lines_compared);
    printf("%s", buf1);
  }

  printf("done\n");
  fclose(fp1), fclose(fp2);
  exit(0);
}
