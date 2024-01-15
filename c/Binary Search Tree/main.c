#include <stdio.h>
#include <stdlib.h>
#include "BSTree.h"

int main()
{
    BSTree tree;
    createBSTree(&tree);
    insertBST(&tree, 40);
    insertBST(&tree, 50);
    insertBST(&tree, 30);
    insertBST(&tree, 25);
    insertBST(&tree, 35);
    insertBST(&tree, 55);
    insertBST(&tree, 45);
    preOrderTravBST(tree, &printBSTNode);
    printf("\n");
    deleteBST(&tree, 35);
    preOrderTravBST(tree, &printBSTNode);
    printf("\n");
    printf("size: %d", BSTreeSize(tree));
    printf("\n");
    return 0;
}