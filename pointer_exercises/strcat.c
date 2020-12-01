#include <stdio.h>
// pg 121

void mystrcat(char *s, char *t)
{
  int i, j;
  i = j = 0;

  // find end of s
  while (*(s + i) != '\0')
    i++;

  // copy t to s
  while ((*(s + (i++)) = *(t + (j++))) != '\0')
    ;
}

int main()
{
  printf("starting\n");
  char s[100] = "stringone";
  char t[] = "stringtwo";

  mystrcat(s, t);

  printf("%s\n", s);

  return 0;
}
