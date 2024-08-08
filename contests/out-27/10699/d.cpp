#include <iostream>
#include <vector>

using namespace std;

int search(int n, vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == n) return 0;
    }
    return 1;
}

int main() {
    int p[] = {2, 3, 5, 7};
    int n, s = 0;
    while(cin >> n && n != 0) {
        int ns = n;
        vector<int> v;
        while(n != 1 && (v.size() <= 4)) {
            int check = 1;
            for(int i = 0; i < 4; i++) {
                if(n % p[i] == 0 && search(p[i], v)) {
                    v.push_back(p[i]);
                    n/=p[i];
                    s++;
                    break;
                }
            }
            if(check) break;
        }
        cout << ns << " : " << s << endl;
    }
    return 0;
}
