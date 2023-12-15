/*
  一定要明白该程序为什么是错的，
  也要明白把9到12行代码放在14行后面，为什么程序就OK了
*/

#include <stdio.h>

void g() // 9
{
  printf("k = %d\n", k); // k在后面报错
} // 12

int k = 1000; // 14行

void f(void)
{
  g();
  printf("k = %d\n", k);
}

int main(void)
{
  f();
  return 0;
}