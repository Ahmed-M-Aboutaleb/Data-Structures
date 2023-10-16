#include <stdio.h>
#include "linkedStack.h"

int main() {
    LinkedStack myStack;
    initStack(&myStack);
    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);
    printf("My Top is %d \n", top(myStack));
    pop(&myStack);
    printf("My Top is %d \n", top(myStack));
    return 0;
}