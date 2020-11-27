#include <stdio.h>

// count lines in input
int main()
{
  long line_count = 0;
  int c;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
      line_count += 1;
  };
  printf("line count: %ld\n", line_count);
}
