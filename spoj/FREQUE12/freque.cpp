#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int v[1000000];

int main() {

    int n, temp;
    int i = 0;
    cin >> n;

    memset(v, 0, sizeof(v));

    while(n--) {
        cin >> temp;
        if(v[temp] == 0) {
            v[temp] = 1;
            i++;
        }
    }

    cout << i << endl;

    return 0;
}
