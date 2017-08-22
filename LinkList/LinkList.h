//
//  LinkList.h
//  LinkList
//
//  Created by fanaticheng on 2017/8/22.
//  Copyright © 2017年 fanc. All rights reserved.
//

#ifndef LinkList_h
#define LinkList_h
#define MaxSize 100
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode * next;
}LNode, *LinkList;

LinkList CreateList1 (LinkList L);//头插法，逆向建立单向链表，每次在头结点之后插入元素
LinkList CreateList2 (LinkList L);//尾插法，从表头到表尾正向建立，每次在表尾插入元素
LinkList GetElem(LinkList L, int i);//取出第i个位置的节点指针
LinkList LocateElem(LinkList L, ElemType e);//返回第一个为e的结点的指针
LinkList InsertElem(LinkList L, ElemType e, int i);//在第i的位置插入e元素
LinkList DeleteElem(LinkList L, int i);//将i位置的元素删除
void DeleteNode(LinkList p);//删除已知结点p，时间复杂度O(1)

/*双链表结点*/
typedef struct DNode{
    ElemType data;
    struct DNode *prior ,*next;
}DNode, *DLinkList;

/*静态链表结点结构*/
typedef struct{
    ElemType data;
    int next;  //下一个元素的下标
}SLinkList[MaxSize];
#endif /* LinkList_h */
