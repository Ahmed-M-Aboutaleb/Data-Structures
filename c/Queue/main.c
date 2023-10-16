#include <stdio.h>
#include "queue.h"

int main() {
    Queue myQueue;
    init(&myQueue);
    enqueue(&myQueue, 1);
    enqueue(&myQueue, 2);
    enqueue(&myQueue, 3);
    printf("Queue front is %d\n", front(myQueue));
    dequeue(&myQueue);
    printf("Queue front is %d\n", front(myQueue));
    printf("Queue size is %d\n", size(myQueue));
    return 0;
}