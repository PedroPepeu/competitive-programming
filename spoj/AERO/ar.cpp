#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    int a, v, l, g, times = 1;
    while(cin >> a >> v && a + v != 0) {

        if(times > 1) cout << endl;

        int ae[a];
        memset(ae, 0, sizeof(ae));

        vector<int> ve;
        
        if(v == 0) ve.push_back(0);
        else {
        
            while(v--) {
                cin >> l >> g;
                ae[l-1]++;
                ae[g-1]++;
            }

            int maior = 0;
            for(int i = 0; i < a; i++) {
                if(ae[i] > maior) maior = ae[i];
            }

            for(int i = 0; i < a; i++) {
                if(ae[i] == maior) ve.push_back(i+1);
            }
        }

        printf("Teste %d\n", times);
        for(int i = 0; i < ve.size(); i++) {
            if(i + 1 == ve.size()) cout << ve[i] << endl;
            else cout << ve[i] << " ";
        }
        times++;
    }
    return 0;
}
