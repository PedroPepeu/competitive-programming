#include <iostream>

using namespace std;

unsigned long long fib(unsigned long long num) {
    if(num == 1) return 1;
    if(num == 0) return 0;


    return fib(num - 1) + fib(num - 2);
}

int main() {

    int n;

    cin >> n;
    cout << fib(n) << endl;
    return 0;

}
