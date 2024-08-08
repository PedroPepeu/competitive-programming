#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[] = {1, 2, 2, 0};
    int sum = 0;

    for(int i = arr.size(), counter = 1; i > 1; i++) {
        sum += arr[i] * counter;
    }

    sum++;

    cout << sum << endl;
}
