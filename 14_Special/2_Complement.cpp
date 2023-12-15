#include <stdio.h>

/* int main(void)
{
  //	int i = -100;
  //	printf("%#X\n", i);

  int j = 0xFFFFFFCA;
  printf("%d\n", j);
  return 0;
} */
// 1001010

/*
 *2
 */

// 补几个关键看容器大小
int main(void)
{
  //	int i = -5;
  //	printf("%#X\n", i);

  //	int j = 0xFFFFFFF5;
  //	printf("%d\n", j);

  char ch = 0x80;
  //	printf("%d\n", ch);

  ch = 129; // 1000 0000
  printf("%d\n", ch);

  return 0;
}

/*
空链表：只有头节点，头节点指针域为空

非空链表：头节点指针域不为空
 */