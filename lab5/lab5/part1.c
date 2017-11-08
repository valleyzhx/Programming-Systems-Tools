//
//  part1.c
//  lab5
//
//  Created by Xiang on 2017/11/3.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "part1.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
    char *first = "Zhang";
    char *last = "Xiang";
    char buffer[6]={'\0'};
    setJediName(first, last, buffer);
    printName(first, last, buffer);
    
    
    printf("Now input a name to save in your file\nFirst Name:");
    char first_name[20];
    scanf("%s",first_name);
    printf("Last Name:");
    char last_name[20];
    scanf("%s",last_name);
    
    char input_name[40]={'\0'};
    int count = 0;
    for (int i=0; i<20; i++) {
        count++;
        if (first_name[i] == '\0') {
            input_name[i] = ' ';
            break;
        }else{
            input_name[i] = first_name[i];
        }
    }
    for (int i=0; i<20; i++) {
        if (last_name[i] == '\0') {
            input_name[i+count] = '\0';
            break;
        }else{
            input_name[i+count] = last_name[i];
        }
    }
    

    
    FILE *fptr = fopen("myfile.txt", "a+");
    
    fprintf(fptr, "%s\n",input_name);
   
    fseek(fptr,0,SEEK_SET);
    
    char txt[40] = {'\0'};
    printf("\n");
    while(fscanf(fptr, "%[^\n]%*c", txt)) {
        if (!txt[0]) {
            break;
        }
        //printf("%s\n",txt);
        int i=0;
        int first_len = 0;
        char first[20] = {'\0'};
        char last[20] = {'\0'};
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
        char buf[6]={'\0'};
        setJediName(first, last, buf);
        printName(first, last, buf);
        memset(txt,0,40);

    }
    fclose(fptr);
    
    return 0;
}


void setJediName(char *firstName, char *lastName, char buffer[]){
    for (int i=0; i<5; i++) {
        if (i<3) {
            buffer[i] = lastName[i];
        }else{
            buffer[i] = firstName[i-3];
        }
    }
    buffer[5] = '\0';
}

void printName(char *first, char *last, char *buffer){
    printf("%s %s => %s\n",first,last,buffer);
}




