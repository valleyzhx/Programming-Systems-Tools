//
//  myMemory.h
//  lab5
//
//  Created by Xiang on 2017/11/3.
//  Copyright © 2017年 xianng. All rights reserved.
//

#ifndef myMemory_h
#define myMemory_h

#include <stdio.h>
#include <stdlib.h>


void * allocate(unsigned int size);
void * deallocate(void *ptr, int size);

void printHeap();


#endif /* myMemory_h */
