//
//  partA.c
//  lab3
//
//  Created by Xiang on 2017/9/27.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include <stdio.h>
#include "TimeFunction.h"

int main(){
    
    Time time1 = {3,45,15};
    Time time2 = {9,44,03};
    difference_times(time1, time2);
    
    Time time3 = {1,30,45};
    Time time4 = {16,30,45};
    
    difference_times(time3,time4);
    
    Time time5 = {00,01,01};
    Time time6 = {23,59,59};
    difference_times(time5,time6);

    Time time7 = {12,0,0};
    Time time8 = {12,0,0};
    difference_times(time7,time8);
    

    return 0;
}
