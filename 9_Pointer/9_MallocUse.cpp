/*
知道第一个地址
怎么知道这个地址指向的变量占几个字节，前面加一个强制类型转换，告诉指向的第一个字节的地址是什么类型的地址
 */

/*
  malloc 是 memory(内存) allocate(分配)的缩写
*/
#include <stdio.h>
#include <malloc.h> //不能省

int main(void)
{
  int i = 5;                 // 分配了4个字节 静态分配   11 行
  int *p = (int *)malloc(4); // 12行
  /*
    1. 要使用malloc函数，必须添加malloc.h这个头文件
    2. malloc函数只有一个形参，并且形参是整型
    3. 4表示请求系统为本程序分配4个字节
    4. malloc函数只能返回第一个字节的地址
    5. 12行分配了8个字节, p变量占4个字节， p所指向的内存也占4个字节
    6. p本身所占的内存是静态分配的， p所指向的内存是动态分配的
  */

  *p = 5;  //*p 代表的就是一个int变量， 只不过*p这个整型变量的内存分配方式和11行的i变量的分配方式不同
  free(p); // freep(p)表示把p所指向的内存给释放掉  p本身的内存是静态的，不能由程序员手动释放，p本身的内存只能在p变量所在的函数运行终止时由系统自动释放
  printf("同志们好！\n");

  return 0;
}
/*
 *2
 */

void f(int *q)
{
  //*p = 200; //error
  // q = 200;
  //**q = 200;  //error  不是指针变量不能随便加*号
  *q = 200;
  // free(q);  //把q所指向的内存释放掉  本语句必须的注释掉，否则会导致第20行的代码出错
}

int main(void)
{
  int *p = (int *)malloc(sizeof(int)); // sizeof(int)返回值是int所占的字节数
  *p = 10;

  printf("%d\n", *p); // 10
  f(p);               // p是int *类型
  printf("%d\n", *p); // 200    第20行

  return 0;
}

/*

扩充前免得会继续留着

缩小，后面的会丢失

reallo(pArr,100)
        50
 */

/*
 * 3
 */

int main(void)
{
  //	int k;
  int *p = (int *)malloc(4);
  /*
    malloc函数的返回值是void *
    void * 也叫干地址  所谓干地址就是无实际意义的地址
  */

  free(p); // 把p指向的内存释放

  return 0;
}

// 动态分配是堆存储
// 怎么确保执行B，把B的地址传给下一个函数并保存
// 分配存储空间 进栈   执行完毕  出栈