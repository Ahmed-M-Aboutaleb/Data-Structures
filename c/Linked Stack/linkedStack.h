#ifndef LINKED_STACK_H_INCLUDED
#define LINKED_STACK_H_INCLUDED

#include "../Linked List/linkedlist.h"

typedef List LinkedStack;

void createLS(LinkedStack *stack);
int isEmptyLS(LinkedStack *stack);
void pushLS(LinkedStack *stack, ListType data);
void popLS(LinkedStack *stack);
ListType topLS(LinkedStack *stack);
int sizeLS(LinkedStack *stack);

#endif // LINKED_STACK_H_INCLUDED