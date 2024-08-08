#include <iostream>
#include <utility>
#include <cmath>

using namespace std;

int overLap(pair<int,int> l1, pair<int,int> r1, pair<int,int> l2, pair<int,int> r2) {
    int area1 = abs(l1.first - r1.first) * abs(l1.second - r1.second);
    int area2 = abs(l2.first - r2.first) * abs(l2.second - r2.second);

    int x_dist = min(r1.first, r2.first) - max(l1.first, l2.first);
    int y_dist = (min(r1.second, r2.second) - max(l1.second, l2.second));

    int areaI = 0;
    x_dist > 0 && y_dist > 0 ? areaI = x_dist * y_dist : areaI = -1;

    return areaI;
}

int main() {
    pair<int, int> l1;
    pair<int, int> r1;
    pair<int, int> l2;
    pair<int, int> r2;

    int sq;
    cin >> sq;

    cin >> l1.first >> l1.second;
    cin >> r1.first >> r1.second;
    cin >> l2.first >> l2.second;
    cin >> r2.first >> r2.second;
    sq-=2;
    while(sq--) {
        l1 = l2;
        cin >> l2.first >> l2.second;
        cin >> r2.first >> r2.second;
    }

    cout << overLap(l1, r1, l2, r2) << endl;
}

