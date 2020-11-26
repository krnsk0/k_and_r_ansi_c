#include <stdio.h>

// count lines in input
int main()
{
  long lines = 0;
  long tabs = 0;
  long spaces = 0;
  int c;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
      lines += 1;
    if (c == '\t')
      tabs += 1;
    if (c == ' ')
      spaces += 1;
  };
  printf("lines: %ld\n", lines);
  printf("tabs: %ld\n", tabs);
  printf("spaces: %ld\n", spaces);
}
