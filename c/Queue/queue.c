#include <stdio.h>
#include "queue.h"

void createQueue(Queue *queue)
{
    queue->back = MAX_SIZE - 1;
    queue->front = 0;
    queue->size = 0;
}

int isQueueEmpty(Queue *queue)
{
    return (queue->size == 0);
}

int isQueueFull(Queue *queue)
{
    return (queue->size == MAX_SIZE);
}

void enqueue(Queue *queue, QueueType item)
{
    queue->back = (queue->back + 1) % MAX_SIZE;
    queue->items[queue->back] = item;
    queue->size++;
}

QueueType dequeue(Queue *queue)
{
    QueueType item;
    queue->size--;
    item = queue->items[queue->front];
    queue->front = (queue->front + 1) % MAX_SIZE;
    return item;
}

QueueType front(Queue *queue)
{
    return queue->items[queue->front];
}

int queueSize(Queue *queue)
{
    return queue->size;
}