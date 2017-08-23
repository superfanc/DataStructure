//
//  main.c
//  Stack
//
//  Created by fanaticheng on 2017/8/23.
//  Copyright © 2017年 fanc. All rights reserved.
//

#include <stdio.h>
#include "stack.h"
int main(int argc, const char * argv[]) {
    SqStack S;
    InitStack(&S);
    printf("empty:%d\n", StackEmpty(S));
    Push(&S, 1);
    Push(&S, 2);
    Push(&S, 3);
    printf("1 Stack has %d elems\n", S.top+1);
    int e;
    Pop(&S, &e);
    printf("Pop : %d\n" ,e);
    printf("2 Stack has %d elems\n", S.top+1);
    GetTop(S, &e);
    printf("top Elem is : %d\n", e);
}
