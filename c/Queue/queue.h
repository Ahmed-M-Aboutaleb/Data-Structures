#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define MAX_SIZE 100

typedef int Type;

typedef struct queue
{
    int front;
    int back;
    int size;
    Type items[MAX_SIZE];
} Queue;

void createQueue(Queue *queue);
int isQueueEmpty(Queue *queue);
int isQueueFull(Queue *queue);
void enqueue(Queue *queue, Type item);
Type dequeue(Queue *queue);
Type front(Queue *queue);
int queueSize(Queue *queue);

#endif // QUEUE_H_INCLUDED