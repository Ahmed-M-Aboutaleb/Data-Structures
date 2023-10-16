#ifndef LINKED_STACK_H_INCLUDED
#define LINKED_STACK_H_INCLUDED

#include "../Linked List/linkedlist.h"

typedef List LinkedStack;

void initStack(LinkedStack *stack);
int isEmptyStack(LinkedStack stack);
void push(LinkedStack *stack, Type data);
void pop(LinkedStack *stack);
Type top(LinkedStack stack);

#endif // LINKED_STACK_H_INCLUDED