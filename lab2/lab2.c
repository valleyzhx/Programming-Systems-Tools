//
//  lab2.c
//  lab2
//
//  Created by yuejing zhu on 2017/9/6.
//  Copyright © 2017年 Xianng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int f0 = 0, f1 = 1;
    int loop_number = 20;
    int number = 0;
    
    printf("First 20 Fibonacci numbers are:\n");
    for (int i=0; i<loop_number; i++) {
        if (i==0) {
            number = f0;
        }else if (i==1){
            number = f1;
        }else{
            number = f0+f1;
            f0 = f1;
            f1 = number;
        }
        printf("%d ",number);
    }
    printf("\n");
    return 0;
}
