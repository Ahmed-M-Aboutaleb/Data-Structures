#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef int TreeType;
typedef struct node
{
    TreeType data;
    struct node *left;
    struct node *right;
} TreeNode;
typedef TreeNode *Tree;

void createTree(Tree *tree);
int isTreeEmpty(Tree *tree);
void fillTree(Tree *tree);
void inOrderTrav(Tree tree, void (*pvisit)(TreeType *));
void inOrderTravRec(Tree tree, void (*pvisit)(TreeType *));
void preOrderTravRec(Tree tree, void (*pvisit)(TreeType *));
void postOrderTravRec(Tree tree, void (*pvisit)(TreeType *));
void printNode(TreeType *data);
int treeSize(Tree tree);
int treeHeight(Tree tree);

#endif // TREE_H_INCLUDED