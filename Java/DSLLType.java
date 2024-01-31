package Java;

public class DSLLType<Type> {
    public int key;
    public Type data;

    public DSLLType() {
        this.key = 0;
    }

    public DSLLType(int key, Type data) {
        this.key = key;
        this.data = data;
    }
}
