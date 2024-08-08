#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, d, r;
    while(scanf("%d %d %d", &n, &d, &r) && (n != 0 && d != 0 && r != 0)) {
        vector<int> m;
        vector<int> a;

        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            m.push_back(temp);
        }

        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }

        sort(m.begin(), m.end());
        sort(a.begin(), a.end());

        int sum = 0;

        for(int i = 0; i < n; i++) {

            int pos = 0;

            for(int j = 0; j < n; j++) {
            
                if(a[j] == -1) continue;
                
                if(m[i] + a[j] == d) {
                    a[j] = -1;
                    break;
                }
                
                if(m[i] + a[j] > d) {
                    if(pos == 0) {
                        pos = (a[j] + m[i]) - d;
                        a[j] = -1;
                        break;
                    } else {
                        m[j - 1] = -1;
                        break;
                    }
                }
            
            }

            sum += pos;

        }

        cout << sum * r << endl;
    }


    return 0;
}
