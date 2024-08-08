#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v;

    while(n--) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int i = 0, j = v.size() - 1;
    int Sere = 0, Dima = 0;

    while(i <= j) {
        if(v[i] > v[j]) {
            Sere += v[i];
            i++;
        } else {
            Sere += v[j];
            j--;
        }

        if(i > j) break;

         if(v[i] > v[j]) {
            Dima += v[i];
            i++;
        } else {
            Dima += v[j];
            j--;
        }
    }

    cout << Sere << " " << Dima << endl;

    return 0;
}
