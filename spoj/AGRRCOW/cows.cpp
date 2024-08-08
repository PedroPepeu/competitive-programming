#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int cows;
int lastValue;

int validate(int mid, vector<int> cowPos) {
    int compCows = cows - 1;
    int lastPos = cowPos[0];
    for(int i = 1; i < cowPos.size(); i++) {
        if((cowPos[i] - lastPos) >= mid) {
            lastPos = cowPos[i];
            compCows--;
        }
    }
    if(compCows <= 0) return 1;
    return 0;
}

int bs(int lo, int hi, vector<int> v) {
    int mid = (lo + hi) / 2;
    if(lo > hi) return lastValue;

    if(validate(mid, v) == 1) {
        lastValue = mid;
        return bs(mid + 1, hi, v);
    }
    return bs(lo, mid - 1, v);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int size;
        vector<int> cowPos;
        cin >> size >> cows;
        for(int i = 0; i < size; i++) {
            int n;
            cin >> n;
            cowPos.push_back(n);
        }
        sort(cowPos.begin(), cowPos.end());
        
        int mn = 1e9;

        for(int i = 1; i < size; i++) {
            mn = min(mn, cowPos[i] - cowPos[i - 1]);
        }

        cout << bs(mn, cowPos[size - 1] - cowPos[0], cowPos) << endl;
    }

    return 0;
}
