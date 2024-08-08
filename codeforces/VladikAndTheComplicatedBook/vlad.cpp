#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];
    
    int l, x, r;
    while(m--) {
        cin >> l >> r >> x;
        int e = a[x-1], counter = 0;
        for(int i = l-1; i < r; i++) if(a[i] < e) counter++;
        
        if(counter+l == x) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
