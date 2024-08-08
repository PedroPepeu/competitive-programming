#include <iostream>
#include <climits>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int lw = INT_MAX, hi = INT_MIN, x;
        for(int i = 0; i < n; i++) {
            cin >> x;
            if(x < lw) lw = x;
            if(x > hi) hi = x;
        }

        cout << hi-lw << endl;
    }
    return 0;
}
