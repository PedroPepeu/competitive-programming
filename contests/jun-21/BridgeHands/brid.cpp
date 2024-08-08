#include <iostream>
#include <vector>

using namespace std;

int pres(char c, char pc) {
    if(c == '2') return 1;
    if(c == '3') {
        if(pc == '2') return 0;
        else return 1;
    }
    if(c == '4') {
        if(pc == '2') return 0;
        if(pc == '3') return 0;
        else return 1;
    }
}

vector<char> reordOne(vector<char> v) {
    for(int i = 2; i < v.size() - 1; i+=2) {
        char cur1 = v[i];
        char cur2 = v[i + 1];
        if(cur1 == 'C') {
            while
        } else if(cur1 == 'D') {

        } else if(cur1 == 'S') {

        } else if(cur1 == 'H') {

        }
    }
}

vector<char> reordTwo(vector<char> v) {
    for(int i = 1; i < v.size() - 1; i+=2) {
        char cur1 = v[i - 1];
        char cur2 = v[i];
        while()
    }
}

int main() {
    vector<char> n;
    vector<char> e;
    vector<char> s;
    vector<char> w;

    char place;
    cin >> place;

    char pl;
    while(cin >> pl && pl != '#') {
        char pl1;
        cin >> pl1;
        if(place == 'W') {
            n.push_back(pl);
            n.push_back(pl1);
            place = 'N';
        } else if(place == 'N') {
            e.push_back(pl);
            e.push_back(pl1);
            place = 'E';
        } else if(place == 'E') {
            s.push_back(pl);
            s.push_back(pl1);
            place = 'W';
        } else {
            w.push_back(pl);
            w.push_back(pl1);
            place = 'N';
        }
    }

    n = reordOne(n);
    e = reordOne(e);
    s = reordOne(s);
    w = reordOne(w);
    
    n = reordTwo(n);
    e = reordTwo(e);
    s = reordTwo(s);
    w = reordTwo(w);

    for(int i = 0; i < 52; i++) {
        if(i == 0) cout << "S: ";
        if(i == 12) cout << endl << "W: ";
        if(i == 25) cout << endl << "N:"
    }

    return 0;

}
