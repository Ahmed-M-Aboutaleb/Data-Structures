#include "linkedStack.h"

void initStack(LinkedStack *stack) {
    init(stack);
}

int isEmptyStack(LinkedStack stack) {
    return isEmpty(stack);
}

void push(LinkedStack *stack, Type data) {
    insert(stack, 0, data);
}

void pop(LinkedStack *stack) {
    erase(stack, 0);
}

Type top(LinkedStack stack) {
    return stack.head->data;
}