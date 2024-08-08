#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < sizeof(a[0][0]) - 1; i++) {
        for(int j = 0; j < sizeof(a[0][0]) - 1; j++) {
            cin >> a[i][j];
        }
    }

    int sumPar = 0, actualSumComp = 0;


    for(int i = 0, j = 0; i < sizeof(a[0][0]) - 1; i++, j++) {
        sumPar += a[i][j];
    }
    
    for(int i = 0, j = sizeof(a[0]); i < sizeof(a[0][0]) - 1; i++, j++) {
        actualSumComp += a[i][j];
    }

    if(actualSumComp != sumPar) cout << -1 << endl;
    else {
        actualSumComp = 0;
        for(int i = 0; i < sizeof(a[0][0]) - 1; i++) {
            for(int j = 0; i < sizeof(a[0][0]) - 1; i++) {
                actualSumComp += a[i][j];
            }
            if(actualSumComp != sumPar) {
                cout << -1 << endl;
                break;
            } else actualSumComp = 0;
        }
        for(int i = 0; i < sizeof(a[0][0]) - 1; i++) {
            for(int j = 0; j < sizeof(a[0][0]) - 1; j++) {
                actualSumComp += a[j][i];
            }
            if(actualSumComp != sumPar) {
                cout << -1 << endl;
                break;
            } else actualSumComp = 0;
        }
    }

    return 0;

}
