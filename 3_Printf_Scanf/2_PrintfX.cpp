/*
  2023年09点21分
  目的:
      测试%x %X %#x %#X的用法
 */

#include <stdio.h>

int main(void)
{

  int x = 47; // 100是十进制

  printf("%x\n", x);  // 输出结果是：2f
  printf("%X\n", x);  // 输出结果是：2F
  printf("%#X\n", x); // 输出结果是：0X2F  %#X推荐使用
  printf("%#x\n", x); // 输出结果是：0x2F
  return 0;
}

/*
  在Vc++6.0中的输出结果是:
------------------------
2f
2F
0X2F
0x2f
------------------------
  总结:


*/

/* #include <stdio.h>

int main(void)
{
  int i = 33;

  printf("i = %#X\n", i);

  return 0;
}
 */