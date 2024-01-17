package Java;

public class DoublyLinkedList<Type> extends LinkedList<Type> {

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
        newNode.setLeft(travNode);
        travNode.setRight(newNode);
        this.size++;
        return true;
    }

    @Override
    public boolean erase(int index) {
        if (index >= this.size) {
            throw new ArrayIndexOutOfBoundsException("Index is out of bounds.");
        }
        Node<Type> travNode = this.head, deletedNode;
        if (index == 0) {
            this.head = travNode.getRight();
            travNode = null;
            this.size--;
            return true;
        }
        for (int i = 0; i < index - 1; i++) {
            travNode = travNode.getRight();
        }
        deletedNode = travNode.getRight();
        travNode.setRight(deletedNode.getRight());
        if (deletedNode.getRight() != null)
            deletedNode.getRight().setLeft(travNode);
        deletedNode = null;
        this.size--;
        return true;
    }
}