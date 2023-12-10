#include <stdio.h>
#include "linkedList.h"

int main()
{
    List myList;
    createList(&myList);
    insertList(&myList, 0, 1);
    printList(&myList);
    insertList(&myList, 1, 2);
    printList(&myList);
    insertList(&myList, 0, 3);
    printList(&myList);
    eraseList(&myList, 0);
    printList(&myList);
    eraseList(&myList, 1);
    printList(&myList);
    clearList(&myList);
    printList(&myList);
}