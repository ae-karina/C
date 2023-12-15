/*
  2009年11月24日9:17:43
  示例:
    发送地址还是发送内容
  目的:
    指针的优点之一:
      快速的传递数据，
      耗用内存小
      执行速度快
*/

#include <stdio.h>
#include <string.h>

struct Student
{
  int age;
  char sex;
  char name[100];
}; // 分号不能省

void InputStudent(struct Student *);
void OutputStudent(struct Student *);
int main(void)
{
  struct Student st; // 15行
  // printf("%d\n", sizeof(st));

  InputStudent(&st);  // 对结构体变量输入  必须发送st的地址
  OutputStudent(&st); // 对结构体变量输出  可以发送st的地址也可以直接发送st的内容 但为了减少内存的耗费，也为了提高执行速度，推荐发送地址

  return 0;
}

void OutputStudent(struct Student *pst)
{
  printf("%d %c %s\n", pst->age, pst->sex, pst->name);
}

void InputStudent(struct Student *pstu) // pstu只占4个字节
{
  (*pstu).age = 10;
  strcpy(pstu->name, "张三");
  pstu->sex = 'F';
}

/*
i表示运行的次数；假如len=6，则需要对比5次
j表示数组中第j个数，a【j】和a【j+1】存储的数字进行对比
每运行一次排序，都让数组内的数字两两排序，大的放前面
 */