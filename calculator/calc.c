#include <stdio.h>
#include <stdlib.h>

#define MAXOP 1000
#define NUMBER '0'

int getop(char[]);
void push(double);
double pop(void);

// reverse polish notation calculator
int main()
{
  int type;
  double op2;
  char s[MAXOP];

  while ((type = getop(s)) != EOF)
  {
    switch (type)
    {
    case NUMBER:
      push(atof(s));
      break;
    case '+':
      break;
    case '*':
      break;
    case '-':
      break;
    case '/':
      break;
    }
  }
}
