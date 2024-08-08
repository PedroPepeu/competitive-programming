#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    vector<int> v;

    cin >> n;

    while(n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int sum, c1, c2, auth = 0;
    cin >> sum;

    for(int i = 0; i < sizeof(v) - 1; i++) {
        for(int j = i + 1; j < sizeof(v); j++) {
            if(v[i] + v[j] == sum) {
                c1 = v[i];
                c2 = v[j];
                auth = 1;
                break;
            }
        }
        if(auth == 1) break;
    }

    if(c1 > c2) {
        int temp = c2;
        c2 = c1;
        c1 = temp;
    }

    cout << c1 << " " << c2 << endl;

    return 0;

}
