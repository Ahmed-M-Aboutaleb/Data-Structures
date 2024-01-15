package Java;

import java.util.EmptyStackException;

public class Stack<Type> {

    private final int MAX_SIZE = 100;
    private int size;
    private Type[] data;

    @SuppressWarnings("unchecked")
    public Stack() {
        this.size = 0;
        this.data = (Type[]) new Object[MAX_SIZE];
    }

    public boolean isEmpty() {
        return (this.size == 0);
    }

    public boolean isFull() {
        return (this.size == MAX_SIZE - 1);
    }

    public boolean push(Type value) {
        if (this.isFull())
            throw new IllegalStateException("Stack overflow");
        this.data[this.size++] = value;
        return true;
    }

    public Type pop() {
        if (this.isEmpty())
            throw new EmptyStackException();
        return this.data[--this.size];
    }

    public Type top() {
        if (this.isEmpty())
            throw new EmptyStackException();
        return this.data[this.size - 1];
    }

    public int size() {
        return this.size;
    }
}