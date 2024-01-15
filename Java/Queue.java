package Java;

public class Queue<Type> {
    private final int MAX_SIZE = 100;
    private int front;
    private int back;
    private int size;
    private Type[] data;

    @SuppressWarnings("unchecked")
    public Queue() {
        this.front = 0;
        this.back = MAX_SIZE - 1;
        this.size = 0;
        this.data = (Type[]) new Object[MAX_SIZE];
    }

    public boolean isEmpty() {
        return (this.size == 0);
    }

    public boolean isFull() {
        return (this.size == MAX_SIZE);
    }

    public boolean enqueue(Type value) {
        if (this.isFull())
            throw new IllegalStateException("Queue overflow");
        this.data[(++this.back) % MAX_SIZE] = value;
        this.size++;
        return true;
    }

    public Type dequeue() {
        if (this.isEmpty())
            throw new IllegalStateException("Queue underflow");
        this.size--;
        Type item = this.data[this.front];
        this.front = ++this.front % MAX_SIZE;
        return item;
    }

    public Type front() {
        if (this.isEmpty())
            throw new IllegalStateException("Queue underflow");
        return this.data[this.front];
    }

    public int size() {
        return this.size;
    }
}
