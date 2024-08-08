#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec;

void isPrime(long n){
    long r = sqrt(n);
    bool prime = true;
    for(int i = 3; i <= r; i+=2){
        if(n % i == 0){
            prime = false;
            break;
        }
    }
    if(prime){
        vec.push_back(n);
    }
}

int main() {
    vec.push_back(2);
    for(int i = 3; i < 1000000; i+=2) {
        isPrime(i);
    }

    int n;
    while(cin >> n && n != 0) {
        vector<int> v;
        int s = 0, sn = n;
        while(n != 1) {
            int check = 1;
            for(int i = 0; i < vec.size(); i++) {
                bool b = binary_search(v.begin(), v.end(), vec[i]);
                if(n % vec[i] == 0 && !b) {
                    s++;
                    check = 0;
                    n/=vec[i];
                    v.push_back(vec[i]);
                    break;
                }
            }
            if(check) break;
        }
        cout << sn << " : " << s << endl;
    }
    return 0;
}
