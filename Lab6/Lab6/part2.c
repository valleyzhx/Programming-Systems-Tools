//
//  part2.c
//  Lab6
//
//  Created by Xiang on 2017/11/8.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include <stdio.h>
#include "List.h"
#include <time.h>

int main(int argc, const char * argv[]) {

    srand((int)time(NULL));
    
    List *list = createList();
    
    for (int i=0; i<10; i++) {
        int value = rand()%9+1;
        insert(list, i, value);
        printf("step:%d insert %d\n",i+1,value);
        printList(list);
    }
    
    printf("\n===== Part2 B =====\n\n");
    int value = 3;
    int find = searchForward(list, value);
    searchBackward(list, value);
    
    if (find == 0) {
        printf("The value %d was not found\n",value);
    }
    for (int i=9; i>=0; i++) {
        removeAtIndex(list, i);
    }
    free(list);
    list = NULL;
    
    return 0;
}
