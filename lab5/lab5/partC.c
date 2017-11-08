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
    
    char *txt = allocate(40);
    memset(txt,0,40);

    printf("\n");
    while(fscanf(fptr, "%[^\n]%*c", txt)) {
        if (!txt[0]) {
            break;
        }
        int i=0;
        int first_len = 0;
        char *first = allocate(20);
        char *last = allocate(20);
        memset(first,0,20);
        memset(last,0,20);

        int isFirst = 1;
        
        while (txt[i]!='\0') {
            if (txt[i]==' ') {
                isFirst = 0;
            }
            if (isFirst) {
                first[i] = txt[i];
                first_len++;
            }else{
                last[i-first_len-1] = txt[i];
            }
            i++;
        }

        char *jedi = allocate(6);
        Names *names = allocate(sizeof(Names));
        names->first_name = first;
        names->last_name = last;
        names->jedi_name = jedi;
        setJediName(*names);
        
        printName(names->first_name, names->last_name, names->jedi_name);
        memset(txt,0,40);
        
        deallocate(first, 20);
        deallocate(last, 20);
        deallocate(jedi, 6);
        first = NULL;
        last = NULL;
        jedi = NULL;
    
    }
    fclose(fptr);
    deallocate(txt, 40);
    txt = NULL;
    
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



