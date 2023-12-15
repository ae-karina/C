#include <stdio.h>
// f函数可以输出任何一个一维数组的内容
void f(int *pArr, int len)
{
  int i;

  for (i = 0; i < len; i++)
    printf("%d ", *(pArr + i)); //*pArr *(pArr+1) *(pArr+2)
  printf("\n");
}

int main(void)
{
  int a[5] = {1, 2, 3, 4, 5};
  int b[6] = {-1, -2, -3, 4, 5, -6};
  int c[100] = {1, 99, 22, 33};

  f(a, 5); // a 是int *
  f(b, 6);
  f(c, 100);

  return 0;
}

/*
 * 一定要明白 10行的pArr[3] 和17行 19行的a[3] 是同一个变量
 */

void f(int *pArr, int len)
{
  pArr[3] = 88; // 10行
}

int main(void)
{
  int a[6] = {1, 2, 3, 4, 5, 6};

  printf("%d\n", a[3]); // 17行
  f(a, 6);
  printf("%d\n", a[3]); //  19行

  return 0;
}
/*
  在Vc++6.0中的输出结果是:
---------------------------
4
88
Press any key to continue
---------------------------
*/

/*
 *3
 */

void f(int *pArr, int len)
{
  int i;
  for (i = 0; i < len; ++i)
    printf("%d  ", pArr[i]); //*(pArr+i) 等价于 pArr[i]  也等价于 b[i] 也等价于 *(b+i)

  printf("\n");
}

int main(void)
{
  int b[6] = {-1, -2, -3, 4, 5, -6};

  f(b, 6);

  b[i]

      return 0;
}