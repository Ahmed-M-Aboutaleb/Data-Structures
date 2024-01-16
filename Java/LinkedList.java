package Java;

public class LinkedList<Type> {
    private Node<Type> head;
    private int size;

    public LinkedList() {
        this.head = null;
        this.size = 0;
    }

    public boolean isEmpty() {
        return (this.size == 0);
    }

    public Node<Type> getHead() {
        return this.head;
    }

    public boolean setHead(Node<Type> head) {
        this.head = head;
        return true;
    }

    public boolean insert(Type value) {
        Node<Type> newNode = new Node<>();
        newNode.setData(value);
        newNode.setRight(this.head);
        this.head = newNode;
        this.size++;
        return true;
    }

    public boolean insert(Type value, int index) {
        if (index > this.size) {
            throw new ArrayIndexOutOfBoundsException("Index is out of bounds.");
        }
        if (index == 0) {
            this.insert(value);
            return true;
        }
        Node<Type> travNode = this.head, newNode = new Node<>();
        ;
        while (--index != 0) {
            travNode = travNode.getRight();
        }
        newNode.setData(value);
        newNode.setRight(travNode.getRight());
        travNode.setRight(newNode);
        this.size++;
        return true;
    }

    public boolean erase() {
        this.head = null;
        this.size = 0;
        return true;
    }

    public boolean erase(int index) {
        if (index >= this.size) {
            throw new ArrayIndexOutOfBoundsException("Index is out of bounds.");
        }
        Node<Type> travNode = this.head, tempNode;
        if (index == 0) {
            this.head = travNode.getRight();
            travNode = null;
            this.size--;
            return true;
        }
        for (int i = 0; i < index - 1; i++) {
            travNode = travNode.getRight();
        }
        tempNode = travNode.getRight();
        travNode.setRight(tempNode.getRight());
        tempNode = null;
        this.size--;
        return true;
    }

    public String toString() {
        String result = "";
        Node<Type> travNode = this.head;
        while (travNode != null) {
            result += travNode.getData() + " ";
            travNode = travNode.getRight();
        }
        return result;
    }

    public int size() {
        return this.size;
    }
}
