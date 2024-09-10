#include <bits/stdc++.h>
#include <ios>

using namespace std;

struct Node {
    Node* next[1001];
};

Node* root;
Node* put(Node* node, vector<int> inp, int d);

void put(vector<int> inp) {
    root = put(root, inp, 0);
}

Node* put(Node* node, vector<int> inp, int d) {
    if (node == NULL) {
        node = new Node();
    }

    if (d == inp.size()) {
        return node;
    }

    int n = inp[d];
    node->next[n] = put(node->next[n], inp, d + 1);
    return node;
}

Node* get(Node* node, vector<int> inp, int d) {
    if(node == NULL) {
        return NULL;
    }

    if(d == inp.size()) {
        return node;
    }

    int n = inp[d];
    return get(node->next[n], inp, d+1);
}

void solve(vector<int> v) {
    vector<int> newV (v.size());
    int chck = 0, sum = 0;
    for(int i = 0; i < v.size(); i++) {
        newV[i] = abs(v[i]-v[(i+1)%v.size()]);
        if(newV[i]!=0) chck++;
        sum+=newV[i];
    }
    if(!chck) {
        cout << "ZERO" << endl;
        return;
    }
    Node* node = get(root, newV, 0);
    if(node == NULL) {
        put(newV);
    } else {
        cout << "LOOP" << endl;
        return;
    }
    solve(newV);
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t, aS;
    cin >> t;
    while(t--) {
        Node* root;
        cin >> aS;
        vector<int> v (aS);
        for(int i = 0; i < aS; i++) {
            cin >> v[i];
        }
        solve(v);
    }
    return 0;
}
