#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    char v[] = {'a', 'e', 'i', 'o', 'u'};
    vector<char> c;

    string s;
    cin >> s;

    for(string::iterator it = s.begin(); it != s.end(); it++) {
        for(int i = 0; i < 5; i++) {
            if(*it == v[i]) {
                c.push_back(*it);
                break;
            } 
        }
    }

    int check = 1;

    for(int i = 0, j = c.size() - 1; i < j; i++, j--) {
        if(c[i] != c[j]) {
            check = 0;
            break;
        }
    }

    if(check) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}
