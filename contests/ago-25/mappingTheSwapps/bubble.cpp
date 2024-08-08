#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x, counter = 1;


    while(cin >> n && n != 0) {

        vector<int> v;
        int swap = 0;

        for(int i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-1; j++) {
                if(v[j] > v[j+1]) {
                    int temp = v[j+1];
                    v[j+1] = v[j];
                    v[j] = temp;
                    swap++;
                }
            }
        }

        printf("There are %d swap maps for input data set %d.\n", swap, counter);
        counter++;
    }
    return 0;
}
