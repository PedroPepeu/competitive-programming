#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n;
    vector<int> v;
    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        if(i + 1 == v.size()) cout << v[i] << endl;
        else cout << v[i] << " ";
    }

    return 0;

}
