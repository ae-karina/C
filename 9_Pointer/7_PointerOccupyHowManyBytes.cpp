#include <stdio.h>

int main(void)
{
  char ch = 'A';
  int i = 99;
  double x = 66.6;
  char *p = &ch;
  int *q = &i;
  double *r = &x;

  printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(r));

  return 0;
}

/*
首字节编 号当作X编号
一个字节算一个单元，一个字节算一个编号
表示X编号：首编号当作整体变量X的编号
都指向第一个地址，为什么*q指向的变量大小不一样
看变量类型决定，

pqr都只存放了它所指向变量的第一个地址
怎么知道所指向的变量占几个字节
由pqr本身的数据类型决定
double r➡1111，从1111开始连找8个当作double类型变量
int r➡1111，从1111开始连找4个当作int类型变量

一个变量的地址只用第一个字节表示
虽然指向第一个字节的的地址，本身指针变量的类型就可以确定出指向的变量占几个字节

* 假设是32位
为什么输出结果是4，意味着第一个字节地址要用四个字节去表示
为什么只存放一个字节地址，却占4个字节
因为地址是32位的数据，一个字节只能保存8位数据，所以需要4个字节来存放。

 一个字节等于8个二进制位      所以32位等于4个字节     64位是8个字节
一个字节是一个单元，32位机最多有2的32个次方个单元，也就是32个二进制，也就是4个字节，64位机同理


有32根地址线，说明地址有32位数字，一个字节存储8位，4个字节存储一个地址


每个编号都需要32根线来表示

而32根线输出时最大是11111（省略）最小是00000（省略）
不管是输出最大还是最小，这32根线都是要输出的
每根线输出一次占1bit

一个字节=8bit（换算问题，刚开始讲过）
所以说不管是输出最大的地址还是最小的地址，这32根线都是会输出的（0或者1）
也就是4（字节）x8（bit）=32
32bit换算成字节是4

 */