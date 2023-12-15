#include <stdio.h>
#include <string.h>

int main()
{
  char str[201]; // 限制字符串长度为200，多1位用于存储字符串结尾的空字符
  scanf("%s", str);

  // 使用冒泡排序对字符串中的字符进行升序排序
  int len = strlen(str);
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - 1 - i; j++)
    {
      if (str[j] > str[j + 1])
      {
        char temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }
    }
  }

  printf("%s\n", str);
  return 0;
}
