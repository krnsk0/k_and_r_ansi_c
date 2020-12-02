#include <stdio.h>
#include <string.h>

void f_one(void);
void f_two(void);
void call_func(void (*fn)());

void f_one()
{
  printf("in func one\n");
}

void f_two()
{
  printf("in func two\n");
}

void call_func(void (*fn)())
{
  fn();
}

int main(int argc, char *argv[])
{
  if (strcmp("one", argv[1]) == 0)
  {
    call_func(f_one);
  }
  if (strcmp("two", argv[1]) == 0)
  {
    call_func(f_two);
  }
  return 0;
}
