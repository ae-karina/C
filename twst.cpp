/* #include <stdio.h>
#include <string.h>
int main()
{

  char b1[8] = "abcdefg";

  char b2[8];

  char *pb = b1 + 3;

  printf("pb:%c\n", *pb);
  while (--pb >= b1)

  {
    printf("pb1:%c\n", *pb);
    printf("b1:%d\n", b1);
    strcpy(b2, pb);
    printf("b2:%c\n", *b2);
  }
  printf("%d\n", strlen(b2));
  return 0;
}
 */
#include <stdio.h>
// int main()
// {
/*  int a;
 scanf("%d", &a);
 if (a++ < 9)
   printf("%d\n", a);
 else
   printf("%d\n", a--);

 return 0; */

/* char b[3][10];
int i;
for (i = 0; i < 2; i++)
  scanf("%s", b[i]);
gets(b[2]);
printf("%s%s%s\n", b[0], b[1], b[2]); */

/* char *s = "12134211";
int v1 = 0, v2 = 0, v3 = 0, v4 = 0, k;
for (k = 0; s[k]; k++)
{
  printf("%d\n", s[k]);
  switch (s[k])
  {
  default:
    v4++;
  case '1':
    v1++;
  case '3':
    v3++;
  case '2':
    v2++;
  }
}

printf("v1=%d,v2=%d,v3=%d,v4=%d\n", v1, v2, v3, v4); */

/*  char *s = "12134211";
 int v[4] = {0, 0, 0, 0}, k, i;
 for (k = 0; s[k]; k++)
 {
   switch (s[k])
   {
   case '1':
     i = 0;
   case '2':
     i = 1;
   case '3':
     i = 2;
   case '4':
     i = 3;
   }
   v[i]++;
 }
 for (k = 0; k < 4; k++)
   printf("%d  ", v[k]); */

/* int x = 0, y = 5, z = 3;
while (z-- > 0 && ++x < 5)
  y = y - 1;
printf("%d,%d,%d\n", x, y, z); */

/* int i, n = 0;
for (i = 2; i < 5; i++)
{
  do
  {
    if (i % 3)
      continue;
    n++;
  } while (!i);
  n++;
}
printf("n=%d\n", n); */

/* int change(int *data)
{
  return (*data)++;
}
int main()
{
  int data = 123;
  change(&data);
  printf("%d,", data);
  data = change(&data);
  printf("%d,", data);
  printf("\n"); */
/* int k = 5;
void f(int *s)
{
  s = &k;
  *s = k;
}
main()
{
  int m = 3;
  f(&m);
  printf("%d,%d\n", m, k); */

/* #define N 4
int fun(int a[][N])
{
  int i, y = 0;
  for (i = 0; i < N; i++)
    y += a[0][i] + a[N - 1][i];
  for (i = 1; i < N - 1; i++)
    y += a[i][0] + a[i][N - 1];
  return y;
}
main()
{
  int y, x[N][N] = {{1, 2, 3, 4},
                    {2, 1, 4, 3},
                    {3, 4, 1, 2},
                    {4, 3, 2, 1}};
  y = fun(x);
  printf("%d", y);
  return 0;
}
 */

/* #include <stdio.h>
#include <stdlib.h>

// 定义链表节点的结构体
struct ListNode
{
  int val;
  struct ListNode *next;
};

// 反转链表的区间 [m, n]，返回新链表的头节点
struct ListNode *reverseBetween(struct ListNode *head, int m, int n)
{
  if (head == NULL || m == n)
  {
    return head; // 如果链表为空或m等于n，直接返回原链表
  }

  // 创建一个虚拟头节点，方便处理m为1的情况
  struct ListNode *dummy = (struct ListNode *)malloc(sizeof(struct ListNode));
  dummy->next = head;
  head = dummy;

  // 找到反转区间的前一个节点
  for (int i = 0; i < m - 1; i++)
  {
    head = head->next;
  }

  // 反转区间 [m, n]
  struct ListNode *prev = head->next;
  struct ListNode *curr = prev->next;

  for (int i = 0; i < n - m; i++)
  {
    prev->next = curr->next;
    curr->next = head->next;
    head->next = curr;
    curr = prev->next;
  }

  // 如果m为1，需要更新虚拟头节点的next
  if (m == 1)
  {
    dummy->next = head->next;
  }

  // 释放虚拟头节点
  free(dummy);

  return m == 1 ? dummy->next : head;
}

// 打印链表
void printList(struct ListNode *head)
{
  while (head != NULL)
  {
    printf("%d -> ", head->val);
    head = head->next;
  }
  printf("NULL\n");
}

int main()
{
  // 创建示例链表 1->2->3->4->5->NULL
  struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
  head->val = 1;
  head->next = (struct ListNode *)malloc(sizeof(struct ListNode));
  head->next->val = 2;
  head->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
  head->next->next->val = 3;
  head->next->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
  head->next->next->next->val = 4;
  head->next->next->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
  head->next->next->next->next->val = 5;
  head->next->next->next->next->next = NULL;

  int m = 2, n = 4; // 反转区间 [m, n]

  printf("Original List: ");
  printList(head);

  head = reverseBetween(head, m, n);

  printf("Reversed List: ");
  printList(head);

  return 0;
}
 */

