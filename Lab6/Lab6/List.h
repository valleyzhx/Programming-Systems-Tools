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
    struct Node *next;
} Node;

typedef struct {
    Node *head;
}List;


Node *createNode(int num);
List *createList();


#endif /* List_h */