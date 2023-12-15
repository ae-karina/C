#include <stdio.h>

int main(void)
{
  int i = 10;
  int *p = &i;   // p只能存放int类型变量的地址
  int **q = &p;  // q是int **类型， 所谓int **类型就是指q只能存放int *类型变量的地址，
  int ***r = &q; // r是int ***类型, 所谓int ***类型就是指r只能存放int ** 类型变量的地址,

  // r = &p;  //error 因为r是int *** 类型，r只能存放int **类型变量的地址
  printf("i = %d\n", ***r); // 输出结果是10  只有 ***r才表示的是i, *r或 **r或 ****r代表的都不是i

  return 0;
}

/*
 *2
 */
void f(int **q)
{
  //*q就是p
}

void g()
{
  int i = 10;
  int *p = &i; // 类型

  f(&p); // p是int *类型 , &p是int ** 类型
}

int main(void)
{
  g();
  return 0;
}
