//
//  queue.c
//  Queue
//
//  Created by fanaticheng on 2017/8/24.
//  Copyright © 2017年 fanc. All rights reserved.
//

#include "queue.h"

void InitQueue(SqQueue * Q){
    Q->front = Q->rear = 0;
}

int QueueEmpty(SqQueue Q){
    if(Q.front == Q.rear) return 1;
    return 0;
}

int EnQueue(SqQueue * Q, ElemType e){
    if((Q->rear + 1) % MaxSize == Q->front){
        printf("queue is full!");
        return 0;}//队列满，牺牲一个存储单元
    Q->data[Q->rear] = e;
    Q->rear = (Q->rear+1) % MaxSize;
    return 1;
}

int DeQueue(SqQueue * Q, ElemType * e){
    if(QueueEmpty(* Q)) return 0;
    * e = Q->data[Q->front];
    Q->front = (Q->front + 1) % MaxSize;
    return 1;
}

int ElemNumber(SqQueue Q){
    return ((Q.rear + MaxSize - Q.front) % MaxSize);
}

/************/
void InitListQueue(LinkQueue * Q){
    Q->front = Q->rear = (LinkNode *)malloc(sizeof(LinkNode));
    Q->front->next = NULL;
}

int ListQueueEmpty(LinkQueue Q){
    if(Q.front == Q.rear) return 1;
    return 0;
}

int EnListQueue(LinkQueue * Q, ElemType e){
    LinkNode * p = (LinkNode *)malloc(sizeof(LinkNode));
    p->data = e;
    p->next = NULL;
    Q->rear->next = p;
    Q->rear = p;
    return 1;
}

int DeListQueue(LinkQueue * Q, ElemType * e){
    if(Q->front == Q->rear) return 0;
    LinkNode * p = Q->front->next;
    * e = p->data;
    Q->front->next = p->next;
    if(p == Q->rear) Q->front = Q->rear;//如果队列中只有一个节点，那么变为空
    free(p);
    return 1;
}



