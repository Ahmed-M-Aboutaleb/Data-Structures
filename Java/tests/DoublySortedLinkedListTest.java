package Java.tests;

import Java.DSLLType;
import Java.DoublySortedLinkedList;

public class DoublySortedLinkedListTest {
    public static void main(String[] args) {
        DoublySortedLinkedList<Character> list = new DoublySortedLinkedList<>();
        DSLLType<Character> d1 = new DSLLType<>(10, 'A'), d2 = new DSLLType<>(30, 'C'), d3 = new DSLLType<>(20, 'B'),
                d4 = new DSLLType<>(50, 'E'),
                d5 = new DSLLType<>(40, 'D'), d6 = new DSLLType<>(5, '#');
        list.insert(d1);
        list.insert(d2);
        list.insert(d3);
        System.out.println(list);
        list.insert(d4);
        list.insert(d5);
        list.insert(d6);
        System.out.println(list);
        list.erase(10);
        System.out.println(list);
    }
}
