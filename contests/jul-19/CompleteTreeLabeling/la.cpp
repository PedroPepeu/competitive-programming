#include <iostream>
#include <cmath>

using namespace std;

int ncalc(int k, int d) {
    int sum = 0;
    for(int i = 0; i <= d; i++) {
        sum += pow(k, i);
    }
    return sum;
}

int main() {
    int k, d;
    while(scanf("%d %d", &k, &d) == 2) {
        cout << ncalc(k, d) << endl;
    }

    return 0;
}