/* #include <stdio.h>
#include <stdbool.h>

bool canPartition(int nums[], int n)
{
  int total_sum = 0;
  for (int i = 0; i < n; i++)
  {
    total_sum += nums[i];
  }

  // 如果总和是奇数，不可能平分
  if (total_sum % 2 != 0)
  {
    return false;
  }

  int target = total_sum / 2;

  // 创建一个二维数组 dp，dp[i][j] 表示前 i 个元素是否可以组成和为 j
  bool dp[n + 1][target + 1];

  // 初始化边界条件
  for (int i = 0; i <= n; i++)
  {
    dp[i][0] = true;
  }

  // 填充 dp 数组
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= target; j++)
    {
      // 如果当前数字 nums[i-1] 大于 j，无法选取当前数字
      if (nums[i - 1] > j)
      {
        dp[i][j] = dp[i - 1][j];
      }
      else
      {
        // 选取当前数字或不选取当前数字，两者取或
        dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
      }
    }
  }

  return dp[n][target];
}

int main()
{
  int nums[] = {1, 5, 11, 5};
  int n = sizeof(nums) / sizeof(nums[0]);
  bool result = canPartition(nums, n);

  if (result)
  {
    printf("true\n");
  }
  else
  {
    printf("false\n");
  }

  return 0;
}
 */
/* #include <stdio.h>
#include <stdbool.h>

bool canPartition(int nums[], int n)
{
  int total_sum = 0;
  for (int i = 0; i < n; i++)
  {
    total_sum += nums[i];
  }

  if (total_sum % 2 != 0)
  {
    return false;
  }

  int target = total_sum / 2;

  // 创建一个一维数组 dp，dp[j] 表示是否可以组成和为 j
  bool dp[target + 1];

  // 初始化 dp 数组
  for (int j = 0; j <= target; j++)
  {
    dp[j] = false;
  }

  dp[0] = true; // 初始条件

  for (int i = 0; i < n; i++)
  {
    for (int j = target; j >= nums[i]; j--)
    {
      dp[j] = dp[j] || dp[j - nums[i]];
    }
  }

  return dp[target];
}

int main()
{
  int nums[] = {1, 5, 11, 5};
  int n = sizeof(nums) / sizeof(nums[0]);
  bool result = canPartition(nums, n);

  if (result)
  {
    printf("true\n");
  }
  else
  {
    printf("false\n");
  }

  return 0;
}
 */

#include <stdbool.h>

