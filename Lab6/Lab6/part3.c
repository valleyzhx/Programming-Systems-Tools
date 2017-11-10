//
//  part3.c
//  Lab6
//
//  Created by Xiang on 2017/11/10.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"
#include <time.h>


int main(int argc, const char * argv[]) {

    srand((int)time(NULL));
    List *list = createList();
    Stack *stack = creatStack();
    stack->list = list;
    for (int i=0; i<5; i++) {
        int value = rand()%9+1;
        push(stack, value);
    }
    printf("init values:\n");
    printList(list);
    printf("convert values:\n");
    for (int i=0; i<5; i++) {
        int value = pop(stack);
        printf("%d ",value);
    }
    printf("\n");
    printf("\n===== Part3 B =====\n\n");

    Queue *queue = creatQueue();
    queue->list = list;
    for (int i=0; i<5; i++) {
        int value = rand()%9+1;
        enqueue(queue, value);
    }
    
    printf("init values:\n");
    printList(list);
    printf("Queue values:\n");
    for (int i=0; i<5; i++) {
        int value = dequeue(queue);
        printf("%d ",value);
    }
    printf("\n");

    
    free(list);
    free(stack);
    free(queue);
    list = NULL;
    stack = NULL;
    queue = NULL;
    

    return 0;
}
