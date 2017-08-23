//
//  stack.c
//  Stack
//
//  Created by fanaticheng on 2017/8/23.
//  Copyright © 2017年 fanc. All rights reserved.
//

#include "stack.h"

void InitStack(SqStack * S){
    S->top = -1;
}//栈满的时候，top+1 == MaxSize

int StackEmpty(SqStack S){
    if(S.top == -1) return 1;
    else return 0;
}

int Push(SqStack * S, Elemtype e){
    if(S->top == MaxSize-1) return 0;
    S->data[++S->top] = e;
    return 1;
}

int Pop(SqStack * S, Elemtype *e){
    if(S->top == -1) return 0;
    *e = S->data[S->top--];
    return 1;
}

int GetTop(SqStack S, Elemtype *e){
    if(S.top == -1) return -1;
    *e = S.data[S.top];
    return 1;
}
