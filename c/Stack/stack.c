#include <stdio.h>
#include "stack.h"

void createStack(Stack *stack)
{
    stack->top = -1;
}

int isStackEmpty(Stack *stack)
{
    return (stack->top + 1 == 0);
}

int isStackFull(Stack *stack)
{
    return (stack->top + 1 == MAX_SIZE);
}

void push(Stack *stack, Type item)
{
    stack->items[++stack->top] = item;
}

Type pop(Stack *stack)
{
    Type item;
    item = stack->items[--stack->top];
    return item;
}

Type top(Stack *stack)
{
    return stack->items[stack->top];
}

int stackSize(Stack *stack)
{
    return stack->top + 1;
}