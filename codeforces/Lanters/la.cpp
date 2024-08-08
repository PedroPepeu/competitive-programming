#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, s, temp, chckz = 1, chckm = 1;
    double minS;

    cin >> l >> s;

    vector<double> v (l, 0);

    for(int i = 0; i < l; i++) {
        cin >> v[i];
        if(v[i] == 0) chckz = 0;
        if(v[i] == s) chckm = 0;
    }

    if(chckz) v.push_back(0);
    if(chckm) v.push_back(s);

    sort(v.begin(), v.end());

    if(chckz) {
        minS = v[1]-v[0];
    } else {
        minS = (v[1]-v[0])/2;
    }
    
    for(int i = 1; i < v.size()-1; i++) {
        if((v[i+1]-v[i])/2 > minS) minS = (v[i+1]-v[i])/2;
    }
   
    if(chckm) {
        if((v[v.size()-1] - v[v.size()-2]) > minS) minS = (v[v.size()-1] - v[v.size()-2]);
    } else {
        if((v[v.size()-1] - v[v.size()-2])/2 > minS) minS = (v[v.size()-1] - v[v.size()-2])/2;
    }

    printf("%.10f\n", minS);

    return 0;
}
