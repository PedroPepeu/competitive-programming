#include <iostream>

using namespace std;

int main() {
    int c, fw, aw, pw, t, p, as;
    while(cin >> t && (t!=0)) {

        cin >> fw;
        cin >> aw;
        t-=2;
        c = 0;

        if(aw > fw) {
            p = 1;
            as = 1;
        } else {
            p = 0;
            as = 0;
        }
        c++;
        pw = aw;

        while(t--) {
            
            cin >> aw;
            if(aw > pw && !p) {
                c++;
                p = 1;
            } else if (aw < pw && p) {
                c++;
                p = 0;
            }

            pw = aw;

        }

        // p == 1, ponto em cima
        // p == 0, ponto em baixo

        if((fw > aw && !p && !as) || (fw < aw && p && as)) c++;
        
        cout << c << endl;
    }
    return 0;
}
