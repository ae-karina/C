#include <stdio.h>
#include <stdio.h>

// 第一种方式   一般只用这种
struct Student
{
  int age;
  float score;
  char sex;
};

// 第二种方式   这种只能定义一次 不推荐
struct Student2
{
  int age;
  float score;
  char sex;
} st2;

// 第三种方式   没有名字，这样就不知道变量是哪种类型
struct
{
  int age;
  float score;
  char sex;
} st3;

int main(void)
{
  struct Student st = {80, 66.6, 'F'};

  return 0;
}