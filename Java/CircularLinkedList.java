package Java;

public class CircularLinkedList<Type> extends LinkedList<Type> {

    @Override
    public boolean insert(Type value) {
        Node<Type> newNode = new Node<>(), travNode;
        newNode.setData(value);
        newNode.setRight(this.head);
        this.head = newNode;
        int travSize = this.size + 1;
        travNode = this.head;
        while (--travSize != 0) {
            travNode = travNode.getRight();
        }
        travNode.setRight(this.head);
        this.size++;
        return true;
    }

    @Override
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

    @Override
    public boolean erase(int index) {
        if (index >= this.size) {
            throw new ArrayIndexOutOfBoundsException("Index is out of bounds.");
        }
        Node<Type> travNode = this.head, tempNode;
        if (index == 0) {
            int travSize = this.size;
            while (--travSize != 0) {
                travNode = travNode.getRight();
            }
            travNode.setRight(this.head.getRight());
            travNode = this.head;
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

    @Override
    public String toString() {
        String result = "";
        Node<Type> travNode = this.head;
        int i = 0;
        while (i < this.size) {
            i++;
            result += travNode.getData() + " ";
            travNode = travNode.getRight();
        }
        return result;
    }
}