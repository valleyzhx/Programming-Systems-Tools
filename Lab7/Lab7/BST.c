//
//  BST.c
//  Lab7
//
//  Created by Xiang on 2017/11/17.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "BST.h"


int _index=0;
int _queIndex = 0;

int _memeoryCount = 0;

Data *createData(int value){
    Data *data = malloc(sizeof(Data));
    data->value = value;

    return data;
}

Node *createNode(Data *data){
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->parent = NULL;
    return node;
}

Tree *createTree(){
    Tree *tree = malloc(sizeof(Tree));
    tree->root = NULL;
    return tree;
}
Node *addLeaf(Node *node, Data *data){
    Node *newNode = createNode(data);
    newNode->parent = node;
    return newNode;
}

void insertNode(Node *node, Data *data){
    if(data->value < node->data->value){
        if(node->left == NULL){
            Node *leftNode = addLeaf(node, data);
            node->left = leftNode;
            leftNode->parent = node;
        }else{
            insertNode(node->left, data);
        }
    }else if (data->value > node->data->value){
        if(node->right == NULL){
            Node *rightNode = addLeaf(node, data);
            node->right = rightNode;
            rightNode->parent = node;
        }else{
            insertNode(node->right, data);
        }
    }
}

Node *searchNode(Node *node, Data *data){
    printf("Find %d ",node->data->value);
    if (data->value < node->data->value){
        if(node->left == NULL){
            printf("value not found\n");
        }
        else{
            printf("go left!\n");
            node = searchNode(node->left, data);
        }
    }else if (data->value > node->data->value){
        if(node->right == NULL){
            printf("value not found\n");
        }
        else{
            printf("go right!\n");
            node = searchNode(node->right, data);
        }
    }
    return node;
}

Node *searchTree(Tree* tree, Data *data){
    printf("The goal is to find %d\n",data->value);
    if (tree->root == NULL) {
        printf("The tree is NULL!\n");
        return NULL;
    }
    Node *node = searchNode(tree->root, data);
    printf("\n");
    return node;
}



void deleteTree(Tree *tree){
    deleteNode(tree->root);
    free(tree);
    tree = NULL;
}
void deleteNode(Node *node){
    
    if (node->left) {
        deleteNode(node->left);
    }
    if (node->right) {
        deleteNode(node->right);
    }
    free(node->data);
    node->data = NULL;
    free(node);
    node = NULL;
}




void addNodeValueIntoQueueArr(int queArr[],Node *node,int index){
    _queIndex = _queIndex>index?_queIndex:index;
    queArr[index] = node->data->value;
    if (node->left) {
        addNodeValueIntoQueueArr(queArr, node->left, 2*index+1);
    }
    if (node->right) {
        addNodeValueIntoQueueArr(queArr, node->right, 2*index+2);
    }
}
void printTree(Tree *tree){
    Node *root = tree->root;
    int queArr[100]={0};
    _queIndex = 0;
    addNodeValueIntoQueueArr(queArr, root,0);
    int row = log2(_queIndex+1)+1;
    
    for (int y=0; y<row; y++) {
        int left_blank = 2*pow(2, row-y-2)-1;
        for (int x=0; x<left_blank; x++) {
            printf(" ");//left
        }
        for (int x=0; x<pow(2, y); x++) {
            int startX = pow(2, y)-1;
            int num = queArr[startX+x];
            if (num) {
                printf("%d",num);
            }else{
                printf(" ");// nodes without value
            }
            for (int i=0; i<2*pow(2, row-y-1)-1; i++) {
                printf(" ");// inside blank between each node in same level
            }
        }
        printf("\n");
    }
    
    
}
