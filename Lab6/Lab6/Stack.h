//
//  Stack.h
//  Lab6
//
//  Created by Xiang on 2017/11/10.
//  Copyright © 2017年 xianng. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>
#include "List.h"

typedef struct {
    List *list;
}Stack;

typedef struct {
    List *list;
}Queue;


Stack *creatStack();

void push(Stack * stack, int value);

int pop(Stack * stack);

Queue *creatQueue();
void enqueue(Queue * queue, int value);
int dequeue(Queue * queue);



#endif /* Stack_h */
