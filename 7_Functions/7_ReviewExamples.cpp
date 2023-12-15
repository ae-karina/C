#include <stdio.h>

int f(int i)
{
  return 10.8;
}

int main(void)
{
  float i = 99.9;

  printf("%f\n", i);
  i = f(5);
  printf("%f\n", i);

  return 0;
}
/*
  void表示没有返回值，int没有返回值的函数不能赋值给变量，会报错
 */