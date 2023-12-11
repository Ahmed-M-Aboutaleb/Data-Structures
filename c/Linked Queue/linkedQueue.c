#include "linkedQueue.h"

void createLQ(LinkedQueue *queue)
{
    createList(queue);
}

int isEmptyLQ(LinkedQueue *queue)
{
    return isListEmpty(queue);
}

void enqueueLQ(LinkedQueue *queue, ListType data)
{
    insertList(queue, queue->size, data);
}

void dequeueLQ(LinkedQueue *queue)
{
    eraseList(queue, 0);
}

ListType frontLQ(LinkedQueue *queue)
{
    return queue->head->data;
}

int sizeLQ(LinkedQueue *queue)
{
    return sizeList(queue);
}