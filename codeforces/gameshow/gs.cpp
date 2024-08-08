#include <bits/stdc++.h>

using namespace std;

int main() {
    int boxes, sbecs = 100, values, i = 0, previousSum, sum = 0;
    cin >> boxes; 
    int valuesArr[boxes];
    while(boxes--) {
        cin >> values;
        valuesArr[i] = values;
        i++;
        sum += values;
    }

    
    
    cout << valuesArr[2] << endl;
    

}
