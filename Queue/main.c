//
//  main.c
//  Queue
//
//  Created by fanaticheng on 2017/8/24.
//  Copyright © 2017年 fanc. All rights reserved.
//

#include <stdio.h>
#include "queue.h"

int main(int argc, const char * argv[]) {
    SqQueue Q;
    InitQueue(& Q);
    printf("front:%d,rear:%d\n", Q.front, Q.rear);
    printf("Empty:%d\n",QueueEmpty(Q));
    EnQueue(& Q, 1);
    printf("front:%d,rear:%d\n", Q.front, Q.rear);
    printf("Empty:%d\n",QueueEmpty(Q));
    EnQueue(& Q, 2);
    EnQueue(& Q, 3);
    EnQueue(& Q, 4);
    printf("front:%d,rear:%d\n", Q.front, Q.rear);
    printf("Empty:%d\n",QueueEmpty(Q));
    printf("ElemNumber:%d\n",ElemNumber(Q));
    int e;
    DeQueue(& Q, & e);
    printf("DeNumber:%d\n",e);
    printf("ElemNumber:%d\n",ElemNumber(Q));
    printf("front:%d,rear:%d\n", Q.front, Q.rear);
    EnQueue(& Q, 5);
    printf("ElemNumber:%d\n",ElemNumber(Q));
    printf("front:%d,rear:%d\n", Q.front, Q.rear);
    return 0;
}
