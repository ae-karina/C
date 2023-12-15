#include <stdio.h>

int main(void)
{
  int *p; // 垃圾值
  int i = 5;

  *p = i; // 把5分配到不知道的一个单元会报错  越过系统 不报错 修改不属于自己空间的里面的值  病毒的特征
  printf("%d\n", *p);

  return 0;
}

// 多个指针指向同一个空间只需要释放一次

int main(void)
{
  int i = 5;
  int *p;
  int *q;

  p = &i;
  //*q = p; //error 语法编译会出错
  //*q = *p;  //error
  p = q;              // q是垃圾值，q赋给p, p也变成垃圾值
  printf("%d\n", *q); // 13行
  /*
    q的空间是属于本程序的，所以本程序可以读写q的内容，
    但是如果q内部是垃圾值，则本程序不能读写*q的内容
    因为此时*q所代表的内存单元（不知道的）的控制权限并没有分配给本程序
    所以本程序运行到13行时就会立即出错
  */
  return 0;
}

/*
 *1
 */

void OutArr(int *pArr, int len)
{
  // pArr[2] = 10; //pArr[2] == *(pArr+2) == *(a+2) == a[2]
  int i;

  for (i = 0; i < len; ++i)
    printf("%d\n", pArr[i]);
}

int main(void)
{
  int a[5] = {1, 2, 3, 4, 5};

  //	printf("%d\n", a[2]);
  OutArr(a, 5);
  //	printf("%d\n", a[2]);
  //	a = &a[2]; //error  因为a是常量

  //	printf("%#X, %#X\n", a, &a[0]);
  //	a ==  &a[0]

  return 0;
}