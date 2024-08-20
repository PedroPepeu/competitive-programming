public class Rway<Value> {

    private static final int R = 256;
    private Node root = new Node();
    // root acts like an sentinel for the tree

    private static class Node {
        private Object value;
        private Node[] next = new Node[R];
    }

    public void put(String key, Value val) {
        root = put(root, key, val, 0);
    }

    private Rway.Node put(Rway.Node node, String key, Value val, int d) {
        // if the current node does not exist, create one
        if(node == null) {
            node = new Node();
        }

        // set up
        if(d == key.length()) {
            node.value = val;
            return node;
        }

        char c = key.charAt(d);
        node.next[c] = put(node.next[c], key, val, d+1);
        return node;
    }

    public boolean contains(String key) {
        return get(key) != null;
    }

    public Value get(String key) {
        Rway.Node node = get(root, key, 0);
        if(node == null) 
            return null;
        return (Value) node.value;
    }

    private Rway.Node get(Rway.Node node, String key, int d) {
        if (node == null) {
            return null;
        }

        if (d == key.length()) {
            return node;
        }

        char c = key.charAt(d);
        return get(node.next[c], key, d+1);
    }
}
