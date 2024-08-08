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
            
            X = max(x, X);
            Y = min(y, Y);
            U = min(u, U);
            V = max(v, V);
        }

        if(X > U || Y < V) {
            X = -1;
        }

        cout << "Teste " << test++ << endl;
        if(X != -1) cout << X << " " << Y << " " << U << " " << V << endl;
        else cout << "nenhum" << endl;
        cout << endl;
    }

    return 0;
}
