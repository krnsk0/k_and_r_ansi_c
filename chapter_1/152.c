#include <stdio.h>

// count chars in input
int main()
{
  long count = 0;
  int c;
  while ((c = getchar()) != EOF)
  {
    count += 1;
  };
  printf("Character count: %ld\n", count);
};
