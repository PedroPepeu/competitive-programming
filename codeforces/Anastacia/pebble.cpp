#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    vector<double> a;
    while(n--) {
        double x;
        cin >> x;
        a.push_back(x);
    }

    int days = 0;

    for(int i = 0; i < a.size(); i++) {
        days += ceil(a[i] / k);
    }
    
    days = (days + 1) / 2;

    cout << days << endl;

    return 0;
}
