package Java.tests;

import Java.Stack;

public class StackTest {
    public static void main (String[] args) {
        Stack<Integer> myStack = new Stack<Integer>();
        myStack.push(1);
        myStack.push(2);
        myStack.push(3);
        System.out.println("Stack top is " + myStack.top());
        myStack.pop();
        System.out.println("Stack top is " + myStack.top());
        System.out.println("Stack size is " + myStack.size());
    }
}
