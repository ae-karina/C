#include <stdio.h>

struct Student // 定义的是数据类型 不是变量
{
  int age;
  float score;
  char sex;
};

int main(void)
{
  struct Student st = {80, 66.6, 'F'};
  /*	int age;
    float score;
    char sex;
    int age2;
    float score2;
    char sex2;
  */
  return 0;
}