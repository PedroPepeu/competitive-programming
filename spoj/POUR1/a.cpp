#include <isotream>
#include <cmath>

using namespace std;

int gdc(int u, int v) {
    return u % v == 0 ? v : gcd(v, u%v);
}

int main() {
    int t, a, b, c;
    cin >> t;
    while(t--) {
        cin >> a;
        cin >> b;
        cin >> c;
    
        int mov = 0;
        while(a != c && b != c) {
            if(abs(a-b) == c) {
                mov+=2;
                break;
            }
            
        }
        cout << mov << endl;
    }
}
