package Java;

import java.util.EmptyStackException;

public class LinkedStack<Type> {
    private LinkedList<Type> list;

    public LinkedStack() {
        this.list = new LinkedList<>();
    }

    public boolean isEmpty() {
        return (this.list.isEmpty());
    }

    public boolean push(Type value) {
        return this.list.insert(value);
    }

    public Type pop() {
        if (this.isEmpty())
            throw new EmptyStackException();
        Type element = this.list.getHead().getData();
        this.list.erase(0);
        return element;
    }

    public Type top() {
        if (this.isEmpty())
            throw new EmptyStackException();
        return this.list.getHead().getData();
    }

    public int size() {
        return this.list.size();
    }
}
