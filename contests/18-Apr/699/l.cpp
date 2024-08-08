#include <bits/stdc++.h>

using namespace std;

struct node {
    node* left;
    node* right;
    int val;
};

queue<int> q;
map<int, int> mp;

void fillQ() {
    string s;
    getline(cin, s);
    int check = 0;
    for(auto &x : s) {
        if(x == ' ') {
            check = 0;
            continue;
        }
        if(x == '-') {
            check = 1;
            continue;
        }
        int cur = (int) x - 48;
        if(check) {
            cur*=-1;
            q.push(cur);
            continue;
        }
        q.push(cur);
    }
}

node* makeBT(node* root) {
    if(q.empty()) {
        fillQ();
    }
    int cur = q.front();
    q.pop();

    if(cur == -1) {
        return NULL;
    }

    root = new node();
    root->val = cur;
    root->left = makeBT(root->left);
    root->right = makeBT(root->right);
    return root;
}

void summing(node* root) {
    // sum the nodes by the x cordinade
}

int main() {
    string s;
    while(getline(cin, s)) {
        int check = 0;
        for(auto &x : s) {
            if(x == ' ') {
                check = 0;
                continue;
            }
            if(x == '-') {
                check = 1;
                continue;
            }
            int cur = (int) x - 48;
            if(check) {
                cur*=-1;
                q.push(cur);
                continue;
            }
            q.push(cur);
        }

        if(q.front() == -1) {
            return 0;
        }
        
        node* root;
        root = makeBT(root);    
    
        cout << "worked" << endl;
        
    }
    return 0;
}
