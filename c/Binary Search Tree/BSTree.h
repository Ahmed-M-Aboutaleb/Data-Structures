#ifndef BSTREE_H_INCLUDED
#define BSTREE_H_INCLUDED

typedef int BSTreeType;
typedef struct node
{
    BSTreeType data;
    struct node *left;
    struct node *right;
} BSTreeNode;
typedef BSTreeNode *BSTree;

void createBSTree(BSTree *tree);
int isBSTreeEmpty(BSTree *tree);
void insertBST(BSTree *tree, BSTreeType item);
int deleteBST(BSTree *tree, BSTreeType item);
void inOrderTravBST(BSTree tree, void (*pvisit)(BSTreeType *));
void preOrderTravBST(BSTree tree, void (*pvisit)(BSTreeType *));
void postOrderTravBST(BSTree tree, void (*pvisit)(BSTreeType *));
void printBSTNode(BSTreeType *data);
int BSTreeSize(BSTree tree);
int BSTreeHeight(BSTree tree);

#endif // BSTREE_H_INCLUDED