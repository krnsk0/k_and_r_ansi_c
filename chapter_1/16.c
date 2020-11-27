#include <stdio.h>

// count whitespaces, digit frequency in stdin
int main()
{
  int c, i, whitespace, others;
  whitespace = others = 0;
  int ndigit[10];

  for (i = 0; i < 10; i += 1)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c >= '0' & c <= '9')
    {
      ndigit[c - '0'] += 1;
    }
    else if (c == ' ' || c == '\n' || c == '\t')
      whitespace += 1;
    else
      others += 1;
  };

  printf("digits =");
  for (i = 0; i < 10; i += 1)
    printf(" %d", ndigit[i]);

  printf(", whitespace  %d, other = %d\n", whitespace, others);

  return 0;
};
