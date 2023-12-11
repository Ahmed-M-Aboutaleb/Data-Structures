#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX_SIZE 100

typedef int StackType;

typedef struct stack
{
    StackType items[MAX_SIZE];
    int top;
} Stack;

void createStack(Stack *stack);
int isStackEmpty(Stack *stack);
int isStackFull(Stack *stack);
void push(Stack *stack, StackType item);
StackType pop(Stack *stack);
StackType top(Stack *stack);
int stackSize(Stack *stack);

#endif // STACK_H_INCLUDED
