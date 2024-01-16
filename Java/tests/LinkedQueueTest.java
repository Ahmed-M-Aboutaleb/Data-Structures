package Java.tests;

import Java.LinkedQueue;

public class LinkedQueueTest {
    public static void main(String[] args) {
        LinkedQueue<Integer> myQueue = new LinkedQueue<>();
        myQueue.enqueue(1);
        myQueue.enqueue(2);
        myQueue.enqueue(3);
        System.out.println("Queue front is " + myQueue.front());
        myQueue.dequeue();
        System.out.println("Queue front is " + myQueue.front());
        System.out.println("Queue size is " + myQueue.size());
    }
}
