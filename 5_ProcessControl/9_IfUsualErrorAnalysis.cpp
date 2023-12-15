#include <stdio.h>

/*
  空语句问题
 */
int main(void)
{
  // 5到7行整体式2个语句
  if (1 > 2)
    ; // 5行
  printf("AAAA\n");
  printf("BBBB\n"); // 7 行

  return 0;
}

int main(void)
{
  if (3 > 2) // 4行  如果这里加分号，则会导致程序编译到6行时就会出错
    printf("哈哈!\n");
  else // 6行
    printf("嘿嘿!\n");

  return 0;
}

/*
  执行范围问题
 */
int main(void)
{
  if (3 > 2)
    printf("AAAA\n");
  else if (3 > 1)
    printf("BBBB\n");
  else
    printf("CCCC\n");

  return 0;
}
/*
  在Vc++6.0中的输出结果是:
---------------
AAAA
---------------
  总结:
if (表达式1)
  A;
else if (表达式2)
  B;
else if (表达式3)
  C;
else
  D;

即便表达式1和2都成立，也只会执行A语句

*/

/*
  else 后面不能有语句，有语句必须加上if
 */

int main(void)
{
  float score; // score分数

  printf("请输入您的考试成绩: ");
  scanf("%f", &score);

  if (score > 100)
    printf("这是做梦!\n");
  else if (score >= 90 && score <= 100) // 不能写成 90<=score<=100
    printf("优秀!\n");
  else if (score >= 80 && score < 90)
    printf("良好!\n");
  else if (score >= 60 && score < 80)
    printf("及格!\n");
  else if (score >= 0 && score < 60) // if不能省，否则会出错
    printf("不及格! 继续努力!\n");

  return 0;
}
/*
总结
if (表达式1)
  A;
else if (表达式2)
  B;
else if (表达式3)
  C;
else (表达式4)  //7行
  D;

这样写是不对的，正确的写法是：
  要么去掉7行的(表达式4)
  要么在7行的else 后面加if

*/

int main(void)
{
  if (1 > 2)
    printf("AAAA\n");
  else if (1 > 5)
    printf("BBBB\n");
  else
    (5 > 10); // 无实际意义的语句
  printf("CCCC\n");

  /*
    else (5 > 10);  //无实际意义的语句
      printf("CCCC\n");

    等价于
    else
      (5 > 10);  //无实际意义的语句
    printf("CCCC\n");
  */

  return 0;
}
/*
  总结:
if (表达式1)
  A;
else if (表达式2)
  B;
else if (表达式3)
  C;
else (表达式4);
  D;

这样写语法不会出错，但逻辑上是错误的

else (表达式4);
  D;
等价于
else
  (表达式4);
D;

*/
