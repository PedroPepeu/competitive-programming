#include <iostream>

using namespace std;

int main() {
    long long a, b;

    while(cin >> a >> b) {

        if(b > a) {
            long long temp = b;
            b = a;
            a = temp;
        }

        cout << a - b << endl;

    }

    return 0;
    
}
