#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int l, s;
    double al;
    double md = INT_MIN;
    vector<double> v;

    cin >> l >> s;

    for(int i = 0; i < l; i++) {
        cin >> al;
        v.push_back(al);
    }

    sort(v.begin(), v.end());
    
    if(v[0] > md) md = v[0];
    if(s - v[l-1] > md) md = s - v[l-1];

    for(int i = 1; i < l-1; i++) {
        double cur = (v[i+1] - v[i])/2;
        if(cur > md) md = cur;
    }

    if(l == 2) {
        double cur = (v[1] - v[0])/2;
        if(cur > md) md = cur;
        if(v[0] > md) md = v[0];
        if(s-v[l-1] > md) md = s - v[l-1];
    }

    printf("%.10lf\n", md);
    return 0;
}
