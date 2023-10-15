#include <stdio.h>
#include "stack.h"

void init(Stack *stack) {
    stack->size = 0;
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return (stack->size == 0);
}

int isFull(Stack *stack) {
    return (stack->size == MAX_SIZE);
}

void push(Stack *stack, Type item) {
    if(isFull(stack)) {
        printf("Sorry the stack is full!");
        return;
    }
    stack->size++;
    stack->items[++stack->top] = item;
}

Type pop(Stack *stack) {
    if(isEmpty(stack)) {
        printf("Sorry the stack is empty!");
        return NULL;
    }
    Type item;
    stack->size--;
    item = stack->items[--stack->top];
    return item;
}

Type top(Stack *stack) {
    if(isEmpty(stack)) {
        printf("Sorry the stack is empty!");
        return NULL;
    }
    return stack->items[stack->top];
}

int size(Stack *stack) {
    return stack->size;
}