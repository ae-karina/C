#include <stdio.h>

int main(void)
{
  int sum = 0;
  int i;

  for (i = 1; i < 101; ++i)
  {
    sum = sum + i;
  }
  printf("sum = %d\n", sum);

  return 0;
}

int main(void)
{
  int i, j;

  for (i = 0; i < 3; ++i)
    for (j = 2; j < 5; ++j)
      printf("哈哈!\n");
  printf("嘻嘻!\n");

  return 0;
}
/*
  在Vc++6.0中的输出结果是:
----------------------
哈哈!
哈哈!
哈哈!
哈哈!
哈哈!
哈哈!
哈哈!
哈哈!
哈哈!
嘻嘻!
Press any key to continue
----------------------
*/

int main(void)
{
  int i, j;

  for (i = 0; i < 3; ++i)
    printf("嘿嘿!\n");
  for (j = 2; j < 5; ++j)
    printf("哈哈!\n");
  printf("嘻嘻!\n");

  return 0;
}
/*
  在Vc++6.0中的输出结果是:
----------------------
嘿嘿!
嘿嘿!
嘿嘿!
哈哈!
哈哈!
哈哈!
嘻嘻!
----------------------
*/

int main(void)
{
  int i, j;

  for (i = 0; i < 3; ++i)
  {
    printf("111!\n");
    for (j = 2; j < 5; ++j)
    {
      printf("222!\n");
      printf("333!\n");
    }
    printf("444!\n");
  }

  return 0;
}
/*
  在Vc++6.0中的输出结果是:
----------------------
111!
222!
333!
222!
333!
222!
333!
444!
111!
222!
333!
222!
333!
222!
333!
444!
111!
222!
333!
222!
333!
222!
333!
444!
----------------------
*/