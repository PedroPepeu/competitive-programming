#include <iostream>

using namespace std;

int n, m;

int wins() {
    int fst = n/m;
    int scn = n%m;

    if(n % (m+1)) return 0;
    else return 1;
}

int main() {
    cin >> n >> m;

    if(wins() == 1) cout << "Carlos" << endl;
    else cout << "Paula" << endl;

    return 0;
}
