#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "./StackOfTree/stack.h"

void createTree(Tree *tree)
{
    *tree = NULL;
}

int isEmpty(Tree *tree)
{
    return (!tree);
}

void fillTree(Tree *tree)
{
    TreeNode *n81 = (TreeNode *)malloc(sizeof(TreeNode));
    TreeNode *n22 = (TreeNode *)malloc(sizeof(TreeNode));
    TreeNode *n6 = (TreeNode *)malloc(sizeof(TreeNode));
    TreeNode *n41 = (TreeNode *)malloc(sizeof(TreeNode));
    TreeNode *n18 = (TreeNode *)malloc(sizeof(TreeNode));
    TreeNode *n9 = (TreeNode *)malloc(sizeof(TreeNode));
    TreeNode *n17 = (TreeNode *)malloc(sizeof(TreeNode));

    n81->data = 81;
    n81->right = NULL;
    n81->left = NULL;
    n22->data = 22;
    n22->right = n81;
    n22->left = NULL;
    n6->data = 6;
    n6->right = NULL;
    n6->left = NULL;
    n41->data = 41;
    n41->right = n6;
    n41->left = n22;
    n18->data = 18;
    n18->right = NULL;
    n18->left = NULL;
    n9->data = 9;
    n9->right = NULL;
    n9->left = n18;
    n17->data = 17;
    n17->right = n9;
    n17->left = n41;
    *tree = n17;
}

void inOrderTrav(Tree tree, void (*pvisit)(TreeType *))
{
    Stack s;
    TreeNode *travNode = tree;
    if (travNode)
    {
        createStack(&s);
        do
        {
            while (travNode)
            {
                push(&s, travNode);
                travNode = travNode->left;
            }
            travNode = pop(&s);
            (*pvisit)(&(travNode->data));
            travNode = travNode->right;
        } while (!isStackEmpty(&s) || travNode);
    }
}

void inOrderTravRec(Tree tree, void (*pvisit)(TreeType *))
{
    if (tree)
    {
        inOrderTravRec(tree->left, pvisit);
        (*pvisit)(&(tree->data));
        inOrderTravRec(tree->right, pvisit);
    }
}

void preOrderTravRec(Tree tree, void (*pvisit)(TreeType *))
{
    if (tree)
    {
        (*pvisit)(&(tree->data));
        preOrderTravRec(tree->left, pvisit);
        preOrderTravRec(tree->right, pvisit);
    }
}

void postOrderTravRec(Tree tree, void (*pvisit)(TreeType *))
{
    if (tree)
    {
        postOrderTravRec(tree->left, pvisit);
        postOrderTravRec(tree->right, pvisit);
        (*pvisit)(&(tree->data));
    }
}

void printNode(TreeType *data)
{
    printf("%d ", *data);
}

int treeSize(Tree tree)
{
    if (!tree)
    {
        return 0;
    }
    return (1 + treeSize(tree->left) + treeSize(tree->right));
}

int treeHeight(Tree tree)
{
    if (!tree)
        return 0;
    int a = treeHeight(tree->left);
    int b = treeHeight(tree->right);
    return (a > b) ? 1 + a : b + 1;
}