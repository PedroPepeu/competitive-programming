#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, numTurm = 1;
    
    while(cin >> n && n != 0) {
        if(numTurm > 1) cout << endl;
        int cod, grd;
        vector<int> v;
        vector<int> cods;
        cods.erase(cods.begin(), cods.end());
        v.erase(v.begin(), v.end());
        v.push_back(-1);
        while(n--) {
            cin >> cod >> grd;
            if(grd > v[0]) {
                v.erase(v.begin(), v.end());
                cods.erase(cods.begin(), cods.end());
                v.push_back(grd);
                cods.push_back(cod);
            }
            if(grd == v[0]) {
                v.push_back(grd);
                cods.push_back(cod);
            }
        }
        cout << "Turma " << numTurm << endl;
        for(int i = 0; i < cods.size() - 1; i++) {
            if(i + 1 == cods.size() - 1) {
                cout << cods[i] << endl;
                break;
            }
            cout << cods[i] << " ";
        }
        numTurm++;
    }

    return 0;
}
