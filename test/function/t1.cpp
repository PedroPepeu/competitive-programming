#include <iostream>
#include <string>

using namespace std;

void sum(int& a, int& b) {
    a*=2;
}

int main() {
    int aa = 1;
    int bb = 3;

    sum(aa, bb);

    cout << aa << endl;
    cout << bb << endl;
}
