#include <stdio.h>
#include "LinkedQueue.h"

int main()
{
    LinkedQueue myQueue;
    createLQ(&myQueue);
    enqueueLQ(&myQueue, 1);
    enqueueLQ(&myQueue, 2);
    enqueueLQ(&myQueue, 3);
    printf("My Front is %d \n", frontLQ(&myQueue));
    dequeueLQ(&myQueue);
    printf("My Front is %d \n", frontLQ(&myQueue));
    return 0;
}