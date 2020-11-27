#include <stdio.h>
#define MAXLINE 1000

int linelen(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len;               // curr line len
  int max;               // max line len
  char line[MAXLINE];    // current input line
  char longest[MAXLINE]; // save longest line

  max = 0;
  while ((len = linelen(line, MAXLINE)) > 0)
    if (len > max)
    {
      max = len;
      copy(longest, line);
    };
  if (max > 0)
    printf("%s", longest);

  return 0;
}

int linelen(char s[], int maxline)
{
  int c, i;

  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i += 1)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    i += 1;
  }
  s[i] = '\0';
  return i;
}
void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    i += 1;
}
