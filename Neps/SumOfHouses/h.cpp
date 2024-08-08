#include <iostream>
#include <vector>

using namespace std;

int bs(vector<int> a, int l, int h, long long x) {
    if (h >= l) {
        int mid = l + (h - l) / 2;
  
        if (a[mid] == x) return mid;
        if (a[mid] > x) return bs(a, l, mid - 1, x);
  
        return bs(a, mid + 1, h, x);
    }
    return -1;
}

int main() {
    vector<int> v;
    int n, a, b, x;
    cin >> n;
    while(n--) {
        scanf("%d", &x);
        v.push_back(x);
    }

    long long k;
    cin >> k;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] + v[v.size() - 1] < k) continue;
        if(k - v[i] == 0) continue;


        int ans = bs(v, 0, v.size(), k - v[i]);
        if(ans != -1) {
            a = v[i];
            b = v[ans];
            break;
        }
    }

    cout << a << " " << b << endl;
    return 0;
}
