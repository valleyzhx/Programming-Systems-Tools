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

Node * front(List * list){
    return list->head;
}
Node * insert(List * list, int index, int value){
    Node *node = createNode(value);
    Node *current = list->head;

    if (index == 0) {
        node->next = current;
        list->head = node;
    }else{
        int i = 1;
        while (current->next) {
            if (i == index) {
                break;//current is previous
            }
            current = current->next;
            i++;
        }
        node->next = current->next;
        current->next = node;
    }

    return node;
}

int removeAtIndex(List * list, int index){
    Node *current = list->head;

    if (index == 0) {
        list->head = current->next;
        free(current);
        current = NULL;
    }
    
    
    
    
    int i = 1;
    while (current->next) {
        if (i == index) {
            break;//current is previous
        }
        current = current->next;
        i++;
    }
    
    
    
    
    return 1;
}



