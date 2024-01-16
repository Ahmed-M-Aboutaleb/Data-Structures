package Java.tests;

import Java.LinkedList;

public class LinkedListTest {
    public static void main(String[] args) {
        LinkedList<Integer> myList = new LinkedList<>();
        myList.insert(1);
        System.out.println(myList);
        myList.insert(2, 1);
        System.out.println(myList);
        myList.insert(3, 0);
        System.out.println(myList);
        myList.erase(0);
        System.out.println(myList);
        myList.erase(1);
        System.out.println(myList);
        myList.erase();
        System.out.println("List size is: " + myList.size());
    }
}
