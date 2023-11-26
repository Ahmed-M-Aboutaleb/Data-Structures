#include <stdio.h>
#include "LinkedQueue.h"

int main() {
    LinkedQueue myQueue;
    initQueue(&myQueue);
    enqueue(&myQueue, 1);
    enqueue(&myQueue, 2);
    enqueue(&myQueue, 3);
    printf("My Front is %d \n", front(myQueue));
    dequeue(&myQueue);
    printf("My Front is %d \n", front(myQueue));
    return 0;
}