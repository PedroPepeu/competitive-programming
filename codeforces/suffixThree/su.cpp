#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int k;
    string s;
    cin >> k;

    vector<string> v;

    for(int i = 0; i < k; i++) {
        cin >> s;
        string::iterator it = s.end() - 1; // last letter
        
        if(*(it-1) == 'p' && *it == 'o') {
            v.push_back("FILIPINO");
            continue;
        } else if (*(it-3) == 'd' && *(it-2) == 'e' && *(it-1) == 's' && *it == 'u') {
            v.push_back("JAPANESE");
            continue;
        } else if (*(it-3) == 'm' && *(it-2) == 'a' && *(it-1) == 's' && *it == 'u') {
            v.push_back("JAPANESE");
            continue;
        } else if ( *(it-4) == 'm' && 
                    *(it-3) == 'n' && 
                    *(it-2) == 'i' && 
                    *(it-1) == 'd' && 
                    *it == 'a')  {
            v.push_back("KOREAN");
            continue;
        }
    }

    for(int i = 0; i < k; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
