#include <iostream>
#include <cstring>

using namespace std;

unsigned long long mem[5000];

unsigned long long fib(unsigned long long num) {
    if(num == 1) return 1;
    if(num == 0) return 0;

    if(mem[num] != -1) return mem[num];

    return mem[num] = fib(num - 1) + fib(num - 2);
}

int main() {

    int n;
    memset(mem, -1, sizeof(mem));

    cin >> n;
    cout << fib(n) << endl;
    return 0;

}
