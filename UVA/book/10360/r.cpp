#include <iostream>
#include <cmath>

using namespace std;

int inRad(int x1, int y1, int x2, int y2) {
    max(abs(x2-x1), abs(y2-y1)) <= d ? return 1 : return 0;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int d, n, mX=0, mY=0, cX = 1, cY = 1,;
        cin >> d;
        cin >> n;

        int arr[1024][1024];
        for(int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            cin >> arr[x][y];

            // calcular media
            mX = mX+x/cX;
        }
    }
}
