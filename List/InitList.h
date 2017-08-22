//
//  InitList.h
//  List
//
//  Created by fanaticheng on 2017/8/21.
//  Copyright © 2017年 fanaticheng. All rights reserved.
//

#ifndef InitList_h
#define InitList_h
#include <stdio.h>
#define InitSize 100
typedef int ElemType;

typedef struct{
    ElemType * data;
    int MaxSize , length;
}SeqList;

typedef struct LNode{
    ElemType data;
    struct LNode * next;
}LNode, *LinkList;


int InitList(SeqList *L); //顺序表初始化
int ListInsert(SeqList *L, int i, ElemType e);
int ListDelete(SeqList *L, int i, ElemType *e);
int LocateElem(SeqList L, ElemType e);//查找顺序表中第一个等于e的元素的位置
#endif /* InitList_h */
