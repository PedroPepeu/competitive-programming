#include <iostream>

using namespace std;

int main() {
    long long n;
        int co = 0;
    while(cin >> n && n != 0) {
        for(long long i = 2; i < n+1; i++) {
            if(n%i == 0) {
                co++;
            }
        }

        if(co % 2 == 0) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
