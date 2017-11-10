//
//  Stack.c
//  Lab6
//
//  Created by Xiang on 2017/11/10.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "Stack.h"
Stack *creatStack(){
    Stack *stack = malloc(sizeof(Stack));
    return stack;
}

void push(Stack * stack, int value){
    List *list = stack->list;
    int count = nodesCount(list);
    insert(list, count, value);
}


int pop(Stack * stack){
    List *list = stack->list;
    Node *current = last(list);
    int count = nodesCount(list);
    int value = current->number;
    removeAtIndex(list, count-1);
    return value;
}


Queue *creatQueue(){
    Queue *queue = malloc(sizeof(Queue));
    return queue;
}
void enqueue(Queue * queue, int value){
    List *list = queue->list;
    int count = nodesCount(list);
    insert(list, count, value);
}
int dequeue(Queue * queue){
    List *list = queue->list;
    int value = front(list)->number;
    removeAtIndex(list, 0);
    return value;
}


