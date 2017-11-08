//
//  part1.c
//  lab4
//
//  Created by Xiang on 2017/10/23.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include <stdio.h>
#include "MyString.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    
    char *haystack_arr[5] = {"apple","orange","blueberry","strawberry","grapefruit"};
    char *needle_arr[5] = {"app","ge","ueber","strawberry","terrible"};
    
    
    int loop = 0;
    while (loop<5) {
        char *haystack = haystack_arr[loop];
        char *needle = needle_arr[loop];
        char buffer[15] = {'\0'};
        
        int result = myStrStr(haystack, needle, buffer);
        printf("haystack = \"%s\", needle = \"%s\":\n",haystack,needle);
        printf("return value: %d\n",result);
        if (result) {
            printf("buffer:%s\n",buffer);
        }

        printf("\n");
        loop++;
    }
    
    

    
    

    
    
    
    return 0;
}
