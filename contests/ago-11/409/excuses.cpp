#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, e;
    cin >> x >> e;

    vector<string> v;
    vector<string> w;
    while(x--) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    string ss;
    int csave = 0;
    while(e--) {
        int counter = 0;
        char[] s;
        getline(cin, s);
        string saving = s;
        s = tolower(s);
        char *word = strtok(s, " ");

        while(word != NULL) {
            for(int i = 0; i < v.size(); i++) {
                int check = 1;
                for(string::iterator it = v[i].begin(), itt = token.begin(); it != v[i].end(); it++, itt++) {
                    if(*it != *itt) {
                        check = 0;
                        break;
                    }
                }
                
                if(check) break;
                else counter++;
                token = strtok(NULL, " ");
            }
        }
        if(counter > csave) {
            csave = counter;
            w.clear();
            w.push_back(saving);
        }
    }

    for(int i = 0; i < w.size(); i++) {
        printf("Excuse Set #%d\n", i+1);
    }

    return 0;
}
