#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> pot(vector<int> vec, int x, int n) {
    for(int i = x; i <= n; i*=x) {
        vec.push_back(i);
    }
    return vec;
}

vector<int> primes(vector<int> nm, int n) {
    vector<int> p;

    for(int i = 2; i <= n; i++) {
        int check = 1;
        for(int j = 2; j <= sqrt(i); j++) {
            if(i%j==0) {
                check = 0;
                break;
            }
        }
        if(check) p.push_back(i);
    }

    for(int x : p) {
        nm = pot(nm, x, n);
    }

    return nm;
}

int main() {
    int n;
    cin >> n;

    vector<int> num;
    vector<int> v (n, 1);    

    num = primes(num, n);

    cout << num.size() << endl;
    for(int i = 0; i < num.size(); i++) {
        if(i+1 == num.size()) cout << num[i] << endl;
        else cout << num[i] << " ";
    }

    return 0;
}
