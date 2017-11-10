//
//  List.c
//  Lab6
//
//  Created by Xiang on 2017/11/8.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "List.h"


Node *createNode(int num){
    Node *node = malloc(sizeof(Node));
    node->number = num;
    node->next = NULL;
    node->last = NULL;
    return node;
}

List *createList(){
    List *list = malloc(sizeof(List));
    list->head = NULL;
    return list;
}


Node * front(List * list){
    return list->head;
}
int nodesCount(List *list){
    int i = 0;
    Node *current = list->head;
    while (current) {
        current = current->next;
        i++;
    }
    return i;
}
Node * last(List *list){
    Node *current = list->head;
    Node *temp = current;
    while (current) {
        temp = current;
        current = current->next;
    }
    return temp;
}




Node * insert(List * list, int index, int value){
    Node *node = createNode(value);
    Node *current = list->head;
    
    if (index == 0) {
        node->next = current;
        list->head = node;
    }else{
        int i=0;
        while (current->next != NULL && i<index) {
            current = current->next;
            i++;
        }
        node->next = current->next;
        current->next = node;
        node->last = current;
        
    }
    return node;
}

int removeAtIndex(List * list, int index){
    Node *current = list->head;
    if (index == 0) {
        list->head = current->next;
        if (current->next) {
            list->head->last = NULL;
        }
        free(current);
        current = NULL;
        return 1;
    }
    int i = 1;
    while (current->next) {
        if (i == index) {
            break;//current is previous
        }
        current = current->next;
        i++;
    }
    if (i<index) {
        return 0;
    }else{
       Node *temp = current->next;
        current->next = temp->next;
        if (current->next) {
            current->next->last = current;
        }
        free(temp);
        temp = NULL;
    }
    
    return 1;
}

void printList(List *list){
    Node *current = list->head;
    while (current) {
        printf("%d ",current->number);
        current = current->next;
    }
    printf("\n");
}
int searchForward(List *list, int value){
    int i = 0;
    Node *current = list->head;
    int find = 0;
    while (current) {
        if (current->number == value) {
            find = 1;
            printf("Find %d forward, the step:%d\n",value,i+1);
        }
        current = current->next;
        i++;
    }
    
    return find;
}
int searchBackward(List *list, int value){
    Node *current = last(list);
    int find = 0;
    int i = 0;
    while (current) {
        if (current->number == value) {
            find = 1;
            printf("Find %d backward, the step:%d\n",value,i+1);
        }
        current = current->last;
        i++;
    }
    return find;
}

