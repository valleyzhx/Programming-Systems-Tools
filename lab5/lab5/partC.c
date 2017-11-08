//
//  partC.c
//  lab5
//
//  Created by Xiang on 2017/11/4.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "partC.h"

int main(int argc, const char * argv[]) {
    printHeap();
    
    FILE *fptr = fopen("myfile.txt", "a+");
    fseek(fptr,0,SEEK_SET);
    
    char *first = allocate(20);
    char *last = allocate(20);
    memset(first,0,20);
    memset(last,0,20);
    printf("\n");
    while(fscanf(fptr, "%s %s", first,last)>=0) {
        

        char *jedi = allocate(6);
        Names *names = allocate(sizeof(Names));
        names->first_name = first;
        names->last_name = last;
        names->jedi_name = jedi;
        setJediName(*names);
        
        printName(names->first_name, names->last_name, names->jedi_name);
        
        deallocate(jedi, 6);
        deallocate(names, sizeof(Names));
        
        jedi = NULL;
        names = NULL;
        memset(first,0,20);
        memset(last,0,20);
    }
    deallocate(first, 20);
    deallocate(last, 20);

    first = NULL;
    last = NULL;
    
    fclose(fptr);
    
    return 0;
}




void setJediName(Names names){
    for (int i=0; i<5; i++) {
        if (i<3) {
            names.jedi_name[i] = names.last_name[i];
        }else{
            names.jedi_name[i] = names.first_name[i-3];
        }
    }
}

void printName(char *first, char *last, char *buffer){
    printf("%s %s => %s\n",first,last,buffer);
}



