//
//  InitList.c
//  List
//
//  Created by fanaticheng on 2017/8/21.
//  Copyright © 2017年 fanaticheng. All rights reserved.
//

#include "InitList.h"

int InitList(SeqList *L){
    L->data = (ElemType*)malloc(sizeof(ElemType)*InitSize);
    if(!L->data) return -1;
    L->length = 0;
    L->MaxSize = 50;
    return 1;
}

int ListInsert(SeqList *L, int i, ElemType e){
    if(i < 1 || i > L->length+1) return -1;
    if(L->length > L->MaxSize) return -1;
    for(int j = L->length ; j >= i ; j--)
        L->data[j] = L->data[j-1];
    L->data[i-1] = e;
    L->length++;
    return 1;
}

int ListDelete(SeqList *L, int i, ElemType *e){
    if(i < 1 || i > L->length+1) return -1;
    *e = L->data[i-1];
    for(int j = i; j < L->length; j++)
        L->data[j-1] = L->data[j];
    L->length--;
    return 1;
}

int LocateElem(SeqList L, ElemType e){
    int i;
    for(i = 0; i < L.length; i++){
        if(L.data[i] == e)
            return i+1;
    }
    return -1;
}
