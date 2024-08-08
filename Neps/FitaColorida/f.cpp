#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;

    cin >> n;
    
    vector<int> v;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0) v.push_back(i);
        else a[i] = 9;
    }

    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < n; j++) {
            if(a[j] == 0) continue;
            if(abs(j - v[i]) < a[j]) a[j] = abs(j - v[i]);
        }
    }

    for(int i = 0; i < n; i++) {
        if(i + 1 == n) cout << a[i] << endl;
        else cout << a[i] << " ";
    }

    return 0;
}
