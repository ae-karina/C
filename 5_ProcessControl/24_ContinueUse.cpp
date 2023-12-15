#include <stdio.h>

int main(void)
{
  int i;
  char ch;

  scanf("%d", &i);
  printf("i = %d\n", i);

  while ((ch = getchar()) != '\n')
    continue;
  int j;
  scanf("%d", &j);
  printf("j = %d\n", j);

  return 0;
}

/*
当抽出来的字符不是回车时为 括号内为真，把这个字符消耗掉，并比较下一个
试了一下空语句好像也行
试了一下空语句好像也行
我们的两行while程序就是一个消耗垃圾信息的程序
我的理解是那个ch已经是把所有键盘输入字符通过getchar给吃下了
当比较到真正的回车时候，while内为假，跳出while循环
本例中continue后面没有语句，continue可以去掉的
 */