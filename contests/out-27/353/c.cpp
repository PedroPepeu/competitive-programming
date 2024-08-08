#include<bits/stdc++.h>
using namespace std;

bool apear[26];

void ini(){
    for(int i = 0; i < 26; i++){
        apear[i] = false;
    }
}

long contLetras(string s){
    long cont = 0;
    for(int i = 0; i < s.size(); i++){
        if(apear[s[i] - 97] == false){
            apear[s[i] - 97] = true;
            cont++;
        }
    }
    return cont;
}

long analiseP(string s){
    int j = s.size() - 1;
    long cont = 0;
    int i = 0;

    if(i == j || j <= 0){
        return 0;
    }

    while(i < j){
        if(s[i] == s[j]){
            cont++;
        }
        else{
            if(s[i] == s[j - 1] && i != (j - 1)){
                cont++;
                j--;
            }
            else if(s[i + 1] == s[j] && (i + 1) != j){
                cont++;
                i++;
            }
            else{
                if(cont != 0){
                    cont = 0;
                }
            }
        }
        i++;
        j--;
    }

    string fH, sHR;
    string sH = s.substr(i, s.size() - 1);
    sHR = sH + "";

    if(s.size() % 2 != 0){
        fH = s.substr(0, j + 1);
    }
    else{
        fH = s.substr(0, j + 1);
    }

    reverse(sHR.begin(), sHR.end());

    if(fH.compare(sH) == 0 || fH.compare(sHR) == 0){
        cont += analiseP(fH);
    }
    else{
        cont += analiseP(sH);
        cont += analiseP(fH);
    }
    return cont;
}

long palid(string s){ 
    long cont = analiseP(s);
    return cont;
}

int main(){
    string s;
    while(getline(cin, s)){
        ini();
        long cont = 0;
        cont += palid(s);
        cont += contLetras(s);
        cout << "The string '" << s << "' contains " << cont << " palindromes.\n";
    }
}
