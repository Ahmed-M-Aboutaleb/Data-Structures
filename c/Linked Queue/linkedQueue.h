#ifndef LINKED_QUEUE_H_INCLUDED
#define LINKED_QUEUE_H_INCLUDED

#include "../Linked List/linkedlist.h"

typedef List LinkedQueue;

void initQueue(LinkedQueue *queue);
int isEmptyQueue(LinkedQueue queue);
void enqueue(LinkedQueue *queue, Type data);
void dequeue(LinkedQueue *queue);
Type front(LinkedQueue queue);

#endif // LINKED_STACK_H_INCLUDED