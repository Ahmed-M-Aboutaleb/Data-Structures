#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX_SIZE 100

typedef int Type;

typedef struct stack {
    Type items[MAX_SIZE];
    int top;
    int size;
} Stack;

void init(Stack *stack);
int isEmpty(Stack *stack);
int isFull(Stack *stack);
void push(Stack *stack, Type item);
Type pop(Stack *stack);
Type top(Stack *stack);
int size(Stack *stack);

#endif // STACK_H_INCLUDED
