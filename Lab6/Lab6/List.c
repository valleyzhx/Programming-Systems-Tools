//
//  List.c
//  Lab6
//
//  Created by Xiang on 2017/11/8.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "List.h"


Node *createNode(){
    Node *node = malloc(sizeof(Node));
    return node;
}

List *createList(){
    List *list = malloc(sizeof(List));
    //list->head = createNode(0);
    return list;
}


