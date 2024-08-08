#include <iostream>
#include <climits>

using namespace std;

int main() {
    int areas, test = 0;
    while(cin >> areas && areas != 0) {
        int x, y, u, v, check = 0;

        int Xl, Yl, Ul, Vl;
        Ul = Yl = INT_MAX;
        Xl = Vl = INT_MIN;

        while(areas--) {
            cin >> x >> y >> u >> v;
        
            if(check) continue;
            if(x>=Ul||y<=Vl||u<=Xl||v>=Yl) {
                check = 1;
                continue;
            }

            if(x>=Xl) {
                Xl = x;
            }
            if(y<=Yl) {
                Yl = y;
            }
            if(u<=Ul) {
                Ul = u;
            }
            if(v>=Vl) {
                Vl = v;
            }
        }

        test++;
        cout << "Teste " << test << endl;
        if(check) cout << "nenhum" << endl;
        else cout << Xl << " " << Yl << " " << Ul << " " << Vl << endl;
        cout << endl;
    }
    return 0;
}
