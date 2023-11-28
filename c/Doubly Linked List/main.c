#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkedList.h"

int main()
{
    DoublyLinkedList list;
    createList(&list);
    insert(&list, 0, 1);
    insert(&list, 0, 2);
    insert(&list, 0, 3);
    print(&list);
    insert(&list, 1, 4);
    printf("\n");
    print(&list);
    printf("\n");
    erase(&list, 0);
    print(&list);
    return 0;
}
