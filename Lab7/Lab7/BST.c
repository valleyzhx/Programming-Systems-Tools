//
//  BST.c
//  Lab7
//
//  Created by Xiang on 2017/11/17.
//  Copyright © 2017年 xianng. All rights reserved.
//

#include "BST.h"

int _array[100];
int _index=0;

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



void getNodesForEveryLevel(Node *sameArr[],int *count){
    Node *tempArr[100];
    int ind = 0;
    for (int i=0; i<*count; i++) {
        Node *node = sameArr[i];
        if (node) {
            Node *left = node->left;
            Node *right = node->right;
            if (left) {
                tempArr[ind++] = left;
            }
            if (right) {
                tempArr[ind++] = right;
            }
        }
    }
    for (int i=0; i<ind; i++) {
        sameArr[i] = tempArr[i];
    }
    *count = ind;
}
void printTree(Tree *tree){
    Node *root = tree->root;
    Node *arr[100]={root};
    int count = 1;
    while (count) {
        getNodesForEveryLevel(arr, &count);
        for (int i=0; i<count; i++) {
            printf(" %d ",arr[i]->data->value);
        }
        printf("\n");
    }
}
