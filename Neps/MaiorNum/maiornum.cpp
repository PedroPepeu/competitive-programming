#include <iostream>

using namespace std;

int main() {
    int maxNum = 0, n;
    while(cin >> n && n != 0) {
        if(n > maxNum) maxNum = n;
    }

    cout << maxNum << endl;
}
