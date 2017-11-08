//
//  partC.h
//  lab5
//
//  Created by Xiang on 2017/11/4.
//  Copyright © 2017年 xianng. All rights reserved.
//

#ifndef partC_h
#define partC_h

#include "myMemory.h"
typedef struct {
    char * first_name;
    char * last_name;
    char * jedi_name;
}Names;

void setJediName(Names names);

void printName(char *first, char *last, char *buffer);

#endif /* partC_h */
