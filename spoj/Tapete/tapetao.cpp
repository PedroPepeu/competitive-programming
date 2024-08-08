#include <iostream>

using namespace std;

int main() {
    long int l, n, price = 0;
    cin >> l >> n;
    // l = comprimento
    // n = num of tapetes
    price += (l - n + 1) * (l - n + 1);
    price += n - 1;
    cout << price << endl;
    
    return 0;
}
