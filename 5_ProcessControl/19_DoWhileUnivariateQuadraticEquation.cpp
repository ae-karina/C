#include <stdio.h>
#include <math.h>

int main(void)
{
  double a, b, c;
  double delta;
  double x1, x2;
  char ch;

  do
  {
    printf("请输入一元二次方程的三个系数:\n");
    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("c = ");
    scanf("%lf", &c);
    if (delta > 0)
    {
      x1 = (-b + sqrt(delta)) / (2 * a);
      x2 = (-b - sqrt(delta)) / (2 * a);
      printf("有两个解，x1 = %lf, x2 = %lf\n", x1, x2);
    }
    else if (0 == delta)
    {
      x1 = x2 = (-b) / (2 * a);
      printf("有唯一解，x1 = x2 = %lf\n", x1, x2);
    }
    else
    {
      printf("无实数解!\n");
    }

    printf("您想继续么(Y/N): ");
    scanf(" %c", &ch); //%c前面必须得加一个空格 原因略
  } while ('y' == ch || 'Y' == ch);

  return 0;
}

/*
  scanf运行时，我们输入完字符串后按的回车键也会被存放在缓冲区
  为了 "%c"读取换行符，我们就需要空格来屏蔽掉空白字符
 */