//
//  LinkList.c
//  LinkList
//
//  Created by fanaticheng on 2017/8/22.
//  Copyright © 2017年 fanc. All rights reserved.
//

#include "LinkList.h"
LinkList CreateList1 (LinkList L){
    LinkList s;//链表元素指针
    int x;
    L = (LinkList)malloc(sizeof(LNode));  //不需要预先分配连续的内存空间
    L->next = NULL;
    scanf("%d", &x);
    while (x != 9999){
        s = (LinkList)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

LinkList CreateList2 (LinkList L){//多了一个尾节点的指针
    LinkList s;//链表元素节点指针
    LinkList r;//尾节点指针
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    r = L;//尾节点先指向头结点
    scanf("%d", &x);
    while (x != 9999){
        s = (LinkList)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;//别忘记最后一个指的是空指针，这样方便遍历
    return L;
}

LinkList GetElem(LinkList L, int i){
    int j = 1;
    LinkList p = L->next;//指向j=1对应的结点
    if(i < 1) return NULL;
    if(i == 0) return L;//在第一个位置插入元素就是在头结点后面插入
    while(p && j<i){
        p = p->next;
        j++;
    }
    return p;
}

LinkList LocateElem(LinkList L, ElemType e){
    LinkList p = L->next;
    while(p && p->data != e){
        p = p->next;
    }
    return p;
    
}

LinkList InsertElem(LinkList L, ElemType e, int i){
    if(i < 1) return NULL;
    LinkList s;
    s = (LinkList)malloc(sizeof(LNode));
    s->data = e;
    LinkList p = GetElem(L, i-1);
    s->next = p->next;
    p->next = s;
    return L;
}

LinkList DeleteElem(LinkList L, int i){
    if(i < 1) return NULL;
    LinkList p = GetElem(L, i-1);
    LinkList q = GetElem(L, i);
    p->next = q->next;
    free(q);
    return L;
}

void DeleteNode(LinkList p){  //p为已知结点，要求时间复杂度为1，因此减少查找
    LinkList q = p->next;
    p->data = q->data;
    p->next = q->next;
    free(q);
}/*相当于删除后继节点，进行值的拷贝，这个思想需要注意*/
