#include <iostream>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toastByBottle = (k * l) / nl;
    int toastByLemon = c * d;
    int toastBySalt = p / np;

    toastByBottle /= n;
    toastByLemon /= n;
    toastBySalt /= n;

    if(toastByBottle <= toastByLemon && toastByBottle <= toastBySalt) cout << toastByBottle << endl;
    else if(toastByLemon <= toastByBottle && toastByLemon <= toastBySalt) cout << toastByLemon << endl;
    else if(toastBySalt <= toastByLemon && toastBySalt <= toastByBottle) cout << toastBySalt << endl;
    
    return 0;
}
