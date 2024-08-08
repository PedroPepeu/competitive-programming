#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, y;
    x = y = n/2;
    if(n % 2 == 0) {
        x--;
        y++;
    } else y++;
    if(x > 1) { // error in this while loop THEY ARE COPRIMES
        for(int i = 2; y % i == 0 && x % i == 0; i++) {
            x--;
            y++;
        }
    }

    cout << x << " " << y << endl;
}
