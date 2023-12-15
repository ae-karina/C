#include <stdio.h>

void f(void); // 函数声明， 分号不能丢掉，函数定义在函数调用之后，则要在前面声明函数

int main(void) // 函数调用
{
  f();

  return 0;
}

void f(void) // 函数定义
{
  printf("哈哈!\n");
}

/*
  一定要明白该程序为什么是错误的
  一定要明白该程序第9行生效之后程序为什么就正确了
*/

// void f(void);  //9行

void g(void)
{
  f(); // 因为函数f的定义放在了调用f语句的后面，所有语法出错
}

void f(void)
{
  printf("哈哈!\n");
}

int main(void)
{
  g();

  return 0;
}

//   一定要明白该程序为什么是错误的

void f(int); // 函数声明， 分号不能丢掉

int main(void)
{
  f();

  return 0;
}

void f(void)
{
  printf("哈哈!\n");
}
