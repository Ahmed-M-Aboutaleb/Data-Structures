package Java;

public class LinkedQueue<Type> {
    private LinkedList<Type> list;

    public LinkedQueue() {
        this.list = new LinkedList<>();
    }

    public boolean isEmpty() {
        return (this.list.isEmpty());
    }

    public boolean enqueue(Type value) {
        return this.list.insert(value, this.size());
    }

    public Type dequeue() {
        if (this.isEmpty())
            throw new IllegalStateException("Queue underflow");
        Type element = this.list.getHead().getData();
        this.list.erase(0);
        return element;
    }

    public Type front() {
        if (this.isEmpty())
            throw new IllegalStateException("Queue underflow");
        return this.list.getHead().getData();
    }

    public int size() {
        return this.list.size();
    }
}
