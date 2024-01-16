package Java.tests;

import Java.LinkedStack;

public class LinkedStackTest {
    public static void main (String[] args) {
        LinkedStack<Integer> myStack = new LinkedStack<>();
        myStack.push(1);
        myStack.push(2);
        myStack.push(3);
        System.out.println("Stack top is " + myStack.top());
        myStack.pop();
        System.out.println("Stack top is " + myStack.top());
        System.out.println("Stack size is " + myStack.size());
    }
}
