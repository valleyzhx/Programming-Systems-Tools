//
//  partA.c
//  lab2
//
//  Created by yuejing zhu on 2017/9/6.
//  Copyright © 2017年 Xianng. All rights reserved.
//

#include <stdio.h>

#define count 32



void printBits(int number){
    int bits[count];
    printf("%d binary representation is:\n",number);
    for (int i=0; i<count; i++) {
        int last = number&1;
        bits[count-1-i] = last;
        number >>= 1;
        
    }
    for (int i=0; i<count; i++) {
        printf("%d",bits[i]);
        if (i%4==3) {
            printf(" ");
        }
    }
    printf("\n\n");
}


int main(int argc, const char * argv[]) {

    
    int first = 2;
    printBits(first);
    
    int second = 255;
    printBits(second);

    int third = 32;
    printBits(third);

    int forth = -1;
    printBits(forth);

    int fifth = -255;
    printBits(fifth);

    
    
    return 0;
}
