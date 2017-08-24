//
//  queue.h
//  Queue
//
//  Created by fanaticheng on 2017/8/24.
//  Copyright © 2017年 fanc. All rights reserved.
//

#ifndef queue_h
#define queue_h
#include <stdio.h>
#include <stdlib.h>
#define MaxSize 5
typedef int ElemType;

/*循环队列*/
/*空队列:front = rear
  满队列:(rear + 1) % MaxSize = front
        rear = 4 front =0 5的位置为空的储存单元，这个时候队列满 */
typedef struct{
    ElemType data[MaxSize];
    int front, rear;
}SqQueue;

void InitQueue(SqQueue * Q);
int QueueEmpty(SqQueue Q);
int EnQueue(SqQueue * Q, ElemType e);
int DeQueue(SqQueue * Q, ElemType * e);
int GetHead(SqQueue * Q, ElemType * e);
int ElemNumber(SqQueue Q);

/******************************
 链式队列：适合于数据元素变动比较大的情形，而且不会存在队列满产生溢出的问题
 带头结点的链式队列比较简单，插入和删除比较简单
 初始，front rear指向头结点
*******************************/

typedef struct LinkNode{
    ElemType data;
    struct LinkNode * next;
}LinkNode;
typedef struct{
    LinkNode * front, * rear;
}LinkQueue;

void InitListQueue(LinkQueue * Q);
int ListQueueEmpty(LinkQueue Q);
int EnListQueue(LinkQueue * Q, ElemType e);
int DeListQueue(LinkQueue * Q, ElemType * e);
#endif /* queue_h */
