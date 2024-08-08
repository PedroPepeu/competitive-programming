#include <iostream>
#include <string>

using namespace std;
string s, s1, s2;
int inSize, outSize;

void reading(string in, string out) {
    string::iterator it = out.begin();
    int i = 0, j = 0;
    for(auto &x : in) {
        if(x == *it) {
            it++;
            i++;
            j++;
            continue;
        } else {
            if(x+1 == *it) { // deleting
                char ch = '\000' + s1[i];
                string ss(1, ch);

                if(i > 8) s+="D"+ss+to_string(i+1);
                else s+="D"+ss+to_string(0)+to_string(i+1);
                inSize--;
                continue;
            } else {
                if(inSize < outSize) { // including
                    char ch = '\000' + s2[j];
                    string ss(1, ch);
                
                    if(i > 8) s+="I"+ss+to_string(i+1);
                    else s+="I"+ss+to_string(0)+to_string(i+1);
                    inSize++;
                    i++;
                    j++;
                    continue;
                } else { // changing
                    char ch = '\000' + s2[j];
                    string ss(1, ch);

                    if(i > 8) s+="C"+ss+to_string(i+1);
                    else s+="C"+ss+to_string(0)+to_string(i+1);
                    i++; 
                    continue;
                }
            }
        }
    }
}

int main() {
    while(cin >> s1 && s1 != "#") {
        s = "";
        cin >> s2;
        
        inSize = s1.size();
        outSize = s2.size();

        reading(s1, s2);

        s+="E";
        cout << s << endl;
    }
    return 0;
}
