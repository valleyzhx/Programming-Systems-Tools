//
//  main.c
//  Lab7
//
//  Created by Xiang on 2017/11/17.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include <stdio.h>
#include "BST.h"

int main(int argc, const char * argv[]) {
    
    Tree *tree = createTree();
    
    FILE *fptr = fopen("data.txt", "a+");
    fseek(fptr,0,SEEK_SET);
    int num;
    int i=0;
    while(fscanf(fptr, "%d", &num)>=0) {
        Data *data = createData(num);
        if (i==0) {
            tree->root = createNode(data);
        }else{
            insertNode(tree->root, data);
        }
        i++;
    }
    printf("Tree is:\n");
    printTree(tree);
    printf("\ninput a number to find:");
    int find;
    scanf("%d",&find);
    Data *read = createData(find);
    searchTree(tree, read);
    
    deleteTree(tree);
    
    
    free(read);
    read = NULL;
    
    fclose(fptr);
    fptr = NULL;
    
    return 0;
}
