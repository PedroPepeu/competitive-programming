#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string phone;
    while(cin >> name) {
        phone = name;
        for(string::iterator it = name.begin(), itp = phone.begin(); it != name.end(); ++it, ++itp) {
            if(*it == 1) continue;
            else if(*it == 'A' || *it == 'B' || *it == 'C') *itp = '2';
            else if(*it == 'D' || *it == 'E' || *it == 'F') *itp = '3';
            else if(*it == 'G' || *it == 'H' || *it == 'I') *itp = '4';
            else if(*it == 'J' || *it == 'K' || *it == 'L') *itp = '5';
            else if(*it == 'M' || *it == 'N' || *it == 'O') *itp = '6';
            else if(*it == 'P' || *it == 'Q' || *it == 'R' || *it == 'S') *itp = '7';
            else if(*it == 'T' || *it == 'U' || *it == 'V') *itp = '8';
            else if(*it == 'W' || *it == 'X' || *it == 'Y' || *it == 'Z') *itp = '9';
        }
        cout << phone << endl;
    }
}
