#include <stdio.h>

int main(void)
{
  int i; // 填充字，发现变量里面是垃圾值，会自动放填充值

  printf("i = %f\n", i); // int %d  char %c  flaot %f double %lf  long int %ld

  return 0;
}