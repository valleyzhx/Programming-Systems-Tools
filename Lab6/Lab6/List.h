//
//  List.h
//  Lab6
//
//  Created by Xiang on 2017/11/8.
//  Copyright © 2017年 xianng. All rights reserved.
//

#ifndef List_h
#define List_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int number;
    struct Node *last;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
}List;


Node *createNode(int num);
List *createList();
Node * front(List * list);
int nodesCount(List *list);
Node * last(List *list);
Node * insert(List * list, int index, int value);
int removeAtIndex(List * list, int index);

void printList(List *list);

int searchForward(List *list, int value);
int searchBackward(List *list, int value);

#endif /* List_h */
