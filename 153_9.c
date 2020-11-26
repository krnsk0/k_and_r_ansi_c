#include <stdio.h>

// eliminate all repeated spaces
int main()
{

  int last_char = 'a';
  int c;

  while ((c = getchar()) != EOF)
  {
    if (last_char == ' ' && c == ' ')
      continue;
    putchar(c);
    last_char = c;
  };

  return 0;
}
