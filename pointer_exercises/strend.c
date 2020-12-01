#include <stdio.h>

// does s end with t?
int strend(char *s, char *t)
{
  int i, j, k;
  i = j = 0;

  // find length of t, which is i
  while (t[i++] != '\0')
    ;

  // find length of s, which is j
  while (s[j++] != '\0')
    ;

  for (k = 0; k < i; k += 1)
  {
    char sc = *(s + (j - i + k));
    char st = *(t + k);

    if (sc != st)
      return 0;
  }
  return 1;
}

int main()
{
  char s[] = "abcdefghijklmnopqrstuvwxyz";
  char t[] = "xyz";

  printf("return val: %d\n", strend(s, t));

  return 0;
}
