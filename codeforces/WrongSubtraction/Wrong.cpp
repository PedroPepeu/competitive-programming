#include <iostream>
#include <bitset>

using namespace std;

int n, k;

int main() {
    cin >> n;
    cin >> k;
    while(k--) {
        if(n % 10 == 0) n /= 10;
        else n -= 1;
    }
    cout << n << endl;
}
