//
//  TimeFunction.h
//  lab3
//
//  Created by Xiang on 2017/9/27.
//  Copyright © 2017年 xianng. All rights reserved.
//

#ifndef TimeFunction_h
#define TimeFunction_h

#include <stdio.h>
#include "Macro.h"


typedef enum {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
} Month;

typedef struct {
    int hours;
    int minutes;
    int seconds;
}Time;


typedef struct{
    int year;
    Month month;
    int day;
    Time time;
}DateTime;


int numSeconds(int hours,int minutes,int seconds);

Time difference_times(Time firstTime,Time secondTime);

void printDateTime(DateTime dateTime);


#endif /* TimeFunction_h */
