#include <stdio.h>
#include "linkedStack.h"

int main()
{
    LinkedStack myStack;
    createLS(&myStack);
    pushLS(&myStack, 1);
    pushLS(&myStack, 2);
    pushLS(&myStack, 3);
    printf("My Top is %d \n", topLS(&myStack));
    popLS(&myStack);
    printf("My Top is %d \n", topLS(&myStack));
    return 0;
}