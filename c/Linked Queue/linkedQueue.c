#include "linkedQueue.h"

void initQueue(LinkedQueue *queue) {
    init(queue);
}

int isEmptyQueue(LinkedQueue queue) {
    return isEmpty(queue);
}

void enqueue(LinkedQueue *queue, Type data) {
    insert(queue, queue->size, data);
}

void dequeue(LinkedQueue *queue) {
    erase(queue, 0);
}

Type front(LinkedQueue queue) {
    return queue.head->data;
}