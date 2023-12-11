#ifndef LINKED_QUEUE_H_INCLUDED
#define LINKED_QUEUE_H_INCLUDED

#include "../Linked List/linkedlist.h"

typedef List LinkedQueue;

void createLQ(LinkedQueue *queue);
int isEmptyLQ(LinkedQueue *queue);
void enqueueLQ(LinkedQueue *queue, ListType data);
void dequeueLQ(LinkedQueue *queue);
ListType frontLQ(LinkedQueue *queue);
int sizeLQ(LinkedQueue *queue);

#endif // LINKED_STACK_H_INCLUDED