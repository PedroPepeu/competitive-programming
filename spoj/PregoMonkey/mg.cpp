#include <iostream>
#include <utility>
#include <cmath>
#include <climits>

using namespace std;

int main() {

    int test = 1;

    int n;
    while(cin >> n && n != 0) {
        int x, y, u, v, X, Y, U, V;
        
        Y = U = INT_MAX;
        X = V = INT_MIN;

        while(n--) {
            cin >> x >> y >> u >> v;

            if(x > X) {
                X = x;
            }

            if(y < Y) {
                Y = y;
            }

            if(u <= U) {
                U = u;
            }

            if(v > V) {
                V = v;
            }
        }

        int area = abs(X - U) * abs(Y - V);
        
        if(X >= U || Y <= V) {
            X = Y = U = V = -1;
        }
    
        cout << "Teste " << test++ << endl;
        if(X != -1 && area > 0) cout << X << " " << Y << " " << U << " " << V << endl;
        else cout << "nenhum" << endl;
        cout << endl;
    }

    return 0;
}
