#include <stdio.h>

// 第一种方式
/* struct Student
{
  int age;
  float score;
  char sex;
};

int main(void)
{
  struct Student st = {80, 66.6F, 'F'}; // 初始化  定义的同时赋初值
  struct Student *pst = &st;            //&st不能改成st

  pst->age = 88;    // 第二种方式
  st.score = 66.6f; // 第一种方式  66.6在C语言中默认是double类型，如果希望一个实数是float类型，则必须在末尾加f或F, 因此66.6是double, 66.6f或66.6F是float
  printf("%d %f\n", st.age, pst->score);

  return 0;
} */
/*
 * 1
 */
struct Student
{
  int age;
  char sex;
  char name[100];
}; // 分号不能省

int main(void)
{
  struct Student st = {20, 'F', "小娟"};
  struct Student *pst = &st;

  printf("%d %c %s\n", st.age, st.sex, st.name);
  printf("%d %c %s\n", pst->age, pst->sex, pst->name); // pst->age 转化成 (*pst).age 等价于 st.age

  return 0;
}

// 这就相当于字符数组，名字代表地址，所以不能直接赋值
// 结构体整体的大小需为最大成员里的整数倍，所以应该是4的倍数