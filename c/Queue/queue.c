#include <stdio.h>
#include "queue.h"

void init(Queue *queue) {
    queue->back = MAX_SIZE-1;
    queue->front = 0;
    queue->size = 0;
}

int isEmpty(Queue queue) {
    return (queue.size == 0);
}

int isFull(Queue queue) {
    return (queue.size == MAX_SIZE);
}

void enqueue(Queue *queue, Type item) {
    if(isFull(*queue)) {
        printf("Queue is full!");
        return;
    }
    queue->back = (queue->back+1)%MAX_SIZE;
    queue->items[queue->back] = item;
    queue->size++;
}

Type dequeue(Queue *queue) {
    if(isEmpty(*queue)) {
        printf("Queue is empty!");
        return NULL;
    }
    Type item;
    queue->size--;
    item = queue->items[queue->front];
    queue->front = (queue->front+1)%MAX_SIZE;
    return item;
}


Type front(Queue queue) {
    if(isEmpty(queue)) {
        printf("Queue is empty!");
        return NULL;
    }
    return queue.items[queue.front];
}

int size(Queue queue) {
    return queue.size;
}