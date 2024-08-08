#include <bits/stdc++.h>

int[] arr = new arr[100];
int i = 0;

int maxbalance() {
    for(int m = 0, sumprev = 0, sum = 0; m < arr.length && sumprev < sum; m++) {
        
    }
}

void balancing(int x) {
    arr[i] = x;
    i++;
}

int main() {
    int tests, values, preValues, balance = 100;
    cin >> tests;
    tests--;
    cin >> preValues;
    while(tests--) {
        cin >> values;
        balancing(values + preValues);    
        cin >> preValues;
        balancing(values + preValues);
    }
    int answer = maxbalance + 100;
    cout << answer << endl;

}
