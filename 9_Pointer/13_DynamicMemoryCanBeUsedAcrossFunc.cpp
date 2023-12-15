#include <stdio.h>
#include <malloc.h>

void f(int **q)
{
  *q = (int *)malloc(sizeof(int)); // sizeof(数据类型) 返回值是该数据类型所占的字节数
                                   // 等价于 p = (int *)malloc(sizeof(int));
  // q = 5; //error  q存放的的是&p
  //*q = 5; //p = 5;  p只能存放int类型的地址，5不是地址
  **q = 5; //*p = 5;
}

int main(void)
{
  int *p;

  f(&p);
  printf("%d\n", *p);

  return 0;
}

/*
动态内存不释放的应用，会导致程序很强大
main()
{
  f()  //造空间

  g()  //对该空间操作

  m()  //对结果输出
}


 */