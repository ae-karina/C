#include <stdio.h>
#include <malloc.h>

struct Student
{
  int age;
  float score;
  char name[100];
};

int main(void)
{
  int len;
  struct Student *pArr;
  int i, j;
  struct Student t;

  // 动态的构造一维数组
  printf("请输入学生的个数:\n");
  printf("len = ");
  scanf("%d", &len);
  pArr = (struct Student *)malloc(len * sizeof(struct Student));

  // 输入
  for (i = 0; i < len; ++i)
  {
    printf("请输入第%d个学生的信息:\n", i + 1);
    printf("age = ");
    scanf("%d", &pArr[i].age);

    printf("name = ");
    scanf("%s", pArr[i].name); // name是数组名，本身就已经是数组首元素的地址, 所以pArr[i].name 不能改成 &pArr[i].name

    printf("score = ");
    scanf("%f", &pArr[i].score);
  }

  // 按学生成绩升序排序 冒泡算法
  for (i = 0; i < len - 1; ++i)
  {
    for (j = 0; j < len - 1 - i; ++j)
    {
      if (pArr[j].score > pArr[j + 1].score) //>升序 <降序
      {
        t = pArr[j];
        pArr[j] = pArr[j + 1];
        pArr[j + 1] = t;
      }
    }
  }

  printf("\n\n学生的信息是:\n");
  // 输出
  for (i = 0; i < len; ++i)
  {
    printf("第%d个学生的信息是:\n", i + 1);
    printf("age = %d\n", pArr[i].age);
    printf("name = %s\n", pArr[i].name);
    printf("score = %f\n", pArr[i].score);

    printf("\n");
  }

  return 0;
}

/*
char name[100],是表示这个字符串有100和字节长度
数据类型:pArr结构体指针变量,  pArr[i]结构体变量,
pArr[i].age结构体变量的整型元素,  pArr[i].name结构体变量的字符数组元素



malloc创建了一个结构体数组，pArr指向这个数组的首地址，相当于数组名


用scanf函数输入字符串格式：scanf（“%s”,字符数组名）；
用printf函数输出字符串格式：printf（“%s”,字符数组名）；
所以pArr[0].age就符合 “结构体变量名.成员名” 的规定, 而这是一个结构体里的整型变量，所以输入时需要&符号
 （输出执行过程：按字符数组名找到其数组起始地址，然后逐个输出其中字符，直到遇到'\0'为止）


name不用＋&是因为前面设置了name【100】，此时】name是一个指针变量，name存放了第一个元素的地址

 */