#include <stdio.h>

#define IN 0
#define OUT 0

int main()
{
  int state = OUT;
  int prevchar = 'a';
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
      if (!(prevchar == ' ' || prevchar == '\n' || prevchar == '\t'))
      {
        putchar('\n');
      };
    }
    else
    {
      state = IN;
      putchar(c);
    };

    prevchar = c;
  };

  return 0;
}
