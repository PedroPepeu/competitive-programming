#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {

    int n, m;

    cin >> n;

    char l;
    int arr[32][2];
    memset(arr, 0, sizeof(arr));

    int totalP = 0;

    while(n--) {
        cin >> m >> l;
        if(l == 'D') {
            if(arr[m - 30][1] >= 1) {
                totalP++;
                arr[m - 30][1]--;
            } else {
                arr[m - 30][0]++;    
            }
        } else if(l == 'E') {
            if(arr[m - 30][0] >= 1) {
                totalP++;
                arr[m - 30][0]--;
            } else {
                arr[m - 30][1]++;    
            }
        }
    }
    cout << totalP << endl;
}
