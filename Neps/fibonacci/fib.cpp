#include <iostream>
#include <string.h>

using namespace std;

int mem[33];

int dp(int fib) {
    if(fib == 0) return 1;
    if(fib == 1) return 1;
    if(mem[fib] != -1) return mem[fib];
    else return mem[fib] = dp(fib - 1) + dp(fib - 2);
}

int main() {
    int n;
    memset(mem, -1, sizeof(mem));

    cin >> n;

    cout << dp(n) << endl;
    
}
