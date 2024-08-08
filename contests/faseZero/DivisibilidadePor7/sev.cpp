#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << endl;

    while(n >= 10) {
        n = (n / 10) * 3 + n % 10;
        cout << n << endl;
    }

    return 0;
}
