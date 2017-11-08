//
//  Train.h
//  Lab6
//
//  Created by Xiang on 2017/11/8.
//  Copyright © 2017年 xianng. All rights reserved.
//

#ifndef Train_h
#define Train_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Car{
    int weight;
    struct Car *next;
} Car;

typedef struct{
    Car *first;
} Train;



Car *initCar(int weight);

#endif /* Train_h */
