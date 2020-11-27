#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  int c, lines, words, chars, state;
  state = OUT;
  lines = words = chars = 0;

  while ((c = getchar()) != EOF)
  {
    chars += 1;
    if (c == '\n')
      lines += 1;
    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if (state == OUT)
    {
      state = IN;
      words += 1;
    };
  };
  printf("lines: %d, words: %d, chars: %d\n", lines, words, chars);
  return 0;
};
