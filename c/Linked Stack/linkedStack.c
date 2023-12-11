#include "linkedStack.h"

void createLS(LinkedStack *stack)
{
    createList(stack);
}

int isEmptyLS(LinkedStack *stack)
{
    return isListEmpty(stack);
}

void pushLS(LinkedStack *stack, ListType data)
{
    insertList(stack, 0, data);
}

void popLS(LinkedStack *stack)
{
    eraseList(stack, 0);
}

ListType topLS(LinkedStack *stack)
{
    return stack->head->data;
}

int sizeLS(LinkedStack *stack)
{
    return sizeList(stack);
}