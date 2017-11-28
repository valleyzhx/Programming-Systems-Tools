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
    
    int array[9] = {5, 7, 3, 8, 2, 6, 4, 9, 1};
    for (int i=0; i<9; i++) {
        Data *data = createData(array[i]);
        if (i==0) {
           tree->root = createNode(data);
        }else{
            insertNode(tree->root, data);
        }
    }
    //printTree(tree);
    
    
    Data *read = createData(2);
    searchTree(tree, read);
    
    
    return 0;
}
