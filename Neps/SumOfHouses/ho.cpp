#include <iostream>
#include <set>

using namespace std;

set<long long> s;

int main() {
    int n, a, b, x;
    cin >> n;
    while(n--) {
        scanf("%d", &x);
        s.insert(x);
    }

    long long k;
    cin >> k;

    for (std::set<long long int>::iterator it=s.begin(); it!=s.end(); ++it) {
        if(s.count(k - *it) != 0) {
            a = *it;
            b = k - *it;
            break;
        }
    }

    cout << a << " " << b << endl;
    return 0;
}
