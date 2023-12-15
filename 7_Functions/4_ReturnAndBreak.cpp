#include <stdio.h>

void f(void)
{
  int i;

  for (i = 0; i < 5; ++i)
  {
    printf("大家辛苦了!\n");
    return;
  }
  printf("同志们好!\n");
}

int main(void)
{
  f();

  return 0;
}
/*
 return 终止函数，向调用函数的地方赋值
 */