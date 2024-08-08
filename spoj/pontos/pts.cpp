#include <iostream>
#include <cfloat>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    double d = FLT_MAX;
    vector<int> v;
    cin >> n;
    int x, y;
    while(n--) {
        cin >> x >> y;
        v.push_back(x);
        v.push_back(y);
    }
    for(int i = 0; i < v.size(); i+=2) {
        for(int j = i + 2; j < v.size(); j+=2) {
            double dist = sqrt(pow((v[j] - v[i]), 2) + pow((v[j + 1] - v[i + 1]), 2));
            if(dist < d) d = dist;
        }
    }
    printf("%.3f\n", d);
}
