#include <stdio.h>

int main(void)
{
  int i;
  char ch;

  scanf("%d", &i);
  printf("i = %d\n", i);
  scanf("%c", &ch);
  printf("ch = %c\n", ch);

  return 0;
}

int main(void)
{
  int i, j;

  scanf("%d %d", &i, &j);
  printf("i = %d, j = %d\n", i, j);

  return 0;
}

int main(void)
{
  int i, j;

  printf("请输入i的值(中间以空格分隔): ");
  scanf("%d %d", &i, &j);
  printf("i = %d, j = %d\n", i, j);

  return 0;
}

// 一个数除以另一个数，要是比另一个数小的话，商为0，余数就是它自己。
但精度不同 可以取值的范围double要比float大
    所占内存位数也不同
        随便啦 一般的精度 float够用了 不过大部分情况都声明为double
            主要是因为常小数值 系统识别为double 这样在计算时 免去类型转化