#include <iostream>
#include <vector>

using namespace std;


int main() {
  
    int n, turmasnum = 0;

    while(cin >> n && n != 0) {

        turmasnum++;

        int c, nt, mNota = -1;
        vector<int> cod;
        vector<int> nts;
        vector<int> ints;
        while(n--) {
            cin >> c >> nt;
            cod.push_back(c);
            nts.push_back(nt);
            
            if(nt > mNota) mNota = nt;
        }
        for(int i = 0; i < nts.size(); i++) {
            if(nts[i] == mNota) ints.push_back(i);
        }
        cout << "Turma " << turmasnum << endl;

        for(int i = 0; i < ints.size(); i++) {
            if(i + 1 == ints.size()) {
                cout << cod[ints[i]] << endl;
                break;
            }
            cout << cod[ints[i]] << " ";
        }
        
    }

    return 0;
}
