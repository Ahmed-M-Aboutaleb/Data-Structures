package Java;

public class Node<Type> {
    private Node<Type> leftNode, rightNode;
    private Type data;

    public Node() {
        this.leftNode = null;
        this.rightNode = null;
        this.data = null;
    }

    public Node(Node<Type> leftNode, Node<Type> rightNode, Type data) {
        this.leftNode = leftNode;
        this.rightNode = rightNode;
        this.data = data;
    }

    public Node<Type> getLeft() {
        return this.leftNode;
    }

    public boolean setLeft(Node<Type> leftNode) {
        this.leftNode = leftNode;
        return true;
    }

    public Node<Type> getRight() {
        return this.rightNode;
    }

    public boolean setRight(Node<Type> rightNode) {
        this.rightNode = rightNode;
        return true;
    }

    public Type getData() {
        return this.data;
    }

    public boolean setData(Type data) {
        this.data = data;
        return true;
    }
}