//
//  part2.c
//  lab5
//
//  Created by Xiang on 2017/11/3.
//  Copyright © 2017年 xianng. All rights reserved.
//
#include "myMemory.h"


int main(int argc, const char * argv[]) {

    void *ptr = allocate(8);
    printf("allocate: %p\n",ptr);
    
    deallocate(ptr, 8);
    printf("deallocate: %p\n",ptr);
    ptr = NULL;
    printf("NULL: %p\n",ptr);

    return 0;
}
