//
//  partB.c
//  lab3
//
//  Created by Xiang on 2017/9/27.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include <stdio.h>
#include "TimeFunction.h"


int main(){
    
    DateTime date1 = {1809,January,19,{12,1,0}};
    DateTime date2 = {1922,November,11,{6,0,0}};
    DateTime date3 = {2000,January,6,{8,22,0}};
    
    
    printDateTime(date1);
    printDateTime(date2);
    printDateTime(date3);
    
    return 0;
}
