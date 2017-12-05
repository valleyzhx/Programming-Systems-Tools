//
//  BST.h
//  Lab7
//
//  Created by Xiang on 2017/11/17.
//  Copyright © 2017年 xianng. All rights reserved.
//

#ifndef BST_h
#define BST_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int value;
} Data;

typedef struct Node{
    struct Node * left;
    struct Node * right;
    Data  *data;
    struct Node * parent;
} Node;

typedef struct {
    Node * root;
    
} Tree;

Data *createData(int value);

Node *createNode(Data *data);

Tree *createTree();

void deleteTree(Tree *tree);
void deleteNode(Node *node);

//Node *addLeaf(Node *node, Data *data);

void insertNode(Node *node, Data *data);

Node *searchNode(Node *node, Data *data);
Node *searchTree(Tree* tree, Data *data);

void printTree(Tree* tree);



#endif /* BST_h */
