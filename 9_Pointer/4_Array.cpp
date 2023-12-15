#include <stdio.h>

int main(void)
{
  int a[5]; // a是数组名  5是数组元素的个数 元素就是变量  a[0]  -- a[4]
  //	int a[3][4]; //3行4列 a[0][0]是第一个元素 a[i][j]第i+1行j+1列
  int b[5];

  // a = b;//error a是常量，不能赋值给常量
  printf("%#X\n", &a[0]);
  printf("%#X\n", a);

  return 0;
}
/*
  在Vc++6.0中的输出结果是:
--------------
0X12FF6C
0X12FF6C
Press any key to continue
--------------
  总结：
    一维数组名
          一维数组名是个指针常量
          它存放的是一维数组第一个元素的地址

*/

/*

  *指针和下标的关系

 */

int main(void)
{
  int a[5] = {1, 2, 3, 4, 5};
  int i;

  for (i = 0; i < 5; ++i)
    printf("%d\n", a[i]); // a[i] == *(a+i)

  return 0;
}

/*
 *2
 */

void f(int *p)
{
  *p = 10; // i = 10;
}

int main(void)
{
  int i = 5;

  f(&i);
  printf("i = %d\n", i);

  return 0;
}
