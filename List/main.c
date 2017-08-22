//
//  main.c
//  List
//
//  Created by fanaticheng on 2017/8/21.
//  Copyright © 2017年 fanaticheng. All rights reserved.
//

#include <stdio.h>
#include "InitList.h"

int main(int argc, const char * argv[]) {
    SeqList L;
    InitList(&L);
    ListInsert(&L, 1, 1);
    ListInsert(&L, 2, 4);
    ListInsert(&L, 3, 7);
    ListInsert(&L, 2, 5);
    int e = -1;
    ListDelete(&L, 2, &e);
    printf("e = %d\n", e);
    for(int i = 0 ; i <= L.length-1 ; i++)
        printf("%d:%d\n",i+1,L.data[i]);
    printf("length:%d\n",L.length);
    int Locate;
    Locate = LocateElem(L, 7);
    printf("locate:%d\n",Locate);
    return 0;
}
