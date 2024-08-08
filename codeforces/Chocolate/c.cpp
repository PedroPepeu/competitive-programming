#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    
    cin >> n;

    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int counterA = 0, counterB = 0, al = 0, bo = 0;
    int i = 0, j = n-1;
    while(i <= j) {
        if(a[i] != -1) counterA += a[i];
        a[i] = -1;
        al++;
        if(i == j) break;
        if(a[j] != -1) counterB += a[j];
        a[j] = -1;
        bo++;

        while(counterA < counterB && i < j && (al + bo) < n) {
            i++;
            if(a[i] != -1) counterA += a[i];
            a[i] = -1;
            al++;
        }

        while(counterB < counterA && j-1 > i && (al + bo) < n) {
            if(counterB == counterA && j-2 == i) break;
            j--;
            if(a[j] != -1) counterB += a[j];
            a[j] = -1;
            bo++;
        }

        i++;
        j--;
    }
    
    cout << al << " " << bo << endl;
}
