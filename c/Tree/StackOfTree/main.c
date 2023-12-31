#include <stdio.h>
#include "stack.h"

int main()
{
    Stack myStack;
    createStack(&myStack);
    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);
    printf("Stack top is %d\n", top(&myStack));
    pop(&myStack);
    printf("Stack top is %d\n", top(&myStack));
    printf("Stack size is %d\n", stackSize(&myStack));
    return 0;
}