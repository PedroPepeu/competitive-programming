#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    Node* children[5];
};

Node* root;

Node* put(Node* node, string key, int value, int d) {
    if(node == NULL) {
        node = new Node();
    }

    if(d == key.size()) {
        node->value = value;
        return node;
    }

    int n = (int) key[d] - 97;
    node->children[n] = put(node->children[n], key, value, d+1);
    return node;
}

Node* get(Node* node, string key, int d) {
    if(node == NULL) {
        return NULL;
    }

    if(d == key.size()) {
        return node;
    }

    int n = (int) key[d] - 97;
    return get(node->children[n], key, d+1);
}

int main() {
    return 0;
}
