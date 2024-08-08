#include <bits/stdc++.h>

using namespace std;

int main() {

    int boxes, value, biggest = 0, sum = 0;
    cin >> boxes;
    while(boxes--) {
        cin >> value;
        sum += value;
        if(sum > 0) {
            biggest += sum;
            sum = 0;
        }
    }

    cout << biggest + 100 << endl;

}