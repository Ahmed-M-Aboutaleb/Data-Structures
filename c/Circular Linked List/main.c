#include <stdio.h>
#include <stdlib.h>
#include "circularLinkedList.h"

int main()
{
    List list;
    createCL(&list);
    insertCL(&list, 0, 1);
    insertCL(&list, 0, 2);
    insertCL(&list, 0, 3);
    printCL(&list);
    insertCL(&list, 1, 4);
    printf("\n");
    printCL(&list);
    printf("\n");
    eraseCL(&list, 0);
    printCL(&list);
    return 0;
}
