#include <stdio.h>

int main(void)
{
  int i = 5;
  int j = 10;
  int *p = &i;
  int *q = &j;
  int a[5];
  p = &a[1];
  q = &a[4];
  printf("p和q所指向的单元相隔%d个单元\n", q - p);

  // p - q 没有实际意义
  // 指向同一块连续空间的不同存储单元才有意义，比如数组
  return 0;
}