package Java;

/**
 * DoublySortedLinkedList
 */
public class DoublySortedLinkedList<Type> extends DoublyLinkedList<DSLLType<Type>> {
    @Override
    public boolean insert(DSLLType<Type> value) {
        Node<DSLLType<Type>> travNode = this.getHead(), newNode = new Node<>();
        newNode.setData(value);
        this.size++;
        if (travNode == null) {
            this.setHead(newNode);
            return true;
        }
        while (value.key > travNode.getData().key && travNode.getRight() != null) {
            travNode = travNode.getRight();
        }
        if (travNode.getData().key < value.key && travNode.getRight() == null) {
            newNode.setLeft(travNode);
            travNode.setRight(newNode);
            return true;
        }
        newNode.setRight(travNode);
        newNode.setLeft(travNode.getLeft());
        if (travNode.getLeft() != null)
            travNode.getLeft().setRight(newNode);
        else
            this.setHead(newNode);
        travNode.setLeft(newNode);
        return true;
    }

    @Override
    public boolean erase(int key) {
        Node<DSLLType<Type>> travNode = this.getHead(), tempNode;
        while (travNode != null) {
            if (travNode.getData().key == key) {
                this.size--;
                tempNode = travNode;
                tempNode.getLeft().setRight(tempNode.getRight());
                tempNode.getRight().setLeft(travNode.getLeft());
                return true;
            }
            travNode = travNode.getRight();
        }
        return true;
    }

    @Override
    public String toString() {
        String result = "";
        Node<DSLLType<Type>> travNode = this.head;
        while (travNode != null) {
            result += travNode.getData().data + " ";
            travNode = travNode.getRight();
        }
        return result;
    }
}