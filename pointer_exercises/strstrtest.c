#include <stdio.h>
#include <string.h>

int main()
{
  char s1[] = "This is the first string";
  char s2[] = "first";

  char *ptr = strstr(s1, s2);

  printf("strste output: %p\n", ptr);
  printf("position: %ld\n", ptr - s1);

  return 0;
}
