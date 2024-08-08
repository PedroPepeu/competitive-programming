#include <iostream>

using namespace std;

int x1, y1, x2, y2, a, b, c;

int isInLine(int xp, yp) {
    return ((a * xp) + (b * yp) + c) == 0;
}

// falta fazer funcionar para qualquer tipo de reta

int main() {

    int t;
    cin >> t;
    while(t--) {
        cin >> x1 >> y1 >> x2 >> y2;
        a = y1 - y2;
        b = x2 - x1;
        c = ((x1 * y2) - (x2 * y1));
             
    }
}
