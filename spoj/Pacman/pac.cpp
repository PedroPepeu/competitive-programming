#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int l = n, food = 0, high = 0;
    string s;
    while(l--) {
        cin >> s;
        for(string::iterator it = s.begin(); it != s.end(); it++) {
            if(*it == 'o') food++;
            if(*it == 'A') {
                if(food > high) high = food;
                food = 0;
            }
        }
        
        if(l <= 0) {
            if(food > high) high = food;
            break;
        }
        cin >> s;

        for(string::iterator it = s.end() - 1; it != s.begin() - 1; it--) {
            if(*it == 'o') food++;
            if(*it == 'A') {
                if(food > high) high = food;
                food = 0;
            }
        }

        l--;
        if(food > high) high = food;
    }

    cout << high << endl;
    return 0;
}
