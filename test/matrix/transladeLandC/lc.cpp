#include <bits/stdc++.h>

using namespace std;

int k = 1;

vector<vector<int>> a = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
              };

vector<int> trnsH (vector<int> v) {
    int sv;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sv = v[(i+k)%3][j]; 
        }
    }

    return v;
}


int main() {
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[i][j];
            if(j+1 == 3) cout << endl;
            else cout << " ";
        }
    }
}
