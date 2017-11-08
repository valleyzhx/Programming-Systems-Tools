//
//  Train.c
//  Lab6
//
//  Created by Xiang on 2017/11/8.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "Train.h"

Car *initCar(int weight){
    Car *car = malloc(sizeof(Car));
    car->weight = weight;
    printf("car:%p weight:%d\n",car,weight);
    return car;
}
