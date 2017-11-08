//
//  TimeFunction.c
//  lab3
//
//  Created by Xiang on 2017/9/27.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "TimeFunction.h"
#include <stdlib.h>

int numSeconds(int hours,int minutes,int seconds){
    TRACE();
    return hours*MINUTES_IN_AN_HOUR*SECONDS_IN_A_MINUTE+minutes*SECONDS_IN_A_MINUTE+seconds;
}

Time difference_times(Time firstTime,Time secondTime){
    int firstSeconds = numSeconds(firstTime.hours, firstTime.minutes, firstTime.seconds);
    int secondSeconds = numSeconds(secondTime.hours, secondTime.minutes, secondTime.seconds);
    
    
    int newSeconds = abs(firstSeconds-secondSeconds);
    
    
    int second = newSeconds%(SECONDS_IN_A_MINUTE);
    int minutes = newSeconds%(SECONDS_IN_A_MINUTE*MINUTES_IN_AN_HOUR)/SECONDS_IN_A_MINUTE;
    int hour = newSeconds/(SECONDS_IN_A_MINUTE*MINUTES_IN_AN_HOUR);
    
    
    Time time = {hour,minutes,second};
    
    printf("the difference between %.2d:%.2d:%.2d and %.2d:%.2d:%.2d is: %.2d:%.2d:%.2d\n\n",firstTime.hours,firstTime.minutes,firstTime.seconds,secondTime.hours,secondTime.minutes,secondTime.seconds,time.hours,time.minutes,time.seconds);
    
    
    return time;
    
}

char *getMonthName(Month month){
    char *name = "December";
    switch (month) {
        case January:
            name = "January";
            break;
        case February:
            name = "February";
            break;
        case March:
            name = "March";
            break;
        case April:
            name = "April";
            break;
        case May:
            name = "May";
            break;
        case June:
            name = "June";
            break;
        case July:
            name = "July";
            break;
        case August:
            name = "August";
            break;
        case September:
            name = "September";
            break;
        case October:
            name = "October";
            break;
        case November:
            name = "November";
            break;
        default:
            break;
    }
    return name;
}



void printDateTime(DateTime dateTime){
    
    printf("DateTime is: %s %d %4d %.2d:%.2d\n",getMonthName(dateTime.month),dateTime.day,dateTime.year,dateTime.time.hours,dateTime.time.minutes);
    
}


