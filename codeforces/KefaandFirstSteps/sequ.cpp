#include <iostream>

using namespace std;

int main() {

    int n, curV, prevV, curSum = 1, totalS = 1;

    cin >> n;
    cin >> prevV;
    n--;

    while(n--) {
        cin >> curV;
        if(curV >= prevV) curSum++;
        else curSum = 1;
        if(curSum > totalS) totalS = curSum;
        prevV = curV;
    }

    cout << totalS << endl;

    return 0;
}
