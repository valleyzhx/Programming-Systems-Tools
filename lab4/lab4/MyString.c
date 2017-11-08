//
//  MyString.c
//  lab4
//
//  Created by Xiang on 2017/10/23.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "MyString.h"

int strLenth(char *string){
    if (string == NULL) {
        return 0;
    }
    int i = 0;
    while (string[i++]) {
        
    }
    return i-1;
}

int myStrStr(char  haystack[], char needle[], char buffer[]){
    int haystack_size = strLenth(haystack);
    int needle_size = strLenth(needle);
    int i = 0;
    while (i<haystack_size) {
        if (haystack[i] == needle[0]) {
            int j = 0;
            int hay_ind = i;
            int bInd = 0;
            while (haystack[hay_ind] == needle[j]) {
                buffer[bInd] = haystack[hay_ind];
                hay_ind++;
                j++;
                bInd++;
                if (j==needle_size) {
                    return 1;
                }
            }
        }
        i++;
    }
    
    return 0;
}




