//
//  stack.h
//  Stack
//
//  Created by fanaticheng on 2017/8/23.
//  Copyright © 2017年 fanc. All rights reserved.
//

#ifndef stack_h
#define stack_h
#include <stdio.h>
#define MaxSize 100
typedef int Elemtype;

typedef struct{
    Elemtype data[MaxSize];
    int top;  //栈为空的时候top=-1,入栈的时候top+1，然后在入栈。元素个数top+1
}SqStack;

void InitStack(SqStack * S);
int StackEmpty(SqStack S);
int Push(SqStack * S, Elemtype e);
int Pop(SqStack * S, Elemtype *e);
int GetTop(SqStack S, Elemtype *e);

/*共享栈的结构*/
typedef struct{
    Elemtype data[MaxSize];
    int top0, top1;
}SharingStack;

/*链式栈的结构*/
typedef struct LinkStack{
    Elemtype data;
    struct LinkStack * next;
}LinkStack;

#endif /* stack_h */
