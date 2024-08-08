#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        int t;
        cin >> t;

        int a[t];

        int cm = 0, m = INT_MIN, x;
        for(int i = 0; i < t; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < t; i++) {
            cm = 0;
            int check = 0;
            for(int j = i; j < t; j++) {
                cm += a[j];
                if(a[j] < 0 && check == 0) {
                    check = 1;
                    i = j;
                }
            }

            if(cm > m) m = cm;
        }

        cout << m << endl;
    }

    return 0;
}
