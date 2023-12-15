#include <stdio.h>

int mian(void)
{
  float x = 123.45e-2; // 默认double，后面会丢失精度
  // float x = 123.45e-2F; // 加F，当浮点数处理？
  printf("%f\n", x);
  return 0;
}