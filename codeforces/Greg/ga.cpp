#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int64_t> v (n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<vector<int>> op (m, vector<int> (3));
    for(int i = 0; i < m; i++) {
        cin >> op[i][0] >> op[i][1] >> op[i][2];
    }

    vector<int> xy (m, 0);
    int x, y;
    for(int i = 0; i < k; i++) {
        cin >> x >> y;
        xy[x-1]++;
        xy[y]--;
    }

    vector<int> ref (n, 0);
    int opsXY = 0;
    for(int i = 0; i < m; i++) {
        opsXY+=xy[i];
        ref[op[i][0]-1]+=(op[i][2]*opsXY);
        ref[op[i][1]]-=(op[i][2]*opsXY);
    }

    int ops = 0;
    for(int i = 0; i < n; i++) {
        ops+=ref[i];
        if(i+1 == n) printf("%I64d\n", v[i]+ops);
        else printf("%I64d ", v[i]+ops);
    }

    return 0;
}
