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

void push(Stack *stack, StackType item)
{
    stack->items[++stack->top] = item;
}

StackType pop(Stack *stack)
{
    StackType item;
    item = stack->items[stack->top--];
    return item;
}

StackType top(Stack *stack)
{
    return stack->items[stack->top];
}

int stackSize(Stack *stack)
{
    return stack->top + 1;
}