/*
  基本类型指针
 */

#include <stdio.h>

int main(void)
{
  int *p; // p是变量的名字, int * 表示p变量存放的是int类型变量的地址
  int i = 3;

  p = &i; // OK
  // p = i; //error，因为类型不一致，p只能存放int类型变量的地址，不能存放int类型变量的值
  // p = 55; //error 原因同上

  return 0;
}

int main(void)
{
  int *p; // p是变量的名字, int * 表示p变量存放的是int类型变量的地址
          // int * p; 不表示定义了一个名字叫做*p的变量
  // int * p; 应该这样理解: p是变量名, p变量的数据类型是 int *类型
  //          所谓int * 类型 实际就是存放int变量地址的类型
  int i = 3;
  int j;

  p = &i;
  /*
    1. p保存了i的地址, 因此p指向i
    2. p不是i，i也不是p，更准确的说： 修改p的值不影响i的值，修改i的值也不会影响p的值
    3. 如果一个指针变量指向了某个普通变量, 则
        *指针变量  就完全等同于  普通变量
       例子:
        如果p是个指针变量，并且p存放了普通变量i的地址
        则p指向了普通变量i
        *p 	就完全等同于  i
        或者说:  在所有出现*p的地方都可以替换成i
             在所有出现i的地方都可以替换成*p

            *p 就是以p的内容为地址的变量
  */
  j = *p; // 等价于 j = i;
  printf("i = %d, j = %d\n", i, j);

  return 0;
}

/*
  指针和指针变量的关系

  指针就是地址，地址就是指针
  地址就是内存单元的编号
  指针变量是存放地址的变量
  指针和指针变量是两个不同的概念
  但是要注意： 通常我们叙述时会把指针变量简称为指针，实际它们含义并不一样
  指针只能进行相减操作
 */

int main(void)
{
  int *p; // 等价于 int *p; 也等价于 int* p;
  int i = 5;
  char ch = 'A';

  p = &i; // *p 以p的内容为地址的变量
  *p = 99;
  printf("i = %d, *p = %d\n", i, *p);

  // p = &ch; //error
  // p = ch; //error
  // p = 5;  //error

  return 0;
}

/*
 *实参和形参是否是同一个变量  不是
 */
void f(int i)
{
  i = 99;
}

int main(void)
{
  int i = 6;
  printf("i = %d\n", i);
  f(i);
  printf("i = %d\n", i);
  return 0;
}

/*
 *指针使函数返回一个以上的值
 */
int f(int i, int j)
{
  return 100;
  //	return 88;
}

void g(int *p, int *q)
{
  *p = 1;
  *q = 2;
}

int main(void)
{
  int a = 3, b = 5;
  g(&a, &b);
  printf("%d %d\n", a, b);
  return 0;
}