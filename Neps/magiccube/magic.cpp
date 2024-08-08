#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool magic;
    
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += a[i][0];
    }

    int currentSumHor = 0;
    int currentSumVer = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            currentSumHor += a[i][j];
            currentSumVer += a[j][i];
        }
        if(currentSumHor != sum || currentSumVer != sum) magic = false;
    }

    int currentDiagSumDE = 0;
    int currentDiagSumED = 0;

    for(int i = 0, j = 0; i < n; i++, j++) {
        currentDiagSumDE += a[i][j];
        currentDiagSumED += a[j][i];
    }

    if(currentDiagSumDE != sum || currentDiagSumED != sum) magic = false;

    if(magic) cout << sum << endl;
    else cout << -1 << endl;

    return 0;
}
