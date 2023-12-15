#include <stdio.h>

void huhuan_1(int, int); // 声明函数一般不写形参
void huhuan_2(int *, int *);
void huhuan_3(int *, int *);

int main(void)
{
  int a = 3; // 不能说互换a，b的地址，运行的时候，编译器自动分配地址空间，a，b的地址已经死了，互换地址意味着a的空间要换了，这是做不到的，没有任何一门语言可以做到，把一个静态变量的空间换一个位置
  int b = 5;

  huhuan_3(&a, &b); // huhuan_2(*p, *q); 是错误的, huhuan_2(a, b);也是错误的
  printf("a = %d, b = %d\n", a, b);

  return 0;
}

// 不能完成互换功能,改变的是形参的值，与原来函数的参数（实参）没有关系
void huhuan_1(int a, int b)
{
  int t;

  t = a;
  a = b;
  b = t;

  return;
}

// 不能完成互换功能，还是只改了p，q的值
void huhuan_2(int *p, int *q)
{
  int *t; // 如果要互换p和q的值，则t必须是int *,不能是int,否则会出错

  t = p;
  p = q;
  q = t;
}

// 可以完成互换功能
void huhuan_3(int *p, int *q)
{
  int t; // 如果要互换*p和*q的值, 则t必须定义成int,不能定义成int *, 否则语法出错

  t = *p; // p是int *,  *p是int
  *p = *q;
  *q = t;
}

#include <stdio.h>

void swap_3(int *p, int *q) // 形参名字是p和q，接收实参数据的是p和q，而不是*p和*q
{
  int t;
  t = *p;
  *p = *q;
  *q = t;
}

int main(void)
{
  int a = 3;
  int b = 5;

  swap_3(&a, &b);
  printf("a = %d, b = %d\n", a, b);

  return 0;
}

void swap_1(int i, int j)
{
  int t;

  t = i;
  i = j;
  j = t;
}

void swap_2(int *p, int *q) // 形参名字是p和q，接收实参数据的是p和q，而不是*p和*q
{
  int *t;
  t = p;
  p = q;
  q = t;
}