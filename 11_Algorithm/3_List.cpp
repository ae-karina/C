#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct Node
{
  int data;           // 数据域
  struct Node *pNext; // 指针域
};

// 函数声明
struct Node *create_list(void);
void traverse_list(struct Node *);

int main(void)
{
  struct Node *pHead = NULL; // 等价于 struct Node * pHead = NULL;

  pHead = create_list(); // create_list()功能：创建一个非循环单链表，并将该链表的头结点的地址付给pHead
  traverse_list(pHead);

  return 0;
}

struct Node *create_list(void)
{
  int len; // 用来存放有效节点的个数
  int i;
  int val; // 用来临时存放用户输入的结点的值

  // 分配了一个不存放有效数据的头结点
  struct Node *pHead = (struct Node *)malloc(sizeof(struct Node));
  if (NULL == pHead)
  {
    printf("分配失败, 程序终止!\n");
    exit(-1);
  }
  struct Node *pTail = pHead;
  pTail->pNext = NULL;

  printf("请输入您需要生成的链表节点的个数: len = ");
  scanf("%d", &len);

  for (i = 0; i < len; ++i)
  {
    printf("请输入第%d个节点的值: ", i + 1);
    scanf("%d", &val);

    struct Node *pNew = (struct Node *)malloc(sizeof(struct Node));
    if (NULL == pNew)
    {
      printf("分配失败, 程序终止!\n");
      exit(-1); // 终止程序
    }
    pNew->data = val;
    pTail->pNext = pNew;
    pNew->pNext = NULL;
    pTail = pNew;
  }

  return pHead;
}

void traverse_list(struct Node *pHead)
{
  struct Node *p = pHead->pNext;

  while (NULL != p)
  {
    printf("%d  ", p->data);
    p = p->pNext;
  }
  printf("\n");

  return;
}
/*
第一行是原码，第二行是按位取反（此时是负数，即补码），
所以若我们用%d输出，按照人的思维就得先求绝对值再加个负号
（3，4行的操作，之前补码课程有讲），这样我们才能算出它的十进制。


这里被取反的是已经按位取反的i的二进制值，即取反i的取反

~i，先取反求出二进制1100，然后再取反+1转成十进制


最高位0，补0
最高位1，补1
最高位0/1，补0/1

以0为编号的存储单元  存放的是整个系统的中断向量表的首地址
 */