#include <stdio.h>

int i = 99;

void f(int i)
{
  printf("i = %d\n", i);
}

int main(void)
{
  f(8);

  return 0;
}

// 形参定义i，里面不能再定义一样的，会冲突  形参名字可写可不写
// 调用时分配，调用完释放