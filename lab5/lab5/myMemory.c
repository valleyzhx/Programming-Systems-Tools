//
//  myMemory.c
//  lab5
//
//  Created by Xiang on 2017/11/3.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "myMemory.h"
int heap_usage = 0;


void * allocate(unsigned int size){
    void *pointer = malloc(size);
    if (pointer == NULL) {
        printf("Error: no more space!");
    }else{
        heap_usage += size;
        printHeap();
    }
    
    return pointer;
}
void * deallocate(void *ptr, int size){
    free(ptr);
    heap_usage -= size;
    printHeap();
    return ptr;
}

void printHeap(){
    printf("heap usage size: %d\n",heap_usage);
}

