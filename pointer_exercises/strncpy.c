#include <stdio.h>

// copy at most n chars of t to s
void strncopy(char *s, char *t, int n)
{
  int se = 0; // s end
  int te = 0; // t end
  int i = 0;  // write cursor into s

  // find ends of each string
  while (*(s + se) != '\0')
    se++;
  while (*(t + te) != '\0')
    te++;

  // copy into s
  while (i < te && i < n)
  {
    *(s + se + i) = *(t + i);
    i++;
  }
}

int main()
{
  char s[100] = "abcdefghijklm";
  char t[] = "nopqrstuvwxyz";

  strncopy(s, t, 5);

  printf("s: %s\n", s);

  return 0;
}