bool canPartition(int *nums, int numsLen)
{
  int sum = 0;

  // 计算数组的总和
  for (int i = 0; i < numsLen; i++)
  {
    sum += nums[i];
  }

  // 如果总和是奇数，不可能分成两个和相等的子集
  if (sum % 2 != 0)
  {
    return false;
  }

  int target = sum / 2;

  bool dp[numsLen + 1][target + 1];

  for (int i = 0; i <= numsLen; i++)
  {
    for (int j = 0; j <= target; j++)
    {
      dp[i][j] = false;
    }
  }

  dp[0][0] = true;

  for (int i = 1; i <= numsLen; i++)
  {
    for (int j = 0; j <= target; j++)
    {
      if (j >= nums[i - 1])
      {
        dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
      }
      else
      {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }

  return dp[numsLen][target];
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isComment(char c, char *commentSymbols, int commentSymbolsSize)
{
  for (int i = 0; i < commentSymbolsSize; i++)
  {
    if (c == commentSymbols[i])
    {
      return true;
    }
  }
  return false;
}

char *stripCommentsAndSpaces(char *text, char *commentSymbols, int commentSymbolsSize)
{
  int len = strlen(text);
  char *result = (char *)malloc(len + 1);
  int resultIndex = 0;
  bool inComment = false;

  for (int i = 0; i < len; i++)
  {
    if (!inComment)
    {
      if (i < len - 1 && text[i] == '/' && isComment(text[i + 1], commentSymbols, commentSymbolsSize))
      {
        inComment = true;
        i++;
      }
      else
      {
        result[resultIndex++] = text[i];
      }
    }
    else
    {
      if (text[i] == '\n')
      {
        inComment = false;
        result[resultIndex++] = '\n';
      }
    }
  }

  result[resultIndex] = '\0';
  return result;
}

int main()
{
  char text[] = "apples, pears # and bananas\ngrapes\nbananas !apples";
  char commentSymbols[] = "#!";
  int commentSymbolsSize = strlen(commentSymbols);

  char *result = stripCommentsAndSpaces(text, commentSymbols, commentSymbolsSize);
  printf("%s\n", result);
  free(result);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int **transpose(int **matrix, int matrixRowSize, int *matrixColSize, int *returnRowSize, int **returnColsize)
{
  if (matrixRowSize == 0)
  {
    *returnRowSize = 0;
    *returnColsize = NULL;
    return NULL;
  }

  int numRows = *matrixColSize;
  int numCols = matrixRowSize;

  // 分配转置后的矩阵空间
  int **result = (int **)malloc(numRows * sizeof(int *));
  for (int i = 0; i < numRows; i++)
  {
    result[i] = (int *)malloc(numCols * sizeof(int));
  }

  // 进行矩阵转置
  for (int i = 0; i < numRows; i++)
  {
    for (int j = 0; j < numCols; j++)
    {
      result[i][j] = matrix[j][i];
    }
  }

  *returnRowSize = numRows;
  *returnColsize = (int *)malloc(numRows * sizeof(int));
  for (int i = 0; i < numRows; i++)
  {
    (*returnColsize)[i] = numCols;
  }

  return result;
}

int main()
{
  int numRows = 2;
  int numCols = 3;
  int **matrix = (int **)malloc(numCols * sizeof(int *));
  for (int i = 0; i < numCols; i++)
  {
    matrix[i] = (int *)malloc(numRows * sizeof(int));
  }

  int value = 1;
  for (int i = 0; i < numCols; i++)
  {
    for (int j = 0; j < numRows; j++)
    {
      matrix[i][j] = value++;
    }
  }

  int returnRowSize;
  int *returnColsize;

  int **result = transpose(matrix, numCols, &numRows, &returnRowSize, &returnColsize);

  for (int i = 0; i < returnRowSize; i++)
  {
    for (int j = 0; j < returnColsize[i]; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}

#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int keys[n];
  int doors[n];
  int max_key = 0;

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &keys[i]);
    doors[i] = 0;
  }

  for (int i = 0; i < n; i++)
  {
    if (keys[i] > max_key)
    {
      max_key = keys[i];
    }
    doors[keys[i] - 1] = max_key;
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d ", doors[i]);
  }

  return 0;
}

#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int nums[n];
  int doors[n];
  int ans[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &nums[i]);
    doors[i] = 0;
    ans[i] = -1;
  }
  int p = 0;
  for (int i = 0; i < n; i++)
  {
    doors[nums[i] - 1] = 1;
    while (p < n && doors[p] == 1)
    {
      ans[p] = i + 1;
      p += 1;
    }
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d", ans[i]);
    if (i != n - 1)
    {
      printf(" ");
    }
  }
  return 0;
}

#include <stdio.h>

int main()
{
  long long n, m;
  scanf("%lld %lld", &n, &m);
  long long seq[10005] = {0}; // 序列数组

  // 执行修改操作
  for (long long i = 0; i < n; i++)
  {
    long long l, r, x;
    scanf("%lld %lld %lld", &l, &r, &x);
    seq[l] ^= x;
    if (r + 1 < 10005)
    {
      seq[r + 1] ^= x;
    }
  }

  // 计算前缀异或和
  for (long long i = 1; i < 10005; i++)
  {
    seq[i] ^= seq[i - 1];
  }

  // 执行查询操作
  for (long long i = 0; i < m; i++)
  {
    long long p;
    scanf("%lld", &p);
    printf("%lld\n", seq[p]);
  }

  return 0;
}

#include <stdio.h>

int main()
{
  long long n, m;
  scanf("%lld %lld", &n, &m);
  long long seq[10005] = {0}; // 序列数组

  // 执行修改操作
  for (long long i = 0; i < n; i++)
  {
    long long l, r, x;
    scanf("%lld %lld %lld", &l, &r, &x);
    seq[l] ^= x;
    if (r + 1 < 10005)
    {
      seq[r + 1] ^= x;
    }
  }

  // 计算前缀异或和
  for (long long i = 1; i < 10005; i++)
  {
    seq[i] ^= seq[i - 1];
  }

  // 执行查询操作
  for (long long i = 0; i < m; i++)
  {
    long long p;
    scanf("%lld", &p);
    printf("%lld\n", seq[p]);
  }

  return 0;
}
