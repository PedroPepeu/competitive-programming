#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, k;
    
    // create an vector and a pointer
    
    cin >> n;
    cin >> k;

    vector<int> points(n, -1);
    vector<int>::iterator it;
    int competidorPoint;

    for(it = points.begin(); it != points.end(); ++it) {
        cin >> competidorPoint;
        *it = competidorPoint;

    }
    
    sort(points.begin(), points.end());
    
    for(it = points.begin(); it != points.end(); ++it) {
        cout << *it << endl;
    }

    int counter = 0;

    for(it = points.begin(); k > 0; ++it) {
        cout << *it << endl;
        if((k - 1) == 0) {
            while(*++it == *it) {
                counter++;
            }
            break;
        }
        counter++;
    }

    cout << counter << endl;

    return 0;
    // sort vector so i can count it easier
    // after i would counter the numbers
    // when it went to the last one it will maintain counting till the number changes

}
