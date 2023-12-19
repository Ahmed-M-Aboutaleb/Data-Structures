#include <stdio.h>
#include <stdlib.h>
#include "BSTree.h"

void createBSTree(BSTree *tree)
{
    *tree = NULL;
}


int isBSTreeEmpty(BSTree *tree)
{
    return (!tree);
}

void insertBST(BSTree *tree, BSTreeType item) {
    BSTreeNode *newNode = (BSTreeNode*) malloc(sizeof(BSTreeNode));
    newNode->data = item;
    newNode->right = NULL;
    newNode->left = NULL;
    if(!(*tree)) {
        *tree = newNode;
        return;
    }
    BSTreeNode *curr = *tree, *prv;
    while (curr)
    {
        prv = curr;
        if(item > curr->data)
            curr = curr->right;
        else
            curr = curr->left;
    }
    (item > prv->data) ? (prv->right = newNode) : (prv->left = newNode);
}

void deleteBSTNode(BSTree *node) {
    BSTreeNode *travNode = *node;
    if(!(travNode)->left) {
        *node = travNode->right;
    } else if(!(travNode)->right) {
        *node = travNode->left;
    } else {
        travNode = travNode->left;
        BSTreeNode *prvNode = NULL;
        while (travNode->right)
        {
            prvNode = travNode;
            travNode = travNode->right;
        }
        (*node)->data = travNode->data;
        if(prvNode) {
            prvNode->right = travNode->left;
        } else {
            (*node)->left = travNode->left;
        }
    }
    free(travNode);
}

int deleteBST(BSTree *tree, BSTreeType item) {
    int found = 0;
    BSTreeNode *travNode = *tree, *prvNode = NULL;
    while (travNode && !(found = (item == travNode->data)))
    {
        prvNode = travNode;
        if(item < travNode->data)
            travNode = travNode->left;
        else
            travNode = travNode->right;
    }
    if(found) {
        if (!prvNode)
        {
            deleteBSTNode(tree);
        } else if(item< prvNode->data) {
            deleteBSTNode(&prvNode->left);
        } else {
            deleteBSTNode(&prvNode->right);
        }
        return found;
    }
}

void inOrderTravBST(BSTree tree, void (*pvisit)(BSTreeType *))
{
    if (tree)
    {
        inOrderTravBST(tree->left, pvisit);
        (*pvisit)(&(tree->data));
        inOrderTravBST(tree->right, pvisit);
    }
}

void preOrderTravBST(BSTree tree, void (*pvisit)(BSTreeType *))
{
    if (tree)
    {
        (*pvisit)(&(tree->data));
        preOrderTravBST(tree->left, pvisit);
        preOrderTravBST(tree->right, pvisit);
    }
}

void postOrderTravBST(BSTree tree, void (*pvisit)(BSTreeType *))
{
    if (tree)
    {
        postOrderTravBST(tree->left, pvisit);
        postOrderTravBST(tree->right, pvisit);
        (*pvisit)(&(tree->data));
    }
}

void printBSTNode(BSTreeType *data)
{
    printf("%d ", *data);
}

int BSTreeSize(BSTree tree)
{
    if (!tree)
    {
        return 0;
    }
    return (1 + BSTreeSize(tree->left) + BSTreeSize(tree->right));
}

int BSTreeHeight(BSTree tree)
{
    if (!tree)
        return 0;
    int a = BSTreeHeight(tree->left);
    int b = BSTreeHeight(tree->right);
    return (a > b) ? 1 + a : b + 1;
}