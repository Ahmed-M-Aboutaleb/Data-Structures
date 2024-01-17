package Java.tests;

import Java.DoublyLinkedList;

public class DoublyLinkedListTest {
    public static void main(String[] args) {
        DoublyLinkedList<Integer> myList = new DoublyLinkedList<>();
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
