#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkedList.h"

int main()
{
    DoublyLinkedList list;
    createDL(&list);
    insertDL(&list, 0, 1);
    insertDL(&list, 0, 2);
    insertDL(&list, 0, 3);
    printDL(&list);
    insertDL(&list, 1, 4);
    printf("\n");
    printDL(&list);
    printf("\n");
    eraseDL(&list, 0);
    printDL(&list);
    return 0;
}
