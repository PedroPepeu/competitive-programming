#include <iostream>
#include <cstring>

using namespace std;

int mem[5000];

int fac(int n) {
    if(n == 1) return 1;
    if(n == 0) return 0;

    if(mem[n] != -1) return mem[n];

    return mem[n] = n * fac(n-1);
}

int main() {

    int n;
    memset(mem, -1, sizeof(mem));

    while(cin >> n && n != 0) {
        cout << fac(n) << endl;
    }
    return 0;
}
