/*
  求1-100之间的奇数之和
 */

#include <stdio.h>

int main(void)
{
  int i;
  int sum = 0;

  for (i = 1; i < 101; ++i)
  {
    if (i % 2 == 1)
      sum += i; // sum = sum + i;
  }
  printf("sum = %d\n", sum);

  return 0;
}

/*
  求1-100之间的奇数个数
 */

int main(void)
{
  int i;
  int cnt = 0; // 个数一般用cnt表示

  for (i = 1; i < 101; ++i)
  {
    if (i % 2 == 1)
      ++cnt;
  }
  printf("cnt = %d\n", cnt);

  return 0;
}

/*
  求1-100之间的奇数的平均值
 */
int main(void)
{
  int i;
  int sum = 0;
  int cnt = 0;
  float avg; // average 的缩写

  for (i = 1; i < 101; ++i)
  {
    if (i % 2 == 1)
    {
      sum += i;
      ++cnt;
    }
  }
  avg = 1.0 * sum / cnt; // 1.0默认是double类型

  printf("sum = %d\n", sum);
  printf("cnt = %d\n", cnt);
  printf("avg = %f\n", avg);

  return 0;
}

/*
  求1到100之间的奇数之和， 再求1到100之间的偶数之和
 */

int main(void)
{
  int i;
  int sum1 = 0; // 奇数和
  int sum2 = 0; // 偶数和

  for (i = 1; i < 101; ++i)
  {
    if (i % 2 == 1)
    {
      sum1 += i;
    }
    else
    {
      sum2 += i;
    }
  }
  printf("奇数和 = %d\n", sum1);
  printf("偶数和 = %d\n", sum2);

  return 0;
}
