#include <stdio.h>

int main(void)
{
  int i, j;

  scanf("%d %d", &i, &j);

  if (i > j)
    printf("i大于j\n");
  else // 否则
    printf("i小于j\n");
  return 0;
}

int main(void)
{
  if (1 > 2)
    printf("AAAA\n");
  else
    printf("BBBB\n");

  printf("CCCC\n");

  return 0;
}