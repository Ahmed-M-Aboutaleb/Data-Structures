#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define MAX_SIZE 100

typedef int QueueType;

typedef struct queue
{
    int front;
    int back;
    int size;
    QueueType items[MAX_SIZE];
} Queue;

void createQueue(Queue *queue);
int isQueueEmpty(Queue *queue);
int isQueueFull(Queue *queue);
void enqueue(Queue *queue, QueueType item);
QueueType dequeue(Queue *queue);
QueueType front(Queue *queue);
int queueSize(Queue *queue);

#endif // QUEUE_H_INCLUDED