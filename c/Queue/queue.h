#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define MAX_SIZE 100

typedef int Type;

typedef struct queue {
    int front;
    int back;
    int size;
    Type items[MAX_SIZE];
} Queue;

void init(Queue *queue);
int isEmpty(Queue queue);
int isFull(Queue queue);
void enqueue(Queue *queue, Type item);
Type dequeue(Queue *queue);
Type front(Queue queue);
int size(Queue queue);

#endif // QUEUE_H_INCLUDED