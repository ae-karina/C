#include <stdio.h>
// 判断一个数是否是素数，只需要判断val与2~val-1是否能被整除
bool IsPrime(int val)
{
  int i;

  for (i = 2; i < val; ++i)
  {
    if (val % i == 0)
      break;
  }
  if (i == val)
    return true;
  else
    return false;
}

int main(void)
{
  int m;

  scanf("%d", &m);
  if (IsPrime(m))
    printf("Yes!\n");
  else
    printf("No!\n");

  return 0;
}

/* 首先进入for循环，如果是素数，
判断val%i是否为0。余数为0，
则if后表达式为真，执行break，
然后终止循环，转为判断i是否
等于val，若等于写说明val只能
被1和它本身除尽，为素数；余数不为0

这里就说的很清楚了，++i到9了，
i<val(9)不成立，for循环终止，执行下面if语句

假设val是5，i＝2，2＜val（5）成立，
执行下面的if val对i取余＝5对2取余＝1不成立，
不执行break，转去++i，这样循环，等到i＝5，
直接跳到i＝＝val，i是5 val也是5成立

判断和处理一般分两块去设定
*/