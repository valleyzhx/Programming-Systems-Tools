//
//  main.c
//  Lab6
//
//  Created by Xiang on 2017/11/8.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "Train.h"

int main(int argc, const char * argv[]) {
    // insert code here...

    printf("input number of cars and weight of each car:\n");
    int number;
    scanf("%d",&number);
    printf("input weights of each car, seperate by blank:\n");
    
    int weight[number];
    for (int i=0; i<number; i++) {
        int wei;
        scanf("%d",&wei);
        weight[i] = wei;
    }
    
    Train *train = malloc(sizeof(Train));
    printf("Malloc Train:%p\n",train);
    Car *current = NULL;
    for (int i=0; i<number; i++) {
        Car *car = initCar(weight[i]);
        if (i==0) {
            train->first = car;
            current = car;
        }else{
            current->next = car;
            current = car;
        }
    }
    Car *first = train->first;
    Car *next = first;//->next;
    while (next) {
        free(next);
        printf("Free car:%p\n",next);
        Car *temp = next;
        next = next->next;
        temp = NULL;
    }
    free(train);
    printf("Free Train:%p\n",train);

    first = NULL;
    train = NULL;
    return 0;
}



