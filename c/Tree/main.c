#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main()
{
    Tree myT;
    createTree(&myT);
    fillTree(&myT);
    printf("inOrderTrav: ");
    inOrderTrav(myT, &printNode);
    printf("\n");

    printf("inOrderTravRec: ");
    inOrderTravRec(myT, &printNode);
    printf("\n");


    printf("preOrderTravRec: ");
    preOrderTravRec(myT, &printNode);
    printf("\n");

    printf("postOrderTravRec: ");
    postOrderTravRec(myT, &printNode);
    printf("\n");

    printf("size: %d", treeSize(myT));
    printf("\n");

    printf("height: %d", treeHeight(myT));
    printf("\n");
    return 0;
}
