// 1
#include <stdio.h>

int main(void)
{
  int a = 4, b = 3, c = 5, t = 0;
  if (a < b)
  {
    t = a;
    a = b;
    b = t;
  }

  if (a < c)
  {
    t = a;
    a = c;
    c = t;
  }
  printf("%d,  %d,  %d   %d\n", a, b, c, t);

  return 0;
}
// 2
int main()
{
  int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i = 0;

  for (i = 0; i < 9; i++)
    printf("%d", a[i]);
  printf("%d", 20); /* 考虑如果把这两个printf语句用{}括起来输出结果会怎样 */

  return 0;
}
// 3
int main(void)
{
  int a = 1, b;

  for (b = 1; b <= 10; b++)
  {
    if (a >= 8)
      break; // printf("b = %d\n", b);
    if (1 == a % 2)
    {
      a += 5;
      continue; // 会跳到7行执行b++
    }
    a -= 3;
  }
  printf("b = %d\n", b);
}
// 4
int main(void)
{
  int i = 0, s = 0;

  do
  {
    if (i % 2)
    {
      i++;
      continue; // 会跳到11行去执行
    }
    i++;
    s += i;        // s = s + i;
  } while (i < 5); // 11行

  printf("%d\n", s);

  return 0;
}
// 5
int partion(int *a, int low, int high)
{
  int value = a[low];
  int t;

  while (low < high)
  {
    while (high > low && a[high] >= value) // 8行
      high--;                              // 会跳到8行的while去执行，而不是转到10行去执行if语句
    if (high != low)                       // 10行
    {
      t = a[low];
      a[low] = a[high];
      a[high] = t;
    }

    while (low < high && a[low] <= value)
      low++;

    if (low != high)
    {
      t = a[low];
      a[low] = a[high];
      a[high] = t;
    }
  }
  return low;
}
// 6
/*
  IBM <数据结构>上的介绍的比普通冒泡排序方法更快速的冒泡排序方法
*/

/*  该函数用的仍是冒泡排序,唯一不同的是我们加了个标志flag,一旦发现数组
元素没有相互交换,我们就可以提前推出循环,从而节省了时间!

*/
void sort(int *a, int n) /* 冒泡升序排序 */
{
  int i, flag = 1, j;
  int temp;

  i = 1;
  while (flag)
  {
    flag = 0;
    for (j = 0; j < n - i; ++j)
    {
      if (a[j] > a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        continue; // 会跳去执行++j
        a[j + 1] = temp;
        flag = 1;
        break; // 会跳出for循环，转去执行32行的break语句
      }
    }
    break; // 32 会跳出while循环
    ++i;
  }
}

main()
{
  clrscr();

  printf("The array is:\n");
  prin(a, 10);
  sort(a, 10);
  printf("The sorted array is:\n");
  prin(a, 10);

  getch();
  return 0;
}

/*
最后修改于07年正月初四晚上21:15 远通网吧!

*/

/*
  2007-5-21
  折半查找算法【递归法来实现】
*/

// 7
/*
  p指向数组首元素,n表示数足长度, val是待查找的元素,如果找到就返回该元素的下标,否则返回-1表
  示没有找到 嘿嘿!
*/
int Find(int *p, int low, int high, int val)
{
  int mid = (low + high) / 2;

  if (low == high) /* 不会存在low > high 的情况! */
  {
    if (p[mid] == val)
    {
      return mid;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    if (p[mid] < val)
    {
      Find(p, mid + 1, high, val);
    }
    else if (p[mid] > val)
    {
      Find(p, low, mid - 1, val);
    }
    else if (p[mid] == val) /* 最后这个else..if不要漏掉了,当然if (p[mid] == val)也可不写 */
    {
      return mid;
    }
  }

  printf("李四!\n");
}

void Traverse(int *p, int n)
{
  for (int i = 0; i < n; ++i)
    printf("%-5d", p[i]);

  printf("\n");
}

int main(void)
{
  int a[10] = {-10, 1, 23, 54, 55, 76, 88, 100, 200, 9897};

  puts("原始数组的内容是:");
  Traverse(a, 10);

  int k = Find(a, 0, 9, -1111);
  if (-1 == k)
    printf("没找到该元素!!!\n");
  else
    printf("该元素的具体位置是 %d \n", k);

  return 0;
}

/*
  首先要明白,
  折半查找的前提是数组中的元素已经排好序(无论升序降序都行)

*/

// break 安定switch

int main()
{
  int x = 1, y = 0, a = 0, b = 0;

  switch (x) // 第一个switch
  {
  case 1:
    switch (y) // 第二个switch
    {
    case 0:
      a++;
      break;
    case 1:
      b++;
      break;
    }
    break;
  case 2:
    a++;
    b++;
    break;
  }

  printf("%d %d\n", a, b); // 26行

  return 0;
}
