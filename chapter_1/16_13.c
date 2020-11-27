#include <stdio.h>

// count whitespaces, digit frequency in stdin
int main()
{
  int c, i;
  int ndigit[10];

  for (i = 0; i < 10; i += 1)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if (c >= '0' & c <= '9')
    {
      ndigit[c - '0'] += 1;
    }
  };

  for (i = 0; i < 10; i += 1)
  {
    int j, n;
    n = ndigit[i];
    printf("%d: ", i);
    for (j = 0; j < n; j += 1)
    {
      printf("#");
    };
    printf("\n");
  };

  return 0;
};
