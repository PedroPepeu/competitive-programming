#include <iostream>

using namespace std;

//int harvest(int arr[][], int x1, int y1, int x2, int y2) {
//    int sum = 0; 
//    for(int i = x1; i < x2; i++) {
//        for(int j = y1; j < y2; j++) {
//            sum += arr[i][j];
//        }
//    }
//    return sum;
//}

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int t, sum = 0;
    cin >> t;
    while(t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1 - 1; i < x2; i++) {
            for(int j = y1 - 1; j < y2; j++) {
                sum += a[i][j];
                a[i][j] = 0;
            }
        }

        //sum += harvest(a, x1, y1, x2, y2);
    }

    cout << sum << endl;
    return 0;
}
