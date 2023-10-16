#include <stdio.h>
#include "linkedList.h"

int main() {
    List myList;
    init(&myList);
    insert(&myList, 0, 1);
    print(myList);
    insert(&myList, 1, 2);
    print(myList);
    insert(&myList, 0, 3);
    print(myList);
    erase(&myList, 0);
    print(myList);
    erase(&myList, 1);
    print(myList);
    clear(&myList);
    print(myList);
}