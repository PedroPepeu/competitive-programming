#include <iostream>
#include <cinttypes>
#include <cstring>

using namespace std;

typedef intmax_t imt;

imt a[500];

imt fact(imt f) {
    if(f == 0 || f == 1) return 1;
    if(a[f] != -1) return a[f];
    return a[f] = fact(f-1) * f;
}

int main() {
    imt n;
    memset(a, -1, sizeof(a));
    while(cin >> n) {
        cout << n << "!" << endl;
        printf("%" PRIu64"\n", fact(n));
    }
    return 0;
}
